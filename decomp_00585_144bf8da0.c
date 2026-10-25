// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144bf8da0 FUN_144bf8da0 body=60 status=ok
// SIG undefined FUN_144bf8da0(void)

void FUN_144bf8da0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x20 + param_1;
    do {
      FUN_144f6ee60(param_1);
      param_1 = param_1 + -0x20;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf8df0 FUN_144bf8df0 body=175 status=ok
// SIG undefined FUN_144bf8df0(void)

void FUN_144bf8df0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  if (0 < (int)param_4) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    uVar3 = (ulonglong)param_4;
    do {
      cVar1 = *(char *)(puVar2 + -1);
      if (cVar1 == '\0') {
LAB_144bf8e2e:
        local_28 = (undefined8 *)0x0;
      }
      else {
        local_28 = puVar2;
        if (cVar1 != '\x01') {
          if (cVar1 != '\x02') goto LAB_144bf8e2e;
          local_28 = (undefined8 *)*puVar2;
        }
      }
      local_20 = puVar2[-2];
      if (local_20 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = FUN_144befdb0();
      }
      if ((local_18 & 1) != 0) {
        FUN_144be6b20(local_18 & 0xfffffffffffffffe);
      }
      FUN_144f6f130(param_1,&local_28);
      if ((local_18 & 1) != 0) {
        FUN_144be6b30(local_18 & 0xfffffffffffffffe);
      }
      param_1 = param_1 + 0x20;
      puVar2 = puVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 144bf8ea0 FUN_144bf8ea0 body=88 status=ok
// SIG undefined FUN_144bf8ea0(void)

void FUN_144bf8ea0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144bf8f00 FUN_144bf8f00 body=255 status=ok
// SIG undefined FUN_144bf8f00(void)

void FUN_144bf8f00(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    piVar3 = (int *)(param_1 + 0x18);
    lVar4 = (longlong)param_3;
    do {
      piVar1 = piVar3 + -6;
      if (piVar1 != (int *)0x0) {
        piVar1[0] = 0;
        piVar1[1] = 0;
        piVar3[-4] = 0;
        piVar3[-3] = -0x80000000;
        piVar3[-2] = 0;
        piVar3[-1] = 0;
        *piVar3 = 0;
        piVar3[1] = -0x80000000;
        *(undefined1 *)(piVar3 + 2) = 0;
        if ((piVar3[1] & 0x7fffffffU) == 0) {
          FUN_141807990(piVar3 + -2,&PTR_vftable_14c6e47a0,1);
        }
        puVar2 = (undefined4 *)(*(longlong *)(piVar3 + -2) + (longlong)*piVar3 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 1;
        }
        *piVar3 = 1;
      }
      piVar3 = piVar3 + 10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144bf9000 FUN_144bf9000 body=57 status=ok
// SIG undefined FUN_144bf9000(void)

void FUN_144bf9000(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144f730b0(param_1,0);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf9040 FUN_144bf9040 body=77 status=ok
// SIG undefined FUN_144bf9040(void)

void FUN_144bf9040(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144bf9090 FUN_144bf9090 body=18 status=ok
// SIG undefined FUN_144bf9090(void)

undefined8 * FUN_144bf9090(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6dc250;
  return param_2;
}



// FUNCTION 144bf90b0 FUN_144bf90b0 body=18 status=ok
// SIG undefined FUN_144bf90b0(void)

undefined8 * FUN_144bf90b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6dc390;
  return param_2;
}



// FUNCTION 144bf90d0 FUN_144bf90d0 body=104 status=ok
// SIG undefined FUN_144bf90d0(void)

void FUN_144bf90d0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144bf9140 FUN_144bf9140 body=104 status=ok
// SIG undefined FUN_144bf9140(void)

void FUN_144bf9140(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144bf91b0 FUN_144bf91b0 body=4 status=ok
// SIG undefined FUN_144bf91b0(void)

undefined8 FUN_144bf91b0(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 144bf91c0 FUN_144bf91c0 body=18 status=ok
// SIG undefined FUN_144bf91c0(void)

undefined8 * FUN_144bf91c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6dd700;
  return param_2;
}



// FUNCTION 144bf91e0 FUN_144bf91e0 body=62 status=ok
// SIG undefined FUN_144bf91e0(void)

undefined8 * FUN_144bf91e0(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6ddb00);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ddb00;
  return param_2;
}



// FUNCTION 144bf9220 FUN_144bf9220 body=62 status=ok
// SIG undefined FUN_144bf9220(void)

undefined8 * FUN_144bf9220(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6dde90);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6dde90;
  return param_2;
}



// FUNCTION 144bf9260 FUN_144bf9260 body=62 status=ok
// SIG undefined FUN_144bf9260(void)

undefined8 * FUN_144bf9260(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6de180);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6de180;
  return param_2;
}



// FUNCTION 144bf92a0 FUN_144bf92a0 body=62 status=ok
// SIG undefined FUN_144bf92a0(void)

undefined8 * FUN_144bf92a0(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6de340);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6de340;
  return param_2;
}



// FUNCTION 144bf92e0 FUN_144bf92e0 body=18 status=ok
// SIG undefined FUN_144bf92e0(void)

undefined8 * FUN_144bf92e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6dd7c0;
  return param_2;
}



// FUNCTION 144bf9300 FUN_144bf9300 body=18 status=ok
// SIG undefined FUN_144bf9300(void)

undefined8 * FUN_144bf9300(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6dfb60;
  return param_2;
}



// FUNCTION 144bf9320 FUN_144bf9320 body=18 status=ok
// SIG undefined FUN_144bf9320(void)

undefined8 * FUN_144bf9320(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6dfcb0;
  return param_2;
}



// FUNCTION 144bf9340 FUN_144bf9340 body=18 status=ok
// SIG undefined FUN_144bf9340(void)

undefined8 * FUN_144bf9340(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e0890;
  return param_2;
}



// FUNCTION 144bf9360 FUN_144bf9360 body=18 status=ok
// SIG undefined FUN_144bf9360(void)

undefined8 * FUN_144bf9360(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6db9e0;
  return param_2;
}



// FUNCTION 144bf9380 FUN_144bf9380 body=207 status=ok
// SIG undefined FUN_144bf9380(void)

undefined8 * FUN_144bf9380(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[3];
  lVar3 = (longlong)*(int *)(param_1 + 4) * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
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
    }
    else {
      FUN_144bda120(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 144bf9450 FUN_144bf9450 body=226 status=ok
// SIG undefined FUN_144bf9450(void)

void FUN_144bf9450(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
        *(short *)(plVar4 + 1) = (short)plVar7[1];
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



// FUNCTION 144bf9540 FUN_144bf9540 body=37 status=ok
// SIG undefined FUN_144bf9540(void)

undefined8 FUN_144bf9540(void)

{
  if (((MXCSR >> 0xf & 1) != 0) && ((MXCSR & 0x40) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144bf9570 FUN_144bf9570 body=8 status=ok
// SIG undefined FUN_144bf9570(void)

undefined * FUN_144bf9570(void)

{
  return &DAT_14c7875d8;
}



// FUNCTION 144bf95c0 FUN_144bf95c0 body=209 status=ok
// SIG undefined FUN_144bf95c0(void)

void FUN_144bf95c0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  param_2 = param_2 + 1;
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < param_2) {
    FUN_144bf9ee0(param_1 + 0x40,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  if ((*(int *)(param_1 + 0x48) < param_2) || (param_2 < *(int *)(param_1 + 0x48))) {
    *(int *)(param_1 + 0x48) = param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x490);
  if ((int)(*(uint *)(param_1 + 0x49c) & 0x7fffffff) < param_2) {
    FUN_144bfa010(plVar1,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  iVar2 = *(int *)(param_1 + 0x498);
  if (iVar2 < param_2) {
    lVar3 = *plVar1;
    *(int *)(param_1 + 0x498) = param_2;
    for (puVar4 = (undefined8 *)((longlong)iVar2 * 0x40 + *plVar1);
        puVar4 != (undefined8 *)((longlong)param_2 * 0x40 + lVar3); puVar4 = puVar4 + 8) {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
      }
    }
  }
  else if (param_2 < iVar2) {
    *(int *)(param_1 + 0x498) = param_2;
  }
  FUN_144bf96a0(param_1,param_3,param_4);
  return;
}



// FUNCTION 144bf96a0 FUN_144bf96a0 body=339 status=ok
// SIG undefined FUN_144bf96a0(void)

void FUN_144bf96a0(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = param_1[0x12] + -1;
  uVar8 = param_2;
  if (iVar7 != 1) {
    uVar8 = param_3;
  }
  if (-1 < (int)uVar8) {
    *param_1 = 1;
    uVar1 = (uint)((longlong)(int)param_2 / (longlong)iVar7);
    uVar4 = (longlong)(int)param_2 / (longlong)iVar7 & 0xffffffff;
    if ((int)uVar1 < 1) {
      uVar1 = 1;
    }
    param_1[3] = uVar1;
    if (uVar8 < uVar1) {
      uVar1 = uVar8;
    }
    iVar5 = 0;
    param_1[2] = uVar1;
    param_1[1] = 0;
    if (0 < iVar7) {
      lVar2 = (longlong)iVar7 << 6;
      lVar3 = (longlong)iVar7 << 6;
      iVar6 = iVar5;
      do {
        uVar8 = param_2 - iVar6;
        if (iVar7 != 1) {
          uVar8 = (uint)uVar4;
        }
        uVar4 = (ulonglong)uVar8;
        iVar5 = uVar8 + iVar6;
        *(ulonglong *)(lVar3 + *(longlong *)(param_1 + 0x124)) = CONCAT44(iVar5,iVar6);
        *(int *)(lVar2 + *(longlong *)(param_1 + 0x10)) = iVar7;
        iVar7 = iVar7 + -1;
        lVar2 = lVar2 + -0x40;
        lVar3 = lVar3 + -0x40;
        iVar6 = iVar5;
      } while (0 < iVar7);
    }
    **(undefined8 **)(param_1 + 0x124) = CONCAT44(param_2,iVar5);
    **(undefined4 **)(param_1 + 0x10) = 1;
    return;
  }
  param_1[2] = 1;
  *param_1 = 0;
  param_1[3] = 1;
  param_1[1] = 1;
  if (0 < iVar7) {
    lVar2 = (longlong)iVar7 << 6;
    lVar3 = (longlong)iVar7 << 6;
    do {
      iVar7 = iVar7 + -1;
      *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x124)) = 0;
      *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x10)) = 0;
      lVar2 = lVar2 + -0x40;
      lVar3 = lVar3 + -0x40;
    } while (0 < iVar7);
  }
  **(longlong **)(param_1 + 0x124) = (ulonglong)param_2 << 0x20;
  **(undefined4 **)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 144bf9800 FUN_144bf9800 body=239 status=ok
// SIG undefined FUN_144bf9800(void)

undefined4 * FUN_144bf9800(longlong param_1,undefined4 *param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  puVar1 = (uint *)(param_1 + 8);
  iVar8 = *(int *)(param_3 + 0x14) + 1;
  puVar4 = (ulonglong *)
           ((longlong)*(int *)((longlong)iVar8 * 0x40 + *(longlong *)(param_1 + 0x40)) * 0x40 +
           *(longlong *)(param_1 + 0x490));
  uVar5 = *(uint *)(param_3 + 0x10);
  if (*(uint *)(param_3 + 0x10) == 0) {
    uVar5 = *(uint *)(param_1 + 0xc);
    uVar2 = (int)(*puVar4 >> 0x20) - (int)*puVar4 >> 3;
    if ((int)uVar2 < (int)*puVar1) {
      uVar2 = *puVar1;
    }
    if ((int)uVar2 < (int)uVar5) {
      uVar5 = uVar2;
    }
  }
  LOCK();
  uVar7 = *puVar4;
  *puVar4 = *puVar4 + (ulonglong)uVar5;
  UNLOCK();
  uVar6 = (uint)uVar7;
  *(uint *)(param_3 + 8) = uVar6;
  uVar2 = (uint)(uVar7 >> 0x20);
  uVar3 = uVar2 - uVar6;
  if (uVar2 <= uVar6) {
    uVar3 = FUN_144bf98f0(param_1,iVar8,uVar5,param_3 + 8);
    if (uVar3 == 0) {
      *param_2 = 0x80040200;
      return param_2;
    }
    uVar7 = (ulonglong)*(uint *)(param_3 + 8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  *param_2 = 0;
  if ((int)uVar3 < (int)uVar5) {
    uVar5 = uVar3;
  }
  uVar6 = *puVar1;
  *(uint *)(param_3 + 0xc) = uVar5 + (int)uVar7;
  uVar5 = (int)uVar3 >> 3;
  if ((uint)((int)uVar3 >> 3) < uVar6) {
    uVar5 = *puVar1;
  }
  if ((int)uVar5 < (int)uVar2) {
    uVar2 = uVar5;
  }
  *(uint *)(param_3 + 0x10) = uVar2;
  return param_2;
}



// FUNCTION 144bf98f0 FUN_144bf98f0 body=471 status=ok
// SIG undefined FUN_144bf98f0(void)

int FUN_144bf98f0(int *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  lVar14 = (longlong)param_2;
  if (*param_1 != 0) {
    lVar10 = 0;
    iVar9 = 0;
    iVar11 = 0;
    iVar13 = 0;
    if (0 < param_1[0x126]) {
      lVar5 = 0;
      do {
        iVar7 = (int)((ulonglong)*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x124)) >> 0x20) -
                (int)*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x124));
        iVar1 = 0;
        if (0 < iVar7) {
          iVar1 = iVar7;
        }
        iVar11 = iVar11 + iVar1;
        iVar1 = iVar13;
        if (iVar7 <= iVar9) {
          iVar1 = (int)lVar10;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        iVar13 = iVar13 + 1;
        lVar10 = (longlong)iVar1;
        lVar5 = lVar5 + 0x40;
      } while (iVar13 < param_1[0x126]);
      if (0xf < iVar9) {
        plVar4 = (longlong *)(lVar10 * 0x40 + *(longlong *)(param_1 + 0x124));
        iVar13 = iVar11 >> 3;
        if (iVar9 >> 1 < iVar11 >> 3) {
          iVar13 = iVar9 >> 1;
        }
        iVar9 = param_3;
        if (param_3 < iVar13) {
          iVar9 = iVar13;
        }
        LOCK();
        lVar10 = *plVar4;
        *plVar4 = *plVar4 + (longlong)iVar9;
        UNLOCK();
        uVar3 = (uint)lVar10;
        uVar6 = uVar3 + iVar9;
        uVar2 = (uint)((ulonglong)lVar10 >> 0x20);
        uVar8 = uVar2;
        if (uVar6 <= uVar2) {
          uVar8 = uVar6;
        }
        iVar11 = uVar2 - uVar3;
        if (uVar6 <= uVar2) {
          iVar11 = iVar9;
        }
        if (uVar3 < uVar8) {
          if (param_3 < iVar11) {
            *(ulonglong *)(lVar14 * 0x40 + *(longlong *)(param_1 + 0x124)) =
                 CONCAT44(uVar8,uVar3 + param_3);
            *(int *)(lVar14 * 0x40 + *(longlong *)(param_1 + 0x10)) = param_2;
          }
          *param_4 = uVar3;
          return iVar11;
        }
        goto LAB_144bf9a11;
      }
    }
    *param_1 = 0;
  }
LAB_144bf9a11:
  if (param_1[1] == 0) {
    iVar9 = param_1[0x12];
    lVar10 = (longlong)iVar9;
    iVar13 = 1;
    iVar11 = *(int *)(lVar14 * 0x40 + *(longlong *)(param_1 + 0x10)) + 1;
    if (1 < iVar9) {
      lVar5 = (longlong)iVar11;
      do {
        lVar12 = lVar5 - lVar10;
        if (lVar5 < lVar10) {
          lVar12 = lVar5;
        }
        iVar1 = iVar11 - iVar9;
        if (lVar5 < lVar10) {
          iVar1 = iVar11;
        }
        plVar4 = (longlong *)(lVar12 * 0x40 + *(longlong *)(param_1 + 0x124));
        if ((uint)*plVar4 < (uint)((ulonglong)*plVar4 >> 0x20)) {
          LOCK();
          lVar5 = *plVar4;
          *plVar4 = *plVar4 + (longlong)param_3;
          UNLOCK();
          uVar3 = (uint)((ulonglong)lVar5 >> 0x20);
          uVar8 = (uint)lVar5;
          if (uVar8 < uVar3) {
            *(int *)(lVar14 * 0x40 + *(longlong *)(param_1 + 0x10)) = iVar1;
            *param_4 = uVar8;
            return uVar3 - uVar8;
          }
        }
        iVar13 = iVar13 + 1;
        iVar11 = iVar1 + 1;
        lVar5 = lVar12 + 1;
      } while (iVar13 < iVar9);
    }
  }
  return 0;
}



// FUNCTION 144bf9ad0 FUN_144bf9ad0 body=47 status=ok
// SIG undefined FUN_144bf9ad0(void)

longlong FUN_144bf9ad0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = param_3;
  *(undefined4 *)(param_1 + 0x90) = param_4;
  return param_1;
}



// FUNCTION 144bf9b00 FUN_144bf9b00 body=211 status=ok
// SIG undefined FUN_144bf9b00(void)

bool FUN_144bf9b00(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) == 1) {
    return true;
  }
  uVar4 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x20;
  uVar2 = *(uint *)(*param_1 + 0x40);
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  uVar3 = uVar2 >> 0x15;
  if ((int)uVar3 <= iVar5) {
    do {
      uVar3 = (uVar2 + 0x80 ^ uVar2) & 0x3f80 ^ uVar2;
      bVar6 = ((uVar3 >> 7 ^ uVar3) & 0x7f) == 0;
      if (bVar6) {
        uVar3 = (uVar3 ^ uVar3 + 0x200000) & 0x1fffff ^ uVar3 + 0x200000;
      }
      LOCK();
      uVar1 = *(uint *)(*param_1 + 0x40);
      bVar7 = uVar2 == uVar1;
      if (bVar7) {
        *(uint *)(*param_1 + 0x40) = uVar3;
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      UNLOCK();
      if (bVar7) {
        if (bVar6) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0x10;
        }
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
        *(uint *)(param_1 + 1) = uVar3 >> 0x15;
        return *(int *)((longlong)param_1 + 0xc) == 0x10;
      }
      for (iVar5 = 1 << ((byte)uVar4 & 0x1f); 0 < iVar5; iVar5 = iVar5 + -1) {
      }
      if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
      }
      iVar5 = *(int *)((longlong)param_1 + 0x14);
      uVar3 = uVar2 >> 0x15;
    } while ((int)uVar3 <= iVar5);
  }
  *(uint *)(param_1 + 1) = uVar3;
  *(int *)((longlong)param_1 + 0x14) = iVar5 + 1;
  return false;
}



// FUNCTION 144bf9be0 FUN_144bf9be0 body=372 status=ok
// SIG undefined FUN_144bf9be0(void)

void FUN_144bf9be0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar2 != 1) {
    if (uVar2 == 0x200) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0x100;
      return;
    }
    if ((uVar2 & 0x102) != 0) {
      FUN_144bf9b00();
    }
    if (*(int *)((longlong)param_1 + 0xc) == 0x10) {
      uVar2 = *(uint *)(*param_1 + 0x40);
      do {
        uVar3 = uVar2;
        LOCK();
        uVar2 = *(uint *)(*param_1 + 0x40);
        bVar6 = uVar3 == uVar2;
        if (bVar6) {
          *(uint *)(*param_1 + 0x40) = uVar3 + 0x200000 & 0xffe00000 | uVar3 & 0x7f;
          uVar2 = uVar3;
        }
        UNLOCK();
      } while (!bVar6);
      *(uint *)(param_1 + 1) = uVar3 + 0x200000 >> 0x15;
      if ((uVar3 >> 0xe & 0x7f) != 0) {
        FUN_144bdf120(*(undefined8 *)
                       (*param_1 + 0x80 +
                       (ulonglong)
                       ((uint)((longlong)(ulonglong)*(uint *)((longlong)param_1 + 0x14) >> 1) & 1) *
                       8));
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x100;
        return;
      }
    }
    else if (*(int *)((longlong)param_1 + 0xc) == 0x20) {
      lVar4 = *param_1;
      iVar5 = 0;
      piVar1 = (int *)(lVar4 + 0x90);
      if (-1 < *piVar1) {
        do {
          uVar2 = *(uint *)(lVar4 + 0x40) >> 0x15;
          if (*(int *)((longlong)param_1 + 0x14) < (int)uVar2) {
            *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
            *(uint *)(param_1 + 1) = uVar2;
            *(undefined4 *)((longlong)param_1 + 0xc) = 0x100;
            return;
          }
          lVar4 = *param_1;
          iVar5 = iVar5 + (uint)(*(longlong *)(lVar4 + 0x80) != 0);
        } while (iVar5 <= *piVar1);
      }
      uVar2 = *(uint *)(lVar4 + 0x40);
      uVar3 = uVar2 >> 0x15;
      if ((int)uVar3 <= *(int *)((longlong)param_1 + 0x14)) {
        while( true ) {
          LOCK();
          uVar3 = *(uint *)(*param_1 + 0x40);
          bVar6 = uVar2 == uVar3;
          if (bVar6) {
            *(uint *)(*param_1 + 0x40) = (uVar2 + 0x4000 ^ uVar2) & 0x1fc000 ^ uVar2;
            uVar3 = uVar2;
          }
          uVar2 = uVar3;
          UNLOCK();
          if (bVar6) break;
          if (*(int *)((longlong)param_1 + 0x14) < (int)(uVar2 >> 0x15)) {
            *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
            *(uint *)(param_1 + 1) = uVar2 >> 0x15;
            *(undefined4 *)((longlong)param_1 + 0xc) = 0x100;
            return;
          }
        }
        FUN_144bdf0d0(*(undefined8 *)
                       (*param_1 + 0x80 +
                       (ulonglong)
                       ((uint)((longlong)(ulonglong)*(uint *)((longlong)param_1 + 0x14) >> 1) & 1) *
                       8));
        uVar3 = *(uint *)(*param_1 + 0x40) >> 0x15;
      }
      *(uint *)(param_1 + 1) = uVar3;
    }
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x100;
  }
  return;
}



// FUNCTION 144bf9d60 FUN_144bf9d60 body=134 status=ok
// SIG undefined FUN_144bf9d60(void)

longlong *
FUN_144bf9d60(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x100;
  bVar1 = (byte)*(uint *)(param_2 + 0x40);
  uVar2 = *(uint *)(param_2 + 0x40);
  while ((bVar1 & 0x7f) < 0x7f) {
    LOCK();
    uVar3 = *(uint *)(*param_1 + 0x40);
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(uint *)(*param_1 + 0x40) = (uVar2 + 1 ^ uVar2) & 0x7f ^ uVar2;
      uVar3 = uVar2;
    }
    UNLOCK();
    if (bVar4) goto LAB_144bf9db8;
    uVar2 = uVar3;
    bVar1 = (byte)uVar3;
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffff8002;
LAB_144bf9db8:
  *(uint *)(param_1 + 1) = uVar2 >> 0x15;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_4;
  param_1[3] = param_3;
  if (param_5 == 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  }
  return param_1;
}



// FUNCTION 144bf9df0 FUN_144bf9df0 body=233 status=ok
// SIG undefined FUN_144bf9df0(void)

undefined8 * FUN_144bf9df0(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  
  uVar1 = param_2 & 0xffffffff;
  if (*(uint *)(param_1 + 0xc) == 1) {
    *(int *)(param_1 + 0x24) = (int)param_2;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return (undefined8 *)(param_1 + 0x18);
  }
  if ((*(uint *)(param_1 + 0xc) & 0x102) != 0) {
    FUN_144bf9b00();
  }
  if (*(int *)(param_1 + 0xc) == 0x10) {
    if ((int)param_2 == 0) {
      uVar1 = **(ulonglong **)(*(longlong *)(param_1 + 0x18) + 0x490) >> 0x20;
    }
    FUN_144bf96a0(*(longlong *)(param_1 + 0x18),uVar1,param_3);
  }
  puVar2 = (uint *)(param_1 + 0xc);
  if (*puVar2 != 1) {
    if (*puVar2 == 2) {
      FUN_144bf9b00(param_1);
    }
    if ((*puVar2 & 0x230) != 0) {
      FUN_144bf9be0(param_1);
    }
    *puVar2 = 2;
    if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 8)) {
      return (undefined8 *)&DAT_14c6e4710;
    }
  }
  return (undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144bf9ee0 FUN_144bf9ee0 body=290 status=ok
// SIG undefined FUN_144bf9ee0(void)

void FUN_144bf9ee0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
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
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x40,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined8 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined8 *)0x0) {
        uVar4 = puVar7[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar4;
        uVar4 = puVar7[3];
        puVar6[2] = puVar7[2];
        puVar6[3] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uVar2 = *(undefined4 *)(puVar7 + 5);
        uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar7 + 4);
        *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
        *(undefined4 *)(puVar6 + 5) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
        uVar4 = puVar7[7];
        puVar6[6] = puVar7[6];
        puVar6[7] = uVar4;
      }
      puVar6 = puVar6 + 8;
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
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 6);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 144bfa010 FUN_144bfa010 body=271 status=ok
// SIG undefined FUN_144bfa010(void)

void FUN_144bfa010(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar4 = param_3;
  if (param_3 < uVar6) {
    uVar4 = uVar6;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x40,&local_res8);
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  puVar3 = (undefined8 *)*param_1;
  puVar2 = puVar1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *puVar2 = *puVar3;
      }
      puVar2 = puVar2 + 8;
      puVar3 = puVar3 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar4 * 0x40 + 0x40;
  uVar5 = uVar4;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 0x40;
    uVar5 = uVar4 + 1;
    if (uVar6 <= local_res8) {
      uVar5 = uVar5 + (local_res8 + uVar4 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 << 6);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return;
}



// FUNCTION 144bfa120 FUN_144bfa120 body=53 status=ok
// SIG undefined FUN_144bfa120(void)

void FUN_144bfa120(longlong param_1)

