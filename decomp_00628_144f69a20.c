// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144f69a20 FUN_144f69a20 body=17 status=ok
// SIG undefined FUN_144f69a20(void)

void FUN_144f69a20(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144f69a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc0));
  return;
}



// FUNCTION 144f69a40 FUN_144f69a40 body=30 status=ok
// SIG undefined FUN_144f69a40(void)

undefined8 FUN_144f69a40(longlong *param_1,undefined8 param_2)

{
  FUN_144f6ab20(*param_1 + 0x18);
  return param_2;
}



// FUNCTION 144f69a60 FUN_144f69a60 body=148 status=ok
// SIG undefined FUN_144f69a60(void)

undefined4 *
FUN_144f69a60(longlong *param_1,undefined4 *param_2,int *param_3,longlong param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (-1 < *param_3) {
    lVar1 = *(longlong *)(*param_1 + 0x18) + (longlong)*param_3 * 0x18;
    if (0 < (int)param_5) {
      iVar3 = *(int *)(lVar1 + 0x10);
      uVar5 = (ulonglong)param_5;
      do {
        iVar4 = 0;
        if (0 < iVar3) {
          lVar2 = 0;
          do {
            iVar4 = iVar4 + 1;
            *(undefined8 *)(param_4 + *(longlong *)(lVar2 + *(longlong *)(lVar1 + 8))) =
                 *(undefined8 *)(lVar2 + 8 + *(longlong *)(lVar1 + 8));
            iVar3 = *(int *)(lVar1 + 0x10);
            lVar2 = lVar2 + 0x10;
          } while (iVar4 < iVar3);
        }
        param_4 = param_4 + param_3[1];
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f69b00 FUN_144f69b00 body=394 status=ok
// SIG undefined FUN_144f69b00(void)

int * FUN_144f69b00(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_48;
  undefined4 local_40;
  uint local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  plVar7 = (longlong *)(*param_1 + 0x38);
  local_res8 = param_3;
  lVar4 = FUN_144f6bce0(plVar7,&local_res8);
  if (lVar4 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (ulonglong)*(uint *)(lVar4 + 4);
  }
  iVar3 = (int)uVar6;
  if ((char)(uVar6 >> 0x1f) == '\x01') {
    local_3c = 0x80000000;
    local_48 = 0;
    local_40 = 0;
    FUN_144f6af80(plVar7,param_3,&local_48,0);
    local_38 = 0;
    local_30 = 0;
    local_2c = 0x80000000;
    puVar5 = (undefined8 *)FUN_144f6b1c0(plVar7,local_res10,&local_res8,&local_38);
    local_res8 = *puVar5;
    plVar1 = (longlong *)(*plVar7 + ((longlong)(int)local_res8 * 3 + 1) * 8);
    if (&local_48 != plVar1) {
      FUN_144f6b140(plVar1,&PTR_vftable_14c6e47a0);
      FUN_144f6b140(&local_48,&PTR_vftable_14c6e47a0);
      lVar4 = *plVar1;
      *plVar1 = local_48;
      *(undefined4 *)(plVar1 + 1) = local_40;
      uVar2 = *(uint *)((longlong)plVar1 + 0xc);
      *(uint *)((longlong)plVar1 + 0xc) = local_3c;
      local_48 = lVar4;
      local_3c = uVar2;
    }
    local_40 = 0;
    if ((-1 < (int)local_3c) && (local_48 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_48,(ulonglong)(local_3c & 0x7fffffff) << 4);
    }
    iVar3 = (int)local_res8;
    local_48 = 0;
    local_3c = 0x80000000;
  }
  iVar8 = -1;
  if (*(int *)(*plVar7 + 0x10 + (longlong)iVar3 * 0x18) != 0) {
    iVar8 = iVar3;
  }
  iVar3 = FUN_144beec90(param_3);
  param_2[1] = iVar3;
  *param_2 = iVar8;
  return param_2;
}



// FUNCTION 144f69c90 FUN_144f69c90 body=240 status=ok
// SIG undefined FUN_144f69c90(void)

undefined4 *
FUN_144f69c90(longlong *param_1,undefined4 *param_2,int *param_3,longlong param_4,undefined8 param_5
             ,uint param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar1 = *param_3;
  if (iVar1 < 0) {
    *param_2 = 0;
    return param_2;
  }
  iVar2 = *(int *)(*(longlong *)(*param_1 + 0x38) + 0x10 + (longlong)iVar1 * 0x18);
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x38) + 8 + (longlong)iVar1 * 0x18);
  if ((iVar2 != 0) && (0 < (int)param_6)) {
    uVar7 = (ulonglong)param_6;
    lVar5 = (longlong)(iVar2 + -1);
    do {
      if (-1 < lVar5) {
        plVar4 = (longlong *)(lVar5 * 0x10 + lVar3);
        lVar6 = lVar5;
        do {
          (*(code *)plVar4[1])(*plVar4 + param_4);
          lVar6 = lVar6 + -1;
          plVar4 = plVar4 + -2;
        } while (-1 < lVar6);
      }
      param_4 = param_4 + param_3[1];
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f69d80 FUN_144f69d80 body=409 status=ok
// SIG undefined FUN_144f69d80(void)

longlong FUN_144f69d80(longlong *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res8;
  int local_res18 [4];
  
  lVar5 = *param_1;
  local_res18[0] = param_3;
  lVar4 = FUN_144f6beb0(lVar5 + 0xa0,local_res18);
  if ((lVar4 != 0) &&
     (lVar5 = *(longlong *)(lVar5 + 0xa0) + (longlong)*(int *)(lVar4 + 4) * 0x18, lVar5 != 0)) {
    plVar7 = *(longlong **)(lVar5 + 8);
    plVar8 = plVar7 + *(int *)(lVar5 + 0x10);
    for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
      iVar3 = FUN_144bef170(*plVar7,param_2);
      if (iVar3 == 0) {
        return *plVar7;
      }
    }
  }
  lVar5 = FUN_144beebe0(param_2);
  if ((lVar5 != 0) && (iVar3 = FUN_144f89af0(*param_1 + 0x58,lVar5), iVar3 == param_3)) {
    lVar4 = *param_1;
    plVar8 = (longlong *)(lVar4 + 0xa0);
    FUN_144f6c140(plVar8,&local_res8,local_res18);
    if ((int)local_res8 == *(int *)(lVar4 + 0xa8)) {
      iVar3 = *(int *)(lVar4 + 0xa8) + 1;
      if ((int)(*(uint *)(lVar4 + 0xac) & 0x7fffffff) < iVar3) {
        FUN_144f6c670(plVar8,&PTR_vftable_14c6e47a0,(longlong)iVar3);
      }
      piVar1 = (int *)(*plVar8 + (longlong)*(int *)(lVar4 + 0xa8) * 0x18);
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_3;
        piVar1[2] = 0;
        piVar1[3] = 0;
        piVar1[4] = 0;
        piVar1[5] = -0x80000000;
      }
      *(int *)(lVar4 + 0xa8) = iVar3;
    }
    lVar6 = (longlong)(int)local_res8;
    lVar2 = *plVar8;
    iVar3 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18) + 1;
    lVar4 = lVar2 + lVar6 * 0x18;
    if ((int)(*(uint *)(lVar2 + 0x14 + lVar6 * 0x18) & 0x7fffffff) < iVar3) {
      FUN_144bf0cc0(lVar4 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    plVar8 = (longlong *)(*(longlong *)(lVar4 + 8) + (longlong)*(int *)(lVar4 + 0x10) * 8);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = lVar5;
    }
    *(int *)(lVar4 + 0x10) = iVar3;
    return lVar5;
  }
  return 0;
}



// FUNCTION 144f69f20 FUN_144f69f20 body=12 status=ok
// SIG undefined FUN_144f69f20(void)

void FUN_144f69f20(longlong *param_1)

{
  FUN_144f8a220(*param_1 + 0x80);
  return;
}



// FUNCTION 144f69f30 FUN_144f69f30 body=219 status=ok
// SIG undefined FUN_144f69f30(void)

undefined4 * FUN_144f69f30(undefined4 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int local_res8;
  int iStackX_c;
  
  lVar2 = DAT_14c798b78;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c798b78 + 0xc0));
  FUN_144f6ab20(lVar2 + 0x18,&local_res8);
  if (-1 < local_res8) {
    lVar1 = *(longlong *)(lVar2 + 0x18) + (longlong)local_res8 * 0x18;
    if (0 < (int)param_4) {
      iVar4 = *(int *)(lVar1 + 0x10);
      uVar6 = (ulonglong)param_4;
      do {
        iVar5 = 0;
        if (0 < iVar4) {
          lVar3 = 0;
          do {
            iVar5 = iVar5 + 1;
            *(undefined8 *)(param_2 + *(longlong *)(lVar3 + *(longlong *)(lVar1 + 8))) =
                 *(undefined8 *)(lVar3 + 8 + *(longlong *)(lVar1 + 8));
            iVar4 = *(int *)(lVar1 + 0x10);
            lVar3 = lVar3 + 0x10;
          } while (iVar5 < iVar4);
        }
        param_2 = param_2 + iStackX_c;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xc0));
  return param_1;
}



// FUNCTION 144f6a010 FUN_144f6a010 body=224 status=ok
// SIG undefined FUN_144f6a010(void)

void FUN_144f6a010(longlong param_1,undefined8 param_2,uint param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int local_res20;
  int iStackX_24;
  longlong local_38 [2];
  
  lVar4 = DAT_14c798b78;
  uVar6 = (ulonglong)param_3;
  local_38[0] = DAT_14c798b78;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14c798b78 + 0xc0);
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c798b78 + 0xc0));
  FUN_144f69b00(local_38,&local_res20,param_2);
  if (-1 < local_res20) {
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 8 + (longlong)local_res20 * 0x18);
    iVar1 = *(int *)(*(longlong *)(lVar4 + 0x38) + 0x10 + (longlong)local_res20 * 0x18);
    if ((iVar1 != 0) && (0 < (int)param_3)) {
      lVar4 = (longlong)(iVar1 + -1);
      do {
        if (-1 < lVar4) {
          plVar3 = (longlong *)(lVar4 * 0x10 + lVar2);
          lVar5 = lVar4;
          do {
            (*(code *)plVar3[1])(*plVar3 + param_1);
            lVar5 = lVar5 + -1;
            plVar3 = plVar3 + -2;
          } while (-1 < lVar5);
        }
        param_1 = param_1 + iStackX_24;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144f6a0e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 144f6a0f0 FUN_144f6a0f0 body=88 status=ok
// SIG undefined FUN_144f6a0f0(void)

bool FUN_144f6a0f0(undefined8 param_1)

{
  longlong lVar1;
  longlong local_res10;
  uint local_res18 [4];
  
  lVar1 = DAT_14c798b78;
  local_res10 = DAT_14c798b78;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c798b78 + 0xc0));
  FUN_144f69b00(&local_res10,local_res18,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xc0));
  return local_res18[0] < 0x80000000;
}



// FUNCTION 144f6a150 FUN_144f6a150 body=696 status=ok
// SIG undefined FUN_144f6a150(void)

undefined4 * FUN_144f6a150(undefined4 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 local_res10 [8];
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  undefined **local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  cVar3 = FUN_144bef570(param_2[1],param_3[1]);
  if (cVar3 != '\0') {
    puVar4 = (uint *)FUN_144b45d50(param_3[1],local_res10);
    if ((*puVar4 >> 3 & 1) == 0) {
      lVar1 = param_2[1];
      uVar2 = *param_3;
      lVar7 = *param_2;
      puVar5 = (undefined8 *)FUN_144befe50(lVar1,0x80);
      if ((puVar5 != (undefined8 *)0x0) && ((code *)*puVar5 != (code *)0x0)) {
        (*(code *)*puVar5)(lVar7,uVar2,lVar1,1);
        *param_1 = 0;
        return param_1;
      }
    }
    local_70 = *param_2;
    local_60 = param_2[2];
    local_68 = param_2[1];
    if ((local_60 & 1) != 0) {
      FUN_144be6b20(local_60 & 0xfffffffffffffffe);
    }
    local_88 = *param_3;
    local_78 = param_3[2];
    local_80 = param_3[1];
    if ((local_78 & 1) != 0) {
      FUN_144be6b20(local_78 & 0xfffffffffffffffe);
    }
    FUN_144f77630(local_58);
    local_58[0] = _anon_F6D9FC12::CopyCallback::vftable;
    local_40 = local_88;
    local_38 = local_80;
    local_30 = local_78;
    if ((local_78 & 1) != 0) {
      FUN_144be6b20(local_78 & 0xfffffffffffffffe);
    }
    FUN_144f771b0(&local_70,&local_88,local_58);
    if (local_70 != 0) {
      *param_1 = 0;
      if ((local_30 & 1) != 0) {
        FUN_144be6b30(local_30 & 0xfffffffffffffffe);
      }
      FUN_144f77650(local_58);
      if ((local_78 & 1) != 0) {
        FUN_144be6b30(local_78 & 0xfffffffffffffffe);
      }
      if ((local_60 & 1) == 0) {
        return param_1;
      }
      FUN_144be6b30(local_60 & 0xfffffffffffffffe);
      return param_1;
    }
    if ((local_30 & 1) != 0) {
      FUN_144be6b30(local_30 & 0xfffffffffffffffe);
    }
    FUN_144f77650(local_58);
    if ((local_78 & 1) != 0) {
      FUN_144be6b30(local_78 & 0xfffffffffffffffe);
    }
    if ((local_60 & 1) != 0) {
      FUN_144be6b30(local_60 & 0xfffffffffffffffe);
    }
  }
  lVar1 = param_2[1];
  lVar7 = *param_2;
  puVar5 = (undefined8 *)FUN_144befe50(lVar1,0x40);
  if ((puVar5 == (undefined8 *)0x0) || ((code *)*puVar5 == (code *)0x0)) {
    lVar1 = param_2[1];
    puVar4 = (uint *)FUN_144bef800(lVar1,local_res10);
    if ((3 < (*puVar4 & 0x1f) - 2) || (lVar1 == 0)) {
      lVar1 = param_2[1];
      puVar6 = (undefined4 *)FUN_144bef800(lVar1,local_res10);
      lVar7 = 0;
      if (((byte)*puVar6 & 0x1f) == 6) {
        lVar7 = lVar1;
      }
      if (lVar7 == 0) goto LAB_144f6a3e3;
    }
    piVar8 = (int *)FUN_144f69360(local_res10,*param_2,param_2[1],1);
    if (*piVar8 < 0) goto LAB_144f6a3e3;
  }
  else {
    (*(code *)*puVar5)(lVar7,lVar1,1);
  }
  piVar8 = (int *)FUN_144bec0a0(param_2,local_res10,param_3);
  if (-1 < *piVar8) {
    *param_1 = 0;
    return param_1;
  }
  lVar1 = param_2[1];
  lVar7 = *param_2;
  puVar5 = (undefined8 *)FUN_144befe50(lVar1,0x100);
  if ((puVar5 != (undefined8 *)0x0) && ((code *)*puVar5 != (code *)0x0)) {
    (*(code *)*puVar5)(lVar7,lVar1,1);
  }
LAB_144f6a3e3:
  *param_1 = 0x80040200;
  return param_1;
}



// FUNCTION 144f6a410 FUN_144f6a410 body=184 status=ok
// SIG undefined FUN_144f6a410(void)

undefined1 FUN_144f6a410(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  
  puVar3 = (ulonglong *)FUN_144befe50(param_1,0x2000);
  if ((puVar3 != (ulonglong *)0x0) && (*puVar3 != 0)) {
    puVar2 = (ulonglong *)FUN_144befe50(param_2,0x2000);
    do {
      uVar1 = *puVar2;
      if ((DAT_14c798a78 & 1) == 0) break;
    } while (((uint)*puVar3 & 3) != ((uint)uVar1 & 3));
    iVar4 = (int)(*puVar3 >> 0x11);
    if (((int)(uVar1 >> 0x11) <= iVar4) && (iVar4 <= (int)((uint)(uVar1 >> 2) & 0x7fff))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144f6a4d0 FUN_144f6a4d0 body=19 status=ok
// SIG undefined FUN_144f6a4d0(void)

void FUN_144f6a4d0(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144f6a4df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c797f68 + 0x58))(DAT_14c797f68,param_1);
  return;
}



// FUNCTION 144f6a4f0 FUN_144f6a4f0 body=103 status=ok
// SIG undefined FUN_144f6a4f0(void)

void FUN_144f6a4f0(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144f6a560 FUN_144f6a560 body=249 status=ok
// SIG undefined FUN_144f6a560(void)

void FUN_144f6a560(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 + (longlong)(int)param_1[1] * 6 != puVar3) {
    puVar4 = puVar3 + (longlong)(int)param_1[1] * 6 + 5;
    do {
      puVar4[-7] = 0;
      if ((-1 < (int)puVar4[-6]) && (*(longlong *)(puVar4 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -9),
                   (ulonglong)(puVar4[-6] & 0x7fffffff) << 4);
      }
      puVar1 = puVar4 + -0xb;
      *(undefined8 *)(puVar4 + -9) = 0;
      puVar4[-6] = 0x80000000;
      puVar4 = puVar4 + -6;
    } while (puVar1 != puVar3);
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



// FUNCTION 144f6a660 FUN_144f6a660 body=560 status=ok
// SIG undefined FUN_144f6a660(void)

void FUN_144f6a660(undefined8 param_1,uint *param_2,longlong *param_3,longlong param_4)

{
  byte bVar1;
  short *psVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint *puVar9;
  short *psVar10;
  uint *puVar11;
  longlong lVar12;
  undefined1 local_res10 [8];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_2 != (uint *)0x0) {
    do {
      bVar1 = (byte)*param_2;
      while ((~bVar1 & 1) != 0) {
        param_2 = *(uint **)(param_2 + 2);
        bVar1 = (byte)*param_2;
      }
      puVar6 = (undefined4 *)FUN_144bef800(param_2,local_res10);
      puVar9 = (uint *)0x0;
      if (((byte)*puVar6 & 0x1f) == 8) {
        puVar9 = param_2;
      }
      if (puVar9 != (uint *)0x0) {
        puVar7 = (undefined8 *)FUN_144befe50(puVar9,1);
        puVar11 = (uint *)0x0;
        if (puVar7 != (undefined8 *)0x0) {
          puVar11 = (uint *)*puVar7;
        }
        iVar5 = (int)((ulonglong)puVar11 >> 8);
        while (iVar5 = iVar5 + -1, -1 < iVar5) {
          FUN_144beff00(puVar9,&local_38);
          FUN_144beff00(puVar9,&local_40);
          uVar3 = local_40;
          iVar4 = FUN_144beec90(local_38);
          FUN_144f6a660(param_1,uVar3,param_3,iVar4 * iVar5 + param_4);
        }
      }
      if ((((*param_2 >> 0x17 & 1) != 0) &&
          (puVar7 = (undefined8 *)FUN_144befea0(param_2,0x800000), puVar7 != (undefined8 *)0x0)) &&
         (psVar2 = (short *)*puVar7, psVar2 != (short *)0x0)) {
        for (psVar10 = psVar2 + 4 + (longlong)*psVar2 * 4; psVar10 != psVar2 + 4;
            psVar10 = psVar10 + -4) {
          uVar3 = *(undefined8 *)(psVar10 + -4);
          local_30 = uVar3;
          iVar5 = FUN_144bf0700(&local_30);
          FUN_144f6a660(param_1,uVar3,param_3,iVar5 + param_4);
        }
      }
      if ((((*param_2 >> 0xe & 1) != 0) &&
          (plVar8 = (longlong *)FUN_144befea0(param_2,0x4000), plVar8 != (longlong *)0x0)) &&
         ((plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0 &&
          (iVar5 = (int)((*plVar8 << 4) >> 4) + -1, lVar12 = (longlong)iVar5, -1 < iVar5)))) {
        plVar8 = plVar8 + lVar12 * 2 + 1;
        do {
          FUN_144f6a660(param_1,*plVar8,param_3,plVar8[1] + param_4);
          lVar12 = lVar12 + -1;
          plVar8 = plVar8 + -2;
        } while (-1 < lVar12);
      }
      puVar9 = (uint *)FUN_144b45d50(param_2,local_48);
      if ((*puVar9 >> 7 & 1) != 0) {
        iVar5 = (int)param_3[1] + 1;
        if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar5) {
          FUN_144f6bf20(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar5);
        }
        lVar12 = param_3[1];
        *(int *)(param_3 + 1) = iVar5;
        plVar8 = (longlong *)((longlong)(int)lVar12 * 0x10 + *param_3);
        *plVar8 = param_4;
        plVar8[1] = 0;
      }
      param_2 = *(uint **)(param_2 + 2);
    } while (param_2 != (uint *)0x0);
  }
  return;
}



// FUNCTION 144f6a890 FUN_144f6a890 body=647 status=ok
// SIG undefined FUN_144f6a890(void)

undefined4 *
FUN_144f6a890(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong local_248;
  longlong local_240 [3];
  undefined1 local_228 [512];
  
  iVar1 = FUN_144beec90(param_3);
  lVar10 = (longlong)iVar1;
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
  uVar8 = 0;
  uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x3d0) + 0x10);
  if (*(longlong *)(uVar6 + 8) != 0) {
    uVar6 = uVar8;
  }
  local_240[0] = lVar10;
  if (uVar6 == 0) {
    lVar3 = (*DAT_14c787670)(1,local_240,0x40);
    uVar7 = uVar8;
  }
  else {
    local_248 = lVar10 + 0x3fU & 0xffffffffffffffc0;
    uVar7 = uVar6;
    if (local_248 <= *(ulonglong *)(uVar6 + 0x28)) {
      lVar3 = *(longlong *)(uVar6 + 0x38);
      if (local_248 + lVar3 <= *(ulonglong *)(uVar6 + 0x40)) {
        *(ulonglong *)(uVar6 + 0x38) = local_248 + lVar3;
        goto LAB_144f6a981;
      }
    }
    lVar3 = FUN_144b454a0(uVar6,&local_248);
  }
LAB_144f6a981:
  FUN_144bfb540(lVar3,0,lVar10);
  piVar4 = (int *)FUN_144f69360(&local_248,lVar3,param_3,1);
  if (*piVar4 < 0) {
    FUN_144bde670(local_240,local_228,0x200);
    FUN_144be6160(local_240,
                  "Attempted to get the vtable from a non-constructible type, it must have either an accessible default constructor or a bypass constructor"
                 );
    FUN_144bfc0d0(0xabbac0ae,local_228,"Reflect\\Core\\Detail\\hkReflectTypeDetail.cpp",0xfb);
    FUN_144bde6e0(local_240);
    *param_2 = 0x80040200;
    if (uVar7 != 0) {
      uVar8 = lVar10 + 0x3fU & 0xffffffffffffffc0;
      if ((uVar8 <= *(ulonglong *)(uVar7 + 0x28)) && (uVar8 + lVar3 == *(longlong *)(uVar7 + 0x38)))
      {
        *(longlong *)(uVar7 + 0x38) = lVar3;
        if (*(longlong *)(uVar7 + 0x48) != lVar3) {
          return param_2;
        }
        FUN_144be8430(uVar7);
        return param_2;
      }
      FUN_144be8550(uVar7,lVar3);
      return param_2;
    }
  }
  else {
    uVar7 = uVar8;
    if (0 < (int)param_4[1]) {
      do {
        uVar8 = uVar8 + 0x10;
        uVar9 = (int)uVar7 + 1;
        *(undefined8 *)(*param_4 + -8 + uVar8) =
             *(undefined8 *)(lVar3 + *(longlong *)(*param_4 + -0x10 + uVar8));
        uVar7 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)param_4[1]);
    }
    puVar5 = (undefined8 *)FUN_144befe50(param_3,0x100);
    if ((puVar5 != (undefined8 *)0x0) && ((code *)*puVar5 != (code *)0x0)) {
      (*(code *)*puVar5)(lVar3,param_3,1);
    }
    *param_2 = 0;
    if (uVar6 != 0) {
      uVar8 = lVar10 + 0x3fU & 0xffffffffffffffc0;
      if ((uVar8 <= *(ulonglong *)(uVar6 + 0x28)) && (lVar3 + uVar8 == *(longlong *)(uVar6 + 0x38)))
      {
        *(longlong *)(uVar6 + 0x38) = lVar3;
        if (*(longlong *)(uVar6 + 0x48) != lVar3) {
          return param_2;
        }
        FUN_144be8430(uVar6);
        return param_2;
      }
      FUN_144be8550(uVar6,lVar3);
      return param_2;
    }
  }
  (*DAT_14c787678)(1,lVar3,lVar10);
  return param_2;
}



// FUNCTION 144f6ab20 FUN_144f6ab20 body=457 status=ok
// SIG undefined FUN_144f6ab20(void)

