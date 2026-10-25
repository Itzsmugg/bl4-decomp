// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144c87b80 FUN_144c87b80 body=87 status=ok
// SIG undefined FUN_144c87b80(void)

undefined8 FUN_144c87b80(undefined8 param_1,ulonglong param_2)

{
  FUN_144faa9e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144c87be0 FUN_144c87be0 body=77 status=ok
// SIG undefined FUN_144c87be0(void)

void FUN_144c87be0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c87d60 FUN_144c87d60 body=77 status=ok
// SIG undefined FUN_144c87d60(void)

void FUN_144c87d60(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c87db0 FUN_144c87db0 body=74 status=ok
// SIG undefined FUN_144c87db0(void)

void FUN_144c87db0(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c87e00 FUN_144c87e00 body=77 status=ok
// SIG undefined FUN_144c87e00(void)

void FUN_144c87e00(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c87e50 FUN_144c87e50 body=115 status=ok
// SIG undefined FUN_144c87e50(void)

void FUN_144c87e50(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c87ed0 FUN_144c87ed0 body=74 status=ok
// SIG undefined FUN_144c87ed0(void)

void FUN_144c87ed0(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c87f60 FUN_144c87f60 body=173 status=ok
// SIG undefined FUN_144c87f60(void)

undefined8 * FUN_144c87f60(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
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
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144c88050 FUN_144c88050 body=89 status=ok
// SIG undefined FUN_144c88050(void)

void FUN_144c88050(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c880b0 FUN_144c880b0 body=18 status=ok
// SIG undefined FUN_144c880b0(void)

undefined8 * FUN_144c880b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ece00;
  return param_2;
}



// FUNCTION 144c880e0 FUN_144c880e0 body=55 status=ok
// SIG undefined FUN_144c880e0(void)

void FUN_144c880e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144fae550(param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c881a0 FUN_144c881a0 body=91 status=ok
// SIG undefined FUN_144c881a0(void)

void FUN_144c881a0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c88200 FUN_144c88200 body=80 status=ok
// SIG undefined FUN_144c88200(void)

void FUN_144c88200(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c88320 FUN_144c88320 body=74 status=ok
// SIG undefined FUN_144c88320(void)

void FUN_144c88320(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c88370 FUN_144c88370 body=63 status=ok
// SIG undefined FUN_144c88370(void)

void FUN_144c88370(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c883b0 FUN_144c883b0 body=199 status=ok
// SIG undefined FUN_144c883b0(void)

void FUN_144c883b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar8 = (undefined8 *)(param_1 + 0x10);
    lVar9 = (longlong)param_4;
    do {
      if (puVar8 + -2 != (undefined8 *)0x0) {
        *puVar8 = 1;
        puVar8[-1] = 0xffffffff;
        puVar8[-2] = hkaiClusteringSnapshot::vftable;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar8);
        puVar1 = (undefined8 *)((longlong)puVar8 + param_2 + 0x10);
        uVar7 = puVar1[1];
        puVar8[2] = *puVar1;
        puVar8[3] = uVar7;
        puVar2 = (undefined4 *)((longlong)puVar8 + param_2 + 0x20);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)(puVar8 + 4) = *puVar2;
        *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
        *(undefined4 *)(puVar8 + 5) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar6;
        puVar2 = (undefined4 *)((longlong)puVar8 + param_2 + 0x30);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)(puVar8 + 6) = *puVar2;
        *(undefined4 *)((longlong)puVar8 + 0x34) = uVar4;
        *(undefined4 *)(puVar8 + 7) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar6;
        lVar3 = *(longlong *)(param_2 + 0x40 + (longlong)puVar8);
        puVar8[8] = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
      }
      puVar8 = puVar8 + 0xb;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c88480 FUN_144c88480 body=97 status=ok
// SIG undefined FUN_144c88480(void)

void FUN_144c88480(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c884f0 FUN_144c884f0 body=77 status=ok
// SIG undefined FUN_144c884f0(void)

void FUN_144c884f0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c88570 FUN_144c88570 body=88 status=ok
// SIG undefined FUN_144c88570(void)

void FUN_144c88570(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c885d0 FUN_144c885d0 body=150 status=ok
// SIG undefined FUN_144c885d0(void)

void FUN_144c885d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_4;
    puVar8 = (undefined4 *)(param_1 + 0x18);
    do {
      *puVar8 = *(undefined4 *)(param_2 + (longlong)puVar8);
      puVar1 = (undefined8 *)(param_2 + 8 + (longlong)puVar8);
      uVar7 = puVar1[1];
      *(undefined8 *)(puVar8 + 2) = *puVar1;
      *(undefined8 *)(puVar8 + 4) = uVar7;
      puVar2 = (undefined4 *)(param_2 + 0x18 + (longlong)puVar8);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar8[6] = *puVar2;
      puVar8[7] = uVar4;
      puVar8[8] = uVar5;
      puVar8[9] = uVar6;
      puVar2 = (undefined4 *)(param_2 + 0x28 + (longlong)puVar8);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar8[10] = *puVar2;
      puVar8[0xb] = uVar4;
      puVar8[0xc] = uVar5;
      puVar8[0xd] = uVar6;
      lVar3 = *(longlong *)(param_2 + 0x38 + (longlong)puVar8);
      if (*(longlong *)(puVar8 + 0xe) != lVar3) {
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        lVar3 = *(longlong *)(puVar8 + 0xe);
        *(undefined8 *)(puVar8 + 0xe) = *(undefined8 *)(param_2 + 0x38 + (longlong)puVar8);
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
      }
      puVar8 = puVar8 + 0x16;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c88670 FUN_144c88670 body=80 status=ok
// SIG undefined FUN_144c88670(void)

void FUN_144c88670(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c886c0 FUN_144c886c0 body=18 status=ok
// SIG undefined FUN_144c886c0(void)

undefined8 * FUN_144c886c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ed170;
  return param_2;
}



// FUNCTION 144c886f0 FUN_144c886f0 body=62 status=ok
// SIG undefined FUN_144c886f0(void)

undefined8 * FUN_144c886f0(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6ed1d0);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ed1d0;
  return param_2;
}



// FUNCTION 144c88730 FUN_144c88730 body=63 status=ok
// SIG undefined FUN_144c88730(void)

void FUN_144c88730(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c88770 FUN_144c88770 body=18 status=ok
// SIG undefined FUN_144c88770(void)

undefined8 * FUN_144c88770(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ed220;
  return param_2;
}



// FUNCTION 144c88790 FUN_144c88790 body=3 status=ok
// SIG undefined FUN_144c88790(void)

undefined1 FUN_144c88790(void)

{
  return 1;
}



// FUNCTION 144c887a0 FUN_144c887a0 body=97 status=ok
// SIG undefined FUN_144c887a0(void)

void FUN_144c887a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c88810 FUN_144c88810 body=18 status=ok
// SIG undefined FUN_144c88810(void)

undefined8 * FUN_144c88810(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ed2e0;
  return param_2;
}



// FUNCTION 144c88860 FUN_144c88860 body=71 status=ok
// SIG undefined FUN_144c88860(void)

undefined8 * FUN_144c88860(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144c888e0 FUN_144c888e0 body=80 status=ok
// SIG undefined FUN_144c888e0(void)

void FUN_144c888e0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c88930 FUN_144c88930 body=18 status=ok
// SIG undefined FUN_144c88930(void)

undefined8 * FUN_144c88930(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ed3a0;
  return param_2;
}



// FUNCTION 144c88950 FUN_144c88950 body=74 status=ok
// SIG undefined FUN_144c88950(void)

void FUN_144c88950(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c889a0 FUN_144c889a0 body=80 status=ok
// SIG undefined FUN_144c889a0(void)

void FUN_144c889a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c889f0 FUN_144c889f0 body=3 status=ok
// SIG undefined FUN_144c889f0(void)

undefined1 FUN_144c889f0(void)

{
  return 1;
}



// FUNCTION 144c88a00 FUN_144c88a00 body=18 status=ok
// SIG undefined FUN_144c88a00(void)

undefined8 * FUN_144c88a00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ed400;
  return param_2;
}



// FUNCTION 144c88a20 FUN_144c88a20 body=63 status=ok
// SIG undefined FUN_144c88a20(void)

void FUN_144c88a20(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c88a60 FUN_144c88a60 body=159 status=ok
// SIG undefined FUN_144c88a60(void)

void FUN_144c88a60(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        puVar2[-2] = hkaiNavMeshInstanceQueryMediator::vftable;
        lVar1 = *(longlong *)((param_2 - param_1) + 8 + (longlong)puVar2);
        puVar2[1] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        puVar2[2] = *(undefined8 *)((param_2 - param_1) + 0x10 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c88b00 FUN_144c88b00 body=36 status=ok
// SIG undefined FUN_144c88b00(void)

bool FUN_144c88b00(longlong param_1)

{
  undefined8 *in_stack_00000028;
  
  if ((uint *)*in_stack_00000028 == (uint *)in_stack_00000028[1]) {
    return true;
  }
  return (*(uint *)(param_1 + 0x18) >> (*(uint *)*in_stack_00000028 & 0x1f) & 1) != 0;
}



// FUNCTION 144c88b30 FUN_144c88b30 body=71 status=ok
// SIG undefined FUN_144c88b30(void)

undefined8 * FUN_144c88b30(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144c88b80 FUN_144c88b80 body=63 status=ok
// SIG undefined FUN_144c88b80(void)

void FUN_144c88b80(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c88bc0 FUN_144c88bc0 body=36 status=ok
// SIG undefined FUN_144c88bc0(void)

bool FUN_144c88bc0(longlong param_1)

{
  undefined8 *in_stack_00000028;
  
  if ((uint *)*in_stack_00000028 == (uint *)in_stack_00000028[1]) {
    return true;
  }
  return (*(uint *)(param_1 + 0x1c) >> (*(uint *)*in_stack_00000028 & 0x1f) & 1) != 0;
}



// FUNCTION 144c88bf0 FUN_144c88bf0 body=97 status=ok
// SIG undefined FUN_144c88bf0(void)

void FUN_144c88bf0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c88c60 FUN_144c88c60 body=88 status=ok
// SIG undefined FUN_144c88c60(void)

void FUN_144c88c60(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c88cc0 FUN_144c88cc0 body=71 status=ok
// SIG undefined FUN_144c88cc0(void)

undefined8 * FUN_144c88cc0(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144c88d10 FUN_144c88d10 body=97 status=ok
// SIG undefined FUN_144c88d10(void)

void FUN_144c88d10(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c88d80 FUN_144c88d80 body=91 status=ok
// SIG undefined FUN_144c88d80(void)

void FUN_144c88d80(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c88de0 FUN_144c88de0 body=18 status=ok
// SIG undefined FUN_144c88de0(void)

undefined8 * FUN_144c88de0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ed4c0;
  return param_2;
}



// FUNCTION 144c88e50 FUN_144c88e50 body=7 status=ok
// SIG undefined FUN_144c88e50(void)

bool FUN_144c88e50(undefined8 param_1,int param_2)

{
  return param_2 == 1;
}



// FUNCTION 144c88e60 FUN_144c88e60 body=71 status=ok
// SIG undefined FUN_144c88e60(void)

undefined8 * FUN_144c88e60(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144c88eb0 FUN_144c88eb0 body=18 status=ok
// SIG undefined FUN_144c88eb0(void)

undefined8 * FUN_144c88eb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ed580;
  return param_2;
}



// FUNCTION 144c88f10 FUN_144c88f10 body=7 status=ok
// SIG undefined FUN_144c88f10(void)

bool FUN_144c88f10(undefined8 param_1,int param_2)

{
  return param_2 == 1;
}



// FUNCTION 144c88f20 FUN_144c88f20 body=74 status=ok
// SIG undefined FUN_144c88f20(void)

void FUN_144c88f20(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c88fa0 FUN_144c88fa0 body=71 status=ok
// SIG undefined FUN_144c88fa0(void)

undefined8 * FUN_144c88fa0(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144c89020 FUN_144c89020 body=18 status=ok
// SIG undefined FUN_144c89020(void)

undefined8 * FUN_144c89020(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ed6f0;
  return param_2;
}



// FUNCTION 144c89080 FUN_144c89080 body=120 status=ok
// SIG undefined FUN_144c89080(void)

void FUN_144c89080(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c89130 FUN_144c89130 body=105 status=ok
// SIG undefined FUN_144c89130(void)

void FUN_144c89130(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c891a0 FUN_144c891a0 body=132 status=ok
// SIG undefined FUN_144c891a0(void)

void FUN_144c891a0(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c89240 FUN_144c89240 body=74 status=ok
// SIG undefined FUN_144c89240(void)

void FUN_144c89240(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c89290 FUN_144c89290 body=55 status=ok
// SIG undefined FUN_144c89290(void)

void FUN_144c89290(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144fd2b10(param_1);
      }
      param_1 = param_1 + 0x68;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c892d0 FUN_144c892d0 body=511 status=ok
// SIG undefined FUN_144c892d0(void)

void FUN_144c892d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    puVar7 = (uint *)(param_1 + 0x44);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      if (puVar7 + -0x11 != (uint *)0x0) {
        puVar7[-0xf] = 0xffffffff;
        puVar7[-0xe] = 0;
        puVar7[-0xd] = 1;
        puVar7[-0xc] = 0;
        *(undefined ***)(puVar7 + -0x11) = hkaiNavMeshClearanceCache::vftable;
        puVar7[-0xb] = *(uint *)((longlong)puVar7 + param_2 + -0x2c);
        puVar7[-10] = *(uint *)((longlong)puVar7 + param_2 + -0x28);
        puVar7[-9] = *(uint *)((longlong)puVar7 + param_2 + -0x24);
        puVar7[-8] = *(uint *)((longlong)puVar7 + param_2 + -0x20);
        puVar7[-7] = 0;
        puVar7[-6] = 0;
        puVar7[-5] = 0;
        puVar7[-4] = 0x80000000;
        uVar3 = *(uint *)((longlong)puVar7 + param_2 + -0x14);
        puVar8 = *(undefined4 **)((longlong)puVar7 + param_2 + -0x1c);
        if (0 < (int)uVar3) {
          puVar4 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 2);
          *(undefined4 **)(puVar7 + -7) = puVar4;
          puVar7[-5] = uVar3;
          uVar11 = (ulonglong)uVar3;
          puVar7[-4] = uVar3;
          do {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar8;
              puVar8 = puVar8 + 1;
            }
            uVar11 = uVar11 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar11 != 0);
        }
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0x80000000;
        uVar3 = *(uint *)((longlong)puVar7 + param_2 + -4);
        puVar9 = *(undefined1 **)((longlong)puVar7 + param_2 + -0xc);
        if (0 < (int)uVar3) {
          puVar5 = (undefined1 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
          *(undefined1 **)(puVar7 + -3) = puVar5;
          puVar7[-1] = uVar3;
          uVar11 = (ulonglong)uVar3;
          *puVar7 = uVar3;
          do {
            if (puVar5 != (undefined1 *)0x0) {
              uVar2 = *puVar9;
              puVar9 = puVar9 + 1;
              *puVar5 = uVar2;
            }
            uVar11 = uVar11 - 1;
            puVar5 = puVar5 + 1;
          } while (uVar11 != 0);
        }
        puVar7[1] = *(uint *)((longlong)puVar7 + param_2 + 4);
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0x80000000;
        uVar3 = *(uint *)((longlong)puVar7 + param_2 + 0x14);
        puVar10 = *(undefined2 **)((longlong)puVar7 + param_2 + 0xc);
        if (0 < (int)uVar3) {
          puVar6 = (undefined2 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 3);
          *(undefined2 **)(puVar7 + 3) = puVar6;
          puVar7[5] = uVar3;
          uVar11 = (ulonglong)uVar3;
          puVar7[6] = uVar3;
          do {
            if (puVar6 != (undefined2 *)0x0) {
              *puVar6 = *puVar10;
              puVar1 = puVar10 + 1;
              puVar10 = (undefined2 *)((longlong)puVar10 + 3);
              *(undefined1 *)(puVar6 + 1) = *(undefined1 *)puVar1;
            }
            uVar11 = uVar11 - 1;
            puVar6 = (undefined2 *)((longlong)puVar6 + 3);
          } while (uVar11 != 0);
        }
        puVar7[7] = *(uint *)((longlong)puVar7 + param_2 + 0x1c);
      }
      puVar7 = puVar7 + 0x1a;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c89510 FUN_144c89510 body=77 status=ok
// SIG undefined FUN_144c89510(void)

void FUN_144c89510(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c895c0 FUN_144c895c0 body=74 status=ok
// SIG undefined FUN_144c895c0(void)

void FUN_144c895c0(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c89610 FUN_144c89610 body=478 status=ok
// SIG undefined FUN_144c89610(void)

void FUN_144c89610(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_1 + 0x44);
    param_2 = param_2 - param_1;
    lVar11 = (longlong)param_4;
    do {
      puVar1 = puVar8 + -7;
      puVar8[-0xb] = *(uint *)(param_2 + -0x2c + (longlong)puVar8);
      puVar8[-10] = *(uint *)(param_2 + -0x28 + (longlong)puVar8);
      puVar8[-9] = *(uint *)(param_2 + -0x24 + (longlong)puVar8);
      puVar8[-8] = *(uint *)(param_2 + -0x20 + (longlong)puVar8);
      puVar5 = (uint *)(param_2 + -0x1c + (longlong)puVar8);
      if (puVar5 != puVar1) {
        puVar9 = *(undefined4 **)puVar5;
        uVar2 = *(uint *)(param_2 + -0x14 + (longlong)puVar8);
        if ((int)(puVar8[-4] & 0x7fffffff) < (int)uVar2) {
          FUN_144c6d410(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        puVar6 = *(undefined4 **)puVar1;
        uVar4 = uVar2;
        if ((int)puVar8[-5] < (int)uVar2) {
          uVar4 = puVar8[-5];
        }
        uVar10 = (ulonglong)uVar4;
        if ((puVar6 != puVar9) && (puVar7 = puVar9, 0 < (int)uVar4)) {
          do {
            LOCK();
            *puVar6 = *puVar7;
            UNLOCK();
            puVar6 = puVar6 + 1;
            uVar10 = uVar10 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar10 != 0);
        }
        puVar9 = puVar9 + (int)uVar4;
        if (0 < (int)(uVar2 - uVar4)) {
          uVar10 = (ulonglong)(uVar2 - uVar4);
          puVar6 = (undefined4 *)(*(longlong *)puVar1 + (longlong)(int)uVar4 * 4);
          do {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar9;
              puVar9 = puVar9 + 1;
            }
            uVar10 = uVar10 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
        }
        puVar8[-5] = uVar2;
      }
      puVar5 = (uint *)(param_2 + -0xc + (longlong)puVar8);
      puVar1 = puVar8 + -3;
      if (puVar5 != puVar1) {
        uVar3 = *(undefined8 *)puVar5;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar8);
        if ((int)(*puVar8 & 0x7fffffff) < (int)uVar2) {
          FUN_144c6d4d0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2);
        puVar8[-1] = uVar2;
      }
      puVar5 = (uint *)(param_2 + 0xc + (longlong)puVar8);
      puVar1 = puVar8 + 3;
      LOCK();
      puVar8[1] = *(uint *)(param_2 + 4 + (longlong)puVar8);
      UNLOCK();
      if (puVar5 != puVar1) {
        uVar2 = *(uint *)(param_2 + 0x14 + (longlong)puVar8);
        uVar3 = *(undefined8 *)puVar5;
        if ((int)(puVar8[6] & 0x7fffffff) < (int)uVar2) {
          FUN_144c6d570(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 3);
        puVar8[5] = uVar2;
      }
      LOCK();
      puVar8[7] = *(uint *)(param_2 + 0x1c + (longlong)puVar8);
      UNLOCK();
      puVar8 = puVar8 + 0x1a;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 144c897f0 FUN_144c897f0 body=457 status=ok
// SIG undefined FUN_144c897f0(void)

void FUN_144c897f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  
  lVar7 = (longlong)param_4;
  if (0 < param_4) {
    puVar9 = (uint *)(param_1 + 0x24);
    do {
      if (puVar9 + -9 != (uint *)0x0) {
        puVar9[-7] = 0xffffffff;
        puVar9[-6] = 0;
        puVar9[-5] = 1;
        puVar9[-4] = 0;
        *(undefined ***)(puVar9 + -9) = hkaiNavMeshModifiedFaces::vftable;
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar9);
        lVar6 = *(longlong *)((param_2 - param_1) + -0xc + (longlong)puVar9);
        if (0 < (int)uVar1) {
          puVar3 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 5);
          *(undefined8 **)(puVar9 + -3) = puVar3;
          lVar6 = lVar6 + 0x10;
          puVar9[-1] = uVar1;
          uVar10 = (ulonglong)uVar1;
          *puVar9 = uVar1;
          do {
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = 0;
              *(undefined4 *)(puVar3 + 1) = 0;
              *(undefined4 *)((longlong)puVar3 + 0xc) = 0x80000000;
              uVar1 = *(uint *)(lVar6 + -8);
              puVar5 = *(undefined4 **)(lVar6 + -0x10);
              if (0 < (int)uVar1) {
                puVar4 = (undefined4 *)
                         (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                   (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
                *puVar3 = puVar4;
                *(uint *)(puVar3 + 1) = uVar1;
                uVar8 = (ulonglong)uVar1;
                *(uint *)((longlong)puVar3 + 0xc) = uVar1;
                do {
                  if (puVar4 != (undefined4 *)0x0) {
                    uVar2 = *puVar5;
                    puVar5 = puVar5 + 1;
                    *puVar4 = uVar2;
                  }
                  uVar8 = uVar8 - 1;
                  puVar4 = puVar4 + 1;
                } while (uVar8 != 0);
              }
              FUN_140069ea2(puVar3 + 2,lVar6);
              lVar6 = lVar6 + 0x20;
            }
            uVar10 = uVar10 - 1;
            puVar3 = puVar3 + 4;
          } while (uVar10 != 0);
        }
      }
      puVar9 = puVar9 + 10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144c899c0 FUN_144c899c0 body=323 status=ok
// SIG undefined FUN_144c899c0(void)

undefined8 * FUN_144c899c0(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)param_1[9];
  if (puVar2 + (longlong)*(int *)(param_1 + 10) * 0x18 != puVar2) {
    puVar3 = puVar2 + (longlong)*(int *)(param_1 + 10) * 0x18 + 0x17;
    do {
      puVar3[-0x19] = 0;
      if ((-1 < (int)puVar3[-0x18]) && (*(longlong *)(puVar3 + -0x1b) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -0x1b),
                   (ulonglong)(puVar3[-0x18] & 0x7fffffff) << 2);
      }
      puVar1 = puVar3 + -0x2f;
      *(undefined8 *)(puVar3 + -0x1b) = 0;
      puVar3[-0x18] = 0x80000000;
      puVar3 = puVar3 + -0x18;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) * 0x60);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 144c89b70 FUN_144c89b70 body=88 status=ok
// SIG undefined FUN_144c89b70(void)

void FUN_144c89b70(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c89c00 FUN_144c89c00 body=55 status=ok
// SIG undefined FUN_144c89c00(void)

void FUN_144c89c00(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14500b7b0(param_1);
      }
      param_1 = param_1 + 0xc;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c89ca0 FUN_144c89ca0 body=264 status=ok
// SIG undefined FUN_144c89ca0(void)

void FUN_144c89ca0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        puVar2[-2] = hkaiNavVolumePathRequestInfo::vftable;
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



// FUNCTION 144c89db0 FUN_144c89db0 body=755 status=ok
// SIG undefined FUN_144c89db0(void)

void FUN_144c89db0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  
  lVar17 = (longlong)param_4;
  if (0 < param_4) {
    plVar19 = (longlong *)(param_1 + 0x18);
    do {
      plVar10 = (longlong *)((param_2 - param_1) + (longlong)plVar19);
      if (plVar10 != plVar19) {
        lVar6 = *plVar10;
        iVar3 = *(int *)((param_2 - param_1) + 8 + (longlong)plVar19);
        if ((int)(*(uint *)((longlong)plVar19 + 0xc) & 0x7fffffff) < iVar3) {
          FUN_144c9d040(plVar19,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        if (iVar3 < (int)plVar19[1]) {
          lVar11 = *plVar19;
          lVar13 = (longlong)(int)plVar19[1] * 0x20 + *plVar19;
          while (lVar13 != (longlong)iVar3 * 0x20 + lVar11) {
            lVar13 = lVar13 + -0x20;
            FUN_144c90d90(lVar13);
          }
        }
        lVar11 = *plVar19;
        iVar9 = iVar3;
        if ((int)plVar19[1] < iVar3) {
          iVar9 = (int)plVar19[1];
        }
        if ((lVar11 != lVar6) && (lVar13 = (longlong)iVar9, 0 < iVar9)) {
          puVar14 = (uint *)(lVar11 + 0xc);
          lVar11 = lVar6 - lVar11;
          do {
            puVar2 = (uint *)((longlong)puVar14 + lVar11 + -0xc);
            puVar1 = puVar14 + -3;
            if (puVar2 != puVar1) {
              uVar7 = *(undefined8 *)puVar2;
              uVar4 = *(uint *)(lVar11 + -4 + (longlong)puVar14);
              if ((int)(*puVar14 & 0x7fffffff) < (int)uVar4) {
                FUN_144c6c5b0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
              }
              FUN_144b3d470(*(undefined8 *)puVar1,uVar7,(longlong)(int)uVar4 * 4);
              puVar14[-1] = uVar4;
            }
            puVar2 = (uint *)(lVar11 + 4 + (longlong)puVar14);
            puVar1 = puVar14 + 1;
            if (puVar2 != puVar1) {
              lVar8 = *(longlong *)puVar1;
              if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
                (*DAT_14c787678)(DAT_14c6e47a8,lVar8,0);
                FUN_144b3ec00(puVar1);
              }
              FUN_140069ea2(puVar1,puVar2);
            }
            puVar14 = puVar14 + 8;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        puVar16 = (undefined8 *)(lVar6 + (longlong)iVar9 * 0x20);
        if (0 < iVar3 - iVar9) {
          uVar21 = (ulonglong)(uint)(iVar3 - iVar9);
          puVar20 = (undefined8 *)(*plVar19 + (longlong)iVar9 * 0x20);
          do {
            if (puVar20 != (undefined8 *)0x0) {
              *(undefined4 *)((longlong)puVar20 + 0xc) = 0x80000000;
              *puVar20 = 0;
              *(undefined4 *)(puVar20 + 1) = 0;
              uVar4 = *(uint *)(puVar16 + 1);
              puVar15 = (undefined4 *)*puVar16;
              if (0 < (int)uVar4) {
                puVar12 = (undefined4 *)
                          (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                    (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 2);
                *puVar20 = puVar12;
                *(uint *)(puVar20 + 1) = uVar4;
                uVar18 = (ulonglong)uVar4;
                *(uint *)((longlong)puVar20 + 0xc) = uVar4;
                do {
                  if (puVar12 != (undefined4 *)0x0) {
                    uVar5 = *puVar15;
                    puVar15 = puVar15 + 1;
                    *puVar12 = uVar5;
                  }
                  uVar18 = uVar18 - 1;
                  puVar12 = puVar12 + 1;
                } while (uVar18 != 0);
              }
              FUN_140069ea2(puVar20 + 2,puVar16 + 2);
              puVar16 = puVar16 + 4;
            }
            uVar21 = uVar21 - 1;
            puVar20 = puVar20 + 4;
          } while (uVar21 != 0);
        }
        *(int *)(plVar19 + 1) = iVar3;
      }
      plVar19 = plVar19 + 5;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}



// FUNCTION 144c8a0e0 FUN_144c8a0e0 body=77 status=ok
// SIG undefined FUN_144c8a0e0(void)

void FUN_144c8a0e0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8a130 FUN_144c8a130 body=578 status=ok
// SIG undefined FUN_144c8a130(void)

void FUN_144c8a130(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar9 = (uint *)(param_1 + 0x2c);
    lVar11 = (longlong)param_4;
    do {
      if (puVar9 + -0xb != (uint *)0x0) {
        puVar9[-9] = 0xffffffff;
        puVar9[-8] = 0;
        puVar9[-7] = 1;
        puVar9[-6] = 0;
        *(undefined ***)(puVar9 + -0xb) = hkaiSmoothPath::Details::State::vftable;
        lVar3 = *(longlong *)(param_2 + -0x14 + (longlong)puVar9);
        *(longlong *)(puVar9 + -5) = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar9);
        lVar3 = *(longlong *)(param_2 + -0xc + (longlong)puVar9);
        if (0 < (int)uVar2) {
          puVar8 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x140);
          *(undefined4 **)(puVar9 + -3) = puVar8;
          puVar10 = (undefined8 *)(lVar3 + 0x30);
          puVar9[-1] = uVar2;
          uVar12 = (ulonglong)uVar2;
          *puVar9 = uVar2;
          do {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *(undefined4 *)(puVar10 + -6);
              uVar7 = puVar10[-3];
              *(undefined8 *)(puVar8 + 4) = puVar10[-4];
              *(undefined8 *)(puVar8 + 6) = uVar7;
              uVar7 = puVar10[-1];
              *(undefined8 *)(puVar8 + 8) = puVar10[-2];
              *(undefined8 *)(puVar8 + 10) = uVar7;
              uVar7 = puVar10[1];
              *(undefined8 *)(puVar8 + 0xc) = *puVar10;
              *(undefined8 *)(puVar8 + 0xe) = uVar7;
              uVar7 = puVar10[3];
              *(undefined8 *)(puVar8 + 0x10) = puVar10[2];
              *(undefined8 *)(puVar8 + 0x12) = uVar7;
              uVar7 = puVar10[5];
              *(undefined8 *)(puVar8 + 0x14) = puVar10[4];
              *(undefined8 *)(puVar8 + 0x16) = uVar7;
              uVar7 = puVar10[7];
              *(undefined8 *)(puVar8 + 0x18) = puVar10[6];
              *(undefined8 *)(puVar8 + 0x1a) = uVar7;
              uVar4 = *(undefined4 *)((longlong)puVar10 + 0x44);
              uVar5 = *(undefined4 *)(puVar10 + 9);
              uVar6 = *(undefined4 *)((longlong)puVar10 + 0x4c);
              puVar8[0x1c] = *(undefined4 *)(puVar10 + 8);
              puVar8[0x1d] = uVar4;
              puVar8[0x1e] = uVar5;
              puVar8[0x1f] = uVar6;
              uVar4 = *(undefined4 *)((longlong)puVar10 + 0x54);
              uVar5 = *(undefined4 *)(puVar10 + 0xb);
              uVar6 = *(undefined4 *)((longlong)puVar10 + 0x5c);
              puVar8[0x20] = *(undefined4 *)(puVar10 + 10);
              puVar8[0x21] = uVar4;
              puVar8[0x22] = uVar5;
              puVar8[0x23] = uVar6;
              lVar3 = puVar10[0xc];
              *(longlong *)(puVar8 + 0x24) = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              lVar3 = puVar10[0xd];
              *(longlong *)(puVar8 + 0x26) = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              FUN_144c94840(puVar8 + 0x28,puVar10 + 0xe);
              puVar8[0x2c] = *(undefined4 *)(puVar10 + 0x10);
              uVar7 = puVar10[0x13];
              *(undefined8 *)(puVar8 + 0x30) = puVar10[0x12];
              *(undefined8 *)(puVar8 + 0x32) = uVar7;
              uVar7 = puVar10[0x15];
              *(undefined8 *)(puVar8 + 0x34) = puVar10[0x14];
              *(undefined8 *)(puVar8 + 0x36) = uVar7;
              uVar7 = puVar10[0x17];
              *(undefined8 *)(puVar8 + 0x38) = puVar10[0x16];
              *(undefined8 *)(puVar8 + 0x3a) = uVar7;
              uVar7 = puVar10[0x19];
              *(undefined8 *)(puVar8 + 0x3c) = puVar10[0x18];
              *(undefined8 *)(puVar8 + 0x3e) = uVar7;
              uVar7 = puVar10[0x1b];
              *(undefined8 *)(puVar8 + 0x40) = puVar10[0x1a];
              *(undefined8 *)(puVar8 + 0x42) = uVar7;
              uVar7 = puVar10[0x1d];
              *(undefined8 *)(puVar8 + 0x44) = puVar10[0x1c];
              *(undefined8 *)(puVar8 + 0x46) = uVar7;
              uVar4 = *(undefined4 *)((longlong)puVar10 + 0xf4);
              uVar5 = *(undefined4 *)(puVar10 + 0x1f);
              uVar6 = *(undefined4 *)((longlong)puVar10 + 0xfc);
              puVar8[0x48] = *(undefined4 *)(puVar10 + 0x1e);
              puVar8[0x49] = uVar4;
              puVar8[0x4a] = uVar5;
              puVar8[0x4b] = uVar6;
              puVar1 = puVar10 + 0x20;
              uVar7 = puVar10[0x21];
              puVar10 = puVar10 + 0x28;
              *(undefined8 *)(puVar8 + 0x4c) = *puVar1;
              *(undefined8 *)(puVar8 + 0x4e) = uVar7;
            }
            uVar12 = uVar12 - 1;
            puVar8 = puVar8 + 0x50;
          } while (uVar12 != 0);
        }
        puVar9[1] = *(uint *)(param_2 + 4 + (longlong)puVar9);
        puVar9[2] = *(uint *)(param_2 + 8 + (longlong)puVar9);
      }
      puVar9 = puVar9 + 0xe;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 144c8a380 FUN_144c8a380 body=77 status=ok
// SIG undefined FUN_144c8a380(void)

void FUN_144c8a380(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8a3d0 FUN_144c8a3d0 body=190 status=ok
// SIG undefined FUN_144c8a3d0(void)

void FUN_144c8a3d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8a490 FUN_144c8a490 body=91 status=ok
// SIG undefined FUN_144c8a490(void)

void FUN_144c8a490(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8a4f0 FUN_144c8a4f0 body=91 status=ok
// SIG undefined FUN_144c8a4f0(void)

void FUN_144c8a4f0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8a580 FUN_144c8a580 body=70 status=ok
// SIG undefined FUN_144c8a580(void)

void FUN_144c8a580(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c94e10(param_1,param_2 + param_1);
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8a5d0 FUN_144c8a5d0 body=505 status=ok
// SIG undefined FUN_144c8a5d0(void)

void FUN_144c8a5d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong local_40;
  
  local_40 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar12 = (longlong *)(param_1 + 0x10);
    do {
      plVar5 = (longlong *)(param_2 + -0x10 + (longlong)plVar12);
      plVar1 = plVar12 + -2;
      if (plVar1 != plVar5) {
        lVar3 = *plVar5;
        iVar2 = *(int *)(param_2 + -8 + (longlong)plVar12);
        if ((int)(*(uint *)((longlong)plVar12 + -4) & 0x7fffffff) < iVar2) {
          FUN_144c9ec10(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar12[-1]) {
          lVar10 = *plVar1;
          for (lVar6 = lVar10 + (longlong)(int)plVar12[-1] * 0x28;
              lVar6 != lVar10 + (longlong)iVar2 * 0x28; lVar6 = lVar6 + -0x28) {
            FUN_144c914e0(lVar6 + -0x20);
          }
        }
        lVar6 = *plVar1;
        iVar4 = iVar2;
        if ((int)plVar12[-1] < iVar2) {
          iVar4 = (int)plVar12[-1];
        }
        if ((lVar6 != lVar3) && (lVar10 = (longlong)iVar4, 0 < iVar4)) {
          lVar7 = lVar6 + 8;
          do {
            *(undefined4 *)(lVar7 + -8) = *(undefined4 *)((lVar3 - lVar6) + -8 + lVar7);
            FUN_144c921d0(lVar7,(lVar3 - lVar6) + lVar7);
            lVar7 = lVar7 + 0x28;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        puVar8 = (undefined4 *)((longlong)iVar4 * 0x28 + lVar3);
        if (0 < iVar2 - iVar4) {
          uVar9 = (ulonglong)(uint)(iVar2 - iVar4);
          puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 0x28);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar8;
              FUN_144c915a0(puVar11 + 2,puVar8 + 2);
              puVar8 = puVar8 + 10;
            }
            uVar9 = uVar9 - 1;
            puVar11 = puVar11 + 10;
          } while (uVar9 != 0);
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



// FUNCTION 144c8a860 FUN_144c8a860 body=324 status=ok
// SIG undefined FUN_144c8a860(void)

void FUN_144c8a860(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x30);
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_4;
    do {
      if (puVar6 + -0xc != (uint *)0x0) {
        puVar6[-10] = 0xffffffff;
        puVar6[-9] = 0;
        puVar6[-8] = 1;
        puVar6[-7] = 0;
        *(undefined ***)(puVar6 + -0xc) = hkaiStreamingSetInstance::vftable;
        puVar6[-6] = *(uint *)((longlong)puVar6 + param_2 + -0x18);
        puVar6[-5] = *(uint *)(param_2 + -0x14 + (longlong)puVar6);
        lVar3 = *(longlong *)((longlong)puVar6 + param_2 + -0x10);
        *(longlong *)(puVar6 + -4) = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0x80000000;
        uVar2 = *(uint *)((longlong)puVar6 + param_2);
        lVar3 = *(longlong *)((longlong)puVar6 + param_2 + -8);
        if (0 < (int)uVar2) {
          puVar4 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
          *(undefined4 **)(puVar6 + -2) = puVar4;
          puVar5 = (undefined4 *)(lVar3 + 4);
          *puVar6 = uVar2;
          uVar7 = (ulonglong)uVar2;
          puVar6[1] = uVar2;
          do {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = puVar5[-1];
              puVar4[1] = *puVar5;
              *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(puVar5 + 1);
              puVar1 = (undefined2 *)((longlong)puVar5 + 6);
              puVar5 = puVar5 + 3;
              *(undefined2 *)((longlong)puVar4 + 10) = *puVar1;
            }
            uVar7 = uVar7 - 1;
            puVar4 = puVar4 + 3;
          } while (uVar7 != 0);
        }
      }
      puVar6 = puVar6 + 0xe;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144c8a9b0 FUN_144c8a9b0 body=161 status=ok
// SIG undefined FUN_144c8a9b0(void)

undefined8 * FUN_144c8a9b0(undefined8 *param_1,uint param_2)

{
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
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144c8aa60 FUN_144c8aa60 body=74 status=ok
// SIG undefined FUN_144c8aa60(void)

void FUN_144c8aa60(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8aab0 FUN_144c8aab0 body=77 status=ok
// SIG undefined FUN_144c8aab0(void)

void FUN_144c8aab0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8ab30 FUN_144c8ab30 body=245 status=ok
// SIG undefined FUN_144c8ab30(void)

void FUN_144c8ab30(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x34);
    param_2 = param_2 - param_1;
    lVar7 = (longlong)param_4;
    do {
      puVar6[-7] = *(uint *)((longlong)puVar6 + param_2 + -0x1c);
      puVar6[-6] = *(uint *)((longlong)puVar6 + param_2 + -0x18);
      lVar3 = *(longlong *)((longlong)puVar6 + param_2 + -0x14);
      if (*(longlong *)(puVar6 + -5) != lVar3) {
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        lVar3 = *(longlong *)(puVar6 + -5);
        *(undefined8 *)(puVar6 + -5) = *(undefined8 *)((longlong)puVar6 + param_2 + -0x14);
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
      }
      puVar5 = (uint *)(param_2 + -0xc + (longlong)puVar6);
      puVar1 = puVar6 + -3;
      if (puVar5 != puVar1) {
        uVar4 = *(undefined8 *)puVar5;
        uVar2 = *(uint *)((longlong)puVar6 + param_2 + -4);
        if ((int)(*puVar6 & 0x7fffffff) < (int)uVar2) {
          FUN_144c9b970(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar2 * 0xc);
        puVar6[-1] = uVar2;
      }
      puVar6 = puVar6 + 0xe;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144c8ad00 FUN_144c8ad00 body=80 status=ok
// SIG undefined FUN_144c8ad00(void)

void FUN_144c8ad00(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8ad50 FUN_144c8ad50 body=18 status=ok
// SIG undefined FUN_144c8ad50(void)

undefined8 * FUN_144c8ad50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6edbd0;
  return param_2;
}



// FUNCTION 144c8adb0 FUN_144c8adb0 body=63 status=ok
// SIG undefined FUN_144c8adb0(void)

void FUN_144c8adb0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8adf0 FUN_144c8adf0 body=63 status=ok
// SIG undefined FUN_144c8adf0(void)

void FUN_144c8adf0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x100 + param_1;
    do {
      FUN_144fb0760(param_1);
      param_1 = param_1 + -0x100;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c8ae30 FUN_144c8ae30 body=89 status=ok
// SIG undefined FUN_144c8ae30(void)

void FUN_144c8ae30(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8ae90 FUN_144c8ae90 body=104 status=ok
// SIG undefined FUN_144c8ae90(void)

void FUN_144c8ae90(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        *(undefined4 *)(param_1 + 1) = 0;
        *param_1 = (longlong)(param_1 + 2);
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000004;
        FUN_144c4eb70(param_1,param_2);
      }
      param_2 = param_2 + 0x20;
      param_1 = param_1 + 4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8af00 FUN_144c8af00 body=74 status=ok
// SIG undefined FUN_144c8af00(void)

void FUN_144c8af00(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8af50 FUN_144c8af50 body=97 status=ok
// SIG undefined FUN_144c8af50(void)

void FUN_144c8af50(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8b000 FUN_144c8b000 body=131 status=ok
// SIG undefined FUN_144c8b000(void)

void FUN_144c8b000(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (uint *)(lVar2 * 0x20 + 0xc + param_1);
    do {
      puVar1[-1] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar1 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar1 + -3),
                   (ulonglong)(*puVar1 & 0x7fffffff) << 2);
      }
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -8;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144c8b090 FUN_144c8b090 body=18 status=ok
// SIG undefined FUN_144c8b090(void)

undefined8 * FUN_144c8b090(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6edcf0;
  return param_2;
}



// FUNCTION 144c8b0e0 FUN_144c8b0e0 body=173 status=ok
// SIG undefined FUN_144c8b0e0(void)

undefined8 * FUN_144c8b0e0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
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



// FUNCTION 144c8b190 FUN_144c8b190 body=185 status=ok
// SIG undefined FUN_144c8b190(void)

void FUN_144c8b190(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
          FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 4);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c8b250 FUN_144c8b250 body=80 status=ok
// SIG undefined FUN_144c8b250(void)

void FUN_144c8b250(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8b2a0 FUN_144c8b2a0 body=74 status=ok
// SIG undefined FUN_144c8b2a0(void)

void FUN_144c8b2a0(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8b2f0 FUN_144c8b2f0 body=63 status=ok
// SIG undefined FUN_144c8b2f0(void)

void FUN_144c8b2f0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8b340 FUN_144c8b340 body=97 status=ok
// SIG undefined FUN_144c8b340(void)

void FUN_144c8b340(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8b3e0 FUN_144c8b3e0 body=290 status=ok
// SIG undefined FUN_144c8b3e0(void)

undefined8 * FUN_144c8b3e0(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) * 0x24);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) * 0x2c);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) * 0x30);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
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



// FUNCTION 144c8b510 FUN_144c8b510 body=74 status=ok
// SIG undefined FUN_144c8b510(void)

void FUN_144c8b510(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8b560 FUN_144c8b560 body=956 status=ok
// SIG undefined FUN_144c8b560(void)

void FUN_144c8b560(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_4;
    puVar8 = (uint *)(param_1 + 0x3c);
    do {
      if (puVar8 + -0xf != (uint *)0x0) {
        puVar8[-0xb] = 1;
        puVar8[-10] = 0;
        puVar8[-0xd] = 0xffffffff;
        puVar8[-0xc] = 0;
        *(undefined ***)(puVar8 + -0xf) = hkaiPathRequestQueue::vftable;
        *(undefined1 *)(puVar8 + -9) = *(undefined1 *)(param_2 + -0x24 + (longlong)puVar8);
        puVar8[-7] = 0;
        puVar8[-6] = 0;
        puVar8[-5] = 0;
        puVar8[-4] = 0x80000000;
        uVar2 = *(uint *)(param_2 + -0x14 + (longlong)puVar8);
        lVar3 = *(longlong *)(param_2 + -0x1c + (longlong)puVar8);
        if (0 < (int)uVar2) {
          puVar4 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x38);
          *(undefined8 **)(puVar8 + -7) = puVar4;
          plVar7 = (longlong *)(lVar3 + 0x20);
          puVar8[-5] = uVar2;
          puVar8[-4] = uVar2;
          uVar6 = (ulonglong)uVar2;
          do {
            if (puVar4 != (undefined8 *)0x0) {
              puVar4[1] = 0xffffffff;
              puVar4[2] = 1;
              *puVar4 = hkaiNavMeshPathRequestInfo::vftable;
              lVar3 = plVar7[-1];
              puVar4[3] = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              lVar3 = *plVar7;
              puVar4[4] = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              puVar4[5] = plVar7[1];
              *(int *)(puVar4 + 6) = (int)plVar7[2];
              *(undefined1 *)((longlong)puVar4 + 0x34) = *(undefined1 *)((longlong)plVar7 + 0x14);
              *(undefined1 *)((longlong)puVar4 + 0x35) = *(undefined1 *)((longlong)plVar7 + 0x15);
              puVar1 = (undefined1 *)((longlong)plVar7 + 0x16);
              plVar7 = plVar7 + 7;
              *(undefined1 *)((longlong)puVar4 + 0x36) = *puVar1;
            }
            uVar6 = uVar6 - 1;
            puVar4 = puVar4 + 7;
          } while (uVar6 != 0);
        }
        puVar8[-3] = 0;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar8);
        lVar3 = *(longlong *)((longlong)puVar8 + param_2 + -0xc);
        if (0 < (int)uVar2) {
          puVar4 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x38);
          *(undefined8 **)(puVar8 + -3) = puVar4;
          plVar7 = (longlong *)(lVar3 + 0x20);
          puVar8[-1] = uVar2;
          *puVar8 = uVar2;
          uVar6 = (ulonglong)uVar2;
          do {
            if (puVar4 != (undefined8 *)0x0) {
              puVar4[1] = 0xffffffff;
              puVar4[2] = 1;
              *puVar4 = hkaiNavVolumePathRequestInfo::vftable;
              lVar3 = plVar7[-1];
              puVar4[3] = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              lVar3 = *plVar7;
              puVar4[4] = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              puVar4[5] = plVar7[1];
              *(int *)(puVar4 + 6) = (int)plVar7[2];
              *(undefined1 *)((longlong)puVar4 + 0x34) = *(undefined1 *)((longlong)plVar7 + 0x14);
              *(undefined1 *)((longlong)puVar4 + 0x35) = *(undefined1 *)((longlong)plVar7 + 0x15);
              puVar1 = (undefined1 *)((longlong)plVar7 + 0x16);
              plVar7 = plVar7 + 7;
              *(undefined1 *)((longlong)puVar4 + 0x36) = *puVar1;
            }
            uVar6 = uVar6 - 1;
            puVar4 = puVar4 + 7;
          } while (uVar6 != 0);
        }
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0x80000000;
        uVar2 = *(uint *)(param_2 + 0xc + (longlong)puVar8);
        uVar6 = (ulonglong)uVar2;
        plVar7 = *(longlong **)(param_2 + 4 + (longlong)puVar8);
        if (0 < (int)uVar2) {
          plVar5 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          *(longlong **)(puVar8 + 1) = plVar5;
          puVar8[3] = uVar2;
          puVar8[4] = uVar2;
          do {
            if (plVar5 != (longlong *)0x0) {
              lVar3 = *plVar7;
              *plVar5 = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              plVar7 = plVar7 + 1;
            }
            uVar6 = uVar6 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar6 != 0);
        }
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0x80000000;
        uVar2 = *(uint *)(param_2 + 0x1c + (longlong)puVar8);
        uVar6 = (ulonglong)uVar2;
        plVar7 = *(longlong **)(param_2 + 0x14 + (longlong)puVar8);
        if (0 < (int)uVar2) {
          plVar5 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          *(longlong **)(puVar8 + 5) = plVar5;
          puVar8[7] = uVar2;
          puVar8[8] = uVar2;
          do {
            if (plVar5 != (longlong *)0x0) {
              lVar3 = *plVar7;
              *plVar5 = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              plVar7 = plVar7 + 1;
            }
            uVar6 = uVar6 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar6 != 0);
        }
      }
      puVar8 = puVar8 + 0x18;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c8b920 FUN_144c8b920 body=87 status=ok
// SIG undefined FUN_144c8b920(void)

undefined8 FUN_144c8b920(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c8b980 FUN_144c8b980 body=88 status=ok
// SIG undefined FUN_144c8b980(void)

void FUN_144c8b980(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8b9e0 FUN_144c8b9e0 body=70 status=ok
// SIG undefined FUN_144c8b9e0(void)

void FUN_144c8b9e0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c95af0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8ba60 FUN_144c8ba60 body=91 status=ok
// SIG undefined FUN_144c8ba60(void)

void FUN_144c8ba60(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8bac0 FUN_144c8bac0 body=74 status=ok
// SIG undefined FUN_144c8bac0(void)

void FUN_144c8bac0(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8bb10 FUN_144c8bb10 body=58 status=ok
// SIG undefined FUN_144c8bb10(void)

void FUN_144c8bb10(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144fb6e80(param_1);
      }
      param_1 = param_1 + 0x168;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8bb50 FUN_144c8bb50 body=74 status=ok
// SIG undefined FUN_144c8bb50(void)

void FUN_144c8bb50(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8bc50 FUN_144c8bc50 body=665 status=ok
// SIG undefined FUN_144c8bc50(void)

void FUN_144c8bc50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    puVar9 = (undefined1 *)(param_1 + 0x34);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      if ((undefined8 *)(puVar9 + -0x34) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar9 + -0x2c) = 0xffffffff;
        *(undefined8 *)(puVar9 + -0x24) = 1;
        *(undefined ***)(puVar9 + -0x34) = hkaiNavMeshCutter::vftable;
        lVar3 = *(longlong *)(puVar9 + param_2 + -0x1c);
        *(longlong *)(puVar9 + -0x1c) = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        *(undefined8 *)(puVar9 + -0x14) = 0;
        *(undefined4 *)(puVar9 + -0xc) = 0;
        *(undefined4 *)(puVar9 + -8) = 0x80000000;
        uVar2 = *(uint *)(puVar9 + param_2 + -0xc);
        uVar10 = (ulonglong)uVar2;
        plVar11 = *(longlong **)(puVar9 + param_2 + -0x14);
        if (0 < (int)uVar2) {
          plVar8 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          *(longlong **)(puVar9 + -0x14) = plVar8;
          *(uint *)(puVar9 + -0xc) = uVar2;
          *(uint *)(puVar9 + -8) = uVar2;
          do {
            if (plVar8 != (longlong *)0x0) {
              lVar3 = *plVar11;
              *plVar8 = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              plVar11 = plVar11 + 1;
            }
            uVar10 = uVar10 - 1;
            plVar8 = plVar8 + 1;
          } while (uVar10 != 0);
        }
        *(undefined4 *)(puVar9 + -4) = *(undefined4 *)(puVar9 + param_2 + -4);
        *puVar9 = puVar9[param_2];
        *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar9 + param_2 + 4);
        *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar9 + param_2 + 8);
        uVar7 = *(undefined8 *)((longlong)(puVar9 + param_2 + 0xc) + 8);
        *(undefined8 *)(puVar9 + 0xc) = *(undefined8 *)(puVar9 + param_2 + 0xc);
        *(undefined8 *)(puVar9 + 0x14) = uVar7;
        uVar7 = *(undefined8 *)((longlong)(puVar9 + param_2 + 0x1c) + 8);
        *(undefined8 *)(puVar9 + 0x1c) = *(undefined8 *)(puVar9 + param_2 + 0x1c);
        *(undefined8 *)(puVar9 + 0x24) = uVar7;
        uVar7 = *(undefined8 *)((longlong)(puVar9 + param_2 + 0x2c) + 8);
        *(undefined8 *)(puVar9 + 0x2c) = *(undefined8 *)(puVar9 + param_2 + 0x2c);
        *(undefined8 *)(puVar9 + 0x34) = uVar7;
        uVar7 = *(undefined8 *)((longlong)(puVar9 + param_2 + 0x3c) + 8);
        *(undefined8 *)(puVar9 + 0x3c) = *(undefined8 *)(puVar9 + param_2 + 0x3c);
        *(undefined8 *)(puVar9 + 0x44) = uVar7;
        uVar7 = *(undefined8 *)((longlong)(puVar9 + param_2 + 0x4c) + 8);
        *(undefined8 *)(puVar9 + 0x4c) = *(undefined8 *)(puVar9 + param_2 + 0x4c);
        *(undefined8 *)(puVar9 + 0x54) = uVar7;
        uVar7 = *(undefined8 *)((longlong)(puVar9 + param_2 + 0x5c) + 8);
        *(undefined8 *)(puVar9 + 0x5c) = *(undefined8 *)(puVar9 + param_2 + 0x5c);
        *(undefined8 *)(puVar9 + 100) = uVar7;
        uVar7 = *(undefined8 *)((longlong)(puVar9 + param_2 + 0x6c) + 8);
        *(undefined8 *)(puVar9 + 0x6c) = *(undefined8 *)(puVar9 + param_2 + 0x6c);
        *(undefined8 *)(puVar9 + 0x74) = uVar7;
        uVar7 = *(undefined8 *)((longlong)(puVar9 + param_2 + 0x7c) + 8);
        *(undefined8 *)(puVar9 + 0x7c) = *(undefined8 *)(puVar9 + param_2 + 0x7c);
        *(undefined8 *)(puVar9 + 0x84) = uVar7;
        uVar7 = *(undefined8 *)((longlong)(puVar9 + param_2 + 0x8c) + 8);
        *(undefined8 *)(puVar9 + 0x8c) = *(undefined8 *)(puVar9 + param_2 + 0x8c);
        *(undefined8 *)(puVar9 + 0x94) = uVar7;
        uVar7 = *(undefined8 *)((longlong)(puVar9 + param_2 + 0x9c) + 8);
        *(undefined8 *)(puVar9 + 0x9c) = *(undefined8 *)(puVar9 + param_2 + 0x9c);
        *(undefined8 *)(puVar9 + 0xa4) = uVar7;
        puVar1 = (undefined4 *)(puVar9 + param_2 + 0xac);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *(undefined4 *)(puVar9 + 0xac) = *puVar1;
        *(undefined4 *)(puVar9 + 0xb0) = uVar4;
        *(undefined4 *)(puVar9 + 0xb4) = uVar5;
        *(undefined4 *)(puVar9 + 0xb8) = uVar6;
        *(undefined8 *)(puVar9 + 0xbc) = *(undefined8 *)(puVar9 + param_2 + 0xbc);
        lVar3 = *(longlong *)(puVar9 + param_2 + 0xc4);
        *(longlong *)(puVar9 + 0xc4) = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        *(undefined4 *)(puVar9 + 0xcc) = *(undefined4 *)(puVar9 + param_2 + 0xcc);
        *(undefined4 *)(puVar9 + 0xd0) = *(undefined4 *)(puVar9 + param_2 + 0xd0);
        puVar9[0xd4] = puVar9[param_2 + 0xd4];
        *(undefined4 *)(puVar9 + 0xd8) = *(undefined4 *)(puVar9 + param_2 + 0xd8);
        puVar9[0xdc] = puVar9[param_2 + 0xdc];
        *(undefined4 *)(puVar9 + 0xe0) = *(undefined4 *)(puVar9 + param_2 + 0xe0);
        *(undefined4 *)(puVar9 + 0xe4) = *(undefined4 *)(puVar9 + param_2 + 0xe4);
        FUN_144c923a0(puVar9 + 0xec,puVar9 + param_2 + 0xec);
        FUN_144c96a00(puVar9 + 0x10c,puVar9 + param_2 + 0x10c);
        lVar3 = *(longlong *)(puVar9 + param_2 + 300);
        *(longlong *)(puVar9 + 300) = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
      }
      puVar9 = puVar9 + 0x168;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c8bef0 FUN_144c8bef0 body=18 status=ok
// SIG undefined FUN_144c8bef0(void)

undefined8 * FUN_144c8bef0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ee390;
  return param_2;
}



// FUNCTION 144c8bf10 FUN_144c8bf10 body=18 status=ok
// SIG undefined FUN_144c8bf10(void)

undefined8 * FUN_144c8bf10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ee330;
  return param_2;
}



// FUNCTION 144c8bf30 FUN_144c8bf30 body=94 status=ok
// SIG undefined FUN_144c8bf30(void)

void FUN_144c8bf30(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x168 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x2d;
      plVar2 = plVar2 + -0x2d;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c8bfe0 FUN_144c8bfe0 body=74 status=ok
// SIG undefined FUN_144c8bfe0(void)

void FUN_144c8bfe0(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8c060 FUN_144c8c060 body=271 status=ok
// SIG undefined FUN_144c8c060(void)

undefined8 * FUN_144c8c060(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)param_1[4];
  if (plVar2 + (longlong)*(int *)(param_1 + 5) * 0x28 != plVar2) {
    plVar3 = plVar2 + (longlong)*(int *)(param_1 + 5) * 0x28 + 0x13;
    do {
      FUN_144c94770(plVar3 + -0x27);
      if (plVar3[-0x28] != 0) {
        FUN_144b3f230();
      }
      if (plVar3[-0x29] != 0) {
        FUN_144b3f230();
      }
      plVar1 = plVar3 + -0x3b;
      plVar3 = plVar3 + -0x28;
    } while (plVar1 != plVar2);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) * 0x140);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
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



// FUNCTION 144c8c180 FUN_144c8c180 body=301 status=ok
// SIG undefined FUN_144c8c180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c8c180(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if (0 < param_3) {
    puVar5 = (undefined4 *)(param_1 + 0xf8);
    lVar6 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar5 + -0x3e) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar5 + -0x3e) = 0;
        *(undefined8 *)(puVar5 + -0x3c) = 0;
        *(undefined8 *)(puVar5 + -0x3a) = 0;
        puVar5[-0x38] = 0;
        *(undefined8 *)(puVar5 + -0x37) = 0xffffffff80000000;
        *(undefined8 *)(puVar5 + -0x35) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + -0x33) = 0;
        uVar4 = uRam000000014c6dae48;
        *(undefined8 *)(puVar5 + -0x2e) = _DAT_14c6dae40;
        *(undefined8 *)(puVar5 + -0x2c) = uVar4;
        uVar4 = uRam000000014c6dae58;
        *(undefined8 *)(puVar5 + -0x2a) = _DAT_14c6dae50;
        *(undefined8 *)(puVar5 + -0x28) = uVar4;
        uVar3 = uRam000000014c6dae6c;
        uVar2 = uRam000000014c6dae68;
        uVar1 = uRam000000014c6dae64;
        puVar5[-0x26] = _DAT_14c6dae60;
        puVar5[-0x25] = uVar1;
        puVar5[-0x24] = uVar2;
        puVar5[-0x23] = uVar3;
        uVar3 = DAT_14c6dae7c;
        uVar2 = DAT_14c6dae78;
        uVar1 = DAT_14c6dae74;
        puVar5[-0x22] = DAT_14c6dae70;
        puVar5[-0x21] = uVar1;
        puVar5[-0x20] = uVar2;
        puVar5[-0x1f] = uVar3;
        *(undefined8 *)(puVar5 + -0x1e) = 0;
        *(undefined8 *)(puVar5 + -0x1c) = 0;
        *(undefined8 *)(puVar5 + -0x1a) = 0;
        *(undefined8 *)(puVar5 + -0x18) = 0;
        *(undefined8 *)(puVar5 + -0xe) = 0;
        puVar5[-0xc] = 0;
        puVar5[-0xb] = 0x80000000;
        uVar4 = FUN_144b3d480();
        *(undefined8 *)(puVar5 + -10) = uVar4;
        puVar5[-8] = 0;
        *(undefined8 *)(puVar5 + -6) = 0;
        puVar5[-4] = 0;
        puVar5[-3] = 0x80000000;
        uVar4 = FUN_144b3d480();
        *(undefined8 *)(puVar5 + -2) = uVar4;
        *puVar5 = 0;
        *(undefined1 *)(puVar5 + 2) = 0;
        *(undefined8 *)(puVar5 + 4) = 0;
        puVar5[6] = 0;
        puVar5[7] = 0x80000000;
        puVar5[8] = 0;
        *(undefined1 *)(puVar5 + -0x16) = 0;
        *(undefined8 *)(puVar5 + -0x12) = 0;
        *(undefined8 *)(puVar5 + -0x10) = 0;
      }
      puVar5 = puVar5 + 0x48;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c8c2b0 FUN_144c8c2b0 body=159 status=ok
// SIG undefined FUN_144c8c2b0(void)

void FUN_144c8c2b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        puVar2[-2] = hkaiNavMeshQueryMediator::vftable;
        lVar1 = *(longlong *)((param_2 - param_1) + 8 + (longlong)puVar2);
        puVar2[1] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        puVar2[2] = *(undefined8 *)((param_2 - param_1) + 0x10 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c8c350 FUN_144c8c350 body=58 status=ok
// SIG undefined FUN_144c8c350(void)

void FUN_144c8c350(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144b40b30(param_1);
      }
      param_1 = param_1 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8c390 FUN_144c8c390 body=88 status=ok
// SIG undefined FUN_144c8c390(void)

void FUN_144c8c390(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8c3f0 FUN_144c8c3f0 body=78 status=ok
// SIG undefined FUN_144c8c3f0(void)

void FUN_144c8c3f0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_145004380(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8c440 FUN_144c8c440 body=78 status=ok
// SIG undefined FUN_144c8c440(void)

void FUN_144c8c440(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c2ee50(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8c4e0 FUN_144c8c4e0 body=94 status=ok
// SIG undefined FUN_144c8c4e0(void)

void FUN_144c8c4e0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8c570 FUN_144c8c570 body=161 status=ok
// SIG undefined FUN_144c8c570(void)

undefined8 * FUN_144c8c570(undefined8 *param_1,uint param_2)

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
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c8c620 FUN_144c8c620 body=73 status=ok
// SIG undefined FUN_144c8c620(void)

void FUN_144c8c620(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c2f0b0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8c670 FUN_144c8c670 body=80 status=ok
// SIG undefined FUN_144c8c670(void)

void FUN_144c8c670(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8c6f0 FUN_144c8c6f0 body=74 status=ok
// SIG undefined FUN_144c8c6f0(void)

void FUN_144c8c6f0(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8c740 FUN_144c8c740 body=63 status=ok
// SIG undefined FUN_144c8c740(void)

void FUN_144c8c740(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8c7b0 FUN_144c8c7b0 body=80 status=ok
// SIG undefined FUN_144c8c7b0(void)

void FUN_144c8c7b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8c800 FUN_144c8c800 body=94 status=ok
// SIG undefined FUN_144c8c800(void)

void FUN_144c8c800(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x1e0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x3c;
      plVar2 = plVar2 + -0x3c;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c8c860 FUN_144c8c860 body=97 status=ok
// SIG undefined FUN_144c8c860(void)

void FUN_144c8c860(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8c8d0 FUN_144c8c8d0 body=63 status=ok
// SIG undefined FUN_144c8c8d0(void)

void FUN_144c8c8d0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8c910 FUN_144c8c910 body=80 status=ok
// SIG undefined FUN_144c8c910(void)

void FUN_144c8c910(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8ca90 FUN_144c8ca90 body=63 status=ok
// SIG undefined FUN_144c8ca90(void)

void FUN_144c8ca90(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8cad0 FUN_144c8cad0 body=97 status=ok
// SIG undefined FUN_144c8cad0(void)

void FUN_144c8cad0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8cbe0 FUN_144c8cbe0 body=97 status=ok
// SIG undefined FUN_144c8cbe0(void)

void FUN_144c8cbe0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8cc80 FUN_144c8cc80 body=74 status=ok
// SIG undefined FUN_144c8cc80(void)

void FUN_144c8cc80(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8ccd0 FUN_144c8ccd0 body=275 status=ok
// SIG undefined FUN_144c8ccd0(void)

void FUN_144c8ccd0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
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
        *(undefined ***)(puVar6 + -9) = hkaiSearchExpansionRecord::vftable;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar2 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar6);
        puVar4 = *(undefined8 **)((param_2 - param_1) + -0xc + (longlong)puVar6);
        if (0 < (int)uVar2) {
          puVar3 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
          *(undefined8 **)(puVar6 + -3) = puVar3;
          puVar6[-1] = uVar2;
          uVar7 = (ulonglong)uVar2;
          *puVar6 = uVar2;
          do {
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = *puVar4;
              puVar1 = puVar4 + 1;
              puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
              *(undefined4 *)(puVar3 + 1) = *(undefined4 *)puVar1;
            }
            uVar7 = uVar7 - 1;
            puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
          } while (uVar7 != 0);
        }
      }
      puVar6 = puVar6 + 10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144c8cdf0 FUN_144c8cdf0 body=88 status=ok
// SIG undefined FUN_144c8cdf0(void)

void FUN_144c8cdf0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8ce80 FUN_144c8ce80 body=88 status=ok
// SIG undefined FUN_144c8ce80(void)

void FUN_144c8ce80(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8cef0 FUN_144c8cef0 body=310 status=ok
// SIG undefined FUN_144c8cef0(void)

void FUN_144c8cef0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    plVar7 = (longlong *)(param_1 + 0x18);
    lVar8 = (longlong)param_4;
    do {
      plVar4 = (longlong *)((param_2 - param_1) + (longlong)plVar7);
      if (plVar4 != plVar7) {
        puVar10 = (undefined8 *)*plVar4;
        iVar2 = *(int *)((param_2 - param_1) + 8 + (longlong)plVar7);
        if ((int)(*(uint *)((longlong)plVar7 + 0xc) & 0x7fffffff) < iVar2) {
          FUN_144c9e000(plVar7,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        puVar5 = (undefined8 *)*plVar7;
        iVar3 = iVar2;
        if ((int)plVar7[1] < iVar2) {
          iVar3 = (int)plVar7[1];
        }
        if ((puVar5 != puVar10) && (lVar6 = (longlong)iVar3, 0 < iVar3)) {
          lVar9 = (longlong)puVar10 - (longlong)puVar5;
          do {
            *puVar5 = *(undefined8 *)(lVar9 + (longlong)puVar5);
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar9 + 8 + (longlong)puVar5);
            puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        puVar10 = (undefined8 *)((longlong)puVar10 + (longlong)iVar3 * 0xc);
        if (0 < iVar2 - iVar3) {
          uVar11 = (ulonglong)(uint)(iVar2 - iVar3);
          puVar5 = (undefined8 *)(*plVar7 + (longlong)iVar3 * 0xc);
          do {
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = *puVar10;
              puVar1 = puVar10 + 1;
              puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
              *(undefined4 *)(puVar5 + 1) = *(undefined4 *)puVar1;
            }
            uVar11 = uVar11 - 1;
            puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
          } while (uVar11 != 0);
        }
        *(int *)(plVar7 + 1) = iVar2;
      }
      plVar7 = plVar7 + 5;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144c8d030 FUN_144c8d030 body=74 status=ok
// SIG undefined FUN_144c8d030(void)

void FUN_144c8d030(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8d130 FUN_144c8d130 body=18 status=ok
// SIG undefined FUN_144c8d130(void)

undefined8 * FUN_144c8d130(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6fd7a0;
  return param_2;
}



// FUNCTION 144c8d150 FUN_144c8d150 body=75 status=ok
// SIG undefined FUN_144c8d150(void)

void FUN_144c8d150(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c94070(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8d1d0 FUN_144c8d1d0 body=80 status=ok
// SIG undefined FUN_144c8d1d0(void)

void FUN_144c8d1d0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8d220 FUN_144c8d220 body=77 status=ok
// SIG undefined FUN_144c8d220(void)

void FUN_144c8d220(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8d270 FUN_144c8d270 body=87 status=ok
// SIG undefined FUN_144c8d270(void)

undefined8 FUN_144c8d270(undefined8 param_1,ulonglong param_2)

{
  FUN_1450161d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 144c8d2d0 FUN_144c8d2d0 body=18 status=ok
// SIG undefined FUN_144c8d2d0(void)

undefined8 * FUN_144c8d2d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ee860;
  return param_2;
}



// FUNCTION 144c8d2f0 FUN_144c8d2f0 body=63 status=ok
// SIG undefined FUN_144c8d2f0(void)

void FUN_144c8d2f0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8d330 FUN_144c8d330 body=632 status=ok
// SIG undefined FUN_144c8d330(void)

void FUN_144c8d330(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0x2c);
    lVar6 = (longlong)param_4;
    do {
      puVar1 = puVar5 + -3;
      puVar5[-5] = *(uint *)((longlong)puVar5 + param_2 + -0x14);
      puVar2 = (uint *)((longlong)puVar5 + param_2 + -0xc);
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar5);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_144c9c2e0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 0x30);
        puVar5[-1] = uVar3;
      }
      puVar2 = (uint *)((longlong)puVar5 + param_2 + 4);
      puVar1 = puVar5 + 1;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)(param_2 + 0xc + (longlong)puVar5);
        if ((int)(puVar5[4] & 0x7fffffff) < (int)uVar3) {
          FUN_144c9c390(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 0x2c);
        puVar5[3] = uVar3;
      }
      puVar2 = (uint *)((longlong)puVar5 + param_2 + 0x14);
      puVar1 = puVar5 + 5;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)(param_2 + 0x1c + (longlong)puVar5);
        if ((int)(puVar5[8] & 0x7fffffff) < (int)uVar3) {
          FUN_144c9c430(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 0x24);
        puVar5[7] = uVar3;
      }
      puVar5[9] = *(uint *)((longlong)puVar5 + param_2 + 0x24);
      *(undefined8 *)(puVar5 + 10) = *(undefined8 *)((longlong)puVar5 + param_2 + 0x28);
      *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)((longlong)puVar5 + param_2 + 0x30);
      puVar5[0xe] = *(uint *)((longlong)puVar5 + param_2 + 0x38);
      *(undefined8 *)(puVar5 + 0xf) = *(undefined8 *)((longlong)puVar5 + param_2 + 0x3c);
      *(undefined8 *)(puVar5 + 0x11) = *(undefined8 *)((longlong)puVar5 + param_2 + 0x44);
      puVar5[0x13] = *(uint *)((longlong)puVar5 + param_2 + 0x4c);
      puVar5 = puVar5 + 0x20;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c8d610 FUN_144c8d610 body=97 status=ok
// SIG undefined FUN_144c8d610(void)

void FUN_144c8d610(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8d6c0 FUN_144c8d6c0 body=74 status=ok
// SIG undefined FUN_144c8d6c0(void)

void FUN_144c8d6c0(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8d710 FUN_144c8d710 body=431 status=ok
// SIG undefined FUN_144c8d710(void)

void FUN_144c8d710(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  
  lVar11 = (longlong)param_4;
  if (0 < param_4) {
    puVar13 = (uint *)(param_1 + 0x24);
    do {
      if (puVar13 + -9 != (uint *)0x0) {
        puVar13[-7] = 0xffffffff;
        puVar13[-6] = 0;
        puVar13[-5] = 1;
        puVar13[-4] = 0;
        *(undefined ***)(puVar13 + -9) = hkaiNavMeshModifiedAabbs::vftable;
        puVar13[-3] = 0;
        puVar13[-2] = 0;
        puVar13[-1] = 0;
        *puVar13 = 0x80000000;
        uVar2 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar13);
        puVar14 = *(undefined8 **)((param_2 - param_1) + -0xc + (longlong)puVar13);
        if (0 < (int)uVar2) {
          puVar7 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 4);
          *(undefined8 **)(puVar13 + -3) = puVar7;
          puVar13[-1] = uVar2;
          uVar12 = (ulonglong)uVar2;
          *puVar13 = uVar2;
          do {
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = 0;
              *(undefined4 *)(puVar7 + 1) = 0;
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0x80000000;
              uVar2 = *(uint *)(puVar14 + 1);
              puVar10 = (undefined4 *)*puVar14;
              if (0 < (int)uVar2) {
                puVar8 = (undefined4 *)
                         (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                   (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 5);
                *puVar7 = puVar8;
                uVar9 = (ulonglong)uVar2;
                *(uint *)(puVar7 + 1) = uVar2;
                *(uint *)((longlong)puVar7 + 0xc) = uVar2;
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
                    uVar6 = *(undefined8 *)(puVar10 + 6);
                    puVar10 = puVar10 + 8;
                    *(undefined8 *)(puVar8 + 4) = *puVar1;
                    *(undefined8 *)(puVar8 + 6) = uVar6;
                  }
                  uVar9 = uVar9 - 1;
                  puVar8 = puVar8 + 8;
                } while (uVar9 != 0);
              }
              puVar14 = puVar14 + 2;
            }
            uVar12 = uVar12 - 1;
            puVar7 = puVar7 + 2;
          } while (uVar12 != 0);
        }
      }
      puVar13 = puVar13 + 10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 144c8d8c0 FUN_144c8d8c0 body=110 status=ok
// SIG undefined FUN_144c8d8c0(void)

void FUN_144c8d8c0(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        *(undefined4 *)(param_1 + 1) = 0;
        *param_1 = (longlong)(param_1 + 2);
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000020;
        FUN_144c96440(param_1,param_2);
      }
      param_2 = param_2 + 0x310;
      param_1 = param_1 + 0x62;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8d960 FUN_144c8d960 body=74 status=ok
// SIG undefined FUN_144c8d960(void)

void FUN_144c8d960(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8d9b0 FUN_144c8d9b0 body=88 status=ok
// SIG undefined FUN_144c8d9b0(void)

void FUN_144c8d9b0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8da10 FUN_144c8da10 body=379 status=ok
// SIG undefined FUN_144c8da10(void)

void FUN_144c8da10(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  lVar6 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar10 = (longlong *)(lVar6 * 0x310 + param_1);
    do {
      puVar4 = (uint *)*plVar10;
      if (puVar4 + (longlong)(int)plVar10[1] * 6 != puVar4) {
        puVar7 = puVar4 + (longlong)(int)plVar10[1] * 6 + 3;
        do {
          puVar1 = puVar7 + -6;
          puVar2 = puVar7 + -9;
          uVar5 = 0;
          uVar9 = 0;
          if (0 < (int)puVar7[-7]) {
            do {
              pfVar3 = (float *)(uVar5 + 8 + *(longlong *)puVar2);
              if ((0.0 < *pfVar3 || *pfVar3 == 0.0) &&
                 (*(longlong *)(uVar5 + *(longlong *)puVar2) != 0)) {
                FUN_144b3f230();
              }
              uVar8 = (int)uVar9 + 1;
              uVar5 = uVar5 + 0x18;
              uVar9 = (ulonglong)uVar8;
            } while ((int)uVar8 < (int)puVar7[-7]);
          }
          puVar7[-7] = 0;
          if ((-1 < (int)*puVar1) && (*(longlong *)puVar2 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)puVar2,
                       (ulonglong)(*puVar1 & 0x7fffffff) * 0x18);
          }
          puVar2[0] = 0;
          puVar2[1] = 0;
          *puVar1 = 0x80000000;
          puVar7 = puVar1;
        } while (puVar2 != puVar4);
      }
      *(undefined4 *)(plVar10 + 1) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar10 + 0xc)) && (*plVar10 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar10,
                   (ulonglong)(*(uint *)((longlong)plVar10 + 0xc) & 0x7fffffff) * 0x18);
      }
      *plVar10 = 0;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 0x80000000;
      plVar10 = plVar10 + -0x62;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}



// FUNCTION 144c8db90 FUN_144c8db90 body=80 status=ok
// SIG undefined FUN_144c8db90(void)

void FUN_144c8db90(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8dbe0 FUN_144c8dbe0 body=71 status=ok
// SIG undefined FUN_144c8dbe0(void)

undefined8 * FUN_144c8dbe0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144c8dc30 FUN_144c8dc30 body=739 status=ok
// SIG undefined FUN_144c8dc30(void)

void FUN_144c8dc30(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  
  lVar20 = (longlong)param_4;
  if (0 < param_4) {
    plVar21 = (longlong *)(param_1 + 0x18);
    do {
      plVar13 = (longlong *)((param_2 - param_1) + (longlong)plVar21);
      if (plVar13 != plVar21) {
        lVar6 = *plVar13;
        iVar4 = *(int *)((param_2 - param_1) + 8 + (longlong)plVar21);
        if ((int)(*(uint *)((longlong)plVar21 + 0xc) & 0x7fffffff) < iVar4) {
          FUN_144c9d1a0(plVar21,&PTR_vftable_14c6e47a0,(longlong)iVar4);
        }
        if (iVar4 < (int)plVar21[1]) {
          lVar7 = *plVar21;
          plVar13 = (longlong *)((longlong)(int)plVar21[1] * 0x10 + *plVar21);
          while (plVar13 != (longlong *)((longlong)iVar4 * 0x10 + lVar7)) {
            plVar16 = plVar13 + -2;
            *(undefined4 *)(plVar13 + -1) = 0;
            if ((-1 < (int)*(uint *)((longlong)plVar13 + -4)) && (*plVar16 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,*plVar16,
                         (ulonglong)(*(uint *)((longlong)plVar13 + -4) & 0x7fffffff) << 5);
            }
            *plVar16 = 0;
            *(undefined4 *)((longlong)plVar13 + -4) = 0x80000000;
            plVar13 = plVar16;
          }
        }
        lVar7 = *plVar21;
        iVar9 = iVar4;
        if ((int)plVar21[1] < iVar4) {
          iVar9 = (int)plVar21[1];
        }
        if ((lVar7 != lVar6) && (lVar22 = (longlong)iVar9, 0 < iVar9)) {
          puVar17 = (uint *)(lVar7 + 0xc);
          do {
            puVar3 = (uint *)((longlong)puVar17 + (lVar6 - lVar7) + -0xc);
            puVar1 = puVar17 + -3;
            if (puVar3 != puVar1) {
              uVar8 = *(undefined8 *)puVar3;
              uVar5 = *(uint *)((lVar6 - lVar7) + -4 + (longlong)puVar17);
              if ((int)(*puVar17 & 0x7fffffff) < (int)uVar5) {
                FUN_144c9b7d0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar5);
              }
              FUN_144b3d470(*(undefined8 *)puVar1,uVar8,(longlong)(int)uVar5 << 5);
              puVar17[-1] = uVar5;
            }
            puVar17 = puVar17 + 4;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        plVar13 = (longlong *)(lVar6 + (longlong)iVar9 * 0x10);
        if (0 < iVar4 - iVar9) {
          uVar23 = (ulonglong)(uint)(iVar4 - iVar9);
          puVar19 = (undefined8 *)(*plVar21 + (longlong)iVar9 * 0x10);
          do {
            if (puVar19 != (undefined8 *)0x0) {
              *puVar19 = 0;
              *(undefined4 *)(puVar19 + 1) = 0;
              *(undefined4 *)((longlong)puVar19 + 0xc) = 0x80000000;
              uVar5 = *(uint *)(plVar13 + 1);
              puVar18 = (undefined4 *)0x0;
              if ((undefined4 *)*plVar13 != (undefined4 *)0x0) {
                puVar18 = (undefined4 *)*plVar13;
              }
              if (0 < (int)uVar5) {
                puVar14 = (undefined4 *)
                          (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                    (&PTR_vftable_14c6e47a0,(longlong)(int)uVar5 << 5);
                *puVar19 = puVar14;
                uVar15 = (ulonglong)uVar5;
                *(uint *)(puVar19 + 1) = uVar5;
                *(uint *)((longlong)puVar19 + 0xc) = uVar5;
                do {
                  if (puVar14 != (undefined4 *)0x0) {
                    uVar10 = puVar18[1];
                    uVar11 = puVar18[2];
                    uVar12 = puVar18[3];
                    *puVar14 = *puVar18;
                    puVar14[1] = uVar10;
                    puVar14[2] = uVar11;
                    puVar14[3] = uVar12;
                    puVar2 = (undefined8 *)(puVar18 + 4);
                    uVar8 = *(undefined8 *)(puVar18 + 6);
                    puVar18 = puVar18 + 8;
                    *(undefined8 *)(puVar14 + 4) = *puVar2;
                    *(undefined8 *)(puVar14 + 6) = uVar8;
                  }
                  uVar15 = uVar15 - 1;
                  puVar14 = puVar14 + 8;
                } while (uVar15 != 0);
              }
              plVar13 = plVar13 + 2;
            }
            uVar23 = uVar23 - 1;
            puVar19 = puVar19 + 2;
          } while (uVar23 != 0);
        }
        *(int *)(plVar21 + 1) = iVar4;
      }
      plVar21 = plVar21 + 5;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  return;
}



// FUNCTION 144c8df20 FUN_144c8df20 body=518 status=ok
// SIG undefined FUN_144c8df20(void)

void FUN_144c8df20(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  longlong *plVar3;
  uint *puVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar14 = (longlong)param_4;
    do {
      plVar3 = (longlong *)((longlong)param_1 + param_2);
      if (plVar3 != param_1) {
        lVar13 = *plVar3;
        iVar6 = *(int *)((longlong)param_1 + param_2 + 8);
        if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar6) {
          FUN_144c9e570(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
        }
        if (iVar6 < (int)param_1[1]) {
          puVar12 = (uint *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
          puVar4 = (uint *)(*param_1 + (longlong)iVar6 * 0x18);
          if (puVar12 != puVar4) {
            puVar12 = puVar12 + 3;
            do {
              puVar1 = puVar12 + -6;
              iVar10 = 0;
              if (0 < (int)puVar12[-7]) {
                lVar7 = 0;
                do {
                  pfVar5 = (float *)(lVar7 + 8 + *(longlong *)(puVar12 + -9));
                  if ((0.0 < *pfVar5 || *pfVar5 == 0.0) &&
                     (*(longlong *)(lVar7 + *(longlong *)(puVar12 + -9)) != 0)) {
                    FUN_144b3f230();
                  }
                  iVar10 = iVar10 + 1;
                  lVar7 = lVar7 + 0x18;
                } while (iVar10 < (int)puVar12[-7]);
              }
              puVar12[-7] = 0;
              if ((-1 < (int)*puVar1) && (*(longlong *)(puVar12 + -9) != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,*(longlong *)(puVar12 + -9),
                           (ulonglong)(*puVar1 & 0x7fffffff) * 0x18);
              }
              puVar2 = puVar12 + -9;
              *puVar1 = 0x80000000;
              puVar2[0] = 0;
              puVar2[1] = 0;
              puVar12 = puVar1;
            } while (puVar2 != puVar4);
          }
        }
        lVar7 = *param_1;
        iVar10 = iVar6;
        if ((int)param_1[1] < iVar6) {
          iVar10 = (int)param_1[1];
        }
        if ((lVar7 != lVar13) && (lVar11 = (longlong)iVar10, 0 < iVar10)) {
          puVar8 = (undefined4 *)(lVar7 + 0x10);
          lVar7 = lVar13 - lVar7;
          do {
            FUN_144c963d0(puVar8 + -4,(longlong)puVar8 + lVar7 + -0x10);
            *puVar8 = *(undefined4 *)((longlong)puVar8 + lVar7);
            puVar8[1] = *(undefined4 *)(lVar7 + 4 + (longlong)puVar8);
            puVar8 = puVar8 + 6;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        lVar13 = lVar13 + (longlong)iVar10 * 0x18;
        if (0 < iVar6 - iVar10) {
          uVar9 = (ulonglong)(uint)(iVar6 - iVar10);
          lVar7 = *param_1 + (longlong)iVar10 * 0x18;
          do {
            if (lVar7 != 0) {
              FUN_144c96300(lVar7,lVar13);
              *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar13 + 0x10);
              puVar8 = (undefined4 *)(lVar13 + 0x14);
              lVar13 = lVar13 + 0x18;
              *(undefined4 *)(lVar7 + 0x14) = *puVar8;
            }
            uVar9 = uVar9 - 1;
            lVar7 = lVar7 + 0x18;
          } while (uVar9 != 0);
        }
        *(int *)(param_1 + 1) = iVar6;
      }
      param_1 = param_1 + 0x62;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 144c8e130 FUN_144c8e130 body=63 status=ok
// SIG undefined FUN_144c8e130(void)

void FUN_144c8e130(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8e170 FUN_144c8e170 body=88 status=ok
// SIG undefined FUN_144c8e170(void)

void FUN_144c8e170(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8e230 FUN_144c8e230 body=97 status=ok
// SIG undefined FUN_144c8e230(void)

void FUN_144c8e230(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8e2b0 FUN_144c8e2b0 body=88 status=ok
// SIG undefined FUN_144c8e2b0(void)

void FUN_144c8e2b0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8e320 FUN_144c8e320 body=74 status=ok
// SIG undefined FUN_144c8e320(void)

void FUN_144c8e320(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8e3a0 FUN_144c8e3a0 body=80 status=ok
// SIG undefined FUN_144c8e3a0(void)

void FUN_144c8e3a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8e3f0 FUN_144c8e3f0 body=63 status=ok
// SIG undefined FUN_144c8e3f0(void)

void FUN_144c8e3f0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8e430 FUN_144c8e430 body=97 status=ok
// SIG undefined FUN_144c8e430(void)

void FUN_144c8e430(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8e520 FUN_144c8e520 body=18 status=ok
// SIG undefined FUN_144c8e520(void)

undefined8 * FUN_144c8e520(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eee20;
  return param_2;
}



// FUNCTION 144c8e570 FUN_144c8e570 body=223 status=ok
// SIG undefined FUN_144c8e570(void)

void FUN_144c8e570(longlong param_1,undefined8 param_2,int param_3)

{
  float *pfVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(param_1 + lVar6 * 0x18);
    do {
      uVar4 = 0;
      uVar5 = 0;
      if (0 < (int)plVar2[1]) {
        do {
          pfVar1 = (float *)(uVar5 + 8 + *plVar2);
          if ((0.0 < *pfVar1 || *pfVar1 == 0.0) && (*(longlong *)(uVar5 + *plVar2) != 0)) {
            FUN_144b3f230();
          }
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          uVar5 = uVar5 + 0x18;
        } while ((int)uVar3 < (int)plVar2[1]);
      }
      *(undefined4 *)(plVar2 + 1) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar2 + 0xc)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) * 0x18);
      }
      *plVar2 = 0;
      *(undefined4 *)((longlong)plVar2 + 0xc) = 0x80000000;
      plVar2 = plVar2 + -3;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}



// FUNCTION 144c8e650 FUN_144c8e650 body=74 status=ok
// SIG undefined FUN_144c8e650(void)

void FUN_144c8e650(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8e6e0 FUN_144c8e6e0 body=74 status=ok
// SIG undefined FUN_144c8e6e0(void)

void FUN_144c8e6e0(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8e730 FUN_144c8e730 body=80 status=ok
// SIG undefined FUN_144c8e730(void)

void FUN_144c8e730(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8e7b0 FUN_144c8e7b0 body=63 status=ok
// SIG undefined FUN_144c8e7b0(void)

void FUN_144c8e7b0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8e7f0 FUN_144c8e7f0 body=97 status=ok
// SIG undefined FUN_144c8e7f0(void)

void FUN_144c8e7f0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8e860 FUN_144c8e860 body=182 status=ok
// SIG undefined FUN_144c8e860(void)

void FUN_144c8e860(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x20);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -8) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -6) = 0xffffffff;
        *(undefined8 *)(puVar2 + -4) = 1;
        *(undefined ***)(puVar2 + -8) = hkaiModifiedSections::vftable;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        puVar2[8] = 0;
        puVar2[9] = 0x80000000;
        *(undefined8 *)(puVar2 + 10) = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0x80000000;
        *(undefined8 *)(puVar2 + 0xe) = 0;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0x80000000;
      }
      puVar2 = puVar2 + 0x1a;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c8e920 FUN_144c8e920 body=526 status=ok
// SIG undefined FUN_144c8e920(void)

void FUN_144c8e920(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0x54);
    lVar6 = (longlong)param_4;
    do {
      if (puVar7 + -0x15 != (uint *)0x0) {
        puVar7[-0x13] = 0xffffffff;
        puVar7[-0x12] = 0;
        puVar7[-0x11] = 1;
        puVar7[-0x10] = 0;
        *(undefined ***)(puVar7 + -0x15) = hkaiModifiedSections::vftable;
        FUN_144c96de0(puVar7 + -0xf);
        puVar7[-7] = 0;
        puVar7[-6] = 0;
        puVar7[-5] = 0;
        puVar7[-4] = 0x80000000;
        uVar2 = *(uint *)(param_2 + -0x14 + (longlong)puVar7);
        puVar5 = *(undefined4 **)(param_2 + -0x1c + (longlong)puVar7);
        if (0 < (int)uVar2) {
          puVar4 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
          *(undefined4 **)(puVar7 + -7) = puVar4;
          puVar7[-5] = uVar2;
          uVar8 = (ulonglong)uVar2;
          puVar7[-4] = uVar2;
          do {
            if (puVar4 != (undefined4 *)0x0) {
              uVar3 = *puVar5;
              puVar5 = puVar5 + 1;
              *puVar4 = uVar3;
            }
            uVar8 = uVar8 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar8 != 0);
        }
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar7);
        puVar5 = *(undefined4 **)(param_2 + -0xc + (longlong)puVar7);
        if (0 < (int)uVar2) {
          puVar4 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          *(undefined4 **)(puVar7 + -3) = puVar4;
          puVar7[-1] = uVar2;
          uVar8 = (ulonglong)uVar2;
          *puVar7 = uVar2;
          do {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar5;
              puVar1 = puVar5 + 1;
              puVar5 = puVar5 + 2;
              puVar4[1] = *puVar1;
            }
            uVar8 = uVar8 - 1;
            puVar4 = puVar4 + 2;
          } while (uVar8 != 0);
        }
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0x80000000;
        uVar2 = *(uint *)(param_2 + 0xc + (longlong)puVar7);
        puVar5 = *(undefined4 **)((longlong)puVar7 + param_2 + 4);
        if (0 < (int)uVar2) {
          puVar4 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
          *(undefined4 **)(puVar7 + 1) = puVar4;
          puVar7[3] = uVar2;
          uVar8 = (ulonglong)uVar2;
          puVar7[4] = uVar2;
          do {
            if (puVar4 != (undefined4 *)0x0) {
              uVar3 = *puVar5;
              puVar5 = puVar5 + 1;
              *puVar4 = uVar3;
            }
            uVar8 = uVar8 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar8 != 0);
        }
      }
      puVar7 = puVar7 + 0x1a;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c8eb30 FUN_144c8eb30 body=58 status=ok
// SIG undefined FUN_144c8eb30(void)

void FUN_144c8eb30(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144b40a10(param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8eb70 FUN_144c8eb70 body=159 status=ok
// SIG undefined FUN_144c8eb70(void)

undefined8 * FUN_144c8eb70(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 5);
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



// FUNCTION 144c8ec10 FUN_144c8ec10 body=77 status=ok
// SIG undefined FUN_144c8ec10(void)

void FUN_144c8ec10(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8ec60 FUN_144c8ec60 body=78 status=ok
// SIG undefined FUN_144c8ec60(void)

void FUN_144c8ec60(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c2f440(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8ecb0 FUN_144c8ecb0 body=88 status=ok
// SIG undefined FUN_144c8ecb0(void)

void FUN_144c8ecb0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8ed10 FUN_144c8ed10 body=719 status=ok
// SIG undefined FUN_144c8ed10(void)

void FUN_144c8ed10(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if (0 < param_4) {
    plVar9 = (longlong *)(param_1 + 0x28);
    param_2 = param_2 - param_1;
    lVar13 = (longlong)param_4;
    do {
      plVar6 = (longlong *)(param_2 + -0x10 + (longlong)plVar9);
      plVar1 = plVar9 + -2;
      if (plVar1 != plVar6) {
        lVar4 = *plVar6;
        iVar3 = *(int *)(param_2 + -8 + (longlong)plVar9);
        if ((int)(*(uint *)((longlong)plVar9 + -4) & 0x7fffffff) < iVar3) {
          FUN_144c9e4a0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        lVar10 = *plVar1;
        iVar5 = iVar3;
        if ((int)plVar9[-1] < iVar3) {
          iVar5 = (int)plVar9[-1];
        }
        if ((lVar10 != lVar4) && (lVar8 = (longlong)iVar5, 0 < iVar5)) {
          puVar7 = (undefined4 *)(lVar10 + 4);
          lVar10 = lVar4 - lVar10;
          do {
            puVar7[-1] = *(undefined4 *)(lVar10 + -4 + (longlong)puVar7);
            *puVar7 = *(undefined4 *)((longlong)puVar7 + lVar10);
            *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(lVar10 + 4 + (longlong)puVar7);
            puVar7 = puVar7 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        puVar7 = (undefined4 *)(lVar4 + (longlong)iVar5 * 0xc);
        if (0 < iVar3 - iVar5) {
          uVar12 = (ulonglong)(uint)(iVar3 - iVar5);
          puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 0xc);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar7;
              puVar11[1] = puVar7[1];
              puVar2 = puVar7 + 2;
              puVar7 = puVar7 + 3;
              *(undefined2 *)(puVar11 + 2) = *(undefined2 *)puVar2;
            }
            uVar12 = uVar12 - 1;
            puVar11 = puVar11 + 3;
          } while (uVar12 != 0);
        }
        *(int *)(plVar9 + -1) = iVar3;
        if ((longlong *)((longlong)plVar9 + param_2) != plVar9) {
          lVar4 = *plVar9;
          if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
            FUN_144b3ec00(plVar9);
          }
          FUN_140069ea2(plVar9,(longlong *)((longlong)plVar9 + param_2));
        }
      }
      plVar6 = (longlong *)(param_2 + 0x10 + (longlong)plVar9);
      plVar1 = plVar9 + 2;
      if (plVar6 != plVar1) {
        lVar4 = *plVar6;
        iVar3 = *(int *)(param_2 + 0x18 + (longlong)plVar9);
        if ((int)(*(uint *)((longlong)plVar9 + 0x1c) & 0x7fffffff) < iVar3) {
          FUN_144c9d310(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        FUN_144b3d470(*plVar1,lVar4,(longlong)iVar3 * 4);
        *(int *)(plVar9 + 3) = iVar3;
      }
      plVar6 = (longlong *)(param_2 + 0x20 + (longlong)plVar9);
      plVar1 = plVar9 + 4;
      if (plVar6 != plVar1) {
        lVar4 = *plVar6;
        iVar3 = *(int *)(param_2 + 0x28 + (longlong)plVar9);
        if ((int)(*(uint *)((longlong)plVar9 + 0x2c) & 0x7fffffff) < iVar3) {
          FUN_144c9d3b0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        lVar10 = *plVar1;
        iVar5 = iVar3;
        if ((int)plVar9[5] < iVar3) {
          iVar5 = (int)plVar9[5];
        }
        if ((lVar10 != lVar4) && (lVar8 = (longlong)iVar5, 0 < iVar5)) {
          puVar7 = (undefined4 *)(lVar10 + 4);
          do {
            puVar7[-1] = *(undefined4 *)((lVar4 - lVar10) + -4 + (longlong)puVar7);
            *puVar7 = *(undefined4 *)((lVar4 - lVar10) + (longlong)puVar7);
            puVar7 = puVar7 + 2;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        puVar7 = (undefined4 *)((longlong)iVar5 * 8 + lVar4);
        if (0 < iVar3 - iVar5) {
          uVar12 = (ulonglong)(uint)(iVar3 - iVar5);
          puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 8);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar7;
              puVar2 = puVar7 + 1;
              puVar7 = puVar7 + 2;
              puVar11[1] = *puVar2;
            }
            uVar12 = uVar12 - 1;
            puVar11 = puVar11 + 2;
          } while (uVar12 != 0);
        }
        *(int *)(plVar9 + 5) = iVar3;
      }
      plVar6 = (longlong *)(param_2 + 0x30 + (longlong)plVar9);
      plVar1 = plVar9 + 6;
      if (plVar6 != plVar1) {
        lVar4 = *plVar6;
        iVar3 = *(int *)(param_2 + 0x38 + (longlong)plVar9);
        if ((int)(*(uint *)((longlong)plVar9 + 0x3c) & 0x7fffffff) < iVar3) {
          FUN_144c9d310(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        FUN_144b3d470(*plVar1,lVar4,(longlong)iVar3 * 4);
        *(int *)(plVar9 + 7) = iVar3;
      }
      plVar9 = plVar9 + 0xd;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 144c8efe0 FUN_144c8efe0 body=106 status=ok
// SIG undefined FUN_144c8efe0(void)

undefined8 * FUN_144c8efe0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144c8f050 FUN_144c8f050 body=94 status=ok
// SIG undefined FUN_144c8f050(void)

void FUN_144c8f050(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8f170 FUN_144c8f170 body=73 status=ok
// SIG undefined FUN_144c8f170(void)

void FUN_144c8f170(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c2f690(param_1,param_2 + param_1);
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8f1c0 FUN_144c8f1c0 body=88 status=ok
// SIG undefined FUN_144c8f1c0(void)

void FUN_144c8f1c0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8f220 FUN_144c8f220 body=74 status=ok
// SIG undefined FUN_144c8f220(void)

void FUN_144c8f220(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8f270 FUN_144c8f270 body=18 status=ok
// SIG undefined FUN_144c8f270(void)

undefined8 * FUN_144c8f270(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ef000;
  return param_2;
}



// FUNCTION 144c8f290 FUN_144c8f290 body=80 status=ok
// SIG undefined FUN_144c8f290(void)

void FUN_144c8f290(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8f4a0 FUN_144c8f4a0 body=63 status=ok
// SIG undefined FUN_144c8f4a0(void)

void FUN_144c8f4a0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8f4e0 FUN_144c8f4e0 body=120 status=ok
// SIG undefined FUN_144c8f4e0(void)

void FUN_144c8f4e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8f560 FUN_144c8f560 body=489 status=ok
// SIG undefined FUN_144c8f560(void)

void FUN_144c8f560(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if (0 < param_4) {
    puVar7 = (uint *)(param_1 + 0x104);
    param_2 = param_2 - param_1;
    lVar10 = (longlong)param_4;
    do {
      if (puVar7 + -0x41 != (uint *)0x0) {
        *(undefined ***)(puVar7 + -0x41) =
             hkaiNavMeshLightWeightSnapshot::LightWeightGenerationSnapshot::vftable;
        puVar7[-0x3f] = 0xffffffff;
        puVar7[-0x3e] = 0;
        puVar7[-0x3d] = 1;
        puVar7[-0x3c] = 0;
        FUN_144c99150(puVar7 + -0x39,param_2 + -0xe4 + (longlong)puVar7);
        puVar7[-0xd] = *(uint *)(param_2 + -0x34 + (longlong)puVar7);
        puVar7[-0xc] = *(uint *)(param_2 + -0x30 + (longlong)puVar7);
        lVar3 = *(longlong *)(param_2 + -0x2c + (longlong)puVar7);
        *(longlong *)(puVar7 + -0xb) = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        lVar3 = *(longlong *)(param_2 + -0x24 + (longlong)puVar7);
        *(longlong *)(puVar7 + -9) = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        puVar7[-7] = 0;
        puVar7[-6] = 0;
        puVar7[-5] = 0;
        puVar7[-4] = 0x80000000;
        uVar2 = *(uint *)(param_2 + -0x14 + (longlong)puVar7);
        uVar8 = (ulonglong)uVar2;
        plVar9 = *(longlong **)(param_2 + -0x1c + (longlong)puVar7);
        if (0 < (int)uVar2) {
          plVar6 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          *(longlong **)(puVar7 + -7) = plVar6;
          puVar7[-5] = uVar2;
          puVar7[-4] = uVar2;
          do {
            if (plVar6 != (longlong *)0x0) {
              lVar3 = *plVar9;
              *plVar6 = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              plVar9 = plVar9 + 1;
            }
            uVar8 = uVar8 - 1;
            plVar6 = plVar6 + 1;
          } while (uVar8 != 0);
        }
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar7);
        uVar8 = (ulonglong)uVar2;
        plVar9 = *(longlong **)(param_2 + -0xc + (longlong)puVar7);
        if (0 < (int)uVar2) {
          plVar6 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          *(longlong **)(puVar7 + -3) = plVar6;
          puVar7[-1] = uVar2;
          *puVar7 = uVar2;
          do {
            if (plVar6 != (longlong *)0x0) {
              lVar3 = *plVar9;
              *plVar6 = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              plVar9 = plVar9 + 1;
            }
            uVar8 = uVar8 - 1;
            plVar6 = plVar6 + 1;
          } while (uVar8 != 0);
        }
        puVar1 = (uint *)(param_2 + 0xc + (longlong)puVar7);
        uVar2 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar7[3] = *puVar1;
        puVar7[4] = uVar2;
        puVar7[5] = uVar4;
        puVar7[6] = uVar5;
        puVar1 = (uint *)(param_2 + 0x1c + (longlong)puVar7);
        uVar2 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar7[7] = *puVar1;
        puVar7[8] = uVar2;
        puVar7[9] = uVar4;
        puVar7[10] = uVar5;
      }
      puVar7 = puVar7 + 0x4c;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144c8f750 FUN_144c8f750 body=141 status=ok
// SIG undefined FUN_144c8f750(void)

void FUN_144c8f750(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        puVar2[-2] = hkaiNavVolumeStaticTreeCellIterator::vftable;
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



// FUNCTION 144c8f7f0 FUN_144c8f7f0 body=97 status=ok
// SIG undefined FUN_144c8f7f0(void)

void FUN_144c8f7f0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8f860 FUN_144c8f860 body=105 status=ok
// SIG undefined FUN_144c8f860(void)

void FUN_144c8f860(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8f8d0 FUN_144c8f8d0 body=94 status=ok
// SIG undefined FUN_144c8f8d0(void)

void FUN_144c8f8d0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8f930 FUN_144c8f930 body=74 status=ok
// SIG undefined FUN_144c8f930(void)

void FUN_144c8f930(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8f980 FUN_144c8f980 body=77 status=ok
// SIG undefined FUN_144c8f980(void)

void FUN_144c8f980(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c8f9d0 FUN_144c8f9d0 body=132 status=ok
// SIG undefined FUN_144c8f9d0(void)

void FUN_144c8f9d0(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c8fa60 FUN_144c8fa60 body=73 status=ok
// SIG undefined FUN_144c8fa60(void)

void FUN_144c8fa60(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c99470(param_1,param_2 + param_1);
      param_1 = param_1 + 0x130;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8fb00 FUN_144c8fb00 body=71 status=ok
// SIG undefined FUN_144c8fb00(void)

undefined8 * FUN_144c8fb00(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144c8fbc0 FUN_144c8fbc0 body=74 status=ok
// SIG undefined FUN_144c8fbc0(void)

void FUN_144c8fbc0(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c8fc10 FUN_144c8fc10 body=506 status=ok
// SIG undefined FUN_144c8fc10(void)

void FUN_144c8fc10(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_1 + 0x34);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      if (puVar8 + -0xd != (uint *)0x0) {
        puVar8[-0xb] = 0xffffffff;
        puVar8[-10] = 0;
        puVar8[-9] = 1;
        puVar8[-8] = 0;
        *(undefined ***)(puVar8 + -0xd) = &PTR_LAB_14aba55c0;
        puVar8[-7] = 0;
        puVar8[-6] = 0;
        puVar8[-5] = 0;
        puVar8[-4] = 0x80000000;
        uVar2 = *(uint *)((longlong)puVar8 + param_2 + -0x14);
        lVar4 = *(longlong *)((longlong)puVar8 + param_2 + -0x1c);
        if (0 < (int)uVar2) {
          puVar6 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x90);
          *(undefined8 **)(puVar8 + -7) = puVar6;
          puVar10 = (undefined8 *)(lVar4 + 0x50);
          puVar8[-5] = uVar2;
          uVar11 = (ulonglong)uVar2;
          puVar8[-4] = uVar2;
          do {
            if (puVar6 != (undefined8 *)0x0) {
              uVar5 = puVar10[-9];
              *puVar6 = puVar10[-10];
              puVar6[1] = uVar5;
              uVar5 = puVar10[-7];
              puVar6[2] = puVar10[-8];
              puVar6[3] = uVar5;
              uVar5 = puVar10[-5];
              puVar6[4] = puVar10[-6];
              puVar6[5] = uVar5;
              uVar5 = puVar10[-3];
              puVar6[6] = puVar10[-4];
              puVar6[7] = uVar5;
              uVar5 = puVar10[-1];
              puVar6[8] = puVar10[-2];
              puVar6[9] = uVar5;
              uVar5 = puVar10[1];
              puVar6[10] = *puVar10;
              puVar6[0xb] = uVar5;
              uVar5 = puVar10[3];
              puVar6[0xc] = puVar10[2];
              puVar6[0xd] = uVar5;
              puVar6[0xe] = puVar10[4];
              *(undefined4 *)(puVar6 + 0xf) = *(undefined4 *)(puVar10 + 5);
              *(undefined2 *)((longlong)puVar6 + 0x7c) = *(undefined2 *)((longlong)puVar10 + 0x2c);
              *(undefined2 *)((longlong)puVar6 + 0x7e) = *(undefined2 *)((longlong)puVar10 + 0x2e);
              puVar1 = puVar10 + 6;
              puVar10 = puVar10 + 0x12;
              *(undefined1 *)(puVar6 + 0x10) = *(undefined1 *)puVar1;
            }
            uVar11 = uVar11 - 1;
            puVar6 = puVar6 + 0x12;
          } while (uVar11 != 0);
        }
        puVar8[-3] = 0;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        uVar2 = *(uint *)((longlong)puVar8 + param_2 + -4);
        puVar9 = *(undefined4 **)((longlong)puVar8 + param_2 + -0xc);
        if (0 < (int)uVar2) {
          puVar7 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
          *(undefined4 **)(puVar8 + -3) = puVar7;
          puVar8[-1] = uVar2;
          uVar11 = (ulonglong)uVar2;
          *puVar8 = uVar2;
          do {
            if (puVar7 != (undefined4 *)0x0) {
              uVar3 = *puVar9;
              puVar9 = puVar9 + 1;
              *puVar7 = uVar3;
            }
            uVar11 = uVar11 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar11 != 0);
        }
        puVar8[1] = *(uint *)((longlong)puVar8 + param_2 + 4);
        puVar8[2] = *(uint *)((longlong)puVar8 + param_2 + 8);
        puVar8[3] = *(uint *)((longlong)puVar8 + param_2 + 0xc);
        puVar8[4] = *(uint *)((longlong)puVar8 + param_2 + 0x10);
      }
      puVar8 = puVar8 + 0x12;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c8fe10 FUN_144c8fe10 body=63 status=ok
// SIG undefined FUN_144c8fe10(void)

void FUN_144c8fe10(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x260 + param_1;
    do {
      FUN_145016ba0(param_1);
      param_1 = param_1 + -0x260;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c8fe50 FUN_144c8fe50 body=18 status=ok
// SIG undefined FUN_144c8fe50(void)

undefined8 * FUN_144c8fe50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ef120;
  return param_2;
}



// FUNCTION 144c8fe70 FUN_144c8fe70 body=88 status=ok
// SIG undefined FUN_144c8fe70(void)

void FUN_144c8fe70(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x48);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -9;
      plVar2 = plVar2 + -9;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c8fed0 FUN_144c8fed0 body=67 status=ok
// SIG undefined FUN_144c8fed0(void)

void FUN_144c8fed0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144b3e890(param_1);
        FUN_144fc5c10(param_1 + 0x40);
      }
      param_1 = param_1 + 0x260;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c8ff20 FUN_144c8ff20 body=295 status=ok
// SIG undefined FUN_144c8ff20(void)

void FUN_144c8ff20(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0x24);
    param_2 = param_2 - param_1;
    lVar6 = (longlong)param_4;
    do {
      puVar4 = (uint *)(param_2 + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar5);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar2) {
          FUN_144c9c180(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 0x90);
        puVar5[-1] = uVar2;
      }
      puVar4 = (uint *)(param_2 + 4 + (longlong)puVar5);
      puVar1 = puVar5 + 1;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0xc + (longlong)puVar5);
        if ((int)(puVar5[4] & 0x7fffffff) < (int)uVar2) {
          FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 4);
        puVar5[3] = uVar2;
      }
      puVar5[5] = *(uint *)(param_2 + 0x14 + (longlong)puVar5);
      puVar5[6] = *(uint *)(param_2 + 0x18 + (longlong)puVar5);
      puVar5[7] = *(uint *)(param_2 + 0x1c + (longlong)puVar5);
      puVar5[8] = *(uint *)(param_2 + 0x20 + (longlong)puVar5);
      puVar5 = puVar5 + 0x12;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c90140 FUN_144c90140 body=58 status=ok
// SIG undefined FUN_144c90140(void)

void FUN_144c90140(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c3fd00(param_1);
      }
      param_1 = param_1 + 0x1f0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c90180 FUN_144c90180 body=78 status=ok
// SIG undefined FUN_144c90180(void)

void FUN_144c90180(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c3ff90(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x1f0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c90210 FUN_144c90210 body=94 status=ok
// SIG undefined FUN_144c90210(void)

void FUN_144c90210(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x1f0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x3e;
      plVar2 = plVar2 + -0x3e;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c902b0 FUN_144c902b0 body=73 status=ok
// SIG undefined FUN_144c902b0(void)

void FUN_144c902b0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c92670(param_1,param_2 + param_1);
      param_1 = param_1 + 0x1f0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c90300 FUN_144c90300 body=74 status=ok
// SIG undefined FUN_144c90300(void)

void FUN_144c90300(longlong param_1,undefined8 param_2,uint param_3)

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



// FUNCTION 144c90350 FUN_144c90350 body=88 status=ok
// SIG undefined FUN_144c90350(void)

void FUN_144c90350(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c903b0 FUN_144c903b0 body=18 status=ok
// SIG undefined FUN_144c903b0(void)

undefined8 * FUN_144c903b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ef330;
  return param_2;
}



// FUNCTION 144c90410 FUN_144c90410 body=152 status=ok
// SIG undefined FUN_144c90410(void)

undefined8 * FUN_144c90410(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  puVar4 = (undefined4 *)*param_2;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    *param_1 = puVar3;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 1) = uVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 144c904b0 FUN_144c904b0 body=126 status=ok
// SIG undefined FUN_144c904b0(void)

undefined8 * FUN_144c904b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_147e4b86a(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    FUN_144b3d470(*param_1,uVar2,(longlong)iVar1 * 4);
    *(int *)(param_1 + 1) = iVar1;
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 144c90530 FUN_144c90530 body=998 status=ok
// SIG undefined FUN_144c90530(void)

undefined8 * FUN_144c90530(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  undefined1 local_res18 [8];
  longlong *local_res20;
  undefined4 local_68 [2];
  undefined4 *local_60;
  uint local_58;
  uint local_54;
  
  plVar1 = param_1 + 6;
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = &PTR_LAB_14aba2b70;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar11 = FUN_144b3d480();
  param_1[8] = uVar11;
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
  iVar15 = *(int *)(param_2 + 0x28);
  puVar13 = *(undefined4 **)(param_2 + 0x20);
  iVar14 = *(int *)(param_1 + 5);
  iVar18 = iVar15 + iVar14;
  if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar18) {
    FUN_144c35f30(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar18);
  }
  if (puVar13 != puVar13 + (longlong)iVar15 * 4) {
    puVar12 = puVar13 + 1;
    puVar16 = (undefined4 *)((longlong)iVar14 * 0x10 + param_1[4]);
    do {
      if (puVar16 != (undefined4 *)0x0) {
        *puVar16 = puVar12[-1];
        puVar16[1] = *puVar12;
        puVar16[2] = puVar12[1];
        puVar16[3] = puVar12[2];
      }
      puVar2 = puVar12 + 3;
      puVar12 = puVar12 + 4;
      puVar16 = puVar16 + 4;
    } while (puVar2 != puVar13 + (longlong)iVar15 * 4);
  }
  *(int *)(param_1 + 5) = iVar18;
  plVar19 = *(longlong **)(param_2 + 0x30);
  local_res20 = plVar19 + (longlong)*(int *)(param_2 + 0x38) * 3;
  if (plVar19 != local_res20) {
    plVar19 = plVar19 + 1;
    do {
      uVar5 = *(uint *)(plVar19 + 1);
      uVar9 = (undefined4)plVar19[-1];
      puVar13 = (undefined4 *)0x0;
      if ((undefined4 *)*plVar19 != (undefined4 *)0x0) {
        puVar13 = (undefined4 *)*plVar19;
      }
      local_68[0] = uVar9;
      if ((int)uVar5 < 1) {
        local_60 = (undefined4 *)0x0;
        local_54 = 0x80000000;
        local_58 = 0;
      }
      else {
        local_60 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar5 * 0x14);
        uVar17 = (ulonglong)uVar5;
        puVar12 = local_60;
        do {
          if (puVar12 != (undefined4 *)0x0) {
            uVar6 = puVar13[1];
            uVar7 = puVar13[2];
            uVar8 = puVar13[3];
            *puVar12 = *puVar13;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
            puVar16 = puVar13 + 4;
            puVar13 = puVar13 + 5;
            puVar12[4] = *puVar16;
          }
          uVar17 = uVar17 - 1;
          puVar12 = puVar12 + 5;
          local_58 = uVar5;
          local_54 = uVar5;
        } while (uVar17 != 0);
      }
      uVar10 = local_54;
      uVar5 = local_58;
      puVar13 = local_60;
      FUN_144c36150(plVar1,local_res18,local_68);
      iVar15 = local_res18._0_4_;
      if (iVar15 == *(int *)(param_1 + 7)) {
        iVar14 = *(int *)(param_1 + 7) + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) < iVar14) {
          FUN_144c368b0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar14);
        }
        puVar12 = (undefined4 *)(*plVar1 + (longlong)*(int *)(param_1 + 7) * 0x18);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = uVar9;
          *(undefined8 *)(puVar12 + 2) = 0;
          puVar12[4] = 0;
          puVar12[5] = 0x80000000;
        }
        *(int *)(param_1 + 7) = iVar14;
      }
      iVar14 = *(int *)(*plVar1 + 0x10 + (longlong)iVar15 * 0x18);
      lVar4 = *plVar1 + (longlong)iVar15 * 0x18;
      iVar15 = (int)(((longlong)(puVar13 + (longlong)(int)uVar5 * 5) - (longlong)puVar13) / 0x14) +
               iVar14;
      if ((int)(*(uint *)(lVar4 + 0x14) & 0x7fffffff) < iVar15) {
        FUN_144c36030(lVar4 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar15);
      }
      puVar12 = (undefined4 *)(*(longlong *)(lVar4 + 8) + (longlong)iVar14 * 0x14);
      for (puVar16 = puVar13; puVar16 != puVar13 + (longlong)(int)uVar5 * 5; puVar16 = puVar16 + 5)
      {
        if (puVar12 != (undefined4 *)0x0) {
          uVar9 = puVar16[1];
          uVar6 = puVar16[2];
          uVar7 = puVar16[3];
          *puVar12 = *puVar16;
          puVar12[1] = uVar9;
          puVar12[2] = uVar6;
          puVar12[3] = uVar7;
          puVar12[4] = puVar16[4];
        }
        puVar12 = puVar12 + 5;
      }
      *(int *)(lVar4 + 0x10) = iVar15;
      if ((-1 < (int)uVar10) && (puVar13 != (undefined4 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,puVar13,(ulonglong)(uVar10 & 0x7fffffff) * 0x14);
      }
      plVar3 = plVar19 + 2;
      plVar19 = plVar19 + 3;
    } while (plVar3 != local_res20);
  }
  iVar15 = *(int *)(param_1 + 0xb);
  puVar12 = *(undefined4 **)(param_2 + 0x50);
  iVar14 = iVar15 + *(int *)(param_2 + 0x58);
  puVar13 = puVar12 + (longlong)*(int *)(param_2 + 0x58) * 2;
  if ((int)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) < iVar14) {
    FUN_144c9b870(param_1 + 10,&PTR_vftable_14c6e47a0,(longlong)iVar14);
  }
  puVar16 = (undefined4 *)(param_1[10] + (longlong)iVar15 * 8);
  for (; puVar12 != puVar13; puVar12 = puVar12 + 2) {
    if (puVar16 != (undefined4 *)0x0) {
      *puVar16 = *puVar12;
      puVar16[1] = puVar12[1];
    }
    puVar16 = puVar16 + 2;
  }
  *(int *)(param_1 + 0xb) = iVar14;
  return param_1;
}



// FUNCTION 144c90920 FUN_144c90920 body=103 status=ok
// SIG undefined FUN_144c90920(void)

void FUN_144c90920(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c90990 FUN_144c90990 body=18 status=ok
// SIG undefined FUN_144c90990(void)

undefined8 * FUN_144c90990(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ec4a0;
  return param_2;
}



// FUNCTION 144c909b0 FUN_144c909b0 body=984 status=ok
// SIG undefined FUN_144c909b0(void)

longlong FUN_144c909b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if ((longlong *)(param_2 + 0x18) != plVar1) {
    iVar5 = *(int *)(param_2 + 0x20);
    lVar6 = *(longlong *)(param_2 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar5) {
      FUN_144c4f8d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    if (iVar5 < *(int *)(param_1 + 0x20)) {
      puVar12 = (uint *)((longlong)*(int *)(param_1 + 0x20) * 0x120 + *plVar1);
      puVar16 = (uint *)((longlong)iVar5 * 0x120 + *plVar1);
      if (puVar12 != puVar16) {
        puVar12 = puVar12 + 0x33;
        do {
          puVar2 = puVar12 + -0x48;
          puVar12[-0x49] = 0;
          if ((-1 < (int)*puVar2) && (*(longlong *)(puVar12 + -0x4b) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar12 + -0x4b),
                       (ulonglong)(*puVar2 & 0x7fffffff) << 2);
          }
          puVar12[-0x4b] = 0;
          puVar12[-0x4a] = 0;
          *puVar2 = 0x80000000;
          puVar12[-0x51] = 0;
          if ((-1 < (int)puVar12[-0x50]) && (*(longlong *)(puVar12 + -0x53) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar12 + -0x53),
                       (ulonglong)(puVar12[-0x50] & 0x7fffffff) << 2);
          }
          puVar3 = puVar12 + -0x7b;
          puVar12[-0x53] = 0;
          puVar12[-0x52] = 0;
          puVar12[-0x50] = 0x80000000;
          puVar12 = puVar2;
        } while (puVar3 != puVar16);
      }
    }
    lVar17 = *plVar1;
    iVar7 = iVar5;
    if (*(int *)(param_1 + 0x20) < iVar5) {
      iVar7 = *(int *)(param_1 + 0x20);
    }
    if ((lVar17 != lVar6) && (lVar14 = (longlong)iVar7, 0 < iVar7)) {
      puVar19 = (undefined8 *)(lVar17 + 0x60);
      lVar17 = lVar6 - lVar17;
      do {
        puVar18 = (undefined8 *)((longlong)puVar19 + lVar17 + -0x60);
        uVar11 = puVar18[1];
        puVar19[-0xc] = *puVar18;
        puVar19[-0xb] = uVar11;
        puVar18 = (undefined8 *)(lVar17 + -0x50 + (longlong)puVar19);
        uVar11 = puVar18[1];
        puVar19[-10] = *puVar18;
        puVar19[-9] = uVar11;
        puVar18 = (undefined8 *)(lVar17 + -0x40 + (longlong)puVar19);
        uVar11 = puVar18[1];
        puVar19[-8] = *puVar18;
        puVar19[-7] = uVar11;
        puVar18 = (undefined8 *)(lVar17 + -0x30 + (longlong)puVar19);
        uVar11 = puVar18[1];
        puVar19[-6] = *puVar18;
        puVar19[-5] = uVar11;
        puVar18 = (undefined8 *)(lVar17 + -0x20 + (longlong)puVar19);
        uVar11 = puVar18[1];
        puVar19[-4] = *puVar18;
        puVar19[-3] = uVar11;
        puVar18 = (undefined8 *)(lVar17 + -0x10 + (longlong)puVar19);
        uVar11 = puVar18[1];
        puVar19[-2] = *puVar18;
        puVar19[-1] = uVar11;
        uVar11 = ((undefined8 *)(lVar17 + (longlong)puVar19))[1];
        *puVar19 = *(undefined8 *)(lVar17 + (longlong)puVar19);
        puVar19[1] = uVar11;
        puVar18 = (undefined8 *)(lVar17 + 0x10 + (longlong)puVar19);
        uVar11 = puVar18[1];
        puVar19[2] = *puVar18;
        puVar19[3] = uVar11;
        puVar4 = (undefined4 *)(lVar17 + 0x20 + (longlong)puVar19);
        uVar8 = puVar4[1];
        uVar9 = puVar4[2];
        uVar10 = puVar4[3];
        *(undefined4 *)(puVar19 + 4) = *puVar4;
        *(undefined4 *)((longlong)puVar19 + 0x24) = uVar8;
        *(undefined4 *)(puVar19 + 5) = uVar9;
        *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar10;
        puVar4 = (undefined4 *)(lVar17 + 0x30 + (longlong)puVar19);
        uVar8 = puVar4[1];
        uVar9 = puVar4[2];
        uVar10 = puVar4[3];
        *(undefined4 *)(puVar19 + 6) = *puVar4;
        *(undefined4 *)((longlong)puVar19 + 0x34) = uVar8;
        *(undefined4 *)(puVar19 + 7) = uVar9;
        *(undefined4 *)((longlong)puVar19 + 0x3c) = uVar10;
        FUN_144c4eb70(puVar19 + 8,lVar17 + 0x40 + (longlong)puVar19);
        FUN_144c4eb70(puVar19 + 0xc,lVar17 + 0x60 + (longlong)puVar19);
        *(undefined4 *)(puVar19 + 0x10) = *(undefined4 *)((longlong)puVar19 + lVar17 + 0x80);
        *(undefined4 *)((longlong)puVar19 + 0x84) =
             *(undefined4 *)((longlong)puVar19 + lVar17 + 0x84);
        puVar18 = (undefined8 *)((longlong)puVar19 + lVar17 + 0x90);
        uVar11 = puVar18[1];
        puVar19[0x12] = *puVar18;
        puVar19[0x13] = uVar11;
        puVar18 = (undefined8 *)((longlong)puVar19 + lVar17 + 0xa0);
        uVar11 = puVar18[1];
        puVar19[0x14] = *puVar18;
        puVar19[0x15] = uVar11;
        *(undefined1 *)(puVar19 + 0x16) = *(undefined1 *)((longlong)puVar19 + lVar17 + 0xb0);
        *(undefined1 *)((longlong)puVar19 + 0xb1) =
             *(undefined1 *)((longlong)puVar19 + lVar17 + 0xb1);
        *(undefined1 *)((longlong)puVar19 + 0xb2) =
             *(undefined1 *)((longlong)puVar19 + lVar17 + 0xb2);
        *(undefined4 *)((longlong)puVar19 + 0xb4) =
             *(undefined4 *)((longlong)puVar19 + lVar17 + 0xb4);
        puVar19 = puVar19 + 0x24;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    puVar19 = (undefined8 *)(lVar6 + (longlong)iVar7 * 0x120);
    if (0 < iVar5 - iVar7) {
      puVar18 = puVar19 + 0xe;
      uVar13 = (ulonglong)(uint)(iVar5 - iVar7);
      puVar15 = (undefined8 *)(*plVar1 + (longlong)iVar7 * 0x120);
      do {
        if (puVar15 != (undefined8 *)0x0) {
          uVar11 = puVar19[1];
          *puVar15 = *puVar19;
          puVar15[1] = uVar11;
          uVar11 = puVar18[-0xb];
          puVar15[2] = puVar18[-0xc];
          puVar15[3] = uVar11;
          uVar11 = puVar18[-9];
          puVar15[4] = puVar18[-10];
          puVar15[5] = uVar11;
          uVar11 = puVar18[-7];
          puVar15[6] = puVar18[-8];
          puVar15[7] = uVar11;
          uVar11 = puVar18[-5];
          puVar15[8] = puVar18[-6];
          puVar15[9] = uVar11;
          uVar11 = puVar18[-3];
          puVar15[10] = puVar18[-4];
          puVar15[0xb] = uVar11;
          uVar11 = puVar18[-1];
          puVar15[0xc] = puVar18[-2];
          puVar15[0xd] = uVar11;
          uVar11 = puVar18[1];
          puVar15[0xe] = *puVar18;
          puVar15[0xf] = uVar11;
          uVar8 = *(undefined4 *)((longlong)puVar18 + 0x14);
          uVar9 = *(undefined4 *)(puVar18 + 3);
          uVar10 = *(undefined4 *)((longlong)puVar18 + 0x1c);
          *(undefined4 *)(puVar15 + 0x10) = *(undefined4 *)(puVar18 + 2);
          *(undefined4 *)((longlong)puVar15 + 0x84) = uVar8;
          *(undefined4 *)(puVar15 + 0x11) = uVar9;
          *(undefined4 *)((longlong)puVar15 + 0x8c) = uVar10;
          uVar8 = *(undefined4 *)((longlong)puVar18 + 0x24);
          uVar9 = *(undefined4 *)(puVar18 + 5);
          uVar10 = *(undefined4 *)((longlong)puVar18 + 0x2c);
          *(undefined4 *)(puVar15 + 0x12) = *(undefined4 *)(puVar18 + 4);
          *(undefined4 *)((longlong)puVar15 + 0x94) = uVar8;
          *(undefined4 *)(puVar15 + 0x13) = uVar9;
          *(undefined4 *)((longlong)puVar15 + 0x9c) = uVar10;
          puVar15[0x14] = puVar15 + 0x16;
          *(undefined4 *)(puVar15 + 0x15) = 0;
          *(undefined4 *)((longlong)puVar15 + 0xac) = 0x80000004;
          FUN_144c4eb70(puVar15 + 0x14,puVar18 + 6);
          *(undefined4 *)(puVar15 + 0x19) = 0;
          puVar15[0x18] = puVar15 + 0x1a;
          *(undefined4 *)((longlong)puVar15 + 0xcc) = 0x80000004;
          FUN_144c4eb70(puVar15 + 0x18,puVar18 + 10);
          puVar19 = puVar19 + 0x24;
          *(undefined4 *)(puVar15 + 0x1c) = *(undefined4 *)(puVar18 + 0xe);
          *(undefined4 *)((longlong)puVar15 + 0xe4) = *(undefined4 *)((longlong)puVar18 + 0x74);
          uVar11 = puVar18[0x11];
          puVar15[0x1e] = puVar18[0x10];
          puVar15[0x1f] = uVar11;
          uVar11 = puVar18[0x13];
          puVar15[0x20] = puVar18[0x12];
          puVar15[0x21] = uVar11;
          *(undefined1 *)(puVar15 + 0x22) = *(undefined1 *)(puVar18 + 0x14);
          *(undefined1 *)((longlong)puVar15 + 0x111) = *(undefined1 *)((longlong)puVar18 + 0xa1);
          *(undefined1 *)((longlong)puVar15 + 0x112) = *(undefined1 *)((longlong)puVar18 + 0xa2);
          puVar4 = (undefined4 *)((longlong)puVar18 + 0xa4);
          puVar18 = puVar18 + 0x24;
          *(undefined4 *)((longlong)puVar15 + 0x114) = *puVar4;
        }
        uVar13 = uVar13 - 1;
        puVar15 = puVar15 + 0x24;
      } while (uVar13 != 0);
    }
    *(int *)(param_1 + 0x20) = iVar5;
  }
  return param_1;
}



// FUNCTION 144c90d90 FUN_144c90d90 body=123 status=ok
// SIG undefined FUN_144c90d90(void)

void FUN_144c90d90(longlong *param_1)

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
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c90e10 FUN_144c90e10 body=160 status=ok
// SIG undefined FUN_144c90e10(void)

undefined8 * FUN_144c90e10(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  puVar4 = (undefined4 *)*param_2;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    *param_1 = puVar3;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 1) = uVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144c90eb0 FUN_144c90eb0 body=121 status=ok
// SIG undefined FUN_144c90eb0(void)

undefined8 * FUN_144c90eb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_144c52690(param_2,&PTR_vftable_14c6e47a0);
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



// FUNCTION 144c90f30 FUN_144c90f30 body=182 status=ok
// SIG undefined FUN_144c90f30(void)

undefined8 * FUN_144c90f30(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 != param_1) {
    iVar2 = *(int *)(param_2 + 1);
    uVar3 = *param_2;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_144c6c5b0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*param_1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 1) = iVar2;
  }
  plVar1 = param_1 + 2;
  if (param_2 + 2 != plVar1) {
    lVar4 = *plVar1;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
      FUN_144b3ec00(plVar1);
    }
    FUN_140069ea2(plVar1,param_2 + 2);
  }
  return param_1;
}



// FUNCTION 144c90ff0 FUN_144c90ff0 body=279 status=ok
// SIG undefined FUN_144c90ff0(void)

void FUN_144c90ff0(longlong *param_1)

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



// FUNCTION 144c91110 FUN_144c91110 body=215 status=ok
// SIG undefined FUN_144c91110(void)

void FUN_144c91110(longlong *param_1,longlong *param_2)

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
    FUN_144c911f0(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_144c90ff0(param_1);
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



// FUNCTION 144c911f0 FUN_144c911f0 body=109 status=ok
// SIG undefined FUN_144c911f0(void)

void FUN_144c911f0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0xc);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c91260 FUN_144c91260 body=125 status=ok
// SIG undefined FUN_144c91260(void)

void FUN_144c91260(longlong *param_1)

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



// FUNCTION 144c912e0 FUN_144c912e0 body=169 status=ok
// SIG undefined FUN_144c912e0(void)

undefined8 * FUN_144c912e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  puVar4 = (undefined8 *)*param_2;
  if (0 < (int)uVar2) {
    puVar3 = (undefined8 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
    *param_1 = puVar3;
    *(uint *)(param_1 + 1) = uVar2;
    uVar5 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *puVar4;
        puVar1 = puVar4 + 1;
        puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)puVar1;
      }
      uVar5 = uVar5 - 1;
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
    } while (uVar5 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144c91390 FUN_144c91390 body=121 status=ok
// SIG undefined FUN_144c91390(void)

undefined8 * FUN_144c91390(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_144c911f0(param_2,&PTR_vftable_14c6e47a0);
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



// FUNCTION 144c91410 FUN_144c91410 body=197 status=ok
// SIG undefined FUN_144c91410(void)

void FUN_144c91410(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c914e0 FUN_144c914e0 body=178 status=ok
// SIG undefined FUN_144c914e0(void)

void FUN_144c914e0(longlong *param_1)

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



// FUNCTION 144c915a0 FUN_144c915a0 body=183 status=ok
// SIG undefined FUN_144c915a0(void)

undefined8 * FUN_144c915a0(undefined8 *param_1,undefined8 *param_2)

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
  puVar4 = (undefined4 *)*param_2;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    *param_1 = puVar3;
    *(uint *)(param_1 + 1) = uVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
        lVar2 = *(longlong *)(puVar4 + 2);
        *(longlong *)(puVar3 + 2) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        puVar4 = puVar4 + 4;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 4;
    } while (uVar5 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144c91660 FUN_144c91660 body=121 status=ok
// SIG undefined FUN_144c91660(void)

undefined8 * FUN_144c91660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_144c91410(param_2,&PTR_vftable_14c6e47a0);
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



// FUNCTION 144c916e0 FUN_144c916e0 body=106 status=ok
// SIG undefined FUN_144c916e0(void)

undefined8 * FUN_144c916e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = FUN_144b3d480();
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 144c91750 FUN_144c91750 body=575 status=ok
// SIG undefined FUN_144c91750(void)

longlong FUN_144c91750(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  
  FUN_144c90f30();
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)(param_2 + 0x20)) {
    iVar2 = *(int *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar2) {
      FUN_144c9e0c0(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 0xc);
    *(int *)(param_1 + 0x28) = iVar2;
    plVar7 = (longlong *)(param_1 + 0x30);
    if ((longlong *)(param_2 + 0x30) != plVar7) {
      lVar4 = *plVar7;
      if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
        FUN_144b3ec00(plVar7);
      }
      FUN_140069ea2(plVar7,(longlong *)(param_2 + 0x30));
    }
  }
  plVar7 = (longlong *)(param_1 + 0x40);
  if (plVar7 != (longlong *)(param_2 + 0x40)) {
    iVar2 = *(int *)(param_2 + 0x48);
    lVar4 = *(longlong *)(param_2 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar2) {
      FUN_144ca0fc0(plVar7,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x48)) {
      lVar11 = *plVar7;
      lVar8 = (longlong)*(int *)(param_1 + 0x48) * 0x10 + *plVar7;
      while (lVar8 != (longlong)iVar2 * 0x10 + lVar11) {
        plVar9 = (longlong *)(lVar8 + -8);
        lVar8 = lVar8 + -0x10;
        if (*plVar9 != 0) {
          FUN_144b3f230();
        }
      }
    }
    lVar11 = *plVar7;
    iVar6 = iVar2;
    if (*(int *)(param_1 + 0x48) < iVar2) {
      iVar6 = *(int *)(param_1 + 0x48);
    }
    if ((lVar11 != lVar4) && (lVar8 = (longlong)iVar6, 0 < iVar6)) {
      plVar9 = (longlong *)(lVar11 + 8);
      lVar11 = lVar4 - lVar11;
      do {
        *(undefined4 *)(plVar9 + -1) = *(undefined4 *)(lVar11 + -8 + (longlong)plVar9);
        if (*plVar9 != *(longlong *)(lVar11 + (longlong)plVar9)) {
          if (*(longlong *)(lVar11 + (longlong)plVar9) != 0) {
            FUN_144b3d910();
          }
          lVar5 = *plVar9;
          *plVar9 = *(longlong *)(lVar11 + (longlong)plVar9);
          if (lVar5 != 0) {
            FUN_144b3f230();
          }
        }
        plVar9 = plVar9 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar10 = (undefined4 *)((longlong)iVar6 * 0x10 + lVar4);
    if (0 < iVar2 - iVar6) {
      uVar12 = (ulonglong)(uint)(iVar2 - iVar6);
      puVar13 = (undefined4 *)(*plVar7 + (longlong)iVar6 * 0x10);
      do {
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = *puVar10;
          lVar4 = *(longlong *)(puVar10 + 2);
          *(longlong *)(puVar13 + 2) = lVar4;
          if (lVar4 != 0) {
            FUN_144b3d910();
          }
          puVar10 = puVar10 + 4;
        }
        uVar12 = uVar12 - 1;
        puVar13 = puVar13 + 4;
      } while (uVar12 != 0);
    }
    *(int *)(param_1 + 0x48) = iVar2;
    plVar7 = (longlong *)(param_1 + 0x50);
    if ((longlong *)(param_2 + 0x50) != plVar7) {
      lVar4 = *plVar7;
      if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
        FUN_144b3ec00(plVar7);
      }
      FUN_140069ea2(plVar7,(longlong *)(param_2 + 0x50));
    }
  }
  return param_1;
}



// FUNCTION 144c91990 FUN_144c91990 body=279 status=ok
// SIG undefined FUN_144c91990(void)

void FUN_144c91990(longlong *param_1)

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
      lVar12 = lVar12 + 8;
      uVar11 = uVar11 + 1;
      *puVar8 = uVar9;
    } while ((int)uVar11 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c91ab0 FUN_144c91ab0 body=209 status=ok
// SIG undefined FUN_144c91ab0(void)

void FUN_144c91ab0(longlong *param_1,longlong *param_2)

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
    FUN_144c91b90(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_144c91990(param_1);
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



// FUNCTION 144c91b90 FUN_144c91b90 body=103 status=ok
// SIG undefined FUN_144c91b90(void)

void FUN_144c91b90(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c91c00 FUN_144c91c00 body=123 status=ok
// SIG undefined FUN_144c91c00(void)

void FUN_144c91c00(longlong *param_1)

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



// FUNCTION 144c91c80 FUN_144c91c80 body=290 status=ok
// SIG undefined FUN_144c91c80(void)

void FUN_144c91c80(longlong *param_1,longlong *param_2)

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



// FUNCTION 144c91db0 FUN_144c91db0 body=193 status=ok
// SIG undefined FUN_144c91db0(void)

void FUN_144c91db0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
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
  return;
}



// FUNCTION 144c91e80 FUN_144c91e80 body=218 status=ok
// SIG undefined FUN_144c91e80(void)

undefined8 * FUN_144c91e80(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if (0 < (int)uVar1) {
    puVar2 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 * 0x68);
    *param_1 = puVar2;
    lVar3 = lVar3 + 0x48;
    *(uint *)(param_1 + 1) = uVar1;
    uVar4 = (ulonglong)uVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
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
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144c91f60 FUN_144c91f60 body=121 status=ok
// SIG undefined FUN_144c91f60(void)

undefined8 * FUN_144c91f60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_144c91c80(param_2,&PTR_vftable_14c6e47a0);
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



// FUNCTION 144c91fe0 FUN_144c91fe0 body=482 status=ok
// SIG undefined FUN_144c91fe0(void)

undefined4 * FUN_144c91fe0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  
  plVar10 = (longlong *)(param_1 + 2);
  *param_1 = *param_2;
  if (plVar10 != (longlong *)(param_2 + 2)) {
    iVar1 = param_2[4];
    lVar2 = *(longlong *)(param_2 + 2);
    if ((int)(param_1[5] & 0x7fffffff) < iVar1) {
      FUN_144ca10b0(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    if (iVar1 < (int)param_1[4]) {
      lVar6 = (longlong)iVar1 * 0x68 + *plVar10;
      lVar8 = (longlong)(int)param_1[4] * 0x68 + *plVar10;
      if (lVar8 != lVar6) {
        lVar4 = lVar8 + 0x28;
        do {
          lVar8 = lVar8 + -0x68;
          FUN_144c914e0(lVar4 + -0x48);
          FUN_144c91260(lVar4 + -0x68);
          FUN_144c90d90(lVar4 + -0x88);
          lVar4 = lVar4 + -0x68;
        } while (lVar8 != lVar6);
      }
    }
    lVar6 = *plVar10;
    iVar3 = iVar1;
    if ((int)param_1[4] < iVar1) {
      iVar3 = param_1[4];
    }
    if ((lVar6 != lVar2) && (lVar8 = (longlong)iVar3, 0 < iVar3)) {
      lVar4 = lVar6 + 8;
      do {
        *(undefined4 *)(lVar4 + -8) = *(undefined4 *)((lVar2 - lVar6) + -8 + lVar4);
        FUN_144c91750(lVar4,(lVar2 - lVar6) + lVar4);
        lVar4 = lVar4 + 0x68;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar11 = (undefined4 *)(lVar2 + (longlong)iVar3 * 0x68);
    if (0 < iVar1 - iVar3) {
      puVar5 = puVar11 + 0x12;
      uVar7 = (ulonglong)(uint)(iVar1 - iVar3);
      puVar9 = (undefined4 *)(*plVar10 + (longlong)iVar3 * 0x68);
      do {
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = *puVar11;
          FUN_144c90e10(puVar9 + 2,puVar5 + -0x10);
          FUN_144c912e0(puVar9 + 10,puVar5 + -8);
          FUN_144c915a0(puVar9 + 0x12,puVar5);
          puVar11 = puVar11 + 0x1a;
          puVar5 = puVar5 + 0x1a;
        }
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + 0x1a;
      } while (uVar7 != 0);
    }
    param_1[4] = iVar1;
    plVar10 = (longlong *)(param_1 + 6);
    if ((longlong *)(param_2 + 6) != plVar10) {
      lVar2 = *plVar10;
      if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
        FUN_144b3ec00(plVar10);
      }
      FUN_140069ea2(plVar10,param_2 + 6);
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 144c921d0 FUN_144c921d0 body=459 status=ok
// SIG undefined FUN_144c921d0(void)

longlong * FUN_144c921d0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *param_2;
  iVar1 = (int)param_2[1];
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
    FUN_144ca0fc0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if (iVar1 < (int)param_1[1]) {
    lVar8 = *param_1;
    lVar5 = (longlong)(int)param_1[1] * 0x10 + *param_1;
    while (lVar5 != (longlong)iVar1 * 0x10 + lVar8) {
      plVar6 = (longlong *)(lVar5 + -8);
      lVar5 = lVar5 + -0x10;
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
    }
  }
  lVar8 = *param_1;
  iVar4 = iVar1;
  if ((int)param_1[1] < iVar1) {
    iVar4 = (int)param_1[1];
  }
  if ((lVar8 != lVar2) && (lVar5 = (longlong)iVar4, 0 < iVar4)) {
    plVar6 = (longlong *)(lVar8 + 8);
    lVar8 = lVar2 - lVar8;
    do {
      *(undefined4 *)(plVar6 + -1) = *(undefined4 *)(lVar8 + -8 + (longlong)plVar6);
      if (*plVar6 != *(longlong *)(lVar8 + (longlong)plVar6)) {
        if (*(longlong *)(lVar8 + (longlong)plVar6) != 0) {
          FUN_144b3d910();
        }
        lVar3 = *plVar6;
        *plVar6 = *(longlong *)(lVar8 + (longlong)plVar6);
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
      }
      plVar6 = plVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined4 *)((longlong)iVar4 * 0x10 + lVar2);
  if (0 < iVar1 - iVar4) {
    uVar9 = (ulonglong)(uint)(iVar1 - iVar4);
    puVar10 = (undefined4 *)(*param_1 + (longlong)iVar4 * 0x10);
    do {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = *puVar7;
        lVar2 = *(longlong *)(puVar7 + 2);
        *(longlong *)(puVar10 + 2) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        puVar7 = puVar7 + 4;
      }
      uVar9 = uVar9 - 1;
      puVar10 = puVar10 + 4;
    } while (uVar9 != 0);
  }
  plVar6 = param_1 + 2;
  *(int *)(param_1 + 1) = iVar1;
  if (param_2 + 2 != plVar6) {
    lVar2 = *plVar6;
    if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
      FUN_144b3ec00(plVar6);
    }
    FUN_140069ea2(plVar6,param_2 + 2);
  }
  return param_1;
}



// FUNCTION 144c923a0 FUN_144c923a0 body=181 status=ok
// SIG undefined FUN_144c923a0(void)

undefined8 * FUN_144c923a0(undefined8 *param_1,undefined8 *param_2)

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
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 * 0x28);
    *param_1 = puVar2;
    *(uint *)(param_1 + 1) = uVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar3;
        FUN_144c915a0(puVar2 + 2,puVar3 + 2);
        puVar3 = puVar3 + 10;
      }
      uVar4 = uVar4 - 1;
      puVar2 = puVar2 + 10;
    } while (uVar4 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144c92460 FUN_144c92460 body=18 status=ok
// SIG undefined FUN_144c92460(void)

undefined8 * FUN_144c92460(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eb5e0;
  return param_2;
}



// FUNCTION 144c92480 FUN_144c92480 body=221 status=ok
// SIG undefined FUN_144c92480(void)

undefined8 * FUN_144c92480(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_144c3fc90(param_2,&PTR_vftable_14c6e47a0);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  FUN_143821c08(param_2 + 2,&PTR_vftable_14c6e47a0);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_144c43240(param_2 + 4,&PTR_vftable_14c6e47a0);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[4] = 0;
  param_2[5] = 0;
  return param_1;
}