{
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 144bfa160 FUN_144bfa160 body=11 status=ok
// SIG undefined FUN_144bfa160(void)

void FUN_144bfa160(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144bfa164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetThreadIdealProcessor(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 144bfa170 FUN_144bfa170 body=11 status=ok
// SIG undefined FUN_144bfa170(void)

void FUN_144bfa170(longlong param_1,DWORD_PTR param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144bfa174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetThreadAffinityMask(*(HANDLE *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 144bfa180 FUN_144bfa180 body=96 status=ok
// SIG undefined FUN_144bfa180(void)

void FUN_144bfa180(longlong param_1,int param_2)

{
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144bfa1d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetThreadPriority(*(HANDLE *)(param_1 + 8),-2);
    return;
  }
  if (param_2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000144bfa1c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetThreadPriority(*(HANDLE *)(param_1 + 8),-1);
    return;
  }
  if (param_2 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000144bfa1b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetThreadPriority(*(HANDLE *)(param_1 + 8),1);
    return;
  }
  if (param_2 != 4) {
                    /* WARNING: Could not recover jumptable at 0x000144bfa199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetThreadPriority(*(HANDLE *)(param_1 + 8),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144bfa1a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetThreadPriority(*(HANDLE *)(param_1 + 8),2);
  return;
}



// FUNCTION 144bfa1e0 FUN_144bfa1e0 body=24 status=ok
// SIG undefined FUN_144bfa1e0(void)

undefined8 * FUN_144bfa1e0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 144bfa200 FUN_144bfa200 body=450 status=ok
// SIG undefined FUN_144bfa200(void)

undefined8 * FUN_144bfa200(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  HANDLE hThread;
  HMODULE hModule;
  FARPROC pFVar3;
  ulonglong uVar4;
  int nPriority;
  undefined8 *puVar5;
  undefined8 *lpParameter;
  DWORD local_res20 [2];
  undefined8 local_248;
  undefined1 local_240 [536];
  
  local_248 = 0x78;
  puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_248,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar2,"Win32ThreadImpl");
  }
  puVar5 = (undefined8 *)0x0;
  lpParameter = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 2);
    puVar2[1] = 0;
    *puVar2 = _anon_CA8EDAD2::Win32ThreadImpl::vftable;
    FUN_144f50d80(puVar2 + 3,param_3);
    FUN_144be36a0(puVar2 + 0xd,*param_2,0xffffffff);
    *(undefined4 *)(puVar2 + 0xe) = 1;
    lpParameter = puVar2;
  }
  local_res20[0] = 0;
  hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_2[1],FUN_144bfa420,lpParameter,4,
                         local_res20);
  lpParameter[1] = hThread;
  if (hThread == (HANDLE)0x0) {
    puVar2 = (undefined8 *)*lpParameter;
    *param_1 = 0;
    (*(code *)*puVar2)(lpParameter,1);
    goto LAB_144bfa3a0;
  }
  iVar1 = *(int *)(param_2 + 2);
  if (iVar1 == 0) {
    nPriority = -2;
  }
  else if (iVar1 == 1) {
    nPriority = -1;
  }
  else {
    nPriority = 1;
    if ((iVar1 != 3) && (nPriority = 0, iVar1 == 4)) {
      nPriority = 2;
    }
  }
  SetThreadPriority(hThread,nPriority);
  SetThreadAffinityMask((HANDLE)lpParameter[1],param_2[3]);
  hModule = GetModuleHandleW(L"Kernel32.dll");
  if ((hModule == (HMODULE)0x0) ||
     (pFVar3 = GetProcAddress(hModule,"SetThreadDescription"), pFVar3 == (FARPROC)0x0)) {
LAB_144bfa384:
    FUN_144bfa4f0(*param_2,local_res20[0]);
  }
  else {
    puVar2 = (undefined8 *)FUN_144f62b20(local_240,*param_2);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar5 = (undefined8 *)*puVar2;
    }
    uVar4 = (*pFVar3)(lpParameter[1],puVar5);
    FUN_144f62d80(local_240);
    if (((byte)(uVar4 >> 0x1f) & 1) == 1) goto LAB_144bfa384;
  }
  ResumeThread((HANDLE)lpParameter[1]);
  *param_1 = lpParameter;
LAB_144bfa3a0:
  FUN_144f50d20(param_3);
  return param_1;
}



// FUNCTION 144bfa3d0 FUN_144bfa3d0 body=71 status=ok
// SIG undefined FUN_144bfa3d0(void)

undefined8 * FUN_144bfa3d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkThread::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144bfa420 FUN_144bfa420 body=43 status=ok
// SIG undefined FUN_144bfa420(void)

undefined8 FUN_144bfa420(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_144b3e9f0(local_res8,1);
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x70) = 0;
  return 0;
}



// FUNCTION 144bfa450 FUN_144bfa450 body=158 status=ok
// SIG undefined FUN_144bfa450(void)

undefined8 * FUN_144bfa450(undefined8 *param_1,uint param_2)

{
  *param_1 = _anon_CA8EDAD2::Win32ThreadImpl::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    WaitForSingleObject((HANDLE)param_1[1],0xffffffff);
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  FUN_144b49dd0(param_1 + 0xd);
  FUN_144f50d20(param_1 + 3);
  *param_1 = hkThread::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 144bfa4f0 FUN_144bfa4f0 body=58 status=ok
// SIG undefined FUN_144bfa4f0(void)

void FUN_144bfa4f0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28[0] = 0x1000;
  local_14 = 0;
  local_20 = param_1;
  local_18 = param_2;
  RaiseException(0x406d1388,0,6,(ULONG_PTR *)local_28);
  return;
}



// FUNCTION 144bfa530 FUN_144bfa530 body=43 status=ok
// SIG undefined FUN_144bfa530(void)

void FUN_144bfa530(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *param_1 = fVar2 * param_2[4] + fVar1 * *param_2 + fVar3 * param_2[8];
  param_1[1] = fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10;
  param_1[2] = fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11;
  param_1[3] = fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12;
  return;
}



// FUNCTION 144bfa560 FUN_144bfa560 body=60 status=ok
// SIG undefined FUN_144bfa560(void)

void FUN_144bfa560(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = param_2[8];
  fVar6 = param_2[9];
  fVar7 = param_2[10];
  fVar8 = param_2[0xb];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  *param_1 = fVar2 * param_2[1] + fVar1 * *param_2 + fVar3 * param_2[2];
  param_1[1] = fVar2 * fVar10 + fVar1 * fVar9 + fVar3 * fVar11;
  param_1[2] = fVar2 * fVar6 + fVar1 * fVar5 + fVar3 * fVar7;
  param_1[3] = fVar4 * fVar8 + fVar2 * fVar6 + fVar4 * fVar8;
  return;
}



// FUNCTION 144bfa5a0 FUN_144bfa5a0 body=47 status=ok
// SIG undefined FUN_144bfa5a0(void)

void FUN_144bfa5a0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
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
  float fVar15;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar13 = param_2[0xd];
  fVar14 = param_2[0xe];
  fVar15 = param_2[0xf];
  *param_1 = fVar2 * param_2[4] + fVar1 * *param_2 + fVar3 * param_2[8] + param_2[0xc];
  param_1[1] = fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10 + fVar13;
  param_1[2] = fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11 + fVar14;
  param_1[3] = fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12 + fVar15;
  return;
}



// FUNCTION 144bfa5d0 FUN_144bfa5d0 body=122 status=ok
// SIG undefined FUN_144bfa5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144bfa5d0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
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
  
  fVar12 = *param_2;
  fVar13 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = fVar3 * fVar12;
  fVar8 = fVar4 * fVar13;
  fVar9 = fVar5 * fVar1;
  fVar10 = (fVar8 + fVar7 + fVar9) * fVar12 + (fVar2 * fVar2 - _DAT_14c6dad90) * fVar3 +
           (fVar5 * fVar13 - fVar1 * fVar4) * fVar2;
  fVar11 = (fVar8 + fVar7 + fVar9) * fVar13 + (fVar2 * fVar2 - fRam000000014c6dad94) * fVar4 +
           (fVar3 * fVar1 - fVar12 * fVar5) * fVar2;
  fVar12 = (fVar8 + fVar7 + fVar9) * fVar1 + (fVar2 * fVar2 - fRam000000014c6dad98) * fVar5 +
           (fVar4 * fVar12 - fVar13 * fVar3) * fVar2;
  fVar13 = (fVar8 + fVar7 + fVar9) * fVar2 + (fVar2 * fVar2 - fRam000000014c6dad9c) * fVar6 +
           (fVar6 * fVar2 - fVar2 * fVar6) * fVar2;
  *param_1 = fVar10 + fVar10;
  param_1[1] = fVar11 + fVar11;
  param_1[2] = fVar12 + fVar12;
  param_1[3] = fVar13 + fVar13;
  return;
}



// FUNCTION 144bfa650 FUN_144bfa650 body=130 status=ok
// SIG undefined FUN_144bfa650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144bfa650(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
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
  
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar9 = param_2[7];
  fVar10 = param_2[8] * *param_3;
  fVar11 = param_2[9] * param_3[1];
  fVar12 = param_2[10] * param_3[2];
  fVar13 = param_2[0xb] * param_3[3];
  fVar4 = fVar1 * fVar10;
  fVar5 = fVar2 * fVar11;
  fVar6 = fVar3 * fVar12;
  fVar7 = (fVar5 + fVar4 + fVar6) * fVar1 + (fVar9 * fVar9 - _DAT_14c6dad90) * fVar10 +
          (fVar12 * fVar2 - fVar3 * fVar11) * fVar9;
  fVar8 = (fVar5 + fVar4 + fVar6) * fVar2 + (fVar9 * fVar9 - fRam000000014c6dad94) * fVar11 +
          (fVar10 * fVar3 - fVar1 * fVar12) * fVar9;
  fVar10 = (fVar5 + fVar4 + fVar6) * fVar3 + (fVar9 * fVar9 - fRam000000014c6dad98) * fVar12 +
           (fVar11 * fVar1 - fVar2 * fVar10) * fVar9;
  fVar9 = (fVar5 + fVar4 + fVar6) * fVar9 + (fVar9 * fVar9 - fRam000000014c6dad9c) * fVar13 +
          (fVar13 * fVar9 - fVar9 * fVar13) * fVar9;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = fVar7 + fVar7 + *param_2;
  param_1[1] = fVar8 + fVar8 + fVar1;
  param_1[2] = fVar10 + fVar10 + fVar2;
  param_1[3] = fVar9 + fVar9 + fVar3;
  return;
}



// FUNCTION 144bfa6e0 FUN_144bfa6e0 body=13 status=ok
// SIG undefined FUN_144bfa6e0(void)

void FUN_144bfa6e0(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144bfa6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(0,param_2,0x10);
  return;
}



// FUNCTION 144bfa6f0 FUN_144bfa6f0 body=12 status=ok
// SIG undefined FUN_144bfa6f0(void)

void FUN_144bfa6f0(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144bfa6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(0,param_2,0);
  return;
}



// FUNCTION 144bfa700 FUN_144bfa700 body=33 status=ok
// SIG undefined FUN_144bfa700(void)

undefined8 FUN_144bfa700(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144bfa730 FUN_144bfa730 body=995 status=ok
// SIG undefined FUN_144bfa730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 * FUN_144bfa730(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 local_res8 [8];
  
  if (DAT_14c787609 != '\0') {
    *param_1 = 0;
    return param_1;
  }
  DAT_14c787670._0_4_ = *param_2;
  DAT_14c787670._4_4_ = param_2[1];
  DAT_14c787678._0_4_ = param_2[2];
  DAT_14c787678._4_4_ = param_2[3];
  DAT_14c787680 = *(undefined8 *)(param_2 + 4);
  lVar2 = *(longlong *)(param_2 + 0xe);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  DAT_14c78760a = 1;
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 10);
    uVar5 = *(undefined8 *)(param_2 + 0xc);
    FUN_144b49820(&DAT_14c787618);
    _DAT_14c787648 = 0;
    _DAT_14c787638 = uVar4;
    _DAT_14c787640 = uVar5;
  }
  else {
    FUN_144b49820(&DAT_14c787618);
    _DAT_14c787638 = 0;
    _DAT_14c787640 = 0;
    _DAT_14c787648 = lVar2;
  }
  _DAT_14c787618 = _anon_5C9B216C::BaseSystemOutput::vftable;
  _DAT_14c787650 = uVar3;
  FUN_144bdbf70(0);
  DAT_14c787610 = &DAT_14c787618;
  if (*(char *)(param_2 + 0x1a) == '\0') {
    _DAT_14c6e4740 = *param_2;
    uRam000000014c6e4744 = param_2[1];
    uRam000000014c6e4748 = param_2[2];
    uRam000000014c6e474c = param_2[3];
    ppuVar7 = &PTR_vftable_14c6e4730;
    _DAT_14c6e4750 = *(undefined8 *)(param_2 + 4);
  }
  else {
    ppuVar7 = *(undefined ***)(param_2 + 0x12);
    ppuVar9 = &PTR_vftable_14c727a50;
    if (*(undefined ***)(param_2 + 0x14) != (undefined **)0x0) {
      ppuVar9 = *(undefined ***)(param_2 + 0x14);
    }
    if ((ppuVar7 == (undefined **)0x0) && (*(code **)(param_2 + 0x16) != (code *)0x0)) {
      ppuVar7 = (undefined **)(**(code **)(param_2 + 0x16))(ppuVar9);
      DAT_14c787658 = *(undefined8 *)(param_2 + 0x18);
      DAT_14c787660 = ppuVar7;
      DAT_14c787668 = ppuVar9;
    }
  }
  FUN_144be55a0(ppuVar7,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8),
                *(undefined8 *)(param_2 + 0x10),*(undefined1 *)((longlong)param_2 + 0x69));
  FUN_144f50f10();
  puVar8 = (undefined *)FUN_144bdc900();
  puVar6 = DAT_14c787600;
  if (DAT_14c787600 != puVar8) {
    do {
      if (puVar6 == (undefined *)0x0) goto LAB_144bfa8e0;
      puVar1 = (undefined8 *)(puVar6 + 0x20);
      puVar6 = *(undefined **)(puVar6 + 0x20);
    } while (puVar6 != puVar8);
    *puVar1 = *(undefined8 *)(puVar6 + 0x20);
    *(undefined **)(puVar8 + 0x20) = DAT_14c787600;
    DAT_14c787600 = puVar8;
  }
LAB_144bfa8e0:
  puVar6 = DAT_14c787600;
  if (DAT_14c787600 != &DAT_14c798f70) {
    do {
      if (puVar6 == (undefined *)0x0) goto LAB_144bfa933;
      puVar1 = (undefined8 *)(puVar6 + 0x20);
      puVar6 = *(undefined **)(puVar6 + 0x20);
    } while (puVar6 != &DAT_14c798f70);
    *puVar1 = DAT_14c798f90;
    DAT_14c798f90 = DAT_14c787600;
    DAT_14c787600 = &DAT_14c798f70;
  }
LAB_144bfa933:
  puVar6 = DAT_14c787600;
  if (DAT_14c787600 != &DAT_14c783c78) {
    do {
      if (puVar6 == (undefined *)0x0) goto LAB_144bfa983;
      puVar1 = (undefined8 *)(puVar6 + 0x20);
      puVar6 = *(undefined **)(puVar6 + 0x20);
    } while (puVar6 != &DAT_14c783c78);
    *puVar1 = DAT_14c783c98;
    DAT_14c783c98 = DAT_14c787600;
    DAT_14c787600 = &DAT_14c783c78;
  }
LAB_144bfa983:
  puVar6 = DAT_14c787600;
  if (DAT_14c787600 != &DAT_14c797d90) {
    do {
      if (puVar6 == (undefined *)0x0) goto LAB_144bfa9d0;
      puVar1 = (undefined8 *)(puVar6 + 0x20);
      puVar6 = *(undefined **)(puVar6 + 0x20);
    } while (puVar6 != &DAT_14c797d90);
    *puVar1 = _DAT_14c797db0;
    _DAT_14c797db0 = DAT_14c787600;
    DAT_14c787600 = &DAT_14c797d90;
  }
LAB_144bfa9d0:
  puVar8 = (undefined *)FUN_144bf9570();
  puVar6 = DAT_14c787600;
  if (DAT_14c787600 != puVar8) {
    do {
      if (puVar6 == (undefined *)0x0) goto LAB_144bfaa1d;
      puVar1 = (undefined8 *)(puVar6 + 0x20);
      puVar6 = *(undefined **)(puVar6 + 0x20);
    } while (puVar6 != puVar8);
    *puVar1 = *(undefined8 *)(puVar6 + 0x20);
    *(undefined **)(puVar8 + 0x20) = DAT_14c787600;
    DAT_14c787600 = puVar8;
  }
LAB_144bfaa1d:
  puVar8 = (undefined *)FUN_144bdde70();
  puVar6 = DAT_14c787600;
  if (DAT_14c787600 != puVar8) {
    do {
      if (puVar6 == (undefined *)0x0) goto LAB_144bfaa70;
      puVar1 = (undefined8 *)(puVar6 + 0x20);
      puVar6 = *(undefined **)(puVar6 + 0x20);
    } while (puVar6 != puVar8);
    *puVar1 = *(undefined8 *)(puVar6 + 0x20);
    *(undefined **)(puVar8 + 0x20) = DAT_14c787600;
    DAT_14c787600 = puVar8;
  }
LAB_144bfaa70:
  puVar6 = DAT_14c787600;
  if (DAT_14c787600 != &DAT_14c797f70) {
    do {
      if (puVar6 == (undefined *)0x0) goto LAB_144bfaab1;
      puVar1 = (undefined8 *)(puVar6 + 0x20);
      puVar6 = *(undefined **)(puVar6 + 0x20);
    } while (puVar6 != &DAT_14c797f70);
    *puVar1 = _DAT_14c797f90;
    _DAT_14c797f90 = DAT_14c787600;
    DAT_14c787600 = &DAT_14c797f70;
  }
LAB_144bfaab1:
  ppuVar7 = &PTR_s_CommonInitNode_14c6e4758;
  do {
    if ((code *)ppuVar7[1] != (code *)0x0) {
      (*(code *)ppuVar7[1])(local_res8,ppuVar7[3]);
    }
    ppuVar7 = (undefined **)ppuVar7[4];
  } while (ppuVar7 != (undefined **)0x0);
  DAT_14c78760a = 0;
  DAT_14c787609 = '\x01';
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bfab20 FUN_144bfab20 body=13 status=ok
// SIG undefined FUN_144bfab20(void)

undefined1 * FUN_144bfab20(undefined1 *param_1)

{
  *param_1 = DAT_14c787609;
  return param_1;
}



// FUNCTION 144bfab50 FUN_144bfab50 body=8 status=ok
// SIG undefined FUN_144bfab50(void)

undefined8 FUN_144bfab50(void)

{
  return DAT_14c787610;
}



// FUNCTION 144bfab60 FUN_144bfab60 body=56 status=ok
// SIG undefined FUN_144bfab60(void)

void FUN_144bfab60(LPCSTR param_1)

{
  FILE *_File;
  
  OutputDebugStringA(param_1);
  FUN_14049bb83(&DAT_14998f7e0,param_1);
  _File = (FILE *)__acrt_iob_func(1);
                    /* WARNING: Could not recover jumptable at 0x000144bfab91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fflush(_File);
  return;
}



// FUNCTION 144bfaba0 FUN_144bfaba0 body=54 status=ok
// SIG undefined FUN_144bfaba0(void)

void FUN_144bfaba0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = 0;
  if (param_6 != '\0') {
    param_1[4] = DAT_14c787600;
    DAT_14c787600 = param_1;
  }
  return;
}



// FUNCTION 144bfabe0 FUN_144bfabe0 body=474 status=ok
// SIG undefined FUN_144bfabe0(void)

undefined4 * FUN_144bfabe0(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 local_res10 [16];
  longlong local_48;
  int local_40;
  uint local_3c;
  
  lVar8 = 0;
  lVar5 = *param_2;
  iVar6 = 0;
  uVar9 = 0;
  local_3c = 0x80000000;
  local_48 = 0;
  local_40 = 0;
  lVar1 = lVar5;
  if (lVar5 != 0) {
    do {
      while ((lVar7 = lVar1, *(code **)(lVar7 + 8) != (code *)0x0 &&
             (piVar2 = (int *)(**(code **)(lVar7 + 8))(local_res10,*(undefined8 *)(lVar7 + 0x18)),
             *piVar2 < 0))) {
        iVar10 = iVar6 + 1;
        if ((int)(uVar9 & 0x7fffffff) < iVar10) {
          FUN_144bfaff0(&local_48,&PTR_vftable_14c6e47c0,(longlong)iVar10);
          lVar8 = local_48;
          iVar6 = local_40;
          uVar9 = local_3c;
        }
        plVar4 = (longlong *)((longlong)iVar6 * 8 + lVar8);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = lVar7;
        }
        lVar1 = *(longlong *)(lVar7 + 0x20);
        *(undefined8 *)(*param_2 + 0x20) = 0;
        iVar6 = iVar10;
        local_40 = iVar10;
        if (lVar1 == 0) {
          *param_2 = lVar5;
          *(undefined8 *)(lVar5 + 0x20) = 0;
          goto joined_r0x000144bfaccf;
        }
        *param_2 = lVar1;
      }
      param_2 = (longlong *)(lVar7 + 0x20);
      lVar1 = *param_2;
      lVar5 = lVar7;
    } while (*param_2 != 0);
joined_r0x000144bfaccf:
    while (iVar6 != 0) {
      iVar10 = iVar6 + -1;
      lVar5 = (longlong)iVar10;
      if (-1 < iVar10) {
        plVar4 = (longlong *)(lVar5 * 8 + lVar8);
        do {
          lVar1 = *plVar4;
          lVar7 = (longlong)iVar6;
          if ((*(code **)(lVar1 + 8) == (code *)0x0) ||
             (piVar2 = (int *)(**(code **)(lVar1 + 8))(local_res10,*(undefined8 *)(lVar1 + 0x18)),
             -1 < *piVar2)) {
            iVar6 = iVar6 + -1;
            *param_2 = lVar1;
            param_2 = (longlong *)(lVar1 + 0x20);
            if ((iVar6 != iVar10) &&
               (plVar3 = (longlong *)(lVar7 * 8 + -8 + lVar8), plVar4 != plVar3)) {
              *plVar4 = *plVar3;
            }
          }
          iVar10 = iVar10 + -1;
          plVar4 = plVar4 + -1;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
      }
    }
  }
  *param_1 = 0;
  if ((-1 < (int)local_3c) && (lVar8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar8,(ulonglong)(local_3c & 0x7fffffff) << 3);
  }
  return param_1;
}



// FUNCTION 144bfadc0 FUN_144bfadc0 body=255 status=ok
// SIG undefined FUN_144bfadc0(void)

undefined4 * FUN_144bfadc0(undefined4 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  longlong local_28;
  int local_20;
  uint local_1c;
  
  lVar7 = 0;
  lVar5 = *param_2;
  local_28 = 0;
  uVar6 = 0x80000000;
  local_20 = 0;
  local_1c = 0x80000000;
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x20)) {
    iVar1 = local_20 + 1;
    if ((int)(uVar6 & 0x7fffffff) < iVar1) {
      FUN_144bfaff0(&local_28,&PTR_vftable_14c6e47a0,(longlong)iVar1);
      lVar7 = local_28;
      uVar6 = local_1c;
    }
    plVar2 = (longlong *)(lVar7 + (longlong)local_20 * 8);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = lVar5;
    }
    local_20 = iVar1;
  }
  lVar5 = (longlong)(local_20 + -1);
  if (-1 < local_20 + -1) {
    do {
      lVar3 = *(longlong *)(lVar7 + lVar5 * 8);
      pcVar4 = *(code **)(lVar3 + 0x10);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(local_res8,*(undefined8 *)(lVar3 + 0x18));
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *param_1 = 0;
  if ((-1 < (int)uVar6) && (lVar7 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar7,(ulonglong)(uVar6 & 0x7fffffff) << 3);
  }
  return param_1;
}



// FUNCTION 144bfaec0 FUN_144bfaec0 body=149 status=ok
// SIG undefined FUN_144bfaec0(void)

undefined8 FUN_144bfaec0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 local_a8 [20];
  
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bfaef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x38));
    return uVar1;
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     ((*(ulonglong *)(param_2 + 0x28) & 0xfffffffffffffffe) != 0)) {
    FUN_144bdf360(local_a8);
    FUN_144bdbe90(param_2,local_a8,*(undefined4 *)(param_1 + 0x18),1);
    (**(code **)(param_1 + 0x30))(local_a8[0],*(undefined8 *)(param_1 + 0x38));
    FUN_144bdf2f0(local_a8);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)*(char *)(param_2 + 0x19);
  return 0;
}



// FUNCTION 144bfaf60 FUN_144bfaf60 body=17 status=ok
// SIG undefined FUN_144bfaf60(void)

void FUN_144bfaf60(longlong param_1)

{
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bfaf6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 144bfaf80 FUN_144bfaf80 body=107 status=ok
// SIG undefined FUN_144bfaf80(void)

undefined8 * FUN_144bfaf80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = _anon_5C9B216C::BaseSystemOutput::vftable;
  FUN_144bdbf70(1);
  FUN_144b4abb0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144bfaff0 FUN_144bfaff0 body=235 status=ok
// SIG undefined FUN_144bfaff0(void)

void FUN_144bfaff0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144bfb0e0 FUN_144bfb0e0 body=285 status=ok
// SIG undefined FUN_144bfb0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144bfb0e0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_RAX;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  uint uVar19;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar26;
  
  auVar16 = *param_2;
  auVar20 = maxps(auVar16,*param_1);
  auVar21 = minps(auVar20,param_1[1]);
  auVar20._0_4_ = auVar16._0_4_ - auVar21._0_4_;
  auVar20._4_4_ = auVar16._4_4_ - auVar21._4_4_;
  auVar20._8_4_ = auVar16._8_4_ - auVar21._8_4_;
  auVar20._12_4_ = auVar16._12_4_ - auVar21._12_4_;
  fVar9 = auVar20._0_4_ * auVar20._0_4_;
  fVar12 = auVar20._4_4_ * auVar20._4_4_;
  auVar16._8_4_ = auVar20._8_4_ * auVar20._8_4_;
  auVar16._4_4_ = auVar16._8_4_;
  auVar16._0_4_ = auVar16._8_4_;
  auVar16._12_4_ = auVar16._8_4_;
  auVar17._0_4_ = fVar12 + fVar9 + auVar16._8_4_;
  auVar17._4_4_ = fVar12 + fVar9 + auVar16._8_4_;
  auVar17._8_4_ = fVar12 + fVar9 + auVar16._8_4_;
  auVar17._12_4_ = fVar12 + fVar9 + auVar16._8_4_;
  if (!NAN(auVar17._0_4_) && auVar17._0_4_ == 0.0) {
    auVar16 = ZEXT816(0);
    auVar13 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar16 = sqrtps(auVar16,auVar17);
    auVar20 = divps(auVar20,auVar16);
    auVar13 = auVar20._0_12_;
  }
  auVar14._12_4_ = auVar16._12_4_;
  auVar14._0_12_ = auVar13;
  *param_3 = auVar14;
  if (auVar16._12_4_ <= _DAT_14c6daea0) {
    fVar9 = (*(float *)param_1[1] + *(float *)*param_1) * _DAT_14c6dad90;
    fVar12 = (*(float *)(param_1[1] + 4) + *(float *)(*param_1 + 4)) * fRam000000014c6dad94;
    fVar7 = (*(float *)(param_1[1] + 8) + *(float *)(*param_1 + 8)) * fRam000000014c6dad98;
    fVar8 = (*(float *)(param_1[1] + 0xc) + *(float *)(*param_1 + 0xc)) * fRam000000014c6dad9c;
    fVar18 = auVar21._0_4_ - fVar9;
    fVar22 = auVar21._4_4_ - fVar12;
    fVar24 = auVar21._8_4_ - fVar7;
    fVar26 = auVar21._12_4_ - fVar8;
    fVar9 = ABS(fVar18) - (*(float *)param_1[1] - fVar9);
    fVar12 = ABS(fVar22) - (*(float *)(param_1[1] + 4) - fVar12);
    fVar7 = ABS(fVar24) - (*(float *)(param_1[1] + 8) - fVar7);
    fVar8 = ABS(fVar26) - (*(float *)(param_1[1] + 0xc) - fVar8);
    auVar21._4_4_ = fVar9;
    auVar21._0_4_ = fVar9;
    auVar21._8_4_ = fVar9;
    auVar21._12_4_ = fVar9;
    auVar10._4_4_ = fVar7;
    auVar10._0_4_ = fVar7;
    auVar10._8_4_ = fVar7;
    auVar10._12_4_ = fVar7;
    auVar15._4_4_ = fVar12;
    auVar15._0_4_ = fVar12;
    auVar15._8_4_ = fVar12;
    auVar15._12_4_ = fVar12;
    auVar16 = maxps(auVar15,auVar21);
    auVar16 = maxps(auVar10,auVar16);
    auVar11._4_4_ = -(uint)(auVar16._4_4_ <= fVar12);
    auVar11._0_4_ = -(uint)(auVar16._0_4_ <= fVar9);
    auVar11._8_4_ = -(uint)(auVar16._8_4_ <= fVar7);
    auVar11._12_4_ = -(uint)(auVar16._12_4_ <= fVar8);
    uVar6 = movmskps((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),!NAN(auVar17._0_4_)),auVar11);
    bVar2 = (&DAT_14998f5c0)[uVar6 & 7];
    lVar1 = (longlong)(char)bVar2 * 0x10;
    uVar6 = *(uint *)(lVar1 + 0x14c6dae4c);
    uVar19 = (uint)(fVar18 < 0.0) * -0x80000000 ^ *(uint *)(&DAT_14c6dae40 + lVar1);
    uVar23 = (uint)(fVar22 < 0.0) * -0x80000000 ^ *(uint *)(lVar1 + 0x14c6dae44);
    uVar25 = (uint)(fVar24 < 0.0) * -0x80000000 ^ *(uint *)(lVar1 + 0x14c6dae48);
    *(uint *)*param_3 = uVar19;
    *(uint *)(*param_3 + 4) = uVar23;
    *(uint *)(*param_3 + 8) = uVar25;
    *(uint *)(*param_3 + 0xc) = (uint)(fVar26 < 0.0) * -0x80000000 ^ uVar6;
    lVar1 = (longlong)(4 << (bVar2 & 0x1f)) * 4;
    uVar6 = *(uint *)(&DAT_14998f650 + lVar1);
    uVar3 = *(uint *)(&UNK_14998f654 + lVar1);
    uVar4 = *(uint *)(&UNK_14998f658 + lVar1);
    uVar5 = *(uint *)(&UNK_14998f65c + lVar1);
    *(uint *)*param_3 = uVar19;
    *(uint *)(*param_3 + 4) = uVar23;
    *(uint *)(*param_3 + 8) = uVar25;
    *(uint *)(*param_3 + 0xc) =
         (uint)fVar9 & uVar6 | (uint)fVar7 & uVar4 | (uint)fVar12 & uVar3 | (uint)fVar8 & uVar5;
  }
  return;
}



// FUNCTION 144bfb200 `vector_destructor_iterator' body=83 status=ok
// SIG void `vector_destructor_iterator'(void * param_1, __uint64 param_2, __uint64 param_3, _func_void_void_ptr * param_4)

/* Library Function - Single Match
    void __cdecl `vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned __int64,void
   (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
    do {
      pvVar1 = (void *)((longlong)pvVar1 - param_2);
      (*param_4)(pvVar1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144bfb260 FUN_144bfb260 body=343 status=ok
// SIG undefined FUN_144bfb260(void)

void FUN_144bfb260(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = param_3 & 0xfffffffffffffff8;
  if ((uVar6 != 0) && ((((byte)param_1 | (byte)param_2 | (byte)param_3) & 7) == 0)) {
    if (7 < (longlong)param_3) {
      uVar5 = param_3 >> 3;
      puVar1 = (undefined8 *)
               ((param_1 - 8) +
               ((longlong)(param_3 + ((uint)((longlong)param_3 >> 0x3f) & 7)) >> 3) * 8);
      do {
        *puVar1 = *(undefined8 *)((param_2 - param_1) + (longlong)puVar1);
        puVar1 = puVar1 + -1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = param_1 + uVar6;
    param_2 = param_2 + uVar6;
    param_3 = (ulonglong)((uint)param_3 & 7);
  }
  uVar6 = param_3 & 0xfffffffffffffffc;
  if ((uVar6 != 0) && ((((byte)param_1 | (byte)param_2 | (byte)param_3) & 3) == 0)) {
    if (3 < (longlong)param_3) {
      puVar2 = (undefined4 *)
               (param_1 +
               (((longlong)(param_3 + ((uint)((longlong)param_3 >> 0x3f) & 3)) >> 2) + -1) * 4);
      uVar5 = param_3 >> 2;
      do {
        *puVar2 = *(undefined4 *)((longlong)puVar2 + (param_2 - param_1));
        puVar2 = puVar2 + -1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = param_1 + uVar6;
    param_2 = param_2 + uVar6;
    param_3 = (ulonglong)((uint)param_3 & 3);
  }
  uVar6 = param_3 & 0xfffffffffffffffe;
  if ((uVar6 != 0) && (((param_1 | param_2 | param_3) & 1) == 0)) {
    if (1 < (longlong)param_3) {
      puVar3 = (undefined2 *)(param_1 + ((longlong)param_3 / 2 + -1) * 2);
      uVar5 = param_3 >> 1;
      do {
        *puVar3 = *(undefined2 *)((longlong)puVar3 + (param_2 - param_1));
        puVar3 = puVar3 + -1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = param_1 + uVar6;
    param_2 = param_2 + uVar6;
    param_3 = (ulonglong)((uint)param_3 & 1);
  }
  if (0 < (longlong)param_3) {
    puVar4 = (undefined1 *)((param_1 - 1) + param_3);
    do {
      *puVar4 = puVar4[param_2 - param_1];
      puVar4 = puVar4 + -1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144bfb3c0 FUN_144bfb3c0 body=374 status=ok
// SIG undefined FUN_144bfb3c0(void)

void FUN_144bfb3c0(void *param_1,void *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 < param_1) {
    uVar6 = param_3 & 0xfffffffffffffff8;
    if ((uVar6 != 0) && ((((byte)param_1 | (byte)param_2 | (byte)param_3) & 7) == 0)) {
      if (7 < (longlong)param_3) {
        uVar5 = param_3 >> 3;
        puVar1 = (undefined8 *)
                 ((longlong)param_1 +
                 ((longlong)(param_3 + ((uint)((longlong)param_3 >> 0x3f) & 7)) >> 3) * 8 + -8);
        do {
          *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
          puVar1 = puVar1 + -1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_1 = (void *)((longlong)param_1 + uVar6);
      param_2 = (void *)((longlong)param_2 + uVar6);
      param_3 = (ulonglong)((uint)param_3 & 7);
    }
    uVar6 = param_3 & 0xfffffffffffffffc;
    if ((uVar6 != 0) && ((((byte)param_1 | (byte)param_2 | (byte)param_3) & 3) == 0)) {
      if (3 < (longlong)param_3) {
        puVar2 = (undefined4 *)
                 ((longlong)param_1 +
                 (((longlong)(param_3 + ((uint)((longlong)param_3 >> 0x3f) & 3)) >> 2) + -1) * 4);
        uVar5 = param_3 >> 2;
        do {
          *puVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
          puVar2 = puVar2 + -1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_1 = (void *)((longlong)param_1 + uVar6);
      param_2 = (void *)((longlong)param_2 + uVar6);
      param_3 = (ulonglong)((uint)param_3 & 3);
    }
    uVar6 = param_3 & 0xfffffffffffffffe;
    if ((uVar6 != 0) && ((((ulonglong)param_1 | (ulonglong)param_2 | param_3) & 1) == 0)) {
      if (1 < (longlong)param_3) {
        puVar3 = (undefined2 *)((longlong)param_1 + ((longlong)param_3 / 2 + -1) * 2);
        uVar5 = param_3 >> 1;
        do {
          *puVar3 = *(undefined2 *)((longlong)puVar3 + ((longlong)param_2 - (longlong)param_1));
          puVar3 = puVar3 + -1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_1 = (void *)((longlong)param_1 + uVar6);
      param_2 = (void *)((longlong)param_2 + uVar6);
      param_3 = (ulonglong)((uint)param_3 & 1);
    }
    if (0 < (longlong)param_3) {
      puVar4 = (undefined1 *)((longlong)param_1 + (param_3 - 1));
      do {
        *puVar4 = puVar4[(longlong)param_2 - (longlong)param_1];
        puVar4 = puVar4 + -1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
  }
  else if (param_1 < param_2) {
    memmove(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 144bfb540 FUN_144bfb540 body=8 status=ok
// SIG undefined FUN_144bfb540(void)

void FUN_144bfb540(void *param_1,int param_2,uint param_3)

{
  memset(param_1,param_2,(ulonglong)param_3);
  return;
}



// FUNCTION 144bfb550 FUN_144bfb550 body=199 status=ok
// SIG undefined FUN_144bfb550(void)

void FUN_144bfb550(undefined4 *param_1,undefined4 param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  puVar1 = param_1 + param_3;
  uVar4 = 0;
  if (((ulonglong)param_1 & 0xf) != 0) {
    uVar2 = 4 - (ulonglong)(((uint)param_1 & 0xf) >> 2);
    if (param_3 < uVar2) {
      uVar2 = param_3;
    }
    param_3 = param_3 - uVar2;
    uVar3 = uVar2 & 0x3fffffffffffffff;
    if (param_1 + uVar2 < param_1) {
      uVar3 = uVar4;
    }
    if (uVar3 != 0) {
      uVar3 = uVar2 * 4;
      if (param_1 + uVar2 < param_1) {
        uVar3 = uVar4;
      }
      puVar5 = param_1;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = param_2;
        puVar5 = puVar5 + 1;
      }
      param_1 = (undefined4 *)((longlong)param_1 + uVar3);
    }
  }
  if (param_3 >> 2 != 0) {
    puVar5 = param_1 + (param_3 >> 2) * 4;
    for (; param_1 < puVar5; param_1 = param_1 + 4) {
      *param_1 = param_2;
      param_1[1] = param_2;
      param_1[2] = param_2;
      param_1[3] = param_2;
    }
  }
  uVar2 = (ulonglong)((longlong)puVar1 + (3 - (longlong)param_1)) >> 2;
  if (puVar1 < param_1) {
    uVar2 = uVar4;
  }
  if (uVar2 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = param_2;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// FUNCTION 144bfb620 FUN_144bfb620 body=61 status=ok
// SIG undefined FUN_144bfb620(void)

undefined8 FUN_144bfb620(byte *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  
  if (param_3 != 0) {
    pbVar1 = param_1;
    do {
      if (*pbVar1 < pbVar1[param_2 - (longlong)param_1]) {
        return 0xffffffff;
      }
      if (*pbVar1 != pbVar1[param_2 - (longlong)param_1]) {
        return 1;
      }
      pbVar1 = pbVar1 + 1;
    } while ((ulonglong)((longlong)pbVar1 - (longlong)param_1) < param_3);
  }
  return 0;
}



// FUNCTION 144bfb660 FUN_144bfb660 body=518 status=ok
// SIG undefined FUN_144bfb660(void)

undefined8 FUN_144bfb660(int *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  iVar4 = (int)param_2;
  piVar12 = param_1 + param_3;
  piVar5 = param_1;
  if (((ulonglong)param_1 & 0xf) != 0) {
    uVar11 = 4 - (ulonglong)(((uint)param_1 & 0xf) >> 2);
    if (param_3 < uVar11) {
      uVar11 = param_3;
    }
    param_3 = param_3 - uVar11;
    while (piVar5 < param_1 + uVar11) {
      iVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      if (iVar6 != iVar4) {
        *param_4 = (longlong)piVar5 + (-4 - (longlong)param_1);
        return 0;
      }
    }
  }
  uVar11 = param_3 >> 4;
  lVar8 = 0;
  piVar13 = param_1;
  if (uVar11 == 0) {
LAB_144bfb74b:
    piVar10 = piVar5 + (param_3 & 0xfffffffffffffffc);
    while (piVar5 < piVar10) {
      iVar6 = *piVar5;
      piVar1 = piVar5 + 1;
      piVar2 = piVar5 + 2;
      piVar3 = piVar5 + 3;
      piVar5 = piVar5 + 4;
      auVar15._0_4_ = -(uint)(iVar6 == iVar4);
      auVar15._4_4_ = -(uint)(*piVar1 == iVar4);
      auVar15._8_4_ = -(uint)(*piVar2 == iVar4);
      auVar15._12_4_ = -(uint)(*piVar3 == iVar4);
      iVar6 = movmskps((int)lVar8,auVar15);
      if (iVar6 != 0xf) {
        auVar16._0_4_ = -(uint)(auVar15._0_4_ == 0);
        auVar16._4_4_ = -(uint)(auVar15._4_4_ == 0);
        auVar16._8_4_ = -(uint)(auVar15._8_4_ == 0);
        auVar16._12_4_ = -(uint)(auVar15._12_4_ == 0);
        uVar9 = movmskps(iVar4,auVar16);
        *param_4 = ((longlong)
                    (char)(&DAT_14998f5a0)[CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar9)] * 4 -
                   (longlong)piVar13) + -0x10 + (longlong)piVar5;
        return 0;
      }
      lVar8 = 0xf;
    }
    do {
      if (piVar12 <= piVar5) {
        return 1;
      }
      iVar6 = *piVar5;
      piVar5 = piVar5 + 1;
    } while (iVar6 == iVar4);
    *param_4 = (longlong)piVar5 + (-4 - (longlong)piVar13);
  }
  else {
    lVar8 = uVar11 * 0x10;
    param_3 = param_3 + uVar11 * -0x10;
    piVar10 = piVar5 + uVar11 * 0x10;
    piVar13 = piVar5;
    do {
      piVar5 = piVar13;
      piVar13 = piVar5;
      if (piVar10 <= piVar5) goto LAB_144bfb74b;
      auVar21._0_4_ = -(uint)(piVar5[0xc] == iVar4);
      auVar21._4_4_ = -(uint)(piVar5[0xd] == iVar4);
      auVar21._8_4_ = -(uint)(piVar5[0xe] == iVar4);
      auVar21._12_4_ = -(uint)(piVar5[0xf] == iVar4);
      auVar20._0_4_ = -(uint)(piVar5[4] == iVar4);
      auVar20._4_4_ = -(uint)(piVar5[5] == iVar4);
      auVar20._8_4_ = -(uint)(piVar5[6] == iVar4);
      auVar20._12_4_ = -(uint)(piVar5[7] == iVar4);
      auVar17._0_4_ = -(uint)(*piVar5 == iVar4);
      auVar17._4_4_ = -(uint)(piVar5[1] == iVar4);
      auVar17._8_4_ = -(uint)(piVar5[2] == iVar4);
      auVar17._12_4_ = -(uint)(piVar5[3] == iVar4);
      auVar19._0_4_ = -(uint)(piVar5[8] == iVar4);
      auVar19._4_4_ = -(uint)(piVar5[9] == iVar4);
      auVar19._8_4_ = -(uint)(piVar5[10] == iVar4);
      auVar19._12_4_ = -(uint)(piVar5[0xb] == iVar4);
      auVar14._0_4_ = auVar21._0_4_ & auVar19._0_4_ & auVar20._0_4_ & auVar17._0_4_;
      auVar14._4_4_ = auVar21._4_4_ & auVar19._4_4_ & auVar20._4_4_ & auVar17._4_4_;
      auVar14._8_4_ = auVar21._8_4_ & auVar19._8_4_ & auVar20._8_4_ & auVar17._8_4_;
      auVar14._12_4_ = auVar21._12_4_ & auVar19._12_4_ & auVar20._12_4_ & auVar17._12_4_;
      uVar9 = (undefined4)((ulonglong)lVar8 >> 0x20);
      iVar6 = movmskps((int)lVar8,auVar14);
      lVar8 = CONCAT44(uVar9,iVar6);
      piVar13 = piVar5 + 0x10;
    } while (iVar6 == 0xf);
    iVar4 = movmskps((int)(piVar5 + 0x10),auVar17);
    piVar12 = piVar5;
    if (((iVar4 == 0xf) &&
        (iVar4 = movmskps(0xf,auVar20), piVar12 = piVar5 + 4, auVar17 = auVar20, iVar4 == 0xf)) &&
       (iVar4 = movmskps(0xf,auVar19), piVar12 = piVar5 + 0xc, auVar17 = auVar21, iVar4 != 0xf)) {
      piVar12 = piVar5 + 8;
      auVar17 = auVar19;
    }
    auVar18._0_4_ = -(uint)(auVar17._0_4_ == 0);
    auVar18._4_4_ = -(uint)(auVar17._4_4_ == 0);
    auVar18._8_4_ = -(uint)(auVar17._8_4_ == 0);
    auVar18._12_4_ = -(uint)(auVar17._12_4_ == 0);
    uVar7 = movmskps(iVar6,auVar18);
    *param_4 = ((longlong)(char)(&DAT_14998f5a0)[CONCAT44(uVar9,uVar7)] * 4 - (longlong)param_1) +
               (longlong)piVar12;
  }
  return 0;
}



// FUNCTION 144bfb870 FUN_144bfb870 body=183 status=ok
// SIG undefined FUN_144bfb870(void)

undefined1
FUN_144bfb870(longlong param_1,uint param_2,longlong param_3,longlong param_4,longlong *param_5)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  uint uVar5;
  
  if (param_3 != param_4) {
    bVar3 = 0x18;
    pcVar4 = (char *)((ulonglong)((char *)(param_1 + param_3) + 3) & 0xfffffffffffffffc);
    uVar5 = 0xff000000;
    pcVar1 = pcVar4;
    while (pcVar1 = pcVar1 + -1, (char *)(param_1 + param_3) <= pcVar1) {
      if (*pcVar1 != (char)((uVar5 & param_2) >> (bVar3 & 0x1f))) {
        *param_5 = (longlong)pcVar1 - param_1;
        return 0;
      }
      uVar5 = uVar5 >> 8;
      bVar3 = bVar3 - 8;
    }
    cVar2 = FUN_144bfb660(pcVar4,param_2,(ulonglong)((param_1 - (longlong)pcVar4) + param_4) >> 2,
                          param_5);
    if (cVar2 == '\0') {
      *param_5 = (longlong)(pcVar4 + (*param_5 - param_1));
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144bfb930 FUN_144bfb930 body=27 status=ok
// SIG undefined FUN_144bfb930(void)

uint FUN_144bfb930(byte *param_1,longlong param_2)

{
  byte bVar1;
  
  param_2 = param_2 - (longlong)param_1;
  do {
    bVar1 = *param_1;
    if (bVar1 != param_1[param_2]) {
      return -(uint)(bVar1 < param_1[param_2]) | 1;
    }
    param_1 = param_1 + 1;
  } while (bVar1 != 0);
  return 0;
}



// FUNCTION 144bfb950 FUN_144bfb950 body=27 status=ok
// SIG undefined FUN_144bfb950(void)

ulonglong FUN_144bfb950(byte param_1)

{
  ulonglong in_RAX;
  
  if ((param_1 < 0x21) &&
     (in_RAX = 0x100002600, (0x100002600U >> ((ulonglong)param_1 & 0x3f) & 1) != 0)) {
    return 0x100002601;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144bfb970 FUN_144bfb970 body=16 status=ok
// SIG undefined FUN_144bfb970(void)

undefined1 FUN_144bfb970(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 144bfb980 FUN_144bfb980 body=106 status=ok
// SIG undefined FUN_144bfb980(void)

int FUN_144bfb980(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_144737586();
  iVar1 = __stdio_common_vsnprintf_s
                    (*puVar2,param_1,(longlong)param_2,(longlong)(param_2 + -1),param_3,0,
                     &local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 144bfb9f0 FUN_144bfb9f0 body=98 status=ok
// SIG undefined FUN_144bfb9f0(void)

int FUN_144bfb9f0(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144737586();
  iVar1 = __stdio_common_vsnprintf_s
                    (*puVar2,param_1,(longlong)param_2,(longlong)param_3,param_4,0,&stack0x00000028)
  ;
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 144bfba60 FUN_144bfba60 body=110 status=ok
// SIG undefined FUN_144bfba60(void)

int FUN_144bfba60(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144737586();
  iVar1 = __stdio_common_vsnprintf_s
                    (*puVar2,param_1,(longlong)param_2,(longlong)param_3,param_4,0,param_5);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 144bfbad0 FUN_144bfbad0 body=10 status=ok
// SIG undefined FUN_144bfbad0(void)

void FUN_144bfbad0(char *param_1,char *param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000144bfbad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  strncmp(param_1,param_2,(ulonglong)param_3);
  return;
}



// FUNCTION 144bfbae0 FUN_144bfbae0 body=156 status=ok
// SIG undefined FUN_144bfbae0(void)

undefined8 FUN_144bfbae0(longlong param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  char cVar5;
  
  lVar4 = 0;
  pcVar2 = param_2;
  while( true ) {
    cVar3 = pcVar2[param_1 - (longlong)param_2];
    if (cVar3 == '\0') {
      if (param_2[lVar4] != '\0') {
        return 0xffffffff;
      }
      return 0;
    }
    cVar1 = *pcVar2;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar5 = cVar3 + ' ';
    if (0x19 < (byte)(cVar3 + 0xbfU)) {
      cVar5 = cVar3;
    }
    cVar3 = cVar1 + ' ';
    if (0x19 < (byte)(cVar1 + 0xbfU)) {
      cVar3 = cVar1;
    }
    if (cVar5 < cVar3) break;
    if (cVar3 < cVar5) {
      return 1;
    }
    lVar4 = lVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return 0xffffffff;
}



// FUNCTION 144bfbb80 FUN_144bfbb80 body=10 status=ok
// SIG undefined FUN_144bfbb80(void)

void FUN_144bfbb80(char *param_1,int param_2,char *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000144bfbb83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  strcpy_s(param_1,(longlong)param_2,param_3);
  return;
}



// FUNCTION 144bfbb90 FUN_144bfbb90 body=19 status=ok
// SIG undefined FUN_144bfbb90(void)

void FUN_144bfbb90(char *param_1,int param_2,char *param_3,uint param_4)

{
  if (0 < (int)param_4) {
                    /* WARNING: Could not recover jumptable at 0x000144bfbb9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    strncpy_s(param_1,(longlong)param_2,param_3,(ulonglong)param_4);
    return;
  }
  return;
}



// FUNCTION 144bfbbb0 FUN_144bfbbb0 body=17 status=ok
// SIG undefined FUN_144bfbbb0(void)

void FUN_144bfbbb0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_1 + lVar1) != '\0');
  return;
}



// FUNCTION 144bfbbd0 FUN_144bfbbd0 body=12 status=ok
// SIG undefined FUN_144bfbbd0(void)

void FUN_144bfbbd0(char *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144bfbbd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  strtoul(param_1,(char **)0x0,param_2);
  return;
}



// FUNCTION 144bfbbe0 FUN_144bfbbe0 body=19 status=ok
// SIG undefined FUN_144bfbbe0(void)

void FUN_144bfbbe0(undefined8 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144bfbbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _strtoi64_l(param_1,0,param_2,DAT_14c787688);
  return;
}



// FUNCTION 144bfbc00 FUN_144bfbc00 body=19 status=ok
// SIG undefined FUN_144bfbc00(void)

void FUN_144bfbc00(undefined8 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144bfbc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _strtoui64_l(param_1,0,param_2,DAT_14c787688);
  return;
}



// FUNCTION 144bfbc20 FUN_144bfbc20 body=16 status=ok
// SIG undefined FUN_144bfbc20(void)

void FUN_144bfbc20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144bfbc29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _strtod_l(param_1,0,DAT_14c787688);
  return;
}



// FUNCTION 144bfbc30 strstr body=5 status=ok
// SIG char * strstr(char * _Str, char * _SubStr)

char * __cdecl strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014992cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strstr(_Str,_SubStr);
  return pcVar1;
}



// FUNCTION 144bfbc40 strchr body=5 status=ok
// SIG char * strchr(char * _Str, int _Val)

char * __cdecl strchr(char *_Str,int _Val)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014992cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strchr(_Str,_Val);
  return pcVar1;
}



// FUNCTION 144bfbc50 strrchr body=5 status=ok
// SIG char * strrchr(char * _Str, int _Ch)

char * __cdecl strrchr(char *_Str,int _Ch)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014992cd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strrchr(_Str,_Ch);
  return pcVar1;
}



// FUNCTION 144bfbc60 FUN_144bfbc60 body=38 status=ok
// SIG undefined FUN_144bfbc60(void)

undefined8 FUN_144bfbc60(longlong param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    param_1 = param_1 - (longlong)param_2;
    do {
      if (param_2[param_1] != cVar1) {
        return 0;
      }
      cVar1 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  return 1;
}



// FUNCTION 144bfbc90 FUN_144bfbc90 body=99 status=ok
// SIG undefined FUN_144bfbc90(void)

undefined8 FUN_144bfbc90(longlong param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_1 + lVar4) != '\0');
  do {
    lVar3 = lVar3 + 1;
  } while (param_2[lVar3] != '\0');
  iVar2 = (int)lVar3;
  if (iVar2 <= (int)lVar4) {
    if (0 < iVar2) {
      pcVar1 = param_2;
      do {
        if (pcVar1[((longlong)((int)lVar4 - iVar2) - (longlong)param_2) + param_1] != *pcVar1) {
          return 0;
        }
        pcVar1 = pcVar1 + 1;
      } while ((longlong)pcVar1 - (longlong)param_2 < (longlong)iVar2);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144bfbd00 FUN_144bfbd00 body=41 status=ok
// SIG undefined FUN_144bfbd00(void)

int FUN_144bfbd00(char *param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = strrchr(param_1,(int)param_2);
  if (pcVar1 != (char *)0x0) {
    return (int)pcVar1 - (int)param_1;
  }
  return -1;
}



// FUNCTION 144bfbd30 FUN_144bfbd30 body=94 status=ok
// SIG undefined FUN_144bfbd30(void)

void * FUN_144bfbd30(void *param_1,longlong *param_2)

{
  longlong lVar1;
  void *_Dst;
  size_t _Size;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)((longlong)param_1 + lVar1) != '\0');
  _Size = (size_t)((int)lVar1 + 1);
  _Dst = (void *)(**(code **)(*param_2 + 8))(param_2,_Size);
  memcpy(_Dst,param_1,_Size);
  return _Dst;
}



// FUNCTION 144bfbd90 FUN_144bfbd90 body=40 status=ok
// SIG undefined FUN_144bfbd90(void)

void FUN_144bfbd90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_1 + lVar1) != '\0');
                    /* WARNING: Could not recover jumptable at 0x000144bfbdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_1,(longlong)((int)lVar1 + 1));
  return;
}



// FUNCTION 144bfbdc0 FUN_144bfbdc0 body=102 status=ok
// SIG undefined FUN_144bfbdc0(void)

void * FUN_144bfbdc0(void *param_1)

{
  longlong lVar1;
  void *_Dst;
  size_t _Size;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)((longlong)param_1 + lVar1) != '\0');
  _Size = (size_t)((int)lVar1 + 1);
  _Dst = (void *)(**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,_Size);
  memcpy(_Dst,param_1,_Size);
  return _Dst;
}



// FUNCTION 144bfbe30 FUN_144bfbe30 body=146 status=ok
// SIG undefined FUN_144bfbe30(void)

char * FUN_144bfbe30(char *param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  uint uVar3;
  longlong lVar5;
  ulonglong uVar4;
  
  uVar1 = 0;
  uVar4 = uVar1;
  do {
    uVar3 = (uint)uVar4;
    if ((longlong)param_2 <= (longlong)uVar1) break;
    pcVar2 = param_1 + uVar1;
    uVar3 = uVar3 + 1;
    uVar4 = (ulonglong)uVar3;
    uVar1 = uVar1 + 1;
  } while (*pcVar2 != '\0');
  lVar5 = (longlong)(int)uVar3;
  pcVar2 = (char *)(**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,lVar5 + 1);
  if ((int)uVar3 < 1) {
    pcVar2[lVar5] = '\0';
  }
  else {
    strncpy_s(pcVar2,lVar5 + 1,param_1,(ulonglong)uVar3);
    pcVar2[lVar5] = '\0';
  }
  return pcVar2;
}



// FUNCTION 144bfbed0 FUN_144bfbed0 body=5 status=ok
// SIG undefined FUN_144bfbed0(void)

void FUN_144bfbed0(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014992ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memcpy(param_1,param_2,param_3);
  return;
}



// FUNCTION 144bfbee0 FUN_144bfbee0 body=5 status=ok
// SIG undefined FUN_144bfbee0(void)

void FUN_144bfbee0(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014992cd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memmove(param_1,param_2,param_3);
  return;
}



// FUNCTION 144bfbef0 FUN_144bfbef0 body=5 status=ok
// SIG undefined FUN_144bfbef0(void)

void FUN_144bfbef0(void *param_1,int param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014992ce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memset(param_1,param_2,param_3);
  return;
}



// FUNCTION 144bfbf00 FUN_144bfbf00 body=5 status=ok
// SIG undefined FUN_144bfbf00(void)

void FUN_144bfbf00(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014992ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memcmp(param_1,param_2,param_3);
  return;
}



// FUNCTION 144bfbf10 FUN_144bfbf10 body=81 status=ok
// SIG undefined FUN_144bfbf10(void)

bool FUN_144bfbf10(void *param_1,size_t param_2,void *param_3)

{
  int iVar1;
  size_t sVar2;
  
  if (param_3 == (void *)0x0) {
    return param_2 == 0;
  }
  sVar2 = 0xffffffffffffffff;
  do {
    sVar2 = sVar2 + 1;
  } while (*(char *)((longlong)param_3 + sVar2) != '\0');
  if (param_2 == sVar2) {
    iVar1 = memcmp(param_1,param_3,param_2);
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 144bfbf70 FUN_144bfbf70 body=78 status=ok
// SIG undefined FUN_144bfbf70(void)

bool FUN_144bfbf70(void *param_1,ulonglong param_2,void *param_3)

{
  int iVar1;
  size_t _Size;
  
  if (param_3 == (void *)0x0) {
    return true;
  }
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)param_3 + _Size) != '\0');
  if (_Size <= param_2) {
    iVar1 = memcmp(param_1,param_3,_Size);
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 144bfbfc0 FUN_144bfbfc0 body=258 status=ok
// SIG undefined FUN_144bfbfc0(void)

void FUN_144bfbfc0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144bfc0d0 FUN_144bfc0d0 body=32 status=ok
// SIG undefined FUN_144bfc0d0(void)

void FUN_144bfc0d0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_144bfc1f0(1,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 144bfc0f0 FUN_144bfc0f0 body=32 status=ok
// SIG undefined FUN_144bfc0f0(void)

void FUN_144bfc0f0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_144bfc1f0(2,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 144bfc110 FUN_144bfc110 body=32 status=ok
// SIG undefined FUN_144bfc110(void)

void FUN_144bfc110(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_144bfc1f0(3,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 144bfc130 FUN_144bfc130 body=64 status=ok
// SIG undefined FUN_144bfc130(void)

void FUN_144bfc130(undefined4 param_1,undefined1 param_2)

{
  (**(code **)(*DAT_14c798f68 + 0x20))(DAT_14c798f68,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000144bfc16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c783c70 + 0x20))(DAT_14c783c70,param_1,param_2);
  return;
}



// FUNCTION 144bfc170 FUN_144bfc170 body=119 status=ok
// SIG undefined FUN_144bfc170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bfc170(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_1018 [4088];
  ulonglong uStack_20;
  
  uStack_20 = 0x144bfc182;
  FUN_144bfba60(local_1018,0x1000,0x1000,param_4,&stack0x00000028);
  uStack_20 = uStack_20 & 0xffffffffffffff;
  iVar2 = FUN_144bfc1f0(4,param_1,local_1018,param_2,param_3);
  if (iVar2 == 0) {
    FUN_144bdb8b0();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
  return;
}



// FUNCTION 144bfc1f0 FUN_144bfc1f0 body=208 status=ok
// SIG undefined FUN_144bfc1f0(void)

int FUN_144bfc1f0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if (DAT_14c798f68 != (longlong *)0x0) {
    (**(code **)(*DAT_14c798f68 + 0x18))(DAT_14c798f68,param_1,param_2,param_3,param_4,param_5,0);
  }
  if (DAT_14c783c70 == (longlong *)0x0) {
    FUN_144bfab60("ASSERT when the base system is not available:\n");
    FUN_144bfab60(param_3);
    FUN_144bfab60(&DAT_14997f410);
    iVar1 = 1;
  }
  else {
    iVar1 = (**(code **)(*DAT_14c783c70 + 0x18))
                      (DAT_14c783c70,param_1,param_2,param_3,param_4,param_5,0);
    if (iVar1 != 0) {
      FUN_144bdb8b0();
    }
  }
  return iVar1;
}



// FUNCTION 144bfc2c0 FUN_144bfc2c0 body=115 status=ok
// SIG undefined FUN_144bfc2c0(void)

int * FUN_144bfc2c0(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_res8 [8];
  
  iVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  *param_2 = 0;
  if (lVar1 != 0) {
    piVar3 = (int *)FUN_144bfc2c0(lVar1,local_res8);
    iVar2 = *piVar3;
    *param_2 = iVar2;
  }
  *(undefined1 *)(param_1 + 0x31) = 1;
  if (-1 < iVar2) {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      piVar3 = (int *)(**(code **)(param_1 + 0x10))(local_res8);
      *param_2 = *piVar3;
      return param_2;
    }
    if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    }
  }
  return param_2;
}



// FUNCTION 144bfc360 FUN_144bfc360 body=152 status=ok
// SIG undefined FUN_144bfc360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144bfc360(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_144bfca40(&local_18,param_1);
  fVar1 = fRam000000014c6dae48;
  fVar2 = fStack_14 + fStack_14;
  fVar3 = fStack_10 + fStack_10;
  fVar5 = local_18 * (local_18 + local_18);
  fVar9 = -(fStack_c * (local_18 + local_18));
  fVar7 = -(fStack_10 * fVar3) + _DAT_14c6dae40;
  fVar6 = _DAT_14c6dae40 - fVar5;
  fVar4 = fVar9 - -(fVar3 * fStack_14);
  *param_1 = fVar7 - fVar2 * fStack_14;
  param_1[1] = fStack_c * fVar3 - -(fVar2 * local_18);
  param_1[2] = -(fStack_c * fVar2) - -(fVar3 * local_18);
  param_1[3] = fVar4;
  fVar8 = --(fStack_c * fVar2) - -(fVar3 * local_18);
  param_1[8] = fVar8;
  param_1[9] = fVar4;
  param_1[10] = fVar6 - fVar2 * fStack_14;
  param_1[0xb] = fVar1;
  param_1[4] = -(fStack_c * fVar3) - -(fVar2 * local_18);
  param_1[5] = fVar7 - fVar5;
  param_1[6] = -fVar9 - -(fVar3 * fStack_14);
  param_1[7] = fVar8;
  return;
}



// FUNCTION 144bfc400 FUN_144bfc400 body=104 status=ok
// SIG undefined FUN_144bfc400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144bfc400(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28 [4];
  undefined1 local_18 [4];
  float fStack_14;
  
  local_38 = param_3 * _DAT_14c6dad90;
  fStack_34 = param_3 * fRam000000014c6dad94;
  fStack_30 = param_3 * fRam000000014c6dad98;
  fStack_2c = param_3 * fRam000000014c6dad9c;
  FUN_144beacd0(&local_38,local_28,local_18);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = local_28[0] * *param_2;
  param_1[1] = local_28[0] * fVar1;
  param_1[2] = local_28[0] * fVar2;
  param_1[3] = fStack_14;
  return;
}



// FUNCTION 144bfc470 FUN_144bfc470 body=1055 status=ok
// SIG undefined FUN_144bfc470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144bfc470(float *param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
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
  float local_58 [2];
  float fStack_50;
  float local_48 [2];
  float fStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_68 = *param_3 * _DAT_14c6dad90;
  fVar3 = param_3[1] * fRam000000014c6dad94;
  fStack_60 = param_3[2] * fRam000000014c6dad98;
  fStack_5c = param_3[3] * fRam000000014c6dad9c;
  fVar6 = *param_4 * _DAT_14c6dad90;
  fVar7 = *param_5 * _DAT_14c6dad90;
  local_38 = local_68;
  fStack_30 = fStack_60;
  fStack_2c = fStack_5c;
  switch(param_2) {
  case 0:
    fStack_64 = fVar3;
    FUN_144beacd0(&local_68,local_48,&local_38);
    local_98 = fVar6;
    fStack_94 = fVar6;
    fStack_90 = fVar7;
    fStack_8c = fVar7;
    FUN_144beacd0(&local_98,local_58,&local_68);
    *param_1 = fStack_5c * fStack_64 * local_48[0] + fStack_50 * local_58[0] * fStack_34;
    param_1[1] = -fStack_50 * fStack_64 * local_48[0] + fStack_5c * local_58[0] * fStack_34;
    param_1[2] = fStack_5c * local_58[0] * local_48[0] + fStack_50 * fStack_64 * fStack_34;
    param_1[3] = -fStack_50 * local_58[0] * local_48[0] + fStack_5c * fStack_64 * fStack_34;
    break;
  case 1:
    fStack_34 = fVar3;
    FUN_144beacd0(&local_38,local_58,&local_68);
    local_98 = fVar7;
    fStack_94 = fVar7;
    fStack_90 = fVar6;
    fStack_8c = fVar6;
    FUN_144beacd0(&local_98,local_48,&local_38);
    *param_1 = fStack_2c * fStack_34 * local_58[0] + -fStack_40 * local_48[0] * fStack_64;
    param_1[1] = -fStack_40 * fStack_34 * local_58[0] + fStack_2c * local_48[0] * fStack_64;
    param_1[2] = fStack_2c * local_48[0] * local_58[0] + fStack_40 * fStack_34 * fStack_64;
    param_1[3] = fStack_40 * local_48[0] * local_58[0] + fStack_2c * fStack_34 * fStack_64;
    break;
  case 2:
    fStack_34 = fVar3;
    FUN_144beacd0(&local_38,local_58,&local_68);
    local_88 = fVar6;
    fStack_84 = fVar6;
    fStack_80 = fVar7;
    fStack_7c = fVar7;
    FUN_144beacd0(&local_88,local_48,&local_38);
    uVar4 = 0xffffffff;
    uVar5 = 0;
    uVar1 = 0;
    uVar2 = 0xffffffff;
    fVar3 = local_48[0];
    fVar6 = fStack_34;
    goto LAB_144bfc82d;
  case 3:
    fStack_34 = fVar3;
    FUN_144beacd0(&local_38,local_58,&local_68);
    local_88 = fVar7;
    fStack_84 = fVar7;
    fStack_80 = fVar6;
    fStack_7c = fVar6;
    FUN_144beacd0(&local_88,local_48,&local_38);
    *param_1 = fStack_34 * fStack_40 * local_58[0] + fStack_2c * local_48[0] * fStack_64;
    param_1[1] = fStack_34 * fStack_2c * local_58[0] + fStack_40 * local_48[0] * fStack_64;
    param_1[2] = -local_48[0] * fStack_2c * local_58[0] + fStack_40 * fStack_34 * fStack_64;
    param_1[3] = -local_48[0] * fStack_40 * local_58[0] + fStack_2c * fStack_34 * fStack_64;
    break;
  case 4:
    fStack_34 = fVar3;
    FUN_144beacd0(&local_38,local_58,&local_68);
    local_78 = fVar6;
    fStack_74 = fVar6;
    fStack_70 = fVar7;
    fStack_6c = fVar7;
    FUN_144beacd0(&local_78,local_48,&local_38);
    *param_1 = -fStack_34 * fStack_40 * local_58[0] + fStack_2c * local_48[0] * fStack_64;
    param_1[1] = local_48[0] * fStack_2c * local_58[0] + fStack_40 * fStack_34 * fStack_64;
    param_1[2] = fStack_34 * fStack_2c * local_58[0] + fStack_40 * local_48[0] * fStack_64;
    param_1[3] = -local_48[0] * fStack_40 * local_58[0] + fStack_2c * fStack_34 * fStack_64;
    break;
  case 5:
    fStack_34 = fVar3;
    FUN_144beacd0(&local_38,local_58,&local_68);
    local_78 = fVar7;
    fStack_74 = fVar7;
    fStack_70 = fVar6;
    fStack_6c = fVar6;
    FUN_144beacd0(&local_78,local_48,&local_38);
    uVar4 = 0;
    uVar5 = 0xffffffff;
    uVar1 = 0xffffffff;
    uVar2 = 0;
    fVar3 = fStack_34;
    fVar6 = local_48[0];
LAB_144bfc82d:
    *param_1 = (float)((uint)fStack_34 ^ uVar1 & 0x80000000) * fStack_40 * local_58[0] +
               local_48[0] * fStack_2c * fStack_64;
    param_1[1] = fVar6 * fStack_2c * local_58[0] +
                 (float)((uint)fVar3 ^ uVar4 & 0x80000000) * fStack_40 * fStack_64;
    param_1[2] = (float)((uint)fVar3 ^ uVar2 & 0x80000000) * fStack_2c * local_58[0] +
                 (float)((uint)fVar6 ^ uVar5 & 0x80000000) * fStack_40 * fStack_64;
    param_1[3] = local_48[0] * fStack_40 * local_58[0] + fStack_34 * fStack_2c * fStack_64;
  }
  return;
}



// FUNCTION 144bfc8b0 FUN_144bfc8b0 body=87 status=ok
// SIG undefined FUN_144bfc8b0(void)

void FUN_144bfc8b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = param_2;
  uStack_34 = param_2;
  uStack_30 = param_2;
  uStack_2c = param_2;
  local_28 = param_4;
  uStack_24 = param_4;
  uStack_20 = param_4;
  uStack_1c = param_4;
  local_18 = param_3;
  uStack_14 = param_3;
  uStack_10 = param_3;
  uStack_c = param_3;
  FUN_144bfc470(param_1,3,&local_18,&local_28,&local_38);
  return;
}



// FUNCTION 144bfc910 FUN_144bfc910 body=86 status=ok
// SIG undefined FUN_144bfc910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144bfc910(longlong param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 local_28 [32];
  
  fVar2 = _DAT_14c6dafb0;
  uStack_2c = *(uint *)(param_1 + 0xc);
  local_38 = uStack_2c & 0x7fffffff;
  uStack_34 = uStack_2c & 0x7fffffff;
  uStack_30 = uStack_2c & 0x7fffffff;
  uStack_2c = uStack_2c & 0x7fffffff;
  pfVar1 = (float *)FUN_144beabd0(local_28,&local_38);
  fVar2 = fVar2 - *pfVar1;
  *param_2 = fVar2 + fVar2;
  param_2[1] = fVar2 + fVar2;
  param_2[2] = fVar2 + fVar2;
  param_2[3] = fVar2 + fVar2;
  return param_2;
}



// FUNCTION 144bfc970 FUN_144bfc970 body=202 status=ok
// SIG undefined FUN_144bfc970(void)

/* WARNING: Removing unreachable block (ram,0x000144bfc98e) */

void FUN_144bfc970(undefined4 *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 auVar7 [12];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  fVar8 = *param_2;
  fVar6 = param_2[2];
  fVar10 = *param_2 * *param_2;
  fVar11 = param_2[1] * param_2[1];
  fVar5 = fVar6 * fVar6 + 0.0;
  fVar9 = fVar8 * fVar8 + 0.0;
  uVar2 = -(uint)(fVar11 + fVar10 < fVar9 + fVar5);
  auVar12._0_4_ = ~uVar2 & (uint)-param_2[1];
  auVar12._4_4_ =
       ~-(uint)(fVar11 + fVar10 < fVar8 * fVar8 + 0.0 + fVar6 * fVar6 + 0.0) & (uint)fVar8;
  auVar12._8_8_ = 0;
  auVar4._4_4_ = 0;
  auVar4._0_4_ = (uint)-fVar6 & uVar2;
  auVar4._8_4_ = (uint)fVar8 & -(uint)(fVar11 + fVar10 < fVar5 + fVar9);
  auVar4._12_4_ = 0;
  auVar12 = auVar12 | auVar4;
  fVar6 = auVar12._0_4_ * auVar12._0_4_;
  fVar8 = auVar12._4_4_ * auVar12._4_4_;
  fVar5 = auVar12._8_4_ * auVar12._8_4_;
  auVar3._4_4_ = fVar6;
  auVar3._0_4_ = fVar6;
  auVar3._8_4_ = fVar6;
  auVar3._12_4_ = fVar6;
  fVar9 = fVar8 + fVar6 + fVar5;
  auVar7 = SUB1612(ZEXT816(0),0);
  if (fVar9 != 0.0) {
    auVar1._4_4_ = fVar8 + fVar6 + fVar5;
    auVar1._0_4_ = fVar9;
    auVar1._8_4_ = fVar8 + fVar6 + fVar5;
    auVar1._12_4_ = fVar8 + fVar6 + fVar5;
    auVar4 = sqrtps(auVar3,auVar1);
    auVar4 = divps(auVar12,auVar4);
    auVar7 = auVar4._0_12_;
  }
  *param_1 = auVar7._0_4_;
  param_1[1] = auVar7._4_4_;
  param_1[2] = auVar7._8_4_;
  param_1[3] = 0;
  return;
}



// FUNCTION 144bfca40 FUN_144bfca40 body=391 status=ok
// SIG undefined FUN_144bfca40(void)

void FUN_144bfca40(undefined1 (*param_1) [16],float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  
  fVar3 = param_2[8];
  fVar5 = param_2[9];
  fVar6 = param_2[10];
  fVar7 = param_2[5];
  fVar8 = param_2[6];
  fVar1 = *param_2;
  fVar2 = param_2[2];
  if (0.0 <= fVar6) {
    fVar10 = param_2[1] - param_2[4];
    if (0.0 - fVar7 <= fVar1) {
      auVar9._0_4_ = fVar8 - fVar5;
      auVar9._4_4_ = fVar3 - fVar2;
      auVar9._12_4_ = fVar7 + fVar1 + fVar6 + 1.0;
      auVar9._8_4_ = fVar10;
    }
    else {
      auVar9._0_4_ = fVar3 + fVar2;
      auVar9._4_4_ = fVar5 + fVar8;
      auVar9._12_4_ = fVar10;
      auVar9._8_4_ = (fVar6 + 1.0) - (fVar7 + fVar1);
    }
  }
  else {
    fVar10 = param_2[4] + param_2[1];
    if (fVar1 <= fVar7) {
      auVar9._4_4_ = (1.0 - fVar6) - (fVar1 - fVar7);
      auVar9._0_4_ = fVar10;
      auVar9._12_4_ = fVar3 - fVar2;
      auVar9._8_4_ = fVar5 + fVar8;
    }
    else {
      auVar9._0_4_ = (1.0 - fVar6) + (fVar1 - fVar7);
      auVar9._4_4_ = fVar10;
      auVar9._12_4_ = fVar8 - fVar5;
      auVar9._8_4_ = fVar3 + fVar2;
    }
  }
  fVar3 = auVar9._0_4_ * auVar9._0_4_;
  fVar5 = auVar9._4_4_ * auVar9._4_4_;
  fVar6 = auVar9._8_4_ * auVar9._8_4_;
  fVar7 = auVar9._12_4_ * auVar9._12_4_;
  fVar8 = fVar5 + fVar3;
  fVar3 = fVar3 + fVar5;
  fVar5 = fVar7 + fVar6;
  fVar6 = fVar6 + fVar7;
  auVar4._0_4_ = fVar5 + fVar8;
  auVar4._4_4_ = fVar6 + fVar3;
  auVar4._8_4_ = fVar8 + fVar5;
  auVar4._12_4_ = fVar3 + fVar6;
  if (auVar4._0_4_ != 0.0) {
    auVar4 = sqrtps(auVar4,auVar4);
    auVar9 = divps(auVar9,auVar4);
    *param_1 = auVar9;
    return;
  }
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  return;
}



// FUNCTION 144bfcbd0 FUN_144bfcbd0 body=648 status=ok
// SIG undefined FUN_144bfcbd0(void)

/* WARNING: Removing unreachable block (ram,0x000144bfcda5) */
/* WARNING: Removing unreachable block (ram,0x000144bfcd70) */
/* WARNING: Removing unreachable block (ram,0x000144bfcc9c) */
/* WARNING: Removing unreachable block (ram,0x000144bfcc4d) */

undefined8 * FUN_144bfcbd0(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 local_248;
  longlong lStack_240;
  uint local_238;
  uint local_234;
  uint local_230;
  undefined4 local_22c;
  undefined1 local_218 [512];
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkHardwareInfo::vftable;
  FUN_144bdf360(param_1 + 0xe);
  *(undefined4 *)(param_1 + 4) = 0x800000;
  uVar6 = FUN_144bfce90((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 3) = uVar6;
  param_1[0xd] = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  FUN_144bdff00(param_1 + 0xe);
  local_22c = 0;
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar4 = *puVar1;
  local_238 = puVar1[1];
  local_234 = puVar1[2];
  local_230 = puVar1[3];
  local_248 = 0;
  lStack_240 = 0;
  iVar7 = FUN_144bfb930(&local_238,"GenuineIntel");
  iVar8 = FUN_144bfb930(&local_238,"AuthenticAMD");
  lVar2 = cpuid_Version_info(1);
  uVar10 = *(uint *)(lVar2 + 8);
  uVar5 = *(uint *)(lVar2 + 0xc);
  puVar3 = (undefined8 *)cpuid(0x80000001);
  local_248 = *puVar3;
  uVar10 = (*(uint *)((longlong)puVar3 + 0xc) & 0x20) << 2 |
           (((((((((uVar5 >> 4 & 0x2000000 | uVar5 & 0xc00000) >> 1 | uVar10 & 0x80000 |
                  uVar5 & 0x10000000) >> 1 | uVar5 & 0x2000000) >> 2 | uVar10 & 0x8000) >> 1 |
                uVar5 & 0x2000 | uVar10 & 0x800000) >> 1 | uVar10 & 0x6000000) >> 3 | uVar10 & 0x100
             ) >> 5 | uVar5 & 0x1000) >> 2 | uVar5 & 0x180000) >> 1 |
           ((uVar5 & 0x200) << 5 | uVar5 & 2) << 3 | (uVar5 & 1) << 0x10 | *(uint *)(param_1 + 4);
  lStack_240 = (ulonglong)*(uint *)(puVar3 + 1) << 0x20;
  *(uint *)(param_1 + 4) = uVar10;
  if (iVar7 == 0) {
    if (6 < uVar4) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar4 = *(uint *)(lVar2 + 4);
      *(uint *)(param_1 + 4) =
           ((uVar4 & 8) << 4 | uVar4 & 0x100) << 0xe | (uVar4 & 0x20) << 8 | uVar10;
    }
  }
  else if (iVar8 != 0) {
    FUN_144bde670(&local_248,local_218,0x200);
    uVar9 = FUN_144be6160(&local_248,"CPU vendor information\'s (\'");
    uVar9 = FUN_144be6160(uVar9,&local_238);
    FUN_144be6160(uVar9,"\') not recognized.");
    FUN_144bfc0d0(0x4fa4b98c,local_218,"System\\Hardware\\hkHardwareInfo.cpp",0xa2);
    FUN_144bde6e0(&local_248);
  }
  return param_1;
}



// FUNCTION 144bfce60 FUN_144bfce60 body=44 status=ok
// SIG undefined FUN_144bfce60(void)

void FUN_144bfce60(undefined8 *param_1)

{
  *param_1 = hkHardwareInfo::vftable;
  FUN_144bdf2f0(param_1 + 0xe);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144bfce90 FUN_144bfce90 body=206 status=ok
// SIG undefined FUN_144bfce90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144bfce90(int *param_1)

{
  BOOL BVar1;
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *p_Var2;
  DWORD DVar3;
  uint uVar5;
  int iVar7;
  DWORD local_res8 [2];
  _SYSTEM_INFO local_2838;
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX local_2808 [127];
  undefined8 uStack_10;
  ulonglong uVar4;
  ulonglong uVar6;
  
  uStack_10 = 0x144bfceab;
  iVar7 = 1;
  GetSystemInfo(&local_2838);
  uVar4 = 0;
  local_res8[0] = 0;
  GetLogicalProcessorInformationEx
            (RelationProcessorCore,(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0,local_res8);
  DVar3 = local_2838.dwNumberOfProcessors;
  if ((local_res8[0] < 0x2801) &&
     (BVar1 = GetLogicalProcessorInformationEx(RelationProcessorCore,local_2808,local_res8),
     BVar1 == 1)) {
    p_Var2 = local_2808;
    uVar6 = uVar4;
    DVar3 = 0;
    if (local_res8[0] != 0) {
      do {
        uVar5 = (int)uVar6 + p_Var2->Size;
        DVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)DVar3;
        p_Var2 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)
                 ((longlong)&local_2808[0].Relationship + (ulonglong)uVar5);
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < local_res8[0]);
    }
    iVar7 = (int)local_2838.dwNumberOfProcessors / (int)DVar3;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar7;
  }
  return DVar3;
}



// FUNCTION 144bfcf60 FUN_144bfcf60 body=111 status=ok
// SIG undefined FUN_144bfcf60(void)

undefined8 * FUN_144bfcf60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkHardwareInfo::vftable;
  FUN_144bdf2f0(param_1 + 0xe);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 144bfcfd0 FUN_144bfcfd0 body=162 status=ok
// SIG undefined FUN_144bfcfd0(void)

undefined4 * FUN_144bfcfd0(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  if (*param_2 == 0) {
    local_res8 = 0x108;
    lVar2 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar2,"hkHardwareInfo");
    }
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_144bfcbd0(lVar2);
    }
    lVar1 = *param_2;
    if ((lVar2 != lVar1) && (*param_2 = lVar2, lVar1 != 0)) {
      FUN_144b3f230();
    }
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bfd080 FUN_144bfd080 body=95 status=ok
// SIG undefined FUN_144bfd080(void)

undefined4 * FUN_144bfd080(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bfd0e0 FUN_144bfd0e0 body=44 status=ok
// SIG undefined FUN_144bfd0e0(void)

int FUN_144bfd0e0(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = *param_1; uVar1 = uVar1 & 0xfffffffffffffffc, uVar1 != 0;
      uVar1 = *(ulonglong *)(uVar1 + 8)) {
    iVar2 = iVar2 + (uint)((*(byte *)(uVar1 + 8) & 3) == 0);
  }
  return iVar2;
}



// FUNCTION 144bfd110 FUN_144bfd110 body=140 status=ok
// SIG undefined FUN_144bfd110(void)

void FUN_144bfd110(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar2 = *param_1;
  puVar1 = param_1;
joined_r0x000144bfd12f:
  do {
    puVar3 = (undefined8 *)(uVar2 & 0xfffffffffffffffc);
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    uVar2 = puVar3[1];
    if (puVar3[2] == param_2) {
      if ((*param_1 & 3) == 0) {
        *puVar1 = *puVar1 ^ (*puVar1 ^ uVar2) & 0xfffffffffffffffc;
        (**(code **)*puVar3)(puVar3,1);
        goto joined_r0x000144bfd12f;
      }
      puVar3[1] = uVar2 & 0xfffffffffffffffd | 1;
    }
    puVar1 = puVar3 + 1;
  } while( true );
}



// FUNCTION 144bfd1a0 FUN_144bfd1a0 body=151 status=ok
// SIG undefined FUN_144bfd1a0(void)

void FUN_144bfd1a0(ulonglong *param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [24];
  
  pcVar2 = (char *)FUN_144bfab20(local_res10);
  if (*pcVar2 != '\0') {
    uVar1 = *param_1;
    uVar3 = uVar1 & 0xfffffffffffffffc;
    if (uVar3 != 0) {
      if ((uVar1 & 3) == 0) {
        *param_1 = uVar1 & 0xfffffffffffffffd | 1;
        uVar3 = ((undefined8 *)(uVar1 & 0xfffffffffffffffc))[1];
        puVar4 = (undefined8 *)(uVar1 & 0xfffffffffffffffc);
        while( true ) {
          puVar5 = (undefined8 *)(uVar3 & 0xfffffffffffffffc);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          if (puVar5 == (undefined8 *)0x0) break;
          uVar3 = puVar5[1];
          puVar4 = puVar5;
        }
        *param_1 = 0;
        return;
      }
      do {
        uVar1 = *(ulonglong *)(uVar3 + 8);
        *(ulonglong *)(uVar3 + 8) = uVar1 & 0xfffffffffffffffd | 1;
        uVar3 = uVar1 & 0xfffffffffffffffc;
      } while (uVar3 != 0);
    }
  }
  return;
}



// FUNCTION 144bfd270 FUN_144bfd270 body=146 status=ok
// SIG undefined FUN_144bfd270(void)

undefined8 * FUN_144bfd270(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  uVar2 = 0;
  local_res8 = 8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"Cloner");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144f768f0(lVar1);
  }
  param_1[3] = uVar2;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  FUN_144f769a0(uVar2,0);
  return param_1;
}



// FUNCTION 144bfd310 FUN_144bfd310 body=83 status=ok
// SIG undefined FUN_144bfd310(void)

void FUN_144bfd310(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_144f76970(lVar1);
    (*DAT_14c787678)(0,lVar1,0);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_144b3f230();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144bfd370 FUN_144bfd370 body=1179 status=ok
// SIG undefined FUN_144bfd370(void)

/* WARNING: Removing unreachable block (ram,0x000144bfd69f) */

ulonglong *
FUN_144bfd370(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  char *pcVar10;
  char *local_208;
  char *pcStack_200;
  ulonglong local_1f8 [2];
  char *local_1e8;
  char *local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [80];
  undefined1 local_180 [344];
  
  local_1f8[0] = local_1f8[0] & 0xffffffff00000000;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar7 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar7 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar7 + 0xf0) = lVar3;
  }
  lVar3 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar3 != 0) {
    local_208 = "StGet read format";
    pcStack_200 = "";
    local_1e8 = "LtToBundle (memory view)";
    local_1e0 = "";
    FUN_144be9870(lVar3,&local_1e8,&local_208);
  }
  if (param_5 == (undefined8 *)0x0) {
    puVar8 = &local_1d8;
  }
  else {
    *param_5 = 0;
    puVar8 = param_5;
  }
  piVar4 = (int *)FUN_144bfdfc0(param_1,&param_5,param_3,param_4);
  if (*piVar4 < 0) {
    *param_2 = 0;
    goto LAB_144bfd7bd;
  }
  if (*(char *)(lVar7 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar7 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar7 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar7 + 0xf0) = lVar5;
  }
  if (*(longlong *)(lVar5 + 0x3e0) != 0) {
    local_208 = "StRead bundle data";
    pcStack_200 = "";
    FUN_144be99f0(*(longlong *)(lVar5 + 0x3e0),&local_208);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),local_1f8,param_3,param_4,puVar8);
  if (local_1f8[0] == 0) {
    if ((1 < DAT_14c787730) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
      cVar2 = FUN_144bdbf80();
      if (cVar2 == '\0') {
        uVar6 = FUN_144bdc640(local_1d0);
        param_5 = (undefined8 *)0x0;
        lVar7 = FUN_144bdc480(uVar6,"Unable to load from buffer",&param_5,0);
        *(char **)(lVar7 + 0x38) = "hkSerialize.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x230;
        FUN_144bdc690(local_1d0);
        *param_2 = 0;
      }
      else {
        uVar6 = FUN_144bdc810(local_180,&DAT_14c7876e0,2);
        param_5 = (undefined8 *)0x0;
        lVar7 = FUN_144bdc480(uVar6,"Unable to load from buffer",&param_5,0);
        *(char **)(lVar7 + 0x38) = "hkSerialize.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x230;
        FUN_144bdc8a0(local_180);
        *param_2 = 0;
      }
      goto LAB_144bfd7bd;
    }
LAB_144bfd5e0:
    *param_2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x28) != '\0') {
      local_208 = "StVersioning";
      pcStack_200 = "";
      if (*(char *)(lVar7 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar5 = *(longlong *)(lVar7 + 0xf0);
      if (lVar5 == 0) {
        if (*(char *)(lVar7 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar5 = FUN_144b3f4a0();
        *(longlong *)(lVar7 + 0xf0) = lVar5;
      }
      if (*(longlong *)(lVar5 + 0x3e0) != 0) {
        FUN_144be99f0(*(longlong *)(lVar5 + 0x3e0),&local_208);
      }
      if (*(longlong *)(param_1 + 0x10) == 0) {
        if (DAT_14c7876d8 == (code *)0x0) {
          uVar6 = 0;
          local_208 = (char *)0x0;
          pcVar10 = (char *)0x0;
        }
        else {
          puVar8 = (undefined8 *)(*DAT_14c7876d8)(&local_1e8,0);
          uVar6 = *puVar8;
          *puVar8 = 0;
          param_5 = (undefined8 *)0x0;
          pcVar10 = local_1e8;
        }
        if (pcVar10 != (char *)0x0) {
          FUN_144b3f230();
        }
        lVar7 = *(longlong *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        if (lVar7 != 0) {
          FUN_144b3f230();
        }
      }
      plVar1 = *(longlong **)(param_1 + 0x10);
      if (plVar1 != (longlong *)0x0) {
        puVar9 = (ulonglong *)(**(code **)(*plVar1 + 0x20))(plVar1,&param_5,local_1f8[0],0,0);
        local_1f8[0] = *puVar9;
        if (local_1f8[0] == 0) {
          if ((1 < DAT_14c787730) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
            cVar2 = FUN_144bdbf80();
            if (cVar2 != '\0') {
              uVar6 = FUN_144bdc810(local_180,&DAT_14c7876e0,2);
            }
            else {
              uVar6 = FUN_144bdc640(local_1d0);
            }
            param_5 = (undefined8 *)0x0;
            lVar7 = FUN_144bdc480(uVar6,"Versioning failed",&param_5,0);
            *(undefined8 *)(lVar7 + 0x40) = 0x255;
            *(char **)(lVar7 + 0x38) = "hkSerialize.cpp";
            if (cVar2 == '\0') {
              FUN_144bdc690(local_1d0);
              *param_2 = 0;
              goto LAB_144bfd7bd;
            }
            FUN_144bdc8a0(local_180);
          }
          goto LAB_144bfd5e0;
        }
      }
    }
    *param_2 = local_1f8[0];
  }
LAB_144bfd7bd:
  if (lVar3 != 0) {
    local_208 = "lt";
    pcStack_200 = "";
    FUN_144be9b20(lVar3,&local_208);
  }
  return param_2;
}



// FUNCTION 144bfd810 FUN_144bfd810 body=1965 status=ok
// SIG undefined FUN_144bfd810(void)

longlong * FUN_144bfd810(undefined8 *param_1,longlong *param_2,longlong *param_3,char *param_4)

{
  undefined ***pppuVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  char *local_res8;
  char *local_res20;
  char *local_338;
  char *pcStack_330;
  undefined1 local_328 [8];
  longlong local_320;
  code *pcStack_318;
  char **local_310;
  code *local_308;
  char **local_300;
  longlong local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  longlong local_2d8;
  char *local_2d0;
  ulonglong local_2c8;
  char *local_2c0;
  undefined **local_2b8 [2];
  undefined1 local_2a8 [40];
  undefined1 local_280 [56];
  longlong *local_248;
  undefined1 *local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  longlong *local_228;
  undefined ***local_220;
  undefined **local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res20 = param_4;
  if (*(char *)(lVar7 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar7 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar7 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar7 + 0xf0) = lVar3;
  }
  lVar3 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar3 != 0) {
    local_338 = "TtClone to native (hkReflect::Var)";
    pcStack_330 = "";
    FUN_144b3f370(lVar3,&local_338);
  }
  FUN_144f769c0(param_1[3]);
  FUN_144f768f0(local_328);
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 0x80000000;
  local_2e8 = FUN_144b3d480();
  local_2e0 = 0;
  piVar4 = (int *)FUN_144bff100(&local_res8,param_3,local_328,&local_2f8);
  if (*piVar4 < 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    pppuVar1 = (undefined ***)param_1[6];
    uVar6 = *param_1;
    puVar8 = (undefined1 *)param_1[4];
    if ((undefined1 *)param_1[4] == (undefined1 *)0x0) {
      puVar8 = local_280;
      if (*(char *)(param_1 + 5) == '\0') {
        puVar8 = local_2a8;
      }
    }
    FUN_144f852b0(local_2b8,puVar8);
    local_2b8[0] = _anon_F72CDFD3::CloneToNativeCallback::vftable;
    FUN_144f84e90(local_2a8,uVar6,0);
    FUN_144f85410(local_280,local_2a8);
    local_22c = 0x80000000;
    local_248 = &local_2f8;
    local_238 = 0;
    local_240 = local_328;
    local_230 = 0;
    local_220 = &local_218;
    if (pppuVar1 != (undefined ***)0x0) {
      local_220 = pppuVar1;
    }
    local_228 = param_3;
    FUN_144f88cd0(&local_218);
    local_210 = 0;
    local_218 = _anon_F72CDFD3::SimpleImportHandler::vftable;
    local_208 = 0;
    local_204 = 0x80000000;
    local_200 = 0;
    local_1f8 = 0;
    local_1f4 = 0x80000000;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e4 = 0x80000000;
    local_res8 = (char *)0x0;
    lVar5 = FUN_144c003f0(&local_2f8,&local_res8);
    if (((lVar5 != 0) && (lVar5 = local_2f8 + (longlong)*(int *)(lVar5 + 4) * 0x18, lVar5 != 0)) &&
       (*(int *)(lVar5 + 0x10) != 0)) {
      local_338 = *(char **)(lVar5 + 8);
      local_320 = 0;
      pcStack_318 = (code *)0x0;
      local_310 = (char **)0x0;
      pcStack_330 = local_338 + (longlong)*(int *)(lVar5 + 0x10) * 0x18;
      (*(code *)(*local_220)[2])(local_220,&local_338,&local_320,&local_320);
      if (((ulonglong)local_310 & 1) != 0) {
        FUN_144be6b30((ulonglong)local_310 & 0xfffffffffffffffe);
      }
    }
    (**(code **)(*param_3 + 8))(param_3,&local_2d8);
    if (local_res20 == (char *)0x0) {
LAB_144bfdd30:
      if (local_2d8 == 0) {
LAB_144bfdf49:
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
      }
      else {
        if (*(char *)(lVar7 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar5 = *(longlong *)(lVar7 + 0xf0);
        if (lVar5 == 0) {
          if (*(char *)(lVar7 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar5 = FUN_144b3f4a0();
          *(longlong *)(lVar7 + 0xf0) = lVar5;
        }
        lVar7 = *(longlong *)(lVar5 + 0x3e0);
        local_338 = "TtClone";
        pcStack_330 = "";
        if (lVar7 != 0) {
          local_338 = "TtClone";
          pcStack_330 = "";
          FUN_144b3f370(lVar7,&local_338);
        }
        FUN_144f76ac0(param_1[3],&local_320,&local_2d8,local_2b8);
        if (local_320 == 0) {
          if ((1 < DAT_14c787730) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
            cVar2 = FUN_144bdbf80();
            if (cVar2 == '\0') {
              uVar6 = FUN_144bdc640(local_1d8);
              local_res8 = (char *)0x0;
              lVar5 = FUN_144bdc480(uVar6,"Unable to clone contents",&local_res8,0);
              *(char **)(lVar5 + 0x38) = "hkSerialize.cpp";
              *(undefined8 *)(lVar5 + 0x40) = 0x35f;
              FUN_144bdc690(local_1d8);
            }
            else {
              uVar6 = FUN_144bdc810(local_188,&DAT_14c7876e0,2);
              local_res8 = (char *)0x0;
              lVar5 = FUN_144bdc480(uVar6,"Unable to clone contents",&local_res8,0);
              *(char **)(lVar5 + 0x38) = "hkSerialize.cpp";
              *(undefined8 *)(lVar5 + 0x40) = 0x35f;
              FUN_144bdc8a0(local_188);
            }
          }
          if (((ulonglong)local_310 & 1) != 0) {
            FUN_144be6b30((ulonglong)local_310 & 0xfffffffffffffffe);
          }
          if (lVar7 != 0) {
            local_338 = "Et";
            pcStack_330 = "";
            FUN_144b3f260(lVar7,&local_338);
          }
          goto LAB_144bfdf49;
        }
        (**(code **)(*param_3 + 0x20))(param_3);
        *param_2 = local_320;
        param_2[1] = (longlong)pcStack_318;
        param_2[2] = (longlong)local_310;
        local_310 = (char **)0x0;
        local_320 = 0;
        pcStack_318 = (code *)0x0;
        if (lVar7 != 0) {
          local_338 = "Et";
          pcStack_330 = "";
          FUN_144b3f260(lVar7,&local_338);
        }
      }
      if ((local_2c8 & 1) != 0) {
        FUN_144be6b30(local_2c8 & 0xfffffffffffffffe);
      }
      FUN_144bff7d0(local_2b8);
      FUN_144bff670(&local_2f8);
      FUN_144f76970(local_328);
      goto joined_r0x000144bfdf86;
    }
    local_res8 = (char *)FUN_144f85370(local_2b8,local_2d0);
    if (local_res8 == (char *)0x0) {
      if ((1 < DAT_14c787730) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          local_2c0 = local_2d0;
          uVar6 = FUN_144bdc640(local_1d8);
          local_320 = 2;
          pcStack_318 = FUN_144c00d20;
          local_310 = &local_2c0;
          local_308 = FUN_144c00d20;
          local_300 = &local_res20;
          lVar7 = FUN_144bdc480(uVar6,
                                "Loaded type mismatch, loaded type {} does not correspond to any native type and cannot be compared to requested type {}"
                                ,&local_320,0);
          *(char **)(lVar7 + 0x38) = "hkSerialize.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x34f;
          FUN_144bdc690(local_1d8);
        }
        else {
          local_338 = local_2d0;
          uVar6 = FUN_144bdc810(local_188,&DAT_14c7876e0,2);
          local_320 = 2;
          pcStack_318 = FUN_144c00d20;
          local_310 = &local_338;
          local_308 = FUN_144c00d20;
          local_300 = &local_res20;
          lVar7 = FUN_144bdc480(uVar6,
                                "Loaded type mismatch, loaded type {} does not correspond to any native type and cannot be compared to requested type {}"
                                ,&local_320,0);
          *(undefined8 *)(lVar7 + 0x40) = 0x34f;
LAB_144bfdbd7:
          *(char **)(lVar7 + 0x38) = "hkSerialize.cpp";
          FUN_144bdc8a0(local_188);
        }
      }
    }
    else {
      cVar2 = FUN_144b45dd0(local_res8,local_res20);
      if (cVar2 != '\0') goto LAB_144bfdd30;
      if ((1 < DAT_14c787730) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
        cVar2 = FUN_144bdbf80();
        if (cVar2 != '\0') {
          uVar6 = FUN_144bdc810(local_188,&DAT_14c7876e0,2);
          local_320 = 2;
          pcStack_318 = FUN_144c00d20;
          local_310 = &local_res20;
          local_308 = FUN_144c00d20;
          local_300 = &local_res8;
          lVar7 = FUN_144bdc480(uVar6,
                                "Loaded type mismatch, requested type {} from a stream containing {}"
                                ,&local_320,0);
          *(undefined8 *)(lVar7 + 0x40) = 0x351;
          goto LAB_144bfdbd7;
        }
        uVar6 = FUN_144bdc640(local_1d8);
        local_320 = 2;
        pcStack_318 = FUN_144c00d20;
        local_310 = &local_res20;
        local_308 = FUN_144c00d20;
        local_300 = &local_res8;
        lVar7 = FUN_144bdc480(uVar6,
                              "Loaded type mismatch, requested type {} from a stream containing {}",
                              &local_320,0);
        *(char **)(lVar7 + 0x38) = "hkSerialize.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x351;
        FUN_144bdc690(local_1d8);
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if ((local_2c8 & 1) != 0) {
      FUN_144be6b30(local_2c8 & 0xfffffffffffffffe);
    }
    FUN_144bff7d0(local_2b8);
  }
  FUN_144bff670(&local_2f8);
  FUN_144f76970(local_328);
joined_r0x000144bfdf86:
  if (lVar3 != 0) {
    local_338 = "Et";
    pcStack_330 = "";
    FUN_144b3f260(lVar3,&local_338);
  }
  return param_2;
}



// FUNCTION 144bfdfc0 FUN_144bfdfc0 body=834 status=ok
// SIG undefined FUN_144bfdfc0(void)

undefined4 * FUN_144bfdfc0(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong local_res8;
  undefined8 local_1f8;
  undefined8 local_1f0;
  code *local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  code *local_1d0;
  undefined8 *local_1c8;
  undefined1 local_1c0 [80];
  undefined1 local_170 [344];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    if (param_4 == 0) {
      if ((1 < DAT_14c787730) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          uVar3 = FUN_144bdc640(local_1c0);
          local_res8 = 0;
          lVar4 = FUN_144bdc480(uVar3,"Failed to read input",&local_res8,0);
          *(char **)(lVar4 + 0x38) = "hkSerialize.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0x1c8;
          *(undefined4 *)(lVar4 + 0x1c) = 0xc8920000;
          FUN_144bdc690(local_1c0);
          *param_2 = 0x80040200;
          return param_2;
        }
        uVar3 = FUN_144bdc810(local_170,&DAT_14c7876e0,2);
        local_1f8 = 0;
        lVar4 = FUN_144bdc480(uVar3,"Failed to read input",&local_1f8,0);
        *(char **)(lVar4 + 0x38) = "hkSerialize.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 0x1c8;
        *(undefined4 *)(lVar4 + 0x1c) = 0xc8920000;
        FUN_144bdc8a0(local_170);
        *param_2 = 0x80040200;
        return param_2;
      }
      goto LAB_144bfe2dc;
    }
    lVar4 = FUN_144f85d10(param_3,param_4);
    if (lVar4 == 0) {
      if ((DAT_14c787730 < 2) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144bfe2dc;
      cVar2 = FUN_144bdbf80();
      if (cVar2 != '\0') {
        uVar3 = FUN_144bdc810(local_170,&DAT_14c7876e0,2);
        local_1f8 = 0;
        lVar4 = FUN_144bdc480(uVar3,"The format was not recognized",&local_1f8,0);
        *(undefined8 *)(lVar4 + 0x40) = 0x1d8;
LAB_144bfe2c1:
        *(char **)(lVar4 + 0x38) = "hkSerialize.cpp";
        *(undefined4 *)(lVar4 + 0x1c) = 0xc8920001;
        FUN_144bdc8a0(local_170);
LAB_144bfe2dc:
        *param_2 = 0x80040200;
        return param_2;
      }
      uVar3 = FUN_144bdc640(local_1c0);
      local_res8 = 0;
      lVar4 = FUN_144bdc480(uVar3,"The format was not recognized",&local_res8,0);
      *(undefined8 *)(lVar4 + 0x40) = 0x1d8;
    }
    else {
      puVar5 = (undefined8 *)FUN_144f85d90(lVar4,&local_res8);
      uVar3 = *puVar5;
      *puVar5 = 0;
      lVar1 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = uVar3;
      if (lVar1 != 0) {
        FUN_144b3f230();
      }
      if (local_res8 != 0) {
        FUN_144b3f230();
      }
      if (*(longlong *)(param_1 + 8) != 0) goto LAB_144bfe2e4;
      if ((DAT_14c787730 < 2) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144bfe2dc;
      cVar2 = FUN_144bdbf80();
      if (cVar2 != '\0') {
        local_1f8 = FUN_144f85e10(lVar4);
        uVar3 = FUN_144bdc810(local_170,&DAT_14c7876e0,2);
        local_1d8 = 1;
        local_1d0 = FUN_144f50c70;
        local_1c8 = &local_1f8;
        lVar4 = FUN_144bdc480(uVar3,
                              "No registered loader was found for the format \"{}\". Have you included hkCompat as a product feature or used the asset conversion tool to convert your assets?"
                              ,&local_1d8,0);
        *(undefined8 *)(lVar4 + 0x40) = 0x1d1;
        goto LAB_144bfe2c1;
      }
      local_res8 = FUN_144f85e10(lVar4);
      uVar3 = FUN_144bdc640(local_1c0,&DAT_14c7876e0,2);
      local_1f0 = 1;
      local_1e8 = FUN_144f50c70;
      local_1e0 = &local_res8;
      lVar4 = FUN_144bdc480(uVar3,
                            "No registered loader was found for the format \"{}\". Have you included hkCompat as a product feature or used the asset conversion tool to convert your assets?"
                            ,&local_1f0,0);
      *(undefined8 *)(lVar4 + 0x40) = 0x1d1;
    }
    *(char **)(lVar4 + 0x38) = "hkSerialize.cpp";
    *(undefined4 *)(lVar4 + 0x1c) = 0xc8920001;
    FUN_144bdc690(local_1c0);
    *param_2 = 0x80040200;
  }
  else {
LAB_144bfe2e4:
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 144bfe310 FUN_144bfe310 body=21 status=ok
// SIG undefined FUN_144bfe310(void)

undefined8 * FUN_144bfe310(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 144bfe330 FUN_144bfe330 body=13 status=ok
// SIG undefined FUN_144bfe330(void)

void FUN_144bfe330(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if (plVar3[1] != 0) {
    LOCK();
    plVar1 = plVar3 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000144b3f24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144bfe340 FUN_144bfe340 body=430 status=ok
// SIG undefined FUN_144bfe340(void)

longlong * FUN_144bfe340(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_res8;
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  lVar3 = 0;
  if (*param_1 == 0) {
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else if (param_3 == 1) {
      uVar5 = 1;
    }
    else {
      uVar5 = (undefined4)local_res8;
      if (param_3 == 2) {
        uVar5 = 2;
      }
    }
    local_res8 = 0x20;
    lVar4 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar4,"TagfileWriteFormat");
    }
    if (lVar4 != 0) {
      lVar3 = FUN_144c19fd0(lVar4,param_2,uVar5);
    }
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      FUN_144b3f230();
    }
  }
  else if ((1 < DAT_14c787730) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 != '\0') {
      uVar2 = FUN_144bdc810(local_168,&DAT_14c7876e0,2);
      local_res8 = 0;
      lVar3 = FUN_144bdc480(uVar2,"Format has already been initialized",&local_res8,0);
      *(char **)(lVar3 + 0x38) = "hkSerialize.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x3dc;
      FUN_144bdc8a0(local_168);
      return param_1;
    }
    uVar2 = FUN_144bdc640(local_1b8);
    local_res8 = 0;
    lVar3 = FUN_144bdc480(uVar2,"Format has already been initialized",&local_res8,0);
    *(char **)(lVar3 + 0x38) = "hkSerialize.cpp";
    *(undefined8 *)(lVar3 + 0x40) = 0x3dc;
    FUN_144bdc690(local_1b8);
    return param_1;
  }
  return param_1;
}



// FUNCTION 144bfe4f0 FUN_144bfe4f0 body=15 status=ok
// SIG undefined FUN_144bfe4f0(void)

longlong FUN_144bfe4f0(longlong param_1)

{
  *(code **)(param_1 + 8) = FUN_144c001e0;
  return param_1;
}



// FUNCTION 144bfe500 FUN_144bfe500 body=59 status=ok
// SIG undefined FUN_144bfe500(void)

longlong * FUN_144bfe500(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144bfe540 FUN_144bfe540 body=85 status=ok
// SIG undefined FUN_144bfe540(void)

undefined8
FUN_144bfe540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_48 [64];
  
  FUN_144beb000(local_48,param_4);
  FUN_144bfe5a0(param_1,param_2,param_3,local_48);
  FUN_144beb0a0(local_48);
  return param_2;
}



// FUNCTION 144bfe5a0 FUN_144bfe5a0 body=733 status=ok
// SIG undefined FUN_144bfe5a0(void)

undefined4 * FUN_144bfe5a0(longlong param_1,undefined4 *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res18;
  char *local_258;
  char *local_250;
  undefined1 local_248 [80];
  undefined1 local_1f8 [128];
  undefined1 local_178 [336];
  
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
    local_258 = "TthkSerialize::Save";
    local_250 = "";
    FUN_144b3f370(lVar1,&local_258);
  }
  if (*param_3 == 0) {
    if (1 < DAT_14c787730) {
LAB_144bfe66d:
      cVar2 = FUN_144bdbf80();
      if (cVar2 == '\0') {
        uVar4 = FUN_144bdc640(local_248);
        local_res18 = 0;
        lVar3 = FUN_144bdc480(uVar4,"Cannot save, contents is null",&local_res18,0);
        *(char **)(lVar3 + 0x38) = "hkSerialize.cpp";
        *(undefined8 *)(lVar3 + 0x40) = 0x41a;
        FUN_144bdc690(local_248);
        *param_2 = 0x80040200;
        goto LAB_144bfe82f;
      }
      uVar4 = FUN_144bdc810(local_178,&DAT_14c7876e0,2);
      local_res18 = 0;
      lVar3 = FUN_144bdc480(uVar4,"Cannot save, contents is null",&local_res18,0);
      *(undefined8 *)(lVar3 + 0x40) = 0x41a;
      goto LAB_144bfe707;
    }
    cVar2 = FUN_144bdbf80();
    if (cVar2 != '\0') goto LAB_144bfe66d;
  }
  else {
    if (*(longlong *)(param_4 + 0x18) != 0) {
      uVar4 = FUN_144bfe880(param_1);
      FUN_144f88170(local_1f8,uVar4,param_4);
      FUN_144f885a0(local_1f8,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 0x10));
      FUN_144f88550(local_1f8,param_3);
      FUN_144f885b0(local_1f8,param_2);
      FUN_144f88300(local_1f8);
      goto LAB_144bfe82f;
    }
    if (DAT_14c787730 < 2) {
      cVar2 = FUN_144bdbf80();
      if (cVar2 == '\0') goto LAB_144bfe71b;
    }
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      uVar4 = FUN_144bdc640(local_248);
      local_res18 = 0;
      lVar3 = FUN_144bdc480(uVar4,"Cannot save, writeBuffer is closed",&local_res18,0);
      *(char **)(lVar3 + 0x38) = "hkSerialize.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x41b;
      FUN_144bdc690(local_248);
      *param_2 = 0x80040200;
      goto LAB_144bfe82f;
    }
    uVar4 = FUN_144bdc810(local_178,&DAT_14c7876e0,2);
    local_res18 = 0;
    lVar3 = FUN_144bdc480(uVar4,"Cannot save, writeBuffer is closed",&local_res18,0);
    *(undefined8 *)(lVar3 + 0x40) = 0x41b;
LAB_144bfe707:
    *(char **)(lVar3 + 0x38) = "hkSerialize.cpp";
    FUN_144bdc8a0(local_178);
  }
LAB_144bfe71b:
  *param_2 = 0x80040200;
LAB_144bfe82f:
  if (lVar1 != 0) {
    local_258 = "Et";
    local_250 = "";
    FUN_144b3f260(lVar1,&local_258);
  }
  return param_2;
}



// FUNCTION 144bfe880 FUN_144bfe880 body=103 status=ok
// SIG undefined FUN_144bfe880(void)

longlong FUN_144bfe880(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res8;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (DAT_14c799648 == (code *)0x0) {
      lVar3 = 0;
    }
    else {
      plVar2 = (longlong *)(*DAT_14c799648)(&local_res8);
      lVar3 = *plVar2;
      *plVar2 = 0;
      if (local_res8 != 0) {
        FUN_144b3f230();
      }
    }
    lVar1 = *param_1;
    *param_1 = lVar3;
    if (lVar1 != 0) {
      FUN_144b3f230();
      lVar3 = *param_1;
    }
  }
  return lVar3;
}



// FUNCTION 144bfe8f0 FUN_144bfe8f0 body=81 status=ok
// SIG undefined FUN_144bfe8f0(void)

undefined8 * FUN_144bfe8f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong local_res10 [3];
  
  if (DAT_14c799650 == (code *)0x0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined8 *)(*DAT_14c799650)(local_res10);
    uVar1 = *puVar2;
    *puVar2 = 0;
    *param_1 = uVar1;
    if (local_res10[0] != 0) {
      FUN_144b3f230();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 144bfe950 FUN_144bfe950 body=217 status=ok
// SIG undefined FUN_144bfe950(void)

void FUN_144bfe950(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar3 = (undefined8 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x18);
    uVar1 = *(uint *)(param_1 + 1);
    uVar4 = (ulonglong)uVar1;
    puVar2 = (undefined8 *)*param_1;
    uVar7 = (ulonglong)uVar1;
    puVar5 = puVar2;
    puVar8 = puVar3;
    if (0 < (int)uVar1) {
      do {
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = *puVar5;
          puVar8[1] = puVar5[1];
          puVar8[2] = puVar5[2];
          puVar5[2] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 3;
        puVar8 = puVar8 + 3;
      } while (uVar4 != 0);
      puVar6 = puVar2 + 2;
      do {
        if ((*puVar6 & 1) != 0) {
          FUN_144be6b30(*puVar6 & 0xfffffffffffffffe);
        }
        puVar6 = puVar6 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *param_1 = puVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144bfea30 FUN_144bfea30 body=505 status=ok
// SIG undefined FUN_144bfea30(void)

void FUN_144bfea30(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  char cVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  longlong *local_res10;
  
  plVar2 = (longlong *)param_2[1];
  local_res10 = param_2;
  for (plVar12 = (longlong *)*param_2; plVar12 != plVar2; plVar12 = plVar12 + 3) {
    lVar8 = plVar12[1];
    puVar3 = (ulonglong *)*plVar12;
    if ((((lVar8 != 0) && (cVar6 = FUN_144b45dd0(lVar8,&DAT_14c728810), cVar6 != '\0')) &&
        (puVar7 = (uint *)FUN_144b45d50(lVar8,local_res8), (*puVar7 >> 3 & 1) == 0)) &&
       (puVar3 != (ulonglong *)0x0)) {
      uVar4 = *puVar3;
      iVar10 = *(int *)(param_1 + 0x20) + 1;
      if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar10) {
        FUN_144c00550(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar10);
      }
      iVar11 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar10;
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 0x28);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        FUN_144be6b30(puVar1[2] & 0xfffffffffffffffe);
      }
      puVar1[2] = param_3[2];
      FUN_144be3730(puVar1 + 3,uVar4 & 0xfffffffffffffffe);
      *(undefined4 *)(puVar1 + 4) = 0;
    }
  }
  puVar1 = (undefined8 *)local_res10[1];
  puVar9 = (undefined8 *)*local_res10;
  iVar10 = *(int *)(param_1 + 0x30);
  lVar8 = (longlong)puVar1 - (longlong)puVar9;
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  iVar11 = ((int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f)) + iVar10;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar11) {
    FUN_144c00970((longlong *)(param_1 + 0x28),&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10 * 0x18);
  for (; puVar9 != puVar1; puVar9 = puVar9 + 3) {
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *puVar9;
      puVar5[1] = puVar9[1];
      uVar4 = puVar9[2];
      puVar5[2] = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
      }
    }
    puVar5 = puVar5 + 3;
  }
  *(int *)(param_1 + 0x30) = iVar11;
  return;
}



// FUNCTION 144bfec30 FUN_144bfec30 body=114 status=ok
// SIG undefined FUN_144bfec30(void)

undefined8 FUN_144bfec30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10) + 1;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar2) {
    FUN_144c00ae0((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x10) * 0x40 + *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_144f849b0(lVar1,param_3,param_2);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return 1;
}



// FUNCTION 144bfecb0 FUN_144bfecb0 body=494 status=ok
// SIG undefined FUN_144bfecb0(void)

void FUN_144bfecb0(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  *param_1 = _anon_F72CDFD3::SimpleImportHandler::vftable;
  lVar5 = param_1[5];
  lVar3 = lVar5 + (longlong)*(int *)(param_1 + 6) * 0x18;
  for (; lVar5 != lVar3; lVar5 = lVar5 + 0x18) {
    FUN_144becfe0(lVar5,3,1);
  }
  puVar4 = (ulonglong *)param_1[5];
  if (puVar4 + (longlong)*(int *)(param_1 + 6) * 3 != puVar4) {
    puVar6 = puVar4 + (longlong)*(int *)(param_1 + 6) * 3 + 2;
    do {
      if ((puVar6[-3] & 1) != 0) {
        FUN_144be6b30(puVar6[-3] & 0xfffffffffffffffe);
      }
      puVar1 = puVar6 + -5;
      puVar6 = puVar6 + -3;
    } while (puVar1 != puVar4);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) * 0x18);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  puVar4 = (ulonglong *)param_1[3];
  if (puVar4 + (longlong)*(int *)(param_1 + 4) * 5 != puVar4) {
    puVar6 = puVar4 + (longlong)*(int *)(param_1 + 4) * 5 + 2;
    do {
      puVar1 = puVar6 + -5;
      FUN_144b49dd0(puVar6 + -4);
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar2 = puVar6 + -7;
      puVar6 = puVar1;
    } while (puVar2 != puVar4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x28);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  puVar4 = (ulonglong *)param_1[1];
  if (puVar4 + (longlong)*(int *)(param_1 + 2) * 8 != puVar4) {
    puVar6 = puVar4 + (longlong)*(int *)(param_1 + 2) * 8 + 2;
    do {
      puVar1 = puVar6 + -8;
      FUN_144f6ee60(puVar6 + -6);
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar2 = puVar6 + -10;
      puVar6 = puVar1;
    } while (puVar2 != puVar4);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[1],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) << 6);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  FUN_144f88ce0(param_1);
  return;
}



// FUNCTION 144bfeea0 FUN_144bfeea0 body=87 status=ok
// SIG undefined FUN_144bfeea0(void)

undefined8 FUN_144bfeea0(undefined8 param_1,ulonglong param_2)

{
  FUN_144bfecb0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144bfef00 FUN_144bfef00 body=401 status=ok
// SIG undefined FUN_144bfef00(void)

undefined4 *
FUN_144bfef00(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res18;
  undefined8 local_1c8;
  code *local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [80];
  undefined1 local_158 [336];
  
  FUN_144beff00(*(undefined8 *)(param_3 + 8),&local_res18);
  if ((local_res18 != 0) && (cVar1 = FUN_144f6a410(local_res18,&DAT_14c6dc530), cVar1 != '\0')) {
    FUN_144f76c20(param_1,param_2,param_3,param_4,param_5);
    return param_2;
  }
  if ((DAT_14c787730 != '\0') || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
    cVar1 = FUN_144bdbf80();
    local_res18 = *(longlong *)(param_3 + 8);
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(local_1a8);
      local_1c8 = 1;
      local_1c0 = FUN_144c00cb0;
      local_1b8 = &local_res18;
      lVar3 = FUN_144bdc480(uVar2,
                            "Found pointer ({}) in note. Pointers are not allowed in auxiliary objects"
                            ,&local_1c8,0);
      *(char **)(lVar3 + 0x38) = "hkSerialize.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x54;
      FUN_144bdc690(local_1a8);
    }
    else {
      local_1b0 = local_res18;
      uVar2 = FUN_144bdc810(local_158,&DAT_14c7876e0,1);
      local_1c8 = 1;
      local_1c0 = FUN_144c00cb0;
      local_1b8 = &local_1b0;
      lVar3 = FUN_144bdc480(uVar2,
                            "Found pointer ({}) in note. Pointers are not allowed in auxiliary objects"
                            ,&local_1c8,0);
      *(char **)(lVar3 + 0x38) = "hkSerialize.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x54;
      FUN_144bdc8a0(local_158);
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bff0a0 FUN_144bff0a0 body=87 status=ok
// SIG undefined FUN_144bff0a0(void)

undefined8 FUN_144bff0a0(undefined8 param_1,ulonglong param_2)

{
  FUN_144f84ee0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144bff100 FUN_144bff100 body=1391 status=ok
// SIG undefined FUN_144bff100(void)

undefined4 *
FUN_144bff100(undefined4 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 *****local_res10;
  undefined8 local_res18;
  longlong local_278;
  int local_270;
  uint local_26c;
  undefined8 local_268;
  code *pcStack_260;
  undefined8 *****local_258;
  undefined8 *****local_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 *****local_238;
  longlong local_230;
  longlong local_228;
  ulonglong local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined **local_208 [5];
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  ulonglong uVar16;
  
  uVar16 = 0;
  local_res10 = (undefined8 *****)((ulonglong)local_res10 & 0xffffffff00000000);
  local_res18 = param_3;
  FUN_144f84e90(local_208,0,0);
  local_278 = 0;
  local_208[0] = _anon_F72CDFD3::CloneAuxToNativeCallback::vftable;
  local_270 = 0;
  local_26c = 0x80000000;
  (**(code **)(*param_2 + 0x10))(param_2,&local_278);
  uVar17 = uVar16;
  uVar19 = uVar16;
  if (0 < local_270) {
    do {
      ppppppuVar10 = (undefined8 ******)0x0;
      if (*(char *)(uVar19 + 0x10 + local_278) == '\x02') {
        pcStack_260 = *(code **)(uVar19 + 8 + local_278);
        local_268 = *(undefined8 *)(uVar19 + local_278);
        ppppppuVar9 = ppppppuVar10;
        if (pcStack_260 != (code *)0x0) {
          ppppppuVar9 = (undefined8 ******)FUN_144befdb0();
        }
        local_258 = ppppppuVar9;
        if (((ulonglong)ppppppuVar9 & 1) != 0) {
          FUN_144be6b20((ulonglong)ppppppuVar9 & 0xfffffffffffffffe);
        }
        FUN_144f76ac0(param_3,&local_230,&local_268,local_208);
        if (((ulonglong)local_258 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_258 & 0xfffffffffffffffe);
        }
        if (local_230 == 0) {
          if ((1 < DAT_14c787730) || (cVar8 = FUN_144bdbf80(), cVar8 != '\0')) {
            cVar8 = FUN_144bdbf80();
            ppppppuVar9 = *(undefined8 *******)(local_278 + 8 + (longlong)(int)uVar17 * 0x18);
            if (cVar8 == '\0') {
              bVar7 = true;
              bVar6 = true;
              bVar5 = false;
              bVar4 = false;
              if (ppppppuVar9 != (undefined8 ******)0x0) {
                ppppppuVar10 = (undefined8 ******)FUN_144befdb0(ppppppuVar9);
              }
              if (((ulonglong)ppppppuVar10 & 1) != 0) {
                FUN_144be6b20((ulonglong)ppppppuVar10 & 0xfffffffffffffffe);
              }
              local_res10 = ppppppuVar9;
              uVar13 = FUN_144bdc640(local_1e0,&DAT_14c7876e0,2);
              local_268 = 1;
              pcStack_260 = FUN_144c00d20;
              local_258 = &local_res10;
              local_248._0_4_ = 1;
              local_248._4_4_ = 0;
              uStack_240 = 0x44c00d20;
              uStack_23c = 1;
              local_238 = local_258;
              lVar14 = FUN_144bdc480(uVar13,"Failed to clone note of type \'{}\'",&local_248,0);
              *(char **)(lVar14 + 0x38) = "hkSerialize.cpp";
              *(undefined8 *)(lVar14 + 0x40) = 0x6a;
              ppppppuVar9 = ppppppuVar10;
              ppppppuVar10 = (undefined8 ******)local_238;
            }
            else {
              bVar7 = false;
              bVar6 = false;
              bVar5 = true;
              bVar4 = true;
              if (ppppppuVar9 != (undefined8 ******)0x0) {
                ppppppuVar10 = (undefined8 ******)FUN_144befdb0(ppppppuVar9);
              }
              if (((ulonglong)ppppppuVar10 & 1) != 0) {
                FUN_144be6b20((ulonglong)ppppppuVar10 & 0xfffffffffffffffe);
              }
              local_250 = ppppppuVar9;
              uVar13 = FUN_144bdc810(local_190,&DAT_14c7876e0,2);
              local_268 = 1;
              pcStack_260 = FUN_144c00d20;
              local_258 = &local_250;
              local_248._0_4_ = 1;
              local_248._4_4_ = 0;
              uStack_240 = 0x44c00d20;
              uStack_23c = 1;
              local_238 = local_258;
              lVar14 = FUN_144bdc480(uVar13,"Failed to clone note of type \'{}\'",&local_248,0);
              *(char **)(lVar14 + 0x38) = "hkSerialize.cpp";
              *(undefined8 *)(lVar14 + 0x40) = 0x6a;
              ppppppuVar9 = (undefined8 ******)local_238;
            }
            if (bVar4) {
              FUN_144bdc8a0(local_190);
            }
            if ((bVar5) && (((ulonglong)ppppppuVar10 & 1) != 0)) {
              FUN_144be6b30((ulonglong)ppppppuVar10 & 0xfffffffffffffffe);
            }
            if (bVar6) {
              FUN_144bdc690(local_1e0);
            }
            if ((bVar7) && (((ulonglong)ppppppuVar9 & 1) != 0)) {
              FUN_144be6b30((ulonglong)ppppppuVar9 & 0xfffffffffffffffe);
            }
          }
          *param_1 = 0x80040200;
          if ((local_220 & 1) != 0) {
            FUN_144be6b30(local_220 & 0xfffffffffffffffe);
          }
          local_270 = 0;
          if ((-1 < (int)local_26c) && (local_278 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_278,(ulonglong)(local_26c & 0x7fffffff) * 0x18);
          }
          local_278 = 0;
          local_26c = 0x80000000;
          FUN_144f84ee0(local_208);
          return param_1;
        }
        iVar18 = 0;
        if (*(char *)(uVar19 + 0x10 + local_278) == '\x02') {
          iVar18 = *(int *)(uVar19 + 0x14 + local_278);
        }
        if (iVar18 < local_270) {
          uVar15 = (uint)uVar16 | 0x10;
          ppppppuVar9 = *(undefined8 *******)(local_278 + (longlong)iVar18 * 0x18);
          if (*(longlong *)(local_278 + 8 + (longlong)iVar18 * 0x18) != 0) {
            ppppppuVar10 = (undefined8 ******)FUN_144befdb0();
          }
          local_238 = ppppppuVar10;
          if (((ulonglong)ppppppuVar10 & 1) != 0) {
            FUN_144be6b20((ulonglong)ppppppuVar10 & 0xfffffffffffffffe);
          }
          puVar11 = &local_248;
          ppppppuVar10 = ppppppuVar9;
        }
        else {
          uVar15 = (uint)uVar16 | 0x20;
          local_258 = (undefined8 ******)0x0;
          puVar11 = &local_268;
        }
        uVar16 = (ulonglong)uVar15;
        uVar2 = puVar11[2];
        puVar11[2] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        if (((uVar15 & 0x20) != 0) &&
           (uVar16 = (ulonglong)(uVar15 & 0xffffffdf), ((ulonglong)local_258 & 1) != 0)) {
          FUN_144be6b30((ulonglong)local_258 & 0xfffffffffffffffe);
        }
        if (((uVar16 & 0x10) != 0) &&
           (uVar16 = (ulonglong)((uint)uVar16 & 0xffffffef), ((ulonglong)local_238 & 1) != 0)) {
          FUN_144be6b30((ulonglong)local_238 & 0xfffffffffffffffe);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 0x80000000;
        local_res10 = ppppppuVar10;
        FUN_144c002c0(param_4,&local_250,&local_res10,&local_218);
        lVar12 = (longlong)(int)local_250;
        lVar3 = *param_4;
        lVar14 = lVar3 + lVar12 * 0x18;
        iVar18 = *(int *)(lVar3 + 0x10 + lVar12 * 0x18) + 1;
        if ((int)(*(uint *)(lVar3 + 0x14 + lVar12 * 0x18) & 0x7fffffff) < iVar18) {
          FUN_144c00810(lVar14 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar18);
        }
        plVar1 = (longlong *)(*(longlong *)(lVar14 + 8) + (longlong)*(int *)(lVar14 + 0x10) * 0x18);
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = local_230;
          plVar1[1] = local_228;
          plVar1[2] = local_220;
          if ((local_220 & 1) != 0) {
            FUN_144be6b20(local_220 & 0xfffffffffffffffe);
          }
        }
        *(int *)(lVar14 + 0x10) = iVar18;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
        }
        param_3 = local_res18;
        if ((local_220 & 1) != 0) {
          FUN_144be6b30(local_220 & 0xfffffffffffffffe);
          param_3 = local_res18;
        }
      }
      uVar15 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar15;
      uVar19 = uVar19 + 0x18;
    } while ((int)uVar15 < local_270);
  }
  *param_1 = 0;
  local_270 = 0;
  if ((-1 < (int)local_26c) && (local_278 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_278,(ulonglong)(local_26c & 0x7fffffff) * 0x18);
  }
  local_278 = 0;
  local_26c = 0x80000000;
  FUN_144f84ee0(local_208);
  return param_1;
}



// FUNCTION 144bff670 FUN_144bff670 body=339 status=ok
// SIG undefined FUN_144bff670(void)

void FUN_144bff670(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  
  lVar4 = param_1[2];
  if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
    FUN_144b3ec00(param_1 + 2);
  }
  plVar5 = (longlong *)*param_1;
  if (plVar5 + (longlong)(int)param_1[1] * 3 != plVar5) {
    plVar8 = plVar5 + (longlong)(int)param_1[1] * 3 + 1;
    do {
      puVar6 = (ulonglong *)plVar8[-3];
      plVar1 = plVar8 + -3;
      if (puVar6 + (longlong)(int)plVar8[-2] * 3 != puVar6) {
        puVar7 = puVar6 + (longlong)(int)plVar8[-2] * 3 + 2;
        do {
          if ((puVar7[-3] & 1) != 0) {
            FUN_144be6b30(puVar7[-3] & 0xfffffffffffffffe);
          }
          puVar2 = puVar7 + -5;
          puVar7 = puVar7 + -3;
        } while (puVar2 != puVar6);
      }
      *(undefined4 *)(plVar8 + -2) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar8 + -0xc)) && (*plVar1 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar1,
                   (ulonglong)(*(uint *)((longlong)plVar8 + -0xc) & 0x7fffffff) * 0x18);
      }
      plVar3 = plVar8 + -4;
      *plVar1 = 0;
      *(undefined4 *)((longlong)plVar8 + -0xc) = 0x80000000;
      plVar8 = plVar1;
    } while (plVar3 != plVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x18);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144bff7d0 FUN_144bff7d0 body=279 status=ok
// SIG undefined FUN_144bff7d0(void)

void FUN_144bff7d0(undefined8 *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  
  *param_1 = _anon_F72CDFD3::CloneToNativeCallback::vftable;
  lVar4 = param_1[0x10];
  lVar2 = lVar4 + (longlong)*(int *)(param_1 + 0x11) * 0x18;
  for (; lVar4 != lVar2; lVar4 = lVar4 + 0x18) {
    FUN_144becfe0(lVar4,3,1);
  }
  FUN_144bfecb0(param_1 + 0x14);
  puVar3 = (ulonglong *)param_1[0x10];
  if (puVar3 + (longlong)*(int *)(param_1 + 0x11) * 3 != puVar3) {
    puVar5 = puVar3 + (longlong)*(int *)(param_1 + 0x11) * 3 + 2;
    do {
      if ((puVar5[-3] & 1) != 0) {
        FUN_144be6b30(puVar5[-3] & 0xfffffffffffffffe);
      }
      puVar1 = puVar5 + -5;
      puVar5 = puVar5 + -3;
    } while (puVar1 != puVar3);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) * 0x18);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  FUN_144f85470(param_1 + 7);
  FUN_144f84ee0(param_1 + 2);
  FUN_144f852f0(param_1);
  return;
}



// FUNCTION 144bff8f0 FUN_144bff8f0 body=232 status=ok
// SIG undefined FUN_144bff8f0(void)

undefined4 *
FUN_144bff8f0(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_res8;
  longlong local_28;
  longlong local_20;
  
  lVar2 = *param_3;
  piVar1 = (int *)(**(code **)(**(longlong **)(param_1 + 8) + 8))
                            (*(longlong **)(param_1 + 8),&local_res8);
  if (*piVar1 < 0) {
    *param_2 = 0x80040200;
  }
  else {
    if ((lVar2 == 0) && (*param_3 != 0)) {
      local_res8 = *param_4;
      plVar3 = *(longlong **)(param_1 + 0x70);
      local_20 = 0x8000000000000000;
      local_28 = lVar2;
      lVar2 = FUN_144c00220(plVar3,&local_res8);
      if (lVar2 == 0) {
        plVar3 = &local_28;
      }
      else {
        plVar3 = (longlong *)(*plVar3 + ((longlong)*(int *)(lVar2 + 4) * 3 + 1) * 8);
      }
      if ((int)plVar3[1] != 0) {
        local_28 = *plVar3;
        local_20 = local_28 + (longlong)(int)plVar3[1] * 0x18;
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),&local_28,param_3,param_4);
      }
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 144bff9e0 FUN_144bff9e0 body=1268 status=ok
// SIG undefined FUN_144bff9e0(void)

undefined4 *
FUN_144bff9e0(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4,
             uint *param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  int *piVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  int local_res8 [2];
  longlong local_248;
  undefined8 uStack_240;
  ulonglong local_238;
  longlong local_230 [2];
  ulonglong local_220;
  undefined8 local_218;
  code *local_210;
  longlong *local_208;
  code *local_200;
  longlong *local_1f8;
  undefined **local_1f0;
  undefined8 *local_1e8;
  int local_1e0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  lVar8 = 0;
  piVar5 = (int *)(**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                            (*(longlong **)(param_1 + 8),local_res8,param_3,param_4,param_5);
  if (*piVar5 < 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  (**(code **)(*(longlong *)(param_4[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_4[2] & 0xfffffffffffffffe),local_res8,*param_4,param_4[1],&local_248
            );
  if (local_res8[0] < 0) {
    *param_2 = 0x80040200;
    if ((local_238 & 1) == 0) {
      return param_2;
    }
    FUN_144be6b30(local_238 & 0xfffffffffffffffe);
    return param_2;
  }
  if (local_248 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))
              (*(longlong **)(param_1 + 0x90),local_230,param_4);
    if (local_230[0] != 0) {
      plVar9 = (longlong *)FUN_144f769b0(*(undefined8 *)(param_1 + 0x78));
      lVar10 = FUN_144c00490(plVar9,local_230);
      if (lVar10 != 0) {
        lVar8 = (longlong)*(int *)(lVar10 + 4) * 0x30 + *plVar9;
      }
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x18))
                        (*(longlong **)(param_1 + 0x98),lVar8 + 0x18,param_3,param_4);
      *param_2 = 0;
      *param_5 = (uint)(cVar4 != '\0');
      if ((local_220 & 1) != 0) {
        FUN_144be6b30(local_220 & 0xfffffffffffffffe);
      }
      goto LAB_144bffe9a;
    }
    if ((local_220 & 1) != 0) {
      FUN_144be6b30(local_220 & 0xfffffffffffffffe);
    }
  }
  else {
    puVar6 = (uint *)FUN_144b45d50(param_3[1],local_res8);
    if ((*puVar6 >> 2 & 1) != 0) {
      FUN_144f84e90(&local_1f0,0,0);
      local_1f0 = _anon_F72CDFD3::CloneAuxToNativeCallback::vftable;
      FUN_144f76ac0(*(undefined8 *)(param_1 + 0x78),local_230,&local_248,&local_1f0);
      if (local_230[0] == 0) {
        if ((1 < DAT_14c787730) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
          cVar4 = FUN_144bdbf80();
          if (cVar4 == '\0') {
            uVar7 = FUN_144bdc640(local_1c8);
            local_218 = 1;
            local_210 = FUN_144c00d90;
            local_208 = &local_248;
            lVar8 = FUN_144bdc480(uVar7,"Failed to clone interned placeholder {}",&local_218,0);
            *(char **)(lVar8 + 0x38) = "hkSerialize.cpp";
            *(undefined8 *)(lVar8 + 0x40) = 0xdb;
            FUN_144bdc690(local_1c8);
          }
          else {
            uVar7 = FUN_144bdc810(local_178,&DAT_14c7876e0,2);
            local_218 = 1;
            local_210 = FUN_144c00d90;
            local_208 = &local_248;
            lVar8 = FUN_144bdc480(uVar7,"Failed to clone interned placeholder {}",&local_218,0);
            *(undefined8 *)(lVar8 + 0x40) = 0xdb;
LAB_144bffbd5:
            *(char **)(lVar8 + 0x38) = "hkSerialize.cpp";
            FUN_144bdc8a0(local_178);
          }
        }
LAB_144bffbe9:
        *param_2 = 0x80040200;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x88);
        lVar8 = (longlong)local_1e0 * 0x18;
        lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
        iVar12 = ((int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f)) + iVar1;
        if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) < iVar12) {
          FUN_144c00970((longlong *)(param_1 + 0x80),&PTR_vftable_14c6e47a0,(longlong)iVar12);
        }
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 0x18);
        for (puVar11 = local_1e8; puVar11 != local_1e8 + (longlong)local_1e0 * 3;
            puVar11 = puVar11 + 3) {
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = *puVar11;
            puVar3[1] = puVar11[1];
            uVar2 = puVar11[2];
            puVar3[2] = uVar2;
            if ((uVar2 & 1) != 0) {
              FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
            }
          }
          puVar3 = puVar3 + 3;
        }
        *(int *)(param_1 + 0x88) = iVar12;
        (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffeU) + 0x40))
                  ((longlong *)(param_3[2] & 0xfffffffffffffffeU),local_res8,*param_3,param_3[1],
                   local_230);
        if (local_res8[0] < 0) {
          if ((1 < DAT_14c787730) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
            cVar4 = FUN_144bdbf80();
            local_208 = param_3;
            if (cVar4 != '\0') {
              uVar7 = FUN_144bdc810(local_178,&DAT_14c7876e0,2);
              local_218 = 2;
              local_210 = FUN_144c00e00;
              local_200 = FUN_144c00d90;
              local_1f8 = local_230;
              lVar8 = FUN_144bdc480(uVar7,"Failed to set interned pointer {} to value {}",&local_218
                                    ,0);
              *(undefined8 *)(lVar8 + 0x40) = 0xe3;
              goto LAB_144bffbd5;
            }
            uVar7 = FUN_144bdc640(local_1c8);
            local_218 = 2;
            local_210 = FUN_144c00e00;
            local_200 = FUN_144c00d90;
            local_1f8 = local_230;
            lVar8 = FUN_144bdc480(uVar7,"Failed to set interned pointer {} to value {}",&local_218,0
                                 );
            *(char **)(lVar8 + 0x38) = "hkSerialize.cpp";
            *(undefined8 *)(lVar8 + 0x40) = 0xe3;
            FUN_144bdc690(local_1c8);
          }
          goto LAB_144bffbe9;
        }
        *param_2 = 0;
        *param_5 = 0;
      }
      if ((local_220 & 1) != 0) {
        FUN_144be6b30(local_220 & 0xfffffffffffffffe);
      }
      FUN_144f84ee0(&local_1f0);
      goto LAB_144bffe9a;
    }
  }
  *param_2 = 0;