int * FUN_144f6ab20(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong local_48;
  int local_40;
  uint local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_res18 = param_3;
  puVar4 = (uint *)FUN_144b45d50(param_3,local_res20);
  if ((*puVar4 >> 1 & 1) == 0) {
    lVar5 = FUN_144f6bb10(param_1,&local_res18);
    if (lVar5 == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (ulonglong)*(uint *)(lVar5 + 4);
    }
    iVar3 = (int)uVar8;
    if ((char)(uVar8 >> 0x1f) == '\x01') {
      local_48 = 0;
      local_40 = 0;
      local_3c = 0x80000000;
      FUN_144f6a660(param_1,param_3,&local_48,0);
      if ((local_40 != 0) &&
         (piVar6 = (int *)FUN_144f6a890(param_1,local_res20,param_3,&local_48), *piVar6 < 0)) {
        local_40 = 0;
      }
      local_38 = 0;
      local_30 = 0;
      local_2c = 0x80000000;
      puVar7 = (undefined8 *)FUN_144f6ad70(param_1,local_res20,&local_res18,&local_38);
      local_res18 = *puVar7;
      plVar1 = (longlong *)(*param_1 + ((longlong)(int)local_res18 * 3 + 1) * 8);
      if (&local_48 != plVar1) {
        FUN_144f6acf0(plVar1,&PTR_vftable_14c6e47a0);
        FUN_144f6acf0(&local_48,&PTR_vftable_14c6e47a0);
        lVar5 = *plVar1;
        *plVar1 = local_48;
        *(int *)(plVar1 + 1) = local_40;
        uVar2 = *(uint *)((longlong)plVar1 + 0xc);
        *(uint *)((longlong)plVar1 + 0xc) = local_3c;
        local_48 = lVar5;
        local_3c = uVar2;
      }
      local_40 = 0;
      if ((-1 < (int)local_3c) && (local_48 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_48,(ulonglong)(local_3c & 0x7fffffff) << 4);
      }
      iVar3 = (int)local_res18;
      local_48 = 0;
      local_3c = 0x80000000;
    }
    iVar9 = -1;
    if (*(int *)(*param_1 + 0x10 + (longlong)iVar3 * 0x18) != 0) {
      iVar9 = iVar3;
    }
    iVar3 = FUN_144beec90(param_3);
    param_2[1] = iVar3;
    *param_2 = iVar9;
  }
  else {
    *param_2 = -1;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 144f6acf0 FUN_144f6acf0 body=113 status=ok
// SIG undefined FUN_144f6acf0(void)

void FUN_144f6acf0(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144f6ad70 FUN_144f6ad70 body=257 status=ok
// SIG undefined FUN_144f6ad70(void)

int * FUN_144f6ad70(longlong *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  
  FUN_144f6bbb0();
  if (*param_2 == (int)param_1[1]) {
    iVar7 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar7) {
      FUN_144f6c250(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar4 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_3;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x14) = 0x80000000;
      puVar6 = (undefined8 *)*param_4;
      uVar1 = *(uint *)(param_4 + 1);
      if (0 < (int)uVar1) {
        uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                          (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
        puVar4[1] = uVar3;
        uVar5 = (ulonglong)uVar1;
        *(uint *)(puVar4 + 2) = uVar1;
        *(uint *)((longlong)puVar4 + 0x14) = uVar1;
        puVar4 = (undefined8 *)puVar4[1];
        do {
          if (puVar4 != (undefined8 *)0x0) {
            uVar3 = *puVar6;
            uVar2 = puVar6[1];
            puVar6 = puVar6 + 2;
            *puVar4 = uVar3;
            puVar4[1] = uVar2;
          }
          uVar5 = uVar5 - 1;
          puVar4 = puVar4 + 2;
        } while (uVar5 != 0);
      }
    }
    *(int *)(param_1 + 1) = iVar7;
  }
  return param_2;
}



// FUNCTION 144f6ae80 FUN_144f6ae80 body=249 status=ok
// SIG undefined FUN_144f6ae80(void)

void FUN_144f6ae80(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 + (longlong)(int)param_1[1] * 6 != puVar3) {
    puVar4 = puVar3 + (longlong)(int)param_1[1] * 6 + 5;
    do {
      puVar4[-7] = 0;
      if ((-1 < (int)puVar4[-6]) && (*(longlong *)(puVar4 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -9),
                   (ulonglong)(puVar4[-6] & 0x7fffffff) << 4);
      }
      puVar1 = puVar4 + -0xb;
      *(undefined8 *)(puVar4 + -9) = 0;
      puVar4[-6] = 0x80000000;
      puVar4 = puVar4 + -6;
    } while (puVar1 != puVar3);
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



// FUNCTION 144f6af80 FUN_144f6af80 body=442 status=ok
// SIG undefined FUN_144f6af80(void)

void FUN_144f6af80(undefined8 param_1,uint *param_2,longlong *param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  short *psVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  short *psVar11;
  uint *puVar12;
  undefined1 local_res10 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  for (; param_2 != (uint *)0x0; param_2 = *(uint **)(param_2 + 2)) {
    bVar1 = (byte)*param_2;
    while ((~bVar1 & 1) != 0) {
      param_2 = *(uint **)(param_2 + 2);
      bVar1 = (byte)*param_2;
    }
    plVar7 = (longlong *)FUN_144befe50(param_2,0x1000000);
    if ((plVar7 != (longlong *)0x0) && (lVar2 = *plVar7, lVar2 != 0)) {
      iVar10 = (int)param_3[1] + 1;
      if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar10) {
        FUN_144f6c030(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar10);
      }
      lVar5 = param_3[1];
      *(int *)(param_3 + 1) = iVar10;
      plVar7 = (longlong *)((longlong)(int)lVar5 * 0x10 + *param_3);
      *plVar7 = param_4;
      plVar7[1] = lVar2;
    }
    puVar8 = (undefined4 *)FUN_144bef800(param_2,local_res10);
    puVar12 = (uint *)0x0;
    if (((byte)*puVar8 & 0x1f) == 8) {
      puVar12 = param_2;
    }
    if (puVar12 != (uint *)0x0) {
      puVar9 = (undefined8 *)FUN_144befe50(puVar12,1);
      if (puVar9 == (undefined8 *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)((ulonglong)*puVar9 >> 8);
      }
      while (iVar10 = iVar10 + -1, -1 < iVar10) {
        FUN_144beff00(puVar12,&local_40);
        FUN_144beff00(puVar12,&local_48);
        uVar4 = local_48;
        iVar6 = FUN_144beec90(local_40);
        FUN_144f6af80(param_1,uVar4,param_3,iVar6 * iVar10 + param_4);
      }
    }
    if ((((*param_2 >> 0x17 & 1) != 0) &&
        (puVar9 = (undefined8 *)FUN_144befea0(param_2,0x800000), puVar9 != (undefined8 *)0x0)) &&
       (psVar3 = (short *)*puVar9, psVar3 != (short *)0x0)) {
      for (psVar11 = psVar3 + 4 + (longlong)*psVar3 * 4; psVar11 != psVar3 + 4;
          psVar11 = psVar11 + -4) {
        uVar4 = *(undefined8 *)(psVar11 + -4);
        local_38[0] = uVar4;
        iVar10 = FUN_144bf0700(local_38);
        FUN_144f6af80(param_1,uVar4,param_3,iVar10 + param_4);
      }
    }
  }
  return;
}



// FUNCTION 144f6b140 FUN_144f6b140 body=113 status=ok
// SIG undefined FUN_144f6b140(void)

void FUN_144f6b140(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144f6b1c0 FUN_144f6b1c0 body=257 status=ok
// SIG undefined FUN_144f6b1c0(void)

int * FUN_144f6b1c0(longlong *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  
  FUN_144f6bd80();
  if (*param_2 == (int)param_1[1]) {
    iVar7 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar7) {
      FUN_144f6c460(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar4 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_3;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x14) = 0x80000000;
      puVar6 = (undefined8 *)*param_4;
      uVar1 = *(uint *)(param_4 + 1);
      if (0 < (int)uVar1) {
        uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                          (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
        puVar4[1] = uVar3;
        uVar5 = (ulonglong)uVar1;
        *(uint *)(puVar4 + 2) = uVar1;
        *(uint *)((longlong)puVar4 + 0x14) = uVar1;
        puVar4 = (undefined8 *)puVar4[1];
        do {
          if (puVar4 != (undefined8 *)0x0) {
            uVar3 = *puVar6;
            uVar2 = puVar6[1];
            puVar6 = puVar6 + 2;
            *puVar4 = uVar3;
            puVar4[1] = uVar2;
          }
          uVar5 = uVar5 - 1;
          puVar4 = puVar4 + 2;
        } while (uVar5 != 0);
      }
    }
    *(int *)(param_1 + 1) = iVar7;
  }
  return param_2;
}



// FUNCTION 144f6b2d0 FUN_144f6b2d0 body=249 status=ok
// SIG undefined FUN_144f6b2d0(void)

void FUN_144f6b2d0(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 + (longlong)(int)param_1[1] * 6 != puVar3) {
    puVar4 = puVar3 + (longlong)(int)param_1[1] * 6 + 5;
    do {
      puVar4[-7] = 0;
      if ((-1 < (int)puVar4[-6]) && (*(longlong *)(puVar4 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -9),
                   (ulonglong)(puVar4[-6] & 0x7fffffff) << 3);
      }
      puVar1 = puVar4 + -0xb;
      *(undefined8 *)(puVar4 + -9) = 0;
      puVar4[-6] = 0x80000000;
      puVar4 = puVar4 + -6;
    } while (puVar1 != puVar3);
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



// FUNCTION 144f6b3d0 FUN_144f6b3d0 body=334 status=ok
// SIG undefined FUN_144f6b3d0(void)

undefined4 * FUN_144f6b3d0(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  if (*param_2 != 0) {
    *param_1 = 0;
    return param_1;
  }
  local_res8 = 0xe8;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"DerivedDataCache");
  }
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 1;
    puVar1[1] = 0xffffffff;
    *puVar1 = hkReflect::Detail::DerivedDataCache::vftable;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80000000;
    uVar2 = FUN_144b3d480();
    puVar1[5] = uVar2;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x80000000;
    uVar2 = FUN_144b3d480();
    puVar1[9] = uVar2;
    *(undefined4 *)(puVar1 + 10) = 0;
    FUN_144f89a90(puVar1 + 0xb,0xffffffffffffffff);
    FUN_144f8a1d0(puVar1 + 0x10);
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0x80000000;
    uVar2 = FUN_144b3d480();
    puVar1[0x16] = uVar2;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    FUN_144bdde80(puVar1 + 0x18);
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)*param_2;
  if ((puVar3 != puVar1) && (*param_2 = (longlong)puVar3, puVar1 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f6b520 FUN_144f6b520 body=95 status=ok
// SIG undefined FUN_144f6b520(void)

undefined4 * FUN_144f6b520(undefined4 *param_1,longlong *param_2)

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



// FUNCTION 144f6b580 FUN_144f6b580 body=10 status=ok
// SIG undefined FUN_144f6b580(void)

undefined4 * FUN_144f6b580(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f6b590 FUN_144f6b590 body=303 status=ok
// SIG undefined FUN_144f6b590(void)

undefined8
FUN_144f6b590(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  ulonglong uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 local_res10 [8];
  ulonglong local_res18;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  (**(code **)(*(longlong *)(param_4[2] & 0xfffffffffffffffe) + 0x58))
            ((longlong *)(param_4[2] & 0xfffffffffffffffe),*param_4,param_4[1]);
  *param_5 = 0;
  FUN_144bf0690(&local_res18,param_3[1]);
  if ((local_res18 < 2) ||
     (puVar2 = (uint *)FUN_144bf04d0(&local_res18,&param_5), (*puVar2 >> 6 & 1) == 0)) {
    local_38 = *param_3;
    local_30 = param_3[1];
    local_28 = param_3[2];
  }
  else {
    uVar1 = *(ulonglong *)(param_3[1] + 8);
    puVar3 = (undefined4 *)FUN_144bef800(uVar1,local_res10);
    local_38 = *param_3;
    local_30 = 0;
    if (((byte)*puVar3 & 0x1f) == 6) {
      local_30 = uVar1;
    }
    local_28 = 0;
    if (local_30 != 0) {
      local_28 = FUN_144befdb0();
    }
  }
  if ((local_28 & 1) != 0) {
    FUN_144be6b20(local_28 & 0xfffffffffffffffe);
  }
  FUN_144bec0a0(&local_38,param_2,param_4);
  if ((local_28 & 1) != 0) {
    FUN_144be6b30(local_28 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144f6b6c0 FUN_144f6b6c0 body=109 status=ok
// SIG undefined FUN_144f6b6c0(void)

longlong FUN_144f6b6c0(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffe);
  }
  FUN_144f77650(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144f6b730 FUN_144f6b730 body=992 status=ok
// SIG undefined FUN_144f6b730(void)

void FUN_144f6b730(uint *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  longlong local_res8;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  puVar11 = (uint *)0x0;
  puVar14 = puVar11;
  if ((((*param_1 & 0x40) != 0) &&
      (puVar3 = (uint *)FUN_144befea0(param_1,0x40), puVar3 != (uint *)0x0)) &&
     (*(code **)puVar3 == FUN_144bf5580)) {
    *(code **)puVar3 = FUN_144bf35f0;
    puVar14 = puVar3;
  }
  puVar3 = puVar11;
  if ((((*param_1 & 0x80) != 0) &&
      (puVar4 = (uint *)FUN_144befea0(param_1,0x80), puVar4 != (uint *)0x0)) &&
     (*(code **)puVar4 == FUN_144bf55b0)) {
    *(code **)puVar4 = FUN_144bf3630;
    puVar3 = puVar4;
  }
  puVar4 = puVar11;
  if ((((*param_1 >> 9 & 1) != 0) &&
      (puVar5 = (uint *)FUN_144befea0(param_1,0x200), puVar5 != (uint *)0x0)) &&
     (*(code **)puVar5 == FUN_144bf55e0)) {
    *(code **)puVar5 = FUN_144bf3670;
    puVar4 = puVar5;
  }
  if (((puVar14 != (uint *)0x0) || (puVar3 != (uint *)0x0)) || (puVar4 != (uint *)0x0)) {
    iVar13 = (int)param_2[1] + -1;
    if (-1 < iVar13) {
      lVar9 = (longlong)iVar13;
      puVar10 = (undefined8 *)(*param_2 + lVar9 * 8);
      do {
        if ((uint *)*puVar10 == param_1) {
          if (iVar13 != -1) {
            return;
          }
          break;
        }
        iVar13 = iVar13 + -1;
        puVar10 = puVar10 + -1;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
    iVar13 = (int)param_2[1] + 1;
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar13) {
      FUN_144f614a0(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar13);
    }
    puVar10 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = param_1;
    }
    *(int *)(param_2 + 1) = iVar13;
    plVar6 = (longlong *)FUN_144bef430(param_1,local_48,&DAT_14c6deb20);
    puVar10 = (undefined8 *)*plVar6;
    if ((local_38 & 1) != 0) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
    }
    if (puVar10 == (undefined8 *)0x0) {
      puVar8 = (undefined4 *)FUN_144bef800(param_1,&local_res8);
      puVar5 = puVar11;
      if (((byte)*puVar8 & 0x1f) == 7) {
        puVar5 = param_1;
      }
      if (puVar5 == (uint *)0x0) {
        if (puVar14 != (uint *)0x0) {
          puVar14[0] = 0;
          puVar14[1] = 0;
        }
        if (puVar3 != (uint *)0x0) {
          puVar3[0] = 0;
          puVar3[1] = 0;
        }
        if (puVar4 != (uint *)0x0) {
          puVar4[0] = 0;
          puVar4[1] = 0;
        }
      }
      else {
        lVar9 = *(longlong *)(puVar5 + 2);
        if (lVar9 != 0) {
          FUN_144f6b730(lVar9,param_2);
          if ((puVar14 != (uint *)0x0) && (*(longlong *)puVar14 != 0)) {
            plVar6 = (longlong *)FUN_144befe50(lVar9,0x40);
            if ((plVar6 == (longlong *)0x0) || (*plVar6 == 0)) {
              puVar14[0] = 0;
              puVar14[1] = 0;
            }
            else if (*plVar6 != *(longlong *)puVar14) {
              *(code **)puVar14 = FUN_144bf4e90;
            }
          }
          if ((puVar3 != (uint *)0x0) && (*(longlong *)puVar3 != 0)) {
            plVar6 = (longlong *)FUN_144befe50(lVar9,0x80);
            if ((plVar6 == (longlong *)0x0) || (*plVar6 == 0)) {
              puVar3[0] = 0;
              puVar3[1] = 0;
            }
            else if (*plVar6 != *(longlong *)puVar3) {
              *(code **)puVar3 = FUN_144bf4fe0;
            }
          }
          if ((puVar4 != (uint *)0x0) && (*(longlong *)puVar4 != 0)) {
            plVar6 = (longlong *)FUN_144befe50(lVar9,0x200);
            if ((plVar6 == (longlong *)0x0) || (*plVar6 == 0)) {
              puVar4[0] = 0;
              puVar4[1] = 0;
            }
            else if (*plVar6 != *(longlong *)puVar4) {
              *(code **)puVar4 = FUN_144bf5180;
            }
          }
        }
        plVar6 = (longlong *)FUN_144bef8b0(puVar5,local_48);
        local_res8 = *plVar6;
        iVar13 = (int)(plVar6[1] - local_res8 >> 3);
        if (0 < iVar13) {
          do {
            lVar9 = local_res8;
            FUN_144f6b730(*(undefined8 *)(local_res8 + (longlong)puVar11 * 8),param_2);
            uVar1 = *(undefined8 *)(lVar9 + (longlong)puVar11 * 8);
            if ((puVar14 != (uint *)0x0) && (*(longlong *)puVar14 != 0)) {
              plVar6 = (longlong *)FUN_144befe50(uVar1,0x40);
              if ((plVar6 == (longlong *)0x0) || (*plVar6 == 0)) {
                puVar14[0] = 0;
                puVar14[1] = 0;
              }
              else if (*plVar6 != *(longlong *)puVar14) {
                *(code **)puVar14 = FUN_144bf4e90;
              }
            }
            if ((puVar3 != (uint *)0x0) && (*(longlong *)puVar3 != 0)) {
              plVar6 = (longlong *)FUN_144befe50(uVar1,0x80);
              if ((plVar6 == (longlong *)0x0) || (*plVar6 == 0)) {
                puVar3[0] = 0;
                puVar3[1] = 0;
              }
              else if (*plVar6 != *(longlong *)puVar3) {
                *(code **)puVar3 = FUN_144bf4fe0;
              }
            }
            if ((puVar4 != (uint *)0x0) && (*(longlong *)puVar4 != 0)) {
              plVar6 = (longlong *)FUN_144befe50(uVar1,0x200);
              if ((plVar6 == (longlong *)0x0) || (*plVar6 == 0)) {
                puVar4[0] = 0;
                puVar4[1] = 0;
              }
              else if (*plVar6 != *(longlong *)puVar4) {
                *(code **)puVar4 = FUN_144bf5180;
              }
            }
            puVar11 = (uint *)((longlong)puVar11 + 1);
          } while ((longlong)puVar11 < (longlong)iVar13);
        }
      }
    }
    else {
      puVar7 = (undefined8 *)FUN_144bef4c0();
      puVar2 = puVar7;
      if (*(short *)(puVar7 + 1) != 0) {
        do {
          if (*(char *)puVar2[3] == 't') {
            FUN_144f6b730(puVar2[2],param_2);
          }
          uVar12 = (int)puVar11 + 1;
          puVar11 = (uint *)(ulonglong)uVar12;
          puVar2 = puVar2 + 2;
        } while ((int)uVar12 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      (*(code *)*puVar10)(param_1);
    }
    *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  }
  return;
}



// FUNCTION 144f6bb10 FUN_144f6bb10 body=151 status=ok
// SIG undefined FUN_144f6bb10(void)

uint * FUN_144f6bb10(longlong *param_1,longlong *param_2)

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



// FUNCTION 144f6bbb0 FUN_144f6bbb0 body=300 status=ok
// SIG undefined FUN_144f6bbb0(void)

uint * FUN_144f6bbb0(longlong *param_1,uint *param_2,longlong *param_3)

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
LAB_144f6bcb4:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 0x18) == lVar1))
    {
      *param_2 = puVar6[1];
      goto LAB_144f6bcb4;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144f6bce0 FUN_144f6bce0 body=151 status=ok
// SIG undefined FUN_144f6bce0(void)

uint * FUN_144f6bce0(longlong *param_1,longlong *param_2)

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



// FUNCTION 144f6bd80 FUN_144f6bd80 body=300 status=ok
// SIG undefined FUN_144f6bd80(void)

uint * FUN_144f6bd80(longlong *param_1,uint *param_2,longlong *param_3)

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
LAB_144f6be84:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 0x18) == lVar1))
    {
      *param_2 = puVar6[1];
      goto LAB_144f6be84;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144f6beb0 FUN_144f6beb0 body=105 status=ok
// SIG undefined FUN_144f6beb0(void)

uint * FUN_144f6beb0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 0x18) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144f6bf20 FUN_144f6bf20 body=266 status=ok
// SIG undefined FUN_144f6bf20(void)

void FUN_144f6bf20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144f6c030 FUN_144f6c030 body=266 status=ok
// SIG undefined FUN_144f6c030(void)

void FUN_144f6c030(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144f6c140 FUN_144f6c140 body=257 status=ok
// SIG undefined FUN_144f6c140(void)

uint * FUN_144f6c140(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f6c219:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x18) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_144f6c219;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144f6c250 FUN_144f6c250 body=516 status=ok
// SIG undefined FUN_144f6c250(void)

ulonglong FUN_144f6c250(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int *piVar4;
  undefined8 *puVar5;
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
  puVar5 = (undefined8 *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar4 = (int *)((longlong)puVar5 + 0x14);
  if (0 < (int)uVar1) {
    piVar6 = (int *)(lVar3 + 0x14);
    uVar8 = (ulonglong)uVar1;
    piVar9 = piVar4;
    do {
      if (piVar6 + -5 != (int *)0x0) {
        *(undefined8 *)(piVar6 + -5) = *puVar5;
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = -0x80000000;
        FUN_144f6acf0(piVar9 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar6 + -3) = *(undefined8 *)(piVar9 + -3);
        piVar6[-1] = piVar9[-1];
        *piVar6 = *piVar9;
        piVar9[-3] = 0;
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        piVar9[0] = 0;
      }
      piVar6 = piVar6 + 6;
      puVar5 = puVar5 + 3;
      piVar9 = piVar9 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = (ulonglong)uVar1;
    do {
      piVar4[-1] = 0;
      if ((-1 < *piVar4) && (*(longlong *)(piVar4 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar4 = -0x80000000;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
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



// FUNCTION 144f6c460 FUN_144f6c460 body=516 status=ok
// SIG undefined FUN_144f6c460(void)

ulonglong FUN_144f6c460(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int *piVar4;
  undefined8 *puVar5;
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
  puVar5 = (undefined8 *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar4 = (int *)((longlong)puVar5 + 0x14);
  if (0 < (int)uVar1) {
    piVar6 = (int *)(lVar3 + 0x14);
    uVar8 = (ulonglong)uVar1;
    piVar9 = piVar4;
    do {
      if (piVar6 + -5 != (int *)0x0) {
        *(undefined8 *)(piVar6 + -5) = *puVar5;
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = -0x80000000;
        FUN_144f6b140(piVar9 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar6 + -3) = *(undefined8 *)(piVar9 + -3);
        piVar6[-1] = piVar9[-1];
        *piVar6 = *piVar9;
        piVar9[-3] = 0;
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        piVar9[0] = 0;
      }
      piVar6 = piVar6 + 6;
      puVar5 = puVar5 + 3;
      piVar9 = piVar9 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = (ulonglong)uVar1;
    do {
      piVar4[-1] = 0;
      if ((-1 < *piVar4) && (*(longlong *)(piVar4 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar4 = -0x80000000;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
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



// FUNCTION 144f6c670 FUN_144f6c670 body=516 status=ok
// SIG undefined FUN_144f6c670(void)

ulonglong FUN_144f6c670(longlong *param_1,longlong *param_2,ulonglong param_3)

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
        FUN_144f6a4f0(piVar9 + -3,&PTR_vftable_14c6e47a0);
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
      *piVar4 = -0x80000000;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
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



// FUNCTION 144f6c880 FUN_144f6c880 body=10 status=ok
// SIG undefined FUN_144f6c880(void)

undefined4 * FUN_144f6c880(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f6c890 FUN_144f6c890 body=25 status=ok
// SIG undefined FUN_144f6c890(void)

undefined4 *
FUN_144f6c890(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x98);
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 144f6c8b0 FUN_144f6c8b0 body=87 status=ok
// SIG undefined FUN_144f6c8b0(void)

undefined8 FUN_144f6c8b0(undefined8 param_1,ulonglong param_2)

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



// FUNCTION 144f6c910 FUN_144f6c910 body=243 status=ok
// SIG undefined FUN_144f6c910(void)

undefined4 *
FUN_144f6c910(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong local_res10;
  undefined8 local_28;
  longlong local_20;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    FUN_144beff00(param_4,&local_res10);
    uVar2 = 0;
    if (local_res10 != 0) {
      uVar2 = FUN_144befdb0(local_res10);
    }
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
    *param_5 = 0;
    param_5[1] = local_res10;
    uVar3 = param_5[2];
    param_5[2] = uVar2;
  }
  else {
    FUN_144beff00(param_4,&local_res10);
    FUN_144beec10(&local_28,lVar1 + (longlong)param_3,local_res10);
    uVar2 = 0;
    if (local_20 != 0) {
      uVar2 = FUN_144befdb0(local_20);
    }
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
    *param_5 = local_28;
    param_5[1] = local_20;
    uVar3 = param_5[2];
    param_5[2] = uVar2;
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f6ca10 FUN_144f6ca10 body=242 status=ok
// SIG undefined FUN_144f6ca10(void)

undefined4 *
FUN_144f6ca10(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  char cVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_28 [2];
  
  FUN_144beff00(param_4,local_28);
  plVar1 = param_5;
  lVar5 = param_5[1];
  puVar3 = (uint *)FUN_144bef800(local_28[0],&param_5);
  lVar4 = 0;
  if ((*puVar3 & 0x1f) == 0) {
    lVar4 = local_28[0];
  }
  if ((((lVar4 == 0) && (lVar5 != 0)) && (cVar2 = FUN_144b45dd0(lVar5,local_28[0]), cVar2 == '\0'))
     && (*plVar1 != 0)) {
    *param_2 = 0x80040200;
    return param_2;
  }
  lVar5 = *plVar1 - (longlong)param_3;
  if (*plVar1 == 0) {
    lVar5 = 0;
  }
  *param_3 = lVar5;
  lVar5 = plVar1[1];
  lVar4 = *plVar1;
  if (((lVar5 != 0) && (cVar2 = FUN_144b45dd0(lVar5,&DAT_14c6dc390), cVar2 != '\0')) &&
     ((puVar3 = (uint *)FUN_144b45d50(lVar5,&param_5), (*puVar3 >> 3 & 1) == 0 && (lVar4 != 0)))) {
    FUN_144b3d910(lVar4);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f6cb10 FUN_144f6cb10 body=31 status=ok
// SIG undefined FUN_144f6cb10(void)

undefined4 *
FUN_144f6cb10(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong param_5)

{
  longlong lVar1;
  
  *param_2 = 0;
  lVar1 = param_5 - (longlong)param_3;
  if (param_5 == 0) {
    lVar1 = 0;
  }
  *param_3 = lVar1;
  return param_2;
}



// FUNCTION 144f6cb30 FUN_144f6cb30 body=87 status=ok
// SIG undefined FUN_144f6cb30(void)

undefined8 FUN_144f6cb30(undefined8 param_1,ulonglong param_2)

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



// FUNCTION 144f6cb90 FUN_144f6cb90 body=65 status=ok
// SIG undefined FUN_144f6cb90(void)

longlong * FUN_144f6cb90(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000010;
  iVar1 = FUN_144beec90(param_2);
  uVar2 = iVar1 + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x22) = uVar2;
  *(uint *)((longlong)param_1 + 0x114) = uVar2;
  return param_1;
}



// FUNCTION 144f6cbe0 FUN_144f6cbe0 body=556 status=ok
// SIG undefined FUN_144f6cbe0(void)

void FUN_144f6cbe0(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong uStack_28;
  
  plVar2 = (longlong *)FUN_144bebf10(param_3,&local_60,param_5);
  lVar9 = 0;
  local_30 = 0;
  uStack_28 = 0;
  lVar6 = local_30;
  uVar7 = uStack_28;
  if ((plVar2[1] != 0) &&
     (puVar3 = (undefined4 *)FUN_144bef800(plVar2[1],local_78), lVar6 = local_30, uVar7 = uStack_28,
     ((byte)*puVar3 & 0x1f) == 8)) {
    lVar9 = *plVar2;
    lVar6 = plVar2[1];
    if ((*(byte *)(plVar2 + 2) & 1) != 0) {
      FUN_144be6b20(plVar2[2] & 0xfffffffffffffffe);
    }
    uVar7 = plVar2[2];
  }
  if ((local_50 & 1) != 0) {
    FUN_144be6b30(local_50 & 0xfffffffffffffffe);
  }
  if (lVar9 != 0) {
    puVar3 = (undefined4 *)FUN_144bef800(param_4,local_78);
    uVar5 = 0;
    if (((byte)*puVar3 & 0x1f) == 7) {
      uVar5 = param_4;
    }
    puVar4 = (undefined8 *)FUN_144befa90(uVar5,&local_68,param_5,1);
    FUN_144bf0750(&local_70,*puVar4);
    puVar3 = (undefined4 *)FUN_144bef800(local_70,local_78);
    uVar5 = 0;
    if (((byte)*puVar3 & 0x1f) == 8) {
      uVar5 = local_70;
    }
    FUN_144beff00(uVar5,&local_68);
    iVar10 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar10) {
      FUN_144f6cf20(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    lVar1 = param_1[1];
    *(int *)(param_1 + 1) = iVar10;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    piVar8 = (int *)((longlong)(int)lVar1 * 0x10 + *param_1);
    (**(code **)(*(longlong *)(uVar7 & 0xfffffffffffffffe) + 0x48))
              ((longlong *)(uVar7 & 0xfffffffffffffffe),local_40,lVar9,lVar6,&local_60);
    iVar10 = (int)local_50;
    if ((local_48 & 1) != 0) {
      FUN_144be6b30(local_48 & 0xfffffffffffffffe);
    }
    *piVar8 = iVar10;
    iVar10 = FUN_144beec90(local_68);
    piVar8[2] = iVar10;
    iVar10 = FUN_144bf0700(&local_70);
    piVar8[1] = iVar10 + param_6;
    piVar8[3] = param_2;
    *(int *)((longlong)param_1 + 0x114) =
         *(int *)((longlong)param_1 + 0x114) + (piVar8[2] * *piVar8 + 0xfU & 0xfffffff0);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f6ce10 FUN_144f6ce10 body=257 status=ok
// SIG undefined FUN_144f6ce10(void)

undefined8 * FUN_144f6ce10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong local_res8;
  
  local_res8 = (ulonglong)*(int *)((longlong)param_1 + 0x114);
  puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  FUN_144bfb550(puVar3,0,local_res8 >> 2);
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = 1;
    *puVar3 = &PTR_FUN_14ab67d10;
    puVar3[1] = 0xffffffff;
    puVar4 = puVar3;
  }
  puVar4[1] = (longlong)*(int *)((longlong)param_1 + 0x114);
  FUN_144be8030(puVar4,0);
  iVar7 = (int)param_1[0x22];
  puVar4 = puVar6;
  if (0 < (int)param_1[1]) {
    do {
      lVar2 = *param_1;
      iVar1 = *(int *)((longlong)puVar4 + lVar2 + 0xc);
      if (iVar1 == 0) {
        iVar1 = *(int *)((longlong)puVar4 + lVar2 + 4);
        *(int *)((longlong)iVar1 + (longlong)puVar3) = iVar7 - iVar1;
        *(undefined4 *)((longlong)iVar1 + 4 + (longlong)puVar3) =
             *(undefined4 *)((longlong)puVar4 + lVar2);
      }
      else if (iVar1 == 1) {
        iVar1 = *(int *)((longlong)puVar4 + lVar2 + 4);
        *(longlong *)((longlong)iVar1 + (longlong)puVar3) = (longlong)(iVar7 - iVar1);
        *(undefined4 *)((longlong)iVar1 + 8 + (longlong)puVar3) =
             *(undefined4 *)((longlong)puVar4 + lVar2);
      }
      uVar5 = (int)puVar6 + 1;
      puVar6 = (undefined8 *)(ulonglong)uVar5;
      iVar7 = iVar7 + (*(int *)((longlong)puVar4 + lVar2 + 8) * *(int *)((longlong)puVar4 + lVar2) +
                       0xfU & 0xfffffff0);
      puVar4 = puVar4 + 2;
    } while ((int)uVar5 < (int)param_1[1]);
  }
  return puVar3;
}



// FUNCTION 144f6cf20 FUN_144f6cf20 body=266 status=ok
// SIG undefined FUN_144f6cf20(void)

void FUN_144f6cf20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144f6d030 FUN_144f6d030 body=86 status=ok
// SIG undefined FUN_144f6d030(void)

undefined8 * FUN_144f6d030(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  param_1[2] = param_2;
  *param_1 = hkMemory::ThreadMemoryAllocator::vftable;
  param_1[1] = 0;
  local_res8[0] = 0x288;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,local_res8);
  param_1[3] = uVar1;
  FUN_144bfb540(uVar1,0,0x288);
  return param_1;
}



// FUNCTION 144f6d090 FUN_144f6d090 body=259 status=ok
// SIG undefined FUN_144f6d090(void)

undefined8 FUN_144f6d090(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong local_res10;
  
  uVar5 = *param_2;
  if (0x2010 < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000144f6d18f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),param_2);
    return uVar3;
  }
  if (uVar5 < 0x31) {
    uVar5 = 0;
  }
  else {
    uVar4 = (int)uVar5 - 0x11;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
    uVar4 = 0x1b - (0x20U - iVar2);
    if (0x1a < 0x20U - iVar2) {
      uVar4 = 0;
    }
    uVar5 = (ulonglong)uVar4;
  }
  local_res10 = (ulonglong)((0x20 << ((byte)uVar5 & 0x1f)) + 0x10);
  *param_2 = local_res10;
  lVar1 = *(longlong *)(param_1 + 0x18) + uVar5 * 0x48;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x40 + uVar5 * 0x48);
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
    *(int *)(lVar1 + 0x40) = iVar2;
    return *(undefined8 *)(lVar1 + (longlong)iVar2 * 8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),lVar1,5,&local_res10);
  *(undefined4 *)(lVar1 + 0x40) = 4;
  return *(undefined8 *)(lVar1 + 0x20);
}



// FUNCTION 144f6d1a0 FUN_144f6d1a0 body=263 status=ok
// SIG undefined FUN_144f6d1a0(void)

void FUN_144f6d1a0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    if (0x2010 < param_3) {
                    /* WARNING: Could not recover jumptable at 0x000144f6d2a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      return;
    }
    if (param_3 < 0x31) {
      uVar4 = 0;
    }
    else {
      uVar3 = (int)param_3 - 0x11;
      uVar3 = uVar3 | uVar3 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar3 >> 0x10 | uVar3);
      uVar3 = 0x1b - (0x20U - iVar2);
      if (0x1a < 0x20U - iVar2) {
        uVar3 = 0;
      }
      uVar4 = (ulonglong)uVar3;
    }
    lVar1 = *(longlong *)(param_1 + 0x18) + uVar4 * 0x48;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x40 + uVar4 * 0x48);
    if (iVar2 < 8) {
      *(longlong *)(lVar1 + (longlong)iVar2 * 8) = param_2;
      *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 1;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                (*(longlong **)(param_1 + 0x10),lVar1,5,(0x20 << ((byte)uVar4 & 0x1f)) + 0x10);
      FUN_144b3d470(lVar1,lVar1 + 0x28,0x18);
      *(longlong *)(lVar1 + 0x18) = param_2;
      *(undefined4 *)(lVar1 + 0x40) = 4;
    }
  }
  return;
}



// FUNCTION 144f6d2b0 FUN_144f6d2b0 body=24 status=ok
// SIG undefined FUN_144f6d2b0(void)

void FUN_144f6d2b0(longlong *param_1,longlong param_2,int param_3,ulonglong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*param_4 < 0x2011) {
    if (0 < param_3) {
      lVar2 = 0;
      do {
        uVar1 = (**(code **)(*param_1 + 8))(param_1,param_4);
        *(undefined8 *)(param_2 + lVar2 * 8) = uVar1;
        lVar2 = lVar2 + 1;
      } while (lVar2 < param_3);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f6d2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[2] + 0x18))();
  return;
}



// FUNCTION 144f6d2d0 FUN_144f6d2d0 body=24 status=ok
// SIG undefined FUN_144f6d2d0(void)

void FUN_144f6d2d0(longlong *param_1,longlong param_2,int param_3,ulonglong param_4)

{
  longlong lVar1;
  
  if (param_4 < 0x2011) {
    if (0 < param_3) {
      lVar1 = 0;
      do {
        (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(param_2 + lVar1 * 8),param_4);
        lVar1 = lVar1 + 1;
      } while (lVar1 < param_3);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f6d2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[2] + 0x20))();
  return;
}



// FUNCTION 144f6d2f0 FUN_144f6d2f0 body=151 status=ok
// SIG undefined FUN_144f6d2f0(void)

void FUN_144f6d2f0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 < 1) {
    iVar1 = 8;
    lVar3 = 0x240;
    do {
      lVar2 = *(longlong *)(param_1 + 0x18) + lVar3;
      if (*(int *)(lVar2 + 0x40) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                  (*(longlong **)(param_1 + 0x10),lVar2,*(int *)(lVar2 + 0x40),
                   (0x20 << ((byte)iVar1 & 0x1f)) + 0x10);
        *(undefined4 *)(lVar2 + 0x40) = 0;
      }
      lVar3 = lVar3 + -0x48;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return;
}



// FUNCTION 144f6d390 FUN_144f6d390 body=11 status=ok
// SIG undefined FUN_144f6d390(void)

void FUN_144f6d390(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144f6d397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
  return;
}



// FUNCTION 144f6d3a0 FUN_144f6d3a0 body=11 status=ok
// SIG undefined FUN_144f6d3a0(void)

void FUN_144f6d3a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144f6d3a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  return;
}



// FUNCTION 144f6d3b0 FUN_144f6d3b0 body=214 status=ok
// SIG undefined FUN_144f6d3b0(void)

undefined8 * FUN_144f6d3b0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  *param_1 = hkMemory::ThreadMemoryAllocator::vftable;
  iVar3 = 8;
  lVar2 = 0x240;
  do {
    lVar1 = param_1[3] + lVar2;
    if (*(int *)(lVar1 + 0x40) != 0) {
      (**(code **)(*(longlong *)param_1[2] + 0x20))
                ((longlong *)param_1[2],lVar1,*(int *)(lVar1 + 0x40),
                 (0x20 << ((byte)iVar3 & 0x1f)) + 0x10);
      *(undefined4 *)(lVar1 + 0x40) = 0;
    }
    lVar2 = lVar2 + -0x48;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],param_1[3],0x288);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 144f6d490 FUN_144f6d490 body=546 status=ok
// SIG undefined FUN_144f6d490(void)

undefined8 * FUN_144f6d490(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 local_res8;
  
  puVar10 = (undefined8 *)0x0;
  param_1[1] = 0;
  *param_1 = hkMemory::FreeListAllocator::vftable;
  FUN_144b4a250(param_1 + 2,100);
  param_1[7] = param_2;
  param_1[9] = param_2;
  param_1[8] = hkMemory::ForwardingContainerAllocator::vftable;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8c) = param_3;
  local_res8 = 0x48;
  uVar4 = (**(code **)(*(longlong *)param_1[7] + 8))((longlong *)param_1[7],&local_res8);
  param_1[0xc] = uVar4;
  local_res8 = 0x3f0;
  uVar4 = (**(code **)(*(longlong *)param_1[7] + 8))((longlong *)param_1[7],&local_res8);
  param_1[0x10] = uVar4;
  local_res8 = 0x90;
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)param_1[7] + 8))((longlong *)param_1[7],&local_res8);
  puVar6 = puVar10;
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = param_1[7];
    puVar5[1] = 0;
    puVar5[3] = uVar4;
    *puVar5 = hkMemory::FreeListAllocatorImpl::FixedSizeAllocator::vftable;
    puVar5[2] = hkMemory::ForwardingContainerAllocator::vftable;
    FUN_1453067f0(puVar5 + 4);
    FUN_145306830(puVar5 + 4,0x20,0x20,0x8040,puVar5 + 2,0);
    puVar6 = puVar5;
  }
  param_1[10] = puVar6;
  local_res8 = 0x10;
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)param_1[7] + 8))((longlong *)param_1[7],&local_res8);
  puVar6 = puVar10;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1[10];
    *puVar5 = hkMemory::ForwardingContainerAllocator::vftable;
    puVar6 = puVar5;
  }
  param_1[0xb] = puVar6;
  iVar9 = 0x20;
  param_1[0xe] = param_1[0x10];
  param_1[0xf] = param_1[0x10] + 0x3f0;
  do {
    if ((ulonglong)param_1[0xf] <= (ulonglong)param_1[0xe]) {
      pcVar3 = (code *)swi(3);
      puVar6 = (undefined8 *)(*pcVar3)();
      return puVar6;
    }
    lVar2 = param_1[0xe];
    param_1[0xe] = lVar2 + 0x70;
    if (lVar2 != 0) {
      FUN_145306770(lVar2,(longlong)(iVar9 + 0x20),0x20,0x8040,param_1 + 8,param_1[0xb]);
    }
    iVar1 = *(int *)(param_1 + 0xd);
    if (0 < iVar1) {
      plVar7 = (longlong *)param_1[0xc];
      puVar6 = puVar10;
      do {
        if (*(longlong *)(*plVar7 + 8) == *(longlong *)(lVar2 + 8)) {
          FUN_1453069c0(lVar2);
          if (lVar2 + 0x70 == param_1[0xe]) {
            param_1[0xe] = param_1[0xe] + -0x70;
          }
          goto LAB_144f6d66f;
        }
        uVar8 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar8;
        plVar7 = plVar7 + 1;
      } while ((int)uVar8 < iVar1);
    }
    *(longlong *)(param_1[0xc] + (longlong)iVar1 * 8) = lVar2;
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 1;
LAB_144f6d66f:
    iVar9 = iVar9 * 2;
    if (0x2000 < iVar9) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 144f6d6c0 FUN_144f6d6c0 body=673 status=ok
// SIG undefined FUN_144f6d6c0(void)

void FUN_144f6d6c0(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  char local_2d8 [224];
  undefined8 local_1f8 [18];
  undefined4 local_168;
  
  *param_1 = hkMemory::FreeListAllocator::vftable;
  lVar6 = 0;
  iVar2 = *(int *)(param_1 + 0xd);
  lVar7 = 0;
  if (0 < iVar2) {
    lVar9 = 0;
    iVar8 = 1;
    do {
      lVar4 = *(longlong *)(lVar9 + param_1[0xc]);
      if (lVar4 != 0) {
        lVar3 = *(longlong *)(lVar4 + 0x60) - *(longlong *)(lVar4 + 0x68);
        lVar6 = lVar6 + lVar3;
        lVar7 = lVar7 + lVar3 * *(longlong *)(lVar4 + 8);
        FUN_1453069c0(lVar4);
        if (lVar4 + 0x70 == param_1[0xe]) {
          param_1[0xe] = param_1[0xe] + -0x70;
        }
        iVar2 = *(int *)(param_1 + 0xd);
        lVar3 = lVar9;
        iVar5 = iVar8;
        if (iVar8 < iVar2) {
          do {
            lVar3 = lVar3 + 8;
            if (*(longlong *)(lVar3 + param_1[0xc]) == lVar4) {
              *(undefined8 *)(lVar3 + param_1[0xc]) = 0;
            }
            iVar2 = *(int *)(param_1 + 0xd);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar2);
        }
      }
      lVar9 = lVar9 + 8;
      bVar1 = iVar8 < iVar2;
      iVar8 = iVar8 + 1;
    } while (bVar1);
  }
  lVar9 = param_1[10];
  lVar4 = *(longlong *)(lVar9 + 0x80) - *(longlong *)(lVar9 + 0x88);
  lVar6 = lVar6 + lVar4;
  lVar9 = *(longlong *)(lVar9 + 0x28);
  (*(code *)**(undefined8 **)param_1[0xb])((undefined8 *)param_1[0xb],0);
  (**(code **)(*(longlong *)param_1[7] + 0x10))((longlong *)param_1[7],param_1[0xb],0x10);
  (*(code *)**(undefined8 **)param_1[10])((undefined8 *)param_1[10],0);
  (**(code **)(*(longlong *)param_1[7] + 0x10))((longlong *)param_1[7],param_1[10],0x90);
  (**(code **)(*(longlong *)param_1[7] + 0x10))((longlong *)param_1[7],param_1[0xc],0x48);
  (**(code **)(*(longlong *)param_1[7] + 0x10))((longlong *)param_1[7],param_1[0x10],0x3f0);
  if ((lVar6 != 0) && ((*(byte *)((longlong)param_1 + 0x8c) & 1) == 0)) {
    builtin_strncpy(local_2d8,
                    "\n**************************************************************\n* Leaks Detected:\n* \tFreeListAllocator has %llu outstanding bytes over %llu allocations\n**************************************************************\n\n"
                    ,0xd9);
    FUN_144bdf620(local_1f8,0x2a2a2a2a2a2a2a2a,0,0x129);
    local_168 = 0;
    FUN_144bdff50(local_1f8,local_2d8,lVar7 + lVar4 * lVar9,lVar6);
    FUN_144bfab60(local_1f8[0]);
    FUN_144bdf2f0(local_1f8);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 144f6d970 FUN_144f6d970 body=299 status=ok
// SIG undefined FUN_144f6d970(void)

longlong * FUN_144f6d970(longlong param_1,ulonglong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*param_2 < 0x2021) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
    EnterCriticalSection(lpCriticalSection);
    if (*param_2 < 0x41) {
      uVar5 = 0;
    }
    else {
      uVar4 = (int)*param_2 - 0x21;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
      uVar4 = 0x1b - (0x20U - iVar2);
      if (0x1a < 0x20U - iVar2) {
        uVar4 = 0;
      }
      uVar5 = (ulonglong)uVar4;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + uVar5 * 8);
    plVar3 = (longlong *)*plVar1;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)plVar1[8];
      if (plVar3 < (ulonglong)plVar1[9]) {
        plVar1[0xd] = plVar1[0xd] + -1;
        plVar1[8] = plVar1[1] + (longlong)plVar3;
      }
      else {
        plVar3 = (longlong *)FUN_145307230(plVar1);
      }
      if (plVar3 == (longlong *)0x0) {
        FUN_144bfc170(0xdeadf00d,"Memory\\Allocators\\hkFreeListAllocator.cpp",99,"Out of memory");
        LeaveCriticalSection(lpCriticalSection);
        return (longlong *)0;
      }
    }
    else {
      plVar1[0xd] = plVar1[0xd] + -1;
      *plVar1 = *plVar3;
    }
    *param_2 = plVar1[1];
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
  }
  return plVar3;
}



// FUNCTION 144f6daa0 FUN_144f6daa0 body=218 status=ok
// SIG undefined FUN_144f6daa0(void)

void FUN_144f6daa0(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    if (param_3 < 0x2021) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      if (param_3 < 0x41) {
        uVar3 = 0;
      }
      else {
        iVar2 = (*(code *)PTR_FUN_14c6da350)();
        uVar3 = 0x1b - (0x20U - iVar2);
        if (0x1a < 0x20U - iVar2) {
          uVar3 = 0;
        }
      }
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar3 * 8);
      puVar1[0xd] = puVar1[0xd] + 1;
      *param_2 = *puVar1;
      *puVar1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x000144f6db59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  return;
}



// FUNCTION 144f6db80 FUN_144f6db80 body=325 status=ok
// SIG undefined FUN_144f6db80(void)

void FUN_144f6db80(longlong param_1,longlong param_2,int param_3,ulonglong *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (0x2020 < *param_4) {
                    /* WARNING: Could not recover jumptable at 0x000144f6dcc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
              (*(longlong **)(param_1 + 0x38),param_2,param_3);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (*param_4 < 0x41) {
    uVar3 = 0;
  }
  else {
    uVar8 = (int)*param_4 - 0x21;
    uVar8 = uVar8 | uVar8 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar8 >> 0x10 | uVar8);
    uVar3 = (ulonglong)(0x1b - (0x20U - iVar2));
    if (0x1a < 0x20U - iVar2) {
      uVar3 = 0;
    }
  }
  uVar7 = 0;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + uVar3 * 8);
  puVar5 = (undefined8 *)*puVar1;
  puVar4 = puVar5;
  uVar3 = uVar7;
  if (0 < param_3) {
    do {
      puVar5 = (undefined8 *)0x0;
      if (puVar4 == (undefined8 *)0x0) break;
      *(undefined8 **)(param_2 + uVar7 * 8) = puVar4;
      uVar3 = (ulonglong)((int)uVar3 + 1);
      puVar5 = (undefined8 *)*puVar4;
      uVar7 = uVar7 + 1;
      puVar4 = puVar5;
    } while ((longlong)uVar7 < (longlong)param_3);
  }
  lVar9 = (longlong)(int)uVar3;
  puVar1[0xd] = puVar1[0xd] - lVar9;
  *puVar1 = puVar5;
  for (; lVar9 < param_3; lVar9 = lVar9 + 1) {
    if ((ulonglong)puVar1[8] < (ulonglong)puVar1[9]) {
      *(undefined8 *)(param_2 + lVar9 * 8) = puVar1[8];
      puVar1[8] = puVar1[8] + puVar1[1];
      puVar1[0xd] = puVar1[0xd] + -1;
    }
    else {
      uVar6 = FUN_145307230(puVar1);
      *(undefined8 *)(param_2 + lVar9 * 8) = uVar6;
    }
  }
  *param_4 = puVar1[1];
                    /* WARNING: Could not recover jumptable at 0x000144f6dca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 144f6dcd0 FUN_144f6dcd0 body=244 status=ok
// SIG undefined FUN_144f6dcd0(void)

void FUN_144f6dcd0(longlong param_1,undefined8 *param_2,int param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_4 < 0x2021) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    if (param_4 < 0x41) {
      uVar6 = 0;
    }
    else {
      uVar5 = (int)param_4 - 0x21;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      iVar4 = (*(code *)PTR_FUN_14c6da350)(uVar5 >> 0x10 | uVar5);
      uVar5 = 0x1b - (0x20U - iVar4);
      if (0x1a < 0x20U - iVar4) {
        uVar5 = 0;
      }
      uVar6 = (ulonglong)uVar5;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + uVar6 * 8);
    plVar1[0xd] = plVar1[0xd] + (longlong)param_3;
    plVar3 = (longlong *)*plVar1;
    while (param_3 = param_3 + -1, -1 < param_3) {
      plVar2 = (longlong *)*param_2;
      param_2 = param_2 + 1;
      if (plVar2 == (longlong *)0x0) {
        plVar1[0xd] = plVar1[0xd] + -1;
      }
      else {
        *plVar2 = (longlong)plVar3;
        plVar3 = plVar2;
      }
    }
    *plVar1 = (longlong)plVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
              (*(longlong **)(param_1 + 0x38),param_2,param_3);
  }
  return;
}



// FUNCTION 144f6ddd0 FUN_144f6ddd0 body=258 status=ok
// SIG undefined FUN_144f6ddd0(void)

void FUN_144f6ddd0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar11;
  longlong lVar12;
  int local_res8 [2];
  undefined1 local_res10 [8];
  ulonglong uVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (param_2 < 1) {
    bVar4 = false;
    while( true ) {
      bVar3 = false;
      iVar11 = 0;
      if (*(int *)(param_1 + 0x68) < 1) break;
      lVar12 = 0;
      do {
        lVar2 = *(longlong *)(lVar12 + *(longlong *)(param_1 + 0x60));
        iVar5 = FUN_145306b90(lVar2);
        if (iVar5 < 0) {
          bVar4 = true;
        }
        if (*(longlong *)(lVar2 + 0x20) != 0) {
          bVar3 = true;
        }
        FUN_145307180(lVar2);
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (iVar11 < *(int *)(param_1 + 0x68));
      if ((!bVar3) || (!bVar4)) break;
    }
  }
  else {
    uVar9 = (ulonglong)*(int *)(param_1 + 0x88);
    uVar7 = uVar9;
    uVar10 = uVar9;
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar7 * 8);
      pcVar6 = (char *)FUN_145306dd0(uVar1,local_res10,param_2,local_res8);
      if (*pcVar6 != '\0') {
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
        uVar7 = uVar7 + 1;
        if (*(int *)(param_1 + 0x68) <= (int)uVar8) {
          uVar10 = 0;
          uVar7 = 0;
        }
      }
      FUN_145307180(uVar1);
      param_2 = param_2 - local_res8[0];
    } while ((0 < param_2) && (uVar7 != uVar9));
    *(int *)(param_1 + 0x88) = (int)uVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f6decb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 144f6dee0 FUN_144f6dee0 body=11 status=ok
// SIG undefined FUN_144f6dee0(void)

void FUN_144f6dee0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144f6dee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
  return;
}



// FUNCTION 144f6def0 FUN_144f6def0 body=11 status=ok
// SIG undefined FUN_144f6def0(void)

void FUN_144f6def0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144f6def7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
  return;
}



// FUNCTION 144f6df00 FUN_144f6df00 body=433 status=ok
// SIG undefined FUN_144f6df00(void)

void FUN_144f6df00(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  longlong lStack_20;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  lVar12 = 0;
  lVar15 = 0;
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar11 = 0;
    do {
      local_58 = 0;
      lStack_50 = 0;
      local_48 = 0x8000000000000000;
      lStack_40 = 0;
      FUN_145306ae0(*(undefined8 *)(lVar11 + *(longlong *)(param_1 + 0x60)),&local_58);
      lVar12 = lVar12 + lStack_50;
      lVar11 = lVar11 + 8;
      lVar15 = lVar15 + lStack_40;
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_1 + 0x68));
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0x8000000000000000;
  lStack_20 = 0;
  FUN_145306ae0(*(longlong *)(param_1 + 0x50) + 0x20,&local_38);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))(*(longlong **)(param_1 + 0x38),param_2);
  lVar11 = (longlong)(int)param_2[1];
  iVar13 = (int)param_2[1] + 1;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar13) {
    FUN_144f6e2a0(param_2,&PTR_vftable_14c6e47c0,lVar11 + 1);
  }
  lVar2 = *param_2;
  uVar1 = *(uint *)(param_2 + 1);
  uVar10 = (ulonglong)uVar1;
  if ((uVar1 != 0) && (lVar2 + 0x20 != lVar2)) {
    lVar14 = (longlong)(int)(uVar1 - 1) * 0x20;
    puVar8 = (undefined4 *)(lVar14 + lVar2 + 0x20);
    if (0 < (int)uVar1) {
      puVar9 = (undefined4 *)(lVar2 + lVar14);
      do {
        if (puVar8 != (undefined4 *)0x0) {
          uVar4 = puVar9[1];
          uVar5 = puVar9[2];
          uVar6 = puVar9[3];
          *puVar8 = *puVar9;
          puVar8[1] = uVar4;
          puVar8[2] = uVar5;
          puVar8[3] = uVar6;
          uVar7 = *(undefined8 *)(puVar9 + 6);
          *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar9 + 4);
          *(undefined8 *)(puVar8 + 6) = uVar7;
        }
        puVar8 = puVar8 + -8;
        puVar9 = puVar9 + -8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[2] = 0x8000000000000000;
    puVar3[1] = 0;
    puVar3[3] = 0;
  }
  puVar3 = (undefined8 *)*param_2;
  *(int *)(param_2 + 1) = iVar13;
  puVar3[3] = puVar3[lVar11 * 4 + 3];
  puVar3[1] = ((puVar3[lVar11 * 4 + 1] - lVar15) - lStack_20) + lVar12 + lStack_30;
  *puVar3 = puVar3[lVar11 * 4];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 144f6e0c0 FUN_144f6e0c0 body=87 status=ok
// SIG undefined FUN_144f6e0c0(void)

undefined8 FUN_144f6e0c0(undefined8 param_1,ulonglong param_2)

{
  FUN_144f6d6c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 144f6e120 FUN_144f6e120 body=64 status=ok
// SIG undefined FUN_144f6e120(void)

void FUN_144f6e120(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -1;
    *plVar1 = *(longlong *)*plVar1;
    return;
  }
  if (*(ulonglong *)(param_1 + 0x68) <= *(ulonglong *)(param_1 + 0x60)) {
    FUN_145307230(plVar1);
    return;
  }
  *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -1;
  *(ulonglong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x28) + *(ulonglong *)(param_1 + 0x60);
  return;
}



// FUNCTION 144f6e160 FUN_144f6e160 body=19 status=ok
// SIG undefined FUN_144f6e160(void)

void FUN_144f6e160(longlong param_1,undefined8 *param_2)

{
  *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 1;
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 144f6e180 FUN_144f6e180 body=156 status=ok
// SIG undefined FUN_144f6e180(void)

void FUN_144f6e180(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  uVar4 = 0;
  uVar6 = 0;
  puVar1 = puVar2;
  uVar7 = uVar4;
  if (0 < param_3) {
    do {
      uVar6 = (uint)uVar7;
      puVar2 = (undefined8 *)0x0;
      if (puVar1 == (undefined8 *)0x0) break;
      *(undefined8 **)(param_2 + uVar4 * 8) = puVar1;
      uVar6 = uVar6 + 1;
      puVar2 = (undefined8 *)*puVar1;
      uVar4 = uVar4 + 1;
      puVar1 = puVar2;
      uVar7 = (ulonglong)uVar6;
    } while ((longlong)uVar4 < (longlong)param_3);
  }
  lVar5 = (longlong)(int)uVar6;
  *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) - lVar5;
  *(undefined8 *)(param_1 + 0x20) = puVar2;
  for (; lVar5 < param_3; lVar5 = lVar5 + 1) {
    if (*(ulonglong *)(param_1 + 0x60) < *(ulonglong *)(param_1 + 0x68)) {
      *(ulonglong *)(param_2 + lVar5 * 8) = *(ulonglong *)(param_1 + 0x60);
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x28);
      *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -1;
    }
    else {
      uVar3 = FUN_145307230((undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_2 + lVar5 * 8) = uVar3;
    }
  }
  return;
}



// FUNCTION 144f6e220 FUN_144f6e220 body=58 status=ok
// SIG undefined FUN_144f6e220(void)

void FUN_144f6e220(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + (longlong)param_3;
  plVar2 = (longlong *)*(longlong *)(param_1 + 0x20);
  while (param_3 = param_3 + -1, -1 < param_3) {
    plVar1 = (longlong *)*param_2;
    param_2 = param_2 + 1;
    if (plVar1 == (longlong *)0x0) {
      *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -1;
    }
    else {
      *plVar1 = (longlong)plVar2;
      plVar2 = plVar1;
    }
  }
  *(longlong **)(param_1 + 0x20) = plVar2;
  return;
}



// FUNCTION 144f6e260 FUN_144f6e260 body=59 status=ok
// SIG undefined FUN_144f6e260(void)

longlong FUN_144f6e260(longlong param_1,byte param_2)

{
  FUN_1453069c0(param_1 + 0x20);
  if ((param_2 & 5) == 5) {
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 144f6e2a0 FUN_144f6e2a0 body=274 status=ok
// SIG undefined FUN_144f6e2a0(void)

void FUN_144f6e2a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144f6e3c0 FUN_144f6e3c0 body=70 status=ok
// SIG undefined FUN_144f6e3c0(void)

void FUN_144f6e3c0(longlong param_1,size_t *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  LOCK();
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + *param_2;
  UNLOCK();
  sVar3 = *param_2;
  lVar4 = *(longlong *)(param_1 + 0x28);
  do {
    if ((longlong)(lVar2 + sVar3) <= lVar4) break;
    LOCK();
    lVar5 = *(longlong *)(param_1 + 0x28);
    bVar6 = lVar4 == lVar5;
    if (bVar6) {
      *(longlong *)(param_1 + 0x28) = lVar2 + sVar3;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar6);
  malloc(*param_2);
  LOCK();
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  UNLOCK();
  LOCK();
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  UNLOCK();
  return;
}



// FUNCTION 144f6e410 FUN_144f6e410 body=49 status=ok
// SIG undefined FUN_144f6e410(void)

void FUN_144f6e410(longlong param_1,void *param_2,longlong param_3)

{
  free(param_2);
  LOCK();
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) - param_3;
  UNLOCK();
  LOCK();
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  UNLOCK();
  return;
}



// FUNCTION 144f6e450 FUN_144f6e450 body=46 status=ok
// SIG undefined FUN_144f6e450(void)

void FUN_144f6e450(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[1] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  param_2[2] = lVar1;
  if (lVar1 < (longlong)param_2[1]) {
    param_2[2] = param_2[1];
  }
  return;
}



// FUNCTION 144f6e480 FUN_144f6e480 body=9 status=ok
// SIG undefined FUN_144f6e480(void)

void FUN_144f6e480(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 144f6e490 FUN_144f6e490 body=165 status=ok
// SIG undefined FUN_144f6e490(void)

void FUN_144f6e490(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0x8000000000000000;
  uStack_10 = 0;
  (**(code **)(*param_1 + 0x30))(0,&local_28);
  iVar2 = (int)param_2[1] + 1;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar2) {
    FUN_144f6e2a0(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar2);
  }
  puVar1 = (undefined8 *)((longlong)(int)param_2[1] * 0x20 + *param_2);
  *(int *)(param_2 + 1) = iVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x8000000000000000;
    puVar1[3] = 0;
  }
  *puVar1 = local_28;
  puVar1[1] = uStack_20;
  puVar1[2] = local_18;
  puVar1[3] = puVar1[1];
  return;
}



// FUNCTION 144f6e540 FUN_144f6e540 body=335 status=ok
// SIG undefined FUN_144f6e540(void)

void FUN_144f6e540(undefined8 *param_1)

{
  char local_2b8 [224];
  undefined8 local_1d8 [18];
  undefined4 local_148;
  
  *param_1 = hkMemory::MallocAllocator::vftable;
  if ((param_1[2] != 0) || (param_1[4] != 0)) {
    builtin_strncpy(local_2b8,
                    "\n**************************************************************\n* Leaks Detected:\n* \tMallocAllocator has %llu outstanding bytes over %llu allocations\n**************************************************************\n\n"
                    ,0xd7);
    FUN_144bdf620(local_1d8,0x2a2a2a2a2a2a2a2a,0,0x127);
    local_148 = 0;
    FUN_144bdff50(local_1d8,local_2b8,param_1[4],param_1[2]);
    FUN_144bfab60(local_1d8[0]);
    FUN_144bdf2f0(local_1d8);
  }
  return;
}



// FUNCTION 144f6e690 FUN_144f6e690 body=87 status=ok
// SIG undefined FUN_144f6e690(void)

undefined8 FUN_144f6e690(undefined8 param_1,ulonglong param_2)

{
  FUN_144f6e540();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144f6e6f0 FUN_144f6e6f0 body=28 status=ok
// SIG undefined FUN_144f6e6f0(void)

undefined4 *
FUN_144f6e6f0(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             double param_5)

{
  float fVar1;
  
  fVar1 = (float)param_5;
  *param_2 = 0;
  *param_3 = fVar1;
  param_3[1] = fVar1;
  param_3[2] = fVar1;
  param_3[3] = fVar1;
  return param_2;
}



// FUNCTION 144f6e710 FUN_144f6e710 body=27 status=ok
// SIG undefined FUN_144f6e710(void)

undefined4 *
FUN_144f6e710(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             double *param_5)

{
  float fVar1;
  
  fVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)fVar1;
  return param_2;
}



// FUNCTION 144f6e730 FUN_144f6e730 body=97 status=ok
// SIG undefined FUN_144f6e730(void)

undefined8 * FUN_144f6e730(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkScalarF_FloatImpl::vftable;
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



// FUNCTION 144f6e7a0 FUN_144f6e7a0 body=379 status=ok
// SIG undefined FUN_144f6e7a0(void)

void FUN_144f6e7a0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  byte *pbVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  longlong *local_108;
  longlong *local_100;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  undefined8 local_b8;
  int local_b0;
  
  FUN_144be0720(param_2,&DAT_149c05c88,0xffffffff);
  bVar2 = false;
  FUN_144bdf360(&local_b8);
  FUN_144bf0830(&local_108,*(undefined8 *)(param_1 + 8),0);
  while( true ) {
    do {
      plVar3 = local_108 + 1;
      if ((local_100 <= local_108 + 1) &&
         (cVar4 = FUN_144bf0850(&local_108), plVar3 = local_108, cVar4 == '\0')) goto LAB_144f6e8e0;
      local_108 = plVar3;
      pbVar5 = (byte *)FUN_144bf04d0(local_108,local_res8);
    } while ((*pbVar5 & 0x20) == 0);
    lVar1 = *local_108;
    puVar6 = (uint *)FUN_144bef800(lVar1,local_res20);
    lVar7 = 0;
    if ((*puVar6 & 0x1f) == 0) {
      lVar7 = lVar1;
    }
    if (lVar7 != 0) break;
    if (bVar2) {
      FUN_144be0720(param_2,&DAT_14997153c,0xffffffff);
    }
    local_e8 = *param_3;
    uStack_e4 = param_3[1];
    uStack_e0 = param_3[2];
    uStack_dc = param_3[3];
    bVar2 = true;
    uVar8 = FUN_144bebf80(param_1,local_d8,*local_108);
    FUN_144bec240(uVar8,&local_b8,&local_e8);
    if ((local_c8 & 1) != 0) {
      FUN_144be6b30(local_c8 & 0xfffffffffffffffe);
    }
    FUN_144be0720(param_2,local_b8,local_b0 + -1);
  }
LAB_144f6e8e0:
  FUN_144be0720(param_2,&DAT_149982a50,0xffffffff);
  FUN_144bdf2f0(&local_b8);
  return;
}



// FUNCTION 144f6e920 FUN_144f6e920 body=25 status=ok
// SIG undefined FUN_144f6e920(void)

undefined4 *
FUN_144f6e920(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_3 = param_5;
  param_3[1] = param_5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f6e940 FUN_144f6e940 body=23 status=ok
// SIG undefined FUN_144f6e940(void)

undefined4 *
FUN_144f6e940(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 144f6e960 FUN_144f6e960 body=97 status=ok
// SIG undefined FUN_144f6e960(void)

undefined8 * FUN_144f6e960(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSimdDouble64_FloatImpl::vftable;
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



// FUNCTION 144f6e9d0 FUN_144f6e9d0 body=197 status=ok
// SIG undefined FUN_144f6e9d0(void)

undefined4 *
FUN_144f6e9d0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  cVar1 = (char)param_3[1];
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      plVar6 = param_3 + 2;
      goto LAB_144f6ea0c;
    }
    if (cVar1 == '\x02') {
      plVar6 = (longlong *)param_3[2];
      goto LAB_144f6ea0c;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_144f6ea0c:
  lVar2 = *param_3;
  uVar4 = 0;
  uVar5 = 0;
  if (lVar2 != 0) {
    uVar4 = FUN_144beec90(lVar2);
    uVar5 = FUN_144befdb0(lVar2);
    if ((uVar5 & 1) != 0) {
      FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
    }
  }
  *param_5 = (longlong)plVar6;
  param_5[1] = lVar2;
  *(uint *)(param_5 + 2) = (uint)(lVar2 != 0);
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
  uVar3 = param_5[3];
  param_5[3] = uVar5;
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f6eaa0 FUN_144f6eaa0 body=382 status=ok
// SIG undefined FUN_144f6eaa0(void)

undefined8
FUN_144f6eaa0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 *local_40 [2];
  ulonglong local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  if (*(char *)(param_2 + 1) != '\0') {
    return 2;
  }
  if (param_5 != 0) {
    if (param_5 == 1) {
      *param_2 = param_4;
      local_48 = 0;
      local_58 = 0;
      uStack_50 = 0;
      iVar2 = FUN_144beec90(param_4);
      if (((iVar2 < 0x11) && (iVar2 = FUN_144beecf0(param_4), iVar2 < 0x11)) &&
         (cVar1 = FUN_144f69320(param_4), cVar1 != '\0')) {
        puVar3 = param_2 + 2;
        *(undefined1 *)(param_2 + 1) = 1;
        *puVar3 = 0;
        param_2[3] = 0;
      }
      else {
        if (local_58 == 0) {
          puVar3 = (undefined8 *)FUN_144f69200(local_28,*param_2);
          puVar3 = (undefined8 *)*puVar3;
          local_30 = local_18;
        }
        else {
          FUN_144f69260(local_40,&local_58,uStack_50);
          puVar3 = local_40[0];
        }
        if ((local_30 & 1) != 0) {
          FUN_144be6b30(local_30 & 0xfffffffffffffffe);
        }
        if (puVar3 != (undefined8 *)0x0) {
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[2] = puVar3;
          param_2[3] = 1;
          *(undefined1 *)(param_2 + 1) = 2;
        }
      }
      if ((local_48 & 1) != 0) {
        FUN_144be6b30(local_48 & 0xfffffffffffffffe);
      }
      if (puVar3 != (undefined8 *)0x0) {
        plVar4 = (longlong *)FUN_144befe50(param_4,0x400000);
        if ((plVar4 == (longlong *)0x0) || (pcVar5 = (code *)*plVar4, pcVar5 == (code *)0x0)) {
          plVar4 = (longlong *)FUN_144befe50(param_4,0x40);
          pcVar5 = (code *)0x0;
          if (plVar4 != (longlong *)0x0) {
            pcVar5 = (code *)*plVar4;
          }
          if (pcVar5 == (code *)0x0) {
            return 1;
          }
        }
        (*pcVar5)(puVar3,param_4,1);
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144f6ec20 FUN_144f6ec20 body=82 status=ok
// SIG undefined FUN_144f6ec20(void)

undefined4 *
FUN_144f6ec20(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,int param_5
             )

{
  if (param_5 == 0) {
    FUN_144f6ee60(param_3);
    *param_2 = 0;
    return param_2;
  }
  if ((param_5 == 1) && (*(char *)(param_3 + 8) != '\0')) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f6ec80 FUN_144f6ec80 body=245 status=ok
// SIG undefined FUN_144f6ec80(void)

undefined4 *
FUN_144f6ec80(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,int param_5
             ,int param_6,undefined8 *param_7)

{
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  if ((param_5 + 1U < 2) && (param_6 + 1U < 3)) {
    if ((*(int *)(param_7 + 2) < 2) && ((param_6 != 1 || (*(char *)(param_3 + 8) != '\0')))) {
      if (*(int *)(param_7 + 2) == 1) {
        local_28 = *param_7;
        local_20 = param_7[1];
        local_18 = ((ulonglong)*(byte *)(param_7 + 3) ^ param_7[3]) & 0xfffffffffffffffe ^
                   (ulonglong)*(byte *)(param_7 + 3);
        if ((local_18 & 1) != 0) {
          FUN_144be6b20(local_18 & 0xfffffffffffffffe);
        }
        FUN_144f6f130(param_3,&local_28);
        if ((local_18 & 1) != 0) {
          FUN_144be6b30(local_18 & 0xfffffffffffffffe);
          *param_2 = 0;
          return param_2;
        }
      }
      else if (param_6 != 0) {
        FUN_144f6ee60(param_3);
      }
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f6ed80 FUN_144f6ed80 body=47 status=ok
// SIG undefined FUN_144f6ed80(void)

undefined4 *
FUN_144f6ed80(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6)

{
  *param_2 = 0;
  if (param_5 != 0) {
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[2] = param_5;
    param_3[3] = 0;
    *param_3 = param_6;
    *(undefined1 *)(param_3 + 1) = 2;
  }
  return param_2;
}



// FUNCTION 144f6edb0 FUN_144f6edb0 body=66 status=ok
// SIG undefined FUN_144f6edb0(void)

/* WARNING: Removing unreachable block (ram,0x000144f6ede7) */
/* WARNING: Removing unreachable block (ram,0x000144f6eddb) */

void FUN_144f6edb0(undefined8 param_1,undefined8 *param_2)

{
  if ((*(char *)(param_2 + 1) == '\x02') && (param_2[3] != 0)) {
    FUN_144f692e0(param_2[2],*param_2);
    return;
  }
  return;
}



// FUNCTION 144f6ee00 FUN_144f6ee00 body=87 status=ok
// SIG undefined FUN_144f6ee00(void)

undefined8 FUN_144f6ee00(undefined8 param_1,ulonglong param_2)

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



// FUNCTION 144f6ee60 FUN_144f6ee60 body=197 status=ok
// SIG undefined FUN_144f6ee60(void)

/* WARNING: Removing unreachable block (ram,0x000144f6ef0a) */
/* WARNING: Removing unreachable block (ram,0x000144f6ef04) */

void FUN_144f6ee60(longlong *param_1)

{
  char cVar1;
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  cVar1 = (char)param_1[1];
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      local_28 = param_1 + 2;
    }
    else if (cVar1 == '\x02') {
      local_28 = (longlong *)param_1[2];
    }
    else {
      local_28 = (longlong *)0x0;
    }
    local_20 = *param_1;
    if (local_20 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_144befdb0();
    }
    if ((local_18 & 1) != 0) {
      FUN_144be6b20(local_18 & 0xfffffffffffffffe);
    }
    FUN_144becfe0(&local_28,1);
    if ((local_18 & 1) != 0) {
      FUN_144be6b30(local_18 & 0xfffffffffffffffe);
    }
  }
  if (((char)param_1[1] == '\x02') && (param_1[3] != 0)) {
    FUN_144f692e0(param_1[2],*param_1);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 144f6ef30 FUN_144f6ef30 body=304 status=ok
// SIG undefined FUN_144f6ef30(void)

void FUN_144f6ef30(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong local_res8;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  FUN_144bf0690(&local_res8,*param_1);
  if (1 < local_res8) {
    *param_1 = *(longlong *)(*param_1 + 8);
  }
  lVar1 = *param_1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = FUN_144beec90(lVar1);
  if (iVar3 < 0x11) {
    iVar3 = FUN_144beecf0(lVar1);
    if (iVar3 < 0x11) {
      cVar2 = FUN_144f69320(lVar1);
      if (cVar2 != '\0') {
        plVar5 = param_1 + 2;
        *(undefined1 *)(param_1 + 1) = 1;
        *plVar5 = 0;
        param_1[3] = 0;
        goto LAB_144f6f014;
      }
    }
  }
  if (local_58 == 0) {
    puVar4 = (undefined8 *)FUN_144f69200(local_28,*param_1);
    plVar5 = (longlong *)*puVar4;
    local_30 = local_18;
  }
  else {
    FUN_144f69260(local_40,&local_58,uStack_50);
    plVar5 = local_40[0];
  }
  if ((local_30 & 1) != 0) {
    FUN_144be6b30(local_30 & 0xfffffffffffffffe);
  }
  if (plVar5 != (longlong *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[2] = (longlong)plVar5;
    param_1[3] = 1;
    *(undefined1 *)(param_1 + 1) = 2;
  }
LAB_144f6f014:
  if ((local_48 & 1) != 0) {
    FUN_144be6b30(local_48 & 0xfffffffffffffffe);
  }
  lVar1 = *param_1;
  puVar4 = (undefined8 *)FUN_144befe50(lVar1,0x40);
  if ((puVar4 != (undefined8 *)0x0) && ((code *)*puVar4 != (code *)0x0)) {
    (*(code *)*puVar4)(plVar5,lVar1,1);
  }
  return;
}



// FUNCTION 144f6f060 FUN_144f6f060 body=199 status=ok
// SIG undefined FUN_144f6f060(void)

undefined8 * FUN_144f6f060(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *local_28 [2];
  ulonglong local_18;
  
  uVar1 = *param_1;
  iVar3 = FUN_144beec90(uVar1);
  if (iVar3 < 0x11) {
    iVar3 = FUN_144beecf0(uVar1);
    if (iVar3 < 0x11) {
      cVar2 = FUN_144f69320(uVar1);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 1) = 1;
        param_1[2] = 0;
        param_1[3] = 0;
        return param_1 + 2;
      }
    }
  }
  if (*param_2 == 0) {
    plVar4 = (longlong *)FUN_144f69200(local_28,*param_1);
    puVar5 = (undefined8 *)*plVar4;
  }
  else {
    FUN_144f69260(local_28,param_2,param_2[1]);
    puVar5 = local_28[0];
  }
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  if (puVar5 != (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[2] = puVar5;
    param_1[3] = 1;
    *(undefined1 *)(param_1 + 1) = 2;
  }
  return puVar5;
}



// FUNCTION 144f6f130 FUN_144f6f130 body=355 status=ok
// SIG undefined FUN_144f6f130(void)

void FUN_144f6f130(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  if ((longlong *)*param_2 == (longlong *)0x0) {
    FUN_144f6ee60();
    return;
  }
  cVar2 = (char)param_1[1];
  if (cVar2 == '\0') {
    *param_1 = param_2[1];
    FUN_144f6f060(param_1,param_2);
    FUN_144f6f2a0(param_1,param_2);
    return;
  }
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      plVar5 = param_1 + 2;
    }
    else {
      if (cVar2 != '\x02') goto LAB_144f6f1a9;
      plVar5 = (longlong *)param_1[2];
    }
    if ((longlong *)*param_2 == plVar5) {
      return;
    }
  }
LAB_144f6f1a9:
  lVar1 = param_2[1];
  iVar3 = FUN_144beec90(*param_1);
  iVar4 = FUN_144beec90(lVar1);
  if (iVar3 == iVar4) {
    lVar1 = param_2[1];
    iVar3 = FUN_144beecf0(*param_1);
    iVar4 = FUN_144beecf0(lVar1);
    if (((iVar4 <= iVar3) && (cVar2 = FUN_144f69320(param_2[1]), cVar2 != '\0')) &&
       (cVar2 = FUN_144f69320(*param_1), cVar2 != '\0')) {
      cVar2 = (char)param_1[1];
      if (cVar2 == '\0') {
LAB_144f6f222:
        plVar5 = (longlong *)0x0;
      }
      else if (cVar2 == '\x01') {
        plVar5 = param_1 + 2;
      }
      else {
        if (cVar2 != '\x02') goto LAB_144f6f222;
        plVar5 = (longlong *)param_1[2];
      }
      lVar1 = *param_1;
      puVar6 = (undefined8 *)FUN_144befe50(lVar1,0x100);
      if ((puVar6 != (undefined8 *)0x0) && ((code *)*puVar6 != (code *)0x0)) {
        (*(code *)*puVar6)(plVar5,lVar1,1);
      }
      *param_1 = param_2[1];
      goto LAB_144f6f272;
    }
  }
  FUN_144f6ee60(param_1);
  *param_1 = param_2[1];
  FUN_144f6f060(param_1,param_2);
LAB_144f6f272:
  FUN_144f6f2a0(param_1,param_2);
  return;
}



// FUNCTION 144f6f2a0 FUN_144f6f2a0 body=400 status=ok
// SIG undefined FUN_144f6f2a0(void)

void FUN_144f6f2a0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  FUN_144bf0690(&local_res8,*param_1);
  if (1 < local_res8) {
    *param_1 = *(longlong *)(*param_1 + 8);
  }
  local_38 = (longlong *)param_2[2];
  local_48 = *param_2;
  local_40 = param_2[1];
  if (((ulonglong)local_38 & 1) != 0) {
    FUN_144be6b20((ulonglong)local_38 & 0xfffffffffffffffe);
  }
  FUN_144bf0690(&local_res8,local_40);
  plVar6 = (longlong *)0x0;
  plVar5 = local_38;
  if ((1 < local_res8) &&
     (puVar4 = (uint *)FUN_144b45d50(local_40,&local_res8), uVar3 = local_48, local_48 = uVar3,
     plVar5 = local_38, (*puVar4 >> 3 & 1) == 0)) {
    lVar2 = *(longlong *)(local_40 + 8);
    plVar5 = plVar6;
    if (lVar2 != 0) {
      plVar5 = (longlong *)FUN_144befdb0(lVar2);
    }
    if (((ulonglong)plVar5 & 1) != 0) {
      FUN_144be6b20((ulonglong)plVar5 & 0xfffffffffffffffe);
    }
    local_48 = uVar3;
    local_40 = lVar2;
    if (((ulonglong)local_38 & 1) != 0) {
      uVar7 = (ulonglong)local_38 & 0xfffffffffffffffe;
      local_38 = plVar5;
      FUN_144be6b30(uVar7);
      plVar5 = local_38;
    }
  }
  local_38 = plVar5;
  cVar1 = (char)param_1[1];
  local_30 = plVar6;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      local_30 = param_1 + 2;
    }
    else if (cVar1 == '\x02') {
      local_30 = (longlong *)param_1[2];
    }
  }
  local_28 = *param_1;
  if (local_28 != 0) {
    plVar6 = (longlong *)FUN_144befdb0();
  }
  local_20 = plVar6;
  if (((ulonglong)plVar6 & 1) != 0) {
    FUN_144be6b20((ulonglong)plVar6 & 0xfffffffffffffffe);
  }
  FUN_144f6a150(&local_res8,&local_30,&local_48);
  if (((ulonglong)local_20 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_20 & 0xfffffffffffffffe);
  }
  if (((ulonglong)local_38 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_38 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f6f430 FUN_144f6f430 body=187 status=ok
// SIG undefined FUN_144f6f430(void)

void FUN_144f6f430(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  uVar1 = puVar3[3];
  uVar2 = puVar3[2];
  FUN_144bdff50(param_2,"%.8x-%.4x-%.4x-%.2x%.2x-%.2x%.2x%.2x%.2x%.2x%.2x",*puVar3,
                puVar3[1] & 0xffff,(uint)puVar3[1] >> 0x10,uVar2 & 0xff,uVar2 >> 8 & 0xff,
                uVar2 >> 0x10 & 0xff,uVar2 >> 0x18,uVar1 & 0xff,uVar1 >> 8 & 0xff,
                uVar1 >> 0x10 & 0xff,uVar1 >> 0x18);
  return;
}



// FUNCTION 144f6f4f0 FUN_144f6f4f0 body=120 status=ok
// SIG undefined FUN_144f6f4f0(void)

undefined8 * FUN_144f6f4f0(undefined8 *param_1,uint param_2)

{
  *param_1 = hkUuidPseudoRandomGenerator::vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_1453078e0(param_1 + 3);
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



// FUNCTION 144f6f570 FUN_144f6f570 body=270 status=ok
// SIG undefined FUN_144f6f570(void)

undefined4 * FUN_144f6f570(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  __time64_t _Var5;
  undefined8 local_res8;
  
  if (*param_2 == 0) {
    local_res8 = 0x50;
    puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar4,"hkUuidPseudoRandomGenerator");
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0xffffffff;
      *puVar4 = hkUuidPseudoRandomGenerator::vftable;
      puVar4[2] = 1;
      FUN_1453078d0(puVar4 + 3);
      FUN_144b4a250(puVar4 + 5,5000);
      _Var5 = _time64((__time64_t *)0x0);
      uVar2 = clock();
      uVar3 = thunk_FUN_144f50f00();
      FUN_145307910(puVar4 + 3,uVar3 ^ uVar2 ^ (uint)_Var5);
    }
    puVar1 = (undefined8 *)*param_2;
    if ((puVar4 != puVar1) && (*param_2 = (longlong)puVar4, puVar1 != (undefined8 *)0x0)) {
      FUN_144b3f230();
    }
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f6f680 FUN_144f6f680 body=95 status=ok
// SIG undefined FUN_144f6f680(void)

undefined4 * FUN_144f6f680(undefined4 *param_1,longlong *param_2)

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



// FUNCTION 144f6f6e0 FUN_144f6f6e0 body=11 status=ok
// SIG undefined FUN_144f6f6e0(void)

undefined4 * FUN_144f6f6e0(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = param_3;
  return param_1;
}



// FUNCTION 144f6f6f0 FUN_144f6f6f0 body=294 status=ok
// SIG undefined FUN_144f6f6f0(void)

void FUN_144f6f6f0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_res8 [2];
  uint local_res20 [2];
  uint local_78;
  uint local_74;
  undefined1 local_70 [8];
  undefined8 local_68;
  code *local_60;
  uint *local_58;
  code *local_50;
  uint *local_48;
  code *local_40;
  uint *local_38;
  code *local_30;
  uint *local_28;
  code *local_20;
  uint *local_18;
  
  lVar1 = param_1[1];
  puVar4 = (uint *)*param_1;
  if (lVar1 != 0) {
    cVar2 = FUN_144b45dd0(lVar1,&DAT_14c6dd9a0);
    if (cVar2 != '\0') {
      puVar3 = (uint *)FUN_144b45d50(lVar1,local_res8);
      if ((*puVar3 >> 3 & 1) == 0) goto LAB_144f6f740;
    }
  }
  puVar4 = (uint *)0x0;
LAB_144f6f740:
  local_res8[0] = *puVar4;
  local_68 = 5;
  local_74 = local_res8[0] >> 0x18;
  local_78 = local_res8[0] >> 0x10 & 0xff;
  local_res20[0] = local_res8[0] >> 8 & 0xff;
  local_res8[0] = local_res8[0] & 0xff;
  local_58 = local_res8;
  local_48 = local_res20;
  local_38 = &local_78;
  local_28 = &local_74;
  local_20 = FUN_144f508e0;
  local_18 = puVar4 + 1;
  local_60 = FUN_144f50a00;
  local_50 = FUN_144f50a00;
  local_40 = FUN_144f50a00;
  local_30 = FUN_144f50a00;
  FUN_144be1a50(param_2,local_70,"{}.{}.{}.{}:{}",&local_68,0);
  return;
}



// FUNCTION 144f6f820 FUN_144f6f820 body=118 status=ok
// SIG undefined FUN_144f6f820(void)

undefined8 * FUN_144f6f820(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  FUN_144bde670(local_218,local_208,0x200);
  FUN_144be6160(local_218,
                "Only AttributeArrayWithOwnership::AllocImpl\'s deallocate function should be used."
               );
  iVar2 = FUN_144bfc110(0x296f573f,local_208,"Reflect\\Builder\\hkTypeBuilder.cpp",0x61);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  FUN_144bde6e0(local_218);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 144f6f8a0 FUN_144f6f8a0 body=118 status=ok
// SIG undefined FUN_144f6f8a0(void)

undefined8 * FUN_144f6f8a0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  FUN_144bde670(local_218,local_208,0x200);
  FUN_144be6160(local_218,
                "Only AttributeArrayWithOwnership::AllocImpl\'s deallocate function should be used."
               );
  iVar2 = FUN_144bfc110(0x35e7532e,local_208,"Reflect\\Builder\\hkTypeBuilder.cpp",0x67);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  FUN_144bde6e0(local_218);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 144f6f920 FUN_144f6f920 body=3 status=ok
// SIG undefined FUN_144f6f920(void)

undefined1 FUN_144f6f920(void)

{
  return 0;
}



// FUNCTION 144f6f930 FUN_144f6f930 body=12 status=ok
// SIG undefined FUN_144f6f930(void)

void FUN_144f6f930(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144f6f935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c787678)(0,param_2,0);
  return;
}



// FUNCTION 144f6f940 FUN_144f6f940 body=87 status=ok
// SIG undefined FUN_144f6f940(void)

undefined8 FUN_144f6f940(undefined8 param_1,ulonglong param_2)

{
  FUN_144be7ef0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f6f9a0 FUN_144f6f9a0 body=246 status=ok
// SIG undefined FUN_144f6f9a0(void)

void FUN_144f6f9a0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  lVar1 = *param_1;
  if (0 < (longlong)(int)lVar1) {
    plVar3 = param_1 + 1;
    uVar5 = 0;
    do {
      lVar4 = *param_1 * 0x10 + uVar5;
      if (*(char *)(lVar4 + 8 + (longlong)param_1) == '\x01') {
        local_30 = plVar3[1];
        local_38 = *plVar3;
        uVar2 = 0;
        if (local_30 != 0) {
          uVar2 = FUN_144befdb0();
        }
        local_28 = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
        }
        FUN_144becfe0(&local_38,3,1);
        if ((local_28 & 1) != 0) {
          FUN_144be6b30(local_28 & 0xfffffffffffffffe);
        }
        *plVar3 = 0;
        plVar3[1] = (longlong)&DAT_14c6dcd88;
        *(undefined1 *)(lVar4 + 8 + (longlong)param_1) = 0;
      }
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 2;
    } while ((longlong)uVar5 < (longlong)(int)lVar1);
  }
  return;
}



// FUNCTION 144f6faa0 FUN_144f6faa0 body=314 status=ok
// SIG undefined FUN_144f6faa0(void)

undefined8 * FUN_144f6faa0(undefined8 *param_1)

{
  param_1[3] = 0x1fc0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *param_1 = hkReflect::TypeBuilder::vftable;
  param_1[1] = hkMemory::BufferedAllocatorNoCleanup::vftable;
  param_1[2] = &PTR_vftable_14c6e47c0;
  param_1[5] = 0;
  param_1[0x32] = param_1 + 0x34;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  *(undefined1 *)((longlong)param_1 + 0x21a) = 0;
  param_1[0x3a] = param_1 + 0x3c;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x80000002;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x80000003;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x80000000;
  *(undefined2 *)(param_1 + 0x43) = 1;
  memset(param_1 + 0xd,0,0x100);
  return param_1;
}



// FUNCTION 144f6fbe0 FUN_144f6fbe0 body=768 status=ok
// SIG undefined FUN_144f6fbe0(void)

void FUN_144f6fbe0(undefined8 *param_1)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  
  *param_1 = hkReflect::TypeBuilder::vftable;
  lVar3 = param_1[0x3a];
  for (lVar7 = lVar3 + (longlong)*(int *)(param_1 + 0x3b) * 8; lVar7 != lVar3; lVar7 = lVar7 + -8) {
    puVar4 = *(undefined8 **)(lVar7 + -8);
    (**(code **)*puVar4)(puVar4,0);
    (**(code **)(param_1[1] + 0x18))(param_1 + 1,puVar4,0x220);
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x20c)) && (param_1[0x40] != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,param_1[0x40],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x20c) & 0x7fffffff) << 3);
  }
  param_1[0x40] = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1dc)) && (param_1[0x3a] != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,param_1[0x3a],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1dc) & 0x7fffffff) << 3);
  }
  param_1[0x3a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x39) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1cc)) && (param_1[0x38] != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,param_1[0x38],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1cc) & 0x7fffffff) << 4);
  }
  param_1[0x38] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x19c)) && (param_1[0x32] != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,param_1[0x32],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x19c) & 0x7fffffff) << 4);
  }
  param_1[0x32] = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x80000000;
  puVar5 = (undefined4 *)param_1[0x30];
  if (puVar5 + (longlong)*(int *)(param_1 + 0x31) * 0xe != puVar5) {
    puVar8 = puVar5 + (longlong)*(int *)(param_1 + 0x31) * 0xe + 0xb;
    do {
      puVar8[-0xf] = 0;
      if ((-1 < (int)puVar8[-0xe]) && (*(longlong *)(puVar8 + -0x11) != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,*(longlong *)(puVar8 + -0x11),
                   (ulonglong)(puVar8[-0xe] & 0x7fffffff) << 3);
      }
      puVar1 = puVar8 + -0x19;
      *(undefined8 *)(puVar8 + -0x11) = 0;
      puVar8[-0xe] = 0x80000000;
      puVar8 = puVar8 + -0xe;
    } while (puVar1 != puVar5);
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x18c)) && (param_1[0x30] != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,param_1[0x30],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x18c) & 0x7fffffff) * 0x38);
  }
  param_1[0x30] = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x80000000;
  puVar6 = (ulonglong *)param_1[0x2e];
  if (puVar6 + (longlong)*(int *)(param_1 + 0x2f) * 3 != puVar6) {
    puVar9 = puVar6 + (longlong)*(int *)(param_1 + 0x2f) * 3 + 2;
    do {
      if ((puVar9[-3] & 1) != 0) {
        FUN_144be6b30(puVar9[-3] & 0xfffffffffffffffe);
      }
      puVar2 = puVar9 + -5;
      puVar9 = puVar9 + -3;
    } while (puVar2 != puVar6);
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x17c)) && (param_1[0x2e] != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,param_1[0x2e],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x17c) & 0x7fffffff) * 0x18);
  }
  param_1[0x2e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x80000000;
  param_1[1] = hkMemory::BufferedAllocatorNoCleanup::vftable;
  FUN_144f89650();
  return;
}



