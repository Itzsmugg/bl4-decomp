// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144c2bc50 FUN_144c2bc50 body=266 status=ok
// SIG undefined FUN_144c2bc50(void)

void FUN_144c2bc50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
        *(undefined ***)(puVar6 + -9) =
             hkaiReferencedArray<hkaiStreamingSet_const*___ptr64>::vftable;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar6);
        puVar4 = *(undefined8 **)((param_2 - param_1) + -0xc + (longlong)puVar6);
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
      puVar6 = puVar6 + 10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144c2bd60 FUN_144c2bd60 body=88 status=ok
// SIG undefined FUN_144c2bd60(void)

void FUN_144c2bd60(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c2bdc0 FUN_144c2bdc0 body=185 status=ok
// SIG undefined FUN_144c2bdc0(void)

void FUN_144c2bdc0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
          FUN_144c2d340(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 8);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c2be80 FUN_144c2be80 body=123 status=ok
// SIG undefined FUN_144c2be80(void)

void FUN_144c2be80(longlong *param_1)

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
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c2bf00 FUN_144c2bf00 body=142 status=ok
// SIG undefined FUN_144c2bf00(void)

undefined8 * FUN_144c2bf00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshClearanceCacheManager::vftable;
  param_1[3] = param_1 + 5;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000020;
  *(undefined4 *)(param_1 + 4) = 0x20;
  if (param_1 + 5 != param_1 + 0x65) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x34);
    do {
      if ((undefined8 *)((longlong)puVar2 + -0xc) != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)puVar2 + -0xc) = 0;
        *(undefined4 *)((longlong)puVar2 + -4) = 0;
        *puVar2 = 0xffffffff80000000;
        *(undefined4 *)(puVar2 + 1) = 0;
      }
      puVar1 = (undefined8 *)((longlong)puVar2 + 0xc);
      puVar2 = puVar2 + 3;
    } while (puVar1 != param_1 + 0x65);
    *(undefined4 *)(param_1 + 0x65) = 0;
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  return param_1;
}



// FUNCTION 144c2bf90 FUN_144c2bf90 body=410 status=ok
// SIG undefined FUN_144c2bf90(void)

undefined8 * FUN_144c2bf90(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  
  puVar4 = (uint *)param_1[3];
  if (puVar4 + (longlong)*(int *)(param_1 + 4) * 6 != puVar4) {
    puVar6 = puVar4 + (longlong)*(int *)(param_1 + 4) * 6 + 3;
    do {
      puVar1 = puVar6 + -6;
      puVar2 = puVar6 + -9;
      uVar5 = 0;
      uVar8 = 0;
      if (0 < (int)puVar6[-7]) {
        do {
          pfVar3 = (float *)(uVar5 + 8 + *(longlong *)puVar2);
          if ((0.0 < *pfVar3 || *pfVar3 == 0.0) && (*(longlong *)(uVar5 + *(longlong *)puVar2) != 0)
             ) {
            FUN_144b3f230();
          }
          uVar7 = (int)uVar8 + 1;
          uVar5 = uVar5 + 0x18;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)puVar6[-7]);
      }
      puVar6[-7] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)puVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)puVar2,
                   (ulonglong)(*puVar1 & 0x7fffffff) * 0x18);
      }
      puVar2[0] = 0;
      puVar2[1] = 0;
      *puVar1 = 0x80000000;
      puVar6 = puVar1;
    } while (puVar2 != puVar4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x18);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 144c2c130 FUN_144c2c130 body=159 status=ok
// SIG undefined FUN_144c2c130(void)

void FUN_144c2c130(ulonglong *param_1,undefined8 param_2)

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
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2);
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



// FUNCTION 144c2c1d0 FUN_144c2c1d0 body=165 status=ok
// SIG undefined FUN_144c2c1d0(void)

void FUN_144c2c1d0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 144c2c280 FUN_144c2c280 body=409 status=ok
// SIG undefined FUN_144c2c280(void)

void FUN_144c2c280(longlong param_1)

{
  FUN_144bfd1a0(param_1 + 0x120);
  FUN_144bfd1a0(param_1 + 0x118);
  FUN_144bfd1a0(param_1 + 0x110);
  FUN_144bfd1a0(param_1 + 0x108);
  FUN_144bfd1a0(param_1 + 0x100);
  FUN_144bfd1a0(param_1 + 0xf8);
  FUN_144bfd1a0(param_1 + 0xf0);
  FUN_144bfd1a0(param_1 + 0xe8);
  FUN_144bfd1a0(param_1 + 0xe0);
  FUN_144bfd1a0(param_1 + 0xd8);
  FUN_144bfd1a0(param_1 + 0xd0);
  FUN_144bfd1a0(param_1 + 200);
  FUN_144bfd1a0(param_1 + 0xc0);
  FUN_144bfd1a0(param_1 + 0xb8);
  FUN_144bfd1a0(param_1 + 0xb0);
  FUN_144bfd1a0(param_1 + 0xa8);
  FUN_144bfd1a0(param_1 + 0xa0);
  FUN_144bfd1a0(param_1 + 0x98);
  FUN_144bfd1a0(param_1 + 0x90);
  FUN_144bfd1a0(param_1 + 0x88);
  FUN_144bfd1a0(param_1 + 0x80);
  FUN_144bfd1a0(param_1 + 0x78);
  FUN_144bfd1a0(param_1 + 0x70);
  FUN_144bfd1a0(param_1 + 0x68);
  FUN_144bfd1a0(param_1 + 0x60);
  FUN_144bfd1a0(param_1 + 0x58);
  FUN_144bfd1a0(param_1 + 0x50);
  FUN_144bfd1a0(param_1 + 0x48);
  FUN_144bfd1a0(param_1 + 0x40);
  FUN_144bfd1a0(param_1 + 0x38);
  FUN_144bfd1a0(param_1 + 0x30);
  FUN_144bfd1a0(param_1 + 0x28);
  FUN_144bfd1a0(param_1 + 0x20);
  FUN_144bfd1a0(param_1 + 0x18);
  FUN_144bfd1a0(param_1 + 0x10);
  FUN_144bfd1a0(param_1 + 8);
  FUN_144bfd1a0(param_1);
  return;
}



// FUNCTION 144c2c420 FUN_144c2c420 body=71 status=ok
// SIG undefined FUN_144c2c420(void)

undefined8 * FUN_144c2c420(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144c2c470 FUN_144c2c470 body=660 status=ok
// SIG undefined FUN_144c2c470(void)

void FUN_144c2c470(longlong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  undefined1 local_48 [4];
  int local_44;
  longlong local_40;
  undefined4 local_38;
  uint local_34;
  undefined1 local_28 [8];
  longlong local_20;
  int local_18;
  uint local_14;
  
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x4e0)) {
    FUN_144bda160(local_48);
    iVar1 = *(int *)(param_1 + 0x4e0);
    local_44 = iVar1;
    if ((int)(local_14 & 0x7fffffff) < iVar1) {
      FUN_147e67f80(&local_20,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    if (local_18 < iVar1) {
      uVar7 = iVar1 - local_18;
      uVar8 = (ulonglong)uVar7;
      puVar2 = (undefined1 *)(local_18 + local_20);
      local_18 = iVar1;
      if (0 < (int)uVar7) {
        do {
          if (puVar2 != (undefined1 *)0x0) {
            *puVar2 = 2;
          }
          uVar8 = uVar8 - 1;
          puVar2 = puVar2 + 1;
        } while (uVar8 != 0);
      }
    }
    else if (iVar1 < local_18) {
      local_18 = iVar1;
    }
    local_res8 = 0x70;
    lVar3 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar3,"hkAsyncThreadPool");
    }
    uVar4 = uVar5;
    if (lVar3 != 0) {
      uVar4 = FUN_144bdb2e0(lVar3,local_48);
    }
    lVar3 = *(longlong *)(param_1 + 0x4d8);
    *(undefined8 *)(param_1 + 0x4d8) = uVar4;
    if (lVar3 != 0) {
      FUN_144b3f230();
    }
    local_18 = 0;
    if ((-1 < (int)local_14) && (local_20 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_20,local_14 & 0x7fffffff);
    }
    local_20 = 0;
    local_14 = 0x80000000;
    FUN_144b49dd0(local_28);
    local_38 = 0;
    if ((-1 < (int)local_34) && (local_40 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_40,(ulonglong)(local_34 & 0x7fffffff) << 2);
    }
  }
  local_res8 = 0x68;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkDynamicBlockStreamAllocator");
  }
  uVar4 = uVar5;
  if (lVar3 != 0) {
    uVar4 = FUN_144fbd430(lVar3,0,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = uVar4;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  local_res8 = 0x60;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkThreadLocalBlockStreamAllocator");
  }
  if (lVar3 != 0) {
    uVar5 = FUN_144fad4f0(lVar3,*(undefined8 *)(param_1 + 0x4c8));
  }
  *(undefined8 *)(param_1 + 0x4d0) = uVar5;
  local_res8 = 0x100;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"hkTypedBlockStream");
  }
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x428) = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x4d0);
    puVar6[2] = puVar6 + 6;
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x80000018;
    FUN_144fad160(puVar6,uVar5,0);
    *(undefined8 **)(param_1 + 0x428) = puVar6;
  }
  return;
}



// FUNCTION 144c2c710 FUN_144c2c710 body=1090 status=ok
// SIG undefined FUN_144c2c710(void)

void FUN_144c2c710(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 local_28 [8];
  ushort *local_20;
  int local_14;
  
  *param_1 = hkaiWorld::vftable;
  cVar6 = FUN_144c6daa0();
  if (cVar6 != '\0') {
    FUN_144c6d7d0(param_1);
  }
  FUN_144c2c130(param_1 + 3,param_1);
  lVar9 = param_1[0x9a];
  if (lVar9 != 0) {
    FUN_144fad570(lVar9);
    (*DAT_14c787678)(0,lVar9,0);
    param_1[0x9a] = 0;
  }
  if (param_1[0x85] != 0) {
    if (0 < *(int *)(param_1[0x85] + 8)) {
      FUN_144fad8e0(local_28);
      puVar7 = local_20;
      while (puVar7 != (ushort *)0x0) {
        FUN_144fadae0(puVar7);
        local_14 = local_14 + -1;
        if (local_14 < 1) {
          puVar7 = (ushort *)FUN_144fad910(local_28,CONCAT71((uint7)(byte)(*local_20 >> 8),1));
        }
        else {
          puVar7 = (ushort *)((longlong)local_20 + (ulonglong)*local_20);
          local_20 = puVar7;
        }
      }
      FUN_144fad1a0(param_1[0x85],0);
    }
    plVar3 = (longlong *)param_1[0x85];
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
  }
  lVar9 = param_1[0x99];
  param_1[0x99] = 0;
  if (lVar9 != 0) {
    FUN_144b3f230();
  }
  FUN_144b49dd0(param_1 + 0xa2);
  puVar4 = (undefined8 *)param_1[0xa0];
  if (puVar4 + (longlong)*(int *)(param_1 + 0xa1) * 6 != puVar4) {
    puVar8 = puVar4 + (longlong)*(int *)(param_1 + 0xa1) * 6 + 5;
    do {
      puVar1 = puVar8 + -6;
      if (puVar8[-6] != 0) {
        LOCK();
        plVar3 = (longlong *)(puVar8[-6] + 0x60);
        lVar9 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar9 == 1) {
          lVar9 = puVar8[-8];
          if (lVar9 == 0) {
            lVar9 = puVar8[-10];
          }
          FUN_144bea6d0(*puVar1,lVar9);
        }
      }
      puVar2 = puVar8 + -0xb;
      *puVar1 = 0;
      puVar8 = puVar1;
    } while (puVar2 != puVar4);
  }
  *(undefined4 *)(param_1 + 0xa1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x50c)) && (param_1[0xa0] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xa0],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x50c) & 0x7fffffff) * 0x30);
  }
  param_1[0xa0] = 0;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x80000000;
  if (param_1[0x9f] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x9d] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x9b] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x99] != 0) {
    FUN_144b3f230();
  }
  FUN_144bfd1a0(param_1 + 0x96);
  FUN_144bfd1a0(param_1 + 0x95);
  FUN_144bfd1a0(param_1 + 0x94);
  FUN_144bfd1a0(param_1 + 0x93);
  FUN_144bfd1a0(param_1 + 0x92);
  FUN_144bfd1a0(param_1 + 0x91);
  FUN_144bfd1a0(param_1 + 0x90);
  if (param_1[0x8f] != 0) {
    FUN_144b3f230();
  }
  FUN_144bfd1a0(param_1 + 0x8e);
  FUN_144bfd1a0(param_1 + 0x8d);
  FUN_144bfd1a0(param_1 + 0x8c);
  FUN_144bfd1a0(param_1 + 0x8b);
  FUN_144bfd1a0(param_1 + 0x8a);
  FUN_144bfd1a0(param_1 + 0x89);
  FUN_144bfd1a0(param_1 + 0x88);
  if (param_1[0x87] != 0) {
    FUN_144b3f230();
  }
  FUN_144b4a050(param_1 + 0x6e);
  FUN_144b409a0(param_1 + 0x4a);
  if (param_1[0x46] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x45] != 0) {
    FUN_144b3f230();
  }
  lVar5 = param_1[0x42];
  lVar9 = lVar5 + (longlong)*(int *)(param_1 + 0x43) * 8;
  while (lVar9 != lVar5) {
    plVar3 = (longlong *)(lVar9 + -8);
    lVar9 = lVar9 + -8;
    if (*plVar3 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x21c)) && (param_1[0x42] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x42],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x21c) & 0x7fffffff) << 3);
  }
  param_1[0x42] = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  if (param_1[0x30] != 0) {
    FUN_144b3f230();
  }
  FUN_144c2be80(param_1 + 0x2b);
  if (param_1[0x2a] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x29] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x28] != 0) {
    FUN_144b3f230();
  }
  FUN_144c2c280(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144c2cb60 FUN_144c2cb60 body=320 status=ok
// SIG undefined FUN_144c2cb60(void)

undefined4 *
FUN_144c2cb60(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38 [2];
  longlong local_28;
  longlong local_20;
  
  local_res8 = 0x28;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"hkaiReferencedArray");
  }
  lVar3 = 0;
  if (lVar2 != 0) {
    local_48 = *param_4;
    uStack_44 = param_4[1];
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
    lVar3 = FUN_144c2d290(lVar2,&local_48);
  }
  local_38[0] = 0x5000020;
  local_28 = param_3;
  local_20 = lVar3;
  FUN_144c2c1d0(param_1 + 0x28,param_1,local_38);
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x178));
  FUN_144ca2b70(*(undefined8 *)(param_1 + 0x140),param_2,&local_res8,1);
  FUN_144c3f6c0(param_3);
  uVar1 = *param_2;
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar2 = *(longlong *)(param_3 + 0x20);
  }
  else {
    lVar2 = FUN_147e4bb26(param_3 + 0x20);
  }
  *(undefined4 *)(lVar2 + 0x17c) = uVar1;
  FUN_144c2d170(param_1,local_38);
  local_res8 = CONCAT44(local_res8._4_4_,*param_2);
  FUN_144ca4cc0(*(undefined8 *)(param_1 + 0x140),&local_res8,param_3 + 0x60);
  if (lVar3 != 0) {
    FUN_144b3f230(lVar3);
  }
  return param_2;
}



// FUNCTION 144c2cca0 FUN_144c2cca0 body=80 status=ok
// SIG undefined FUN_144c2cca0(void)

void FUN_144c2cca0(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined1 local_14;
  
  local_24 = 1;
  local_28 = 0x5000020;
  local_18 = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x17c);
  local_14 = param_3;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_28);
  FUN_144c2d170(param_1,&local_28);
  return;
}



// FUNCTION 144c2ccf0 FUN_144c2ccf0 body=395 status=ok
// SIG undefined FUN_144c2ccf0(void)

undefined4 *
FUN_144c2ccf0(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  longlong local_40;
  
  local_res18 = 0x28;
  lVar3 = (*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkaiReferencedArray");
  }
  lVar4 = 0;
  if (lVar3 != 0) {
    local_68 = *param_4;
    uStack_64 = param_4[1];
    uStack_60 = param_4[2];
    uStack_5c = param_4[3];
    lVar4 = FUN_144c2d290(lVar3,&local_68);
  }
  local_54 = 2;
  local_58 = 0x5000020;
  local_48 = param_3;
  local_40 = lVar4;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_58);
  FUN_144c2d170(param_1,&local_58);
  local_res18._0_4_ = *(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x5c);
  FUN_144ca2b70(*(undefined8 *)(param_1 + 0x140),local_res8,&local_res18,4);
  local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x60));
  local_78[0] = *(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x6c);
  FUN_144fa9d90(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xf0),local_res10,local_78,
                &local_res18);
  FUN_144c371c0(param_3);
  uVar1 = local_res8[0];
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar3 = *(longlong *)(param_3 + 0x20);
  }
  else {
    lVar3 = FUN_147e4bc84(param_3 + 0x20);
  }
  uVar2 = local_res10[0];
  *(undefined4 *)(lVar3 + 100) = uVar1;
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar3 = *(longlong *)(param_3 + 0x20);
  }
  else {
    lVar3 = FUN_147e4bc84(param_3 + 0x20);
  }
  *(undefined4 *)(lVar3 + 0x68) = uVar2;
  local_res18 = CONCAT44(local_res18._4_4_,local_res8[0]);
  FUN_144ca4b80(*(undefined8 *)(param_1 + 0x140),&local_res18,param_3 + 0x40);
  *param_2 = local_res8[0];
  param_2[1] = local_res10[0];
  if (lVar4 != 0) {
    FUN_144b3f230(lVar4);
  }
  return param_2;
}



// FUNCTION 144c2ce80 FUN_144c2ce80 body=327 status=ok
// SIG undefined FUN_144c2ce80(void)

undefined4 *
FUN_144c2ce80(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_28;
  longlong local_20;
  
  local_res8 = 0x28;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"hkaiReferencedArray");
  }
  lVar3 = 0;
  if (lVar2 != 0) {
    local_48 = *param_4;
    uStack_44 = param_4[1];
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
    lVar3 = FUN_144c2d290(lVar2,&local_48);
  }
  local_34 = 4;
  local_38 = 0x5000020;
  local_28 = param_3;
  local_20 = lVar3;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_38);
  FUN_144c2d170(param_1,&local_38);
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x90));
  FUN_144ca2b70(*(undefined8 *)(param_1 + 0x140),param_2,&local_res8,2);
  FUN_144c4a0d0(param_3);
  uVar1 = *param_2;
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar2 = *(longlong *)(param_3 + 0x20);
  }
  else {
    lVar2 = FUN_147e4bde2(param_3 + 0x20);
  }
  *(undefined4 *)(lVar2 + 0x94) = uVar1;
  local_res8 = CONCAT44(local_res8._4_4_,*param_2);
  FUN_144ca4e10(*(undefined8 *)(param_1 + 0x140),&local_res8,param_3 + 0x40);
  if (lVar3 != 0) {
    FUN_144b3f230(lVar3);
  }
  return param_2;
}



// FUNCTION 144c2cfd0 FUN_144c2cfd0 body=75 status=ok
// SIG undefined FUN_144c2cfd0(void)

void FUN_144c2cfd0(longlong param_1,longlong param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  
  local_24 = 5;
  local_28 = 0x5000020;
  local_18 = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x94);
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_28);
  FUN_144c2d170(param_1,&local_28);
  return;
}



// FUNCTION 144c2d020 FUN_144c2d020 body=37 status=ok
// SIG undefined FUN_144c2d020(void)

undefined8
FUN_144c2d020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  FUN_144ca8610(param_2,param_1,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 144c2d050 FUN_144c2d050 body=29 status=ok
// SIG undefined FUN_144c2d050(void)

undefined8 FUN_144c2d050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144ca8990(param_2,param_3);
  return param_2;
}



// FUNCTION 144c2d070 FUN_144c2d070 body=29 status=ok
// SIG undefined FUN_144c2d070(void)

undefined8 FUN_144c2d070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144ca8b40(param_2,param_3);
  return param_2;
}



// FUNCTION 144c2d090 FUN_144c2d090 body=29 status=ok
// SIG undefined FUN_144c2d090(void)

undefined8 FUN_144c2d090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144ca8d60(param_2,param_3);
  return param_2;
}



// FUNCTION 144c2d0b0 FUN_144c2d0b0 body=185 status=ok
// SIG undefined FUN_144c2d0b0(void)

longlong FUN_144c2d0b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x428);
  if (0 < *(int *)(lVar1 + 8)) {
    local_res8 = 0x100;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"hkTypedBlockStream");
    }
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(param_1 + 0x4d0);
      puVar3[2] = puVar3 + 6;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = 0x80000018;
      FUN_144fad160(puVar3,uVar2,0);
    }
    *(undefined8 **)(param_1 + 0x428) = puVar3;
    *(undefined1 *)(param_1 + 0x430) = 0;
    return lVar1;
  }
  return 0;
}



// FUNCTION 144c2d170 FUN_144c2d170 body=188 status=ok
// SIG undefined FUN_144c2d170(void)

void FUN_144c2d170(longlong param_1,ushort *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong local_38 [2];
  longlong local_28;
  int local_20;
  int local_1c;
  
  local_38[0] = 0;
  FUN_144fad7c0(local_38,*(undefined8 *)(param_1 + 0x4d0),*(undefined8 *)(param_1 + 0x428));
  FUN_144fad980(param_2);
  uVar2 = *param_2;
  if ((int)((uint)uVar2 + local_20) < 0xfe1) {
    lVar6 = local_28 + 0x20 + (longlong)local_20;
  }
  else {
    lVar6 = FUN_144fad870(local_38);
  }
  uVar7 = (uint)(uVar2 >> 4);
  lVar6 = lVar6 - (longlong)param_2;
  do {
    uVar3 = *(undefined4 *)(param_2 + 2);
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 6);
    uVar7 = uVar7 - 1;
    puVar1 = (undefined4 *)(lVar6 + (longlong)param_2);
    *puVar1 = *(undefined4 *)param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    param_2 = param_2 + 8;
  } while (0 < (int)uVar7);
  local_20 = local_20 + (uint)uVar2;
  local_1c = local_1c + 1;
  FUN_144fad7f0(local_38);
  *(undefined1 *)(param_1 + 0x430) = 1;
  if (local_38[0] != 0) {
    FUN_144fad7f0(local_38);
  }
  return;
}



// FUNCTION 144c2d230 FUN_144c2d230 body=87 status=ok
// SIG undefined FUN_144c2d230(void)

undefined8 FUN_144c2d230(undefined8 param_1,ulonglong param_2)

{
  FUN_144c2c710();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x520);
  }
  return param_1;
}



// FUNCTION 144c2d290 FUN_144c2d290 body=175 status=ok
// SIG undefined FUN_144c2d290(void)

undefined8 * FUN_144c2d290(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  
  puVar4 = (undefined8 *)*param_2;
  lVar1 = param_2[1];
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkaiReferencedArray<hkaiStreamingSet_const*___ptr64>::vftable;
  uVar6 = lVar1 - (longlong)puVar4 >> 3;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  iVar5 = (int)uVar6;
  if (0 < iVar5) {
    uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)iVar5 << 3);
    param_1[3] = uVar2;
    *(int *)(param_1 + 4) = iVar5;
    *(int *)((longlong)param_1 + 0x24) = iVar5;
    uVar6 = uVar6 & 0xffffffff;
    puVar3 = (undefined8 *)param_1[3];
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar6 = uVar6 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 != 0);
  }
  return param_1;
}



// FUNCTION 144c2d340 FUN_144c2d340 body=159 status=ok
// SIG undefined FUN_144c2d340(void)

void FUN_144c2d340(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c2d3e0 FUN_144c2d3e0 body=2313 status=ok
// SIG undefined FUN_144c2d3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c2d3e0(longlong *param_1,longlong *param_2)

{
  float fVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  uint uVar32;
  uint uVar35;
  uint uVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar37;
  uint uVar39;
  uint uVar40;
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint local_res18 [2];
  uint local_res20 [2];
  undefined8 *puVar44;
  undefined4 uVar45;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  uint local_1d0;
  uint local_1cc;
  longlong local_1c8;
  uint local_1c0;
  uint local_1bc;
  longlong *local_1b8;
  char *pcStack_1b0;
  undefined *local_1a8;
  undefined *puStack_1a0;
  uint local_198 [2];
  uint *local_190;
  uint *local_188;
  uint *local_180;
  uint *local_178;
  int local_170;
  int local_16c [9];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  longlong local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  
  lVar18 = *param_1;
  lVar19 = param_1[1];
  auVar34 = *(undefined1 (*) [16])(lVar18 + 0x80);
  auVar38 = *(undefined1 (*) [16])(lVar18 + 0x90);
  auVar42 = *(undefined1 (*) [16])(lVar19 + 0x80);
  bVar2 = *(byte *)(param_1 + 6);
  auVar43 = *(undefined1 (*) [16])(lVar19 + 0x90);
  if (bVar2 != 0) {
    uVar32 = auVar34._0_4_;
    uVar35 = auVar34._4_4_;
    uVar36 = auVar34._8_4_;
    uVar26 = (uint)bVar2;
    uVar21 = -(uint)(0x16a8300 << uVar26 < 0);
    uVar23 = -(uint)(0x502ab000 << uVar26 < 0);
    uVar25 = -(uint)(0xa2a8c00 << uVar26 < 0);
    uVar28 = -(uint)(0xa154c00 << uVar26 < 0);
    uVar29 = -(uint)(0x1554300 << uVar26 < 0);
    uVar30 = -(uint)(0x50157000 << uVar26 < 0);
    uVar37 = auVar38._0_4_;
    uVar39 = auVar38._4_4_;
    uVar40 = auVar38._8_4_;
    uVar8 = (ulonglong)uVar26;
    uVar27 = (uint)bVar2;
    uVar22 = -(uint)(0x16a8300 << uVar26 < 0);
    uVar24 = -(uint)(0x502ab000 << uVar26 < 0);
    uVar26 = -(uint)(0xa2a8c00 << uVar26 < 0);
    uVar31 = CONCAT44((0xb9e306U >> uVar8) << 0x1f ^
                      (uVar32 & uVar29 | ~uVar29 & (uVar36 & uVar23 | ~uVar23 & uVar35)),
                      (0xae71e0U >> uVar8) << 0x1f ^
                      (uVar36 & uVar28 | ~uVar28 & (uVar35 & uVar21 | ~uVar21 & uVar32)));
    uVar28 = (0xeb903cU >> uVar8) << 0x1f ^
             (uVar35 & uVar30 | ~uVar30 & (uVar32 & uVar25 | ~uVar25 & uVar36));
    uVar29 = (0U >> uVar8) << 0x1f ^ auVar34._12_4_;
    uVar21 = -(uint)(0xa154c00 << uVar27 < 0);
    uVar23 = -(uint)(0x1554300 << uVar27 < 0);
    uVar25 = -(uint)(0x50157000 << uVar27 < 0);
    auVar33._8_4_ = uVar28;
    auVar33._0_8_ = uVar31;
    auVar33._12_4_ = uVar29;
    uVar8 = (ulonglong)uVar27;
    auVar34._0_4_ =
         (0xae71e0U >> uVar8) << 0x1f ^
         (uVar40 & uVar21 | ~uVar21 & (uVar39 & uVar22 | ~uVar22 & uVar37));
    auVar34._4_4_ =
         (0xb9e306U >> uVar8) << 0x1f ^
         (uVar37 & uVar23 | ~uVar23 & (uVar40 & uVar24 | ~uVar24 & uVar39));
    auVar34._8_4_ =
         (0xeb903cU >> uVar8) << 0x1f ^
         (uVar39 & uVar25 | ~uVar25 & (uVar37 & uVar26 | ~uVar26 & uVar40));
    auVar34._12_4_ = (0U >> uVar8) << 0x1f ^ auVar38._12_4_;
    auVar38._8_4_ = uVar28;
    auVar38._0_8_ = uVar31;
    auVar38._12_4_ = uVar29;
    auVar38 = maxps(auVar38,auVar34);
    auVar34 = minps(auVar33,auVar34);
  }
  bVar2 = *(byte *)(param_1 + 10);
  uVar8 = (ulonglong)bVar2;
  uVar26 = (uint)bVar2;
  if (bVar2 != 0) {
    uVar32 = auVar42._0_4_;
    uVar35 = auVar42._4_4_;
    uVar36 = auVar42._8_4_;
    uVar27 = (uint)bVar2;
    uVar21 = -(uint)(0x16a8300 << uVar27 < 0);
    uVar23 = -(uint)(0x502ab000 << uVar27 < 0);
    uVar25 = -(uint)(0xa2a8c00 << uVar27 < 0);
    uVar28 = -(uint)(0xa154c00 << uVar27 < 0);
    uVar29 = -(uint)(0x1554300 << uVar27 < 0);
    uVar30 = -(uint)(0x50157000 << uVar27 < 0);
    uVar37 = auVar43._0_4_;
    uVar39 = auVar43._4_4_;
    uVar40 = auVar43._8_4_;
    uVar20 = (ulonglong)uVar27;
    uVar22 = -(uint)(0x16a8300 << uVar27 < 0);
    uVar24 = -(uint)(0x502ab000 << uVar27 < 0);
    uVar27 = -(uint)(0xa2a8c00 << uVar27 < 0);
    uVar31 = CONCAT44((0xb9e306U >> uVar20) << 0x1f ^
                      (uVar32 & uVar29 | ~uVar29 & (uVar36 & uVar23 | ~uVar23 & uVar35)),
                      (0xae71e0U >> uVar20) << 0x1f ^
                      (uVar36 & uVar28 | ~uVar28 & (uVar35 & uVar21 | ~uVar21 & uVar32)));
    uVar25 = (0xeb903cU >> uVar20) << 0x1f ^
             (uVar35 & uVar30 | ~uVar30 & (uVar32 & uVar25 | ~uVar25 & uVar36));
    uVar28 = (0U >> uVar20) << 0x1f ^ auVar42._12_4_;
    uVar21 = -(uint)(0xa154c00 << uVar26 < 0);
    uVar23 = -(uint)(0x1554300 << uVar26 < 0);
    uVar26 = -(uint)(0x50157000 << uVar26 < 0);
    auVar41._8_4_ = uVar25;
    auVar41._0_8_ = uVar31;
    auVar41._12_4_ = uVar28;
    auVar42._0_4_ =
         (0xae71e0U >> uVar8) << 0x1f ^
         (uVar40 & uVar21 | ~uVar21 & (uVar39 & uVar22 | ~uVar22 & uVar37));
    auVar42._4_4_ =
         (0xb9e306U >> uVar8) << 0x1f ^
         (uVar37 & uVar23 | ~uVar23 & (uVar40 & uVar24 | ~uVar24 & uVar39));
    auVar42._8_4_ =
         (0xeb903cU >> uVar8) << 0x1f ^
         (uVar39 & uVar26 | ~uVar26 & (uVar37 & uVar27 | ~uVar27 & uVar40));
    auVar42._12_4_ = (0U >> uVar8) << 0x1f ^ auVar43._12_4_;
    auVar43._8_4_ = uVar25;
    auVar43._0_8_ = uVar31;
    auVar43._12_4_ = uVar28;
    auVar43 = maxps(auVar43,auVar42);
    auVar42 = minps(auVar41,auVar42);
  }
  fVar1 = *(float *)(param_1 + 3);
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_108 = fVar1 + *(float *)(param_1 + 0xc) + auVar43._0_4_;
  fStack_104 = fVar1 + *(float *)((longlong)param_1 + 100) + auVar43._4_4_;
  fStack_100 = fVar1 + *(float *)(param_1 + 0xd) + auVar43._8_4_;
  fStack_fc = fVar1 + *(float *)((longlong)param_1 + 0x6c) + auVar43._12_4_;
  local_c8 = *(uint *)(param_1 + 4) ^ 0x80000000;
  local_1cc = 0x80000000;
  local_118 = (*(float *)(param_1 + 0xc) + auVar42._0_4_) - fVar1;
  fStack_114 = (*(float *)((longlong)param_1 + 100) + auVar42._4_4_) - fVar1;
  fStack_110 = (*(float *)(param_1 + 0xd) + auVar42._8_4_) - fVar1;
  fStack_10c = (*(float *)((longlong)param_1 + 0x6c) + auVar42._12_4_) - fVar1;
  local_1bc = 0x80000000;
  uStack_c4 = (undefined4)param_1[5];
  uVar45 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_f0 = uRam000000014c6dae88;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uStack_e0 = uRam000000014c6dae88;
  local_d8 = _DAT_14c6dae80;
  cVar7 = *(char *)(lVar11 + 0x114);
  _local_f8 = CONCAT44((int)((ulonglong)_DAT_14c6dae80 >> 0x20),uVar45);
  _local_e8 = CONCAT44(uVar45,(int)_DAT_14c6dae80);
  _uStack_d0 = CONCAT44((int)((ulonglong)uRam000000014c6dae88 >> 0x20),uVar45);
  local_138._4_4_ = auVar38._4_4_ + *(float *)((longlong)param_1 + 0x44) + fVar1;
  local_138._0_4_ = auVar38._0_4_ + *(float *)(param_1 + 8) + fVar1;
  uStack_130._0_4_ = auVar38._8_4_ + *(float *)(param_1 + 9) + fVar1;
  uStack_130._4_4_ = auVar38._12_4_ + *(float *)((longlong)param_1 + 0x4c) + fVar1;
  local_148._4_4_ = (auVar34._4_4_ + *(float *)((longlong)param_1 + 0x44)) - fVar1;
  local_148._0_4_ = (auVar34._0_4_ + *(float *)(param_1 + 8)) - fVar1;
  uStack_140._0_4_ = (auVar34._8_4_ + *(float *)(param_1 + 9)) - fVar1;
  uStack_140._4_4_ = (auVar34._12_4_ + *(float *)((longlong)param_1 + 0x4c)) - fVar1;
  local_128 = lVar19;
  local_120 = lVar18;
  uStack_c0 = uStack_c4;
  uStack_bc = uStack_c4;
  local_b8 = uStack_c4;
  uStack_b4 = local_c8;
  uStack_b0 = uStack_c4;
  uStack_ac = uStack_c4;
  local_a8 = uStack_c4;
  uStack_a4 = uStack_c4;
  uStack_a0 = local_c8;
  uStack_9c = uStack_c4;
  if (cVar7 == '\0') {
    __dyn_tls_on_demand_init();
    cVar7 = *(char *)(lVar11 + 0x114);
  }
  lVar9 = *(longlong *)(lVar11 + 0xf0);
  if (lVar9 == 0) {
    if (cVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = FUN_144b3f4a0();
    *(longlong *)(lVar11 + 0xf0) = lVar9;
  }
  local_1a8 = *(undefined **)(lVar9 + 0x3e0);
  local_1b8 = (longlong *)0x1499944e0;
  pcStack_1b0 = "";
  if (local_1a8 != (undefined *)0x0) {
    local_1e8 = "StcollectAabbInt";
    uStack_1e0 = "";
    local_1b8 = (longlong *)0x1499944e0;
    pcStack_1b0 = "";
    FUN_144be9870(local_1a8,&local_1b8,&local_1e8);
  }
  uVar45 = (undefined4)param_1[4];
  local_1e8 = (char *)CONCAT44(uVar45,uVar45);
  uStack_1e0 = (char *)CONCAT44(uVar45,uVar45);
  FUN_144c2de60(lVar18,param_1 + 6,&local_118,&local_1d8,&local_1e8);
  puVar44 = &local_1e8;
  FUN_144c2de60(lVar19,param_1 + 10,&local_148,&local_1c8,puVar44);
  auVar34 = _local_148;
  lVar19 = 4;
  uVar5 = local_138;
  uVar6 = uStack_130;
  local_148._0_4_ = 0xffffffff;
  auVar38 = _local_148;
  uVar31 = local_148;
  uStack_140 = auVar34._8_8_;
  uVar4 = uStack_140;
  local_res18[0] = local_1d0;
  local_res20[0] = local_1c0;
  lVar18 = local_1d8;
  uVar26 = local_1d0;
  uVar27 = local_1cc;
  _local_148 = auVar38;
  do {
    uVar22 = local_1c0;
    uVar21 = uVar26 + 1;
    if ((int)(uVar27 & 0x7fffffff) < (int)uVar21) {
      FUN_144c2e740(&local_1d8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar21);
      lVar18 = local_1d8;
      uVar26 = local_1d0;
      uVar27 = local_1cc;
    }
    puVar10 = (undefined8 *)((longlong)(int)uVar26 * 0x20 + lVar18);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = uVar31;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar10[3] = uVar6;
    }
    uVar23 = uVar22 + 1;
    local_1d0 = uVar21;
    if ((int)(local_1bc & 0x7fffffff) < (int)uVar23) {
      FUN_144c2e740(&local_1c8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar23);
      uVar22 = local_1c0;
    }
    uVar45 = (undefined4)((ulonglong)puVar44 >> 0x20);
    puVar10 = (undefined8 *)((longlong)(int)uVar22 * 0x20 + local_1c8);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = uVar31;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar10[3] = uVar6;
    }
    lVar19 = lVar19 + -1;
    uVar26 = uVar21;
    local_1c0 = uVar23;
  } while (lVar19 != 0);
  local_1e8 = "Stsort";
  uStack_1e0 = "";
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar18 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar18 + 0xf0);
  if (lVar19 == 0) {
    if (*(char *)(lVar18 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = FUN_144b3f4a0();
    *(longlong *)(lVar18 + 0xf0) = lVar19;
  }
  if (*(longlong *)(lVar19 + 0x3e0) != 0) {
    FUN_144be99f0(*(longlong *)(lVar19 + 0x3e0),&local_1e8);
  }
  lVar19 = local_1d8;
  uVar26 = local_res18[0];
  FUN_144fc0200(local_1d8,local_res18[0]);
  uVar27 = local_res20[0];
  FUN_144fc0200(local_1c8,local_res20[0]);
  local_1e8 = "Stcollide";
  uStack_1e0 = "";
  if (*(char *)(lVar18 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar18 + 0xf0);
  if (lVar11 == 0) {
    if (*(char *)(lVar18 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar18 + 0xf0) = lVar11;
  }
  if (*(longlong *)(lVar11 + 0x3e0) != 0) {
    FUN_144be99f0(*(longlong *)(lVar11 + 0x3e0),&local_1e8);
  }
  FUN_144fc0100(local_198,lVar19,uVar26,local_1c8,CONCAT44(uVar45,uVar27));
  local_1b8 = param_1 + 10;
  local_1e8 = (char *)(param_1 + 6);
  uVar26 = local_198[0];
  puVar17 = local_190;
LAB_144c2da54:
  do {
    local_190 = puVar17;
    local_198[0] = uVar26;
    puVar3 = local_1a8;
    if ((local_170 < 1) || (local_16c[0] < 1)) {
      if (local_1a8 != (undefined *)0x0) {
        local_1a8 = &DAT_14999058c;
        puStack_1a0 = &DAT_14999058e;
        FUN_144be9b20(puVar3,&local_1a8);
      }
      if ((-1 < (int)local_1bc) && (local_1c8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_1c8,(ulonglong)(local_1bc & 0x7fffffff) << 5);
      }
      if ((-1 < (int)local_1cc) && (local_1d8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_1d8,(ulonglong)(local_1cc & 0x7fffffff) << 5);
      }
      return;
    }
    puVar17 = local_188;
    puVar14 = local_180;
    if (local_198[0] != 0) {
      puVar17 = local_178;
      puVar14 = local_188;
    }
    uVar26 = puVar14[3];
    uVar27 = puVar17[3];
    local_res18[0] = uVar27;
    local_res20[0] = uVar26;
    cVar7 = FUN_144c2e0d0(*(undefined4 *)((longlong)param_1 + 0x1c),local_120,local_1e8,local_res20,
                          local_128,local_1b8,local_res18,&local_c8,&local_f8);
    if (cVar7 != '\0') {
      iVar15 = (int)param_2[1] + 1;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar15) {
        FUN_144c2e630(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar15);
      }
      puVar17 = (uint *)(*param_2 + (longlong)(int)param_2[1] * 8);
      if (puVar17 != (uint *)0x0) {
        *puVar17 = uVar26;
        puVar17[1] = uVar27;
      }
      *(int *)(param_2 + 1) = iVar15;
    }
    puVar13 = local_188 + 8;
    puVar14 = puVar13;
    puVar16 = local_190;
    uVar27 = local_198[0];
    do {
      if (*puVar14 < puVar16[4]) {
        do {
          uVar26 = uVar27;
          puVar17 = puVar16;
          local_188 = puVar14;
          if (-1 < (int)(puVar16[6] - puVar14[2] | puVar16[5] - puVar14[1] | puVar14[6] - puVar16[2]
                        | puVar14[5] - puVar16[1])) goto LAB_144c2da54;
          puVar14 = puVar14 + 8;
        } while (*puVar14 < puVar16[4]);
      }
      if (uVar27 == 0) {
        local_180 = local_180 + 8;
        piVar12 = &local_170;
        iVar15 = local_170;
      }
      else {
        local_178 = local_178 + 8;
        piVar12 = local_16c;
        iVar15 = local_16c[0];
      }
      *piVar12 = iVar15 + -1;
      uVar27 = (uint)(*local_178 < *local_180);
      puVar14 = local_178;
      puVar16 = local_180;
      if (*local_178 < *local_180) {
        puVar14 = local_180;
        puVar16 = local_178;
      }
      uVar26 = local_198[0];
      puVar17 = local_190;
      local_188 = puVar13;
    } while ((0 < local_170) && (0 < local_16c[0]));
  } while( true );
}



// FUNCTION 144c2dcf0 FUN_144c2dcf0 body=365 status=ok
// SIG undefined FUN_144c2dcf0(void)

void FUN_144c2dcf0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 local_res18;
  
  local_res18 = 0x80;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"hkaiStreamingSet");
  }
  puVar6 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[2] = 1;
    puVar4[1] = 0xffffffff;
    *puVar4 = &PTR_LAB_14aba2b70;
    puVar4[3] = 0;
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x80000000;
    puVar4[6] = 0;
    *(undefined4 *)(puVar4 + 7) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x80000000;
    uVar5 = FUN_144b3d480();
    puVar4[8] = uVar5;
    *(undefined4 *)(puVar4 + 9) = 0;
    puVar4[10] = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x5c) = 0x80000000;
    puVar4[0xc] = 0;
    *(undefined4 *)(puVar4 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x6c) = 0x80000000;
    puVar4[0xe] = 0;
    *(undefined4 *)(puVar4 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x7c) = 0x80000000;
    puVar6 = puVar4;
  }
  puVar4 = (undefined8 *)*param_6;
  if ((puVar6 != puVar4) && (*param_6 = (longlong)puVar6, puVar4 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  *(undefined4 *)(puVar6 + 3) = *param_3;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = *param_4;
  if ((int)(*(uint *)((longlong)puVar6 + 0x5c) & 0x7fffffff) < *(int *)(param_5 + 1)) {
    FUN_144c2e420(puVar6 + 10,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_5 + 1));
  }
  puVar7 = (undefined4 *)*param_5;
  puVar1 = puVar7 + (longlong)*(int *)(param_5 + 1) * 2;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
    iVar3 = *(int *)(puVar6 + 0xb);
    *(int *)(puVar6 + 0xb) = iVar3 + 1;
    puVar2 = (undefined4 *)(puVar6[10] + (longlong)iVar3 * 8);
    *puVar2 = *puVar7;
    puVar2[1] = puVar7[1];
  }
  return;
}



// FUNCTION 144c2de60 FUN_144c2de60 body=611 status=ok
// SIG undefined FUN_144c2de60(void)

void FUN_144c2de60(longlong param_1,byte *param_2,float *param_3,longlong *param_4,float *param_5)

{
  int iVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  longlong lVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar9 = 0;
  if (0 < iVar1) {
    do {
      auVar12 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x18) + uVar9 * 0x18);
      auVar2._10_2_ = 0;
      auVar2._0_10_ = auVar12._0_10_;
      auVar2._12_2_ = auVar12._6_2_;
      auVar3._8_2_ = auVar12._4_2_;
      auVar3._0_8_ = auVar12._0_8_;
      auVar3._10_4_ = auVar2._10_4_;
      auVar5._6_8_ = 0;
      auVar5._0_6_ = auVar3._8_6_;
      auVar4._4_2_ = auVar12._2_2_;
      auVar4._0_4_ = auVar12._0_4_;
      auVar4._6_8_ = SUB148(auVar5 << 0x40,6);
      auVar36._0_4_ =
           ((float)(auVar12._0_4_ & 0xffff) + 0.0) * *(float *)(param_1 + 0xa0) +
           *(float *)(param_1 + 0xb0);
      auVar36._4_4_ =
           ((float)auVar4._4_4_ + 0.0) * *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xb4);
      auVar36._8_4_ =
           ((float)(auVar3._8_4_ >> 0x10) * 65536.0 + (float)(auVar3._8_4_ & 0xffff)) *
           *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xb8);
      auVar36._12_4_ =
           ((float)(auVar2._10_4_ >> 0x10) + 0.0) * *(float *)(param_1 + 0xac) +
           *(float *)(param_1 + 0xbc);
      auVar38._0_4_ =
           ((float)auVar12._8_2_ + 0.0) * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xb0);
      auVar38._4_4_ =
           ((float)auVar12._10_2_ + 0.0) * *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xb4);
      auVar38._8_4_ =
           ((float)auVar12._12_2_ + 0.0) * *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xb8);
      auVar38._12_4_ =
           ((float)auVar12._14_2_ + 0.0) * *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xbc);
      uVar8 = (uint)*param_2;
      if (*param_2 != 0) {
        uVar32 = -(uint)(0x16a8300 << uVar8 < 0);
        uVar33 = -(uint)(0x502ab000 << uVar8 < 0);
        uVar34 = -(uint)(0xa2a8c00 << uVar8 < 0);
        uVar29 = -(uint)(0xa154c00 << uVar8 < 0);
        uVar30 = -(uint)(0x1554300 << uVar8 < 0);
        uVar31 = -(uint)(0x50157000 << uVar8 < 0);
        uVar11 = (ulonglong)uVar8;
        uVar14 = (0xae71e0U >> uVar11) << 0x1f;
        uVar16 = (0xb9e306U >> uVar11) << 0x1f;
        uVar18 = (0xeb903cU >> uVar11) << 0x1f;
        uVar20 = (0U >> uVar11) << 0x1f;
        uVar23 = CONCAT44((~uVar30 & ((uint)auVar36._8_4_ & uVar33 | ~uVar33 & (uint)auVar36._4_4_)
                          | (uint)auVar36._0_4_ & uVar30) ^ uVar16,
                          (~uVar29 & ((uint)auVar36._4_4_ & uVar32 | ~uVar32 & (uint)auVar36._0_4_)
                          | (uint)auVar36._8_4_ & uVar29) ^ uVar14);
        uVar25 = (~uVar31 & ((uint)auVar36._0_4_ & uVar34 | ~uVar34 & (uint)auVar36._8_4_) |
                 (uint)auVar36._4_4_ & uVar31) ^ uVar18;
        uVar27 = (uint)auVar36._12_4_ ^ uVar20;
        auVar35._8_4_ = uVar25;
        auVar35._0_8_ = uVar23;
        auVar35._12_4_ = uVar27;
        auVar12._0_4_ =
             (~uVar29 & ((uint)auVar38._4_4_ & uVar32 | ~uVar32 & (uint)auVar38._0_4_) |
             (uint)auVar38._8_4_ & uVar29) ^ uVar14;
        auVar12._4_4_ =
             (~uVar30 & ((uint)auVar38._8_4_ & uVar33 | ~uVar33 & (uint)auVar38._4_4_) |
             (uint)auVar38._0_4_ & uVar30) ^ uVar16;
        auVar12._8_4_ =
             (~uVar31 & ((uint)auVar38._0_4_ & uVar34 | ~uVar34 & (uint)auVar38._8_4_) |
             (uint)auVar38._4_4_ & uVar31) ^ uVar18;
        auVar12._12_4_ = (uint)auVar38._12_4_ ^ uVar20;
        auVar37._8_4_ = uVar25;
        auVar37._0_8_ = uVar23;
        auVar37._12_4_ = uVar27;
        auVar36 = minps(auVar35,auVar12);
        auVar38 = maxps(auVar37,auVar12);
      }
      fVar15 = *(float *)(param_2 + 0x10) + auVar36._0_4_;
      fVar17 = *(float *)(param_2 + 0x14) + auVar36._4_4_;
      fVar19 = *(float *)(param_2 + 0x18) + auVar36._8_4_;
      fVar21 = *(float *)(param_2 + 0x1c) + auVar36._12_4_;
      fVar22 = *(float *)(param_2 + 0x10) + auVar38._0_4_;
      fVar24 = *(float *)(param_2 + 0x14) + auVar38._4_4_;
      fVar26 = *(float *)(param_2 + 0x18) + auVar38._8_4_;
      fVar28 = *(float *)(param_2 + 0x1c) + auVar38._12_4_;
      auVar13._0_4_ = -(uint)(fVar15 <= param_3[4] && *param_3 <= fVar22);
      auVar13._4_4_ = -(uint)(fVar17 <= param_3[5] && param_3[1] <= fVar24);
      auVar13._8_4_ = -(uint)(fVar19 <= param_3[6] && param_3[2] <= fVar26);
      auVar13._12_4_ = -(uint)(fVar21 <= param_3[7] && param_3[3] <= fVar28);
      uVar7 = movmskps(uVar8,auVar13);
      if (((byte)uVar7 & 7) == 7) {
        iVar10 = (int)param_4[1] + 1;
        fStack_84 = fVar17 - param_5[1];
        local_88 = fVar15 - *param_5;
        fStack_80 = fVar19 - param_5[2];
        fStack_7c = fVar21 - param_5[3];
        fStack_74 = param_5[1] + fVar24;
        local_78 = *param_5 + fVar22;
        fStack_70 = param_5[2] + fVar26;
        fStack_6c = param_5[3] + fVar28;
        if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar10) {
          FUN_144c2e510(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar10);
        }
        lVar6 = param_4[1];
        *(int *)(param_4 + 1) = iVar10;
        FUN_144fc00a0((longlong)(int)lVar6 * 0x20 + *param_4,&local_88,uVar9);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < iVar1);
  }
  return;
}



// FUNCTION 144c2e0d0 FUN_144c2e0d0 body=839 status=ok
// SIG undefined FUN_144c2e0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_144c2e0d0(int param_1,longlong param_2,byte *param_3,int *param_4,longlong param_5,
                  byte *param_6,int *param_7,longlong param_8,longlong param_9)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined4 uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined8 uVar19;
  float fVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  undefined1 auVar20 [16];
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar34;
  uint uVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar36;
  uint uVar40;
  uint uVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  float fVar47;
  float fVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  auVar46 = *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x18) + (longlong)*param_4 * 0x18);
  auVar3._10_2_ = 0;
  auVar3._0_10_ = auVar46._0_10_;
  auVar3._12_2_ = auVar46._6_2_;
  auVar5._8_2_ = auVar46._4_2_;
  auVar5._0_8_ = auVar46._0_8_;
  auVar5._10_4_ = auVar3._10_4_;
  auVar9._6_8_ = 0;
  auVar9._0_6_ = auVar5._8_6_;
  auVar7._4_2_ = auVar46._2_2_;
  auVar7._0_4_ = auVar46._0_4_;
  auVar7._6_8_ = SUB148(auVar9 << 0x40,6);
  auVar51._0_4_ =
       ((float)(auVar46._0_4_ & 0xffff) + 0.0) * *(float *)(param_2 + 0xa0) +
       *(float *)(param_2 + 0xb0);
  auVar51._4_4_ =
       ((float)auVar7._4_4_ + 0.0) * *(float *)(param_2 + 0xa4) + *(float *)(param_2 + 0xb4);
  auVar51._8_4_ =
       ((float)(auVar5._8_4_ >> 0x10) * 65536.0 + (float)(auVar5._8_4_ & 0xffff)) *
       *(float *)(param_2 + 0xa8) + *(float *)(param_2 + 0xb8);
  auVar51._12_4_ =
       ((float)(auVar3._10_4_ >> 0x10) + 0.0) * *(float *)(param_2 + 0xac) +
       *(float *)(param_2 + 0xbc);
  auVar44._0_4_ =
       ((float)auVar46._8_2_ + 0.0) * *(float *)(param_2 + 0xa0) + *(float *)(param_2 + 0xb0);
  auVar44._4_4_ =
       ((float)auVar46._10_2_ + 0.0) * *(float *)(param_2 + 0xa4) + *(float *)(param_2 + 0xb4);
  auVar44._8_4_ =
       ((float)auVar46._12_2_ + 0.0) * *(float *)(param_2 + 0xa8) + *(float *)(param_2 + 0xb8);
  auVar44._12_4_ =
       ((float)auVar46._14_2_ + 0.0) * *(float *)(param_2 + 0xac) + *(float *)(param_2 + 0xbc);
  if (*param_3 != 0) {
    uVar22 = (uint)*param_3;
    uVar36 = -(uint)(0x16a8300 << uVar22 < 0);
    uVar40 = -(uint)(0x502ab000 << uVar22 < 0);
    uVar41 = -(uint)(0xa2a8c00 << uVar22 < 0);
    uVar30 = -(uint)(0xa154c00 << uVar22 < 0);
    uVar34 = -(uint)(0x1554300 << uVar22 < 0);
    uVar35 = -(uint)(0x50157000 << uVar22 < 0);
    uVar12 = (ulonglong)uVar22;
    uVar25 = (0xae71e0U >> uVar12) << 0x1f;
    uVar26 = (0xb9e306U >> uVar12) << 0x1f;
    uVar27 = (0xeb903cU >> uVar12) << 0x1f;
    uVar29 = (0U >> uVar12) << 0x1f;
    uVar19 = CONCAT44(uVar26 ^ (~uVar34 & ((uint)auVar51._8_4_ & uVar40 |
                                          ~uVar40 & (uint)auVar51._4_4_) |
                               (uint)auVar51._0_4_ & uVar34),
                      uVar25 ^ (~uVar30 & ((uint)auVar51._4_4_ & uVar36 |
                                          ~uVar36 & (uint)auVar51._0_4_) |
                               (uint)auVar51._8_4_ & uVar30));
    uVar22 = uVar27 ^ (~uVar35 & ((uint)auVar51._0_4_ & uVar41 | ~uVar41 & (uint)auVar51._8_4_) |
                      (uint)auVar51._4_4_ & uVar35);
    uVar24 = uVar29 ^ (uint)auVar51._12_4_;
    auVar50._8_4_ = uVar22;
    auVar50._0_8_ = uVar19;
    auVar50._12_4_ = uVar24;
    auVar43._8_4_ = uVar22;
    auVar43._0_8_ = uVar19;
    auVar43._12_4_ = uVar24;
    auVar46._0_4_ =
         uVar25 ^ (~uVar30 & ((uint)auVar44._4_4_ & uVar36 | ~uVar36 & (uint)auVar44._0_4_) |
                  (uint)auVar44._8_4_ & uVar30);
    auVar46._4_4_ =
         uVar26 ^ (~uVar34 & ((uint)auVar44._8_4_ & uVar40 | ~uVar40 & (uint)auVar44._4_4_) |
                  (uint)auVar44._0_4_ & uVar34);
    auVar46._8_4_ =
         uVar27 ^ (~uVar35 & ((uint)auVar44._0_4_ & uVar41 | ~uVar41 & (uint)auVar44._8_4_) |
                  (uint)auVar44._4_4_ & uVar35);
    auVar46._12_4_ = uVar29 ^ (uint)auVar44._12_4_;
    auVar51 = minps(auVar50,auVar46);
    auVar44 = maxps(auVar43,auVar46);
  }
  auVar52._0_4_ = auVar51._0_4_ + *(float *)(param_3 + 0x10);
  auVar52._4_4_ = auVar51._4_4_ + *(float *)(param_3 + 0x14);
  auVar52._8_4_ = auVar51._8_4_ + *(float *)(param_3 + 0x18);
  auVar52._12_4_ = auVar51._12_4_ + *(float *)(param_3 + 0x1c);
  auVar45._0_4_ = auVar44._0_4_ + *(float *)(param_3 + 0x10);
  auVar45._4_4_ = auVar44._4_4_ + *(float *)(param_3 + 0x14);
  auVar45._8_4_ = auVar44._8_4_ + *(float *)(param_3 + 0x18);
  auVar45._12_4_ = auVar44._12_4_ + *(float *)(param_3 + 0x1c);
  auVar46 = *(undefined1 (*) [16])(*(longlong *)(param_5 + 0x18) + (longlong)*param_7 * 0x18);
  auVar4._10_2_ = 0;
  auVar4._0_10_ = auVar46._0_10_;
  auVar4._12_2_ = auVar46._6_2_;
  auVar6._8_2_ = auVar46._4_2_;
  auVar6._0_8_ = auVar46._0_8_;
  auVar6._10_4_ = auVar4._10_4_;
  auVar10._6_8_ = 0;
  auVar10._0_6_ = auVar6._8_6_;
  auVar8._4_2_ = auVar46._2_2_;
  auVar8._0_4_ = auVar46._0_4_;
  auVar8._6_8_ = SUB148(auVar10 << 0x40,6);
  auVar32._0_4_ =
       ((float)(auVar46._0_4_ & 0xffff) + 0.0) * *(float *)(param_5 + 0xa0) +
       *(float *)(param_5 + 0xb0);
  auVar32._4_4_ =
       ((float)auVar8._4_4_ + 0.0) * *(float *)(param_5 + 0xa4) + *(float *)(param_5 + 0xb4);
  auVar32._8_4_ =
       ((float)(auVar6._8_4_ >> 0x10) * 65536.0 + (float)(auVar6._8_4_ & 0xffff)) *
       *(float *)(param_5 + 0xa8) + *(float *)(param_5 + 0xb8);
  auVar32._12_4_ =
       ((float)auVar46._6_2_ + 0.0) * *(float *)(param_5 + 0xac) + *(float *)(param_5 + 0xbc);
  auVar38._0_4_ =
       ((float)auVar46._8_2_ + 0.0) * *(float *)(param_5 + 0xa0) + *(float *)(param_5 + 0xb0);
  auVar38._4_4_ =
       ((float)auVar46._10_2_ + 0.0) * *(float *)(param_5 + 0xa4) + *(float *)(param_5 + 0xb4);
  auVar38._8_4_ =
       ((float)auVar46._12_2_ + 0.0) * *(float *)(param_5 + 0xa8) + *(float *)(param_5 + 0xb8);
  auVar38._12_4_ =
       ((float)auVar46._14_2_ + 0.0) * *(float *)(param_5 + 0xac) + *(float *)(param_5 + 0xbc);
  uVar22 = (uint)*param_6;
  if (*param_6 != 0) {
    uVar40 = -(uint)(0x16a8300 << uVar22 < 0);
    uVar41 = -(uint)(0x502ab000 << uVar22 < 0);
    uVar28 = -(uint)(0xa2a8c00 << uVar22 < 0);
    uVar24 = -(uint)(0xa154c00 << uVar22 < 0);
    uVar25 = -(uint)(0x1554300 << uVar22 < 0);
    uVar26 = -(uint)(0x50157000 << uVar22 < 0);
    uVar12 = (ulonglong)uVar22;
    uVar27 = (0xae71e0U >> uVar12) << 0x1f;
    uVar29 = (0xb9e306U >> uVar12) << 0x1f;
    uVar30 = (0xeb903cU >> uVar12) << 0x1f;
    uVar34 = (0U >> uVar12) << 0x1f;
    uVar19 = CONCAT44((~uVar25 & ((uint)auVar32._8_4_ & uVar41 | ~uVar41 & (uint)auVar32._4_4_) |
                      (uint)auVar32._0_4_ & uVar25) ^ uVar29,
                      (~uVar24 & ((uint)auVar32._4_4_ & uVar40 | ~uVar40 & (uint)auVar32._0_4_) |
                      (uint)auVar32._8_4_ & uVar24) ^ uVar27);
    uVar35 = (~uVar26 & ((uint)auVar32._0_4_ & uVar28 | ~uVar28 & (uint)auVar32._8_4_) |
             (uint)auVar32._4_4_ & uVar26) ^ uVar30;
    uVar36 = (uint)auVar32._12_4_ ^ uVar34;
    auVar31._8_4_ = uVar35;
    auVar31._0_8_ = uVar19;
    auVar31._12_4_ = uVar36;
    auVar15._0_4_ =
         (~uVar24 & ((uint)auVar38._4_4_ & uVar40 | ~uVar40 & (uint)auVar38._0_4_) |
         (uint)auVar38._8_4_ & uVar24) ^ uVar27;
    auVar15._4_4_ =
         (~uVar25 & ((uint)auVar38._8_4_ & uVar41 | ~uVar41 & (uint)auVar38._4_4_) |
         (uint)auVar38._0_4_ & uVar25) ^ uVar29;
    auVar15._8_4_ =
         (~uVar26 & ((uint)auVar38._0_4_ & uVar28 | ~uVar28 & (uint)auVar38._8_4_) |
         (uint)auVar38._4_4_ & uVar26) ^ uVar30;
    auVar15._12_4_ = (uint)auVar38._12_4_ ^ uVar34;
    auVar37._8_4_ = uVar35;
    auVar37._0_8_ = uVar19;
    auVar37._12_4_ = uVar36;
    auVar32 = minps(auVar31,auVar15);
    auVar38 = maxps(auVar37,auVar15);
  }
  auVar39._0_4_ = auVar38._0_4_ + *(float *)(param_6 + 0x10);
  auVar39._4_4_ = auVar38._4_4_ + *(float *)(param_6 + 0x14);
  auVar39._8_4_ = auVar38._8_4_ + *(float *)(param_6 + 0x18);
  auVar39._12_4_ = auVar38._12_4_ + *(float *)(param_6 + 0x1c);
  auVar33._0_4_ = auVar32._0_4_ + *(float *)(param_6 + 0x10);
  auVar33._4_4_ = auVar32._4_4_ + *(float *)(param_6 + 0x14);
  auVar33._8_4_ = auVar32._8_4_ + *(float *)(param_6 + 0x18);
  auVar33._12_4_ = auVar32._12_4_ + *(float *)(param_6 + 0x1c);
  auVar46 = minps(auVar45,auVar39);
  auVar44 = maxps(auVar52,auVar33);
  fVar42 = (auVar46._0_4_ - auVar44._0_4_) * _DAT_14c6dad90;
  fVar47 = (auVar46._4_4_ - auVar44._4_4_) * fRam000000014c6dad94;
  fVar48 = (auVar46._8_4_ - auVar44._8_4_) * fRam000000014c6dad98;
  fVar49 = (auVar46._12_4_ - auVar44._12_4_) * fRam000000014c6dad9c;
  if (param_1 == -1) {
    fVar18 = ABS(fVar42);
    fVar21 = ABS(fVar47);
    fVar23 = ABS(fVar48);
    auVar17._0_8_ = CONCAT44(fVar47,fVar47) & 0x7fffffff7fffffff;
    auVar17._8_4_ = fVar21;
    auVar17._12_4_ = fVar21;
    auVar13._0_8_ = CONCAT44(fVar42,fVar42) & 0x7fffffff7fffffff;
    auVar13._8_4_ = fVar18;
    auVar13._12_4_ = fVar18;
    auVar16._0_8_ = CONCAT44(fVar48,fVar48) & 0x7fffffff7fffffff;
    auVar16._8_4_ = fVar23;
    auVar16._12_4_ = fVar23;
    auVar46 = minps(auVar17,auVar13);
    auVar46 = minps(auVar16,auVar46);
    auVar20._4_4_ = -(uint)(fVar21 <= auVar46._4_4_);
    auVar20._0_4_ = -(uint)(fVar18 <= auVar46._0_4_);
    auVar20._8_4_ = -(uint)(fVar23 <= auVar46._8_4_);
    auVar20._12_4_ = -(uint)(ABS(fVar49) <= auVar46._12_4_);
    uVar22 = movmskps(uVar22,auVar20);
    param_1 = (int)(char)(&DAT_14998f5a0)[uVar22 & 7];
  }
  pfVar1 = (float *)(param_8 + (longlong)param_1 * 0x10);
  pfVar2 = (float *)(param_9 + (longlong)param_1 * 0x10);
  auVar14._0_4_ = -(uint)(fVar42 <= *pfVar2 && *pfVar1 <= fVar42);
  auVar14._4_4_ = -(uint)(fVar47 <= pfVar2[1] && pfVar1[1] <= fVar47);
  auVar14._8_4_ = -(uint)(pfVar1[2] <= fVar48 && fVar48 <= pfVar2[2]);
  auVar14._12_4_ = -(uint)(pfVar1[3] <= fVar49 && fVar49 <= pfVar2[3]);
  uVar11 = movmskps((int)param_9,auVar14);
  return ((byte)uVar11 & 7) == 7;
}



// FUNCTION 144c2e420 FUN_144c2e420 body=235 status=ok
// SIG undefined FUN_144c2e420(void)

void FUN_144c2e420(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144c2e510 FUN_144c2e510 body=274 status=ok
// SIG undefined FUN_144c2e510(void)

void FUN_144c2e510(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
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
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x20,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
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
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 5);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 144c2e630 FUN_144c2e630 body=265 status=ok
// SIG undefined FUN_144c2e630(void)

void FUN_144c2e630(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  puVar1 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar5 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
      }
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 144c2e740 FUN_144c2e740 body=266 status=ok
// SIG undefined FUN_144c2e740(void)

void FUN_144c2e740(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x20;
  puVar5 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
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
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 144c2e850 FUN_144c2e850 body=256 status=ok
// SIG undefined FUN_144c2e850(void)

void FUN_144c2e850(undefined8 *param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_3;
  if (*param_2 == 0) {
    if ((int)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) < (int)uVar1) {
      FUN_14039ab22(param_1 + 3,&PTR_vftable_14c6e47c0,(longlong)(int)uVar1);
    }
    if ((*(int *)(param_1 + 4) < (int)uVar1) || ((int)uVar1 < *(int *)(param_1 + 4))) {
      *(uint *)(param_1 + 4) = uVar1;
    }
  }
  else {
    param_1[3] = *param_2;
    *(uint *)((longlong)param_1 + 0x24) = uVar1 | 0x80000000;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar1 = param_3[1];
  if (param_2[1] == 0) {
    if ((int)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) < (int)uVar1) {
      FUN_14039ab22(param_1 + 5,&PTR_vftable_14c6e47c0,(longlong)(int)uVar1);
    }
    if ((*(int *)(param_1 + 6) < (int)uVar1) || ((int)uVar1 < *(int *)(param_1 + 6))) {
      *(uint *)(param_1 + 6) = uVar1;
    }
  }
  else {
    param_1[5] = param_2[1];
    *(uint *)((longlong)param_1 + 0x34) = uVar1 | 0x80000000;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  *param_1 = param_1[3];
  *(uint *)(param_1 + 2) = *(uint *)((longlong)param_1 + 0x24) & 0x7fffffff;
  param_1[1] = param_1[5];
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x34) & 0x7fffffff;
  return;
}



// FUNCTION 144c2e950 FUN_144c2e950 body=157 status=ok
// SIG undefined FUN_144c2e950(void)

void FUN_144c2e950(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x30);
    uVar5 = *(uint *)(param_1 + 1);
    puVar4 = (undefined8 *)*param_1;
    if (0 < (int)uVar5) {
      puVar3 = (undefined4 *)(lVar2 + 0x20);
      uVar6 = (ulonglong)uVar5;
      do {
        if ((undefined8 *)(puVar3 + -8) != (undefined8 *)0x0) {
          uVar1 = puVar4[1];
          *(undefined8 *)(puVar3 + -8) = *puVar4;
          *(undefined8 *)(puVar3 + -6) = uVar1;
          uVar1 = puVar4[3];
          *(undefined8 *)(puVar3 + -4) = puVar4[2];
          *(undefined8 *)(puVar3 + -2) = uVar1;
          *puVar3 = *(undefined4 *)(puVar4 + 4);
          puVar3[1] = *(undefined4 *)((longlong)puVar4 + 0x24);
          *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar4 + 5);
        }
        puVar3 = puVar3 + 0xc;
        puVar4 = puVar4 + 6;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *param_1 = lVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
  }
  return;
}



// FUNCTION 144c2e9f0 FUN_144c2e9f0 body=103 status=ok
// SIG undefined FUN_144c2e9f0(void)

void FUN_144c2e9f0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 2);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c2ea60 FUN_144c2ea60 body=103 status=ok
// SIG undefined FUN_144c2ea60(void)

void FUN_144c2ea60(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 2);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c2ead0 FUN_144c2ead0 body=305 status=ok
// SIG undefined FUN_144c2ead0(void)

void FUN_144c2ead0(longlong param_1,int *param_2,float *param_3,float *param_4)

{
  int iVar1;
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
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  float *pfVar28;
  int *piVar29;
  
  iVar25 = *param_2;
  lVar26 = (longlong)iVar25;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (iVar25 < *(int *)(lVar2 + 0x30)) {
    if (*(int *)(lVar2 + 0x78) != 0) {
      iVar25 = *(int *)(*(longlong *)(lVar2 + 0x70) + lVar26 * 4);
    }
    if (iVar25 == -1) {
      lVar27 = *(longlong *)(lVar2 + 0x28);
    }
    else {
      lVar26 = (longlong)iVar25;
      lVar27 = *(longlong *)(lVar2 + 0xc0);
    }
    piVar29 = (int *)(lVar27 + lVar26 * 0x14);
  }
  else {
    piVar29 = (int *)(*(longlong *)(lVar2 + 0xe0) +
                     (longlong)(iVar25 - *(int *)(lVar2 + 0x30)) * 0x14);
  }
  iVar25 = *piVar29;
  iVar1 = *(int *)(lVar2 + 0x40);
  if (iVar25 < iVar1) {
    pfVar28 = (float *)((longlong)iVar25 * 0x10 + *(longlong *)(lVar2 + 0x38));
  }
  else {
    pfVar28 = (float *)((longlong)(iVar25 - iVar1) * 0x10 + *(longlong *)(lVar2 + 0xf0));
  }
  iVar25 = piVar29[1];
  fVar3 = *pfVar28;
  fVar4 = pfVar28[1];
  fVar5 = pfVar28[2];
  if (iVar25 < iVar1) {
    pfVar28 = (float *)((longlong)iVar25 * 0x10 + *(longlong *)(lVar2 + 0x38));
  }
  else {
    pfVar28 = (float *)((longlong)(iVar25 - iVar1) * 0x10 + *(longlong *)(lVar2 + 0xf0));
  }
  fVar6 = *pfVar28;
  fVar7 = pfVar28[1];
  fVar8 = pfVar28[2];
  fVar9 = *(float *)(param_1 + 0x70);
  fVar10 = *(float *)(param_1 + 0x74);
  fVar11 = *(float *)(param_1 + 0x78);
  fVar12 = *(float *)(param_1 + 0x7c);
  fVar13 = *(float *)(param_1 + 0x60);
  fVar14 = *(float *)(param_1 + 100);
  fVar15 = *(float *)(param_1 + 0x68);
  fVar16 = *(float *)(param_1 + 0x6c);
  fVar17 = *(float *)(param_1 + 0x90);
  fVar18 = *(float *)(param_1 + 0x94);
  fVar19 = *(float *)(param_1 + 0x98);
  fVar20 = *(float *)(param_1 + 0x9c);
  fVar21 = *(float *)(param_1 + 0x80);
  fVar22 = *(float *)(param_1 + 0x84);
  fVar23 = *(float *)(param_1 + 0x88);
  fVar24 = *(float *)(param_1 + 0x8c);
  *param_3 = fVar4 * fVar9 + fVar3 * fVar13 + fVar5 * fVar21 + fVar17;
  param_3[1] = fVar4 * fVar10 + fVar3 * fVar14 + fVar5 * fVar22 + fVar18;
  param_3[2] = fVar4 * fVar11 + fVar3 * fVar15 + fVar5 * fVar23 + fVar19;
  param_3[3] = fVar4 * fVar12 + fVar3 * fVar16 + fVar5 * fVar24 + fVar20;
  *param_4 = fVar7 * fVar9 + fVar6 * fVar13 + fVar8 * fVar21 + fVar17;
  param_4[1] = fVar7 * fVar10 + fVar6 * fVar14 + fVar8 * fVar22 + fVar18;
  param_4[2] = fVar7 * fVar11 + fVar6 * fVar15 + fVar8 * fVar23 + fVar19;
  param_4[3] = fVar7 * fVar12 + fVar6 * fVar16 + fVar8 * fVar24 + fVar20;
  return;
}



// FUNCTION 144c2ec10 FUN_144c2ec10 body=107 status=ok
// SIG undefined FUN_144c2ec10(void)

void FUN_144c2ec10(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x4c)) && (*(longlong *)(param_1 + 0x40) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x40),
               (ulonglong)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) << 3);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 144c2ec80 FUN_144c2ec80 body=204 status=ok
// SIG undefined FUN_144c2ec80(void)

undefined4 * FUN_144c2ec80(longlong *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  
  uVar2 = (uint)(param_2 * -0x61c8864f) >> 0x18;
  uVar4 = *(ushort *)(param_1[2] + (ulonglong)uVar2 * 2);
  if (-1 < (short)uVar4) {
    do {
      puVar3 = (undefined4 *)((ulonglong)uVar4 * 0x10 + *param_1);
      if (puVar3[2] == param_2) {
        return puVar3;
      }
      uVar4 = *(ushort *)(param_1[1] + (ulonglong)uVar4 * 2);
    } while (-1 < (short)uVar4);
  }
  sVar1 = *(short *)((longlong)param_1 + 0x1c);
  puVar3 = (undefined4 *)((longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10 + *param_1);
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  puVar3[2] = param_2;
  *puVar3 = 0x7f7fffee;
  puVar3[1] = 0x7f7fffee;
  puVar3[3] = 0xffff;
  *(undefined2 *)(param_1[1] + (longlong)sVar1 * 2) =
       *(undefined2 *)(param_1[2] + (ulonglong)uVar2 * 2);
  *(short *)(param_1[2] + (ulonglong)uVar2 * 2) = sVar1;
  return puVar3;
}



// FUNCTION 144c2ed50 FUN_144c2ed50 body=204 status=ok
// SIG undefined FUN_144c2ed50(void)

undefined4 * FUN_144c2ed50(longlong *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  
  uVar2 = (uint)(param_2 * -0x61c8864f) >> 0x18;
  uVar4 = *(ushort *)(param_1[2] + (ulonglong)uVar2 * 2);
  if (-1 < (short)uVar4) {
    do {
      puVar3 = (undefined4 *)((ulonglong)uVar4 * 0x10 + *param_1);
      if (puVar3[2] == param_2) {
        return puVar3;
      }
      uVar4 = *(ushort *)(param_1[1] + (ulonglong)uVar4 * 2);
    } while (-1 < (short)uVar4);
  }
  sVar1 = *(short *)((longlong)param_1 + 0x1c);
  puVar3 = (undefined4 *)((longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10 + *param_1);
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  puVar3[2] = param_2;
  *puVar3 = 0x7f7fffee;
  puVar3[1] = 0x7f7fffee;
  puVar3[3] = 0xffff;
  *(undefined2 *)(param_1[1] + (longlong)sVar1 * 2) =
       *(undefined2 *)(param_1[2] + (ulonglong)uVar2 * 2);
  *(short *)(param_1[2] + (ulonglong)uVar2 * 2) = sVar1;
  return puVar3;
}



// FUNCTION 144c2ee20 FUN_144c2ee20 body=40 status=ok
// SIG undefined FUN_144c2ee20(void)

undefined8 * FUN_144c2ee20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  param_1[4] = 0;
  param_1[5] = 0x5f7ffff000000000;
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 144c2ee50 FUN_144c2ee50 body=598 status=ok
// SIG undefined FUN_144c2ee50(void)

undefined8 * FUN_144c2ee50(undefined8 *param_1,longlong param_2)

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
  ulonglong uVar10;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiPathfindingUtil::FindPathInput::vftable;
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar7;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 9) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x68);
  lVar3 = *(longlong *)(param_2 + 0x60);
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 6);
    param_1[0xc] = uVar7;
    puVar8 = (undefined8 *)(lVar3 + 0x20);
    *(uint *)(param_1 + 0xd) = uVar2;
    uVar10 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0x6c) = uVar2;
    puVar9 = (undefined8 *)param_1[0xc];
    do {
      if (puVar9 != (undefined8 *)0x0) {
        uVar7 = puVar8[-3];
        *puVar9 = puVar8[-4];
        puVar9[1] = uVar7;
        *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar8 + -2);
        uVar7 = puVar8[1];
        puVar9[4] = *puVar8;
        puVar9[5] = uVar7;
        puVar1 = puVar8 + 2;
        puVar8 = puVar8 + 8;
        *(undefined1 *)(puVar9 + 6) = *(undefined1 *)puVar1;
      }
      uVar10 = uVar10 - 1;
      puVar9 = puVar9 + 8;
    } while (uVar10 != 0);
  }
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  uVar7 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar7;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0xc0);
  *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)(param_2 + 0xc1);
  *(undefined1 *)((longlong)param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  *(undefined1 *)((longlong)param_1 + 0xc3) = *(undefined1 *)(param_2 + 0xc3);
  *(undefined1 *)((longlong)param_1 + 0xc4) = *(undefined1 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
  *(undefined1 *)((longlong)param_1 + 0xcd) = *(undefined1 *)(param_2 + 0xcd);
  *(undefined1 *)((longlong)param_1 + 0xce) = *(undefined1 *)(param_2 + 0xce);
  *(undefined1 *)((longlong)param_1 + 0xcf) = *(undefined1 *)(param_2 + 0xcf);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  uVar7 = *(undefined8 *)(param_2 + 0x100);
  param_1[0x1f] = *(undefined8 *)(param_2 + 0xf8);
  param_1[0x20] = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x110);
  param_1[0x21] = *(undefined8 *)(param_2 + 0x108);
  param_1[0x22] = uVar7;
  return param_1;
}



// FUNCTION 144c2f0b0 FUN_144c2f0b0 body=681 status=ok
// SIG undefined FUN_144c2f0b0(void)

longlong FUN_144c2f0b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  uVar6 = *(undefined4 *)(param_2 + 0x44);
  uVar7 = *(undefined4 *)(param_2 + 0x48);
  uVar8 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  *(undefined4 *)(param_1 + 0x48) = uVar7;
  *(undefined4 *)(param_1 + 0x4c) = uVar8;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  if ((longlong *)(param_2 + 0x60) != plVar1) {
    iVar3 = *(int *)(param_2 + 0x68);
    lVar4 = *(longlong *)(param_2 + 0x60);
    if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < iVar3) {
      FUN_144c31460(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    lVar11 = *plVar1;
    iVar5 = iVar3;
    if (*(int *)(param_1 + 0x68) < iVar3) {
      iVar5 = *(int *)(param_1 + 0x68);
    }
    if ((lVar11 != lVar4) && (lVar13 = (longlong)iVar5, 0 < iVar5)) {
      puVar10 = (undefined4 *)(lVar11 + 0x10);
      lVar11 = lVar4 - lVar11;
      do {
        puVar12 = (undefined8 *)(lVar11 + -0x10 + (longlong)puVar10);
        uVar9 = puVar12[1];
        *(undefined8 *)(puVar10 + -4) = *puVar12;
        *(undefined8 *)(puVar10 + -2) = uVar9;
        *puVar10 = *(undefined4 *)(lVar11 + (longlong)puVar10);
        puVar12 = (undefined8 *)(lVar11 + 0x10 + (longlong)puVar10);
        uVar9 = puVar12[1];
        *(undefined8 *)(puVar10 + 4) = *puVar12;
        *(undefined8 *)(puVar10 + 6) = uVar9;
        *(undefined1 *)(puVar10 + 8) = *(undefined1 *)(lVar11 + 0x20 + (longlong)puVar10);
        puVar10 = puVar10 + 0x10;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar12 = (undefined8 *)((longlong)iVar5 * 0x40 + lVar4);
    if (0 < iVar3 - iVar5) {
      uVar15 = (ulonglong)(uint)(iVar3 - iVar5);
      puVar14 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x40);
      do {
        if (puVar14 != (undefined8 *)0x0) {
          uVar9 = puVar12[1];
          *puVar14 = *puVar12;
          puVar14[1] = uVar9;
          *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar12 + 2);
          uVar9 = puVar12[5];
          puVar14[4] = puVar12[4];
          puVar14[5] = uVar9;
          puVar2 = puVar12 + 6;
          puVar12 = puVar12 + 8;
          *(undefined1 *)(puVar14 + 6) = *(undefined1 *)puVar2;
        }
        uVar15 = uVar15 - 1;
        puVar14 = puVar14 + 8;
      } while (uVar15 != 0);
    }
    *(int *)(param_1 + 0x68) = iVar3;
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  uVar9 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)(param_2 + 0xc1);
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  *(undefined1 *)(param_1 + 0xc3) = *(undefined1 *)(param_2 + 0xc3);
  *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
  *(undefined1 *)(param_1 + 0xcd) = *(undefined1 *)(param_2 + 0xcd);
  *(undefined1 *)(param_1 + 0xce) = *(undefined1 *)(param_2 + 0xce);
  *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(param_2 + 0xcf);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  uVar9 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = uVar9;
  return param_1;
}



// FUNCTION 144c2f360 FUN_144c2f360 body=12 status=ok
// SIG undefined FUN_144c2f360(void)

void FUN_144c2f360(longlong param_1)

{
  FUN_144fc05e0(param_1 + 0x90);
  return;
}



// FUNCTION 144c2f370 FUN_144c2f370 body=76 status=ok
// SIG undefined FUN_144c2f370(void)

void FUN_144c2f370(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144c30390(param_1 + 0xe4,param_2,param_1 + 0xf8,0);
  FUN_144c30390(param_1 + 0xec,param_3,param_1 + 0x108,1);
  return;
}



// FUNCTION 144c2f3c0 FUN_144c2f3c0 body=22 status=ok
// SIG undefined FUN_144c2f3c0(void)

void FUN_144c2f3c0(longlong param_1,undefined8 param_2)

{
  FUN_144c30390(param_1 + 0xe4,param_2,param_1 + 0xf8,0);
  return;
}



// FUNCTION 144c2f3e0 FUN_144c2f3e0 body=87 status=ok
// SIG undefined FUN_144c2f3e0(void)

undefined8 FUN_144c2f3e0(undefined8 param_1,ulonglong param_2)

{
  FUN_144b409a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 144c2f440 FUN_144c2f440 body=584 status=ok
// SIG undefined FUN_144c2f440(void)

undefined8 * FUN_144c2f440(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiPathfindingUtil::FindPathOutput::vftable;
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x48);
  puVar9 = *(undefined4 **)(param_2 + 0x40);
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 5);
    param_1[8] = uVar7;
    uVar10 = (ulonglong)uVar2;
    *(uint *)(param_1 + 9) = uVar2;
    *(uint *)((longlong)param_1 + 0x4c) = uVar2;
    puVar8 = (undefined4 *)param_1[8];
    do {
      if (puVar8 != (undefined4 *)0x0) {
        uVar3 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        *puVar8 = *puVar9;
        puVar8[1] = uVar3;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
        puVar1 = puVar9 + 4;
        puVar9 = puVar9 + 8;
        puVar8[4] = *puVar1;
      }
      uVar10 = uVar10 - 1;
      puVar8 = puVar8 + 8;
    } while (uVar10 != 0);
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x58);
  puVar9 = *(undefined4 **)(param_2 + 0x50);
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
    param_1[10] = uVar7;
    uVar10 = (ulonglong)uVar2;
    *(uint *)(param_1 + 0xb) = uVar2;
    *(uint *)((longlong)param_1 + 0x5c) = uVar2;
    puVar8 = (undefined4 *)param_1[10];
    do {
      if (puVar8 != (undefined4 *)0x0) {
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar8 = uVar3;
      }
      uVar10 = uVar10 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar10 != 0);
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x68);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x30);
    param_1[0xc] = uVar7;
    puVar9 = (undefined4 *)(lVar4 + 0x20);
    *(uint *)(param_1 + 0xd) = uVar2;
    uVar10 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0x6c) = uVar2;
    puVar11 = (undefined8 *)param_1[0xc];
    do {
      if (puVar11 != (undefined8 *)0x0) {
        uVar7 = *(undefined8 *)(puVar9 + -6);
        *puVar11 = *(undefined8 *)(puVar9 + -8);
        puVar11[1] = uVar7;
        uVar7 = *(undefined8 *)(puVar9 + -2);
        puVar11[2] = *(undefined8 *)(puVar9 + -4);
        puVar11[3] = uVar7;
        *(undefined4 *)(puVar11 + 4) = *puVar9;
        *(undefined4 *)((longlong)puVar11 + 0x24) = puVar9[1];
        puVar8 = puVar9 + 2;
        puVar9 = puVar9 + 0xc;
        *(undefined1 *)(puVar11 + 5) = *(undefined1 *)puVar8;
      }
      uVar10 = uVar10 - 1;
      puVar11 = puVar11 + 6;
    } while (uVar10 != 0);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  uVar5 = *(undefined4 *)(param_2 + 0x78);
  uVar6 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0xf) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar6;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x88);
  puVar9 = *(undefined4 **)(param_2 + 0x80);
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
    param_1[0x10] = uVar7;
    uVar10 = (ulonglong)uVar2;
    *(uint *)(param_1 + 0x11) = uVar2;
    *(uint *)((longlong)param_1 + 0x8c) = uVar2;
    puVar8 = (undefined4 *)param_1[0x10];
    do {
      if (puVar8 != (undefined4 *)0x0) {
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar8 = uVar3;
      }
      uVar10 = uVar10 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar10 != 0);
  }
  return param_1;
}



// FUNCTION 144c2f690 FUN_144c2f690 body=662 status=ok
// SIG undefined FUN_144c2f690(void)

longlong FUN_144c2f690(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x28);
  uVar10 = *(undefined4 *)(param_2 + 0x2c);
  plVar1 = (longlong *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  if ((longlong *)(param_2 + 0x40) != plVar1) {
    iVar4 = *(int *)(param_2 + 0x48);
    lVar5 = *(longlong *)(param_2 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar4) {
      FUN_144c31540(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    lVar15 = *plVar1;
    iVar7 = iVar4;
    if (*(int *)(param_1 + 0x48) < iVar4) {
      iVar7 = *(int *)(param_1 + 0x48);
    }
    if ((lVar15 != lVar5) && (lVar13 = (longlong)iVar7, 0 < iVar7)) {
      puVar11 = (undefined4 *)(lVar15 + 0x10);
      do {
        puVar14 = (undefined4 *)((lVar5 - lVar15) + -0x10 + (longlong)puVar11);
        uVar8 = puVar14[1];
        uVar9 = puVar14[2];
        uVar10 = puVar14[3];
        puVar11[-4] = *puVar14;
        puVar11[-3] = uVar8;
        puVar11[-2] = uVar9;
        puVar11[-1] = uVar10;
        *puVar11 = *(undefined4 *)((lVar5 - lVar15) + (longlong)puVar11);
        puVar11 = puVar11 + 8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar11 = (undefined4 *)((longlong)iVar7 * 0x20 + lVar5);
    if (0 < iVar4 - iVar7) {
      uVar17 = (ulonglong)(uint)(iVar4 - iVar7);
      puVar14 = (undefined4 *)(*plVar1 + (longlong)iVar7 * 0x20);
      do {
        if (puVar14 != (undefined4 *)0x0) {
          uVar8 = puVar11[1];
          uVar9 = puVar11[2];
          uVar10 = puVar11[3];
          *puVar14 = *puVar11;
          puVar14[1] = uVar8;
          puVar14[2] = uVar9;
          puVar14[3] = uVar10;
          puVar2 = puVar11 + 4;
          puVar11 = puVar11 + 8;
          puVar14[4] = *puVar2;
        }
        uVar17 = uVar17 - 1;
        puVar14 = puVar14 + 8;
      } while (uVar17 != 0);
    }
    *(int *)(param_1 + 0x48) = iVar4;
  }
  puVar12 = (undefined8 *)(param_1 + 0x50);
  if ((undefined8 *)(param_2 + 0x50) != puVar12) {
    iVar4 = *(int *)(param_2 + 0x58);
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar4) {
      FUN_144c313c0(puVar12,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    FUN_144b3d470(*puVar12,uVar6,(longlong)iVar4 * 4);
    *(int *)(param_1 + 0x58) = iVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  if ((longlong *)(param_2 + 0x60) != plVar1) {
    iVar4 = *(int *)(param_2 + 0x68);
    lVar5 = *(longlong *)(param_2 + 0x60);
    if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < iVar4) {
      FUN_144c311a0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    lVar15 = *plVar1;
    iVar7 = iVar4;
    if (*(int *)(param_1 + 0x68) < iVar4) {
      iVar7 = *(int *)(param_1 + 0x68);
    }
    if ((lVar15 != lVar5) && (lVar13 = (longlong)iVar7, 0 < iVar7)) {
      puVar12 = (undefined8 *)(lVar15 + 0x10);
      lVar15 = lVar5 - lVar15;
      do {
        puVar16 = (undefined8 *)(lVar15 + -0x10 + (longlong)puVar12);
        uVar6 = puVar16[1];
        puVar12[-2] = *puVar16;
        puVar12[-1] = uVar6;
        uVar6 = ((undefined8 *)(lVar15 + (longlong)puVar12))[1];
        *puVar12 = *(undefined8 *)(lVar15 + (longlong)puVar12);
        puVar12[1] = uVar6;
        *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(lVar15 + 0x10 + (longlong)puVar12);
        *(undefined4 *)((longlong)puVar12 + 0x14) =
             *(undefined4 *)(lVar15 + 0x14 + (longlong)puVar12);
        *(undefined1 *)(puVar12 + 3) = *(undefined1 *)(lVar15 + 0x18 + (longlong)puVar12);
        puVar12 = puVar12 + 6;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar12 = (undefined8 *)((longlong)iVar7 * 0x30 + lVar5);
    if (0 < iVar4 - iVar7) {
      uVar17 = (ulonglong)(uint)(iVar4 - iVar7);
      puVar16 = (undefined8 *)(*plVar1 + (longlong)iVar7 * 0x30);
      do {
        if (puVar16 != (undefined8 *)0x0) {
          uVar6 = puVar12[1];
          *puVar16 = *puVar12;
          puVar16[1] = uVar6;
          uVar6 = puVar12[3];
          puVar16[2] = puVar12[2];
          puVar16[3] = uVar6;
          *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(puVar12 + 4);
          *(undefined4 *)((longlong)puVar16 + 0x24) = *(undefined4 *)((longlong)puVar12 + 0x24);
          puVar3 = puVar12 + 5;
          puVar12 = puVar12 + 6;
          *(undefined1 *)(puVar16 + 5) = *(undefined1 *)puVar3;
        }
        uVar17 = uVar17 - 1;
        puVar16 = puVar16 + 6;
      } while (uVar17 != 0);
    }
    *(int *)(param_1 + 0x68) = iVar4;
  }
  uVar8 = *(undefined4 *)(param_2 + 0x74);
  uVar9 = *(undefined4 *)(param_2 + 0x78);
  uVar10 = *(undefined4 *)(param_2 + 0x7c);
  puVar12 = (undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  *(undefined4 *)(param_1 + 0x78) = uVar9;
  *(undefined4 *)(param_1 + 0x7c) = uVar10;
  if ((undefined8 *)(param_2 + 0x80) != puVar12) {
    iVar4 = *(int *)(param_2 + 0x88);
    uVar6 = *(undefined8 *)(param_2 + 0x80);
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) < iVar4) {
      FUN_144c31280(puVar12,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    FUN_144b3d470(*puVar12,uVar6,(longlong)iVar4 * 4);
    *(int *)(param_1 + 0x88) = iVar4;
  }
  return param_1;
}



// FUNCTION 144c2f930 FUN_144c2f930 body=3 status=ok
// SIG undefined FUN_144c2f930(void)

void FUN_144c2f930(void)

{
  return;
}



// FUNCTION 144c2f940 FUN_144c2f940 body=372 status=ok
// SIG undefined FUN_144c2f940(void)

undefined8 * FUN_144c2f940(undefined8 *param_1,uint param_2)

{
  *param_1 = hkaiPathfindingUtil::FindPathOutput::vftable;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) << 2);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) * 0x30);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) << 2);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) << 5);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 144c2fac0 FUN_144c2fac0 body=133 status=ok
// SIG undefined FUN_144c2fac0(void)

undefined8 * FUN_144c2fac0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 100000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  return param_1;
}



// FUNCTION 144c2fb50 FUN_144c2fb50 body=744 status=ok
// SIG undefined FUN_144c2fb50(void)

undefined8 * FUN_144c2fb50(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar3 = *(uint *)(param_2 + 1);
  puVar6 = (undefined4 *)*param_2;
  if (0 < (int)uVar3) {
    puVar4 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 2);
    *param_1 = puVar4;
    *(uint *)(param_1 + 1) = uVar3;
    uVar8 = (ulonglong)uVar3;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = uVar1;
      }
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar8 != 0);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  iVar2 = *(int *)(param_2 + 3);
  puVar6 = (undefined4 *)param_2[2];
  if (0 < iVar2) {
    uVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)iVar2 << 2);
    param_1[2] = uVar5;
    *(int *)(param_1 + 3) = iVar2;
    *(int *)((longlong)param_1 + 0x1c) = iVar2;
    puVar4 = (undefined4 *)param_1[2];
    iVar9 = iVar7;
    if (3 < iVar2) {
      uVar3 = (iVar2 - 4U >> 2) + 1;
      uVar8 = (ulonglong)uVar3;
      iVar9 = uVar3 * 4;
      do {
        if (puVar4 != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar4 = uVar1;
        }
        if (puVar4 + 1 != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4[1] = uVar1;
        }
        if (puVar4 + 2 != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4[2] = uVar1;
        }
        if (puVar4 + 3 != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4[3] = uVar1;
        }
        puVar4 = puVar4 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      if (iVar2 <= iVar9) goto LAB_144c2fc9b;
    }
    uVar8 = (ulonglong)(uint)(iVar2 - iVar9);
    do {
      if (puVar4 != (undefined4 *)0x0) {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = uVar1;
      }
      puVar4 = puVar4 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
LAB_144c2fc9b:
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  uVar3 = *(uint *)(param_2 + 5);
  puVar6 = (undefined4 *)param_2[4];
  if (0 < (int)uVar3) {
    uVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 2);
    param_1[4] = uVar5;
    uVar8 = (ulonglong)uVar3;
    *(uint *)(param_1 + 5) = uVar3;
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    puVar4 = (undefined4 *)param_1[4];
    do {
      if (puVar4 != (undefined4 *)0x0) {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = uVar1;
      }
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar8 != 0);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  iVar2 = *(int *)(param_2 + 7);
  puVar6 = (undefined4 *)param_2[6];
  if (0 < iVar2) {
    uVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)iVar2 << 2);
    param_1[6] = uVar5;
    *(int *)(param_1 + 7) = iVar2;
    *(int *)((longlong)param_1 + 0x3c) = iVar2;
    puVar4 = (undefined4 *)param_1[6];
    if (3 < iVar2) {
      uVar3 = (iVar2 - 4U >> 2) + 1;
      uVar8 = (ulonglong)uVar3;
      iVar7 = uVar3 * 4;
      do {
        if (puVar4 != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar4 = uVar1;
        }
        if (puVar4 + 1 != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4[1] = uVar1;
        }
        if (puVar4 + 2 != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4[2] = uVar1;
        }
        if (puVar4 + 3 != (undefined4 *)0x0) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4[3] = uVar1;
        }
        puVar4 = puVar4 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      if (iVar2 <= iVar7) goto LAB_144c2fdbe;
    }
    uVar8 = (ulonglong)(uint)(iVar2 - iVar7);
    do {
      if (puVar4 != (undefined4 *)0x0) {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = uVar1;
      }
      puVar4 = puVar4 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
LAB_144c2fdbe:
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  uVar5 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar5;
  uVar5 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar5;
  return param_1;
}



// FUNCTION 144c2fe40 FUN_144c2fe40 body=415 status=ok
// SIG undefined FUN_144c2fe40(void)

undefined8 * FUN_144c2fe40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 != param_1) {
    iVar2 = *(int *)(param_2 + 1);
    uVar3 = *param_2;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_144c31600(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*param_1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 1) = iVar2;
  }
  puVar1 = param_1 + 2;
  if (param_2 + 2 != puVar1) {
    iVar2 = *(int *)(param_2 + 3);
    uVar3 = param_2[2];
    if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar2) {
      FUN_144c31320(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 3) = iVar2;
  }
  puVar1 = param_1 + 4;
  if (param_2 + 4 != puVar1) {
    iVar2 = *(int *)(param_2 + 5);
    uVar3 = param_2[4];
    if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar2) {
      FUN_144c31600(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 5) = iVar2;
  }
  puVar1 = param_1 + 6;
  if (param_2 + 6 != puVar1) {
    iVar2 = *(int *)(param_2 + 7);
    uVar3 = param_2[6];
    if ((int)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) < iVar2) {
      FUN_144c31320(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 7) = iVar2;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  uVar3 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar3;
  uVar3 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar3;
  return param_1;
}



// FUNCTION 144c2ffe0 FUN_144c2ffe0 body=260 status=ok
// SIG undefined FUN_144c2ffe0(void)

void FUN_144c2ffe0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 2);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 2);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 2);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c300f0 FUN_144c300f0 body=662 status=ok
// SIG undefined FUN_144c300f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_144c300f0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_e8;
  int local_e0;
  uint local_dc;
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined4 local_3d;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_40 = 0;
  local_88 = *(undefined4 *)(param_3 + 2);
  local_28 = *(undefined4 *)(param_4 + 2);
  local_84 = *(undefined4 *)(param_2 + 0x78);
  local_3f = *(undefined1 *)(param_2 + 0xcc);
  local_68 = *(undefined8 *)(param_2 + 0x98);
  local_60 = *(undefined8 *)(param_2 + 0xa0);
  local_48 = *(undefined8 *)(param_2 + 0xb8);
  local_58 = *(undefined8 *)(param_2 + 0xa8);
  local_80 = *(undefined8 *)(param_2 + 0x80);
  uStack_78 = *(undefined8 *)(param_2 + 0x88);
  local_50 = *(undefined4 *)(param_2 + 0xb0);
  local_70 = *(undefined4 *)(param_2 + 0xdc);
  local_3e = *(undefined1 *)(param_2 + 0xc4);
  local_6c = *(undefined4 *)(param_2 + 0xd8);
  local_3d = 0x1000000;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0x80000000;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x80000000;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x80000000;
  local_b4 = 0;
  local_b0 = 0xffffffff;
  local_ac = 0;
  local_a8 = _DAT_14c6dae80;
  uStack_a4 = uRam000000014c6dae84;
  uStack_a0 = uRam000000014c6dae88;
  uStack_9c = uRam000000014c6dae8c;
  local_b8 = 0;
  iVar4 = FUN_144c5ef10(local_6c,&local_98,&local_e8);
  iVar3 = local_e0;
  lVar2 = local_e8;
  if (param_5 != 0) {
    plVar1 = (longlong *)(param_5 + 0x50);
    *(char *)(param_5 + 0x7c) = (iVar4 == 0) + '\x01';
    if (&local_e8 != plVar1) {
      lVar5 = (longlong)local_e0;
      if ((int)(*(uint *)(param_5 + 0x5c) & 0x7fffffff) < local_e0) {
        FUN_144c313c0(plVar1,&PTR_vftable_14c6e47a0,lVar5);
      }
      FUN_144b3d470(*plVar1,lVar2,lVar5 << 2);
      *(int *)(param_5 + 0x58) = iVar3;
    }
    uVar6 = local_ac;
    if (iVar4 == 0) {
      uVar6 = *(undefined4 *)(param_5 + 0x78);
    }
    *(undefined4 *)(param_5 + 0x78) = uVar6;
  }
  local_c0 = 0;
  if ((-1 < (int)local_bc) && (local_c8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_c8,(ulonglong)(local_bc & 0x7fffffff) << 4);
  }
  local_c8 = 0;
  local_bc = 0x80000000;
  local_d0 = 0;
  if ((-1 < (int)local_cc) && (local_d8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_d8,(ulonglong)(local_cc & 0x7fffffff) << 2);
  }
  local_d8 = 0;
  local_e0 = 0;
  local_cc = 0x80000000;
  if ((-1 < (int)local_dc) && (local_e8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_e8,(ulonglong)(local_dc & 0x7fffffff) << 2);
  }
  return iVar4 != 0;
}



// FUNCTION 144c30390 FUN_144c30390 body=240 status=ok
// SIG undefined FUN_144c30390(void)

void FUN_144c30390(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iStackX_c;
  
  iVar2 = 0x90200;
  if (param_4 != 0) {
    iVar2 = 0x24200;
  }
  iVar1 = (int)*param_1;
  if (iVar1 < 1) {
    iVar1 = 0x20000;
    if (param_4 != 0) {
      iVar1 = 0x8000;
    }
  }
  iStackX_c = (int)((ulonglong)*param_1 >> 0x20);
  if (iStackX_c < 1) {
    iStackX_c = iVar2;
  }
  if ((int)(*(uint *)((longlong)param_2 + 0x24) & 0x7fffffff) < iVar1) {
    FUN_14039ab22(param_2 + 3,&PTR_vftable_14c6e47c0,(longlong)iVar1);
  }
  if ((*(int *)(param_2 + 4) < iVar1) || (iVar1 < *(int *)(param_2 + 4))) {
    *(int *)(param_2 + 4) = iVar1;
  }
  if ((int)(*(uint *)((longlong)param_2 + 0x34) & 0x7fffffff) < iStackX_c) {
    FUN_14039ab22(param_2 + 5,&PTR_vftable_14c6e47c0,(longlong)iStackX_c);
  }
  if ((*(int *)(param_2 + 6) < iStackX_c) || (iStackX_c < *(int *)(param_2 + 6))) {
    *(int *)(param_2 + 6) = iStackX_c;
  }
  *param_2 = param_2[3];
  *(uint *)(param_2 + 2) = *(uint *)((longlong)param_2 + 0x24) & 0x7fffffff;
  param_2[1] = param_2[5];
  *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x34) & 0x7fffffff;
  *param_3 = param_2[3];
  param_3[1] = param_2[1];
  return;
}



// FUNCTION 144c30480 FUN_144c30480 body=276 status=ok
// SIG undefined FUN_144c30480(void)

void FUN_144c30480(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,undefined4 param_7)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  
  *(undefined1 *)(param_6 + 0x7c) = 1;
  *(undefined4 *)(param_6 + 0x70) = 0;
  *(undefined4 *)(param_6 + 0x74) = param_7;
  bVar2 = *(byte *)(param_3 + 0xc2);
  if ((bVar2 & 1) != 0) {
    iVar3 = *(int *)(param_6 + 0x58) + 2;
    fVar1 = *(float *)(param_3 + 0x80);
    if ((int)(*(uint *)(param_6 + 0x6c) & 0x7fffffff) < iVar3) {
      FUN_144c30b60(param_6 + 0x60,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144fc1930(param_1,param_2,param_6 + 0x50,*(undefined4 *)(param_4 + 0x10),param_4,param_5,
                  bVar2 & 2,bVar2 & 4,fVar1 * 0.5,param_6 + 0x60,0,0);
  }
  return;
}



// FUNCTION 144c305a0 FUN_144c305a0 body=343 status=ok
// SIG undefined FUN_144c305a0(void)

uint * FUN_144c305a0(uint *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  auVar5._0_4_ = -(uint)((*param_4 & 0x7f800000) == 0x7f800000);
  auVar5._4_4_ = -(uint)((uVar2 & 0x7f800000) == 0x7f800000);
  auVar5._8_4_ = -(uint)((uVar3 & 0x7f800000) == 0x7f800000);
  auVar5._12_4_ = -(uint)((uVar4 & 0x7f800000) == 0x7f800000);
  if (((SUB161(auVar5 >> 7,0) & 1) == 0 && (SUB161(auVar5 >> 0x27,0) & 1) == 0) &&
      (SUB161(auVar5 >> 0x47,0) & 1) == 0) {
    if ((char)param_4[0xc] == '\0') {
      FUN_144fc0650();
      return param_1;
    }
    uVar1 = param_4[4];
    if (uVar1 != 0xffffffff) {
      *param_1 = *param_4;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      param_1[4] = uVar1;
      return param_1;
    }
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  return param_1;
}



// FUNCTION 144c30700 FUN_144c30700 body=670 status=ok
// SIG undefined FUN_144c30700(void)

undefined4 * FUN_144c30700(longlong *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  longlong *_Dst;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  uint local_res18;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar9 = 8;
  if (8 < param_3) {
    iVar9 = param_3;
  }
  lVar3 = param_1[1];
  lVar11 = 0;
  local_48 = 0;
  local_40 = 0;
  local_res18 = 0x80000000;
  local_3c = 0x80000000;
  if (param_1 != &local_48) {
    FUN_144c2e9f0(&local_48,&PTR_vftable_14c6e47a0);
    FUN_144c2e9f0(param_1,&PTR_vftable_14c6e47a0);
    lVar11 = *param_1;
    *param_1 = local_48;
    local_res18 = *(uint *)((longlong)param_1 + 0xc);
    *(undefined4 *)(param_1 + 1) = local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_144c31280(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar5 | uVar5 >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar7 = uVar5 - (uVar5 >> 1);
  if ((int)param_1[1] < (int)uVar7) {
    *(uint *)(param_1 + 1) = uVar7;
  }
  else if ((int)uVar7 < (int)param_1[1]) {
    *(uint *)(param_1 + 1) = uVar7;
  }
  iVar8 = 0;
  iVar9 = iVar8;
  if ((0 < (int)uVar7) && (iVar9 = 0, 3 < uVar7)) {
    _Dst = (longlong *)*param_1;
    if ((param_1 < _Dst) ||
       ((longlong *)((longlong)_Dst + (longlong)(int)(uVar7 - 1) * 4) < param_1)) {
      uVar4 = uVar7 & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      do {
        iVar8 = iVar8 + 4;
      } while (iVar8 < (int)(uVar7 - uVar4));
      iVar9 = (uVar7 - uVar4) + 3;
      memset(_Dst,-1,(longlong)((int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2) << 4);
      iVar9 = iVar8;
    }
  }
  for (lVar6 = (longlong)iVar9; lVar6 < (longlong)((ulonglong)uVar5 - (ulonglong)(uVar5 >> 1));
      lVar6 = lVar6 + 1) {
    *(undefined4 *)(*param_1 + lVar6 * 4) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  lVar6 = 0;
  if (0 < (longlong)(int)lVar3) {
    do {
      iVar9 = *(int *)(lVar11 + lVar6 * 4);
      if (iVar9 != -1) {
        iVar8 = (int)param_1[1] + -1;
        if (iVar8 < (int)param_1[2] * 2) {
          FUN_144c30700(param_1,local_res8,iVar8 * 2 + 2);
        }
        iVar10 = 1;
        lVar2 = *param_1;
        uVar7 = (int)param_1[1] - 1;
        uVar5 = iVar9 * -0x61c8864f;
        uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                iVar9 * -0x4f000000) & uVar7;
        lVar1 = (longlong)(int)uVar5 * 4;
        iVar8 = *(int *)(lVar1 + lVar2);
        while (iVar8 != -1) {
          if (*(int *)(lVar1 + lVar2) == iVar9) {
            iVar10 = 0;
            break;
          }
          uVar5 = uVar5 + 1 & uVar7;
          lVar1 = (longlong)(int)uVar5 * 4;
          iVar8 = *(int *)(lVar1 + lVar2);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar10;
        *(int *)(lVar2 + (longlong)(int)uVar5 * 4) = iVar9;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)lVar3);
  }
  *param_2 = 0;
  if ((-1 < (int)local_res18) && (lVar11 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar11,(ulonglong)(local_res18 & 0x7fffffff) << 2);
  }
  return param_2;
}



// FUNCTION 144c309a0 FUN_144c309a0 body=447 status=ok
// SIG undefined FUN_144c309a0(void)

int FUN_144c309a0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  pfVar5 = param_1 + 4;
  iVar6 = 0;
  iVar4 = 1;
  fVar9 = (fVar2 - param_1[1]) * (fVar2 - param_1[1]) + (fVar1 - *param_1) * (fVar1 - *param_1) +
          (fVar3 - param_1[2]) * (fVar3 - param_1[2]);
  if (1 < param_2) {
    if (4 < param_2) {
      iVar7 = 3;
      do {
        fVar10 = (fVar2 - pfVar5[1]) * (fVar2 - pfVar5[1]) + (fVar1 - *pfVar5) * (fVar1 - *pfVar5) +
                 (fVar3 - pfVar5[2]) * (fVar3 - pfVar5[2]);
        fVar11 = fVar9;
        if (fVar10 < fVar9) {
          fVar11 = fVar10;
        }
        iVar8 = iVar4;
        if (fVar10 >= fVar9) {
          iVar8 = iVar6;
        }
        fVar10 = (fVar2 - pfVar5[5]) * (fVar2 - pfVar5[5]) +
                 (fVar1 - pfVar5[4]) * (fVar1 - pfVar5[4]) +
                 (fVar3 - pfVar5[6]) * (fVar3 - pfVar5[6]);
        fVar9 = fVar11;
        if (fVar10 < fVar11) {
          fVar9 = fVar10;
        }
        iVar6 = iVar7 + -1;
        if (fVar10 >= fVar11) {
          iVar6 = iVar8;
        }
        fVar10 = (fVar2 - pfVar5[9]) * (fVar2 - pfVar5[9]) +
                 (fVar1 - pfVar5[8]) * (fVar1 - pfVar5[8]) +
                 (fVar3 - pfVar5[10]) * (fVar3 - pfVar5[10]);
        fVar11 = fVar9;
        if (fVar10 < fVar9) {
          fVar11 = fVar10;
        }
        iVar8 = iVar7;
        if (fVar10 >= fVar9) {
          iVar8 = iVar6;
        }
        fVar9 = (fVar2 - pfVar5[0xd]) * (fVar2 - pfVar5[0xd]) +
                (fVar1 - pfVar5[0xc]) * (fVar1 - pfVar5[0xc]) +
                (fVar3 - pfVar5[0xe]) * (fVar3 - pfVar5[0xe]);
        iVar6 = iVar7 + 1;
        if (fVar11 <= fVar9) {
          iVar6 = iVar8;
          fVar9 = fVar11;
        }
        pfVar5 = pfVar5 + 0x10;
        iVar4 = iVar4 + 4;
        iVar7 = iVar7 + 4;
      } while (iVar4 < param_2 + -3);
      if (param_2 <= iVar4) {
        return iVar6;
      }
    }
    do {
      fVar11 = (fVar2 - pfVar5[1]) * (fVar2 - pfVar5[1]) + (fVar1 - *pfVar5) * (fVar1 - *pfVar5) +
               (fVar3 - pfVar5[2]) * (fVar3 - pfVar5[2]);
      iVar7 = iVar4;
      if (fVar9 <= fVar11) {
        iVar7 = iVar6;
        fVar11 = fVar9;
      }
      fVar9 = fVar11;
      iVar6 = iVar7;
      pfVar5 = pfVar5 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return iVar6;
}



// FUNCTION 144c30b60 FUN_144c30b60 body=304 status=ok
// SIG undefined FUN_144c30b60(void)

ulonglong FUN_144c30b60(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar9 = param_3;
  if (param_3 < uVar11) {
    uVar9 = uVar11;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar9 * 0x30;
  lVar6 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  puVar8 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar7 = (undefined4 *)(lVar6 + 0x20);
    uVar11 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if (puVar7 + -8 != (undefined4 *)0x0) {
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        puVar7[-8] = *puVar8;
        puVar7[-7] = uVar2;
        puVar7[-6] = uVar3;
        puVar7[-5] = uVar4;
        uVar5 = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)(puVar7 + -4) = *(undefined8 *)(puVar8 + 4);
        *(undefined8 *)(puVar7 + -2) = uVar5;
        *puVar7 = puVar8[8];
        puVar7[1] = puVar8[9];
        *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar8 + 10);
      }
      puVar7 = puVar7 + 0xc;
      puVar8 = puVar8 + 0xc;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x30 + 0x30;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x30;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  *param_1 = lVar6;
  return uVar11;
}



// FUNCTION 144c30c90 FUN_144c30c90 body=235 status=ok
// SIG undefined FUN_144c30c90(void)

void FUN_144c30c90(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar3 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144c30d80 FUN_144c30d80 body=264 status=ok
// SIG undefined FUN_144c30d80(void)

void FUN_144c30d80(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar7 * 0x20;
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
        puVar5[4] = puVar6[4];
      }
      puVar5 = puVar5 + 8;
      puVar6 = puVar6 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x20 + 0x20;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144c30e90 FUN_144c30e90 body=284 status=ok
// SIG undefined FUN_144c30e90(void)

void FUN_144c30e90(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x40;
  lVar5 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  puVar7 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar6 = (undefined4 *)(lVar5 + 0x20);
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if ((undefined8 *)(puVar6 + -8) != (undefined8 *)0x0) {
        uVar4 = puVar7[1];
        *(undefined8 *)(puVar6 + -8) = *puVar7;
        *(undefined8 *)(puVar6 + -6) = uVar4;
        puVar6[-4] = *(undefined4 *)(puVar7 + 2);
        uVar1 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uVar2 = *(undefined4 *)(puVar7 + 5);
        uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
        *puVar6 = *(undefined4 *)(puVar7 + 4);
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(puVar7 + 6);
      }
      puVar6 = puVar6 + 0x10;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x40 + 0x40;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x40;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  *param_1 = lVar5;
  return;
}



// FUNCTION 144c30fb0 FUN_144c30fb0 body=235 status=ok
// SIG undefined FUN_144c30fb0(void)

void FUN_144c30fb0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar3 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144c310a0 FUN_144c310a0 body=247 status=ok
// SIG undefined FUN_144c310a0(void)

void FUN_144c310a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 4,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c311a0 FUN_144c311a0 body=219 status=ok
// SIG undefined FUN_144c311a0(void)

void FUN_144c311a0(longlong *param_1,longlong *param_2,ulonglong param_3)

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
        *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(puVar7 + 10);
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



// FUNCTION 144c31280 FUN_144c31280 body=159 status=ok
// SIG undefined FUN_144c31280(void)

void FUN_144c31280(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c31320 FUN_144c31320 body=159 status=ok
// SIG undefined FUN_144c31320(void)

void FUN_144c31320(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c313c0 FUN_144c313c0 body=159 status=ok
// SIG undefined FUN_144c313c0(void)

void FUN_144c313c0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c31460 FUN_144c31460 body=213 status=ok
// SIG undefined FUN_144c31460(void)

void FUN_144c31460(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(*param_2 + 8))(param_2,param_3 << 6);
  puVar7 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar6 = (undefined4 *)(lVar5 + 0x20);
    uVar8 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if ((undefined8 *)(puVar6 + -8) != (undefined8 *)0x0) {
        uVar4 = puVar7[1];
        *(undefined8 *)(puVar6 + -8) = *puVar7;
        *(undefined8 *)(puVar6 + -6) = uVar4;
        puVar6[-4] = *(undefined4 *)(puVar7 + 2);
        uVar1 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uVar2 = *(undefined4 *)(puVar7 + 5);
        uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
        *puVar6 = *(undefined4 *)(puVar7 + 4);
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(puVar7 + 6);
      }
      puVar6 = puVar6 + 0x10;
      puVar7 = puVar7 + 8;
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



// FUNCTION 144c31540 FUN_144c31540 body=185 status=ok
// SIG undefined FUN_144c31540(void)

void FUN_144c31540(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 5);
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
      puVar5 = puVar5 + 8;
      puVar6 = puVar6 + 8;
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



// FUNCTION 144c31600 FUN_144c31600 body=159 status=ok
// SIG undefined FUN_144c31600(void)

void FUN_144c31600(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c316a0 FUN_144c316a0 body=103 status=ok
// SIG undefined FUN_144c316a0(void)

void FUN_144c316a0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 2);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c31710 FUN_144c31710 body=309 status=ok
// SIG undefined FUN_144c31710(void)

undefined8 * FUN_144c31710(undefined8 *param_1,int param_2)

{
  *param_1 = hkaiVolumePathfindingUtil::FindPathInput::vftable;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[2] = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff80000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x7f7fffee;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x12) = 0xbf800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 100000;
  if (0 < param_2) {
    if ((int)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) < param_2) {
      FUN_144c33690(param_1 + 9,&PTR_vftable_14c6e47a0,(longlong)param_2);
    }
    if ((*(int *)(param_1 + 10) < param_2) || (param_2 < *(int *)(param_1 + 10))) {
      *(int *)(param_1 + 10) = param_2;
    }
    if ((int)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) < param_2) {
      FUN_1418055da(param_1 + 6,&PTR_vftable_14c6e47a0,(longlong)param_2);
    }
    if (*(int *)(param_1 + 7) < param_2) {
      *(int *)(param_1 + 7) = param_2;
    }
    else if (param_2 < *(int *)(param_1 + 7)) {
      *(int *)(param_1 + 7) = param_2;
    }
  }
  return param_1;
}



// FUNCTION 144c31850 FUN_144c31850 body=376 status=ok
// SIG undefined FUN_144c31850(void)

undefined8 * FUN_144c31850(undefined8 *param_1,longlong param_2)

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
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiVolumePathfindingUtil::FindPathInput::vftable;
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x38);
  puVar9 = *(undefined4 **)(param_2 + 0x30);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    param_1[6] = uVar6;
    uVar8 = (ulonglong)uVar1;
    *(uint *)(param_1 + 7) = uVar1;
    *(uint *)((longlong)param_1 + 0x3c) = uVar1;
    puVar7 = (undefined4 *)param_1[6];
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
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x50);
  puVar9 = *(undefined4 **)(param_2 + 0x48);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[9] = uVar6;
    uVar8 = (ulonglong)uVar1;
    *(uint *)(param_1 + 10) = uVar1;
    *(uint *)((longlong)param_1 + 0x54) = uVar1;
    puVar7 = (undefined4 *)param_1[9];
    do {
      if (puVar7 != (undefined4 *)0x0) {
        uVar2 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar7 = uVar2;
      }
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar6;
  return param_1;
}



// FUNCTION 144c319d0 FUN_144c319d0 body=282 status=ok
// SIG undefined FUN_144c319d0(void)

longlong FUN_144c319d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  puVar1 = (undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  if ((undefined8 *)(param_2 + 0x30) != puVar1) {
    iVar2 = *(int *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar2) {
      FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_1 + 0x38) = iVar2;
  }
  puVar1 = (undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  if ((undefined8 *)(param_2 + 0x48) != puVar1) {
    iVar2 = *(int *)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < iVar2) {
      FUN_144c33880(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 0x50) = iVar2;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  return param_1;
}



// FUNCTION 144c31af0 FUN_144c31af0 body=3 status=ok
// SIG undefined FUN_144c31af0(void)

void FUN_144c31af0(void)

{
  return;
}



// FUNCTION 144c31b00 FUN_144c31b00 body=22 status=ok
// SIG undefined FUN_144c31b00(void)

void FUN_144c31b00(longlong param_1,undefined8 param_2)

{
  FUN_144c30390(param_1 + 0x94,param_2,param_1 + 0xa0,0);
  return;
}



// FUNCTION 144c31b20 FUN_144c31b20 body=237 status=ok
// SIG undefined FUN_144c31b20(void)

undefined8 * FUN_144c31b20(undefined8 *param_1,uint param_2)

{
  *param_1 = hkaiVolumePathfindingUtil::FindPathInput::vftable;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 2);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 4);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 144c31c10 FUN_144c31c10 body=96 status=ok
// SIG undefined FUN_144c31c10(void)

undefined8 * FUN_144c31c10(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiVolumePathfindingUtil::FindPathOutput::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0x7f7fffee;
  return param_1;
}



// FUNCTION 144c31c70 FUN_144c31c70 body=429 status=ok
// SIG undefined FUN_144c31c70(void)

undefined8 * FUN_144c31c70(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiVolumePathfindingUtil::FindPathOutput::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x20);
  puVar6 = *(undefined4 **)(param_2 + 0x18);
  if (0 < (int)uVar1) {
    uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[3] = uVar4;
    uVar7 = (ulonglong)uVar1;
    *(uint *)(param_1 + 4) = uVar1;
    *(uint *)((longlong)param_1 + 0x24) = uVar1;
    puVar5 = (undefined4 *)param_1[3];
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar5 = uVar2;
      }
      uVar7 = uVar7 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 != 0);
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x30);
  puVar6 = *(undefined4 **)(param_2 + 0x28);
  if (0 < (int)uVar1) {
    uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[5] = uVar4;
    uVar7 = (ulonglong)uVar1;
    *(uint *)(param_1 + 6) = uVar1;
    *(uint *)((longlong)param_1 + 0x34) = uVar1;
    puVar5 = (undefined4 *)param_1[5];
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar5 = uVar2;
      }
      uVar7 = uVar7 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 != 0);
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x40);
  lVar3 = *(longlong *)(param_2 + 0x38);
  if (0 < (int)uVar1) {
    uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 * 0x30);
    param_1[7] = uVar4;
    puVar6 = (undefined4 *)(lVar3 + 0x20);
    *(uint *)(param_1 + 8) = uVar1;
    uVar7 = (ulonglong)uVar1;
    *(uint *)((longlong)param_1 + 0x44) = uVar1;
    puVar8 = (undefined8 *)param_1[7];
    do {
      if (puVar8 != (undefined8 *)0x0) {
        uVar4 = *(undefined8 *)(puVar6 + -6);
        *puVar8 = *(undefined8 *)(puVar6 + -8);
        puVar8[1] = uVar4;
        uVar4 = *(undefined8 *)(puVar6 + -2);
        puVar8[2] = *(undefined8 *)(puVar6 + -4);
        puVar8[3] = uVar4;
        *(undefined4 *)(puVar8 + 4) = *puVar6;
        *(undefined4 *)((longlong)puVar8 + 0x24) = puVar6[1];
        puVar5 = puVar6 + 2;
        puVar6 = puVar6 + 0xc;
        *(undefined1 *)(puVar8 + 5) = *(undefined1 *)puVar5;
      }
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + 6;
    } while (uVar7 != 0);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar4;
  return param_1;
}



// FUNCTION 144c31e20 FUN_144c31e20 body=420 status=ok
// SIG undefined FUN_144c31e20(void)

longlong FUN_144c31e20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(param_2 + 0x18);
  plVar2 = (longlong *)(param_1 + 0x18);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x80000000;
    FUN_144c316a0(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x28);
  plVar2 = (longlong *)(param_1 + 0x28);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x80000000;
    FUN_144c32290(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x38);
  plVar2 = (longlong *)(param_1 + 0x38);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x44) & 0x7fffffff) * 0x30);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x80000000;
    FUN_144c2e950(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  return param_1;
}



// FUNCTION 144c31fd0 FUN_144c31fd0 body=457 status=ok
// SIG undefined FUN_144c31fd0(void)

longlong FUN_144c31fd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  puVar7 = (undefined8 *)(param_1 + 0x18);
  if ((undefined8 *)(param_2 + 0x18) != puVar7) {
    iVar3 = *(int *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar3) {
      FUN_144c33880(puVar7,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar7,uVar4,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0x20) = iVar3;
  }
  puVar7 = (undefined8 *)(param_1 + 0x28);
  if ((undefined8 *)(param_2 + 0x28) != puVar7) {
    iVar3 = *(int *)(param_2 + 0x30);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar3) {
      FUN_144c33920(puVar7,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar7,uVar4,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0x30) = iVar3;
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if ((longlong *)(param_2 + 0x38) != plVar1) {
    iVar3 = *(int *)(param_2 + 0x40);
    lVar5 = *(longlong *)(param_2 + 0x38);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar3) {
      FUN_144c311a0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    lVar9 = *plVar1;
    iVar6 = iVar3;
    if (*(int *)(param_1 + 0x40) < iVar3) {
      iVar6 = *(int *)(param_1 + 0x40);
    }
    if ((lVar9 != lVar5) && (lVar8 = (longlong)iVar6, 0 < iVar6)) {
      puVar7 = (undefined8 *)(lVar9 + 0x10);
      lVar9 = lVar5 - lVar9;
      do {
        puVar10 = (undefined8 *)(lVar9 + -0x10 + (longlong)puVar7);
        uVar4 = puVar10[1];
        puVar7[-2] = *puVar10;
        puVar7[-1] = uVar4;
        uVar4 = ((undefined8 *)(lVar9 + (longlong)puVar7))[1];
        *puVar7 = *(undefined8 *)(lVar9 + (longlong)puVar7);
        puVar7[1] = uVar4;
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(lVar9 + 0x10 + (longlong)puVar7);
        *(undefined4 *)((longlong)puVar7 + 0x14) = *(undefined4 *)(lVar9 + 0x14 + (longlong)puVar7);
        *(undefined1 *)(puVar7 + 3) = *(undefined1 *)(lVar9 + 0x18 + (longlong)puVar7);
        puVar7 = puVar7 + 6;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar7 = (undefined8 *)((longlong)iVar6 * 0x30 + lVar5);
    if (0 < iVar3 - iVar6) {
      uVar11 = (ulonglong)(uint)(iVar3 - iVar6);
      puVar10 = (undefined8 *)(*plVar1 + (longlong)iVar6 * 0x30);
      do {
        if (puVar10 != (undefined8 *)0x0) {
          uVar4 = puVar7[1];
          *puVar10 = *puVar7;
          puVar10[1] = uVar4;
          uVar4 = puVar7[3];
          puVar10[2] = puVar7[2];
          puVar10[3] = uVar4;
          *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar7 + 4);
          *(undefined4 *)((longlong)puVar10 + 0x24) = *(undefined4 *)((longlong)puVar7 + 0x24);
          puVar2 = puVar7 + 5;
          puVar7 = puVar7 + 6;
          *(undefined1 *)(puVar10 + 5) = *(undefined1 *)puVar2;
        }
        uVar11 = uVar11 - 1;
        puVar10 = puVar10 + 6;
      } while (uVar11 != 0);
    }
    *(int *)(param_1 + 0x40) = iVar3;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  return param_1;
}



// FUNCTION 144c321a0 FUN_144c321a0 body=225 status=ok
// SIG undefined FUN_144c321a0(void)

void FUN_144c321a0(undefined8 *param_1)

{
  *param_1 = hkaiVolumePathfindingUtil::FindPathOutput::vftable;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) * 0x30);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
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
  return;
}



// FUNCTION 144c32290 FUN_144c32290 body=103 status=ok
// SIG undefined FUN_144c32290(void)

void FUN_144c32290(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 2);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c32300 FUN_144c32300 body=3 status=ok
// SIG undefined FUN_144c32300(void)

void FUN_144c32300(void)

{
  return;
}



// FUNCTION 144c32310 FUN_144c32310 body=298 status=ok
// SIG undefined FUN_144c32310(void)

undefined8 * FUN_144c32310(undefined8 *param_1,uint param_2)

{
  *param_1 = hkaiVolumePathfindingUtil::FindPathOutput::vftable;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) * 0x30);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
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
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 144c32440 FUN_144c32440 body=3784 status=ok
// SIG undefined FUN_144c32440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c32440(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  short *psVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined8 uVar9;
  bool bVar10;
  undefined1 auVar11 [14];
  void *pvVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  undefined1 *puVar20;
  char cVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uStackX_14;
  undefined4 local_res18;
  undefined8 *local_res20;
  longlong in_stack_fffffffffffffa98;
  undefined4 uVar44;
  float *in_stack_fffffffffffffaa0;
  undefined4 uVar45;
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  undefined8 local_518;
  undefined8 uStack_510;
  longlong local_508;
  longlong local_500;
  uint local_4f8;
  uint local_4f4;
  longlong local_4f0;
  uint local_4e8;
  uint local_4e4;
  longlong local_4e0;
  uint local_4d8;
  uint local_4d4;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  longlong lStack_4b0;
  undefined8 local_4a8;
  longlong local_4a0;
  longlong lStack_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  longlong *local_478 [2];
  longlong local_468;
  longlong local_460;
  longlong local_458;
  undefined1 local_448 [16];
  int local_438;
  float local_430;
  undefined4 local_42c;
  int local_428;
  undefined4 *local_420;
  undefined4 *local_418;
  int local_400;
  int local_3fc;
  longlong local_358;
  uint local_350;
  int local_34c;
  int local_348;
  longlong local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined4 local_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  longlong local_2f0;
  longlong lStack_2e8;
  longlong local_2e0;
  longlong lStack_2d8;
  longlong *local_2d0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined2 local_2a4;
  undefined8 local_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined2 local_27c;
  undefined8 local_278;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint local_168 [2];
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  uint local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  
  *(undefined4 *)(param_3 + 0x50) = 0;
  if ((*(int *)(param_2 + 0x50) == 0) || (uVar23 = *(uint *)(param_2 + 0x40), uVar23 == 0xffffffff))
  {
    *(undefined4 *)(param_3 + 0x54) = 0xffffffff;
    *(undefined1 *)(param_3 + 0x5c) = 5;
    return;
  }
  cVar21 = *(char *)(param_2 + 0x80);
  uVar28 = 0xffffffff;
  if (cVar21 == '\0') {
LAB_144c3260f:
    iVar15 = 0;
    local_518 = (char *)(param_2 + 0x78);
    local_res18 = 0;
    if (cVar21 != '\0') goto LAB_144c32649;
    local_res18 = 0;
  }
  else {
    uVar35 = *(undefined8 *)*(undefined1 (*) [16])(param_2 + 0x20);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    local_538 = *(undefined1 (*) [16])(param_2 + 0x20);
    iVar15 = FUN_144c309a0(*(longlong *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38),local_538,
                           cVar21);
    uVar28 = (ulonglong)iVar15;
    if (uVar23 != *(uint *)(*(longlong *)(param_2 + 0x48) + uVar28 * 4)) goto LAB_144c3260f;
    puVar27 = (undefined8 *)(uVar28 * 0x10 + *(longlong *)(param_2 + 0x30));
    lVar4 = *(longlong *)((ulonglong)(uVar23 >> 0x16) * 0x120 + 8 + *(longlong *)(param_1 + 0x38));
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = _DAT_14c6dae80;
    uStack_94 = uRam000000014c6dae84;
    uStack_90 = uRam000000014c6dae88;
    uStack_8c = uRam000000014c6dae8c;
    local_88 = _DAT_14c6dae80 ^ 0x80000000;
    uStack_84 = uRam000000014c6dae84 ^ 0x80000000;
    uStack_80 = uRam000000014c6dae88 ^ 0x80000000;
    uStack_7c = uRam000000014c6dae8c ^ 0x80000000;
    local_160 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x18) +
                (ulonglong)(uVar23 & 0x3fffff) * 0x18;
    local_120 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x18) +
                (ulonglong)(uVar23 & 0x3fffff) * 0x18;
    local_118 = *puVar27;
    uStack_110 = puVar27[1];
    local_518 = (char *)(param_2 + 0x78);
    local_e0 = 0;
    local_e8 = 0xffffffff;
    local_538._8_8_ = param_2 + 0x60;
    local_538._0_8_ = param_1;
    local_528[8] = 0x52;
    local_528._0_8_ = local_168;
    local_168[0] = uVar23;
    local_158 = uVar35;
    uStack_150 = uVar9;
    local_128 = uVar23;
    if ((*(longlong **)(param_2 + 0x78) != (longlong *)0x0) &&
       (cVar13 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x20))(), cVar13 == '\0'))
    goto LAB_144c3260f;
    iVar15 = 1;
    local_res18 = 1;
LAB_144c32649:
    local_res20 = (undefined8 *)(param_2 + 0x60);
    local_4c8 = *(undefined8 *)(param_2 + 0x20);
    uStack_4c0 = *(undefined8 *)(param_2 + 0x28);
    pfVar1 = (float *)(param_3 + 0x58);
    puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + (longlong)(int)uVar28 * 0x10);
    local_4b8 = *puVar27;
    lStack_4b0 = puVar27[1];
    local_4a0 = CONCAT44(local_4a0._4_4_,*(undefined4 *)(param_2 + 0x58));
    local_4a8 = CONCAT44(*(undefined4 *)(*(longlong *)(param_2 + 0x48) + (longlong)(int)uVar28 * 4),
                         *(undefined4 *)(param_2 + 0x40));
    lStack_498 = *local_res20;
    uStack_490 = *(undefined8 *)(param_2 + 0x68);
    local_480 = *(undefined8 *)local_518;
    local_488 = *(undefined8 *)(param_2 + 0x70);
    in_stack_fffffffffffffa98 = param_3 + 0x50;
    in_stack_fffffffffffffaa0 = pfVar1;
    bVar14 = FUN_144fc4c90(param_1,&local_4c8,param_3 + 0x18,0,in_stack_fffffffffffffa98,pfVar1);
    *(byte *)(param_3 + 0x5c) = (bVar14 ^ 1) + 1;
    if (bVar14 != 0) {
      fVar38 = *pfVar1;
      iVar22 = 1;
      goto LAB_144c3270e;
    }
  }
  fVar38 = 3.40282e+38;
  iVar22 = 0;
LAB_144c3270e:
  if ((*(char *)(param_2 + 0x80) == '\x02') ||
     ((*(char *)(param_2 + 0x80) == '\x01' && (*(longlong *)(param_2 + 0x70) == 0)))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (((iVar15 == 0) && (iVar22 == 0)) || (!bVar10)) {
    uVar24 = (ulonglong)_tls_index;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8);
    cVar21 = *(char *)(lVar4 + 0x114);
    if (cVar21 == '\0') {
      __dyn_tls_on_demand_init();
      cVar21 = *(char *)(lVar4 + 0x114);
    }
    lVar17 = *(longlong *)(lVar4 + 0xf0);
    if (lVar17 == 0) {
      if (cVar21 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar17 = FUN_144b3f4a0();
      *(longlong *)(lVar4 + 0xf0) = lVar17;
    }
    lVar4 = *(longlong *)(lVar17 + 0x3e0);
    local_518 = "Stinit";
    uStack_510 = "";
    local_538._8_8_ = "";
    local_538._0_8_ = "LtFindVolumePath";
    if (lVar4 != 0) {
      local_518 = "Stinit";
      uStack_510 = "";
      local_538._8_8_ = "";
      local_538._0_8_ = "LtFindVolumePath";
      FUN_144be9870(lVar4,local_538,&local_518);
    }
    uVar23 = (uint)*(undefined8 *)(param_2 + 0x94);
    uStackX_14 = (uint)((ulonglong)*(undefined8 *)(param_2 + 0x94) >> 0x20);
    local_4f0 = 0;
    local_4e8 = 0;
    if ((int)uVar23 < 1) {
      uVar23 = 0x20000;
    }
    local_4e4 = 0x80000000;
    local_4e0 = 0;
    if ((int)uStackX_14 < 1) {
      uStackX_14 = 0x90200;
    }
    local_4d8 = 0;
    local_4d4 = 0x80000000;
    if (*(longlong *)(param_2 + 0xa0) == 0) {
      if (0 < (int)uVar23) {
        FUN_14039ab22(&local_4f0,&PTR_vftable_14c6e47c0,(longlong)(int)uVar23);
      }
      if (((int)local_4e8 < (int)uVar23) || ((int)uVar23 < (int)local_4e8)) {
        local_4e8 = uVar23;
      }
    }
    else {
      local_4e4 = uVar23 | 0x80000000;
      local_4f0 = *(longlong *)(param_2 + 0xa0);
    }
    if (*(longlong *)(param_2 + 0xa8) == 0) {
      if ((int)(local_4d4 & 0x7fffffff) < (int)uStackX_14) {
        FUN_14039ab22(&local_4e0,&PTR_vftable_14c6e47c0,(longlong)(int)uStackX_14);
      }
      if (((int)local_4d8 < (int)uStackX_14) || ((int)uStackX_14 < (int)local_4d8)) {
        local_4d8 = uStackX_14;
      }
    }
    else {
      local_4d4 = uStackX_14 | 0x80000000;
      local_4d8 = 0;
      local_4e0 = *(longlong *)(param_2 + 0xa8);
    }
    local_508 = local_4f0;
    local_4f4 = local_4d4 & 0x7fffffff;
    local_4f8 = local_4e4 & 0x7fffffff;
    local_500 = local_4e0;
    FUN_144b42e20(local_478,&local_508);
    FUN_144be90e0(0xca30930e);
    local_310 = *(undefined8 *)(param_2 + 0x78);
    local_518 = *(char **)(param_2 + 0x48);
    local_308 = *(undefined4 *)(param_2 + 0x20);
    uStack_304 = *(undefined4 *)(param_2 + 0x24);
    local_4c8 = *(undefined8 *)(param_2 + 0x20);
    uStack_300 = *(undefined4 *)(param_2 + 0x28);
    uStack_2fc = *(undefined4 *)(param_2 + 0x2c);
    uStack_4c0 = *(undefined8 *)(param_2 + 0x28);
    local_2f8 = *(undefined4 *)(param_2 + 0x40);
    local_31c = *(undefined4 *)(param_2 + 0x90);
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_188 = _DAT_14c6dae80 ^ 0x80000000;
    uStack_184 = uRam000000014c6dae84 ^ 0x80000000;
    uStack_180 = uRam000000014c6dae88 ^ 0x80000000;
    uStack_17c = uRam000000014c6dae8c ^ 0x80000000;
    local_2b0 = 0;
    local_330 = *(undefined8 *)(param_2 + 0x60);
    uStack_328 = *(undefined8 *)(param_2 + 0x68);
    local_2a8 = 0;
    local_2a4 = 0;
    local_2a0 = 0;
    local_288 = 0;
    local_280 = 0;
    local_27c = 0;
    local_278 = 0;
    local_260 = 0;
    local_220 = 0;
    local_1e0 = 0;
    local_1c8 = 0;
    local_318 = *(undefined8 *)(param_2 + 0x70);
    lStack_4b0 = *(longlong *)(param_2 + 0x30);
    uStack_510 = (char *)((longlong)local_518 + (longlong)*(int *)(param_2 + 0x50) * 4);
    local_4a8 = (longlong)*(int *)(param_2 + 0x38) * 0x10 + lStack_4b0;
    local_198 = _DAT_14c6dae80;
    uStack_194 = uRam000000014c6dae84;
    uStack_190 = uRam000000014c6dae88;
    uStack_18c = uRam000000014c6dae8c;
    local_478[0] = &local_338;
    local_320 = *(undefined4 *)(param_2 + 0x8c);
    local_42c = *(undefined4 *)(param_2 + 0x84);
    local_2d0 = &local_468;
    local_2b8 = 0xffffffffffffffff;
    local_268 = 0xffffffff;
    local_228 = 0xffffffff;
    local_1e8 = 0xffffffff;
    local_4b8 = CONCAT44(local_4b8._4_4_,local_2f8);
    local_430 = *(float *)(param_2 + 0x88);
    if (fVar38 <= *(float *)(param_2 + 0x88)) {
      local_430 = fVar38;
    }
    local_4a0 = (longlong)local_518;
    lStack_498 = (longlong)uStack_510;
    local_338 = param_1;
    local_2f0 = lStack_4b0;
    lStack_2e8 = local_4a8;
    local_2e0 = (longlong)local_518;
    lStack_2d8 = (longlong)uStack_510;
    local_538._0_8_ = local_518;
    local_538._8_8_ = uStack_510;
    FUN_144b42d20(local_478,&local_338,param_2 + 0x60);
    iVar15 = *(int *)(param_2 + 0x58);
    local_538._8_8_ = "";
    local_538._0_8_ = "StAStar";
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8);
    if (*(char *)(lVar17 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar18 = *(longlong *)(lVar17 + 0xf0);
    if (lVar18 == 0) {
      if (*(char *)(lVar17 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar18 = FUN_144b3f4a0();
      *(longlong *)(lVar17 + 0xf0) = lVar18;
    }
    if (*(longlong *)(lVar18 + 0x3e0) != 0) {
      FUN_144be99f0(*(longlong *)(lVar18 + 0x3e0),local_538);
    }
    iVar25 = 0;
    do {
      uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffffa98 >> 0x20);
      uVar45 = (undefined4)((ulonglong)in_stack_fffffffffffffaa0 >> 0x20);
      if (iVar15 <= iVar25) {
        cVar21 = '\x01';
        iVar16 = 3;
        break;
      }
      iVar25 = iVar25 + 1;
      iVar16 = FUN_144b42c50(local_478);
      uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffffa98 >> 0x20);
      uVar45 = (undefined4)((ulonglong)in_stack_fffffffffffffaa0 >> 0x20);
      if (iVar16 == 3) {
        cVar21 = (local_400 < local_3fc) + '\x02';
        FUN_144be90e0(0x3c86ec3);
        break;
      }
      FUN_144be90e0(0x3c86ec3);
      uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffffa98 >> 0x20);
      uVar45 = (undefined4)((ulonglong)in_stack_fffffffffffffaa0 >> 0x20);
      cVar21 = '\0';
    } while (iVar16 == 0);
    uVar24 = 0;
    if ((iVar22 == 0) || (iVar16 == 1)) {
      *(int *)(param_3 + 0x50) = iVar25;
      *(char *)(param_3 + 0x5c) = (char)iVar16;
      *(char *)(param_3 + 0x5d) = cVar21;
      *(undefined4 *)(param_3 + 0x54) = 0xffffffff;
      if ((iVar16 - 1U & 0xfffffffd) == 0) {
        if ((iVar16 == 1) && (local_438 = local_348, 0 < *(int *)(param_2 + 0x50))) {
          piVar19 = *(int **)(param_2 + 0x48);
          uVar28 = uVar24;
          do {
            iVar22 = (int)uVar28;
            iVar15 = local_348;
            if (*piVar19 == local_348) goto LAB_144c32d14;
            uVar28 = (ulonglong)(iVar22 + 1);
            uVar24 = uVar24 + 1;
            piVar19 = piVar19 + 1;
          } while ((longlong)uVar24 < (longlong)*(int *)(param_2 + 0x50));
        }
        iVar22 = -1;
        iVar15 = local_438;
LAB_144c32d14:
        *(int *)(param_3 + 0x54) = iVar22;
        local_420 = (undefined4 *)FUN_144c33310(&local_468,iVar15);
        pvVar12 = ThreadLocalStoragePointer;
        local_418 = local_420;
        local_428 = (int)(short)((longlong)local_420 - local_468 >> 4);
        uVar28 = (ulonglong)_tls_index;
        local_538._8_8_ = "";
        local_538._0_8_ = "Stoutput";
        *(undefined4 *)(param_3 + 0x58) = *local_420;
        lVar17 = *(longlong *)((longlong)pvVar12 + uVar28 * 8);
        if (*(char *)(lVar17 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar18 = *(longlong *)(lVar17 + 0xf0);
        if (lVar18 == 0) {
          if (*(char *)(lVar17 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar18 = FUN_144b3f4a0();
          *(longlong *)(lVar17 + 0xf0) = lVar18;
        }
        if (*(longlong *)(lVar18 + 0x3e0) != 0) {
          FUN_144be99f0(*(longlong *)(lVar18 + 0x3e0),local_538);
        }
        for (uVar3 = *(ushort *)(local_458 + (ulonglong)((uint)(iVar15 * -0x61c8864f) >> 0x18) * 2);
            -1 < (short)uVar3; uVar3 = *(ushort *)(local_460 + (ulonglong)uVar3 * 2)) {
          puVar26 = (undefined1 *)((ulonglong)uVar3 * 0x10 + local_468);
          if (*(int *)(puVar26 + 8) == iVar15) goto LAB_144c32e10;
        }
        puVar26 = local_448;
LAB_144c32e10:
        if ((*(ushort *)(puVar26 + 0xe) & 4) == 0) {
          puVar20 = puVar26;
          uVar23 = (uint)((*(ushort *)(puVar26 + 0xe) & 8) != 0);
          do {
            uVar29 = uVar23;
            if (*(short *)(puVar20 + 0xc) == -1) {
              puVar20 = (undefined1 *)0x0;
            }
            else {
              puVar20 = (undefined1 *)((longlong)*(short *)(puVar20 + 0xc) * 0x10 + local_468);
            }
            uVar23 = uVar29 + 1;
          } while ((puVar20[0xe] & 4) == 0);
          uVar30 = 0x7fffffff;
          if ((int)uVar23 < 0x7fffffff) {
            uVar30 = uVar23;
          }
          if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < (int)uVar30) {
            FUN_144c33690(param_3 + 0x18,&PTR_vftable_14c6e47a0,(longlong)(int)uVar30);
          }
          if ((*(int *)(param_3 + 0x20) < (int)uVar30) || ((int)uVar30 < *(int *)(param_3 + 0x20)))
          {
            *(uint *)(param_3 + 0x20) = uVar30;
          }
          if ((puVar26[0xe] & 8) != 0) {
            if ((int)uVar29 < (int)uVar30) {
              *(undefined4 *)(*(longlong *)(param_3 + 0x18) + (longlong)(int)uVar29 * 4) =
                   *(undefined4 *)(puVar26 + 8);
            }
            uVar29 = uVar29 - 1;
          }
          if ((puVar26[0xe] & 4) == 0) {
            lVar17 = (longlong)(int)uVar29;
            do {
              psVar2 = (short *)(puVar26 + 0xc);
              puVar26 = (undefined1 *)0x0;
              if (*psVar2 != -1) {
                puVar26 = (undefined1 *)((longlong)*psVar2 * 0x10 + local_468);
              }
              if (lVar17 < (int)uVar30) {
                *(undefined4 *)(*(longlong *)(param_3 + 0x18) + lVar17 * 4) =
                     *(undefined4 *)(puVar26 + 8);
              }
              lVar17 = lVar17 + -1;
            } while ((puVar26[0xe] & 4) == 0);
          }
        }
        else {
          if ((*(uint *)(param_3 + 0x24) & 0x7fffffff) == 0) {
            FUN_144c33690(param_3 + 0x18,&PTR_vftable_14c6e47a0,1);
          }
          if ((*(int *)(param_3 + 0x20) < 1) || (1 < *(int *)(param_3 + 0x20))) {
            *(undefined4 *)(param_3 + 0x20) = 1;
          }
          **(int **)(param_3 + 0x18) = iVar15;
        }
        FUN_144c4b0a0(local_478,param_3 + 0x18,param_3 + 0x28);
        plVar5 = *(longlong **)(param_2 + 0x30);
        local_518 = (char *)*plVar5;
        uStack_510 = (char *)plVar5[1];
        if (iVar16 == 1) {
          local_518 = (char *)plVar5[(longlong)*(int *)(param_3 + 0x54) * 2];
          uStack_510 = (char *)(plVar5 + (longlong)*(int *)(param_3 + 0x54) * 2)[1];
        }
        else if (*(int *)(param_3 + 0x20) != 0) {
          uVar23 = *(uint *)(*(longlong *)(param_3 + 0x18) + -4 +
                            (longlong)*(int *)(param_3 + 0x20) * 4);
          lVar17 = *(longlong *)
                    ((ulonglong)(uVar23 >> 0x16) * 0x120 + 8 + *(longlong *)(param_1 + 0x38));
          lVar18 = *(longlong *)(*(longlong *)(lVar17 + 0x20) + 0x38);
          auVar40 = *(undefined1 (*) [16])
                     (*(longlong *)(*(longlong *)(lVar17 + 0x20) + 0x18) +
                     (ulonglong)(uVar23 & 0x3fffff) * 0x18);
          bVar14 = *(byte *)(lVar17 + 0x40);
          auVar6._10_2_ = 0;
          auVar6._0_10_ = auVar40._0_10_;
          auVar6._12_2_ = auVar40._6_2_;
          auVar7._8_2_ = auVar40._4_2_;
          auVar7._0_8_ = auVar40._0_8_;
          auVar7._10_4_ = auVar6._10_4_;
          auVar11._6_8_ = 0;
          auVar11._0_6_ = auVar7._8_6_;
          auVar8._4_2_ = auVar40._2_2_;
          auVar8._0_4_ = auVar40._0_4_;
          auVar8._6_8_ = SUB148(auVar11 << 0x40,6);
          auVar39._0_4_ =
               ((float)(auVar40._0_4_ & 0xffff) + 0.0) * *(float *)(lVar18 + 0xa0) +
               *(float *)(lVar18 + 0xb0);
          auVar39._4_4_ =
               ((float)auVar8._4_4_ + 0.0) * *(float *)(lVar18 + 0xa4) + *(float *)(lVar18 + 0xb4);
          auVar39._8_4_ =
               ((float)(auVar7._8_4_ & 0xffff) + (float)(auVar7._8_4_ >> 0x10) * 65536.0) *
               *(float *)(lVar18 + 0xa8) + *(float *)(lVar18 + 0xb8);
          auVar39._12_4_ =
               ((float)(auVar6._10_4_ >> 0x10) + 0.0) * *(float *)(lVar18 + 0xac) +
               *(float *)(lVar18 + 0xbc);
          auVar41._0_4_ =
               ((float)auVar40._8_2_ + 0.0) * *(float *)(lVar18 + 0xa0) + *(float *)(lVar18 + 0xb0);
          auVar41._4_4_ =
               ((float)auVar40._10_2_ + 0.0) * *(float *)(lVar18 + 0xa4) + *(float *)(lVar18 + 0xb4)
          ;
          auVar41._8_4_ =
               ((float)auVar40._12_2_ + 0.0) * *(float *)(lVar18 + 0xa8) + *(float *)(lVar18 + 0xb8)
          ;
          auVar41._12_4_ =
               ((float)auVar40._14_2_ + 0.0) * *(float *)(lVar18 + 0xac) + *(float *)(lVar18 + 0xbc)
          ;
          auVar40 = auVar39;
          auVar43 = auVar41;
          if (bVar14 != 0) {
            uVar23 = (uint)bVar14;
            uVar29 = -(uint)(0x16a8300 << uVar23 < 0);
            uVar31 = -(uint)(0x502ab000 << uVar23 < 0);
            uVar33 = -(uint)(0xa2a8c00 << uVar23 < 0);
            uVar30 = -(uint)(0xa154c00 << uVar23 < 0);
            uVar32 = -(uint)(0x1554300 << uVar23 < 0);
            uVar34 = -(uint)(0x50157000 << uVar23 < 0);
            uVar28 = (ulonglong)uVar23;
            uVar35 = CONCAT44((0xb9e306U >> uVar28) << 0x1f ^
                              (~uVar32 & (~uVar31 & (uint)auVar39._4_4_ |
                                         (uint)auVar39._8_4_ & uVar31) |
                              (uint)auVar39._0_4_ & uVar32),
                              (0xae71e0U >> uVar28) << 0x1f ^
                              (~uVar30 & (~uVar29 & (uint)auVar39._0_4_ |
                                         (uint)auVar39._4_4_ & uVar29) |
                              (uint)auVar39._8_4_ & uVar30));
            uVar36 = (0xeb903cU >> uVar28) << 0x1f ^
                     (~uVar34 & (~uVar33 & (uint)auVar39._8_4_ | (uint)auVar39._0_4_ & uVar33) |
                     (uint)auVar39._4_4_ & uVar34);
            uVar37 = (0U >> uVar28) << 0x1f ^ (uint)auVar39._12_4_;
            uVar31 = (uint)bVar14;
            auVar40._8_4_ = uVar36;
            auVar40._0_8_ = uVar35;
            auVar40._12_4_ = uVar37;
            uVar32 = -(uint)(0x16a8300 << uVar23 < 0);
            uVar33 = -(uint)(0x502ab000 << uVar23 < 0);
            uVar34 = -(uint)(0xa2a8c00 << uVar23 < 0);
            uVar23 = -(uint)(0xa154c00 << uVar31 < 0);
            uVar29 = -(uint)(0x1554300 << uVar31 < 0);
            uVar30 = -(uint)(0x50157000 << uVar31 < 0);
            uVar28 = (ulonglong)uVar31;
            auVar43._0_4_ =
                 (0xae71e0U >> uVar28) << 0x1f ^
                 (~uVar23 & (~uVar32 & (uint)auVar41._0_4_ | (uint)auVar41._4_4_ & uVar32) |
                 (uint)auVar41._8_4_ & uVar23);
            auVar43._4_4_ =
                 (0xb9e306U >> uVar28) << 0x1f ^
                 (~uVar29 & (~uVar33 & (uint)auVar41._4_4_ | (uint)auVar41._8_4_ & uVar33) |
                 (uint)auVar41._0_4_ & uVar29);
            auVar43._8_4_ =
                 (0xeb903cU >> uVar28) << 0x1f ^
                 (~uVar30 & (~uVar34 & (uint)auVar41._8_4_ | (uint)auVar41._0_4_ & uVar34) |
                 (uint)auVar41._4_4_ & uVar30);
            auVar43._12_4_ = (0U >> uVar28) << 0x1f ^ (uint)auVar41._12_4_;
            auVar42._8_4_ = uVar36;
            auVar42._0_8_ = uVar35;
            auVar42._12_4_ = uVar37;
            auVar40 = minps(auVar40,auVar43);
            auVar43 = maxps(auVar42,auVar43);
            local_538 = auVar39;
            local_528 = auVar41;
          }
          local_518 = (char *)CONCAT44((*(float *)(lVar17 + 0x54) + auVar43._4_4_ +
                                       *(float *)(lVar17 + 0x54) + auVar40._4_4_) *
                                       fRam000000014c6dad94,
                                       (*(float *)(lVar17 + 0x50) + auVar43._0_4_ +
                                       *(float *)(lVar17 + 0x50) + auVar40._0_4_) * _DAT_14c6dad90);
          uStack_510 = (char *)CONCAT44((*(float *)(lVar17 + 0x5c) + auVar43._12_4_ +
                                        *(float *)(lVar17 + 0x5c) + auVar40._12_4_) *
                                        fRam000000014c6dad9c,
                                        (*(float *)(lVar17 + 0x58) + auVar43._8_4_ +
                                        *(float *)(lVar17 + 0x58) + auVar40._8_4_) *
                                        fRam000000014c6dad98);
        }
        iVar15 = *(int *)(param_3 + 0x20) + 1;
        if ((int)(*(uint *)(param_3 + 0x44) & 0x7fffffff) < iVar15) {
          FUN_144c30b60(param_3 + 0x38,&PTR_vftable_14c6e47a0,(longlong)iVar15);
        }
        FUN_144be90e0(0x9db05698);
        FUN_144fc3950(param_1,param_3 + 0x18,param_3 + 0x28,*(undefined4 *)(param_2 + 0x40),
                      param_2 + 0x20,&local_518,param_3 + 0x38,0,0);
      }
    }
    else {
      FUN_144c333e0(param_1,param_2,param_3,uVar28 & 0xffffffff,CONCAT44(uVar44,local_res18),
                    CONCAT44(uVar45,iVar22));
    }
    lVar17 = 0;
    if ((local_34c != 0) && (0 < local_34c + 1)) {
      do {
        if (*(int *)(local_358 + lVar17 * 8) != -1) {
          *(undefined4 *)(local_358 + lVar17 * 8) = 0xffffffff;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < local_34c + 1);
    }
    local_350 = local_350 & 0x80000000;
    if ((local_358 != 0) && (local_350 == 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_358,(longlong)(local_34c + 1) << 3);
    }
    local_358 = 0;
    local_350 = 0;
    local_34c = 0xffffffff;
    local_4d8 = 0;
    if ((-1 < (int)local_4d4) && (local_4e0 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_4e0,local_4d4 & 0x7fffffff);
    }
    local_4e0 = 0;
    local_4d4 = 0x80000000;
    local_4e8 = 0;
    if ((-1 < (int)local_4e4) && (local_4f0 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_4f0,local_4e4 & 0x7fffffff);
    }
    local_4f0 = 0;
    local_4e4 = 0x80000000;
    if (lVar4 != 0) {
      local_538._8_8_ = &DAT_14999058e;
      local_538._0_8_ = &DAT_14999058c;
      FUN_144be9b20(lVar4,local_538);
    }
  }
  else {
    FUN_144c333e0(param_1,param_2,param_3,uVar28 & 0xffffffff,iVar15,iVar22);
  }
  return;
}



// FUNCTION 144c33310 FUN_144c33310 body=204 status=ok
// SIG undefined FUN_144c33310(void)

undefined4 * FUN_144c33310(longlong *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  
  uVar2 = (uint)(param_2 * -0x61c8864f) >> 0x18;
  uVar4 = *(ushort *)(param_1[2] + (ulonglong)uVar2 * 2);
  if (-1 < (short)uVar4) {
    do {
      puVar3 = (undefined4 *)((ulonglong)uVar4 * 0x10 + *param_1);
      if (puVar3[2] == param_2) {
        return puVar3;
      }
      uVar4 = *(ushort *)(param_1[1] + (ulonglong)uVar4 * 2);
    } while (-1 < (short)uVar4);
  }
  sVar1 = *(short *)((longlong)param_1 + 0x1c);
  puVar3 = (undefined4 *)((longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10 + *param_1);
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  puVar3[2] = param_2;
  *puVar3 = 0x7f7fffee;
  puVar3[1] = 0x7f7fffee;
  puVar3[3] = 0xffff;
  *(undefined2 *)(param_1[1] + (longlong)sVar1 * 2) =
       *(undefined2 *)(param_1[2] + (ulonglong)uVar2 * 2);
  *(short *)(param_1[2] + (ulonglong)uVar2 * 2) = sVar1;
  return puVar3;
}



// FUNCTION 144c333e0 FUN_144c333e0 body=360 status=ok
// SIG undefined FUN_144c333e0(void)

void FUN_144c333e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  *(int *)(param_3 + 0x54) = param_4;
  *(undefined1 *)(param_3 + 0x5c) = 1;
  *(undefined4 *)(param_3 + 0x50) = 0;
  iVar6 = *(int *)(param_3 + 0x40) + 1;
  if ((int)(*(uint *)(param_3 + 0x44) & 0x7fffffff) < iVar6) {
    FUN_144c33550(param_3 + 0x38,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  iVar1 = *(int *)(param_3 + 0x40);
  *(int *)(param_3 + 0x40) = iVar6;
  puVar5 = (undefined4 *)((longlong)iVar1 * 0x30 + *(longlong *)(param_3 + 0x38));
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined1 *)(puVar5 + 10) = 0;
  puVar5[8] = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  *puVar5 = *(undefined4 *)(param_2 + 0x20);
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  puVar5[9] = *(uint *)(param_2 + 0x40) >> 0x16;
  iVar6 = *(int *)(param_3 + 0x40) + 1;
  if ((int)(*(uint *)(param_3 + 0x44) & 0x7fffffff) < iVar6) {
    FUN_144c33550(param_3 + 0x38,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  iVar1 = *(int *)(param_3 + 0x40);
  *(int *)(param_3 + 0x40) = iVar6;
  puVar7 = (undefined4 *)((longlong)iVar1 * 0x30 + *(longlong *)(param_3 + 0x38));
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined1 *)(puVar7 + 10) = 0;
  puVar7[8] = 0;
  puVar5 = (undefined4 *)(*(longlong *)(param_2 + 0x30) + (longlong)param_4 * 0x10);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *puVar7 = *puVar5;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  puVar7[9] = *(uint *)(*(longlong *)(param_2 + 0x48) + (longlong)param_4 * 4) >> 0x16;
  if ((param_5 != 0) && (param_6 == 0)) {
    iVar6 = *(int *)(param_3 + 0x20) + 1;
    if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < iVar6) {
      FUN_144c33790((longlong *)(param_3 + 0x18),&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    puVar5 = (undefined4 *)(*(longlong *)(param_3 + 0x18) + (longlong)*(int *)(param_3 + 0x20) * 4);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *(undefined4 *)(param_2 + 0x40);
    }
    *(int *)(param_3 + 0x20) = iVar6;
  }
  return;
}



// FUNCTION 144c33550 FUN_144c33550 body=316 status=ok
// SIG undefined FUN_144c33550(void)

ulonglong FUN_144c33550(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar11 = uVar12 * 2;
  uVar9 = param_3;
  if (param_3 < uVar11) {
    uVar9 = uVar11;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x30,&local_res8);
  puVar8 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar7 = (undefined4 *)(lVar6 + 0x20);
    uVar11 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if (puVar7 + -8 != (undefined4 *)0x0) {
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        puVar7[-8] = *puVar8;
        puVar7[-7] = uVar2;
        puVar7[-6] = uVar3;
        puVar7[-5] = uVar4;
        uVar5 = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)(puVar7 + -4) = *(undefined8 *)(puVar8 + 4);
        *(undefined8 *)(puVar7 + -2) = uVar5;
        *puVar7 = puVar8[8];
        puVar7[1] = puVar8[9];
        *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar8 + 10);
      }
      puVar7 = puVar7 + 0xc;
      puVar8 = puVar8 + 0xc;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x30 + 0x30;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x30;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x30);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 144c33690 FUN_144c33690 body=247 status=ok
// SIG undefined FUN_144c33690(void)

void FUN_144c33690(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 4,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c33790 FUN_144c33790 body=235 status=ok
// SIG undefined FUN_144c33790(void)

void FUN_144c33790(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar3 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144c33880 FUN_144c33880 body=159 status=ok
// SIG undefined FUN_144c33880(void)

void FUN_144c33880(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c33920 FUN_144c33920 body=159 status=ok
// SIG undefined FUN_144c33920(void)

void FUN_144c33920(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c339c0 FUN_144c339c0 body=142 status=ok
// SIG undefined FUN_144c339c0(void)

undefined8 * FUN_144c339c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_14aba2b70;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[8] = uVar1;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  return param_1;
}



// FUNCTION 144c33a50 FUN_144c33a50 body=128 status=ok
// SIG undefined FUN_144c33a50(void)

void FUN_144c33a50(undefined8 *param_1,longlong *param_2)

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
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x14);
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
          *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
        }
        puVar3 = (undefined8 *)((longlong)puVar3 + 0x14);
        puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *param_1 = puVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
  }
  return;
}



// FUNCTION 144c33ad0 FUN_144c33ad0 body=103 status=ok
// SIG undefined FUN_144c33ad0(void)

void FUN_144c33ad0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 2);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c33b40 FUN_144c33b40 body=372 status=ok
// SIG undefined FUN_144c33b40(void)

void FUN_144c33b40(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint local_res8 [2];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar4 = *(uint *)((longlong)param_2 + 4) & 0x3fffff;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
  if ((int)uVar4 < *(int *)(lVar7 + 0x30)) {
    uVar5 = uVar4;
    if (*(int *)(lVar7 + 0x78) != 0) {
      uVar5 = *(uint *)(*(longlong *)(lVar7 + 0x70) + (ulonglong)uVar4 * 4);
    }
    if (uVar5 == 0xffffffff) {
      lVar7 = *(longlong *)(lVar7 + 0x28) + (ulonglong)uVar4 * 0x14;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0xc0) + (longlong)(int)uVar5 * 0x14;
    }
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0xe0) + (longlong)(int)(uVar4 - *(int *)(lVar7 + 0x30)) * 0x14;
  }
  if (*(int *)(lVar7 + 8) == -1) {
    local_res8[0] = uVar4;
    FUN_144c2ead0(*(longlong *)(param_1 + 0x20),local_res8,local_48,local_38);
    plVar2 = *(longlong **)(param_1 + 0x28);
    auVar8 = minps(local_48,local_38);
    auVar9 = maxps(local_48,local_38);
    local_28 = auVar8._0_4_ - *(float *)(param_1 + 0x10);
    fStack_24 = auVar8._4_4_ - *(float *)(param_1 + 0x14);
    fStack_20 = auVar8._8_4_ - *(float *)(param_1 + 0x18);
    fStack_1c = auVar8._12_4_ - *(float *)(param_1 + 0x1c);
    local_18 = auVar9._0_4_ + *(float *)(param_1 + 0x10);
    fStack_14 = auVar9._4_4_ + *(float *)(param_1 + 0x14);
    fStack_10 = auVar9._8_4_ + *(float *)(param_1 + 0x18);
    fStack_c = auVar9._12_4_ + *(float *)(param_1 + 0x1c);
    iVar6 = (int)plVar2[1] + 1;
    if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < iVar6) {
      FUN_144c2e510(plVar2,&PTR_vftable_14c6e47c0,(longlong)iVar6);
    }
    lVar7 = plVar2[1];
    *(int *)(plVar2 + 1) = iVar6;
    FUN_144fc00a0((longlong)(int)lVar7 * 0x20 + *plVar2,&local_28,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 8));
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  iVar6 = (int)plVar2[1] + 1;
  if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < iVar6) {
    FUN_144c36260(plVar2,&PTR_vftable_14c6e47c0,(longlong)iVar6);
  }
  lVar7 = plVar2[1];
  *(int *)(plVar2 + 1) = iVar6;
  puVar1 = (uint *)(*plVar2 + (longlong)(int)lVar7 * 8);
  uVar3 = *param_2;
  *(undefined8 *)puVar1 = uVar3;
  puVar1[1] = puVar1[1] & 0x3fffff;
  *puVar1 = (uint)uVar3 & 0x3fffff;
  return;
}



// FUNCTION 144c33cc0 FUN_144c33cc0 body=6436 status=ok
// SIG undefined FUN_144c33cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c33cc0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined4 uVar16;
  float fVar17;
  longlong lVar18;
  undefined8 *puVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  longlong lVar26;
  uint *puVar27;
  longlong lVar28;
  int *piVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  undefined4 *puVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  uint *puVar38;
  uint uVar39;
  undefined4 uVar40;
  uint *puVar41;
  int iVar42;
  uint uVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  longlong *local_res8;
  longlong local_res10;
  float local_res18 [2];
  ulonglong local_res20;
  longlong local_528;
  float local_520;
  uint local_51c;
  longlong local_518;
  float local_510;
  uint local_50c;
  longlong local_508;
  int local_500;
  uint local_4fc;
  longlong local_4f8;
  uint local_4f0;
  uint local_4ec;
  int local_4e8;
  longlong local_4e0;
  uint local_4d8;
  uint local_4d4;
  int local_4d0;
  uint local_4c8 [2];
  uint *local_4c0;
  uint *local_4b8;
  uint *local_4b0;
  uint *local_4a8;
  int local_4a0;
  int local_49c [9];
  longlong local_478;
  undefined4 local_470;
  uint local_46c;
  longlong local_468;
  undefined4 local_460;
  uint local_45c;
  undefined1 local_458 [12];
  uint uStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  longlong *local_428;
  char *local_418;
  undefined8 uStack_410;
  float local_408 [4];
  float *local_3f8;
  char *pcStack_3f0;
  ulonglong local_3e8;
  ulonglong local_3e0;
  undefined **local_3d8;
  undefined4 local_3d0;
  uint local_3cc;
  float local_3c8;
  float fStack_3c4;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  undefined1 local_398 [8];
  undefined8 uStack_390;
  undefined4 local_388;
  undefined1 local_378 [8];
  longlong local_370;
  longlong local_368;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined1 local_2e8 [32];
  longlong local_2c8;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_228 [48];
  longlong *local_1f8;
  undefined1 local_1e8 [32];
  longlong local_1c8;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_128 [48];
  longlong *local_f8;
  
  lVar37 = *param_1;
  lVar28 = param_1[1];
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_144ca7ee0(&local_318,lVar37 + 0xc0);
  lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar20 = *(char *)(lVar26 + 0x114);
  local_370 = lVar26;
  if (cVar20 == '\0') {
    __dyn_tls_on_demand_init();
    cVar20 = *(char *)(lVar26 + 0x114);
  }
  lVar18 = *(longlong *)(lVar26 + 0xf0);
  if (lVar18 == 0) {
    if (cVar20 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar18 = FUN_144b3f4a0();
    *(longlong *)(lVar26 + 0xf0) = lVar18;
  }
  local_368 = *(longlong *)(lVar18 + 0x3e0);
  local_3f8 = (float *)0x1499944c8;
  pcStack_3f0 = "";
  local_418 = "LtfindAllEdgeConnections";
  uStack_410 = "";
  if (local_368 != 0) {
    local_458._8_4_ = 0x499944d8;
    local_458._0_8_ = "StcollectAabbInt";
    uStack_44c = 1;
    local_3f8 = (float *)0x1499947b8;
    pcStack_3f0 = "";
    FUN_144be9870(local_368,&local_3f8,local_458);
  }
  FUN_144c55040(&local_3e0,lVar37);
  FUN_144c55040(&local_3e8,lVar28);
  FUN_144c3e1d0(local_1e8);
  local_res20 = local_3e0;
  if (local_3e0 != 0) {
    FUN_144b3d910();
  }
  local_res18[0] = *(float *)(param_1 + 2);
  FUN_144c3f5c0(local_1e8,lVar37,local_res18,&local_res20);
  local_188 = param_1[0xc];
  uStack_180 = param_1[0xd];
  local_178 = param_1[0xe];
  uStack_170 = param_1[0xf];
  local_168 = *(float *)(param_1 + 0x10);
  fStack_164 = *(float *)((longlong)param_1 + 0x84);
  fStack_160 = *(float *)(param_1 + 0x11);
  fStack_15c = *(float *)((longlong)param_1 + 0x8c);
  local_158 = param_1[0x12];
  uStack_150 = param_1[0x13];
  FUN_144ca8090(local_1c8 + 400,param_1 + 0xc,local_128);
  FUN_144c3e1d0(local_2e8);
  local_res20 = local_3e8;
  if (local_3e8 != 0) {
    FUN_144b3d910();
  }
  local_res18[0] = *(float *)((longlong)param_1 + 0x14);
  FUN_144c3f5c0(local_2e8,lVar28,local_res18,&local_res20);
  local_288 = param_1[0x14];
  uStack_280 = param_1[0x15];
  local_278 = param_1[0x16];
  uStack_270 = param_1[0x17];
  local_268 = *(float *)(param_1 + 0x18);
  fStack_264 = *(float *)((longlong)param_1 + 0xc4);
  fStack_260 = *(float *)(param_1 + 0x19);
  fStack_25c = *(float *)((longlong)param_1 + 0xcc);
  local_258 = param_1[0x1a];
  uStack_250 = param_1[0x1b];
  FUN_144ca8090(local_2c8 + 400,param_1 + 0x14,local_228);
  pfVar25 = (float *)((longlong)param_1 + 0x1c);
  fVar17 = *(float *)(param_1 + 3);
  if ((*(byte *)(*(longlong *)(local_1c8 + 0x68) + 0x80) & 1) == 0) {
    fVar66 = *(float *)(param_1 + 4);
    fVar67 = *(float *)(param_1 + 4);
    fVar68 = *pfVar25;
    fVar60 = ABS(fVar66 * local_308) + ABS(fVar67 * local_2f8) + ABS(fVar68 * local_318);
    fVar62 = ABS(fVar66 * fStack_304) + ABS(fVar67 * fStack_2f4) + ABS(fVar68 * fStack_314);
    fVar64 = ABS(fVar66 * fStack_300) + ABS(fVar67 * fStack_2f0) + ABS(fVar68 * fStack_310);
    fVar66 = ABS(fVar66 * fStack_2fc) + ABS(fVar67 * fStack_2ec) + ABS(fVar68 * fStack_30c);
  }
  else {
    local_res18[0] = *pfVar25;
    fVar67 = *(float *)(param_1 + 4);
    fVar60 = local_res18[0];
    fVar62 = local_res18[0];
    fVar64 = local_res18[0];
    fVar66 = local_res18[0];
    if (local_res18[0] <= fVar67) {
      fVar60 = fVar67;
      fVar62 = fVar67;
      fVar64 = fVar67;
      fVar66 = fVar67;
    }
  }
  fVar60 = fVar60 * _DAT_14c6dad90;
  fVar62 = fVar62 * fRam000000014c6dad94;
  fVar64 = fVar64 * fRam000000014c6dad98;
  fVar66 = fVar66 * fRam000000014c6dad9c;
  local_3f8 = pfVar25;
  FUN_144c3ed40(local_1e8,&local_358);
  local_358 = local_358 - fVar60;
  fStack_354 = fStack_354 - fVar62;
  fStack_350 = fStack_350 - fVar64;
  fStack_34c = fStack_34c - fVar66;
  local_348 = local_348 + fVar60;
  fStack_344 = fStack_344 + fVar62;
  fStack_340 = fStack_340 + fVar64;
  fStack_33c = fStack_33c + fVar66;
  local_448 = fVar17 + fVar60;
  fStack_444 = fVar17 + fVar62;
  fStack_440 = fVar17 + fVar64;
  fStack_43c = fVar17 + fVar66;
  if ((*(byte *)(*(longlong *)(local_2c8 + 0x68) + 0x80) & 1) == 0) {
    fVar66 = *(float *)(param_1 + 4);
    fVar67 = *(float *)(param_1 + 4);
    fVar68 = *pfVar25;
    fVar60 = ABS(fVar66 * local_308) + ABS(fVar67 * local_2f8) + ABS(fVar68 * local_318);
    fVar62 = ABS(fVar66 * fStack_304) + ABS(fVar67 * fStack_2f4) + ABS(fVar68 * fStack_314);
    fVar64 = ABS(fVar66 * fStack_300) + ABS(fVar67 * fStack_2f0) + ABS(fVar68 * fStack_310);
    fVar66 = ABS(fVar66 * fStack_2fc) + ABS(fVar67 * fStack_2ec) + ABS(fVar68 * fStack_30c);
  }
  else {
    local_res18[0] = *pfVar25;
    fVar67 = *(float *)(param_1 + 4);
    fVar60 = local_res18[0];
    fVar62 = local_res18[0];
    fVar64 = local_res18[0];
    fVar66 = local_res18[0];
    if (local_res18[0] <= fVar67) {
      fVar60 = fVar67;
      fVar62 = fVar67;
      fVar64 = fVar67;
      fVar66 = fVar67;
    }
  }
  fVar60 = fVar60 * _DAT_14c6dad90;
  fVar62 = fVar62 * fRam000000014c6dad94;
  fVar64 = fVar64 * fRam000000014c6dad98;
  fVar66 = fVar66 * fRam000000014c6dad9c;
  FUN_144c3ed40(local_2e8,&local_338);
  local_438 = local_1e8;
  local_3a8 = local_338 - fVar60;
  fStack_3a4 = fStack_334 - fVar62;
  fStack_3a0 = fStack_330 - fVar64;
  fStack_39c = fStack_32c - fVar66;
  local_328 = local_328 + fVar60;
  fStack_324 = fStack_324 + fVar62;
  fStack_320 = fStack_320 + fVar64;
  fStack_31c = fStack_31c + fVar66;
  uStack_430 = &local_508;
  local_468 = 0;
  local_428 = &local_468;
  local_398._4_4_ = fStack_324;
  local_398._0_4_ = local_328;
  uStack_390._0_4_ = fStack_320;
  uStack_390._4_4_ = fStack_31c;
  local_460 = 0;
  local_45c = 0x80000000;
  local_478 = 0;
  local_470 = 0;
  local_46c = 0x80000000;
  local_508 = 0;
  local_500 = 0;
  local_4fc = 0x80000000;
  local_518 = 0;
  local_510 = 0.0;
  local_50c = 0x80000000;
  local_3c8 = -NAN;
  uStack_3c0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3d8 = hkaiQueryMediator::EdgesInAabbQueryInput::vftable;
  local_388 = 1;
  local_458[8] = 0;
  local_458._0_8_ = _anon_EE92CE97::CollectBoundaryEdgesCollector::vftable;
  local_338 = local_3a8;
  fStack_334 = fStack_3a4;
  fStack_330 = fStack_3a0;
  fStack_32c = fStack_39c;
  (**(code **)(*local_f8 + 0x48))(local_f8,&local_3d8,local_458);
  local_438 = local_2e8;
  local_398._4_4_ = fStack_344;
  local_398._0_4_ = local_348;
  uStack_390._4_4_ = fStack_33c;
  uStack_390._0_4_ = fStack_340;
  uStack_430 = &local_518;
  local_3c8 = -NAN;
  uStack_3c0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3d8 = hkaiQueryMediator::EdgesInAabbQueryInput::vftable;
  local_3a8 = local_358;
  fStack_3a4 = fStack_354;
  fStack_3a0 = fStack_350;
  fStack_39c = fStack_34c;
  local_388 = 1;
  local_458[8] = 0;
  local_458._0_8_ = _anon_EE92CE97::CollectBoundaryEdgesCollector::vftable;
  local_448 = fVar60 + fVar17;
  fStack_444 = fVar62 + fVar17;
  fStack_440 = fVar64 + fVar17;
  fStack_43c = fVar66 + fVar17;
  local_428 = &local_478;
  (**(code **)(*local_1f8 + 0x48))(local_1f8,&local_3d8,local_458);
  fVar62 = fStack_43c;
  fVar60 = fStack_440;
  fVar68 = fStack_444;
  fVar67 = local_448;
  auVar12 = _local_458;
  iVar42 = local_500;
  fVar66 = local_510;
  lVar37 = 4;
  local_458._0_4_ = 0xffffffff;
  auVar2 = _local_458;
  uVar13 = local_458._0_8_;
  stack0xfffffffffffffbb0 = auVar12._8_8_;
  uVar14 = stack0xfffffffffffffbb0;
  local_res20 = CONCAT44(local_res20._4_4_,local_500);
  local_res18[0] = local_510;
  _local_458 = auVar2;
  do {
    iVar34 = local_500 + 1;
    if ((int)(local_4fc & 0x7fffffff) < iVar34) {
      FUN_144c2e740(&local_508,&PTR_vftable_14c6e47c0,(longlong)iVar34);
    }
    puVar19 = (undefined8 *)((longlong)local_500 * 0x20 + local_508);
    if (puVar19 != (undefined8 *)0x0) {
      *puVar19 = uVar13;
      puVar19[1] = uVar14;
      *(float *)(puVar19 + 2) = fVar67;
      *(float *)((longlong)puVar19 + 0x14) = fVar68;
      *(float *)(puVar19 + 3) = fVar60;
      *(float *)((longlong)puVar19 + 0x1c) = fVar62;
    }
    fVar64 = (float)((int)local_510 + 1);
    local_500 = iVar34;
    if ((int)(local_50c & 0x7fffffff) < (int)fVar64) {
      FUN_144c2e740(&local_518,&PTR_vftable_14c6e47c0,(longlong)(int)fVar64);
    }
    puVar19 = (undefined8 *)((longlong)(int)local_510 * 0x20 + local_518);
    if (puVar19 != (undefined8 *)0x0) {
      *puVar19 = uVar13;
      puVar19[1] = uVar14;
      *(float *)(puVar19 + 2) = fVar67;
      *(float *)((longlong)puVar19 + 0x14) = fVar68;
      *(float *)(puVar19 + 3) = fVar60;
      *(float *)((longlong)puVar19 + 0x1c) = fVar62;
    }
    lVar37 = lVar37 + -1;
    local_510 = fVar64;
  } while (lVar37 != 0);
  local_418 = "Stsort";
  uStack_410 = "";
  cVar20 = *(char *)(lVar26 + 0x114);
  if (cVar20 == '\0') {
    __dyn_tls_on_demand_init();
    cVar20 = *(char *)(lVar26 + 0x114);
  }
  lVar37 = *(longlong *)(lVar26 + 0xf0);
  if (lVar37 == 0) {
    if (cVar20 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar37 = FUN_144b3f4a0();
    *(longlong *)(lVar26 + 0xf0) = lVar37;
  }
  if (*(longlong *)(lVar37 + 0x3e0) != 0) {
    local_458._8_4_ = (undefined4)uStack_410;
    local_458._0_8_ = local_418;
    uStack_44c = uStack_410._4_4_;
    FUN_144be99f0(*(longlong *)(lVar37 + 0x3e0),local_458);
  }
  FUN_144fc0200(local_508,iVar42);
  FUN_144fc0200(local_518,fVar66);
  cVar20 = *(char *)(lVar26 + 0x114);
  local_418 = "Stquick match";
  uStack_410 = "";
  if (cVar20 == '\0') {
    __dyn_tls_on_demand_init();
    cVar20 = *(char *)(lVar26 + 0x114);
  }
  lVar37 = *(longlong *)(lVar26 + 0xf0);
  if (lVar37 == 0) {
    if (cVar20 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar37 = FUN_144b3f4a0();
    *(longlong *)(lVar26 + 0xf0) = lVar37;
  }
  if (*(longlong *)(lVar37 + 0x3e0) != 0) {
    local_458._8_4_ = (undefined4)uStack_410;
    local_458._0_8_ = local_418;
    uStack_44c = uStack_410._4_4_;
    FUN_144be99f0(*(longlong *)(lVar37 + 0x3e0),local_458);
  }
  local_408[0] = *(float *)(param_1 + 3) * 2.0;
  local_4e0 = 0;
  local_458._0_4_ = local_408[0] * local_408[0];
  local_458._4_4_ = local_408[0] * local_408[0];
  local_458._8_4_ = local_408[0] * local_408[0];
  uStack_44c = (uint)(local_408[0] * local_408[0]);
  local_4d8 = 0;
  local_4d4 = 0x80000000;
  local_4d0 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4ec = 0x80000000;
  local_4e8 = 0;
  FUN_144fc0100(local_4c8,local_508,iVar42,local_518,fVar66);
  puVar30 = local_4a8;
  puVar41 = local_4b0;
  fVar66 = (float)local_258;
  fVar67 = local_258._4_4_;
  fVar68 = (float)uStack_250;
  fVar60 = uStack_250._4_4_;
  fVar62 = local_268;
  fVar64 = fStack_264;
  fVar69 = fStack_260;
  fVar70 = fStack_25c;
  fVar71 = (float)local_278;
  fVar72 = local_278._4_4_;
  fVar73 = (float)uStack_270;
  fVar74 = uStack_270._4_4_;
  fVar75 = (float)local_288;
  fVar76 = local_288._4_4_;
  fVar77 = (float)uStack_280;
  fVar78 = uStack_280._4_4_;
  fVar79 = (float)local_158;
  fVar80 = local_158._4_4_;
  fVar81 = (float)uStack_150;
  fVar82 = uStack_150._4_4_;
  fVar83 = local_168;
  fVar84 = fStack_164;
  fVar85 = fStack_160;
  fVar86 = fStack_15c;
  fVar87 = (float)local_178;
  fVar88 = local_178._4_4_;
  fVar89 = (float)uStack_170;
  fVar90 = uStack_170._4_4_;
  fVar91 = (float)local_188;
  fVar92 = local_188._4_4_;
  fVar93 = (float)uStack_180;
  fVar94 = uStack_180._4_4_;
  iVar42 = local_49c[0];
  iVar34 = local_4a0;
  uVar23 = local_4c8[0];
  puVar32 = local_4c0;
LAB_144c344c4:
  do {
    local_4c0 = puVar32;
    local_4c8[0] = uVar23;
    lVar28 = local_370;
    lVar37 = local_res10;
    if ((iVar34 < 1) || (iVar42 < 1)) break;
    puVar32 = puVar41;
    puVar27 = local_4b8;
    if (local_4c8[0] != 0) {
      puVar32 = local_4b8;
      puVar27 = puVar30;
    }
    uVar23 = puVar32[3];
    local_418 = (char *)(longlong)(int)puVar27[3];
    uVar39 = local_4d8 - 1;
    uVar35 = *(uint *)(local_468 + 4 + (longlong)(int)uVar23 * 8) & 0x3fffff;
    uVar36 = *(uint *)(local_478 + 4 + (longlong)local_418 * 8) & 0x3fffff;
    uVar21 = local_4d8;
    if (0 < (int)uVar39) {
      uVar21 = uVar35 * -0x61c8864f;
      uVar22 = (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
               uVar35 * -0x4f000000) & uVar39;
      uVar43 = *(uint *)(local_4e0 + (longlong)(int)uVar22 * 4);
      while ((uVar21 = local_4d8, uVar43 != 0xffffffff && (uVar21 = uVar22, uVar43 != uVar35))) {
        uVar22 = uVar22 + 1 & uVar39;
        uVar43 = *(uint *)(local_4e0 + (longlong)(int)uVar22 * 4);
      }
    }
    if ((int)uVar39 < (int)uVar21) {
      uVar39 = local_4f0 - 1;
      uVar21 = local_4f0;
      if (0 < (int)uVar39) {
        uVar21 = uVar36 * -0x61c8864f;
        uVar22 = (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                 uVar36 * -0x4f000000) & uVar39;
        uVar43 = *(uint *)(local_4f8 + (longlong)(int)uVar22 * 4);
        while ((uVar21 = local_4f0, uVar43 != 0xffffffff && (uVar21 = uVar22, uVar43 != uVar36))) {
          uVar22 = uVar22 + 1 & uVar39;
          uVar43 = *(uint *)(local_4f8 + (longlong)(int)uVar22 * 4);
        }
      }
      if ((int)uVar39 < (int)uVar21) {
        if ((int)uVar35 < *(int *)(local_1c8 + 0x30)) {
          uVar21 = uVar35;
          if (*(int *)(local_1c8 + 0x78) != 0) {
            uVar21 = *(uint *)(*(longlong *)(local_1c8 + 0x70) + (ulonglong)uVar35 * 4);
          }
          if (uVar21 == 0xffffffff) {
            lVar28 = *(longlong *)(local_1c8 + 0x28);
            lVar26 = (ulonglong)uVar35 * 5;
          }
          else {
            lVar26 = (longlong)(int)uVar21 * 5;
            lVar28 = *(longlong *)(local_1c8 + 0xc0);
          }
        }
        else {
          lVar26 = (longlong)(int)(uVar35 - *(int *)(local_1c8 + 0x30)) * 5;
          lVar28 = *(longlong *)(local_1c8 + 0xe0);
        }
        iVar1 = *(int *)(local_1c8 + 0x40);
        iVar15 = *(int *)(lVar28 + lVar26 * 4);
        if (iVar15 < iVar1) {
          pfVar25 = (float *)((longlong)iVar15 * 0x10 + *(longlong *)(local_1c8 + 0x38));
        }
        else {
          pfVar25 = (float *)((longlong)(iVar15 - iVar1) * 0x10 + *(longlong *)(local_1c8 + 0xf0));
        }
        iVar15 = *(int *)(lVar28 + lVar26 * 4 + 4);
        fVar3 = *pfVar25;
        fVar4 = pfVar25[1];
        fVar5 = pfVar25[2];
        if (iVar15 < iVar1) {
          pfVar25 = (float *)((longlong)iVar15 * 0x10 + *(longlong *)(local_1c8 + 0x38));
        }
        else {
          pfVar25 = (float *)((longlong)(iVar15 - iVar1) * 0x10 + *(longlong *)(local_1c8 + 0xf0));
        }
        fVar6 = *pfVar25;
        fVar7 = pfVar25[1];
        fVar8 = pfVar25[2];
        fVar57 = fVar4 * fVar87 + fVar3 * fVar91 + fVar5 * fVar83 + fVar79;
        fVar58 = fVar4 * fVar88 + fVar3 * fVar92 + fVar5 * fVar84 + fVar80;
        fVar59 = fVar4 * fVar89 + fVar3 * fVar93 + fVar5 * fVar85 + fVar81;
        fVar61 = fVar7 * fVar87 + fVar6 * fVar91 + fVar8 * fVar83 + fVar79;
        fVar63 = fVar7 * fVar88 + fVar6 * fVar92 + fVar8 * fVar84 + fVar80;
        fVar65 = fVar7 * fVar89 + fVar6 * fVar93 + fVar8 * fVar85 + fVar81;
        fVar45 = fVar57 - fVar61;
        fVar47 = fVar58 - fVar63;
        fVar49 = fVar59 - fVar65;
        if ((float)local_458._0_4_ <= fVar47 * fVar47 + fVar45 * fVar45 + fVar49 * fVar49) {
          if ((int)uVar36 < *(int *)(local_2c8 + 0x30)) {
            uVar21 = uVar36;
            if (*(int *)(local_2c8 + 0x78) != 0) {
              uVar21 = *(uint *)(*(longlong *)(local_2c8 + 0x70) + (ulonglong)uVar36 * 4);
            }
            if (uVar21 == 0xffffffff) {
              lVar28 = *(longlong *)(local_2c8 + 0x28);
              lVar26 = (ulonglong)uVar36 * 5;
            }
            else {
              lVar26 = (longlong)(int)uVar21 * 5;
              lVar28 = *(longlong *)(local_2c8 + 0xc0);
            }
          }
          else {
            lVar26 = (longlong)(int)(uVar36 - *(int *)(local_2c8 + 0x30)) * 5;
            lVar28 = *(longlong *)(local_2c8 + 0xe0);
          }
          iVar1 = *(int *)(local_2c8 + 0x40);
          iVar15 = *(int *)(lVar28 + lVar26 * 4);
          if (iVar15 < iVar1) {
            pfVar25 = (float *)((longlong)iVar15 * 0x10 + *(longlong *)(local_2c8 + 0x38));
          }
          else {
            pfVar25 = (float *)((longlong)(iVar15 - iVar1) * 0x10 + *(longlong *)(local_2c8 + 0xf0))
            ;
          }
          iVar15 = *(int *)(lVar28 + lVar26 * 4 + 4);
          fVar45 = *pfVar25;
          fVar47 = pfVar25[1];
          fVar49 = pfVar25[2];
          if (iVar15 < iVar1) {
            pfVar25 = (float *)((longlong)iVar15 * 0x10 + *(longlong *)(local_2c8 + 0x38));
          }
          else {
            iVar15 = iVar15 - iVar1;
            pfVar25 = (float *)((longlong)iVar15 * 0x10 + *(longlong *)(local_2c8 + 0xf0));
          }
          fVar9 = *pfVar25;
          fVar10 = pfVar25[1];
          fVar11 = pfVar25[2];
          fVar51 = fVar47 * fVar71 + fVar45 * fVar75 + fVar49 * fVar62 + fVar66;
          fVar52 = fVar47 * fVar72 + fVar45 * fVar76 + fVar49 * fVar64 + fVar67;
          fVar53 = fVar47 * fVar73 + fVar45 * fVar77 + fVar49 * fVar69 + fVar68;
          fVar54 = fVar10 * fVar71 + fVar9 * fVar75 + fVar11 * fVar62 + fVar66;
          fVar55 = fVar10 * fVar72 + fVar9 * fVar76 + fVar11 * fVar64 + fVar67;
          fVar56 = fVar10 * fVar73 + fVar9 * fVar77 + fVar11 * fVar69 + fVar68;
          fVar46 = fVar51 - fVar54;
          fVar48 = fVar52 - fVar55;
          fVar50 = fVar53 - fVar56;
          if ((float)local_458._0_4_ <= fVar48 * fVar48 + fVar46 * fVar46 + fVar50 * fVar50) {
            auVar2._4_4_ = -(uint)((float)(~DAT_1499319e0._4_4_ & (uint)(fVar58 - fVar55)) <= fVar17
                                  );
            auVar2._0_4_ = -(uint)((float)(~DAT_1499319e0 & (uint)(fVar57 - fVar54)) <= fVar17);
            auVar2._8_4_ = -(uint)((float)(~DAT_1499319e0._8_4_ & (uint)(fVar59 - fVar56)) <= fVar17
                                  );
            auVar2._12_4_ =
                 -(uint)((float)(~DAT_1499319e0._12_4_ &
                                (uint)((fVar4 * fVar90 + fVar3 * fVar94 + fVar5 * fVar86 + fVar82) -
                                      (fVar10 * fVar74 + fVar9 * fVar78 + fVar11 * fVar70 + fVar60))
                                ) <= fVar17);
            uVar21 = movmskps(iVar15,auVar2);
            if (((char)(uVar21 & 7) == '\a') &&
               (auVar44._4_4_ =
                     -(uint)((float)(~DAT_1499319e0._4_4_ & (uint)(fVar52 - fVar63)) <= fVar17),
               auVar44._0_4_ = -(uint)((float)(~DAT_1499319e0 & (uint)(fVar51 - fVar61)) <= fVar17),
               auVar44._8_4_ =
                    -(uint)((float)(~DAT_1499319e0._8_4_ & (uint)(fVar53 - fVar65)) <= fVar17),
               auVar44._12_4_ =
                    -(uint)((float)(~DAT_1499319e0._12_4_ &
                                   (uint)((fVar47 * fVar74 + fVar45 * fVar78 + fVar49 * fVar70 +
                                          fVar60) -
                                         (fVar7 * fVar90 + fVar6 * fVar94 + fVar8 * fVar86 + fVar82)
                                         )) <= fVar17), uVar16 = movmskps(uVar21 & 7,auVar44),
               ((byte)uVar16 & 7) == 7)) {
              iVar42 = *(int *)(local_res10 + 0x28) + 1;
              if ((int)(*(uint *)(local_res10 + 0x2c) & 0x7fffffff) < iVar42) {
                FUN_144c35f30(local_res10 + 0x20,&PTR_vftable_14c6e47a0,(longlong)iVar42);
              }
              iVar34 = *(int *)(lVar37 + 0x28);
              *(int *)(lVar37 + 0x28) = iVar42;
              puVar30 = (uint *)((longlong)iVar34 * 0x10 + *(longlong *)(lVar37 + 0x20));
              *puVar30 = *(uint *)(local_468 + (longlong)(int)uVar23 * 8) & 0x3fffff;
              puVar30[1] = uVar35;
              uVar23 = *(uint *)(local_478 + (longlong)local_418 * 8);
              puVar30[3] = uVar36;
              puVar30[2] = uVar23 & 0x3fffff;
              if ((int)(local_4d8 - 1) < local_4d0 * 2) {
                FUN_144c355f0(&local_4e0,local_408,local_4d8 * 2);
              }
              uVar23 = uVar35 * -0x61c8864f;
              iVar42 = 1;
              uVar21 = (uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                       uVar35 * -0x4f000000) & local_4d8 - 1;
              uVar23 = *(uint *)(local_4e0 + (longlong)(int)uVar21 * 4);
              while (uVar23 != 0xffffffff) {
                if (uVar23 == uVar35) {
                  iVar42 = 0;
                  break;
                }
                uVar21 = uVar21 + 1 & local_4d8 - 1;
                uVar23 = *(uint *)(local_4e0 + (longlong)(int)uVar21 * 4);
              }
              local_4d0 = local_4d0 + iVar42;
              *(uint *)(local_4e0 + (longlong)(int)uVar21 * 4) = uVar35;
              if ((int)(local_4f0 - 1) < local_4e8 * 2) {
                FUN_144c355f0(&local_4f8,local_378,local_4f0 * 2);
              }
              uVar23 = uVar36 * -0x61c8864f;
              uVar21 = (uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                       uVar36 * -0x4f000000) & local_4f0 - 1;
              uVar23 = *(uint *)(local_4f8 + (longlong)(int)uVar21 * 4);
              while ((iVar42 = 1, uVar23 != 0xffffffff && (iVar42 = 0, uVar23 != uVar36))) {
                uVar21 = uVar21 + 1 & local_4f0 - 1;
                uVar23 = *(uint *)(local_4f8 + (longlong)(int)uVar21 * 4);
              }
              local_4e8 = local_4e8 + iVar42;
              *(uint *)(local_4f8 + (longlong)(int)uVar21 * 4) = uVar36;
              puVar30 = local_4a8;
              puVar41 = local_4b0;
              fVar66 = (float)local_258;
              fVar67 = local_258._4_4_;
              fVar68 = (float)uStack_250;
              fVar60 = uStack_250._4_4_;
              fVar62 = local_268;
              fVar64 = fStack_264;
              fVar69 = fStack_260;
              fVar70 = fStack_25c;
              fVar71 = (float)local_278;
              fVar72 = local_278._4_4_;
              fVar73 = (float)uStack_270;
              fVar74 = uStack_270._4_4_;
              fVar75 = (float)local_288;
              fVar76 = local_288._4_4_;
              fVar77 = (float)uStack_280;
              fVar78 = uStack_280._4_4_;
              fVar79 = (float)local_158;
              fVar80 = local_158._4_4_;
              fVar81 = (float)uStack_150;
              fVar82 = uStack_150._4_4_;
              fVar83 = local_168;
              fVar84 = fStack_164;
              fVar85 = fStack_160;
              fVar86 = fStack_15c;
              fVar87 = (float)local_178;
              fVar88 = local_178._4_4_;
              fVar89 = (float)uStack_170;
              fVar90 = uStack_170._4_4_;
              fVar91 = (float)local_188;
              fVar92 = local_188._4_4_;
              fVar93 = (float)uStack_180;
              fVar94 = uStack_180._4_4_;
              iVar42 = local_49c[0];
              iVar34 = local_4a0;
            }
          }
        }
      }
    }
    puVar31 = local_4b8 + 8;
    puVar27 = puVar31;
    puVar38 = local_4c0;
    uVar21 = local_4c8[0];
    do {
      if (*puVar27 < puVar38[4]) {
        do {
          uVar23 = uVar21;
          puVar32 = puVar38;
          local_4b8 = puVar27;
          if (-1 < (int)(puVar38[6] - puVar27[2] | puVar38[5] - puVar27[1] | puVar27[6] - puVar38[2]
                        | puVar27[5] - puVar38[1])) goto LAB_144c344c4;
          puVar27 = puVar27 + 8;
        } while (*puVar27 < puVar38[4]);
      }
      if (uVar21 == 0) {
        local_4b0 = puVar41 + 8;
        piVar29 = &local_4a0;
      }
      else {
        local_4a8 = puVar30 + 8;
        piVar29 = local_49c;
        iVar34 = iVar42;
      }
      *piVar29 = iVar34 + -1;
      uVar21 = (uint)(*local_4a8 < *local_4b0);
      puVar27 = local_4a8;
      puVar38 = local_4b0;
      if (*local_4a8 < *local_4b0) {
        puVar27 = local_4b0;
        puVar38 = local_4a8;
      }
      puVar30 = local_4a8;
      puVar41 = local_4b0;
      iVar42 = local_49c[0];
      iVar34 = local_4a0;
      uVar23 = local_4c8[0];
      puVar32 = local_4c0;
      local_4b8 = puVar31;
    } while ((0 < local_4a0) && (0 < local_49c[0]));
  } while( true );
  stack0xfffffffffffffbb0 = "";
  local_458._0_8_ = "Stmatch";
  if (*(char *)(local_370 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar37 = *(longlong *)(lVar28 + 0xf0);
  if (lVar37 == 0) {
    if (*(char *)(lVar28 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar37 = FUN_144b3f4a0();
    *(longlong *)(lVar28 + 0xf0) = lVar37;
  }
  if (*(longlong *)(lVar37 + 0x3e0) != 0) {
    FUN_144be99f0(*(longlong *)(lVar37 + 0x3e0),local_458);
  }
  local_528 = 0;
  local_520 = 0.0;
  local_51c = 0x80000000;
  FUN_144fc0100(local_4c8,local_508,local_res20 & 0xffffffff,local_518,local_res18[0]);
  local_res18[0] = local_520;
  puVar30 = local_4a8;
  puVar41 = local_4b0;
  lVar37 = local_4f8;
  iVar42 = local_4a0;
  uVar23 = local_4c8[0];
  puVar32 = local_4c0;
LAB_144c34bc0:
  do {
    local_4c0 = puVar32;
    local_4c8[0] = uVar23;
    if ((iVar42 < 1) || (local_49c[0] < 1)) {
LAB_144c3525d:
      if (local_res18[0] != 0.0) {
        if (1 < (int)local_res18[0]) {
          FUN_144c36360(local_528,0,(int)local_res18[0] + -1,(ulonglong)local_res8 & 0xff);
        }
        FUN_144fc70c0(&local_res8,&local_528);
        iVar42 = 0;
        lVar37 = local_4f8;
        if (0 < (int)local_520) {
          lVar28 = 0;
          fVar17 = local_520;
          do {
            lVar26 = local_528;
            lVar37 = local_res10;
            if (*(char *)(lVar28 + 0x1c + local_528) != '\0') {
              iVar34 = *(int *)(local_res10 + 0x28) + 1;
              if ((int)(*(uint *)(local_res10 + 0x2c) & 0x7fffffff) < iVar34) {
                FUN_144c35f30(local_res10 + 0x20,&PTR_vftable_14c6e47a0,(longlong)iVar34);
              }
              iVar1 = *(int *)(lVar37 + 0x28);
              *(int *)(lVar37 + 0x28) = iVar34;
              uVar23 = *(uint *)(lVar28 + lVar26);
              puVar30 = (uint *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar37 + 0x20));
              *puVar30 = *(uint *)(lVar28 + 8 + lVar26) & 0x3fffff;
              puVar30[1] = uVar23 & 0x3fffff;
              uVar23 = *(uint *)(lVar28 + 0xc + lVar26);
              puVar30[3] = *(uint *)(lVar28 + 4 + lVar26) & 0x3fffff;
              puVar30[2] = uVar23 & 0x3fffff;
              fVar17 = local_520;
            }
            iVar42 = iVar42 + 1;
            lVar28 = lVar28 + 0x30;
            lVar37 = local_4f8;
          } while (iVar42 < (int)fVar17);
        }
      }
      local_520 = 0.0;
      if ((-1 < (int)local_51c) && (local_528 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_528,(ulonglong)(local_51c & 0x7fffffff) * 0x30);
        lVar37 = local_4f8;
      }
      local_528 = 0;
      local_51c = 0x80000000;
      local_4f0 = 0;
      if ((-1 < (int)local_4ec) && (lVar37 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,lVar37,(ulonglong)(local_4ec & 0x7fffffff) << 2);
      }
      local_4f8 = 0;
      local_4ec = 0x80000000;
      local_4d8 = 0;
      if ((-1 < (int)local_4d4) && (local_4e0 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_4e0,(ulonglong)(local_4d4 & 0x7fffffff) << 2);
      }
      local_4e0 = 0;
      local_4d4 = 0x80000000;
      local_510 = 0.0;
      if ((-1 < (int)local_50c) && (local_518 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_518,(ulonglong)(local_50c & 0x7fffffff) << 5);
      }
      local_518 = 0;
      local_50c = 0x80000000;
      local_500 = 0;
      if ((-1 < (int)local_4fc) && (local_508 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_508,(ulonglong)(local_4fc & 0x7fffffff) << 5);
      }
      local_508 = 0;
      local_4fc = 0x80000000;
      local_470 = 0;
      if ((-1 < (int)local_46c) && (local_478 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_478,(ulonglong)(local_46c & 0x7fffffff) << 3);
      }
      local_478 = 0;
      local_46c = 0x80000000;
      local_460 = 0;
      if ((-1 < (int)local_45c) && (local_468 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_468,(ulonglong)(local_45c & 0x7fffffff) << 3);
      }
      local_468 = 0;
      local_45c = 0x80000000;
      FUN_140c3e2cc(local_2e8);
      FUN_140c3e2cc(local_1e8);
      if (local_3e8 != 0) {
        FUN_144b3f230();
      }
      if (local_3e0 != 0) {
        FUN_144b3f230();
      }
      if (local_368 != 0) {
        local_458._8_4_ = 0x4999058e;
        local_458._0_8_ = &DAT_14999058c;
        uStack_44c = 1;
        FUN_144be9b20(local_368,local_458);
      }
      return;
    }
    puVar32 = puVar41;
    puVar27 = local_4b8;
    if (local_4c8[0] != 0) {
      puVar32 = local_4b8;
      puVar27 = puVar30;
    }
    uVar39 = local_4d8 - 1;
    uVar43 = *(uint *)(local_468 + (longlong)(int)puVar32[3] * 8) & 0x3fffff;
    uVar21 = *(uint *)(local_468 + 4 + (longlong)(int)puVar32[3] * 8) & 0x3fffff;
    uVar35 = *(uint *)(local_478 + (longlong)(int)puVar27[3] * 8) & 0x3fffff;
    uVar36 = *(uint *)(local_478 + 4 + (longlong)(int)puVar27[3] * 8) & 0x3fffff;
    uVar23 = local_4d8;
    if (0 < (int)uVar39) {
      uVar23 = uVar21 * -0x61c8864f;
      uVar22 = (uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
               uVar21 * -0x4f000000) & uVar39;
      lVar28 = (longlong)(int)uVar22;
      iVar34 = *(int *)(local_4e0 + lVar28 * 4);
      while ((uVar23 = local_4d8, iVar34 != -1 &&
             (uVar23 = uVar22, *(uint *)(local_4e0 + lVar28 * 4) != uVar21))) {
        uVar22 = uVar22 + 1 & uVar39;
        lVar28 = (longlong)(int)uVar22;
        iVar34 = *(int *)(local_4e0 + lVar28 * 4);
      }
    }
    if ((int)uVar39 < (int)uVar23) {
      uVar39 = local_4f0 - 1;
      uVar23 = local_4f0;
      if (0 < (int)uVar39) {
        uVar23 = uVar36 * -0x61c8864f;
        uVar24 = (uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                 uVar36 * -0x4f000000) & uVar39;
        puVar32 = (uint *)((longlong)(int)uVar24 * 4 + lVar37);
        uVar22 = *puVar32;
        while ((uVar23 = local_4f0, uVar22 != 0xffffffff && (uVar23 = uVar24, *puVar32 != uVar36)))
        {
          uVar24 = uVar24 + 1 & uVar39;
          puVar32 = (uint *)((longlong)(int)uVar24 * 4 + lVar37);
          uVar22 = *puVar32;
        }
      }
      if ((int)uVar39 < (int)uVar23) {
        pfVar25 = local_3f8;
        if (local_res8[0xb] != 0) {
          local_3d8 = (undefined **)&local_3c8;
          local_3cc = 0x80000004;
          local_3d0 = 4;
          if ((int)uVar21 < *(int *)(local_1c8 + 0x30)) {
            uVar23 = uVar21;
            if (*(int *)(local_1c8 + 0x78) != 0) {
              uVar23 = *(uint *)(*(longlong *)(local_1c8 + 0x70) + (ulonglong)uVar21 * 4);
            }
            if (uVar23 == 0xffffffff) {
              lVar37 = *(longlong *)(local_1c8 + 0x28);
              lVar28 = (ulonglong)uVar21 * 5;
            }
            else {
              lVar28 = (longlong)(int)uVar23 * 5;
              lVar37 = *(longlong *)(local_1c8 + 0xc0);
            }
          }
          else {
            lVar28 = (longlong)(int)(uVar21 - *(int *)(local_1c8 + 0x30)) * 5;
            lVar37 = *(longlong *)(local_1c8 + 0xe0);
          }
          iVar42 = *(int *)(local_1c8 + 0x40);
          iVar34 = *(int *)(lVar37 + lVar28 * 4);
          if (iVar34 < iVar42) {
            pfVar25 = (float *)((longlong)iVar34 * 0x10 + *(longlong *)(local_1c8 + 0x38));
          }
          else {
            pfVar25 = (float *)((longlong)(iVar34 - iVar42) * 0x10 + *(longlong *)(local_1c8 + 0xf0)
                               );
          }
          iVar34 = *(int *)(lVar37 + lVar28 * 4 + 4);
          fVar17 = *pfVar25;
          fVar66 = pfVar25[1];
          fVar67 = pfVar25[2];
          if (iVar34 < iVar42) {
            pfVar25 = (float *)((longlong)iVar34 * 0x10 + *(longlong *)(local_1c8 + 0x38));
          }
          else {
            pfVar25 = (float *)((longlong)(iVar34 - iVar42) * 0x10 + *(longlong *)(local_1c8 + 0xf0)
                               );
          }
          fVar68 = *pfVar25;
          fVar60 = pfVar25[1];
          fVar62 = pfVar25[2];
          local_3c8 = fVar66 * (float)local_178 + fVar17 * (float)local_188 + fVar67 * local_168 +
                      (float)local_158;
          fStack_3c4 = fVar66 * local_178._4_4_ + fVar17 * local_188._4_4_ + fVar67 * fStack_164 +
                       local_158._4_4_;
          uStack_3c0 = CONCAT44(fVar66 * uStack_170._4_4_ + fVar17 * uStack_180._4_4_ +
                                fVar67 * fStack_15c + uStack_150._4_4_,
                                fVar66 * (float)uStack_170 + fVar17 * (float)uStack_180 +
                                fVar67 * fStack_160 + (float)uStack_150);
          local_3b8 = CONCAT44(fVar60 * local_178._4_4_ + fVar68 * local_188._4_4_ +
                               fVar62 * fStack_164 + local_158._4_4_,
                               fVar60 * (float)local_178 + fVar68 * (float)local_188 +
                               fVar62 * local_168 + (float)local_158);
          uStack_3b0 = CONCAT44(fVar60 * uStack_170._4_4_ + fVar68 * uStack_180._4_4_ +
                                fVar62 * fStack_15c + uStack_150._4_4_,
                                fVar60 * (float)uStack_170 + fVar68 * (float)uStack_180 +
                                fVar62 * fStack_160 + (float)uStack_150);
          if ((int)uVar36 < *(int *)(local_2c8 + 0x30)) {
            uVar23 = uVar36;
            if (*(int *)(local_2c8 + 0x78) != 0) {
              uVar23 = *(uint *)(*(longlong *)(local_2c8 + 0x70) + (ulonglong)uVar36 * 4);
            }
            if (uVar23 == 0xffffffff) {
              lVar37 = *(longlong *)(local_2c8 + 0x28);
              lVar28 = (ulonglong)uVar36 * 5;
            }
            else {
              lVar28 = (longlong)(int)uVar23 * 5;
              lVar37 = *(longlong *)(local_2c8 + 0xc0);
            }
          }
          else {
            lVar28 = (longlong)(int)(uVar36 - *(int *)(local_2c8 + 0x30)) * 5;
            lVar37 = *(longlong *)(local_2c8 + 0xe0);
          }
          iVar42 = *(int *)(local_2c8 + 0x40);
          iVar34 = *(int *)(lVar37 + lVar28 * 4);
          if (iVar34 < iVar42) {
            pfVar25 = (float *)((longlong)iVar34 * 0x10 + *(longlong *)(local_2c8 + 0x38));
          }
          else {
            pfVar25 = (float *)((longlong)(iVar34 - iVar42) * 0x10 + *(longlong *)(local_2c8 + 0xf0)
                               );
          }
          iVar34 = *(int *)(lVar37 + lVar28 * 4 + 4);
          fVar17 = *pfVar25;
          fVar66 = pfVar25[1];
          fVar67 = pfVar25[2];
          if (iVar34 < iVar42) {
            pfVar25 = (float *)((longlong)iVar34 * 0x10 + *(longlong *)(local_2c8 + 0x38));
          }
          else {
            pfVar25 = (float *)((longlong)(iVar34 - iVar42) * 0x10 + *(longlong *)(local_2c8 + 0xf0)
                               );
          }
          fVar68 = *pfVar25;
          fVar60 = pfVar25[1];
          fVar62 = pfVar25[2];
          uVar16 = 0;
          local_3a8 = fVar66 * (float)local_278 + fVar17 * (float)local_288 + fVar67 * local_268 +
                      (float)local_258;
          fStack_3a4 = fVar66 * local_278._4_4_ + fVar17 * local_288._4_4_ + fVar67 * fStack_264 +
                       local_258._4_4_;
          fStack_3a0 = fVar66 * (float)uStack_270 + fVar17 * (float)uStack_280 + fVar67 * fStack_260
                       + (float)uStack_250;
          fStack_39c = fVar66 * uStack_270._4_4_ + fVar17 * uStack_280._4_4_ + fVar67 * fStack_25c +
                       uStack_250._4_4_;
          local_398._0_4_ =
               fVar60 * (float)local_278 + fVar68 * (float)local_288 + fVar62 * local_268 +
               (float)local_258;
          local_398._4_4_ =
               fVar60 * local_278._4_4_ + fVar68 * local_288._4_4_ + fVar62 * fStack_264 +
               local_258._4_4_;
          uStack_390._0_4_ =
               fVar60 * (float)uStack_270 + fVar68 * (float)uStack_280 + fVar62 * fStack_260 +
               (float)uStack_250;
          uStack_390._4_4_ =
               fVar60 * uStack_270._4_4_ + fVar68 * uStack_280._4_4_ + fVar62 * fStack_25c +
               uStack_250._4_4_;
          iVar42 = *(int *)(local_1c8 + 0x50);
          uVar40 = uVar16;
          if (0 < iVar42) {
            if ((int)uVar43 < *(int *)(local_1c8 + 0x20)) {
              uVar23 = uVar43;
              if (*(int *)(local_1c8 + 0x98) != 0) {
                uVar23 = *(uint *)(*(longlong *)(local_1c8 + 0x90) + (ulonglong)uVar43 * 4);
              }
              if (uVar23 != 0xffffffff) {
                lVar37 = *(longlong *)(local_1c8 + 0x120);
                goto LAB_144c34fc8;
              }
              puVar33 = (undefined4 *)
                        (*(longlong *)(local_1c8 + 0x48) + (longlong)(int)(iVar42 * uVar43) * 4);
            }
            else {
              lVar37 = *(longlong *)(local_1c8 + 0x140);
              uVar23 = uVar43 - *(int *)(local_1c8 + 0x20);
LAB_144c34fc8:
              puVar33 = (undefined4 *)(lVar37 + (longlong)(int)(uVar23 * iVar42) * 4);
            }
            uVar16 = *puVar33;
            iVar42 = *(int *)(local_2c8 + 0x50);
            if ((int)uVar35 < *(int *)(local_2c8 + 0x20)) {
              uVar23 = uVar35;
              if (*(int *)(local_2c8 + 0x98) != 0) {
                uVar23 = *(uint *)(*(longlong *)(local_2c8 + 0x90) + (ulonglong)uVar35 * 4);
              }
              if (uVar23 == 0xffffffff) {
                puVar33 = (undefined4 *)
                          (*(longlong *)(local_2c8 + 0x48) + (longlong)(int)(iVar42 * uVar35) * 4);
              }
              else {
                puVar33 = (undefined4 *)
                          (*(longlong *)(local_2c8 + 0x120) + (longlong)(int)(uVar23 * iVar42) * 4);
              }
            }
            else {
              puVar33 = (undefined4 *)
                        (*(longlong *)(local_2c8 + 0x140) +
                        (longlong)(int)((uVar35 - *(int *)(local_2c8 + 0x20)) * iVar42) * 4);
            }
            uVar40 = *puVar33;
          }
          pfVar25 = (float *)FUN_144fc6160(local_res8[0xb],&local_3d8,uVar16,uVar40);
          local_3d0 = 0;
          if ((-1 < (int)local_3cc) && (local_3d8 != (undefined **)0x0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_3d8,(ulonglong)(local_3cc & 0x7fffffff) << 4);
          }
          local_3d8 = (undefined **)0x0;
          local_3cc = 0x80000000;
        }
        iVar34 = FUN_144fc63c0(pfVar25,&local_318,local_1e8,local_2e8,uVar21,uVar36,uVar43,uVar35,
                               local_458);
        auVar12 = _local_458;
        puVar30 = local_4a8;
        puVar41 = local_4b0;
        lVar37 = local_4f8;
        iVar42 = local_4a0;
        local_res18[0] = local_520;
        if (iVar34 == -1) {
          local_458._0_8_ = local_458._4_8_ << 0x20;
          local_458._8_4_ = auVar12._8_4_;
          uStack_44c = auVar12._12_4_;
          uVar23 = uStack_44c;
          local_458._8_4_ = local_458._8_4_ & 0x3fffff;
          local_458._0_8_ = auVar12._0_8_ & 0x3fffff003fffff | 0x40000000000000;
          local_res18[0] = (float)((int)local_520 + 1);
          uStack_44c = uVar23 & 0x3fffff | 0x400000;
          if ((int)(local_51c & 0x7fffffff) < (int)local_res18[0]) {
            FUN_144c36510(&local_528,&PTR_vftable_14c6e47c0,(longlong)(int)local_res18[0]);
          }
          puVar19 = (undefined8 *)((longlong)(int)local_520 * 0x30 + local_528);
          puVar30 = local_4a8;
          puVar41 = local_4b0;
          lVar37 = local_4f8;
          iVar42 = local_4a0;
          local_520 = local_res18[0];
          if (puVar19 != (undefined8 *)0x0) {
            *puVar19 = local_458._0_8_;
            puVar19[1] = stack0xfffffffffffffbb0;
            auVar12._4_4_ = fStack_444;
            auVar12._0_4_ = local_448;
            auVar12._8_4_ = fStack_440;
            auVar12._12_4_ = fStack_43c;
            *(undefined1 (*) [16])(puVar19 + 2) = auVar12;
            *(undefined4 *)(puVar19 + 4) = (undefined4)local_438;
            *(undefined4 *)((longlong)puVar19 + 0x24) = local_438._4_4_;
            *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_430;
            *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_430._4_4_;
          }
        }
      }
    }
    puVar31 = local_4b8 + 8;
    puVar27 = puVar31;
    puVar38 = local_4c0;
    uVar21 = local_4c8[0];
    do {
      if (*puVar27 < puVar38[4]) {
        do {
          uVar23 = uVar21;
          puVar32 = puVar38;
          local_4b8 = puVar27;
          if (-1 < (int)(puVar38[6] - puVar27[2] | puVar38[5] - puVar27[1] | puVar27[6] - puVar38[2]
                        | puVar27[5] - puVar38[1])) goto LAB_144c34bc0;
          puVar27 = puVar27 + 8;
        } while (*puVar27 < puVar38[4]);
      }
      if (uVar21 == 0) {
        local_4b0 = puVar41 + 8;
        piVar29 = &local_4a0;
      }
      else {
        local_4a8 = puVar30 + 8;
        piVar29 = local_49c;
        iVar42 = local_49c[0];
      }
      *piVar29 = iVar42 + -1;
      uVar21 = (uint)(*local_4a8 < *local_4b0);
      puVar27 = local_4a8;
      puVar38 = local_4b0;
      if (*local_4a8 < *local_4b0) {
        puVar27 = local_4b0;
        puVar38 = local_4a8;
      }
      local_4b8 = puVar31;
      if (local_4a0 < 1) goto LAB_144c3525d;
      puVar30 = local_4a8;
      puVar41 = local_4b0;
      iVar42 = local_4a0;
      uVar23 = local_4c8[0];
      puVar32 = local_4c0;
    } while (0 < local_49c[0]);
  } while( true );
}



// FUNCTION 144c355f0 FUN_144c355f0 body=655 status=ok
// SIG undefined FUN_144c355f0(void)

undefined4 * FUN_144c355f0(longlong *param_1,undefined4 *param_2,int param_3)

{
  longlong *_Dst;
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  uint local_res18;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar8 = 8;
  if (8 < param_3) {
    iVar8 = param_3;
  }
  lVar2 = param_1[1];
  lVar10 = 0;
  local_48 = 0;
  local_40 = 0;
  local_res18 = 0x80000000;
  local_3c = 0x80000000;
  if (param_1 != &local_48) {
    FUN_144c33ad0(&local_48,&PTR_vftable_14c6e47c0);
    FUN_144c33ad0(param_1,&PTR_vftable_14c6e47c0);
    lVar10 = *param_1;
    *param_1 = local_48;
    local_res18 = *(uint *)((longlong)param_1 + 0xc);
    *(undefined4 *)(param_1 + 1) = local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar8) {
    FUN_144c36810(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar8);
  }
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar6 = uVar4 - (uVar4 >> 1);
  if ((int)param_1[1] < (int)uVar6) {
    *(uint *)(param_1 + 1) = uVar6;
  }
  else if ((int)uVar6 < (int)param_1[1]) {
    *(uint *)(param_1 + 1) = uVar6;
  }
  iVar7 = 0;
  iVar8 = iVar7;
  if ((0 < (int)uVar6) && (iVar8 = 0, 3 < uVar6)) {
    _Dst = (longlong *)*param_1;
    if ((param_1 < _Dst) ||
       ((longlong *)((longlong)_Dst + (longlong)(int)(uVar6 - 1) * 4) < param_1)) {
      uVar3 = uVar6 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      do {
        iVar7 = iVar7 + 4;
      } while (iVar7 < (int)(uVar6 - uVar3));
      iVar8 = (uVar6 - uVar3) + 3;
      memset(_Dst,-1,(longlong)((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2) << 4);
      iVar8 = iVar7;
    }
  }
  for (lVar5 = (longlong)iVar8; lVar5 < (longlong)((ulonglong)uVar4 - (ulonglong)(uVar4 >> 1));
      lVar5 = lVar5 + 1) {
    *(undefined4 *)(*param_1 + lVar5 * 4) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  lVar5 = 0;
  if (0 < (longlong)(int)lVar2) {
    do {
      iVar8 = *(int *)(lVar10 + lVar5 * 4);
      if (iVar8 != -1) {
        iVar7 = (int)param_1[1] + -1;
        if (iVar7 < (int)param_1[2] * 2) {
          FUN_144c355f0(param_1,local_res8,iVar7 * 2 + 2);
        }
        iVar9 = 1;
        lVar1 = *param_1;
        uVar6 = (int)param_1[1] - 1;
        uVar4 = iVar8 * -0x61c8864f;
        uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                iVar8 * -0x4f000000) & uVar6;
        iVar7 = *(int *)(lVar1 + (longlong)(int)uVar4 * 4);
        while (iVar7 != -1) {
          if (iVar7 == iVar8) {
            iVar9 = 0;
            break;
          }
          uVar4 = uVar4 + 1 & uVar6;
          iVar7 = *(int *)(lVar1 + (longlong)(int)uVar4 * 4);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar9;
        *(int *)(lVar1 + (longlong)(int)uVar4 * 4) = iVar8;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)lVar2);
  }
  *param_2 = 0;
  if ((-1 < (int)local_res18) && (lVar10 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar10,(ulonglong)(local_res18 & 0x7fffffff) << 2);
  }
  return param_2;
}



// FUNCTION 144c35880 FUN_144c35880 body=393 status=ok
// SIG undefined FUN_144c35880(void)

void FUN_144c35880(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar6 = *(longlong *)(param_3 + 0x20);
  lVar7 = (longlong)*(int *)(param_3 + 0x28) * 0x10 + lVar6;
  if (lVar6 != lVar7) {
    do {
      iVar5 = *(int *)(param_3 + 0x68) + 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(lVar6 + 4) * 0x14);
      auVar10 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x38) + (longlong)piVar1[1] * 0x10);
      auVar8 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x38) + (longlong)*piVar1 * 0x10);
      auVar9 = minps(auVar8,auVar10);
      auVar8 = maxps(auVar8,auVar10);
      piVar1 = (int *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(lVar6 + 0xc) * 0x14);
      lVar2 = *(longlong *)(param_2 + 0x38);
      auVar10 = *(undefined1 (*) [16])(lVar2 + (longlong)*piVar1 * 0x10);
      lVar3 = (longlong)piVar1[1];
      auVar11 = minps(auVar10,*(undefined1 (*) [16])(lVar2 + lVar3 * 0x10));
      auVar10 = maxps(auVar10,*(undefined1 (*) [16])(lVar2 + lVar3 * 0x10));
      if ((int)(*(uint *)(param_3 + 0x6c) & 0x7fffffff) < iVar5) {
        FUN_144c36720((longlong *)(param_3 + 0x60),&PTR_vftable_14c6e47a0,(longlong)iVar5);
      }
      pauVar4 = (undefined1 (*) [16])
                ((longlong)*(int *)(param_3 + 0x68) * 0x20 + *(longlong *)(param_3 + 0x60));
      if (pauVar4 != (undefined1 (*) [16])0x0) {
        *pauVar4 = auVar9;
        pauVar4[1] = auVar8;
      }
      *(int *)(param_3 + 0x68) = iVar5;
      iVar5 = *(int *)(param_3 + 0x78) + 1;
      if ((int)(*(uint *)(param_3 + 0x7c) & 0x7fffffff) < iVar5) {
        FUN_144c36720((longlong *)(param_3 + 0x70),&PTR_vftable_14c6e47a0,(longlong)iVar5);
      }
      pauVar4 = (undefined1 (*) [16])
                ((longlong)*(int *)(param_3 + 0x78) * 0x20 + *(longlong *)(param_3 + 0x70));
      if (pauVar4 != (undefined1 (*) [16])0x0) {
        *pauVar4 = auVar11;
        pauVar4[1] = auVar10;
      }
      lVar6 = lVar6 + 0x10;
      *(int *)(param_3 + 0x78) = iVar5;
    } while (lVar6 != lVar7);
  }
  return;
}



// FUNCTION 144c35a10 FUN_144c35a10 body=1299 status=ok
// SIG undefined FUN_144c35a10(void)

undefined1 * FUN_144c35a10(undefined1 *param_1,int *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  short sVar10;
  int *piVar11;
  longlong *plVar12;
  uint in_R10D;
  uint uVar13;
  undefined1 uVar14;
  int *piVar15;
  short sVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar23 [16];
  int local_d8;
  uint local_d4;
  longlong local_d0;
  int *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  int *local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  
  uVar13 = in_R10D & 0xffffff00;
  if (*(int *)(param_3 + 0x18) == param_2[1]) {
    uVar13 = (uint)(*(int *)(param_3 + 0x1c) == *param_2);
  }
  local_c8 = *(int **)(param_3 + 0x20);
  uVar14 = 0;
  local_78 = local_c8 + (longlong)*(int *)(param_3 + 0x28) * 4;
  local_d4 = uVar13;
  if (local_c8 != local_78) {
    piVar15 = local_c8 + 1;
    do {
      iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 4) + 0x68) + (longlong)*local_c8 * 4);
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 6) + 0x68) + (longlong)piVar15[1] * 4);
      iVar4 = iVar5;
      if ((char)uVar13 == '\0') {
        iVar4 = iVar9;
        iVar9 = iVar5;
      }
      if ((iVar4 != -1) && (iVar9 != -1)) {
        if ((char)uVar13 == '\0') {
          iVar5 = *piVar15;
          piVar11 = piVar15 + 2;
        }
        else {
          iVar5 = piVar15[2];
          piVar11 = piVar15;
        }
        iVar3 = *piVar11;
        lVar6 = (longlong)iVar5;
        local_98 = (longlong)iVar3 * 5;
        local_d0 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x28);
        local_90 = *(longlong *)(*(longlong *)(param_2 + 10) + 0x28);
        puVar1 = (undefined8 *)
                 (*(longlong *)(*(longlong *)(param_2 + 4) + 0x18) + (longlong)iVar4 * 0x10);
        local_b8 = *puVar1;
        uStack_b0 = puVar1[1];
        FUN_144bfa5a0(&local_b8,param_2 + 0x10,&local_b8);
        puVar1 = (undefined8 *)
                 (*(longlong *)(*(longlong *)(param_2 + 6) + 0x18) + (longlong)iVar9 * 0x10);
        local_a8 = *puVar1;
        uStack_a0 = puVar1[1];
        FUN_144bfa5a0(&local_a8,param_2 + 0x20,&local_a8);
        if ((*(byte *)(local_d0 + 0x10 + lVar6 * 0x14) & 0x10) == 0) {
          fVar20 = ((float)local_b8 - (float)local_a8) * ((float)local_b8 - (float)local_a8);
          fVar21 = (local_b8._4_4_ - local_a8._4_4_) * (local_b8._4_4_ - local_a8._4_4_);
          fVar22 = ((float)uStack_b0 - (float)uStack_a0) * ((float)uStack_b0 - (float)uStack_a0);
          auVar23._4_4_ = fVar20;
          auVar23._0_4_ = fVar20;
          auVar23._8_4_ = fVar20;
          auVar23._12_4_ = fVar20;
          auVar19._0_4_ = fVar21 + fVar20 + fVar22;
          auVar19._4_4_ = fVar21 + fVar20 + fVar22;
          auVar19._8_4_ = fVar21 + fVar20 + fVar22;
          auVar19._12_4_ = fVar21 + fVar20 + fVar22;
          auVar23 = sqrtps(auVar23,auVar19);
          sVar10 = auVar23._2_2_;
          sVar16 = sVar10;
        }
        else {
          local_d8 = iVar5;
          FUN_144c52ce0(*(undefined8 *)(param_2 + 8),&local_d8,&local_58);
          local_d8 = iVar3;
          FUN_144c52ce0(*(undefined8 *)(param_2 + 10),&local_d8,&local_68);
          fVar20 = ((float)local_a8 - local_68) * ((float)local_a8 - local_68);
          fVar21 = (local_a8._4_4_ - fStack_64) * (local_a8._4_4_ - fStack_64);
          fVar22 = ((float)uStack_a0 - fStack_60) * ((float)uStack_a0 - fStack_60);
          bVar2 = *(byte *)(local_90 + 0x10 + local_98 * 4);
          auVar17._0_4_ = fVar21 + fVar20 + fVar22;
          auVar17._4_4_ = fVar21 + fVar20 + fVar22;
          auVar17._8_4_ = fVar21 + fVar20 + fVar22;
          auVar17._12_4_ = fVar21 + fVar20 + fVar22;
          in_XMM3 = sqrtps(in_XMM3,auVar17);
          fVar20 = ((float)local_b8 - local_58) * ((float)local_b8 - local_58);
          fVar21 = (local_b8._4_4_ - fStack_54) * (local_b8._4_4_ - fStack_54);
          fVar22 = ((float)uStack_b0 - fStack_50) * ((float)uStack_b0 - fStack_50);
          auVar18._0_4_ = fVar21 + fVar20 + fVar22;
          auVar18._4_4_ = fVar21 + fVar20 + fVar22;
          auVar18._8_4_ = fVar21 + fVar20 + fVar22;
          auVar18._12_4_ = fVar21 + fVar20 + fVar22;
          auVar23 = sqrtps(in_XMM4,auVar18);
          in_XMM4._0_4_ = auVar23._0_4_ + in_XMM3._0_4_;
          in_XMM4._4_4_ = auVar23._4_4_ + in_XMM3._4_4_;
          in_XMM4._8_4_ = auVar23._8_4_ + in_XMM3._8_4_;
          in_XMM4._12_4_ = auVar23._12_4_ + in_XMM3._12_4_;
          if ((bVar2 & 0x20) == 0) {
            if ((bVar2 & 0x10) == 0) {
              fVar20 = 0.0;
            }
            else {
              fVar20 = (float)((int)*(short *)(local_90 + 0x12 + local_98 * 4) << 0x10);
            }
            sVar10 = (short)((uint)(fVar20 + in_XMM4._0_4_) >> 0x10);
          }
          else {
            sVar10 = 0x7f7f;
          }
          bVar2 = *(byte *)(local_d0 + 0x10 + lVar6 * 0x14);
          if ((bVar2 & 0x20) == 0) {
            if ((bVar2 & 0x10) == 0) {
              sVar16 = (short)((uint)(in_XMM4._0_4_ + 0.0) >> 0x10);
            }
            else {
              sVar16 = (short)((uint)((float)((int)*(short *)(local_d0 + 0x12 + lVar6 * 0x14) <<
                                             0x10) + in_XMM4._0_4_) >> 0x10);
            }
          }
          else {
            sVar16 = 0x7f7f;
          }
        }
        local_d8 = param_2[2];
        iVar5 = FUN_144fc0000(*param_4,&local_d8,iVar4,iVar9);
        lVar6 = *param_4;
        plVar12 = (longlong *)(lVar6 + 0x30);
        local_d0 = CONCAT44(local_d0._4_4_,iVar5);
        if (iVar5 < 0) {
          FUN_144c36150(plVar12,local_88,param_2 + 2);
          iVar5 = local_88._0_4_;
          if (iVar5 == *(int *)(lVar6 + 0x38)) {
            local_d8 = *(int *)(lVar6 + 0x38) + 1;
            if ((int)(*(uint *)(lVar6 + 0x3c) & 0x7fffffff) < local_d8) {
              FUN_144c368b0(plVar12,&PTR_vftable_14c6e47a0,(longlong)local_d8);
            }
            piVar11 = (int *)(*plVar12 + (longlong)*(int *)(lVar6 + 0x38) * 0x18);
            if (piVar11 != (int *)0x0) {
              *piVar11 = param_2[2];
              piVar11[2] = 0;
              piVar11[3] = 0;
              piVar11[4] = 0;
              piVar11[5] = -0x80000000;
            }
            *(int *)(lVar6 + 0x38) = local_d8;
          }
          lVar7 = (longlong)iVar5;
          lVar8 = *plVar12;
          lVar6 = lVar8 + lVar7 * 0x18;
          iVar5 = *(int *)(lVar8 + 0x10 + lVar7 * 0x18) + 1;
          if ((int)(*(uint *)(lVar8 + 0x14 + lVar7 * 0x18) & 0x7fffffff) < iVar5) {
            FUN_144c36030(lVar6 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar5);
          }
          iVar3 = *(int *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x10) = iVar5;
          piVar11 = (int *)(*(longlong *)(lVar6 + 8) + (longlong)iVar3 * 0x14);
          if (piVar11 != (int *)0x0) {
            FUN_144fbffe0(piVar11);
          }
          piVar11[1] = iVar9;
          *piVar11 = iVar4;
          *(short *)(piVar11 + 4) = sVar10;
          *(short *)((longlong)piVar11 + 0x12) = sVar16;
        }
        else {
          FUN_144c36150(plVar12,local_80,param_2 + 2);
          iVar9 = local_80._0_4_;
          if (iVar9 == *(int *)(lVar6 + 0x38)) {
            iVar5 = *(int *)(lVar6 + 0x38) + 1;
            if ((int)(*(uint *)(lVar6 + 0x3c) & 0x7fffffff) < iVar5) {
              FUN_144c368b0(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar5);
            }
            piVar11 = (int *)(*plVar12 + (longlong)*(int *)(lVar6 + 0x38) * 0x18);
            if (piVar11 != (int *)0x0) {
              *piVar11 = param_2[2];
              piVar11[2] = 0;
              piVar11[3] = 0;
              piVar11[4] = 0;
              piVar11[5] = -0x80000000;
            }
            *(int *)(lVar6 + 0x38) = iVar5;
          }
          lVar8 = (longlong)(int)local_d0;
          lVar6 = *(longlong *)(*plVar12 + 8 + (longlong)iVar9 * 0x18);
          if ((float)((int)sVar10 << 0x10) <
              (float)((int)*(short *)(lVar6 + 0x10 + lVar8 * 0x14) << 0x10)) {
            *(short *)(lVar6 + 0x10 + lVar8 * 0x14) = sVar10;
          }
          if ((float)((int)sVar16 << 0x10) <
              (float)((int)*(short *)(lVar6 + 0x12 + lVar8 * 0x14) << 0x10)) {
            *(short *)(lVar6 + 0x12 + lVar8 * 0x14) = sVar16;
          }
        }
        uVar14 = 1;
        uVar13 = local_d4;
      }
      piVar15 = piVar15 + 4;
      local_c8 = local_c8 + 4;
    } while (local_c8 != local_78);
  }
  lVar6 = *param_4;
  *param_1 = uVar14;
  if (lVar6 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144c35f30 FUN_144c35f30 body=243 status=ok
// SIG undefined FUN_144c35f30(void)

void FUN_144c35f30(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x10,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c36030 FUN_144c36030 body=287 status=ok
// SIG undefined FUN_144c36030(void)

ulonglong FUN_144c36030(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c36150 FUN_144c36150 body=258 status=ok
// SIG undefined FUN_144c36150(void)

uint * FUN_144c36150(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = (int)param_1[1] + 1;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar7 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar7 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  iVar8 = *param_3;
  lVar3 = param_1[2];
  uVar9 = iVar8 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar7 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144c3622a:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x18) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_144c3622a;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144c36260 FUN_144c36260 body=247 status=ok
// SIG undefined FUN_144c36260(void)

void FUN_144c36260(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c36360 FUN_144c36360 body=422 status=ok
// SIG undefined FUN_144c36360(void)

void FUN_144c36360(longlong param_1,int param_2,uint param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uVar20 = (ulonglong)param_2;
  uVar21 = uVar20;
  do {
    lVar13 = (longlong)(int)param_3;
    uVar18 = uVar20 & 0xffffffff;
    lVar19 = (longlong)(int)(param_3 + (int)uVar20) >> 1;
    puVar14 = (undefined8 *)(param_1 + lVar19 * 0x30);
    local_80 = *puVar14;
    uStack_78 = puVar14[1];
    puVar14 = (undefined8 *)(param_1 + 0x10 + lVar19 * 0x30);
    local_70 = *puVar14;
    uStack_68 = puVar14[1];
    puVar1 = (undefined4 *)(param_1 + 0x20 + lVar19 * 0x30);
    local_60 = *puVar1;
    uStack_5c = puVar1[1];
    uStack_58 = puVar1[2];
    uStack_54 = puVar1[3];
    uVar16 = param_3;
    do {
      uVar17 = (uint)uVar18;
      iVar12 = FUN_144fc6340((longlong)(int)uVar17 * 0x30 + param_1,&local_80);
      while (iVar12 != 0) {
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        uVar21 = uVar21 + 1;
        iVar12 = FUN_144fc6340((longlong)(int)uVar17 * 0x30 + param_1,&local_80);
      }
      iVar12 = FUN_144fc6340(&local_80,(longlong)(int)uVar16 * 0x30 + param_1);
      while (iVar12 != 0) {
        uVar16 = uVar16 - 1;
        lVar13 = lVar13 + -1;
        iVar12 = FUN_144fc6340(&local_80,(longlong)(int)uVar16 * 0x30 + param_1);
      }
      if ((int)uVar16 < (int)uVar17) break;
      if (uVar16 != uVar17) {
        puVar14 = (undefined8 *)(lVar13 * 0x30 + param_1);
        puVar15 = (undefined8 *)(uVar21 * 0x30 + param_1);
        uVar5 = *puVar14;
        uVar6 = puVar14[1];
        uVar7 = puVar15[1];
        uVar8 = puVar14[2];
        uVar9 = puVar14[3];
        uVar10 = puVar14[4];
        uVar11 = puVar14[5];
        *puVar14 = *puVar15;
        puVar14[1] = uVar7;
        uVar7 = puVar15[3];
        puVar14[2] = puVar15[2];
        puVar14[3] = uVar7;
        uVar2 = *(undefined4 *)((longlong)puVar15 + 0x24);
        uVar3 = *(undefined4 *)(puVar15 + 5);
        uVar4 = *(undefined4 *)((longlong)puVar15 + 0x2c);
        *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar15 + 4);
        *(undefined4 *)((longlong)puVar14 + 0x24) = uVar2;
        *(undefined4 *)(puVar14 + 5) = uVar3;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar4;
        *puVar15 = uVar5;
        puVar15[1] = uVar6;
        puVar15[2] = uVar8;
        puVar15[3] = uVar9;
        puVar15[4] = uVar10;
        puVar15[5] = uVar11;
      }
      uVar16 = uVar16 - 1;
      lVar13 = lVar13 + -1;
      uVar17 = uVar17 + 1;
      uVar18 = (ulonglong)uVar17;
      uVar21 = uVar21 + 1;
    } while ((int)uVar17 <= (int)uVar16);
    if ((int)uVar20 < (int)uVar16) {
      FUN_144c36360(param_1,uVar20 & 0xffffffff,uVar16,param_4);
    }
    if ((int)param_3 <= (int)uVar17) {
      return;
    }
    uVar20 = (ulonglong)uVar17;
  } while( true );
}



// FUNCTION 144c36510 FUN_144c36510 body=254 status=ok
// SIG undefined FUN_144c36510(void)

ulonglong FUN_144c36510(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar4 * 0x30;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x30);
  uVar3 = uVar4 * 0x30 + 0x30;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x30;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar2;
  return uVar3;
}



// FUNCTION 144c36610 FUN_144c36610 body=259 status=ok
// SIG undefined FUN_144c36610(void)

void FUN_144c36610(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 144c36720 FUN_144c36720 body=236 status=ok
// SIG undefined FUN_144c36720(void)

void FUN_144c36720(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar3 * 0x20;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
  uVar1 = uVar3 * 0x20 + 0x20;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144c36810 FUN_144c36810 body=159 status=ok
// SIG undefined FUN_144c36810(void)

void FUN_144c36810(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c368b0 FUN_144c368b0 body=506 status=ok
// SIG undefined FUN_144c368b0(void)

ulonglong FUN_144c368b0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res18;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar7 * 2;
  uVar10 = param_3;
  if (param_3 < uVar8) {
    uVar10 = uVar8;
  }
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar10 * 0x18);
  piVar5 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar4 = piVar5 + 5;
  if (0 < (int)uVar1) {
    piVar6 = (int *)(lVar3 + 0x14);
    uVar8 = (ulonglong)uVar1;
    piVar9 = piVar4;
    do {
      if (piVar6 + -5 != (int *)0x0) {
        piVar6[-5] = *piVar5;
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = -0x80000000;
        FUN_144c33a50(piVar9 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar6 + -3) = *(undefined8 *)(piVar9 + -3);
        piVar6[-1] = piVar9[-1];
        *piVar6 = *piVar9;
        piVar9[-3] = 0;
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        piVar9[0] = 0;
      }
      piVar6 = piVar6 + 6;
      piVar5 = piVar5 + 6;
      piVar9 = piVar9 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = (ulonglong)uVar1;
    do {
      piVar4[-1] = 0;
      if ((-1 < *piVar4) && (*(longlong *)(piVar4 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      *piVar4 = -0x80000000;
      piVar4 = piVar4 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar10 * 0x18 + 0x18;
  uVar11 = uVar10;
  if (uVar8 <= local_res18) {
    uVar11 = uVar10 + 1;
    if (uVar8 <= local_res18 - 0x18) {
      uVar10 = (local_res18 - 0x18) + uVar10 * -0x18;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar10;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar2,0);
      uVar11 = uVar11 + uVar10 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 0x18);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar8;
}



// FUNCTION 144c36ab0 FUN_144c36ab0 body=151 status=ok
// SIG undefined FUN_144c36ab0(void)

undefined8 * FUN_144c36ab0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiClusterGraph::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  return param_1;
}



// FUNCTION 144c36b50 FUN_144c36b50 body=543 status=ok
// SIG undefined FUN_144c36b50(void)

void FUN_144c36b50(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkaiClusterGraph::vftable;
  lVar2 = param_1[0x10];
  lVar3 = (longlong)*(int *)(param_1 + 0x11) * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) << 4);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xd],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x74) & 0x7fffffff) << 2);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
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
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 2);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 3);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 3);
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
  return;
}



// FUNCTION 144c36d70 FUN_144c36d70 body=3 status=ok
// SIG undefined FUN_144c36d70(void)

void FUN_144c36d70(void)

{
  return;
}



// FUNCTION 144c36d80 FUN_144c36d80 body=87 status=ok
// SIG undefined FUN_144c36d80(void)

undefined8 FUN_144c36d80(undefined8 param_1,ulonglong param_2)

{
  FUN_144c36b50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 144c36de0 FUN_144c36de0 body=159 status=ok
// SIG undefined FUN_144c36de0(void)

void FUN_144c36de0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c36e80 FUN_144c36e80 body=159 status=ok
// SIG undefined FUN_144c36e80(void)

void FUN_144c36e80(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c36f20 FUN_144c36f20 body=159 status=ok
// SIG undefined FUN_144c36f20(void)

void FUN_144c36f20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c36fc0 FUN_144c36fc0 body=259 status=ok
// SIG undefined FUN_144c36fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144c36fc0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  param_1[2] = 1;
  lVar3 = 0;
  local_res8 = 0xd8;
  param_1[4] = 0;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = hkaiClusterGraphInstance::vftable;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"hkaiClusterGraphInstanceData");
  }
  if (lVar2 != 0) {
    lVar3 = FUN_144c37350(lVar2);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  if (param_1[4] != lVar3) {
    if (lVar3 != 0) {
      FUN_144b3d910(lVar3);
    }
    lVar2 = param_1[4];
    param_1[4] = lVar3;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
  }
  if (lVar3 != 0) {
    FUN_144b3f230(lVar3);
  }
  uVar1 = uRam000000014c6dae48;
  param_1[8] = _DAT_14c6dae40;
  param_1[9] = uVar1;
  uVar1 = uRam000000014c6dae58;
  param_1[10] = _DAT_14c6dae50;
  param_1[0xb] = uVar1;
  uVar1 = uRam000000014c6dae68;
  param_1[0xc] = _DAT_14c6dae60;
  param_1[0xd] = uVar1;
  uVar1 = _DAT_14c6dae78;
  param_1[0xe] = _DAT_14c6dae70;
  param_1[0xf] = uVar1;
  return param_1;
}



// FUNCTION 144c370d0 FUN_144c370d0 body=174 status=ok
// SIG undefined FUN_144c370d0(void)

undefined8 * FUN_144c370d0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiClusterGraphInstance::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_1[4] != *(longlong *)(param_2 + 0x20)) {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_144b3d910();
    }
    lVar1 = param_1[4];
    param_1[4] = *(undefined8 *)(param_2 + 0x20);
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined1 *)(param_2 + 0x30) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar2;
  return param_1;
}



// FUNCTION 144c37180 FUN_144c37180 body=49 status=ok
// SIG undefined FUN_144c37180(void)

void FUN_144c37180(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



// FUNCTION 144c371c0 FUN_144c371c0 body=8 status=ok
// SIG undefined FUN_144c371c0(void)

void FUN_144c371c0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



// FUNCTION 144c371d0 FUN_144c371d0 body=152 status=ok
// SIG undefined FUN_144c371d0(void)

undefined8 * FUN_144c371d0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_144be5d10(lVar1);
    (*DAT_14c787678)(0,lVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 144c37270 FUN_144c37270 body=103 status=ok
// SIG undefined FUN_144c37270(void)

void FUN_144c37270(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c372e0 FUN_144c372e0 body=103 status=ok
// SIG undefined FUN_144c372e0(void)

void FUN_144c372e0(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c37350 FUN_144c37350 body=191 status=ok
// SIG undefined FUN_144c37350(void)

undefined8 * FUN_144c37350(undefined8 *param_1)

{
  param_1[2] = 1;
  *param_1 = hkaiClusterGraphInstanceData::vftable;
  param_1[1] = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  return param_1;
}



// FUNCTION 144c37410 FUN_144c37410 body=613 status=ok
// SIG undefined FUN_144c37410(void)

void FUN_144c37410(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = hkaiClusterGraphInstanceData::vftable;
  plVar1 = (longlong *)param_1[0x19];
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1a) * 2;
  while (plVar2 != plVar1) {
    plVar3 = plVar2 + -2;
    *(undefined4 *)(plVar2 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + -4)) && (*plVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar3,
                 (ulonglong)(*(uint *)((longlong)plVar2 + -4) & 0x7fffffff) << 2);
    }
    *plVar3 = 0;
    *(undefined4 *)((longlong)plVar2 + -4) = 0x80000000;
    plVar2 = plVar3;
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x19],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xd4) & 0x7fffffff) << 4);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x17],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc4) & 0x7fffffff) << 2);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x15],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xb4) & 0x7fffffff) << 2);
  }
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x13],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xa4) & 0x7fffffff) << 3);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x11],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x94) & 0x7fffffff) << 3);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xf],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x84) & 0x7fffffff) << 2);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  if (param_1[0xe] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144c37680 FUN_144c37680 body=1050 status=ok
// SIG undefined FUN_144c37680(void)

undefined8 * FUN_144c37680(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiClusterGraphInstanceData::vftable;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  lVar4 = *(longlong *)(param_2 + 0x70);
  param_1[0xe] = lVar4;
  if (lVar4 != 0) {
    FUN_144b3d910();
  }
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar1 = *(uint *)(param_2 + 0x80);
  puVar10 = *(undefined4 **)(param_2 + 0x78);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[0xf] = uVar6;
    uVar11 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x10) = uVar1;
    *(uint *)((longlong)param_1 + 0x84) = uVar1;
    puVar8 = (undefined4 *)param_1[0xf];
    do {
      if (puVar8 != (undefined4 *)0x0) {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar8 = uVar2;
      }
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 != 0);
  }
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x90);
  puVar10 = *(undefined4 **)(param_2 + 0x88);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[0x11] = uVar6;
    uVar11 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x12) = uVar1;
    *(uint *)((longlong)param_1 + 0x94) = uVar1;
    puVar8 = (undefined4 *)param_1[0x11];
    do {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar10;
        puVar5 = puVar10 + 1;
        puVar10 = puVar10 + 2;
        puVar8[1] = *puVar5;
      }
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 2;
    } while (uVar11 != 0);
  }
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0xa0);
  puVar9 = *(undefined8 **)(param_2 + 0x98);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[0x13] = uVar6;
    uVar11 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x14) = uVar1;
    *(uint *)((longlong)param_1 + 0xa4) = uVar1;
    puVar7 = (undefined8 *)param_1[0x13];
    do {
      if (puVar7 != (undefined8 *)0x0) {
        uVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar7 = uVar6;
      }
      uVar11 = uVar11 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar11 != 0);
  }
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0xb0);
  puVar10 = *(undefined4 **)(param_2 + 0xa8);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[0x15] = uVar6;
    uVar11 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x16) = uVar1;
    *(uint *)((longlong)param_1 + 0xb4) = uVar1;
    puVar8 = (undefined4 *)param_1[0x15];
    do {
      if (puVar8 != (undefined4 *)0x0) {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar8 = uVar2;
      }
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 != 0);
  }
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0xc0);
  puVar10 = *(undefined4 **)(param_2 + 0xb8);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[0x17] = uVar6;
    uVar11 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x18) = uVar1;
    *(uint *)((longlong)param_1 + 0xc4) = uVar1;
    puVar8 = (undefined4 *)param_1[0x17];
    do {
      if (puVar8 != (undefined4 *)0x0) {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar8 = uVar2;
      }
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 != 0);
  }
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0xd0);
  puVar9 = *(undefined8 **)(param_2 + 200);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    param_1[0x19] = uVar6;
    uVar11 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x1a) = uVar1;
    *(uint *)((longlong)param_1 + 0xd4) = uVar1;
    puVar7 = (undefined8 *)param_1[0x19];
    do {
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0x80000000;
        iVar3 = *(int *)(puVar9 + 1);
        puVar8 = (undefined4 *)*puVar9;
        puVar10 = puVar8 + iVar3;
        if (0 < iVar3) {
          FUN_141807aa8(puVar7,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        puVar5 = (undefined4 *)*puVar7;
        for (; puVar8 != puVar10; puVar8 = puVar8 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar8;
          }
          puVar5 = puVar5 + 1;
        }
        puVar9 = puVar9 + 2;
        *(int *)(puVar7 + 1) = iVar3;
      }
      uVar11 = uVar11 - 1;
      puVar7 = puVar7 + 2;
    } while (uVar11 != 0);
  }
  return param_1;
}



// FUNCTION 144c37aa0 FUN_144c37aa0 body=935 status=ok
// SIG undefined FUN_144c37aa0(void)

longlong FUN_144c37aa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  if (*(longlong *)(param_1 + 0x70) != *(longlong *)(param_2 + 0x70)) {
    if (*(longlong *)(param_2 + 0x70) != 0) {
      FUN_144b3d910();
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    if (lVar4 != 0) {
      FUN_144b3f230();
    }
  }
  puVar13 = (undefined8 *)(param_1 + 0x78);
  if ((undefined8 *)(param_2 + 0x78) != puVar13) {
    iVar3 = *(int *)(param_2 + 0x80);
    uVar5 = *(undefined8 *)(param_2 + 0x78);
    if ((int)(*(uint *)(param_1 + 0x84) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar13,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar13,uVar5);
    *(int *)(param_1 + 0x80) = iVar3;
  }
  puVar13 = (undefined8 *)(param_1 + 0x88);
  if ((undefined8 *)(param_2 + 0x88) != puVar13) {
    iVar3 = *(int *)(param_2 + 0x90);
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    if ((int)(*(uint *)(param_1 + 0x94) & 0x7fffffff) < iVar3) {
      FUN_144c36f20(puVar13,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar13,uVar5);
    *(int *)(param_1 + 0x90) = iVar3;
  }
  puVar13 = (undefined8 *)(param_1 + 0x98);
  if ((undefined8 *)(param_2 + 0x98) != puVar13) {
    iVar3 = *(int *)(param_2 + 0xa0);
    uVar5 = *(undefined8 *)(param_2 + 0x98);
    if ((int)(*(uint *)(param_1 + 0xa4) & 0x7fffffff) < iVar3) {
      FUN_144c36e80(puVar13,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar13,uVar5);
    *(int *)(param_1 + 0xa0) = iVar3;
  }
  puVar13 = (undefined8 *)(param_1 + 0xa8);
  if ((undefined8 *)(param_2 + 0xa8) != puVar13) {
    iVar3 = *(int *)(param_2 + 0xb0);
    uVar5 = *(undefined8 *)(param_2 + 0xa8);
    if ((int)(*(uint *)(param_1 + 0xb4) & 0x7fffffff) < iVar3) {
      FUN_147e4b86a(puVar13,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar13,uVar5);
    *(int *)(param_1 + 0xb0) = iVar3;
  }
  puVar13 = (undefined8 *)(param_1 + 0xb8);
  if ((undefined8 *)(param_2 + 0xb8) != puVar13) {
    iVar3 = *(int *)(param_2 + 0xc0);
    uVar5 = *(undefined8 *)(param_2 + 0xb8);
    if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar13,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar13,uVar5);
    *(int *)(param_1 + 0xc0) = iVar3;
  }
  plVar1 = (longlong *)(param_1 + 200);
  if ((longlong *)(param_2 + 200) != plVar1) {
    lVar4 = *(longlong *)(param_2 + 200);
    iVar3 = *(int *)(param_2 + 0xd0);
    if ((int)(*(uint *)(param_1 + 0xd4) & 0x7fffffff) < iVar3) {
      FUN_144c38df0(plVar1,&PTR_vftable_14c6e47a0);
    }
    if (iVar3 < *(int *)(param_1 + 0xd0)) {
      lVar6 = *plVar1;
      plVar7 = (longlong *)((longlong)*(int *)(param_1 + 0xd0) * 0x10 + *plVar1);
      while (plVar7 != (longlong *)((longlong)iVar3 * 0x10 + lVar6)) {
        plVar10 = plVar7 + -2;
        *(undefined4 *)(plVar7 + -1) = 0;
        if ((-1 < *(int *)((longlong)plVar7 + -4)) && (*plVar10 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
        }
        *(undefined4 *)((longlong)plVar7 + -4) = 0x80000000;
        *plVar10 = 0;
        plVar7 = plVar10;
      }
    }
    iVar9 = iVar3;
    if (*(int *)(param_1 + 0xd0) < iVar3) {
      iVar9 = *(int *)(param_1 + 0xd0);
    }
    puVar13 = (undefined8 *)((longlong)iVar9 * 0x10 + lVar4);
    if (0 < iVar3 - iVar9) {
      uVar12 = (ulonglong)(uint)(iVar3 - iVar9);
      puVar14 = (undefined8 *)(*plVar1 + (longlong)iVar9 * 0x10);
      do {
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = 0;
          *(undefined4 *)(puVar14 + 1) = 0;
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0x80000000;
          iVar9 = *(int *)(puVar13 + 1);
          puVar11 = (undefined4 *)*puVar13;
          puVar2 = puVar11 + iVar9;
          if (0 < iVar9) {
            FUN_141807aa8(puVar14,&PTR_vftable_14c6e47a0);
          }
          puVar8 = (undefined4 *)*puVar14;
          for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar11;
            }
            puVar8 = puVar8 + 1;
          }
          *(int *)(puVar14 + 1) = iVar9;
          puVar13 = puVar13 + 2;
        }
        uVar12 = uVar12 - 1;
        puVar14 = puVar14 + 2;
      } while (uVar12 != 0);
    }
    *(int *)(param_1 + 0xd0) = iVar3;
  }
  return param_1;
}



// FUNCTION 144c37ea0 FUN_144c37ea0 body=280 status=ok
// SIG undefined FUN_144c37ea0(void)

void FUN_144c37ea0(longlong param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 0x5c) = *param_3;
  *(undefined4 *)(param_1 + 0x60) = *param_4;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  lVar3 = *(longlong *)(param_1 + 0x70);
  *(longlong *)(param_1 + 0x70) = param_2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if ((int)(*(uint *)(param_1 + 0x84) & 0x7fffffff) < iVar1) {
    FUN_141807aa8(param_1 + 0x78,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x80) = iVar1;
    if (0 < iVar1 - iVar2) {
      uVar4 = (ulonglong)(uint)(iVar1 - iVar2);
      puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar2 * 4);
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xffffffff;
        }
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x80) = iVar1;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x7c);
  return;
}



// FUNCTION 144c37fc0 FUN_144c37fc0 body=557 status=ok
// SIG undefined FUN_144c37fc0(void)

undefined8 * FUN_144c37fc0(longlong param_1,int *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *local_res18;
  undefined8 *local_res20;
  undefined1 local_54 [4];
  undefined8 *local_50;
  
  iVar4 = *(int *)(param_1 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x88);
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x78) + (longlong)*param_2 * 4);
  local_res18 = param_3;
  local_res20 = param_4;
  if (iVar9 == -1) {
    iVar9 = *(int *)(param_1 + 0x90);
    *(int *)(*(longlong *)(param_1 + 0x78) + (longlong)*param_2 * 4) = iVar9;
    iVar11 = *(int *)(param_1 + 0x90) + 1;
    if ((int)(*(uint *)(param_1 + 0x94) & 0x7fffffff) < iVar11) {
      FUN_144c389d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
    }
    iVar7 = *(int *)(param_1 + 0x90);
    lVar6 = *plVar1;
    *(int *)(param_1 + 0x90) = iVar11;
    *(undefined4 *)(lVar6 + 4 + (longlong)iVar7 * 8) = 0;
    *(undefined4 *)(lVar6 + (longlong)iVar7 * 8) = 0xffffffff;
  }
  piVar2 = (int *)(*plVar1 + (longlong)iVar9 * 8);
  piVar5 = (int *)FUN_144c384e0(param_1,local_54,*(int *)(*plVar1 + 4 + (longlong)iVar9 * 8) + 1);
  iVar13 = 0;
  iVar9 = *piVar5;
  iVar7 = iVar9 - *(int *)(param_1 + 0x30);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 8);
  puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar7 * 4);
  iVar11 = piVar2[1];
  puVar10 = puVar3;
  local_50 = puVar12;
  if (0 < iVar11) {
    do {
      iVar11 = *piVar2 + iVar13;
      if (iVar11 < *(int *)(param_1 + 0x30)) {
        lVar6 = *(longlong *)(param_1 + 0x28);
      }
      else {
        iVar11 = iVar11 - *(int *)(param_1 + 0x30);
        lVar6 = *(longlong *)(param_1 + 0x98);
      }
      *puVar12 = *(undefined8 *)(lVar6 + (longlong)iVar11 * 8);
      iVar8 = (*piVar2 - iVar4) + iVar13;
      *puVar10 = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar8 * 4);
      iVar11 = *(int *)(param_1 + 0x58);
      FUN_144b3d470(*(longlong *)(param_1 + 0xa8) + (longlong)((iVar13 + iVar7) * iVar11) * 4,
                    *(longlong *)(param_1 + 0xa8) + (longlong)(iVar11 * iVar8) * 4,
                    (longlong)iVar11 << 2);
      iVar11 = piVar2[1];
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + 1;
      param_4 = local_res20;
      param_3 = local_res18;
    } while (iVar13 < iVar11);
  }
  if (param_3 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = *(longlong *)(param_1 + 0xa8) +
                 (longlong)((iVar11 + iVar7) * *(int *)(param_1 + 0x58)) * 4;
    }
  }
  iVar4 = piVar2[1];
  puVar12 = local_50 + iVar4;
  iVar11 = 0;
  if (iVar4 != 0) {
    local_res18 = (longlong *)CONCAT44(local_res18._4_4_,*piVar2);
    FUN_144c38720(param_1,&local_res18,iVar4);
    iVar11 = piVar2[1];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = puVar3 + iVar11;
  }
  puVar3[piVar2[1]] = 0;
  piVar2[1] = piVar2[1] + 1;
  *piVar2 = iVar9;
  return puVar12;
}



// FUNCTION 144c381f0 FUN_144c381f0 body=738 status=ok
// SIG undefined FUN_144c381f0(void)

void FUN_144c381f0(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  void *_Dst;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int local_res8 [2];
  void *local_res10;
  
  plVar1 = (longlong *)(param_1 + 0x88);
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x78) + (longlong)*param_2 * 4);
  if (iVar8 == -1) {
    iVar8 = *(int *)(param_1 + 0x90);
    *(int *)(*(longlong *)(param_1 + 0x78) + (longlong)*param_2 * 4) = iVar8;
    iVar9 = *(int *)(param_1 + 0x90) + 1;
    if ((int)(*(uint *)(param_1 + 0x94) & 0x7fffffff) < iVar9) {
      FUN_144c389d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    iVar5 = *(int *)(param_1 + 0x90);
    lVar6 = *plVar1;
    *(int *)(param_1 + 0x90) = iVar9;
    *(undefined4 *)(lVar6 + 4 + (longlong)iVar5 * 8) = 0;
    *(undefined4 *)(lVar6 + (longlong)iVar5 * 8) = 0xffffffff;
  }
  iVar9 = *(int *)(*plVar1 + 4 + (longlong)iVar8 * 8);
  piVar2 = (int *)(*plVar1 + (longlong)iVar8 * 8);
  if (iVar9 == 1) {
    local_res8[0] = *piVar2;
    FUN_144c38720(param_1,local_res8,1);
    *piVar2 = -1;
    piVar2[1] = 0;
    *(undefined4 *)
     (*(longlong *)(param_1 + 0xb8) + (longlong)(*param_3 - *(int *)(param_1 + 0x30)) * 4) = 0;
    return;
  }
  FUN_144c384e0(param_1,&local_res10,iVar9 + -1);
  iVar5 = (int)local_res10;
  lVar11 = *(longlong *)(param_1 + 0x98);
  local_res8[0] = *param_3 - *piVar2;
  lVar10 = (longlong)(*piVar2 - *(int *)(param_1 + 0x30));
  lVar6 = lVar11 + lVar10 * 8;
  lVar3 = lVar11 + (longlong)((int)local_res10 - *(int *)(param_1 + 0x30)) * 8;
  lVar7 = (longlong)local_res8[0] * 8;
  FUN_144b3d470(lVar3,lVar6,lVar7);
  FUN_144b3d470(lVar7 + lVar3,lVar6 + 8 + lVar7,
                (longlong)
                (((int)(((iVar9 + lVar10) * 8 - lVar6) + lVar11 >> 3) - local_res8[0]) + -1) << 3);
  iVar8 = local_res8[0];
  lVar6 = *(longlong *)(param_1 + 0xb8);
  lVar3 = (longlong)local_res8[0] * 4;
  lVar7 = (longlong)(*piVar2 - *(int *)(param_1 + 0x30));
  _Dst = (void *)(lVar6 + lVar7 * 4);
  pvVar4 = (void *)(lVar6 + (iVar9 + lVar7) * 4);
  lVar6 = lVar6 + (longlong)((int)local_res10 - *(int *)(param_1 + 0x30)) * 4;
  local_res10 = _Dst;
  FUN_144b3d470(lVar6,_Dst,lVar3);
  lVar7 = (longlong)pvVar4 - (longlong)_Dst;
  FUN_144b3d470(lVar3 + lVar6,(longlong)_Dst + lVar3 + 4,
                (longlong)(((int)(lVar7 >> 2) - iVar8) + -1) << 2);
  uVar12 = lVar7 + 3U >> 2;
  if (pvVar4 < _Dst) {
    uVar12 = 0;
  }
  if (uVar12 != 0) {
    memset(_Dst,0,uVar12 << 2);
  }
  iVar8 = *(int *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0xa8);
  lVar11 = (longlong)((*piVar2 - *(int *)(param_1 + 0x30)) * iVar8);
  lVar6 = lVar3 + lVar11 * 4;
  lVar7 = (longlong)((iVar5 - *(int *)(param_1 + 0x30)) * iVar8);
  FUN_144b3d470(lVar3 + lVar7 * 4,lVar6,(longlong)local_res8[0] * (longlong)iVar8 * 4);
  FUN_144b3d470(lVar3 + (iVar8 * local_res8[0] + lVar7) * 4,
                lVar6 + (longlong)((local_res8[0] + 1) * iVar8) * 4,
                (longlong)
                (((int)(((iVar8 * iVar9 + lVar11) * 4 - lVar6) + lVar3 >> 2) - local_res8[0]) + -1)
                * (longlong)iVar8 * 4);
  local_res8[0] = *piVar2;
  FUN_144c38720(param_1,local_res8,piVar2[1]);
  piVar2[1] = iVar9 + -1;
  *piVar2 = iVar5;
  return;
}



// FUNCTION 144c384e0 FUN_144c384e0 body=565 status=ok
// SIG undefined FUN_144c384e0(void)

int * FUN_144c384e0(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = *(int *)(param_1 + 0xd0);
  iVar9 = param_3 + -1;
  if ((param_3 <= iVar6) && (iVar9 < iVar6)) {
    lVar7 = *(longlong *)(param_1 + 200);
    lVar4 = (longlong)iVar9;
    piVar2 = (int *)(lVar7 + 8 + lVar4 * 0x10);
    iVar8 = iVar9;
    do {
      if (0 < *piVar2) {
        lVar4 = (longlong)iVar8;
        iVar6 = *(int *)(lVar7 + 8 + lVar4 * 0x10);
        iVar1 = *(int *)(*(longlong *)(lVar7 + lVar4 * 0x10) + -4 + (longlong)iVar6 * 4);
        *(int *)(lVar7 + 8 + lVar4 * 0x10) = iVar6 + -1;
        if (iVar8 - iVar9 != 0) {
          lVar7 = (longlong)(iVar8 - iVar9) * 0x10 + *(longlong *)(param_1 + 200);
          iVar6 = *(int *)(lVar7 + -8) + 1;
          if ((int)(*(uint *)(lVar7 + -4) & 0x7fffffff) < iVar6) {
            FUN_1401f86b2(lVar7 + -0x10,&PTR_vftable_14c6e47a0,(longlong)iVar6);
          }
          piVar2 = (int *)(*(longlong *)(lVar7 + -0x10) + (longlong)*(int *)(lVar7 + -8) * 4);
          if (piVar2 != (int *)0x0) {
            *piVar2 = iVar1 + param_3;
          }
          *(int *)(lVar7 + -8) = iVar6;
        }
        if (iVar1 != -1) {
          *param_2 = iVar1;
          return param_2;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      lVar4 = lVar4 + 1;
      piVar2 = piVar2 + 4;
    } while (lVar4 < iVar6);
  }
  iVar6 = *(int *)(param_1 + 0xc0);
  iVar9 = iVar6 + param_3;
  if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) < iVar9) {
    FUN_141807aa8((longlong *)(param_1 + 0xb8),&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  iVar8 = *(int *)(param_1 + 0xc0);
  if (iVar8 < iVar9) {
    *(int *)(param_1 + 0xc0) = iVar9;
    if (0 < iVar9 - iVar8) {
      uVar3 = (ulonglong)(uint)(iVar9 - iVar8);
      puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar8 * 4);
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (iVar9 < iVar8) {
    *(int *)(param_1 + 0xc0) = iVar9;
  }
  param_3 = *(int *)(param_1 + 0xa0) + param_3;
  if ((int)(*(uint *)(param_1 + 0xa4) & 0x7fffffff) < param_3) {
    FUN_144c38ad0(param_1 + 0x98,&PTR_vftable_14c6e47a0,(longlong)param_3);
  }
  *(int *)(param_1 + 0xa0) = param_3;
  iVar9 = iVar9 * *(int *)(param_1 + 0x58);
  if ((int)(*(uint *)(param_1 + 0xb4) & 0x7fffffff) < iVar9) {
    FUN_140163394((longlong *)(param_1 + 0xa8),&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  iVar8 = *(int *)(param_1 + 0xb0);
  if (iVar8 < iVar9) {
    *(int *)(param_1 + 0xb0) = iVar9;
    if (0 < iVar9 - iVar8) {
      uVar3 = (ulonglong)(uint)(iVar9 - iVar8);
      puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar8 * 4);
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (iVar9 < iVar8) {
    *(int *)(param_1 + 0xb0) = iVar9;
  }
  *param_2 = *(int *)(param_1 + 0x30) + iVar6;
  return param_2;
}



// FUNCTION 144c38720 FUN_144c38720 body=389 status=ok
// SIG undefined FUN_144c38720(void)

void FUN_144c38720(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  lVar7 = (longlong)param_3;
  if (*(int *)(param_1 + 0xd0) < param_3) {
    if ((int)(*(uint *)(param_1 + 0xd4) & 0x7fffffff) < param_3) {
      FUN_144c38bd0(param_1 + 200,&PTR_vftable_14c6e47a0,lVar7);
    }
    iVar8 = *(int *)(param_1 + 0xd0);
    if (iVar8 < param_3) {
      lVar3 = *(longlong *)(param_1 + 200);
      *(int *)(param_1 + 0xd0) = param_3;
      for (puVar5 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 200));
          puVar5 != (undefined8 *)(lVar7 * 0x10 + lVar3); puVar5 = puVar5 + 2) {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0x80000000;
        }
      }
    }
    else if (param_3 < iVar8) {
      lVar3 = *(longlong *)(param_1 + 200);
      *(int *)(param_1 + 0xd0) = param_3;
      plVar4 = (longlong *)((longlong)iVar8 * 0x10 + lVar3);
      while (plVar4 != (longlong *)(lVar7 * 0x10 + lVar3)) {
        plVar6 = plVar4 + -2;
        *(undefined4 *)(plVar4 + -1) = 0;
        if ((-1 < (int)*(uint *)((longlong)plVar4 + -4)) && (*plVar6 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*plVar6,
                     (ulonglong)(*(uint *)((longlong)plVar4 + -4) & 0x7fffffff) << 2);
        }
        *plVar6 = 0;
        *(undefined4 *)((longlong)plVar4 + -4) = 0x80000000;
        plVar4 = plVar6;
      }
    }
  }
  uVar2 = *param_2;
  lVar7 = lVar7 * 0x10 + *(longlong *)(param_1 + 200);
  iVar8 = *(int *)(lVar7 + -8) + 1;
  if ((int)(*(uint *)(lVar7 + -4) & 0x7fffffff) < iVar8) {
    FUN_1401f86b2(lVar7 + -0x10,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  puVar1 = (undefined4 *)(*(longlong *)(lVar7 + -0x10) + (longlong)*(int *)(lVar7 + -8) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar2;
  }
  *(int *)(lVar7 + -8) = iVar8;
  return;
}



// FUNCTION 144c388b0 FUN_144c388b0 body=87 status=ok
// SIG undefined FUN_144c388b0(void)

undefined8 FUN_144c388b0(undefined8 param_1,ulonglong param_2)

{
  FUN_144c37410();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 144c38910 FUN_144c38910 body=180 status=ok
// SIG undefined FUN_144c38910(void)

void FUN_144c38910(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = param_1[3];
  if (lVar1 == *param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar3 = param_1[4] + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar2 + 0x28) < uVar3) || (uVar3 + lVar1 != *(longlong *)(lVar2 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(lVar2 + 0x38) = lVar1;
      if (*(longlong *)(lVar2 + 0x48) == lVar1) {
        FUN_144be8430();
      }
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c389d0 FUN_144c389d0 body=247 status=ok
// SIG undefined FUN_144c389d0(void)

void FUN_144c389d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c38ad0 FUN_144c38ad0 body=247 status=ok
// SIG undefined FUN_144c38ad0(void)

void FUN_144c38ad0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c38bd0 FUN_144c38bd0 body=537 status=ok
// SIG undefined FUN_144c38bd0(void)

void FUN_144c38bd0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong local_res18;
  undefined8 *local_res20;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar7 * 2;
  uVar13 = param_3;
  if (param_3 < uVar10) {
    uVar13 = uVar10;
  }
  if ((0x7ffffffe < uVar13) && (uVar13 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar13 * 0x10,&local_res18);
  uVar2 = *(uint *)(param_1 + 1);
  uVar10 = (ulonglong)uVar2;
  puVar4 = (undefined8 *)*param_1;
  uVar11 = (ulonglong)uVar2;
  puVar12 = puVar4;
  local_res20 = puVar6;
  if (0 < (int)uVar2) {
    do {
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0x80000000;
        iVar3 = *(int *)(puVar12 + 1);
        puVar8 = (undefined4 *)*puVar12;
        puVar1 = puVar8 + iVar3;
        if (0 < iVar3) {
          FUN_141807aa8(puVar6,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        puVar5 = (undefined4 *)*puVar6;
        for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar8;
          }
          puVar5 = puVar5 + 1;
        }
        *(int *)(puVar6 + 1) = iVar3;
      }
      puVar6 = puVar6 + 2;
      uVar11 = uVar11 - 1;
      puVar12 = puVar12 + 2;
    } while (uVar11 != 0);
    puVar9 = (uint *)((longlong)puVar4 + 0xc);
    do {
      puVar9[-1] = 0;
      if ((-1 < (int)*puVar9) && (*(longlong *)(puVar9 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar9 + -3),
                   (ulonglong)(*puVar9 & 0x7fffffff) << 2);
      }
      puVar9[-3] = 0;
      puVar9[-2] = 0;
      *puVar9 = 0x80000000;
      puVar9 = puVar9 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar13 * 0x10 + 0x10;
  uVar11 = uVar13;
  if (uVar10 <= local_res18) {
    local_res18 = local_res18 - 0x10;
    uVar11 = uVar13 + 1;
    if (uVar10 <= local_res18) {
      uVar11 = uVar11 + (local_res18 + uVar13 * -0x10 >> 4);
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *param_1 = local_res20;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 << 4);
    *param_1 = local_res20;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return;
}



// FUNCTION 144c38df0 FUN_144c38df0 body=421 status=ok
// SIG undefined FUN_144c38df0(void)

void FUN_144c38df0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  uVar10 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    uVar12 = (ulonglong)uVar2;
    puVar9 = puVar6;
    puVar11 = puVar4;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0x80000000;
        iVar3 = *(int *)(puVar11 + 1);
        puVar7 = (undefined4 *)*puVar11;
        puVar1 = puVar7 + iVar3;
        if (0 < iVar3) {
          FUN_141807aa8(puVar9,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        puVar5 = (undefined4 *)*puVar9;
        for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar7;
          }
          puVar5 = puVar5 + 1;
        }
        *(int *)(puVar9 + 1) = iVar3;
      }
      puVar9 = puVar9 + 2;
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    puVar8 = (uint *)((longlong)puVar4 + 0xc);
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(longlong *)(puVar8 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar8 + -3),
                   (ulonglong)(*puVar8 & 0x7fffffff) << 2);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c38fa0 FUN_144c38fa0 body=657 status=ok
// SIG undefined FUN_144c38fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c38fa0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar6 [16];
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
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  fVar24 = *param_5;
  fVar25 = param_5[1];
  fVar26 = param_5[2];
  fVar27 = param_5[3];
  fVar1 = param_4[3];
  fVar2 = param_3[3];
  fVar4 = (*param_3 - *param_1) * fVar24;
  fVar7 = (param_3[1] - param_1[1]) * fVar25;
  fVar9 = (param_3[2] - param_1[2]) * fVar26;
  fVar5 = (*param_4 - *param_2) * fVar24;
  fVar8 = (param_4[1] - param_2[1]) * fVar25;
  fVar10 = (param_4[2] - param_2[2]) * fVar26;
  fVar14 = (*param_3 - *param_1) - (fVar7 + fVar4 + fVar9) * fVar24;
  fVar15 = (param_3[1] - param_1[1]) - (fVar7 + fVar4 + fVar9) * fVar25;
  fVar16 = (param_3[2] - param_1[2]) - (fVar7 + fVar4 + fVar9) * fVar26;
  fVar17 = (*param_4 - *param_2) - (fVar8 + fVar5 + fVar10) * fVar24;
  fVar18 = (param_4[1] - param_2[1]) - (fVar8 + fVar5 + fVar10) * fVar25;
  fVar19 = (param_4[2] - param_2[2]) - (fVar8 + fVar5 + fVar10) * fVar26;
  fVar20 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
  fVar11 = fVar17 * fVar17;
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar11;
  auVar3._8_4_ = fVar11;
  auVar3._12_4_ = fVar11;
  fVar11 = fVar18 * fVar18 + fVar11 + fVar19 * fVar19;
  auVar21._0_8_ = CONCAT44(fVar11,fVar20);
  auVar21._8_8_ = auVar21._0_8_;
  auVar3 = sqrtps(auVar3,auVar21);
  auVar3 = divps(_DAT_14c6daca0,auVar3);
  fVar12 = (float)(~-(uint)(fVar20 == 0.0) & auVar3._0_4_);
  fVar13 = (float)(~-(uint)(fVar11 == 0.0) & auVar3._4_4_);
  fVar14 = fVar12 * fVar14;
  fVar15 = fVar12 * fVar15;
  fVar16 = fVar12 * fVar16;
  fVar28 = fVar12 * ((fVar2 - param_1[3]) - (fVar7 + fVar4 + fVar9) * fVar27);
  fVar17 = fVar13 * fVar17;
  fVar18 = fVar13 * fVar18;
  fVar19 = fVar13 * fVar19;
  fVar29 = fVar13 * ((fVar1 - param_2[3]) - (fVar8 + fVar5 + fVar10) * fVar27);
  fVar7 = (float)((uint)(fVar16 * fVar25 - fVar26 * fVar15) ^ (uint)(fVar2 < 0.0) * -0x80000000);
  fVar8 = (float)((uint)(fVar14 * fVar26 - fVar24 * fVar16) ^ (uint)(fVar2 < 0.0) * -0x80000000);
  fVar9 = (float)((uint)(fVar15 * fVar24 - fVar25 * fVar14) ^ (uint)(fVar2 < 0.0) * -0x80000000);
  fVar10 = (float)((uint)(fVar28 * fVar27 - fVar27 * fVar28) ^ (uint)(fVar2 < 0.0) * -0x80000000);
  auVar22._0_4_ = fVar20 - fVar2 * fVar2;
  auVar22._4_4_ = fVar11 - fVar1 * fVar1;
  auVar22._8_4_ = fVar20 - fVar2 * fVar2;
  auVar22._12_4_ = fVar11 - fVar1 * fVar1;
  fVar4 = (float)((uint)(fVar19 * fVar25 - fVar26 * fVar18) ^ (uint)(fVar1 < 0.0) * -0x80000000);
  fVar26 = (float)((uint)(fVar17 * fVar26 - fVar24 * fVar19) ^ (uint)(fVar1 < 0.0) * -0x80000000);
  fVar5 = (float)((uint)(fVar18 * fVar24 - fVar25 * fVar17) ^ (uint)(fVar1 < 0.0) * -0x80000000);
  fVar27 = (float)((uint)(fVar29 * fVar27 - fVar27 * fVar29) ^ (uint)(fVar1 < 0.0) * -0x80000000);
  auVar6._0_8_ = CONCAT44(-(uint)(auVar22._4_4_ <= 0.0),-(uint)(auVar22._0_4_ <= 0.0)) &
                 0x38d1b71738d1b717;
  auVar6._8_8_ = 0;
  auVar23._0_4_ = ~-(uint)(auVar22._0_4_ <= 0.0) & (uint)(fVar2 * fVar2 * auVar22._0_4_);
  auVar23._4_4_ = ~-(uint)(auVar22._4_4_ <= 0.0) & (uint)(fVar1 * fVar1 * auVar22._4_4_);
  auVar23._8_4_ = ~-(uint)(auVar22._8_4_ <= 0.0) & (uint)(auVar22._8_4_ * auVar22._8_4_);
  auVar23._12_4_ = ~-(uint)(auVar22._12_4_ <= 0.0) & (uint)(auVar22._12_4_ * auVar22._12_4_);
  auVar23 = sqrtps(auVar22,auVar23 | auVar6);
  fVar12 = auVar23._0_4_ * fVar12;
  fVar13 = auVar23._4_4_ * fVar13;
  fVar24 = auVar23._8_4_ * (float)(~-(uint)(fVar20 == 0.0) & auVar3._8_4_);
  fVar25 = auVar23._12_4_ * (float)(~-(uint)(fVar11 == 0.0) & auVar3._12_4_);
  *param_6 = fVar24 * fVar14 + fVar12 * fVar7;
  param_6[1] = fVar24 * fVar15 + fVar12 * fVar8;
  param_6[2] = fVar24 * fVar16 + fVar12 * fVar9;
  param_6[3] = fVar24 * fVar28 + fVar12 * fVar10;
  *param_7 = fVar25 * fVar17 + fVar13 * fVar4;
  param_7[1] = fVar25 * fVar18 + fVar13 * fVar26;
  param_7[2] = fVar25 * fVar19 + fVar13 * fVar5;
  param_7[3] = fVar25 * fVar29 + fVar13 * fVar27;
  *param_8 = fVar24 * fVar7 - fVar12 * fVar14;
  param_8[1] = fVar24 * fVar8 - fVar12 * fVar15;
  param_8[2] = fVar24 * fVar9 - fVar12 * fVar16;
  param_8[3] = fVar24 * fVar10 - fVar12 * fVar28;
  *param_9 = fVar25 * fVar4 - fVar13 * fVar17;
  param_9[1] = fVar25 * fVar26 - fVar13 * fVar18;
  param_9[2] = fVar25 * fVar5 - fVar13 * fVar19;
  param_9[3] = fVar25 * fVar27 - fVar13 * fVar29;
  fVar24 = param_3[3];
  *param_8 = (float)((uint)(fVar24 < 0.0) * -0x80000000 ^ (uint)*param_8);
  param_8[1] = (float)((uint)(fVar24 < 0.0) * -0x80000000 ^ (uint)param_8[1]);
  param_8[2] = (float)((uint)(fVar24 < 0.0) * -0x80000000 ^ (uint)param_8[2]);
  param_8[3] = (float)((uint)(fVar24 < 0.0) * -0x80000000 ^ (uint)param_8[3]);
  fVar24 = param_4[3];
  *param_9 = (float)((uint)(fVar24 < 0.0) * -0x80000000 ^ (uint)*param_9);
  param_9[1] = (float)((uint)(fVar24 < 0.0) * -0x80000000 ^ (uint)param_9[1]);
  param_9[2] = (float)((uint)(fVar24 < 0.0) * -0x80000000 ^ (uint)param_9[2]);
  param_9[3] = (float)((uint)(fVar24 < 0.0) * -0x80000000 ^ (uint)param_9[3]);
  return;
}



// FUNCTION 144c39240 FUN_144c39240 body=1164 status=ok
// SIG undefined FUN_144c39240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c39240(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [112];
  
  fVar30 = param_1[3];
  fVar27 = param_2[3];
  auVar36._0_12_ = ZEXT812(0);
  auVar36._12_4_ = 0;
  fVar28 = *param_3;
  fVar23 = param_3[1];
  fVar31 = param_3[2];
  fVar4 = param_3[3];
  fVar15 = fVar28 * *param_1;
  fVar19 = fVar23 * param_1[1];
  fVar21 = fVar31 * param_1[2];
  auVar10._4_4_ = fVar30;
  auVar10._0_4_ = fVar30;
  auVar10._8_4_ = fVar30;
  auVar10._12_4_ = fVar30;
  fVar16 = *param_2 * fVar28;
  fVar20 = param_2[1] * fVar23;
  fVar22 = param_2[2] * fVar31;
  local_b8 = *param_1 - (fVar19 + fVar15 + fVar21) * fVar28;
  fStack_b4 = param_1[1] - (fVar19 + fVar15 + fVar21) * fVar23;
  fStack_b0 = param_1[2] - (fVar19 + fVar15 + fVar21) * fVar31;
  fVar15 = fVar30 - (fVar19 + fVar15 + fVar21) * fVar4;
  local_c8 = *param_2 - (fVar20 + fVar16 + fVar22) * fVar28;
  fStack_c4 = param_2[1] - (fVar20 + fVar16 + fVar22) * fVar23;
  fStack_c0 = param_2[2] - (fVar20 + fVar16 + fVar22) * fVar31;
  fVar16 = fVar27 - (fVar20 + fVar16 + fVar22) * fVar4;
  if (fVar30 == 0.0 - fVar27) {
    fVar19 = fVar23 * (local_c8 - local_b8) - (fStack_c4 - fStack_b4) * fVar28;
    fVar27 = fVar31 * (fStack_c4 - fStack_b4) - (fStack_c0 - fStack_b0) * fVar23;
    fVar28 = fVar28 * (fStack_c0 - fStack_b0) - (local_c8 - local_b8) * fVar31;
    auVar35._4_4_ = fVar28;
    auVar35._0_4_ = fVar27;
    fVar27 = fVar27 * fVar27;
    fVar28 = fVar28 * fVar28;
    fVar23 = fVar19 * fVar19;
    auVar9._4_4_ = fVar27;
    auVar9._0_4_ = fVar27;
    auVar9._8_4_ = fVar27;
    auVar9._12_4_ = fVar27;
    fVar31 = fVar28 + fVar27 + fVar23;
    if (fVar31 != 0.0) {
      auVar1._4_4_ = fVar28 + fVar27 + fVar23;
      auVar1._0_4_ = fVar31;
      auVar1._8_4_ = fVar28 + fVar27 + fVar23;
      auVar1._12_4_ = fVar28 + fVar27 + fVar23;
      auVar10 = sqrtps(auVar9,auVar1);
      auVar35._8_4_ = fVar19;
      auVar35._12_4_ = fVar4 * (fVar16 - fVar15) - (fVar16 - fVar15) * fVar4;
      auVar36 = divps(auVar35,auVar10);
    }
    fVar27 = fVar30 * auVar36._0_4_;
    fVar28 = fVar30 * auVar36._4_4_;
    fVar23 = fVar30 * auVar36._8_4_;
    fVar30 = fVar30 * auVar36._12_4_;
    *param_4 = local_b8 + fVar27;
    param_4[1] = fStack_b4 + fVar28;
    param_4[2] = fStack_b0 + fVar23;
    param_4[3] = fVar15 + fVar30;
    *param_5 = local_c8 + fVar27;
    param_5[1] = fStack_c4 + fVar28;
    param_5[2] = fStack_c0 + fVar23;
    param_5[3] = fVar16 + fVar30;
  }
  else if (fVar30 == 0.0) {
    fVar30 = fVar28 * (local_c8 - local_b8);
    fVar19 = fVar23 * (fStack_c4 - fStack_b4);
    fVar20 = fVar31 * (fStack_c0 - fStack_b0);
    fVar21 = (local_c8 - local_b8) - (fVar19 + fVar30 + fVar20) * fVar28;
    fVar22 = (fStack_c4 - fStack_b4) - (fVar19 + fVar30 + fVar20) * fVar23;
    fVar29 = (fStack_c0 - fStack_b0) - (fVar19 + fVar30 + fVar20) * fVar31;
    fVar27 = fVar21 * fVar21;
    auVar11._4_4_ = fVar27;
    auVar11._0_4_ = fVar27;
    auVar11._8_4_ = fVar27;
    auVar11._12_4_ = fVar27;
    fVar32 = fVar22 * fVar22 + fVar27 + fVar29 * fVar29;
    auVar5._12_4_ = fRam000000014c6dacac;
    auVar5._0_12_ = _DAT_14c6daca0;
    *param_4 = local_b8;
    param_4[1] = fStack_b4;
    param_4[2] = fStack_b0;
    param_4[3] = fVar15;
    auVar3._4_4_ = fVar32;
    auVar3._0_4_ = fVar32;
    auVar3._8_4_ = fVar32;
    auVar3._12_4_ = fVar32;
    auVar10 = sqrtps(auVar11,auVar3);
    auVar10 = divps(auVar5,auVar10);
    fVar27 = (float)(~-(uint)(fVar32 == 0.0) & auVar10._0_4_);
    fVar21 = fVar27 * fVar21;
    fVar22 = fVar27 * fVar22;
    fVar29 = fVar27 * fVar29;
    fVar19 = fVar27 * ((fVar16 - fVar15) - (fVar19 + fVar30 + fVar20) * fVar4);
    fVar30 = fVar32 - fVar16 * fVar16;
    fVar20 = fVar32 - fVar16 * fVar16;
    fVar33 = fVar32 - fVar16 * fVar16;
    fVar34 = fVar32 - fVar16 * fVar16;
    uVar7 = -(uint)(fVar30 <= 0.0);
    uVar8 = -(uint)(fVar20 <= 0.0);
    auVar17._4_4_ = uVar8;
    auVar17._0_4_ = uVar7;
    auVar17._8_4_ = -(uint)(fVar33 <= 0.0);
    auVar17._12_4_ = -(uint)(fVar34 <= 0.0);
    auVar24._0_8_ = CONCAT44(uVar8,uVar7) & 0x38d1b71738d1b717;
    auVar24._8_8_ = 0;
    auVar12._0_4_ = ~uVar7 & (uint)(fVar16 * fVar16 * fVar30);
    auVar12._4_4_ = ~uVar8 & (uint)(fVar16 * fVar16 * fVar20);
    auVar12._8_4_ = ~-(uint)(fVar33 <= 0.0) & (uint)(fVar33 * fVar33);
    auVar12._12_4_ = ~-(uint)(fVar34 <= 0.0) & (uint)(fVar34 * fVar34);
    auVar36 = sqrtps(auVar17,auVar12 | auVar24);
    fVar27 = auVar36._0_4_ * fVar27;
    fVar30 = auVar36._8_4_ * (float)(~-(uint)(fVar32 == 0.0) & auVar10._8_4_);
    *param_5 = (float)((uint)(fVar29 * fVar23 - fVar31 * fVar22) ^
                      (uint)(fVar16 < 0.0) * -0x80000000) * fVar27 + fVar30 * fVar21 + local_b8;
    param_5[1] = (float)((uint)(fVar21 * fVar31 - fVar28 * fVar29) ^
                        (uint)(fVar16 < 0.0) * -0x80000000) * fVar27 + fVar30 * fVar22 + fStack_b4;
    param_5[2] = (float)((uint)(fVar22 * fVar28 - fVar23 * fVar21) ^
                        (uint)(fVar16 < 0.0) * -0x80000000) * fVar27 + fVar30 * fVar29 + fStack_b0;
    param_5[3] = (float)((uint)(fVar19 * fVar4 - fVar4 * fVar19) ^
                        (uint)(fVar16 < 0.0) * -0x80000000) * fVar27 + fVar30 * fVar19 + fVar15;
  }
  else if (fVar27 == 0.0) {
    fVar30 = fVar28 * (local_b8 - local_c8);
    fVar19 = fVar23 * (fStack_b4 - fStack_c4);
    fVar20 = fVar31 * (fStack_b0 - fStack_c0);
    fVar22 = (local_b8 - local_c8) - (fVar19 + fVar30 + fVar20) * fVar28;
    fVar29 = (fStack_b4 - fStack_c4) - (fVar19 + fVar30 + fVar20) * fVar23;
    fVar32 = (fStack_b0 - fStack_c0) - (fVar19 + fVar30 + fVar20) * fVar31;
    fVar27 = fVar22 * fVar22;
    auVar13._4_4_ = fVar27;
    auVar13._0_4_ = fVar27;
    auVar13._8_4_ = fVar27;
    auVar13._12_4_ = fVar27;
    fVar27 = fVar29 * fVar29 + fVar27 + fVar32 * fVar32;
    auVar6._12_4_ = fRam000000014c6dacac;
    auVar6._0_12_ = _DAT_14c6daca0;
    *param_5 = local_c8;
    param_5[1] = fStack_c4;
    param_5[2] = fStack_c0;
    param_5[3] = fVar16;
    auVar25._0_8_ = CONCAT44(fVar27,fVar27);
    auVar25._8_8_ = auVar25._0_8_;
    auVar10 = sqrtps(auVar13,auVar25);
    auVar10 = divps(auVar6,auVar10);
    fVar21 = (float)(~-(uint)(fVar27 == 0.0) & auVar10._0_4_);
    fVar22 = fVar21 * fVar22;
    fVar29 = fVar21 * fVar29;
    fVar32 = fVar21 * fVar32;
    fVar19 = fVar21 * ((fVar15 - fVar16) - (fVar19 + fVar30 + fVar20) * fVar4);
    auVar26._0_4_ = fVar27 - fVar15 * fVar15;
    auVar26._4_4_ = fVar27 - fVar15 * fVar15;
    auVar26._8_4_ = fVar27 - fVar15 * fVar15;
    auVar26._12_4_ = fVar27 - fVar15 * fVar15;
    auVar18._0_8_ =
         CONCAT44(-(uint)(auVar26._4_4_ <= 0.0),-(uint)(auVar26._0_4_ <= 0.0)) & 0x38d1b71738d1b717;
    auVar18._8_8_ = 0;
    auVar14._0_4_ = ~-(uint)(auVar26._0_4_ <= 0.0) & (uint)(fVar15 * fVar15 * auVar26._0_4_);
    auVar14._4_4_ = ~-(uint)(auVar26._4_4_ <= 0.0) & (uint)(fVar15 * fVar15 * auVar26._4_4_);
    auVar14._8_4_ = ~-(uint)(auVar26._8_4_ <= 0.0) & (uint)(auVar26._8_4_ * auVar26._8_4_);
    auVar14._12_4_ = ~-(uint)(auVar26._12_4_ <= 0.0) & (uint)(auVar26._12_4_ * auVar26._12_4_);
    auVar36 = sqrtps(auVar26,auVar14 | auVar18);
    fVar21 = auVar36._0_4_ * fVar21;
    fVar30 = auVar36._8_4_ * (float)(~-(uint)(fVar27 == 0.0) & auVar10._8_4_);
    *param_4 = (float)((uint)(fVar32 * fVar23 - fVar31 * fVar29) ^
                      (uint)(fVar15 < 0.0) * -0x80000000) * fVar21 + fVar30 * fVar22 + local_c8;
    param_4[1] = (float)((uint)(fVar22 * fVar31 - fVar28 * fVar32) ^
                        (uint)(fVar15 < 0.0) * -0x80000000) * fVar21 + fVar30 * fVar29 + fStack_c4;
    param_4[2] = (float)((uint)(fVar29 * fVar28 - fVar23 * fVar22) ^
                        (uint)(fVar15 < 0.0) * -0x80000000) * fVar21 + fVar30 * fVar32 + fStack_c0;
    param_4[3] = (float)((uint)(fVar19 * fVar4 - fVar4 * fVar19) ^
                        (uint)(fVar15 < 0.0) * -0x80000000) * fVar21 + fVar30 * fVar19 + fVar16;
  }
  else {
    auVar2._4_4_ = fVar27 + fVar30;
    auVar2._0_4_ = fVar27 + fVar30;
    auVar2._8_4_ = fVar27 + fVar30;
    auVar2._12_4_ = fVar27 + fVar30;
    auVar10 = divps(auVar10,auVar2);
    fVar30 = auVar10._12_4_;
    uStack_ac = (uint)fVar15 ^ -(uint)(fVar30 < 0.0) & 0x80000000;
    fVar27 = (local_c8 - local_b8) * auVar10._0_4_ + local_b8;
    fVar28 = (fStack_c4 - fStack_b4) * auVar10._4_4_ + fStack_b4;
    fVar23 = (fStack_c0 - fStack_b0) * auVar10._8_4_ + fStack_b0;
    fVar15 = (fVar16 - fVar15) * fVar30 + fVar15;
    uStack_bc = (uint)fVar16 ^ -(uint)(fRam000000014c6dacac < fVar30) & 0x80000000;
    local_d8 = fVar27;
    fStack_d4 = fVar28;
    fStack_d0 = fVar23;
    fStack_cc = fVar15;
    FUN_144c38fa0(&local_d8,&local_d8,&local_b8,&local_c8,param_3,&local_a8,&local_98,local_78,
                  local_88);
    *param_4 = local_a8 + fVar27;
    param_4[1] = fStack_a4 + fVar28;
    param_4[2] = fStack_a0 + fVar23;
    param_4[3] = fStack_9c + fVar15;
    *param_5 = local_98 + fVar27;
    param_5[1] = fStack_94 + fVar28;
    param_5[2] = fStack_90 + fVar23;
    param_5[3] = fStack_8c + fVar15;
  }
  return;
}



// FUNCTION 144c396d0 FUN_144c396d0 body=146 status=ok
// SIG undefined FUN_144c396d0(void)

void FUN_144c396d0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x30);
    uVar5 = *(uint *)(param_1 + 1);
    puVar4 = (undefined8 *)*param_1;
    if (0 < (int)uVar5) {
      puVar3 = (undefined4 *)(lVar2 + 0x14);
      uVar6 = (ulonglong)uVar5;
      do {
        if ((undefined8 *)(puVar3 + -5) != (undefined8 *)0x0) {
          uVar1 = puVar4[1];
          *(undefined8 *)(puVar3 + -5) = *puVar4;
          *(undefined8 *)(puVar3 + -3) = uVar1;
          puVar3[-1] = *(undefined4 *)(puVar4 + 2);
          *puVar3 = *(undefined4 *)((longlong)puVar4 + 0x14);
          uVar1 = puVar4[4];
          *(undefined8 *)(puVar3 + 1) = puVar4[3];
          *(undefined8 *)(puVar3 + 3) = uVar1;
        }
        puVar3 = puVar3 + 0xc;
        puVar4 = puVar4 + 6;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *param_1 = lVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
  }
  return;
}



// FUNCTION 144c39770 FUN_144c39770 body=943 status=ok
// SIG undefined FUN_144c39770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c39770(longlong param_1,int param_2,int param_3,float *param_4,float *param_5,
                  float *param_6,longlong *param_7)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 local_res10 [8];
  undefined1 local_d8 [176];
  
  fVar38 = param_6[4];
  fVar39 = param_6[5];
  fVar40 = param_6[6];
  fVar41 = param_6[7];
  fVar42 = param_6[0xc];
  fVar43 = param_6[0xd];
  fVar44 = param_6[0xe];
  fVar45 = param_6[0xf];
  fVar46 = *param_6;
  fVar47 = param_6[1];
  fVar48 = param_6[2];
  fVar49 = param_6[3];
  fVar35 = param_5[1] * *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x14) * *param_5;
  fVar36 = param_5[2] * *(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x18) * param_5[1];
  fVar37 = *param_5 * *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x10) * param_5[2];
  fVar50 = param_6[8];
  fVar51 = param_6[9];
  fVar52 = param_6[10];
  fVar53 = param_6[0xb];
  fVar10 = 0.0 - (fVar37 * param_4[1] + fVar36 * *param_4 + fVar35 * param_4[2]);
  fVar11 = 0.0 - (fVar37 * param_4[1] + fVar36 * *param_4 + fVar35 * param_4[2]);
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    pfVar5 = (float *)FUN_144b3f860(fVar10,param_2);
    if (((uint)pfVar5[0x20] & 0x10) != 0) {
      fVar10 = *pfVar5;
      fVar2 = pfVar5[1];
      fVar3 = pfVar5[2];
      fVar19 = fVar10 * fVar46 + fVar42 + fVar2 * fVar38 + fVar3 * fVar50;
      fVar21 = fVar10 * fVar47 + fVar43 + fVar2 * fVar39 + fVar3 * fVar51;
      fVar23 = fVar10 * fVar48 + fVar44 + fVar2 * fVar40 + fVar3 * fVar52;
      fVar25 = fVar10 * fVar49 + fVar45 + fVar2 * fVar41 + fVar3 * fVar53;
      fVar10 = pfVar5[4];
      fVar2 = pfVar5[5];
      fVar3 = pfVar5[6];
      fVar26 = (fVar10 * fVar46 + fVar42 + fVar2 * fVar38 + fVar3 * fVar50) - fVar19;
      fVar27 = (fVar10 * fVar47 + fVar43 + fVar2 * fVar39 + fVar3 * fVar51) - fVar21;
      fVar28 = (fVar10 * fVar48 + fVar44 + fVar2 * fVar40 + fVar3 * fVar52) - fVar23;
      fVar12 = fVar26 * fVar36;
      fVar14 = fVar27 * fVar37;
      fVar16 = fVar28 * fVar35;
      fVar29 = fVar14 + fVar12 + fVar16;
      if (_DAT_14c6daea0 < fVar29 * fVar29) {
        fVar13 = fVar19 * fVar36;
        fVar15 = fVar21 * fVar37;
        fVar17 = fVar23 * fVar35;
        iVar9 = (int)param_7[1] + 1;
        auVar30._0_4_ = 0.0 - (fVar15 + fVar13 + fVar17 + fVar11);
        auVar30._4_4_ = 0.0 - (fVar15 + fVar13 + fVar17 + fVar11);
        auVar30._8_4_ = 0.0 - (fVar15 + fVar13 + fVar17 + fVar11);
        auVar30._12_4_ = 0.0 - (fVar15 + fVar13 + fVar17 + fVar11);
        auVar31._4_4_ = fVar14 + fVar12 + fVar16;
        auVar31._0_4_ = fVar29;
        auVar31._8_4_ = fVar14 + fVar12 + fVar16;
        auVar31._12_4_ = fVar14 + fVar12 + fVar16;
        auVar31 = divps(auVar30,auVar31);
        if ((int)(*(uint *)((longlong)param_7 + 0xc) & 0x7fffffff) < iVar9) {
          FUN_144c3a7e0(param_7,&PTR_vftable_14c6e47a0,(longlong)iVar9);
        }
        lVar4 = param_7[1];
        *(int *)(param_7 + 1) = iVar9;
        pfVar8 = (float *)((longlong)(int)lVar4 * 0x30 + *param_7);
        if (pfVar8 != (float *)0x0) {
          pfVar8[6] = 0.0;
          pfVar8[7] = 0.0;
          pfVar8[8] = 0.0;
          pfVar8[9] = 0.0;
        }
        *pfVar8 = auVar31._0_4_ * fVar26 + fVar19;
        pfVar8[1] = auVar31._4_4_ * fVar27 + fVar21;
        pfVar8[2] = auVar31._8_4_ * fVar28 + fVar23;
        pfVar8[3] = auVar31._12_4_ *
                    ((fVar10 * fVar49 + fVar45 + fVar2 * fVar41 + fVar3 * fVar53) - fVar25) + fVar25
        ;
        pfVar6 = (float *)FUN_144b3f870(pfVar5 + 0x1c,local_res10,*(undefined8 *)(param_1 + 0x100),
                                        pfVar8 + 5);
        pfVar8[4] = *pfVar6;
        puVar7 = (undefined8 *)FUN_144b3fc20(*(undefined8 *)(param_1 + 0xf8),local_d8,param_2);
        uVar1 = puVar7[1];
        *(undefined8 *)(pfVar8 + 6) = *puVar7;
        *(undefined8 *)(pfVar8 + 8) = uVar1;
      }
    }
    fVar10 = pfVar5[0x10];
    fVar2 = pfVar5[0x11];
    fVar3 = pfVar5[0x12];
    fVar12 = pfVar5[0x14];
    fVar14 = pfVar5[0x15];
    fVar16 = pfVar5[0x16];
    fVar19 = pfVar5[0x18];
    fVar21 = pfVar5[0x19];
    fVar23 = pfVar5[0x1a];
    fVar25 = pfVar5[0xc];
    fVar26 = pfVar5[0xd];
    fVar27 = pfVar5[0xe];
    fVar32 = fVar14 * fVar38;
    fVar33 = fVar14 * fVar39;
    fVar34 = fVar14 * fVar40;
    fVar14 = fVar14 * fVar41;
    fVar15 = fVar26 * fVar38;
    fVar17 = fVar26 * fVar39;
    fVar18 = fVar26 * fVar40;
    fVar26 = fVar26 * fVar41;
    fVar20 = fVar21 * fVar38;
    fVar22 = fVar21 * fVar39;
    fVar24 = fVar21 * fVar40;
    fVar21 = fVar21 * fVar41;
    fVar28 = fVar12 * fVar46;
    fVar29 = fVar12 * fVar47;
    fVar13 = fVar12 * fVar48;
    fVar12 = fVar12 * fVar49;
    fVar38 = fVar3 * fVar50 + fVar2 * fVar38 + fVar10 * fVar46;
    fVar39 = fVar3 * fVar51 + fVar2 * fVar39 + fVar10 * fVar47;
    fVar40 = fVar3 * fVar52 + fVar2 * fVar40 + fVar10 * fVar48;
    fVar41 = fVar3 * fVar53 + fVar2 * fVar41 + fVar10 * fVar49;
    fVar42 = fVar42 + fVar19 * fVar46 + fVar20 + fVar23 * fVar50;
    fVar43 = fVar43 + fVar19 * fVar47 + fVar22 + fVar23 * fVar51;
    fVar44 = fVar44 + fVar19 * fVar48 + fVar24 + fVar23 * fVar52;
    fVar45 = fVar45 + fVar19 * fVar49 + fVar21 + fVar23 * fVar53;
    fVar10 = fVar25 * fVar46;
    fVar46 = fVar15 + fVar10 + fVar27 * fVar50;
    fVar47 = fVar17 + fVar25 * fVar47 + fVar27 * fVar51;
    fVar48 = fVar18 + fVar25 * fVar48 + fVar27 * fVar52;
    fVar49 = fVar26 + fVar25 * fVar49 + fVar27 * fVar53;
    fVar50 = fVar50 * fVar16 + fVar32 + fVar28;
    fVar51 = fVar51 * fVar16 + fVar33 + fVar29;
    fVar52 = fVar52 * fVar16 + fVar34 + fVar13;
    fVar53 = fVar53 * fVar16 + fVar14 + fVar12;
  }
  return;
}



// FUNCTION 144c39b20 FUN_144c39b20 body=2833 status=ok
// SIG undefined FUN_144c39b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c39b20(char *param_1,char param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar16;
  int *piVar17;
  longlong lVar18;
  int *piVar19;
  float fVar20;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar29 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [12];
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar60;
  float fVar61;
  undefined1 auVar59 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  uint local_res20 [2];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [176];
  ulonglong uVar15;
  
  if (-1 < *(int *)(param_1 + 0xa8)) {
    fVar69 = *(float *)(param_1 + 0x10);
    fVar70 = *(float *)(param_1 + 0x14);
    fVar71 = *(float *)(param_1 + 0x18);
    fVar62 = *param_3;
    fVar63 = param_3[1];
    fVar64 = param_3[2];
    iVar8 = *(int *)(param_1 + 0xa8);
    fVar25 = fVar62 * fVar69;
    fVar30 = fVar63 * fVar70;
    fVar34 = fVar64 * fVar71;
    fVar43 = fVar62 * fVar62;
    fVar48 = fVar63 * fVar63;
    fVar50 = fVar64 * fVar64;
    auVar57._4_4_ = fVar43;
    auVar57._0_4_ = fVar43;
    auVar57._8_4_ = fVar43;
    auVar57._12_4_ = fVar43;
    auVar39._0_4_ = fVar48 + fVar43 + fVar50;
    auVar39._4_4_ = fVar48 + fVar43 + fVar50;
    auVar39._8_4_ = fVar48 + fVar43 + fVar50;
    auVar39._12_4_ = fVar48 + fVar43 + fVar50;
    fVar62 = fVar62 - (fVar30 + fVar25 + fVar34) * fVar69;
    fVar63 = fVar63 - (fVar30 + fVar25 + fVar34) * fVar70;
    fVar64 = fVar64 - (fVar30 + fVar25 + fVar34) * fVar71;
    fStack_11c = param_3[3] - (fVar30 + fVar25 + fVar34) * *(float *)(param_1 + 0x1c);
    local_138 = sqrtps(auVar57,auVar39);
    fVar43 = param_3[4] * fVar69;
    fVar48 = param_3[5] * fVar70;
    fVar50 = param_3[6] * fVar71;
    fVar25 = param_3[4] - (fVar48 + fVar43 + fVar50) * fVar69;
    fVar30 = param_3[5] - (fVar48 + fVar43 + fVar50) * fVar70;
    fVar34 = param_3[6] - (fVar48 + fVar43 + fVar50) * fVar71;
    fVar43 = param_3[7] - (fVar48 + fVar43 + fVar50) * *(float *)(param_1 + 0x1c);
    fVar55 = fVar63 * fVar69 - fVar70 * fVar62;
    fVar48 = fVar64 * fVar70 - fVar71 * fVar63;
    fVar50 = fVar62 * fVar71 - fVar69 * fVar64;
    fVar69 = fVar25 - fVar62;
    fVar70 = fVar30 - fVar63;
    fVar71 = fVar34 - fVar64;
    fStack_fc = fVar43 - fStack_11c;
    fVar24 = 0.0 - (fVar70 * fVar50 + fVar69 * fVar48 + fVar71 * fVar55);
    local_128 = fVar62;
    fStack_124 = fVar63;
    fStack_120 = fVar64;
    local_118 = fVar25;
    fStack_114 = fVar30;
    fStack_110 = fVar34;
    fStack_10c = fVar43;
    local_108 = fVar69;
    fStack_104 = fVar70;
    fStack_100 = fVar71;
    local_f8 = fVar48;
    fStack_f4 = fVar50;
    fStack_f0 = fVar55;
    fStack_ec = fVar24;
    iVar6 = FUN_144b3fa10(*(undefined8 *)(param_1 + 0xf8));
    if (iVar8 < iVar6) {
      do {
        pfVar9 = (float *)FUN_144b3f860(*(undefined8 *)(param_1 + 0xf8),iVar8);
        fVar20 = 0.0;
        fVar44 = *(float *)(param_1 + 0x10);
        fVar49 = *(float *)(param_1 + 0x14);
        fVar51 = *(float *)(param_1 + 0x18);
        fVar2 = *(float *)(param_1 + 0x1c);
        fVar28 = *pfVar9;
        fVar33 = pfVar9[1];
        fVar37 = pfVar9[2];
        fVar66 = fVar28 * *(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0xe0) +
                 fVar33 * *(float *)(param_1 + 0xc0) + fVar37 * *(float *)(param_1 + 0xd0);
        fVar67 = fVar28 * *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xe4) +
                 fVar33 * *(float *)(param_1 + 0xc4) + fVar37 * *(float *)(param_1 + 0xd4);
        fVar68 = fVar28 * *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0xe8) +
                 fVar33 * *(float *)(param_1 + 200) + fVar37 * *(float *)(param_1 + 0xd8);
        fVar65 = pfVar9[4];
        fVar3 = pfVar9[5];
        fVar4 = pfVar9[6];
        fVar58 = fVar65 * *(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0xe0) +
                 fVar3 * *(float *)(param_1 + 0xc0) + fVar4 * *(float *)(param_1 + 0xd0);
        fVar60 = fVar65 * *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xe4) +
                 fVar3 * *(float *)(param_1 + 0xc4) + fVar4 * *(float *)(param_1 + 0xd4);
        fVar61 = fVar65 * *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0xe8) +
                 fVar3 * *(float *)(param_1 + 200) + fVar4 * *(float *)(param_1 + 0xd8);
        fVar26 = fVar66 * fVar44;
        fVar31 = fVar67 * fVar49;
        fVar35 = fVar68 * fVar51;
        fVar27 = fVar58 * fVar44;
        fVar32 = fVar60 * fVar49;
        fVar36 = fVar61 * fVar51;
        fVar66 = fVar66 - (fVar31 + fVar26 + fVar35) * fVar44;
        fVar67 = fVar67 - (fVar31 + fVar26 + fVar35) * fVar49;
        fVar68 = fVar68 - (fVar31 + fVar26 + fVar35) * fVar51;
        fVar26 = (fVar28 * *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xec) +
                  fVar33 * *(float *)(param_1 + 0xcc) + fVar37 * *(float *)(param_1 + 0xdc)) -
                 (fVar31 + fVar26 + fVar35) * fVar2;
        auVar59._0_4_ = (fVar58 - (fVar32 + fVar27 + fVar36) * fVar44) - fVar66;
        auVar59._4_4_ = (fVar60 - (fVar32 + fVar27 + fVar36) * fVar49) - fVar67;
        auVar59._8_4_ = (fVar61 - (fVar32 + fVar27 + fVar36) * fVar51) - fVar68;
        auVar59._12_4_ =
             ((fVar65 * *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xec) +
               fVar3 * *(float *)(param_1 + 0xcc) + fVar4 * *(float *)(param_1 + 0xdc)) -
             (fVar32 + fVar27 + fVar36) * fVar2) - fVar26;
        fVar28 = fVar48 * auVar59._0_4_;
        fVar33 = fVar50 * auVar59._4_4_;
        fVar37 = fVar55 * auVar59._8_4_;
        auVar45._0_4_ = fVar33 + fVar28 + fVar37;
        auVar45._4_4_ = fVar33 + fVar28 + fVar37;
        auVar45._8_4_ = fVar33 + fVar28 + fVar37;
        auVar45._12_4_ = fVar33 + fVar28 + fVar37;
        pfVar10 = pfVar9;
        if (auVar45._0_4_ * auVar45._0_4_ <= _DAT_14c6daea0) {
LAB_144c39eb9:
          if (param_2 == '\0') {
            return;
          }
          if (param_3[0x10] == 0.0) {
            return;
          }
          fVar70 = param_3[8];
          fVar71 = param_3[9];
          fVar62 = param_3[10];
          fVar63 = param_3[0xb];
          fVar69 = DAT_14c6daca0._12_4_;
          fVar64 = fVar66 - fVar70;
          fVar30 = fVar67 - fVar71;
          fVar43 = fVar68 - fVar62;
          fVar33 = (float)(~-(uint)(auVar59._0_4_ == 0.0) & (uint)auVar59._0_4_);
          fVar37 = (float)(~-(uint)(auVar59._4_4_ == 0.0) & (uint)auVar59._4_4_);
          fVar65 = (float)(~-(uint)(auVar59._8_4_ == 0.0) & (uint)auVar59._8_4_);
          fVar25 = fVar64 * fVar64;
          fVar34 = fVar30 * fVar30;
          fVar48 = fVar43 * fVar43;
          fVar50 = fVar65 * fVar65 + fVar37 * fVar37 + fVar33 * fVar33;
          fVar55 = fVar51 * fVar65 + fVar49 * fVar37 + fVar44 * fVar33;
          fVar24 = fVar43 * fVar65 + fVar30 * fVar37 + fVar64 * fVar33;
          fVar28 = fVar51 * fVar43 + fVar49 * fVar30 + fVar44 * fVar64;
          auVar46._0_4_ = fVar50 - fVar55 * fVar55;
          auVar46._4_4_ = fVar50 - fVar55 * fVar55;
          auVar46._8_4_ = fVar50 - fVar55 * fVar55;
          auVar46._12_4_ = fVar50 - fVar55 * fVar55;
          fVar64 = fVar24 - fVar28 * fVar55;
          fVar30 = fVar24 - fVar28 * fVar55;
          fVar43 = fVar24 - fVar28 * fVar55;
          fVar24 = fVar24 - fVar28 * fVar55;
          if (auVar46._0_4_ < _DAT_14c6daea0) {
            return;
          }
          auVar38._0_4_ = fVar28 * fVar28;
          auVar38._4_4_ = fVar28 * fVar28;
          auVar38._8_4_ = fVar28 * fVar28;
          auVar38._12_4_ = fVar28 * fVar28;
          auVar22._0_4_ =
               fVar64 * fVar64 -
               (((fVar34 + fVar25 + fVar48) - auVar38._0_4_) - ABS(fVar63) * ABS(fVar63)) *
               auVar46._0_4_;
          auVar22._4_4_ =
               fVar30 * fVar30 -
               (((fVar34 + fVar25 + fVar48) - auVar38._4_4_) - ABS(fVar63) * ABS(fVar63)) *
               auVar46._4_4_;
          auVar22._8_4_ =
               fVar43 * fVar43 -
               (((fVar34 + fVar25 + fVar48) - auVar38._8_4_) - ABS(fVar63) * ABS(fVar63)) *
               auVar46._8_4_;
          auVar22._12_4_ =
               fVar24 * fVar24 -
               (((fVar34 + fVar25 + fVar48) - auVar38._12_4_) - ABS(fVar63) * ABS(fVar63)) *
               auVar46._12_4_;
          if (auVar22._0_4_ < 0.0) {
            return;
          }
          auVar39 = sqrtps(auVar38,auVar22);
          auVar57 = divps(_DAT_14c6daca0,auVar46);
          auVar40._0_4_ = (auVar39._0_4_ - fVar64) * auVar57._0_4_;
          auVar40._4_4_ = (auVar39._4_4_ - fVar30) * auVar57._4_4_;
          auVar40._8_4_ = (auVar39._8_4_ - fVar43) * auVar57._8_4_;
          auVar40._12_4_ = (auVar39._12_4_ - fVar24) * auVar57._12_4_;
          auVar52._0_8_ =
               CONCAT44((0.0 - (auVar39._4_4_ + fVar30)) * auVar57._4_4_,
                        (0.0 - (auVar39._0_4_ + fVar64)) * auVar57._0_4_);
          auVar52._8_4_ = (0.0 - (auVar39._8_4_ + fVar43)) * auVar57._8_4_;
          auVar52._12_4_ = (0.0 - (auVar39._12_4_ + fVar24)) * auVar57._12_4_;
          auVar47._8_4_ = auVar52._8_4_;
          auVar47._0_8_ = auVar52._0_8_;
          auVar47._12_4_ = auVar52._12_4_;
          auVar57 = minps(auVar47,auVar40);
          auVar39 = maxps(auVar52,auVar40);
          fVar34 = auVar57._0_4_;
          fVar43 = auVar57._4_4_;
          fVar48 = auVar57._8_4_;
          fVar50 = auVar57._12_4_;
          fVar55 = (fVar34 * fVar33 + fVar66) - fVar70;
          fVar24 = (fVar43 * fVar37 + fVar67) - fVar71;
          fVar28 = (fVar48 * fVar65 + fVar68) - fVar62;
          fVar64 = fVar44 * fVar55;
          fVar25 = fVar49 * fVar24;
          fVar30 = fVar51 * fVar28;
          auVar54._0_4_ = fVar55 - (fVar25 + fVar64 + fVar30) * fVar44;
          auVar54._4_4_ = fVar24 - (fVar25 + fVar64 + fVar30) * fVar49;
          auVar54._8_4_ = fVar28 - (fVar25 + fVar64 + fVar30) * fVar51;
          auVar54._12_4_ =
               ((fVar50 * (float)(~-(uint)(fVar69 == 0.0) & (uint)fVar69) + fVar26) - fVar63) -
               (fVar25 + fVar64 + fVar30) * fVar2;
          fVar63 = auVar54._0_4_ * auVar54._0_4_;
          fVar64 = auVar54._4_4_ * auVar54._4_4_;
          fVar25 = auVar54._8_4_ * auVar54._8_4_;
          auVar23._4_4_ = fVar63;
          auVar23._0_4_ = fVar63;
          auVar23._8_4_ = fVar63;
          auVar23._12_4_ = fVar63;
          auVar41._0_4_ = fVar64 + fVar63 + fVar25;
          auVar41._4_4_ = fVar64 + fVar63 + fVar25;
          auVar41._8_4_ = fVar64 + fVar63 + fVar25;
          auVar41._12_4_ = fVar64 + fVar63 + fVar25;
          if (!NAN(auVar41._0_4_) && auVar41._0_4_ == 0.0) {
            auVar53 = SUB1612(ZEXT816(0),0);
          }
          else {
            auVar57 = sqrtps(auVar23,auVar41);
            auVar57 = divps(auVar54,auVar57);
            auVar53 = auVar57._0_12_;
          }
          auVar42._0_4_ =
               -(uint)((fVar34 <= auVar39._0_4_ && 0.0 <= fVar34) && fVar34 < (float)DAT_14c6daca0);
          auVar42._4_4_ =
               -(uint)((fVar43 <= auVar39._4_4_ && 0.0 <= fVar43) && fVar43 < DAT_14c6daca0._4_4_);
          auVar42._8_4_ =
               -(uint)((fVar48 <= auVar39._8_4_ && 0.0 <= fVar48) && fVar48 < DAT_14c6daca0._8_4_);
          auVar42._12_4_ = -(uint)((fVar50 <= auVar39._12_4_ && 0.0 <= fVar50) && fVar50 < fVar69);
          iVar8 = movmskps((int)CONCAT71((int7)((ulonglong)pfVar10 >> 8),!NAN(auVar41._0_4_)),
                           auVar42);
          fVar69 = (float)(auVar42._12_4_ & (uint)fVar50 | ~auVar42._12_4_ & (uint)fVar69);
          if (iVar8 == 0) {
            return;
          }
          fVar63 = (param_3[4] - fVar70) * fVar44;
          fVar64 = (param_3[5] - fVar71) * fVar49;
          fVar30 = (param_3[6] - fVar62) * fVar51;
          fVar24 = fVar69 * fVar33 + fVar66;
          fVar28 = fVar69 * fVar37 + fVar67;
          fVar33 = fVar69 * fVar65 + fVar68;
          fVar37 = fVar69 * fVar69 + fVar26;
          fVar69 = auVar53._0_4_ * fVar44;
          fVar25 = auVar53._4_4_ * fVar49;
          fVar34 = auVar53._8_4_ * fVar51;
          fVar43 = (param_3[4] - fVar70) - (fVar64 + fVar63 + fVar30) * fVar44;
          fVar71 = (param_3[5] - fVar71) - (fVar64 + fVar63 + fVar30) * fVar49;
          fVar62 = (param_3[6] - fVar62) - (fVar64 + fVar63 + fVar30) * fVar51;
          fVar63 = auVar53._0_4_ - (fVar25 + fVar69 + fVar34) * fVar44;
          fVar64 = auVar53._4_4_ - (fVar25 + fVar69 + fVar34) * fVar49;
          fVar25 = auVar53._8_4_ - (fVar25 + fVar69 + fVar34) * fVar51;
          fVar69 = fVar63 * fVar43;
          fVar70 = fVar64 * fVar71;
          fStack_14c = fVar25 * fVar62;
          local_158 = fVar70 + fVar69 + fStack_14c;
          fStack_154 = fVar70 + fVar69 + fStack_14c;
          fStack_150 = fVar70 + fVar69 + fStack_14c;
          fStack_14c = fVar70 + fVar69 + fStack_14c;
          fVar44 = (fVar25 * fVar71 - fVar62 * fVar64) * fVar44;
          fVar49 = (fVar63 * fVar62 - fVar43 * fVar25) * fVar49;
          fVar51 = (fVar64 * fVar43 - fVar71 * fVar63) * fVar51;
          local_148 = fVar49 + fVar44 + fVar51;
          fStack_144 = fVar49 + fVar44 + fVar51;
          fStack_140 = fVar49 + fVar44 + fVar51;
          fStack_13c = fVar49 + fVar44 + fVar51;
          pfVar10 = (float *)FUN_144bea890(local_e8,&local_148,&local_158);
          fVar69 = *pfVar10 / param_3[0x10];
          if (fVar69 < 0.0) {
            return;
          }
          if (1.0 < fVar69) {
            return;
          }
          fVar20 = 1.4013e-45;
          fVar48 = ABS(param_3[0xb] * *pfVar10) + (float)local_138._0_4_;
          fVar62 = local_128;
          fVar63 = fStack_124;
          fVar64 = fStack_120;
          fVar25 = local_118;
          fVar30 = fStack_114;
          fVar34 = fStack_110;
          fVar43 = fStack_10c;
          fVar69 = local_108;
          fVar70 = fStack_104;
          fVar71 = fStack_100;
LAB_144c3a209:
          FUN_144b3f870(pfVar9 + 0x1c,local_res20,*(undefined8 *)(param_1 + 0x100),0);
          uVar14 = local_res20[0] & 0x3fffff;
          uVar15 = (ulonglong)uVar14;
          lVar1 = *(longlong *)
                   (*(longlong *)
                     ((ulonglong)(local_res20[0] >> 0x16) * 0x120 +
                     *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x38)) + 0x20);
          iVar8 = *(int *)(lVar1 + 0x30);
          if ((int)uVar14 < iVar8) {
            uVar12 = uVar14;
            if (*(int *)(lVar1 + 0x78) != 0) {
              uVar12 = *(uint *)(*(longlong *)(lVar1 + 0x70) + uVar15 * 4);
            }
            if (uVar12 == 0xffffffff) {
              lVar18 = *(longlong *)(lVar1 + 0x28);
              lVar11 = uVar15 * 5;
            }
            else {
              lVar11 = (longlong)(int)uVar12 * 5;
              lVar18 = *(longlong *)(lVar1 + 0xc0);
            }
          }
          else {
            lVar11 = (longlong)(int)(uVar14 - iVar8) * 5;
            lVar18 = *(longlong *)(lVar1 + 0xe0);
          }
          fVar50 = *(float *)(lVar18 + lVar11 * 4 + 0xc);
          if (((*(byte *)(lVar18 + 0x10 + lVar11 * 4) & 0x40) == 0) && (fVar50 != -NAN)) {
            fVar50 = (float)(*(int *)(lVar1 + 0x17c) << 0x16 | (uint)fVar50 & 0x3fffff);
          }
          if ((int)uVar14 < iVar8) {
            uVar13 = (ulonglong)uVar14;
            if (*(int *)(lVar1 + 0x78) != 0) {
              uVar14 = *(uint *)(*(longlong *)(lVar1 + 0x70) + uVar15 * 4);
            }
            if (uVar14 == 0xffffffff) {
              lVar18 = *(longlong *)(lVar1 + 0x28);
              lVar11 = uVar13 * 5;
            }
            else {
              lVar11 = (longlong)(int)uVar14 * 5;
              lVar18 = *(longlong *)(lVar1 + 0xc0);
            }
          }
          else {
            lVar11 = (longlong)(int)(uVar14 - iVar8) * 5;
            lVar18 = *(longlong *)(lVar1 + 0xe0);
          }
          fVar55 = *(float *)(lVar18 + lVar11 * 4 + 8);
          if (((*(byte *)(lVar18 + 0x10 + lVar11 * 4) & 0x40) == 0) && (fVar55 != -NAN)) {
            fVar55 = (float)(*(int *)(lVar1 + 0x17c) << 0x16 | (uint)fVar55 & 0x3fffff);
          }
          uVar14 = (uint)fVar50 & 0x3fffff;
          lVar1 = *(longlong *)
                   (*(longlong *)
                     ((ulonglong)((uint)fVar50 >> 0x16) * 0x120 +
                     *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x38)) + 0x20);
          iVar8 = *(int *)(lVar1 + 0x50);
          lVar18 = (longlong)iVar8;
          if ((int)uVar14 < *(int *)(lVar1 + 0x20)) {
            uVar12 = uVar14;
            if (*(int *)(lVar1 + 0x98) != 0) {
              uVar12 = *(uint *)(*(longlong *)(lVar1 + 0x90) + (ulonglong)uVar14 * 4);
            }
            if (uVar12 == 0xffffffff) {
              piVar16 = (int *)(*(longlong *)(lVar1 + 0x48) + (longlong)(int)(uVar14 * iVar8) * 4);
              piVar19 = piVar16 + lVar18;
            }
            else {
              piVar16 = (int *)(*(longlong *)(lVar1 + 0x120) + (longlong)(int)(uVar12 * iVar8) * 4);
              piVar19 = (int *)(*(longlong *)(lVar1 + 0x120) + ((int)(uVar12 * iVar8) + lVar18) * 4)
              ;
            }
          }
          else {
            lVar11 = (longlong)(int)((uVar14 - *(int *)(lVar1 + 0x20)) * iVar8);
            piVar19 = (int *)(*(longlong *)(lVar1 + 0x140) + (lVar11 + lVar18) * 4);
            piVar16 = (int *)(*(longlong *)(lVar1 + 0x140) + lVar11 * 4);
          }
          if ((*param_1 == '\0') &&
             (((*(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98) ^
               (longlong)piVar19 - (longlong)piVar16) & 0xfffffffffffffffcU) == 0)) {
            if (piVar16 != piVar19) {
              piVar17 = piVar16;
              do {
                if (*piVar17 !=
                    *(int *)((longlong)piVar17 + (*(longlong *)(param_1 + 0x98) - (longlong)piVar16)
                            )) {
                  bVar5 = false;
                  goto LAB_144c3a428;
                }
                piVar17 = piVar17 + 1;
              } while (piVar17 != piVar19);
            }
            bVar5 = true;
LAB_144c3a428:
            if (!bVar5) goto LAB_144c3a42c;
          }
          else {
LAB_144c3a42c:
            fVar44 = (float)((int)param_3[0x18] + 1);
            if ((int)ABS(param_3[0x19]) < (int)fVar44) {
              FUN_144c3a920(param_3 + 0x16,&PTR_vftable_14c6e47a0,(longlong)(int)fVar44);
            }
            fVar49 = param_3[0x18];
            param_3[0x18] = fVar44;
            pfVar10 = (float *)((longlong)(int)fVar49 * 0x30 + *(longlong *)(param_3 + 0x16));
            if (pfVar10 != (float *)0x0) {
              pfVar10[8] = 0.0;
              pfVar10[9] = 0.0;
            }
            pfVar10[5] = fVar20;
            pfVar10[4] = fVar48;
            *(int **)(pfVar10 + 8) = piVar16;
            *(int **)(pfVar10 + 10) = piVar19;
            pfVar10[6] = fVar50;
            *pfVar10 = fVar24;
            pfVar10[1] = fVar28;
            pfVar10[2] = fVar33;
            pfVar10[3] = fVar37;
            pfVar10[7] = fVar55;
            *(int **)(param_1 + 0x98) = piVar16;
            *(int **)(param_1 + 0xa0) = piVar19;
          }
          fVar48 = pfVar9[0xc];
          fVar50 = pfVar9[0xd];
          fVar55 = pfVar9[0xe];
          fVar24 = pfVar9[0x10];
          fVar44 = pfVar9[0x11];
          fVar49 = pfVar9[0x12];
          fVar51 = pfVar9[0x14];
          fVar2 = pfVar9[0x15];
          fVar28 = pfVar9[0x16];
          fVar33 = pfVar9[0x18];
          fVar37 = pfVar9[0x19];
          fVar65 = pfVar9[0x1a];
          fVar3 = *(float *)(param_1 + 0xc0);
          fVar4 = *(float *)(param_1 + 0xc4);
          fVar20 = *(float *)(param_1 + 200);
          fVar26 = *(float *)(param_1 + 0xcc);
          fVar27 = *(float *)(param_1 + 0xb0);
          fVar31 = *(float *)(param_1 + 0xb4);
          fVar32 = *(float *)(param_1 + 0xb8);
          fVar35 = *(float *)(param_1 + 0xbc);
          fVar36 = *(float *)(param_1 + 0xd0);
          fVar58 = *(float *)(param_1 + 0xd4);
          fVar60 = *(float *)(param_1 + 0xd8);
          fVar61 = *(float *)(param_1 + 0xdc);
          *(float *)(param_1 + 0xb0) = fVar48 * fVar27 + fVar50 * fVar3 + fVar55 * fVar36;
          *(float *)(param_1 + 0xb4) = fVar48 * fVar31 + fVar50 * fVar4 + fVar55 * fVar58;
          *(float *)(param_1 + 0xb8) = fVar48 * fVar32 + fVar50 * fVar20 + fVar55 * fVar60;
          *(float *)(param_1 + 0xbc) = fVar48 * fVar35 + fVar50 * fVar26 + fVar55 * fVar61;
          *(float *)(param_1 + 0xc0) = fVar24 * fVar27 + fVar44 * fVar3 + fVar49 * fVar36;
          *(float *)(param_1 + 0xc4) = fVar24 * fVar31 + fVar44 * fVar4 + fVar49 * fVar58;
          *(float *)(param_1 + 200) = fVar24 * fVar32 + fVar44 * fVar20 + fVar49 * fVar60;
          *(float *)(param_1 + 0xcc) = fVar24 * fVar35 + fVar44 * fVar26 + fVar49 * fVar61;
          *(float *)(param_1 + 0xd0) = fVar51 * fVar27 + fVar2 * fVar3 + fVar28 * fVar36;
          *(float *)(param_1 + 0xd4) = fVar51 * fVar31 + fVar2 * fVar4 + fVar28 * fVar58;
          *(float *)(param_1 + 0xd8) = fVar51 * fVar32 + fVar2 * fVar20 + fVar28 * fVar60;
          *(float *)(param_1 + 0xdc) = fVar51 * fVar35 + fVar2 * fVar26 + fVar28 * fVar61;
          *(float *)(param_1 + 0xe0) =
               fVar33 * fVar27 + *(float *)(param_1 + 0xe0) + fVar37 * fVar3 + fVar65 * fVar36;
          *(float *)(param_1 + 0xe4) =
               fVar33 * fVar31 + *(float *)(param_1 + 0xe4) + fVar37 * fVar4 + fVar65 * fVar58;
          *(float *)(param_1 + 0xe8) =
               fVar33 * fVar32 + *(float *)(param_1 + 0xe8) + fVar37 * fVar20 + fVar65 * fVar60;
          *(float *)(param_1 + 0xec) =
               fVar33 * fVar35 + *(float *)(param_1 + 0xec) + fVar37 * fVar26 + fVar65 * fVar61;
        }
        else {
          fVar48 = fVar48 * fVar66;
          fVar50 = fVar50 * fVar67;
          fVar55 = fVar55 * fVar68;
          auVar56._0_4_ = 0.0 - (fVar50 + fVar48 + fVar55 + fVar24);
          auVar56._4_4_ = 0.0 - (fVar50 + fVar48 + fVar55 + fVar24);
          auVar56._8_4_ = 0.0 - (fVar50 + fVar48 + fVar55 + fVar24);
          auVar56._12_4_ = 0.0 - (fVar50 + fVar48 + fVar55 + fVar24);
          auVar57 = divps(auVar56,auVar45);
          fVar24 = auVar57._0_4_ * auVar59._0_4_ + fVar66;
          fVar28 = auVar57._4_4_ * auVar59._4_4_ + fVar67;
          fVar33 = auVar57._8_4_ * auVar59._8_4_ + fVar68;
          fVar37 = auVar57._12_4_ * auVar59._12_4_ + fVar26;
          fVar48 = fVar69 - fVar24;
          fVar50 = fVar70 - fVar28;
          fVar55 = fVar71 - fVar33;
          if ((fVar30 - fVar28) * fVar50 + (fVar25 - fVar24) * fVar48 + (fVar34 - fVar33) * fVar55
              <= 0.0) {
LAB_144c3a067:
            fVar48 = fVar48 * fVar48;
            fVar50 = fVar50 * fVar50;
            fVar55 = fVar55 * fVar55;
            auVar29._0_4_ = fVar50 + fVar48 + fVar55;
            auVar29._4_4_ = fVar50 + fVar48 + fVar55;
            auVar29._8_4_ = fVar50 + fVar48 + fVar55;
            auVar29._12_4_ = fVar50 + fVar48 + fVar55;
            auVar57 = sqrtps(auVar59,auVar29);
            fVar48 = auVar57._0_4_;
            goto LAB_144c3a209;
          }
          if (((uint)pfVar9[0x20] & 0x10) != 0) {
            auVar21._4_4_ = -(uint)(ABS(fVar30 - fVar28) <= 1e-05);
            auVar21._0_4_ = -(uint)(ABS(fVar25 - fVar24) <= 1e-05);
            auVar21._8_4_ = -(uint)(ABS(fVar34 - fVar33) <= 1e-05);
            auVar21._12_4_ = -(uint)(ABS(fVar43 - fVar37) <= 1e-05);
            uVar7 = movmskps((int)pfVar9,auVar21);
            pfVar10 = (float *)0x0;
            if (((byte)uVar7 & 7) == 7) goto LAB_144c3a067;
          }
          if (fVar63 * fVar50 + fVar62 * fVar48 + fVar64 * fVar55 <= 0.0) goto LAB_144c39eb9;
        }
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
        iVar8 = *(int *)(param_1 + 0xa8);
        iVar6 = FUN_144b3fa10(*(undefined8 *)(param_1 + 0xf8));
        fVar48 = local_f8;
        fVar50 = fStack_f4;
        fVar55 = fStack_f0;
        fVar24 = fStack_ec;
      } while (iVar8 < iVar6);
    }
  }
  return;
}



// FUNCTION 144c3a640 FUN_144c3a640 body=67 status=ok
// SIG undefined FUN_144c3a640(void)

longlong FUN_144c3a640(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 5;
  return param_1;
}



// FUNCTION 144c3a690 FUN_144c3a690 body=331 status=ok
// SIG undefined FUN_144c3a690(void)

void FUN_144c3a690(longlong param_1,longlong param_2,float *param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint local_res8 [2];
  uint local_48 [4];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (*(int *)(param_1 + 0x70) != -1) {
    FUN_144ca81d0((int *)(param_1 + 0x70),local_res8,param_2);
    local_48[0] = local_res8[0] & 0x3fffff;
    FUN_144c52b70(*(undefined8 *)
                   (*(longlong *)
                     ((ulonglong)(local_res8[0] >> 0x16) * 0x120 + *(longlong *)(param_2 + 0x38)) +
                   0x20),local_48,&local_38);
    fVar7 = fStack_34 * param_4[4] + local_38 * *param_4 + fStack_30 * param_4[8];
    fVar8 = fStack_34 * param_4[5] + local_38 * param_4[1] + fStack_30 * param_4[9];
    fVar9 = fStack_34 * param_4[6] + local_38 * param_4[2] + fStack_30 * param_4[10];
    fStack_2c = fStack_2c - (fVar8 * param_4[0xd] + fVar7 * param_4[0xc] + fVar9 * param_4[0xe]);
    fVar4 = *param_3 * fVar7;
    fVar5 = param_3[1] * fVar8;
    fVar6 = param_3[2] * fVar9;
    fVar3 = param_5[1] * fVar8 + *param_5 * fVar7;
    fVar7 = *param_5 * fVar7 + param_5[1] * fVar8;
    fVar8 = fStack_2c + param_5[2] * fVar9;
    fStack_2c = param_5[2] * fVar9 + fStack_2c;
    auVar1._0_4_ = 0.0 - (fVar8 + fVar3);
    auVar1._4_4_ = 0.0 - (fStack_2c + fVar7);
    auVar1._8_4_ = 0.0 - (fVar3 + fVar8);
    auVar1._12_4_ = 0.0 - (fVar7 + fStack_2c);
    auVar2._4_4_ = fVar5 + fVar4 + fVar6;
    auVar2._0_4_ = fVar5 + fVar4 + fVar6;
    auVar2._8_4_ = fVar5 + fVar4 + fVar6;
    auVar2._12_4_ = fVar5 + fVar4 + fVar6;
    auVar2 = divps(auVar1,auVar2);
    fVar3 = param_3[1];
    fVar7 = param_3[2];
    fVar8 = param_3[3];
    *param_5 = auVar2._0_4_ * *param_3 + *param_5;
    param_5[1] = auVar2._4_4_ * fVar3 + param_5[1];
    param_5[2] = auVar2._8_4_ * fVar7 + param_5[2];
    param_5[3] = auVar2._12_4_ * fVar8 + param_5[3];
  }
  return;
}



// FUNCTION 144c3a7e0 FUN_144c3a7e0 body=309 status=ok
// SIG undefined FUN_144c3a7e0(void)

ulonglong FUN_144c3a7e0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar11 = uVar12 * 2;
  uVar9 = param_3;
  if (param_3 < uVar11) {
    uVar9 = uVar11;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x30,&local_res8);
  puVar8 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar7 = (undefined4 *)(lVar6 + 0x14);
    uVar11 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if ((undefined8 *)(puVar7 + -5) != (undefined8 *)0x0) {
        uVar5 = puVar8[1];
        *(undefined8 *)(puVar7 + -5) = *puVar8;
        *(undefined8 *)(puVar7 + -3) = uVar5;
        puVar7[-1] = *(undefined4 *)(puVar8 + 2);
        *puVar7 = *(undefined4 *)((longlong)puVar8 + 0x14);
        uVar2 = *(undefined4 *)((longlong)puVar8 + 0x1c);
        uVar3 = *(undefined4 *)(puVar8 + 4);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0x24);
        puVar7[1] = *(undefined4 *)(puVar8 + 3);
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        puVar7[4] = uVar4;
      }
      puVar7 = puVar7 + 0xc;
      puVar8 = puVar8 + 6;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x30 + 0x30;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x30;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x30);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 144c3a920 FUN_144c3a920 body=635 status=ok
// SIG undefined FUN_144c3a920(void)

ulonglong FUN_144c3a920(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong local_res8;
  
  uVar18 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar17 = uVar18 * 2;
  uVar12 = param_3;
  if (param_3 < uVar17) {
    uVar12 = uVar17;
  }
  if ((0x7ffffffe < uVar12) && (uVar12 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar12 * 0x30,&local_res8);
  iVar2 = *(int *)(param_1 + 1);
  iVar14 = 0;
  puVar15 = (undefined8 *)*param_1;
  puVar16 = puVar8;
  if (3 < iVar2) {
    puVar11 = (undefined4 *)((longlong)puVar8 + 0x44);
    uVar9 = (iVar2 - 4U >> 2) + 1;
    uVar17 = (ulonglong)uVar9;
    iVar14 = uVar9 * 4;
    do {
      if (puVar16 != (undefined8 *)0x0) {
        uVar7 = puVar15[1];
        *puVar16 = *puVar15;
        puVar16[1] = uVar7;
        puVar11[-0xd] = *(undefined4 *)(puVar15 + 2);
        puVar11[-0xc] = *(undefined4 *)((longlong)puVar15 + 0x14);
        puVar11[-0xb] = *(undefined4 *)(puVar15 + 3);
        puVar11[-10] = *(undefined4 *)((longlong)puVar15 + 0x1c);
        uVar4 = *(undefined4 *)((longlong)puVar15 + 0x24);
        uVar5 = *(undefined4 *)(puVar15 + 5);
        uVar6 = *(undefined4 *)((longlong)puVar15 + 0x2c);
        puVar11[-9] = *(undefined4 *)(puVar15 + 4);
        puVar11[-8] = uVar4;
        puVar11[-7] = uVar5;
        puVar11[-6] = uVar6;
      }
      if ((undefined8 *)(puVar11 + -5) != (undefined8 *)0x0) {
        uVar7 = puVar15[7];
        *(undefined8 *)(puVar11 + -5) = puVar15[6];
        *(undefined8 *)(puVar11 + -3) = uVar7;
        puVar11[-1] = *(undefined4 *)(puVar15 + 8);
        *puVar11 = *(undefined4 *)((longlong)puVar15 + 0x44);
        puVar11[1] = *(undefined4 *)(puVar15 + 9);
        puVar11[2] = *(undefined4 *)((longlong)puVar15 + 0x4c);
        uVar4 = *(undefined4 *)((longlong)puVar15 + 0x54);
        uVar5 = *(undefined4 *)(puVar15 + 0xb);
        uVar6 = *(undefined4 *)((longlong)puVar15 + 0x5c);
        puVar11[3] = *(undefined4 *)(puVar15 + 10);
        puVar11[4] = uVar4;
        puVar11[5] = uVar5;
        puVar11[6] = uVar6;
      }
      if ((undefined8 *)(puVar11 + 7) != (undefined8 *)0x0) {
        uVar7 = puVar15[0xd];
        *(undefined8 *)(puVar11 + 7) = puVar15[0xc];
        *(undefined8 *)(puVar11 + 9) = uVar7;
        puVar11[0xb] = *(undefined4 *)(puVar15 + 0xe);
        puVar11[0xc] = *(undefined4 *)((longlong)puVar15 + 0x74);
        puVar11[0xd] = *(undefined4 *)(puVar15 + 0xf);
        puVar11[0xe] = *(undefined4 *)((longlong)puVar15 + 0x7c);
        uVar4 = *(undefined4 *)((longlong)puVar15 + 0x84);
        uVar5 = *(undefined4 *)(puVar15 + 0x11);
        uVar6 = *(undefined4 *)((longlong)puVar15 + 0x8c);
        puVar11[0xf] = *(undefined4 *)(puVar15 + 0x10);
        puVar11[0x10] = uVar4;
        puVar11[0x11] = uVar5;
        puVar11[0x12] = uVar6;
      }
      if ((undefined8 *)(puVar11 + 0x13) != (undefined8 *)0x0) {
        uVar7 = puVar15[0x13];
        *(undefined8 *)(puVar11 + 0x13) = puVar15[0x12];
        *(undefined8 *)(puVar11 + 0x15) = uVar7;
        puVar11[0x17] = *(undefined4 *)(puVar15 + 0x14);
        puVar11[0x18] = *(undefined4 *)((longlong)puVar15 + 0xa4);
        puVar11[0x19] = *(undefined4 *)(puVar15 + 0x15);
        puVar11[0x1a] = *(undefined4 *)((longlong)puVar15 + 0xac);
        uVar4 = *(undefined4 *)((longlong)puVar15 + 0xb4);
        uVar5 = *(undefined4 *)(puVar15 + 0x17);
        uVar6 = *(undefined4 *)((longlong)puVar15 + 0xbc);
        puVar11[0x1b] = *(undefined4 *)(puVar15 + 0x16);
        puVar11[0x1c] = uVar4;
        puVar11[0x1d] = uVar5;
        puVar11[0x1e] = uVar6;
      }
      puVar16 = puVar16 + 0x18;
      puVar11 = puVar11 + 0x30;
      puVar15 = puVar15 + 0x18;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (iVar14 < iVar2) {
    puVar11 = (undefined4 *)((longlong)puVar16 + 0x14);
    puVar10 = (undefined4 *)((longlong)puVar15 + 0x14);
    uVar17 = (ulonglong)(uint)(iVar2 - iVar14);
    do {
      puVar1 = (undefined8 *)((longlong)puVar16 + (-0x14 - (longlong)puVar15) + (longlong)puVar10);
      if (puVar1 != (undefined8 *)0x0) {
        uVar7 = *(undefined8 *)(puVar10 + -3);
        *puVar1 = *(undefined8 *)(puVar10 + -5);
        puVar1[1] = uVar7;
        puVar11[-1] = puVar10[-1];
        *puVar11 = *puVar10;
        puVar11[1] = puVar10[1];
        puVar11[2] = puVar10[2];
        uVar4 = puVar10[4];
        uVar5 = puVar10[5];
        uVar6 = puVar10[6];
        puVar11[3] = puVar10[3];
        puVar11[4] = uVar4;
        puVar11[5] = uVar5;
        puVar11[6] = uVar6;
      }
      puVar11 = puVar11 + 0xc;
      puVar10 = puVar10 + 0xc;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  uVar17 = uVar12 * 0x30 + 0x30;
  uVar13 = uVar12;
  if (uVar17 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar13 = uVar12 + 1;
    if (uVar17 <= local_res8) {
      uVar12 = local_res8 + uVar12 * -0x30;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar12;
      uVar17 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar13 = uVar13 + uVar12 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar17 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar18 * 0x30);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar13;
  *param_1 = puVar8;
  return uVar17;
}



// FUNCTION 144c3aba0 FUN_144c3aba0 body=210 status=ok
// SIG undefined FUN_144c3aba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144c3aba0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1[2] = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMesh::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  param_1[0x12] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  param_1[0x13] = uVar1;
  uVar2 = uRam000000014c6dae84 ^ 0x80000000;
  uVar3 = uRam000000014c6dae88 ^ 0x80000000;
  uVar4 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)(param_1 + 0x14) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xa4) = uVar2;
  *(uint *)(param_1 + 0x15) = uVar3;
  *(uint *)((longlong)param_1 + 0xac) = uVar4;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 1;
  return param_1;
}



// FUNCTION 144c3ac80 FUN_144c3ac80 body=1000 status=ok
// SIG undefined FUN_144c3ac80(void)

void FUN_144c3ac80(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkaiNavMesh::vftable;
  FUN_144be90e0(0x6071fa79);
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0xc);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_144be90e0(0x7ab58a07);
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) * 0x14);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_144be90e0(0x3fab8bde);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 4);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  FUN_144be90e0(0x8c40af0e);
  lVar2 = param_1[9];
  lVar3 = (longlong)*(int *)(param_1 + 10) * 0x10 + lVar2;
  if (lVar3 != lVar2) {
    do {
      plVar1 = (longlong *)(lVar3 + -8);
      lVar3 = lVar3 + -0x10;
      if (*plVar1 != 0) {
        FUN_144b3f230();
      }
    } while (lVar3 != lVar2);
    lVar2 = param_1[9];
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (lVar2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar2,
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xb],
               (ulonglong)(*(uint *)((longlong)param_1 + 100) & 0x7fffffff) << 2);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xd],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x74) & 0x7fffffff) << 2);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  lVar2 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  FUN_144be90e0(0x6b18a8ba);
  if (param_1[0x1c] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x1b] != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xd],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x74) & 0x7fffffff) << 2);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xb],
               (ulonglong)(*(uint *)((longlong)param_1 + 100) & 0x7fffffff) << 2);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  lVar2 = param_1[9];
  lVar3 = (longlong)*(int *)(param_1 + 10) * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
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
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) * 0x14);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0xc);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144c3b070 FUN_144c3b070 body=44 status=ok
// SIG undefined FUN_144c3b070(void)

void FUN_144c3b070(longlong param_1)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x48);
  local_10 = (longlong)*(int *)(param_1 + 0x50) * 0x10 + local_18;
  FUN_144fc0090(&local_18);
  return;
}



// FUNCTION 144c3b0a0 FUN_144c3b0a0 body=242 status=ok
// SIG undefined FUN_144c3b0a0(void)

undefined4 * FUN_144c3b0a0(longlong param_1,undefined4 *param_2,undefined8 *param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  uVar8 = (ulonglong)param_4;
  uVar10 = *(int *)(param_1 + 0x40) + param_4;
  uVar7 = *(uint *)(param_1 + 0x44) & 0x7fffffff;
  if ((int)uVar7 < (int)uVar10) {
    if (uVar7 < 0x400) {
      uVar5 = *(uint *)(param_1 + 0x44) * 2;
    }
    else {
      uVar5 = ((uVar7 >> 1) + 5) * 3 & 0xfffffff0;
    }
    if ((int)uVar10 < (int)uVar5) {
      uVar10 = uVar5;
    }
    if ((int)uVar7 < (int)uVar10) {
      FUN_140c3e7da(plVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar10);
    }
  }
  iVar2 = *(int *)(param_1 + 0x40);
  iVar9 = iVar2 + param_4;
  if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar9) {
    FUN_1418055da(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
  if (0 < (int)param_4) {
    do {
      if (puVar6 != (undefined8 *)0x0) {
        uVar3 = *param_3;
        uVar4 = param_3[1];
        param_3 = param_3 + 2;
        *puVar6 = uVar3;
        puVar6[1] = uVar4;
      }
      uVar8 = uVar8 - 1;
      puVar6 = puVar6 + 2;
    } while (uVar8 != 0);
  }
  *(int *)(param_1 + 0x40) = iVar9;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144c3b1a0 FUN_144c3b1a0 body=386 status=ok
// SIG undefined FUN_144c3b1a0(void)

longlong FUN_144c3b1a0(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 != 0) {
    uVar8 = iVar1 * param_3;
    uVar7 = iVar1 * param_2 + *(int *)(param_1 + 0x70);
    uVar4 = *(uint *)(param_1 + 0x74) & 0x7fffffff;
    if ((int)uVar4 < (int)uVar7) {
      if (uVar4 < 0x400) {
        uVar2 = *(uint *)(param_1 + 0x74) * 2;
      }
      else {
        uVar2 = ((uVar4 >> 1) + 5) * 3 & 0xfffffff0;
      }
      uVar3 = uVar2;
      if (((int)uVar4 < (int)uVar8) && (uVar3 = uVar8, (int)uVar2 < (int)uVar8)) {
        uVar3 = uVar2;
      }
      uVar8 = uVar7;
      if ((int)uVar7 < (int)uVar3) {
        uVar8 = uVar3;
      }
      if ((int)uVar4 < (int)uVar8) {
        FUN_141807e20(param_1 + 0x68,&PTR_vftable_14c6e47a0,(longlong)(int)uVar8);
      }
    }
    if ((int)(*(uint *)(param_1 + 0x74) & 0x7fffffff) < (int)uVar7) {
      FUN_141807aa8(param_1 + 0x68,&PTR_vftable_14c6e47a0,(longlong)(int)uVar7);
    }
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 < (int)uVar7) {
      *(uint *)(param_1 + 0x70) = uVar7;
      if (0 < (int)(uVar7 - iVar1)) {
        uVar5 = (ulonglong)(uVar7 - iVar1);
        puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 4);
        do {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0;
          }
          uVar5 = uVar5 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar5 != 0);
      }
    }
    else if ((int)uVar7 < iVar1) {
      *(uint *)(param_1 + 0x70) = uVar7;
    }
  }
  uVar4 = *(int *)(param_1 + 0x30) + param_2;
  uVar7 = *(uint *)(param_1 + 0x34) & 0x7fffffff;
  if ((int)uVar7 < (int)uVar4) {
    if (uVar7 < 0x400) {
      uVar8 = *(uint *)(param_1 + 0x34) * 2;
    }
    else {
      uVar8 = ((uVar7 >> 1) + 5) * 3 & 0xfffffff0;
    }
    uVar2 = uVar8;
    if (((int)uVar7 < (int)param_3) && (uVar2 = param_3, (int)uVar8 < (int)param_3)) {
      uVar2 = uVar8;
    }
    if ((int)uVar4 < (int)uVar2) {
      uVar4 = uVar2;
    }
    if ((int)uVar7 < (int)uVar4) {
      FUN_144c3b850((longlong *)(param_1 + 0x28),&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + param_2;
  return *(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x14;
}



// FUNCTION 144c3b330 FUN_144c3b330 body=99 status=ok
// SIG undefined FUN_144c3b330(void)

undefined4 * FUN_144c3b330(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < param_3) {
    lVar2 = FUN_144c3b1a0(param_1,param_3 - iVar1,0xffffffff);
    if (lVar2 == 0) {
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  else {
    if (param_3 < iVar1) {
      *(int *)(param_1 + 0x30) = param_3;
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      param_3 = *(int *)(param_1 + 0x7c) * param_3;
      if ((*(int *)(param_1 + 0x70) < param_3) || (param_3 < *(int *)(param_1 + 0x70))) {
        *(int *)(param_1 + 0x70) = param_3;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144c3b3a0 FUN_144c3b3a0 body=56 status=ok
// SIG undefined FUN_144c3b3a0(void)

undefined8 FUN_144c3b3a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  FUN_144c3b440(param_2,param_1 + 0x68,uVar1,param_3,*(undefined4 *)(param_1 + 0x30),param_4);
  return param_2;
}



// FUNCTION 144c3b3e0 FUN_144c3b3e0 body=87 status=ok
// SIG undefined FUN_144c3b3e0(void)

undefined8 FUN_144c3b3e0(undefined8 param_1,ulonglong param_2)

{
  FUN_144c3ac80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 144c3b440 FUN_144c3b440 body=774 status=ok
// SIG undefined FUN_144c3b440(void)

undefined4 *
FUN_144c3b440(undefined4 *param_1,longlong *param_2,int param_3,int param_4,uint param_5,
             undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong local_50;
  undefined4 local_48;
  uint local_44;
  
  lVar7 = 0;
  if (param_4 != param_3) {
    if (param_4 == 0) {
      *(int *)(param_2 + 1) = 0;
      *param_1 = 0;
    }
    else {
      iVar8 = (int)param_2[1];
      local_50 = 0;
      local_48 = 0;
      local_44 = 0x80000000;
      if (0 < iVar8) {
        FUN_1401f86b2(&local_50,&PTR_vftable_14c6e47c0,(longlong)iVar8);
      }
      lVar6 = local_50;
      iVar8 = param_4 * param_5;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar8) {
        FUN_1401f86b2(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
      }
      if (param_3 == 0) {
        if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar8) {
          FUN_141807aa8(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        iVar1 = (int)param_2[1];
        if (iVar1 < iVar8) {
          *(int *)(param_2 + 1) = iVar8;
          if (0 < iVar8 - iVar1) {
            uVar3 = (ulonglong)(uint)(iVar8 - iVar1);
            puVar5 = (undefined4 *)(*param_2 + (longlong)iVar1 * 4);
            do {
              if (puVar5 != (undefined4 *)0x0) {
                *puVar5 = param_6;
              }
              uVar3 = uVar3 - 1;
              puVar5 = puVar5 + 1;
            } while (uVar3 != 0);
          }
        }
        else if (iVar8 < iVar1) {
          *(int *)(param_2 + 1) = iVar8;
        }
        *param_1 = 0;
      }
      else {
        if (param_2 != &local_50) {
          iVar8 = (int)param_2[1];
          lVar2 = *param_2;
          if ((int)(local_44 & 0x7fffffff) < iVar8) {
            FUN_141807e20(&local_50,&PTR_vftable_14c6e47c0,(longlong)iVar8);
            lVar6 = local_50;
          }
          FUN_144b3d470(lVar6,lVar2,(longlong)iVar8 * 4);
        }
        iVar8 = param_4 * param_5;
        if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar8) {
          FUN_141807aa8(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        iVar1 = (int)param_2[1];
        if ((iVar1 < iVar8) || (iVar8 < iVar1)) {
          *(int *)(param_2 + 1) = iVar8;
        }
        iVar8 = param_4;
        if (param_3 < param_4) {
          iVar8 = param_3;
        }
        if (0 < (int)param_5) {
          uVar3 = (ulonglong)param_5;
          lVar6 = local_50;
          do {
            lVar2 = *param_2;
            FUN_144b3d470(lVar2 + lVar7,lVar6,(longlong)iVar8 * 4);
            if (iVar8 < param_4) {
              puVar5 = (undefined4 *)(lVar2 + lVar7 + (longlong)iVar8 * 4);
              for (lVar4 = (longlong)(param_4 - iVar8); lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar5 = param_6;
                puVar5 = puVar5 + 1;
              }
            }
            lVar7 = lVar7 + (longlong)param_4 * 4;
            lVar6 = lVar6 + (longlong)param_3 * 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        *param_1 = 0;
        lVar6 = local_50;
      }
      if ((-1 < (int)local_44) && (lVar6 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,lVar6,(ulonglong)(local_44 & 0x7fffffff) << 2);
      }
    }
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144c3b750 FUN_144c3b750 body=254 status=ok
// SIG undefined FUN_144c3b750(void)

ulonglong FUN_144c3b750(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar4 * 0x14;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x14);
  uVar3 = uVar4 * 0x14 + 0x14;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x14;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x14;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x14;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar2;
  return uVar3;
}



// FUNCTION 144c3b850 FUN_144c3b850 body=163 status=ok
// SIG undefined FUN_144c3b850(void)

void FUN_144c3b850(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c3b900 FUN_144c3b900 body=163 status=ok
// SIG undefined FUN_144c3b900(void)

void FUN_144c3b900(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c3b9b0 FUN_144c3b9b0 body=42 status=ok
// SIG undefined FUN_144c3b9b0(void)

undefined8 * FUN_144c3b9b0(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshCollectionQueryMediator::vftable;
  *(undefined4 *)(param_1 + 3) = 0x3d4ccccd;
  param_1[4] = param_2;
  return param_1;
}



// FUNCTION 144c3b9e0 FUN_144c3b9e0 body=319 status=ok
// SIG undefined FUN_144c3b9e0(void)

undefined4 * FUN_144c3b9e0(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  char *local_48;
  char *local_40;
  undefined **local_38;
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_48 = "TtStreamingCollectionMediator::GCP";
    local_40 = "";
    FUN_144b3f370(lVar1,&local_48);
  }
  local_28 = *(longlong *)(param_1 + 0x20);
  local_38 = NavMeshClosestPointCollector::vftable;
  local_20 = 0xffffffff;
  local_30 = param_3;
  FUN_144fce620(*(undefined8 *)(local_28 + 0x20),param_3 + 0x30,param_3 + 0x40,&local_38,param_4);
  *param_2 = local_20;
  local_38 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if (lVar1 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar1,&local_48);
  }
  return param_2;
}



// FUNCTION 144c3bb20 FUN_144c3bb20 body=319 status=ok
// SIG undefined FUN_144c3bb20(void)

undefined4 * FUN_144c3bb20(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  char *local_48;
  char *local_40;
  undefined **local_38;
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_48 = "TtStreamingCollectionMediator::GCBoundary";
    local_40 = "";
    FUN_144b3f370(lVar1,&local_48);
  }
  local_28 = *(longlong *)(param_1 + 0x20);
  local_38 = NavMeshClosestBoundaryEdgeCollector::vftable;
  local_20 = 0xffffffff;
  local_30 = param_3;
  FUN_144fce620(*(undefined8 *)(local_28 + 0x20),param_3 + 0x30,param_3 + 0x40,&local_38,param_4);
  *param_2 = local_20;
  local_38 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if (lVar1 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar1,&local_48);
  }
  return param_2;
}



// FUNCTION 144c3bc60 FUN_144c3bc60 body=402 status=ok
// SIG undefined FUN_144c3bc60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_144c3bc60(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char *local_b8;
  char *local_b0;
  undefined **local_a8 [2];
  undefined **local_98;
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
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar1 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar1 != 0) {
    local_b8 = "TtStreamingCollectionMediator::castRay";
    local_b0 = "";
    FUN_144b3f370(lVar1,&local_b8);
  }
  local_88 = *(undefined8 *)(param_2 + 0x10);
  uStack_80 = *(undefined8 *)(param_2 + 0x18);
  local_48 = *(longlong *)(param_1 + 0x20);
  local_78 = *(undefined8 *)(param_2 + 0x20);
  uStack_70 = *(undefined8 *)(param_2 + 0x28);
  local_68 = *(undefined8 *)(param_2 + 0x30);
  uStack_60 = *(undefined8 *)(param_2 + 0x38);
  local_a8[0] = NavMeshSectionRaycaster::vftable;
  local_58 = *(undefined4 *)(param_2 + 0x40);
  uStack_54 = *(undefined4 *)(param_2 + 0x44);
  uStack_50 = *(undefined4 *)(param_2 + 0x48);
  uStack_4c = *(undefined4 *)(param_2 + 0x4c);
  local_38 = _DAT_14c6daca0;
  uStack_34 = uRam000000014c6daca4;
  uStack_30 = uRam000000014c6daca8;
  uStack_2c = uRam000000014c6dacac;
  local_98 = hkaiQueryMediator::RaycastInput::vftable;
  local_28 = 0xffffffff;
  iVar2 = FUN_144fce280(*(undefined8 *)(local_48 + 0x20),(undefined8 *)(param_2 + 0x30),
                        (undefined4 *)(param_2 + 0x40),local_a8);
  if (iVar2 != 0) {
    *param_3 = local_38;
    param_3[1] = uStack_34;
    param_3[2] = uStack_30;
    param_3[3] = uStack_2c;
    *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_24,local_28);
    *(undefined8 *)(param_3 + 6) = uStack_20;
  }
  local_a8[0] = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if (lVar1 != 0) {
    local_b8 = "Et";
    local_b0 = "";
    FUN_144b3f260(lVar1,&local_b8);
  }
  return iVar2 != 0;
}



// FUNCTION 144c3be00 FUN_144c3be00 body=426 status=ok
// SIG undefined FUN_144c3be00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_144c3be00(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char *local_c8;
  char *local_c0;
  undefined **local_b8 [2];
  undefined **local_a8;
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
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar1 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar1 != 0) {
    local_c8 = "TtStreamingCollectionMediator::castSphere";
    local_c0 = "";
    FUN_144b3f370(lVar1,&local_c8);
  }
  local_98 = *(undefined8 *)(param_2 + 0x10);
  uStack_90 = *(undefined8 *)(param_2 + 0x18);
  local_48 = *(longlong *)(param_1 + 0x20);
  local_88 = *(undefined8 *)(param_2 + 0x20);
  uStack_80 = *(undefined8 *)(param_2 + 0x28);
  local_78 = *(undefined8 *)(param_2 + 0x30);
  uStack_70 = *(undefined8 *)(param_2 + 0x38);
  local_58 = *(undefined8 *)(param_2 + 0x50);
  uStack_50 = *(undefined8 *)(param_2 + 0x58);
  local_b8[0] = NavMeshSectionSpherecaster::vftable;
  local_68 = *(undefined4 *)(param_2 + 0x40);
  uStack_64 = *(undefined4 *)(param_2 + 0x44);
  uStack_60 = *(undefined4 *)(param_2 + 0x48);
  uStack_5c = *(undefined4 *)(param_2 + 0x4c);
  local_a8 = hkaiQueryMediator::SphereCastInput::vftable;
  local_38 = _DAT_14c6daca0;
  uStack_34 = uRam000000014c6daca4;
  uStack_30 = uRam000000014c6daca8;
  uStack_2c = uRam000000014c6dacac;
  local_28 = 0xffffffff;
  iVar2 = FUN_144fce390(*(undefined8 *)(local_48 + 0x20),(undefined8 *)(param_2 + 0x30),
                        (undefined4 *)(param_2 + 0x40),(undefined8 *)(param_2 + 0x50),local_b8);
  if (iVar2 != 0) {
    *param_3 = local_38;
    param_3[1] = uStack_34;
    param_3[2] = uStack_30;
    param_3[3] = uStack_2c;
    *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_24,local_28);
    *(undefined8 *)(param_3 + 6) = uStack_20;
  }
  local_b8[0] = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if (lVar1 != 0) {
    local_c8 = "Et";
    local_c0 = "";
    FUN_144b3f260(lVar1,&local_c8);
  }
  return iVar2 != 0;
}



// FUNCTION 144c3bfb0 FUN_144c3bfb0 body=367 status=ok
// SIG undefined FUN_144c3bfb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_144c3bfb0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char *local_88;
  char *local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar1 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar1 != 0) {
    local_88 = "TtStreamingCollectionMediator::castBidirectionalRay";
    local_80 = "";
    FUN_144b3f370(lVar1,&local_88);
  }
  local_58 = *(longlong *)(param_1 + 0x20);
  local_68 = NavMeshSectionBidirectionalRaycaster::vftable;
  local_38 = 0xffffffff;
  local_78 = (*(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x30)) - *(float *)(param_2 + 0x40);
  fStack_74 = (*(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x34)) - *(float *)(param_2 + 0x44)
  ;
  fStack_70 = (*(float *)(param_2 + 0x38) + *(float *)(param_2 + 0x38)) - *(float *)(param_2 + 0x48)
  ;
  fStack_6c = (*(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x3c)) - *(float *)(param_2 + 0x4c)
  ;
  local_48 = _DAT_14c6daca0;
  uStack_44 = uRam000000014c6daca4;
  uStack_40 = uRam000000014c6daca8;
  uStack_3c = uRam000000014c6dacac;
  local_28 = _DAT_14c6daca0;
  uStack_24 = uRam000000014c6daca4;
  uStack_20 = uRam000000014c6daca8;
  uStack_1c = uRam000000014c6dacac;
  local_60 = param_2;
  iVar2 = FUN_144fce280(*(undefined8 *)(local_58 + 0x20),&local_78,(float *)(param_2 + 0x40),
                        &local_68);
  if (iVar2 != 0) {
    *param_3 = local_48;
    param_3[1] = uStack_44;
    param_3[2] = uStack_40;
    param_3[3] = uStack_3c;
    *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_34,local_38);
    *(undefined8 *)(param_3 + 6) = uStack_30;
  }
  local_68 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if (lVar1 != 0) {
    local_88 = "Et";
    local_80 = "";
    FUN_144b3f260(lVar1,&local_88);
  }
  return iVar2 != 0;
}



// FUNCTION 144c3c120 FUN_144c3c120 body=286 status=ok
// SIG undefined FUN_144c3c120(void)

void FUN_144c3c120(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char *local_48;
  char *local_40;
  undefined **local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_48 = "TtStreamingCollectionMediator::queryAabb";
    local_40 = "";
    FUN_144b3f370(lVar1,&local_48);
  }
  local_28 = *(longlong *)(param_1 + 0x20);
  local_38 = _anon_11131D6B::AabbFaceCollector::vftable;
  local_30 = param_2;
  local_20 = param_3;
  FUN_144fce4b0(*(undefined8 *)(local_28 + 0x20),param_2 + 0x30,&local_38);
  local_38 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if (lVar1 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar1,&local_48);
  }
  return;
}



// FUNCTION 144c3c240 FUN_144c3c240 body=286 status=ok
// SIG undefined FUN_144c3c240(void)

void FUN_144c3c240(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char *local_48;
  char *local_40;
  undefined **local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_48 = "TtStreamingCollectionMediator::queryAabb";
    local_40 = "";
    FUN_144b3f370(lVar1,&local_48);
  }
  local_28 = *(longlong *)(param_1 + 0x20);
  local_38 = NavMeshCollectionQueryMediatorNamespace::AabbEdgeCollector::vftable;
  local_30 = param_2;
  local_20 = param_3;
  FUN_144fce4b0(*(undefined8 *)(local_28 + 0x20),param_2 + 0x30,&local_38);
  local_38 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if (lVar1 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar1,&local_48);
  }
  return;
}



// FUNCTION 144c3c360 FUN_144c3c360 body=752 status=ok
// SIG undefined FUN_144c3c360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c3c360(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined ***pppuVar5;
  undefined ***local_res10;
  undefined **local_4d8;
  undefined ***pppuStack_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  undefined **local_4b8 [2];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  ulonglong local_478;
  ulonglong uStack_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  ulonglong local_448;
  ulonglong uStack_440;
  undefined1 *local_438;
  undefined4 local_430;
  uint local_42c;
  undefined1 local_428 [1024];
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar3 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar2;
  }
  pppuVar5 = *(undefined ****)(lVar2 + 0x3e0);
  local_4d8 = (undefined **)0x149994b68;
  pppuStack_4d0 = (undefined ***)0x149994b9c;
  local_res10 = pppuVar5;
  if (pppuVar5 != (undefined ***)0x0) {
    local_4d8 = (undefined **)0x149994b68;
    pppuStack_4d0 = (undefined ***)0x149994b9c;
    FUN_144b3f370(pppuVar5,&local_4d8);
  }
  if (*(float *)(param_2 + 0x38) < 1.0) {
    puVar1 = *(undefined4 **)(param_2 + 0x30);
    for (puVar4 = *(undefined4 **)(param_2 + 0x28); puVar4 != puVar1; puVar4 = puVar4 + 8) {
      local_4c8 = *(longlong *)(param_1 + 0x20);
      pppuStack_4d0 = local_4b8;
      local_488 = *puVar4;
      uStack_484 = puVar4[1];
      uStack_480 = puVar4[2];
      uStack_47c = puVar4[3];
      local_478 = *(ulonglong *)(puVar4 + 4);
      uStack_470 = *(ulonglong *)(puVar4 + 6);
      local_4a8 = *(undefined8 *)(param_2 + 8);
      uStack_4a0 = *(undefined8 *)(param_2 + 0x10);
      local_4b8[0] = &PTR_LAB_14aba2e30;
      local_498 = *(undefined4 *)(param_2 + 0x18);
      uStack_494 = *(undefined4 *)(param_2 + 0x1c);
      uStack_490 = *(undefined4 *)(param_2 + 0x20);
      uStack_48c = *(undefined4 *)(param_2 + 0x24);
      local_4d8 = _anon_11131D6B::AabbFaceCollector::vftable;
      local_4c0 = param_3;
      local_458 = local_488;
      uStack_454 = uStack_484;
      uStack_450 = uStack_480;
      uStack_44c = uStack_47c;
      local_448 = local_478;
      uStack_440 = uStack_470;
      FUN_144fce4b0(*(undefined8 *)(local_4c8 + 0x20),&local_458,&local_4d8);
      pppuVar5 = local_res10;
    }
  }
  else {
    FUN_144fcd2c0(&local_458);
    local_4d8 = *(undefined ***)(param_2 + 0x28);
    pppuStack_4d0 = *(undefined ****)(param_2 + 0x30);
    FUN_144fcb1d0(&local_4d8,*(undefined4 *)(param_2 + 0x38),0,&local_458);
    lVar3 = FUN_144fce650(&local_458);
    lVar2 = FUN_144fce640(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20));
    local_4a8 = *(undefined8 *)(param_2 + 8);
    uStack_4a0 = *(undefined8 *)(param_2 + 0x10);
    local_468 = *(undefined8 *)(param_1 + 0x20);
    local_498 = *(undefined4 *)(param_2 + 0x18);
    uStack_494 = *(undefined4 *)(param_2 + 0x1c);
    uStack_490 = *(undefined4 *)(param_2 + 0x20);
    uStack_48c = *(undefined4 *)(param_2 + 0x24);
    local_res10 = local_4b8;
    local_438 = local_428;
    local_42c = 0x80000080;
    local_4b8[0] = &PTR_LAB_14aba2e30;
    local_430 = 0;
    local_488 = _DAT_14c6dae80;
    uStack_484 = uRam000000014c6dae84;
    uStack_480 = uRam000000014c6dae88;
    uStack_47c = uRam000000014c6dae8c;
    local_478 = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80) ^ 0x8000000080000000;
    uStack_470 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88) ^ 0x8000000080000000;
    local_460 = param_3;
    if (*(uint *)(lVar2 + 0x18) < *(uint *)(lVar3 + 0x18)) {
      FUN_144c3cef0(0,lVar3,lVar2);
    }
    else {
      FUN_144c3d670(0,lVar2,lVar3,&local_438,&local_res10,0,0);
    }
    local_430 = 0;
    if ((-1 < (int)local_42c) && (local_438 != (undefined1 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_438,(ulonglong)(local_42c & 0x7fffffff) << 3);
    }
    FUN_144fcd490(&local_458);
  }
  if (pppuVar5 != (undefined ***)0x0) {
    local_4d8 = (undefined **)&DAT_149981764;
    pppuStack_4d0 = (undefined ***)&DAT_149981766;
    FUN_144b3f260(pppuVar5,&local_4d8);
  }
  return;
}



// FUNCTION 144c3c650 FUN_144c3c650 body=71 status=ok
// SIG undefined FUN_144c3c650(void)

undefined8 * FUN_144c3c650(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144c3c6a0 FUN_144c3c6a0 body=71 status=ok
// SIG undefined FUN_144c3c6a0(void)

undefined8 * FUN_144c3c6a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144c3c6f0 FUN_144c3c6f0 body=71 status=ok
// SIG undefined FUN_144c3c6f0(void)

undefined8 * FUN_144c3c6f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144c3c740 FUN_144c3c740 body=71 status=ok
// SIG undefined FUN_144c3c740(void)

undefined8 * FUN_144c3c740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144c3c790 FUN_144c3c790 body=305 status=ok
// SIG undefined FUN_144c3c790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144c3c790(longlong param_1,float *param_2,int param_3,undefined8 param_4,float *param_5,
                     float *param_6,undefined1 (*param_7) [16])

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  int local_res18 [2];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined **local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar1 = *(longlong *)
           ((longlong)param_3 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    plVar3 = *(longlong **)(lVar1 + 0xf0);
    auVar9 = sqrtps(in_XMM2,*param_7);
    local_18 = auVar9._0_4_ + _DAT_14c6daea0;
    fStack_14 = auVar9._4_4_ + fRam000000014c6daea4;
    fStack_10 = auVar9._8_4_ + fRam000000014c6daea8;
    fStack_c = auVar9._12_4_ + fRam000000014c6daeac;
    if (*(float *)(lVar2 + 0x40) <= local_18 && local_18 != *(float *)(lVar2 + 0x40)) {
      local_18 = *(float *)(lVar2 + 0x40);
      fStack_14 = *(float *)(lVar2 + 0x44);
      fStack_10 = *(float *)(lVar2 + 0x48);
      fStack_c = *(float *)(lVar2 + 0x4c);
    }
    local_48 = *(undefined8 *)(lVar2 + 0x10);
    uStack_40 = *(undefined8 *)(lVar2 + 0x18);
    local_38 = *(undefined4 *)(lVar2 + 0x20);
    uStack_34 = *(undefined4 *)(lVar2 + 0x24);
    uStack_30 = *(undefined4 *)(lVar2 + 0x28);
    uStack_2c = *(undefined4 *)(lVar2 + 0x2c);
    local_58[0] = &PTR_LAB_14aba2e20;
    local_28 = *(undefined8 *)(lVar2 + 0x30);
    uStack_20 = *(undefined8 *)(lVar2 + 0x38);
    local_68 = *param_5;
    fStack_64 = param_5[1];
    fStack_60 = param_5[2];
    fStack_5c = param_5[3];
    (**(code **)(*plVar3 + 0x18))(plVar3,local_res18,local_58,&local_68);
    if (local_res18[0] != -1) {
      fVar5 = (local_68 - *param_5) * (local_68 - *param_5);
      fVar6 = (fStack_64 - param_5[1]) * (fStack_64 - param_5[1]);
      fVar7 = (fStack_60 - param_5[2]) * (fStack_60 - param_5[2]);
      fVar8 = fVar6 + fVar5 + fVar7;
      if (fVar8 < *(float *)*param_7) {
        *(int *)(param_1 + 0x18) = local_res18[0];
        *param_6 = local_68;
        param_6[1] = fStack_64;
        param_6[2] = fStack_60;
        param_6[3] = fStack_5c;
      }
      *param_2 = fVar8;
      param_2[1] = fVar6 + fVar5 + fVar7;
      param_2[2] = fVar6 + fVar5 + fVar7;
      param_2[3] = fVar6 + fVar5 + fVar7;
      return param_2;
    }
  }
  uVar4 = uRam000000014c6dae88;
  *(undefined8 *)param_2 = _DAT_14c6dae80;
  *(undefined8 *)(param_2 + 2) = uVar4;
  return param_2;
}



// FUNCTION 144c3c8d0 FUN_144c3c8d0 body=71 status=ok
// SIG undefined FUN_144c3c8d0(void)

undefined8 * FUN_144c3c8d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c3c920 FUN_144c3c920 body=289 status=ok
// SIG undefined FUN_144c3c920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144c3c920(longlong param_1,float *param_2,int param_3,undefined8 param_4,
                     undefined4 *param_5,undefined4 *param_6,undefined1 (*param_7) [16])

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  int local_res18 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined **local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)
           ((longlong)param_3 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    plVar3 = *(longlong **)(lVar1 + 0xf0);
    auVar5 = sqrtps(in_XMM2,*param_7);
    local_28 = auVar5._0_4_ + _DAT_14c6daea0;
    fStack_24 = auVar5._4_4_ + fRam000000014c6daea4;
    fStack_20 = auVar5._8_4_ + fRam000000014c6daea8;
    fStack_1c = auVar5._12_4_ + fRam000000014c6daeac;
    if (*(float *)(lVar2 + 0x40) <= local_28 && local_28 != *(float *)(lVar2 + 0x40)) {
      local_28 = *(float *)(lVar2 + 0x40);
      fStack_24 = *(float *)(lVar2 + 0x44);
      fStack_20 = *(float *)(lVar2 + 0x48);
      fStack_1c = *(float *)(lVar2 + 0x4c);
    }
    local_58 = *(undefined8 *)(lVar2 + 0x10);
    uStack_50 = *(undefined8 *)(lVar2 + 0x18);
    local_48 = *(undefined8 *)(lVar2 + 0x20);
    uStack_40 = *(undefined8 *)(lVar2 + 0x28);
    local_38 = *(undefined8 *)(lVar2 + 0x30);
    uStack_30 = *(undefined8 *)(lVar2 + 0x38);
    local_68[0] = hkaiQueryMediator::GetClosestBoundaryEdgeInput::vftable;
    local_18 = *(undefined8 *)(lVar2 + 0x50);
    uStack_10 = *(undefined8 *)(lVar2 + 0x58);
    local_78 = *param_5;
    uStack_74 = param_5[1];
    uStack_70 = param_5[2];
    fStack_6c = (float)param_5[3];
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res18,local_68,&local_78);
    if (local_res18[0] != -1) {
      if (fStack_6c < *(float *)*param_7) {
        *(int *)(param_1 + 0x18) = local_res18[0];
        *param_6 = local_78;
        param_6[1] = uStack_74;
        param_6[2] = uStack_70;
        param_6[3] = fStack_6c;
      }
      *param_2 = fStack_6c;
      param_2[1] = fStack_6c;
      param_2[2] = fStack_6c;
      param_2[3] = fStack_6c;
      return param_2;
    }
  }
  uVar4 = uRam000000014c6dae88;
  *(undefined8 *)param_2 = _DAT_14c6dae80;
  *(undefined8 *)(param_2 + 2) = uVar4;
  return param_2;
}



// FUNCTION 144c3ca50 FUN_144c3ca50 body=71 status=ok
// SIG undefined FUN_144c3ca50(void)

undefined8 * FUN_144c3ca50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c3caa0 FUN_144c3caa0 body=151 status=ok
// SIG undefined FUN_144c3caa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144c3caa0(longlong param_1,int param_2,undefined8 param_3,float *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)
           ((longlong)param_2 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x38));
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0xf0);
    local_28 = _DAT_14c6daca0;
    fStack_24 = fRam000000014c6daca4;
    fStack_20 = fRam000000014c6daca8;
    fStack_1c = fRam000000014c6dacac;
    local_18 = 0xffffffff;
    cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1 + 0x10,&local_28);
    if (cVar3 != '\0') {
      if (local_28 < *param_4) {
        *param_4 = local_28;
        param_4[1] = fStack_24;
        param_4[2] = fStack_20;
        param_4[3] = fStack_1c;
        *(float *)(param_1 + 0x70) = local_28;
        *(float *)(param_1 + 0x74) = fStack_24;
        *(float *)(param_1 + 0x78) = fStack_20;
        *(float *)(param_1 + 0x7c) = fStack_1c;
        *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_14,local_18);
        *(undefined8 *)(param_1 + 0x88) = uStack_10;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144c3cb40 FUN_144c3cb40 body=71 status=ok
// SIG undefined FUN_144c3cb40(void)

undefined8 * FUN_144c3cb40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 144c3cb90 FUN_144c3cb90 body=154 status=ok
// SIG undefined FUN_144c3cb90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144c3cb90(longlong param_1,int param_2,undefined8 param_3,float *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)
           ((longlong)param_2 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x38));
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0xf0);
    local_28 = _DAT_14c6daca0;
    fStack_24 = fRam000000014c6daca4;
    fStack_20 = fRam000000014c6daca8;
    fStack_1c = fRam000000014c6dacac;
    local_18 = 0xffffffff;
    cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x10,&local_28);
    if (cVar3 != '\0') {
      if (local_28 < *param_4) {
        *param_4 = local_28;
        param_4[1] = fStack_24;
        param_4[2] = fStack_20;
        param_4[3] = fStack_1c;
        *(float *)(param_1 + 0x80) = local_28;
        *(float *)(param_1 + 0x84) = fStack_24;
        *(float *)(param_1 + 0x88) = fStack_20;
        *(float *)(param_1 + 0x8c) = fStack_1c;
        *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_14,local_18);
        *(undefined8 *)(param_1 + 0x98) = uStack_10;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144c3cc30 FUN_144c3cc30 body=71 status=ok
// SIG undefined FUN_144c3cc30(void)

undefined8 * FUN_144c3cc30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 144c3cc80 FUN_144c3cc80 body=181 status=ok
// SIG undefined FUN_144c3cc80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144c3cc80(longlong param_1,int param_2,undefined8 param_3,float *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)
           ((longlong)param_2 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0xf0);
    local_28 = _DAT_14c6daca0;
    fStack_24 = fRam000000014c6daca4;
    fStack_20 = fRam000000014c6daca8;
    fStack_1c = fRam000000014c6dacac;
    local_18 = 0xffffffff;
    cVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined8 *)(param_1 + 8),&local_28);
    fVar7 = ABS(local_28);
    if ((cVar3 != '\0') && (fVar7 < *(float *)(param_1 + 0x40))) {
      fVar4 = ABS(fStack_24) * fRam000000014c6dad94 + fRam000000014c6dad94;
      fVar5 = ABS(fStack_20) * fRam000000014c6dad98 + fRam000000014c6dad98;
      fVar6 = ABS(fStack_1c) * fRam000000014c6dad9c + fRam000000014c6dad9c;
      *param_4 = fVar7 * _DAT_14c6dad90 + _DAT_14c6dad90;
      param_4[1] = fVar4;
      param_4[2] = fVar5;
      param_4[3] = fVar6;
      *(float *)(param_1 + 0x20) = local_28;
      *(float *)(param_1 + 0x24) = fStack_24;
      *(float *)(param_1 + 0x28) = fStack_20;
      *(float *)(param_1 + 0x2c) = fStack_1c;
      *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_14,local_18);
      *(undefined8 *)(param_1 + 0x38) = uStack_10;
      *(float *)(param_1 + 0x40) = fVar7;
      *(float *)(param_1 + 0x44) = ABS(fStack_24);
      *(float *)(param_1 + 0x48) = ABS(fStack_20);
      *(float *)(param_1 + 0x4c) = ABS(fStack_1c);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144c3cd40 FUN_144c3cd40 body=71 status=ok
// SIG undefined FUN_144c3cd40(void)

undefined8 * FUN_144c3cd40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144c3cd90 FUN_144c3cd90 body=85 status=ok
// SIG undefined FUN_144c3cd90(void)

bool FUN_144c3cd90(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)
           ((longlong)param_2 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (lVar1 == 0) {
    return true;
  }
  plVar2 = *(longlong **)(lVar1 + 0xf0);
  (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18))
  ;
  return *(char *)(*(longlong *)(param_1 + 0x18) + 8) == '\0';
}



// FUNCTION 144c3cdf0 FUN_144c3cdf0 body=71 status=ok
// SIG undefined FUN_144c3cdf0(void)

undefined8 * FUN_144c3cdf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c3ce40 FUN_144c3ce40 body=85 status=ok
// SIG undefined FUN_144c3ce40(void)

bool FUN_144c3ce40(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)
           ((longlong)param_2 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (lVar1 == 0) {
    return true;
  }
  plVar2 = *(longlong **)(lVar1 + 0xf0);
  (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18))
  ;
  return *(char *)(*(longlong *)(param_1 + 0x18) + 8) == '\0';
}



// FUNCTION 144c3cea0 FUN_144c3cea0 body=71 status=ok
// SIG undefined FUN_144c3cea0(void)

undefined8 * FUN_144c3cea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c3cef0 FUN_144c3cef0 body=1911 status=ok
// SIG undefined FUN_144c3cef0(void)

void FUN_144c3cef0(char param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,float *param_6,float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
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
  uint *puVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  longlong *plVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined8 *puVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  int iVar38;
  ulonglong uVar39;
  longlong lVar40;
  uint uVar41;
  float *pfVar42;
  longlong *plVar43;
  longlong *plVar44;
  float *pfVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  uVar34 = (ulonglong)*(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 4) == 0) ||
     (uVar39 = (ulonglong)*(uint *)(param_3 + 4), *(uint *)(param_3 + 4) == 0)) {
    return;
  }
  lVar27 = param_4[1];
  if (param_6 == (float *)0x0) {
    lVar40 = (longlong)param_2 + *param_2;
    if (*param_2 == 0) {
      lVar40 = 0;
    }
    pfVar45 = (float *)(lVar40 + uVar34 * 0x30);
    fVar54 = *pfVar45;
    fVar55 = pfVar45[1];
    fVar56 = pfVar45[2];
    fVar57 = pfVar45[3];
    fVar58 = pfVar45[4];
    fVar59 = pfVar45[5];
    fVar60 = pfVar45[6];
    fVar61 = pfVar45[7];
  }
  else {
    fVar54 = *param_6;
    fVar55 = param_6[1];
    fVar56 = param_6[2];
    fVar57 = param_6[3];
    fVar58 = param_6[4];
    fVar59 = param_6[5];
    fVar60 = param_6[6];
    fVar61 = param_6[7];
    pfVar45 = *(float **)(param_6 + 8);
    uVar34 = (ulonglong)(uint)param_6[10];
  }
  if (param_7 == (float *)0x0) {
    param_7 = (float *)*param_3;
    lVar40 = (longlong)param_7 + (longlong)param_3;
    if (param_7 == (float *)0x0) {
      lVar40 = 0;
    }
    pfVar42 = (float *)(lVar40 + uVar39 * 0x30);
    fVar46 = *pfVar42;
    fVar47 = pfVar42[1];
    fVar48 = pfVar42[2];
    fVar49 = pfVar42[3];
    fVar50 = pfVar42[4];
    fVar51 = pfVar42[5];
    fVar52 = pfVar42[6];
    fVar53 = pfVar42[7];
  }
  else {
    fVar46 = *param_7;
    fVar47 = param_7[1];
    fVar48 = param_7[2];
    fVar49 = param_7[3];
    fVar50 = param_7[4];
    fVar51 = param_7[5];
    fVar52 = param_7[6];
    fVar53 = param_7[7];
    pfVar42 = *(float **)(param_7 + 8);
    uVar39 = (ulonglong)(uint)param_7[10];
  }
  if (param_1 == '\0') {
    auVar6._4_4_ = -(uint)(fVar55 <= fVar51 && fVar47 <= fVar59);
    auVar6._0_4_ = -(uint)(fVar54 <= fVar50 && fVar46 <= fVar58);
    auVar6._8_4_ = -(uint)(fVar56 <= fVar52 && fVar48 <= fVar60);
    auVar6._12_4_ = -(uint)(fVar57 <= fVar53 && fVar49 <= fVar61);
    uVar28 = movmskps((int)param_7,auVar6);
    param_7 = (float *)(ulonglong)(uVar28 & 7);
    if ((char)(uVar28 & 7) != '\a') {
      return;
    }
  }
  do {
    uVar36 = (undefined4)uVar34;
    uVar37 = (undefined4)uVar39;
    uVar30 = SUB84(param_7,0);
    if (param_1 != '\0') {
      while( true ) {
        uVar36 = (undefined4)uVar34;
        uVar37 = (undefined4)uVar39;
        uVar30 = SUB84(param_7,0);
        if (pfVar45 != pfVar42) break;
        fVar54 = pfVar45[9];
        uVar34 = (ulonglong)(uint)fVar54;
        if (fVar54 == 0.0) goto LAB_144c3d383;
        fVar55 = pfVar45[10];
        lVar40 = *param_2 + (longlong)param_2;
        if (*param_2 == 0) {
          lVar40 = 0;
        }
        pfVar45 = (float *)(uVar34 * 0x30 + lVar40);
        iVar38 = (int)param_4[1] + 1;
        pfVar42 = (float *)(lVar40 + (ulonglong)(uint)fVar55 * 0x30);
        fVar56 = *pfVar42;
        fVar57 = pfVar42[1];
        fVar58 = pfVar42[2];
        fVar59 = pfVar42[3];
        fVar46 = *pfVar45;
        fVar47 = pfVar45[1];
        fVar48 = pfVar45[2];
        fVar49 = pfVar45[3];
        fVar50 = pfVar45[4];
        fVar51 = pfVar45[5];
        fVar52 = pfVar45[6];
        fVar53 = pfVar45[7];
        pfVar42 = (float *)(lVar40 + 0x10 + (ulonglong)(uint)fVar55 * 0x30);
        fVar60 = *pfVar42;
        fVar61 = pfVar42[1];
        fVar5 = pfVar42[2];
        fVar16 = pfVar42[3];
        if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
          FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
        }
        lVar40 = param_4[1];
        *(int *)(param_4 + 1) = iVar38;
        *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(fVar55,fVar55);
        auVar11._4_4_ = -(uint)(fVar57 <= fVar51 && fVar47 <= fVar61);
        auVar11._0_4_ = -(uint)(fVar56 <= fVar50 && fVar46 <= fVar60);
        auVar11._8_4_ = -(uint)(fVar58 <= fVar52 && fVar48 <= fVar5);
        auVar11._12_4_ = -(uint)(fVar59 <= fVar53 && fVar49 <= fVar16);
        uVar28 = movmskps(fVar55,auVar11);
        param_7 = (float *)(ulonglong)(uVar28 & 7);
        if ((char)(uVar28 & 7) == '\a') {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          param_7 = (float *)CONCAT44(fVar55,fVar54);
          *(float **)(*param_4 + (longlong)(int)lVar40 * 8) = param_7;
        }
        uVar39 = (ulonglong)(uint)fVar54;
        pfVar42 = pfVar45;
        fVar54 = fVar46;
        fVar55 = fVar47;
        fVar56 = fVar48;
        fVar57 = fVar49;
        fVar58 = fVar50;
        fVar59 = fVar51;
        fVar60 = fVar52;
        fVar61 = fVar53;
      }
    }
    plVar43 = (longlong *)0x0;
    fVar5 = pfVar45[9];
    if (fVar5 == 0.0) {
      fVar46 = pfVar42[9];
      if (fVar46 == 0.0) {
        lVar40 = *param_5;
        lVar33 = *(longlong *)
                  ((longlong)(int)pfVar42[10] * 0x120 +
                  *(longlong *)(*(longlong *)(lVar40 + 0x50) + 0x38));
        if (lVar33 != 0) {
          plVar43 = *(longlong **)(lVar33 + 0xf0);
          *(float *)(lVar40 + 0x30) = fVar54;
          *(float *)(lVar40 + 0x34) = fVar55;
          *(float *)(lVar40 + 0x38) = fVar56;
          *(float *)(lVar40 + 0x3c) = fVar57;
          *(float *)(lVar40 + 0x40) = fVar58;
          *(float *)(lVar40 + 0x44) = fVar59;
          *(float *)(lVar40 + 0x48) = fVar60;
          *(float *)(lVar40 + 0x4c) = fVar61;
          (**(code **)(*plVar43 + 0x40))(plVar43,lVar40,*(undefined8 *)(lVar40 + 0x58));
        }
      }
      else {
        lVar40 = *param_3;
        plVar44 = (longlong *)(lVar40 + (longlong)param_3);
        if (lVar40 == 0) {
          plVar44 = param_3;
        }
        fVar47 = pfVar42[10];
        plVar32 = (longlong *)((longlong)param_3 + lVar40);
        if (lVar40 == 0) {
          plVar32 = plVar43;
        }
        pfVar45 = (float *)(plVar32 + (ulonglong)(uint)fVar46 * 6);
        if (lVar40 == 0) {
          plVar44 = plVar43;
        }
        pfVar42 = (float *)(plVar44 + (ulonglong)(uint)fVar47 * 6);
        pfVar1 = (float *)(plVar44 + (ulonglong)(uint)fVar47 * 6 + 2);
        auVar10._4_4_ = -(uint)(fVar55 <= pfVar45[5] && pfVar45[1] <= fVar59);
        auVar10._0_4_ = -(uint)(fVar54 <= pfVar45[4] && *pfVar45 <= fVar58);
        auVar10._8_4_ = -(uint)(fVar56 <= pfVar45[6] && pfVar45[2] <= fVar60);
        auVar10._12_4_ = -(uint)(fVar57 <= pfVar45[7] && pfVar45[3] <= fVar61);
        uVar28 = movmskps(0,auVar10);
        auVar15._4_4_ = -(uint)(fVar55 <= pfVar1[1] && pfVar42[1] <= fVar59);
        auVar15._0_4_ = -(uint)(fVar54 <= *pfVar1 && *pfVar42 <= fVar58);
        auVar15._8_4_ = -(uint)(fVar56 <= pfVar1[2] && pfVar42[2] <= fVar60);
        auVar15._12_4_ = -(uint)(fVar57 <= pfVar1[3] && pfVar42[3] <= fVar61);
        uVar30 = movmskps(uVar30,auVar15);
        if (((byte)uVar30 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(fVar47,uVar36);
        }
        if ((uVar28 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          puVar35 = (undefined8 *)(*param_4 + (longlong)(int)lVar40 * 8);
          uVar31 = CONCAT44(fVar46,uVar36);
          goto LAB_144c3d37d;
        }
      }
    }
    else {
      lVar40 = *param_2;
      plVar44 = (longlong *)(lVar40 + (longlong)param_2);
      if (lVar40 == 0) {
        plVar44 = param_2;
      }
      fVar54 = pfVar42[9];
      plVar32 = (longlong *)((longlong)param_2 + lVar40);
      if (lVar40 == 0) {
        plVar32 = plVar43;
      }
      fVar55 = pfVar45[10];
      if (lVar40 == 0) {
        plVar44 = (longlong *)0x0;
      }
      pfVar45 = (float *)(plVar32 + (ulonglong)(uint)fVar5 * 6);
      fVar56 = *pfVar45;
      fVar57 = pfVar45[1];
      fVar58 = pfVar45[2];
      fVar59 = pfVar45[3];
      pfVar45 = (float *)(plVar32 + (ulonglong)(uint)fVar5 * 6 + 2);
      fVar60 = *pfVar45;
      fVar61 = pfVar45[1];
      fVar16 = pfVar45[2];
      fVar17 = pfVar45[3];
      pfVar45 = (float *)(plVar44 + (ulonglong)(uint)fVar55 * 6);
      fVar18 = *pfVar45;
      fVar19 = pfVar45[1];
      fVar20 = pfVar45[2];
      fVar21 = pfVar45[3];
      pfVar45 = (float *)(plVar44 + (ulonglong)(uint)fVar55 * 6 + 2);
      fVar22 = *pfVar45;
      fVar23 = pfVar45[1];
      fVar24 = pfVar45[2];
      fVar25 = pfVar45[3];
      if (fVar54 == 0.0) {
        auVar13._4_4_ = -(uint)(fVar57 <= fVar51 && fVar47 <= fVar61);
        auVar13._0_4_ = -(uint)(fVar56 <= fVar50 && fVar46 <= fVar60);
        auVar13._8_4_ = -(uint)(fVar58 <= fVar52 && fVar48 <= fVar16);
        auVar13._12_4_ = -(uint)(fVar59 <= fVar53 && fVar49 <= fVar17);
        uVar28 = movmskps(0,auVar13);
        auVar9._4_4_ = -(uint)(fVar47 <= fVar23 && fVar19 <= fVar51);
        auVar9._0_4_ = -(uint)(fVar46 <= fVar22 && fVar18 <= fVar50);
        auVar9._8_4_ = -(uint)(fVar48 <= fVar24 && fVar20 <= fVar52);
        auVar9._12_4_ = -(uint)(fVar49 <= fVar25 && fVar21 <= fVar53);
        uVar30 = movmskps(uVar30,auVar9);
        if (((byte)uVar30 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(uVar37,fVar55);
        }
        if ((uVar28 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          puVar35 = (undefined8 *)(*param_4 + (longlong)(int)lVar40 * 8);
          uVar31 = CONCAT44(uVar37,fVar5);
          goto LAB_144c3d37d;
        }
      }
      else {
        lVar40 = *param_3;
        plVar43 = (longlong *)(lVar40 + (longlong)param_3);
        if (lVar40 == 0) {
          plVar43 = param_3;
        }
        lVar33 = lVar40 + (longlong)param_3;
        if (lVar40 == 0) {
          lVar33 = 0;
          plVar43 = (longlong *)0x0;
        }
        puVar26 = (uint *)((longlong)param_4 + 0xc);
        pfVar45 = (float *)(lVar33 + (ulonglong)(uint)fVar54 * 0x30);
        pfVar2 = (float *)(lVar33 + 0x10 + (ulonglong)(uint)fVar54 * 0x30);
        fVar46 = pfVar42[10];
        uVar34 = (ulonglong)(uint)fVar46;
        auVar8._4_4_ = -(uint)(pfVar45[1] <= fVar61 && fVar57 <= pfVar2[1]);
        auVar8._0_4_ = -(uint)(*pfVar45 <= fVar60 && fVar56 <= *pfVar2);
        auVar8._8_4_ = -(uint)(pfVar45[2] <= fVar16 && fVar58 <= pfVar2[2]);
        auVar8._12_4_ = -(uint)(pfVar45[3] <= fVar17 && fVar59 <= pfVar2[3]);
        uVar28 = movmskps(uVar30,auVar8);
        pfVar1 = (float *)(plVar43 + uVar34 * 6);
        pfVar3 = (float *)(plVar43 + uVar34 * 6 + 2);
        pfVar4 = (float *)(plVar43 + uVar34 * 6 + 2);
        auVar12._4_4_ = -(uint)(fVar57 <= pfVar3[1] && pfVar1[1] <= fVar61);
        auVar12._0_4_ = -(uint)(fVar56 <= *pfVar3 && *pfVar1 <= fVar60);
        auVar12._8_4_ = -(uint)(fVar58 <= pfVar3[2] && pfVar1[2] <= fVar16);
        auVar12._12_4_ = -(uint)(fVar59 <= pfVar3[3] && pfVar1[3] <= fVar17);
        uVar29 = movmskps(uVar28 & 7,auVar12);
        auVar14._4_4_ = -(uint)(fVar19 <= pfVar4[1] && pfVar1[1] <= fVar23);
        auVar14._0_4_ = -(uint)(fVar18 <= *pfVar4 && *pfVar1 <= fVar22);
        auVar14._8_4_ = -(uint)(fVar20 <= pfVar4[2] && pfVar1[2] <= fVar24);
        auVar14._12_4_ = -(uint)(fVar21 <= pfVar4[3] && pfVar1[3] <= fVar25);
        uVar30 = movmskps(uVar29 & 7,auVar14);
        auVar7._4_4_ = -(uint)(fVar19 <= pfVar2[1] && pfVar45[1] <= fVar23);
        auVar7._0_4_ = -(uint)(fVar18 <= *pfVar2 && *pfVar45 <= fVar22);
        auVar7._8_4_ = -(uint)(fVar20 <= pfVar2[2] && pfVar45[2] <= fVar24);
        auVar7._12_4_ = -(uint)(fVar21 <= pfVar2[3] && pfVar45[3] <= fVar25);
        uVar41 = movmskps((int)pfVar42,auVar7);
        if (((byte)uVar30 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*puVar26 & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(fVar46,fVar55);
        }
        if ((uVar41 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*puVar26 & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(fVar54,fVar55);
        }
        if ((uVar29 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*puVar26 & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(fVar46,fVar5);
        }
        if ((uVar28 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          puVar35 = (undefined8 *)(*param_4 + (longlong)(int)lVar40 * 8);
          uVar31 = CONCAT44(fVar54,fVar5);
LAB_144c3d37d:
          *puVar35 = uVar31;
        }
      }
    }
LAB_144c3d383:
    iVar38 = (int)param_4[1];
    if (iVar38 <= (int)lVar27) {
      return;
    }
    lVar40 = *param_4 + (longlong)iVar38 * 8;
    *(int *)(param_4 + 1) = iVar38 + -1;
    uVar34 = (ulonglong)*(uint *)(lVar40 + -8);
    uVar39 = (ulonglong)*(uint *)(lVar40 + -4);
    lVar40 = (longlong)param_2 + *param_2;
    param_7 = (float *)*param_3;
    if (*param_2 == 0) {
      lVar40 = 0;
    }
    pfVar45 = (float *)(lVar40 + uVar34 * 0x30);
    lVar40 = (longlong)param_3 + (longlong)param_7;
    if (param_7 == (float *)0x0) {
      lVar40 = 0;
    }
    fVar54 = *pfVar45;
    fVar55 = pfVar45[1];
    fVar56 = pfVar45[2];
    fVar57 = pfVar45[3];
    pfVar42 = (float *)(lVar40 + uVar39 * 0x30);
    fVar58 = pfVar45[4];
    fVar59 = pfVar45[5];
    fVar60 = pfVar45[6];
    fVar61 = pfVar45[7];
    fVar46 = *pfVar42;
    fVar47 = pfVar42[1];
    fVar48 = pfVar42[2];
    fVar49 = pfVar42[3];
    fVar50 = pfVar42[4];
    fVar51 = pfVar42[5];
    fVar52 = pfVar42[6];
    fVar53 = pfVar42[7];
  } while( true );
}



// FUNCTION 144c3d670 FUN_144c3d670 body=1910 status=ok
// SIG undefined FUN_144c3d670(void)

void FUN_144c3d670(char param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,float *param_6,float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
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
  uint *puVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  longlong *plVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined8 *puVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  int iVar38;
  ulonglong uVar39;
  longlong lVar40;
  uint uVar41;
  float *pfVar42;
  longlong *plVar43;
  longlong *plVar44;
  float *pfVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  uVar34 = (ulonglong)*(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 4) == 0) ||
     (uVar39 = (ulonglong)*(uint *)(param_3 + 4), *(uint *)(param_3 + 4) == 0)) {
    return;
  }
  lVar27 = param_4[1];
  if (param_6 == (float *)0x0) {
    lVar40 = (longlong)param_2 + *param_2;
    if (*param_2 == 0) {
      lVar40 = 0;
    }
    pfVar45 = (float *)(lVar40 + uVar34 * 0x30);
    fVar54 = *pfVar45;
    fVar55 = pfVar45[1];
    fVar56 = pfVar45[2];
    fVar57 = pfVar45[3];
    fVar58 = pfVar45[4];
    fVar59 = pfVar45[5];
    fVar60 = pfVar45[6];
    fVar61 = pfVar45[7];
  }
  else {
    fVar54 = *param_6;
    fVar55 = param_6[1];
    fVar56 = param_6[2];
    fVar57 = param_6[3];
    fVar58 = param_6[4];
    fVar59 = param_6[5];
    fVar60 = param_6[6];
    fVar61 = param_6[7];
    pfVar45 = *(float **)(param_6 + 8);
    uVar34 = (ulonglong)(uint)param_6[10];
  }
  if (param_7 == (float *)0x0) {
    param_7 = (float *)*param_3;
    lVar40 = (longlong)param_7 + (longlong)param_3;
    if (param_7 == (float *)0x0) {
      lVar40 = 0;
    }
    pfVar42 = (float *)(lVar40 + uVar39 * 0x30);
    fVar46 = *pfVar42;
    fVar47 = pfVar42[1];
    fVar48 = pfVar42[2];
    fVar49 = pfVar42[3];
    fVar50 = pfVar42[4];
    fVar51 = pfVar42[5];
    fVar52 = pfVar42[6];
    fVar53 = pfVar42[7];
  }
  else {
    fVar46 = *param_7;
    fVar47 = param_7[1];
    fVar48 = param_7[2];
    fVar49 = param_7[3];
    fVar50 = param_7[4];
    fVar51 = param_7[5];
    fVar52 = param_7[6];
    fVar53 = param_7[7];
    pfVar42 = *(float **)(param_7 + 8);
    uVar39 = (ulonglong)(uint)param_7[10];
  }
  if (param_1 == '\0') {
    auVar6._4_4_ = -(uint)(fVar55 <= fVar51 && fVar47 <= fVar59);
    auVar6._0_4_ = -(uint)(fVar54 <= fVar50 && fVar46 <= fVar58);
    auVar6._8_4_ = -(uint)(fVar56 <= fVar52 && fVar48 <= fVar60);
    auVar6._12_4_ = -(uint)(fVar57 <= fVar53 && fVar49 <= fVar61);
    uVar28 = movmskps((int)param_7,auVar6);
    param_7 = (float *)(ulonglong)(uVar28 & 7);
    if ((char)(uVar28 & 7) != '\a') {
      return;
    }
  }
  do {
    uVar36 = (undefined4)uVar34;
    uVar37 = (undefined4)uVar39;
    uVar30 = SUB84(param_7,0);
    if (param_1 != '\0') {
      while( true ) {
        uVar36 = (undefined4)uVar34;
        uVar37 = (undefined4)uVar39;
        uVar30 = SUB84(param_7,0);
        if (pfVar45 != pfVar42) break;
        fVar54 = pfVar45[9];
        uVar34 = (ulonglong)(uint)fVar54;
        if (fVar54 == 0.0) goto LAB_144c3db03;
        fVar55 = pfVar45[10];
        lVar40 = *param_2 + (longlong)param_2;
        if (*param_2 == 0) {
          lVar40 = 0;
        }
        pfVar45 = (float *)(uVar34 * 0x30 + lVar40);
        iVar38 = (int)param_4[1] + 1;
        pfVar42 = (float *)(lVar40 + (ulonglong)(uint)fVar55 * 0x30);
        fVar56 = *pfVar42;
        fVar57 = pfVar42[1];
        fVar58 = pfVar42[2];
        fVar59 = pfVar42[3];
        fVar46 = *pfVar45;
        fVar47 = pfVar45[1];
        fVar48 = pfVar45[2];
        fVar49 = pfVar45[3];
        fVar50 = pfVar45[4];
        fVar51 = pfVar45[5];
        fVar52 = pfVar45[6];
        fVar53 = pfVar45[7];
        pfVar42 = (float *)(lVar40 + 0x10 + (ulonglong)(uint)fVar55 * 0x30);
        fVar60 = *pfVar42;
        fVar61 = pfVar42[1];
        fVar5 = pfVar42[2];
        fVar16 = pfVar42[3];
        if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
          FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
        }
        lVar40 = param_4[1];
        *(int *)(param_4 + 1) = iVar38;
        *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(fVar55,fVar55);
        auVar11._4_4_ = -(uint)(fVar57 <= fVar51 && fVar47 <= fVar61);
        auVar11._0_4_ = -(uint)(fVar56 <= fVar50 && fVar46 <= fVar60);
        auVar11._8_4_ = -(uint)(fVar58 <= fVar52 && fVar48 <= fVar5);
        auVar11._12_4_ = -(uint)(fVar59 <= fVar53 && fVar49 <= fVar16);
        uVar28 = movmskps(fVar55,auVar11);
        param_7 = (float *)(ulonglong)(uVar28 & 7);
        if ((char)(uVar28 & 7) == '\a') {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          param_7 = (float *)CONCAT44(fVar55,fVar54);
          *(float **)(*param_4 + (longlong)(int)lVar40 * 8) = param_7;
        }
        uVar39 = (ulonglong)(uint)fVar54;
        pfVar42 = pfVar45;
        fVar54 = fVar46;
        fVar55 = fVar47;
        fVar56 = fVar48;
        fVar57 = fVar49;
        fVar58 = fVar50;
        fVar59 = fVar51;
        fVar60 = fVar52;
        fVar61 = fVar53;
      }
    }
    plVar43 = (longlong *)0x0;
    fVar5 = pfVar45[9];
    if (fVar5 == 0.0) {
      fVar5 = pfVar42[9];
      if (fVar5 == 0.0) {
        lVar40 = *param_5;
        lVar33 = *(longlong *)
                  ((longlong)(int)pfVar45[10] * 0x120 +
                  *(longlong *)(*(longlong *)(lVar40 + 0x50) + 0x38));
        if (lVar33 != 0) {
          plVar43 = *(longlong **)(lVar33 + 0xf0);
          *(float *)(lVar40 + 0x30) = fVar46;
          *(float *)(lVar40 + 0x34) = fVar47;
          *(float *)(lVar40 + 0x38) = fVar48;
          *(float *)(lVar40 + 0x3c) = fVar49;
          *(float *)(lVar40 + 0x40) = fVar50;
          *(float *)(lVar40 + 0x44) = fVar51;
          *(float *)(lVar40 + 0x48) = fVar52;
          *(float *)(lVar40 + 0x4c) = fVar53;
          (**(code **)(*plVar43 + 0x40))(plVar43,lVar40,*(undefined8 *)(lVar40 + 0x58));
        }
      }
      else {
        lVar40 = *param_3;
        plVar44 = (longlong *)(lVar40 + (longlong)param_3);
        if (lVar40 == 0) {
          plVar44 = param_3;
        }
        fVar46 = pfVar42[10];
        plVar32 = (longlong *)((longlong)param_3 + lVar40);
        if (lVar40 == 0) {
          plVar32 = plVar43;
        }
        pfVar45 = (float *)(plVar32 + (ulonglong)(uint)fVar5 * 6);
        if (lVar40 == 0) {
          plVar44 = plVar43;
        }
        pfVar42 = (float *)(plVar44 + (ulonglong)(uint)fVar46 * 6);
        pfVar1 = (float *)(plVar44 + (ulonglong)(uint)fVar46 * 6 + 2);
        auVar10._4_4_ = -(uint)(fVar55 <= pfVar45[5] && pfVar45[1] <= fVar59);
        auVar10._0_4_ = -(uint)(fVar54 <= pfVar45[4] && *pfVar45 <= fVar58);
        auVar10._8_4_ = -(uint)(fVar56 <= pfVar45[6] && pfVar45[2] <= fVar60);
        auVar10._12_4_ = -(uint)(fVar57 <= pfVar45[7] && pfVar45[3] <= fVar61);
        uVar28 = movmskps(0,auVar10);
        auVar15._4_4_ = -(uint)(fVar55 <= pfVar1[1] && pfVar42[1] <= fVar59);
        auVar15._0_4_ = -(uint)(fVar54 <= *pfVar1 && *pfVar42 <= fVar58);
        auVar15._8_4_ = -(uint)(fVar56 <= pfVar1[2] && pfVar42[2] <= fVar60);
        auVar15._12_4_ = -(uint)(fVar57 <= pfVar1[3] && pfVar42[3] <= fVar61);
        uVar30 = movmskps(uVar30,auVar15);
        if (((byte)uVar30 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(fVar46,uVar36);
        }
        if ((uVar28 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          puVar35 = (undefined8 *)(*param_4 + (longlong)(int)lVar40 * 8);
          uVar31 = CONCAT44(fVar5,uVar36);
          goto LAB_144c3dafd;
        }
      }
    }
    else {
      lVar40 = *param_2;
      plVar44 = (longlong *)(lVar40 + (longlong)param_2);
      if (lVar40 == 0) {
        plVar44 = param_2;
      }
      fVar54 = pfVar42[9];
      plVar32 = (longlong *)((longlong)param_2 + lVar40);
      if (lVar40 == 0) {
        plVar32 = plVar43;
      }
      fVar55 = pfVar45[10];
      if (lVar40 == 0) {
        plVar44 = (longlong *)0x0;
      }
      pfVar45 = (float *)(plVar32 + (ulonglong)(uint)fVar5 * 6);
      fVar56 = *pfVar45;
      fVar57 = pfVar45[1];
      fVar58 = pfVar45[2];
      fVar59 = pfVar45[3];
      pfVar45 = (float *)(plVar32 + (ulonglong)(uint)fVar5 * 6 + 2);
      fVar60 = *pfVar45;
      fVar61 = pfVar45[1];
      fVar16 = pfVar45[2];
      fVar17 = pfVar45[3];
      pfVar45 = (float *)(plVar44 + (ulonglong)(uint)fVar55 * 6);
      fVar18 = *pfVar45;
      fVar19 = pfVar45[1];
      fVar20 = pfVar45[2];
      fVar21 = pfVar45[3];
      pfVar45 = (float *)(plVar44 + (ulonglong)(uint)fVar55 * 6 + 2);
      fVar22 = *pfVar45;
      fVar23 = pfVar45[1];
      fVar24 = pfVar45[2];
      fVar25 = pfVar45[3];
      if (fVar54 == 0.0) {
        auVar13._4_4_ = -(uint)(fVar57 <= fVar51 && fVar47 <= fVar61);
        auVar13._0_4_ = -(uint)(fVar56 <= fVar50 && fVar46 <= fVar60);
        auVar13._8_4_ = -(uint)(fVar58 <= fVar52 && fVar48 <= fVar16);
        auVar13._12_4_ = -(uint)(fVar59 <= fVar53 && fVar49 <= fVar17);
        uVar28 = movmskps(0,auVar13);
        auVar9._4_4_ = -(uint)(fVar47 <= fVar23 && fVar19 <= fVar51);
        auVar9._0_4_ = -(uint)(fVar46 <= fVar22 && fVar18 <= fVar50);
        auVar9._8_4_ = -(uint)(fVar48 <= fVar24 && fVar20 <= fVar52);
        auVar9._12_4_ = -(uint)(fVar49 <= fVar25 && fVar21 <= fVar53);
        uVar30 = movmskps(uVar30,auVar9);
        if (((byte)uVar30 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(uVar37,fVar55);
        }
        if ((uVar28 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          puVar35 = (undefined8 *)(*param_4 + (longlong)(int)lVar40 * 8);
          uVar31 = CONCAT44(uVar37,fVar5);
          goto LAB_144c3dafd;
        }
      }
      else {
        lVar40 = *param_3;
        plVar43 = (longlong *)(lVar40 + (longlong)param_3);
        if (lVar40 == 0) {
          plVar43 = param_3;
        }
        lVar33 = lVar40 + (longlong)param_3;
        if (lVar40 == 0) {
          lVar33 = 0;
          plVar43 = (longlong *)0x0;
        }
        puVar26 = (uint *)((longlong)param_4 + 0xc);
        pfVar45 = (float *)(lVar33 + (ulonglong)(uint)fVar54 * 0x30);
        pfVar2 = (float *)(lVar33 + 0x10 + (ulonglong)(uint)fVar54 * 0x30);
        fVar46 = pfVar42[10];
        uVar34 = (ulonglong)(uint)fVar46;
        auVar8._4_4_ = -(uint)(pfVar45[1] <= fVar61 && fVar57 <= pfVar2[1]);
        auVar8._0_4_ = -(uint)(*pfVar45 <= fVar60 && fVar56 <= *pfVar2);
        auVar8._8_4_ = -(uint)(pfVar45[2] <= fVar16 && fVar58 <= pfVar2[2]);
        auVar8._12_4_ = -(uint)(pfVar45[3] <= fVar17 && fVar59 <= pfVar2[3]);
        uVar28 = movmskps(uVar30,auVar8);
        pfVar1 = (float *)(plVar43 + uVar34 * 6);
        pfVar3 = (float *)(plVar43 + uVar34 * 6 + 2);
        pfVar4 = (float *)(plVar43 + uVar34 * 6 + 2);
        auVar12._4_4_ = -(uint)(fVar57 <= pfVar3[1] && pfVar1[1] <= fVar61);
        auVar12._0_4_ = -(uint)(fVar56 <= *pfVar3 && *pfVar1 <= fVar60);
        auVar12._8_4_ = -(uint)(fVar58 <= pfVar3[2] && pfVar1[2] <= fVar16);
        auVar12._12_4_ = -(uint)(fVar59 <= pfVar3[3] && pfVar1[3] <= fVar17);
        uVar29 = movmskps(uVar28 & 7,auVar12);
        auVar14._4_4_ = -(uint)(fVar19 <= pfVar4[1] && pfVar1[1] <= fVar23);
        auVar14._0_4_ = -(uint)(fVar18 <= *pfVar4 && *pfVar1 <= fVar22);
        auVar14._8_4_ = -(uint)(fVar20 <= pfVar4[2] && pfVar1[2] <= fVar24);
        auVar14._12_4_ = -(uint)(fVar21 <= pfVar4[3] && pfVar1[3] <= fVar25);
        uVar30 = movmskps(uVar29 & 7,auVar14);
        auVar7._4_4_ = -(uint)(fVar19 <= pfVar2[1] && pfVar45[1] <= fVar23);
        auVar7._0_4_ = -(uint)(fVar18 <= *pfVar2 && *pfVar45 <= fVar22);
        auVar7._8_4_ = -(uint)(fVar20 <= pfVar2[2] && pfVar45[2] <= fVar24);
        auVar7._12_4_ = -(uint)(fVar21 <= pfVar2[3] && pfVar45[3] <= fVar25);
        uVar41 = movmskps((int)pfVar42,auVar7);
        if (((byte)uVar30 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*puVar26 & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(fVar46,fVar55);
        }
        if ((uVar41 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*puVar26 & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(fVar54,fVar55);
        }
        if ((uVar29 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*puVar26 & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          *(ulonglong *)(*param_4 + (longlong)(int)lVar40 * 8) = CONCAT44(fVar46,fVar5);
        }
        if ((uVar28 & 7) == 7) {
          iVar38 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar38) {
            FUN_144c3ddf0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          lVar40 = param_4[1];
          *(int *)(param_4 + 1) = iVar38;
          puVar35 = (undefined8 *)(*param_4 + (longlong)(int)lVar40 * 8);
          uVar31 = CONCAT44(fVar54,fVar5);
LAB_144c3dafd:
          *puVar35 = uVar31;
        }
      }
    }
LAB_144c3db03:
    iVar38 = (int)param_4[1];
    if (iVar38 <= (int)lVar27) {
      return;
    }
    lVar40 = *param_4 + (longlong)iVar38 * 8;
    *(int *)(param_4 + 1) = iVar38 + -1;
    uVar34 = (ulonglong)*(uint *)(lVar40 + -8);
    uVar39 = (ulonglong)*(uint *)(lVar40 + -4);
    lVar40 = (longlong)param_2 + *param_2;
    param_7 = (float *)*param_3;
    if (*param_2 == 0) {
      lVar40 = 0;
    }
    pfVar45 = (float *)(lVar40 + uVar34 * 0x30);
    lVar40 = (longlong)param_3 + (longlong)param_7;
    if (param_7 == (float *)0x0) {
      lVar40 = 0;
    }
    fVar54 = *pfVar45;
    fVar55 = pfVar45[1];
    fVar56 = pfVar45[2];
    fVar57 = pfVar45[3];
    pfVar42 = (float *)(lVar40 + uVar39 * 0x30);
    fVar58 = pfVar45[4];
    fVar59 = pfVar45[5];
    fVar60 = pfVar45[6];
    fVar61 = pfVar45[7];
    fVar46 = *pfVar42;
    fVar47 = pfVar42[1];
    fVar48 = pfVar42[2];
    fVar49 = pfVar42[3];
    fVar50 = pfVar42[4];
    fVar51 = pfVar42[5];
    fVar52 = pfVar42[6];
    fVar53 = pfVar42[7];
  } while( true );
}



// FUNCTION 144c3ddf0 FUN_144c3ddf0 body=269 status=ok
// SIG undefined FUN_144c3ddf0(void)

void FUN_144c3ddf0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c3df00 FUN_144c3df00 body=427 status=ok
// SIG undefined FUN_144c3df00(void)

undefined8 * FUN_144c3df00(undefined8 *param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshClearanceCache::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar8 = *(undefined4 **)(param_2 + 0x28);
  if (0 < (int)uVar3) {
    uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 2);
    param_1[5] = uVar4;
    uVar11 = (ulonglong)uVar3;
    *(uint *)(param_1 + 6) = uVar3;
    *(uint *)((longlong)param_1 + 0x34) = uVar3;
    puVar5 = (undefined4 *)param_1[5];
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
      }
      uVar11 = uVar11 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar11 != 0);
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar3 = *(uint *)(param_2 + 0x40);
  puVar9 = *(undefined1 **)(param_2 + 0x38);
  if (0 < (int)uVar3) {
    uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
    param_1[7] = uVar4;
    uVar11 = (ulonglong)uVar3;
    *(uint *)(param_1 + 8) = uVar3;
    *(uint *)((longlong)param_1 + 0x44) = uVar3;
    puVar6 = (undefined1 *)param_1[7];
    do {
      if (puVar6 != (undefined1 *)0x0) {
        uVar2 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar6 = uVar2;
      }
      uVar11 = uVar11 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar11 != 0);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  uVar3 = *(uint *)(param_2 + 0x58);
  puVar10 = *(undefined2 **)(param_2 + 0x50);
  if (0 < (int)uVar3) {
    uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 3);
    param_1[10] = uVar4;
    uVar11 = (ulonglong)uVar3;
    *(uint *)(param_1 + 0xb) = uVar3;
    *(uint *)((longlong)param_1 + 0x5c) = uVar3;
    puVar7 = (undefined2 *)param_1[10];
    do {
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = *puVar10;
        puVar1 = puVar10 + 1;
        puVar10 = (undefined2 *)((longlong)puVar10 + 3);
        *(undefined1 *)(puVar7 + 1) = *(undefined1 *)puVar1;
      }
      uVar11 = uVar11 - 1;
      puVar7 = (undefined2 *)((longlong)puVar7 + 3);
    } while (uVar11 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 144c3e0b0 FUN_144c3e0b0 body=280 status=ok
// SIG undefined FUN_144c3e0b0(void)

undefined8 * FUN_144c3e0b0(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) * 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 2);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
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



// FUNCTION 144c3e1d0 FUN_144c3e1d0 body=338 status=ok
// SIG undefined FUN_144c3e1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144c3e1d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  param_1[2] = 1;
  lVar6 = 0;
  local_res8 = 0x1f0;
  param_1[4] = 0;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_14aba2b00;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar1 = uRam000000014c6dae48;
  param_1[0xc] = _DAT_14c6dae40;
  param_1[0xd] = uVar1;
  uVar1 = uRam000000014c6dae58;
  param_1[0xe] = _DAT_14c6dae50;
  param_1[0xf] = uVar1;
  uVar1 = uRam000000014c6dae68;
  param_1[0x10] = _DAT_14c6dae60;
  param_1[0x11] = uVar1;
  uVar4 = DAT_14c6dae7c;
  uVar3 = DAT_14c6dae78;
  uVar2 = DAT_14c6dae74;
  *(undefined4 *)(param_1 + 0x12) = DAT_14c6dae70;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x13) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
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
  *(undefined1 *)(param_1 + 0x1f) = 0;
  lVar5 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar5,"hkaiNavMeshInstanceData");
  }
  if (lVar5 != 0) {
    lVar6 = FUN_144c3fd00(lVar5);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  if (param_1[4] != lVar6) {
    if (lVar6 != 0) {
      FUN_144b3d910(lVar6);
    }
    lVar5 = param_1[4];
    param_1[4] = lVar6;
    if (lVar5 != 0) {
      FUN_144b3f230();
    }
  }
  if (lVar6 != 0) {
    FUN_144b3f230(lVar6);
  }
  return param_1;
}



// FUNCTION 144c3e330 FUN_144c3e330 body=888 status=ok
// SIG undefined FUN_144c3e330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144c3e330(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong local_res8;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = &PTR_LAB_14aba2b00;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar4 = uRam000000014c6dae48;
  param_1[0xc] = _DAT_14c6dae40;
  param_1[0xd] = uVar4;
  uVar4 = uRam000000014c6dae58;
  param_1[0xe] = _DAT_14c6dae50;
  param_1[0xf] = uVar4;
  uVar4 = uRam000000014c6dae68;
  param_1[0x10] = _DAT_14c6dae60;
  param_1[0x11] = uVar4;
  uVar7 = DAT_14c6dae7c;
  uVar6 = DAT_14c6dae78;
  uVar5 = DAT_14c6dae74;
  *(undefined4 *)(param_1 + 0x12) = DAT_14c6dae70;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar5;
  *(undefined4 *)(param_1 + 0x13) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar7;
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
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  puVar9 = param_1 + 9;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_1[4] != *(longlong *)(param_2 + 0x20)) {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_144b3d910();
    }
    lVar10 = param_1[4];
    param_1[4] = *(undefined8 *)(param_2 + 0x20);
    if (lVar10 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined1 *)(param_2 + 0x30) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x17] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 200);
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x19] = uVar4;
  uVar5 = *(undefined4 *)(param_2 + 0xd4);
  uVar6 = *(undefined4 *)(param_2 + 0xd8);
  uVar7 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar5;
  *(undefined4 *)(param_1 + 0x1b) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar7;
  uVar5 = *(undefined4 *)(param_2 + 0xe4);
  uVar6 = *(undefined4 *)(param_2 + 0xe8);
  uVar7 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar5;
  *(undefined4 *)(param_1 + 0x1d) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar7;
  iVar1 = *(int *)(param_2 + 0x40);
  lVar10 = (longlong)iVar1;
  if ((int)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) < iVar1) {
    FUN_144c3f940(param_1 + 7,&PTR_vftable_14c6e47a0,lVar10);
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < iVar1) {
    lVar12 = param_1[7];
    *(int *)(param_1 + 8) = iVar1;
    for (puVar8 = (undefined8 *)(lVar12 + (longlong)iVar2 * 0x18);
        puVar8 != (undefined8 *)(lVar12 + lVar10 * 0x18); puVar8 = puVar8 + 3) {
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined1 *)(puVar8 + 2) = 0;
        *(undefined1 *)(puVar8 + 2) = 1;
      }
    }
  }
  else if (iVar1 < iVar2) {
    lVar12 = param_1[7];
    *(int *)(param_1 + 8) = iVar1;
    plVar11 = (longlong *)(lVar12 + (longlong)iVar2 * 0x18);
    while (plVar11 != (longlong *)(lVar12 + lVar10 * 0x18)) {
      lVar3 = plVar11[-2];
      plVar11 = plVar11 + -3;
      if (lVar3 != 0) {
        FUN_144be5d10(lVar3);
        (*DAT_14c787678)(0,lVar3,0);
      }
      if (*plVar11 != 0) {
        FUN_144b3f230();
      }
    }
  }
  lVar12 = 0;
  if (0 < lVar10) {
    do {
      plVar11 = (longlong *)(*(longlong *)(param_2 + 0x38) + lVar12);
      if (*plVar11 != 0) {
        plVar13 = (longlong *)(param_1[7] + lVar12);
        *(undefined1 *)(plVar13 + 2) = 0;
        if (*plVar13 != *plVar11) {
          if (*plVar11 != 0) {
            FUN_144b3d910();
          }
          lVar3 = *plVar13;
          *plVar13 = *plVar11;
          if (lVar3 != 0) {
            FUN_144b3f230();
          }
        }
        *(undefined1 *)(plVar11 + 2) = 0;
      }
      lVar12 = lVar12 + 0x18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((undefined8 *)(param_2 + 0x48) != puVar9) {
    iVar1 = *(int *)(param_2 + 0x50);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    if ((int)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) < iVar1) {
      FUN_147e4b86a(puVar9,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    FUN_144b3d470(*puVar9,uVar4,(longlong)iVar1 * 4);
    *(int *)(param_1 + 10) = iVar1;
  }
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    puVar9 = (undefined8 *)FUN_144fd5a20(*(longlong *)(param_2 + 0xf0),&local_res8,param_1);
    uVar4 = *puVar9;
    *puVar9 = 0;
    lVar10 = param_1[0x1e];
    param_1[0x1e] = uVar4;
    if (lVar10 != 0) {
      FUN_144b3f230();
    }
    if (local_res8 != 0) {
      FUN_144b3f230();
    }
  }
  return param_1;
}



// FUNCTION 144c3e6c0 FUN_144c3e6c0 body=206 status=ok
// SIG undefined FUN_144c3e6c0(void)

void FUN_144c3e6c0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = CONCAT44(local_res8._4_4_,*param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = FUN_147e4bb26(param_1 + 0x20);
  }
  FUN_144c41730(uVar2,param_2,&local_res8);
  FUN_144ca8090(*(longlong *)(param_1 + 0x20) + 400,param_1 + 0x60,param_1 + 0xc0);
  local_res8 = 0x28;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkaiNavMeshInstanceQueryMediator");
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144fd4a10(lVar1,param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144c3e790 FUN_144c3e790 body=159 status=ok
// SIG undefined FUN_144c3e790(void)

void FUN_144c3e790(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  lVar5 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if (lVar5 != 0) {
    FUN_144b3f230();
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar5 = (longlong)*(int *)(param_1 + 0x40);
  if (0 < lVar5) {
    do {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x38) + lVar4);
      if (*plVar6 != 0) {
        lVar2 = *(longlong *)(lVar4 + *(longlong *)(param_2 + 0x38));
        *(undefined8 *)(lVar4 + *(longlong *)(param_2 + 0x38)) = 0;
        lVar3 = *plVar6;
        *plVar6 = lVar2;
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
        *(undefined1 *)(plVar6 + 2) = 1;
      }
      lVar4 = lVar4 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144c3e830 FUN_144c3e830 body=62 status=ok
// SIG undefined FUN_144c3e830(void)

void FUN_144c3e830(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = FUN_147e4bb26();
  }
  FUN_144c41ed0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 144c3e870 FUN_144c3e870 body=202 status=ok
// SIG undefined FUN_144c3e870(void)

void FUN_144c3e870(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_2;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = FUN_147e4bb26();
  }
  FUN_144c41f70(uVar2,local_res8,param_3,param_4);
  plVar4 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x40) * 3;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 3) {
    if (*plVar4 != 0) {
      if ((char)plVar4[2] == '\x01') {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = FUN_144c3f6d0(plVar4);
      }
      FUN_144fd3450(lVar3,param_4);
      local_res8[0] = *param_2;
      FUN_144fd2f10(lVar3,param_1,local_res8);
    }
  }
  return;
}



// FUNCTION 144c3e940 FUN_144c3e940 body=325 status=ok
// SIG undefined FUN_144c3e940(void)

void FUN_144c3e940(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  int local_res8 [2];
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x168);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x170);
  local_res8[0] = *param_2;
  FUN_144c3f140(param_1,local_res8);
  iVar6 = *param_2;
  iVar3 = *(int *)(lVar4 + (longlong)iVar6 * 4);
  uVar9 = (ulonglong)iVar3;
  if (-1 < iVar3) {
    piVar10 = (int *)(lVar4 + uVar9 * 4);
    do {
      plVar7 = *(longlong **)(param_1 + 0x38);
      plVar1 = plVar7 + (longlong)*(int *)(param_1 + 0x40) * 3;
      for (; plVar7 != plVar1; plVar7 = plVar7 + 3) {
        if (*plVar7 != 0) {
          if ((char)plVar7[2] == '\x01') {
            lVar4 = *plVar7;
          }
          else {
            lVar4 = FUN_144c3f6d0(plVar7);
          }
          local_res8[0] = (int)uVar9;
          FUN_144fd2f10(lVar4,param_1,local_res8);
        }
      }
      iVar6 = *param_2;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      piVar10 = piVar10 + 1;
    } while (((int)uVar8 < (int)(((longlong)iVar2 << 2) >> 2)) && (*piVar10 == iVar6));
  }
  local_res8[0] = iVar6;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_144c42170(*(undefined8 *)(param_1 + 0x20),local_res8);
    return;
  }
  uVar5 = FUN_147e4bb26((undefined8 *)(param_1 + 0x20));
  FUN_144c42170(uVar5,local_res8);
  return;
}



// FUNCTION 144c3ea90 FUN_144c3ea90 body=177 status=ok
// SIG undefined FUN_144c3ea90(void)

void FUN_144c3ea90(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_2;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = FUN_147e4bb26();
  }
  FUN_144c42480(uVar2,local_res8);
  plVar4 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x40) * 3;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 3) {
    if (*plVar4 != 0) {
      if ((char)plVar4[2] == '\x01') {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = FUN_144c3f6d0(plVar4);
      }
      local_res8[0] = *param_2;
      FUN_144fd2f10(lVar3,param_1,local_res8);
    }
  }
  return;
}



// FUNCTION 144c3eb50 FUN_144c3eb50 body=166 status=ok
// SIG undefined FUN_144c3eb50(void)

undefined8 FUN_144c3eb50(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = FUN_147e4bb26();
  }
  uVar2 = FUN_144c424c0(uVar2,param_2,param_3);
  plVar4 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x40) * 3;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 3) {
    if (*plVar4 != 0) {
      if ((char)plVar4[2] == '\x01') {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = FUN_144c3f6d0(plVar4);
      }
      FUN_144fd3500(lVar3,param_3);
    }
  }
  return uVar2;
}



// FUNCTION 144c3ec00 FUN_144c3ec00 body=151 status=ok
// SIG undefined FUN_144c3ec00(void)

undefined8 FUN_144c3ec00(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = FUN_147e4bb26();
  }
  uVar2 = FUN_144c42690(uVar2,param_2);
  plVar4 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x40) * 3;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 3) {
    if (*plVar4 != 0) {
      if ((char)plVar4[2] == '\x01') {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = FUN_144c3f6d0(plVar4);
      }
      FUN_144fd3500(lVar3,param_2);
    }
  }
  return uVar2;
}



// FUNCTION 144c3eca0 FUN_144c3eca0 body=76 status=ok
// SIG undefined FUN_144c3eca0(void)

void FUN_144c3eca0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = FUN_147e4bb26();
  }
  FUN_144c428a0(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 144c3ecf0 FUN_144c3ecf0 body=78 status=ok
// SIG undefined FUN_144c3ecf0(void)

void FUN_144c3ecf0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = FUN_147e4bb26();
  }
  FUN_144c42b30(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 144c3ed40 FUN_144c3ed40 body=49 status=ok
// SIG undefined FUN_144c3ed40(void)

void FUN_144c3ed40(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_144be9220(param_1 + 0x60,*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x68) + 0x90,&local_18,
                param_2);
  return;
}



// FUNCTION 144c3ed80 FUN_144c3ed80 body=557 status=ok
// SIG undefined FUN_144c3ed80(void)

longlong FUN_144c3ed80(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res10;
  
  lVar5 = 0;
  iVar9 = *(int *)(param_2 + 4);
  lVar11 = (longlong)iVar9;
  if (*(int *)(param_1 + 0x40) <= iVar9) {
    iVar9 = iVar9 + 1;
    lVar10 = (longlong)iVar9;
    local_res10 = param_2;
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar9) {
      FUN_144c3f940(param_1 + 0x38,&PTR_vftable_14c6e47a0,lVar10);
    }
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 < iVar9) {
      lVar2 = *(longlong *)(param_1 + 0x38);
      *(int *)(param_1 + 0x40) = iVar9;
      for (puVar4 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0x18);
          puVar4 != (undefined8 *)(lVar2 + lVar10 * 0x18); puVar4 = puVar4 + 3) {
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined1 *)(puVar4 + 2) = 0;
          *(undefined1 *)(puVar4 + 2) = 1;
        }
      }
    }
    else if (iVar9 < iVar1) {
      lVar2 = *(longlong *)(param_1 + 0x38);
      *(int *)(param_1 + 0x40) = iVar9;
      plVar8 = (longlong *)(lVar2 + (longlong)iVar1 * 0x18);
      while (plVar8 != (longlong *)(lVar2 + lVar10 * 0x18)) {
        lVar3 = plVar8[-2];
        plVar8 = plVar8 + -3;
        if (lVar3 != 0) {
          FUN_144be5d10(lVar3);
          (*DAT_14c787678)(0,lVar3,0);
        }
        if (*plVar8 != 0) {
          FUN_144b3f230();
        }
      }
    }
    if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < iVar9) {
      FUN_140163394(param_1 + 0x48,&PTR_vftable_14c6e47a0,lVar10);
    }
    iVar1 = *(int *)(param_1 + 0x50);
    param_2 = local_res10;
    if (iVar1 < iVar9) {
      *(int *)(param_1 + 0x50) = iVar9;
      uVar6 = (ulonglong)(uint)(iVar9 - iVar1);
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 4);
      if (0 < iVar9 - iVar1) {
        do {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0xbaad5107;
          }
          uVar6 = uVar6 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar6 != 0);
      }
    }
    else if (iVar9 < iVar1) {
      *(int *)(param_1 + 0x50) = iVar9;
    }
  }
  local_res10 = 0x68;
  lVar10 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar10,"hkaiNavMeshClearanceCache");
  }
  if (lVar10 != 0) {
    lVar5 = FUN_144fd2b10(lVar10);
  }
  lVar10 = *(longlong *)(param_1 + 0x38);
  *(undefined1 *)(lVar10 + 0x10 + lVar11 * 0x18) = 1;
  plVar8 = (longlong *)(lVar10 + lVar11 * 0x18);
  if (lVar5 != 0) {
    FUN_144b3d910(lVar5);
  }
  lVar10 = *plVar8;
  *plVar8 = lVar5;
  if (lVar10 != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + lVar11 * 4) = *(undefined4 *)(param_2 + 8);
  if (lVar5 != 0) {
    FUN_144b3f230(lVar5);
  }
  return lVar5;
}



// FUNCTION 144c3efb0 FUN_144c3efb0 body=156 status=ok
// SIG undefined FUN_144c3efb0(void)

void FUN_144c3efb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  plVar3 = plVar1 + (longlong)*(int *)(param_1 + 0x40) * 3;
  if (plVar3 == plVar1) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    return;
  }
  do {
    lVar2 = plVar3[-2];
    plVar3 = plVar3 + -3;
    if (lVar2 != 0) {
      FUN_144be5d10(lVar2);
      (*DAT_14c787678)(0,lVar2,0);
    }
    if (*plVar3 != 0) {
      FUN_144b3f230();
    }
  } while (plVar3 != plVar1);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 144c3f050 FUN_144c3f050 body=133 status=ok
// SIG undefined FUN_144c3f050(void)

undefined1 * FUN_144c3f050(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  uVar4 = 0;
  uVar5 = 0;
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x40) * 3;
  if (plVar3 == plVar1) {
    *param_2 = 0;
  }
  else {
    do {
      if (*plVar3 != 0) {
        cVar2 = FUN_144fd4290();
        uVar5 = uVar4;
        if (cVar2 != '\0') {
          uVar4 = 1;
          uVar5 = 1;
        }
      }
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar1);
    *param_2 = uVar5;
  }
  return param_2;
}



// FUNCTION 144c3f0e0 FUN_144c3f0e0 body=87 status=ok
// SIG undefined FUN_144c3f0e0(void)

void FUN_144c3f0e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x40) * 3;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
    if (*plVar3 != 0) {
      if ((char)plVar3[2] == '\x01') {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = FUN_144c3f6d0(plVar3);
      }
      FUN_144fd40d0(lVar2);
    }
  }
  return;
}



// FUNCTION 144c3f140 FUN_144c3f140 body=129 status=ok
// SIG undefined FUN_144c3f140(void)

void FUN_144c3f140(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x40) * 3;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
    if (*plVar3 != 0) {
      if ((char)plVar3[2] == '\x01') {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = FUN_144c3f6d0(plVar3);
      }
      local_res8[0] = *param_2;
      FUN_144fd2f10(lVar2,param_1,local_res8);
    }
  }
  return;
}



// FUNCTION 144c3f1d0 FUN_144c3f1d0 body=87 status=ok
// SIG undefined FUN_144c3f1d0(void)

void FUN_144c3f1d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x40) * 3;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
    if (*plVar3 != 0) {
      if ((char)plVar3[2] == '\x01') {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = FUN_144c3f6d0(plVar3);
      }
      FUN_144fd3070(lVar2);
    }
  }
  return;
}



// FUNCTION 144c3f230 FUN_144c3f230 body=236 status=ok
// SIG undefined FUN_144c3f230(void)

void FUN_144c3f230(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  iVar1 = *(int *)(param_1 + 0x40);
  lVar8 = (longlong)iVar1;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar1) {
    FUN_144c3f830(param_2,&PTR_vftable_14c6e47c0,lVar8);
  }
  iVar2 = (int)param_2[1];
  uVar7 = 0;
  if (iVar2 < iVar1) {
    lVar3 = *param_2;
    *(int *)(param_2 + 1) = iVar1;
    for (puVar4 = (undefined4 *)(lVar3 + (longlong)iVar2 * 8);
        puVar4 != (undefined4 *)(lVar3 + lVar8 * 8); puVar4 = puVar4 + 2) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0x7fffffff;
      }
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_2 + 1) = iVar1;
  }
  uVar9 = uVar7;
  if (0 < iVar1) {
    do {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x38) + uVar9);
      if (*plVar6 != 0) {
        lVar3 = *param_2;
        if ((char)plVar6[2] == '\x01') {
          lVar5 = *plVar6;
        }
        else {
          lVar5 = FUN_144c3f6d0(plVar6);
        }
        FUN_144fd30f0(lVar5,lVar3 + (longlong)(int)uVar7 * 8);
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      lVar8 = lVar8 + -1;
      uVar9 = uVar9 + 0x18;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144c3f320 FUN_144c3f320 body=150 status=ok
// SIG undefined FUN_144c3f320(void)

void FUN_144c3f320(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  
  lVar5 = (longlong)*(int *)(param_1 + 0x40);
  uVar4 = 0;
  uVar6 = uVar4;
  if (0 < lVar5) {
    do {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x38) + uVar4);
      if (*plVar3 != 0) {
        local_res8[0] = *param_3;
        lVar1 = *param_2;
        if ((char)plVar3[2] == '\x01') {
          lVar2 = *plVar3;
        }
        else {
          lVar2 = FUN_144c3f6d0();
        }
        FUN_144fd3100(lVar2,lVar1 + (longlong)(int)uVar6 * 8,param_1,local_res8);
      }
      uVar4 = uVar4 + 0x18;
      lVar5 = lVar5 + -1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144c3f3c0 FUN_144c3f3c0 body=221 status=ok
// SIG undefined FUN_144c3f3c0(void)

void FUN_144c3f3c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  lVar5 = (longlong)*(int *)(param_1 + 0x40);
  uVar6 = uVar4;
  if (0 < lVar5) {
    do {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x38) + uVar4);
      if (*plVar3 != 0) {
        lVar1 = *param_2;
        if ((char)plVar3[2] == '\x01') {
          lVar2 = *plVar3;
        }
        else {
          lVar2 = FUN_144c3f6d0(plVar3);
        }
        FUN_144fd3210(lVar2,lVar1 + (longlong)(int)uVar6 * 8);
      }
      uVar4 = uVar4 + 0x18;
      lVar5 = lVar5 + -1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*param_2,
               (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 3);
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c3f4a0 FUN_144c3f4a0 body=140 status=ok
// SIG undefined FUN_144c3f4a0(void)

void FUN_144c3f4a0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x40) * 3;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
    if (*plVar3 != 0) {
      if ((char)plVar3[2] == '\x01') {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = FUN_144c3f6d0(plVar3);
      }
      local_res8[0] = *param_3;
      local_28 = *param_2;
      uStack_24 = param_2[1];
      uStack_20 = param_2[2];
      uStack_1c = param_2[3];
      FUN_144fd3250(lVar2,&local_28,local_res8,param_4);
    }
  }
  return;
}



// FUNCTION 144c3f530 FUN_144c3f530 body=140 status=ok
// SIG undefined FUN_144c3f530(void)

void FUN_144c3f530(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x40) * 3;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
    if (*plVar3 != 0) {
      if ((char)plVar3[2] == '\x01') {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = FUN_144c3f6d0(plVar3);
      }
      local_res8[0] = *param_3;
      local_28 = *param_2;
      uStack_24 = param_2[1];
      uStack_20 = param_2[2];
      uStack_1c = param_2[3];
      FUN_144fd3360(lVar2,&local_28,local_res8,param_4);
    }
  }
  return;
}



// FUNCTION 144c3f5c0 FUN_144c3f5c0 body=241 status=ok
// SIG undefined FUN_144c3f5c0(void)

void FUN_144c3f5c0(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = CONCAT44(local_res8._4_4_,*param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = FUN_147e4bb26(param_1 + 0x20);
  }
  FUN_144c419b0(uVar2,param_2,&local_res8);
  FUN_144ca8090(*(longlong *)(param_1 + 0x20) + 400,param_1 + 0x60,param_1 + 0xc0);
  if (*param_4 != 0) {
    local_res8 = 0x28;
    lVar1 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar1,"hkaiNavMeshInstanceQueryMediator");
    }
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_144fd4aa0(lVar1,param_1,*param_4);
    }
    lVar1 = *(longlong *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = uVar2;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  if (*param_4 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144c3f6c0 FUN_144c3f6c0 body=8 status=ok
// SIG undefined FUN_144c3f6c0(void)

void FUN_144c3f6c0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return;
}



// FUNCTION 144c3f6d0 FUN_144c3f6d0 body=340 status=ok
// SIG undefined FUN_144c3f6d0(void)

longlong FUN_144c3f6d0(longlong *param_1)

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
      local_res10 = 0x68;
      lVar4 = (*DAT_14c787670)(0,&local_res10,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar4,"hkaiNavMeshClearanceCache");
      }
      if (lVar4 != 0) {
        puVar5 = (undefined4 *)FUN_144c3df00(lVar4,lVar3);
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



// FUNCTION 144c3f830 FUN_144c3f830 body=269 status=ok
// SIG undefined FUN_144c3f830(void)

void FUN_144c3f830(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c3f940 FUN_144c3f940 body=392 status=ok
// SIG undefined FUN_144c3f940(void)

ulonglong FUN_144c3f940(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res10;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar10 * 2;
  uVar11 = param_3;
  if (param_3 < uVar8) {
    uVar11 = uVar8;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar11) && (uVar11 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar11 * 0x18,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  plVar7 = (longlong *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar5 = (undefined1 *)(lVar4 + 0x10);
    uVar9 = (ulonglong)uVar1;
    plVar6 = plVar7;
    do {
      if ((longlong *)(puVar5 + -0x10) != (longlong *)0x0) {
        *(longlong *)(puVar5 + -0x10) = *plVar6;
        *plVar6 = 0;
        *(undefined8 *)(puVar5 + -8) = 0;
        *puVar5 = 0;
        *(longlong *)(puVar5 + -8) = plVar6[1];
        *puVar5 = (char)plVar6[2];
        plVar6[1] = 0;
      }
      puVar5 = puVar5 + 0x18;
      plVar6 = plVar6 + 3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    do {
      lVar2 = plVar7[1];
      if (lVar2 != 0) {
        FUN_144be5d10(lVar2);
        (*DAT_14c787678)(0,lVar2,0);
      }
      if (*plVar7 != 0) {
        FUN_144b3f230();
      }
      plVar7 = plVar7 + 3;
      uVar8 = uVar8 - 1;
      param_2 = local_res10;
    } while (uVar8 != 0);
  }
  uVar8 = uVar11 * 0x18 + 0x18;
  uVar9 = uVar11;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar11 + 1;
    if (uVar8 <= local_res8) {
      uVar11 = local_res8 + uVar11 * -0x18;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar9 = uVar9 + uVar11 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 * 0x18);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar8;
}



// FUNCTION 144c3fad0 FUN_144c3fad0 body=439 status=ok
// SIG undefined FUN_144c3fad0(void)

void FUN_144c3fad0(longlong *param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  lVar3 = param_1[2];
  *(int *)(param_1 + 2) = param_3;
  iVar5 = param_3 + 0x1f >> 5;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
    FUN_140163394(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    param_3 = (int)param_1[2];
  }
  if (((int)param_1[1] < iVar5) || (iVar5 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar5;
  }
  if (0 < param_3) {
    param_3 = 0;
  }
  if ((param_2 < param_3) && (0 < param_3 - param_2)) {
    lVar2 = *param_1;
    iVar5 = param_3 >> 5;
    uVar4 = -1 << ((byte)param_2 & 0x1f);
    uVar8 = -1 << ((byte)param_3 & 0x1f);
    iVar7 = param_2 >> 5;
    uVar9 = -param_4;
    uVar6 = ~uVar8;
    if (iVar7 == iVar5) {
      uVar6 = uVar6 & uVar4;
      if (uVar6 != 0) {
        puVar1 = (uint *)(lVar2 + (longlong)iVar7 * 4);
        *puVar1 = ~uVar6 & *puVar1 | uVar6 & uVar9;
      }
    }
    else {
      puVar1 = (uint *)(lVar2 + (longlong)iVar7 * 4);
      *puVar1 = ~uVar4 & *puVar1 | uVar9 & uVar4;
      if (uVar6 != 0) {
        *(uint *)(lVar2 + (longlong)iVar5 * 4) =
             *(uint *)(lVar2 + (longlong)iVar5 * 4) & uVar8 | uVar6 & uVar9;
      }
      FUN_144bfb550(lVar2 + (longlong)(iVar7 + 1) * 4,-param_4,(longlong)((iVar5 - iVar7) + -1));
    }
  }
  if (param_2 < (int)lVar3) {
    param_2 = (int)lVar3;
  }
  uVar4 = (int)param_1[2] + 0x1f;
  uVar6 = uVar4 & 0xffffffe0;
  if ((param_2 < (int)uVar6) && (0 < (int)(uVar6 - param_2))) {
    lVar3 = *param_1;
    iVar7 = param_2 >> 5;
    iVar5 = (int)uVar4 >> 5;
    uVar4 = -1 << ((byte)param_2 & 0x1f);
    if (iVar7 != iVar5) {
      puVar1 = (uint *)(lVar3 + (longlong)iVar7 * 4);
      *puVar1 = ~uVar4 & *puVar1 | -param_4 & uVar4;
      FUN_144bfb550(lVar3 + (longlong)(iVar7 + 1) * 4,-param_4,(longlong)((iVar5 - iVar7) + -1));
    }
  }
  return;
}



// FUNCTION 144c3fc90 FUN_144c3fc90 body=109 status=ok
// SIG undefined FUN_144c3fc90(void)

void FUN_144c3fc90(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x14);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x14);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c3fd00 FUN_144c3fd00 body=644 status=ok
// SIG undefined FUN_144c3fd00(void)

undefined8 * FUN_144c3fd00(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkaiNavMeshInstanceData::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000000;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff80000000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[0x3a] = uVar1;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  local_res8 = 0x28;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"hkCriticalSection");
  }
  if (lVar2 != 0) {
    uVar1 = FUN_144bdde80(lVar2);
    param_1[0x3c] = uVar1;
    return param_1;
  }
  param_1[0x3c] = 0;
  return param_1;
}



// FUNCTION 144c3ff90 FUN_144c3ff90 body=2999 status=ok
// SIG undefined FUN_144c3ff90(void)

undefined8 * FUN_144c3ff90(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  int iVar23;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  
  plVar1 = param_1 + 0xe;
  param_1[2] = 1;
  puVar3 = param_1 + 0x10;
  param_1[3] = 0;
  puVar4 = param_1 + 0x12;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar5 = param_1 + 0x14;
  param_1[5] = 0;
  puVar6 = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 6) = 0;
  plVar7 = param_1 + 0x38;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  *puVar5 = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000000;
  *puVar6 = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff80000000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshInstanceData::vftable;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *plVar7 = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x80000000;
  uVar13 = FUN_144b3d480();
  param_1[0x3a] = uVar13;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  if (param_1[0xd] != *(longlong *)(param_2 + 0x68)) {
    if (*(longlong *)(param_2 + 0x68) != 0) {
      FUN_144b3d910();
    }
    lVar15 = param_1[0xd];
    param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
    if (lVar15 != 0) {
      FUN_144b3f230();
    }
  }
  FUN_144be90e0(0xa4d3dc35);
  if ((longlong *)(param_2 + 0x70) != plVar1) {
    iVar23 = *(int *)(param_2 + 0x78);
    local_res10 = (longlong)iVar23;
    local_res18 = *(longlong *)(param_2 + 0x70);
    local_res8 = CONCAT44(local_res8._4_4_,iVar23);
    if ((int)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) < iVar23) {
      FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,local_res10);
    }
    FUN_144b3d470(*plVar1,local_res18,local_res10 * 4);
    *(int *)(param_1 + 0xf) = (int)local_res8;
  }
  if ((ulonglong *)(param_2 + 0x80) != puVar3) {
    iVar23 = *(int *)(param_2 + 0x88);
    local_res8 = *(ulonglong *)(param_2 + 0x80);
    if ((int)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) < iVar23) {
      FUN_141807e20(puVar3,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar3,local_res8,(longlong)iVar23 * 4);
    *(int *)(param_1 + 0x11) = iVar23;
  }
  if ((ulonglong *)(param_2 + 0x90) != puVar4) {
    iVar23 = *(int *)(param_2 + 0x98);
    local_res8 = *(ulonglong *)(param_2 + 0x90);
    if ((int)(*(uint *)((longlong)param_1 + 0x9c) & 0x7fffffff) < iVar23) {
      FUN_141807e20(puVar4,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar4,local_res8,(longlong)iVar23 * 4);
    *(int *)(param_1 + 0x13) = iVar23;
  }
  if ((undefined8 *)(param_2 + 0xa0) != puVar5) {
    iVar23 = *(int *)(param_2 + 0xa8);
    uVar13 = *(undefined8 *)(param_2 + 0xa0);
    if ((int)(*(uint *)((longlong)param_1 + 0xac) & 0x7fffffff) < iVar23) {
      FUN_141807e20(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 * 4);
    *(int *)(param_1 + 0x15) = iVar23;
  }
  FUN_144be90e0(0xa0605297);
  puVar5 = param_1 + 0x16;
  if ((undefined8 *)(param_2 + 0xb0) != puVar5) {
    iVar23 = *(int *)(param_2 + 0xb8);
    uVar13 = *(undefined8 *)(param_2 + 0xb0);
    if ((int)(*(uint *)((longlong)param_1 + 0xbc) & 0x7fffffff) < iVar23) {
      FUN_144c3b900(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 * 0xc);
    *(int *)(param_1 + 0x17) = iVar23;
  }
  puVar5 = param_1 + 0x18;
  if ((undefined8 *)(param_2 + 0xc0) != puVar5) {
    iVar23 = *(int *)(param_2 + 200);
    uVar13 = *(undefined8 *)(param_2 + 0xc0);
    if ((int)(*(uint *)((longlong)param_1 + 0xcc) & 0x7fffffff) < iVar23) {
      FUN_144c3b850(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 * 0x14);
    *(int *)(param_1 + 0x19) = iVar23;
  }
  FUN_144be90e0(0x8fc98c46);
  puVar5 = param_1 + 0x1a;
  if ((undefined8 *)(param_2 + 0xd0) != puVar5) {
    iVar23 = *(int *)(param_2 + 0xd8);
    uVar13 = *(undefined8 *)(param_2 + 0xd0);
    if ((int)(*(uint *)((longlong)param_1 + 0xdc) & 0x7fffffff) < iVar23) {
      FUN_144c3b900(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 * 0xc);
    *(int *)(param_1 + 0x1b) = iVar23;
  }
  if (*(int *)(param_2 + 0xe8) != 0) {
    FUN_144be90e0(0x9a23900a);
    iVar23 = *(int *)(param_2 + 0xe8);
    if ((int)(*(uint *)((longlong)param_1 + 0xec) & 0x7fffffff) < iVar23) {
      FUN_144c44450(puVar6,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    if ((*(int *)(param_1 + 0x1d) < iVar23) || (iVar23 < *(int *)(param_1 + 0x1d))) {
      *(int *)(param_1 + 0x1d) = iVar23;
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    FUN_144be90e0(0xc77f090d);
    FUN_144f62750(*puVar6,*(undefined8 *)(param_2 + 0xe0),*(int *)(param_2 + 0xe8) * 0x14,
                  &local_res8);
  }
  FUN_144be90e0(0x82666d06);
  puVar5 = param_1 + 0x1e;
  if ((undefined8 *)(param_2 + 0xf0) != puVar5) {
    iVar23 = *(int *)(param_2 + 0xf8);
    uVar13 = *(undefined8 *)(param_2 + 0xf0);
    if ((int)(*(uint *)((longlong)param_1 + 0xfc) & 0x7fffffff) < iVar23) {
      FUN_140c3e7da(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 << 4);
    *(int *)(param_1 + 0x1f) = iVar23;
  }
  FUN_144be90e0(0xf5acf2e6);
  puVar5 = param_1 + 0x20;
  if ((undefined8 *)(param_2 + 0x100) != puVar5) {
    iVar23 = *(int *)(param_2 + 0x108);
    uVar13 = *(undefined8 *)(param_2 + 0x100);
    if ((int)(*(uint *)((longlong)param_1 + 0x10c) & 0x7fffffff) < iVar23) {
      FUN_144c44920(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23);
    *(int *)(param_1 + 0x21) = iVar23;
  }
  puVar5 = param_1 + 0x22;
  if ((undefined8 *)(param_2 + 0x110) != puVar5) {
    iVar23 = *(int *)(param_2 + 0x118);
    uVar13 = *(undefined8 *)(param_2 + 0x110);
    if ((int)(*(uint *)((longlong)param_1 + 0x11c) & 0x7fffffff) < iVar23) {
      FUN_144c449c0(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 * 2);
    *(int *)(param_1 + 0x23) = iVar23;
  }
  puVar5 = param_1 + 0x24;
  if ((undefined8 *)(param_2 + 0x120) != puVar5) {
    iVar23 = *(int *)(param_2 + 0x128);
    uVar13 = *(undefined8 *)(param_2 + 0x120);
    if ((int)(*(uint *)((longlong)param_1 + 300) & 0x7fffffff) < iVar23) {
      FUN_141807e20(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 * 4);
    *(int *)(param_1 + 0x25) = iVar23;
  }
  puVar5 = param_1 + 0x26;
  if ((undefined8 *)(param_2 + 0x130) != puVar5) {
    iVar23 = *(int *)(param_2 + 0x138);
    uVar13 = *(undefined8 *)(param_2 + 0x130);
    if ((int)(*(uint *)((longlong)param_1 + 0x13c) & 0x7fffffff) < iVar23) {
      FUN_141807e20(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 * 4);
    *(int *)(param_1 + 0x27) = iVar23;
  }
  puVar5 = param_1 + 0x28;
  if ((undefined8 *)(param_2 + 0x140) != puVar5) {
    iVar23 = *(int *)(param_2 + 0x148);
    uVar13 = *(undefined8 *)(param_2 + 0x140);
    if ((int)(*(uint *)((longlong)param_1 + 0x14c) & 0x7fffffff) < iVar23) {
      FUN_141807e20(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 * 4);
    *(int *)(param_1 + 0x29) = iVar23;
  }
  puVar5 = param_1 + 0x2a;
  if ((undefined8 *)(param_2 + 0x150) != puVar5) {
    iVar23 = *(int *)(param_2 + 0x158);
    uVar13 = *(undefined8 *)(param_2 + 0x150);
    if ((int)(*(uint *)((longlong)param_1 + 0x15c) & 0x7fffffff) < iVar23) {
      FUN_141807e20(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 * 4);
    *(int *)(param_1 + 0x2b) = iVar23;
  }
  puVar5 = param_1 + 0x2d;
  if ((undefined8 *)(param_2 + 0x168) != puVar5) {
    iVar23 = *(int *)(param_2 + 0x170);
    uVar13 = *(undefined8 *)(param_2 + 0x168);
    if ((int)(*(uint *)((longlong)param_1 + 0x174) & 0x7fffffff) < iVar23) {
      FUN_141807e20(puVar5,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    FUN_144b3d470(*puVar5,uVar13,(longlong)iVar23 * 4);
    *(int *)(param_1 + 0x2e) = iVar23;
  }
  FUN_144be90e0(0x8d79c543);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x180);
  uVar13 = *(undefined8 *)(param_2 + 0x198);
  param_1[0x32] = *(undefined8 *)(param_2 + 400);
  param_1[0x33] = uVar13;
  uVar10 = *(undefined4 *)(param_2 + 0x1a4);
  uVar11 = *(undefined4 *)(param_2 + 0x1a8);
  uVar12 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar10;
  *(undefined4 *)(param_1 + 0x35) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar12;
  uVar10 = *(undefined4 *)(param_2 + 0x1b4);
  uVar11 = *(undefined4 *)(param_2 + 0x1b8);
  uVar12 = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar10;
  *(undefined4 *)(param_1 + 0x37) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar12;
  FUN_144be90e0(0xd1514cec);
  if (plVar7 != (longlong *)(param_2 + 0x1c0)) {
    iVar23 = *(int *)(param_2 + 0x1c8);
    lVar15 = *(longlong *)(param_2 + 0x1c0);
    local_res8 = CONCAT44(local_res8._4_4_,iVar23);
    if ((int)(*(uint *)((longlong)param_1 + 0x1cc) & 0x7fffffff) < iVar23) {
      FUN_144c44b00(plVar7,&PTR_vftable_14c6e47a0,(longlong)iVar23);
    }
    if (iVar23 < *(int *)(param_1 + 0x39)) {
      lVar14 = *plVar7;
      for (lVar18 = (longlong)*(int *)(param_1 + 0x39) * 0x38 + *plVar7;
          lVar18 != (longlong)iVar23 * 0x38 + lVar14; lVar18 = lVar18 + -0x38) {
        FUN_144c432b0(lVar18 + -0x30);
      }
    }
    lVar14 = *plVar7;
    iVar17 = iVar23;
    if (*(int *)(param_1 + 0x39) < iVar23) {
      iVar17 = *(int *)(param_1 + 0x39);
    }
    local_res10 = CONCAT44(local_res10._4_4_,iVar17);
    if ((lVar14 != lVar15) && (lVar18 = (longlong)iVar17, 0 < iVar17)) {
      puVar19 = (uint *)(lVar14 + 0x24);
      lVar14 = lVar15 - lVar14;
      local_res20 = lVar14 + -4;
      lVar16 = lVar14 + 4;
      local_res18 = lVar16;
      do {
        puVar2 = puVar19 + -7;
        puVar19[-9] = *(uint *)(lVar14 + -0x24 + (longlong)puVar19);
        puVar8 = (uint *)(lVar14 + -0x1c + (longlong)puVar19);
        if (puVar8 != puVar2) {
          uVar13 = *(undefined8 *)puVar8;
          uVar9 = *(uint *)(lVar14 + -0x14 + (longlong)puVar19);
          if ((int)(puVar19[-4] & 0x7fffffff) < (int)uVar9) {
            FUN_144c3b850(puVar2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar9);
          }
          FUN_144b3d470(*(undefined8 *)puVar2,uVar13,(longlong)(int)uVar9 * 0x14);
          puVar19[-5] = uVar9;
          lVar16 = local_res18;
        }
        puVar8 = (uint *)((longlong)puVar19 + lVar14 + -0xc);
        puVar2 = puVar19 + -3;
        if (puVar8 != puVar2) {
          uVar13 = *(undefined8 *)puVar8;
          uVar9 = *(uint *)(local_res20 + (longlong)puVar19);
          if ((int)(*puVar19 & 0x7fffffff) < (int)uVar9) {
            FUN_141807e20(puVar2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar9);
          }
          FUN_144b3d470(*(undefined8 *)puVar2,uVar13,(longlong)(int)uVar9 * 4);
          puVar19[-1] = uVar9;
          lVar16 = local_res18;
        }
        puVar2 = puVar19 + 1;
        if ((uint *)(lVar16 + (longlong)puVar19) != puVar2) {
          uVar13 = *(undefined8 *)(lVar16 + (longlong)puVar19);
          uVar9 = *(uint *)(lVar14 + 0xc + (longlong)puVar19);
          if ((int)(puVar19[4] & 0x7fffffff) < (int)uVar9) {
            FUN_144c44f20(puVar2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar9);
          }
          FUN_144b3d470(*(undefined8 *)puVar2,uVar13,(longlong)(int)uVar9 * 4);
          puVar19[3] = uVar9;
          lVar16 = local_res18;
        }
        puVar19 = puVar19 + 0xe;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      iVar17 = (int)local_res10;
      iVar23 = (int)local_res8;
    }
    puVar20 = (undefined4 *)(lVar15 + (longlong)iVar17 * 0x38);
    if (0 < iVar23 - iVar17) {
      uVar21 = (ulonglong)(uint)(iVar23 - iVar17);
      puVar22 = (undefined4 *)(param_1[0x38] + (longlong)iVar17 * 0x38);
      do {
        if (puVar22 != (undefined4 *)0x0) {
          *puVar22 = *puVar20;
          FUN_144c43380(puVar22 + 2,puVar20 + 2);
          puVar20 = puVar20 + 0xe;
        }
        uVar21 = uVar21 - 1;
        puVar22 = puVar22 + 0xe;
      } while (uVar21 != 0);
    }
    *(int *)(param_1 + 0x39) = iVar23;
    FUN_140069e50(param_1 + 0x3a,param_2 + 0x1d0);
  }
  local_res8 = 0x28;
  lVar15 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar15,"hkCriticalSection");
  }
  if (lVar15 == 0) {
    param_1[0x3c] = 0;
  }
  else {
    uVar13 = FUN_144bdde80(lVar15);
    param_1[0x3c] = uVar13;
  }
  return param_1;
}



// FUNCTION 144c40b50 FUN_144c40b50 body=2795 status=ok
// SIG undefined FUN_144c40b50(void)

void FUN_144c40b50(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkaiNavMeshInstanceData::vftable;
  lVar1 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  FUN_144be90e0(0xb549ca98);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xe],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) << 2);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) << 2);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x12],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x9c) & 0x7fffffff) << 2);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x14],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xac) & 0x7fffffff) << 2);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  FUN_144be90e0(0xd0cd3ff6);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x16],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xbc) & 0x7fffffff) * 0xc);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x18],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xcc) & 0x7fffffff) * 0x14);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1a],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xdc) & 0x7fffffff) * 0xc);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1c],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xec) & 0x7fffffff) * 0x14);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  FUN_144be90e0(0x963d8ef2);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1e],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xfc) & 0x7fffffff) << 4);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x20],
               *(uint *)((longlong)param_1 + 0x10c) & 0x7fffffff);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < *(int *)((longlong)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x22],*(int *)((longlong)param_1 + 0x11c) * 2);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x24],
               (ulonglong)(*(uint *)((longlong)param_1 + 300) & 0x7fffffff) << 2);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  FUN_144be90e0(0x3f177a37);
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x26],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x13c) & 0x7fffffff) << 2);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14c)) && (param_1[0x28] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x28],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14c) & 0x7fffffff) << 2);
  }
  param_1[0x28] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x15c)) && (param_1[0x2a] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x2a],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x15c) & 0x7fffffff) << 2);
  }
  param_1[0x2a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000000;
  FUN_144be90e0(0x8cc6118d);
  lVar1 = param_1[0x38];
  lVar2 = (longlong)*(int *)(param_1 + 0x39) * 0x38 + lVar1;
  if (lVar2 != lVar1) {
    do {
      lVar3 = lVar2 + -0x38;
      FUN_144c432b0(lVar2 + -0x30);
      lVar2 = lVar3;
    } while (lVar3 != lVar1);
    lVar1 = param_1[0x38];
  }
  *(undefined4 *)(param_1 + 0x39) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1cc)) && (lVar1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1cc) & 0x7fffffff) * 0x38);
  }
  param_1[0x38] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x80000000;
  lVar1 = param_1[0x3a];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 0x3a);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0x3c];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    (*DAT_14c787678)(0,lpCriticalSection,0);
  }
  FUN_144be90e0(0xeee7442);
  lVar1 = param_1[0x3a];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 0x3a);
  }
  lVar1 = param_1[0x38];
  for (lVar2 = (longlong)*(int *)(param_1 + 0x39) * 0x38 + lVar1; lVar2 != lVar1;
      lVar2 = lVar2 + -0x38) {
    FUN_144c432b0(lVar2 + -0x30);
  }
  *(undefined4 *)(param_1 + 0x39) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1cc)) && (param_1[0x38] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x38],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1cc) & 0x7fffffff) * 0x38);
  }
  param_1[0x38] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x174)) && (param_1[0x2d] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x2d],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x174) & 0x7fffffff) << 2);
  }
  param_1[0x2d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x15c)) && (param_1[0x2a] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x2a],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x15c) & 0x7fffffff) << 2);
  }
  param_1[0x2a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14c)) && (param_1[0x28] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x28],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14c) & 0x7fffffff) << 2);
  }
  param_1[0x28] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x26],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x13c) & 0x7fffffff) << 2);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x24],
               (ulonglong)(*(uint *)((longlong)param_1 + 300) & 0x7fffffff) << 2);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < *(int *)((longlong)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x22],*(int *)((longlong)param_1 + 0x11c) * 2);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x20],
               *(uint *)((longlong)param_1 + 0x10c) & 0x7fffffff);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1e],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xfc) & 0x7fffffff) << 4);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1c],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xec) & 0x7fffffff) * 0x14);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1a],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xdc) & 0x7fffffff) * 0xc);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x18],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xcc) & 0x7fffffff) * 0x14);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x16],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xbc) & 0x7fffffff) * 0xc);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x14],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xac) & 0x7fffffff) << 2);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x12],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x9c) & 0x7fffffff) << 2);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) << 2);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xe],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) << 2);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  if (param_1[0xd] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144c41640 FUN_144c41640 body=225 status=ok
// SIG undefined FUN_144c41640(void)

void FUN_144c41640(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar1 + 0x58);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar1 + 0x78);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x68);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar1 + 0x7c);
    FUN_144ca7fc0(param_1 + 400,lVar1 + 0xc0);
  }
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    local_res8 = 0x28;
    lVar1 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar1,"hkCriticalSection");
    }
    if (lVar1 != 0) {
      uVar2 = FUN_144bdde80(lVar1);
      *(undefined8 *)(param_1 + 0x1e0) = uVar2;
      return;
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 144c41730 FUN_144c41730 body=632 status=ok
// SIG undefined FUN_144c41730(void)

void FUN_144c41730(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)(param_1 + 0x178) = *param_3;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  lVar3 = *(longlong *)(param_1 + 0x68);
  *(longlong *)(param_1 + 0x68) = param_2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  FUN_144ca7fc0(param_1 + 400,*(longlong *)(param_1 + 0x68) + 0xc0);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) < iVar1) {
    FUN_141807aa8((longlong *)(param_1 + 0x90),&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x98) = iVar1;
    if (0 < iVar1 - iVar2) {
      uVar5 = (ulonglong)(uint)(iVar1 - iVar2);
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar2 * 4);
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xffffffff;
        }
        uVar5 = uVar5 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x98) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) < iVar1) {
    FUN_141807aa8(param_1 + 0x70,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x78) = iVar1;
    if (0 < iVar1 - iVar2) {
      uVar5 = (ulonglong)(uint)(iVar1 - iVar2);
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 4);
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xffffffff;
        }
        uVar5 = uVar5 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x78) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar1) {
    FUN_144c44560((longlong *)(param_1 + 0x100),&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = *(int *)(param_1 + 0x108);
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x108) = iVar1;
    if (0 < iVar1 - iVar2) {
      uVar5 = (ulonglong)(uint)(iVar1 - iVar2);
      puVar4 = (undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x100));
      do {
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = 0;
        }
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x108) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((int)(*(uint *)(param_1 + 0x174) & 0x7fffffff) < iVar1) {
    FUN_141807aa8((longlong *)(param_1 + 0x168),&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = *(int *)(param_1 + 0x170);
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x170) = iVar1;
    if (0 < iVar1 - iVar2) {
      uVar5 = (ulonglong)(uint)(iVar1 - iVar2);
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 4);
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xffffffff;
        }
        uVar5 = uVar5 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x170) = iVar1;
  }
  return;
}



// FUNCTION 144c419b0 FUN_144c419b0 body=430 status=ok
// SIG undefined FUN_144c419b0(void)

void FUN_144c419b0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x178) = *param_3;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  *(longlong *)(param_1 + 0x68) = param_2;
  if (lVar4 != 0) {
    FUN_144b3f230();
  }
  FUN_144ca7fc0(param_1 + 400,*(longlong *)(param_1 + 0x68) + 0xc0);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x160) = 0;
  uVar2 = *(uint *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(uint *)(param_1 + 200) = uVar2;
  *(uint *)(param_1 + 0xcc) = uVar2 | 0x80000000;
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar2 = *(uint *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(uint *)(param_1 + 0xb8) = uVar2;
  *(uint *)(param_1 + 0xbc) = uVar2 | 0x80000000;
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  uVar2 = *(uint *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  *(uint *)(param_1 + 0x138) = uVar2;
  *(undefined8 *)(param_1 + 0x130) = uVar5;
  *(uint *)(param_1 + 0x13c) = uVar2 | 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x58);
  *(uint *)(param_1 + 0x128) = uVar2;
  *(uint *)(param_1 + 300) = uVar2 | 0x80000000;
  if ((int)(*(uint *)(param_1 + 0x174) & 0x7fffffff) < iVar1) {
    FUN_141807aa8((longlong *)(param_1 + 0x168),&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar3 = *(int *)(param_1 + 0x170);
  if (iVar3 < iVar1) {
    *(int *)(param_1 + 0x170) = iVar1;
    uVar7 = (ulonglong)(uint)(iVar1 - iVar3);
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 4);
    if (0 < iVar1 - iVar3) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xffffffff;
        }
        uVar7 = uVar7 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      return;
    }
  }
  else if (iVar1 < iVar3) {
    *(int *)(param_1 + 0x170) = iVar1;
  }
  return;
}



// FUNCTION 144c41b60 FUN_144c41b60 body=74 status=ok
// SIG undefined FUN_144c41b60(void)

void FUN_144c41b60(longlong param_1,undefined4 *param_2)

{
  FUN_144c43e70(*(undefined8 *)(param_1 + 0x28),param_1 + 0xc0,*(undefined8 *)(param_1 + 0x58),
                param_1 + 0x130,param_1 + 0x70,param_1 + 0x80,*param_2,
                *(undefined4 *)(param_1 + 0x60));
  return;
}



// FUNCTION 144c41bb0 FUN_144c41bb0 body=414 status=ok
// SIG undefined FUN_144c41bb0(void)

void FUN_144c41bb0(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)*param_2 * 4);
    iVar6 = *(int *)(param_1 + 200) + -1;
    if (iVar5 != iVar6) {
      lVar1 = (longlong)*(int *)(param_1 + 200) + -1;
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0xc0) + lVar1 * 0x14);
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar5 * 0x14);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar2 + 4);
      *(undefined1 *)((longlong)puVar3 + 0x11) = *(undefined1 *)((longlong)puVar2 + 0x11);
      *(undefined2 *)((longlong)puVar3 + 0x12) = *(undefined2 *)((longlong)puVar2 + 0x12);
      iVar4 = *(int *)(param_1 + 0x60);
      FUN_144b3d470(*(longlong *)(param_1 + 0x130) + (longlong)(iVar4 * iVar5) * 4,
                    *(longlong *)(param_1 + 0x130) + (longlong)(iVar4 * iVar6) * 4,
                    (longlong)iVar4 << 2);
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x80) + lVar1 * 4);
      *(int *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar5 * 4) = iVar6;
      *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 4) = iVar5;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)*param_2 * 4) = 0xffffffff;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
    iVar5 = *(int *)(param_1 + 200) + -1;
    if ((int)(*(uint *)(param_1 + 0xcc) & 0x7fffffff) < iVar5) {
      FUN_144c44450(param_1 + 0xc0,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    if ((*(int *)(param_1 + 200) < iVar5) || (iVar5 < *(int *)(param_1 + 200))) {
      *(int *)(param_1 + 200) = iVar5;
    }
    iVar5 = iVar5 * *(int *)(param_1 + 0x60);
    if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar5) {
      FUN_141807aa8(param_1 + 0x130,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    if ((*(int *)(param_1 + 0x138) < iVar5) || (iVar5 < *(int *)(param_1 + 0x138))) {
      *(int *)(param_1 + 0x138) = iVar5;
    }
  }
  return;
}



// FUNCTION 144c41d50 FUN_144c41d50 body=376 status=ok
// SIG undefined FUN_144c41d50(void)

void FUN_144c41d50(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 local_18 [2];
  
  iVar7 = *param_2;
  lVar5 = (longlong)iVar7;
  if (iVar7 < *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar5 * 4);
    }
    if (iVar7 == -1) {
      lVar6 = *(longlong *)(param_1 + 0x18);
      lVar5 = lVar5 * 3;
    }
    else {
      lVar5 = (longlong)iVar7 * 3;
      lVar6 = *(longlong *)(param_1 + 0xb0);
    }
  }
  else {
    lVar5 = (longlong)(iVar7 - *(int *)(param_1 + 0x20)) * 3;
    lVar6 = *(longlong *)(param_1 + 0xd0);
  }
  lVar1 = lVar6 + lVar5 * 4;
  *param_3 = *(undefined4 *)(lVar6 + lVar5 * 4);
  param_3[1] = *(undefined4 *)(lVar1 + 4);
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(lVar1 + 8);
  *(undefined2 *)((longlong)param_3 + 10) = *(undefined2 *)(lVar1 + 10);
  if (*(int *)(param_1 + 0x108) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)((longlong)*param_2 + *(longlong *)(param_1 + 0x100));
  }
  *(undefined1 *)(param_3 + 3) = uVar3;
  iVar7 = *param_2;
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar7 < *(int *)(param_1 + 0x20)) {
    iVar4 = iVar7;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar7 * 4);
    }
    if (iVar4 == -1) {
      lVar6 = *(longlong *)(param_1 + 0x48) + (longlong)(iVar7 * iVar2) * 4;
      lVar5 = lVar6 + (longlong)iVar2 * 4;
      goto LAB_144c41e63;
    }
    lVar6 = *(longlong *)(param_1 + 0x120);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x140);
    iVar4 = iVar7 - *(int *)(param_1 + 0x20);
  }
  lVar5 = lVar6 + ((longlong)(iVar4 * iVar2) + (longlong)iVar2) * 4;
  lVar6 = lVar6 + (longlong)(iVar4 * iVar2) * 4;
LAB_144c41e63:
  puVar8 = (undefined8 *)(param_3 + 4);
  if (local_18 != puVar8) {
    iVar7 = (int)(lVar5 - lVar6 >> 2);
    if ((int)(param_3[7] & 0x7fffffff) < iVar7) {
      FUN_141807e20(puVar8,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    FUN_144b3d470(*puVar8,lVar6,(longlong)iVar7 * 4);
    param_3[6] = iVar7;
  }
  return;
}



// FUNCTION 144c41ed0 FUN_144c41ed0 body=154 status=ok
// SIG undefined FUN_144c41ed0(void)

void FUN_144c41ed0(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = (ulonglong)param_3;
  iVar1 = *(int *)(param_1 + 0xf8);
  iVar6 = iVar1 + param_3;
  if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < iVar6) {
    FUN_1418055da((longlong *)(param_1 + 0xf0),&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xf0));
  if (0 < (int)param_3) {
    do {
      if (puVar4 != (undefined8 *)0x0) {
        uVar2 = *param_2;
        uVar3 = param_2[1];
        param_2 = param_2 + 2;
        *puVar4 = uVar2;
        puVar4[1] = uVar3;
      }
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 2;
    } while (uVar5 != 0);
  }
  *(int *)(param_1 + 0xf8) = iVar6;
  return;
}



// FUNCTION 144c41f70 FUN_144c41f70 body=508 status=ok
// SIG undefined FUN_144c41f70(void)

void FUN_144c41f70(longlong param_1,int *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong lVar15;
  
  iVar3 = *(int *)(param_1 + 0x50);
  plVar1 = (longlong *)(param_1 + 0x100);
  iVar4 = *(int *)(param_1 + 0x108);
  iVar11 = iVar4 + param_4;
  if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar11) {
    FUN_144c44560(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  *(int *)(param_1 + 0x108) = iVar11;
  lVar5 = *plVar1;
  iVar11 = *(int *)(param_1 + 0x148);
  iVar12 = iVar3 * param_4 + iVar11;
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar12) {
    FUN_141807aa8(param_1 + 0x140,&PTR_vftable_14c6e47a0,(longlong)iVar12);
  }
  *(int *)(param_1 + 0x148) = iVar12;
  iVar12 = *(int *)(param_1 + 0xd8);
  lVar15 = *(longlong *)(param_1 + 0x140) + (longlong)iVar11 * 4;
  iVar11 = iVar12 + param_4;
  if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar11) {
    FUN_144c44340(param_1 + 0xd0,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  lVar9 = *(longlong *)(param_1 + 0xd0);
  *(int *)(param_1 + 0xd8) = iVar11;
  if (*(int *)(param_1 + 0x108) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = *(byte *)((longlong)*param_2 + *plVar1);
  }
  plVar2 = (longlong *)(param_1 + 0x168);
  *(byte *)((longlong)*param_2 + *plVar1) = bVar7 | 1;
  *(undefined4 *)(*plVar2 + (longlong)*param_2 * 4) = *(undefined4 *)(param_1 + 0x170);
  iVar11 = *(int *)(param_1 + 0x170);
  iVar13 = iVar11 + param_4;
  if ((int)(*(uint *)(param_1 + 0x174) & 0x7fffffff) < iVar13) {
    FUN_141807aa8(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  lVar6 = *plVar2;
  *(int *)(param_1 + 0x170) = iVar13;
  if (0 < param_4) {
    puVar14 = (undefined2 *)(lVar9 + (longlong)iVar12 * 0xc + 8);
    lVar10 = 0;
    lVar9 = (longlong)iVar3 * 4;
    puVar8 = (undefined4 *)(param_3 + 4);
    do {
      *(undefined1 *)(lVar10 + iVar4 + lVar5) = *(undefined1 *)(puVar8 + 2);
      *(undefined4 *)(puVar14 + -4) = puVar8[-1];
      *(undefined4 *)(puVar14 + -2) = *puVar8;
      *puVar14 = *(undefined2 *)(puVar8 + 1);
      puVar14[1] = *(undefined2 *)((longlong)puVar8 + 6);
      FUN_144b3d470(lVar15,*(undefined8 *)(puVar8 + 3),(longlong)(int)(lVar9 >> 2) << 2);
      puVar14 = puVar14 + 6;
      *(int *)(lVar6 + (longlong)iVar11 * 4 + lVar10 * 4) = *param_2;
      puVar8 = puVar8 + 0xc;
      lVar10 = lVar10 + 1;
      lVar15 = lVar15 + lVar9;
    } while (lVar10 < param_4);
  }
  return;
}



// FUNCTION 144c42170 FUN_144c42170 body=399 status=ok
// SIG undefined FUN_144c42170(void)

void FUN_144c42170(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x168) + (longlong)*param_2 * 4);
  uVar7 = (ulonglong)iVar8;
  if (iVar8 != -1) {
    if (-1 < iVar8) {
      lVar10 = uVar7 * 4;
      do {
        iVar9 = 0;
        lVar3 = (longlong)((int)uVar7 - *(int *)(param_1 + 0x20));
        lVar1 = *(longlong *)(param_1 + 0xd0) + lVar3 * 0xc;
        iVar8 = (int)*(short *)(*(longlong *)(param_1 + 0xd0) + 8 + lVar3 * 0xc) +
                *(int *)(param_1 + 0x164);
        *(int *)(param_1 + 0x164) = iVar8;
        if (0 < *(short *)(lVar1 + 10)) {
          do {
            iVar5 = *(int *)(lVar1 + 4) + iVar9;
            if (iVar5 < *(int *)(param_1 + 0x30)) {
              lVar3 = (longlong)iVar5;
              if (*(int *)(param_1 + 0x78) != 0) {
                iVar5 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar3 * 4);
              }
              if (iVar5 == -1) {
                lVar4 = *(longlong *)(param_1 + 0x28);
                lVar3 = lVar3 * 5;
              }
              else {
                lVar3 = (longlong)iVar5 * 5;
                lVar4 = *(longlong *)(param_1 + 0xc0);
              }
            }
            else {
              lVar3 = (longlong)(iVar5 - *(int *)(param_1 + 0x30)) * 5;
              lVar4 = *(longlong *)(param_1 + 0xe0);
            }
            if ((*(byte *)(lVar4 + 0x10 + lVar3 * 4) & 8) == 0) {
              iVar8 = iVar8 + 1;
              *(int *)(param_1 + 0x164) = iVar8;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(short *)(lVar1 + 10));
        }
        *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        *(undefined4 *)(lVar10 + *(longlong *)(param_1 + 0x168)) = 0xfffffffd;
        lVar10 = lVar10 + 4;
      } while (((int)uVar6 < *(int *)(param_1 + 0x170)) &&
              (*(int *)(lVar10 + *(longlong *)(param_1 + 0x168)) == *param_2));
    }
    if (*(int *)(param_1 + 0x108) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)((longlong)*param_2 + *(longlong *)(param_1 + 0x100));
    }
    *(byte *)((longlong)*param_2 + *(longlong *)(param_1 + 0x100)) = bVar2 & 0xfe;
    *(undefined4 *)(*(longlong *)(param_1 + 0x168) + (longlong)*param_2 * 4) = 0xffffffff;
  }
  return;
}



// FUNCTION 144c42300 FUN_144c42300 body=384 status=ok
// SIG undefined FUN_144c42300(void)

void FUN_144c42300(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_res8 [2];
  int local_res10 [2];
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar8 = 0;
  lVar1 = *(longlong *)(param_1 + 0xd0) + (longlong)(*param_2 - iVar2) * 0xc;
  *(int *)(param_1 + 0x164) =
       *(int *)(param_1 + 0x164) +
       (int)*(short *)(*(longlong *)(param_1 + 0xd0) + 8 + (longlong)(*param_2 - iVar2) * 0xc);
  if (0 < *(short *)(lVar1 + 10)) {
    do {
      iVar5 = *(int *)(lVar1 + 4) + iVar8;
      if (iVar5 < *(int *)(param_1 + 0x30)) {
        lVar6 = (longlong)iVar5;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar6 * 4);
        }
        if (iVar5 == -1) {
          lVar4 = *(longlong *)(param_1 + 0x28);
          lVar6 = lVar6 * 5;
        }
        else {
          lVar6 = (longlong)iVar5 * 5;
          lVar4 = *(longlong *)(param_1 + 0xc0);
        }
      }
      else {
        lVar6 = (longlong)(iVar5 - *(int *)(param_1 + 0x30)) * 5;
        lVar4 = *(longlong *)(param_1 + 0xe0);
      }
      if ((*(byte *)(lVar4 + 0x10 + lVar6 * 4) & 8) == 0) {
        *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(short *)(lVar1 + 10));
  }
  iVar8 = *param_2;
  lVar6 = *(longlong *)(param_1 + 0x168);
  iVar5 = *(int *)(lVar6 + (longlong)iVar8 * 4);
  local_res10[0] = iVar8 - iVar2;
  lVar1 = (longlong)iVar5 * 4;
  iVar7 = *(int *)(lVar1 + lVar6);
  if (iVar7 < 0) {
    iVar7 = -1;
    iVar3 = -1;
  }
  else {
    iVar3 = iVar7 + 1;
    if (iVar3 < *(int *)(param_1 + 0x170)) {
      piVar9 = (int *)(lVar6 + (longlong)iVar3 * 4);
      do {
        if (*piVar9 != iVar5) break;
        iVar3 = iVar3 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x170));
    }
    iVar7 = iVar7 - iVar2;
    iVar3 = iVar3 - iVar2;
  }
  iVar3 = iVar3 + -1;
  if (local_res10[0] == iVar3) {
    *(undefined4 *)(lVar6 + (longlong)iVar8 * 4) = 0xfffffffd;
  }
  else {
    local_res8[0] = iVar3;
    FUN_144c548c0(param_3,param_1,local_res10,local_res8);
    *(undefined4 *)
     (*(longlong *)(param_1 + 0x168) + (longlong)(*(int *)(param_1 + 0x20) + iVar3) * 4) =
         0xfffffffd;
  }
  if (iVar7 == iVar3) {
    *(undefined4 *)(lVar1 + *(longlong *)(param_1 + 0x168)) = 0xfffffffe;
  }
  *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
  return;
}



// FUNCTION 144c42480 FUN_144c42480 body=62 status=ok
// SIG undefined FUN_144c42480(void)

void FUN_144c42480(longlong param_1,int *param_2)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x108) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)((longlong)*param_2 + *(longlong *)(param_1 + 0x100));
  }
  *(byte *)((longlong)*param_2 + *(longlong *)(param_1 + 0x100)) = bVar1 | 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x168) + (longlong)*param_2 * 4) = 0xfffffffe;
  return;
}



// FUNCTION 144c424c0 FUN_144c424c0 body=460 status=ok
// SIG undefined FUN_144c424c0(void)

longlong FUN_144c424c0(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  
  plVar1 = (longlong *)(param_1 + 0xe0);
  uVar7 = (ulonglong)param_3;
  if ((int)(*(uint *)(param_1 + 0xec) & 0x7fffffff) < (int)(*(int *)(param_1 + 0xe8) + param_3)) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1e0));
    iVar2 = *(int *)(param_1 + 0xe8);
    iVar4 = iVar2 + param_3;
    if ((int)(*(uint *)(param_1 + 0xec) & 0x7fffffff) < iVar4) {
      FUN_144c44450(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    *(int *)(param_1 + 0xe8) = iVar4;
    lVar6 = *plVar1 + (longlong)iVar2 * 0x14;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1e0));
  }
  else {
    iVar2 = *(int *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0xe8) = iVar2 + param_3;
    lVar6 = *plVar1 + (longlong)iVar2 * 0x14;
  }
  iVar2 = *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x158);
  iVar3 = iVar2 * param_3 + iVar4;
  if ((int)(*(uint *)(param_1 + 0x15c) & 0x7fffffff) < iVar3) {
    FUN_141807aa8(param_1 + 0x150,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  *(int *)(param_1 + 0x158) = iVar3;
  iVar3 = *(int *)(param_1 + 0x118);
  lVar10 = *(longlong *)(param_1 + 0x150) + (longlong)iVar4 * 4;
  iVar4 = iVar3 + param_3;
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x7fffffff) < iVar4) {
    FUN_144c44650(param_1 + 0x110,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  *(int *)(param_1 + 0x118) = iVar4;
  puVar9 = (undefined2 *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar3 * 2);
  if (0 < (int)param_3) {
    puVar5 = (undefined4 *)(param_2 + 8);
    puVar8 = (undefined4 *)(lVar6 + 8);
    do {
      puVar8[-2] = puVar5[-2];
      puVar8[-1] = puVar5[-1];
      *puVar8 = *puVar5;
      puVar8[1] = puVar5[1];
      *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar5 + 2);
      *(undefined1 *)((longlong)puVar8 + 9) = *(undefined1 *)((longlong)puVar5 + 9);
      *(undefined2 *)((longlong)puVar8 + 10) = *(undefined2 *)((longlong)puVar5 + 10);
      *puVar9 = *(undefined2 *)(puVar5 + 0xc);
      FUN_144b3d470(lVar10,*(undefined8 *)(puVar5 + 4),(longlong)iVar2 << 2);
      lVar10 = lVar10 + (longlong)iVar2 * 4;
      puVar5 = puVar5 + 0x10;
      puVar8 = puVar8 + 5;
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return lVar6;
}



// FUNCTION 144c42690 FUN_144c42690 body=363 status=ok
// SIG undefined FUN_144c42690(void)

longlong FUN_144c42690(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x118) + param_2;
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x7fffffff) < iVar6) {
    FUN_144c44650((longlong *)(param_1 + 0x110),&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  iVar2 = *(int *)(param_1 + 0x118);
  if (iVar2 < iVar6) {
    *(int *)(param_1 + 0x118) = iVar6;
    if (0 < iVar6 - iVar2) {
      uVar4 = (ulonglong)(uint)(iVar6 - iVar2);
      puVar5 = (undefined2 *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar2 * 2);
      do {
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0xffff;
        }
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  else if (iVar6 < iVar2) {
    *(int *)(param_1 + 0x118) = iVar6;
  }
  iVar6 = param_2 * *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x158);
  if ((int)(*(uint *)(param_1 + 0x15c) & 0x7fffffff) < iVar6) {
    FUN_141807aa8(param_1 + 0x150,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  *(int *)(param_1 + 0x158) = iVar6;
  plVar1 = (longlong *)(param_1 + 0xe0);
  if ((int)(*(uint *)(param_1 + 0xec) & 0x7fffffff) < *(int *)(param_1 + 0xe8) + param_2) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1e0));
    iVar6 = *(int *)(param_1 + 0xe8);
    param_2 = iVar6 + param_2;
    if ((int)(*(uint *)(param_1 + 0xec) & 0x7fffffff) < param_2) {
      FUN_144c44450(plVar1,&PTR_vftable_14c6e47a0,(longlong)param_2);
    }
    *(int *)(param_1 + 0xe8) = param_2;
    lVar3 = *plVar1 + (longlong)iVar6 * 0x14;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1e0));
  }
  else {
    iVar6 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar6 + param_2;
    lVar3 = *plVar1 + (longlong)iVar6 * 0x14;
  }
  return lVar3;
}



// FUNCTION 144c42800 FUN_144c42800 body=147 status=ok
// SIG undefined FUN_144c42800(void)

undefined1 *
FUN_144c42800(longlong param_1,undefined1 *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x168) + (longlong)*param_3 * 4);
  if (iVar1 < 0) {
    *param_4 = -1;
    *param_5 = -1;
    *param_2 = 0;
    return param_2;
  }
  iVar4 = iVar1 + 1;
  if (iVar4 < *(int *)(param_1 + 0x170)) {
    lVar2 = (longlong)iVar4;
    piVar3 = (int *)(*(longlong *)(param_1 + 0x168) + lVar2 * 4);
    do {
      if (*piVar3 != *param_3) break;
      iVar4 = iVar4 + 1;
      lVar2 = lVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x170));
  }
  *param_4 = iVar1;
  *param_2 = 1;
  *param_5 = iVar4;
  return param_2;
}



// FUNCTION 144c428a0 FUN_144c428a0 body=649 status=ok
// SIG undefined FUN_144c428a0(void)

void FUN_144c428a0(longlong param_1,undefined4 param_2,undefined4 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  short *psVar10;
  undefined1 (*pauVar11) [16];
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int local_res8 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  uVar7 = *param_3;
  uVar8 = param_3[8];
  uVar1 = param_3[4];
  iVar2 = *(int *)(param_1 + 0xf8);
  iVar15 = *(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x40);
  iVar16 = iVar2 + 4;
  local_78._4_4_ = uVar1;
  local_78._0_4_ = uVar7;
  local_78._8_4_ = uVar8;
  local_78._12_4_ = 0;
  local_68._4_4_ = param_3[5];
  local_68._0_4_ = param_3[1];
  local_68._8_4_ = param_3[9];
  local_68._12_4_ = 0;
  local_58._4_4_ = param_3[6];
  local_58._0_4_ = param_3[2];
  local_58._8_4_ = param_3[10];
  local_58._12_4_ = 0;
  local_48._4_4_ = param_3[7];
  local_48._0_4_ = param_3[3];
  local_48._8_4_ = param_3[0xb];
  local_48._12_4_ = 0;
  if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < iVar16) {
    FUN_1418055da(param_1 + 0xf0,&PTR_vftable_14c6e47a0,(longlong)iVar16);
  }
  puVar9 = (undefined8 *)local_78;
  pauVar11 = (undefined1 (*) [16])((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xf0));
  if (pauVar11 != (undefined1 (*) [16])0x0) {
    auVar6._4_4_ = uVar1;
    auVar6._0_4_ = uVar7;
    auVar6._8_4_ = uVar8;
    auVar6._12_4_ = 0;
    *pauVar11 = auVar6;
    puVar9 = (undefined8 *)local_68;
  }
  if (pauVar11 + 1 != (undefined1 (*) [16])0x0) {
    uVar3 = *puVar9;
    uVar4 = puVar9[1];
    puVar9 = puVar9 + 2;
    *(undefined8 *)pauVar11[1] = uVar3;
    *(undefined8 *)(pauVar11[1] + 8) = uVar4;
  }
  if (pauVar11 + 2 != (undefined1 (*) [16])0x0) {
    uVar3 = *puVar9;
    uVar4 = puVar9[1];
    puVar9 = puVar9 + 2;
    *(undefined8 *)pauVar11[2] = uVar3;
    *(undefined8 *)(pauVar11[2] + 8) = uVar4;
  }
  if (pauVar11 + 3 != (undefined1 (*) [16])0x0) {
    uVar3 = puVar9[1];
    *(undefined8 *)pauVar11[3] = *puVar9;
    *(undefined8 *)(pauVar11[3] + 8) = uVar3;
  }
  *(int *)(param_1 + 0xf8) = iVar16;
  local_res8[0] = param_3[0xe];
  if (local_res8[0] == param_3[0xf]) {
    FUN_144c43890();
  }
  else {
    FUN_144c435d0(param_1,local_res8,param_2,param_4);
    local_res8[0] = param_3[0xf];
    FUN_144c435d0(param_1,local_res8,param_2,param_4 + 4);
  }
  sVar13 = *(short *)(param_3 + 0x20);
  sVar12 = *(short *)((longlong)param_3 + 0x82);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  if (((float)((int)sVar13 << 0x10) < 0.0) || ((float)((int)sVar12 << 0x10) < 0.0)) {
    psVar10 = (short *)FUN_144c51a40(local_res8,param_3);
    sVar14 = *psVar10;
  }
  else {
    sVar14 = (short)local_res8[0];
  }
  piVar5 = (int *)*param_4;
  *piVar5 = iVar15;
  piVar5[1] = iVar15 + 1;
  piVar5[4] = 0x10;
  piVar5[2] = -1;
  piVar5[3] = -1;
  if ((*(byte *)(param_3 + 0x21) & 1) == 0) {
    *(undefined1 *)(piVar5 + 4) = 0x30;
  }
  if ((float)((int)sVar13 << 0x10) < 0.0) {
    sVar13 = sVar14;
  }
  *(short *)((longlong)piVar5 + 0x12) = sVar13;
  FUN_144b3d470(param_4[1],uVar3,(longlong)(int)(param_4[2] - param_4[1] >> 2) << 2);
  piVar5 = (int *)param_4[4];
  *piVar5 = iVar15 + 2;
  piVar5[1] = iVar15 + 3;
  piVar5[2] = -1;
  piVar5[3] = -1;
  piVar5[4] = 0x10;
  if ((*(byte *)(param_3 + 0x21) & 2) == 0) {
    *(undefined1 *)(piVar5 + 4) = 0x30;
  }
  if ((float)((int)sVar12 << 0x10) < 0.0) {
    sVar12 = sVar14;
  }
  *(short *)((longlong)piVar5 + 0x12) = sVar12;
  FUN_144b3d470(param_4[5],uVar4,(longlong)(int)(param_4[6] - param_4[5] >> 2) << 2);
  return;
}



// FUNCTION 144c42b30 FUN_144c42b30 body=881 status=ok
// SIG undefined FUN_144c42b30(void)

void FUN_144c42b30(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined2 param_4,
                  longlong *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int local_res18 [2];
  int local_res20 [2];
  longlong local_b8;
  undefined4 local_b0;
  uint local_ac;
  longlong local_a8;
  undefined4 local_a0;
  uint local_9c;
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_78._4_4_ = param_3[4];
  local_78._0_4_ = *param_3;
  local_78._8_4_ = param_3[8];
  local_78._12_4_ = 0;
  local_58._4_4_ = param_3[6];
  local_58._0_4_ = param_3[2];
  local_58._8_4_ = param_3[10];
  local_58._12_4_ = 0;
  local_68._4_4_ = param_3[5];
  local_68._0_4_ = param_3[1];
  local_68._8_4_ = param_3[9];
  local_68._12_4_ = 0;
  local_48._4_4_ = param_3[7];
  local_48._0_4_ = param_3[3];
  local_48._8_4_ = param_3[0xb];
  local_48._12_4_ = 0;
  if (param_3[0xc] == *(int *)(param_1 + 0x178)) {
    iVar14 = param_3[0xe];
    puVar15 = (undefined4 *)local_78;
  }
  else {
    iVar14 = param_3[0xf];
    puVar15 = (undefined4 *)local_58;
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x80000000;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0x80000000;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0x80000000;
  local_res20[0] = iVar14;
  FUN_144c44040((longlong *)(param_1 + 0x1c0),local_res18,local_res20,&local_b8);
  if ((-1 < (int)local_8c) && (local_98 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_98,(ulonglong)(local_8c & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_9c) && (local_a8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_a8,(ulonglong)(local_9c & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_ac) && (local_b8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_b8,(ulonglong)(local_ac & 0x7fffffff) * 0x14);
  }
  lVar10 = (longlong)local_res18[0];
  local_88 = (longlong *)(param_1 + 0xf0);
  local_res18[0] = *(int *)(param_1 + 0xf8);
  lVar10 = lVar10 * 0x38 + *(longlong *)(param_1 + 0x1c0);
  iVar13 = *(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x40);
  local_res20[0] = local_res18[0] + 2;
  if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < local_res20[0]) {
    FUN_1418055da(local_88,&PTR_vftable_14c6e47a0,(longlong)local_res20[0]);
  }
  puVar11 = (undefined4 *)((longlong)local_res18[0] * 0x10 + *local_88);
  if (puVar11 != (undefined4 *)0x0) {
    uVar6 = *puVar15;
    uVar7 = puVar15[1];
    uVar8 = puVar15[2];
    uVar9 = puVar15[3];
    puVar15 = puVar15 + 4;
    *puVar11 = uVar6;
    puVar11[1] = uVar7;
    puVar11[2] = uVar8;
    puVar11[3] = uVar9;
  }
  if (puVar11 + 4 != (undefined4 *)0x0) {
    uVar6 = puVar15[1];
    uVar7 = puVar15[2];
    uVar8 = puVar15[3];
    puVar11[4] = *puVar15;
    puVar11[5] = uVar6;
    puVar11[6] = uVar7;
    puVar11[7] = uVar8;
  }
  *(int *)(local_88 + 1) = local_res20[0];
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x18) + 10 + (longlong)iVar14 * 0xc);
  sVar2 = *(short *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar14 * 0xc);
  local_res20[0] = *(int *)(lVar10 + 0x10);
  sVar3 = *(short *)(lVar10 + 0x10);
  iVar14 = local_res20[0] + 1;
  if ((int)(*(uint *)(lVar10 + 0x14) & 0x7fffffff) < iVar14) {
    FUN_144c44450(lVar10 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar14);
  }
  lVar12 = (longlong)local_res20[0];
  *(int *)(lVar10 + 0x10) = iVar14;
  lVar4 = *(longlong *)(lVar10 + 8);
  *(int *)(lVar4 + lVar12 * 0x14) = iVar13;
  *(int *)(lVar4 + 4 + lVar12 * 0x14) = iVar13 + 1;
  *(undefined2 *)(lVar4 + 0x12 + lVar12 * 0x14) = param_4;
  lVar4 = lVar4 + lVar12 * 0x14;
  *(undefined2 *)(lVar4 + 0x10) = 0x50;
  *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
  local_res20[0] = *(int *)(lVar10 + 0x20);
  iVar14 = *(int *)(param_1 + 0x60) + local_res20[0];
  if ((int)(*(uint *)(lVar10 + 0x24) & 0x7fffffff) < iVar14) {
    FUN_141807aa8(lVar10 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar14);
  }
  *(int *)(lVar10 + 0x20) = iVar14;
  local_88 = (longlong *)(*(longlong *)(lVar10 + 0x18) + (longlong)local_res20[0] * 4);
  uStack_80 = (longlong)local_88 + (longlong)*(int *)(param_1 + 0x60) * 4;
  lVar12 = (longlong)(int)(uStack_80 - (longlong)local_88 >> 2) << 2;
  if (param_3[0xc] == *(int *)(param_1 + 0x178)) {
    FUN_144b3d470(local_88,*(undefined8 *)(param_3 + 0x10),lVar12);
    bVar5 = *(byte *)(param_3 + 0x21) & 1;
  }
  else {
    FUN_144b3d470(local_88,*(undefined8 *)(param_3 + 0x18),lVar12);
    bVar5 = *(byte *)(param_3 + 0x21) & 2;
  }
  if (bVar5 == 0) {
    *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) | 0x20;
  }
  *(short *)(param_5 + 3) = sVar1 + sVar2 + sVar3;
  *(undefined4 *)(param_5 + 1) = (undefined4)local_88;
  *(undefined4 *)((longlong)param_5 + 0xc) = local_88._4_4_;
  *(undefined4 *)(param_5 + 2) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_5 + 0x14) = uStack_80._4_4_;
  *param_5 = lVar4;
  iVar14 = *(int *)(lVar10 + 0x30) + 1;
  if ((int)(*(uint *)(lVar10 + 0x34) & 0x7fffffff) < iVar14) {
    FUN_144c44740(lVar10 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar14);
  }
  puVar15 = (undefined4 *)(*(longlong *)(lVar10 + 0x28) + (longlong)*(int *)(lVar10 + 0x30) * 4);
  if (puVar15 != (undefined4 *)0x0) {
    *puVar15 = param_2;
  }
  *(int *)(lVar10 + 0x30) = iVar14;
  return;
}



// FUNCTION 144c42eb0 FUN_144c42eb0 body=455 status=ok
// SIG undefined FUN_144c42eb0(void)

void FUN_144c42eb0(longlong param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined2 *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uStackX_24;
  
  plVar1 = (longlong *)(param_1 + 0x1c0);
  lVar6 = FUN_144c441c0(plVar1,param_3);
  if (lVar6 == 0) {
    iVar10 = -1;
    uStackX_24 = 0xffffffff;
  }
  else {
    iVar10 = *(int *)(lVar6 + 4);
    uStackX_24 = (uint)(lVar6 - *(longlong *)(param_1 + 0x1d0) >> 3);
  }
  lVar6 = (longlong)iVar10 * 0x38 + *plVar1;
  FUN_144c3fad0(param_4 + 2,0,*(undefined4 *)(lVar6 + 0x10),0);
  uVar8 = 0;
  bVar4 = false;
  uVar9 = uVar8;
  bVar5 = false;
  if (0 < *(int *)(lVar6 + 0x10)) {
    do {
      bVar4 = bVar5;
      lVar11 = (longlong)(int)uVar8;
      bVar3 = *(byte *)(*(longlong *)(lVar6 + 8) + 0x10 + lVar11 * 0x14);
      if ((bVar3 & 8) == 0) {
        if (*(int *)(*(longlong *)(lVar6 + 0x28) + lVar11 * 4) == param_2) {
          *(undefined1 *)(*(longlong *)(lVar6 + 8) + lVar11 * 0x14 + 0x10) = 8;
          uVar9 = uVar9 | bVar3 & 0x40;
          iVar7 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar7) {
            FUN_144c44830(param_4,&PTR_vftable_14c6e47c0,(longlong)iVar7);
          }
          puVar2 = (undefined2 *)(*param_4 + (longlong)(int)param_4[1] * 2);
          if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = (short)uVar8;
          }
          *(int *)(param_4 + 1) = iVar7;
          *(uint *)(param_4[2] + (lVar11 >> 5) * 4) =
               *(uint *)(param_4[2] + (lVar11 >> 5) * 4) | 1 << (uVar8 & 0x1f);
        }
        else {
          bVar4 = true;
        }
      }
      uVar8 = uVar8 + 1;
      bVar5 = bVar4;
    } while ((int)uVar8 < *(int *)(lVar6 + 0x10));
  }
  *(bool *)(param_4 + 5) = uVar9 != 0;
  if (!bVar4) {
    if ((*(uint *)(param_1 + 0x1d8) < uStackX_24) ||
       (lVar6 = *(longlong *)(param_1 + 0x1d0) + (longlong)(int)uStackX_24 * 8,
       *(int *)(*(longlong *)(param_1 + 0x1d0) + 4 + (longlong)(int)uStackX_24 * 8) != iVar10)) {
      lVar6 = FUN_144c441c0(plVar1,(longlong)iVar10 * 0x38 + *plVar1);
    }
    FUN_144c43ce0(plVar1,lVar6);
  }
  return;
}