LAB_144bffe9a:
  if ((local_238 & 1) != 0) {
    FUN_144be6b30(local_238 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144bffee0 FUN_144bffee0 body=671 status=ok
// SIG undefined FUN_144bffee0(void)

void FUN_144bffee0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_218;
  code *local_210;
  undefined8 *local_208;
  code *local_200;
  undefined4 *local_1f8;
  undefined1 local_1f0 [80];
  undefined1 local_1a0 [352];
  
  bVar5 = false;
  bVar4 = false;
  local_res8[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  if (-1 < *param_2) {
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    if (puVar3 != puVar3 + (longlong)iVar2 * 5) {
      puVar11 = puVar3 + 1;
      bVar7 = 0;
      do {
        if ((1 < DAT_14c787730) || (cVar8 = FUN_144bdbf80(), cVar8 != '\0')) {
          cVar8 = FUN_144bdbf80();
          if (cVar8 == '\0') {
            local_res18 = *puVar11;
            bVar5 = true;
            local_res8[0] = *(undefined4 *)(puVar11 + 3);
            uVar9 = FUN_144bdc640(local_1f0);
            local_208 = &local_res18;
            local_1f8 = local_res8;
          }
          else {
            local_res20 = *puVar11;
            bVar4 = true;
            local_res10[0] = *(undefined4 *)(puVar11 + 3);
            uVar9 = FUN_144bdc810(local_1a0,&DAT_14c7876e0,2);
            local_208 = &local_res20;
            local_1f8 = local_res10;
          }
          local_200 = FUN_144f50970;
          local_218 = 2;
          local_210 = FUN_144c00d20;
          lVar10 = FUN_144bdc480(uVar9,
                                 "Dropped object of type \'{}\' because it has no references left. {} remaining pointers to it have been set to null.This usually happens when versioning an old file. Resave the file to remove this warning."
                                 ,&local_218,0);
          *(undefined8 *)(lVar10 + 0x40) = 0x104;
          *(char **)(lVar10 + 0x38) = "hkSerialize.cpp";
          if (bVar4) {
            bVar4 = false;
            FUN_144bdc8a0(local_1a0);
          }
          if (bVar5) {
            bVar5 = false;
            FUN_144bdc690(local_1f0);
          }
        }
        if ((2 < DAT_14c787730) || (cVar8 = FUN_144bdbf80(), bVar6 = bVar7, cVar8 != '\0')) {
          cVar8 = FUN_144bdbf80();
          bVar12 = cVar8 != '\0';
          if (bVar12) {
            uVar9 = FUN_144bdc810(local_1a0,&DAT_14c7876e0,3);
            local_218 = 1;
            local_210 = FUN_144c00d90;
            local_208 = puVar11 + -1;
            lVar10 = FUN_144bdc480(uVar9,"Dropped obj: {:*}",&local_218,0);
            *(char **)(lVar10 + 0x38) = "hkSerialize.cpp";
            *(undefined8 *)(lVar10 + 0x40) = 0x105;
          }
          else {
            uVar9 = FUN_144bdc640(local_1f0);
            local_218 = 1;
            local_210 = FUN_144c00d90;
            local_208 = puVar11 + -1;
            lVar10 = FUN_144bdc480(uVar9,"Dropped obj: {:*}",&local_218,0);
            *(char **)(lVar10 + 0x38) = "hkSerialize.cpp";
            *(undefined8 *)(lVar10 + 0x40) = 0x105;
          }
          bVar6 = bVar12 | bVar7;
          if ((bool)(bVar12 | bVar7)) {
            bVar6 = 0;
            FUN_144bdc8a0(local_1a0);
          }
          if (!bVar12) {
            FUN_144bdc690(local_1f0);
          }
        }
        puVar1 = puVar11 + 4;
        puVar11 = puVar11 + 5;
        bVar7 = bVar6;
      } while (puVar1 != puVar3 + (longlong)iVar2 * 5);
    }
  }
  return;
}



// FUNCTION 144c00180 FUN_144c00180 body=87 status=ok
// SIG undefined FUN_144c00180(void)

undefined8 FUN_144c00180(undefined8 param_1,ulonglong param_2)

{
  FUN_144bff7d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 144c001e0 FUN_144c001e0 body=57 status=ok
// SIG undefined FUN_144c001e0(void)

void FUN_144c001e0(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 local_res8 [8];
  
  pbVar1 = (byte *)FUN_144b45d50(*(undefined8 *)(param_1 + 8),local_res8);
  if ((*pbVar1 & 3) != 0) {
    FUN_144f88570(param_2,param_1);
  }
  return;
}



// FUNCTION 144c00220 FUN_144c00220 body=151 status=ok
// SIG undefined FUN_144c00220(void)

uint * FUN_144c00220(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = *param_2;
  uVar7 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar3 * -0x61c8864f;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar2 + uVar4 * 8);
    if ((*puVar5 == uVar7) && (*(longlong *)(*param_1 + (ulonglong)uVar6 * 0x18) == lVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 144c002c0 FUN_144c002c0 body=304 status=ok
// SIG undefined FUN_144c002c0(void)

int * FUN_144c002c0(longlong *param_1,int *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  int iVar9;
  
  FUN_144c006e0();
  if (*param_2 == (int)param_1[1]) {
    iVar9 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar9) {
      FUN_144c00e70(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_3;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
      lVar3 = *param_4;
      uVar2 = *(uint *)(param_4 + 1);
      uVar7 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        uVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                          (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x18);
        puVar1[1] = uVar5;
        puVar6 = (ulonglong *)(lVar3 + 0x10);
        *(uint *)(puVar1 + 2) = uVar2;
        *(uint *)((longlong)puVar1 + 0x14) = uVar2;
        puVar8 = (ulonglong *)puVar1[1];
        do {
          if (puVar8 != (ulonglong *)0x0) {
            *puVar8 = puVar6[-2];
            puVar8[1] = puVar6[-1];
            uVar4 = *puVar6;
            puVar8[2] = uVar4;
            if ((uVar4 & 1) != 0) {
              FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
            }
            puVar6 = puVar6 + 3;
          }
          uVar7 = uVar7 - 1;
          puVar8 = puVar8 + 3;
        } while (uVar7 != 0);
      }
    }
    *(int *)(param_1 + 1) = iVar9;
  }
  return param_2;
}



// FUNCTION 144c003f0 FUN_144c003f0 body=151 status=ok
// SIG undefined FUN_144c003f0(void)

uint * FUN_144c003f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = *param_2;
  uVar7 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar3 * -0x61c8864f;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar2 + uVar4 * 8);
    if ((*puVar5 == uVar7) && (*(longlong *)(*param_1 + (ulonglong)uVar6 * 0x18) == lVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 144c00490 FUN_144c00490 body=186 status=ok
// SIG undefined FUN_144c00490(void)

uint * FUN_144c00490(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar1 = *param_2;
  uVar9 = (int)lVar1 * -0x61c8864f;
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = iVar4 * -0x61c8864f;
  uVar10 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar4 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  lVar2 = param_1[2];
  uVar5 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  uVar8 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  do {
    if ((int)uVar8 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if (*puVar6 == uVar9) {
      plVar7 = (longlong *)((ulonglong)uVar8 * 0x30 + *param_1);
      lVar3 = *plVar7;
      if ((lVar3 == 0) && (lVar1 == 0)) {
        return puVar6;
      }
      if ((lVar3 == lVar1) && (plVar7[1] == param_2[1])) {
        return puVar6;
      }
    }
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar8 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  } while( true );
}



// FUNCTION 144c00550 FUN_144c00550 body=394 status=ok
// SIG undefined FUN_144c00550(void)

ulonglong FUN_144c00550(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
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
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x28,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar5 = (undefined8 *)(lVar4 + 0x10);
    uVar10 = (ulonglong)uVar1;
    puVar6 = puVar2;
    do {
      if (puVar5 + -2 != (undefined8 *)0x0) {
        puVar5[-2] = *puVar6;
        puVar5[-1] = puVar6[1];
        *puVar5 = puVar6[2];
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar5[1] = puVar6[3];
        puVar6[3] = 0;
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar6 + 4);
      }
      puVar5 = puVar5 + 5;
      puVar6 = puVar6 + 5;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    puVar7 = puVar2 + 2;
    do {
      FUN_144b49dd0(puVar7 + 1);
      if ((*puVar7 & 1) != 0) {
        FUN_144be6b30(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + 5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar9 * 0x28 + 0x28;
  uVar10 = uVar9;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x28;
    uVar10 = uVar9 + 1;
    if (uVar8 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x28;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      uVar8 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar3,0);
      uVar10 = uVar10 + uVar9 / 0x28;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x28);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar8;
}



// FUNCTION 144c006e0 FUN_144c006e0 body=300 status=ok
// SIG undefined FUN_144c006e0(void)

uint * FUN_144c006e0(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = (longlong)iVar8 * 3;
  if ((iVar8 < 0) || (0xffffffff < uVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = iVar8 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  uVar7 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar2 + uVar7 * 8);
    if (iVar8 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      lVar2 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144c007e4:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 0x18) == lVar1))
    {
      *param_2 = puVar6[1];
      goto LAB_144c007e4;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144c00810 FUN_144c00810 body=351 status=ok
// SIG undefined FUN_144c00810(void)

ulonglong FUN_144c00810(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar5) {
    uVar8 = uVar5;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar8 * 0x18;
  puVar4 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  puVar2 = (undefined8 *)*param_1;
  uVar9 = (ulonglong)uVar1;
  puVar6 = puVar2;
  puVar10 = puVar4;
  if (0 < (int)uVar1) {
    do {
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = *puVar6;
        puVar10[1] = puVar6[1];
        puVar10[2] = puVar6[2];
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 3;
      puVar10 = puVar10 + 3;
    } while (uVar5 != 0);
    puVar7 = puVar2 + 2;
    do {
      if ((*puVar7 & 1) != 0) {
        FUN_144be6b30(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + 3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar5 = uVar8 * 0x18 + 0x18;
  uVar9 = uVar8;
  if (uVar5 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar8 + 1;
    if (uVar5 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar8;
      uVar5 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar9 = uVar9 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar5;
}



// FUNCTION 144c00970 FUN_144c00970 body=361 status=ok
// SIG undefined FUN_144c00970(void)

ulonglong FUN_144c00970(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar5 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar5) {
    uVar8 = uVar5;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x18,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  puVar2 = (undefined8 *)*param_1;
  uVar9 = (ulonglong)uVar1;
  puVar6 = puVar2;
  puVar10 = puVar4;
  if (0 < (int)uVar1) {
    do {
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = *puVar6;
        puVar10[1] = puVar6[1];
        puVar10[2] = puVar6[2];
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 3;
      puVar10 = puVar10 + 3;
    } while (uVar5 != 0);
    puVar7 = puVar2 + 2;
    do {
      if ((*puVar7 & 1) != 0) {
        FUN_144be6b30(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + 3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar5 = uVar8 * 0x18 + 0x18;
  uVar9 = uVar8;
  if (uVar5 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar8 + 1;
    if (uVar5 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar8;
      uVar5 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar9 = uVar9 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x18);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar4;
  return uVar5;
}



// FUNCTION 144c00ae0 FUN_144c00ae0 body=461 status=ok
// SIG undefined FUN_144c00ae0(void)

void FUN_144c00ae0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar12 = uVar11 * 2;
  uVar7 = param_3;
  if (param_3 <= uVar12 && uVar12 - param_3 != 0) {
    uVar7 = uVar12;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar4 = uVar7 << 6;
  local_res20 = lVar4;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,lVar4,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar8 = (undefined8 *)*param_1;
  uVar12 = (ulonglong)uVar1;
  local_res18 = puVar8;
  if (0 < (int)uVar1) {
    puVar9 = (undefined4 *)((longlong)puVar8 + 0x34);
    uVar10 = (ulonglong)uVar1;
    puVar5 = (undefined4 *)(lVar3 + 0x30);
    do {
      if ((undefined8 *)(puVar5 + -0xc) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar5 + -0xc) = *puVar8;
        *(undefined8 *)(puVar5 + -10) = *(undefined8 *)(puVar9 + -0xb);
        uVar2 = *(ulonglong *)(puVar9 + -9);
        *(ulonglong *)(puVar5 + -8) = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
        }
        *(undefined8 *)(puVar5 + -4) = *(undefined8 *)(puVar9 + -5);
        *(undefined1 *)(puVar5 + -2) = *(undefined1 *)(puVar9 + -3);
        *puVar5 = puVar9[-1];
        puVar5[1] = *puVar9;
        puVar5[2] = puVar9[1];
        puVar5[3] = puVar9[2];
        *(undefined1 *)(puVar9 + -3) = 0;
        *(undefined8 *)(puVar9 + -5) = 0;
      }
      puVar5 = puVar5 + 0x10;
      puVar8 = puVar8 + 8;
      puVar9 = puVar9 + 0x10;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    puVar6 = local_res18 + 2;
    do {
      FUN_144f6ee60(puVar6 + 2);
      if ((*puVar6 & 1) != 0) {
        FUN_144be6b30(*puVar6 & 0xfffffffffffffffe);
      }
      puVar6 = puVar6 + 8;
      uVar12 = uVar12 - 1;
      lVar4 = local_res20;
      param_2 = local_res10;
    } while (uVar12 != 0);
  }
  if (lVar4 + 0x40U <= local_res8) {
    local_res8 = local_res8 - 0x40;
    uVar7 = uVar7 + 1;
    if (lVar4 + 0x40U <= local_res8) {
      uVar7 = uVar7 + (local_res8 - lVar4 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 6);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144c00cb0 FUN_144c00cb0 body=111 status=ok
// SIG undefined FUN_144c00cb0(void)

undefined4 *
FUN_144c00cb0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6e4820;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144c00d20 FUN_144c00d20 body=111 status=ok
// SIG undefined FUN_144c00d20(void)

undefined4 *
FUN_144c00d20(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6e2b20;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144c00d90 FUN_144c00d90 body=111 status=ok
// SIG undefined FUN_144c00d90(void)

undefined4 *
FUN_144c00d90(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dc090;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144c00e00 FUN_144c00e00 body=111 status=ok
// SIG undefined FUN_144c00e00(void)

undefined4 *
FUN_144c00e00(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dcfd0;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144c00e70 FUN_144c00e70 body=588 status=ok
// SIG undefined FUN_144c00e70(void)

ulonglong FUN_144c00e70(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar13 = uVar7 * 2;
  uVar15 = param_3;
  if (param_3 < uVar13) {
    uVar15 = uVar13;
  }
  if ((0x7ffffffe < uVar15) && (uVar15 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar15 * 0x18);
  uVar2 = *(uint *)(param_1 + 1);
  puVar3 = (undefined8 *)*param_1;
  uVar13 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    puVar10 = (undefined4 *)((longlong)puVar3 + 0x14);
    uVar9 = (ulonglong)uVar2;
    puVar11 = (undefined4 *)(lVar6 + 0x14);
    puVar14 = puVar3;
    do {
      if ((undefined8 *)(puVar11 + -5) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar11 + -5) = *puVar14;
        *(undefined8 *)(puVar11 + -3) = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
        FUN_144bfe950(puVar10 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar11 + -3) = *(undefined8 *)(puVar10 + -3);
        puVar11[-1] = puVar10[-1];
        *puVar11 = *puVar10;
        *(undefined8 *)(puVar10 + -3) = 0;
        *(undefined8 *)(puVar10 + -1) = 0;
      }
      puVar11 = puVar11 + 6;
      puVar14 = puVar14 + 3;
      puVar10 = puVar10 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    plVar12 = puVar3 + 1;
    do {
      puVar4 = (ulonglong *)*plVar12;
      if (puVar4 + (longlong)(int)plVar12[1] * 3 != puVar4) {
        puVar8 = puVar4 + (longlong)(int)plVar12[1] * 3 + 2;
        do {
          if ((puVar8[-3] & 1) != 0) {
            FUN_144be6b30(puVar8[-3] & 0xfffffffffffffffe);
          }
          puVar1 = puVar8 + -5;
          puVar8 = puVar8 + -3;
        } while (puVar1 != puVar4);
      }
      *(undefined4 *)(plVar12 + 1) = 0;
      if ((-1 < *(int *)((longlong)plVar12 + 0xc)) && (*plVar12 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *plVar12 = 0;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 0x80000000;
      plVar12 = plVar12 + 3;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar13 = uVar15 * 0x18 + 0x18;
  uVar9 = uVar15;
  if (uVar13 <= local_res8) {
    uVar9 = uVar15 + 1;
    if (uVar13 <= local_res8 - 0x18) {
      uVar15 = (local_res8 - 0x18) + uVar15 * -0x18;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      uVar13 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar5,0);
      uVar9 = uVar9 + uVar15 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar13 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 0x18);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar13;
}



// FUNCTION 144c010c0 FUN_144c010c0 body=87 status=ok
// SIG undefined FUN_144c010c0(void)

undefined8 FUN_144c010c0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144c01120 FUN_144c01120 body=87 status=ok
// SIG undefined FUN_144c01120(void)

undefined8 FUN_144c01120(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144c01180 FUN_144c01180 body=757 status=ok
// SIG undefined FUN_144c01180(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144c01180(int *param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  ulonglong local_res8 [2];
  undefined1 local_1a8 [80];
  undefined1 local_158 [336];
  
  uVar2 = local_res8[0];
  piVar1 = (int *)param_2[1];
  iVar6 = 0;
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  piVar7 = (int *)*param_2 + 1;
  if (piVar1 < piVar7) {
    *param_2 = (ulonglong)piVar1;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
    piVar7 = piVar1;
  }
  else {
    iVar6 = *(int *)*param_2;
    local_res8[0] = CONCAT44(SUB84(uVar2,4),iVar6);
  }
  if ((char)param_2[3] != '\0') {
    *param_1 = -0x7ffbfe00;
LAB_144c01206:
    if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) {
      return;
    }
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar4 = FUN_144bdc640(local_1a8);
      local_res8[0] = 0;
      lVar5 = FUN_144bdc480(uVar4,"Error in input stream.",local_res8,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x841;
      FUN_144bdc690(local_1a8);
    }
    else {
      uVar4 = FUN_144bdc810(local_158,&DAT_14c787820,1);
      local_res8[0] = 0;
      lVar5 = FUN_144bdc480(uVar4,"Error in input stream.",local_res8,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x841;
      FUN_144bdc8a0(local_158);
    }
    return;
  }
  if (*param_1 < 0) goto LAB_144c01206;
  if (iVar6 == param_1[0x46]) {
    if (piVar1 == piVar7) {
      return;
    }
    if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) goto LAB_144c0145a;
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar4 = FUN_144bdc640(local_1a8);
      local_res8[0] = 0;
      lVar5 = FUN_144bdc480(uVar4,"Oversized type sequence section (TSEQ).",local_res8,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x843;
      *(undefined4 *)(lVar5 + 0x1c) = 0x6e8537db;
      FUN_144bdc690(local_1a8);
      goto LAB_144c0145a;
    }
    uVar4 = FUN_144bdc810(local_158,&DAT_14c787820,1);
    local_res8[1] = 0;
    lVar5 = FUN_144bdc480(uVar4,"Oversized type sequence section (TSEQ).",local_res8 + 1,0);
    *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar5 + 0x40) = 0x843;
    *(undefined4 *)(lVar5 + 0x1c) = 0x6e8537db;
  }
  else {
    if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) goto LAB_144c0145a;
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar4 = FUN_144bdc640(local_1a8);
      local_res8[0] = 0;
      lVar5 = FUN_144bdc480(uVar4,
                            "Sequence number incorrect. This reader didn\'t read the stream as it was written"
                            ,local_res8,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x842;
      FUN_144bdc690(local_1a8);
      goto LAB_144c0145a;
    }
    uVar4 = FUN_144bdc810(local_158,&DAT_14c787820,1);
    local_res8[0] = 0;
    lVar5 = FUN_144bdc480(uVar4,
                          "Sequence number incorrect. This reader didn\'t read the stream as it was written"
                          ,local_res8,0);
    *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar5 + 0x40) = 0x842;
  }
  FUN_144bdc8a0(local_158);
LAB_144c0145a:
  *param_1 = -0x7ffbfe00;
  return;
}



// FUNCTION 144c01480 FUN_144c01480 body=923 status=ok
// SIG undefined FUN_144c01480(void)

void FUN_144c01480(int *param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  ulonglong local_res8;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_208;
  code *local_200;
  int *local_1f8;
  code *local_1f0;
  int *local_1e8;
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  uVar2 = local_res8;
  iVar7 = 0;
  local_res10[0] = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  piVar1 = (int *)param_2[1];
  piVar6 = (int *)*param_2 + 1;
  if (piVar1 < piVar6) {
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
    piVar6 = piVar1;
  }
  else {
    local_res10[0] = *(int *)*param_2;
    local_res8._4_4_ = SUB84(uVar2,4);
    local_res8 = CONCAT44(local_res8._4_4_,local_res10[0]);
  }
  uVar2 = local_res8;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (piVar1 < piVar6 + 1) {
    *param_2 = (ulonglong)piVar1;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
  }
  else {
    iVar7 = *piVar6;
    local_res8._4_4_ = SUB84(uVar2,4);
    local_res8 = CONCAT44(local_res8._4_4_,iVar7);
    *param_2 = (ulonglong)(piVar6 + 1);
  }
  if ((char)param_2[3] != '\0') {
    *param_1 = -0x7ffbfe00;
LAB_144c01556:
    if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) {
      return;
    }
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar4 = FUN_144bdc640(&local_208);
      local_res8 = 0;
      lVar5 = FUN_144bdc480(uVar4,"Error in input stream.",&local_res8,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x84a;
      FUN_144bdc690(&local_208);
      return;
    }
    uVar4 = FUN_144bdc810(local_168,&DAT_14c787820,1);
    local_res8 = 0;
    lVar5 = FUN_144bdc480(uVar4,"Error in input stream.",&local_res8,0);
    *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar5 + 0x40) = 0x84a;
    FUN_144bdc8a0(local_168);
    return;
  }
  if (*param_1 < 0) goto LAB_144c01556;
  piVar6 = param_1 + 0x4c;
  if (local_res10[0] == *piVar6) {
    *piVar6 = iVar7;
    if (piVar1 == (int *)*param_2) {
      return;
    }
    if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) goto LAB_144c01802;
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar4 = FUN_144bdc640(local_1b8);
      local_res8 = 0;
      lVar5 = FUN_144bdc480(uVar4,"Oversized type rolling hash section (TSHA).",&local_res8,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x84d;
      *(undefined4 *)(lVar5 + 0x1c) = 0x6e8537db;
      FUN_144bdc690(local_1b8);
      goto LAB_144c01802;
    }
    uVar4 = FUN_144bdc810(local_168,&DAT_14c787820,1);
    local_res20 = 0;
    lVar5 = FUN_144bdc480(uVar4,"Oversized type rolling hash section (TSHA).",&local_res20,0);
    *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar5 + 0x40) = 0x84d;
    *(undefined4 *)(lVar5 + 0x1c) = 0x6e8537db;
  }
  else {
    if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) goto LAB_144c01802;
    cVar3 = FUN_144bdbf80();
    local_1f8 = piVar6;
    if (cVar3 == '\0') {
      uVar4 = FUN_144bdc640(local_1b8);
      local_208 = 2;
      local_200 = FUN_144f50a00;
      local_1f0 = FUN_144f50a00;
      local_1e8 = local_res10;
      lVar5 = FUN_144bdc480(uVar4,
                            "Read format has lost sync: invalid previous type rolling hash (expected 0x{:x8}, got 0x{:x8})."
                            ,&local_208,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x84b;
      FUN_144bdc690(local_1b8);
      goto LAB_144c01802;
    }
    uVar4 = FUN_144bdc810(local_168,&DAT_14c787820,1);
    local_208 = 2;
    local_200 = FUN_144f50a00;
    local_1f0 = FUN_144f50a00;
    local_1e8 = local_res10;
    lVar5 = FUN_144bdc480(uVar4,
                          "Read format has lost sync: invalid previous type rolling hash (expected 0x{:x8}, got 0x{:x8})."
                          ,&local_208,0);
    *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar5 + 0x40) = 0x84b;
  }
  FUN_144bdc8a0(local_168);
LAB_144c01802:
  *param_1 = -0x7ffbfe00;
  return;
}



// FUNCTION 144c01820 FUN_144c01820 body=718 status=ok
// SIG undefined FUN_144c01820(void)

void FUN_144c01820(undefined4 *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  if (param_1[0x52] == 2) {
    puVar1 = (undefined8 *)param_2[1];
    uVar5 = (longlong)puVar1 - (longlong)*param_2;
    if ((uVar5 & 7) == 0) {
      if (uVar5 == 0) {
        return;
      }
      iVar6 = param_1[0x50];
      puVar7 = (undefined8 *)*param_2;
      do {
        local_res8 = 0;
        puVar8 = puVar1;
        if (puVar7 + 1 <= puVar1) {
          local_res8 = *puVar7;
          puVar8 = puVar7 + 1;
        }
        uVar3 = local_res8;
        iVar6 = iVar6 + 1;
        if ((int)(param_1[0x51] & 0x7fffffff) < iVar6) {
          FUN_144c14100(param_1 + 0x4e,&PTR_vftable_14c6e47a0,(longlong)iVar6);
        }
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x4e) + (longlong)(int)param_1[0x50] * 8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = uVar3;
        }
        param_1[0x50] = iVar6;
        puVar7 = puVar8;
      } while (puVar1 != puVar8);
      return;
    }
    if ((DAT_14c787870 == '\0') && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144c019d5;
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      uVar3 = FUN_144bdc640(local_1b8);
      local_res8 = 0;
      lVar4 = FUN_144bdc480(uVar3,"Type compendium ID has the wrong size.",&local_res8,0);
      *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0x853;
      FUN_144bdc690(local_1b8);
      *param_1 = 0x80040200;
      return;
    }
    uVar3 = FUN_144bdc810(local_168,&DAT_14c787820,1);
    local_res8 = 0;
    lVar4 = FUN_144bdc480(uVar3,"Type compendium ID has the wrong size.",&local_res8,0);
    *(undefined8 *)(lVar4 + 0x40) = 0x853;
  }
  else {
    if ((DAT_14c787870 == '\0') && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144c019d5;
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      uVar3 = FUN_144bdc640(local_1b8);
      local_res8 = 0;
      lVar4 = FUN_144bdc480(uVar3,"Unexpected compendium ID section (TCID).",&local_res8,0);
      *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0x852;
      FUN_144bdc690(local_1b8);
      *param_1 = 0x80040200;
      return;
    }
    uVar3 = FUN_144bdc810(local_168,&DAT_14c787820,1);
    local_res8 = 0;
    lVar4 = FUN_144bdc480(uVar3,"Unexpected compendium ID section (TCID).",&local_res8,0);
    *(undefined8 *)(lVar4 + 0x40) = 0x852;
  }
  *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_144bdc8a0(local_168);
LAB_144c019d5:
  *param_1 = 0x80040200;
  return;
}



// FUNCTION 144c01af0 FUN_144c01af0 body=1657 status=ok
// SIG undefined FUN_144c01af0(void)

void FUN_144c01af0(int *param_1,ulonglong *param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  ulonglong local_res20;
  undefined8 local_228;
  code *local_220;
  ulonglong *local_218;
  code *local_210;
  int *local_208;
  undefined8 local_1d8;
  ulonglong local_1d0;
  int local_1c8 [2];
  undefined1 local_1c0 [80];
  undefined1 local_170 [344];
  
  uVar9 = 0;
  if (param_1[0x52] == 1) {
    puVar3 = (ulonglong *)param_2[1];
    puVar8 = (ulonglong *)*param_2;
    uVar10 = (longlong)puVar3 - (longlong)puVar8;
    if (7 < (longlong)uVar10) {
      if (puVar3 < puVar8 + 1) {
        *param_2 = (ulonglong)puVar3;
        *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
        local_res8 = uVar9;
      }
      else {
        local_res8 = *puVar8;
        *param_2 = (ulonglong)(puVar8 + 1);
      }
      if ((char)param_2[3] == '\0') {
        if (-1 < *param_1) {
          piVar1 = param_1 + 0x4e;
          if (0 < param_1[0x50]) {
            puVar8 = *(ulonglong **)piVar1;
            uVar10 = uVar9;
            do {
              if (*puVar8 == local_res8) {
                if ((int)uVar10 != -1) {
                  if (*param_3 == '\0') {
                    return;
                  }
                  plVar4 = (longlong *)*param_2;
                  if ((longlong)puVar3 - (longlong)plVar4 == 0x10) {
                    if ((*plVar4 == 0) && (plVar4[1] == 0)) {
                      iVar2 = param_1[6];
                      lVar7 = *(longlong *)(param_1 + 4);
                      *plVar4 = lVar7;
                      plVar4[1] = lVar7 + (longlong)iVar2 * 8;
                      return;
                    }
                    if ((DAT_14c787870 == '\0') && (cVar5 = FUN_144bdbf80(), cVar5 == '\0'))
                    goto LAB_144c020db;
                    cVar5 = FUN_144bdbf80();
                    if (cVar5 == '\0') {
                      uVar6 = FUN_144bdc640(local_1c0);
                      local_res20 = 0;
                      lVar7 = FUN_144bdc480(uVar6,"Buffer already inplace loaded",&local_res20,0);
                      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                      *(undefined8 *)(lVar7 + 0x40) = 0x86e;
                      FUN_144bdc690(local_1c0);
                      *param_1 = -0x7ffbfe00;
                      return;
                    }
                    uVar6 = FUN_144bdc810(local_170,&DAT_14c787820,1);
                    local_res20 = 0;
                    lVar7 = FUN_144bdc480(uVar6,"Buffer already inplace loaded",&local_res20,0);
                    *(undefined8 *)(lVar7 + 0x40) = 0x86e;
                  }
                  else {
                    if ((DAT_14c787870 == '\0') && (cVar5 = FUN_144bdbf80(), cVar5 == '\0'))
                    goto LAB_144c020db;
                    cVar5 = FUN_144bdbf80();
                    if (cVar5 == '\0') {
                      uVar6 = FUN_144bdc640(local_1c0);
                      local_res20 = 0;
                      lVar7 = FUN_144bdc480(uVar6,"COMPENDIUM_REFERENCE wrong size",&local_res20,0);
                      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                      *(undefined8 *)(lVar7 + 0x40) = 0x869;
                      FUN_144bdc690(local_1c0);
                      *param_1 = -0x7ffbfe00;
                      return;
                    }
                    uVar6 = FUN_144bdc810(local_170,&DAT_14c787820,1);
                    local_res20 = 0;
                    lVar7 = FUN_144bdc480(uVar6,"COMPENDIUM_REFERENCE wrong size",&local_res20,0);
                    *(undefined8 *)(lVar7 + 0x40) = 0x869;
                  }
                  goto LAB_144c020c7;
                }
                break;
              }
              uVar10 = (ulonglong)((int)uVar10 + 1);
              uVar9 = uVar9 + 1;
              puVar8 = puVar8 + 1;
            } while ((longlong)uVar9 < (longlong)param_1[0x50]);
          }
          if ((DAT_14c787870 == '\0') && (cVar5 = FUN_144bdbf80(), cVar5 == '\0')) {
            return;
          }
          cVar5 = FUN_144bdbf80();
          local_208 = piVar1;
          if (cVar5 == '\0') {
            uVar6 = FUN_144bdc640(local_1c0);
            local_228 = 2;
            local_220 = FUN_144f50b20;
            local_218 = &local_res8;
            local_210 = FUN_144c14430;
            lVar7 = FUN_144bdc480(uVar6,
                                  "Compendium with signature {} needed to load ({} are loaded)",
                                  &local_228,0);
            *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x863;
            FUN_144bdc690(local_1c0);
            return;
          }
          uVar6 = FUN_144bdc810(local_170,&DAT_14c787820,1);
          local_228 = 2;
          local_220 = FUN_144f50b20;
          local_218 = &local_res8;
          local_210 = FUN_144c14430;
          lVar7 = FUN_144bdc480(uVar6,"Compendium with signature {} needed to load ({} are loaded)",
                                &local_228,0);
          *(undefined8 *)(lVar7 + 0x40) = 0x863;
          goto LAB_144c0213d;
        }
      }
      else {
        *param_1 = -0x7ffbfe00;
      }
      if ((DAT_14c787870 == '\0') && (cVar5 = FUN_144bdbf80(), cVar5 == '\0')) {
        return;
      }
      cVar5 = FUN_144bdbf80();
      if (cVar5 == '\0') {
        uVar6 = FUN_144bdc640(local_1c0);
        local_res20 = 0;
        lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res20,0);
        *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x860;
        FUN_144bdc690(local_1c0);
        return;
      }
      uVar6 = FUN_144bdc810(local_170,&DAT_14c787820,1);
      local_res20 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res20,0);
      *(undefined8 *)(lVar7 + 0x40) = 0x860;
LAB_144c0213d:
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      FUN_144bdc8a0(local_170);
      return;
    }
    if ((DAT_14c787870 == '\0') && (cVar5 = FUN_144bdbf80(), cVar5 == '\0')) goto LAB_144c020db;
    cVar5 = FUN_144bdbf80();
    if (cVar5 == '\0') {
      local_1d8 = 8;
      local_res20 = uVar10;
      uVar6 = FUN_144bdc640(local_1c0);
      local_228 = 2;
      local_220 = FUN_144f50a90;
      local_218 = &local_res20;
      local_210 = FUN_144f50b20;
      local_208 = (int *)&local_1d8;
      lVar7 = FUN_144bdc480(uVar6,"TCRF chunk is the wrong size ({}, expected at least {})",
                            &local_228,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x85e;
      FUN_144bdc690(local_1c0);
      *param_1 = -0x7ffbfe00;
      return;
    }
    local_1c8[0] = 8;
    local_1c8[1] = 0;
    local_1d0 = uVar10;
    uVar6 = FUN_144bdc810(local_170,&DAT_14c787820,1);
    local_228 = 2;
    local_220 = FUN_144f50a90;
    local_218 = &local_1d0;
    local_210 = FUN_144f50b20;
    local_208 = local_1c8;
    lVar7 = FUN_144bdc480(uVar6,"TCRF chunk is the wrong size ({}, expected at least {})",&local_228
                          ,0);
    *(undefined8 *)(lVar7 + 0x40) = 0x85e;
  }
  else {
    if ((DAT_14c787870 == '\0') && (cVar5 = FUN_144bdbf80(), cVar5 == '\0')) goto LAB_144c020db;
    cVar5 = FUN_144bdbf80();
    if (cVar5 == '\0') {
      uVar6 = FUN_144bdc640(&local_228);
      local_res20 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Encountered compendium reference, but no compendium loaded",
                            &local_res20,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x85d;
      FUN_144bdc690(&local_228);
      *param_1 = -0x7ffbfe00;
      return;
    }
    uVar6 = FUN_144bdc810(local_170,&DAT_14c787820,1);
    local_res20 = 0;
    lVar7 = FUN_144bdc480(uVar6,"Encountered compendium reference, but no compendium loaded",
                          &local_res20,0);
    *(undefined8 *)(lVar7 + 0x40) = 0x85d;
  }
LAB_144c020c7:
  *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_144bdc8a0(local_170);
LAB_144c020db:
  *param_1 = -0x7ffbfe00;
  return;
}



// FUNCTION 144c02170 FUN_144c02170 body=2066 status=ok
// SIG undefined FUN_144c02170(void)

void FUN_144c02170(int *param_1,longlong param_2,char *param_3)

{
  short *psVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  code *local_240;
  undefined8 *local_238;
  undefined8 local_230;
  code *local_228;
  undefined8 *local_220;
  code *local_218;
  undefined8 *local_210;
  code *local_208;
  undefined8 *local_200;
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  
  iVar12 = 0;
  if (*param_3 != '\0') {
    return;
  }
  if (param_1[6] != param_1[0x22]) {
    if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar4 = FUN_144bdc640(&local_230);
        local_res18 = 0;
        lVar5 = FUN_144bdc480(uVar4,"Type bodies have not been read yet",&local_res18,0);
        *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar5 + 0x40) = 0x81b;
        FUN_144bdc690(&local_230);
        *param_1 = -0x7ffbfe00;
        return;
      }
      uVar4 = FUN_144bdc810(local_190,&DAT_14c787820,1);
      local_res18 = 0;
      lVar5 = FUN_144bdc480(uVar4,"Type bodies have not been read yet",&local_res18,0);
      *(undefined8 *)(lVar5 + 0x40) = 0x81b;
LAB_144c02880:
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      FUN_144bdc8a0(local_190);
    }
LAB_144c02894:
    *param_1 = -0x7ffbfe00;
    return;
  }
  uVar6 = FUN_144c07b70(param_2);
  if (0x7fffffff < uVar6) {
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (-1 < *param_1) {
      if ((int)uVar6 < 1) {
        return;
      }
      while( true ) {
        uVar7 = FUN_144c07b70(param_2);
        if (0x7fffffff < uVar7) {
          *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
        }
        uVar8 = FUN_144c07b70(param_2);
        if (0xffffffff < uVar8) {
          *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
        }
        local_res18 = CONCAT44(local_res18._4_4_,(int)uVar8);
        uVar8 = FUN_144c07b70(param_2);
        if (0xffff < uVar8) {
          *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
        }
        if (*(char *)(param_2 + 0x18) != '\0') break;
        if (*param_1 < 0) goto LAB_144c028a7;
        iVar11 = (int)uVar7;
        if ((iVar11 < 1) || (param_1[0x22] <= iVar11)) {
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0'))
          goto LAB_144c02894;
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar4 = FUN_144bdc640(local_1e0);
            local_258 = 0;
            lVar5 = FUN_144bdc480(uVar4,"Invalid context ID (out of bounds) when reading decl",
                                  &local_258,0);
            *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar5 + 0x40) = 0x827;
            FUN_144bdc690(local_1e0);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar4 = FUN_144bdc810(local_190,&DAT_14c787820,1);
          local_258 = 0;
          lVar5 = FUN_144bdc480(uVar4,"Invalid context ID (out of bounds) when reading decl",
                                &local_258,0);
          *(undefined8 *)(lVar5 + 0x40) = 0x827;
          goto LAB_144c02880;
        }
        local_res20 = *(undefined8 *)(*(longlong *)(param_1 + 4) + (longlong)iVar11 * 8);
        if (param_1[0x2a] <= (int)((uint)uVar8 & 0xffff)) {
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0'))
          goto LAB_144c02894;
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar4 = FUN_144bdc640(local_1e0);
            local_258 = 0;
            lVar5 = FUN_144bdc480(uVar4,"Invalid field name string ID (out of bounds)",&local_258,0)
            ;
            *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar5 + 0x40) = 0x82b;
            FUN_144bdc690(local_1e0);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar4 = FUN_144bdc810(local_190,&DAT_14c787820,1);
          local_258 = 0;
          lVar5 = FUN_144bdc480(uVar4,"Invalid field name string ID (out of bounds)",&local_258,0);
          *(undefined8 *)(lVar5 + 0x40) = 0x82b;
          goto LAB_144c02880;
        }
        local_250 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (uVar8 & 0xffff) * 8);
        puVar9 = (undefined8 *)FUN_144befde0(local_res20,0x800000);
        if ((puVar9 == (undefined8 *)0x0) || (psVar1 = (short *)*puVar9, psVar1 == (short *)0x0)) {
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0'))
          goto LAB_144c02894;
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar4 = FUN_144bdc640(local_1e0);
            local_248 = 1;
            local_240 = FUN_144bf0db0;
            local_238 = &local_res20;
            lVar5 = FUN_144bdc480(uVar4,"Cannot add decl to \'{}\' as it does not have Opt::DECLS",
                                  &local_248,0);
            *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar5 + 0x40) = 0x830;
            FUN_144bdc690(local_1e0);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar4 = FUN_144bdc810(local_190,&DAT_14c787820,1);
          local_248 = 1;
          local_240 = FUN_144bf0db0;
          local_238 = &local_res20;
          lVar5 = FUN_144bdc480(uVar4,"Cannot add decl to \'{}\' as it does not have Opt::DECLS",
                                &local_248,0);
          *(undefined8 *)(lVar5 + 0x40) = 0x830;
          goto LAB_144c02880;
        }
        if ((uint)((int)psVar1[1] + (int)*psVar1) <= (uint)local_res18) {
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0'))
          goto LAB_144c02894;
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar4 = FUN_144bdc640(local_1e0);
            local_258 = 0;
            lVar5 = FUN_144bdc480(uVar4,"Invalid decl index (out of bounds)",&local_258,0);
            *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar5 + 0x40) = 0x831;
            FUN_144bdc690(local_1e0);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar4 = FUN_144bdc810(local_190,&DAT_14c787820,1);
          local_258 = 0;
          lVar5 = FUN_144bdc480(uVar4,"Invalid decl index (out of bounds)",&local_258,0);
          *(undefined8 *)(lVar5 + 0x40) = 0x831;
          goto LAB_144c02880;
        }
        uVar4 = *(undefined8 *)(psVar1 + (longlong)(int)(uint)local_res18 * 4 + 4);
        local_258 = uVar4;
        pcVar10 = (char *)FUN_144bf0530(&local_258);
        uVar2 = local_250;
        if (*pcVar10 != '$') {
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0'))
          goto LAB_144c02894;
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar4 = FUN_144bdc640(local_1e0);
            local_230 = 3;
            local_228 = FUN_144f50a00;
            local_220 = &local_res18;
            local_218 = FUN_144bf0db0;
            local_210 = &local_res20;
            local_208 = FUN_144f50c70;
            local_200 = &local_250;
            lVar5 = FUN_144bdc480(uVar4,"Decl {} of \'{}\' (\'{}\') has already been read",
                                  &local_230,0);
            *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar5 + 0x40) = 0x834;
            FUN_144bdc690(local_1e0);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar4 = FUN_144bdc810(local_190,&DAT_14c787820,1);
          local_230 = 3;
          local_228 = FUN_144f50a00;
          local_220 = &local_res18;
          local_218 = FUN_144bf0db0;
          local_210 = &local_res20;
          local_208 = FUN_144f50c70;
          local_200 = &local_250;
          lVar5 = FUN_144bdc480(uVar4,"Decl {} of \'{}\' (\'{}\') has already been read",&local_230,
                                0);
          *(undefined8 *)(lVar5 + 0x40) = 0x834;
          goto LAB_144c02880;
        }
        puVar9 = (undefined8 *)FUN_144befed0(uVar4,0x10000);
        iVar12 = iVar12 + 1;
        *puVar9 = uVar2;
        if ((int)uVar6 <= iVar12) {
          return;
        }
      }
      *param_1 = -0x7ffbfe00;
LAB_144c028a7:
      if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) {
        return;
      }
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar4 = FUN_144bdc640(local_1e0);
        local_258 = 0;
        lVar5 = FUN_144bdc480(uVar4,"Error in input stream.",&local_258,0);
        *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar5 + 0x40) = 0x824;
        FUN_144bdc690(local_1e0);
        return;
      }
      uVar4 = FUN_144bdc810(local_190,&DAT_14c787820,1);
      local_258 = 0;
      lVar5 = FUN_144bdc480(uVar4,"Error in input stream.",&local_258,0);
      *(undefined8 *)(lVar5 + 0x40) = 0x824;
      goto LAB_144c02940;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) {
    return;
  }
  cVar3 = FUN_144bdbf80();
  if (cVar3 == '\0') {
    uVar4 = FUN_144bdc640(&local_230);
    local_res18 = 0;
    lVar5 = FUN_144bdc480(uVar4,"Error in input stream.",&local_res18,0);
    *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar5 + 0x40) = 0x81e;
    FUN_144bdc690(&local_230);
    return;
  }
  uVar4 = FUN_144bdc810(local_190,&DAT_14c787820,1);
  local_res18 = 0;
  lVar5 = FUN_144bdc480(uVar4,"Error in input stream.",&local_res18,0);
  *(undefined8 *)(lVar5 + 0x40) = 0x81e;
LAB_144c02940:
  *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_144bdc8a0(local_190);
  return;
}



// FUNCTION 144c02990 FUN_144c02990 body=1005 status=ok
// SIG undefined FUN_144c02990(void)

void FUN_144c02990(int *param_1,ulonglong *param_2,char *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulonglong local_res18;
  ulonglong local_res20;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined1 local_1d0 [72];
  undefined1 local_188 [336];
  
  iVar11 = 0;
  if (*param_3 != '\0') {
    local_1d8 = *(longlong *)(param_3 + 8);
    cVar4 = param_3[1];
    if (local_1d8 == 0) {
      FUN_144f699f0(&local_res18);
      local_1f8 = (undefined4)*param_2;
      uStack_1f4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_1f0 = (undefined4)param_2[1];
      uStack_1ec = *(undefined4 *)((longlong)param_2 + 0xc);
      local_1e8 = (undefined4)param_2[2];
      uStack_1e4 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_1e0 = (undefined4)param_2[3];
      uStack_1dc = *(undefined4 *)((longlong)param_2 + 0x1c);
      FUN_144c0fb50(param_1,&local_1f8,&local_res18,cVar4);
      FUN_144f69a20(&local_res18);
      return;
    }
    FUN_144f89a90(local_1d0,0xffffffffffffffff);
    local_1f8 = (undefined4)*param_2;
    uStack_1f4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_1f0 = (undefined4)param_2[1];
    uStack_1ec = *(undefined4 *)((longlong)param_2 + 0xc);
    local_1e8 = (undefined4)param_2[2];
    uStack_1e4 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_1e0 = (undefined4)param_2[3];
    uStack_1dc = *(undefined4 *)((longlong)param_2 + 0x1c);
    FUN_144c10200(param_1,&local_1f8,&local_1d8,cVar4);
    thunk_FUN_144f8a0b0(local_1d0);
    return;
  }
  if (param_1[0x52] == 2) {
    local_res20 = FUN_144c07b70(param_2);
    if (0x7fffffff < local_res20) {
      *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
    }
    if ((char)param_2[3] == '\0') {
      if (-1 < *param_1) {
        plVar1 = (longlong *)(param_1 + 0x60);
        iVar10 = (int)local_res20;
        if ((int)(param_1[99] & 0x7fffffffU) < iVar10) {
          FUN_144c13760(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar10);
        }
        if (iVar10 < 1) {
          return;
        }
        while( true ) {
          uVar8 = FUN_144c07b70(param_2);
          uVar3 = local_res18;
          if (0x7fffffff < uVar8) {
            *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
          }
          uVar9 = 0;
          local_res18 = local_res18 & 0xffffffff00000000;
          puVar2 = (undefined4 *)*param_2 + 1;
          if ((undefined4 *)param_2[1] < puVar2) {
            *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
            bVar5 = (byte)param_2[3] | 2;
            *param_2 = param_2[1];
            *(byte *)(param_2 + 3) = bVar5;
          }
          else {
            uVar9 = *(undefined4 *)*param_2;
            local_res18 = CONCAT44(SUB84(uVar3,4),uVar9);
            bVar5 = (byte)param_2[3];
            *param_2 = (ulonglong)puVar2;
          }
          if (bVar5 != 0) break;
          if (*param_1 < 0) goto LAB_144c02ca0;
          iVar10 = param_1[0x62] + 1;
          if ((int)(param_1[99] & 0x7fffffffU) < iVar10) {
            FUN_144c146f0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar10);
          }
          puVar2 = (undefined4 *)(*plVar1 + (longlong)param_1[0x62] * 8);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = (int)uVar8;
            puVar2[1] = uVar9;
          }
          iVar11 = iVar11 + 1;
          param_1[0x62] = iVar10;
          if ((int)local_res20 <= iVar11) {
            return;
          }
        }
        *param_1 = -0x7ffbfe00;
LAB_144c02ca0:
        if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) {
          return;
        }
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar6 = FUN_144bdc640(&local_1d8);
          local_res18 = 0;
          lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res18,0);
          *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x96b;
          FUN_144bdc690(&local_1d8);
          return;
        }
        uVar6 = FUN_144bdc810(local_188,&DAT_14c787820,1);
        local_res18 = 0;
        lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res18,0);
        *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x96b;
        FUN_144bdc8a0(local_188);
        return;
      }
    }
    else {
      *param_1 = -0x7ffbfe00;
    }
    if ((DAT_14c787870 != '\0') || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(&local_1d8);
        local_res18 = 0;
        lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res18,0);
        *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x963;
        FUN_144bdc690(&local_1d8);
        return;
      }
      uVar6 = FUN_144bdc810(local_188,&DAT_14c787820,1);
      local_res18 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res18,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x963;
      FUN_144bdc8a0(local_188);
      return;
    }
  }
  return;
}