// FUNCTION 144f6fee0 FUN_144f6fee0 body=43 status=ok
// SIG undefined FUN_144f6fee0(void)

void FUN_144f6fee0(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x168) = param_2;
  if (param_2 == 0) {
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffbffffff;
    return;
  }
  *(longlong *)(param_1 + 0x138) = param_2;
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x4000000;
  return;
}



// FUNCTION 144f6ff10 FUN_144f6ff10 body=5 status=ok
// SIG undefined FUN_144f6ff10(void)

void FUN_144f6ff10(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}



// FUNCTION 144f6ff20 FUN_144f6ff20 body=145 status=ok
// SIG undefined FUN_144f6ff20(void)

void FUN_144f6ff20(longlong param_1,ulonglong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_res18 [4];
  
  puVar5 = (undefined8 *)(param_1 + 0x68);
  *(ulonglong *)(param_1 + 0x58) = param_2[1];
  uVar3 = 1;
  *(ulonglong *)(param_1 + 0x60) = (ulonglong)param_3 & *param_2;
  lVar4 = 0x20;
  do {
    if (((*(ulonglong *)(param_1 + 0x60) & (longlong)(int)uVar3) == 0) ||
       ((*param_2 & (longlong)(int)uVar3) == 0)) {
LAB_144f6ff78:
      uVar2 = 0;
    }
    else {
      puVar1 = (undefined8 *)FUN_144befea0(param_2,uVar3);
      if (puVar1 == (undefined8 *)0x0) goto LAB_144f6ff78;
      uVar2 = *puVar1;
    }
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      FUN_144b45d50(param_2,local_res18);
      *(undefined4 *)(param_1 + 0x50) = local_res18[0];
      return;
    }
  } while( true );
}