// FUNCTION 144c02d80 FUN_144c02d80 body=174 status=ok
// SIG undefined FUN_144c02d80(void)

void FUN_144c02d80(undefined8 param_1,undefined4 *param_2,char *param_3)

{
  undefined1 local_res18 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (*param_3 != '\0') {
    if (*(longlong *)(param_3 + 8) == 0) {
      FUN_144f699f0(local_res18);
      local_48 = *param_2;
      uStack_44 = param_2[1];
      uStack_40 = param_2[2];
      uStack_3c = param_2[3];
      local_38 = param_2[4];
      uStack_34 = param_2[5];
      uStack_30 = param_2[6];
      uStack_2c = param_2[7];
      FUN_144c108e0(param_1,&local_48,local_res18);
      FUN_144f69a20(local_res18);
      return;
    }
    FUN_144f8a1d0(local_28);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    FUN_144c10ee0(param_1,&local_48,local_28);
    thunk_FUN_144f8a3c0(local_28);
  }
  return;
}



// FUNCTION 144c02e30 FUN_144c02e30 body=412 status=ok
// SIG undefined FUN_144c02e30(void)

void FUN_144c02e30(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res8;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  iVar1 = param_1[10];
  uVar7 = *(uint *)(param_2[2] + -0x14 + (longlong)*(int *)(param_2 + 3) * 0x18) & 0x3fffffff;
  iVar8 = iVar1 + -8 + uVar7;
  if ((int)(param_1[0xb] & 0x7fffffff) < iVar8) {
    FUN_14039ab22(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  param_1[10] = iVar8;
  lVar9 = (longlong)iVar1 + *(longlong *)(param_1 + 8);
  plVar2 = (longlong *)*param_2;
  lVar6 = (ulonglong)uVar7 - 8;
  if (plVar2[1] - *plVar2 < lVar6) {
    lVar4 = FUN_144f89560(plVar2,lVar9,lVar6);
    if (lVar4 != lVar6) {
      if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
        cVar3 = FUN_144bdbf80();
        if (cVar3 == '\0') {
          uVar5 = FUN_144bdc640(local_1c8);
          local_res8 = 0;
          lVar6 = FUN_144bdc480(uVar5,"Short read while reading DATA",&local_res8,0);
          *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar6 + 0x40) = 0x719;
          FUN_144bdc690(local_1c8);
          *param_1 = 0x80040200;
          return;
        }
        uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
        local_res8 = 0;
        lVar6 = FUN_144bdc480(uVar5,"Short read while reading DATA",&local_res8,0);
        *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0x719;
        FUN_144bdc8a0(local_178);
      }
      *param_1 = 0x80040200;
      return;
    }
  }
  else {
    FUN_144b3d470(lVar9);
    *plVar2 = *plVar2 + lVar6;
  }
  *(longlong *)(param_1 + 0x10) = lVar9;
  *(longlong *)(param_1 + 0x12) = lVar6 + lVar9;
  return;
}



// FUNCTION 144c02ff0 FUN_144c02ff0 body=477 status=ok
// SIG undefined FUN_144c02ff0(void)

void FUN_144c02ff0(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 local_res8;
  uint uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  uint uStack_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  iVar1 = param_1[0xe];
  uVar8 = *(uint *)(param_2[2] + -0x14 + (longlong)*(int *)(param_2 + 3) * 0x18) & 0x3fffffff;
  iVar6 = iVar1 + -8 + uVar8;
  if ((int)(param_1[0xf] & 0x7fffffff) < iVar6) {
    FUN_14039ab22(param_1 + 0xc,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  param_1[0xe] = iVar6;
  lVar7 = (longlong)iVar1 + *(longlong *)(param_1 + 0xc);
  plVar2 = (longlong *)*param_2;
  lVar9 = (ulonglong)uVar8 - 8;
  if (plVar2[1] - *plVar2 < lVar9) {
    lVar4 = FUN_144f89560(plVar2,lVar7,lVar9);
    if (lVar4 != lVar9) {
      if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
        cVar3 = FUN_144bdbf80();
        if (cVar3 == '\0') {
          uVar5 = FUN_144bdc640(local_1c8);
          local_res8 = 0;
          lVar7 = FUN_144bdc480(uVar5,"Short read while reading DATA",&local_res8,0);
          *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x727;
          FUN_144bdc690(local_1c8);
          *param_1 = 0x80040200;
          return;
        }
        uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
        local_res8 = 0;
        lVar7 = FUN_144bdc480(uVar5,"Short read while reading DATA",&local_res8,0);
        *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x727;
        FUN_144bdc8a0(local_178);
      }
      *param_1 = 0x80040200;
      return;
    }
  }
  else {
    FUN_144b3d470(lVar7);
    *plVar2 = *plVar2 + lVar9;
  }
  uStack_200 = uStack_200 & 0xffffff00;
  lStack_1e0 = lVar9 + lVar7;
  local_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1d0 = uStack_200;
  local_1e8 = lVar7;
  local_1d8 = lVar7;
  FUN_144c031d0(param_1,&local_1e8,&local_1f8);
  return;
}



// FUNCTION 144c031d0 FUN_144c031d0 body=1704 status=ok
// SIG undefined FUN_144c031d0(void)

void FUN_144c031d0(undefined4 *param_1,longlong *param_2,char *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 local_res10;
  char *local_res18;
  undefined8 local_res20;
  undefined8 local_218;
  code *local_210;
  undefined8 local_208;
  undefined1 local_200 [16];
  undefined1 local_1f0 [80];
  undefined1 local_1a0 [16];
  undefined1 local_190 [344];
  
  lVar9 = param_2[1];
  lVar10 = *param_2;
  uVar19 = 0;
  local_res18 = param_3;
  if ((ulonglong)(lVar9 - lVar10) % 0xc != 0) {
    if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
      cVar7 = FUN_144bdbf80();
      if (cVar7 == '\0') {
        uVar8 = FUN_144bdc640(local_1f0);
        local_res10 = 0;
        lVar9 = FUN_144bdc480(uVar8,"ITEMS section has the wrong size",&local_res10,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x9ed;
        *(undefined4 *)(lVar9 + 0x1c) = 0x66e1b3ab;
        FUN_144bdc690(local_1f0);
        *param_1 = 0x80040200;
        return;
      }
      uVar8 = FUN_144bdc810(local_190,&DAT_14c787820,1);
      local_res20 = 0;
      lVar9 = FUN_144bdc480(uVar8,"ITEMS section has the wrong size",&local_res20,0);
      *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x40) = 0x9ed;
      *(undefined4 *)(lVar9 + 0x1c) = 0x66e1b3ab;
      FUN_144bdc8a0(local_190);
      *param_1 = 0x80040200;
      return;
    }
LAB_144c03675:
    *param_1 = 0x80040200;
    return;
  }
  lVar5 = param_2[2];
  *(longlong *)(param_1 + 0x14) = lVar5;
  *(longlong *)(param_1 + 0x16) = lVar5 + (longlong)(int)((ulonglong)(lVar9 - lVar10) / 0xc) * 0xc;
  if (param_1[0x1a] != 0) {
    param_1[0x1a] = 0;
    if (((*(longlong *)(param_1 + 0x1c) != 0) && (*(int *)(*(longlong *)(param_1 + 0x1c) + 4) != -2)
        ) && (uVar13 = uVar19, uVar15 = uVar19, 0 < param_1[0x1e] + 1)) {
      do {
        uVar14 = (int)uVar15 + 1;
        *(undefined4 *)(uVar13 + 4 + *(longlong *)(param_1 + 0x1c)) = 0xffffffff;
        uVar13 = uVar13 + 8;
        uVar15 = (ulonglong)uVar14;
      } while ((int)uVar14 < param_1[0x1e] + 1);
    }
  }
  if (*(char *)((longlong)param_1 + 0x299) == '\0') {
    lVar9 = *(longlong *)(param_1 + 0x14);
    iVar3 = (int)(*(longlong *)(param_1 + 0x16) - lVar9 >> 0x3f);
    iVar18 = (int)((*(longlong *)(param_1 + 0x16) - lVar9) / 0xc) + iVar3;
    uVar13 = uVar19;
    if (iVar18 != iVar3 && -1 < iVar18 - iVar3) {
      do {
        iVar18 = (int)uVar13;
        local_res10 = CONCAT44(local_res10._4_4_,iVar18);
        FUN_144c086f0(param_1 + 0x18,lVar9 + ((longlong)iVar18 * 3 + 1) * 4,&local_res10);
        lVar9 = *(longlong *)(param_1 + 0x14);
        uVar13 = (ulonglong)(iVar18 + 1U);
      } while ((int)(iVar18 + 1U) < (int)((*(longlong *)(param_1 + 0x16) - lVar9) / 0xc));
    }
  }
  if ((*(char *)(param_1 + 0xa6) != '\0') && (0 < (int)param_1[0x22])) {
    iVar18 = 1;
    do {
      lVar9 = *(longlong *)(uVar19 + *(longlong *)(param_1 + 0x20));
      if (lVar9 != 0) {
        uVar8 = FUN_144bef0c0(lVar9,local_200);
        lVar10 = FUN_144beebc0(uVar8);
        if (lVar10 == 0) {
          if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
            cVar7 = FUN_144bdbf80();
            if (cVar7 == '\0') {
              uVar8 = FUN_144bef0c0(lVar9,local_200);
              uVar11 = FUN_144bdc640(local_1f0,&DAT_14c787820,1);
              local_218 = 1;
              local_210 = FUN_144c14800;
              local_208 = uVar8;
              lVar9 = FUN_144bdc480(uVar11,"Native type {} not found ",&local_218,0);
              *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar9 + 0x40) = 0xa72;
              FUN_144bdc690(local_1f0);
              *param_1 = 0x80040200;
              return;
            }
            uVar8 = FUN_144bef0c0(lVar9,local_1a0);
            uVar11 = FUN_144bdc810(local_190,&DAT_14c787820,1);
            local_218 = 1;
            local_210 = FUN_144c14800;
            local_208 = uVar8;
            lVar9 = FUN_144bdc480(uVar11,"Native type {} not found ",&local_218,0);
            *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar9 + 0x40) = 0xa72;
            FUN_144bdc8a0(local_190);
          }
          goto LAB_144c03675;
        }
        if ((int)param_1[6] <= iVar18 + -1) {
          if ((int)(param_1[7] & 0x7fffffff) < iVar18) {
            FUN_144c13a80(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar18);
          }
          iVar3 = param_1[6];
          if (iVar3 < iVar18) {
            param_1[6] = iVar18;
            uVar13 = (ulonglong)(uint)(iVar18 - iVar3);
            puVar16 = (undefined8 *)(*(longlong *)(param_1 + 4) + (longlong)iVar3 * 8);
            if (0 < iVar18 - iVar3) {
              do {
                if (puVar16 != (undefined8 *)0x0) {
                  *puVar16 = 0;
                }
                uVar13 = uVar13 - 1;
                puVar16 = puVar16 + 1;
              } while (uVar13 != 0);
            }
          }
          else if (iVar18 < iVar3) {
            param_1[6] = iVar18;
          }
        }
        *(longlong *)(uVar19 + *(longlong *)(param_1 + 4)) = lVar10;
      }
      uVar19 = uVar19 + 8;
      bVar6 = iVar18 < (int)param_1[0x22];
      param_3 = local_res18;
      iVar18 = iVar18 + 1;
    } while (bVar6);
  }
  iVar18 = 1;
  if (*param_3 == '\0') {
    return;
  }
  if (param_3[1] != '\0') {
    return;
  }
  FUN_144f699f0(&local_res20);
  iVar3 = param_1[6];
  plVar1 = (longlong *)(param_1 + 0x7e);
  if ((int)(param_1[0x81] & 0x7fffffff) < iVar3) {
    FUN_144c13ee0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  iVar4 = param_1[0x80];
  if (iVar4 < iVar3) {
    lVar9 = *plVar1;
    param_1[0x80] = iVar3;
    for (puVar17 = (undefined4 *)(lVar9 + (longlong)iVar4 * 8);
        puVar17 != (undefined4 *)(lVar9 + (longlong)iVar3 * 8); puVar17 = puVar17 + 2) {
      if (puVar17 != (undefined4 *)0x0) {
        *puVar17 = 0xfffffffe;
        puVar17[1] = 0;
      }
    }
  }
  else if (iVar3 < iVar4) {
    param_1[0x80] = iVar3;
  }
  if (param_1[0x80] == 0) {
    if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
      cVar7 = FUN_144bdbf80();
      if (cVar7 == '\0') {
        uVar8 = FUN_144bdc640(local_1f0);
        local_res10 = 0;
        lVar9 = FUN_144bdc480(uVar8,
                              "No types found. Was this input created for inplace loading? (Save.withInplaceLoad())"
                              ,&local_res10,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0xa81;
        FUN_144bdc690(local_1f0);
        *param_1 = 0x80040200;
        goto LAB_144c03851;
      }
      uVar8 = FUN_144bdc810(local_190,&DAT_14c787820,1);
      local_res10 = 0;
      lVar9 = FUN_144bdc480(uVar8,
                            "No types found. Was this input created for inplace loading? (Save.withInplaceLoad())"
                            ,&local_res10,0);
      *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x40) = 0xa81;
      FUN_144bdc8a0(local_190);
    }
    *param_1 = 0x80040200;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x14);
    if (1 < (int)((*(longlong *)(param_1 + 0x16) - lVar9) / 0xc)) {
      lVar10 = 0xc;
      do {
        uVar14 = *(uint *)(lVar10 + lVar9) & 0xf0000000;
        if (((uVar14 + 0xf0000000 & 0xcfffffff) == 0) && (uVar14 != 0x40000000)) {
          uVar13 = (ulonglong)(*(uint *)(lVar10 + lVar9) & 0xffffff);
          puVar2 = (ulonglong *)(*plVar1 + uVar13 * 8);
          uVar14 = *(uint *)(*plVar1 + uVar13 * 8);
          uVar19 = (ulonglong)uVar14;
          if ((int)uVar14 < -1) {
            puVar12 = (ulonglong *)
                      FUN_144f69a40(&local_res20,local_200,
                                    *(undefined8 *)(*(longlong *)(param_1 + 4) + uVar13 * 8));
            uVar19 = *puVar12;
            *puVar2 = uVar19;
          }
          if (-1 < (int)uVar19) {
            FUN_144f69a60(&local_res20,&local_res10,puVar2,
                          (longlong)*(int *)(lVar10 + lVar9 + 4) + *(longlong *)(param_1 + 0x10),
                          *(undefined4 *)(lVar10 + lVar9 + 8));
          }
        }
        lVar9 = *(longlong *)(param_1 + 0x14);
        iVar18 = iVar18 + 1;
        lVar10 = lVar10 + 0xc;
      } while (iVar18 < (int)((*(longlong *)(param_1 + 0x16) - lVar9) / 0xc));
    }
  }