// FUNCTION 144f6ffc0 FUN_144f6ffc0 body=339 status=ok
// SIG undefined FUN_144f6ffc0(void)

void FUN_144f6ffc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint *puVar6;
  int iVar7;
  undefined1 local_res10 [8];
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  lVar2 = param_2[1];
  lVar3 = *param_2;
  if ((((lVar2 != 0) && (cVar5 = FUN_144b45dd0(lVar2,&DAT_14c6de7a0), cVar5 != '\0')) &&
      (puVar6 = (uint *)FUN_144b45d50(lVar2,local_res10), (*puVar6 >> 3 & 1) == 0)) && (lVar3 != 0))
  {
    lVar2 = *param_2;
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x1000;
    *(longlong *)(param_1 + 200) = lVar2;
    return;
  }
  if (*param_2 == 0) {
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,"Adding null attr; this will be ignored");
    FUN_144bfc0d0(0x22442111,local_208,"Reflect\\Builder\\hkTypeBuilder.cpp",0x236);
    FUN_144bde6e0(local_218);
  }
  else {
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x20;
    *(undefined8 *)(param_1 + 0x90) = 0;
    iVar7 = *(int *)(param_1 + 0x178) + 1;
    if ((int)(*(uint *)(param_1 + 0x17c) & 0x7fffffff) < iVar7) {
      FUN_144c00810((longlong *)(param_1 + 0x170),&PTR_vftable_14c6e47c0,(longlong)iVar7);
    }
    plVar1 = (longlong *)
             (*(longlong *)(param_1 + 0x170) + (longlong)*(int *)(param_1 + 0x178) * 0x18);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = *param_2;
      plVar1[1] = param_2[1];
      uVar4 = param_2[2];
      plVar1[2] = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
      }
    }
    *(int *)(param_1 + 0x178) = iVar7;
  }
  return;
}



// FUNCTION 144f70120 FUN_144f70120 body=214 status=ok
// SIG undefined FUN_144f70120(void)

void FUN_144f70120(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_a8 [20];
  
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x8000;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144bdf480(local_a8,&DAT_14998c128,param_3,0,0,0,0);
  iVar1 = *(int *)(param_1 + 0x198);
  iVar3 = iVar1 + 1;
  if ((int)(*(uint *)(param_1 + 0x19c) & 0x7fffffff) < iVar3) {
    FUN_144f71b60(param_1 + 400,&PTR_vftable_14c6e47c0,(longlong)iVar3);
  }
  *(int *)(param_1 + 0x198) = iVar3;
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 400));
  uVar2 = FUN_144bfbd30(local_a8[0],param_1 + 8);
  puVar4[1] = uVar2;
  *puVar4 = param_2;
  FUN_144bdf2f0(local_a8);
  return;
}



// FUNCTION 144f70200 FUN_144f70200 body=214 status=ok
// SIG undefined FUN_144f70200(void)

void FUN_144f70200(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_a8 [20];
  
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x8000;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144bdf480(local_a8,&DAT_149c10278,param_3,0,0,0,0);
  iVar1 = *(int *)(param_1 + 0x198);
  iVar3 = iVar1 + 1;
  if ((int)(*(uint *)(param_1 + 0x19c) & 0x7fffffff) < iVar3) {
    FUN_144f71b60(param_1 + 400,&PTR_vftable_14c6e47c0,(longlong)iVar3);
  }
  *(int *)(param_1 + 0x198) = iVar3;
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 400));
  uVar2 = FUN_144bfbd30(local_a8[0],param_1 + 8);
  puVar4[1] = uVar2;
  *puVar4 = param_2;
  FUN_144bdf2f0(local_a8);
  return;
}



// FUNCTION 144f702e0 FUN_144f702e0 body=141 status=ok
// SIG undefined FUN_144f702e0(void)

void FUN_144f702e0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x4000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  iVar1 = *(int *)(param_1 + 0x1c8);
  iVar3 = iVar1 + 1;
  if ((int)(*(uint *)(param_1 + 0x1cc) & 0x7fffffff) < iVar3) {
    FUN_144f71c70((longlong *)(param_1 + 0x1c0),&PTR_vftable_14c6e47c0,(longlong)iVar3);
  }
  *(int *)(param_1 + 0x1c8) = iVar3;
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x1c0));
  puVar2[1] = (longlong)param_3;
  *puVar2 = param_2;
  return;
}



// FUNCTION 144f70370 FUN_144f70370 body=74 status=ok
// SIG undefined FUN_144f70370(void)

void FUN_144f70370(longlong param_1,undefined8 param_2,ushort param_3,ulonglong param_4)

{
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  if ((param_4 & 0x30) == 0) {
    param_4 = (ulonglong)((uint)param_4 | 0x20);
  }
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x70000;
  *(ulonglong *)(param_1 + 0xf0) = (param_4 & 0xffff) << 0x10 | (ulonglong)param_3;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}



// FUNCTION 144f703c0 FUN_144f703c0 body=195 status=ok
// SIG undefined FUN_144f703c0(void)

longlong FUN_144f703c0(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = param_4 & 0xffffffff;
  lVar2 = FUN_144f711c0(param_1,param_4 & 0xffffffff);
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x800000;
  lVar1 = *(longlong *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(longlong *)(lVar2 + 0x168) = lVar1;
  if (lVar1 == 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x60) & 0xfffffffffbffffff;
  }
  else {
    *(longlong *)(lVar2 + 0x138) = lVar1;
    uVar3 = *(ulonglong *)(lVar2 + 0x60) | 0x4000000;
  }
  *(undefined8 *)(lVar2 + 0x58) = param_5;
  *(undefined8 *)(lVar2 + 0xe8) = param_2;
  if ((param_4 & 0x30) == 0) {
    uVar4 = (ulonglong)(ushort)((ushort)uVar4 | 0x20);
  }
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  *(ulonglong *)(lVar2 + 0xf0) = (uVar4 & 0xffff) << 0x10 | param_3 & 0xffff;
  *(ulonglong *)(lVar2 + 0x60) = uVar3 | 0x70000;
  return lVar2;
}



// FUNCTION 144f70490 FUN_144f70490 body=51 status=ok
// SIG undefined FUN_144f70490(void)

void FUN_144f70490(longlong param_1)

{
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x2c0;
  *(code **)(param_1 + 0x98) = FUN_144bf35f0;
  *(code **)(param_1 + 0xa0) = FUN_144bf3630;
  *(code **)(param_1 + 0xb0) = FUN_144bf3670;
  return;
}



// FUNCTION 144f704d0 FUN_144f704d0 body=15 status=ok
// SIG undefined FUN_144f704d0(void)

void FUN_144f704d0(longlong param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x218) = 1;
  FUN_144f71420(param_1,param_2,0);
  return;
}



// FUNCTION 144f704e0 FUN_144f704e0 body=12 status=ok
// SIG undefined FUN_144f704e0(void)

void FUN_144f704e0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x218) = 0;
  FUN_144f71420();
  return;
}



// FUNCTION 144f704f0 FUN_144f704f0 body=419 status=ok
// SIG undefined FUN_144f704f0(void)

undefined4 *
FUN_144f704f0(longlong *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  *param_4 = 0;
  if ((*(uint *)(param_1 + 0xc) & 0x100001) != 1) {
    iVar2 = (**(code **)(*param_1 + 8))();
    if ((param_1[0x42] != 0) &&
       (*(longlong **)(param_1[0x42] + 8) = param_3, (char)param_1[0x43] != '\0')) {
      *(longlong *)(param_1[0x42] + 0x10) = (longlong)iVar2;
    }
    _Dst = (void *)(**(code **)(*param_3 + 8))(param_3);
    memset(_Dst,0,(longlong)iVar2);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1,_Dst,iVar2);
    *param_4 = uVar3;
    *param_2 = 0;
    return param_2;
  }
  if ((DAT_14c798cc8 != '\0') || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      uVar3 = FUN_144bdc640(local_1c8);
      local_res8 = 0;
      lVar4 = FUN_144bdc480(uVar3,"You must have an Opt::SIZE_ALIGN if you have an Opt::FORMAT",
                            &local_res8,0);
      *(char **)(lVar4 + 0x38) = "Reflect\\Builder\\hkTypeBuilder.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0x3dd;
      *(undefined4 *)(lVar4 + 0x1c) = 0x18bd024f;
      FUN_144bdc690(local_1c8);
      *param_2 = 0x80040200;
      return param_2;
    }
    uVar3 = FUN_144bdc810(local_178,&DAT_14c798c78,1);
    local_res20 = 0;
    lVar4 = FUN_144bdc480(uVar3,"You must have an Opt::SIZE_ALIGN if you have an Opt::FORMAT",
                          &local_res20,0);
    *(char **)(lVar4 + 0x38) = "Reflect\\Builder\\hkTypeBuilder.cpp";
    *(undefined8 *)(lVar4 + 0x40) = 0x3dd;
    *(undefined4 *)(lVar4 + 0x1c) = 0x18bd024f;
    FUN_144bdc8a0(local_178);
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f706a0 FUN_144f706a0 body=379 status=ok
// SIG undefined FUN_144f706a0(void)