LAB_144c03851:
  FUN_144f69a20(&local_res20);
  return;
}



// FUNCTION 144c03880 FUN_144c03880 body=1344 status=ok
// SIG undefined FUN_144c03880(void)

void FUN_144c03880(undefined4 *param_1,undefined8 *param_2,char *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined *local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined4 *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [8];
  undefined1 local_190 [344];
  
  if (*param_3 == '\0') {
    local_1b8 = *param_2;
    uStack_1b0 = param_2[1];
    local_1d8 = param_1 + 2;
    local_1a8 = *(undefined4 *)(param_2 + 2);
    uStack_1a4 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_1a0 = *(undefined4 *)(param_2 + 3);
    uStack_19c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_1f0 = *(longlong *)(param_1 + 4);
    local_200 = param_1[0x10];
    uStack_1fc = param_1[0x11];
    uStack_1f8 = param_1[0x12];
    uStack_1f4 = param_1[0x13];
    local_1e8 = local_1f0 + (longlong)(int)param_1[6] * 8;
    local_208 = &DAT_14c787820;
    local_1e0 = (*(longlong *)(param_1 + 0x16) - *(longlong *)(param_1 + 0x14)) / 0xc;
    piVar7 = (int *)FUN_144c12680(&local_208,&local_res18,&local_1b8);
    if (-1 < *piVar7) {
      return;
    }
    if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) goto LAB_144c03dab;
    cVar4 = FUN_144bdbf80();
    if (cVar4 == '\0') {
      uVar5 = FUN_144bdc640(&local_208);
      local_res18 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Failed to read the PATCH_DATA section",&local_res18,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0xb16;
      FUN_144bdc690(&local_208);
      goto LAB_144c03dab;
    }
    uVar5 = FUN_144bdc810(local_190,&DAT_14c787820,1);
    local_res18 = 0;
    lVar6 = FUN_144bdc480(uVar5,"Failed to read the PATCH_DATA section",&local_res18,0);
    *(undefined8 *)(lVar6 + 0x40) = 0xb16;
  }
  else if (param_3[1] == '\0') {
    local_1d0 = *(longlong *)(param_1 + 0x7a);
    local_1d8 = param_1 + 2;
    local_1b8 = *param_2;
    uStack_1b0 = param_2[1];
    local_1f0 = *(longlong *)(param_1 + 4);
    local_1a8 = *(undefined4 *)(param_2 + 2);
    uStack_1a4 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_1a0 = *(undefined4 *)(param_2 + 3);
    uStack_19c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_200 = param_1[0x10];
    uStack_1fc = param_1[0x11];
    uStack_1f8 = param_1[0x12];
    uStack_1f4 = param_1[0x13];
    local_1e8 = local_1f0 + (longlong)(int)param_1[6] * 8;
    local_208 = &DAT_14c787820;
    local_1e0 = (*(longlong *)(param_1 + 0x16) - *(longlong *)(param_1 + 0x14)) / 0xc;
    local_1c8 = (int)param_1[0x7c] + local_1d0;
    piVar7 = (int *)FUN_144c114e0(&local_208,&local_res18,&local_1b8);
    if (-1 < *piVar7) {
      FUN_144f699f0(local_res20);
      iVar13 = param_1[6];
      plVar1 = (longlong *)(param_1 + 0x82);
      if ((int)(param_1[0x85] & 0x7fffffff) < iVar13) {
        FUN_144c13ff0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar13);
      }
      iVar3 = param_1[0x84];
      if (iVar3 < iVar13) {
        lVar6 = *plVar1;
        param_1[0x84] = iVar13;
        for (puVar11 = (undefined4 *)(lVar6 + (longlong)iVar3 * 8);
            puVar11 != (undefined4 *)(lVar6 + (longlong)iVar13 * 8); puVar11 = puVar11 + 2) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = 0xfffffffe;
            puVar11[1] = 0;
          }
        }
      }
      else if (iVar13 < iVar3) {
        param_1[0x84] = iVar13;
      }
      lVar6 = *(longlong *)(param_1 + 0x14);
      iVar13 = 1;
      if (1 < (int)((*(longlong *)(param_1 + 0x16) - lVar6) / 0xc)) {
        lVar14 = 0xc;
        do {
          uVar10 = *(uint *)(lVar14 + lVar6) & 0xf0000000;
          if (((uVar10 + 0xf0000000 & 0xcfffffff) == 0) && (uVar10 != 0x40000000)) {
            lVar2 = (ulonglong)(*(uint *)(lVar14 + lVar6) & 0xffffff) * 8;
            puVar12 = (ulonglong *)(*plVar1 + lVar2);
            uVar8 = (ulonglong)(uint)*puVar12;
            if ((int)(uint)*puVar12 < -1) {
              puVar9 = (ulonglong *)
                       FUN_144f69b00(local_res20,local_198,
                                     *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 4)));
              uVar8 = *puVar9;
              *puVar12 = uVar8;
            }
            if (-1 < (int)uVar8) {
              FUN_144f69c90(local_res20,&local_res18,puVar12,
                            (longlong)*(int *)(lVar14 + lVar6 + 4) + *(longlong *)(param_1 + 0x10),
                            *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 4)),
                            *(undefined4 *)(lVar14 + lVar6 + 8));
            }
          }
          lVar6 = *(longlong *)(param_1 + 0x14);
          iVar13 = iVar13 + 1;
          lVar14 = lVar14 + 0xc;
        } while (iVar13 < (int)((*(longlong *)(param_1 + 0x16) - lVar6) / 0xc));
      }
      FUN_144f69a20(local_res20);
      return;
    }
    if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) goto LAB_144c03dab;
    cVar4 = FUN_144bdbf80();
    if (cVar4 == '\0') {
      uVar5 = FUN_144bdc640(&local_208);
      local_res18 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Failed to read the PATCH_DATA section",&local_res18,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0xae4;
      FUN_144bdc690(&local_208);
      goto LAB_144c03dab;
    }
    uVar5 = FUN_144bdc810(local_190,&DAT_14c787820,1);
    local_res18 = 0;
    lVar6 = FUN_144bdc480(uVar5,"Failed to read the PATCH_DATA section",&local_res18,0);
    *(undefined8 *)(lVar6 + 0x40) = 0xae4;
  }
  else {
    if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) goto LAB_144c03dab;
    cVar4 = FUN_144bdbf80();
    if (cVar4 == '\0') {
      uVar5 = FUN_144bdc640(&local_208);
      local_res18 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Format is readonly but buffer contains a PATCH_DATA section",
                            &local_res18,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0xa9c;
      FUN_144bdc690(&local_208);
      goto LAB_144c03dab;
    }
    uVar5 = FUN_144bdc810(local_190,&DAT_14c787820,1);
    local_res18 = 0;
    lVar6 = FUN_144bdc480(uVar5,"Format is readonly but buffer contains a PATCH_DATA section",
                          &local_res18,0);
    *(undefined8 *)(lVar6 + 0x40) = 0xa9c;
  }
  *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_144bdc8a0(local_190);
LAB_144c03dab:
  *param_1 = 0x80040200;
  return;
}



// FUNCTION 144c03dd0 FUN_144c03dd0 body=465 status=ok
// SIG undefined FUN_144c03dd0(void)

void FUN_144c03dd0(longlong *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined1 local_1a8 [80];
  undefined1 local_158 [336];
  
  puVar1 = (undefined8 *)param_1[1];
  puVar5 = puVar1;
  if ((undefined8 *)(*param_1 + 8) <= puVar1) {
    puVar5 = (undefined8 *)(*param_1 + 8);
  }
  if ((longlong)puVar1 - (longlong)puVar5 == 0x10) {
    *(undefined8 *)(param_2 + 2) = *puVar5;
    lVar4 = puVar5[1];
    *(longlong *)(param_2 + 4) = lVar4;
    if (*(longlong *)(param_2 + 2) != lVar4) {
      return;
    }
    if ((DAT_14c787870 < 2) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144c03f8a;
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      uVar3 = FUN_144bdc640(local_1a8);
      local_res8 = 0;
      lVar4 = FUN_144bdc480(uVar3,
                            "COMPENDIUM_REFERENCE was not initialized. Was this buffer inplace loaded?"
                            ,&local_res8,0);
      *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0xb2e;
      FUN_144bdc690(local_1a8);
      goto LAB_144c03f8a;
    }
    uVar3 = FUN_144bdc810(local_158,&DAT_14c787820,2);
    local_res8 = 0;
    lVar4 = FUN_144bdc480(uVar3,
                          "COMPENDIUM_REFERENCE was not initialized. Was this buffer inplace loaded?"
                          ,&local_res8,0);
    *(undefined8 *)(lVar4 + 0x40) = 0xb2e;
  }
  else {
    if ((DAT_14c787870 < 2) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144c03f8a;
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      uVar3 = FUN_144bdc640(local_1a8);
      local_res8 = 0;
      lVar4 = FUN_144bdc480(uVar3,"Invalid COMPENDIUM_REFERENCE",&local_res8,0);
      *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0xb26;
      FUN_144bdc690(local_1a8);
      goto LAB_144c03f8a;
    }
    uVar3 = FUN_144bdc810(local_158,&DAT_14c787820,2);
    local_res8 = 0;
    lVar4 = FUN_144bdc480(uVar3,"Invalid COMPENDIUM_REFERENCE",&local_res8,0);
    *(undefined8 *)(lVar4 + 0x40) = 0xb26;
  }
  *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_144bdc8a0(local_158);
LAB_144c03f8a:
  *param_2 = 0x80040200;
  return;
}



// FUNCTION 144c03fd0 FUN_144c03fd0 body=210 status=ok
// SIG undefined FUN_144c03fd0(void)

void FUN_144c03fd0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)((*(longlong *)(param_1 + 8) - (longlong)*(uint **)(param_1 + 0x10)) / 0xc)
  ;
  if (1 < lVar7) {
    lVar7 = lVar7 + -1;
    puVar5 = *(uint **)(param_1 + 0x10);
    do {
      uVar1 = puVar5[3];
      if ((uVar1 & 0xf0000000) == 0x10000000) {
        uVar2 = puVar5[4];
        lVar3 = *(longlong *)(param_2 + 0x18);
        uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 8) + (ulonglong)(uVar1 & 0xffffff) * 8);
        puVar6 = (undefined8 *)FUN_144befe50(uVar4,0x100);
        if ((puVar6 != (undefined8 *)0x0) && ((code *)*puVar6 != (code *)0x0)) {
          (*(code *)*puVar6)((ulonglong)uVar2 + lVar3,uVar4,1);
        }
      }
      lVar7 = lVar7 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144c040b0 FUN_144c040b0 body=728 status=ok
// SIG undefined FUN_144c040b0(void)

void FUN_144c040b0(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined8 local_res8;
  undefined1 local_1e8 [8];
  char *local_1e0;
  char *pcStack_1d8;
  char local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  local_1d0 = '\0';
  local_1e0 = (char *)0x0;
  pcStack_1d8 = (char *)0x0;
  piVar4 = (int *)FUN_144c07bd0(&local_res8,local_1e8,param_2,param_1 + 0x34);
  pcVar2 = local_1e0;
  if (*piVar4 < 0) {
    if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar5 = FUN_144bdc640(local_1c8);
        local_res8 = 0;
        lVar6 = FUN_144bdc480(uVar5,"Failed to read string section",&local_res8,0);
        *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0x49d;
        FUN_144bdc690(local_1c8);
        *param_1 = -0x7ffbfe00;
        return;
      }
      uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
      local_res8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Failed to read string section",&local_res8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x49d;
      FUN_144bdc8a0(local_178);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  pcVar8 = pcStack_1d8;
  for (pcVar7 = pcStack_1d8; pcVar7 != pcVar2; pcVar7 = pcVar7 + 1) {
    if (*pcVar7 == '\0') {
      iVar9 = param_1[0x26] + 1;
      if ((int)(param_1[0x27] & 0x7fffffffU) < iVar9) {
        FUN_144be3180(param_1 + 0x24,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x24) + (longlong)param_1[0x26] * 8);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = (longlong)pcVar8;
      }
      pcVar8 = pcVar7 + 1;
      param_1[0x26] = iVar9;
    }
  }
  if (local_1d0 == '\0') {
    if (-1 < *param_1) {
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar5 = FUN_144bdc640(local_1c8);
      local_res8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Error in input stream.",&local_res8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x49f;
      FUN_144bdc690(local_1c8);
      return;
    }
    uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
    local_res8 = 0;
    lVar6 = FUN_144bdc480(uVar5,"Error in input stream.",&local_res8,0);
    *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar6 + 0x40) = 0x49f;
    FUN_144bdc8a0(local_178);
  }
  return;
}



// FUNCTION 144c04390 FUN_144c04390 body=512 status=ok
// SIG undefined FUN_144c04390(void)

void FUN_144c04390(int *param_1,longlong *param_2,char *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res18 [2];
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  plVar1 = (longlong *)(param_1 + 0x24);
  if (*param_3 == '\0') {
    lVar9 = param_2[1] - *param_2;
    pcVar5 = (char *)(**(code **)(*(longlong *)(param_1 + 0x34) + 8))(param_1 + 0x34,lVar9 + 8);
    FUN_144b3d470(pcVar5,param_2[2],lVar9);
    pcVar3 = pcVar5 + lVar9;
    pcVar7 = pcVar5;
    for (; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x26] + 1;
        if ((int)(param_1[0x27] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x26] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x26] = iVar8;
      }
    }
    if ((*param_1 < 0) && ((DAT_14c787870 != '\0' || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc690(local_1c8);
      }
      else {
        uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc8a0(local_178);
      }
    }
  }
  else {
    pcVar3 = (char *)param_2[1];
    pcVar7 = (char *)param_2[2];
    for (pcVar5 = pcVar7; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x26] + 1;
        if ((int)(param_1[0x27] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x26] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x26] = iVar8;
      }
    }
  }
  return;
}



// FUNCTION 144c04590 FUN_144c04590 body=728 status=ok
// SIG undefined FUN_144c04590(void)

void FUN_144c04590(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined8 local_res8;
  undefined1 local_1e8 [8];
  char *local_1e0;
  char *pcStack_1d8;
  char local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  local_1d0 = '\0';
  local_1e0 = (char *)0x0;
  pcStack_1d8 = (char *)0x0;
  piVar4 = (int *)FUN_144c07bd0(&local_res8,local_1e8,param_2,param_1 + 0x34);
  pcVar2 = local_1e0;
  if (*piVar4 < 0) {
    if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar5 = FUN_144bdc640(local_1c8);
        local_res8 = 0;
        lVar6 = FUN_144bdc480(uVar5,"Failed to read string section",&local_res8,0);
        *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0x49d;
        FUN_144bdc690(local_1c8);
        *param_1 = -0x7ffbfe00;
        return;
      }
      uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
      local_res8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Failed to read string section",&local_res8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x49d;
      FUN_144bdc8a0(local_178);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  pcVar8 = pcStack_1d8;
  for (pcVar7 = pcStack_1d8; pcVar7 != pcVar2; pcVar7 = pcVar7 + 1) {
    if (*pcVar7 == '\0') {
      iVar9 = param_1[0x2a] + 1;
      if ((int)(param_1[0x2b] & 0x7fffffffU) < iVar9) {
        FUN_144be3180(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)param_1[0x2a] * 8);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = (longlong)pcVar8;
      }
      pcVar8 = pcVar7 + 1;
      param_1[0x2a] = iVar9;
    }
  }
  if (local_1d0 == '\0') {
    if (-1 < *param_1) {
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar5 = FUN_144bdc640(local_1c8);
      local_res8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Error in input stream.",&local_res8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x49f;
      FUN_144bdc690(local_1c8);
      return;
    }
    uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
    local_res8 = 0;
    lVar6 = FUN_144bdc480(uVar5,"Error in input stream.",&local_res8,0);
    *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar6 + 0x40) = 0x49f;
    FUN_144bdc8a0(local_178);
  }
  return;
}



// FUNCTION 144c04870 FUN_144c04870 body=512 status=ok
// SIG undefined FUN_144c04870(void)

void FUN_144c04870(int *param_1,longlong *param_2,char *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res18 [2];
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*param_3 == '\0') {
    lVar9 = param_2[1] - *param_2;
    pcVar5 = (char *)(**(code **)(*(longlong *)(param_1 + 0x34) + 8))(param_1 + 0x34,lVar9 + 8);
    FUN_144b3d470(pcVar5,param_2[2],lVar9);
    pcVar3 = pcVar5 + lVar9;
    pcVar7 = pcVar5;
    for (; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x2a] + 1;
        if ((int)(param_1[0x2b] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x2a] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x2a] = iVar8;
      }
    }
    if ((*param_1 < 0) && ((DAT_14c787870 != '\0' || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc690(local_1c8);
      }
      else {
        uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc8a0(local_178);
      }
    }
  }
  else {
    pcVar3 = (char *)param_2[1];
    pcVar7 = (char *)param_2[2];
    for (pcVar5 = pcVar7; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x2a] + 1;
        if ((int)(param_1[0x2b] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x2a] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x2a] = iVar8;
      }
    }
  }
  return;
}



// FUNCTION 144c04a70 FUN_144c04a70 body=728 status=ok
// SIG undefined FUN_144c04a70(void)

void FUN_144c04a70(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined8 local_res8;
  undefined1 local_1e8 [8];
  char *local_1e0;
  char *pcStack_1d8;
  char local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  local_1d0 = '\0';
  local_1e0 = (char *)0x0;
  pcStack_1d8 = (char *)0x0;
  piVar4 = (int *)FUN_144c07bd0(&local_res8,local_1e8,param_2,param_1 + 0x34);
  pcVar2 = local_1e0;
  if (*piVar4 < 0) {
    if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar5 = FUN_144bdc640(local_1c8);
        local_res8 = 0;
        lVar6 = FUN_144bdc480(uVar5,"Failed to read string section",&local_res8,0);
        *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0x49d;
        FUN_144bdc690(local_1c8);
        *param_1 = -0x7ffbfe00;
        return;
      }
      uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
      local_res8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Failed to read string section",&local_res8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x49d;
      FUN_144bdc8a0(local_178);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  pcVar8 = pcStack_1d8;
  for (pcVar7 = pcStack_1d8; pcVar7 != pcVar2; pcVar7 = pcVar7 + 1) {
    if (*pcVar7 == '\0') {
      iVar9 = param_1[0x2e] + 1;
      if ((int)(param_1[0x2f] & 0x7fffffffU) < iVar9) {
        FUN_144be3180(param_1 + 0x2c,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2c) + (longlong)param_1[0x2e] * 8);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = (longlong)pcVar8;
      }
      pcVar8 = pcVar7 + 1;
      param_1[0x2e] = iVar9;
    }
  }
  if (local_1d0 == '\0') {
    if (-1 < *param_1) {
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar5 = FUN_144bdc640(local_1c8);
      local_res8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Error in input stream.",&local_res8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x49f;
      FUN_144bdc690(local_1c8);
      return;
    }
    uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
    local_res8 = 0;
    lVar6 = FUN_144bdc480(uVar5,"Error in input stream.",&local_res8,0);
    *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar6 + 0x40) = 0x49f;
    FUN_144bdc8a0(local_178);
  }
  return;
}



// FUNCTION 144c04d50 FUN_144c04d50 body=512 status=ok
// SIG undefined FUN_144c04d50(void)

void FUN_144c04d50(int *param_1,longlong *param_2,char *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res18 [2];
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  plVar1 = (longlong *)(param_1 + 0x2c);
  if (*param_3 == '\0') {
    lVar9 = param_2[1] - *param_2;
    pcVar5 = (char *)(**(code **)(*(longlong *)(param_1 + 0x34) + 8))(param_1 + 0x34,lVar9 + 8);
    FUN_144b3d470(pcVar5,param_2[2],lVar9);
    pcVar3 = pcVar5 + lVar9;
    pcVar7 = pcVar5;
    for (; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x2e] + 1;
        if ((int)(param_1[0x2f] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x2e] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x2e] = iVar8;
      }
    }
    if ((*param_1 < 0) && ((DAT_14c787870 != '\0' || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc690(local_1c8);
      }
      else {
        uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc8a0(local_178);
      }
    }
  }
  else {
    pcVar3 = (char *)param_2[1];
    pcVar7 = (char *)param_2[2];
    for (pcVar5 = pcVar7; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x2e] + 1;
        if ((int)(param_1[0x2f] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x2e] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x2e] = iVar8;
      }
    }
  }
  return;
}



// FUNCTION 144c04f50 FUN_144c04f50 body=56 status=ok
// SIG undefined FUN_144c04f50(void)

void FUN_144c04f50(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
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
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_144c0ce50(local_18,&local_28,&local_38,1);
  return;
}



// FUNCTION 144c04f90 FUN_144c04f90 body=136 status=ok
// SIG undefined FUN_144c04f90(void)

void FUN_144c04f90(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,1);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c0ce50(param_1,&local_58,&local_68,1);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c05020 FUN_144c05020 body=665 status=ok
// SIG undefined FUN_144c05020(void)

void FUN_144c05020(int *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined8 local_res8;
  ulonglong local_1f8 [2];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  ulonglong *local_1a8;
  longlong local_1a0;
  undefined1 local_178 [336];
  
  if (param_1[0x52] == 2) {
    plVar1 = (longlong *)(param_1 + 0x5c);
    uVar7 = *(uint *)(param_2[2] + -0x14 + (longlong)*(int *)(param_2 + 3) * 0x18) & 0x3fffffff;
    iVar8 = uVar7 - 8;
    lVar6 = (ulonglong)uVar7 - 8;
    if ((int)(param_1[0x5f] & 0x7fffffffU) < iVar8) {
      FUN_14039ab22(plVar1,&PTR_vftable_14c6e47a0,lVar6);
    }
    if ((param_1[0x5e] < iVar8) || (iVar8 < param_1[0x5e])) {
      param_1[0x5e] = iVar8;
    }
    plVar2 = (longlong *)*param_2;
    if (plVar2[1] - *plVar2 < lVar6) {
      lVar4 = FUN_144f89560(plVar2,*plVar1,lVar6);
      if (lVar4 != lVar6) {
        if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar5 = FUN_144bdc640(&local_1c8);
            local_res8 = 0;
            lVar6 = FUN_144bdc480(uVar5,"Short read while reading DATA",&local_res8,0);
            *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar6 + 0x40) = 0x794;
            FUN_144bdc690(&local_1c8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
          local_res8 = 0;
          lVar6 = FUN_144bdc480(uVar5,"Short read while reading DATA",&local_res8,0);
          *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar6 + 0x40) = 0x794;
          FUN_144bdc8a0(local_178);
        }
        *param_1 = -0x7ffbfe00;
        return;
      }
    }
    else {
      FUN_144b3d470();
      *plVar2 = *plVar2 + lVar6;
    }
    local_1b8 = *plVar1;
    local_1f8[0] = local_1f8[0] & 0xffffffffffff0000;
    uStack_1c0 = param_1[0x5e] + local_1b8;
    local_1f8[1] = 0;
    local_1c8._0_4_ = (undefined4)local_1b8;
    local_1c8._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
    uStack_1b0 = uStack_1b0 & 0xffffff00;
    local_1e8 = (undefined4)local_1c8;
    uStack_1e4 = local_1c8._4_4_;
    local_1d8 = (undefined4)local_1c8;
    uStack_1d4 = local_1c8._4_4_;
    uStack_1d0 = uStack_1b0;
    uStack_1cc = uStack_1ac;
    local_1c8 = local_1b8;
    uStack_1e0 = uStack_1c0;
    FUN_144c0e050(param_1,&local_1e8,local_1f8,1);
    return;
  }
  FUN_144c07d60(&local_1c8,param_2,param_1,1);
  if (-1 < *param_1) {
    local_1f8[0] = 0;
    local_1f8[1] = 0;
    local_1d8 = (undefined4)local_1b8;
    uStack_1d4 = local_1b8._4_4_;
    uStack_1d0 = uStack_1b0;
    uStack_1cc = uStack_1ac;
    local_1e8 = (undefined4)local_1c8;
    uStack_1e4 = local_1c8._4_4_;
    uStack_1e0._0_4_ = (undefined4)uStack_1c0;
    uStack_1e0._4_4_ = uStack_1c0._4_4_;
    FUN_144c0e050(param_1,&local_1e8,local_1f8,1);
  }
  if (local_1a8[1] < *local_1a8 + local_1a0) {
    FUN_144f89540(local_1a8,local_1a0);
    return;
  }
  *local_1a8 = *local_1a8 + local_1a0;
  return;
}



// FUNCTION 144c052c0 FUN_144c052c0 body=56 status=ok
// SIG undefined FUN_144c052c0(void)

void FUN_144c052c0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
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
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_144c0e050(local_18,&local_28,&local_38,1);
  return;
}



// FUNCTION 144c05300 FUN_144c05300 body=130 status=ok
// SIG undefined FUN_144c05300(void)

void FUN_144c05300(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,1);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c01480(param_1,&local_58,&local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c05390 FUN_144c05390 body=53 status=ok
// SIG undefined FUN_144c05390(void)

void FUN_144c05390(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
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
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_144c0ebd0(local_18,&local_28,&local_38,0);
  return;
}



// FUNCTION 144c053d0 FUN_144c053d0 body=133 status=ok
// SIG undefined FUN_144c053d0(void)

void FUN_144c053d0(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,1);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c0ebd0(param_1,&local_58,&local_68,0);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c05460 FUN_144c05460 body=53 status=ok
// SIG undefined FUN_144c05460(void)

void FUN_144c05460(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
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
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_144c0ebd0(local_18,&local_28,&local_38,1);
  return;
}



// FUNCTION 144c054a0 FUN_144c054a0 body=133 status=ok
// SIG undefined FUN_144c054a0(void)

void FUN_144c054a0(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,1);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c0ebd0(param_1,&local_58,&local_68,1);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c05530 FUN_144c05530 body=130 status=ok
// SIG undefined FUN_144c05530(void)

void FUN_144c05530(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,1);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c02990(param_1,&local_58,&local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c055c0 FUN_144c055c0 body=130 status=ok
// SIG undefined FUN_144c055c0(void)

void FUN_144c055c0(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,1);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c02170(param_1,&local_58,&local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c05650 FUN_144c05650 body=767 status=ok
// SIG undefined FUN_144c05650(void)

void FUN_144c05650(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  undefined8 local_res8;
  undefined1 local_1e8 [8];
  char *local_1e0;
  char *pcStack_1d8;
  char local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  local_1d0 = '\0';
  local_1e0 = (char *)0x0;
  pcStack_1d8 = (char *)0x0;
  piVar5 = (int *)FUN_144c07bd0(&local_res8,local_1e8,param_2,param_1 + 0x34);
  pcVar3 = local_1e0;
  if (*piVar5 < 0) {
    if ((DAT_14c787870 != '\0') || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        local_res8 = 0;
        lVar7 = FUN_144bdc480(uVar6,"Failed to read string section",&local_res8,0);
        *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x49d;
        FUN_144bdc690(local_1c8);
        *param_1 = -0x7ffbfe00;
        return;
      }
      uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
      local_res8 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Failed to read string section",&local_res8,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x49d;
      FUN_144bdc8a0(local_178);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x24);
  pcVar8 = pcStack_1d8;
  for (pcVar10 = pcStack_1d8; pcVar10 != pcVar3; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '\0') {
      iVar9 = param_1[0x26] + 1;
      if ((int)(param_1[0x27] & 0x7fffffffU) < iVar9) {
        FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x26] * 8);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)pcVar8;
      }
      pcVar8 = pcVar10 + 1;
      param_1[0x26] = iVar9;
    }
  }
  iVar9 = param_1[0x26];
  if (iVar9 != 0) {
    do {
      if (**(char **)(*plVar1 + -8 + (longlong)iVar9 * 8) != '\0') break;
      iVar9 = iVar9 + -1;
      param_1[0x26] = iVar9;
    } while (iVar9 != 0);
  }
  if (local_1d0 == '\0') {
    if (-1 < *param_1) {
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 != '\0') || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
    cVar4 = FUN_144bdbf80();
    if (cVar4 == '\0') {
      uVar6 = FUN_144bdc640(local_1c8);
      local_res8 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res8,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x49f;
      FUN_144bdc690(local_1c8);
      return;
    }
    uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
    local_res8 = 0;
    lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res8,0);
    *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar7 + 0x40) = 0x49f;
    FUN_144bdc8a0(local_178);
  }
  return;
}



// FUNCTION 144c05950 FUN_144c05950 body=583 status=ok
// SIG undefined FUN_144c05950(void)

void FUN_144c05950(int *param_1,longlong *param_2,char *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res18 [2];
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  plVar1 = (longlong *)(param_1 + 0x24);
  if (*param_3 == '\0') {
    lVar9 = param_2[1] - *param_2;
    pcVar5 = (char *)(**(code **)(*(longlong *)(param_1 + 0x34) + 8))(param_1 + 0x34,lVar9 + 8);
    FUN_144b3d470(pcVar5,param_2[2],lVar9);
    pcVar3 = pcVar5 + lVar9;
    pcVar7 = pcVar5;
    for (; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x26] + 1;
        if ((int)(param_1[0x27] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x26] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x26] = iVar8;
      }
    }
    iVar8 = param_1[0x26];
    if (iVar8 != 0) {
      do {
        if (**(char **)(*plVar1 + -8 + (longlong)iVar8 * 8) != '\0') break;
        iVar8 = iVar8 + -1;
        param_1[0x26] = iVar8;
      } while (iVar8 != 0);
    }
    if ((*param_1 < 0) && ((DAT_14c787870 != '\0' || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc690(local_1c8);
      }
      else {
        uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc8a0(local_178);
      }
    }
  }
  else {
    pcVar3 = (char *)param_2[1];
    pcVar7 = (char *)param_2[2];
    for (pcVar5 = pcVar7; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x26] + 1;
        if ((int)(param_1[0x27] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x26] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x26] = iVar8;
      }
    }
    iVar8 = param_1[0x26];
    if (iVar8 != 0) {
      do {
        if (**(char **)(*plVar1 + -8 + (longlong)iVar8 * 8) != '\0') {
          return;
        }
        iVar8 = iVar8 + -1;
        param_1[0x26] = iVar8;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 144c05ba0 FUN_144c05ba0 body=767 status=ok
// SIG undefined FUN_144c05ba0(void)

void FUN_144c05ba0(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  undefined8 local_res8;
  undefined1 local_1e8 [8];
  char *local_1e0;
  char *pcStack_1d8;
  char local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  local_1d0 = '\0';
  local_1e0 = (char *)0x0;
  pcStack_1d8 = (char *)0x0;
  piVar5 = (int *)FUN_144c07bd0(&local_res8,local_1e8,param_2,param_1 + 0x34);
  pcVar3 = local_1e0;
  if (*piVar5 < 0) {
    if ((DAT_14c787870 != '\0') || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        local_res8 = 0;
        lVar7 = FUN_144bdc480(uVar6,"Failed to read string section",&local_res8,0);
        *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x49d;
        FUN_144bdc690(local_1c8);
        *param_1 = -0x7ffbfe00;
        return;
      }
      uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
      local_res8 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Failed to read string section",&local_res8,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x49d;
      FUN_144bdc8a0(local_178);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  pcVar8 = pcStack_1d8;
  for (pcVar10 = pcStack_1d8; pcVar10 != pcVar3; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '\0') {
      iVar9 = param_1[0x2a] + 1;
      if ((int)(param_1[0x2b] & 0x7fffffffU) < iVar9) {
        FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x2a] * 8);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)pcVar8;
      }
      pcVar8 = pcVar10 + 1;
      param_1[0x2a] = iVar9;
    }
  }
  iVar9 = param_1[0x2a];
  if (iVar9 != 0) {
    do {
      if (**(char **)(*plVar1 + -8 + (longlong)iVar9 * 8) != '\0') break;
      iVar9 = iVar9 + -1;
      param_1[0x2a] = iVar9;
    } while (iVar9 != 0);
  }
  if (local_1d0 == '\0') {
    if (-1 < *param_1) {
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 != '\0') || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
    cVar4 = FUN_144bdbf80();
    if (cVar4 == '\0') {
      uVar6 = FUN_144bdc640(local_1c8);
      local_res8 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res8,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x49f;
      FUN_144bdc690(local_1c8);
      return;
    }
    uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
    local_res8 = 0;
    lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res8,0);
    *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar7 + 0x40) = 0x49f;
    FUN_144bdc8a0(local_178);
  }
  return;
}



// FUNCTION 144c05ea0 FUN_144c05ea0 body=583 status=ok
// SIG undefined FUN_144c05ea0(void)

void FUN_144c05ea0(int *param_1,longlong *param_2,char *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res18 [2];
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*param_3 == '\0') {
    lVar9 = param_2[1] - *param_2;
    pcVar5 = (char *)(**(code **)(*(longlong *)(param_1 + 0x34) + 8))(param_1 + 0x34,lVar9 + 8);
    FUN_144b3d470(pcVar5,param_2[2],lVar9);
    pcVar3 = pcVar5 + lVar9;
    pcVar7 = pcVar5;
    for (; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x2a] + 1;
        if ((int)(param_1[0x2b] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x2a] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x2a] = iVar8;
      }
    }
    iVar8 = param_1[0x2a];
    if (iVar8 != 0) {
      do {
        if (**(char **)(*plVar1 + -8 + (longlong)iVar8 * 8) != '\0') break;
        iVar8 = iVar8 + -1;
        param_1[0x2a] = iVar8;
      } while (iVar8 != 0);
    }
    if ((*param_1 < 0) && ((DAT_14c787870 != '\0' || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc690(local_1c8);
      }
      else {
        uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc8a0(local_178);
      }
    }
  }
  else {
    pcVar3 = (char *)param_2[1];
    pcVar7 = (char *)param_2[2];
    for (pcVar5 = pcVar7; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x2a] + 1;
        if ((int)(param_1[0x2b] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x2a] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x2a] = iVar8;
      }
    }
    iVar8 = param_1[0x2a];
    if (iVar8 != 0) {
      do {
        if (**(char **)(*plVar1 + -8 + (longlong)iVar8 * 8) != '\0') {
          return;
        }
        iVar8 = iVar8 + -1;
        param_1[0x2a] = iVar8;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 144c060f0 FUN_144c060f0 body=767 status=ok
// SIG undefined FUN_144c060f0(void)

void FUN_144c060f0(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  undefined8 local_res8;
  undefined1 local_1e8 [8];
  char *local_1e0;
  char *pcStack_1d8;
  char local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  local_1d0 = '\0';
  local_1e0 = (char *)0x0;
  pcStack_1d8 = (char *)0x0;
  piVar5 = (int *)FUN_144c07bd0(&local_res8,local_1e8,param_2,param_1 + 0x34);
  pcVar3 = local_1e0;
  if (*piVar5 < 0) {
    if ((DAT_14c787870 != '\0') || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        local_res8 = 0;
        lVar7 = FUN_144bdc480(uVar6,"Failed to read string section",&local_res8,0);
        *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x49d;
        FUN_144bdc690(local_1c8);
        *param_1 = -0x7ffbfe00;
        return;
      }
      uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
      local_res8 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Failed to read string section",&local_res8,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x49d;
      FUN_144bdc8a0(local_178);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x2c);
  pcVar8 = pcStack_1d8;
  for (pcVar10 = pcStack_1d8; pcVar10 != pcVar3; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '\0') {
      iVar9 = param_1[0x2e] + 1;
      if ((int)(param_1[0x2f] & 0x7fffffffU) < iVar9) {
        FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x2e] * 8);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)pcVar8;
      }
      pcVar8 = pcVar10 + 1;
      param_1[0x2e] = iVar9;
    }
  }
  iVar9 = param_1[0x2e];
  if (iVar9 != 0) {
    do {
      if (**(char **)(*plVar1 + -8 + (longlong)iVar9 * 8) != '\0') break;
      iVar9 = iVar9 + -1;
      param_1[0x2e] = iVar9;
    } while (iVar9 != 0);
  }
  if (local_1d0 == '\0') {
    if (-1 < *param_1) {
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 != '\0') || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
    cVar4 = FUN_144bdbf80();
    if (cVar4 == '\0') {
      uVar6 = FUN_144bdc640(local_1c8);
      local_res8 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res8,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x49f;
      FUN_144bdc690(local_1c8);
      return;
    }
    uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
    local_res8 = 0;
    lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res8,0);
    *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar7 + 0x40) = 0x49f;
    FUN_144bdc8a0(local_178);
  }
  return;
}



// FUNCTION 144c063f0 FUN_144c063f0 body=583 status=ok
// SIG undefined FUN_144c063f0(void)