undefined8 FUN_144f706a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  if ((*(uint *)(param_1 + 0xc) & 0x100001) != 1) {
    iVar2 = (**(code **)(*param_1 + 8))();
    if ((param_1[0x42] != 0) &&
       (*(longlong **)(param_1[0x42] + 8) = param_2, (char)param_1[0x43] != '\0')) {
      *(longlong *)(param_1[0x42] + 0x10) = (longlong)iVar2;
    }
    _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
    memset(_Dst,0,(longlong)iVar2);
                    /* WARNING: Could not recover jumptable at 0x000144f70817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1,_Dst,iVar2);
    return uVar3;
  }
  if ((DAT_14c798cc8 == '\0') && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = FUN_144bdbf80();
  if (cVar1 == '\0') {
    uVar3 = FUN_144bdc640(local_1b8);
    local_res8 = 0;
    lVar4 = FUN_144bdc480(uVar3,"You must have an Opt::SIZE_ALIGN if you have an Opt::FORMAT",
                          &local_res8,0);
    *(char **)(lVar4 + 0x38) = "Reflect\\Builder\\hkTypeBuilder.cpp";
    *(undefined8 *)(lVar4 + 0x40) = 0x3dd;
    *(undefined4 *)(lVar4 + 0x1c) = 0x18bd024f;
    FUN_144bdc690(local_1b8);
    return 0;
  }
  uVar3 = FUN_144bdc810(local_168,&DAT_14c798c78,1);
  local_res18[0] = 0;
  lVar4 = FUN_144bdc480(uVar3,"You must have an Opt::SIZE_ALIGN if you have an Opt::FORMAT",
                        local_res18,0);
  *(char **)(lVar4 + 0x38) = "Reflect\\Builder\\hkTypeBuilder.cpp";
  *(undefined8 *)(lVar4 + 0x40) = 0x3dd;
  *(undefined4 *)(lVar4 + 0x1c) = 0x18bd024f;
  FUN_144bdc8a0(local_168);
  return 0;
}



// FUNCTION 144f70820 FUN_144f70820 body=43 status=ok
// SIG undefined FUN_144f70820(void)

int FUN_144f70820(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  return iVar2 + iVar1;
}



// FUNCTION 144f70850 FUN_144f70850 body=50 status=ok
// SIG undefined FUN_144f70850(void)

int FUN_144f70850(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_14c6da350)(*(undefined4 *)(param_1 + 0x60));
  iVar2 = iVar1 * 8 + 0x10;
  if ((*(longlong *)(param_1 + 0x168) != 0) && ((*(byte *)(param_1 + 0x60) & 1) == 0)) {
    iVar2 = iVar1 * 8 + 8;
  }
  return iVar2;
}



// FUNCTION 144f70890 FUN_144f70890 body=382 status=ok
// SIG undefined FUN_144f70890(void)

ulonglong FUN_144f70890(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  uVar6 = 0;
  uVar5 = uVar6;
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar5 = (longlong)*(int *)(param_1 + 0x178) * 0x10 + 8;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x188);
  if ((*(int *)(param_1 + 0x188) != 0) && (uVar5 = uVar5 + lVar3 * 0x40 + 0x10, 0 < lVar3)) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x180) + 0x28);
    do {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 0xe;
      uVar5 = uVar5 + 0x10 + (longlong)iVar2 * 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if ((((*(uint *)(param_1 + 0x60) >> 0xf & 1) != 0) && (*(longlong *)(param_1 + 0xe0) == 0)) &&
     (uVar5 = uVar5 + (longlong)*(int *)(param_1 + 0x198) * 0x10 + 0x10, uVar8 = uVar6,
     0 < *(int *)(param_1 + 0x198))) {
    do {
      iVar2 = FUN_144bfbbb0(*(undefined8 *)(*(longlong *)(param_1 + 400) + 8 + uVar6));
      uVar6 = uVar6 + 0x10;
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + ((longlong)(iVar2 + 1) + 7U & 0xfffffffffffffff8);
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 0x198));
  }
  if ((*(ulonglong *)(param_1 + 0x60) >> 0xe & 1) != 0) {
    uVar5 = uVar5 + (longlong)*(int *)(param_1 + 0x1c8) * 0x10 + 8;
  }
  if (((*(ulonglong *)(param_1 + 0x60) >> 0x17 & 1) != 0) && (*(longlong *)(param_1 + 0x120) == 0))
  {
    puVar9 = *(undefined8 **)(param_1 + 0x1d0);
    lVar3 = uVar5 + (longlong)*(int *)(param_1 + 0x1d8) * 8 + 8;
    puVar1 = puVar9 + *(int *)(param_1 + 0x1d8);
    for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      iVar2 = (**(code **)(*(longlong *)*puVar9 + 8))();
      lVar3 = lVar3 + iVar2;
    }
    return lVar3 + 8;
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 144f70a10 FUN_144f70a10 body=41 status=ok
// SIG undefined FUN_144f70a10(void)

void FUN_144f70a10(longlong *param_1,longlong param_2,int param_3)

{
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_20 = param_3 + param_2;
  local_28 = param_2;
  local_18 = param_2;
  (**(code **)(*param_1 + 0x20))(param_1,&local_28);
  return;
}



// FUNCTION 144f70a40 FUN_144f70a40 body=65 status=ok
// SIG undefined FUN_144f70a40(void)

undefined8 FUN_144f70a40(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0x38))(param_1,uVar1,param_2);
  return uVar1;
}



// FUNCTION 144f70a90 FUN_144f70a90 body=344 status=ok
// SIG undefined FUN_144f70a90(void)

ulonglong * FUN_144f70a90(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  uVar3 = *(ulonglong *)(param_1 + 0x60);
  if (((uVar3 & 1) == 0) && (*(longlong *)(param_1 + 0x168) != 0)) {
    uVar3 = uVar3 & 0xfffffffffbffffff;
  }
  puVar4 = (ulonglong *)(((*param_2 - param_2[2]) + 7 & 0xfffffffffffffff8) + param_2[2]);
  *param_2 = (ulonglong)(puVar4 + 2);
  if ((ulonglong *)param_2[1] < puVar4 + 2) {
    FUN_144bfc170(0xdeadf11d,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                  ,0x2f,"hkLinearBuffer exhausted");
  }
  uVar5 = 1;
  *puVar4 = uVar3;
  puVar7 = (undefined8 *)(param_1 + 0x68);
  puVar4[1] = *(ulonglong *)(param_1 + 0x58);
  lVar6 = 0x20;
  do {
    if ((uVar3 & (longlong)(int)uVar5) != 0) {
      puVar2 = (undefined8 *)(((*param_2 - param_2[2]) + 7 & 0xfffffffffffffff8) + param_2[2]);
      puVar1 = puVar2 + 1;
      *param_2 = (ulonglong)puVar1;
      if ((undefined8 *)param_2[1] < puVar1) {
        FUN_144bfc170(0xdeadf11d,
                      "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                      ,0x2f,"hkLinearBuffer exhausted");
      }
      *puVar2 = *puVar7;
    }
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    puVar7 = puVar7 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar1 = *(undefined8 **)(param_1 + 0x200);
  puVar7 = puVar1 + *(int *)(param_1 + 0x208);
  for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
    *(ulonglong **)*puVar1 = puVar4;
  }
  return puVar4;
}



// FUNCTION 144f70bf0 FUN_144f70bf0 body=1292 status=ok
// SIG undefined FUN_144f70bf0(void)

undefined8 FUN_144f70bf0(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  void *_Dst;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined **local_38;
  ulonglong *local_30;
  
  uVar18 = 0;
  iVar7 = *(int *)(param_1 + 0x178);
  if (iVar7 != 0) {
    plVar14 = (longlong *)*param_3;
    *param_3 = (ulonglong)(plVar14 + (longlong)iVar7 * 2 + 1);
    if ((longlong *)param_3[1] < plVar14 + (longlong)iVar7 * 2 + 1) {
      FUN_144bfc170(0xdeadf11d,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                    ,0x1e,"hkLinearBuffer exhausted");
    }
    plVar15 = plVar14 + 1;
    *plVar14 = (longlong)*(int *)(param_1 + 0x178);
    uVar13 = uVar18;
    uVar16 = uVar18;
    if (0 < *(int *)(param_1 + 0x178)) {
      do {
        uVar17 = (int)uVar16 + 1;
        *plVar15 = *(longlong *)(uVar13 + *(longlong *)(param_1 + 0x170));
        plVar15[1] = *(longlong *)(*(longlong *)(param_1 + 0x170) + -0x10 + uVar13 + 0x18);
        uVar13 = uVar13 + 0x18;
        plVar15 = plVar15 + 2;
        uVar16 = (ulonglong)uVar17;
      } while ((int)uVar17 < *(int *)(param_1 + 0x178));
    }
    puVar8 = (ulonglong *)FUN_144befed0(param_2,0x20);
    *puVar8 = (ulonglong)plVar14;
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    plVar14 = (longlong *)(((*param_3 - param_3[2]) + 7 & 0xfffffffffffffff8) + param_3[2]);
    *param_3 = (ulonglong)(plVar14 + 2);
    if ((longlong *)param_3[1] < plVar14 + 2) {
      FUN_144bfc170(0xdeadf11d,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                    ,0x2f,"hkLinearBuffer exhausted");
    }
    puVar9 = (undefined8 *)FUN_144befed0(param_2,0x400);
    *puVar9 = plVar14;
    lVar10 = FUN_144f716c0(param_3,(longlong)*(int *)(param_1 + 0x188) << 6,8);
    *plVar14 = lVar10;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined2 *)((longlong)plVar14 + 0xc) = 0;
    iVar7 = *(int *)(param_1 + 0x188);
    uVar13 = uVar18;
    uVar16 = uVar18;
    if (0 < iVar7) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x180);
        if (*(char *)(lVar3 + 0x30 + uVar13) == '\0') {
          FUN_144f71770((longlong)(int)uVar16 * 0x38 + lVar3,*(undefined8 *)(lVar3 + uVar13 + 0x18),
                        param_2,lVar10,param_3);
          *(short *)(plVar14 + 1) = (short)plVar14[1] + 1;
          lVar10 = lVar10 + 0x40;
        }
        iVar7 = *(int *)(param_1 + 0x188);
        uVar17 = (int)uVar16 + 1;
        uVar13 = uVar13 + 0x38;
        uVar16 = (ulonglong)uVar17;
      } while ((int)uVar17 < iVar7);
    }
    uVar13 = uVar18;
    uVar16 = uVar18;
    if (0 < iVar7) {
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x180) + 0x30 + uVar13) == '\x01') {
          FUN_144f71770((longlong)(int)uVar16 * 0x38 + *(longlong *)(param_1 + 0x180),param_2,0,
                        lVar10,param_3);
          *(short *)((longlong)plVar14 + 10) = *(short *)((longlong)plVar14 + 10) + 1;
          lVar10 = lVar10 + 0x40;
        }
        iVar7 = *(int *)(param_1 + 0x188);
        uVar17 = (int)uVar16 + 1;
        uVar13 = uVar13 + 0x38;
        uVar16 = (ulonglong)uVar17;
      } while ((int)uVar17 < iVar7);
    }
    uVar13 = uVar18;
    uVar16 = uVar18;
    if (0 < iVar7) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x180);
        if (*(char *)(lVar3 + 0x30 + uVar13) == '\x02') {
          FUN_144f71770((longlong)(int)uVar16 * 0x38 + lVar3,*(undefined8 *)(lVar3 + uVar13 + 0x18),
                        0,lVar10,param_3);
          *(short *)((longlong)plVar14 + 0xc) = *(short *)((longlong)plVar14 + 0xc) + 1;
          lVar10 = lVar10 + 0x40;
        }
        uVar17 = (int)uVar16 + 1;
        uVar13 = uVar13 + 0x38;
        uVar16 = (ulonglong)uVar17;
      } while ((int)uVar17 < *(int *)(param_1 + 0x188));
    }
  }
  if ((*(uint *)(param_1 + 0x60) >> 0xf & 1) != 0) {
    lVar10 = *(longlong *)(param_1 + 0xe0);
    if (lVar10 == 0) {
      lVar10 = (longlong)*(int *)(param_1 + 0x198);
      puVar9 = (undefined8 *)*param_3;
      *param_3 = (ulonglong)(puVar9 + (lVar10 + 1) * 2);
      if ((undefined8 *)param_3[1] < puVar9 + (lVar10 + 1) * 2) {
        FUN_144bfc170(0xdeadf11d,
                      "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                      ,0x1e,"hkLinearBuffer exhausted");
      }
      puVar9[1] = lVar10;
      *puVar9 = 0;
      puVar11 = (undefined8 *)FUN_144befed0(param_2,0x8000);
      *puVar11 = puVar9;
      uVar13 = uVar18;
      if (0 < lVar10) {
        do {
          iVar7 = FUN_144bfbbb0(*(undefined8 *)(uVar13 + 8 + *(longlong *)(param_1 + 400)));
          _Dst = (void *)FUN_144f716c0(param_3,(longlong)(iVar7 + 8) & 0xfffffffffffffff8,1);
          memcpy(_Dst,*(void **)(uVar13 + 8 + *(longlong *)(param_1 + 400)),(longlong)(iVar7 + 1));
          uVar18 = uVar18 + 1;
          *(undefined8 *)((longlong)puVar9 + uVar13 + 0x10) =
               *(undefined8 *)(uVar13 + *(longlong *)(param_1 + 400));
          *(void **)((longlong)puVar9 + uVar13 + 0x18) = _Dst;
          uVar13 = uVar13 + 0x10;
        } while ((longlong)uVar18 < lVar10);
      }
    }
    else {
      plVar14 = (longlong *)FUN_144befed0(param_2,0x8000);
      *plVar14 = lVar10;
    }
  }
  uVar18 = 0;
  if ((*(uint *)(param_1 + 0x60) >> 0xe & 1) != 0) {
    plVar14 = (longlong *)*param_3;
    lVar10 = (longlong)*(int *)(param_1 + 0x1c8);
    *param_3 = (ulonglong)(plVar14 + lVar10 * 2 + 1);
    if ((longlong *)param_3[1] < plVar14 + lVar10 * 2 + 1) {
      FUN_144bfc170(0xdeadf11d,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                    ,0x1e,"hkLinearBuffer exhausted");
    }
    *plVar14 = lVar10;
    uVar13 = uVar18;
    uVar16 = uVar18;
    if (0 < lVar10) {
      do {
        uVar16 = uVar16 + 1;
        puVar1 = (undefined4 *)(uVar13 + *(longlong *)(param_1 + 0x1c0));
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)((longlong)plVar14 + uVar13 + 8);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        uVar13 = uVar13 + 0x10;
      } while ((longlong)uVar16 < lVar10);
    }
    puVar8 = (ulonglong *)FUN_144befed0(param_2,0x4000);
    *puVar8 = (ulonglong)plVar14;
  }
  if ((*(uint *)(param_1 + 0x60) >> 0x17 & 1) != 0) {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      local_38 = `public:_virtual_class_hkReflect::Type*___ptr64___cdecl_hkReflect::TypeBuilder::writeBodyOnBuffer(hkReflect::Type*___ptr64,hkLinearBuffer&___ptr64)const___ptr64'
                 ::__l48::Alloc::vftable;
      local_30 = param_3;
      lVar10 = FUN_144bf0930(0,*(int *)(param_1 + 0x1f8),
                             *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1f8),&local_38);
      uVar13 = uVar18;
      if (0 < *(int *)(param_1 + 0x1d8)) {
        do {
          plVar14 = *(longlong **)(uVar13 + *(longlong *)(param_1 + 0x1d0));
          uVar12 = (**(code **)(*plVar14 + 0x20))(plVar14,param_3);
          puVar9 = (undefined8 *)FUN_144befed0(uVar12,0x40000);
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
          *puVar9 = param_2;
          *(undefined8 *)(lVar10 + uVar13 + 8) = uVar12;
          uVar13 = uVar13 + 8;
        } while ((int)uVar17 < *(int *)(param_1 + 0x1d8));
      }
      plVar14 = (longlong *)FUN_144befed0(param_2,0x800000);
      *plVar14 = lVar10;
    }
    if (*(char *)(param_1 + 0x219) != '\0') {
      FUN_144f93660(param_2);
    }
  }
  if (*(char *)(param_1 + 0x21a) != '\0') {
    FUN_144f69520(param_2,1);
  }
  return param_2;
}



// FUNCTION 144f71100 FUN_144f71100 body=185 status=ok
// SIG undefined FUN_144f71100(void)

void FUN_144f71100(uint *param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  
  FUN_144f719a0(param_1,param_1);
  if (((((*param_1 >> 0x17 & 1) != 0) &&
       (puVar4 = (undefined8 *)FUN_144befea0(param_1,0x800000), puVar4 != (undefined8 *)0x0)) &&
      (puVar2 = (uint *)*puVar4, puVar2 != (uint *)0x0)) &&
     ((param_1 <= puVar2 && (puVar2 <= (uint *)((longlong)param_1 + param_3))))) {
    puVar1 = puVar2 + ((longlong)(short)puVar2[1] + 1) * 2;
    while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
      puVar3 = *(uint **)puVar2;
      if ((param_1 <= puVar3) && (puVar3 <= (uint *)((longlong)param_1 + param_3))) {
        FUN_144f719a0(puVar3,param_1,param_3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144f711b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_1,param_3);
  return;
}



// FUNCTION 144f711c0 FUN_144f711c0 body=595 status=ok
// SIG undefined FUN_144f711c0(void)

undefined8 FUN_144f711c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)(param_1 + 0x1d0);
  if ((param_2 & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x1f8);
    *(int *)(param_1 + 0x1f8) = iVar2 + 1;
    iVar7 = *(int *)(param_1 + 0x1d8) + 1;
    iVar6 = *(int *)(param_1 + 0x1d8) - iVar2;
    if ((int)(*(uint *)(param_1 + 0x1dc) & 0x7fffffff) < iVar7) {
      FUN_144f71d80(plVar1,&PTR_vftable_14c6e47c0,(longlong)iVar7);
    }
    puVar8 = (undefined8 *)(*plVar1 + (longlong)iVar2 * 8);
    puVar3 = puVar8 + 1;
    if (iVar6 != 0) {
      if (puVar3 < puVar8) {
        if ((longlong)iVar6 * 8 != 0) {
          lVar9 = (longlong)puVar8 - (longlong)puVar3;
          lVar5 = ((longlong)iVar6 * 8 - 1U >> 3) + 1;
          do {
            *puVar3 = *(undefined8 *)(lVar9 + (longlong)puVar3);
            puVar3 = puVar3 + 1;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
      }
      else if (puVar3 != puVar8) {
        FUN_144bfb260(puVar3,puVar8,(longlong)iVar6 << 3);
      }
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x1d8) + 1;
    if ((int)(*(uint *)(param_1 + 0x1dc) & 0x7fffffff) < iVar7) {
      FUN_144f71d80(plVar1,&PTR_vftable_14c6e47c0,(longlong)iVar7);
    }
    puVar8 = (undefined8 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x1d8) * 8);
  }
  *(int *)(param_1 + 0x1d8) = iVar7;
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 8) + 8))();
  *puVar8 = puVar3;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = &PTR_vftable_14c6e47c0;
    puVar3[3] = 0x1fc0;
    *puVar3 = hkReflect::TypeBuilder::vftable;
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
    puVar3[1] = hkMemory::BufferedAllocatorNoCleanup::vftable;
    puVar3[0x32] = puVar3 + 0x34;
    puVar3[0x3a] = puVar3 + 0x3c;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80000000;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = 0x80000000;
    *(undefined4 *)(puVar3 + 10) = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    *(undefined4 *)(puVar3 + 0x2f) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x17c) = 0x80000000;
    puVar3[0x30] = 0;
    *(undefined4 *)(puVar3 + 0x31) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x18c) = 0x80000000;
    *(undefined4 *)(puVar3 + 0x33) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x19c) = 0x80000002;
    puVar3[0x38] = 0;
    *(undefined4 *)(puVar3 + 0x39) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1cc) = 0x80000000;
    *(undefined4 *)(puVar3 + 0x3b) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1dc) = 0x80000003;
    *(undefined4 *)(puVar3 + 0x3f) = 0;
    puVar3[0x40] = 0;
    *(undefined4 *)(puVar3 + 0x41) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x20c) = 0x80000000;
    puVar3[0x42] = 0;
    *(undefined2 *)(puVar3 + 0x43) = 1;
    *(undefined1 *)((longlong)puVar3 + 0x21a) = 0;
    memset(puVar3 + 0xd,0,0x100);
    uVar4 = *puVar8;
  }
  return uVar4;
}



// FUNCTION 144f71420 FUN_144f71420 body=564 status=ok
// SIG undefined FUN_144f71420(void)

void FUN_144f71420(longlong param_1,code *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 local_res8;
  longlong local_238 [2];
  undefined1 local_228 [16];
  undefined1 local_218 [512];
  
  pcVar7 = FUN_144f71100;
  if (param_2 != (code *)0x0) {
    pcVar7 = param_2;
  }
  local_res8 = 0x18;
  plVar4 = (longlong *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(plVar4,"DeleteTypeInfo");
  }
  *(longlong **)(param_1 + 0x210) = plVar4;
  *plVar4 = (longlong)pcVar7;
  *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0x10) = param_3;
  if (*(longlong *)(param_1 + 0x210) == 0) {
    plVar4 = local_238;
    local_238[0] = 0;
    local_238[1] = 0;
  }
  else {
    plVar4 = (longlong *)FUN_144beec10(local_228,*(longlong *)(param_1 + 0x210),&DAT_14c6df2e0);
  }
  lVar1 = plVar4[1];
  lVar2 = *plVar4;
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144befdb0(lVar1);
  }
  if ((uVar5 & 1) != 0) {
    FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
  }
  if (lVar1 == 0) {
LAB_144f71543:
    if (lVar2 != 0) {
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x20;
      *(undefined8 *)(param_1 + 0x90) = 0;
      iVar8 = *(int *)(param_1 + 0x178) + 1;
      if ((int)(*(uint *)(param_1 + 0x17c) & 0x7fffffff) < iVar8) {
        FUN_144c00810((longlong *)(param_1 + 0x170),&PTR_vftable_14c6e47c0,(longlong)iVar8);
      }
      plVar4 = (longlong *)
               (*(longlong *)(param_1 + 0x170) + (longlong)*(int *)(param_1 + 0x178) * 0x18);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = lVar2;
        plVar4[1] = lVar1;
        plVar4[2] = uVar5;
        if ((uVar5 & 1) != 0) {
          FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
        }
      }
      *(int *)(param_1 + 0x178) = iVar8;
      goto LAB_144f7161a;
    }
  }
  else {
    cVar3 = FUN_144b45dd0(lVar1,&DAT_14c6de7a0);
    if (cVar3 == '\0') goto LAB_144f71543;
    puVar6 = (uint *)FUN_144b45d50(lVar1,&local_res8);
    if ((*puVar6 >> 3 & 1) != 0) goto LAB_144f71543;
    if (lVar2 != 0) {
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x1000;
      *(longlong *)(param_1 + 200) = lVar2;
      goto LAB_144f7161a;
    }
  }
  FUN_144bde670(local_238,local_218,0x200);
  FUN_144be6160(local_238,"Adding null attr; this will be ignored");
  FUN_144bfc0d0(0x22442111,local_218,"Reflect\\Builder\\hkTypeBuilder.cpp",0x236);
  FUN_144bde6e0(local_238);
LAB_144f7161a:
  if ((uVar5 & 1) != 0) {
    FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f71660 FUN_144f71660 body=87 status=ok
// SIG undefined FUN_144f71660(void)

undefined8 FUN_144f71660(undefined8 param_1,ulonglong param_2)

{
  FUN_144f6fbe0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 144f716c0 FUN_144f716c0 body=163 status=ok
// SIG undefined FUN_144f716c0(void)

longlong FUN_144f716c0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) {
    FUN_144bfc170(0x7e60e14e,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                  ,0x27,"hkLinearBuffer::blockAllocAligned() with non-power-of-2 alignment.");
  }
  lVar2 = ((*param_1 - param_1[2]) + -1 + param_3 & -param_3) + param_1[2];
  uVar1 = lVar2 + param_2;
  *param_1 = uVar1;
  if (param_1[1] < uVar1) {
    FUN_144bfc170(0xdeadf11d,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                  ,0x2f,"hkLinearBuffer exhausted");
  }
  return lVar2;
}



// FUNCTION 144f71770 FUN_144f71770 body=342 status=ok
// SIG undefined FUN_144f71770(void)

void FUN_144f71770(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  ulonglong *param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  int iVar12;
  
  puVar10 = (undefined1 *)(((*param_5 - param_5[2]) + 7 & 0xfffffffffffffff8) + param_5[2]);
  *param_5 = (ulonglong)(puVar10 + 0x10);
  if ((undefined1 *)param_5[1] < puVar10 + 0x10) {
    FUN_144bfc170(0xdeadf11d,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                  ,0x2f,"hkLinearBuffer exhausted");
  }
  lVar9 = FUN_144f716c0(param_5,(longlong)*(int *)(param_1 + 5) << 4,8);
  iVar12 = 0;
  *puVar10 = *(undefined1 *)(param_1 + 5);
  *(undefined8 *)(puVar10 + 8) = param_2;
  puVar10[1] = 0;
  *(undefined2 *)(puVar10 + 2) = 0;
  if (0 < *(int *)(param_1 + 5)) {
    puVar11 = (ushort *)(lVar9 + 8);
    lVar9 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar9 + param_1[4]);
      iVar8 = FUN_144beecf0(uVar2);
      if ((int)(uint)(byte)puVar10[1] < iVar8) {
        uVar4 = FUN_144beecf0(uVar2);
        puVar10[1] = uVar4;
      }
      sVar5 = FUN_144beecf0(uVar2);
      sVar7 = *(short *)(puVar10 + 2);
      sVar6 = FUN_144beecf0(uVar2);
      *(undefined8 *)(puVar11 + -4) = uVar2;
      *puVar11 = -sVar6 & sVar7 + -1 + sVar5;
      sVar7 = FUN_144beec90(uVar2);
      uVar1 = *puVar11;
      iVar12 = iVar12 + 1;
      puVar11 = puVar11 + 8;
      *(ushort *)(puVar10 + 2) = sVar7 + uVar1;
      lVar9 = lVar9 + 8;
    } while (iVar12 < *(int *)(param_1 + 5));
  }
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  param_4[2] = puVar10;
  *param_4 = uVar2;
  param_4[1] = uVar3;
  param_4[3] = param_3;
  param_4[5] = *param_1;
  return;
}



// FUNCTION 144f718d0 FUN_144f718d0 body=120 status=ok
// SIG undefined FUN_144f718d0(void)

ulonglong FUN_144f718d0(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    puVar1 = *(ulonglong **)(param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = uVar2 + param_2;
    if (puVar1[1] < uVar2 + param_2) {
      FUN_144bfc170(0xdeadf11d,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                    ,0x1e,"hkLinearBuffer exhausted");
    }
    lVar3 = 0;
    if (uVar2 != 0) {
      lVar3 = param_2;
    }
    *param_3 = lVar3;
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f71950 FUN_144f71950 body=3 status=ok
// SIG undefined FUN_144f71950(void)

void FUN_144f71950(void)

{
  return;
}



// FUNCTION 144f71960 FUN_144f71960 body=61 status=ok
// SIG undefined FUN_144f71960(void)

undefined8 FUN_144f71960(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144f719a0 FUN_144f719a0 body=444 status=ok
// SIG undefined FUN_144f719a0(void)

void FUN_144f719a0(uint *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  bool bVar8;
  ulonglong local_38;
  uint *local_30;
  ulonglong local_28;
  
  uVar6 = 0;
  if (((((*param_1 & 0x20) != 0) &&
       (puVar3 = (ulonglong *)FUN_144befea0(param_1,0x20), puVar3 != (ulonglong *)0x0)) &&
      (plVar1 = (longlong *)*puVar3, plVar1 != (longlong *)0x0)) &&
     ((param_2 <= plVar1 && (plVar1 <= (longlong *)((longlong)param_2 + param_3))))) {
    puVar3 = (ulonglong *)(plVar1 + 1);
    puVar7 = puVar3 + *plVar1 * 2;
    for (; puVar3 != puVar7; puVar3 = puVar3 + 2) {
      local_30 = (uint *)puVar3[1];
      bVar5 = false;
      puVar2 = local_30;
      while (puVar2 != (uint *)0x0) {
        bVar8 = puVar2 == (uint *)&DAT_14c6dd580;
        puVar2 = *(uint **)(puVar2 + 2);
        if (bVar8) {
          bVar5 = true;
        }
      }
      local_38 = *puVar3;
      if (bVar5) {
        local_30 = param_1;
        uVar4 = FUN_144befdb0(param_1);
      }
      else {
        uVar4 = uVar6;
        if (local_30 != (uint *)0x0) {
          uVar4 = FUN_144befdb0();
        }
      }
      local_28 = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
      }
      FUN_144becfe0(&local_38,3,1);
      if ((local_28 & 1) != 0) {
        FUN_144be6b30(local_28 & 0xfffffffffffffffe);
      }
      *puVar3 = 0;
      puVar3[1] = (ulonglong)&DAT_14c6ddac0;
    }
  }
  if (((*param_1 >> 0xc & 1) != 0) &&
     (puVar3 = (ulonglong *)FUN_144befea0(param_1,0x1000), puVar3 != (ulonglong *)0x0)) {
    uVar6 = *puVar3;
  }
  if (uVar6 != 0) {
    local_38 = uVar6;
    local_30 = param_1;
    local_28 = FUN_144befdb0(param_1);
    if ((local_28 & 1) != 0) {
      FUN_144be6b20(local_28 & 0xfffffffffffffffe);
    }
    FUN_144becfe0(&local_38,3,1);
    if ((local_28 & 1) != 0) {
      FUN_144be6b30(local_28 & 0xfffffffffffffffe);
    }
  }
  return;
}



// FUNCTION 144f71b60 FUN_144f71b60 body=266 status=ok
// SIG undefined FUN_144f71b60(void)

void FUN_144f71b60(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144f71c70 FUN_144f71c70 body=266 status=ok
// SIG undefined FUN_144f71c70(void)

void FUN_144f71c70(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144f71d80 FUN_144f71d80 body=247 status=ok
// SIG undefined FUN_144f71d80(void)

void FUN_144f71d80(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144f71e80 FUN_144f71e80 body=101 status=ok
// SIG undefined FUN_144f71e80(void)

void FUN_144f71e80(float *param_1,float *param_2)

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
  
  fVar1 = param_2[8];
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar4 = param_2[0xb];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = *param_2;
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  *param_1 = fVar8;
  param_1[1] = fVar5;
  param_1[2] = fVar1;
  param_1[3] = fVar2;
  param_1[4] = fVar9;
  param_1[5] = fVar6;
  param_1[6] = fVar2;
  param_1[7] = fVar4;
  param_1[8] = fVar10;
  param_1[9] = fVar7;
  param_1[10] = fVar3;
  param_1[0xb] = fVar4;
  fVar11 = -param_2[0xc];
  fVar12 = -param_2[0xd];
  fVar13 = -param_2[0xe];
  param_1[0xc] = fVar12 * fVar9 + fVar11 * fVar8 + fVar13 * fVar10;
  param_1[0xd] = fVar12 * fVar6 + fVar11 * fVar5 + fVar13 * fVar7;
  param_1[0xe] = fVar12 * fVar2 + fVar11 * fVar1 + fVar13 * fVar3;
  param_1[0xf] = fVar12 * fVar4 + fVar11 * fVar2 + fVar13 * fVar4;
  return;
}



// FUNCTION 144f71ef0 FUN_144f71ef0 body=212 status=ok
// SIG undefined FUN_144f71ef0(void)

void FUN_144f71ef0(float *param_1,float *param_2,float *param_3)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar1 = param_3[0xc];
  fVar2 = param_3[0xd];
  fVar3 = param_3[0xe];
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar10 = param_2[6];
  fVar11 = param_2[7];
  fVar12 = param_2[8];
  fVar13 = param_2[9];
  fVar14 = param_2[10];
  fVar15 = param_2[0xb];
  fVar16 = fVar1 * fVar4 + fVar2 * fVar8 + fVar3 * fVar12;
  fVar17 = fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar13;
  fVar18 = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14;
  fVar19 = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15;
  param_1[0xc] = fVar16;
  param_1[0xd] = fVar17;
  param_1[0xe] = fVar18;
  param_1[0xf] = fVar19;
  fVar1 = param_3[8];
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  param_1[8] = fVar1 * fVar4 + fVar2 * fVar8 + fVar3 * fVar12;
  param_1[9] = fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar13;
  param_1[10] = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14;
  param_1[0xb] = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15;
  fVar1 = param_3[4];
  fVar2 = param_3[5];
  fVar3 = param_3[6];
  param_1[4] = fVar1 * fVar4 + fVar2 * fVar8 + fVar3 * fVar12;
  param_1[5] = fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar13;
  param_1[6] = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14;
  param_1[7] = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  *param_1 = fVar2 * fVar8 + fVar1 * fVar4 + fVar3 * fVar12;
  param_1[1] = fVar2 * fVar9 + fVar1 * fVar5 + fVar3 * fVar13;
  param_1[2] = fVar2 * fVar10 + fVar1 * fVar6 + fVar3 * fVar14;
  param_1[3] = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar15;
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  param_1[0xc] = fVar16 + param_2[0xc];
  param_1[0xd] = fVar17 + fVar1;
  param_1[0xe] = fVar18 + fVar2;
  param_1[0xf] = fVar19 + fVar3;
  return;
}



// FUNCTION 144f71fd0 FUN_144f71fd0 body=244 status=ok
// SIG undefined FUN_144f71fd0(void)

void FUN_144f71fd0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[8];
  fVar5 = param_2[9];
  fVar6 = param_2[10];
  fVar10 = param_2[0xb];
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar7 = param_2[6];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  *param_1 = fVar1 * fVar11 + fVar2 * fVar12 + fVar3 * fVar13;
  param_1[1] = fVar1 * fVar8 + fVar2 * fVar9 + fVar3 * fVar7;
  param_1[2] = fVar1 * fVar4 + fVar2 * fVar5 + fVar3 * fVar6;
  param_1[3] = fVar1 * fVar5 + fVar2 * fVar10 + fVar3 * fVar10;
  fVar1 = param_3[4];
  fVar2 = param_3[5];
  fVar3 = param_3[6];
  param_1[4] = fVar1 * fVar11 + fVar2 * fVar12 + fVar3 * fVar13;
  param_1[5] = fVar1 * fVar8 + fVar2 * fVar9 + fVar3 * fVar7;
  param_1[6] = fVar1 * fVar4 + fVar2 * fVar5 + fVar3 * fVar6;
  param_1[7] = fVar1 * fVar5 + fVar2 * fVar10 + fVar3 * fVar10;
  fVar1 = param_3[8];
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  param_1[8] = fVar1 * fVar11 + fVar2 * fVar12 + fVar3 * fVar13;
  param_1[9] = fVar1 * fVar8 + fVar2 * fVar9 + fVar3 * fVar7;
  param_1[10] = fVar1 * fVar4 + fVar2 * fVar5 + fVar3 * fVar6;
  param_1[0xb] = fVar1 * fVar5 + fVar2 * fVar10 + fVar3 * fVar10;
  fVar10 = param_3[0xc] - param_2[0xc];
  fVar11 = param_3[0xd] - param_2[0xd];
  fVar12 = param_3[0xe] - param_2[0xe];
  fVar1 = param_2[8];
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar13 = (param_3[0xf] - param_2[0xf]) * param_2[0xb];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  param_1[0xc] = fVar11 * param_2[1] + fVar10 * *param_2 + fVar12 * param_2[2];
  param_1[0xd] = fVar11 * fVar5 + fVar10 * fVar4 + fVar12 * fVar6;
  param_1[0xe] = fVar11 * fVar2 + fVar10 * fVar1 + fVar12 * fVar3;
  param_1[0xf] = fVar13 + fVar11 * fVar2 + fVar13;
  return;
}



// FUNCTION 144f720d0 FUN_144f720d0 body=124 status=ok
// SIG undefined FUN_144f720d0(void)

void FUN_144f720d0(float *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_144f75920(&local_38);
  fVar1 = *(float *)(param_3 + 0x30);
  fVar2 = *(float *)(param_3 + 0x34);
  fVar3 = *(float *)(param_3 + 0x38);
  fVar4 = *(float *)(param_2 + 0x30);
  fVar5 = *(float *)(param_2 + 0x34);
  fVar6 = *(float *)(param_2 + 0x38);
  fVar7 = *(float *)(param_2 + 0x3c);
  *param_1 = local_38;
  param_1[1] = fStack_34;
  param_1[2] = fStack_30;
  param_1[3] = fStack_2c;
  param_1[4] = local_28;
  param_1[5] = fStack_24;
  param_1[6] = fStack_20;
  param_1[7] = fStack_1c;
  param_1[8] = local_18;
  param_1[9] = fStack_14;
  param_1[10] = fStack_10;
  param_1[0xb] = fStack_c;
  param_1[0xc] = fVar4 - (fVar2 * local_28 + fVar1 * local_38 + fVar3 * local_18);
  param_1[0xd] = fVar5 - (fVar2 * fStack_24 + fVar1 * fStack_34 + fVar3 * fStack_14);
  param_1[0xe] = fVar6 - (fVar2 * fStack_20 + fVar1 * fStack_30 + fVar3 * fStack_10);
  param_1[0xf] = fVar7 - (fVar2 * fStack_1c + fVar1 * fStack_2c + fVar3 * fStack_c);
  return;
}



// FUNCTION 144f72150 FUN_144f72150 body=212 status=ok
// SIG undefined FUN_144f72150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144f72150(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar13 = param_2[3];
  fVar12 = param_3[4];
  fVar4 = param_3[5];
  fVar5 = param_3[6];
  fVar6 = param_3[7];
  fVar7 = fVar12 * fVar1;
  fVar8 = fVar4 * fVar2;
  fVar9 = fVar5 * fVar3;
  fVar10 = (fVar8 + fVar7 + fVar9) * fVar1 + (fVar13 * fVar13 - _DAT_14c6dad90) * fVar12 +
           (fVar5 * fVar2 - fVar3 * fVar4) * fVar13;
  fVar11 = (fVar8 + fVar7 + fVar9) * fVar2 + (fVar13 * fVar13 - fRam000000014c6dad94) * fVar4 +
           (fVar12 * fVar3 - fVar1 * fVar5) * fVar13;
  fVar12 = (fVar8 + fVar7 + fVar9) * fVar3 + (fVar13 * fVar13 - fRam000000014c6dad98) * fVar5 +
           (fVar4 * fVar1 - fVar2 * fVar12) * fVar13;
  fVar13 = (fVar8 + fVar7 + fVar9) * fVar13 + (fVar13 * fVar13 - fRam000000014c6dad9c) * fVar6 +
           (fVar6 * fVar13 - fVar13 * fVar6) * fVar13;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = fVar10 + fVar10 + param_2[4];
  param_1[5] = fVar11 + fVar11 + fVar1;
  param_1[6] = fVar12 + fVar12 + fVar2;
  param_1[7] = fVar13 + fVar13 + fVar3;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar13 = param_3[3];
  fVar12 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_1 = -((fVar2 * fVar5 - fVar3 * fVar4) - (fVar1 * fVar6 + fVar13 * fVar12));
  param_1[1] = -((fVar3 * fVar12 - fVar2 * fVar6) - (fVar13 * fVar4 + fVar1 * fVar5));
  param_1[2] = -((fVar1 * fVar4 - fVar13 * fVar5) - (fVar2 * fVar12 + fVar3 * fVar6));
  param_1[3] = (fVar13 * fVar6 - fVar1 * fVar12) - (fVar3 * fVar5 + fVar2 * fVar4);
  return;
}



// FUNCTION 144f72230 FUN_144f72230 body=215 status=ok
// SIG undefined FUN_144f72230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144f72230(float *param_1,float *param_2,float *param_3)

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
  
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar1 = param_3[2];
  fVar2 = param_3[3];
  fVar3 = param_2[3];
  fVar7 = -*param_2;
  fVar9 = -param_2[1];
  fVar11 = -param_2[2];
  *param_1 = -((fVar6 * fVar11 - fVar1 * fVar9) - (fVar5 * fVar3 + fVar2 * fVar7));
  param_1[1] = -((fVar1 * fVar7 - fVar6 * fVar3) - (fVar2 * fVar9 + fVar5 * fVar11));
  param_1[2] = -((fVar5 * fVar9 - fVar2 * fVar11) - (fVar6 * fVar7 + fVar1 * fVar3));
  param_1[3] = (fVar2 * fVar3 - fVar5 * fVar7) - (fVar1 * fVar11 + fVar6 * fVar9);
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar8 = param_3[4] - param_2[4];
  fVar10 = param_3[5] - param_2[5];
  fVar12 = param_3[6] - param_2[6];
  fVar13 = param_3[7] - param_2[7];
  fVar3 = fVar5 * fVar8;
  fVar7 = fVar6 * fVar10;
  fVar9 = fVar1 * fVar12;
  fVar11 = (fVar7 + fVar3 + fVar9) * fVar5 + (fVar2 * fVar2 - _DAT_14c6dad90) * fVar8 +
           (fVar1 * fVar10 - fVar12 * fVar6) * fVar2;
  fVar4 = (fVar7 + fVar3 + fVar9) * fVar6 + (fVar2 * fVar2 - fRam000000014c6dad94) * fVar10 +
          (fVar5 * fVar12 - fVar8 * fVar1) * fVar2;
  fVar5 = (fVar7 + fVar3 + fVar9) * fVar1 + (fVar2 * fVar2 - fRam000000014c6dad98) * fVar12 +
          (fVar6 * fVar8 - fVar10 * fVar5) * fVar2;
  fVar6 = (fVar7 + fVar3 + fVar9) * fVar2 + (fVar2 * fVar2 - fRam000000014c6dad9c) * fVar13 +
          (fVar2 * fVar13 - fVar13 * fVar2) * fVar2;
  param_1[4] = fVar11 + fVar11;
  param_1[5] = fVar4 + fVar4;
  param_1[6] = fVar5 + fVar5;
  param_1[7] = fVar6 + fVar6;
  return;
}



// FUNCTION 144f72310 FUN_144f72310 body=292 status=ok
// SIG undefined FUN_144f72310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144f72310(float *param_1,longlong param_2,float *param_3)

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
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  FUN_144bfca40(&local_48);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = *(float *)(param_2 + 0x30);
  fVar6 = *(float *)(param_2 + 0x34);
  fVar7 = *(float *)(param_2 + 0x38);
  fVar8 = *(float *)(param_2 + 0x3c);
  fVar9 = -local_48;
  fVar10 = -fStack_44;
  fVar11 = -fStack_40;
  *param_1 = -((fVar2 * fVar11 - fVar3 * fVar10) - (fVar1 * fStack_3c + fVar4 * fVar9));
  param_1[1] = -((fVar3 * fVar9 - fVar2 * fStack_3c) - (fVar4 * fVar10 + fVar1 * fVar11));
  param_1[2] = -((fVar1 * fVar10 - fVar4 * fVar11) - (fVar2 * fVar9 + fVar3 * fStack_3c));
  param_1[3] = (fVar4 * fStack_3c - fVar1 * fVar9) - (fVar3 * fVar11 + fVar2 * fVar10);
  fVar5 = param_3[4] - fVar5;
  fVar6 = param_3[5] - fVar6;
  fVar7 = param_3[6] - fVar7;
  fVar8 = param_3[7] - fVar8;
  fVar1 = fVar5 * local_48;
  fVar2 = fVar6 * fStack_44;
  fVar3 = fVar7 * fStack_40;
  fVar4 = (fVar2 + fVar1 + fVar3) * local_48 + (fStack_3c * fStack_3c - _DAT_14c6dad90) * fVar5 +
          (fStack_40 * fVar6 - fVar7 * fStack_44) * fStack_3c;
  fVar9 = (fVar2 + fVar1 + fVar3) * fStack_44 +
          (fStack_3c * fStack_3c - fRam000000014c6dad94) * fVar6 +
          (local_48 * fVar7 - fVar5 * fStack_40) * fStack_3c;
  fVar5 = (fVar2 + fVar1 + fVar3) * fStack_40 +
          (fStack_3c * fStack_3c - fRam000000014c6dad98) * fVar7 +
          (fStack_44 * fVar5 - fVar6 * local_48) * fStack_3c;
  fVar1 = (fVar2 + fVar1 + fVar3) * fStack_3c +
          (fStack_3c * fStack_3c - fRam000000014c6dad9c) * fVar8 +
          (fStack_3c * fVar8 - fVar8 * fStack_3c) * fStack_3c;
  param_1[4] = fVar4 + fVar4;
  param_1[5] = fVar9 + fVar9;
  param_1[6] = fVar5 + fVar5;
  param_1[7] = fVar1 + fVar1;
  return;
}



// FUNCTION 144f72440 FUN_144f72440 body=1559 status=ok
// SIG undefined FUN_144f72440(void)

void FUN_144f72440(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  bool bVar23;
  int local_2a8;
  longlong local_298;
  int local_290;
  uint local_28c;
  int local_288;
  longlong local_280;
  undefined4 local_278;
  uint local_274;
  longlong local_270;
  undefined4 local_268;
  uint local_264;
  longlong local_260;
  longlong local_258;
  undefined1 local_248 [520];
  
  local_270 = 0;
  iVar8 = 0;
  local_268 = 0;
  local_264 = 0x80000000;
  local_280 = 0;
  local_278 = 0;
  local_274 = 0x80000000;
  if ((param_3 == param_1) || (param_3 == param_2)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  plVar15 = &local_270;
  if (!bVar6) {
    plVar15 = param_3;
  }
  if ((param_4 == param_1) || (param_4 == param_2)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  *(undefined4 *)(plVar15 + 1) = 0;
  plVar22 = &local_280;
  if (!bVar5) {
    plVar22 = param_4;
  }
  *(undefined4 *)(plVar22 + 1) = 0;
  iVar1 = (int)param_1[1];
  if (iVar1 < (int)param_2[1]) {
    if (plVar22 != param_1) {
      iVar8 = (int)param_1[1];
      puVar12 = (undefined4 *)*param_1;
      puVar10 = puVar12 + iVar8;
      if ((int)(*(uint *)((longlong)plVar22 + 0xc) & 0x7fffffff) < iVar8) {
        FUN_140163394(plVar22,&PTR_vftable_14c6e47a0,(longlong)iVar8);
      }
      puVar7 = (undefined4 *)*plVar22;
      for (; puVar12 != puVar10; puVar12 = puVar12 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar12;
        }
        puVar7 = puVar7 + 1;
      }
      *(int *)(plVar22 + 1) = iVar8;
    }
  }
  else if ((int)param_2[1] == 0) {
    FUN_144bde670(&local_298,local_248,0x200);
    FUN_144be6160(&local_298,"Division by zero");
    iVar8 = FUN_144bfc110(0x21b66586,local_248,"Math\\ExtendedMath\\hkMpMath.cpp",0x105);
    if (iVar8 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_144bde6e0(&local_298);
  }
  else {
    if (plVar22 != param_1) {
      iVar8 = (int)param_1[1];
      puVar12 = (undefined4 *)*param_1;
      puVar10 = puVar12 + iVar8;
      if ((int)(*(uint *)((longlong)plVar22 + 0xc) & 0x7fffffff) < iVar8) {
        FUN_140163394(plVar22,&PTR_vftable_14c6e47a0);
      }
      puVar7 = (undefined4 *)*plVar22;
      for (; puVar12 != puVar10; puVar12 = puVar12 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar12;
        }
        puVar7 = puVar7 + 1;
      }
      *(int *)(plVar22 + 1) = iVar8;
    }
    iVar8 = iVar8 + 1;
    if ((int)(*(uint *)((longlong)plVar22 + 0xc) & 0x7fffffff) < iVar8) {
      FUN_141807990(plVar22,&PTR_vftable_14c6e47a0);
    }
    puVar10 = (undefined4 *)(*plVar22 + (longlong)(int)plVar22[1] * 4);
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0;
    }
    *(int *)(plVar22 + 1) = iVar8;
    local_298 = 0;
    local_290 = 0;
    local_28c = 0x80000000;
    if (0 < iVar8) {
      FUN_140163394(&local_298,&PTR_vftable_14c6e47a0);
      if (local_290 < iVar8) {
        if (0 < iVar8 - local_290) {
          uVar11 = (ulonglong)(uint)(iVar8 - local_290);
          puVar10 = (undefined4 *)(local_298 + (longlong)local_290 * 4);
          do {
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = 0;
            }
            uVar11 = uVar11 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar11 != 0);
        }
      }
    }
    lVar20 = local_298;
    iVar8 = (iVar1 - (int)param_2[1]) + 1;
    if ((int)(*(uint *)((longlong)plVar15 + 0xc) & 0x7fffffff) < iVar8) {
      FUN_140163394();
    }
    local_2a8 = (int)plVar15[1];
    if ((local_2a8 < iVar8) || (iVar8 < local_2a8)) {
      *(int *)(plVar15 + 1) = iVar8;
      local_2a8 = iVar8;
    }
    iVar8 = 0;
    if (0 < local_2a8) {
      lVar21 = 0;
      do {
        iVar8 = iVar8 + 1;
        *(undefined4 *)(lVar21 + *plVar15) = 0;
        local_2a8 = (int)plVar15[1];
        lVar21 = lVar21 + 4;
      } while (iVar8 < local_2a8);
    }
    local_2a8 = local_2a8 + -1;
    local_258 = (longlong)iVar1;
    if (-1 < local_2a8) {
      lVar21 = (longlong)local_2a8;
      do {
        uVar14 = 0x1f;
        *(undefined4 *)(*plVar15 + lVar21 * 4) = 0;
        do {
          iVar8 = (int)param_2[1];
          bVar23 = false;
          iVar19 = 0;
          lVar9 = lVar21;
          if (-1 < iVar8) {
            lVar13 = 0;
            local_288 = 0x20 - uVar14;
            lVar17 = 0;
            local_260 = lVar20 + lVar21 * 4;
            do {
              if ((lVar13 == 0) || (uVar14 == 0)) {
                uVar18 = 0;
              }
              else {
                uVar18 = *(uint *)(*param_2 + -4 + lVar17) >> ((byte)local_288 & 0x1f);
              }
              if (iVar19 == iVar8) {
                uVar16 = 0;
              }
              else {
                uVar16 = *(int *)(*param_2 + lVar17) << ((byte)uVar14 & 0x1f);
              }
              uVar2 = *(uint *)(*plVar22 + lVar21 * 4 + lVar17);
              uVar18 = uVar2 - (uVar16 | uVar18);
              bVar3 = uVar2 < uVar18;
              if (bVar23) {
                bVar23 = uVar18 == 0;
                uVar18 = uVar18 - 1;
                bVar3 = bVar3 || bVar23;
              }
              bVar23 = bVar3;
              iVar19 = iVar19 + 1;
              lVar9 = lVar9 + 1;
              lVar13 = lVar13 + 1;
              *(uint *)(local_260 + lVar17) = uVar18;
              lVar17 = lVar17 + 4;
              iVar8 = (int)param_2[1];
            } while (iVar19 <= iVar8);
            lVar20 = local_298;
            if (bVar23) {
              do {
                if (iVar1 <= lVar9) goto LAB_144f727e2;
                iVar8 = *(int *)(*plVar22 + lVar9 * 4);
                *(int *)(local_298 + lVar9 * 4) = iVar8 + -1;
                lVar9 = lVar9 + 1;
              } while (iVar8 == 0);
            }
          }
          *(uint *)(*plVar15 + lVar21 * 4) = *(uint *)(*plVar15 + lVar21 * 4) | 1 << (uVar14 & 0x1f)
          ;
          while (lVar21 < lVar9) {
            lVar9 = lVar9 + -1;
            *(undefined4 *)(*plVar22 + lVar9 * 4) = *(undefined4 *)(lVar20 + lVar9 * 4);
          }
LAB_144f727e2:
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
        lVar21 = lVar21 + -1;
        local_2a8 = local_2a8 + -1;
      } while (-1 < local_2a8);
    }
    iVar8 = (int)plVar15[1];
    while ((iVar8 != 0 && (iVar8 = iVar8 + -1, *(int *)(*plVar15 + (longlong)iVar8 * 4) == 0))) {
      *(int *)(plVar15 + 1) = iVar8;
    }
    iVar8 = (int)plVar22[1];
    while ((iVar8 != 0 && (iVar8 = iVar8 + -1, *(int *)(*plVar22 + (longlong)iVar8 * 4) == 0))) {
      *(int *)(plVar22 + 1) = iVar8;
    }
    if ((-1 < (int)local_28c) && (lVar20 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,lVar20,(ulonglong)(local_28c & 0x7fffffff) << 2);
    }
  }
  if ((bVar6) && (param_3 != plVar15)) {
    *(undefined4 *)(param_3 + 1) = 0;
    iVar8 = (int)plVar15[1];
    puVar12 = (undefined4 *)*plVar15;
    puVar10 = puVar12 + iVar8;
    if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar8) {
      FUN_140163394(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    puVar7 = (undefined4 *)*param_3;
    for (; puVar12 != puVar10; puVar12 = puVar12 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar12;
      }
      puVar7 = puVar7 + 1;
    }
    *(int *)(param_3 + 1) = iVar8;
  }
  if ((bVar5) && (param_4 != plVar22)) {
    *(undefined4 *)(param_4 + 1) = 0;
    iVar8 = (int)plVar22[1];
    puVar12 = (undefined4 *)*plVar22;
    puVar10 = puVar12 + iVar8;
    if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar8) {
      FUN_140163394(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    puVar7 = (undefined4 *)*param_4;
    for (; puVar12 != puVar10; puVar12 = puVar12 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar12;
      }
      puVar7 = puVar7 + 1;
    }
    *(int *)(param_4 + 1) = iVar8;
  }
  if ((-1 < (int)local_274) && (local_280 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_280,(ulonglong)(local_274 & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_264) && (local_270 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_270,(ulonglong)(local_264 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144f72a60 FUN_144f72a60 body=866 status=ok
// SIG undefined FUN_144f72a60(void)

void FUN_144f72a60(undefined4 **param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 *local_88;
  int local_80;
  uint local_7c;
  longlong local_78;
  int local_70;
  uint local_6c;
  uint *local_68;
  int local_60;
  uint local_5c;
  undefined1 *local_58;
  uint local_50;
  uint local_4c;
  undefined1 local_48 [32];
  
  local_58 = local_48;
  local_50 = 0;
  local_4c = 0x80000020;
  if (*(int *)(param_1 + 1) == 0) {
    local_48[0] = 0x30;
    local_50 = 1;
  }
  else {
    local_6c = 0x80000000;
    local_78 = 0;
    local_70 = 0;
    if (param_2 != 0) {
      local_4c = 0x80000020;
      local_50 = 0;
      local_6c = 0x80000000;
      local_70 = 0;
      local_78 = 0;
      FUN_141807990(&local_78,&PTR_vftable_14c6e47a0,1);
      piVar2 = (int *)(local_78 + (longlong)local_70 * 4);
      local_70 = 1;
      if (piVar2 != (int *)0x0) {
        *piVar2 = param_2;
      }
    }
    local_7c = 0x80000000;
    local_88 = (undefined4 *)0x0;
    local_80 = 0;
    if (&local_88 != param_1) {
      puVar10 = *param_1;
      local_80 = 0;
      iVar13 = *(int *)(param_1 + 1);
      puVar3 = puVar10 + iVar13;
      puVar6 = local_88;
      if (0 < iVar13) {
        FUN_140163394(&local_88,&PTR_vftable_14c6e47a0,(longlong)iVar13);
        puVar6 = local_88;
      }
      for (; local_80 = iVar13, puVar10 != puVar3; puVar10 = puVar10 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar10;
        }
        puVar6 = puVar6 + 1;
      }
    }
    puVar11 = (uint *)0x0;
    local_5c = 0x80000000;
    local_68 = (uint *)0x0;
    local_60 = 0;
    puVar3 = local_88;
    uVar7 = local_7c;
    while (local_88 = puVar3, local_7c = uVar7, local_80 != 0) {
      FUN_144f72440(&local_88,&local_78,&local_88);
      puVar11 = local_68;
      if (local_60 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (ulonglong)*local_68;
      }
      uVar1 = local_50 + 1;
      if ((int)(local_4c & 0x7fffffff) < (int)uVar1) {
        FUN_144be3310(&local_58,&PTR_vftable_14c6e47a0,(longlong)(int)uVar1);
      }
      lVar9 = (longlong)(int)local_50;
      puVar3 = local_88;
      uVar7 = local_7c;
      local_50 = uVar1;
      if (local_58 + lVar9 != (char *)0x0) {
        local_58[lVar9] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar12];
      }
    }
    iVar13 = 0;
    if (0 < (int)(local_50 & 0xfffffffe)) {
      lVar9 = 0;
      do {
        puVar4 = local_58 + lVar9;
        uVar5 = *puVar4;
        lVar9 = lVar9 + 1;
        *puVar4 = local_58[(longlong)(int)(local_50 - iVar13) + -1];
        iVar8 = local_50 - iVar13;
        iVar13 = iVar13 + 1;
        local_58[(longlong)iVar8 + -1] = uVar5;
      } while (iVar13 < (int)local_50 >> 1);
    }
    if ((-1 < (int)local_5c) && (puVar11 != (uint *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,puVar11,(ulonglong)(local_5c & 0x7fffffff) << 2);
    }
    if ((-1 < (int)uVar7) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,puVar3,(ulonglong)(uVar7 & 0x7fffffff) << 2);
    }
    if ((-1 < (int)local_6c) && (local_78 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_78,(ulonglong)(local_6c & 0x7fffffff) << 2);
    }
  }
  FUN_144be06b0(param_3,local_58,local_50);
  local_50 = 0;
  if ((-1 < (int)local_4c) && (local_58 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_58,local_4c & 0x7fffffff);
  }
  return;
}



// FUNCTION 144f72dd0 FUN_144f72dd0 body=182 status=ok
// SIG undefined FUN_144f72dd0(void)

void FUN_144f72dd0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 local_148 [20];
  undefined8 local_a8 [20];
  
  FUN_144bdf360(local_a8);
  FUN_144f72a60(param_1,param_2,local_a8);
  FUN_144bdf360(local_148);
  FUN_144f72a60(param_1 + 0x10,param_2,local_148);
  puVar1 = &DAT_14996de1b;
  if (*(char *)(param_1 + 0x20) != '\0') {
    puVar1 = &DAT_149c10344;
  }
  FUN_144bdff80(param_3,"%s%s/%s",puVar1,local_a8[0],local_148[0]);
  FUN_144bdf2f0(local_148);
  FUN_144bdf2f0(local_a8);
  return;
}



// FUNCTION 144f72e90 FUN_144f72e90 body=48 status=ok
// SIG undefined FUN_144f72e90(void)

undefined8 * FUN_144f72e90(undefined8 *param_1)

{
  param_1[2] = 1;
  *param_1 = hkMonitorStreamColorTable::vftable;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff80000000;
  return param_1;
}



// FUNCTION 144f72ec0 FUN_144f72ec0 body=217 status=ok
// SIG undefined FUN_144f72ec0(void)

undefined8 * FUN_144f72ec0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = hkMonitorStreamColorTable::vftable;
  lVar1 = param_1[3];
  lVar2 = (longlong)*(int *)(param_1 + 4) * 0x10 + lVar1;
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x10;
    FUN_144b49dd0(lVar2);
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
      FUN_144bda120(param_1,0x30);
    }
  }
  return param_1;
}



// FUNCTION 144f72fa0 FUN_144f72fa0 body=68 status=ok
// SIG undefined FUN_144f72fa0(void)

longlong FUN_144f72fa0(longlong param_1)

{
  FUN_144be36a0(param_1,"Unknown Heading",0xffffffff);
  *(undefined8 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
  return param_1;
}



// FUNCTION 144f72ff0 FUN_144f72ff0 body=189 status=ok
// SIG undefined FUN_144f72ff0(void)

void FUN_144f72ff0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x50))();
  if (iVar2 != 0) {
    iVar4 = 0;
    iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
    if (0 < iVar2) {
      do {
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x58))(param_1,iVar4);
        if (plVar3 != (longlong *)0x0) {
          iVar2 = (int)param_2[1] + 1;
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar2) {
            FUN_144f73460(param_2,param_3,(longlong)iVar2);
          }
          puVar1 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = plVar3;
          }
          *(int *)(param_2 + 1) = iVar2;
          (**(code **)(*plVar3 + 0x70))(plVar3,param_2,param_3);
        }
        iVar4 = iVar4 + 1;
        iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
      } while (iVar4 < iVar2);
    }
  }
  return;
}



// FUNCTION 144f730b0 FUN_144f730b0 body=60 status=ok
// SIG undefined FUN_144f730b0(void)

undefined8 * FUN_144f730b0(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkLocalFrameGroup::vftable;
  FUN_144be36a0(param_1 + 3,param_2,0xffffffff);
  return param_1;
}



// FUNCTION 144f730f0 FUN_144f730f0 body=111 status=ok
// SIG undefined FUN_144f730f0(void)

undefined8 * FUN_144f730f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkLocalFrameGroup::vftable;
  FUN_144b49dd0(param_1 + 3);
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



// FUNCTION 144f73160 FUN_144f73160 body=62 status=ok
// SIG undefined FUN_144f73160(void)

undefined8 * FUN_144f73160(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkSimpleLocalFrame::vftable;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  return param_1;
}



// FUNCTION 144f731a0 FUN_144f731a0 body=32 status=ok
// SIG undefined FUN_144f731a0(void)

void FUN_144f731a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  param_2[2] = *(undefined8 *)(param_1 + 0x30);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  param_2[4] = *(undefined8 *)(param_1 + 0x40);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  param_2[6] = *(undefined8 *)(param_1 + 0x50);
  param_2[7] = uVar1;
  return;
}



// FUNCTION 144f731c0 FUN_144f731c0 body=32 status=ok
// SIG undefined FUN_144f731c0(void)

void FUN_144f731c0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x30) = param_2[2];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x40) = param_2[4];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x50) = param_2[6];
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}



// FUNCTION 144f731e0 FUN_144f731e0 body=8 status=ok
// SIG undefined FUN_144f731e0(void)

void FUN_144f731e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *param_2 = *(undefined8 *)(param_1 + 0x50);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 144f731f0 FUN_144f731f0 body=191 status=ok
// SIG undefined FUN_144f731f0(void)

void FUN_144f731f0(longlong param_1,float *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_28 [32];
  
  fVar5 = *param_2 - *(float *)(param_1 + 0x50);
  fVar6 = param_2[1] - *(float *)(param_1 + 0x54);
  fVar7 = param_2[2] - *(float *)(param_1 + 0x58);
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  auVar4._4_4_ = fVar6 + fVar5 + fVar7;
  auVar4._0_4_ = fVar6 + fVar5 + fVar7;
  auVar4._8_4_ = fVar6 + fVar5 + fVar7;
  auVar4._12_4_ = fVar6 + fVar5 + fVar7;
  auVar4 = sqrtps(in_XMM2,auVar4);
  if (auVar4._0_4_ <= in_XMM2._0_4_) {
    (**(code **)(*param_4 + 0x18))(param_4,param_1);
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    FUN_144b3fa50(local_28,param_1 + 0x20,param_2);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x60));
        (**(code **)(*plVar1 + 0x30))(plVar1,local_28);
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar2 < *(int *)(param_1 + 0x68));
    }
  }
  return;
}



// FUNCTION 144f732b0 FUN_144f732b0 body=12 status=ok
// SIG undefined FUN_144f732b0(void)

ulonglong FUN_144f732b0(longlong param_1)

{
  return *(ulonglong *)(param_1 + 0x80) & 0xfffffffffffffffe;
}



// FUNCTION 144f732c0 FUN_144f732c0 body=5 status=ok
// SIG undefined FUN_144f732c0(void)

undefined8 FUN_144f732c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// FUNCTION 144f732d0 FUN_144f732d0 body=5 status=ok
// SIG undefined FUN_144f732d0(void)

void FUN_144f732d0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}



// FUNCTION 144f732e0 FUN_144f732e0 body=4 status=ok
// SIG undefined FUN_144f732e0(void)

undefined4 FUN_144f732e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// FUNCTION 144f732f0 FUN_144f732f0 body=12 status=ok
// SIG undefined FUN_144f732f0(void)

undefined8 FUN_144f732f0(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8);
}



// FUNCTION 144f73300 FUN_144f73300 body=5 status=ok
// SIG undefined FUN_144f73300(void)

undefined8 FUN_144f73300(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// FUNCTION 144f73310 FUN_144f73310 body=58 status=ok
// SIG undefined FUN_144f73310(void)

void FUN_144f73310(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_144b3f230();
  }
  *(longlong *)(param_1 + 0x78) = param_2;
  return;
}



// FUNCTION 144f73350 FUN_144f73350 body=259 status=ok
// SIG undefined FUN_144f73350(void)

undefined8 * FUN_144f73350(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xd);
  lVar2 = 0;
  *param_1 = hkSimpleLocalFrame::vftable;
  if (0 < (longlong)iVar1) {
    do {
      FUN_144b3f230(*(undefined8 *)(param_1[0xc] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  if (param_1[0xf] != 0) {
    FUN_144b3f230();
  }
  FUN_144b49dd0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) << 3);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x90);
    }
  }
  return param_1;
}



// FUNCTION 144f73460 FUN_144f73460 body=247 status=ok
// SIG undefined FUN_144f73460(void)

void FUN_144f73460(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144f73560 FUN_144f73560 body=47 status=ok
// SIG undefined FUN_144f73560(void)

undefined8 * FUN_144f73560(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkRefCountedProperties::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  return param_1;
}



// FUNCTION 144f73590 FUN_144f73590 body=211 status=ok
// SIG undefined FUN_144f73590(void)

undefined8 * FUN_144f73590(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = hkRefCountedProperties::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  plVar4 = *(longlong **)(param_2 + 0x18);
  plVar5 = plVar4 + (longlong)iVar1 * 2;
  if (0 < iVar1) {
    FUN_144f73670(param_1 + 3,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  plVar3 = (longlong *)param_1[3];
  for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
    if (plVar3 != (longlong *)0x0) {
      lVar2 = *plVar4;
      *plVar3 = lVar2;
      if (lVar2 != 0) {
        FUN_144b3d910();
      }
      *(short *)(plVar3 + 1) = (short)plVar4[1];
    }
    plVar3 = plVar3 + 2;
  }
  *(int *)(param_1 + 4) = iVar1;
  return param_1;
}



// FUNCTION 144f73670 FUN_144f73670 body=324 status=ok
// SIG undefined FUN_144f73670(void)

void FUN_144f73670(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x10,&local_res8);
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
        *(short *)(plVar4 + 1) = (short)plVar8[1];
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 2;
      plVar8 = plVar8 + 2;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 0x10 + 0x10;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 << 4);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = plVar2;
  return;
}



// FUNCTION 144f737c0 FUN_144f737c0 body=291 status=ok
// SIG undefined FUN_144f737c0(void)

undefined4
FUN_144f737c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    uVar2 = 0;
    if ((*(char *)(param_1 + 0x28) == '\0') && (iVar3 = 0, 0 < *(int *)(param_1 + 0x20))) {
      lVar4 = 0;
      do {
        *(undefined1 *)(param_1 + 0x28) = 1;
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x18));
        uVar2 = (**(code **)(*plVar1 + 0x18))
                          (plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
        iVar3 = iVar3 + 1;
        *(undefined1 *)(param_1 + 0x28) = 0;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x20));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f738f0 FUN_144f738f0 body=3 status=ok
// SIG undefined FUN_144f738f0(void)

void FUN_144f738f0(void)

{
  return;
}



// FUNCTION 144f73900 FUN_144f73900 body=7 status=ok
// SIG undefined FUN_144f73900(void)

undefined1 * FUN_144f73900(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return param_2;
}



// FUNCTION 144f73910 FUN_144f73910 body=3 status=ok
// SIG undefined FUN_144f73910(void)

void FUN_144f73910(void)

{
  return;
}



// FUNCTION 144f73920 FUN_144f73920 body=291 status=ok
// SIG undefined FUN_144f73920(void)

undefined8 * FUN_144f73920(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkErrorRouter::vftable;
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
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
  FUN_144bde530(param_1);
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



// FUNCTION 144f73a50 FUN_144f73a50 body=219 status=ok
// SIG undefined FUN_144f73a50(void)

undefined4 * FUN_144f73a50(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*param_2 == 0) {
    local_res8 = 0x58;
    puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar2,"hkErrorRouter");
    }
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      FUN_144bde510(puVar2);
      *puVar2 = hkErrorRouter::vftable;
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0x80000000;
      FUN_144bdde80(puVar2 + 6);
      *(undefined1 *)(puVar2 + 5) = 0;
    }
    puVar1 = (undefined8 *)*param_2;
    if ((puVar2 != puVar1) && (*param_2 = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
      FUN_144b3f230();
    }
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f73b30 FUN_144f73b30 body=95 status=ok
// SIG undefined FUN_144f73b30(void)

undefined4 * FUN_144f73b30(undefined4 *param_1,longlong *param_2)

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



// FUNCTION 144f73b90 FUN_144f73b90 body=92 status=ok
// SIG undefined FUN_144f73b90(void)

undefined8 FUN_144f73b90(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0x60;
  lVar1 = (*DAT_14c787670)(0,local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkBsdSocket");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144f74080(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f73bf0 FUN_144f73bf0 body=167 status=ok
// SIG undefined FUN_144f73bf0(void)

void FUN_144f73bf0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [512];
  undefined1 local_1a8 [416];
  
  if (DAT_14c798f99 == '\0') {
    iVar3 = Ordinal_115(0x202,local_1a8);
    if (iVar3 != 0) {
      FUN_144bde670(local_3b8,local_3a8,0x200);
      uVar2 = FUN_144be6160(local_3b8,"(Windows)WSAStartup failed with error code ");
      FUN_144be61d0(uVar2,iVar3);
      iVar3 = FUN_144bfc110(0x321825f8,local_3a8,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
                            ,0x42);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_144bde6e0(local_3b8);
    }
    DAT_14c798f99 = '\x01';
  }
  return;
}



// FUNCTION 144f73ca0 FUN_144f73ca0 body=3 status=ok
// SIG undefined FUN_144f73ca0(void)

void FUN_144f73ca0(void)

{
  return;
}



// FUNCTION 144f73cb0 FUN_144f73cb0 body=246 status=ok
// SIG undefined FUN_144f73cb0(void)

void FUN_144f73cb0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_128 [128];
  undefined8 local_a8 [20];
  
  FUN_144be06b0(param_1,"unknown",0xffffffff);
  iVar3 = Ordinal_57(local_128,0x80);
  if (-1 < iVar3) {
    FUN_144be06b0(param_1,local_128,0xffffffff);
    FUN_144bdf390(local_a8,local_128);
    lVar4 = Ordinal_52(local_a8[0]);
    if (lVar4 != 0) {
      puVar1 = *(undefined8 **)(lVar4 + 0x18);
      puVar2 = (undefined4 *)*puVar1;
      while (puVar2 != (undefined4 *)0x0) {
        uVar5 = Ordinal_12(*puVar2);
        puVar1 = puVar1 + 1;
        FUN_144be01f0(param_1,&DAT_149c10b44);
        FUN_144be01f0(param_1,uVar5);
        FUN_144be01f0(param_1,&DAT_149c06564);
        puVar2 = (undefined4 *)*puVar1;
      }
    }
    FUN_144bdf2f0(local_a8);
  }
  return;
}



// FUNCTION 144f73db0 FUN_144f73db0 body=3 status=ok
// SIG undefined FUN_144f73db0(void)

undefined1 FUN_144f73db0(void)

{
  return 1;
}



// FUNCTION 144f73dc0 FUN_144f73dc0 body=3 status=ok
// SIG undefined FUN_144f73dc0(void)

undefined1 FUN_144f73dc0(void)

{
  return 0;
}



// FUNCTION 144f73dd0 FUN_144f73dd0 body=10 status=ok
// SIG undefined FUN_144f73dd0(void)

undefined4 * FUN_144f73dd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f73de0 FUN_144f73de0 body=3 status=ok
// SIG undefined FUN_144f73de0(void)

undefined8 FUN_144f73de0(void)

{
  return 0;
}



// FUNCTION 144f73df0 FUN_144f73df0 body=3 status=ok
// SIG undefined FUN_144f73df0(void)

undefined8 FUN_144f73df0(void)

{
  return 0;
}



// FUNCTION 144f73e00 FUN_144f73e00 body=30 status=ok
// SIG undefined FUN_144f73e00(void)

void FUN_144f73e00(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  (*(code *)PTR_FUN_14c727b18)(param_2);
  *param_3 = 0xffffffff;
  return;
}



// FUNCTION 144f73e20 FUN_144f73e20 body=110 status=ok
// SIG undefined FUN_144f73e20(void)

ulonglong FUN_144f73e20(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                        (*(longlong **)(param_1 + 0x18),uVar2 + param_2,param_3 - uVar2);
      uVar2 = uVar2 + lVar1;
      if (lVar1 == 0) {
        return uVar2;
      }
    } while (uVar2 < param_3);
  }
  return param_3;
}



// FUNCTION 144f73e90 FUN_144f73e90 body=28 status=ok
// SIG undefined FUN_144f73e90(void)

undefined8 FUN_144f73e90(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  return param_2;
}



// FUNCTION 144f73eb0 FUN_144f73eb0 body=87 status=ok
// SIG undefined FUN_144f73eb0(void)

undefined8 FUN_144f73eb0(undefined8 param_1,ulonglong param_2)

{
  FUN_1453043d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144f73f10 FUN_144f73f10 body=110 status=ok
// SIG undefined FUN_144f73f10(void)

ulonglong FUN_144f73f10(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                        (*(longlong **)(param_1 + 0x18),uVar2 + param_2,param_3 - uVar2);
      uVar2 = uVar2 + lVar1;
      if (lVar1 == 0) {
        return uVar2;
      }
    } while (uVar2 < param_3);
  }
  return param_3;
}



// FUNCTION 144f73f80 FUN_144f73f80 body=28 status=ok
// SIG undefined FUN_144f73f80(void)

undefined8 FUN_144f73f80(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  return param_2;
}



// FUNCTION 144f73fa0 FUN_144f73fa0 body=87 status=ok
// SIG undefined FUN_144f73fa0(void)

undefined8 FUN_144f73fa0(undefined8 param_1,ulonglong param_2)

{
  FUN_144bdf150();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144f74000 FUN_144f74000 body=120 status=ok
// SIG undefined FUN_144f74000(void)

undefined8 * FUN_144f74000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSocket::vftable;
  FUN_144bdf150(param_1 + 7);
  FUN_1453043d0(param_1 + 3);
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



// FUNCTION 144f74080 FUN_144f74080 body=194 status=ok
// SIG undefined FUN_144f74080(void)

undefined8 * FUN_144f74080(undefined8 *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkSocket::vftable;
  FUN_1453043b0(param_1 + 3);
  param_1[6] = 0;
  param_1[3] = hkSocket::ReaderAdapter::vftable;
  FUN_144bdf130(param_1 + 7);
  param_1[10] = 0;
  param_1[7] = hkSocket::WriterAdapter::vftable;
  param_1[6] = param_1;
  param_1[10] = param_1;
  if ((DAT_14c798f98 == '\0') && (PTR_FUN_14c727b08 != (undefined *)0x0)) {
    (*(code *)PTR_FUN_14c727b08)();
    DAT_14c798f98 = '\x01';
  }
  param_1[0xb] = param_2;
  *param_1 = hkBsdSocket::vftable;
  if (param_2 == -1) {
    FUN_144f75450(param_1,local_res8);
  }
  return param_1;
}



// FUNCTION 144f74150 FUN_144f74150 body=14 status=ok
// SIG undefined FUN_144f74150(void)

undefined8 FUN_144f74150(longlong param_1,undefined8 param_2)

{
  *(bool *)param_2 = *(longlong *)(param_1 + 0x58) != -1;
  return param_2;
}



// FUNCTION 144f74160 FUN_144f74160 body=39 status=ok
// SIG undefined FUN_144f74160(void)

void FUN_144f74160(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != -1) {
    Ordinal_3();
    *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 144f74190 FUN_144f74190 body=75 status=ok
// SIG undefined FUN_144f74190(void)

longlong FUN_144f74190(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if ((param_1[0xb] != -1) && (param_3 != 0)) {
    iVar1 = Ordinal_16();
    if ((longlong)iVar1 - 1U < 0xfffffffffffffffe) {
      return (longlong)iVar1;
    }
    iVar1 = Ordinal_111();
    if (iVar1 != 0x2733) {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return 0;
}



// FUNCTION 144f741e0 FUN_144f741e0 body=75 status=ok
// SIG undefined FUN_144f741e0(void)

longlong FUN_144f741e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if ((param_1[0xb] != -1) && (param_3 != 0)) {
    iVar1 = Ordinal_19();
    if ((longlong)iVar1 - 1U < 0xfffffffffffffffe) {
      return (longlong)iVar1;
    }
    iVar1 = Ordinal_111();
    if (iVar1 != 0x2733) {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return 0;
}



// FUNCTION 144f74230 FUN_144f74230 body=440 status=ok
// SIG undefined FUN_144f74230(void)

undefined4 * FUN_144f74230(longlong *param_1,undefined4 *param_2,char *param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined4 local_f4 [3];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8 [20];
  
  FUN_144bfbef0(&local_f8,0,0x10);
  local_f8 = 2;
  local_f6 = Ordinal_9(param_4 & 0xffff);
  if ((byte)(*param_3 - 0x30U) < 10) {
    iVar1 = inet_pton(2,param_3,&local_res18);
    if (iVar1 != 1) goto LAB_144f743b5;
    local_f4[0] = local_res18;
  }
  else {
    local_e8 = 0x200000000;
    uStack_e0 = 1;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_144bdf360(local_b8);
    FUN_144bdff50(local_b8,&DAT_1499c1968,param_4);
    iVar1 = getaddrinfo(param_3,local_b8[0],&local_e8,&local_res18);
    if (iVar1 != 0) {
      *param_2 = 0x80040200;
      FUN_144bdf2f0(local_b8);
      return param_2;
    }
    lVar3 = CONCAT44(uStackX_1c,local_res18);
    uVar4 = 0;
    if (lVar3 != 0) {
      do {
        if (*(int *)(lVar3 + 4) == 2) {
          FUN_144bfbed0(local_f4,*(longlong *)(lVar3 + 0x20) + 4,4);
        }
        lVar3 = *(longlong *)(lVar3 + 0x28);
      } while (lVar3 != 0);
      uVar4 = CONCAT44(uStackX_1c,local_res18);
    }
    freeaddrinfo(uVar4);
    FUN_144bdf2f0(local_b8);
  }
  if ((param_1[0xb] != -1) || (piVar2 = (int *)FUN_144f75450(param_1,&local_res18), -1 < *piVar2)) {
    iVar1 = Ordinal_4(param_1[0xb],&local_f8,0x10);
    if ((-1 < iVar1) || (iVar1 = Ordinal_111(), iVar1 == 0x2733)) {
      *param_2 = 0;
      return param_2;
    }
    (**(code **)(*param_1 + 0x20))(param_1);
  }
LAB_144f743b5:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f743f0 FUN_144f743f0 body=428 status=ok
// SIG undefined FUN_144f743f0(void)

undefined4 * FUN_144f743f0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res18;
  undefined8 local_1e8;
  code *local_1e0;
  undefined8 *local_1d8;
  undefined2 local_1d0;
  undefined2 local_1ce;
  undefined4 local_1cc;
  undefined1 local_1c0 [80];
  undefined1 local_170 [344];
  
  local_res18 = param_3;
  FUN_144bfbef0(&local_1d0,0,0x10);
  local_1d0 = 2;
  local_1ce = Ordinal_9(local_res18._4_2_);
  local_1cc = (undefined4)param_3;
  iVar2 = Ordinal_4(param_1[0xb],&local_1d0,0x10);
  if (iVar2 < 0) {
    iVar2 = Ordinal_111();
    local_res18 = CONCAT44(local_res18._4_4_,iVar2);
    if (iVar2 != 0x2733) {
      if ((DAT_14c798ff0 != '\0') || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          uVar3 = FUN_144bdc640(local_1c0);
          local_1e8 = 1;
          local_1e0 = FUN_144f50970;
          local_1d8 = &local_res18;
          lVar4 = FUN_144bdc480(uVar3,"Socket connection WSA error code #{}",&local_1e8,0);
          *(char **)(lVar4 + 0x38) =
               "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
          ;
          *(undefined8 *)(lVar4 + 0x40) = 0x17f;
          FUN_144bdc690(local_1c0);
          (**(code **)(*param_1 + 0x20))(param_1);
          *param_2 = 0x80040200;
          return param_2;
        }
        uVar3 = FUN_144bdc810(local_170,&DAT_14c798fa0,1);
        local_1e8 = 1;
        local_1e0 = FUN_144f50970;
        local_1d8 = &local_res18;
        lVar4 = FUN_144bdc480(uVar3,"Socket connection WSA error code #{}",&local_1e8,0);
        *(char **)(lVar4 + 0x38) =
             "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
        ;
        *(undefined8 *)(lVar4 + 0x40) = 0x17f;
        FUN_144bdc8a0(local_170);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f745a0 FUN_144f745a0 body=568 status=ok
// SIG undefined FUN_144f745a0(void)

undefined4 *
FUN_144f745a0(longlong *param_1,undefined4 *param_2,undefined4 param_3,ulonglong param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 local_res18 [4];
  undefined4 local_2b8 [2];
  undefined8 local_2b0;
  code *local_2a8;
  undefined1 *local_2a0;
  code *local_298;
  undefined4 *local_290;
  undefined1 local_288 [8];
  undefined2 local_280;
  undefined2 local_27e;
  undefined4 local_27c;
  undefined1 local_268 [160];
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  local_res18[0] = param_3;
  piVar3 = (int *)FUN_144f75450(param_1,local_2b8);
  if (*piVar3 < 0) {
    *param_2 = 0x80040200;
  }
  else {
    local_280 = 2;
    local_27c = 0;
    local_27e = Ordinal_9((undefined2)local_res18[0]);
    if ((param_4 & 1) != 0) {
      local_2b8[0] = 1;
      Ordinal_21(param_1[0xb],0xffff,4,local_2b8,4);
    }
    iVar2 = Ordinal_2(param_1[0xb],&local_280,0x10);
    if ((iVar2 == -1) || (iVar2 = Ordinal_13(param_1[0xb],4), iVar2 == -1)) {
      (**(code **)(*param_1 + 0x20))(param_1);
      *param_2 = 0x80040200;
    }
    else {
      FUN_144bdf360(local_268);
      (**(code **)(*param_1 + 0x98))(param_1,local_268,local_288);
      if ((2 < DAT_14c798ff0) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          uVar4 = FUN_144bdc640(local_1c8);
          local_2b0 = 2;
          local_2a8 = FUN_144bddd80;
          local_2a0 = local_268;
          local_298 = FUN_144f50970;
          local_290 = local_res18;
          lVar5 = FUN_144bdc480(uVar4,"Listening on host [{}] port {}",&local_2b0,0);
          *(char **)(lVar5 + 0x38) =
               "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x1c0;
          FUN_144bdc690(local_1c8);
        }
        else {
          uVar4 = FUN_144bdc810(local_178,&DAT_14c798fa0,3);
          local_2b0 = 2;
          local_2a8 = FUN_144bddd80;
          local_2a0 = local_268;
          local_298 = FUN_144f50970;
          local_290 = local_res18;
          lVar5 = FUN_144bdc480(uVar4,"Listening on host [{}] port {}",&local_2b0,0);
          *(char **)(lVar5 + 0x38) =
               "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x1c0;
          FUN_144bdc8a0(local_178);
        }
      }
      *param_2 = 0;
      FUN_144bdf2f0(local_268);
    }
  }
  return param_2;
}



// FUNCTION 144f747e0 FUN_144f747e0 body=827 status=ok
// SIG undefined FUN_144f747e0(void)

undefined4 * FUN_144f747e0(longlong param_1,undefined4 *param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined4 local_res20 [2];
  undefined8 local_1f8;
  code *local_1f0;
  int *local_1e8;
  undefined4 local_1e0 [2];
  undefined2 local_1d8;
  undefined2 local_1d6;
  undefined4 local_1d4;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  local_res8[0] = 0;
  local_1d8 = 2;
  local_1d4 = 0;
  local_1d6 = Ordinal_9(param_3);
  local_res20[0] = 1;
  Ordinal_21(*(undefined8 *)(param_1 + 0x58),0xffff,4,local_res20,4);
  local_res8[0] = Ordinal_111();
  if ((local_res8[0] != 0) && ((DAT_14c798ff0 != '\0' || (cVar1 = FUN_144bdbf80(), cVar1 != '\0'))))
  {
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      uVar3 = FUN_144bdc640(local_1c8);
      local_1e8 = local_res8;
      local_1f8 = 1;
      local_1f0 = FUN_144f50970;
      lVar4 = FUN_144bdc480(uVar3,"Failed to setsockopt(), WSA error code #{}",&local_1f8,0);
      *(char **)(lVar4 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
      ;
      *(undefined8 *)(lVar4 + 0x40) = 0x2fd;
      FUN_144bdc690(local_1c8);
    }
    else {
      uVar3 = FUN_144bdc810(local_178,&DAT_14c798fa0,1);
      local_1e8 = local_res8;
      local_1f8 = 1;
      local_1f0 = FUN_144f50970;
      lVar4 = FUN_144bdc480(uVar3,"Failed to setsockopt(), WSA error code #{}",&local_1f8,0);
      *(char **)(lVar4 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
      ;
      *(undefined8 *)(lVar4 + 0x40) = 0x2fd;
      FUN_144bdc8a0(local_178);
    }
  }
  local_1e0[0] = 0;
  Ordinal_21(*(undefined8 *)(param_1 + 0x58),0xffff,&DAT_fffffffb,local_1e0,4);
  local_res8[0] = Ordinal_111();
  if ((local_res8[0] != 0) && ((DAT_14c798ff0 != '\0' || (cVar1 = FUN_144bdbf80(), cVar1 != '\0'))))
  {
    cVar1 = FUN_144bdbf80();
    if (cVar1 != '\0') {
      uVar3 = FUN_144bdc810(local_178,&DAT_14c798fa0,1);
    }
    else {
      uVar3 = FUN_144bdc640(local_1c8);
    }
    local_1e8 = local_res8;
    local_1f8 = 1;
    local_1f0 = FUN_144f50970;
    lVar4 = FUN_144bdc480(uVar3,"Failed to setsockopt(), WSA error code #{}",&local_1f8,0);
    *(undefined8 *)(lVar4 + 0x40) = 0x307;
    *(char **)(lVar4 + 0x38) =
         "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
    ;
    if (cVar1 != '\0') {
      FUN_144bdc8a0(local_178);
    }
    else {
      FUN_144bdc690(local_1c8);
    }
  }
  iVar2 = Ordinal_2(*(undefined8 *)(param_1 + 0x58),&local_1d8,0x10);
  if (iVar2 == -1) {
    local_res8[0] = Ordinal_111();
    if ((DAT_14c798ff0 != '\0') || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
      cVar1 = FUN_144bdbf80();
      if (cVar1 != '\0') {
        uVar3 = FUN_144bdc810(local_178,&DAT_14c798fa0,1);
      }
      else {
        uVar3 = FUN_144bdc640(local_1c8);
      }
      local_1e8 = local_res8;
      local_1f8 = 1;
      local_1f0 = FUN_144f50970;
      lVar4 = FUN_144bdc480(uVar3,"Failed to bind(), WSA error code #{}",&local_1f8,0);
      *(undefined8 *)(lVar4 + 0x40) = 0x313;
      *(char **)(lVar4 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
      ;
      if (cVar1 != '\0') {
        FUN_144bdc8a0(local_178);
      }
      else {
        FUN_144bdc690(local_1c8);
      }
    }
    *param_2 = 0x80040200;
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 144f74b20 FUN_144f74b20 body=110 status=ok
// SIG undefined FUN_144f74b20(void)

undefined4 * FUN_144f74b20(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_res8 [2];
  undefined1 local_18 [2];
  undefined2 local_16;
  undefined4 local_14;
  
  local_res8[0] = 0x10;
  iVar2 = Ordinal_6(*(undefined8 *)(param_1 + 0x58),local_18,local_res8);
  if (iVar2 == -1) {
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_3 = local_14;
  uVar1 = Ordinal_15(local_16);
  *(undefined2 *)(param_3 + 1) = uVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f74b90 FUN_144f74b90 body=89 status=ok
// SIG undefined FUN_144f74b90(void)

bool FUN_144f74b90(longlong param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_218 [2];
  longlong local_210;
  
  local_210 = *(longlong *)(param_1 + 0x58);
  if (local_210 != -1) {
    local_res8[0] = 0;
    local_218[0] = 1;
    iVar1 = Ordinal_18((int)local_210 + 1,0,local_218,0,local_res8);
    return 0 < iVar1;
  }
  return false;
}



// FUNCTION 144f74bf0 FUN_144f74bf0 body=681 status=ok
// SIG undefined FUN_144f74bf0(void)

undefined8 FUN_144f74bf0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined1 local_668 [2];
  undefined2 local_666;
  undefined4 local_664 [3];
  undefined8 local_658;
  code *local_650;
  undefined1 *local_648;
  code *local_640;
  undefined4 *local_638;
  undefined8 local_630;
  undefined1 local_628 [80];
  undefined1 local_5d8 [80];
  undefined4 local_588 [2];
  longlong local_580;
  undefined1 local_378 [336];
  undefined4 local_228 [2];
  longlong local_220;
  
  local_580 = *(longlong *)(param_1 + 0x58);
  if (local_580 != -1) {
    puVar7 = &local_res20;
    local_588[0] = 1;
    local_228[0] = 1;
    local_res20 = 0;
    local_220 = local_580;
    iVar3 = Ordinal_18((int)local_580 + 1,local_588,0,local_228,puVar7);
    uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
    if ((0 < iVar3) && (iVar3 = Ordinal_151(*(undefined8 *)(param_1 + 0x58),local_588), iVar3 != 0))
    {
      local_res18[0] = 0x10;
      lVar4 = Ordinal_1(*(undefined8 *)(param_1 + 0x58),local_668,local_res18);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_664[0];
        uVar2 = Ordinal_15(local_666);
        *(undefined2 *)(param_2 + 1) = uVar2;
      }
      lVar5 = inet_ntop(2,local_664,local_628);
      if (lVar5 != 0) {
        uVar2 = Ordinal_15(local_666);
        local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar2);
        if ((2 < DAT_14c798ff0) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
          cVar1 = FUN_144bdbf80();
          if (cVar1 == '\0') {
            uVar6 = FUN_144bdc640(local_5d8);
            local_658 = 2;
            local_650 = FUN_144f75600;
            local_648 = local_628;
            local_640 = FUN_144f508e0;
            local_638 = local_res8;
            lVar5 = FUN_144bdc480(uVar6,"Socket got connection from [{}:{}]",&local_658,0);
            *(char **)(lVar5 + 0x38) =
                 "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
            ;
            *(undefined8 *)(lVar5 + 0x40) = 0x219;
            FUN_144bdc690(local_5d8);
          }
          else {
            uVar6 = FUN_144bdc810(local_378,&DAT_14c798fa0,3);
            local_658 = 2;
            local_650 = FUN_144f75600;
            local_648 = local_628;
            local_640 = FUN_144f508e0;
            local_638 = local_res8;
            lVar5 = FUN_144bdc480(uVar6,"Socket got connection from [{}:{}]",&local_658,0);
            *(char **)(lVar5 + 0x38) =
                 "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
            ;
            *(undefined8 *)(lVar5 + 0x40) = 0x219;
            FUN_144bdc8a0(local_378);
          }
        }
      }
      if (lVar4 != -1) {
        local_res8[0] = 1;
        Ordinal_21(lVar4,6,1,local_res8,CONCAT44(uVar8,4));
        local_630 = 0x60;
        lVar5 = (*DAT_14c787670)(0,&local_630,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(lVar5,"hkBsdSocket");
        }
        if (lVar5 == 0) {
          return 0;
        }
        uVar6 = FUN_144f74080(lVar5,lVar4);
        return uVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 144f74ea0 FUN_144f74ea0 body=90 status=ok
// SIG undefined FUN_144f74ea0(void)

bool FUN_144f74ea0(longlong param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_218 [2];
  longlong local_210;
  
  local_210 = *(longlong *)(param_1 + 0x58);
  if (local_210 != -1) {
    local_res8[0] = 0;
    local_218[0] = 1;
    iVar1 = Ordinal_18((int)local_210 + 1,local_218,0,0,local_res8);
    return 0 < iVar1;
  }
  return false;
}



// FUNCTION 144f74f00 FUN_144f74f00 body=271 status=ok
// SIG undefined FUN_144f74f00(void)

undefined4 *
FUN_144f74f00(longlong *param_1,undefined4 *param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  
  (**(code **)(*param_1 + 0x20))();
  lVar2 = Ordinal_23(2,2,0);
  param_1[0xb] = lVar2;
  if (lVar2 != -1) {
    local_30 = 2;
    local_2c = param_4;
    local_2e = Ordinal_9(param_3);
    local_res8[0] = 1;
    iVar1 = Ordinal_21(param_1[0xb],0xffff,0x20,local_res8,4);
    if (iVar1 == 0) {
      local_38 = 1;
      Ordinal_21(param_1[0xb],0xffff,4,&local_38,4);
      (**(code **)(*param_1 + 0xa0))(param_1,local_34,0);
      iVar1 = Ordinal_2(param_1[0xb],&local_30,0x10);
      if (iVar1 != -1) {
        *param_2 = 0;
        return param_2;
      }
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f75010 FUN_144f75010 body=414 status=ok
// SIG undefined FUN_144f75010(void)

longlong FUN_144f75010(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined8 local_1d8;
  code *local_1d0;
  undefined4 *local_1c8;
  undefined2 local_1c0;
  undefined2 local_1be;
  undefined4 local_1bc;
  undefined1 local_1b0 [80];
  undefined1 local_160 [344];
  
  FUN_144bfbef0(&local_1c0,0,0x10);
  local_1c0 = 2;
  local_1be = Ordinal_9(*(undefined2 *)(param_4 + 1));
  local_1bc = *param_4;
  iVar2 = Ordinal_20(*(undefined8 *)(param_1 + 0x58),param_2,param_3,0,&local_1c0,0x10);
  if ((longlong)iVar2 == -1) {
    local_res8[0] = Ordinal_111();
    if ((DAT_14c798ff0 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) {
      return -1;
    }
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      uVar3 = FUN_144bdc640(local_1b0);
      local_1d8 = 1;
      local_1d0 = FUN_144f50970;
      local_1c8 = local_res8;
      lVar4 = FUN_144bdc480(uVar3,"sendTo failed!, WSA error code #{}",&local_1d8,0);
      *(char **)(lVar4 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
      ;
      *(undefined8 *)(lVar4 + 0x40) = 0x2b3;
      FUN_144bdc690(local_1b0);
    }
    else {
      uVar3 = FUN_144bdc810(local_160,&DAT_14c798fa0,2);
      local_1d8 = 1;
      local_1d0 = FUN_144f50970;
      local_1c8 = local_res8;
      lVar4 = FUN_144bdc480(uVar3,"sendTo failed!, WSA error code #{}",&local_1d8,0);
      *(char **)(lVar4 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
      ;
      *(undefined8 *)(lVar4 + 0x40) = 0x2b3;
      FUN_144bdc8a0(local_160);
    }
  }
  return (longlong)iVar2;
}



// FUNCTION 144f751b0 FUN_144f751b0 body=92 status=ok
// SIG undefined FUN_144f751b0(void)

longlong FUN_144f751b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_res8 [2];
  undefined1 local_18 [2];
  undefined2 local_16;
  undefined4 local_14;
  
  local_res8[0] = 0x10;
  iVar2 = Ordinal_17(*(undefined8 *)(param_1 + 0x58),param_2,param_3,0,local_18,local_res8);
  *param_4 = local_14;
  uVar1 = Ordinal_15(local_16);
  *(undefined2 *)(param_4 + 1) = uVar1;
  return (longlong)iVar2;
}



// FUNCTION 144f75210 FUN_144f75210 body=407 status=ok
// SIG undefined FUN_144f75210(void)

undefined4 FUN_144f75210(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_res10 [6];
  undefined8 local_1c8;
  code *local_1c0;
  int *local_1b8;
  undefined1 local_1b0 [80];
  undefined1 local_160 [352];
  
  local_res10[0] = Ordinal_111();
  if (local_res10[0] < 0x2743) {
    if (local_res10[0] == 0x2742) {
      return 5;
    }
    if (local_res10[0] == 0) {
      return 0;
    }
    if (local_res10[0] == 0x2733) {
      return 1;
    }
    if (local_res10[0] == 0x2740) {
      return 4;
    }
  }
  else {
    if (local_res10[0] == 0x2746) {
      return 2;
    }
    if (local_res10[0] == 0x276d) {
      return 3;
    }
  }
  if ((DAT_14c798ff0 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) {
    return 6;
  }
  cVar1 = FUN_144bdbf80();
  if (cVar1 != '\0') {
    uVar2 = FUN_144bdc810(local_160,&DAT_14c798fa0,2);
    local_1c8 = 1;
    local_1c0 = FUN_144f50970;
    local_1b8 = local_res10;
    lVar3 = FUN_144bdc480(uVar2,"unknown WSA error code #{}",&local_1c8,0);
    *(char **)(lVar3 + 0x38) =
         "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
    ;
    *(undefined8 *)(lVar3 + 0x40) = 0x2e0;
    FUN_144bdc8a0(local_160);
    return 6;
  }
  uVar2 = FUN_144bdc640(local_1b0);
  local_1c8 = 1;
  local_1c0 = FUN_144f50970;
  local_1b8 = local_res10;
  lVar3 = FUN_144bdc480(uVar2,"unknown WSA error code #{}",&local_1c8,0);
  *(char **)(lVar3 + 0x38) =
       "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Bsd/Common/Base/hkBsdSocket.cxx"
  ;
  *(undefined8 *)(lVar3 + 0x40) = 0x2e0;
  FUN_144bdc690(local_1b0);
  return 6;
}



// FUNCTION 144f753b0 FUN_144f753b0 body=85 status=ok
// SIG undefined FUN_144f753b0(void)

void FUN_144f753b0(longlong param_1,undefined8 param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_res8 [2];
  undefined1 local_18 [2];
  undefined2 local_16;
  
  (*(code *)PTR_FUN_14c727b18)(param_2);
  local_res8[0] = 0x10;
  iVar2 = Ordinal_6(*(undefined8 *)(param_1 + 0x58),local_18,local_res8);
  if (iVar2 != -1) {
    uVar1 = Ordinal_15(local_16);
    *param_3 = (uint)uVar1;
  }
  return;
}



// FUNCTION 144f75410 FUN_144f75410 body=62 status=ok
// SIG undefined FUN_144f75410(void)

uint * FUN_144f75410(longlong param_1,uint *param_2,char param_3)

{
  int iVar1;
  uint local_res18 [4];
  
  local_res18[0] = (uint)(param_3 == '\0');
  iVar1 = Ordinal_10(*(undefined8 *)(param_1 + 0x58),0x8004667e,local_res18);
  *param_2 = -(uint)(iVar1 != 0) & 0x80040200;
  return param_2;
}



// FUNCTION 144f75450 FUN_144f75450 body=261 status=ok
// SIG undefined FUN_144f75450(void)

undefined4 * FUN_144f75450(longlong *param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  HANDLE hObject;
  undefined4 uVar3;
  _OSVERSIONINFOEXW local_128;
  
  (**(code **)(*param_1 + 0x20))();
  memset(&local_128,0,0x11c);
  local_128.dwOSVersionInfoSize = 0x11c;
  uVar2 = VerSetConditionMask(0,2,3);
  uVar2 = VerSetConditionMask(uVar2,1,3);
  dwlConditionMask = VerSetConditionMask(uVar2,0x20,3);
  local_128.dwMajorVersion = 6;
  local_128.dwMinorVersion = 1;
  local_128.wServicePackMajor = 1;
  BVar1 = VerifyVersionInfoW(&local_128,0x23,dwlConditionMask);
  uVar3 = 1;
  if (BVar1 != 0) {
    uVar3 = 0x81;
  }
  hObject = (HANDLE)WSASocketW(2,1,0,0,0,uVar3);
  param_1[0xb] = (longlong)hObject;
  if (hObject == (HANDLE)0xffffffffffffffff) {
    *param_2 = 0x80040200;
  }
  else {
    if (BVar1 == 0) {
      SetHandleInformation(hObject,1,0);
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 144f75560 FUN_144f75560 body=154 status=ok
// SIG undefined FUN_144f75560(void)

undefined8 * FUN_144f75560(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkBsdSocket::vftable;
  if (param_1[0xb] != -1) {
    Ordinal_3();
    param_1[0xb] = 0xffffffffffffffff;
  }
  *param_1 = hkSocket::vftable;
  FUN_144bdf150(param_1 + 7);
  FUN_1453043d0(param_1 + 3);
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



// FUNCTION 144f75600 FUN_144f75600 body=32 status=ok
// SIG undefined FUN_144f75600(void)

undefined8 FUN_144f75600(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144f75620 FUN_144f75620 body=100 status=ok
// SIG undefined FUN_144f75620(void)

void FUN_144f75620(undefined1 (*param_1) [16],float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  auVar2._4_4_ = 0.0 - fVar4;
  auVar2._0_4_ = fVar5;
  auVar2._8_8_ = 0;
  *param_1 = auVar2 << 0x20;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = 0.0 - fVar5;
  auVar1._8_4_ = fVar3;
  auVar1._12_4_ = 0;
  param_1[1] = auVar1;
  *(ulonglong *)param_1[2] = CONCAT44(0.0 - fVar3,fVar4);
  *(undefined8 *)(param_1[2] + 8) = 0;
  return;
}



// FUNCTION 144f75690 FUN_144f75690 body=403 status=ok
// SIG undefined FUN_144f75690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144f75690(float *param_1,undefined4 *param_2,float *param_3)

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
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[4];
  fVar5 = param_3[5];
  fVar9 = param_3[6];
  fVar6 = param_3[8];
  fVar7 = param_3[9];
  fVar8 = param_3[10];
  fVar16 = fVar7 * fVar4 - fVar5 * fVar6;
  fVar17 = fVar8 * fVar5 - fVar9 * fVar7;
  fVar18 = fVar6 * fVar9 - fVar4 * fVar8;
  fVar19 = fVar4 * fVar3 - fVar1 * fVar9;
  fVar20 = param_3[7] * param_3[3] - param_3[3] * param_3[7];
  fVar10 = fVar17 * fVar1;
  fVar11 = fVar18 * fVar2;
  fVar12 = fVar16 * fVar3;
  fVar21 = fVar11 + fVar10 + fVar12;
  if ((ABS(fVar5) + ABS(fVar4) + ABS(fVar9)) * (ABS(fVar6) + ABS(fVar7) + ABS(fVar8)) *
      (ABS(fVar2) + ABS(fVar1) + ABS(fVar3)) * _DAT_14c6daea0 < ABS(fVar21)) {
    auVar13._4_4_ = fVar11 + fVar10 + fVar12;
    auVar13._0_4_ = fVar21;
    auVar13._8_4_ = fVar11 + fVar10 + fVar12;
    auVar13._12_4_ = fVar11 + fVar10 + fVar12;
    auVar13 = divps(_DAT_14c6daca0,auVar13);
    *param_2 = 0;
    fVar12 = auVar13._0_4_;
    fVar21 = auVar13._4_4_;
    fVar14 = auVar13._8_4_;
    fVar15 = auVar13._12_4_;
    fVar17 = fVar17 * fVar12;
    fVar10 = (fVar3 * fVar7 - fVar8 * fVar2) * fVar21;
    fVar9 = (fVar9 * fVar2 - fVar3 * fVar5) * fVar14;
    fVar11 = fVar19 * fVar15;
    param_1[4] = fVar18 * fVar12;
    param_1[5] = (fVar1 * fVar8 - fVar6 * fVar3) * fVar21;
    param_1[6] = fVar19 * fVar14;
    param_1[7] = fVar20 * fVar15;
    param_1[8] = fVar16 * fVar12;
    param_1[9] = (fVar2 * fVar6 - fVar7 * fVar1) * fVar21;
    param_1[10] = (fVar5 * fVar1 - fVar2 * fVar4) * fVar14;
    param_1[0xb] = fVar20 * fVar15;
  }
  else {
    fVar17 = 0.0;
    fVar10 = 0.0;
    fVar9 = 0.0;
    fVar11 = 0.0;
    *param_2 = 0x80040200;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
  }
  *param_1 = fVar17;
  param_1[1] = fVar10;
  param_1[2] = fVar9;
  param_1[3] = fVar11;
  return param_2;
}



// FUNCTION 144f75830 FUN_144f75830 body=49 status=ok
// SIG undefined FUN_144f75830(void)

void FUN_144f75830(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[6];
  *param_1 = *param_1;
  param_1[1] = param_1[4];
  param_1[2] = param_1[8];
  param_1[3] = param_1[9];
  param_1[4] = uVar1;
  param_1[5] = param_1[5];
  param_1[6] = param_1[9];
  param_1[7] = param_1[0xb];
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = param_1[10];
  param_1[0xb] = param_1[0xb];
  return;
}



// FUNCTION 144f75870 FUN_144f75870 body=162 status=ok
// SIG undefined FUN_144f75870(void)

void FUN_144f75870(float *param_1,float *param_2,float *param_3)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[4];
  fVar5 = param_3[5];
  fVar6 = param_3[6];
  fVar7 = param_2[4];
  fVar8 = param_2[5];
  fVar9 = param_2[6];
  fVar10 = param_2[7];
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar14 = param_2[3];
  fVar15 = param_3[8];
  fVar16 = param_3[9];
  fVar17 = param_3[10];
  fVar18 = param_2[8];
  fVar19 = param_2[9];
  fVar20 = param_2[10];
  fVar21 = param_2[0xb];
  *param_1 = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar18;
  param_1[1] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar19;
  param_1[2] = fVar1 * fVar13 + fVar2 * fVar9 + fVar3 * fVar20;
  param_1[3] = fVar1 * fVar14 + fVar2 * fVar10 + fVar3 * fVar21;
  param_1[4] = fVar5 * fVar7 + fVar4 * fVar11 + fVar6 * fVar18;
  param_1[5] = fVar5 * fVar8 + fVar4 * fVar12 + fVar6 * fVar19;
  param_1[6] = fVar5 * fVar9 + fVar4 * fVar13 + fVar6 * fVar20;
  param_1[7] = fVar5 * fVar10 + fVar4 * fVar14 + fVar6 * fVar21;
  param_1[8] = fVar16 * fVar7 + fVar15 * fVar11 + fVar17 * fVar18;
  param_1[9] = fVar16 * fVar8 + fVar15 * fVar12 + fVar17 * fVar19;
  param_1[10] = fVar16 * fVar9 + fVar15 * fVar13 + fVar17 * fVar20;
  param_1[0xb] = fVar16 * fVar10 + fVar15 * fVar14 + fVar17 * fVar21;
  return;
}



// FUNCTION 144f75920 FUN_144f75920 body=212 status=ok
// SIG undefined FUN_144f75920(void)

void FUN_144f75920(float *param_1,float *param_2,float *param_3)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar1 = param_3[8];
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar10 = param_2[6];
  fVar11 = param_2[7];
  fVar12 = *param_3;
  fVar13 = param_3[1];
  fVar14 = param_3[2];
  fVar15 = param_3[4];
  fVar16 = param_3[5];
  fVar17 = param_3[6];
  fVar18 = param_2[8];
  fVar19 = param_2[9];
  fVar20 = param_2[10];
  fVar21 = param_2[0xb];
  param_1[8] = fVar14 * fVar4 + fVar17 * fVar8 + fVar3 * fVar18;
  param_1[9] = fVar14 * fVar5 + fVar17 * fVar9 + fVar3 * fVar19;
  param_1[10] = fVar14 * fVar6 + fVar17 * fVar10 + fVar3 * fVar20;
  param_1[0xb] = fVar14 * fVar7 + fVar17 * fVar11 + fVar3 * fVar21;
  param_1[4] = fVar13 * fVar4 + fVar16 * fVar8 + fVar2 * fVar18;
  param_1[5] = fVar13 * fVar5 + fVar16 * fVar9 + fVar2 * fVar19;
  param_1[6] = fVar13 * fVar6 + fVar16 * fVar10 + fVar2 * fVar20;
  param_1[7] = fVar13 * fVar7 + fVar16 * fVar11 + fVar2 * fVar21;
  *param_1 = fVar12 * fVar4 + fVar15 * fVar8 + fVar1 * fVar18;
  param_1[1] = fVar12 * fVar5 + fVar15 * fVar9 + fVar1 * fVar19;
  param_1[2] = fVar12 * fVar6 + fVar15 * fVar10 + fVar1 * fVar20;
  param_1[3] = fVar12 * fVar7 + fVar15 * fVar11 + fVar1 * fVar21;
  return;
}



// FUNCTION 144f75a00 FUN_144f75a00 body=361 status=ok
// SIG undefined FUN_144f75a00(void)

void FUN_144f75a00(float *param_1,float *param_2)

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
  
  fVar19 = *param_1;
  fVar20 = param_1[1];
  fVar21 = param_1[2];
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[8];
  fVar5 = param_1[9];
  fVar6 = param_1[10];
  fVar7 = param_2[4];
  fVar8 = param_2[5];
  fVar9 = param_2[6];
  fVar10 = param_2[7];
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar14 = param_2[3];
  fVar15 = param_2[8];
  fVar16 = param_2[9];
  fVar17 = param_2[10];
  fVar18 = param_2[0xb];
  fVar25 = fVar13 * fVar19 + fVar9 * fVar1 + fVar17 * fVar4;
  fVar26 = fVar13 * fVar20 + fVar9 * fVar2 + fVar17 * fVar5;
  fVar27 = fVar13 * fVar21 + fVar9 * fVar3 + fVar17 * fVar6;
  fVar22 = fVar12 * fVar19 + fVar8 * fVar1 + fVar16 * fVar4;
  fVar23 = fVar12 * fVar20 + fVar8 * fVar2 + fVar16 * fVar5;
  fVar24 = fVar12 * fVar21 + fVar8 * fVar3 + fVar16 * fVar6;
  fVar19 = fVar11 * fVar19 + fVar7 * fVar1 + fVar15 * fVar4;
  fVar20 = fVar11 * fVar20 + fVar7 * fVar2 + fVar15 * fVar5;
  fVar21 = fVar11 * fVar21 + fVar7 * fVar3 + fVar15 * fVar6;
  *param_1 = fVar20 * fVar7 + fVar19 * fVar11 + fVar21 * fVar15;
  param_1[1] = fVar20 * fVar8 + fVar19 * fVar12 + fVar21 * fVar16;
  param_1[2] = fVar20 * fVar9 + fVar19 * fVar13 + fVar21 * fVar17;
  param_1[3] = fVar20 * fVar10 + fVar19 * fVar14 + fVar21 * fVar18;
  param_1[4] = fVar23 * fVar7 + fVar22 * fVar11 + fVar24 * fVar15;
  param_1[5] = fVar23 * fVar8 + fVar22 * fVar12 + fVar24 * fVar16;
  param_1[6] = fVar23 * fVar9 + fVar22 * fVar13 + fVar24 * fVar17;
  param_1[7] = fVar23 * fVar10 + fVar22 * fVar14 + fVar24 * fVar18;
  param_1[8] = fVar26 * fVar7 + fVar25 * fVar11 + fVar27 * fVar15;
  param_1[9] = fVar26 * fVar8 + fVar25 * fVar12 + fVar27 * fVar16;
  param_1[10] = fVar26 * fVar9 + fVar25 * fVar13 + fVar27 * fVar17;
  param_1[0xb] = fVar26 * fVar10 + fVar25 * fVar14 + fVar27 * fVar18;
  return;
}



// FUNCTION 144f75b70 FUN_144f75b70 body=1507 status=ok
// SIG undefined FUN_144f75b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_144f75b70(float *param_1,undefined4 *param_2,float *param_3,float *param_4,int param_5,
             float param_6)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168 [12];
  undefined8 local_138;
  float fStack_130;
  float local_128 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8 [60];
  
  uVar4 = uRam000000014c6dae48;
  iVar11 = 0;
  local_188 = param_1[8];
  fStack_184 = param_1[9];
  fStack_180 = param_1[10];
  local_1a8 = *param_1;
  fStack_1a4 = param_1[1];
  fStack_1a0 = param_1[2];
  local_168[3] = param_1[3];
  local_198 = param_1[4];
  fStack_194 = param_1[5];
  fStack_190 = param_1[6];
  local_168[7] = param_1[7];
  *(undefined8 *)param_3 = _DAT_14c6dae40;
  *(undefined8 *)(param_3 + 2) = uVar4;
  uVar6 = uRam000000014c6dae48;
  uVar5 = _DAT_14c6dae40;
  uVar4 = CONCAT44(fRam000000014c6dae5c,fRam000000014c6dae58);
  *(ulonglong *)(param_3 + 4) = CONCAT44(fRam000000014c6dae54,_DAT_14c6dae50);
  *(undefined8 *)(param_3 + 6) = uVar4;
  fVar30 = fRam000000014c6dae5c;
  fVar29 = fRam000000014c6dae58;
  fVar28 = fRam000000014c6dae54;
  fVar27 = _DAT_14c6dae50;
  uVar4 = CONCAT44(fRam000000014c6dae6c,fRam000000014c6dae68);
  *(ulonglong *)(param_3 + 8) = CONCAT44(fRam000000014c6dae64,_DAT_14c6dae60);
  *(undefined8 *)(param_3 + 10) = uVar4;
  local_168[0] = local_1a8;
  local_168[1] = fStack_1a4;
  local_168[2] = fStack_1a0;
  local_168[4] = local_198;
  local_168[5] = fStack_194;
  local_168[6] = fStack_190;
  local_168[8] = local_188;
  local_168[9] = fStack_184;
  local_168[10] = fStack_180;
  fVar26 = (param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2] +
            param_1[5] * param_1[5] + param_1[4] * param_1[4] + param_1[6] * param_1[6] +
           param_1[9] * param_1[9] + param_1[8] * param_1[8] + param_1[10] * param_1[10]) *
           param_6 * param_6;
  fVar14 = (local_188 * local_188 + local_198 * local_198 + fStack_184 * fStack_184) *
           _DAT_14c6dacb0;
  if (fVar26 < fVar14) {
    local_178 = (float)uVar5;
    fStack_174 = (float)((ulonglong)uVar5 >> 0x20);
    fStack_170 = (float)uVar6;
    fStack_16c = (float)((ulonglong)uVar6 >> 0x20);
    fVar17 = _DAT_14c6dae60;
    fVar18 = fRam000000014c6dae64;
    fVar19 = fRam000000014c6dae68;
    fVar20 = fRam000000014c6dae6c;
    do {
      fVar13 = 1.0;
      fVar22 = 0.0;
      if (param_5 <= iVar11) break;
      fVar16 = ABS(local_198);
      auVar15._0_8_ = CONCAT44(local_198,local_198) & 0x7fffffff7fffffff;
      auVar15._8_4_ = ABS(local_198);
      auVar15._12_4_ = ABS(local_198);
      fVar12 = ABS(local_188);
      fVar21 = ABS(fStack_184);
      fVar14 = fVar16;
      if (fVar16 < fVar12) {
        fVar14 = fVar12;
      }
      uVar10 = (fVar16 < fVar12) + 1;
      lVar8 = (ulonglong)(fVar16 < fVar12) + 1;
      if (fVar14 < fVar21) {
        uVar10 = 2;
        lVar8 = 2;
      }
      if (local_168[(ulonglong)(fVar14 < fVar21) + lVar8 * 4] != 0.0) {
        fVar13 = (local_168[lVar8 * 5] - local_168[(ulonglong)(fVar14 < fVar21) * 5]) /
                 (local_168[(ulonglong)(fVar14 < fVar21) + lVar8 * 4] * 2.0);
        fVar22 = fVar13 * fVar13 + 1.0;
        auVar2._4_4_ = fVar22;
        auVar2._0_4_ = fVar22;
        auVar2._8_4_ = fVar22;
        auVar2._12_4_ = fVar22;
        auVar15 = sqrtps(auVar15,auVar2);
        if (fVar13 < 0.0) {
          fVar13 = fVar13 - auVar15._0_4_;
        }
        else {
          fVar13 = fVar13 + auVar15._0_4_;
        }
        fVar22 = 1.0 / fVar13;
        fVar12 = fVar22 * fVar22 + 1.0;
        auVar3._4_4_ = fVar12;
        auVar3._0_4_ = fVar12;
        auVar3._8_4_ = fVar12;
        auVar3._12_4_ = fVar12;
        auVar15 = sqrtps(ZEXT416((uint)fVar13),auVar3);
        auVar15 = divps(_DAT_14c6daca0,auVar15);
        fVar13 = auVar15._0_4_;
        fVar22 = fVar13 * fVar22;
      }
      local_f8[0] = _DAT_14c6dae50;
      local_f8[1] = fRam000000014c6dae54;
      local_f8[2] = fRam000000014c6dae58;
      local_f8[3] = fRam000000014c6dae5c;
      local_138 = _DAT_14c6dae40;
      fStack_130 = (float)uRam000000014c6dae48;
      local_128[4] = _DAT_14c6dae60;
      local_128[5] = fRam000000014c6dae64;
      local_128[6] = fRam000000014c6dae68;
      uVar7 = (ulonglong)uVar10;
      local_108 = _DAT_14c6dae40;
      uStack_100 = uRam000000014c6dae48;
      local_f8[4] = _DAT_14c6dae60;
      local_f8[5] = fRam000000014c6dae64;
      local_f8[6] = fRam000000014c6dae68;
      uVar9 = (ulonglong)(fVar14 < fVar21);
      local_128[0] = local_f8[0];
      local_128[1] = local_f8[1];
      *(float *)((longlong)&local_138 + uVar9 * 0x14) = fVar13;
      lVar8 = uVar9 + uVar7 * 4;
      local_128[2] = local_f8[2];
      *(float *)((longlong)&local_138 + lVar8 * 4) = fVar22;
      lVar1 = uVar7 + uVar9 * 4;
      *(float *)((longlong)&local_138 + lVar1 * 4) = -fVar22;
      *(float *)((longlong)&local_108 + uVar9 * 0x14) = fVar13;
      *(float *)((longlong)&local_138 + uVar7 * 0x14) = fVar13;
      *(float *)((longlong)&local_108 + lVar8 * 4) = -fVar22;
      *(float *)((longlong)&local_108 + lVar1 * 4) = fVar22;
      *(float *)((longlong)&local_108 + uVar7 * 0x14) = fVar13;
      fVar23 = (float)local_138 * local_1a8 + local_138._4_4_ * local_198 + fStack_130 * local_188;
      fVar24 = (float)local_138 * fStack_1a4 + local_138._4_4_ * fStack_194 +
               fStack_130 * fStack_184;
      fVar25 = (float)local_138 * fStack_1a0 + local_138._4_4_ * fStack_190 +
               fStack_130 * fStack_180;
      fVar14 = local_128[0] * local_1a8 + local_128[1] * local_198 + local_128[2] * local_188;
      fVar22 = local_128[0] * fStack_1a4 + local_128[1] * fStack_194 + local_128[2] * fStack_184;
      fVar13 = local_128[0] * fStack_1a0 + local_128[1] * fStack_190 + local_128[2] * fStack_180;
      fVar12 = local_128[4] * local_1a8 + local_128[5] * local_198 + local_128[6] * local_188;
      fVar16 = local_128[4] * fStack_1a4 + local_128[5] * fStack_194 + local_128[6] * fStack_184;
      fVar21 = local_128[4] * fStack_1a0 + local_128[5] * fStack_190 + local_128[6] * fStack_180;
      iVar11 = iVar11 + 1;
      local_1a8 = fVar24 * local_f8[0] + fVar23 * (float)local_108 + fVar25 * local_f8[4];
      fStack_1a4 = fVar24 * local_f8[1] + fVar23 * local_108._4_4_ + fVar25 * local_f8[5];
      fStack_1a0 = fVar24 * local_f8[2] + fVar23 * (float)uStack_100 + fVar25 * local_f8[6];
      local_168[0] = local_1a8;
      local_168[1] = fStack_1a4;
      local_168[2] = fStack_1a0;
      local_168[3] = fVar24 * local_f8[3] + fVar23 * uStack_100._4_4_ +
                     fVar25 * fRam000000014c6dae6c;
      local_198 = fVar22 * local_f8[0] + fVar14 * (float)local_108 + fVar13 * local_f8[4];
      fStack_194 = fVar22 * local_f8[1] + fVar14 * local_108._4_4_ + fVar13 * local_f8[5];
      fStack_190 = fVar22 * local_f8[2] + fVar14 * (float)uStack_100 + fVar13 * local_f8[6];
      local_168[4] = local_198;
      local_168[5] = fStack_194;
      local_168[6] = fStack_190;
      local_168[7] = fVar22 * local_f8[3] + fVar14 * uStack_100._4_4_ +
                     fVar13 * fRam000000014c6dae6c;
      local_188 = fVar16 * local_f8[0] + fVar12 * (float)local_108 + fVar21 * local_f8[4];
      fStack_184 = fVar16 * local_f8[1] + fVar12 * local_108._4_4_ + fVar21 * local_f8[5];
      fStack_180 = fVar16 * local_f8[2] + fVar12 * (float)uStack_100 + fVar21 * local_f8[6];
      fVar12 = fVar27 * local_138._4_4_ + local_178 * (float)local_138 + fVar17 * fStack_130;
      fVar16 = fVar28 * local_138._4_4_ + fStack_174 * (float)local_138 + fVar18 * fStack_130;
      fVar21 = fVar29 * local_138._4_4_ + fStack_170 * (float)local_138 + fVar19 * fStack_130;
      fVar23 = fVar30 * local_138._4_4_ + fStack_16c * (float)local_138 + fVar20 * fStack_130;
      fVar14 = fVar27 * local_128[5];
      fVar22 = fVar28 * local_128[5];
      fVar13 = fVar29 * local_128[5];
      local_128[5] = fVar30 * local_128[5];
      fVar27 = fVar27 * local_128[1] + local_178 * local_128[0] + fVar17 * local_128[2];
      fVar28 = fVar28 * local_128[1] + fStack_174 * local_128[0] + fVar18 * local_128[2];
      fVar29 = fVar29 * local_128[1] + fStack_170 * local_128[0] + fVar19 * local_128[2];
      fVar30 = fVar30 * local_128[1] + fStack_16c * local_128[0] + fVar20 * local_128[2];
      *param_3 = fVar12;
      param_3[1] = fVar16;
      param_3[2] = fVar21;
      param_3[3] = fVar23;
      param_3[4] = fVar27;
      param_3[5] = fVar28;
      param_3[6] = fVar29;
      param_3[7] = fVar30;
      fVar17 = fVar14 + local_178 * local_128[4] + fVar17 * local_128[6];
      fVar18 = fVar22 + fStack_174 * local_128[4] + fVar18 * local_128[6];
      fVar19 = fVar13 + fStack_170 * local_128[4] + fVar19 * local_128[6];
      fVar20 = local_128[5] + fStack_16c * local_128[4] + fVar20 * local_128[6];
      local_168[8] = local_188;
      local_168[9] = fStack_184;
      local_168[10] = fStack_180;
      param_3[8] = fVar17;
      param_3[9] = fVar18;
      param_3[10] = fVar19;
      param_3[0xb] = fVar20;
      fVar14 = (local_188 * local_188 + local_198 * local_198 + fStack_184 * fStack_184) *
               _DAT_14c6dacb0;
      local_178 = fVar12;
      fStack_174 = fVar16;
      fStack_170 = fVar21;
      fStack_16c = fVar23;
    } while (fVar26 < fVar14);
  }
  *param_4 = local_1a8;
  param_4[1] = fStack_194;
  param_4[2] = fStack_180;
  param_4[3] = fStack_180;
  if (fVar26 < fVar14) {
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f76160 FUN_144f76160 body=732 status=ok
// SIG undefined FUN_144f76160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144f76160(undefined1 (*param_1) [16],undefined4 *param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  
  dVar12 = param_3[8];
  dVar13 = param_3[9];
  dVar14 = param_3[10];
  dVar15 = param_3[4];
  dVar16 = param_3[5];
  dVar17 = param_3[6];
  dVar18 = *param_3;
  dVar19 = param_3[1];
  dVar20 = param_3[2];
  dVar10 = dVar13 * dVar15 - dVar16 * dVar12;
  dVar11 = dVar14 * dVar16 - dVar17 * dVar13;
  dVar3 = dVar12 * dVar17 - dVar15 * dVar14;
  dVar1 = dVar11 * dVar18;
  dVar21 = dVar3 * dVar19;
  dVar23 = dVar10 * dVar20;
  dVar6 = dVar1 + dVar21 + dVar23;
  dVar23 = dVar1 + dVar21 + dVar23;
  if (((double)CONCAT44((uint)((ulonglong)((longlong)dVar13 << 1) >> 0x21),SUB84(dVar13,0)) +
       (double)CONCAT44((uint)((ulonglong)((longlong)dVar12 << 1) >> 0x21),SUB84(dVar12,0)) +
      (double)CONCAT44((uint)((ulonglong)((longlong)dVar14 << 1) >> 0x21),SUB84(dVar14,0))) *
      ((double)CONCAT44((uint)((ulonglong)((longlong)dVar16 << 1) >> 0x21),SUB84(dVar16,0)) +
       (double)CONCAT44((uint)((ulonglong)((longlong)dVar15 << 1) >> 0x21),SUB84(dVar15,0)) +
      (double)CONCAT44((uint)((ulonglong)((longlong)dVar17 << 1) >> 0x21),SUB84(dVar17,0))) *
      ((double)CONCAT44((uint)((ulonglong)((longlong)dVar19 << 1) >> 0x21),SUB84(dVar19,0)) +
       (double)CONCAT44((uint)((ulonglong)((longlong)dVar18 << 1) >> 0x21),SUB84(dVar18,0)) +
      (double)CONCAT44((uint)((ulonglong)((longlong)dVar20 << 1) >> 0x21),SUB84(dVar20,0))) *
      _DAT_14c6db520 < ABS(dVar6)) {
    auVar5._8_4_ = SUB84(dVar23,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar22 = divpd(_DAT_14c6db120,auVar5);
    *param_2 = 0;
    dVar21 = auVar22._0_8_;
    dVar23 = auVar22._8_8_;
    dVar1 = (dVar20 * dVar13 - dVar14 * dVar19) * dVar23;
    auVar22._8_4_ = SUB84(dVar1,0);
    auVar22._0_8_ = dVar11 * dVar21;
    auVar22._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *param_1 = auVar22;
    auVar2._8_4_ = SUB84(dVar23 * 0.0,0);
    auVar2._0_8_ = (dVar17 * dVar19 - dVar20 * dVar16) * dVar21;
    auVar2._12_4_ = (int)((ulonglong)(dVar23 * 0.0) >> 0x20);
    param_1[1] = auVar2;
    dVar1 = (dVar18 * dVar14 - dVar12 * dVar20) * dVar23;
    auVar7._8_4_ = SUB84(dVar1,0);
    auVar7._0_8_ = dVar3 * dVar21;
    auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    param_1[2] = auVar7;
    auVar4._8_4_ = SUB84(dVar23 * 0.0,0);
    auVar4._0_8_ = (dVar15 * dVar20 - dVar18 * dVar17) * dVar21;
    auVar4._12_4_ = (int)((ulonglong)(dVar23 * 0.0) >> 0x20);
    param_1[3] = auVar4;
    dVar1 = (dVar19 * dVar12 - dVar13 * dVar18) * dVar23;
    auVar9._8_4_ = SUB84(dVar1,0);
    auVar9._0_8_ = dVar10 * dVar21;
    auVar9._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    param_1[4] = auVar9;
    auVar8._8_4_ = SUB84(dVar23 * 0.0,0);
    auVar8._0_8_ = (dVar16 * dVar18 - dVar19 * dVar15) * dVar21;
    auVar8._12_4_ = (int)((ulonglong)(dVar23 * 0.0) >> 0x20);
    param_1[5] = auVar8;
  }
  else {
    *param_2 = 0x80040200;
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    *(undefined8 *)param_1[2] = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)param_1[3] = 0;
    *(undefined8 *)(param_1[3] + 8) = 0;
    *(undefined8 *)param_1[4] = 0;
    *(undefined8 *)(param_1[4] + 8) = 0;
    *(undefined8 *)param_1[5] = 0;
    *(undefined8 *)(param_1[5] + 8) = 0;
  }
  return param_2;
}



// FUNCTION 144f76440 FUN_144f76440 body=475 status=ok
// SIG undefined FUN_144f76440(void)

void FUN_144f76440(undefined1 (*param_1) [16],double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  
  dVar12 = param_2[6];
  dVar13 = param_2[7];
  dVar35 = param_2[2];
  dVar36 = param_2[3];
  dVar14 = param_3[6];
  dVar15 = param_2[10];
  dVar16 = param_2[2];
  dVar17 = param_2[4];
  dVar18 = param_2[6];
  dVar7 = param_2[7];
  dVar37 = param_2[10];
  dVar38 = param_2[0xb];
  dVar19 = param_2[4];
  dVar20 = param_3[4];
  dVar21 = param_3[5];
  dVar22 = *param_2;
  dVar2 = param_2[1];
  dVar23 = param_2[8];
  dVar24 = param_2[9];
  dVar25 = *param_3;
  dVar26 = param_3[1];
  dVar27 = param_3[2];
  dVar28 = param_3[8];
  dVar29 = param_3[9];
  dVar30 = param_3[10];
  dVar9 = param_2[5] * dVar21 + dVar2 * dVar20 + dVar24 * dVar14;
  dVar31 = param_2[2];
  dVar32 = param_2[3];
  dVar11 = dVar13 * dVar21 + param_2[3] * dVar20 + param_2[0xb] * dVar14;
  dVar33 = param_2[10];
  dVar34 = param_2[0xb];
  dVar5 = param_2[5] * dVar29 + dVar2 * dVar28 + dVar24 * dVar30;
  dVar2 = param_2[5] * dVar26 + dVar2 * dVar25 + dVar24 * dVar27;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = param_2[4] * dVar26 + dVar22 * dVar25 + dVar23 * dVar27;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *param_1 = auVar1;
  dVar7 = dVar7 * dVar29 + dVar32 * dVar28 + dVar34 * dVar30;
  dVar2 = dVar13 * dVar26 + dVar36 * dVar25 + dVar38 * dVar27;
  auVar3._8_4_ = SUB84(dVar2,0);
  auVar3._0_8_ = dVar12 * dVar26 + dVar35 * dVar25 + dVar37 * dVar27;
  auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  param_1[1] = auVar3;
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar19 * dVar21 + dVar22 * dVar20 + dVar23 * dVar14;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  param_1[2] = auVar8;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar17 * dVar29 + dVar22 * dVar28 + dVar23 * dVar30;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  param_1[4] = auVar4;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ = dVar12 * dVar21 + dVar16 * dVar20 + dVar15 * dVar14;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  param_1[3] = auVar10;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar18 * dVar29 + dVar31 * dVar28 + dVar33 * dVar30;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  param_1[5] = auVar6;
  return;
}



// FUNCTION 144f76620 FUN_144f76620 body=220 status=ok
// SIG undefined FUN_144f76620(void)

undefined1 (*) [16] FUN_144f76620(double *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (param_1[10] * param_1[5] - param_1[9] * param_1[6]) * *param_1;
  dVar5 = (param_1[2] * param_1[9] - param_1[1] * param_1[10]) * param_1[4];
  dVar3 = (param_1[6] * param_1[1] - param_1[5] * param_1[2]) * param_1[8];
  dVar2 = dVar4 + dVar5 + dVar3;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar4 + dVar5 + dVar3;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *param_2 = auVar1;
  return param_2;
}



// FUNCTION 144f76820 FUN_144f76820 body=101 status=ok
// SIG undefined FUN_144f76820(void)

undefined8 * FUN_144f76820(undefined8 *param_1,uint param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
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



// FUNCTION 144f768f0 FUN_144f768f0 body=116 status=ok
// SIG undefined FUN_144f768f0(void)

undefined8 * FUN_144f768f0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0xc0;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"CloneImpl");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144f78d30(lVar1);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f76970 FUN_144f76970 body=48 status=ok
// SIG undefined FUN_144f76970(void)

void FUN_144f76970(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_144f78ec0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000144f76993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c787678)(0,lVar1,0);
    return;
  }
  return;
}



// FUNCTION 144f769a0 FUN_144f769a0 body=7 status=ok
// SIG undefined FUN_144f769a0(void)

void FUN_144f769a0(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)(*param_1 + 0x5d) = param_2;
  return;
}



// FUNCTION 144f769b0 FUN_144f769b0 body=8 status=ok
// SIG undefined FUN_144f769b0(void)

longlong FUN_144f769b0(longlong *param_1)

{
  return *param_1 + 0x10;
}



// FUNCTION 144f769c0 FUN_144f769c0 body=250 status=ok
// SIG undefined FUN_144f769c0(void)

void FUN_144f769c0(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 0;
  puVar4 = *(ulonglong **)(lVar3 + 0x10);
  if (puVar4 + (longlong)*(int *)(lVar3 + 0x18) * 6 != puVar4) {
    puVar6 = puVar4 + (longlong)*(int *)(lVar3 + 0x18) * 6 + 2;
    do {
      puVar1 = puVar6 + -6;
      if ((puVar6[-3] & 1) != 0) {
        FUN_144be6b30(puVar6[-3] & 0xfffffffffffffffe);
      }
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar2 = puVar6 + -8;
      puVar6 = puVar1;
    } while (puVar2 != puVar4);
  }
  *(undefined4 *)(lVar3 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(lVar3 + 0x1c)) && (*(longlong *)(lVar3 + 0x10) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(lVar3 + 0x10),
               (ulonglong)(*(uint *)(lVar3 + 0x1c) & 0x7fffffff) * 0x30);
  }
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 0x1c) = 0x80000000;
  lVar5 = *(longlong *)(lVar3 + 0x20);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar5,0);
    FUN_144b3ec00(lVar3 + 0x20);
  }
  FUN_144f9a3f0(lVar3 + 0x58);
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    FUN_144f77100();
  }
  return;
}



// FUNCTION 144f76ac0 FUN_144f76ac0 body=307 status=ok
// SIG undefined FUN_144f76ac0(void)

undefined8 * FUN_144f76ac0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res18 [2];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [80];
  undefined1 local_160 [344];
  
  if (*param_3 == 0) {
    if ((1 < DAT_14c7990e8) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') {
        uVar2 = FUN_144bdc640(local_1b0);
        local_res18[0] = 0;
        lVar3 = FUN_144bdc480(uVar2,"Attempting to clone a null var",local_res18,0);
        *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar3 + 0x40) = 0x349;
        FUN_144bdc690(local_1b0);
      }
      else {
        uVar2 = FUN_144bdc810(local_160,&DAT_14c799098,2);
        local_res18[0] = 0;
        lVar3 = FUN_144bdc480(uVar2,"Attempting to clone a null var",local_res18,0);
        *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar3 + 0x40) = 0x349;
        FUN_144bdc8a0(local_160);
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  local_1b8 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  FUN_144f78fd0(*param_1,&local_1c8);
  *param_2 = local_1c8;
  param_2[1] = uStack_1c0;
  param_2[2] = local_1b8;
  return param_2;
}



// FUNCTION 144f76c00 FUN_144f76c00 body=14 status=ok
// SIG undefined FUN_144f76c00(void)

undefined8 * FUN_144f76c00(undefined8 *param_1)

{
  *param_1 = hkReflect::ClonerCallback::vftable;
  return param_1;
}