void FUN_144c063f0(int *param_1,longlong *param_2,char *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res18 [2];
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  plVar1 = (longlong *)(param_1 + 0x2c);
  if (*param_3 == '\0') {
    lVar9 = param_2[1] - *param_2;
    pcVar5 = (char *)(**(code **)(*(longlong *)(param_1 + 0x34) + 8))(param_1 + 0x34,lVar9 + 8);
    FUN_144b3d470(pcVar5,param_2[2],lVar9);
    pcVar3 = pcVar5 + lVar9;
    pcVar7 = pcVar5;
    for (; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x2e] + 1;
        if ((int)(param_1[0x2f] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x2e] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x2e] = iVar8;
      }
    }
    iVar8 = param_1[0x2e];
    if (iVar8 != 0) {
      do {
        if (**(char **)(*plVar1 + -8 + (longlong)iVar8 * 8) != '\0') break;
        iVar8 = iVar8 + -1;
        param_1[0x2e] = iVar8;
      } while (iVar8 != 0);
    }
    if ((*param_1 < 0) && ((DAT_14c787870 != '\0' || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc690(local_1c8);
      }
      else {
        uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,1);
        local_res18[0] = 0;
        lVar9 = FUN_144bdc480(uVar6,"Error in input stream.",local_res18,0);
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x4b0;
        FUN_144bdc8a0(local_178);
      }
    }
  }
  else {
    pcVar3 = (char *)param_2[1];
    pcVar7 = (char *)param_2[2];
    for (pcVar5 = pcVar7; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == '\0') {
        iVar8 = param_1[0x2e] + 1;
        if ((int)(param_1[0x2f] & 0x7fffffffU) < iVar8) {
          FUN_144be3180(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)param_1[0x2e] * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)pcVar7;
        }
        pcVar7 = pcVar5 + 1;
        param_1[0x2e] = iVar8;
      }
    }
    iVar8 = param_1[0x2e];
    if (iVar8 != 0) {
      do {
        if (**(char **)(*plVar1 + -8 + (longlong)iVar8 * 8) != '\0') {
          return;
        }
        iVar8 = iVar8 + -1;
        param_1[0x2e] = iVar8;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 144c06640 FUN_144c06640 body=130 status=ok
// SIG undefined FUN_144c06640(void)

void FUN_144c06640(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,1);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c01180(param_1,&local_58,&local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c066d0 FUN_144c066d0 body=53 status=ok
// SIG undefined FUN_144c066d0(void)

void FUN_144c066d0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
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
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_144c0ce50(local_18,&local_28,&local_38,0);
  return;
}



// FUNCTION 144c06710 FUN_144c06710 body=133 status=ok
// SIG undefined FUN_144c06710(void)

void FUN_144c06710(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,1);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c0ce50(param_1,&local_58,&local_68,0);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c067a0 FUN_144c067a0 body=659 status=ok
// SIG undefined FUN_144c067a0(void)

void FUN_144c067a0(int *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined8 local_res8;
  ulonglong local_1f8 [2];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  ulonglong *local_1a8;
  longlong local_1a0;
  undefined1 local_178 [336];
  
  if (param_1[0x52] == 2) {
    plVar1 = (longlong *)(param_1 + 0x5c);
    uVar7 = *(uint *)(param_2[2] + -0x14 + (longlong)*(int *)(param_2 + 3) * 0x18) & 0x3fffffff;
    iVar8 = uVar7 - 8;
    lVar6 = (ulonglong)uVar7 - 8;
    if ((int)(param_1[0x5f] & 0x7fffffffU) < iVar8) {
      FUN_14039ab22(plVar1,&PTR_vftable_14c6e47a0,lVar6);
    }
    if ((param_1[0x5e] < iVar8) || (iVar8 < param_1[0x5e])) {
      param_1[0x5e] = iVar8;
    }
    plVar2 = (longlong *)*param_2;
    if (plVar2[1] - *plVar2 < lVar6) {
      lVar4 = FUN_144f89560(plVar2,*plVar1,lVar6);
      if (lVar4 != lVar6) {
        if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar5 = FUN_144bdc640(&local_1c8);
            local_res8 = 0;
            lVar6 = FUN_144bdc480(uVar5,"Short read while reading DATA",&local_res8,0);
            *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar6 + 0x40) = 0x794;
            FUN_144bdc690(&local_1c8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
          local_res8 = 0;
          lVar6 = FUN_144bdc480(uVar5,"Short read while reading DATA",&local_res8,0);
          *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar6 + 0x40) = 0x794;
          FUN_144bdc8a0(local_178);
        }
        *param_1 = -0x7ffbfe00;
        return;
      }
    }
    else {
      FUN_144b3d470();
      *plVar2 = *plVar2 + lVar6;
    }
    local_1b8 = *plVar1;
    local_1f8[0] = local_1f8[0] & 0xffffffffffff0000;
    uStack_1c0 = param_1[0x5e] + local_1b8;
    local_1f8[1] = 0;
    local_1c8._0_4_ = (undefined4)local_1b8;
    local_1c8._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
    uStack_1b0 = uStack_1b0 & 0xffffff00;
    local_1e8 = (undefined4)local_1c8;
    uStack_1e4 = local_1c8._4_4_;
    local_1d8 = (undefined4)local_1c8;
    uStack_1d4 = local_1c8._4_4_;
    uStack_1d0 = uStack_1b0;
    uStack_1cc = uStack_1ac;
    local_1c8 = local_1b8;
    uStack_1e0 = uStack_1c0;
    FUN_144c0e050(param_1,&local_1e8,local_1f8,0);
    return;
  }
  FUN_144c07d60(&local_1c8,param_2,param_1,1);
  if (-1 < *param_1) {
    local_1f8[0] = 0;
    local_1f8[1] = 0;
    local_1d8 = (undefined4)local_1b8;
    uStack_1d4 = local_1b8._4_4_;
    uStack_1d0 = uStack_1b0;
    uStack_1cc = uStack_1ac;
    local_1e8 = (undefined4)local_1c8;
    uStack_1e4 = local_1c8._4_4_;
    uStack_1e0._0_4_ = (undefined4)uStack_1c0;
    uStack_1e0._4_4_ = uStack_1c0._4_4_;
    FUN_144c0e050(param_1,&local_1e8,local_1f8,0);
  }
  if (local_1a8[1] < *local_1a8 + local_1a0) {
    FUN_144f89540(local_1a8,local_1a0);
    return;
  }
  *local_1a8 = *local_1a8 + local_1a0;
  return;
}



// FUNCTION 144c06a40 FUN_144c06a40 body=53 status=ok
// SIG undefined FUN_144c06a40(void)

void FUN_144c06a40(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
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
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_144c0e050(local_18,&local_28,&local_38,0);
  return;
}



// FUNCTION 144c06a80 FUN_144c06a80 body=130 status=ok
// SIG undefined FUN_144c06a80(void)

void FUN_144c06a80(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,0);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c03880(param_1,&local_58,&local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c06b10 FUN_144c06b10 body=52 status=ok
// SIG undefined FUN_144c06b10(void)

void FUN_144c06b10(undefined8 param_1,undefined8 param_2)

{
  undefined *local_18;
  undefined *local_10;
  
  local_18 = &DAT_149990d30;
  local_10 = &DAT_149990f70;
  FUN_144c0f200(param_2,param_1,&local_18);
  return;
}



// FUNCTION 144c06b50 FUN_144c06b50 body=278 status=ok
// SIG undefined FUN_144c06b50(void)

void FUN_144c06b50(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined *local_208;
  undefined *puStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined1 uStack_1e0;
  uint7 uStack_1df;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  longlong local_1c0;
  longlong lStack_1b8;
  longlong local_1b0;
  longlong lStack_1a8;
  longlong local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  uint local_18c;
  undefined1 local_188 [384];
  
  local_1c0 = param_2[2];
  local_198 = local_188;
  lVar1 = param_2[1];
  local_1a0 = lVar1 - *param_2;
  lStack_1b8 = local_1c0 + local_1a0;
  uStack_1e0 = 0;
  lStack_1a8 = (ulonglong)uStack_1df << 8;
  uStack_1d0 = *(undefined4 *)param_3;
  uStack_1cc = *(undefined4 *)((longlong)param_3 + 4);
  uStack_1f0 = *param_3;
  uStack_1c8 = *(undefined4 *)(param_3 + 1);
  uStack_1c4 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1e8 = param_3[1];
  local_190 = 0;
  local_18c = 0x80000010;
  local_208 = &DAT_149990d30;
  puStack_200 = &DAT_149990f70;
  local_1f8 = param_1;
  local_1d8 = param_1;
  local_1b0 = local_1c0;
  FUN_144c0f660(&local_1c0,&local_1f8,&local_208);
  *param_2 = lVar1;
  local_190 = 0;
  if ((-1 < (int)local_18c) && (local_198 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_198,(ulonglong)(local_18c & 0x7fffffff) * 0x18);
  }
  return;
}



// FUNCTION 144c06c70 FUN_144c06c70 body=230 status=ok
// SIG undefined FUN_144c06c70(void)

void FUN_144c06c70(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined *local_1e8;
  undefined *puStack_1e0;
  undefined8 local_1d8;
  uint uStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  longlong local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  uint local_194;
  undefined1 local_190 [392];
  
  local_1c8 = param_1[2];
  local_1a0 = local_190;
  lVar1 = param_1[1];
  local_1a8 = lVar1 - *param_1;
  uStack_1d0 = uStack_1d0 & 0xffffff00;
  local_1d8._0_4_ = (undefined4)local_1c8;
  local_1d8._4_4_ = (undefined4)((ulonglong)local_1c8 >> 0x20);
  lStack_1c0 = local_1c8 + local_1a8;
  local_198 = 0;
  local_194 = 0x80000010;
  local_1e8 = &DAT_149990d30;
  puStack_1e0 = &DAT_149990f70;
  local_1b8 = (undefined4)local_1d8;
  uStack_1b4 = local_1d8._4_4_;
  uStack_1b0 = uStack_1d0;
  uVar2 = (undefined4)local_1d8;
  local_1d8 = local_1c8;
  FUN_144c130c0(&local_1c8,uVar2,&local_1e8);
  *param_1 = lVar1;
  local_198 = 0;
  if ((-1 < (int)local_194) && (local_1a0 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1a0,(ulonglong)(local_194 & 0x7fffffff) * 0x18);
  }
  return;
}



// FUNCTION 144c06d60 FUN_144c06d60 body=52 status=ok
// SIG undefined FUN_144c06d60(void)

void FUN_144c06d60(undefined8 param_1,undefined8 param_2)

{
  undefined *local_18;
  char *local_10;
  
  local_18 = &DAT_149990f70;
  local_10 = "Common::ReadFormatBinaryTagfile";
  FUN_144c0f200(param_2,param_1,&local_18);
  return;
}



// FUNCTION 144c06da0 FUN_144c06da0 body=278 status=ok
// SIG undefined FUN_144c06da0(void)

void FUN_144c06da0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined *local_208;
  char *pcStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined1 uStack_1e0;
  uint7 uStack_1df;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  longlong local_1c0;
  longlong lStack_1b8;
  longlong local_1b0;
  longlong lStack_1a8;
  longlong local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  uint local_18c;
  undefined1 local_188 [384];
  
  local_1c0 = param_2[2];
  local_198 = local_188;
  lVar1 = param_2[1];
  local_1a0 = lVar1 - *param_2;
  lStack_1b8 = local_1c0 + local_1a0;
  uStack_1e0 = 0;
  lStack_1a8 = (ulonglong)uStack_1df << 8;
  uStack_1d0 = *(undefined4 *)param_3;
  uStack_1cc = *(undefined4 *)((longlong)param_3 + 4);
  uStack_1f0 = *param_3;
  uStack_1c8 = *(undefined4 *)(param_3 + 1);
  uStack_1c4 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1e8 = param_3[1];
  local_190 = 0;
  local_18c = 0x80000010;
  local_208 = &DAT_149990f70;
  pcStack_200 = "Common::ReadFormatBinaryTagfile";
  local_1f8 = param_1;
  local_1d8 = param_1;
  local_1b0 = local_1c0;
  FUN_144c0f660(&local_1c0,&local_1f8,&local_208);
  *param_2 = lVar1;
  local_190 = 0;
  if ((-1 < (int)local_18c) && (local_198 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_198,(ulonglong)(local_18c & 0x7fffffff) * 0x18);
  }
  return;
}



// FUNCTION 144c06ec0 FUN_144c06ec0 body=230 status=ok
// SIG undefined FUN_144c06ec0(void)

void FUN_144c06ec0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined *local_1e8;
  char *pcStack_1e0;
  undefined8 local_1d8;
  uint uStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  longlong local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  uint local_194;
  undefined1 local_190 [392];
  
  local_1c8 = param_1[2];
  local_1a0 = local_190;
  lVar1 = param_1[1];
  local_1a8 = lVar1 - *param_1;
  uStack_1d0 = uStack_1d0 & 0xffffff00;
  local_1d8._0_4_ = (undefined4)local_1c8;
  local_1d8._4_4_ = (undefined4)((ulonglong)local_1c8 >> 0x20);
  lStack_1c0 = local_1c8 + local_1a8;
  local_198 = 0;
  local_194 = 0x80000010;
  local_1e8 = &DAT_149990f70;
  pcStack_1e0 = "Common::ReadFormatBinaryTagfile";
  local_1b8 = (undefined4)local_1d8;
  uStack_1b4 = local_1d8._4_4_;
  uStack_1b0 = uStack_1d0;
  uVar2 = (undefined4)local_1d8;
  local_1d8 = local_1c8;
  FUN_144c130c0(&local_1c8,uVar2,&local_1e8);
  *param_1 = lVar1;
  local_198 = 0;
  if ((-1 < (int)local_194) && (local_1a0 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1a0,(ulonglong)(local_194 & 0x7fffffff) * 0x18);
  }
  return;
}



// FUNCTION 144c06fb0 FUN_144c06fb0 body=130 status=ok
// SIG undefined FUN_144c06fb0(void)

void FUN_144c06fb0(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,0);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c01af0(param_1,&local_58,&local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c07040 FUN_144c07040 body=130 status=ok
// SIG undefined FUN_144c07040(void)

void FUN_144c07040(int *param_1,undefined8 param_2)

{
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_144c07d60(&local_38,param_2,param_1,0);
  if (-1 < *param_1) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_144c01820(param_1,&local_58,&local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  FUN_144f89540(local_18,local_10);
  return;
}



// FUNCTION 144c070d0 FUN_144c070d0 body=3 status=ok
// SIG undefined FUN_144c070d0(void)

void FUN_144c070d0(void)

{
  return;
}



// FUNCTION 144c070e0 FUN_144c070e0 body=133 status=ok
// SIG undefined FUN_144c070e0(void)

undefined8 * FUN_144c070e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  FUN_144f880d0();
  local_res8 = 0x2a0;
  *param_1 = hkSerialize::TagfileReadFormat::vftable;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,&DAT_149991fec);
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144c092e0(lVar1);
    param_1[3] = uVar2;
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 144c07170 FUN_144c07170 body=51 status=ok
// SIG undefined FUN_144c07170(void)

void FUN_144c07170(undefined8 *param_1)

{
  *param_1 = hkSerialize::TagfileReadFormat::vftable;
  if (param_1[3] != 0) {
    FUN_144c0f070(param_1[3],1);
  }
  FUN_144f880f0(param_1);
  return;
}



// FUNCTION 144c071b0 FUN_144c071b0 body=27 status=ok
// SIG undefined FUN_144c071b0(void)

undefined8 FUN_144c071b0(longlong param_1,undefined8 param_2)

{
  FUN_144c096a0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 144c071d0 FUN_144c071d0 body=74 status=ok
// SIG undefined FUN_144c071d0(void)

undefined8 FUN_144c071d0(longlong param_1,undefined8 param_2)

{
  FUN_144c099b0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 144c07220 FUN_144c07220 body=75 status=ok
// SIG undefined FUN_144c07220(void)

undefined8 FUN_144c07220(longlong param_1,undefined8 param_2)

{
  FUN_144c099b0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 144c07270 FUN_144c07270 body=75 status=ok
// SIG undefined FUN_144c07270(void)

undefined8 FUN_144c07270(longlong param_1,undefined8 param_2)

{
  FUN_144c099b0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 144c072c0 FUN_144c072c0 body=675 status=ok
// SIG undefined FUN_144c072c0(void)

int * FUN_144c072c0(int *param_1,undefined *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined *local_388;
  undefined *puStack_380;
  undefined8 local_378;
  uint uStack_370;
  int local_368 [2];
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined1 local_338;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined *puStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  uint uStack_300;
  longlong local_2f8;
  undefined1 *local_2f0;
  int local_2e8;
  uint local_2e4;
  undefined1 local_2e0 [384];
  undefined1 local_160 [344];
  
  local_2f0 = local_2e0;
  puStack_380 = param_2 + param_3;
  uStack_370 = uStack_370 & 0xffffff00;
  local_378._0_4_ = SUB84(param_2,0);
  local_378._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_2e8 = 0;
  local_2e4 = 0x80000010;
  local_318 = (undefined4)local_378;
  uStack_314 = local_378._4_4_;
  local_308 = (undefined4)local_378;
  uStack_304 = local_378._4_4_;
  uStack_300 = uStack_370;
  local_388 = param_2;
  local_378 = param_2;
  local_2f8 = param_3;
  puStack_310 = puStack_380;
  iVar2 = FUN_144c078c0(&local_318,0x54414730);
  if (iVar2 == 0x54414730) {
    local_368[0] = 0;
    local_340 = 0;
    local_338 = 0;
    local_360 = 0;
    uStack_358 = 0;
    local_388 = &DAT_149990bb0;
    puStack_380 = &DAT_149990c70;
    local_350 = 0;
    uStack_348 = 0;
    FUN_144c130c0(&local_318,local_368,&local_388);
    if (-1 < local_368[0]) {
      lVar4 = (longlong)(local_2e8 + -1);
      if (CONCAT44(uStack_314,local_318) - CONCAT44(uStack_304,local_308) ==
          (ulonglong)(*(uint *)(local_2f0 + lVar4 * 0x18 + 4) & 0x3fffffff) +
          *(longlong *)(local_2f0 + lVar4 * 0x18 + 8)) {
        local_2f8 = *(longlong *)(local_2f0 + lVar4 * 0x18 + 0x10);
      }
      else {
        uStack_300 = uStack_300 | 2;
      }
    }
    *param_1 = local_368[0];
    goto joined_r0x000144c07523;
  }
  iVar2 = FUN_144c078c0(&local_318,0x54434d30);
  if (iVar2 == 0x54434d30) {
    lVar4 = (longlong)(local_2e8 + -1);
    if (CONCAT44(uStack_314,local_318) - CONCAT44(uStack_304,local_308) ==
        (ulonglong)(*(uint *)(local_2f0 + lVar4 * 0x18 + 4) & 0x3fffffff) +
        *(longlong *)(local_2f0 + lVar4 * 0x18 + 8)) {
      local_2f8 = *(longlong *)(local_2f0 + lVar4 * 0x18 + 0x10);
    }
    else {
      uStack_300 = uStack_300 | 2;
    }
    *param_1 = 0;
    goto joined_r0x000144c07523;
  }
  if (DAT_14c787870 == '\0') {
    cVar1 = FUN_144bdbf80();
    if (cVar1 != '\0') goto LAB_144c0746e;
  }
  else {
LAB_144c0746e:
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      uVar3 = FUN_144bdc640(local_368);
      local_res10 = 0;
      lVar4 = FUN_144bdc480(uVar3,"Bad data given to InplaceLoad::unload",&local_res10,0);
      *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0xb94;
      FUN_144bdc690(local_368);
    }
    else {
      uVar3 = FUN_144bdc810(local_160,&DAT_14c787820,1);
      local_res10 = 0;
      lVar4 = FUN_144bdc480(uVar3,"Bad data given to InplaceLoad::unload",&local_res10,0);
      *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0xb94;
      FUN_144bdc8a0(local_160);
    }
  }
  *param_1 = -0x7ffbfe00;
joined_r0x000144c07523:
  if ((-1 < (int)local_2e4) && (local_2f0 != (undefined1 *)0x0)) {
    local_2e8 = 0;
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2f0,(ulonglong)(local_2e4 & 0x7fffffff) * 0x18);
  }
  return param_1;
}



// FUNCTION 144c07570 FUN_144c07570 body=239 status=ok
// SIG undefined FUN_144c07570(void)

longlong * FUN_144c07570(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x88);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x80);
  *param_2 = lVar2;
  param_2[1] = lVar2 + (longlong)iVar1 * 8;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x158);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x150);
  param_2[2] = lVar2;
  param_2[3] = lVar2 + (longlong)iVar1 * 0x18;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x98);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x90);
  param_2[4] = lVar2;
  param_2[5] = lVar2 + (longlong)iVar1 * 8;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xa8);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0);
  param_2[6] = lVar2;
  param_2[7] = lVar2 + (longlong)iVar1 * 8;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xb8);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0);
  param_2[8] = lVar2;
  param_2[9] = lVar2 + (longlong)iVar1 * 8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x168);
  param_2[10] = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x160);
  param_2[0xb] = lVar2;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x140);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
  param_2[0xc] = lVar2;
  param_2[0xd] = lVar2 + (longlong)iVar1 * 8;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x188);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x180);
  param_2[0xe] = lVar2;
  param_2[0xf] = lVar2 + (longlong)iVar1 * 8;
  return param_2;
}



// FUNCTION 144c07660 FUN_144c07660 body=119 status=ok
// SIG undefined FUN_144c07660(void)

undefined8 * FUN_144c07660(undefined8 *param_1,uint param_2)

{
  *param_1 = hkSerialize::TagfileReadFormat::vftable;
  if (param_1[3] != 0) {
    FUN_144c0f070(param_1[3],1);
  }
  FUN_144f880f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c076e0 FUN_144c076e0 body=113 status=ok
// SIG undefined FUN_144c076e0(void)

void FUN_144c076e0(undefined8 *param_1,longlong *param_2)

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
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 4)
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
        }
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    *param_1 = puVar2;
  }
  return;
}



// FUNCTION 144c07760 FUN_144c07760 body=107 status=ok
// SIG undefined FUN_144c07760(void)

void FUN_144c07760(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 4);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 144c077d0 FUN_144c077d0 body=97 status=ok
// SIG undefined FUN_144c077d0(void)

undefined8 * FUN_144c077d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkMemory::BufferedAllocatorNoCleanup::vftable;
  FUN_144f89650();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 144c07840 FUN_144c07840 body=123 status=ok
// SIG undefined FUN_144c07840(void)

void FUN_144c07840(longlong *param_1)

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



// FUNCTION 144c078c0 FUN_144c078c0 body=306 status=ok
// SIG undefined FUN_144c078c0(void)

undefined4 FUN_144c078c0(ulonglong *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  puVar3 = (uint *)*param_1;
  lVar9 = (longlong)puVar3 - param_1[2];
  if ((longlong)param_1[4] <= lVar9) {
    return 0;
  }
  if (7 < (longlong)(param_1[1] - (longlong)puVar3)) {
    uVar10 = puVar3[1];
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    if (uVar10 != 0) {
      if ((param_2 != 0) && (param_2 != uVar10)) {
        return 0;
      }
      uVar2 = *puVar3;
      uVar5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8;
      uVar2 = uVar2 << 0x18;
      uVar11 = (ulonglong)(uVar5 | uVar2 & 0x3fffffff) + lVar9;
      if ((param_1[4] < uVar11) || ((uVar5 | uVar2 & 0x3fffffff) < 8)) {
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
        uVar6 = 1;
      }
      else {
        iVar8 = (int)param_1[6] + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) < iVar8) {
          FUN_144c13cb0(param_1 + 5,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        lVar7 = (longlong)(int)param_1[6];
        *(int *)(param_1 + 6) = iVar8;
        uVar4 = param_1[5];
        *(longlong *)(uVar4 + 8 + lVar7 * 0x18) = lVar9;
        *(uint *)(uVar4 + 4 + lVar7 * 0x18) = uVar5 | uVar2;
        *(uint *)(uVar4 + lVar7 * 0x18) = uVar10;
        puVar1 = (undefined4 *)(uVar4 + lVar7 * 0x18);
        *(ulonglong *)(puVar1 + 4) = param_1[4];
        param_1[4] = uVar11;
        uVar11 = *param_1 + 8;
        if (param_1[1] < *param_1 + 8) {
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          uVar11 = param_1[1];
        }
        *param_1 = uVar11;
        uVar6 = *puVar1;
      }
      return uVar6;
    }
    *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
  }
  return 1;
}



// FUNCTION 144c07a00 FUN_144c07a00 body=365 status=ok
// SIG undefined FUN_144c07a00(void)

undefined4 FUN_144c07a00(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  
  plVar3 = (longlong *)*param_1;
  if ((plVar3[5] - plVar3[2]) + *plVar3 < param_1[1]) {
    lVar10 = plVar3[1] - *plVar3;
    if (lVar10 < 8) {
      if (plVar3[7] != 0) {
        lVar10 = FUN_144f89520(plVar3,8);
      }
      if (lVar10 < 8) {
        return 1;
      }
    }
    puVar4 = (undefined8 *)*param_1;
    puVar5 = (uint *)*puVar4;
    uVar12 = puVar5[1];
    uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    if (uVar12 == 0) {
      *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) | 2;
      return 1;
    }
    if ((param_2 == 0) || (param_2 == uVar12)) {
      uVar2 = *puVar5;
      lVar10 = (puVar4[5] - puVar4[2]) + (longlong)puVar5;
      uVar8 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8;
      uVar2 = uVar2 << 0x18;
      uVar14 = (ulonglong)(uVar8 | uVar2 & 0x3fffffff) + lVar10;
      if (((ulonglong)param_1[1] < uVar14) || ((uVar8 | uVar2 & 0x3fffffff) < 8)) {
        *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) | 2;
        uVar9 = 1;
      }
      else {
        iVar13 = (int)param_1[3] + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar13) {
          FUN_144c14300(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar13);
        }
        lVar11 = (longlong)(int)param_1[3];
        *(int *)(param_1 + 3) = iVar13;
        lVar6 = param_1[2];
        *(longlong *)(lVar6 + 8 + lVar11 * 0x18) = lVar10;
        *(uint *)(lVar6 + 4 + lVar11 * 0x18) = uVar8 | uVar2;
        *(uint *)(lVar6 + lVar11 * 0x18) = uVar12;
        puVar1 = (undefined4 *)(lVar6 + lVar11 * 0x18);
        *(longlong *)(puVar1 + 4) = param_1[1];
        puVar7 = (ulonglong *)*param_1;
        param_1[1] = uVar14;
        if (puVar7[1] < *puVar7 + 8) {
          FUN_144f89540(puVar7,8);
        }
        else {
          *puVar7 = *puVar7 + 8;
        }
        uVar9 = *puVar1;
      }
      return uVar9;
    }
  }
  return 0;
}



// FUNCTION 144c07b70 FUN_144c07b70 body=85 status=ok
// SIG undefined FUN_144c07b70(void)

undefined8 FUN_144c07b70(ulonglong *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int local_res8 [8];
  
  if (*param_1 != param_1[1]) {
    local_res8[0] = 0;
    uVar1 = FUN_144f930d0(*param_1,local_res8);
    if (0 < local_res8[0]) {
      uVar2 = (longlong)local_res8[0] + *param_1;
      if (param_1[1] < (longlong)local_res8[0] + *param_1) {
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
        uVar2 = param_1[1];
      }
      *param_1 = uVar2;
      return uVar1;
    }
  }
  *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
  return 0;
}



// FUNCTION 144c07bd0 FUN_144c07bd0 body=396 status=ok
// SIG undefined FUN_144c07bd0(void)

undefined4 *
FUN_144c07bd0(undefined4 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_res18 [2];
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  lVar6 = (ulonglong)(*(uint *)(param_3[2] + -0x14 + (longlong)(int)param_3[3] * 0x18) & 0x3fffffff)
          - 8;
  lVar3 = (**(code **)(*param_4 + 8))(param_4,(longlong)((int)lVar6 + 8));
  plVar1 = (longlong *)*param_3;
  if (plVar1[1] - *plVar1 < lVar6) {
    lVar4 = FUN_144f89560(plVar1,lVar3,lVar6);
    if (lVar4 != lVar6) {
      if ((DAT_14c787870 != '\0') || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          uVar5 = FUN_144bdc640(local_1c8);
          local_res18[0] = 0;
          lVar3 = FUN_144bdc480(uVar5,"Invalid section size",local_res18,0);
          *(char **)(lVar3 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar3 + 0x40) = 0x97;
          FUN_144bdc690(local_1c8);
        }
        else {
          uVar5 = FUN_144bdc810(local_178,&DAT_14c787820,1);
          local_res18[0] = 0;
          lVar3 = FUN_144bdc480(uVar5,"Invalid section size",local_res18,0);
          *(char **)(lVar3 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar3 + 0x40) = 0x97;
          FUN_144bdc8a0(local_178);
        }
      }
      lVar3 = *param_3;
      *param_1 = 0x80040200;
      *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 2;
      return param_1;
    }
  }
  else {
    FUN_144b3d470(lVar3);
    *plVar1 = *plVar1 + lVar6;
  }
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[1] = lVar3 + lVar6;
  *param_2 = lVar3;
  param_2[2] = lVar3;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144c07d60 FUN_144c07d60 body=461 status=ok
// SIG undefined FUN_144c07d60(void)

longlong * FUN_144c07d60(longlong *param_1,longlong *param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  undefined8 local_1d8;
  code *local_1d0;
  undefined4 *local_1c8;
  undefined1 local_1c0 [80];
  undefined1 local_170 [344];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  plVar1 = (longlong *)*param_2;
  param_1[4] = (longlong)plVar1;
  lVar5 = (ulonglong)(*(uint *)(param_2[2] + -0x14 + (longlong)(int)param_2[3] * 0x18) & 0x3fffffff)
          - 8;
  param_1[5] = lVar5;
  lVar5 = lVar5 + (param_4 & 0xff) * 8;
  lVar3 = plVar1[1] - *plVar1;
  if (lVar3 < lVar5) {
    if (plVar1[7] != 0) {
      lVar3 = FUN_144f89520(plVar1,lVar5);
    }
    if (lVar3 < lVar5) {
      if ((1 < DAT_14c787870) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
        cVar2 = FUN_144bdbf80();
        local_res8[0] = *(undefined4 *)(param_2[2] + -0x18 + (longlong)(int)param_2[3] * 0x18);
        if (cVar2 == '\0') {
          local_res20[0] = local_res8[0];
          uVar4 = FUN_144bdc640(local_1c0);
          local_1d8 = 1;
          local_1d0 = FUN_144f50a00;
          local_1c8 = local_res20;
          lVar5 = FUN_144bdc480(uVar4,"Short read in section {:x}",&local_1d8,0);
          *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0xba;
          FUN_144bdc690(local_1c0);
        }
        else {
          uVar4 = FUN_144bdc810(local_170,&DAT_14c787820,2);
          local_1d8 = 1;
          local_1d0 = FUN_144f50a00;
          local_1c8 = local_res8;
          lVar5 = FUN_144bdc480(uVar4,"Short read in section {:x}",&local_1d8,0);
          *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0xba;
          FUN_144bdc8a0(local_170);
        }
      }
      *param_3 = 0x80040200;
      return param_1;
    }
  }
  lVar5 = *(longlong *)param_1[4];
  *param_1 = lVar5;
  param_1[1] = param_1[5] + lVar5;
  param_1[2] = lVar5;
  return param_1;
}



// FUNCTION 144c07f30 FUN_144c07f30 body=104 status=ok
// SIG undefined FUN_144c07f30(void)

void FUN_144c07f30(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144c07fa0 FUN_144c07fa0 body=175 status=ok
// SIG undefined FUN_144c07fa0(void)

undefined8 * FUN_144c07fa0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 local_18;
  longlong local_10;
  
  if ((int)((*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48)) / 0xc) < 2) {
    if (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38) < 1) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return param_2;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x38);
    param_2[1] = &DAT_14c6da958;
  }
  else {
    FUN_144c08450(param_1,&local_18,*(longlong *)(param_1 + 0x48) + 0xc);
    *param_2 = local_18;
    param_2[1] = local_10;
    if (local_10 == 0) {
      uVar1 = 0;
      goto LAB_144c0801c;
    }
  }
  uVar1 = FUN_144befdb0();
LAB_144c0801c:
  param_2[2] = uVar1;
  if ((uVar1 & 1) == 0) {
    return param_2;
  }
  FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
  return param_2;
}



// FUNCTION 144c08050 FUN_144c08050 body=694 status=ok
// SIG undefined FUN_144c08050(void)

undefined4 FUN_144c08050(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lVar11 = *(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48);
  lVar11 = lVar11 / 6 + (lVar11 >> 0x3f);
  iVar9 = (int)(lVar11 >> 1) - (int)(lVar11 >> 0x3f);
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_144c13b80(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  iVar2 = (int)param_2[1];
  if (iVar2 < iVar9) {
    lVar11 = *param_2;
    *(int *)(param_2 + 1) = iVar9;
    for (puVar4 = (undefined8 *)(lVar11 + (longlong)iVar2 * 0x18);
        puVar4 != (undefined8 *)(lVar11 + (longlong)iVar9 * 0x18); puVar4 = puVar4 + 3) {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
      }
    }
  }
  else if (iVar9 < iVar2) {
    *(int *)(param_2 + 1) = iVar9;
  }
  lVar11 = *(longlong *)(param_1 + 0x48);
  iVar9 = 1;
  if ((int)((*(longlong *)(param_1 + 0x50) - lVar11) / 0xc) < 2) {
    return (int)param_2[1];
  }
  lVar12 = 0xc;
  lVar13 = 0x18;
  do {
    lVar10 = 0;
    uVar7 = *(uint *)(lVar12 + lVar11);
    puVar1 = (uint *)(lVar12 + lVar11);
    uVar3 = uVar7 & 0xf0000000;
    lVar11 = lVar10;
    if (uVar3 != 0) {
      if ((uVar3 == 0x20000000) && (puVar1[2] == 0)) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar7 & 0xffffff) * 8);
      }
      else if (uVar3 == 0x40000000) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar7 & 0xffffff) * 8);
        if (lVar10 == 0) {
          lVar11 = 0;
        }
        else {
          puVar8 = local_res8;
LAB_144c081af:
          puVar5 = (uint *)FUN_144bef800(lVar10,puVar8);
          lVar11 = FUN_144beffb0(*puVar5 & 0x1f);
        }
      }
      else {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar7 & 0xffffff) * 8);
        if (uVar3 == 0x50000000) {
          plVar6 = (longlong *)FUN_144befde0(lVar11,0x800000);
          if (plVar6 == (longlong *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *plVar6;
          }
          lVar10 = *(longlong *)(lVar11 + 8 + (longlong)(int)puVar1[2] * 8);
          if (lVar10 != 0) {
            puVar8 = local_res10;
            goto LAB_144c081af;
          }
          lVar11 = 0;
        }
        else {
          lVar10 = (ulonglong)puVar1[1] + *(longlong *)(param_1 + 0x38);
        }
      }
    }
    *(longlong *)(lVar13 + *param_2) = lVar10;
    *(longlong *)(lVar13 + 8 + *param_2) = lVar11;
    uVar7 = *puVar1 & 0xf0000000;
    if (((uVar7 == 0x10000000) || (uVar7 == 0x40000000)) || (uVar7 == 0x50000000)) {
      *(undefined1 *)(lVar13 + 0x10 + *param_2) = 0;
      *(undefined4 *)(lVar13 + 0x14 + *param_2) = 0xffffffff;
    }
    else {
      uVar7 = *puVar1 & 0xf0000000;
      if (uVar7 == 0x30000000) {
        *(undefined1 *)(lVar13 + 0x10 + *param_2) = 2;
        *(uint *)(lVar13 + 0x14 + *param_2) = puVar1[2];
      }
      else if (uVar7 == 0x20000000) {
        *(undefined1 *)(lVar13 + 0x10 + *param_2) = 1;
        *(uint *)(lVar13 + 0x14 + *param_2) = puVar1[2];
      }
    }
    lVar11 = *(longlong *)(param_1 + 0x48);
    iVar9 = iVar9 + 1;
    lVar12 = lVar12 + 0xc;
    lVar13 = lVar13 + 0x18;
    if ((int)((*(longlong *)(param_1 + 0x50) - lVar11) / 0xc) <= iVar9) {
      return (int)param_2[1];
    }
  } while( true );
}



// FUNCTION 144c08310 FUN_144c08310 body=227 status=ok
// SIG undefined FUN_144c08310(void)

undefined8 * FUN_144c08310(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_18;
  longlong local_10;
  
  uVar2 = *(uint *)*param_3;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (uVar2 < (uint)((*(longlong *)(param_1 + 0x50) - lVar3) / 0xc)) {
    lVar1 = lVar3 + (longlong)(int)uVar2 * 0xc;
    uVar2 = *(uint *)(lVar3 + (longlong)(int)uVar2 * 0xc);
    if ((uVar2 & 0xf0000000) == 0x30000000) {
      FUN_144c08450(param_1,&local_18,lVar1);
      *param_2 = local_18;
      param_2[1] = local_10;
      if (local_10 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_144befdb0();
      }
      param_2[2] = uVar4;
      if ((uVar4 & 1) == 0) {
        return param_2;
      }
      FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
      return param_2;
    }
    if ((uVar2 & 0xf0000000) == 0) {
      FUN_144c08400(param_1,param_2,lVar3 + (longlong)*(int *)(lVar1 + 8) * 0xc);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 144c08400 FUN_144c08400 body=79 status=ok
// SIG undefined FUN_144c08400(void)

undefined8 * FUN_144c08400(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 local_18;
  longlong local_10;
  
  FUN_144c08450(param_1,&local_18);
  *param_2 = local_18;
  param_2[1] = local_10;
  if (local_10 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144befdb0();
  }
  param_2[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144c08450 FUN_144c08450 body=333 status=ok
// SIG undefined FUN_144c08450(void)

longlong * FUN_144c08450(longlong param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 local_res18 [16];
  
  uVar1 = *param_3;
  uVar2 = uVar1 & 0xf0000000;
  if (uVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if ((uVar2 == 0x20000000) && (param_3[2] == 0)) {
    lVar7 = *(longlong *)(param_1 + 8);
    *param_2 = 0;
    param_2[1] = *(longlong *)(lVar7 + (ulonglong)(uVar1 & 0xffffff) * 8);
    return param_2;
  }
  uVar6 = (ulonglong)(uVar1 & 0xffffff);
  if (uVar2 != 0x40000000) {
    if (uVar2 != 0x50000000) {
      *param_2 = (ulonglong)param_3[1] + *(longlong *)(param_1 + 0x38);
      param_2[1] = *(longlong *)(*(longlong *)(param_1 + 8) + uVar6 * 8);
      return param_2;
    }
    plVar5 = (longlong *)
             FUN_144befde0(*(undefined8 *)(*(longlong *)(param_1 + 8) + uVar6 * 8),0x800000);
    lVar4 = 0;
    lVar7 = lVar4;
    if (plVar5 != (longlong *)0x0) {
      lVar7 = *plVar5;
    }
    lVar7 = *(longlong *)(lVar7 + 8 + (longlong)(int)param_3[2] * 8);
    if (lVar7 != 0) {
      puVar3 = (uint *)FUN_144bef800(lVar7,local_res18);
      lVar4 = FUN_144beffb0(*puVar3 & 0x1f);
    }
    *param_2 = lVar7;
    param_2[1] = lVar4;
    return param_2;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar6 * 8);
  if (lVar7 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  puVar3 = (uint *)FUN_144bef800(lVar7,local_res18);
  lVar4 = FUN_144beffb0(*puVar3 & 0x1f);
  *param_2 = lVar7;
  param_2[1] = lVar4;
  return param_2;
}



// FUNCTION 144c085a0 FUN_144c085a0 body=195 status=ok
// SIG undefined FUN_144c085a0(void)

void FUN_144c085a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  
  puVar4 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(longlong *)(param_1 + 0x120) != 0) && (*(int *)(*(longlong *)(param_1 + 0x120) + 8) != 0))
  {
    local_res8 = 0x20;
    puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar2,"hkHashSet");
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0x80000000;
      uVar3 = FUN_144b3d480();
      puVar2[2] = uVar3;
      *(undefined4 *)(puVar2 + 3) = 0;
      puVar4 = puVar2;
    }
    lVar1 = *(longlong *)(param_1 + 0x120);
    *(undefined8 **)(param_1 + 0x120) = puVar4;
    if (lVar1 != 0) {
      FUN_144c089f0(lVar1);
      (*DAT_14c787678)(0,lVar1,0);
    }
  }
  return;
}


