// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144c43080 FUN_144c43080 body=442 status=ok
// SIG undefined FUN_144c43080(void)

void FUN_144c43080(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  byte bVar9;
  uint uStackX_c;
  
  lVar4 = FUN_144c441c0(param_1 + 0x1c0);
  if (lVar4 == 0) {
    iVar6 = -1;
    uStackX_c = 0xffffffff;
  }
  else {
    iVar6 = *(int *)(lVar4 + 4);
    uStackX_c = (uint)(lVar4 - *(longlong *)(param_1 + 0x1d0) >> 3);
  }
  lVar4 = (longlong)iVar6 * 0x38 + *(longlong *)(param_1 + 0x1c0);
  if (param_3 != param_4) {
    lVar5 = *param_3;
    iVar7 = (int)(param_3[1] - lVar5 >> 1);
    if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar7) {
      FUN_144c44a60(param_4,&PTR_vftable_14c6e47c0,(longlong)iVar7);
    }
    FUN_144b3d470(*param_4,lVar5,(longlong)iVar7 * 2);
    *(int *)(param_4 + 1) = iVar7;
  }
  FUN_144c3fad0(param_4 + 2,0,*(undefined4 *)(lVar4 + 0x10),0);
  bVar9 = 0;
  puVar3 = (ushort *)param_3[1];
  for (puVar8 = (ushort *)*param_3; puVar8 != puVar3; puVar8 = puVar8 + 1) {
    uVar2 = *puVar8;
    lVar5 = *(longlong *)(lVar4 + 8) + (ulonglong)uVar2 * 0x14;
    bVar1 = *(byte *)(lVar5 + 0x10);
    *(undefined1 *)(lVar5 + 0x10) = 8;
    bVar9 = bVar9 | bVar1 & 0x40;
    *(uint *)(param_4[2] + (ulonglong)(uVar2 >> 5) * 4) =
         *(uint *)(param_4[2] + (ulonglong)(uVar2 >> 5) * 4) | 1 << (uVar2 & 0x1f);
  }
  *(bool *)(param_4 + 5) = bVar9 != 0;
  lVar5 = *(longlong *)(lVar4 + 8);
  lVar4 = lVar5 + (longlong)*(int *)(lVar4 + 0x10) * 0x14;
  while( true ) {
    if (lVar5 == lVar4) {
      if ((*(uint *)(param_1 + 0x1d8) < uStackX_c) ||
         (lVar4 = *(longlong *)(param_1 + 0x1d0) + (longlong)(int)uStackX_c * 8,
         *(int *)(*(longlong *)(param_1 + 0x1d0) + 4 + (longlong)(int)uStackX_c * 8) != iVar6)) {
        lVar4 = FUN_144c441c0(param_1 + 0x1c0,
                              (longlong)iVar6 * 0x38 + *(longlong *)(param_1 + 0x1c0));
      }
      FUN_144c43ce0(param_1 + 0x1c0,lVar4);
      return;
    }
    if ((*(byte *)(lVar5 + 0x10) & 8) == 0) break;
    lVar5 = lVar5 + 0x14;
  }
  return;
}



// FUNCTION 144c43240 FUN_144c43240 body=103 status=ok
// SIG undefined FUN_144c43240(void)

void FUN_144c43240(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c432b0 FUN_144c432b0 body=205 status=ok
// SIG undefined FUN_144c432b0(void)

void FUN_144c432b0(longlong *param_1)

{
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
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x14);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c43380 FUN_144c43380 body=408 status=ok
// SIG undefined FUN_144c43380(void)

undefined8 * FUN_144c43380(undefined8 *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  lVar4 = *param_2;
  if (0 < (int)uVar2) {
    puVar5 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x14);
    *param_1 = puVar5;
    puVar7 = (undefined4 *)(lVar4 + 8);
    *(uint *)(param_1 + 1) = uVar2;
    uVar8 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = puVar7[-2];
        puVar5[1] = puVar7[-1];
        puVar5[2] = *puVar7;
        puVar5[3] = puVar7[1];
        *(undefined1 *)(puVar5 + 4) = *(undefined1 *)(puVar7 + 2);
        *(undefined1 *)((longlong)puVar5 + 0x11) = *(undefined1 *)((longlong)puVar7 + 9);
        puVar1 = (undefined2 *)((longlong)puVar7 + 10);
        puVar7 = puVar7 + 5;
        *(undefined2 *)((longlong)puVar5 + 0x12) = *puVar1;
      }
      uVar8 = uVar8 - 1;
      puVar5 = puVar5 + 5;
    } while (uVar8 != 0);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 3);
  puVar7 = (undefined4 *)param_2[2];
  if (0 < (int)uVar2) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
    param_1[2] = uVar6;
    uVar8 = (ulonglong)uVar2;
    *(uint *)(param_1 + 3) = uVar2;
    *(uint *)((longlong)param_1 + 0x1c) = uVar2;
    puVar5 = (undefined4 *)param_1[2];
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar3;
      }
      uVar8 = uVar8 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar8 != 0);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 5);
  puVar7 = (undefined4 *)param_2[4];
  if (0 < (int)uVar2) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
    param_1[4] = uVar6;
    uVar8 = (ulonglong)uVar2;
    *(uint *)(param_1 + 5) = uVar2;
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    puVar5 = (undefined4 *)param_1[4];
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar3;
      }
      uVar8 = uVar8 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar8 != 0);
  }
  return param_1;
}



// FUNCTION 144c43520 FUN_144c43520 body=14 status=ok
// SIG undefined FUN_144c43520(void)

void FUN_144c43520(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144c43527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1e0));
  return;
}



// FUNCTION 144c43530 FUN_144c43530 body=14 status=ok
// SIG undefined FUN_144c43530(void)

void FUN_144c43530(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144c43537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1e0));
  return;
}



// FUNCTION 144c43540 FUN_144c43540 body=95 status=ok
// SIG undefined FUN_144c43540(void)

void FUN_144c43540(ulonglong param_1,ulonglong param_2)

{
  if (param_1 < param_2) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x000144c43573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x1e0));
    return;
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x000144c43598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1e0));
  return;
}



// FUNCTION 144c435a0 FUN_144c435a0 body=41 status=ok
// SIG undefined FUN_144c435a0(void)

void FUN_144c435a0(longlong param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x000144c435c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x1e0));
  return;
}



// FUNCTION 144c435d0 FUN_144c435d0 body=696 status=ok
// SIG undefined FUN_144c435d0(void)

void FUN_144c435d0(longlong param_1,int *param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong local_res8;
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  longlong local_48;
  undefined4 local_40;
  uint local_3c;
  longlong local_38;
  undefined4 local_30;
  uint local_2c;
  
  iVar7 = 0;
  local_4c = 0x80000000;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0x80000000;
  FUN_144c44040(param_1 + 0x1c0,&local_res8,param_2,&local_58);
  if ((-1 < (int)local_2c) && (local_38 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_38,(ulonglong)(local_2c & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_3c) && (local_48 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_48,(ulonglong)(local_3c & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_4c) && (local_58 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_58,(ulonglong)(local_4c & 0x7fffffff) * 0x14);
  }
  lVar6 = *(longlong *)(param_1 + 0x1c0) + (longlong)(int)local_res8 * 0x38;
  iVar2 = *(int *)(lVar6 + 0x10);
  local_res8 = *(longlong *)(param_1 + 0x18) + (longlong)*param_2 * 0xc;
  if (0 < iVar2) {
    do {
      lVar8 = (longlong)iVar7;
      if ((*(byte *)(*(longlong *)(lVar6 + 8) + 0x10 + lVar8 * 0x14) & 8) != 0) {
        *param_4 = *(longlong *)(lVar6 + 8) + lVar8 * 0x14;
        iVar2 = *(int *)(param_1 + 0x60);
        lVar3 = *(longlong *)(lVar6 + 0x18);
        lVar4 = (longlong)(iVar2 * iVar7);
        param_4[1] = lVar3 + lVar4 * 4;
        param_4[2] = lVar3 + (lVar4 + iVar2) * 4;
        *(short *)(param_4 + 3) =
             *(short *)(local_res8 + 10) + *(short *)(local_res8 + 8) + (short)iVar7;
        *(undefined4 *)(*(longlong *)(lVar6 + 0x28) + lVar8 * 4) = param_3;
        return;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  iVar2 = iVar2 + 1;
  if ((int)(*(uint *)(lVar6 + 0x14) & 0x7fffffff) < iVar2) {
    FUN_144c44450(lVar6 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  iVar5 = *(int *)(lVar6 + 0x10);
  *(int *)(lVar6 + 0x10) = iVar2;
  lVar8 = *(longlong *)(lVar6 + 8) + (longlong)iVar5 * 0x14;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(lVar8 + 0x10) = 4;
  }
  *param_4 = lVar8;
  iVar2 = *(int *)(lVar6 + 0x20);
  iVar5 = *(int *)(param_1 + 0x60) + iVar2;
  if ((int)(*(uint *)(lVar6 + 0x24) & 0x7fffffff) < iVar5) {
    FUN_141807aa8(lVar6 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  *(int *)(lVar6 + 0x20) = iVar5;
  iVar5 = *(int *)(param_1 + 0x60);
  lVar8 = *(longlong *)(lVar6 + 0x18) + (longlong)iVar2 * 4;
  param_4[1] = lVar8;
  param_4[2] = lVar8 + (longlong)iVar5 * 4;
  *(short *)(param_4 + 3) = *(short *)(local_res8 + 10) + *(short *)(local_res8 + 8) + (short)iVar7;
  iVar7 = *(int *)(lVar6 + 0x30) + 1;
  if ((int)(*(uint *)(lVar6 + 0x34) & 0x7fffffff) < iVar7) {
    FUN_144c44740(lVar6 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  puVar1 = (undefined4 *)(*(longlong *)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x30) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_3;
  }
  *(int *)(lVar6 + 0x30) = iVar7;
  return;
}



// FUNCTION 144c43890 FUN_144c43890 body=1096 status=ok
// SIG undefined FUN_144c43890(void)

void FUN_144c43890(longlong param_1,int *param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res10 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_5c = 0x80000000;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  FUN_144c44040(param_1 + 0x1c0,local_res10,param_2,&local_68);
  FUN_144c432b0(&local_68);
  lVar10 = (longlong)local_res10[0] * 0x38 + *(longlong *)(param_1 + 0x1c0);
  iVar8 = *(int *)(lVar10 + 0x10);
  sVar6 = *(short *)(*(longlong *)(param_1 + 0x18) + 10 + (longlong)*param_2 * 0xc) +
          *(short *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)*param_2 * 0xc);
  if (0 < iVar8) {
    lVar4 = *(longlong *)(lVar10 + 8);
    iVar7 = 0;
    do {
      lVar11 = (longlong)iVar7;
      iVar9 = iVar7 + 1;
      lVar5 = lVar11 * 0x14;
      if ((*(byte *)(lVar5 + 0x10 + lVar4) & 8) != 0) {
        while( true ) {
          if (iVar8 <= iVar9) {
            if ((int)(*(uint *)(lVar10 + 0x14) & 0x7fffffff) < iVar8 + 1) {
              FUN_144c44450(lVar10 + 8,&PTR_vftable_14c6e47a0,(longlong)(iVar8 + 1));
            }
            lVar4 = *(longlong *)(lVar10 + 8) + (longlong)*(int *)(lVar10 + 0x10) * 0x14;
            *(int *)(lVar10 + 0x10) = iVar8 + 1;
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
              *(undefined4 *)(lVar4 + 0x10) = 4;
            }
            param_4[4] = lVar4;
            iVar9 = *(int *)(lVar10 + 0x20);
            iVar3 = *(int *)(param_1 + 0x60);
            local_res10[0] = iVar9 + iVar3;
            if ((int)(*(uint *)(lVar10 + 0x24) & 0x7fffffff) < local_res10[0]) {
              FUN_141807aa8(lVar10 + 0x18,&PTR_vftable_14c6e47a0,(longlong)local_res10[0]);
            }
            lVar4 = *(longlong *)(lVar10 + 0x18);
            *(int *)(lVar10 + 0x20) = local_res10[0];
            *(short *)(param_4 + 7) = (short)iVar8 + sVar6;
            lVar4 = lVar4 + (longlong)iVar9 * 4;
            param_4[5] = lVar4;
            param_4[6] = lVar4 + (longlong)iVar3 * 4;
            iVar8 = *(int *)(lVar10 + 0x30) + 1;
            if ((int)(*(uint *)(lVar10 + 0x34) & 0x7fffffff) < iVar8) {
              FUN_144c44740(lVar10 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar8);
            }
            puVar1 = (undefined4 *)
                     (*(longlong *)(lVar10 + 0x28) + (longlong)*(int *)(lVar10 + 0x30) * 4);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = param_3;
            }
            *(int *)(lVar10 + 0x30) = iVar8;
            *param_4 = *(longlong *)(lVar10 + 8) + lVar5;
            lVar4 = *(longlong *)(lVar10 + 0x18);
            iVar8 = *(int *)(param_1 + 0x60);
            lVar5 = (longlong)(iVar8 * iVar7);
            param_4[1] = lVar4 + lVar5 * 4;
            param_4[2] = lVar4 + (lVar5 + iVar8) * 4;
            *(short *)(param_4 + 3) = (short)iVar7 + sVar6;
            *(undefined4 *)(*(longlong *)(lVar10 + 0x28) + lVar11 * 4) = param_3;
            return;
          }
          lVar2 = (longlong)iVar9 * 0x14;
          if ((*(byte *)(lVar2 + 0x10 + lVar4) & 8) != 0) break;
          iVar9 = iVar9 + 1;
        }
        *param_4 = lVar5 + lVar4;
        lVar4 = *(longlong *)(lVar10 + 0x18);
        iVar8 = *(int *)(param_1 + 0x60);
        lVar5 = (longlong)(iVar8 * iVar7);
        param_4[1] = lVar4 + lVar5 * 4;
        param_4[2] = lVar4 + (lVar5 + iVar8) * 4;
        *(short *)(param_4 + 3) = (short)iVar7 + sVar6;
        *(undefined4 *)(*(longlong *)(lVar10 + 0x28) + lVar11 * 4) = param_3;
        param_4[4] = *(longlong *)(lVar10 + 8) + lVar2;
        iVar8 = *(int *)(param_1 + 0x60);
        lVar4 = *(longlong *)(lVar10 + 0x18);
        lVar5 = (longlong)(iVar8 * iVar9);
        param_4[5] = lVar4 + lVar5 * 4;
        param_4[6] = lVar4 + (lVar5 + iVar8) * 4;
        *(short *)(param_4 + 7) = (short)iVar9 + sVar6;
        *(undefined4 *)(*(longlong *)(lVar10 + 0x28) + (longlong)iVar9 * 4) = param_3;
        return;
      }
      iVar7 = iVar9;
    } while (iVar9 < iVar8);
  }
  iVar8 = *(int *)(lVar10 + 0x20);
  sVar6 = sVar6 + *(short *)(lVar10 + 0x10);
  iVar7 = iVar8 + *(int *)(param_1 + 0x60) * 2;
  if ((int)(*(uint *)(lVar10 + 0x24) & 0x7fffffff) < iVar7) {
    FUN_141807aa8(lVar10 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  *(int *)(lVar10 + 0x20) = iVar7;
  iVar7 = *(int *)(lVar10 + 0x10);
  lVar4 = *(longlong *)(lVar10 + 0x18) + (longlong)iVar8 * 4;
  iVar8 = iVar7 + 2;
  if ((int)(*(uint *)(lVar10 + 0x14) & 0x7fffffff) < iVar8) {
    FUN_144c44450(lVar10 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  *(int *)(lVar10 + 0x10) = iVar8;
  *param_4 = *(longlong *)(lVar10 + 8) + (longlong)iVar7 * 0x14;
  iVar8 = *(int *)(param_1 + 0x60);
  param_4[1] = lVar4;
  *(short *)(param_4 + 3) = sVar6;
  param_4[2] = lVar4 + (longlong)iVar8 * 4;
  iVar8 = *(int *)(lVar10 + 0x30) + 1;
  if ((int)(*(uint *)(lVar10 + 0x34) & 0x7fffffff) < iVar8) {
    FUN_144c44740(lVar10 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  puVar1 = (undefined4 *)(*(longlong *)(lVar10 + 0x28) + (longlong)*(int *)(lVar10 + 0x30) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_3;
  }
  *(int *)(lVar10 + 0x30) = iVar8;
  param_4[4] = *param_4 + 0x14;
  iVar8 = *(int *)(param_1 + 0x60);
  *(short *)(param_4 + 7) = sVar6 + 1;
  lVar5 = (longlong)iVar8 * 4;
  lVar4 = lVar5 + lVar4;
  param_4[5] = lVar4;
  param_4[6] = lVar4 + lVar5;
  iVar8 = *(int *)(lVar10 + 0x30) + 1;
  if ((int)(*(uint *)(lVar10 + 0x34) & 0x7fffffff) < iVar8) {
    FUN_144c44740(lVar10 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  puVar1 = (undefined4 *)(*(longlong *)(lVar10 + 0x28) + (longlong)*(int *)(lVar10 + 0x30) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_3;
  }
  *(int *)(lVar10 + 0x30) = iVar8;
  return;
}



// FUNCTION 144c43ce0 FUN_144c43ce0 body=293 status=ok
// SIG undefined FUN_144c43ce0(void)

void FUN_144c43ce0(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar2 = param_2[1];
  if (uVar2 != (int)param_1[1] - 1U) {
    lVar5 = FUN_144c441c0(param_1,*param_1 + (longlong)(int)param_1[1] * 0x38 + -0x38);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  FUN_144c432b0(*param_1 + 8 + (longlong)(int)uVar2 * 0x38);
  uVar4 = (int)param_1[1] - 1;
  *(uint *)(param_1 + 1) = uVar4;
  if (uVar4 != uVar2) {
    lVar7 = (longlong)(int)uVar4 * 0x38 + *param_1;
    lVar5 = *param_1 + (longlong)(int)uVar2 * 0x38;
    if (lVar5 != lVar7) {
      if (lVar5 != 0) {
        FUN_144c440d0(lVar5,lVar7);
      }
      FUN_144c432b0(lVar7 + 8);
    }
  }
  lVar5 = param_1[2];
  uVar8 = (ulonglong)(int)param_1[3];
  uVar6 = ((longlong)param_2 - lVar5 >> 3) + 1U & uVar8;
  puVar1 = (uint *)(lVar5 + uVar6 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  while (-1 < iVar3) {
    lVar5 = lVar5 + ((ulonglong)*puVar1 & uVar8 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar8 = (ulonglong)(int)param_1[3];
    uVar6 = ((longlong)puVar1 - lVar5 >> 3) + 1U & uVar8;
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144c43e10 FUN_144c43e10 body=87 status=ok
// SIG undefined FUN_144c43e10(void)

undefined8 FUN_144c43e10(undefined8 param_1,ulonglong param_2)

{
  FUN_144c40b50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 144c43e70 FUN_144c43e70 body=457 status=ok
// SIG undefined FUN_144c43e70(void)

undefined4 *
FUN_144c43e70(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,int param_7,uint param_8)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar8 = (longlong)param_7;
  iVar9 = *(int *)(*param_5 + lVar8 * 4);
  if (iVar9 != -1) {
    return (undefined4 *)(*param_2 + (longlong)iVar9 * 0x14);
  }
  lVar4 = param_2[1];
  iVar9 = (int)lVar4 + 1;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_144c44450(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  lVar5 = param_2[1];
  *(int *)(param_2 + 1) = iVar9;
  puVar1 = (undefined4 *)(*param_2 + (longlong)(int)lVar5 * 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar1 + 2) = 0xffffffffffffffff;
    puVar1[4] = 4;
  }
  uVar10 = (ulonglong)param_8;
  puVar7 = (undefined4 *)(param_1 + lVar8 * 0x14);
  *puVar1 = *puVar7;
  puVar1[1] = puVar7[1];
  puVar1[2] = puVar7[2];
  puVar1[3] = puVar7[3];
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar7 + 4);
  *(undefined1 *)((longlong)puVar1 + 0x11) = *(undefined1 *)((longlong)puVar7 + 0x11);
  *(undefined2 *)((longlong)puVar1 + 0x12) = *(undefined2 *)((longlong)puVar7 + 0x12);
  puVar7 = (undefined4 *)(param_3 + (longlong)(int)(param_7 * param_8) * 4);
  iVar9 = (int)param_4[1];
  if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < (int)(iVar9 + param_8)) {
    FUN_141807aa8(param_4,&PTR_vftable_14c6e47a0,(longlong)(int)(iVar9 + param_8));
  }
  puVar6 = (undefined4 *)(*param_4 + (longlong)iVar9 * 4);
  if (0 < (int)param_8) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar6 = uVar3;
      }
      uVar10 = uVar10 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar10 != 0);
  }
  *(uint *)(param_4 + 1) = iVar9 + param_8;
  *(int *)(*param_5 + lVar8 * 4) = (int)lVar4;
  iVar9 = (int)param_6[1] + 1;
  if ((int)(*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_1401f86b2(param_6,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  piVar2 = (int *)(*param_6 + (longlong)(int)param_6[1] * 4);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_7;
  }
  *(int *)(param_6 + 1) = iVar9;
  return puVar1;
}



// FUNCTION 144c44040 FUN_144c44040 body=144 status=ok
// SIG undefined FUN_144c44040(void)

int * FUN_144c44040(longlong *param_1,int *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_144c44230();
  if (*param_2 == (int)param_1[1]) {
    iVar2 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_144c44cd0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar1 = (undefined4 *)((longlong)(int)param_1[1] * 0x38 + *param_1);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
      FUN_144c43380(puVar1 + 2,param_4);
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_2;
}



// FUNCTION 144c440d0 FUN_144c440d0 body=228 status=ok
// SIG undefined FUN_144c440d0(void)

undefined4 * FUN_144c440d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  param_1[5] = 0x80000000;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  FUN_144c3fc90(puVar1,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  FUN_143821c08(param_2 + 6,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80000000;
  FUN_144c43240(param_2 + 10,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  return param_1;
}



// FUNCTION 144c441c0 FUN_144c441c0 body=104 status=ok
// SIG undefined FUN_144c441c0(void)

uint * FUN_144c441c0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  iVar1 = *param_2;
  uVar5 = iVar1 * -0x61c8864f;
  uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  while( true ) {
    if ((int)uVar5 < 0) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar2 + uVar3 * 8);
    if ((*puVar4 == uVar6) && (*(int *)((ulonglong)uVar5 * 0x38 + *param_1) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 144c44230 FUN_144c44230 body=258 status=ok
// SIG undefined FUN_144c44230(void)

uint * FUN_144c44230(longlong *param_1,uint *param_2,int *param_3)

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
LAB_144c4430a:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)((longlong)(int)puVar6[1] * 0x38 + *param_1) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_144c4430a;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144c44340 FUN_144c44340 body=262 status=ok
// SIG undefined FUN_144c44340(void)

ulonglong FUN_144c44340(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0xc,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  uVar3 = uVar4 * 0xc + 0xc;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0xc);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144c44450 FUN_144c44450 body=262 status=ok
// SIG undefined FUN_144c44450(void)

ulonglong FUN_144c44450(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x14,&local_res8);
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
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x14);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144c44560 FUN_144c44560 body=228 status=ok
// SIG undefined FUN_144c44560(void)

void FUN_144c44560(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1));
  uVar1 = uVar3 + 1;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 1;
    uVar4 = uVar1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar1 + (local_res8 - uVar3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c44650 FUN_144c44650 body=233 status=ok
// SIG undefined FUN_144c44650(void)

void FUN_144c44650(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar2 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar2) {
    uVar4 = uVar2;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 2,&local_res8);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) * 2);
  uVar1 = uVar4 * 2 + 2;
  uVar5 = uVar4;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 2;
    uVar5 = uVar4 + 1;
    if (uVar1 <= local_res8) {
      uVar5 = uVar5 + (local_res8 + uVar4 * -2 >> 1);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar2);
  }
  *param_1 = uVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return;
}



// FUNCTION 144c44740 FUN_144c44740 body=235 status=ok
// SIG undefined FUN_144c44740(void)

void FUN_144c44740(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144c44830 FUN_144c44830 body=229 status=ok
// SIG undefined FUN_144c44830(void)

void FUN_144c44830(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar3 * 2;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 2);
  uVar1 = uVar3 * 2 + 2;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 2;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -2 >> 1);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144c44920 FUN_144c44920 body=150 status=ok
// SIG undefined FUN_144c44920(void)

void FUN_144c44920(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1));
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c449c0 FUN_144c449c0 body=154 status=ok
// SIG undefined FUN_144c449c0(void)

void FUN_144c449c0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 2);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 2);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c44a60 FUN_144c44a60 body=154 status=ok
// SIG undefined FUN_144c44a60(void)

void FUN_144c44a60(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 2);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 2);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c44b00 FUN_144c44b00 body=463 status=ok
// SIG undefined FUN_144c44b00(void)

void FUN_144c44b00(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 8))(param_2);
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = (undefined4 *)*param_1;
  uVar5 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)(lVar2 + 0x24);
    puVar6 = puVar4 + 9;
    uVar7 = (ulonglong)uVar1;
    puVar8 = puVar4;
    do {
      if (puVar3 + -9 != (undefined4 *)0x0) {
        puVar3[-9] = *puVar8;
        *(undefined8 *)(puVar3 + -7) = 0;
        puVar3[-5] = 0;
        puVar3[-4] = 0x80000000;
        FUN_144c3fc90(puVar6 + -7,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar3 + -7) = *(undefined8 *)(puVar6 + -7);
        puVar3[-5] = puVar6[-5];
        puVar3[-4] = puVar6[-4];
        *(undefined8 *)(puVar6 + -7) = 0;
        *(undefined8 *)(puVar6 + -5) = 0;
        *(undefined8 *)(puVar3 + -3) = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        FUN_143821c08(puVar6 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar3 + -3) = *(undefined8 *)(puVar6 + -3);
        puVar3[-1] = puVar6[-1];
        *puVar3 = *puVar6;
        *(undefined8 *)(puVar6 + -3) = 0;
        *(undefined8 *)(puVar6 + -1) = 0;
        *(undefined8 *)(puVar3 + 1) = 0;
        puVar3[3] = 0;
        puVar3[4] = 0x80000000;
        FUN_144c43240(puVar6 + 1);
        *(undefined8 *)(puVar3 + 1) = *(undefined8 *)(puVar6 + 1);
        puVar3[3] = puVar6[3];
        puVar3[4] = puVar6[4];
        *(undefined8 *)(puVar6 + 1) = 0;
        *(undefined8 *)(puVar6 + 3) = 0;
      }
      puVar3 = puVar3 + 0xe;
      puVar8 = puVar8 + 0xe;
      puVar6 = puVar6 + 0xe;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar4 = puVar4 + 2;
    do {
      FUN_144c432b0(puVar4);
      puVar4 = puVar4 + 0xe;
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



// FUNCTION 144c44cd0 FUN_144c44cd0 body=585 status=ok
// SIG undefined FUN_144c44cd0(void)

ulonglong FUN_144c44cd0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res10;
  undefined4 *local_res18;
  ulonglong local_res20;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = param_3;
  if (param_3 < uVar10 * 2) {
    uVar7 = uVar10 * 2;
  }
  local_res10 = param_2;
  local_res20 = uVar10;
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x38,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  uVar11 = (ulonglong)uVar1;
  local_res18 = puVar6;
  if (0 < (int)uVar1) {
    puVar9 = puVar6 + 9;
    uVar10 = (ulonglong)uVar1;
    puVar5 = (undefined4 *)(lVar3 + 0x24);
    do {
      if (puVar5 + -9 != (undefined4 *)0x0) {
        puVar5[-9] = *puVar6;
        *(undefined8 *)(puVar5 + -7) = 0;
        puVar5[-5] = 0;
        puVar5[-4] = 0x80000000;
        FUN_144c3fc90(puVar9 + -7,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar5 + -7) = *(undefined8 *)(puVar9 + -7);
        puVar5[-5] = puVar9[-5];
        puVar5[-4] = puVar9[-4];
        *(undefined8 *)(puVar9 + -7) = 0;
        *(undefined8 *)(puVar9 + -5) = 0;
        *(undefined8 *)(puVar5 + -3) = 0;
        puVar5[-1] = 0;
        *puVar5 = 0x80000000;
        FUN_143821c08(puVar9 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar5 + -3) = *(undefined8 *)(puVar9 + -3);
        puVar5[-1] = puVar9[-1];
        *puVar5 = *puVar9;
        *(undefined8 *)(puVar9 + -3) = 0;
        *(undefined8 *)(puVar9 + -1) = 0;
        *(undefined8 *)(puVar5 + 1) = 0;
        puVar5[3] = 0;
        puVar5[4] = 0x80000000;
        FUN_144c43240(puVar9 + 1);
        *(undefined8 *)(puVar5 + 1) = *(undefined8 *)(puVar9 + 1);
        puVar5[3] = puVar9[3];
        puVar5[4] = puVar9[4];
        *(undefined8 *)(puVar9 + 1) = 0;
        *(undefined8 *)(puVar9 + 3) = 0;
      }
      puVar5 = puVar5 + 0xe;
      puVar6 = puVar6 + 0xe;
      puVar9 = puVar9 + 0xe;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    puVar6 = local_res18 + 2;
    do {
      FUN_144c432b0(puVar6);
      puVar6 = puVar6 + 0xe;
      uVar11 = uVar11 - 1;
      param_2 = local_res10;
      uVar10 = local_res20;
    } while (uVar11 != 0);
  }
  uVar11 = uVar7 * 0x38 + 0x38;
  uVar8 = uVar7;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x38;
    uVar8 = uVar7 + 1;
    if (uVar11 <= local_res8) {
      uVar7 = local_res8 + uVar7 * -0x38;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar7;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar11 = SUB168(ZEXT816(0x2492492492492493) * auVar2,0);
      uVar8 = uVar8 + ((uVar7 - lVar4 >> 1) + lVar4 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 * 0x38);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return uVar11;
}



// FUNCTION 144c44f20 FUN_144c44f20 body=159 status=ok
// SIG undefined FUN_144c44f20(void)

void FUN_144c44f20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c44fc0 FUN_144c44fc0 body=248 status=ok
// SIG undefined FUN_144c44fc0(void)

longlong FUN_144c44fc0(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = *param_2;
  iVar1 = *(int *)(param_1 + 0x50);
  lVar6 = (longlong)iVar1;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) <= iVar5) {
    lVar2 = *(longlong *)(param_1 + 0x140);
    iVar5 = iVar5 - *(int *)(param_1 + 0x20);
    lVar3 = (longlong)(iVar5 * iVar1);
    *param_3 = lVar2 + lVar3 * 4;
    param_3[1] = lVar2 + (lVar3 + lVar6) * 4;
    return *(longlong *)(param_1 + 0xd0) + (longlong)iVar5 * 0xc;
  }
  iVar4 = iVar5;
  if (*(int *)(param_1 + 0x98) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar5 * 4);
  }
  if (iVar4 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    *param_3 = lVar2 + (longlong)(iVar4 * iVar1) * 4;
    param_3[1] = lVar2 + (iVar4 * iVar1 + lVar6) * 4;
    return *(longlong *)(param_1 + 0xb0) + (longlong)iVar4 * 0xc;
  }
  lVar3 = *(longlong *)(param_1 + 0x48) + (longlong)(iVar5 * iVar1) * 4;
  *param_3 = lVar3;
  param_3[1] = lVar3 + lVar6 * 4;
  return lVar2 + (longlong)iVar5 * 0xc;
}



// FUNCTION 144c450c0 FUN_144c450c0 body=242 status=ok
// SIG undefined FUN_144c450c0(void)

longlong FUN_144c450c0(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = *param_2;
  iVar1 = *(int *)(param_1 + 0x60);
  lVar6 = (longlong)iVar1;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) <= iVar5) {
    lVar2 = *(longlong *)(param_1 + 0x150);
    iVar5 = iVar5 - *(int *)(param_1 + 0x30);
    lVar3 = (longlong)(iVar5 * iVar1);
    *param_3 = lVar2 + lVar3 * 4;
    param_3[1] = lVar2 + (lVar3 + lVar6) * 4;
    return *(longlong *)(param_1 + 0xe0) + (longlong)iVar5 * 0x14;
  }
  iVar4 = iVar5;
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar5 * 4);
  }
  if (iVar4 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x130);
    *param_3 = lVar2 + (longlong)(iVar4 * iVar1) * 4;
    param_3[1] = lVar2 + (iVar4 * iVar1 + lVar6) * 4;
    return *(longlong *)(param_1 + 0xc0) + (longlong)iVar4 * 0x14;
  }
  lVar3 = *(longlong *)(param_1 + 0x58) + (longlong)(iVar5 * iVar1) * 4;
  *param_3 = lVar3;
  param_3[1] = lVar3 + lVar6 * 4;
  return lVar2 + (longlong)iVar5 * 0x14;
}



// FUNCTION 144c451c0 FUN_144c451c0 body=104 status=ok
// SIG undefined FUN_144c451c0(void)

void FUN_144c451c0(longlong *param_1)

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



// FUNCTION 144c45230 FUN_144c45230 body=230 status=ok
// SIG undefined FUN_144c45230(void)

void FUN_144c45230(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  int local_28;
  
  iVar1 = (int)*(short *)(param_4 + 10) + (int)*(short *)(param_4 + 8);
  uVar2 = iVar1 + 0x1f >> 5;
  *(int *)(param_6 + 3) = iVar1;
  if ((int)(*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff) < (int)uVar2) {
    FUN_140163394(param_6,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
  }
  if ((*(int *)(param_6 + 1) < (int)uVar2) || ((int)uVar2 < *(int *)(param_6 + 1))) {
    *(uint *)(param_6 + 1) = uVar2;
  }
  local_38 = *param_6;
  local_2c = uVar2 | 0x80000000;
  local_48 = *param_5;
  uStack_44 = param_5[1];
  uStack_40 = param_5[2];
  uStack_3c = param_5[3];
  local_30 = uVar2;
  local_28 = iVar1;
  FUN_144c47370(param_1,param_2,param_3,param_4,&local_48,&local_38);
  FUN_144bf90d0(&local_38);
  return;
}



// FUNCTION 144c45320 FUN_144c45320 body=282 status=ok
// SIG undefined FUN_144c45320(void)

void FUN_144c45320(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined4 param_6,longlong param_7,undefined4 *param_8,
                  undefined8 *param_9)

{
  int iVar1;
  uint uVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  int local_38;
  
  iVar1 = (int)*(short *)(param_7 + 10) + (int)*(short *)(param_7 + 8);
  *(int *)(param_9 + 3) = iVar1;
  uVar2 = iVar1 + 0x1f >> 5;
  if ((int)(*(uint *)((longlong)param_9 + 0xc) & 0x7fffffff) < (int)uVar2) {
    FUN_140163394(param_9,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
  }
  if ((*(int *)(param_9 + 1) < (int)uVar2) || ((int)uVar2 < *(int *)(param_9 + 1))) {
    *(uint *)(param_9 + 1) = uVar2;
  }
  local_48 = *param_9;
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  local_3c = uVar2 | 0x80000000;
  local_68 = *param_8;
  uStack_64 = param_8[1];
  uStack_60 = param_8[2];
  uStack_5c = param_8[3];
  local_40 = uVar2;
  local_38 = iVar1;
  FUN_144c48300(param_1,param_2,param_3,&local_58,param_5,param_6,param_7,&local_68,&local_48);
  FUN_144bf90d0(&local_48);
  return;
}



// FUNCTION 144c45440 FUN_144c45440 body=6614 status=ok
// SIG undefined FUN_144c45440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_144c45440(uint *param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
                    longlong param_5,longlong param_6,undefined8 param_7,longlong param_8,
                    longlong *param_9)

{
  ushort *puVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint *puVar18;
  uint *puVar19;
  byte bVar20;
  undefined4 uVar21;
  float *pfVar22;
  float *pfVar23;
  longlong lVar24;
  longlong *plVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  byte bVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  undefined1 auVar41 [16];
  float fVar45;
  float fVar46;
  float fVar53;
  float fVar55;
  undefined1 auVar47 [16];
  float fVar54;
  float fVar56;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar57;
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  uint uVar63;
  uint uVar67;
  float fVar68;
  undefined1 auVar64 [16];
  uint uVar69;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar97;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 unaff_XMM13 [16];
  float fVar98;
  float fVar99;
  float fVar100;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffe10;
  uint *local_1c8;
  uint local_1c0;
  float local_1bc;
  undefined1 local_1b8;
  uint *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  uint *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  longlong local_178;
  longlong lStack_170;
  uint *local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  undefined4 local_130;
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  byte local_100;
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
  puVar18 = (uint *)*param_4;
  *param_1 = *puVar18;
  lVar24 = param_4[1];
  *(int *)(param_4 + 1) = (int)lVar24 + -1;
  *(undefined8 *)puVar18 = *(undefined8 *)(puVar18 + (longlong)(int)lVar24 * 2 + -2);
  lVar24 = param_4[1];
  iVar36 = 0;
  if ((int)lVar24 < 3) {
    iVar35 = 1;
  }
  else {
    iVar35 = (*(int *)(*param_4 + 0x14) < *(int *)(*param_4 + 0xc)) + 1;
  }
  while (iVar6 = iVar35, iVar6 < (int)lVar24) {
    lVar17 = *param_4;
    lVar30 = (longlong)iVar36;
    lVar27 = (longlong)iVar6;
    if (*(int *)(lVar17 + 4 + lVar30 * 8) <= *(int *)(lVar17 + 4 + lVar27 * 8)) break;
    uVar14 = *(undefined8 *)(lVar17 + lVar30 * 8);
    *(undefined8 *)(lVar17 + lVar30 * 8) = *(undefined8 *)(lVar17 + lVar27 * 8);
    iVar26 = iVar6 * 2;
    *(undefined8 *)(lVar17 + lVar27 * 8) = uVar14;
    iVar35 = iVar26 + 1;
    iVar36 = iVar6;
    if (iVar26 + 2 < (int)param_4[1]) {
      iVar35 = iVar35 + (uint)(*(int *)(*param_4 + 0x14 + (longlong)iVar26 * 8) <
                              *(int *)(*param_4 + 4 + (longlong)iVar35 * 8));
    }
  }
  uVar13 = *param_1;
  uVar34 = uVar13 >> 0x16;
  if (uVar34 == 0x3fd) {
    return param_1;
  }
  piVar15 = (int *)param_9[2];
  local_res20 = param_4;
  uVar14 = FUN_144c2ed50(piVar15,uVar13);
  *(undefined8 *)(piVar15 + 0x12) = uVar14;
  *(undefined8 *)(piVar15 + 0x14) = uVar14;
  piVar15[0x10] = (int)(short)((longlong)(ulonglong)(uint)((int)uVar14 - *piVar15) >> 4);
  uVar12 = uVar34;
  if (uVar34 == 0x3fe) {
    uVar12 = *(uint *)(param_9 + 0x48) >> 0x16;
  }
  plVar25 = param_9 + 0x2c;
  if (*(uint *)(param_9 + 0x2d) != uVar12) {
    lVar24 = *(longlong *)((ulonglong)uVar12 * 0x120 + *(longlong *)(*param_9 + 0x38));
    *plVar25 = *(longlong *)(lVar24 + 0x20);
    lVar17 = *(longlong *)(lVar24 + 0x68);
    param_9[0x2e] = *(longlong *)(lVar24 + 0x60);
    param_9[0x2f] = lVar17;
    lVar17 = *(longlong *)(lVar24 + 0x78);
    param_9[0x30] = *(longlong *)(lVar24 + 0x70);
    param_9[0x31] = lVar17;
    lVar17 = *(longlong *)(lVar24 + 0x88);
    param_9[0x32] = *(longlong *)(lVar24 + 0x80);
    param_9[0x33] = lVar17;
    lVar17 = *(longlong *)(lVar24 + 0x98);
    param_9[0x34] = *(longlong *)(lVar24 + 0x90);
    param_9[0x35] = lVar17;
    *(uint *)(param_9 + 0x2d) = uVar12;
    lVar17 = *(longlong *)(lVar24 + 200);
    param_9[0x36] = *(longlong *)(lVar24 + 0xc0);
    param_9[0x37] = lVar17;
  }
  if (uVar34 == 0x3fe) {
    *(undefined8 *)((longlong)param_9 + 0x44) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)param_9 + 0x4c) = 4;
    uVar44 = (undefined4)param_9[0x46];
    uVar8 = *(undefined4 *)((longlong)param_9 + 0x234);
    uVar9 = (undefined4)param_9[0x47];
    uVar10 = *(undefined4 *)((longlong)param_9 + 0x23c);
    *(uint *)(param_9 + 7) = uVar13;
    *(undefined4 *)(param_9 + 0xc) = uVar44;
    *(undefined4 *)((longlong)param_9 + 100) = uVar8;
    *(undefined4 *)(param_9 + 0xd) = uVar9;
    *(undefined4 *)((longlong)param_9 + 0x6c) = uVar10;
    *(undefined4 *)(param_9 + 0xe) = uVar44;
    *(undefined4 *)((longlong)param_9 + 0x74) = uVar8;
    *(undefined4 *)(param_9 + 0xf) = uVar9;
    *(undefined4 *)((longlong)param_9 + 0x7c) = uVar10;
    *(undefined4 *)(param_9 + 0x10) = uVar44;
    *(undefined4 *)((longlong)param_9 + 0x84) = uVar8;
    *(undefined4 *)(param_9 + 0x11) = uVar9;
    *(undefined4 *)((longlong)param_9 + 0x8c) = uVar10;
    *(undefined4 *)(param_9 + 0x1c) = 0xffffffff;
    param_9[0x1d] = 0;
    param_9[0x1e] = 0;
    param_9[0x1f] = 0;
    *(undefined4 *)(param_9 + 0x20) = uVar44;
    *(undefined4 *)((longlong)param_9 + 0x104) = uVar8;
    *(undefined4 *)(param_9 + 0x21) = uVar9;
    *(undefined4 *)((longlong)param_9 + 0x10c) = uVar10;
    uVar13 = *(uint *)(param_9 + 0x48);
  }
  else {
    local_1bc = (float)(uVar13 & 0x3fffff);
    local_178 = 0;
    lStack_170 = 0;
    piVar15 = (int *)FUN_144c450c0(*plVar25,&local_1bc,&local_178);
    iVar36 = *piVar15;
    uVar34 = piVar15[3];
    bVar20 = *(byte *)(piVar15 + 4);
    uVar12 = piVar15[2];
    uVar4 = *(undefined2 *)((longlong)piVar15 + 0x12);
    local_1c0 = piVar15[1];
    local_1b8 = *(undefined1 *)((longlong)piVar15 + 0x11);
    param_9[10] = local_178;
    param_9[0xb] = lStack_170;
    bVar33 = bVar20 & 0x40;
    if ((bVar33 == 0) && (uVar34 != 0xffffffff)) {
      uVar34 = *(int *)(*plVar25 + 0x17c) << 0x16 | uVar34 & 0x3fffff;
LAB_144c456fd:
      if (uVar12 != 0xffffffff) {
        uVar12 = *(int *)(*plVar25 + 0x17c) << 0x16 | uVar12 & 0x3fffff;
      }
    }
    else if (bVar33 == 0) goto LAB_144c456fd;
    piVar15 = (int *)((longlong)param_9 + 0x3c);
    *piVar15 = iVar36;
    *(uint *)(param_9 + 8) = local_1c0;
    *(uint *)((longlong)param_9 + 0x44) = uVar12;
    *(byte *)((longlong)param_9 + 0x4c) = bVar20;
    *(undefined2 *)((longlong)param_9 + 0x4e) = uVar4;
    *(undefined1 *)((longlong)param_9 + 0x4d) = local_1b8;
    *(uint *)(param_9 + 9) = uVar34;
    lVar24 = param_9[0x2c];
    *(uint *)(param_9 + 7) = uVar13;
    iVar36 = *piVar15;
    iVar35 = *(int *)(lVar24 + 0x40);
    if (iVar36 < iVar35) {
      pfVar22 = (float *)((longlong)iVar36 * 0x10 + *(longlong *)(lVar24 + 0x38));
    }
    else {
      pfVar22 = (float *)((longlong)(iVar36 - iVar35) * 0x10 + *(longlong *)(lVar24 + 0xf0));
    }
    iVar36 = (int)param_9[8];
    fVar40 = *pfVar22;
    fVar42 = pfVar22[1];
    fVar43 = pfVar22[2];
    if (iVar36 < iVar35) {
      pfVar22 = (float *)((longlong)iVar36 * 0x10 + *(longlong *)(lVar24 + 0x38));
    }
    else {
      pfVar22 = (float *)((longlong)(iVar36 - iVar35) * 0x10 + *(longlong *)(lVar24 + 0xf0));
    }
    fVar45 = *pfVar22;
    fVar53 = pfVar22[1];
    fVar55 = pfVar22[2];
    auVar80 = *(undefined1 (*) [16])(param_9 + 0x30);
    auVar85._0_4_ =
         fVar42 * auVar80._0_4_ + fVar40 * *(float *)(param_9 + 0x2e) +
         fVar43 * *(float *)(param_9 + 0x32) + *(float *)(param_9 + 0x34);
    auVar85._4_4_ =
         fVar42 * auVar80._4_4_ + fVar40 * *(float *)((longlong)param_9 + 0x174) +
         fVar43 * *(float *)((longlong)param_9 + 0x194) + *(float *)((longlong)param_9 + 0x1a4);
    auVar85._8_4_ =
         fVar42 * auVar80._8_4_ + fVar40 * *(float *)(param_9 + 0x2f) +
         fVar43 * *(float *)(param_9 + 0x33) + *(float *)(param_9 + 0x35);
    auVar85._12_4_ =
         fVar42 * auVar80._12_4_ + fVar40 * *(float *)((longlong)param_9 + 0x17c) +
         fVar43 * *(float *)((longlong)param_9 + 0x19c) + *(float *)((longlong)param_9 + 0x1ac);
    auVar59._0_4_ =
         fVar53 * auVar80._0_4_ + fVar45 * *(float *)(param_9 + 0x2e) +
         fVar55 * *(float *)(param_9 + 0x32) + *(float *)(param_9 + 0x34);
    auVar59._4_4_ =
         fVar53 * auVar80._4_4_ + fVar45 * *(float *)((longlong)param_9 + 0x174) +
         fVar55 * *(float *)((longlong)param_9 + 0x194) + *(float *)((longlong)param_9 + 0x1a4);
    auVar59._8_4_ =
         fVar53 * auVar80._8_4_ + fVar45 * *(float *)(param_9 + 0x2f) +
         fVar55 * *(float *)(param_9 + 0x33) + *(float *)(param_9 + 0x35);
    auVar59._12_4_ =
         fVar53 * auVar80._12_4_ + fVar45 * *(float *)((longlong)param_9 + 0x17c) +
         fVar55 * *(float *)((longlong)param_9 + 0x19c) + *(float *)((longlong)param_9 + 0x1ac);
    fVar40 = (auVar59._0_4_ - auVar85._0_4_) * _DAT_14c6dad90;
    fVar42 = (auVar59._4_4_ - auVar85._4_4_) * fRam000000014c6dad94;
    fVar43 = (auVar59._8_4_ - auVar85._8_4_) * fRam000000014c6dad98;
    fVar45 = (auVar59._12_4_ - auVar85._12_4_) * fRam000000014c6dad9c;
    *(undefined1 (*) [16])(param_9 + 0xc) = auVar85;
    *(undefined1 (*) [16])(param_9 + 0xe) = auVar59;
    *(float *)(param_9 + 0x10) = fVar40 + auVar85._0_4_;
    *(float *)((longlong)param_9 + 0x84) = fVar42 + auVar85._4_4_;
    *(float *)(param_9 + 0x11) = fVar43 + auVar85._8_4_;
    *(float *)((longlong)param_9 + 0x8c) = fVar45 + auVar85._12_4_;
    *(uint *)(param_9 + 0x1c) = uVar13;
    param_9[0x1d] = (longlong)piVar15;
    param_9[0x1e] = local_178;
    param_9[0x1f] = lStack_170;
    param_9[0x20] = param_9[0x10];
    param_9[0x21] = param_9[0x11];
    sVar3 = *(short *)(((longlong *)param_9[2])[10] + 0xc);
    if (sVar3 == -1) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      puVar16 = (undefined4 *)((longlong)sVar3 * 0x10 + *(longlong *)param_9[2]);
    }
    if ((*(byte *)((longlong)puVar16 + 0xe) & 4) == 0) {
      uVar13 = puVar16[2] & 0x3fffff;
      uVar34 = (uint)puVar16[2] >> 0x16;
      uVar31 = (ulonglong)uVar13;
      if (uVar34 == 0x3fd) {
        uVar34 = *(uint *)(param_9[0x4a] + (ulonglong)uVar13 * 4) >> 0x16;
      }
      if (*(uint *)(param_9 + 0x39) == uVar34) {
        fVar40 = *(float *)(param_9 + 0x3a);
        fVar42 = *(float *)((longlong)param_9 + 0x1d4);
        fVar43 = *(float *)(param_9 + 0x3b);
        fVar45 = *(float *)((longlong)param_9 + 0x1dc);
      }
      else {
        lVar24 = *(longlong *)((ulonglong)uVar34 * 0x120 + *(longlong *)(*param_9 + 0x38));
        param_9[0x38] = *(longlong *)(lVar24 + 0x20);
        fVar40 = *(float *)(lVar24 + 0x60);
        fVar42 = *(float *)(lVar24 + 100);
        fVar43 = *(float *)(lVar24 + 0x68);
        fVar45 = *(float *)(lVar24 + 0x6c);
        *(float *)(param_9 + 0x3a) = fVar40;
        *(float *)((longlong)param_9 + 0x1d4) = fVar42;
        *(float *)(param_9 + 0x3b) = fVar43;
        *(float *)((longlong)param_9 + 0x1dc) = fVar45;
        lVar17 = *(longlong *)(lVar24 + 0x78);
        param_9[0x3c] = *(longlong *)(lVar24 + 0x70);
        param_9[0x3d] = lVar17;
        lVar17 = *(longlong *)(lVar24 + 0x88);
        param_9[0x3e] = *(longlong *)(lVar24 + 0x80);
        param_9[0x3f] = lVar17;
        lVar17 = *(longlong *)(lVar24 + 0x98);
        param_9[0x40] = *(longlong *)(lVar24 + 0x90);
        param_9[0x41] = lVar17;
        *(uint *)(param_9 + 0x39) = uVar34;
      }
      lVar24 = param_9[0x38];
      if ((int)uVar13 < *(int *)(lVar24 + 0x30)) {
        if (*(int *)(lVar24 + 0x78) != 0) {
          uVar13 = *(uint *)(*(longlong *)(lVar24 + 0x70) + uVar31 * 4);
        }
        if (uVar13 == 0xffffffff) {
          lVar17 = *(longlong *)(lVar24 + 0x28);
          lVar27 = uVar31 * 5;
        }
        else {
          lVar27 = (longlong)(int)uVar13 * 5;
          lVar17 = *(longlong *)(lVar24 + 0xc0);
        }
      }
      else {
        lVar27 = (longlong)(int)(uVar13 - *(int *)(lVar24 + 0x30)) * 5;
        lVar17 = *(longlong *)(lVar24 + 0xe0);
      }
      iVar36 = *(int *)(lVar24 + 0x40);
      iVar35 = *(int *)(lVar17 + lVar27 * 4);
      if (iVar35 < iVar36) {
        pfVar22 = (float *)((longlong)iVar35 * 0x10 + *(longlong *)(lVar24 + 0x38));
      }
      else {
        pfVar22 = (float *)((longlong)(iVar35 - iVar36) * 0x10 + *(longlong *)(lVar24 + 0xf0));
      }
      iVar35 = *(int *)(lVar17 + lVar27 * 4 + 4);
      if (iVar35 < iVar36) {
        pfVar23 = (float *)((longlong)iVar35 * 0x10 + *(longlong *)(lVar24 + 0x38));
      }
      else {
        pfVar23 = (float *)((longlong)(iVar35 - iVar36) * 0x10 + *(longlong *)(lVar24 + 0xf0));
      }
      fVar53 = *pfVar22 + (*pfVar23 - *pfVar22) * _DAT_14c6dad90;
      fVar55 = pfVar22[1] + (pfVar23[1] - pfVar22[1]) * fRam000000014c6dad94;
      fVar91 = pfVar22[2] + (pfVar23[2] - pfVar22[2]) * fRam000000014c6dad98;
      *(float *)(param_9 + 0x42) =
           fVar55 * *(float *)(param_9 + 0x3c) + fVar53 * fVar40 +
           fVar91 * *(float *)(param_9 + 0x3e) + *(float *)(param_9 + 0x40);
      *(float *)((longlong)param_9 + 0x214) =
           fVar55 * *(float *)((longlong)param_9 + 0x1e4) + fVar53 * fVar42 +
           fVar91 * *(float *)((longlong)param_9 + 500) + *(float *)((longlong)param_9 + 0x204);
      *(float *)(param_9 + 0x43) =
           fVar55 * *(float *)(param_9 + 0x3d) + fVar53 * fVar43 +
           fVar91 * *(float *)(param_9 + 0x3f) + *(float *)(param_9 + 0x41);
      *(float *)((longlong)param_9 + 0x21c) =
           fVar55 * *(float *)((longlong)param_9 + 0x1ec) + fVar53 * fVar45 +
           fVar91 * *(float *)((longlong)param_9 + 0x1fc) + *(float *)((longlong)param_9 + 0x20c);
      uVar44 = *puVar16;
    }
    else {
      uVar44 = 0;
      param_9[0x42] = param_9[0x46];
      param_9[0x43] = param_9[0x47];
    }
    uVar13 = *(uint *)(param_9 + 9);
    *(undefined4 *)(param_9 + 0x44) = uVar44;
    *(undefined4 *)((longlong)param_9 + 0x224) = uVar44;
    *(undefined4 *)(param_9 + 0x45) = uVar44;
    *(undefined4 *)((longlong)param_9 + 0x22c) = uVar44;
  }
  iVar36 = 0;
  uVar34 = uVar13 >> 0x16;
  if (*(uint *)(param_9 + 0x39) != uVar34) {
    lVar24 = *(longlong *)((ulonglong)uVar34 * 0x120 + *(longlong *)(*param_9 + 0x38));
    param_9[0x38] = *(longlong *)(lVar24 + 0x20);
    lVar17 = *(longlong *)(lVar24 + 0x68);
    param_9[0x3a] = *(longlong *)(lVar24 + 0x60);
    param_9[0x3b] = lVar17;
    lVar17 = *(longlong *)(lVar24 + 0x78);
    param_9[0x3c] = *(longlong *)(lVar24 + 0x70);
    param_9[0x3d] = lVar17;
    lVar17 = *(longlong *)(lVar24 + 0x88);
    param_9[0x3e] = *(longlong *)(lVar24 + 0x80);
    param_9[0x3f] = lVar17;
    uVar44 = *(undefined4 *)(lVar24 + 0x94);
    uVar8 = *(undefined4 *)(lVar24 + 0x98);
    uVar9 = *(undefined4 *)(lVar24 + 0x9c);
    *(undefined4 *)(param_9 + 0x40) = *(undefined4 *)(lVar24 + 0x90);
    *(undefined4 *)((longlong)param_9 + 0x204) = uVar44;
    *(undefined4 *)(param_9 + 0x41) = uVar8;
    *(undefined4 *)((longlong)param_9 + 0x20c) = uVar9;
    *(uint *)(param_9 + 0x39) = uVar34;
  }
  local_1bc = (float)(uVar13 & 0x3fffff);
  local_178 = 0;
  lStack_170 = 0;
  puVar16 = (undefined4 *)FUN_144c44fc0(param_9[0x38],&local_1bc,&local_178);
  *(uint *)(param_9 + 3) = uVar13;
  *(undefined4 *)((longlong)param_9 + 0x1c) = *puVar16;
  *(undefined4 *)(param_9 + 4) = puVar16[1];
  *(undefined2 *)((longlong)param_9 + 0x24) = *(undefined2 *)(puVar16 + 2);
  *(undefined2 *)((longlong)param_9 + 0x26) = *(undefined2 *)((longlong)puVar16 + 10);
  param_9[5] = local_178;
  param_9[6] = lStack_170;
  *(int *)(param_9 + 0x28) = (int)param_9[3];
  param_9[0x29] = (longlong)param_9 + 0x1c;
  param_9[0x2a] = local_178;
  param_9[0x2b] = lStack_170;
  if ((*(byte *)((longlong)param_9 + 0x4c) & 0x10) != 0) {
    lVar24 = param_9[0x38];
    uVar13 = *(uint *)((longlong)param_9 + 0x44) & 0x3fffff;
    uVar31 = (ulonglong)uVar13;
    if ((int)uVar13 < *(int *)(lVar24 + 0x30)) {
      if (*(int *)(lVar24 + 0x78) != 0) {
        uVar13 = *(uint *)(*(longlong *)(lVar24 + 0x70) + uVar31 * 4);
      }
      if (uVar13 == 0xffffffff) {
        piVar15 = (int *)(*(longlong *)(lVar24 + 0x28) + uVar31 * 0x14);
      }
      else {
        piVar15 = (int *)(*(longlong *)(lVar24 + 0xc0) + (longlong)(int)uVar13 * 0x14);
      }
    }
    else {
      piVar15 = (int *)(*(longlong *)(lVar24 + 0xe0) +
                       (longlong)(int)(uVar13 - *(int *)(lVar24 + 0x30)) * 0x14);
    }
    iVar35 = *piVar15;
    iVar6 = *(int *)(lVar24 + 0x40);
    if (iVar35 < iVar6) {
      pfVar22 = (float *)((longlong)iVar35 * 0x10 + *(longlong *)(lVar24 + 0x38));
    }
    else {
      pfVar22 = (float *)((longlong)(iVar35 - iVar6) * 0x10 + *(longlong *)(lVar24 + 0xf0));
    }
    iVar35 = piVar15[1];
    if (iVar35 < iVar6) {
      pfVar23 = (float *)((longlong)iVar35 * 0x10 + *(longlong *)(lVar24 + 0x38));
    }
    else {
      pfVar23 = (float *)((longlong)(iVar35 - iVar6) * 0x10 + *(longlong *)(lVar24 + 0xf0));
    }
    fVar45 = *pfVar22 + (*pfVar23 - *pfVar22) * _DAT_14c6dad90;
    fVar53 = pfVar22[1] + (pfVar23[1] - pfVar22[1]) * fRam000000014c6dad94;
    fVar55 = pfVar22[2] + (pfVar23[2] - pfVar22[2]) * fRam000000014c6dad98;
    fVar40 = fVar53 * *(float *)(param_9 + 0x3c) + fVar45 * *(float *)(param_9 + 0x3a) +
             fVar55 * *(float *)(param_9 + 0x3e) + *(float *)(param_9 + 0x40);
    fVar42 = fVar53 * *(float *)((longlong)param_9 + 0x1e4) +
             fVar45 * *(float *)((longlong)param_9 + 0x1d4) +
             fVar55 * *(float *)((longlong)param_9 + 500) + *(float *)((longlong)param_9 + 0x204);
    fVar43 = fVar53 * *(float *)(param_9 + 0x3d) + fVar45 * *(float *)(param_9 + 0x3b) +
             fVar55 * *(float *)(param_9 + 0x3f) + *(float *)(param_9 + 0x41);
    fVar45 = fVar53 * *(float *)((longlong)param_9 + 0x1ec) +
             fVar45 * *(float *)((longlong)param_9 + 0x1dc) +
             fVar55 * *(float *)((longlong)param_9 + 0x1fc) + *(float *)((longlong)param_9 + 0x20c);
    *(float *)(param_9 + 0x10) = fVar40;
    *(float *)((longlong)param_9 + 0x84) = fVar42;
    *(float *)(param_9 + 0x11) = fVar43;
    *(float *)((longlong)param_9 + 0x8c) = fVar45;
    *(float *)(param_9 + 0x20) = fVar40;
    *(float *)((longlong)param_9 + 0x104) = fVar42;
    *(float *)(param_9 + 0x21) = fVar43;
    *(float *)((longlong)param_9 + 0x10c) = fVar45;
  }
  iVar35 = 0;
  fVar40 = **(float **)(param_8 + 0x48);
  uVar13 = (int)*(short *)((longlong)param_2 + 0x26) + (int)*(short *)((longlong)param_2 + 0x24) +
           *(int *)((longlong)param_2 + 0x244);
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_1bc = fVar40;
  if (*(char *)(lVar24 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar14 = 0x114;
  lVar17 = *(longlong *)(lVar24 + 0xf0);
  if (lVar17 == 0) {
    if (*(char *)(lVar24 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar17 = FUN_144b3f4a0();
    uVar14 = 0;
    *(longlong *)(lVar24 + 0xf0) = lVar17;
  }
  local_178 = *(longlong *)(*(longlong *)(lVar17 + 0x3d0) + 0x10);
  if (*(longlong *)(local_178 + 8) != 0) {
    local_178 = 0;
  }
  local_1c8 = (uint *)((longlong)(int)uVar13 * 4);
  local_168 = local_1c8;
  if (local_178 == 0) {
    local_1b0 = (uint *)(*DAT_14c787670)(CONCAT71((int7)((ulonglong)uVar14 >> 8),1),&local_1c8);
  }
  else {
    local_198 = (uint *)((longlong)local_1c8 + 0x3fU & 0xffffffffffffffc0);
    if (local_198 <= *(uint **)(local_178 + 0x28)) {
      local_1b0 = *(uint **)(local_178 + 0x38);
      if ((ulonglong)((longlong)local_198 + (longlong)local_1b0) <= *(ulonglong *)(local_178 + 0x40)
         ) {
        *(longlong *)(local_178 + 0x38) = (longlong)local_198 + (longlong)local_1b0;
        goto LAB_144c45d0f;
      }
    }
    local_1b0 = (uint *)FUN_144b454a0(local_178,&local_198);
  }
LAB_144c45d0f:
  fStack_13c = (float)(uVar13 | 0x80000000);
  uVar13 = *param_1;
  uVar34 = uVar13 >> 0x16;
  if (uVar34 != 0x3fd) {
    fStack_13c = -2.8026e-45;
    local_148 = local_138;
    fStack_140 = 2.8026e-45;
    local_130 = 0x40;
    FUN_144bfb550(local_138,0,2);
    local_1a8 = param_2[5];
    uStack_1a0 = param_2[6];
    if (uVar34 == 0x3fe) {
      FUN_144c45230(param_2[1],param_2 + 0x46,*(undefined4 *)(param_2 + 3),(longlong)param_2 + 0x1c,
                    &local_1a8,&local_148);
    }
    else {
      local_198 = (uint *)param_2[10];
      uStack_190 = *(undefined4 *)(param_2 + 0xb);
      uStack_18c = *(undefined4 *)((longlong)param_2 + 0x5c);
      FUN_144c45320(param_2[1],*(undefined4 *)(param_2 + 7),(longlong)param_2 + 0x3c,&local_198,
                    param_2 + 0x10,CONCAT44(uVar21,*(undefined4 *)(param_2 + 3)),
                    (longlong)param_2 + 0x1c,&local_1a8,&local_148);
    }
    puVar18 = local_1b0;
    iVar28 = (int)*(short *)((longlong)param_2 + 0x24);
    uVar31 = 0;
    local_1c0 = (uint)*(short *)((longlong)param_2 + 0x26);
    iVar36 = *(int *)((longlong)param_2 + 0x244);
    iVar6 = *(int *)(param_2 + 0x39);
    iVar26 = *(int *)((longlong)param_2 + 0x1c);
    if (0 < *(short *)((longlong)param_2 + 0x24)) {
      do {
        if ((*(uint *)(local_148 + (uVar31 >> 5) * 4) >> ((byte)uVar31 & 0x1f) & 1) != 0) {
          lVar24 = (longlong)iVar35;
          iVar35 = iVar35 + 1;
          if (local_1b0 + lVar24 != (uint *)0x0) {
            local_1b0[lVar24] = (int)uVar31 + iVar26 | iVar6 << 0x16;
          }
        }
        uVar34 = (int)uVar31 + 1;
        uVar31 = (ulonglong)uVar34;
      } while ((int)uVar34 < iVar28);
    }
    uVar31 = (ulonglong)local_1c0;
    if (0 < (int)local_1c0) {
      iVar26 = *(int *)(param_2 + 4) - iVar28;
      do {
        if ((*(uint *)(local_148 + (longlong)(iVar28 >> 5) * 4) >> ((byte)iVar28 & 0x1f) & 1) != 0)
        {
          lVar24 = (longlong)iVar35;
          iVar35 = iVar35 + 1;
          if (local_1b0 + lVar24 != (uint *)0x0) {
            local_1b0[lVar24] = iVar26 + iVar28 | iVar6 << 0x16;
          }
        }
        iVar28 = iVar28 + 1;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
    lVar24 = (longlong)iVar36;
    uVar31 = 0;
    puVar19 = (uint *)param_2[0x4a];
    uVar34 = *(uint *)(param_2 + 3);
    local_1c8 = (uint *)0x0;
    local_188._0_8_ = lVar24;
    iVar36 = iVar35;
    local_198 = puVar19;
    if (0 < lVar24) {
      do {
        if (puVar19[(longlong)local_1c8] == uVar34) {
          local_1a8 = param_2[5];
          uStack_1a0 = param_2[6];
          lVar24 = uVar31 * 0x10 + param_2[0x49];
          if (uVar13 >> 0x16 == 0x3fe) {
            cVar11 = FUN_144c471c0(param_2[1],param_2 + 0x46,*(undefined4 *)(param_2 + 3),
                                   (longlong)param_2 + 0x1c,&local_1a8,lVar24);
          }
          else {
            local_158 = *(float *)(param_2 + 10);
            fStack_154 = *(float *)((longlong)param_2 + 0x54);
            fStack_150 = *(float *)(param_2 + 0xb);
            fStack_14c = *(float *)((longlong)param_2 + 0x5c);
            cVar11 = FUN_144c47df0(param_2[1],*(undefined4 *)(param_2 + 7),(longlong)param_2 + 0x3c,
                                   &local_158,param_2 + 0x10,*(undefined4 *)(param_2 + 3),
                                   (longlong)param_2 + 0x1c,&local_1a8,lVar24);
          }
          if (cVar11 != '\0') {
            lVar24 = (longlong)iVar36;
            iVar36 = iVar36 + 1;
            if (puVar18 + lVar24 != (uint *)0x0) {
              puVar18[lVar24] = (uint)uVar31 | 0xff400000;
            }
          }
          lVar24 = local_188._0_8_;
          puVar19 = local_198;
        }
        local_1c8 = (uint *)((longlong)local_1c8 + 1);
        uVar31 = (ulonglong)((uint)uVar31 + 1);
        param_4 = local_res20;
      } while ((longlong)local_1c8 < lVar24);
    }
    FUN_144c451c0(&local_148);
  }
  puVar18 = local_1b0 + iVar36;
  local_198 = local_1b0;
  local_1c8 = puVar18;
  if (local_1b0 < puVar18) {
    do {
      uVar13 = *local_198;
      if (*(int *)(param_5 + 0x18) <= *(int *)(param_5 + 0x1c)) break;
      if ((uVar13 & 0xffc00000) == 0xff400000) {
        *(undefined8 *)((longlong)param_9 + 0x9c) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)param_9 + 0xa4) = 4;
        *(uint *)(param_9 + 0x12) = uVar13;
        plVar25 = (longlong *)((ulonglong)(uVar13 & 0x3fffff) * 0x10 + param_9[0x49]);
        lVar24 = *plVar25;
        lVar17 = plVar25[1];
        param_9[0x16] = lVar24;
        param_9[0x17] = lVar17;
        param_9[0x18] = lVar24;
        param_9[0x19] = lVar17;
        param_9[0x1a] = lVar24;
        param_9[0x1b] = lVar17;
        *(undefined4 *)(param_9 + 0x22) = 0xffffffff;
        param_9[0x23] = 0;
        param_9[0x24] = 0;
        param_9[0x25] = 0;
        param_9[0x26] = lVar24;
        param_9[0x27] = lVar17;
LAB_144c46303:
        uVar31 = 0;
        if ((*(uint *)(param_3 + 0x44) != uVar13) && (*param_1 != uVar13)) {
          uVar34 = *(uint *)(param_3 + 0x298);
          if ((uVar34 & 3) != 0) {
            fVar45 = *(float *)(param_3 + 0x230);
            fVar53 = *(float *)(param_3 + 0x234);
            fVar55 = *(float *)(param_3 + 0x238);
            auVar80 = *(undefined1 (*) [16])(param_3 + 0x60);
            fVar42 = auVar80._4_4_;
            fVar43 = auVar80._12_4_;
            fVar91 = *(float *)(param_3 + 0x70);
            fVar92 = *(float *)(param_3 + 0x74);
            fVar93 = *(float *)(param_3 + 0x78);
            fVar94 = *(float *)(param_3 + 0x7c);
            if ((uVar34 >> 4 & 1) != 0) {
              fVar97 = *(float *)(param_3 + 0x1b0);
              fVar57 = *(float *)(param_3 + 0x1b4);
              fVar62 = *(float *)(param_3 + 0x1b8);
              fVar46 = fVar45 * fVar97;
              fVar54 = fVar53 * fVar57;
              fVar56 = fVar55 * fVar62;
              fVar45 = fVar45 - (fVar56 + fVar54 + fVar46) * fVar97;
              fVar53 = fVar53 - (fVar56 + fVar54 + fVar46) * fVar57;
              fVar55 = fVar55 - (fVar56 + fVar54 + fVar46) * fVar62;
              fVar68 = auVar80._8_4_;
              fVar46 = auVar80._0_4_ * fVar97;
              fVar54 = fVar42 * fVar57;
              fVar56 = fVar68 * fVar62;
              auVar80._0_4_ = auVar80._0_4_ - (fVar56 + fVar54 + fVar46) * fVar97;
              auVar80._4_4_ = fVar42 - (fVar56 + fVar54 + fVar46) * fVar57;
              auVar80._8_4_ = fVar68 - (fVar56 + fVar54 + fVar46) * fVar62;
              auVar80._12_4_ = fVar43 - (fVar56 + fVar54 + fVar46) * *(float *)(param_3 + 0x1bc);
              fVar42 = fVar91 * fVar97;
              fVar43 = fVar92 * fVar57;
              fVar46 = fVar93 * fVar62;
              fVar91 = fVar91 - (fVar46 + fVar43 + fVar42) * fVar97;
              fVar92 = fVar92 - (fVar46 + fVar43 + fVar42) * fVar57;
              fVar93 = fVar93 - (fVar46 + fVar43 + fVar42) * fVar62;
              fVar94 = fVar94 - (fVar46 + fVar43 + fVar42) * *(float *)(param_3 + 0x1bc);
            }
            fVar42 = auVar80._0_4_;
            fVar43 = auVar80._4_4_;
            fVar97 = auVar80._8_4_;
            puVar18 = local_1c8;
            if ((uVar34 & 1) != 0) {
              fVar70 = fVar42 - fVar91;
              fVar71 = fVar43 - fVar92;
              fVar73 = fVar97 - fVar93;
              fVar57 = fVar70 * (fVar42 - fVar45);
              fVar62 = fVar71 * (fVar43 - fVar53);
              fVar46 = fVar73 * (fVar97 - fVar55);
              fVar54 = fVar70 * fVar70;
              fVar56 = fVar71 * fVar71;
              fVar68 = fVar73 * fVar73;
              auVar64._0_4_ = fVar68 + fVar56 + fVar54;
              auVar64._4_4_ = fVar68 + fVar56 + fVar54;
              auVar64._8_4_ = fVar68 + fVar56 + fVar54;
              auVar64._12_4_ = fVar68 + fVar56 + fVar54;
              auVar58._0_4_ = fVar46 + fVar62 + fVar57;
              auVar58._4_4_ = fVar46 + fVar62 + fVar57;
              auVar58._8_4_ = fVar46 + fVar62 + fVar57;
              auVar58._12_4_ = fVar46 + fVar62 + fVar57;
              auVar59 = divps(auVar58,auVar64);
              auVar59 = minps(auVar59,_DAT_1499314a0);
              auVar59 = maxps(auVar59,ZEXT816(0));
              fVar57 = (fVar42 - fVar45) - auVar59._0_4_ * fVar70;
              fVar62 = (fVar43 - fVar53) - auVar59._4_4_ * fVar71;
              fVar46 = (fVar97 - fVar55) - auVar59._8_4_ * fVar73;
              if (*(float *)(param_3 + 0x270) * *(float *)(param_3 + 0x270) <
                  fVar46 * fVar46 + fVar62 * fVar62 + fVar57 * fVar57) goto LAB_144c46d02;
            }
            if ((uVar34 & 2) != 0) {
              fVar91 = fVar91 - fVar42;
              fVar92 = fVar92 - fVar43;
              fVar93 = fVar93 - fVar97;
              fVar94 = fVar94 - auVar80._12_4_;
              uVar12 = 0;
              if (0 < *(int *)(param_3 + 0x244)) {
                fVar42 = fVar42 - fVar45;
                fVar43 = fVar43 - fVar53;
                fVar97 = fVar97 - fVar55;
                pfVar22 = *(float **)(param_3 + 0x248);
                local_158 = fVar91 * fVar91;
                fStack_154 = fVar92 * fVar92;
                fStack_150 = fVar93 * fVar93;
                fStack_14c = fVar94 * fVar94;
                unaff_XMM13._4_4_ = fVar93;
                unaff_XMM13._0_4_ = fVar92;
                unaff_XMM13._8_4_ = fVar91;
                unaff_XMM13._12_4_ = fVar94;
                uVar29 = uVar31;
                do {
                  uVar12 = (uint)uVar29;
                  fVar40 = *pfVar22;
                  fVar94 = pfVar22[1];
                  fVar57 = pfVar22[2];
                  if ((uVar34 >> 4 & 1) != 0) {
                    fVar62 = *(float *)(param_3 + 0x1b0) * fVar40;
                    fVar46 = *(float *)(param_3 + 0x1b4) * fVar94;
                    fVar54 = *(float *)(param_3 + 0x1b8) * fVar57;
                    fVar40 = fVar40 - (fVar54 + fVar46 + fVar62) * *(float *)(param_3 + 0x1b0);
                    fVar94 = fVar94 - (fVar54 + fVar46 + fVar62) * *(float *)(param_3 + 0x1b4);
                    fVar57 = fVar57 - (fVar54 + fVar46 + fVar62) * *(float *)(param_3 + 0x1b8);
                  }
                  fVar40 = fVar40 - fVar45;
                  fVar94 = fVar94 - fVar53;
                  fVar57 = fVar57 - fVar55;
                  fVar62 = fVar94 * fVar91 - fVar40 * fVar92;
                  fVar46 = fVar57 * fVar92 - fVar94 * fVar93;
                  fVar54 = fVar40 * fVar93 - fVar57 * fVar91;
                  fVar56 = fVar46 * fVar46;
                  fVar68 = fVar54 * fVar54;
                  fVar70 = fVar62 * fVar62;
                  auVar87._0_4_ = fVar70 + fVar68 + fVar56;
                  auVar87._4_4_ = fVar70 + fVar68 + fVar56;
                  auVar87._8_4_ = fVar70 + fVar68 + fVar56;
                  auVar87._12_4_ = fVar70 + fVar68 + fVar56;
                  if (auVar87._0_4_ == 0.0) {
                    auVar80 = ZEXT816(0);
                  }
                  else {
                    auVar80 = divps(_DAT_14c6daca0,auVar87);
                  }
                  fVar56 = fVar40 * fVar91;
                  fVar68 = fVar94 * fVar92;
                  fVar74 = fVar57 * fVar93;
                  fVar70 = (fVar54 * fVar93 - fVar62 * fVar92) * fVar42;
                  fVar62 = (fVar62 * fVar91 - fVar46 * fVar93) * fVar43;
                  fVar46 = (fVar46 * fVar92 - fVar54 * fVar91) * fVar97;
                  auVar79._0_4_ = (fVar46 + fVar62 + fVar70) * auVar80._0_4_;
                  auVar79._4_4_ = (fVar46 + fVar62 + fVar70) * auVar80._4_4_;
                  auVar79._8_4_ = (fVar46 + fVar62 + fVar70) * auVar80._8_4_;
                  auVar79._12_4_ = (fVar46 + fVar62 + fVar70) * auVar80._12_4_;
                  fVar73 = fVar74 + fVar68 + fVar56;
                  fVar72 = fVar74 + fVar68 + fVar56;
                  fVar75 = fVar74 + fVar68 + fVar56;
                  fVar74 = fVar74 + fVar68 + fVar56;
                  auVar80 = minps(auVar79,_DAT_1499314a0);
                  auVar59 = maxps(auVar80,ZEXT816(0));
                  auVar48._0_4_ = fVar94 * fVar94 + fVar40 * fVar40 + fVar57 * fVar57;
                  auVar48._4_4_ = fVar94 * fVar43 + fVar40 * fVar42 + fVar57 * fVar97;
                  auVar48._8_4_ = fStack_154 + local_158 + fStack_150;
                  auVar48._12_4_ = fVar43 * fVar92 + fVar42 * fVar91 + fVar97 * fVar93;
                  auVar80 = divps(_DAT_14c6daca0,auVar48);
                  fVar62 = (float)(~-(uint)(auVar48._0_4_ == 0.0) & auVar80._0_4_);
                  fVar46 = (float)(~-(uint)(auVar48._8_4_ == 0.0) & auVar80._8_4_);
                  fVar68 = (fVar73 * auVar59._0_4_ - auVar48._12_4_) * fVar46;
                  fVar70 = (fVar72 * auVar59._4_4_ - auVar48._12_4_) * fVar46;
                  auVar60._4_4_ = fVar70;
                  auVar60._0_4_ = fVar68;
                  fVar71 = (fVar75 * auVar59._8_4_ - auVar48._12_4_) * fVar46;
                  auVar60._8_4_ = fVar71;
                  auVar60._12_4_ = (fVar74 * auVar59._12_4_ - auVar48._12_4_) * fVar46;
                  auVar80 = minps(auVar60,_DAT_1499314a0);
                  auVar80 = maxps(auVar80,ZEXT816(0));
                  fVar46 = auVar80._0_4_;
                  fVar54 = auVar80._4_4_;
                  fVar56 = auVar80._8_4_;
                  uVar63 = -(uint)(fVar68 == fVar46 && auVar87._0_4_ != 0.0);
                  uVar67 = -(uint)(fVar70 == fVar54 && auVar87._4_4_ != 0.0);
                  uVar69 = -(uint)(fVar71 == fVar56 && auVar87._8_4_ != 0.0);
                  auVar49._0_4_ = (auVar48._4_4_ + fVar46 * fVar73) * fVar62;
                  auVar49._4_4_ = (auVar48._4_4_ + fVar54 * fVar72) * fVar62;
                  auVar49._8_4_ = (auVar48._4_4_ + fVar56 * fVar75) * fVar62;
                  auVar49._12_4_ = (auVar48._4_4_ + auVar80._12_4_ * fVar74) * fVar62;
                  auVar80 = minps(auVar49,_DAT_1499314a0);
                  auVar80 = maxps(auVar80,ZEXT816(0));
                  fVar62 = (fVar42 - (float)(uVar63 & (uint)auVar59._0_4_ | ~uVar63 & auVar80._0_4_)
                                     * fVar40) + fVar46 * fVar91;
                  fVar94 = (fVar43 - (float)(uVar67 & (uint)auVar59._4_4_ | ~uVar67 & auVar80._4_4_)
                                     * fVar94) + fVar54 * fVar92;
                  fVar57 = (fVar97 - (float)(uVar69 & (uint)auVar59._8_4_ | ~uVar69 & auVar80._8_4_)
                                     * fVar57) + fVar56 * fVar93;
                  fVar40 = local_1bc;
                  if (fVar57 * fVar57 + fVar94 * fVar94 + fVar62 * fVar62 <=
                      *(float *)(param_3 + 0x280) * *(float *)(param_3 + 0x280)) break;
                  uVar12 = uVar12 + 1;
                  uVar29 = (ulonglong)uVar12;
                  uVar31 = uVar31 + 1;
                  pfVar22 = pfVar22 + 4;
                } while ((longlong)uVar31 < (longlong)*(int *)(param_3 + 0x244));
              }
              if (uVar12 == *(uint *)(param_3 + 0x244)) goto LAB_144c46d02;
            }
          }
          fVar42 = *(float *)(param_2 + 0x10);
          fVar43 = *(float *)((longlong)param_2 + 0x84);
          fVar45 = *(float *)(param_2 + 0x11);
          uVar34 = *(uint *)((longlong)param_2 + 0x8c);
          local_188._0_8_ = CONCAT44(fVar40,fVar40);
          local_188._8_4_ = fVar40;
          local_188._12_4_ = fVar40;
          uVar12 = *param_1 >> 0x16;
          auVar89._8_4_ = fVar40;
          auVar89._0_8_ = local_188._0_8_;
          auVar89._12_4_ = fVar40;
          if ((*(byte *)((longlong)param_2 + 0xa4) & 0x10) == 0) {
            fVar55 = 0.0;
            fVar53 = fVar40;
          }
          else {
            fVar55 = (float)((int)*(short *)((longlong)param_2 + 0xa6) << 0x10);
            fVar53 = fVar55;
          }
          local_res20 = (longlong *)CONCAT44(local_res20._4_4_,fVar53);
          fVar53 = fVar42 - *(float *)(param_2 + 0x1a);
          fVar91 = fVar43 - *(float *)((longlong)param_2 + 0xd4);
          fVar92 = fVar45 - *(float *)(param_2 + 0x1b);
          fVar53 = fVar53 * fVar53;
          fVar91 = fVar91 * fVar91;
          fVar92 = fVar92 * fVar92;
          auVar50._0_4_ = fVar92 + fVar91 + fVar53;
          auVar50._4_4_ = fVar92 + fVar91 + fVar53;
          auVar50._8_4_ = fVar92 + fVar91 + fVar53;
          auVar50._12_4_ = fVar92 + fVar91 + fVar53;
          unaff_XMM13 = sqrtps(unaff_XMM13,auVar50);
          auVar83 = unaff_XMM13;
          auVar88 = local_188;
          if (((uVar12 != 0x3fe) && ((*(byte *)((longlong)param_2 + 0x4c) & 0x10) == 0)) &&
             ((*(uint *)(param_2 + 0x53) & 0x20) != 0)) {
            local_158 = *(float *)(param_2 + 0xc);
            fStack_154 = *(float *)((longlong)param_2 + 100);
            fStack_150 = *(float *)(param_2 + 0xd);
            fStack_14c = *(float *)((longlong)param_2 + 0x6c);
            fVar53 = *(float *)(param_2 + 0x42);
            fVar91 = *(float *)((longlong)param_2 + 0x214);
            fVar92 = *(float *)(param_2 + 0x43);
            auVar96._0_12_ = ZEXT812(0);
            auVar96._12_4_ = 0;
            fVar54 = *(float *)(param_2 + 0x1a) - fVar53;
            fVar56 = *(float *)((longlong)param_2 + 0xd4) - fVar91;
            fVar68 = *(float *)(param_2 + 0x1b) - fVar92;
            fVar98 = *(float *)(param_2 + 0xe) - local_158;
            fVar99 = *(float *)((longlong)param_2 + 0x74) - fStack_154;
            fVar100 = *(float *)(param_2 + 0xf) - fStack_150;
            fVar93 = fVar53 - local_158;
            fVar94 = fVar91 - fStack_154;
            fVar97 = fVar92 - fStack_150;
            local_1a8 = CONCAT44(fVar94,fVar93);
            uStack_1a0 = CONCAT44(*(float *)((longlong)param_2 + 0x21c) - fStack_14c,fVar97);
            fVar57 = fVar54 * fVar99 - fVar98 * fVar56;
            fVar62 = fVar56 * fVar100 - fVar99 * fVar68;
            fVar46 = fVar68 * fVar98 - fVar100 * fVar54;
            fVar70 = fVar62 * fVar62;
            fVar73 = fVar46 * fVar46;
            fVar74 = fVar57 * fVar57;
            fVar71 = fVar74 + fVar73 + fVar70;
            fVar72 = fVar74 + fVar73 + fVar70;
            fVar75 = fVar74 + fVar73 + fVar70;
            fVar74 = fVar74 + fVar73 + fVar70;
            if (fVar71 == 0.0) {
              auVar80 = ZEXT816(0);
            }
            else {
              auVar7._4_4_ = fVar72;
              auVar7._0_4_ = fVar71;
              auVar7._8_4_ = fVar75;
              auVar7._12_4_ = fVar74;
              auVar80 = divps(_DAT_14c6daca0,auVar7);
            }
            fVar70 = fVar54 * fVar98;
            fVar73 = fVar56 * fVar99;
            fVar76 = fVar68 * fVar100;
            fVar78 = (fVar46 * fVar68 - fVar56 * fVar57) * fVar93;
            fVar57 = (fVar57 * fVar54 - fVar68 * fVar62) * fVar94;
            fVar62 = (fVar62 * fVar56 - fVar54 * fVar46) * fVar97;
            auVar81._0_4_ = (fVar62 + fVar57 + fVar78) * auVar80._0_4_;
            auVar81._4_4_ = (fVar62 + fVar57 + fVar78) * auVar80._4_4_;
            auVar81._8_4_ = (fVar62 + fVar57 + fVar78) * auVar80._8_4_;
            auVar81._12_4_ = (fVar62 + fVar57 + fVar78) * auVar80._12_4_;
            fVar46 = fVar76 + fVar73 + fVar70;
            fVar78 = fVar76 + fVar73 + fVar70;
            fVar77 = fVar76 + fVar73 + fVar70;
            fVar76 = fVar76 + fVar73 + fVar70;
            auVar80 = minps(auVar81,_DAT_1499314a0);
            auVar59 = maxps(auVar80,auVar96);
            auVar65._0_4_ = fVar99 * fVar99 + fVar98 * fVar98 + fVar100 * fVar100;
            auVar65._4_4_ = fVar99 * fVar94 + fVar98 * fVar93 + fVar100 * fVar97;
            auVar65._8_4_ = fVar56 * fVar56 + fVar54 * fVar54 + fVar68 * fVar68;
            auVar65._12_4_ = fVar56 * fVar94 + fVar54 * fVar93 + fVar68 * fVar97;
            auVar80 = divps(_DAT_14c6daca0,auVar65);
            fVar93 = (float)(~-(uint)(auVar65._0_4_ == 0.0) & auVar80._0_4_);
            fVar94 = (float)(~-(uint)(auVar65._8_4_ == 0.0) & auVar80._8_4_);
            fVar97 = (fVar46 * auVar59._0_4_ - auVar65._12_4_) * fVar94;
            fVar57 = (fVar78 * auVar59._4_4_ - auVar65._12_4_) * fVar94;
            auVar41._4_4_ = fVar57;
            auVar41._0_4_ = fVar97;
            fVar62 = (fVar77 * auVar59._8_4_ - auVar65._12_4_) * fVar94;
            fVar94 = (fVar76 * auVar59._12_4_ - auVar65._12_4_) * fVar94;
            auVar41._8_4_ = fVar62;
            auVar41._12_4_ = fVar94;
            auVar80 = minps(auVar41,_DAT_1499314a0);
            auVar80 = maxps(auVar80,auVar96);
            auVar61._0_4_ = -(uint)(fVar71 != 0.0 && fVar97 == auVar80._0_4_);
            auVar61._4_4_ = -(uint)(fVar72 != 0.0 && fVar57 == auVar80._4_4_);
            auVar61._8_4_ = -(uint)(fVar75 != 0.0 && fVar62 == auVar80._8_4_);
            auVar61._12_4_ = -(uint)(fVar74 != 0.0 && fVar94 == auVar80._12_4_);
            auVar66._0_4_ = (auVar65._4_4_ + auVar80._0_4_ * fVar46) * fVar93;
            auVar66._4_4_ = (auVar65._4_4_ + auVar80._4_4_ * fVar78) * fVar93;
            auVar66._8_4_ = (auVar65._4_4_ + auVar80._8_4_ * fVar77) * fVar93;
            auVar66._12_4_ = (auVar65._4_4_ + auVar80._12_4_ * fVar76) * fVar93;
            auVar80 = minps(auVar66,_DAT_1499314a0);
            auVar80 = maxps(auVar80,auVar96);
            auVar82._0_4_ =
                 (float)((uint)auVar59._0_4_ & auVar61._0_4_ | ~auVar61._0_4_ & auVar80._0_4_) *
                 fVar98;
            auVar82._4_4_ =
                 (float)((uint)auVar59._4_4_ & auVar61._4_4_ | ~auVar61._4_4_ & auVar80._4_4_) *
                 fVar99;
            auVar82._8_4_ =
                 (float)((uint)auVar59._8_4_ & auVar61._8_4_ | ~auVar61._8_4_ & auVar80._8_4_) *
                 fVar100;
            auVar82._12_4_ =
                 (float)((uint)auVar59._12_4_ & auVar61._12_4_ | ~auVar61._12_4_ & auVar80._12_4_) *
                 (*(float *)((longlong)param_2 + 0x7c) - fStack_14c);
            fVar56 = local_158 + auVar82._0_4_;
            fVar68 = fStack_154 + auVar82._4_4_;
            fVar70 = fStack_150 + auVar82._8_4_;
            fVar93 = *(float *)(param_2 + 0x44);
            fVar94 = *(float *)((longlong)param_2 + 0x224);
            fVar97 = *(float *)(param_2 + 0x45);
            fVar57 = *(float *)((longlong)param_2 + 0x22c);
            fVar62 = (fVar42 - fVar53) * (fVar42 - fVar53);
            fVar46 = (fVar43 - fVar91) * (fVar43 - fVar91);
            fVar54 = (fVar45 - fVar92) * (fVar45 - fVar92);
            auVar95._4_4_ = fVar40 - fVar94;
            auVar95._0_4_ = fVar40 - fVar93;
            auVar51._0_4_ = fVar54 + fVar46 + fVar62;
            auVar51._4_4_ = fVar54 + fVar46 + fVar62;
            auVar51._8_4_ = fVar54 + fVar46 + fVar62;
            auVar51._12_4_ = fVar54 + fVar46 + fVar62;
            auVar80 = sqrtps(auVar61,auVar51);
            if (auVar80._0_4_ != 0.0) {
              auVar95._8_4_ = fVar40 - fVar97;
              auVar95._12_4_ = fVar40 - fVar57;
              auVar96 = divps(auVar95,auVar80);
            }
            fVar62 = fVar68 - *(float *)((longlong)param_2 + 0xd4);
            auVar59 = maxps(auVar96,_DAT_14c6daca0);
            fVar46 = (fVar53 - fVar56) * (fVar53 - fVar56);
            fVar54 = (fVar91 - fVar68) * (fVar91 - fVar68);
            fVar92 = (fVar92 - fVar70) * (fVar92 - fVar70);
            fVar53 = (fVar56 - *(float *)(param_2 + 0x1a)) * (fVar56 - *(float *)(param_2 + 0x1a));
            fVar62 = fVar62 * fVar62;
            fVar91 = (fVar70 - *(float *)(param_2 + 0x1b)) * (fVar70 - *(float *)(param_2 + 0x1b));
            auVar90._0_4_ = fVar92 + fVar54 + fVar46;
            auVar90._4_4_ = fVar92 + fVar54 + fVar46;
            auVar90._8_4_ = fVar92 + fVar54 + fVar46;
            auVar90._12_4_ = fVar92 + fVar54 + fVar46;
            auVar80 = sqrtps(auVar80,auVar90);
            auVar52._0_4_ = fVar91 + fVar62 + fVar53;
            auVar52._4_4_ = fVar91 + fVar62 + fVar53;
            auVar52._8_4_ = fVar91 + fVar62 + fVar53;
            auVar52._12_4_ = fVar91 + fVar62 + fVar53;
            fVar53 = auVar80._0_4_ * auVar59._0_4_;
            fVar91 = auVar80._4_4_ * auVar59._4_4_;
            fVar92 = auVar80._8_4_ * auVar59._8_4_;
            fVar62 = auVar80._12_4_ * auVar59._12_4_;
            auVar80 = sqrtps(auVar82,auVar52);
            uVar63 = -(uint)(auVar80._0_4_ + fVar53 + fVar93 < unaff_XMM13._0_4_ + fVar40);
            uVar67 = -(uint)(auVar80._4_4_ + fVar91 + fVar94 < unaff_XMM13._4_4_ + fVar40);
            uVar69 = -(uint)(auVar80._8_4_ + fVar92 + fVar97 < unaff_XMM13._8_4_ + fVar40);
            uVar37 = -(uint)(auVar80._12_4_ + fVar62 + fVar57 < unaff_XMM13._12_4_ + fVar40);
            auVar83._0_4_ = (uint)auVar80._0_4_ & uVar63;
            auVar83._4_4_ = (uint)auVar80._4_4_ & uVar67;
            auVar83._8_4_ = (uint)auVar80._8_4_ & uVar69;
            auVar83._12_4_ = (uint)auVar80._12_4_ & uVar37;
            auVar38._0_4_ = ~uVar63 & (uint)unaff_XMM13._0_4_;
            auVar38._4_4_ = ~uVar67 & (uint)unaff_XMM13._4_4_;
            auVar38._8_4_ = ~uVar69 & (uint)unaff_XMM13._8_4_;
            auVar38._12_4_ = ~uVar37 & (uint)unaff_XMM13._12_4_;
            auVar83 = auVar83 | auVar38;
            fVar42 = (float)((uint)fVar56 & uVar63 | ~uVar63 & (uint)fVar42);
            fVar43 = (float)((uint)fVar68 & uVar67 | ~uVar67 & (uint)fVar43);
            fVar45 = (float)((uint)fVar70 & uVar69 | ~uVar69 & (uint)fVar45);
            uVar34 = (uint)(fStack_14c + auVar82._12_4_) & uVar37 | ~uVar37 & uVar34;
            auVar39._0_4_ = ~uVar63 & (uint)fVar40;
            auVar39._4_4_ = ~uVar67 & (uint)fVar40;
            auVar39._8_4_ = ~uVar69 & (uint)fVar40;
            auVar39._12_4_ = ~uVar37 & (uint)fVar40;
            auVar88._0_4_ = (uint)(fVar53 + fVar93) & uVar63;
            auVar88._4_4_ = (uint)(fVar91 + fVar94) & uVar67;
            auVar88._8_4_ = (uint)(fVar92 + fVar97) & uVar69;
            auVar88._12_4_ = (uint)(fVar62 + fVar57) & uVar37;
            auVar88 = auVar88 | auVar39;
            auVar89 = local_188;
          }
          plVar25 = (longlong *)param_2[0x52];
          if (plVar25 == (longlong *)0x0) {
            auVar84._0_4_ = auVar83._0_4_ + auVar88._0_4_ + fVar55;
            auVar84._4_4_ = auVar83._4_4_ + auVar88._4_4_ + fVar55;
            auVar84._8_4_ = auVar83._8_4_ + auVar88._8_4_ + fVar55;
            auVar84._12_4_ = auVar83._12_4_ + auVar88._12_4_ + fVar55;
          }
          else {
            *(float *)(param_2 + 0x20) = fVar42;
            *(float *)((longlong)param_2 + 0x104) = fVar43;
            *(float *)(param_2 + 0x21) = fVar45;
            *(uint *)((longlong)param_2 + 0x10c) = uVar34;
            bVar20 = 0x11;
            if (uVar12 != 0x3fe) {
              bVar20 = 1;
            }
            local_100 = bVar20 | 0x40;
            if (uVar13 >> 0x16 != 0x3fd) {
              local_100 = bVar20;
            }
            if ((uVar12 != 0x3fe) && (uVar13 >> 0x16 != 0x3fd)) {
              local_100 = local_100 | 0x20;
            }
            local_118 = *param_2;
            local_e8 = auVar83._0_4_ + fVar55;
            fStack_e4 = auVar83._4_4_ + fVar55;
            fStack_e0 = auVar83._8_4_ + fVar55;
            fStack_dc = auVar83._12_4_ + fVar55;
            local_110 = param_2 + 0x4b;
            local_108 = param_2 + 0x1c;
            local_f8 = auVar88;
            (**(code **)(*plVar25 + 0x28))(plVar25,&local_148,&local_118);
            auVar84._0_4_ = (float)local_148 + auVar88._0_4_;
            auVar84._4_4_ = local_148._4_4_ + auVar88._4_4_;
            auVar84._8_4_ = fStack_140 + auVar88._8_4_;
            auVar84._12_4_ = fStack_13c + auVar88._12_4_;
          }
          auVar80 = maxps(auVar84,auVar89);
          fVar40 = auVar80._0_4_;
          puVar18 = local_1c8;
          if (fVar40 < *(float *)(param_8 + 0x38) || fVar40 == *(float *)(param_8 + 0x38)) {
            lVar24 = param_9[2];
            if (uVar13 == 0xffffffff) {
              uVar14 = 0;
            }
            else {
              uVar14 = FUN_144c2ed50(lVar24,uVar13);
            }
            *(undefined8 *)(lVar24 + 0x48) = uVar14;
            pfVar22 = *(float **)(param_8 + 0x48);
            if (((*(byte *)(*(longlong *)(param_5 + 0x48) + 0xe) & 3) == 0) ||
               (puVar18 = local_1c8, fVar40 < *pfVar22)) {
              *pfVar22 = fVar40;
              if ((*(byte *)((longlong)pfVar22 + 0xe) & 3) == 0) {
                fVar40 = (float)FUN_144fd7980(param_7,uVar13);
                pfVar22[1] = fVar40;
                if (fVar40 < *(float *)(param_8 + 0x34)) {
                  *(float *)(param_8 + 0x34) = fVar40;
                  *(uint *)(param_8 + 0x30) = uVar13;
                }
              }
              uVar31 = 0;
              *(undefined2 *)(*(longlong *)(param_6 + 0x48) + 0xc) = *(undefined2 *)(param_6 + 0x40)
              ;
              uVar5 = *(ushort *)(*(longlong *)(param_5 + 0x48) + 0xe);
              fVar40 = (*(float **)(param_8 + 0x48))[1] * *(float *)(param_8 + 0x3c) +
                       **(float **)(param_8 + 0x48);
              puVar18 = local_1c8;
              if (fVar40 < *(float *)(param_8 + 0x38) || fVar40 == *(float *)(param_8 + 0x38)) {
                *(ushort *)(*(longlong *)(param_5 + 0x48) + 0xe) = uVar5 & 0xfffd | 1;
                uVar34 = *(uint *)(param_4 + 1);
                uVar29 = (ulonglong)(int)uVar34;
                if ((uVar5 & 1) == 0) {
                  if (*(int *)((longlong)param_4 + 0xc) <= (int)uVar34) break;
                  lVar24 = *param_4;
                  *(uint *)(param_4 + 1) = uVar34 + 1;
                  *(uint *)(lVar24 + uVar29 * 8) = uVar13;
                  *(float *)(lVar24 + 4 + uVar29 * 8) = fVar40;
                  uVar21 = *(undefined4 *)(*param_4 + uVar29 * 8);
                  iVar36 = *(int *)(*param_4 + 4 + uVar29 * 8);
                  while (0 < (int)uVar34) {
                    uVar13 = (int)(uVar34 - 1) / 2;
                    uVar34 = (uint)uVar29;
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
                    lVar24 = *param_4;
                    if (*(int *)(lVar24 + 4 + (longlong)(int)uVar13 * 8) <= iVar36) break;
                    uVar31 = uVar29 & 0xffffffff;
                    uVar29 = (ulonglong)uVar13;
                    *(undefined8 *)(lVar24 + uVar31 * 8) =
                         *(undefined8 *)(lVar24 + (longlong)(int)uVar13 * 8);
                    uVar34 = uVar13;
                  }
LAB_144c46cef:
                  *(undefined4 *)(*param_4 + (longlong)(int)uVar34 * 8) = uVar21;
                  *(int *)(*param_4 + 4 + (longlong)(int)uVar34 * 8) = iVar36;
                }
                else {
                  local_res20 = (longlong *)CONCAT44(local_res20._4_4_,fVar40);
                  if (0 < (int)uVar34) {
                    puVar19 = (uint *)*param_4;
                    uVar32 = uVar31;
                    do {
                      if (*puVar19 == uVar13) {
                        *(float *)(*param_4 + 4 + uVar32 * 8) = fVar40;
                        uVar21 = *(undefined4 *)(*param_4 + uVar32 * 8);
                        iVar36 = *(int *)(*param_4 + 4 + uVar32 * 8);
                        uVar34 = (uint)uVar31;
                        goto joined_r0x000144c46cbe;
                      }
                      uVar31 = (ulonglong)((uint)uVar31 + 1);
                      uVar32 = uVar32 + 1;
                      puVar19 = puVar19 + 2;
                    } while ((longlong)uVar32 < (longlong)uVar29);
                  }
                }
              }
            }
          }
        }
      }
      else {
        local_res20 = (longlong *)(CONCAT44(local_res20._4_4_,uVar13) & 0xffffffff003fffff);
        local_1a8 = 0;
        uStack_1a0 = 0;
        puVar18 = (uint *)FUN_144c450c0(param_9[0x38],&local_res20,&local_1a8);
        uVar2 = *(undefined1 *)((longlong)puVar18 + 0x11);
        uVar34 = puVar18[2];
        local_1c0 = *puVar18;
        uVar12 = puVar18[1];
        uVar63 = puVar18[3];
        bVar20 = (byte)puVar18[4];
        local_res20 = (longlong *)CONCAT71(local_res20._1_7_,uVar2);
        uVar4 = *(undefined2 *)((longlong)puVar18 + 0x12);
        local_188._0_4_ = uVar12;
        if ((uVar34 != 0xffffffff) && ((bVar20 & 0x20) == 0)) {
          lVar24 = param_9[0x38];
          if (((bVar20 & 0x40) == 0) && (uVar63 != 0xffffffff)) {
            uVar63 = uVar63 & 0x3fffff | *(int *)(lVar24 + 0x17c) << 0x16;
LAB_144c46194:
            uVar34 = uVar34 & 0x3fffff | *(int *)(lVar24 + 0x17c) << 0x16;
          }
          else if ((bVar20 & 0x40) == 0) goto LAB_144c46194;
          iVar36 = *(int *)(lVar24 + 0x40);
          if ((int)local_1c0 < iVar36) {
            pfVar22 = (float *)((longlong)(int)local_1c0 * 0x10 + *(longlong *)(lVar24 + 0x38));
          }
          else {
            pfVar22 = (float *)((longlong)(int)(local_1c0 - iVar36) * 0x10 +
                               *(longlong *)(lVar24 + 0xf0));
          }
          fVar42 = *pfVar22;
          fVar43 = pfVar22[1];
          fVar45 = pfVar22[2];
          if ((int)uVar12 < iVar36) {
            pfVar22 = (float *)((longlong)(int)uVar12 * 0x10 + *(longlong *)(lVar24 + 0x38));
          }
          else {
            pfVar22 = (float *)((longlong)(int)(uVar12 - iVar36) * 0x10 +
                               *(longlong *)(lVar24 + 0xf0));
          }
          fVar53 = *pfVar22;
          fVar55 = pfVar22[1];
          fVar91 = pfVar22[2];
          auVar80 = *(undefined1 (*) [16])(param_9 + 0x3c);
          auVar86._0_4_ =
               fVar43 * auVar80._0_4_ + fVar42 * *(float *)(param_9 + 0x3a) +
               fVar45 * *(float *)(param_9 + 0x3e) + *(float *)(param_9 + 0x40);
          auVar86._4_4_ =
               fVar43 * auVar80._4_4_ + fVar42 * *(float *)((longlong)param_9 + 0x1d4) +
               fVar45 * *(float *)((longlong)param_9 + 500) + *(float *)((longlong)param_9 + 0x204);
          auVar86._8_4_ =
               fVar43 * auVar80._8_4_ + fVar42 * *(float *)(param_9 + 0x3b) +
               fVar45 * *(float *)(param_9 + 0x3f) + *(float *)(param_9 + 0x41);
          auVar86._12_4_ =
               fVar43 * auVar80._12_4_ + fVar42 * *(float *)((longlong)param_9 + 0x1dc) +
               fVar45 * *(float *)((longlong)param_9 + 0x1fc) +
               *(float *)((longlong)param_9 + 0x20c);
          auVar47._0_4_ =
               fVar55 * auVar80._0_4_ + fVar53 * *(float *)(param_9 + 0x3a) +
               fVar91 * *(float *)(param_9 + 0x3e) + *(float *)(param_9 + 0x40);
          auVar47._4_4_ =
               fVar55 * auVar80._4_4_ + fVar53 * *(float *)((longlong)param_9 + 0x1d4) +
               fVar91 * *(float *)((longlong)param_9 + 500) + *(float *)((longlong)param_9 + 0x204);
          auVar47._8_4_ =
               fVar55 * auVar80._8_4_ + fVar53 * *(float *)(param_9 + 0x3b) +
               fVar91 * *(float *)(param_9 + 0x3f) + *(float *)(param_9 + 0x41);
          auVar47._12_4_ =
               fVar55 * auVar80._12_4_ + fVar53 * *(float *)((longlong)param_9 + 0x1dc) +
               fVar91 * *(float *)((longlong)param_9 + 0x1fc) +
               *(float *)((longlong)param_9 + 0x20c);
          fVar42 = (auVar47._0_4_ - auVar86._0_4_) * _DAT_14c6dad90;
          fVar43 = (auVar47._4_4_ - auVar86._4_4_) * fRam000000014c6dad94;
          fVar45 = (auVar47._8_4_ - auVar86._8_4_) * fRam000000014c6dad98;
          fVar53 = (auVar47._12_4_ - auVar86._12_4_) * fRam000000014c6dad9c;
          *(undefined1 (*) [16])(param_9 + 0x16) = auVar86;
          *(undefined1 (*) [16])(param_9 + 0x18) = auVar47;
          *(float *)(param_9 + 0x1a) = auVar86._0_4_ + fVar42;
          *(float *)((longlong)param_9 + 0xd4) = auVar86._4_4_ + fVar43;
          *(float *)(param_9 + 0x1b) = auVar86._8_4_ + fVar45;
          *(float *)((longlong)param_9 + 0xdc) = auVar86._12_4_ + fVar53;
        }
        *(uint *)(param_9 + 0x12) = uVar13;
        *(uint *)((longlong)param_9 + 0x94) = local_1c0;
        *(uint *)(param_9 + 0x13) = uVar12;
        *(uint *)((longlong)param_9 + 0x9c) = uVar34;
        *(uint *)(param_9 + 0x14) = uVar63;
        *(byte *)((longlong)param_9 + 0xa4) = bVar20;
        *(undefined1 *)((longlong)param_9 + 0xa5) = uVar2;
        *(undefined2 *)((longlong)param_9 + 0xa6) = uVar4;
        *(uint *)(param_9 + 0x22) = uVar13;
        param_9[0x23] = (longlong)param_9 + 0x94;
        param_9[0x24] = local_1a8;
        param_9[0x25] = uStack_1a0;
        param_9[0x26] = param_9[0x1a];
        param_9[0x27] = param_9[0x1b];
        puVar18 = local_1c8;
        if ((*(int *)(param_3 + 0x9c) != -1) && ((*(byte *)(param_3 + 0xa4) & 0x20) == 0))
        goto LAB_144c46303;
      }
LAB_144c46d02:
      local_198 = local_198 + 1;
      fVar40 = local_1bc;
    } while (local_198 < puVar18);
  }
  lVar24 = *(longlong *)(param_5 + 0x50);
  puVar1 = (ushort *)(lVar24 + 0xe);
  *puVar1 = *puVar1 & 0xfffe;
  puVar1 = (ushort *)(lVar24 + 0xe);
  *puVar1 = *puVar1 | 2;
  if (local_178 == 0) {
    (*DAT_14c787678)(1,local_1b0);
  }
  else {
    uVar31 = (longlong)local_168 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_178 + 0x28) < uVar31) ||
       ((longlong)local_1b0 + uVar31 != *(longlong *)(local_178 + 0x38))) {
      FUN_144be8550(local_178,local_1b0);
    }
    else {
      *(uint **)(local_178 + 0x38) = local_1b0;
      if (*(uint **)(local_178 + 0x48) == local_1b0) {
        FUN_144be8430(local_178);
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
  return param_1;
joined_r0x000144c46cbe:
  if ((int)uVar34 < 1) goto LAB_144c46cef;
  iVar35 = uVar34 - 1;
  uVar34 = (uint)uVar31;
  uVar13 = iVar35 / 2;
  lVar24 = *param_4;
  if (*(int *)(lVar24 + 4 + (longlong)(int)uVar13 * 8) <= iVar36) goto LAB_144c46cef;
  *(undefined8 *)(lVar24 + uVar31 * 8) = *(undefined8 *)(lVar24 + (longlong)(int)uVar13 * 8);
  uVar31 = (ulonglong)uVar13;
  uVar34 = uVar13;
  goto joined_r0x000144c46cbe;
}



// FUNCTION 144c46e20 FUN_144c46e20 body=86 status=ok
// SIG undefined FUN_144c46e20(void)

longlong FUN_144c46e20(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *param_2;
  lVar3 = (longlong)iVar2;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(lVar1 + 0x30) <= iVar2) {
    return *(longlong *)(lVar1 + 0xe0) + (longlong)(iVar2 - *(int *)(lVar1 + 0x30)) * 0x14;
  }
  if (*(int *)(lVar1 + 0x78) != 0) {
    iVar2 = *(int *)(*(longlong *)(lVar1 + 0x70) + lVar3 * 4);
  }
  if (iVar2 == -1) {
    return *(longlong *)(lVar1 + 0x28) + lVar3 * 0x14;
  }
  return *(longlong *)(lVar1 + 0xc0) + (longlong)iVar2 * 0x14;
}



// FUNCTION 144c46e80 FUN_144c46e80 body=249 status=ok
// SIG undefined FUN_144c46e80(void)

longlong FUN_144c46e80(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar6 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x50);
  lVar7 = (longlong)iVar1;
  lVar3 = *(longlong *)(lVar2 + 0x18);
  if (*(int *)(lVar2 + 0x20) <= iVar6) {
    lVar3 = *(longlong *)(lVar2 + 0x140);
    iVar6 = iVar6 - *(int *)(lVar2 + 0x20);
    lVar4 = (longlong)(iVar6 * iVar1);
    *param_3 = lVar3 + lVar4 * 4;
    param_3[1] = lVar3 + (lVar4 + lVar7) * 4;
    return *(longlong *)(lVar2 + 0xd0) + (longlong)iVar6 * 0xc;
  }
  iVar5 = iVar6;
  if (*(int *)(lVar2 + 0x98) != 0) {
    iVar5 = *(int *)(*(longlong *)(lVar2 + 0x90) + (longlong)iVar6 * 4);
  }
  if (iVar5 != -1) {
    lVar3 = *(longlong *)(lVar2 + 0x120);
    *param_3 = lVar3 + (longlong)(iVar5 * iVar1) * 4;
    param_3[1] = lVar3 + (iVar5 * iVar1 + lVar7) * 4;
    return *(longlong *)(lVar2 + 0xb0) + (longlong)iVar5 * 0xc;
  }
  lVar2 = *(longlong *)(lVar2 + 0x48) + (longlong)(iVar1 * iVar6) * 4;
  *param_3 = lVar2;
  param_3[1] = lVar2 + lVar7 * 4;
  return lVar3 + (longlong)iVar6 * 0xc;
}



// FUNCTION 144c46f80 FUN_144c46f80 body=144 status=ok
// SIG undefined FUN_144c46f80(void)

longlong FUN_144c46f80(longlong param_1)

{
  FUN_144bea730(param_1 + 0x18);
  FUN_144bea730(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_144bea730(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_144bea730(param_1 + 0x78);
  FUN_144bea730(param_1 + 0x90);
  FUN_144bea730(param_1 + 0xa8);
  FUN_144bea730(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144bea730(param_1);
  return param_1;
}



// FUNCTION 144c47010 FUN_144c47010 body=104 status=ok
// SIG undefined FUN_144c47010(void)

longlong FUN_144c47010(longlong param_1)

{
  FUN_144bea730(param_1 + 0x18);
  FUN_144bea730(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_144bea730(param_1);
  FUN_144bea730(param_1 + 0x58);
  FUN_144bea730(param_1 + 0x70);
  FUN_144bea730(param_1 + 0x88);
  FUN_144bea730(param_1 + 0xa0);
  return param_1;
}



// FUNCTION 144c47080 FUN_144c47080 body=305 status=ok
// SIG undefined FUN_144c47080(void)

longlong FUN_144c47080(longlong param_1)

{
  FUN_144c47010(param_1 + 0x30);
  FUN_144bea730(param_1 + 0x18);
  FUN_144c46f80(param_1 + 0x100);
  FUN_144c47010(param_1 + 0x1e8);
  FUN_144c47010(param_1 + 0x2a0);
  FUN_144bea730(param_1 + 0xe8);
  FUN_144c46f80(param_1 + 0x370);
  FUN_144c47010(param_1 + 0x458);
  FUN_144c47010(param_1 + 0x510);
  FUN_144bea730(param_1 + 0x358);
  FUN_144c46f80(param_1 + 0x5e0);
  FUN_144c47010(param_1 + 0x6c8);
  FUN_144c47010(param_1 + 0x780);
  FUN_144bea730(param_1 + 0x5c8);
  FUN_144c46f80(param_1 + 0x850);
  FUN_144c47010(param_1 + 0x938);
  FUN_144bea730(param_1 + 0x838);
  FUN_144c46f80(param_1 + 0xa08);
  FUN_144c47010(param_1 + 0xaf0);
  FUN_144bea730(param_1 + 0x9f0);
  FUN_144c46f80(param_1 + 0xbc0);
  FUN_144bea730(param_1 + 0xba8);
  FUN_144bea730(param_1 + 0xca8);
  FUN_144bea730(param_1);
  return param_1;
}



// FUNCTION 144c471c0 FUN_144c471c0 body=417 status=ok
// SIG undefined FUN_144c471c0(void)

undefined1
FUN_144c471c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  undefined4 local_res8 [2];
  undefined8 in_stack_ffffffffffffff48;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined1 local_60 [8];
  longlong local_58;
  int local_50;
  longlong local_48;
  undefined1 local_40 [8];
  longlong local_38;
  int local_30;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_48 = param_1 + 0x48;
  local_30 = 1;
  FUN_144bea720(local_40);
  local_68 = param_1 + 0x60;
  local_50 = 1;
  FUN_144bea720(local_60);
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar7 = (float)FUN_144ca5190(*(undefined8 *)(param_1 + 0x20),local_res8);
  if (fVar1 <= fVar7 + *(float *)(param_1 + 0x30)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      local_78 = *param_5;
      uStack_70 = param_5[1];
      puVar9 = &local_78;
      cVar3 = (**(code **)(*plVar2 + 0x18))
                        (plVar2,*(undefined8 *)(param_1 + 0x20),param_3,param_4,puVar9);
      uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
      bVar6 = cVar3 == '\0';
      goto LAB_144c472c6;
    }
  }
  else {
    local_78 = *param_5;
    uStack_70 = param_5[1];
    local_88 = *(undefined4 *)(param_1 + 0x2c);
    uStack_80 = CONCAT44(local_88,local_88);
    uVar8 = param_4;
    uStack_84 = local_88;
    iVar5 = FUN_144fe1d40(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),param_2,
                          param_3,param_4,&local_78,param_6,&local_88,param_1 + 0x78);
    uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
    bVar6 = iVar5 == 0;
LAB_144c472c6:
    if (bVar6) {
      uVar4 = 0;
      goto LAB_144c472f0;
    }
  }
  local_78 = *param_5;
  uStack_70 = param_5[1];
  uVar4 = FUN_144c492a0(param_1,param_3,param_4,&local_78,CONCAT44(uVar10,0x80));
LAB_144c472f0:
  if (local_50 != 0) {
    FUN_144bea720(&local_88);
    uStack_80 = uStack_80 - local_58;
    *(longlong *)(local_68 + 8) = *(longlong *)(local_68 + 8) + uStack_80;
    *(int *)(local_68 + 0x10) = *(int *)(local_68 + 0x10) + 1;
  }
  if (local_30 != 0) {
    FUN_144bea720(&local_88);
    *(longlong *)(local_48 + 8) = *(longlong *)(local_48 + 8) + (uStack_80 - local_38);
    *(int *)(local_48 + 0x10) = *(int *)(local_48 + 0x10) + 1;
  }
  return uVar4;
}



// FUNCTION 144c47370 FUN_144c47370 body=2676 status=ok
// SIG undefined FUN_144c47370(void)

void FUN_144c47370(longlong param_1,undefined8 *param_2,uint param_3,uint *param_4,
                  ulonglong *param_5,longlong *param_6)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 uVar3;
  short sVar4;
  uint *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  float fVar23;
  uint local_res18 [2];
  uint *local_res20;
  undefined8 local_208;
  undefined8 uStack_200;
  uint local_1f8;
  ulonglong local_1e8;
  ulonglong *puStack_1e0;
  undefined8 local_1d8;
  ulonglong local_1d0 [2];
  ulonglong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  uint local_198;
  uint local_194;
  ulonglong local_190;
  ulonglong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 *local_168;
  undefined1 local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined1 local_130 [8];
  longlong local_128;
  int local_120;
  longlong local_118;
  undefined1 local_110 [8];
  longlong local_108;
  int local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_118 = param_1 + 0x48;
  local_100 = 1;
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_144bea720(local_110);
  local_138 = param_1 + 0x3a0;
  local_120 = 1;
  FUN_144bea720(local_130);
  sVar4 = (short)param_4[2];
  uVar20 = (ulonglong)sVar4;
  fVar2 = *(float *)(param_1 + 0x2c);
  local_158 = (ulonglong)(param_3 >> 0x16);
  uVar15 = local_158 * 0x120;
  lVar22 = *(longlong *)(uVar15 + *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38));
  iVar7 = (int)*(short *)((longlong)param_4 + 10);
  local_1c0 = CONCAT44(local_1c0._4_4_,*(undefined4 *)(param_1 + 0x28));
  local_1e8 = uVar15;
  local_1b0 = lVar22;
  fVar23 = (float)FUN_144ca5190(*(longlong *)(param_1 + 0x20),&local_1c0);
  uVar21 = 0;
  if (fVar2 <= fVar23 + *(float *)(param_1 + 0x30)) {
    iVar9 = (int)sVar4;
    *(int *)(param_6 + 2) = iVar7 + iVar9;
    iVar17 = iVar7 + iVar9 + 0x1f >> 5;
    if ((int)(*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff) < iVar17) {
      FUN_140163394(param_6,&PTR_vftable_14c6e47a0,(longlong)iVar17);
    }
    iVar8 = (int)param_6[1];
    if ((iVar8 < iVar17) || (iVar17 < iVar8)) {
      *(int *)(param_6 + 1) = iVar17;
      iVar8 = iVar17;
    }
    FUN_144bfb550(*param_6,0,(longlong)iVar8);
    lVar10 = local_1b0;
    puVar5 = local_res20;
    if (0 < iVar9) {
      local_1f8 = (int)local_158 << 0x16;
      uVar15 = uVar21;
      do {
        lVar22 = *(longlong *)(lVar10 + 0x20);
        uVar14 = (uint)uVar21;
        uVar19 = *puVar5 + uVar14;
        uVar16 = local_1f8 | uVar19;
        if ((int)uVar19 < *(int *)(lVar22 + 0x30)) {
          lVar18 = (longlong)(int)uVar19;
          if (*(int *)(lVar22 + 0x78) != 0) {
            uVar19 = *(uint *)(*(longlong *)(lVar22 + 0x70) + lVar18 * 4);
          }
          if (uVar19 == 0xffffffff) {
            lVar22 = *(longlong *)(lVar22 + 0x28);
            lVar18 = lVar18 * 5;
          }
          else {
            lVar18 = (longlong)(int)uVar19 * 5;
            lVar22 = *(longlong *)(lVar22 + 0xc0);
          }
        }
        else {
          lVar18 = (longlong)(int)(uVar19 - *(int *)(lVar22 + 0x30)) * 5;
          lVar22 = *(longlong *)(lVar22 + 0xe0);
        }
        if (((*(int *)(lVar22 + 8 + lVar18 * 4) != -1) &&
            ((*(byte *)(lVar22 + lVar18 * 4 + 0x10) & 0x20) == 0)) &&
           (cVar6 = FUN_144c491c0(param_1,uVar16), cVar6 != '\0')) {
          *(uint *)(*param_6 + (uVar15 >> 5) * 4) =
               *(uint *)(*param_6 + (uVar15 >> 5) * 4) | 1 << (uVar14 & 0x1f);
        }
        uVar21 = (ulonglong)(uVar14 + 1);
        uVar15 = uVar15 + 1;
        lVar22 = local_1b0;
        param_3 = local_res18[0];
      } while ((int)(uVar14 + 1) < iVar9);
    }
    iVar17 = 0;
    param_4 = local_res20;
    uVar21 = uVar20;
    if (0 < iVar7) {
      do {
        lVar10 = *(longlong *)(lVar22 + 0x20);
        iVar9 = local_res20[1] + iVar17;
        if (iVar9 < *(int *)(lVar10 + 0x30)) {
          iVar8 = iVar9;
          if (*(int *)(lVar10 + 0x78) != 0) {
            iVar8 = *(int *)(*(longlong *)(lVar10 + 0x70) + (longlong)iVar9 * 4);
          }
          if (iVar8 == -1) {
            lVar10 = *(longlong *)(lVar10 + 0x28) + (longlong)iVar9 * 0x14;
          }
          else {
            lVar10 = *(longlong *)(lVar10 + 0xc0) + (longlong)iVar8 * 0x14;
          }
        }
        else {
          lVar10 = *(longlong *)(lVar10 + 0xe0) + (longlong)(iVar9 - *(int *)(lVar10 + 0x30)) * 0x14
          ;
        }
        if ((*(int *)(lVar10 + 8) != -1) && ((*(byte *)(lVar10 + 0x10) & 0x20) == 0)) {
          *(uint *)(*param_6 + ((longlong)uVar21 >> 5) * 4) =
               *(uint *)(*param_6 + ((longlong)uVar21 >> 5) * 4) | 1 << (iVar17 + sVar4 & 0x1fU);
        }
        iVar17 = iVar17 + 1;
        uVar21 = uVar21 + 1;
      } while (iVar17 < iVar7);
    }
    goto LAB_144c47abb;
  }
  if (*(int *)(param_1 + 4) < 0) {
    local_208 = *param_5;
    uStack_200 = param_5[1];
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    local_178 = CONCAT44(uVar3,uVar3);
    uStack_170 = (ulonglong *)CONCAT44(uVar3,uVar3);
    FUN_144fdd4a0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),param_2,param_3,
                  param_4,&local_208,&local_178,param_6,param_1 + 0x558);
    goto LAB_144c47abb;
  }
  local_1d8 = *(undefined8 *)
               (*(longlong *)
                 (*(longlong *)(uVar15 + *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38)) + 0x38
                 ) + (longlong)*(int *)(param_1 + 4) * 0x18);
  local_1f8 = 0;
  local_198 = 0;
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar22 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar22 + 0xf0);
  if (lVar10 == 0) {
    if (*(char *)(lVar22 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = FUN_144b3f4a0();
    *(longlong *)(lVar22 + 0xf0) = lVar10;
  }
  uVar15 = *(ulonglong *)(*(longlong *)(lVar10 + 0x3d0) + 0x10);
  local_180 = (longlong)(iVar7 + sVar4) * 8;
  if (*(longlong *)(uVar15 + 8) == 0) {
    uVar21 = uVar15;
  }
  local_190 = uVar21;
  local_148 = local_180;
  if (uVar21 == 0) {
    uVar15 = (*DAT_14c787670)(CONCAT71((int7)(uVar15 >> 8),1),&local_148,0x40);
  }
  else {
    local_1c0 = local_180 + 0x3fU & 0xffffffffffffffc0;
    if (local_1c0 <= *(ulonglong *)(uVar21 + 0x28)) {
      uVar15 = *(ulonglong *)(uVar21 + 0x38);
      local_1d0[0] = uVar15;
      if (uVar15 + local_1c0 <= *(ulonglong *)(uVar21 + 0x40)) {
        *(ulonglong *)(uVar21 + 0x38) = uVar15 + local_1c0;
        goto LAB_144c47543;
      }
    }
    uVar15 = FUN_144b454a0(uVar21,&local_1c0);
  }
LAB_144c47543:
  local_res18[0] = iVar7 + sVar4 | 0x80000000;
  local_1d0[0] = uVar15;
  local_1a0 = uVar15;
  local_194 = local_res18[0];
  local_188 = uVar15;
  local_1c0._0_4_ = *param_4;
  FUN_144fd3950(local_1d8,&local_148,&local_1c0,(int)(short)param_4[2]);
  local_1c0 = CONCAT44(local_1c0._4_4_,param_4[1]);
  FUN_144fd3950(local_1d8,&local_208,&local_1c0,(int)*(short *)((longlong)param_4 + 10));
  if ((local_148 == CONCAT44(uStack_13c,uStack_140)) ||
     (uVar19 = local_1f8, local_208 == uStack_200)) {
    puVar1 = (undefined8 *)
             (*(longlong *)
               (*(longlong *)(local_1e8 + *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38)) +
               0x38) + (longlong)*(int *)(param_1 + 4) * 0x18);
    if (*(char *)(puVar1 + 2) == '\x01') {
      uVar13 = *puVar1;
    }
    else {
      uVar13 = FUN_144c3f6d0();
    }
    local_1e8 = *param_5;
    puStack_1e0 = (ulonglong *)param_5[1];
    local_1d8 = uVar13;
    FUN_144c49680(param_1,param_3,param_4,&local_1e8,uVar13,param_1 + 0x3b8);
    local_res18[0] = *param_4;
    plVar11 = (longlong *)FUN_144fd3930(uVar13,&local_178,local_res18,(int)(short)param_4[2]);
    local_148 = *plVar11;
    uStack_140 = (undefined4)plVar11[1];
    uStack_13c = *(undefined4 *)((longlong)plVar11 + 0xc);
    local_res18[0] = param_4[1];
    puVar12 = (ulonglong *)
              FUN_144fd3930(uVar13,local_1d0,local_res18,(int)*(short *)((longlong)param_4 + 10));
    local_208 = *puVar12;
    uStack_200 = puVar12[1];
    local_res18[0] = local_194;
    local_1d0[0] = local_1a0;
    uVar15 = local_1a0;
    uVar21 = local_190;
    uVar19 = local_198;
  }
  uVar16 = iVar7 + sVar4;
  if ((int)(local_res18[0] & 0x7fffffff) < (int)uVar16) {
    FUN_144c49ab0(&local_1a0,&PTR_vftable_14c6e47a0,(longlong)(int)uVar16);
    local_res18[0] = local_194;
    local_1d0[0] = local_1a0;
    uVar15 = local_1a0;
    uVar21 = local_190;
    uVar19 = local_198;
  }
  if (((int)uVar19 < (int)uVar16) || ((int)uVar16 < (int)uVar19)) {
    uVar19 = uVar16;
  }
  local_178 = local_148;
  uStack_170 = (ulonglong *)CONCAT44(uStack_13c,uStack_140);
  puVar12 = (ulonglong *)(uVar15 + (longlong)(int)uVar19 * 8);
  puStack_1e0 = puVar12 + -(longlong)iVar7;
  local_1e8 = uVar15;
  FUN_144fd3610(local_1d8,&local_178,&local_1e8);
  local_178 = uVar15 + uVar20 * 8;
  local_1e8 = local_208;
  puStack_1e0 = (ulonglong *)uStack_200;
  uStack_170 = puVar12;
  FUN_144fd3610(local_1d8,&local_1e8,&local_178);
  param_4 = local_res20;
  local_1e8 = *param_5;
  puStack_1e0 = (ulonglong *)param_5[1];
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  local_208 = CONCAT44(uVar3,uVar3);
  uStack_200 = CONCAT44(uVar3,uVar3);
  local_178 = uVar15;
  uStack_170 = puVar12;
  FUN_144fdc350(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),param_2,param_3,
                local_res20,&local_1e8,&local_208,&local_178,param_6,param_1 + 0x4a0);
  if (uVar21 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar15 = local_180 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar21 + 0x28) < uVar15) ||
       (local_188 + uVar15 != *(longlong *)(uVar21 + 0x38))) {
      FUN_144be8550(uVar21);
    }
    else {
      *(ulonglong *)(uVar21 + 0x38) = local_188;
      if (*(ulonglong *)(uVar21 + 0x48) == local_188) {
        FUN_144be8430(uVar21);
      }
    }
  }
  if ((-1 < (int)local_res18[0]) && (local_1d0[0] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1d0[0],(ulonglong)(local_res18[0] & 0x7fffffff) << 3);
  }
LAB_144c47abb:
  uVar19 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_e8 = 0;
    uStack_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_f8[0] = 0xffffffff;
    local_d8 = *param_2;
    uStack_d0 = param_2[1];
    local_1b8 = *(undefined8 *)(param_1 + 0x38);
    local_178 = *(ulonglong *)(param_1 + 0x20);
    uStack_170 = &local_1c0;
    local_168 = local_f8;
    local_1c0 = CONCAT44(local_1c0._4_4_,*(float *)(param_1 + 0x2c) * 2.0);
    local_f0 = 0;
    local_c8 = 0xffffffff;
    local_c0 = 0;
    local_160 = 0;
    local_88 = (undefined4)*param_5;
    uStack_84 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_80 = (undefined4)param_5[1];
    uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
    uVar16 = (uint)sVar4;
    local_98 = param_3;
    local_90 = param_4;
    if (0 < (int)uVar16) {
      local_1d0[0] = 0;
      do {
        uVar21 = local_1d0[0] >> 5;
        if ((*(uint *)(*param_6 + uVar21 * 4) >> (sbyte)(uVar19 & 0x1f) & 1) != 0) {
          uVar14 = *param_4 + uVar19;
          local_208 = 0;
          uStack_200 = 0;
          local_res18[0] = uVar14;
          uVar13 = FUN_144c450c0(*(undefined8 *)(local_1b0 + 0x20),local_res18,&local_208);
          local_res18[0] = uVar14;
          FUN_144c52d20(local_1b0,local_res18,&local_78);
          local_b8 = local_208;
          uStack_b0 = uStack_200;
          local_c8 = (int)local_158 << 0x16 | uVar14;
          local_a8 = local_78;
          uStack_a4 = uStack_74;
          uStack_a0 = uStack_70;
          uStack_9c = uStack_6c;
          local_c0 = uVar13;
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                            (*(longlong **)(param_1 + 0x18),&local_178);
          param_4 = local_res20;
          if (cVar6 == '\0') {
            *(uint *)(*param_6 + uVar21 * 4) =
                 *(uint *)(*param_6 + uVar21 * 4) & ~(1 << (uVar19 & 0x1f));
          }
        }
        uVar19 = uVar19 + 1;
        local_1d0[0] = local_1d0[0] + 1;
      } while ((int)uVar19 < (int)uVar16);
    }
    uVar19 = uVar16;
    if ((int)uVar16 < (int)(iVar7 + uVar16)) {
      do {
        lVar22 = (longlong)uVar20 >> 5;
        local_1d0[0] = uVar20;
        if ((*(uint *)(*param_6 + lVar22 * 4) >> (sbyte)(uVar19 & 0x1f) & 1) != 0) {
          uVar14 = (param_4[1] - uVar16) + uVar19;
          local_208 = 0;
          uStack_200 = 0;
          local_res18[0] = uVar14;
          uVar13 = FUN_144c450c0(*(undefined8 *)(local_1b0 + 0x20),local_res18,&local_208);
          local_res18[0] = uVar14;
          FUN_144c52d20(local_1b0,local_res18,&local_68);
          local_b8 = local_208;
          uStack_b0 = uStack_200;
          local_c8 = (int)local_158 << 0x16 | uVar14;
          local_a8 = local_68;
          uStack_a4 = uStack_64;
          uStack_a0 = uStack_60;
          uStack_9c = uStack_5c;
          local_c0 = uVar13;
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                            (*(longlong **)(param_1 + 0x18),&local_178);
          if (cVar6 == '\0') {
            *(uint *)(*param_6 + lVar22 * 4) =
                 *(uint *)(*param_6 + lVar22 * 4) & ~(1 << (uVar19 & 0x1f));
          }
        }
        uVar19 = uVar19 + 1;
        uVar20 = local_1d0[0] + 1;
        param_4 = local_res20;
        local_1d0[0] = uVar20;
      } while ((int)uVar19 < (int)(iVar7 + uVar16));
    }
  }
  if (local_120 != 0) {
    FUN_144bea720(&local_158);
    local_150 = local_150 - local_128;
    *(longlong *)(local_138 + 8) = *(longlong *)(local_138 + 8) + local_150;
    *(int *)(local_138 + 0x10) = *(int *)(local_138 + 0x10) + 1;
  }
  if (local_100 != 0) {
    FUN_144bea720(&local_1b0);
    *(longlong *)(local_118 + 8) = *(longlong *)(local_118 + 8) + (local_1a8 - local_108);
    *(int *)(local_118 + 0x10) = *(int *)(local_118 + 0x10) + 1;
  }
  return;
}



// FUNCTION 144c47df0 FUN_144c47df0 body=1291 status=ok
// SIG undefined FUN_144c47df0(void)

undefined8
FUN_144c47df0(longlong param_1,ulonglong param_2,longlong param_3,ulonglong *param_4,
             undefined8 param_5,uint param_6,undefined8 param_7,ulonglong *param_8,
             undefined8 param_9)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  uint local_res8 [2];
  uint local_res18 [2];
  ulonglong *local_res20;
  undefined8 in_stack_fffffffffffffe70;
  undefined4 uVar15;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar16;
  undefined8 local_158;
  longlong lStack_150;
  longlong local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 *local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100 [8];
  longlong local_f8;
  int local_f0;
  longlong local_e8;
  undefined1 local_e0 [8];
  longlong local_d8;
  int local_d0;
  undefined4 local_c8 [2];
  longlong local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffe70 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  local_e8 = param_1 + 0x48;
  local_d0 = 1;
  local_res20 = param_4;
  FUN_144bea720(local_e0);
  local_108 = param_1 + 0x610;
  local_f0 = 1;
  FUN_144bea720(local_100);
  if ((*(byte *)(param_3 + 0x10) & 0x10) == 0) {
    local_res8[0] = *(uint *)(param_1 + 0x28);
    fVar1 = *(float *)(param_1 + 0x2c);
    fVar14 = (float)FUN_144ca5190(*(undefined8 *)(param_1 + 0x20),local_res8);
    if (fVar1 <= fVar14 + *(float *)(param_1 + 0x30)) {
      plVar5 = *(longlong **)(param_1 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        local_128 = *param_4;
        uStack_120 = (undefined8 *)param_4[1];
        cVar7 = (**(code **)(*plVar5 + 0x20))
                          (plVar5,*(undefined8 *)(param_1 + 0x20),param_2 & 0xffffffff,param_3,
                           &local_128);
        if (cVar7 == '\0') goto LAB_144c48240;
      }
      goto LAB_144c481a2;
    }
    bVar6 = *(byte *)(param_3 + 0x10) & 0x40;
    uVar2 = *(uint *)(param_3 + 8);
    uVar12 = (ulonglong)uVar2;
    iVar8 = (int)((param_2 & 0xffffffff) >> 0x16);
    if (*(int *)(param_1 + 4) < 0) {
      if ((bVar6 == 0) && (uVar2 != 0xffffffff)) {
        uVar12 = (ulonglong)(iVar8 << 0x16 | uVar2 & 0x3fffff);
      }
      local_158 = 0;
      lStack_150 = 0;
      local_res8[0] = (uint)uVar12 & 0x3fffff;
      uVar9 = FUN_144c450c0(*(undefined8 *)
                             (*(longlong *)
                               ((uVar12 >> 0x16) * 0x120 +
                               *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38)) + 0x20),
                            local_res8,&local_158);
      local_138 = *param_8;
      uStack_130 = (undefined4)param_8[1];
      uStack_12c = *(undefined4 *)((longlong)param_8 + 0xc);
      uVar16 = *(undefined4 *)(param_1 + 0x2c);
      local_128 = CONCAT44(uVar16,uVar16);
      uStack_120 = (undefined8 *)CONCAT44(uVar16,uVar16);
      iVar8 = FUN_144fdfaa0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),uVar12,
                            uVar9,&local_158,CONCAT44(uVar15,param_6),param_7,&local_138,param_9,
                            &local_128,param_1 + 0x7c8);
    }
    else {
      uVar13 = uVar2;
      if ((bVar6 == 0) && (uVar2 != 0xffffffff)) {
        uVar13 = iVar8 << 0x16 | uVar2 & 0x3fffff;
      }
      uVar10 = uVar13 & 0x3fffff;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38);
      lVar4 = *(longlong *)(*(longlong *)((ulonglong)(uVar13 >> 0x16) * 0x120 + lVar3) + 0x20);
      if ((int)uVar10 < *(int *)(lVar4 + 0x30)) {
        uVar12 = (ulonglong)uVar10;
        if (*(int *)(lVar4 + 0x78) != 0) {
          uVar10 = *(uint *)(*(longlong *)(lVar4 + 0x70) + (ulonglong)uVar10 * 4);
        }
        if (uVar10 == 0xffffffff) {
          local_148 = *(longlong *)(lVar4 + 0x28);
          lVar11 = uVar12 * 5;
        }
        else {
          lVar11 = (longlong)(int)uVar10 * 5;
          local_148 = *(longlong *)(lVar4 + 0xc0);
        }
      }
      else {
        lVar11 = (longlong)(int)(uVar10 - *(int *)(lVar4 + 0x30)) * 5;
        local_148 = *(longlong *)(lVar4 + 0xe0);
      }
      local_148 = local_148 + lVar11 * 4;
      local_138 = (ulonglong)(param_6 >> 0x16);
      uVar9 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(local_138 * 0x120 + lVar3) + 0x38) +
               (longlong)*(int *)(param_1 + 4) * 0x18);
      local_res18[0] = uVar2 & 0x3fffff;
      iVar8 = FUN_144fd3910(uVar9,local_res18,local_res8);
      if (iVar8 == 0) {
        local_res18[0] = (uint)local_138;
        uVar9 = FUN_144c49640(param_1,local_res18);
        local_138 = *param_8;
        uStack_130 = (undefined4)param_8[1];
        uStack_12c = *(undefined4 *)((longlong)param_8 + 0xc);
        FUN_144c49680(param_1,param_6,param_7,&local_138,uVar9,param_1 + 0x628);
        local_res18[0] = uVar2 & 0x3fffff;
        FUN_144fd3910(uVar9,local_res18,local_res8);
      }
      FUN_144fd35c0(uVar9,&local_158,(undefined2)local_res8[0]);
      local_128 = *param_8;
      uStack_120 = (undefined8 *)param_8[1];
      uStack_130 = *(undefined4 *)(param_1 + 0x2c);
      local_138 = CONCAT44(uStack_130,uStack_130);
      uStack_12c = uStack_130;
      iVar8 = FUN_144fe0cc0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),param_9,
                            param_6,param_7,&local_128,CONCAT44(uVar16,uVar13),local_148,&local_138,
                            &local_158,param_1 + 0x710);
    }
    param_4 = local_res20;
    if (iVar8 != 0) goto LAB_144c481a2;
LAB_144c48240:
    uVar9 = 0;
  }
  else {
LAB_144c481a2:
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (plVar5 != (longlong *)0x0) {
      local_60 = param_7;
      local_88 = 0;
      uStack_80 = 0;
      local_b8 = *param_4;
      uStack_b0 = param_4[1];
      local_98 = 0xffffffff;
      local_a8 = 0;
      uStack_a0 = 0;
      local_90 = 0;
      local_58 = (undefined4)*param_8;
      uStack_54 = *(undefined4 *)((longlong)param_8 + 4);
      uStack_50 = (undefined4)param_8[1];
      uStack_4c = *(undefined4 *)((longlong)param_8 + 0xc);
      lStack_150 = *(longlong *)(param_1 + 0x38);
      local_128 = *(ulonglong *)(param_1 + 0x20);
      uStack_120 = &local_158;
      local_118 = local_c8;
      local_158 = CONCAT44(local_158._4_4_,*(float *)(param_1 + 0x2c) * 2.0);
      local_68 = param_6;
      local_110 = 0x80;
      local_c8[0] = (int)param_2;
      local_c0 = param_3;
      cVar7 = (**(code **)(*plVar5 + 0x28))(plVar5,&local_128);
      if (cVar7 == '\0') goto LAB_144c48240;
    }
    uVar9 = 1;
  }
  if (local_f0 != 0) {
    FUN_144bea720(&local_158);
    lStack_150 = lStack_150 - local_f8;
    *(longlong *)(local_108 + 8) = *(longlong *)(local_108 + 8) + lStack_150;
    *(int *)(local_108 + 0x10) = *(int *)(local_108 + 0x10) + 1;
  }
  if (local_d0 != 0) {
    FUN_144bea720(&local_158);
    *(longlong *)(local_e8 + 8) = *(longlong *)(local_e8 + 8) + (lStack_150 - local_d8);
    *(int *)(local_e8 + 0x10) = *(int *)(local_e8 + 0x10) + 1;
  }
  return uVar9;
}



// FUNCTION 144c48300 FUN_144c48300 body=2808 status=ok
// SIG undefined FUN_144c48300(void)

void FUN_144c48300(longlong param_1,undefined4 param_2,longlong param_3,undefined8 *param_4,
                  undefined4 *param_5,uint param_6,int *param_7,undefined8 *param_8,
                  longlong *param_9)

{
  float fVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  int *piVar22;
  uint uVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  int iVar27;
  int *piVar28;
  float fVar29;
  undefined8 in_stack_fffffffffffffdc8;
  undefined4 uVar30;
  longlong *local_208;
  undefined8 uStack_200;
  ulonglong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong lStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8 [2];
  undefined8 local_1c0;
  longlong local_1b8 [2];
  longlong local_1a8;
  float *local_1a0;
  undefined4 *local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180 [8];
  longlong local_178;
  int local_170;
  longlong local_168;
  undefined1 local_160 [8];
  longlong local_158;
  int local_150;
  undefined1 *local_148;
  int local_140;
  uint local_13c;
  undefined1 local_138 [64];
  undefined4 local_f8 [2];
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int *local_90;
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
  
  plVar6 = param_9;
  uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
  local_168 = param_1 + 0x48;
  local_150 = 1;
  FUN_144bea720(local_160);
  local_188 = param_1 + 0xa38;
  local_170 = 1;
  FUN_144bea720(local_180);
  uVar20 = *(uint *)(param_3 + 8) & 0x3fffff;
  iVar9 = (int)*(short *)((longlong)param_7 + 10);
  sVar2 = (short)param_7[2];
  puVar26 = (undefined8 *)(longlong)sVar2;
  param_9._0_4_ = iVar9 + sVar2;
  *(int *)(plVar6 + 2) = (int)param_9;
  iVar27 = (int)param_9 + 0x1f >> 5;
  if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar27) {
    FUN_140163394(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar27);
  }
  uVar18 = param_6;
  plVar13 = plVar6 + 1;
  if ((int)*plVar13 < iVar27) {
    *(int *)plVar13 = iVar27;
  }
  else if (iVar27 < (int)*plVar13) {
    *(int *)plVar13 = iVar27;
  }
  local_208 = plVar6 + 1;
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  uVar21 = 0;
  iVar11 = 0;
  local_e8 = *param_4;
  uStack_e0 = param_4[1];
  fVar1 = *(float *)(param_1 + 0x2c);
  local_d8 = *param_5;
  uStack_d4 = param_5[1];
  uStack_d0 = param_5[2];
  uStack_cc = param_5[3];
  local_1f8 = (ulonglong)(param_6 >> 0x16);
  local_90 = param_7;
  local_88 = *param_8;
  uStack_80 = param_8[1];
  local_1c0 = *(undefined8 *)(param_1 + 0x38);
  local_1a8 = *(longlong *)(param_1 + 0x20);
  local_1a0 = local_1c8;
  local_1c8[0] = fVar1 * 2.0;
  local_198 = local_f8;
  lVar15 = local_1f8 * 0x120;
  local_c8 = 0xffffffff;
  local_c0 = 0;
  local_98 = param_6;
  local_190 = 0;
  lVar3 = *(longlong *)(lVar15 + *(longlong *)(local_1a8 + 0x38));
  param_6 = *(uint *)(param_1 + 0x28);
  local_f8[0] = param_2;
  local_f0 = param_3;
  fVar29 = (float)FUN_144ca5190(local_1a8,&param_6);
  iVar25 = (int)sVar2;
  if (fVar1 <= fVar29 + *(float *)(param_1 + 0x30)) {
    *(int *)(plVar6 + 2) = (int)param_9;
    if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar27) {
      FUN_140163394(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar27);
    }
    iVar11 = (int)plVar6[1];
    if (iVar11 < iVar27) {
      *(int *)(plVar6 + 1) = iVar27;
      iVar11 = iVar27;
    }
    else if (iVar27 < iVar11) {
      *(int *)local_208 = iVar27;
      iVar11 = iVar27;
    }
    FUN_144bfb550(*plVar6,0,(longlong)iVar11);
    piVar28 = param_7;
    if (0 < sVar2) {
      uVar20 = (int)local_1f8 << 0x16;
      uVar16 = uVar21;
      do {
        lVar15 = *(longlong *)(lVar3 + 0x20);
        uVar17 = (uint)uVar21;
        uVar18 = *piVar28 + uVar17;
        if ((int)uVar18 < *(int *)(lVar15 + 0x30)) {
          uVar23 = uVar18;
          if (*(int *)(lVar15 + 0x78) != 0) {
            uVar23 = *(uint *)(*(longlong *)(lVar15 + 0x70) + (longlong)(int)uVar18 * 4);
          }
          if (uVar23 == 0xffffffff) {
            lVar15 = *(longlong *)(lVar15 + 0x28) + (longlong)(int)uVar18 * 0x14;
          }
          else {
            lVar15 = *(longlong *)(lVar15 + 0xc0) + (longlong)(int)uVar23 * 0x14;
          }
        }
        else {
          lVar15 = *(longlong *)(lVar15 + 0xe0) +
                   (longlong)(int)(uVar18 - *(int *)(lVar15 + 0x30)) * 0x14;
        }
        if (((*(int *)(lVar15 + 8) != -1) && ((*(byte *)(lVar15 + 0x10) & 0x20) == 0)) &&
           (cVar8 = FUN_144c491c0(param_1,uVar18 | uVar20), cVar8 != '\0')) {
          *(uint *)(*plVar6 + (uVar16 >> 5) * 4) =
               *(uint *)(*plVar6 + (uVar16 >> 5) * 4) | 1 << (uVar17 & 0x1f);
        }
        uVar21 = (ulonglong)(uVar17 + 1);
        uVar16 = uVar16 + 1;
      } while ((int)(uVar17 + 1) < iVar25);
    }
    iVar27 = 0;
    piVar22 = param_7;
    puVar24 = puVar26;
    if (0 < iVar9) {
      do {
        lVar15 = *(longlong *)(lVar3 + 0x20);
        iVar11 = piVar28[1] + iVar27;
        if (iVar11 < *(int *)(lVar15 + 0x30)) {
          iVar10 = iVar11;
          if (*(int *)(lVar15 + 0x78) != 0) {
            iVar10 = *(int *)(*(longlong *)(lVar15 + 0x70) + (longlong)iVar11 * 4);
          }
          if (iVar10 == -1) {
            lVar15 = *(longlong *)(lVar15 + 0x28) + (longlong)iVar11 * 0x14;
          }
          else {
            lVar15 = *(longlong *)(lVar15 + 0xc0) + (longlong)iVar10 * 0x14;
          }
        }
        else {
          lVar15 = *(longlong *)(lVar15 + 0xe0) +
                   (longlong)(iVar11 - *(int *)(lVar15 + 0x30)) * 0x14;
        }
        if ((*(int *)(lVar15 + 8) != -1) && ((*(byte *)(lVar15 + 0x10) & 0x20) == 0)) {
          *(uint *)(*plVar6 + ((longlong)puVar24 >> 5) * 4) =
               *(uint *)(*plVar6 + ((longlong)puVar24 >> 5) * 4) | 1 << (iVar27 + sVar2 & 0x1fU);
        }
        iVar27 = iVar27 + 1;
        puVar24 = (undefined8 *)((longlong)puVar24 + 1);
      } while (iVar27 < iVar9);
    }
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38);
    if (*(int *)(param_1 + 4) < 0) {
      uVar17 = (int)local_1f8 << 0x16;
      param_6 = uVar20;
      uVar12 = FUN_144c46e20(*(undefined8 *)(lVar15 + lVar4),&param_6);
      piVar22 = param_7;
      local_1e8 = *param_8;
      lStack_1e0 = param_8[1];
      local_1d8 = *(undefined4 *)(param_1 + 0x2c);
      uStack_1d4 = local_1d8;
      uStack_1d0 = local_1d8;
      uStack_1cc = local_1d8;
      FUN_144fde660(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),uVar17 | uVar20,
                    uVar12,CONCAT44(uVar30,uVar18),param_7,&local_1e8,&local_1d8,plVar6,
                    param_1 + 0xb38);
    }
    else {
      param_5 = *(undefined4 **)
                 (*(longlong *)(*(longlong *)(lVar15 + lVar4) + 0x38) +
                 (longlong)*(int *)(param_1 + 4) * 0x18);
      local_148 = local_138;
      local_140 = 0;
      local_13c = 0x80000040;
      param_6 = uVar18 & 0x3fffff;
      iVar27 = FUN_144c499b0(param_5,&param_6,&local_148);
      piVar28 = param_7;
      if (iVar27 == 0) {
        puVar24 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(lVar15 + *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38)) +
                    0x38) + (longlong)*(int *)(param_1 + 4) * 0x18);
        if (*(char *)(puVar24 + 2) == '\x01') {
          param_5 = (undefined4 *)*puVar24;
        }
        else {
          param_5 = (undefined4 *)FUN_144c3f6d0();
        }
        piVar28 = param_7;
        local_1d8 = *(undefined4 *)param_8;
        uStack_1d4 = *(undefined4 *)((longlong)param_8 + 4);
        uStack_1d0 = *(undefined4 *)(param_8 + 1);
        uStack_1cc = *(undefined4 *)((longlong)param_8 + 0xc);
        FUN_144c49680(param_1,uVar18,param_7,&local_1d8,param_5,param_1 + 0xa50);
        param_6 = uVar18 & 0x3fffff;
        FUN_144c499b0(param_5,&param_6,&local_148);
      }
      param_6 = *piVar28;
      FUN_144fd3930(param_5,&local_208,&param_6,(ulonglong)puVar26 & 0xffffffff);
      param_6 = piVar28[1];
      FUN_144fd3930(param_5,local_1b8,&param_6,iVar9);
      FUN_144bfb550(*plVar6,0,(longlong)(int)plVar6[1]);
      if (local_140 == 0) {
        local_140 = 0;
        if ((-1 < (int)local_13c) && (local_148 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_148,local_13c & 0x7fffffff);
        }
        goto LAB_144c48d8a;
      }
      if ((*(byte *)(param_3 + 0x10) & 0x10) == 0) {
        iVar27 = -*piVar28;
      }
      else {
        iVar27 = iVar25 - piVar28[1];
      }
      uVar20 = iVar27 + uVar20;
      uVar16 = uVar21;
      uVar19 = uVar21;
      if (0 < (int)uVar20) {
        do {
          iVar27 = (int)uVar16;
          if (iVar27 < iVar25) {
            lVar15 = (longlong)local_208 + uVar16 * 2;
          }
          else {
            uVar16 = (ulonglong)(iVar27 - iVar25);
            lVar15 = local_1b8[0] + uVar16 * 2;
          }
          if (*(char *)(uVar16 + lVar15 + 1) != '\0') {
            uVar19 = (ulonglong)((int)uVar19 + 1);
          }
          iVar11 = (int)uVar19;
          uVar16 = (ulonglong)(iVar27 + 1U);
        } while ((int)(iVar27 + 1U) < (int)uVar20);
      }
      bVar7 = FUN_144fd37e0(param_5,*(undefined4 *)(param_1 + 0x2c));
      param_6 = CONCAT31(param_6._1_3_,bVar7);
      if (0 < (int)param_9) {
        param_8 = (undefined8 *)((longlong)-iVar25 * 3);
        uVar16 = uVar21;
        uVar19 = uVar21;
        do {
          uVar18 = (uint)uVar16;
          plVar13 = local_208;
          if (iVar25 <= (int)uVar18) {
            plVar13 = (longlong *)((longlong)param_8 + local_1b8[0]);
          }
          if (*(char *)((longlong)plVar13 + uVar21 + 1) != '\0') {
            iVar27 = (int)uVar19;
            if (uVar18 == uVar20) {
LAB_144c48791:
              if (iVar25 <= (int)uVar18) {
                lVar15 = *(longlong *)(lVar3 + 0x20);
                iVar10 = (piVar28[1] - iVar25) + uVar18;
                if (iVar10 < *(int *)(lVar15 + 0x30)) {
                  iVar14 = iVar10;
                  if (*(int *)(lVar15 + 0x78) != 0) {
                    iVar14 = *(int *)(*(longlong *)(lVar15 + 0x70) + (longlong)iVar10 * 4);
                  }
                  if (iVar14 == -1) {
                    lVar15 = *(longlong *)(lVar15 + 0x28) + (longlong)iVar10 * 0x14;
                  }
                  else {
                    lVar15 = *(longlong *)(lVar15 + 0xc0) + (longlong)iVar14 * 0x14;
                  }
                }
                else {
                  lVar15 = *(longlong *)(lVar15 + 0xe0) +
                           (longlong)(iVar10 - *(int *)(lVar15 + 0x30)) * 0x14;
                }
                if ((*(int *)(lVar15 + 8) == -1) || ((*(byte *)(lVar15 + 0x10) & 0x20) != 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (!bVar5) goto LAB_144c48847;
              }
              *(uint *)(*plVar6 + (uVar16 >> 5) * 4) =
                   *(uint *)(*plVar6 + (uVar16 >> 5) * 4) | 1 << (uVar18 & 0x1f);
            }
            else {
              iVar10 = iVar11;
              iVar14 = iVar27;
              if (iVar11 < iVar27) {
                iVar10 = iVar27;
                iVar14 = iVar11;
              }
              if (bVar7 <= (byte)local_148[((iVar10 + -1) * iVar10 >> 1) + iVar14])
              goto LAB_144c48791;
            }
LAB_144c48847:
            uVar19 = (ulonglong)(iVar27 + 1);
          }
          uVar16 = (ulonglong)(uVar18 + 1);
          uVar21 = uVar21 + 3;
        } while ((int)(uVar18 + 1) < (int)param_9);
      }
      local_140 = 0;
      piVar22 = param_7;
      if ((-1 < (int)local_13c) && (local_148 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_148,local_13c & 0x7fffffff);
        piVar22 = param_7;
      }
    }
  }
  uVar20 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (0 < iVar25) {
      param_8 = (undefined8 *)0x0;
      do {
        uVar21 = (ulonglong)param_8 >> 5;
        if ((*(uint *)(*plVar6 + uVar21 * 4) >> (sbyte)(uVar20 & 0x1f) & 1) != 0) {
          uVar18 = *piVar22 + uVar20;
          local_208 = (longlong *)0x0;
          uStack_200 = 0;
          param_6 = uVar18;
          uVar12 = FUN_144c450c0(*(undefined8 *)(lVar3 + 0x20),&param_6,&local_208);
          param_6 = uVar18;
          FUN_144c52d20(lVar3,&param_6,&local_78);
          local_b8 = local_208;
          uStack_b0 = uStack_200;
          local_c8 = (int)local_1f8 << 0x16 | uVar18;
          local_a8 = local_78;
          uStack_a4 = uStack_74;
          uStack_a0 = uStack_70;
          uStack_9c = uStack_6c;
          local_c0 = uVar12;
          cVar8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                            (*(longlong **)(param_1 + 0x18),&local_1a8);
          if (cVar8 == '\0') {
            *(uint *)(*plVar6 + uVar21 * 4) =
                 *(uint *)(*plVar6 + uVar21 * 4) & ~(1 << (uVar20 & 0x1f));
          }
        }
        uVar20 = uVar20 + 1;
        param_8 = (undefined8 *)((longlong)param_8 + 1);
        piVar22 = param_7;
      } while ((int)uVar20 < iVar25);
    }
    uVar21 = (ulonglong)puVar26 & 0xffffffff;
    if (iVar25 < iVar9 + iVar25) {
      do {
        uVar20 = (uint)uVar21;
        lVar15 = (longlong)puVar26 >> 5;
        param_8 = puVar26;
        if ((*(uint *)(*plVar6 + lVar15 * 4) >> (sbyte)(uVar20 & 0x1f) & 1) != 0) {
          local_208 = (longlong *)0x0;
          uStack_200 = 0;
          uVar18 = (param_7[1] - iVar25) + uVar20;
          param_6 = uVar18;
          uVar12 = FUN_144c450c0(*(undefined8 *)(lVar3 + 0x20),&param_6,&local_208);
          param_6 = uVar18;
          FUN_144c52d20(lVar3,&param_6,&local_68);
          local_b8 = local_208;
          uStack_b0 = uStack_200;
          local_c8 = (int)local_1f8 << 0x16 | uVar18;
          local_a8 = local_68;
          uStack_a4 = uStack_64;
          uStack_a0 = uStack_60;
          uStack_9c = uStack_5c;
          local_c0 = uVar12;
          cVar8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                            (*(longlong **)(param_1 + 0x18),&local_1a8);
          if (cVar8 == '\0') {
            *(uint *)(*plVar6 + lVar15 * 4) =
                 *(uint *)(*plVar6 + lVar15 * 4) & ~(1 << (uVar20 & 0x1f));
          }
        }
        uVar21 = (ulonglong)(uVar20 + 1);
        puVar26 = (undefined8 *)((longlong)param_8 + 1);
        param_8 = puVar26;
      } while ((int)(uVar20 + 1) < iVar9 + iVar25);
    }
  }
LAB_144c48d8a:
  if (local_170 != 0) {
    FUN_144bea720(&local_1f8);
    local_1f0 = local_1f0 - local_178;
    *(longlong *)(local_188 + 8) = *(longlong *)(local_188 + 8) + local_1f0;
    *(int *)(local_188 + 0x10) = *(int *)(local_188 + 0x10) + 1;
  }
  if (local_150 != 0) {
    FUN_144bea720(&local_1e8);
    *(longlong *)(local_168 + 8) = *(longlong *)(local_168 + 8) + (lStack_1e0 - local_158);
    *(int *)(local_168 + 0x10) = *(int *)(local_168 + 0x10) + 1;
  }
  return;
}



// FUNCTION 144c48e00 FUN_144c48e00 body=891 status=ok
// SIG undefined FUN_144c48e00(void)

void FUN_144c48e00(longlong param_1,uint param_2,float *param_3,undefined8 *param_4,uint param_5,
                  undefined8 param_6,float *param_7,float param_8,float *param_9,float *param_10)

{
  undefined8 *puVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  float local_res8 [2];
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar10;
  float local_b8;
  float local_b4 [3];
  undefined8 local_a8;
  longlong lStack_a0;
  float local_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined1 local_70 [8];
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined1 local_50 [8];
  longlong local_48;
  int local_40;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff10 >> 0x20);
  local_58 = param_1 + 0x48;
  local_40 = 1;
  FUN_144bea720(local_50);
  local_78 = param_1 + 0xbf0;
  local_60 = 1;
  FUN_144bea720(local_70);
  local_res8[0] = *(float *)(param_1 + 0x28);
  fVar9 = (float)FUN_144ca5190(*(undefined8 *)(param_1 + 0x20),local_res8);
  if (param_8 <= fVar9 + *(float *)(param_1 + 0x30)) {
    *param_9 = param_8;
    fVar9 = param_8;
  }
  else {
    if (*(int *)(param_1 + 4) < 0) {
      local_a8 = *param_4;
      lStack_a0 = param_4[1];
      local_98 = *param_7;
      fStack_94 = param_7[1];
      uStack_90 = *(longlong *)(param_7 + 2);
      local_88 = *(undefined4 *)(param_1 + 0x2c);
      uStack_84 = local_88;
      uStack_80 = local_88;
      uStack_7c = local_88;
      FUN_144fe2de0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),param_2,param_3,
                    &local_a8,CONCAT44(uVar10,param_5),param_6,&local_98,&local_88,&param_8,
                    local_res8,param_1 + 0xcf0);
      local_b4[0] = param_8;
      fVar9 = local_res8[0];
    }
    else {
      lVar8 = (ulonglong)(param_2 >> 0x16) * 0x120;
      lVar2 = *(longlong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + lVar8) + 0x38)
               + (longlong)*(int *)(param_1 + 4) * 0x18);
      if (param_8 < *(float *)(lVar2 + 0x18) || param_8 == *(float *)(lVar2 + 0x18)) {
        fVar7 = (float)(param_5 & 0x3fffff);
        fVar3 = (float)((int)fVar7 + 1U);
        if ((int)fVar7 + 1U == (int)*(short *)(param_3 + 2) + (int)*param_3) {
          fVar3 = *param_3;
        }
        local_b8 = fVar7;
        iVar4 = FUN_144fd4070(lVar2,&local_b8,&param_8);
        local_b8 = fVar3;
        iVar5 = FUN_144fd4070(lVar2,&local_b8,local_res8);
        if ((iVar4 == 0) || (local_b4[0] = param_8, fVar9 = local_res8[0], iVar5 == 0)) {
          puVar1 = (undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + lVar8) +
                     0x38) + (longlong)*(int *)(param_1 + 4) * 0x18);
          if (*(char *)(puVar1 + 2) == '\x01') {
            uVar6 = *puVar1;
          }
          else {
            uVar6 = FUN_144c3f6d0();
          }
          local_88 = *(undefined4 *)param_4;
          uStack_84 = *(undefined4 *)((longlong)param_4 + 4);
          uStack_80 = *(undefined4 *)(param_4 + 1);
          uStack_7c = *(undefined4 *)((longlong)param_4 + 0xc);
          FUN_144c49680(param_1,param_2,param_3,&local_88,uVar6,param_1 + 0xc08);
          local_b8 = fVar7;
          FUN_144fd4070(uVar6,&local_b8,&param_8);
          local_b8 = fVar3;
          FUN_144fd4070(uVar6,&local_b8,local_res8);
          local_b4[0] = param_8;
          fVar9 = local_res8[0];
        }
      }
      else {
        local_88 = *(undefined4 *)param_4;
        uStack_84 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_80 = *(undefined4 *)(param_4 + 1);
        uStack_7c = *(undefined4 *)((longlong)param_4 + 0xc);
        local_a8 = *(undefined8 *)param_7;
        lStack_a0 = *(longlong *)(param_7 + 2);
        local_98 = param_8;
        fStack_94 = param_8;
        uStack_90 = CONCAT44(param_8,param_8);
        FUN_144fe2de0(*(longlong *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),param_2,param_3,
                      &local_88,CONCAT44(uVar10,param_5),param_6,&local_a8,&local_98,local_b4,
                      &local_b8,param_1 + 0xcf0);
        fVar9 = local_b8;
      }
    }
    *param_9 = local_b4[0];
  }
  *param_10 = fVar9;
  if (local_60 != 0) {
    FUN_144bea720(&local_a8);
    lStack_a0 = lStack_a0 - local_68;
    *(longlong *)(local_78 + 8) = *(longlong *)(local_78 + 8) + lStack_a0;
    *(int *)(local_78 + 0x10) = *(int *)(local_78 + 0x10) + 1;
  }
  if (local_40 != 0) {
    FUN_144bea720(&local_98);
    *(longlong *)(local_58 + 8) = *(longlong *)(local_58 + 8) + (uStack_90 - local_48);
    *(int *)(local_58 + 0x10) = *(int *)(local_58 + 0x10) + 1;
  }
  return;
}



// FUNCTION 144c49180 FUN_144c49180 body=63 status=ok
// SIG undefined FUN_144c49180(void)

undefined8 FUN_144c49180(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  uVar2 = (**(code **)(*plVar1 + 0x18))
                    (plVar1,*(undefined8 *)(param_1 + 0x20),param_2,param_3,&local_18);
  return uVar2;
}



// FUNCTION 144c491c0 FUN_144c491c0 body=154 status=ok
// SIG undefined FUN_144c491c0(void)

undefined8 FUN_144c491c0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 1;
  }
  local_18 = 0;
  uStack_10 = 0;
  local_res8[0] = param_2 & 0x3fffff;
  uVar1 = FUN_144c450c0(*(undefined8 *)
                         (*(longlong *)
                           ((ulonglong)(param_2 >> 0x16) * 0x120 +
                           *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38)) + 0x20),local_res8,
                        &local_18);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                    (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),param_2,uVar1,
                     &local_18);
  return uVar1;
}



// FUNCTION 144c49260 FUN_144c49260 body=63 status=ok
// SIG undefined FUN_144c49260(void)

undefined8 FUN_144c49260(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  uVar2 = (**(code **)(*plVar1 + 0x20))
                    (plVar1,*(undefined8 *)(param_1 + 0x20),param_2,param_3,&local_18);
  return uVar2;
}



// FUNCTION 144c492a0 FUN_144c492a0 body=196 status=ok
// SIG undefined FUN_144c492a0(void)

undefined8
FUN_144c492a0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  float local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  float *local_a0;
  undefined4 *local_98;
  undefined1 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  local_b8[0] = *(float *)(param_1 + 0x2c) * 2.0;
  local_80 = 0;
  local_50 = 0;
  local_b0 = *(undefined8 *)(param_1 + 0x38);
  local_a8 = *(undefined8 *)(param_1 + 0x20);
  local_a0 = local_b8;
  local_98 = local_88;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  local_90 = param_5;
  local_88[0] = 0xffffffff;
  local_58 = 0xffffffff;
  local_28 = param_2;
  local_20 = param_3;
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,&local_a8);
  return uVar2;
}



// FUNCTION 144c49370 FUN_144c49370 body=591 status=ok
// SIG undefined FUN_144c49370(void)

undefined8 FUN_144c49370(longlong param_1,uint param_2,undefined1 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint local_res8 [2];
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 *puStack_d0;
  uint *local_c8;
  undefined1 local_c0;
  uint local_b8 [2];
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*(longlong *)(param_1 + 0x18) == 0)) {
    return 1;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_res8[0] = param_2 & 0x3fffff;
  lVar3 = FUN_144c450c0(*(undefined8 *)
                         (*(longlong *)
                           ((ulonglong)(param_2 >> 0x16) * 0x120 +
                           *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38)) + 0x20),local_res8,
                        &local_e8);
  uVar5 = *(uint *)(lVar3 + 0xc);
  if (((*(byte *)(lVar3 + 0x10) & 0x40) == 0) && (uVar5 != 0xffffffff)) {
    uVar5 = (param_2 >> 0x16) << 0x16 | uVar5 & 0x3fffff;
  }
  local_res8[0] = uVar5 & 0x3fffff;
  local_f8 = 0;
  uStack_f0 = 0;
  uVar4 = FUN_144c46e80(*(undefined8 *)
                         ((ulonglong)(uVar5 >> 0x16) * 0x120 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38)),local_res8,&local_f8);
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
LAB_144c494dd:
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (plVar1 != (longlong *)0x0) {
      local_a8 = local_e8;
      local_a0 = uStack_e0;
      local_48 = local_f8;
      local_40 = uStack_f0;
      uStack_f0 = *(undefined8 *)(param_1 + 0x38);
      local_d8 = *(longlong *)(param_1 + 0x20);
      puStack_d0 = &local_f8;
      local_78 = 0;
      uStack_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_c8 = local_b8;
      local_f8 = CONCAT44(local_f8._4_4_,*(float *)(param_1 + 0x2c) * 2.0);
      local_88 = 0xffffffff;
      local_80 = 0;
      local_c0 = param_3;
      local_b8[0] = param_2;
      local_b0 = lVar3;
      local_58 = uVar5;
      local_50 = uVar4;
      cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,&local_d8);
      if (cVar2 == '\0') goto LAB_144c494d6;
    }
    uVar4 = 1;
  }
  else {
    local_d8 = local_e8;
    puStack_d0 = (undefined8 *)uStack_e0;
    cVar2 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,*(undefined8 *)(param_1 + 0x20),param_2,lVar3,&local_d8);
    if (cVar2 != '\0') {
      local_d8 = local_f8;
      puStack_d0 = (undefined8 *)uStack_f0;
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                        (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),uVar5,uVar4,
                         &local_d8);
      if (cVar2 != '\0') goto LAB_144c494dd;
    }
LAB_144c494d6:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144c495c0 FUN_144c495c0 body=57 status=ok
// SIG undefined FUN_144c495c0(void)

void FUN_144c495c0(longlong param_1)

{
  void *_Src;
  undefined1 local_cc8 [3264];
  
  FUN_144fe7010((void *)(param_1 + 0x48));
  _Src = (void *)FUN_144c47080(local_cc8);
  memcpy((void *)(param_1 + 0x48),_Src,0xcc0);
  return;
}



// FUNCTION 144c49600 FUN_144c49600 body=62 status=ok
// SIG undefined FUN_144c49600(void)

bool FUN_144c49600(longlong param_1)

{
  float fVar1;
  float extraout_XMM0_Da;
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  fVar1 = *(float *)(param_1 + 0x2c);
  FUN_144ca5190(*(undefined8 *)(param_1 + 0x20),local_res8);
  return extraout_XMM0_Da + *(float *)(param_1 + 0x30) < fVar1;
}



// FUNCTION 144c49640 FUN_144c49640 body=56 status=ok
// SIG undefined FUN_144c49640(void)

undefined8 FUN_144c49640(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           (*(longlong *)
             (*(longlong *)
               ((longlong)*param_2 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38)) +
             0x38) + (longlong)*(int *)(param_1 + 4) * 0x18);
  if (*(char *)(puVar1 + 2) == '\x01') {
    return *puVar1;
  }
  uVar2 = FUN_144c3f6d0();
  return uVar2;
}



// FUNCTION 144c49680 FUN_144c49680 body=816 status=ok
// SIG undefined FUN_144c49680(void)

void FUN_144c49680(longlong param_1,uint param_2,undefined4 *param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  uint local_res10 [2];
  longlong local_res18;
  longlong local_98;
  int local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  int local_60;
  uint local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  uVar5 = (int)*(short *)((longlong)param_3 + 10) + (int)*(short *)(param_3 + 2);
  local_60 = 0;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar2 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar4;
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x3d0) + 0x10);
  local_58 = 0;
  if (*(longlong *)(lVar2 + 8) == 0) {
    local_58 = lVar2;
  }
  local_res18 = (longlong)(int)uVar5 * 0xc;
  local_48 = local_res18;
  if (local_58 == 0) {
    local_68 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar2 >> 8),1),&local_res18,0x40);
  }
  else {
    local_res8 = local_res18 + 0x3fU & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)(local_58 + 0x28)) {
      local_68 = *(longlong *)(local_58 + 0x38);
      if (local_68 + local_res8 <= *(ulonglong *)(local_58 + 0x40)) {
        *(ulonglong *)(local_58 + 0x38) = local_68 + local_res8;
        goto LAB_144c49784;
      }
    }
    local_68 = FUN_144b454a0(local_58,&local_res8);
  }
LAB_144c49784:
  local_78 = *param_4;
  lStack_70 = param_4[1];
  local_5c = uVar5 | 0x80000000;
  lVar2 = CONCAT44(param_5._4_4_,(undefined4)param_5);
  local_res10[0] = *(uint *)(lVar2 + 0x18);
  local_98 = 0;
  local_90 = 0;
  local_8c = 0x80000000;
  local_88 = CONCAT44(local_res10[0],local_res10[0]);
  uStack_80 = CONCAT44(local_res10[0],local_res10[0]);
  local_50 = local_68;
  FUN_144fdbae0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),param_2,param_3,
                &local_78,&local_88,&local_68,&local_98,param_6);
  local_88 = local_68;
  uStack_80 = local_68 + (longlong)local_60 * 0xc;
  local_res10[0] = param_3[1];
  param_5._0_4_ = *param_3;
  local_78 = local_68;
  lStack_70 = uStack_80;
  FUN_144fd39c0(lVar2,&param_5,(int)*(short *)(param_3 + 2),local_res10,
                (int)*(short *)((longlong)param_3 + 10),&local_78);
  local_88 = local_98;
  uStack_80 = local_98 + (longlong)local_90 * 4;
  local_res10[0] = param_2 & 0x3fffff;
  local_78 = local_98;
  lStack_70 = uStack_80;
  FUN_144fd3d90(lVar2,local_res10,&local_78);
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1] + 1;
    if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar6) {
      FUN_144c30fb0(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    puVar1 = (uint *)(*plVar3 + (longlong)(int)plVar3[1] * 4);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = param_2;
    }
    *(int *)(plVar3 + 1) = iVar6;
  }
  local_90 = 0;
  if ((-1 < (int)local_8c) && (local_98 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_98,(ulonglong)(local_8c & 0x7fffffff) << 2);
  }
  if (local_50 == local_68) {
    local_60 = 0;
  }
  local_98 = 0;
  local_8c = 0x80000000;
  if (local_58 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar7 = local_48 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_58 + 0x28) < uVar7) ||
       (uVar7 + local_50 != *(longlong *)(local_58 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_58 + 0x38) = local_50;
      if (*(longlong *)(local_58 + 0x48) == local_50) {
        FUN_144be8430();
      }
    }
  }
  local_60 = 0;
  if ((-1 < (int)local_5c) && (local_68 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) * 0xc);
  }
  return;
}



// FUNCTION 144c499b0 FUN_144c499b0 body=246 status=ok
// SIG undefined FUN_144c499b0(void)

uint FUN_144c499b0(longlong param_1,int *param_2,longlong *param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79b620);
  uVar10 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 4);
  if (uVar3 != 0xffffffff) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    cVar1 = *(char *)((int)uVar3 + lVar4);
    uVar11 = (ulonglong)uVar3;
    while (cVar1 != -1) {
      uVar6 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar6;
      uVar10 = uVar10 + 1;
      cVar1 = *(char *)((int)uVar6 + lVar4);
    }
    lVar5 = param_3[1];
    puVar8 = (undefined1 *)(lVar4 + (ulonglong)uVar3);
    iVar9 = (int)lVar5 + uVar10;
    if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar9) {
      FUN_144be4580(param_3,&PTR_vftable_14c6e47c0,(longlong)iVar9);
    }
    if (0 < (int)uVar10) {
      uVar11 = (ulonglong)uVar10;
      puVar7 = (undefined1 *)((longlong)(int)lVar5 + *param_3);
      do {
        if (puVar7 != (undefined1 *)0x0) {
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar7 = uVar2;
        }
        uVar11 = uVar11 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar11 != 0);
    }
    *(int *)(param_3 + 1) = iVar9;
    uVar10 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79b620);
  return uVar10;
}



// FUNCTION 144c49ab0 FUN_144c49ab0 body=247 status=ok
// SIG undefined FUN_144c49ab0(void)

void FUN_144c49ab0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c49bb0 FUN_144c49bb0 body=362 status=ok
// SIG undefined FUN_144c49bb0(void)

void FUN_144c49bb0(undefined8 *param_1)

{
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
               (ulonglong)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) * 0x18);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) << 3);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) << 2);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144c49d20 FUN_144c49d20 body=87 status=ok
// SIG undefined FUN_144c49d20(void)

undefined8 FUN_144c49d20(undefined8 param_1,ulonglong param_2)

{
  FUN_144c49bb0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 144c49d80 FUN_144c49d80 body=353 status=ok
// SIG undefined FUN_144c49d80(void)

undefined8 * FUN_144c49d80(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  param_1[2] = 1;
  *param_1 = hkaiNavVolumeInstance::vftable;
  puVar3 = (undefined8 *)0x0;
  local_res8 = 0xa0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar2,"hkaiNavVolumeInstanceData");
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0xffffffff;
    *puVar2 = hkaiNavVolumeInstanceData::vftable;
    puVar2[2] = 1;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0x80000000;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x80000000;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x6c) = 0x80000000;
    puVar2[0xe] = 0;
    *(undefined4 *)(puVar2 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x7c) = 0x80000000;
    puVar2[0x10] = 0;
    *(undefined4 *)(puVar2 + 0x11) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x8c) = 0xffffffff80000000;
    *(undefined4 *)((longlong)puVar2 + 0x94) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x13) = 0;
    puVar3 = puVar2;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  if ((undefined8 *)param_1[4] != puVar3) {
    if (puVar3 != (undefined8 *)0x0) {
      FUN_144b3d910(puVar3);
    }
    lVar1 = param_1[4];
    param_1[4] = puVar3;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar3);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 144c49ef0 FUN_144c49ef0 body=231 status=ok
// SIG undefined FUN_144c49ef0(void)

undefined8 * FUN_144c49ef0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong local_res8;
  
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  param_1[4] = 0;
  *param_1 = hkaiNavVolumeInstance::vftable;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
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
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0xb) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar5;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    puVar6 = (undefined8 *)FUN_144fe8800(*(longlong *)(param_2 + 0x68),&local_res8,param_1);
    uVar2 = *puVar6;
    *puVar6 = 0;
    lVar1 = param_1[0xd];
    param_1[0xd] = uVar2;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
    if (local_res8 != 0) {
      FUN_144b3f230();
    }
  }
  return param_1;
}



// FUNCTION 144c49fe0 FUN_144c49fe0 body=162 status=ok
// SIG undefined FUN_144c49fe0(void)

void FUN_144c49fe0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = CONCAT44(local_res8._4_4_,*param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = FUN_147e4bde2();
  }
  FUN_144c4a4e0(uVar2,param_2,&local_res8);
  local_res8 = 0x28;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkaiNavVolumeInstanceQueryMediator");
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144fe83d0(lVar1,param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144c4a090 FUN_144c4a090 body=49 status=ok
// SIG undefined FUN_144c4a090(void)

void FUN_144c4a090(longlong param_1,longlong param_2)

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



// FUNCTION 144c4a0d0 FUN_144c4a0d0 body=5 status=ok
// SIG undefined FUN_144c4a0d0(void)

void FUN_144c4a0d0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



// FUNCTION 144c4a0e0 FUN_144c4a0e0 body=166 status=ok
// SIG undefined FUN_144c4a0e0(void)

undefined8 * FUN_144c4a0e0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_1[0xd] != 0) {
    FUN_144b3f230();
  }
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
    FUN_144bda120(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 144c4a190 FUN_144c4a190 body=785 status=ok
// SIG undefined FUN_144c4a190(void)

undefined8 * FUN_144c4a190(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  puVar11 = param_1 + 8;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  plVar1 = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  puVar2 = param_1 + 0xe;
  param_1[2] = 1;
  puVar4 = param_1 + 0x10;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *param_1 = hkaiNavVolumeInstanceData::vftable;
  param_1[1] = 0xffffffff;
  param_1[7] = 0;
  *puVar11 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  puVar3 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_144b3d910();
    lVar9 = param_1[7];
    param_1[7] = *(undefined8 *)(param_2 + 0x38);
    if (lVar9 != 0) {
      FUN_144b3f230();
    }
  }
  if ((undefined8 *)(param_2 + 0x40) != puVar11) {
    iVar5 = *(int *)(param_2 + 0x48);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    if ((int)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) < iVar5) {
      FUN_141807e20(puVar11,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    FUN_144b3d470(*puVar11,uVar6,(longlong)iVar5 * 4);
    *(int *)(param_1 + 9) = iVar5;
  }
  if ((longlong *)(param_2 + 0x50) != plVar1) {
    iVar5 = *(int *)(param_2 + 0x58);
    puVar11 = *(undefined8 **)(param_2 + 0x50);
    if ((int)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) < iVar5) {
      FUN_144c4a930(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    puVar8 = (undefined8 *)*plVar1;
    iVar7 = iVar5;
    if (*(int *)(param_1 + 0xb) < iVar5) {
      iVar7 = *(int *)(param_1 + 0xb);
    }
    if ((puVar8 != puVar11) && (lVar9 = (longlong)iVar7, 0 < iVar7)) {
      lVar10 = (longlong)puVar11 - (longlong)puVar8;
      do {
        *puVar8 = *(undefined8 *)(lVar10 + (longlong)puVar8);
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    puVar11 = puVar11 + iVar7;
    if (0 < iVar5 - iVar7) {
      uVar12 = (ulonglong)(uint)(iVar5 - iVar7);
      puVar8 = (undefined8 *)(*plVar1 + (longlong)iVar7 * 8);
      do {
        if (puVar8 != (undefined8 *)0x0) {
          uVar6 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar8 = uVar6;
        }
        uVar12 = uVar12 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar12 != 0);
    }
    *(int *)(param_1 + 0xb) = iVar5;
  }
  if ((undefined8 *)(param_2 + 0x60) != puVar3) {
    iVar5 = *(int *)(param_2 + 0x68);
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < iVar5) {
      FUN_144c4a7e0(puVar3,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    FUN_144b3d470(*puVar3,uVar6,(longlong)iVar5 * 8);
    *(int *)(param_1 + 0xd) = iVar5;
  }
  if ((undefined8 *)(param_2 + 0x70) != puVar2) {
    iVar5 = *(int *)(param_2 + 0x78);
    uVar6 = *(undefined8 *)(param_2 + 0x70);
    if ((int)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) < iVar5) {
      FUN_144c4a880(puVar2,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    FUN_144b3d470(*puVar2,uVar6,(longlong)iVar5 * 0x18);
    *(int *)(param_1 + 0xf) = iVar5;
  }
  if ((undefined8 *)(param_2 + 0x80) != puVar4) {
    iVar5 = *(int *)(param_2 + 0x88);
    uVar6 = *(undefined8 *)(param_2 + 0x80);
    if ((int)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) < iVar5) {
      FUN_141807e20(puVar4,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    FUN_144b3d470(*puVar4,uVar6,(longlong)iVar5 * 4);
    *(int *)(param_1 + 0x11) = iVar5;
  }
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  return param_1;
}



// FUNCTION 144c4a4e0 FUN_144c4a4e0 body=225 status=ok
// SIG undefined FUN_144c4a4e0(void)

void FUN_144c4a4e0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 0x90) = *param_3;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  *(longlong *)(param_1 + 0x38) = param_2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar1) {
    FUN_141807aa8(param_1 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x48) = iVar1;
    if (0 < iVar1 - iVar2) {
      uVar4 = (ulonglong)(uint)(iVar1 - iVar2);
      puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 4);
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
    *(int *)(param_1 + 0x48) = iVar1;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



// FUNCTION 144c4a5d0 FUN_144c4a5d0 body=247 status=ok
// SIG undefined FUN_144c4a5d0(void)

void FUN_144c4a5d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c4a6d0 FUN_144c4a6d0 body=269 status=ok
// SIG undefined FUN_144c4a6d0(void)

void FUN_144c4a6d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c4a7e0 FUN_144c4a7e0 body=159 status=ok
// SIG undefined FUN_144c4a7e0(void)

void FUN_144c4a7e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c4a880 FUN_144c4a880 body=163 status=ok
// SIG undefined FUN_144c4a880(void)

void FUN_144c4a880(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c4a930 FUN_144c4a930 body=188 status=ok
// SIG undefined FUN_144c4a930(void)

void FUN_144c4a930(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c4a9f0 FUN_144c4a9f0 body=719 status=ok
// SIG undefined FUN_144c4a9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c4a9f0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar17 [16];
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  
  uVar12 = param_2 >> 0x16;
  if (*(uint *)(param_1 + 0x10) != uVar12) {
    param_1[0xe] = *(longlong *)((ulonglong)uVar12 * 0x120 + 8 + *(longlong *)(*param_1 + 0x38));
    *(uint *)(param_1 + 0x10) = uVar12;
  }
  uVar13 = (ulonglong)(param_2 & 0x3fffff);
  lVar3 = *(longlong *)(*(longlong *)(param_1[0xe] + 0x20) + 0x18);
  lVar1 = lVar3 + uVar13 * 0x18;
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(lVar3 + uVar13 * 0x18);
  *(undefined2 *)((longlong)param_1 + 0x8a) = *(undefined2 *)(lVar1 + 2);
  *(undefined2 *)((longlong)param_1 + 0x8c) = *(undefined2 *)(lVar1 + 4);
  *(undefined2 *)((longlong)param_1 + 0x8e) = *(undefined2 *)(lVar1 + 6);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(lVar1 + 8);
  *(undefined2 *)((longlong)param_1 + 0x92) = *(undefined2 *)(lVar1 + 10);
  *(undefined2 *)((longlong)param_1 + 0x94) = *(undefined2 *)(lVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(lVar1 + 0x14);
  lVar1 = *(longlong *)(param_1[0xe] + 0x20);
  if ((*(int *)(lVar1 + 0x48) == 0) ||
     (iVar2 = *(int *)(*(longlong *)(lVar1 + 0x40) + uVar13 * 4), iVar2 == -1)) {
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    param_1[0x14] = *(longlong *)(*(longlong *)(lVar1 + 0x50) + (longlong)iVar2 * 8);
  }
  auVar17 = *(undefined1 (*) [16])(param_1 + 0x11);
  lVar1 = param_1[0xe];
  param_1[0x1b] = (longlong)(param_1 + 0x11);
  *(uint *)(param_1 + 0x1a) = param_2;
  auVar7._10_2_ = 0;
  auVar7._0_10_ = auVar17._0_10_;
  auVar7._12_2_ = auVar17._6_2_;
  auVar8._8_2_ = auVar17._4_2_;
  auVar8._0_8_ = auVar17._0_8_;
  auVar8._10_4_ = auVar7._10_4_;
  auVar10._6_8_ = 0;
  auVar10._0_6_ = auVar8._8_6_;
  auVar9._4_2_ = auVar17._2_2_;
  auVar9._0_4_ = auVar17._0_4_;
  auVar9._6_8_ = SUB148(auVar10 << 0x40,6);
  lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x38);
  fVar24 = *(float *)(lVar3 + 0xa0);
  fVar27 = *(float *)(lVar3 + 0xa4);
  fVar28 = *(float *)(lVar3 + 0xa8);
  fVar29 = *(float *)(lVar3 + 0xac);
  fVar30 = *(float *)(lVar3 + 0xb0);
  fVar33 = *(float *)(lVar3 + 0xb4);
  fVar34 = *(float *)(lVar3 + 0xb8);
  fVar35 = *(float *)(lVar3 + 0xbc);
  auVar32._0_4_ = ((float)(auVar17._0_4_ & 0xffff) + 0.0) * fVar24 + fVar30;
  auVar32._4_4_ = ((float)auVar9._4_4_ + 0.0) * fVar27 + fVar33;
  auVar32._8_4_ =
       ((float)(auVar8._8_4_ >> 0x10) * 65536.0 + (float)(auVar8._8_4_ & 0xffff)) * fVar28 + fVar34;
  auVar32._12_4_ = ((float)auVar17._6_2_ + 0.0) * fVar29 + fVar35;
  *(undefined1 (*) [16])(param_1 + 0x1e) = auVar32;
  auVar26._0_4_ = ((float)auVar17._8_2_ + 0.0) * fVar24 + fVar30;
  auVar26._4_4_ = ((float)auVar17._10_2_ + 0.0) * fVar27 + fVar33;
  auVar26._8_4_ = ((float)auVar17._12_2_ + 0.0) * fVar28 + fVar34;
  auVar26._12_4_ = ((float)auVar17._14_2_ + 0.0) * fVar29 + fVar35;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar26;
  if (*(byte *)(lVar1 + 0x40) != 0) {
    uVar14 = (uint)*(byte *)(lVar1 + 0x40);
    uVar21 = -(uint)(0x16a8300 << uVar14 < 0);
    uVar22 = -(uint)(0x502ab000 << uVar14 < 0);
    uVar23 = -(uint)(0xa2a8c00 << uVar14 < 0);
    uVar12 = -(uint)(0xa154c00 << uVar14 < 0);
    uVar5 = -(uint)(0x1554300 << uVar14 < 0);
    uVar6 = -(uint)(0x50157000 << uVar14 < 0);
    uVar13 = (ulonglong)uVar14;
    uVar16 = (0xae71e0U >> uVar13) << 0x1f;
    uVar18 = (0xb9e306U >> uVar13) << 0x1f;
    uVar19 = (0xeb903cU >> uVar13) << 0x1f;
    uVar20 = (0U >> uVar13) << 0x1f;
    uVar11 = CONCAT44(uVar18 ^ (~uVar5 & ((uint)auVar32._8_4_ & uVar22 |
                                         ~uVar22 & (uint)auVar32._4_4_) |
                               (uint)auVar32._0_4_ & uVar5),
                      uVar16 ^ (~uVar12 & ((uint)auVar32._4_4_ & uVar21 |
                                          ~uVar21 & (uint)auVar32._0_4_) |
                               (uint)auVar32._8_4_ & uVar12));
    uVar14 = uVar19 ^ (~uVar6 & ((uint)auVar32._0_4_ & uVar23 | ~uVar23 & (uint)auVar32._8_4_) |
                      (uint)auVar32._4_4_ & uVar6);
    uVar15 = uVar20 ^ (uint)auVar32._12_4_;
    auVar31._8_4_ = uVar14;
    auVar31._0_8_ = uVar11;
    auVar31._12_4_ = uVar15;
    auVar25._8_4_ = uVar14;
    auVar25._0_8_ = uVar11;
    auVar25._12_4_ = uVar15;
    auVar17._0_4_ =
         uVar16 ^ (~uVar12 & ((uint)auVar26._4_4_ & uVar21 | ~uVar21 & (uint)auVar26._0_4_) |
                  (uint)auVar26._8_4_ & uVar12);
    auVar17._4_4_ =
         uVar18 ^ (~uVar5 & ((uint)auVar26._8_4_ & uVar22 | ~uVar22 & (uint)auVar26._4_4_) |
                  (uint)auVar26._0_4_ & uVar5);
    auVar17._8_4_ =
         uVar19 ^ (~uVar6 & ((uint)auVar26._0_4_ & uVar23 | ~uVar23 & (uint)auVar26._8_4_) |
                  (uint)auVar26._4_4_ & uVar6);
    auVar17._12_4_ = uVar20 ^ (uint)auVar26._12_4_;
    auVar32 = minps(auVar31,auVar17);
    auVar26 = maxps(auVar25,auVar17);
    *(undefined1 (*) [16])(param_1 + 0x1e) = auVar32;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar26;
  }
  fVar30 = auVar32._0_4_ + *(float *)(lVar1 + 0x50);
  fVar33 = auVar32._4_4_ + *(float *)(lVar1 + 0x54);
  fVar34 = auVar32._8_4_ + *(float *)(lVar1 + 0x58);
  fVar35 = auVar32._12_4_ + *(float *)(lVar1 + 0x5c);
  *(float *)(param_1 + 0x1e) = fVar30;
  *(float *)((longlong)param_1 + 0xf4) = fVar33;
  *(float *)(param_1 + 0x1f) = fVar34;
  *(float *)((longlong)param_1 + 0xfc) = fVar35;
  fVar24 = auVar26._0_4_ + *(float *)(lVar1 + 0x50);
  fVar27 = auVar26._4_4_ + *(float *)(lVar1 + 0x54);
  fVar28 = auVar26._8_4_ + *(float *)(lVar1 + 0x58);
  fVar29 = auVar26._12_4_ + *(float *)(lVar1 + 0x5c);
  *(float *)(param_1 + 0x20) = fVar24;
  *(float *)((longlong)param_1 + 0x104) = fVar27;
  *(float *)(param_1 + 0x21) = fVar28;
  *(float *)((longlong)param_1 + 0x10c) = fVar29;
  if (param_2 == *(uint *)(param_1 + 8)) {
    param_1[0x1c] = param_1[6];
    param_1[0x1d] = param_1[7];
  }
  else {
    fVar27 = (fVar27 + fVar33) * fRam000000014c6dad94;
    fVar28 = (fVar28 + fVar34) * fRam000000014c6dad98;
    fVar29 = (fVar29 + fVar35) * fRam000000014c6dad9c;
    *(float *)(param_1 + 0x1c) = (fVar24 + fVar30) * _DAT_14c6dad90;
    *(float *)((longlong)param_1 + 0xe4) = fVar27;
    *(float *)(param_1 + 0x1d) = fVar28;
    *(float *)((longlong)param_1 + 0xec) = fVar29;
  }
  piVar4 = (int *)param_1[0xd];
  uVar11 = FUN_144c33310(piVar4);
  piVar4[0x10] = (int)(short)((longlong)(ulonglong)(uint)((int)uVar11 - *piVar4) >> 4);
  *(undefined8 *)(piVar4 + 0x12) = uVar11;
  *(undefined8 *)(piVar4 + 0x14) = uVar11;
  return;
}



// FUNCTION 144c4acc0 FUN_144c4acc0 body=980 status=ok
// SIG undefined FUN_144c4acc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c4acc0(longlong param_1,uint param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [14];
  uint *puVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar24;
  undefined1 auVar23 [16];
  uint uVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar15 = (ulonglong)(param_2 & 0x3fffff);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20) + 0x18);
  *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(lVar2 + uVar15 * 0x18);
  *(undefined2 *)(param_1 + 0xb2) = *(undefined2 *)(lVar2 + 2 + uVar15 * 0x18);
  *(undefined2 *)(param_1 + 0xb4) = *(undefined2 *)(lVar2 + 4 + uVar15 * 0x18);
  *(undefined2 *)(param_1 + 0xb6) = *(undefined2 *)(lVar2 + 6 + uVar15 * 0x18);
  *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(lVar2 + 8 + uVar15 * 0x18);
  *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(lVar2 + 10 + uVar15 * 0x18);
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(lVar2 + 0xc + uVar15 * 0x18);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar2 + 0x10 + uVar15 * 0x18);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(lVar2 + 0x14 + uVar15 * 0x18);
  auVar23 = *(undefined1 (*) [16])(param_1 + 0xb0);
  lVar2 = *(longlong *)(param_1 + 0x78);
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar23._0_10_;
  auVar5._12_2_ = auVar23._6_2_;
  auVar6._8_2_ = auVar23._4_2_;
  auVar6._0_8_ = auVar23._0_8_;
  auVar6._10_4_ = auVar5._10_4_;
  auVar12._6_8_ = 0;
  auVar12._0_6_ = auVar6._8_6_;
  auVar7._4_2_ = auVar23._2_2_;
  auVar7._0_4_ = auVar23._0_4_;
  auVar7._6_8_ = SUB148(auVar12 << 0x40,6);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x38);
  fVar18 = *(float *)(lVar3 + 0xa0);
  fVar19 = *(float *)(lVar3 + 0xa4);
  fVar20 = *(float *)(lVar3 + 0xa8);
  fVar22 = *(float *)(lVar3 + 0xac);
  fVar8 = *(float *)(lVar3 + 0xb0);
  fVar9 = *(float *)(lVar3 + 0xb4);
  fVar10 = *(float *)(lVar3 + 0xb8);
  fVar11 = *(float *)(lVar3 + 0xbc);
  auVar37._0_4_ = ((float)(auVar23._0_4_ & 0xffff) + 0.0) * fVar18 + fVar8;
  auVar37._4_4_ = ((float)auVar7._4_4_ + 0.0) * fVar19 + fVar9;
  auVar37._8_4_ =
       ((float)(auVar6._8_4_ >> 0x10) * 65536.0 + (float)(auVar6._8_4_ & 0xffff)) * fVar20 + fVar10;
  auVar37._12_4_ = ((float)auVar23._6_2_ + 0.0) * fVar22 + fVar11;
  *(undefined1 (*) [16])(param_1 + 0x130) = auVar37;
  auVar40._0_4_ = ((float)auVar23._8_2_ + 0.0) * fVar18 + fVar8;
  auVar40._4_4_ = ((float)auVar23._10_2_ + 0.0) * fVar19 + fVar9;
  auVar40._8_4_ = ((float)auVar23._12_2_ + 0.0) * fVar20 + fVar10;
  auVar40._12_4_ = ((float)auVar23._14_2_ + 0.0) * fVar22 + fVar11;
  *(undefined1 (*) [16])(param_1 + 0x140) = auVar40;
  if (*(byte *)(lVar2 + 0x40) != 0) {
    uVar27 = (uint)*(byte *)(lVar2 + 0x40);
    uVar33 = -(uint)(0x16a8300 << uVar27 < 0);
    uVar34 = -(uint)(0x502ab000 << uVar27 < 0);
    uVar35 = -(uint)(0xa2a8c00 << uVar27 < 0);
    uVar24 = -(uint)(0xa154c00 << uVar27 < 0);
    uVar21 = -(uint)(0x1554300 << uVar27 < 0);
    uVar25 = -(uint)(0x50157000 << uVar27 < 0);
    uVar15 = (ulonglong)uVar27;
    uVar29 = (0xae71e0U >> uVar15) << 0x1f;
    uVar30 = (0xb9e306U >> uVar15) << 0x1f;
    uVar31 = (0xeb903cU >> uVar15) << 0x1f;
    uVar32 = (0U >> uVar15) << 0x1f;
    uVar26 = CONCAT44(uVar30 ^ (~uVar21 & ((uint)auVar37._8_4_ & uVar34 |
                                          ~uVar34 & (uint)auVar37._4_4_) |
                               (uint)auVar37._0_4_ & uVar21),
                      uVar29 ^ (~uVar24 & ((uint)auVar37._4_4_ & uVar33 |
                                          ~uVar33 & (uint)auVar37._0_4_) |
                               (uint)auVar37._8_4_ & uVar24));
    uVar27 = uVar31 ^ (~uVar25 & ((uint)auVar37._0_4_ & uVar35 | ~uVar35 & (uint)auVar37._8_4_) |
                      (uint)auVar37._4_4_ & uVar25);
    uVar28 = uVar32 ^ (uint)auVar37._12_4_;
    auVar36._8_4_ = uVar27;
    auVar36._0_8_ = uVar26;
    auVar36._12_4_ = uVar28;
    auVar39._8_4_ = uVar27;
    auVar39._0_8_ = uVar26;
    auVar39._12_4_ = uVar28;
    auVar23._0_4_ =
         uVar29 ^ (~uVar24 & ((uint)auVar40._4_4_ & uVar33 | ~uVar33 & (uint)auVar40._0_4_) |
                  (uint)auVar40._8_4_ & uVar24);
    auVar23._4_4_ =
         uVar30 ^ (~uVar21 & ((uint)auVar40._8_4_ & uVar34 | ~uVar34 & (uint)auVar40._4_4_) |
                  (uint)auVar40._0_4_ & uVar21);
    auVar23._8_4_ =
         uVar31 ^ (~uVar25 & ((uint)auVar40._0_4_ & uVar35 | ~uVar35 & (uint)auVar40._8_4_) |
                  (uint)auVar40._4_4_ & uVar25);
    auVar23._12_4_ = uVar32 ^ (uint)auVar40._12_4_;
    auVar37 = minps(auVar36,auVar23);
    auVar40 = maxps(auVar39,auVar23);
    *(undefined1 (*) [16])(param_1 + 0x130) = auVar37;
    *(undefined1 (*) [16])(param_1 + 0x140) = auVar40;
  }
  auVar38._0_4_ = auVar37._0_4_ + *(float *)(lVar2 + 0x50);
  auVar38._4_4_ = auVar37._4_4_ + *(float *)(lVar2 + 0x54);
  auVar38._8_4_ = auVar37._8_4_ + *(float *)(lVar2 + 0x58);
  auVar38._12_4_ = auVar37._12_4_ + *(float *)(lVar2 + 0x5c);
  *(undefined1 (*) [16])(param_1 + 0x130) = auVar38;
  auVar41._0_4_ = auVar40._0_4_ + *(float *)(lVar2 + 0x50);
  auVar41._4_4_ = auVar40._4_4_ + *(float *)(lVar2 + 0x54);
  auVar41._8_4_ = auVar40._8_4_ + *(float *)(lVar2 + 0x58);
  auVar41._12_4_ = auVar40._12_4_ + *(float *)(lVar2 + 0x5c);
  uVar15 = 0;
  *(undefined1 (*) [16])(param_1 + 0x140) = auVar41;
  puVar13 = *(uint **)(param_1 + 0x58);
  iVar14 = (int)(*(longlong *)(param_1 + 0x60) - (longlong)puVar13 >> 2);
  if (0 < iVar14) {
    uVar17 = uVar15;
    do {
      iVar16 = (int)uVar17;
      if (*puVar13 == param_2) {
        if (-1 < iVar16) {
          pfVar1 = (float *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar16 * 0x10);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar22 = pfVar1[3];
          goto LAB_144c4af09;
        }
        break;
      }
      uVar17 = (ulonglong)(iVar16 + 1);
      uVar15 = uVar15 + 1;
      puVar13 = puVar13 + 1;
    } while ((longlong)uVar15 < (longlong)iVar14);
  }
  fVar18 = (auVar41._0_4_ + auVar38._0_4_) * _DAT_14c6dad90;
  fVar19 = (auVar41._4_4_ + auVar38._4_4_) * fRam000000014c6dad94;
  fVar20 = (auVar41._8_4_ + auVar38._8_4_) * fRam000000014c6dad98;
  fVar22 = (auVar41._12_4_ + auVar38._12_4_) * fRam000000014c6dad9c;
LAB_144c4af09:
  *(uint *)(param_1 + 0x110) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x160);
  *(float *)(param_1 + 0x120) = fVar18;
  *(float *)(param_1 + 0x124) = fVar19;
  *(float *)(param_1 + 0x128) = fVar20;
  *(float *)(param_1 + 300) = fVar22;
  *(longlong *)(param_1 + 0x118) = param_1 + 0xb0;
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x38);
    fVar18 = (float)*(ushort *)(lVar2 + 8) * *(float *)(lVar4 + 0xa0) + *(float *)(lVar4 + 0xb0);
    fVar19 = (float)*(ushort *)(lVar2 + 10) * *(float *)(lVar4 + 0xa4) + *(float *)(lVar4 + 0xb4);
    fVar20 = (float)*(ushort *)(lVar2 + 0xc) * *(float *)(lVar4 + 0xa8) + *(float *)(lVar4 + 0xb8);
    fVar22 = *(float *)(lVar4 + 0xac) * 0.0 + *(float *)(lVar4 + 0xbc);
    if (*(byte *)(lVar3 + 0x40) != 0) {
      uVar24 = (uint)*(byte *)(lVar3 + 0x40);
      uVar29 = -(uint)(0x16a8300 << uVar24 < 0);
      uVar30 = -(uint)(0x502ab000 << uVar24 < 0);
      uVar31 = -(uint)(0xa2a8c00 << uVar24 < 0);
      uVar25 = -(uint)(0xa154c00 << uVar24 < 0);
      uVar27 = -(uint)(0x1554300 << uVar24 < 0);
      uVar28 = -(uint)(0x50157000 << uVar24 < 0);
      uVar21 = (uint)fVar18 & uVar31;
      uVar32 = (uint)fVar18 & uVar27;
      uVar33 = (uint)fVar19 & uVar28;
      uVar15 = (ulonglong)uVar24;
      fVar18 = (float)((0xae71e0U >> uVar15) << 0x1f ^
                      (~uVar25 & ((uint)fVar19 & uVar29 | ~uVar29 & (uint)fVar18) |
                      (uint)fVar20 & uVar25));
      fVar19 = (float)((0xb9e306U >> uVar15) << 0x1f ^
                      (~uVar27 & ((uint)fVar20 & uVar30 | ~uVar30 & (uint)fVar19) | uVar32));
      fVar20 = (float)((0xeb903cU >> uVar15) << 0x1f ^
                      (~uVar28 & (uVar21 | ~uVar31 & (uint)fVar20) | uVar33));
      fVar22 = (float)((0U >> uVar15) << 0x1f ^ (uint)fVar22);
    }
    fVar18 = fVar18 + *(float *)(lVar3 + 0x50);
    fVar19 = fVar19 + *(float *)(lVar3 + 0x54);
    fVar20 = fVar20 + *(float *)(lVar3 + 0x58);
    fVar22 = fVar22 + *(float *)(lVar3 + 0x5c);
    *(float *)(param_1 + 0x1a0) = fVar18;
    *(float *)(param_1 + 0x1a4) = fVar19;
    *(float *)(param_1 + 0x1a8) = fVar20;
    *(float *)(param_1 + 0x1ac) = fVar22;
    *(float *)(param_1 + 0x1b0) = fVar18;
    *(float *)(param_1 + 0x1b4) = fVar19;
    *(float *)(param_1 + 0x1b8) = fVar20;
    *(float *)(param_1 + 0x1bc) = fVar22;
    return;
  }
  auVar23 = maxps(*(undefined1 (*) [16])(param_1 + 0xf0),auVar38);
  auVar40 = minps(*(undefined1 (*) [16])(param_1 + 0x100),auVar41);
  auVar37 = maxps(auVar23,auVar40);
  auVar23 = minps(auVar23,auVar40);
  *(undefined1 (*) [16])(param_1 + 400) = auVar37;
  *(undefined1 (*) [16])(param_1 + 0x180) = auVar23;
  uVar26 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  *(ulonglong *)(param_1 + 0x1a0) = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  *(undefined8 *)(param_1 + 0x1a8) = uVar26;
  uVar24 = uRam000000014c6dae84 ^ 0x80000000;
  uVar21 = uRam000000014c6dae88 ^ 0x80000000;
  uVar25 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)(param_1 + 0x1b0) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)(param_1 + 0x1b4) = uVar24;
  *(uint *)(param_1 + 0x1b8) = uVar21;
  *(uint *)(param_1 + 0x1bc) = uVar25;
  return;
}



// FUNCTION 144c4b0a0 FUN_144c4b0a0 body=347 status=ok
// SIG undefined FUN_144c4b0a0(void)

void FUN_144c4b0a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint local_18 [4];
  
  if (((*(uint *)(param_1 + 0x128) & 0x7fffffff) != 0) && (1 < (int)param_2[1])) {
    iVar9 = (int)param_2[1] + -1;
    if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar9) {
      FUN_144c4c340(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    iVar2 = (int)param_3[1];
    if (iVar2 < iVar9) {
      *(int *)(param_3 + 1) = iVar9;
      if (0 < iVar9 - iVar2) {
        uVar6 = (ulonglong)(uint)(iVar9 - iVar2);
        puVar7 = (undefined4 *)(*param_3 + (longlong)iVar2 * 4);
        do {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0xffffffff;
          }
          uVar6 = uVar6 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar6 != 0);
      }
    }
    else if (iVar9 < iVar2) {
      *(int *)(param_3 + 1) = iVar9;
    }
    if (0 < (longlong)iVar9) {
      lVar11 = 0;
      local_18[0] = 0xffffffff;
      do {
        lVar10 = *param_2;
        uVar1 = *(uint *)(param_1 + 300);
        iVar2 = *(int *)(lVar10 + 4 + lVar11 * 4);
        if (0 < (int)uVar1) {
          lVar3 = *(longlong *)(param_1 + 0x120);
          uVar5 = iVar2 * -0x61c8864f;
          uVar6 = (ulonglong)
                  ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                   iVar2 * -0x4f000000) & uVar1);
          lVar8 = uVar6 * 8;
          if (*(int *)(lVar3 + uVar6 * 8) != -1) {
            do {
              if (*(int *)(lVar3 + lVar8) == iVar2) {
                puVar4 = (uint *)(lVar3 + lVar8 + 4);
                lVar10 = *param_2;
                goto LAB_144c4b1bb;
              }
              uVar6 = (ulonglong)((int)uVar6 + 1U & uVar1);
              lVar8 = uVar6 * 8;
            } while (*(int *)(lVar8 + lVar3) != -1);
            lVar10 = *param_2;
          }
        }
        puVar4 = local_18;
LAB_144c4b1bb:
        if (*puVar4 != 0xffffffff) {
          *(uint *)(*param_3 + lVar11 * 4) = *(uint *)(lVar10 + lVar11 * 4) & 0xffc00000 | *puVar4;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar9);
    }
  }
  return;
}



// FUNCTION 144c4b200 FUN_144c4b200 body=544 status=ok
// SIG undefined FUN_144c4b200(void)

void FUN_144c4b200(longlong *param_1,float param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  float *pfVar8;
  ushort uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 in_XMM3 [16];
  undefined1 auVar19 [16];
  
  plVar3 = (longlong *)*param_1;
  uVar11 = (uint)param_2 >> 0x16;
  if (*(uint *)((longlong)plVar3 + 0x84) != uVar11) {
    plVar3[0xf] = *(longlong *)((ulonglong)uVar11 * 0x120 + 8 + *(longlong *)(*plVar3 + 0x38));
    *(uint *)((longlong)plVar3 + 0x84) = uVar11;
  }
  FUN_144c4acc0(*param_1,param_2);
  lVar4 = *param_1;
  uVar5 = param_3[1];
  *(undefined8 *)(lVar4 + 0x120) = *param_3;
  *(undefined8 *)(lVar4 + 0x128) = uVar5;
  puVar6 = (undefined4 *)FUN_144c33310(param_1 + 2,param_2);
  *puVar6 = 0;
  lVar4 = param_1[0x10];
  fVar16 = *(float *)(lVar4 + 0x120) - *(float *)(param_1 + 0x12);
  fVar17 = *(float *)(lVar4 + 0x124) - *(float *)((longlong)param_1 + 0x94);
  fVar18 = *(float *)(lVar4 + 0x128) - *(float *)(param_1 + 0x13);
  fVar16 = fVar16 * fVar16;
  fVar17 = fVar17 * fVar17;
  fVar18 = fVar18 * fVar18;
  auVar19._4_4_ = fVar17 + fVar16 + fVar18;
  auVar19._0_4_ = fVar17 + fVar16 + fVar18;
  auVar19._8_4_ = fVar17 + fVar16 + fVar18;
  auVar19._12_4_ = fVar17 + fVar16 + fVar18;
  auVar19 = sqrtps(in_XMM3,auVar19);
  if (1 < (longlong)(int)param_1[0x11]) {
    pfVar8 = (float *)(param_1 + 0x16);
    lVar7 = (longlong)(int)param_1[0x11] + -1;
    do {
      fVar16 = *(float *)(lVar4 + 0x120) - *pfVar8;
      fVar17 = *(float *)(lVar4 + 0x124) - pfVar8[1];
      fVar18 = *(float *)(lVar4 + 0x128) - pfVar8[2];
      pfVar8 = pfVar8 + 8;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      auVar14._4_4_ = fVar16;
      auVar14._0_4_ = fVar16;
      auVar14._8_4_ = fVar16;
      auVar14._12_4_ = fVar16;
      auVar15._4_4_ = fVar17 + fVar16 + fVar18;
      auVar15._0_4_ = fVar17 + fVar16 + fVar18;
      auVar15._8_4_ = fVar17 + fVar16 + fVar18;
      auVar15._12_4_ = fVar17 + fVar16 + fVar18;
      auVar15 = sqrtps(auVar14,auVar15);
      auVar19 = minps(auVar19,auVar15);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  fVar16 = auVar19._0_4_;
  puVar6[1] = fVar16;
  *(ushort *)((longlong)puVar6 + 0xe) = *(ushort *)((longlong)puVar6 + 0xe) | 5;
  if (fVar16 < *(float *)((longlong)param_1 + 0x44)) {
    *(float *)((longlong)param_1 + 0x44) = fVar16;
    *(float *)(param_1 + 8) = param_2;
  }
  if ((float)puVar6[1] <= 3.40282e+38 && (float)puVar6[1] != 3.40282e+38) {
    uVar9 = *(ushort *)(param_1[4] + (ulonglong)((uint)((int)param_2 * -0x61c8864f) >> 0x18) * 2);
    if (-1 < (short)uVar9) {
      do {
        pfVar8 = (float *)((ulonglong)uVar9 * 0x10 + param_1[2]);
        if (pfVar8[2] == param_2) goto LAB_144c4b382;
        uVar9 = *(ushort *)(param_1[3] + (ulonglong)uVar9 * 2);
      } while (-1 < (short)uVar9);
    }
    pfVar8 = (float *)(param_1 + 6);
LAB_144c4b382:
    uVar11 = *(uint *)(param_1 + 0xf);
    uVar13 = (ulonglong)(int)uVar11;
    fVar16 = pfVar8[1];
    fVar17 = *pfVar8;
    lVar4 = param_1[0xe];
    *(uint *)(param_1 + 0xf) = uVar11 + 1;
    *(float *)(lVar4 + 4 + uVar13 * 8) = *(float *)((longlong)param_1 + 0x4c) * fVar16 + fVar17;
    *(float *)(lVar4 + uVar13 * 8) = param_2;
    uVar1 = *(undefined4 *)(param_1[0xe] + uVar13 * 8);
    iVar2 = *(int *)(param_1[0xe] + 4 + uVar13 * 8);
    while (0 < (int)uVar11) {
      uVar12 = (int)(uVar11 - 1) / 2;
      uVar11 = (uint)uVar13;
      lVar4 = param_1[0xe];
      if (*(int *)(lVar4 + 4 + (longlong)(int)uVar12 * 8) <= iVar2) break;
      uVar10 = uVar13 & 0xffffffff;
      uVar13 = (ulonglong)uVar12;
      *(undefined8 *)(lVar4 + uVar10 * 8) = *(undefined8 *)(lVar4 + (longlong)(int)uVar12 * 8);
      uVar11 = uVar12;
    }
    *(undefined4 *)(param_1[0xe] + (longlong)(int)uVar11 * 8) = uVar1;
    *(int *)(param_1[0xe] + 4 + (longlong)(int)uVar11 * 8) = iVar2;
  }
  return;
}



// FUNCTION 144c4b420 FUN_144c4b420 body=183 status=ok
// SIG undefined FUN_144c4b420(void)

int FUN_144c4b420(longlong *param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_144c4b650(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  iVar2 = *param_3;
  iVar8 = 1;
  lVar4 = *param_1;
  uVar6 = iVar2 * -0x61c8864f;
  uVar6 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar2 * -0x4f000000) &
          *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)uVar6;
  iVar3 = *(int *)(lVar4 + uVar7 * 8);
  do {
    if (iVar3 == -1) {
LAB_144c4b498:
      *(int *)(param_1 + 1) = (int)param_1[1] + iVar8;
      piVar1 = (int *)((longlong)(int)uVar6 * 8 + lVar4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = *param_3;
      }
      puVar5 = (undefined4 *)(*param_1 + 4 + (longlong)(int)uVar6 * 8);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_4;
      }
      return iVar8;
    }
    uVar6 = (uint)uVar7;
    if (iVar3 == iVar2) {
      iVar8 = 0;
      goto LAB_144c4b498;
    }
    uVar6 = uVar6 + 1 & *(uint *)((longlong)param_1 + 0xc);
    uVar7 = (ulonglong)uVar6;
    iVar3 = *(int *)(lVar4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144c4b4e0 FUN_144c4b4e0 body=355 status=ok
// SIG undefined FUN_144c4b4e0(void)

undefined4 * FUN_144c4b4e0(longlong *param_1,undefined4 *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar7 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar7) {
    iVar2 = *param_3;
    uVar5 = iVar2 * -0x61c8864f;
    uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar2 * -0x4f000000)
            & uVar7;
    uVar8 = (ulonglong)uVar5;
    iVar3 = *(int *)(*param_1 + uVar8 * 8);
    while (iVar3 != -1) {
      if (iVar3 == iVar2) goto LAB_144c4b533;
      uVar5 = (int)uVar8 + 1U & uVar7;
      uVar8 = (ulonglong)uVar5;
      iVar3 = *(int *)(*param_1 + uVar8 * 8);
    }
  }
  uVar5 = uVar7 + 1;
LAB_144c4b533:
  if ((int)uVar7 < (int)uVar5) {
    *param_2 = 0x80040200;
    return param_2;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined4 *)(*param_1 + (ulonglong)uVar5 * 8) = 0xffffffff;
  uVar7 = *(uint *)((longlong)param_1 + 0xc);
  lVar4 = *param_1;
  uVar9 = uVar7 + uVar5 & uVar7;
  uVar8 = (ulonglong)uVar9;
  iVar2 = *(int *)(lVar4 + uVar8 * 8);
  while (iVar2 != -1) {
    uVar9 = (int)uVar8 + uVar7 & uVar7;
    uVar8 = (ulonglong)uVar9;
    iVar2 = *(int *)(lVar4 + uVar8 * 8);
  }
  uVar8 = (ulonglong)(uVar5 + 1 & uVar7);
  uVar9 = uVar9 + 1 & uVar7;
  lVar1 = uVar8 * 8;
  iVar2 = *(int *)(lVar1 + lVar4);
  while (iVar2 != -1) {
    uVar6 = *(int *)(lVar1 + lVar4) * -0x61c8864f;
    uVar7 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
            *(int *)(lVar1 + lVar4) * -0x4f000000) & uVar7;
    uVar6 = (uint)uVar8;
    if ((((uVar6 < uVar9) || (uVar7 <= uVar5)) &&
        ((uVar5 <= uVar6 || ((uVar7 <= uVar5 && (uVar6 < uVar7)))))) &&
       ((uVar7 <= uVar5 || (uVar9 <= uVar7)))) {
      FUN_144b3d470(lVar4 + (ulonglong)uVar5 * 8,lVar1 + lVar4,8);
      *(undefined4 *)(lVar1 + *param_1) = 0xffffffff;
      uVar5 = uVar6;
    }
    uVar7 = *(uint *)((longlong)param_1 + 0xc);
    lVar4 = *param_1;
    uVar8 = (ulonglong)(uVar6 + 1 & uVar7);
    lVar1 = uVar8 * 8;
    iVar2 = *(int *)(lVar4 + uVar8 * 8);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144c4b650 FUN_144c4b650 body=379 status=ok
// SIG undefined FUN_144c4b650(void)

undefined4 * FUN_144c4b650(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_res20 [8];
  
  iVar9 = *(int *)((longlong)param_1 + 0xc);
  lVar4 = param_1[1];
  lVar2 = *param_1;
  iVar8 = 8;
  if (8 < param_4) {
    iVar8 = param_4;
  }
  lVar6 = (**(code **)(*param_3 + 8))(param_3,(longlong)iVar8 * 8);
  if (lVar6 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    *param_1 = lVar6;
    if (0 < iVar8) {
      lVar6 = 0;
      do {
        *(undefined4 *)(*param_1 + lVar6 * 8) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar8);
    }
    lVar6 = (longlong)(iVar9 + 1);
    iVar9 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(int *)((longlong)param_1 + 0xc) = iVar8 + -1;
    if (0 < lVar6) {
      lVar10 = 0;
      do {
        if (*(int *)(lVar2 + lVar10 * 8) != -1) {
          if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
            FUN_144c4b650(param_1,local_res20,param_3,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
          }
          iVar8 = *(int *)(lVar2 + lVar10 * 8);
          iVar11 = 1;
          lVar3 = *param_1;
          uVar5 = iVar8 * -0x61c8864f;
          uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                  iVar8 * -0x4f000000) & *(uint *)((longlong)param_1 + 0xc);
          uVar7 = (ulonglong)uVar5;
          iVar1 = *(int *)(lVar3 + uVar7 * 8);
          while (iVar1 != -1) {
            uVar5 = (uint)uVar7;
            if (iVar1 == iVar8) {
              iVar11 = 0;
              break;
            }
            uVar5 = uVar5 + 1 & *(uint *)((longlong)param_1 + 0xc);
            uVar7 = (ulonglong)uVar5;
            iVar1 = *(int *)(lVar3 + uVar7 * 8);
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar11;
          FUN_144b3d470(lVar3 + (longlong)(int)uVar5 * 8,lVar2 + (longlong)iVar9 * 8,8);
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar6);
    }
    if (-1 < (int)lVar4) {
      (**(code **)(*param_3 + 0x18))(param_3,lVar2,lVar6 * 8);
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 144c4b7d0 FUN_144c4b7d0 body=2921 status=ok
// SIG undefined FUN_144c4b7d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_144c4b7d0(undefined4 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,longlong *param_6,longlong *param_7,longlong param_8,longlong param_9)

{
  ushort *puVar1;
  float fVar2;
  short sVar3;
  ushort uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  float *pfVar13;
  float *pfVar14;
  uint *puVar15;
  ulonglong *puVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  float fVar37;
  uint uVar43;
  float fVar44;
  uint uVar45;
  float fVar46;
  uint uVar47;
  float fVar48;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar49;
  undefined4 uVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar58;
  undefined1 in_XMM4 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  float fVar63;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  ulonglong local_res10;
  longlong local_res20;
  undefined1 local_130 [8];
  uint *local_128;
  longlong local_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined1 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [112];
  
  puVar5 = (undefined8 *)*param_4;
  lVar26 = param_4[1];
  *param_1 = *(undefined4 *)puVar5;
  *(int *)(param_4 + 1) = (int)lVar26 + -1;
  *puVar5 = puVar5[(longlong)(int)lVar26 + -1];
  lVar26 = param_4[1];
  iVar19 = 0;
  if ((int)lVar26 < 3) {
    iVar20 = 1;
  }
  else {
    iVar20 = (*(int *)(*param_4 + 0x14) < *(int *)(*param_4 + 0xc)) + 1;
  }
  while (iVar21 = iVar20, iVar21 < (int)lVar26) {
    lVar9 = *param_4;
    lVar25 = (longlong)iVar19;
    lVar22 = (longlong)iVar21;
    if (*(int *)(lVar9 + 4 + lVar25 * 8) <= *(int *)(lVar9 + 4 + lVar22 * 8)) break;
    uVar12 = *(undefined8 *)(lVar9 + lVar25 * 8);
    *(undefined8 *)(lVar9 + lVar25 * 8) = *(undefined8 *)(lVar9 + lVar22 * 8);
    iVar24 = iVar21 * 2;
    *(undefined8 *)(lVar9 + lVar22 * 8) = uVar12;
    iVar20 = iVar24 + 1;
    iVar19 = iVar21;
    if (iVar24 + 2 < (int)param_4[1]) {
      iVar20 = iVar20 + (uint)(*(int *)(*param_4 + 0x14 + (longlong)iVar24 * 8) <
                              *(int *)(*param_4 + 4 + (longlong)iVar20 * 8));
    }
  }
  FUN_144c4a9f0(param_9,*param_1);
  iVar19 = (int)*(short *)((longlong)param_2 + 0x8e) + *(int *)((longlong)param_2 + 0xa4);
  fVar2 = **(float **)(param_8 + 0x48);
  lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar26 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar26 + 0xf0);
  if (lVar9 == 0) {
    if (*(char *)(lVar26 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = FUN_144b3f4a0();
    *(longlong *)(lVar26 + 0xf0) = lVar9;
  }
  lVar26 = *(longlong *)(*(longlong *)(lVar9 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar26 + 8) != 0) {
    lVar26 = 0;
  }
  lVar9 = (longlong)iVar19 * 4;
  local_res20 = lVar9;
  local_120 = lVar26;
  if (lVar26 == 0) {
    puVar10 = (uint *)(*DAT_14c787670)(1,&local_res20,0x40);
  }
  else {
    local_res10 = lVar9 + 0x3fU & 0xffffffffffffffc0;
    if (local_res10 <= *(ulonglong *)(lVar26 + 0x28)) {
      puVar10 = *(uint **)(lVar26 + 0x38);
      if ((longlong)puVar10 + local_res10 <= *(ulonglong *)(lVar26 + 0x40)) {
        *(ulonglong *)(lVar26 + 0x38) = (longlong)puVar10 + local_res10;
        goto LAB_144c4b9b9;
      }
    }
    puVar10 = (uint *)FUN_144b454a0(lVar26,&local_res10);
  }
LAB_144c4b9b9:
  sVar3 = *(short *)((longlong)param_2 + 0x8e);
  local_100 = (longlong *)(CONCAT44(iVar19,local_100._0_4_) | 0x8000000000000000);
  iVar24 = *(int *)((longlong)param_2 + 0xa4) + (int)sVar3;
  iVar20 = 0;
  iVar21 = 0;
  iVar19 = iVar24;
  if ((iVar24 < 1) && (iVar19 = iVar20, iVar24 < 0)) {
    iVar19 = iVar24;
  }
  lVar22 = param_2[0x13];
  puVar11 = puVar10;
  puVar15 = puVar10;
  if (0 < sVar3) {
    do {
      uVar8 = iVar20 + (int)lVar22;
      puVar11 = puVar15 + 1;
      iVar20 = iVar20 + 1;
      *puVar15 = uVar8;
      puVar15 = puVar11;
    } while (iVar20 < sVar3);
  }
  iVar20 = *(int *)((longlong)param_2 + 0xa4);
  lVar22 = param_2[0x14];
  if (0 < iVar20) {
    do {
      uVar8 = iVar21 + (int)lVar22;
      iVar21 = iVar21 + 1;
      *puVar11 = uVar8;
      puVar11 = puVar11 + 1;
    } while (iVar21 < iVar20);
  }
  local_128 = puVar10 + iVar19;
  puVar11 = puVar10;
  if (puVar10 < local_128) {
    do {
      uVar8 = *puVar11;
      lVar26 = local_120;
      if (*(int *)(param_5 + 0x18) <= *(int *)(param_5 + 0x1c)) break;
      lVar26 = *(longlong *)(param_9 + 0x70);
      lVar22 = *(longlong *)(lVar26 + 0x20);
      if ((int)uVar8 < *(int *)(lVar22 + 0x30)) {
        puVar16 = (ulonglong *)(*(longlong *)(lVar22 + 0x28) + (longlong)(int)uVar8 * 8);
      }
      else {
        puVar16 = (ulonglong *)
                  (*(longlong *)(lVar22 + 0x60) +
                  (longlong)(int)(uVar8 - *(int *)(lVar22 + 0x30)) * 8);
      }
      uVar23 = *puVar16;
      puVar16 = (ulonglong *)(param_9 + 0xa8);
      *puVar16 = uVar23;
      uVar17 = (uint)(uVar23 >> 0x20);
      if (((uVar23 >> 0x10 & 0x40) == 0) && (uVar17 != 0xffffffff)) {
        uVar17 = uVar17 & 0x3fffff | *(int *)(*(longlong *)(lVar26 + 0x20) + 0x94) << 0x16;
      }
      *(uint *)(param_9 + 0xac) = uVar17;
      *(uint *)(param_9 + 0x150) = *(int *)(param_9 + 0x80) << 0x16 | uVar8;
      *(ulonglong **)(param_9 + 0x158) = puVar16;
      if ((*(byte *)(param_9 + 0xaa) & 0x10) == 0) {
        *(undefined8 *)(param_9 + 0x160) = 0;
        *(undefined8 *)(param_9 + 0x168) = 0;
        *(undefined8 *)(param_9 + 0x170) = 0;
      }
      else {
        puVar1 = (ushort *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(lVar26 + 0x20) + 0x38) + 0x38) +
                 (ulonglong)*(ushort *)puVar16 * 0x18);
        *(ushort **)(param_9 + 0x160) = puVar1;
        lVar22 = *(longlong *)(*(longlong *)(lVar26 + 0x20) + 0x38);
        iVar19 = *(int *)(lVar22 + 0xcc);
        local_118 = *(longlong *)(lVar22 + 0x48);
        lVar22 = (longlong)(int)((uint)*(ushort *)puVar16 * iVar19);
        lStack_110 = local_118 + (iVar19 + lVar22) * 4;
        local_118 = local_118 + lVar22 * 4;
        *(longlong *)(param_9 + 0x168) = local_118;
        *(longlong *)(param_9 + 0x170) = lStack_110;
        lVar22 = *(longlong *)(*(longlong *)(lVar26 + 0x20) + 0x38);
        fVar63 = (float)*puVar1 * *(float *)(lVar22 + 0xa0) + *(float *)(lVar22 + 0xb0);
        fVar67 = (float)puVar1[1] * *(float *)(lVar22 + 0xa4) + *(float *)(lVar22 + 0xb4);
        fVar68 = (float)puVar1[2] * *(float *)(lVar22 + 0xa8) + *(float *)(lVar22 + 0xb8);
        fVar69 = *(float *)(lVar22 + 0xac) * 0.0 + *(float *)(lVar22 + 0xbc);
        if (*(byte *)(lVar26 + 0x40) != 0) {
          uVar17 = (uint)*(byte *)(lVar26 + 0x40);
          uVar36 = -(uint)(0x16a8300 << uVar17 < 0);
          uVar43 = -(uint)(0x502ab000 << uVar17 < 0);
          uVar45 = -(uint)(0xa2a8c00 << uVar17 < 0);
          uVar47 = -(uint)(0 << uVar17 < 0);
          auVar57._0_4_ = ~uVar36 & (uint)fVar63;
          auVar57._4_4_ = ~uVar43 & (uint)fVar67;
          auVar57._8_4_ = ~uVar45 & (uint)fVar68;
          auVar57._12_4_ = ~uVar47 & (uint)fVar69;
          uVar59 = -(uint)(0xa154c00 << uVar17 < 0);
          uVar60 = -(uint)(0x1554300 << uVar17 < 0);
          uVar61 = -(uint)(0x50157000 << uVar17 < 0);
          uVar62 = -(uint)(0 << uVar17 < 0);
          auVar55._0_4_ = (uint)fVar67 & uVar36;
          auVar55._4_4_ = (uint)fVar68 & uVar43;
          auVar55._8_4_ = (uint)fVar63 & uVar45;
          auVar55._12_4_ = (uint)fVar69 & uVar47;
          auVar64._0_4_ = (uint)fVar68 & uVar59;
          auVar64._4_4_ = (uint)fVar63 & uVar60;
          auVar64._8_4_ = (uint)fVar67 & uVar61;
          auVar64._12_4_ = (uint)fVar69 & uVar62;
          in_XMM4 = auVar57 | auVar55;
          auVar31._0_4_ = ~uVar59 & in_XMM4._0_4_;
          auVar31._4_4_ = ~uVar60 & in_XMM4._4_4_;
          auVar31._8_4_ = ~uVar61 & in_XMM4._8_4_;
          auVar31._12_4_ = ~uVar62 & in_XMM4._12_4_;
          auVar31 = auVar31 | auVar64;
          uVar23 = (ulonglong)uVar17;
          fVar63 = (float)((0xae71e0U >> uVar23) << 0x1f ^ auVar31._0_4_);
          fVar67 = (float)((0xb9e306U >> uVar23) << 0x1f ^ auVar31._4_4_);
          fVar68 = (float)((0xeb903cU >> uVar23) << 0x1f ^ auVar31._8_4_);
          fVar69 = (float)((0U >> uVar23) << 0x1f ^ auVar31._12_4_);
        }
        auVar65._0_4_ = fVar63 + *(float *)(lVar26 + 0x50);
        auVar65._4_4_ = fVar67 + *(float *)(lVar26 + 0x54);
        auVar65._8_4_ = fVar68 + *(float *)(lVar26 + 0x58);
        auVar65._12_4_ = fVar69 + *(float *)(lVar26 + 0x5c);
        *(undefined1 (*) [16])(param_9 + 0x180) = auVar65;
        *(undefined1 (*) [16])(param_9 + 400) = auVar65;
      }
      uVar17 = *(uint *)((longlong)param_2 + 0xac);
      uVar36 = uVar17 >> 0x16;
      if (*(uint *)((longlong)param_3 + 0x84) != uVar36) {
        param_3[0xf] = *(longlong *)((ulonglong)uVar36 * 0x120 + 8 + *(longlong *)(*param_3 + 0x38))
        ;
        *(uint *)((longlong)param_3 + 0x84) = uVar36;
      }
      FUN_144c4acc0(param_3,uVar17);
      lVar26 = param_3[0xd];
      if (uVar17 == 0xffffffff) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_144c33310(lVar26,uVar17);
      }
      *(undefined8 *)(lVar26 + 0x48) = uVar12;
      fVar63 = *(float *)(param_3 + 3);
      if (0.0 < fVar63) {
        auVar31 = minps(*(undefined1 (*) [16])(param_3 + 6),*(undefined1 (*) [16])(param_3 + 0x28));
        auVar31 = maxps(auVar31,*(undefined1 (*) [16])(param_3 + 0x26));
        fVar67 = auVar31._0_4_ - *(float *)(param_3 + 6);
        fVar68 = auVar31._4_4_ - *(float *)((longlong)param_3 + 0x34);
        fVar69 = auVar31._8_4_ - *(float *)(param_3 + 7);
        if (fVar69 * fVar69 + fVar68 * fVar68 + fVar67 * fVar67 <= fVar63 * fVar63)
        goto LAB_144c4bd26;
      }
      else {
LAB_144c4bd26:
        fVar63 = *(float *)((longlong)param_3 + 0x1c);
        if (0.0 < fVar63) {
          pfVar13 = (float *)param_3[9];
          if (pfVar13 != (float *)param_3[10]) {
            fVar67 = *(float *)(param_3 + 6);
            fVar68 = *(float *)((longlong)param_3 + 0x34);
            fVar69 = *(float *)(param_3 + 7);
            do {
              auVar32._0_4_ =
                   (float)(~-(uint)(*pfVar13 - fVar67 == 0.0) & (uint)(*pfVar13 - fVar67));
              auVar32._4_4_ =
                   (float)(~-(uint)(pfVar13[1] - fVar68 == 0.0) & (uint)(pfVar13[1] - fVar68));
              auVar32._8_4_ =
                   (float)(~-(uint)(pfVar13[2] - fVar69 == 0.0) & (uint)(pfVar13[2] - fVar69));
              auVar32._12_4_ =
                   (float)(~-(uint)(DAT_14c6daca0._12_4_ == 0.0) & (uint)DAT_14c6daca0._12_4_);
              auVar31 = divps(_DAT_14c6daca0,auVar32);
              fVar37 = (float)(-(uint)(auVar32._0_4_ == 0.0) & 0x7f7fffee |
                              ~-(uint)(auVar32._0_4_ == 0.0) & auVar31._0_4_);
              fVar44 = (float)(-(uint)(auVar32._4_4_ == 0.0) & 0x7f7fffee |
                              ~-(uint)(auVar32._4_4_ == 0.0) & auVar31._4_4_);
              fVar46 = (float)(-(uint)(auVar32._8_4_ == 0.0) & 0x7f7fffee |
                              ~-(uint)(auVar32._8_4_ == 0.0) & auVar31._8_4_);
              fVar48 = (float)(-(uint)(auVar32._12_4_ == 0.0) & 0x7f7fffee |
                              ~-(uint)(auVar32._12_4_ == 0.0) & auVar31._12_4_);
              auVar54._0_8_ =
                   CONCAT44(((*(float *)((longlong)param_3 + 0x134) - fVar63) - fVar68) * fVar44,
                            ((*(float *)(param_3 + 0x26) - fVar63) - fVar67) * fVar37);
              auVar54._8_4_ = ((*(float *)(param_3 + 0x27) - fVar63) - fVar69) * fVar46;
              auVar54._12_4_ =
                   ((*(float *)((longlong)param_3 + 0x13c) - fVar63) -
                   *(float *)((longlong)param_3 + 0x3c)) * fVar48;
              auVar27._0_4_ = ((fVar63 + *(float *)(param_3 + 0x28)) - fVar67) * fVar37;
              auVar27._4_4_ = ((fVar63 + *(float *)((longlong)param_3 + 0x144)) - fVar68) * fVar44;
              auVar27._8_4_ = ((fVar63 + *(float *)(param_3 + 0x29)) - fVar69) * fVar46;
              auVar27._12_4_ =
                   ((fVar63 + *(float *)((longlong)param_3 + 0x14c)) -
                   *(float *)((longlong)param_3 + 0x3c)) * fVar48;
              auVar50._8_4_ = auVar54._8_4_;
              auVar50._0_8_ = auVar54._0_8_;
              auVar50._12_4_ = auVar54._12_4_;
              auVar31 = minps(auVar50,auVar27);
              auVar55 = maxps(auVar54,auVar27);
              uVar49 = auVar31._0_4_;
              uVar53 = auVar31._4_4_;
              auVar51._8_4_ = auVar31._8_4_;
              auVar28._4_4_ = uVar49;
              auVar28._0_4_ = uVar49;
              auVar28._8_4_ = uVar49;
              auVar28._12_4_ = uVar49;
              uVar49 = auVar55._0_4_;
              uVar58 = auVar55._4_4_;
              auVar56._8_4_ = auVar55._8_4_;
              auVar38._4_4_ = uVar53;
              auVar38._0_4_ = uVar53;
              auVar38._8_4_ = uVar53;
              auVar38._12_4_ = uVar53;
              auVar33._4_4_ = uVar58;
              auVar33._0_4_ = uVar58;
              auVar33._8_4_ = uVar58;
              auVar33._12_4_ = uVar58;
              auVar55 = maxps(auVar38,auVar28);
              auVar51._4_4_ = auVar51._8_4_;
              auVar51._0_4_ = auVar51._8_4_;
              auVar51._12_4_ = auVar51._8_4_;
              auVar29._4_4_ = uVar49;
              auVar29._0_4_ = uVar49;
              auVar29._8_4_ = uVar49;
              auVar29._12_4_ = uVar49;
              auVar56._4_4_ = auVar56._8_4_;
              auVar56._0_4_ = auVar56._8_4_;
              auVar56._12_4_ = auVar56._8_4_;
              auVar31 = minps(auVar33,auVar29);
              auVar55 = maxps(auVar51,auVar55);
              auVar57 = minps(auVar56,auVar31);
              auVar31 = maxps(auVar55,ZEXT816(0));
              in_XMM4 = minps(auVar57,_DAT_14c6daca0);
              if (auVar31._0_4_ <= in_XMM4._0_4_) goto LAB_144c4be22;
              pfVar13 = pfVar13 + 4;
            } while (pfVar13 != (float *)param_3[10]);
          }
        }
        else {
LAB_144c4be22:
          plVar6 = (longlong *)param_3[5];
          if (plVar6 != (longlong *)0x0) {
            local_108 = *param_3;
            local_100 = param_3 + 1;
            local_f8 = param_3 + 0x1a;
            local_f0 = 1;
            cVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,&local_108);
            if (cVar7 == '\0') goto LAB_144c4c21d;
          }
          local_res10 = CONCAT44(local_res10._4_4_,fVar2);
          auVar66._4_4_ = fVar2;
          auVar66._0_4_ = fVar2;
          auVar66._8_4_ = fVar2;
          auVar66._12_4_ = fVar2;
          auVar52._0_4_ = (*(float *)(param_2 + 0x32) + *(float *)(param_2 + 0x30)) * _DAT_14c6dad90
          ;
          auVar52._4_4_ =
               (*(float *)((longlong)param_2 + 0x194) + *(float *)((longlong)param_2 + 0x184)) *
               fRam000000014c6dad94;
          auVar52._8_4_ =
               (*(float *)(param_2 + 0x33) + *(float *)(param_2 + 0x31)) * fRam000000014c6dad98;
          auVar52._12_4_ =
               (*(float *)((longlong)param_2 + 0x19c) + *(float *)((longlong)param_2 + 0x18c)) *
               fRam000000014c6dad9c;
          fVar67 = *(float *)((longlong)param_2 + 0xe4) - auVar52._4_4_;
          fVar63 = (*(float *)(param_2 + 0x1c) - auVar52._0_4_) *
                   (*(float *)(param_2 + 0x1c) - auVar52._0_4_);
          fVar67 = fVar67 * fVar67;
          fVar68 = (*(float *)(param_2 + 0x1d) - auVar52._8_4_) *
                   (*(float *)(param_2 + 0x1d) - auVar52._8_4_);
          auVar39._0_4_ = fVar68 + fVar67 + fVar63;
          auVar39._4_4_ = fVar68 + fVar67 + fVar63;
          auVar39._8_4_ = fVar68 + fVar67 + fVar63;
          auVar39._12_4_ = fVar68 + fVar67 + fVar63;
          auVar31 = sqrtps(in_XMM4,auVar39);
          if ((*(byte *)((longlong)param_2 + 0xaa) & 0x10) == 0) {
            fVar63 = auVar52._0_4_ - *(float *)(param_2 + 0x24);
            fVar67 = auVar52._4_4_ - *(float *)((longlong)param_2 + 0x124);
            fVar68 = auVar52._8_4_ - *(float *)(param_2 + 0x25);
            fVar63 = fVar63 * fVar63;
            fVar67 = fVar67 * fVar67;
            fVar68 = fVar68 * fVar68;
            auVar34._0_4_ = fVar67 + fVar63;
            auVar34._4_4_ = fVar67 + fVar63;
            auVar34._8_4_ = fVar67 + fVar63;
            auVar34._12_4_ = fVar67 + fVar63;
            auVar52._0_4_ = fVar68 + auVar34._0_4_;
            auVar52._4_4_ = fVar68 + auVar34._4_4_;
            auVar52._8_4_ = fVar68 + auVar34._8_4_;
            auVar52._12_4_ = fVar68 + auVar34._12_4_;
            auVar35 = sqrtps(auVar34,auVar52);
          }
          else {
            fVar63 = *(float *)(param_2 + 0x34) - *(float *)(param_2 + 0x24);
            fVar67 = *(float *)((longlong)param_2 + 0x1a4) - *(float *)((longlong)param_2 + 0x124);
            fVar68 = *(float *)(param_2 + 0x35) - *(float *)(param_2 + 0x25);
            fVar63 = fVar63 * fVar63;
            fVar67 = fVar67 * fVar67;
            fVar68 = fVar68 * fVar68;
            auVar40._0_4_ = fVar68 + fVar67 + fVar63;
            auVar40._4_4_ = fVar68 + fVar67 + fVar63;
            auVar40._8_4_ = fVar68 + fVar67 + fVar63;
            auVar40._12_4_ = fVar68 + fVar67 + fVar63;
            fVar63 = *(float *)(param_2[0x2c] + 0x14);
            auVar55 = sqrtps(auVar40,auVar40);
            auVar35._0_4_ = fVar63 + auVar55._0_4_;
            auVar35._4_4_ = fVar63 + auVar55._4_4_;
            auVar35._8_4_ = fVar63 + auVar55._8_4_;
            auVar35._12_4_ = fVar63 + auVar55._12_4_;
          }
          plVar6 = (longlong *)param_2[4];
          if (plVar6 == (longlong *)0x0) {
            in_XMM4._0_4_ = auVar31._0_4_ + fVar2 + auVar35._0_4_;
            in_XMM4._4_4_ = auVar31._4_4_ + fVar2 + auVar35._4_4_;
            in_XMM4._8_4_ = auVar31._8_4_ + fVar2 + auVar35._8_4_;
            in_XMM4._12_4_ = auVar31._12_4_ + fVar2 + auVar35._12_4_;
          }
          else {
            local_108 = *param_2;
            local_100 = param_2 + 1;
            local_f0 = 1;
            local_f8 = param_2 + 0x1a;
            local_e8 = auVar66;
            local_d8 = auVar31;
            local_c8 = auVar35;
            pfVar13 = (float *)(**(code **)(*plVar6 + 0x20))(plVar6,local_b8,&local_108);
            in_XMM4._4_4_ = fVar2 + pfVar13[1];
            in_XMM4._0_4_ = fVar2 + *pfVar13;
            in_XMM4._8_4_ = fVar2 + pfVar13[2];
            in_XMM4._12_4_ = fVar2 + pfVar13[3];
          }
          fVar63 = in_XMM4._0_4_;
          if (fVar63 < *(float *)(param_8 + 0x38) || fVar63 == *(float *)(param_8 + 0x38)) {
            pfVar13 = *(float **)(param_8 + 0x48);
            if (((*(byte *)(*(longlong *)(param_5 + 0x48) + 0xe) & 3) == 0) || (fVar63 < *pfVar13))
            {
              *pfVar13 = fVar63;
              if ((*(byte *)((longlong)pfVar13 + 0xe) & 3) == 0) {
                in_XMM4 = *(undefined1 (*) [16])(*param_7 + 0x120);
                fVar63 = in_XMM4._0_4_ - *(float *)(param_7 + 2);
                fVar67 = in_XMM4._4_4_ - *(float *)((longlong)param_7 + 0x14);
                fVar68 = in_XMM4._8_4_ - *(float *)(param_7 + 3);
                fVar63 = fVar63 * fVar63;
                fVar67 = fVar67 * fVar67;
                fVar68 = fVar68 * fVar68;
                auVar41._0_4_ = fVar68 + fVar67 + fVar63;
                auVar41._4_4_ = fVar68 + fVar67 + fVar63;
                auVar41._8_4_ = fVar68 + fVar67 + fVar63;
                auVar41._12_4_ = fVar68 + fVar67 + fVar63;
                auVar31 = sqrtps(auVar52,auVar41);
                if (1 < (longlong)(int)param_7[1]) {
                  pfVar14 = (float *)(param_7 + 6);
                  lVar26 = (longlong)(int)param_7[1] + -1;
                  do {
                    fVar63 = in_XMM4._0_4_ - *pfVar14;
                    fVar67 = in_XMM4._4_4_ - pfVar14[1];
                    fVar68 = in_XMM4._8_4_ - pfVar14[2];
                    pfVar14 = pfVar14 + 8;
                    fVar63 = fVar63 * fVar63;
                    fVar67 = fVar67 * fVar67;
                    fVar68 = fVar68 * fVar68;
                    auVar30._4_4_ = fVar63;
                    auVar30._0_4_ = fVar63;
                    auVar30._8_4_ = fVar63;
                    auVar30._12_4_ = fVar63;
                    auVar42._0_4_ = fVar68 + fVar67 + fVar63;
                    auVar42._4_4_ = fVar68 + fVar67 + fVar63;
                    auVar42._8_4_ = fVar68 + fVar67 + fVar63;
                    auVar42._12_4_ = fVar68 + fVar67 + fVar63;
                    auVar55 = sqrtps(auVar30,auVar42);
                    auVar31 = minps(auVar31,auVar55);
                    lVar26 = lVar26 + -1;
                  } while (lVar26 != 0);
                }
                fVar63 = auVar31._0_4_;
                pfVar13[1] = fVar63;
                if (fVar63 < *(float *)(param_8 + 0x34)) {
                  *(float *)(param_8 + 0x34) = fVar63;
                  *(uint *)(param_8 + 0x30) = uVar17;
                }
              }
              *(undefined2 *)(*(longlong *)(*param_6 + 0x48) + 0xc) =
                   *(undefined2 *)(*param_6 + 0x40);
              if ((param_6[1] == 0) || ((*(byte *)(param_6[1] + 0xaa) & 0x10) != 0)) {
                local_res10 = CONCAT44(local_res10._4_4_,uVar8);
                local_res20 = CONCAT44(local_res20._4_4_,uVar17);
                FUN_144c4b420(param_6 + 2,&PTR_vftable_14c6e47a0,&local_res20,&local_res10);
              }
              else {
                local_res10 = CONCAT44(local_res10._4_4_,uVar17);
                FUN_144c4b4e0(param_6 + 2,local_130,&local_res10);
              }
              uVar4 = *(ushort *)(*(longlong *)(param_5 + 0x48) + 0xe);
              fVar63 = (*(float **)(param_8 + 0x48))[1] * *(float *)(param_8 + 0x3c) +
                       **(float **)(param_8 + 0x48);
              if (fVar63 < *(float *)(param_8 + 0x38) || fVar63 == *(float *)(param_8 + 0x38)) {
                *(ushort *)(*(longlong *)(param_5 + 0x48) + 0xe) = uVar4 & 0xfffd | 1;
                uVar8 = *(uint *)(param_4 + 1);
                uVar23 = (ulonglong)(int)uVar8;
                if ((uVar4 & 1) == 0) {
                  lVar26 = local_120;
                  if (*(int *)((longlong)param_4 + 0xc) <= (int)uVar8) break;
                  lVar26 = *param_4;
                  *(uint *)(param_4 + 1) = uVar8 + 1;
                  *(float *)(lVar26 + 4 + uVar23 * 8) = fVar63;
                  *(uint *)(lVar26 + uVar23 * 8) = uVar17;
                  uVar49 = *(undefined4 *)(*param_4 + uVar23 * 8);
                  iVar19 = *(int *)(*param_4 + 4 + uVar23 * 8);
                  uVar36 = uVar8;
                  while (0 < (int)uVar36) {
                    uVar8 = (int)(uVar36 - 1) / 2;
                    uVar36 = (uint)uVar23;
                    lVar26 = *param_4;
                    if (*(int *)(lVar26 + 4 + (longlong)(int)uVar8 * 8) <= iVar19) break;
                    uVar18 = uVar23 & 0xffffffff;
                    uVar23 = (ulonglong)uVar8;
                    *(undefined8 *)(lVar26 + uVar18 * 8) =
                         *(undefined8 *)(lVar26 + (longlong)(int)uVar8 * 8);
                    uVar36 = uVar8;
                  }
LAB_144c4c20f:
                  *(undefined4 *)(*param_4 + (longlong)(int)uVar36 * 8) = uVar49;
                  *(int *)(*param_4 + 4 + (longlong)(int)uVar36 * 8) = iVar19;
                }
                else {
                  local_res10 = CONCAT44(local_res10._4_4_,fVar63);
                  uVar36 = 0;
                  lVar26 = 0;
                  if (0 < (int)uVar8) {
                    puVar15 = (uint *)*param_4;
                    do {
                      if (*puVar15 == uVar17) {
                        *(float *)(*param_4 + 4 + lVar26 * 8) = fVar63;
                        uVar49 = *(undefined4 *)(*param_4 + lVar26 * 8);
                        iVar19 = *(int *)(*param_4 + 4 + lVar26 * 8);
                        goto joined_r0x000144c4c1db;
                      }
                      uVar36 = uVar36 + 1;
                      lVar26 = lVar26 + 1;
                      puVar15 = puVar15 + 2;
                    } while ((int)uVar36 < (int)uVar8);
                  }
                }
              }
            }
          }
        }
      }
LAB_144c4c21d:
      puVar11 = puVar11 + 1;
      lVar26 = local_120;
    } while (puVar11 < local_128);
  }
  lVar22 = *(longlong *)(param_5 + 0x50);
  puVar1 = (ushort *)(lVar22 + 0xe);
  *puVar1 = *puVar1 & 0xfffe;
  puVar1 = (ushort *)(lVar22 + 0xe);
  *puVar1 = *puVar1 | 2;
  if (lVar26 == 0) {
    (*DAT_14c787678)(1,puVar10);
  }
  else {
    uVar23 = lVar9 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar26 + 0x28) < uVar23) ||
       ((longlong)puVar10 + uVar23 != *(longlong *)(lVar26 + 0x38))) {
      FUN_144be8550(lVar26,puVar10);
      return param_1;
    }
    *(uint **)(lVar26 + 0x38) = puVar10;
    if (*(uint **)(lVar26 + 0x48) == puVar10) {
      FUN_144be8430(lVar26);
      return param_1;
    }
  }
  return param_1;
joined_r0x000144c4c1db:
  if ((int)uVar36 < 1) goto LAB_144c4c20f;
  uVar8 = (int)(uVar36 - 1) / 2;
  lVar26 = *param_4;
  if (*(int *)(lVar26 + 4 + (longlong)(int)uVar8 * 8) <= iVar19) goto LAB_144c4c20f;
  *(undefined8 *)(lVar26 + (ulonglong)uVar36 * 8) =
       *(undefined8 *)(lVar26 + (longlong)(int)uVar8 * 8);
  uVar36 = uVar8;
  goto joined_r0x000144c4c1db;
}



// FUNCTION 144c4c340 FUN_144c4c340 body=247 status=ok
// SIG undefined FUN_144c4c340(void)

void FUN_144c4c340(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c4c440 FUN_144c4c440 body=27 status=ok
// SIG undefined FUN_144c4c440(void)

void FUN_144c4c440(undefined8 param_1)

{
  FUN_144c6feb0();
  FUN_144b3e7e0(param_1);
  return;
}



// FUNCTION 144c4c460 FUN_144c4c460 body=203 status=ok
// SIG undefined FUN_144c4c460(void)

bool FUN_144c4c460(longlong param_1,undefined4 *param_2,undefined8 param_3,float *param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_res10 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  
  local_res10[0] = *param_2;
  cVar1 = FUN_144c701b0(param_1,local_res10);
  if (cVar1 == '\0') {
    return false;
  }
  FUN_144fd28f0(param_3,param_1 + 0x40,param_1 + 0xb0,&local_18);
  fVar2 = *param_4 * local_18;
  fVar3 = param_4[1] * fStack_14;
  fVar4 = param_4[2] * fStack_10;
  local_18 = (0.0 - (fVar3 + fVar2 + fVar4)) * *param_4 + local_18;
  fStack_14 = (0.0 - (fVar3 + fVar2 + fVar4)) * param_4[1] + fStack_14;
  fStack_10 = (0.0 - (fVar3 + fVar2 + fVar4)) * param_4[2] + fStack_10;
  return fStack_14 * fStack_14 + local_18 * local_18 + fStack_10 * fStack_10 <
         *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xbc);
}



// FUNCTION 144c4c530 thunk_FUN_144b3e7e0 body=5 status=ok
// SIG undefined thunk_FUN_144b3e7e0(void)

void thunk_FUN_144b3e7e0(longlong *param_1)

{
  char cVar1;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar1 = (**(code **)(*param_1 + 0x90))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x80))(param_1,&lStack_38,&lStack_28);
    (**(code **)(*param_1 + 0x88))(param_1,&uStack_18);
    param_1[6] = lStack_38;
    param_1[7] = lStack_30;
    param_1[8] = lStack_28;
    param_1[9] = lStack_20;
    *(undefined4 *)(param_1 + 0x16) = uStack_18;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_14;
    *(undefined4 *)(param_1 + 0x17) = uStack_10;
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_1 + 0xbc);
  }
  return;
}



// FUNCTION 144c4c540 FUN_144c4c540 body=97 status=ok
// SIG undefined FUN_144c4c540(void)

undefined8 * FUN_144c4c540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkaiPhysicsBodySilhouetteGeneratorBase::vftable;
  FUN_144c6f6a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 144c4c5b0 FUN_144c4c5b0 body=107 status=ok
// SIG undefined FUN_144c4c5b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144c4c5b0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = hkaiPlaneVolume::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_144b3e890(param_1 + 5);
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  param_1[0xe] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  param_1[0xf] = uVar1;
  uVar2 = uRam000000014c6dae84 ^ 0x80000000;
  uVar3 = uRam000000014c6dae88 ^ 0x80000000;
  uVar4 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)(param_1 + 0x10) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x84) = uVar2;
  *(uint *)(param_1 + 0x11) = uVar3;
  *(uint *)((longlong)param_1 + 0x8c) = uVar4;
  return param_1;
}



// FUNCTION 144c4c650 FUN_144c4c650 body=245 status=ok
// SIG undefined FUN_144c4c650(void)

void FUN_144c4c650(longlong param_1,float *param_2,int param_3,longlong *param_4)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong in_RAX;
  longlong lVar8;
  bool bVar9;
  ulonglong uVar10;
  float *pfVar11;
  uint uVar12;
  bool bVar13;
  
  if (0 < param_3) {
    uVar12 = 0;
    uVar10 = 0;
    do {
      fVar3 = *param_2;
      fVar4 = param_2[1];
      fVar5 = param_2[2];
      auVar2._4_4_ = -(uint)(*(float *)(param_1 + 0x74) <= fVar4 &&
                            fVar4 <= *(float *)(param_1 + 0x84));
      auVar2._0_4_ = -(uint)(*(float *)(param_1 + 0x70) <= fVar3 &&
                            fVar3 <= *(float *)(param_1 + 0x80));
      auVar2._8_4_ = -(uint)(*(float *)(param_1 + 0x78) <= fVar5 &&
                            fVar5 <= *(float *)(param_1 + 0x88));
      auVar2._12_4_ =
           -(uint)(*(float *)(param_1 + 0x7c) <= param_2[3] &&
                  param_2[3] <= *(float *)(param_1 + 0x8c));
      uVar6 = movmskps((int)in_RAX,auVar2);
      lVar8 = 0;
      if (((byte)uVar6 & 7) == 7) {
        lVar8 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          pfVar11 = *(float **)(param_1 + 0x18);
          do {
            if (0.0 < pfVar11[3] + pfVar11[2] * fVar5 + pfVar11[1] * fVar4 + *pfVar11 * fVar3)
            goto LAB_144c4c6a5;
            lVar8 = lVar8 + 1;
            pfVar11 = pfVar11 + 4;
          } while (lVar8 < *(int *)(param_1 + 0x20));
        }
        bVar9 = true;
      }
      else {
LAB_144c4c6a5:
        bVar9 = false;
      }
      bVar13 = *(char *)(param_1 + 0x60) != '\0';
      in_RAX = CONCAT71((int7)((ulonglong)lVar8 >> 8),bVar13);
      if (bVar13 != bVar9) {
        puVar1 = (uint *)(*param_4 + (uVar10 >> 5) * 4);
        uVar7 = *puVar1 | 1 << (uVar12 & 0x1f);
        in_RAX = (ulonglong)uVar7;
        *puVar1 = uVar7;
      }
      uVar12 = uVar12 + 1;
      uVar10 = uVar10 + 1;
      param_2 = param_2 + 4;
    } while ((int)uVar12 < param_3);
  }
  return;
}



// FUNCTION 144c4c750 FUN_144c4c750 body=291 status=ok
// SIG undefined FUN_144c4c750(void)

undefined4 * FUN_144c4c750(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_3 + 0x18);
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < *(int *)(param_1 + 0x48)) {
    FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x48));
  }
  if ((undefined8 *)(param_1 + 0x40) != puVar1) {
    iVar2 = *(int *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < iVar2) {
      FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_3 + 0x20) = iVar2;
  }
  puVar1 = (undefined8 *)(param_3 + 0x28);
  if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < *(int *)(param_1 + 0x58)) {
    FUN_144bdeea0(puVar1,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x58));
  }
  *param_2 = 0;
  if ((undefined8 *)(param_1 + 0x50) != puVar1) {
    iVar2 = *(int *)(param_1 + 0x58);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < iVar2) {
      FUN_144bdeea0(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_3 + 0x30) = iVar2;
  }
  return param_2;
}



// FUNCTION 144c4c880 FUN_144c4c880 body=737 status=ok
// SIG undefined FUN_144c4c880(void)

longlong FUN_144c4c880(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                      undefined1 (*param_4) [16])

{
  int *piVar1;
  float fVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar17;
  float fVar20;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    fVar12 = *(float *)(param_1 + 0x70);
    fVar19 = *(float *)(param_1 + 0x74);
    fVar22 = *(float *)(param_1 + 0x78);
    fVar2 = *(float *)(param_1 + 0x7c);
    lVar4 = 0;
    fVar11 = *(float *)(param_1 + 0x80);
    fVar17 = *(float *)(param_1 + 0x84);
    fVar18 = *(float *)(param_1 + 0x88);
    fVar20 = *(float *)(param_1 + 0x8c);
    fVar21 = *(float *)*param_2;
    fVar23 = *(float *)(*param_2 + 4);
    fVar24 = *(float *)(*param_2 + 8);
    auVar15._0_4_ = -(uint)(fVar21 <= fVar11 && fVar12 <= fVar21);
    auVar15._4_4_ = -(uint)(fVar23 <= fVar17 && fVar19 <= fVar23);
    auVar15._8_4_ = -(uint)(fVar24 <= fVar18 && fVar22 <= fVar24);
    auVar15._12_4_ =
         -(uint)(*(float *)(*param_2 + 0xc) <= fVar20 && fVar2 <= *(float *)(*param_2 + 0xc));
    uVar3 = movmskps((int)param_1,auVar15);
    if (((byte)uVar3 & 7) == 7) {
      iVar5 = *(int *)(param_1 + 0x20);
      if (0 < iVar5) {
        pfVar7 = *(float **)(param_1 + 0x18);
        lVar8 = lVar4;
        do {
          if (0.0 < pfVar7[3] + pfVar7[2] * fVar24 + pfVar7[1] * fVar23 + *pfVar7 * fVar21) {
            return 0;
          }
          lVar8 = lVar8 + 1;
          pfVar7 = pfVar7 + 4;
        } while (lVar8 < iVar5);
      }
      fVar21 = *(float *)*param_3;
      fVar23 = *(float *)(*param_3 + 4);
      fVar24 = *(float *)(*param_3 + 8);
      auVar16._0_4_ = -(uint)(fVar21 <= fVar11 && fVar12 <= fVar21);
      auVar16._4_4_ = -(uint)(fVar23 <= fVar17 && fVar19 <= fVar23);
      auVar16._8_4_ = -(uint)(fVar24 <= fVar18 && fVar22 <= fVar24);
      auVar16._12_4_ =
           -(uint)(*(float *)(*param_3 + 0xc) <= fVar20 && fVar2 <= *(float *)(*param_3 + 0xc));
      uVar6 = movmskps(0x20,auVar16);
      lVar8 = lVar4;
      if ((char)(uVar6 & 7) == '\a') {
        if (0 < iVar5) {
          pfVar7 = *(float **)(param_1 + 0x18);
          do {
            if (0.0 < pfVar7[3] + pfVar7[2] * fVar24 + pfVar7[1] * fVar23 + *pfVar7 * fVar21) {
              return 0;
            }
            lVar8 = lVar8 + 1;
            pfVar7 = pfVar7 + 4;
          } while (lVar8 < iVar5);
        }
        fVar21 = *(float *)*param_4;
        fVar23 = *(float *)(*param_4 + 4);
        fVar24 = *(float *)(*param_4 + 8);
        auVar10._0_4_ = -(uint)(fVar12 <= fVar21 && fVar21 <= fVar11);
        auVar10._4_4_ = -(uint)(fVar19 <= fVar23 && fVar23 <= fVar17);
        auVar10._8_4_ = -(uint)(fVar24 <= fVar18 && fVar22 <= fVar24);
        auVar10._12_4_ =
             -(uint)(fVar2 <= *(float *)(*param_4 + 0xc) && *(float *)(*param_4 + 0xc) <= fVar20);
        uVar3 = movmskps(uVar6 & 7,auVar10);
        lVar8 = 0;
        if (((byte)uVar3 & 7) == 7) {
          if (0 < *(int *)(param_1 + 0x20)) {
            pfVar7 = *(float **)(param_1 + 0x18);
            do {
              if (0.0 < pfVar7[3] + pfVar7[2] * fVar24 + pfVar7[1] * fVar23 + *pfVar7 * fVar21) {
                return 0;
              }
              lVar4 = lVar4 + 1;
              pfVar7 = pfVar7 + 4;
            } while (lVar4 < *(int *)(param_1 + 0x20));
          }
          lVar8 = 1;
        }
      }
      return lVar8;
    }
  }
  else {
    auVar15 = *param_2;
    auVar16 = *param_3;
    auVar13 = minps(auVar15,auVar16);
    auVar10 = *param_4;
    auVar9 = maxps(auVar15,auVar16);
    auVar14 = minps(auVar13,auVar10);
    auVar13 = maxps(auVar9,auVar10);
    auVar9._4_4_ = -(uint)(*(float *)(param_1 + 0x74) <= auVar13._4_4_ &&
                          auVar14._4_4_ <= *(float *)(param_1 + 0x84));
    auVar9._0_4_ = -(uint)(*(float *)(param_1 + 0x70) <= auVar13._0_4_ &&
                          auVar14._0_4_ <= *(float *)(param_1 + 0x80));
    auVar9._8_4_ = -(uint)(*(float *)(param_1 + 0x78) <= auVar13._8_4_ &&
                          auVar14._8_4_ <= *(float *)(param_1 + 0x88));
    auVar9._12_4_ =
         -(uint)(*(float *)(param_1 + 0x7c) <= auVar13._12_4_ &&
                auVar14._12_4_ <= *(float *)(param_1 + 0x8c));
    uVar3 = movmskps(in_EAX,auVar9);
    if (((byte)uVar3 & 7) == 7) {
      piVar1 = (int *)(param_1 + 0x20);
      if (0 < *piVar1) {
        pfVar7 = *(float **)(param_1 + 0x18);
        lVar4 = 0;
        do {
          fVar12 = *pfVar7;
          fVar19 = pfVar7[1];
          fVar22 = pfVar7[2];
          fVar2 = pfVar7[3];
          fVar11 = auVar15._0_4_ * fVar12;
          fVar17 = auVar15._4_4_ * fVar19;
          fVar20 = auVar15._8_4_ * fVar22;
          fVar25 = fVar17 + fVar11;
          fVar11 = fVar11 + fVar17;
          fVar26 = fVar2 + fVar20;
          fVar20 = fVar20 + fVar2;
          fVar17 = auVar16._0_4_ * fVar12;
          fVar18 = auVar16._4_4_ * fVar19;
          fVar21 = auVar16._8_4_ * fVar22;
          fVar23 = fVar18 + fVar17;
          fVar17 = fVar17 + fVar18;
          fVar24 = fVar2 + fVar21;
          fVar21 = fVar21 + fVar2;
          fVar12 = auVar10._0_4_ * fVar12;
          fVar19 = auVar10._4_4_ * fVar19;
          fVar22 = auVar10._8_4_ * fVar22;
          fVar18 = fVar19 + fVar12;
          fVar12 = fVar12 + fVar19;
          fVar19 = fVar2 + fVar22;
          fVar22 = fVar22 + fVar2;
          auVar13._4_4_ =
               -(uint)((0.0 < fVar20 + fVar11 && 0.0 < fVar21 + fVar17) && 0.0 < fVar22 + fVar12);
          auVar13._0_4_ =
               -(uint)((0.0 < fVar26 + fVar25 && 0.0 < fVar24 + fVar23) && 0.0 < fVar19 + fVar18);
          auVar13._8_4_ =
               -(uint)((0.0 < fVar25 + fVar26 && 0.0 < fVar23 + fVar24) && 0.0 < fVar18 + fVar19);
          auVar13._12_4_ =
               -(uint)((0.0 < fVar11 + fVar20 && 0.0 < fVar17 + fVar21) && 0.0 < fVar12 + fVar22);
          iVar5 = movmskps((int)param_1,auVar13);
          if (iVar5 != 0) goto LAB_144c4c9d7;
          lVar4 = lVar4 + 1;
          pfVar7 = pfVar7 + 4;
          param_1 = 0;
        } while (lVar4 < *piVar1);
      }
      lVar4 = 0;
    }
    else {
LAB_144c4c9d7:
      lVar4 = 1;
    }
  }
  return lVar4;
}



// FUNCTION 144c4cb70 FUN_144c4cb70 body=291 status=ok
// SIG undefined FUN_144c4cb70(void)

bool FUN_144c4cb70(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  lVar4 = 0;
  auVar11._4_4_ =
       -(uint)(param_2[1] <= *(float *)(param_1 + 0x84) && *(float *)(param_1 + 0x74) <= param_2[5])
  ;
  auVar11._0_4_ =
       -(uint)(*param_2 <= *(float *)(param_1 + 0x80) && *(float *)(param_1 + 0x70) <= param_2[4]);
  auVar11._8_4_ =
       -(uint)(param_2[2] <= *(float *)(param_1 + 0x88) && *(float *)(param_1 + 0x78) <= param_2[6])
  ;
  auVar11._12_4_ =
       -(uint)(param_2[3] <= *(float *)(param_1 + 0x8c) && *(float *)(param_1 + 0x7c) <= param_2[7])
  ;
  uVar3 = movmskps(in_EAX,auVar11);
  if (((byte)uVar3 & 7) != 7) {
    return *(char *)(param_1 + 0x60) != '\0';
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    pfVar5 = *(float **)(param_1 + 0x18);
    do {
      fVar2 = pfVar5[3];
      auVar10._0_8_ = CONCAT44(pfVar5[1] * param_2[1],*pfVar5 * *param_2);
      auVar10._8_4_ = pfVar5[2] * param_2[2];
      auVar10._12_4_ = fVar2 * param_2[3];
      fVar6 = *pfVar5 * param_2[4];
      fVar7 = pfVar5[1] * param_2[5];
      fVar8 = pfVar5[2] * param_2[6];
      fVar9 = fVar2 * param_2[7];
      auVar12._8_4_ = auVar10._8_4_;
      auVar12._0_8_ = auVar10._0_8_;
      auVar12._12_4_ = auVar10._12_4_;
      auVar13._4_4_ = fVar7;
      auVar13._0_4_ = fVar6;
      auVar13._8_4_ = fVar8;
      auVar13._12_4_ = fVar9;
      auVar13 = minps(auVar12,auVar13);
      auVar1._4_4_ = fVar7;
      auVar1._0_4_ = fVar6;
      auVar1._8_4_ = fVar8;
      auVar1._12_4_ = fVar9;
      auVar11 = maxps(auVar10,auVar1);
      if (*(char *)(param_1 + 0x60) == '\0') {
        if (0.0 <= auVar11._4_4_ + auVar11._0_4_ + auVar11._8_4_ + fVar2) {
          return false;
        }
      }
      else if (0.0 <= auVar13._4_4_ + auVar13._0_4_ + auVar13._8_4_ + fVar2) {
        return true;
      }
      lVar4 = lVar4 + 1;
      pfVar5 = pfVar5 + 4;
    } while (lVar4 < *(int *)(param_1 + 0x20));
  }
  return *(char *)(param_1 + 0x60) == '\0';
}



// FUNCTION 144c4cca0 FUN_144c4cca0 body=55 status=ok
// SIG undefined FUN_144c4cca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c4cca0(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
    *(ulonglong *)(param_2 + 4) = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
    *(undefined8 *)(param_2 + 6) = uVar1;
    uVar2 = uRam000000014c6dae84 ^ 0x80000000;
    uVar3 = uRam000000014c6dae88 ^ 0x80000000;
    uVar4 = uRam000000014c6dae8c ^ 0x80000000;
    *param_2 = _DAT_14c6dae80 ^ 0x80000000;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_2 + 2) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_2 + 6) = uVar1;
  return;
}



// FUNCTION 144c4cce0 FUN_144c4cce0 body=237 status=ok
// SIG undefined FUN_144c4cce0(void)

bool FUN_144c4cce0(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  longlong lVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar12._4_4_ =
       -(uint)(param_2[1] <= *(float *)(param_1 + 0x84) && *(float *)(param_1 + 0x74) <= param_2[5])
  ;
  auVar12._0_4_ =
       -(uint)(*param_2 <= *(float *)(param_1 + 0x80) && *(float *)(param_1 + 0x70) <= param_2[4]);
  auVar12._8_4_ =
       -(uint)(param_2[2] <= *(float *)(param_1 + 0x88) && *(float *)(param_1 + 0x78) <= param_2[6])
  ;
  auVar12._12_4_ =
       -(uint)(param_2[3] <= *(float *)(param_1 + 0x8c) && *(float *)(param_1 + 0x7c) <= param_2[7])
  ;
  uVar3 = movmskps(in_EAX,auVar12);
  if (((byte)uVar3 & 7) != 7) {
    return *(char *)(param_1 + 0x60) != '\0';
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    pfVar5 = *(float **)(param_1 + 0x18);
    lVar4 = 0;
    do {
      fVar2 = pfVar5[3];
      auVar11._0_8_ = CONCAT44(pfVar5[1] * param_2[1],*pfVar5 * *param_2);
      auVar11._8_4_ = pfVar5[2] * param_2[2];
      auVar11._12_4_ = fVar2 * param_2[3];
      fVar7 = *pfVar5 * param_2[4];
      fVar8 = pfVar5[1] * param_2[5];
      fVar9 = pfVar5[2] * param_2[6];
      fVar10 = fVar2 * param_2[7];
      auVar13._8_4_ = auVar11._8_4_;
      auVar13._0_8_ = auVar11._0_8_;
      auVar13._12_4_ = auVar11._12_4_;
      auVar14._4_4_ = fVar8;
      auVar14._0_4_ = fVar7;
      auVar14._8_4_ = fVar9;
      auVar14._12_4_ = fVar10;
      auVar14 = minps(auVar13,auVar14);
      auVar1._4_4_ = fVar8;
      auVar1._0_4_ = fVar7;
      auVar1._8_4_ = fVar9;
      auVar1._12_4_ = fVar10;
      auVar12 = maxps(auVar11,auVar1);
      if (*(char *)(param_1 + 0x60) == '\0') {
        bVar6 = 0.0 < auVar14._4_4_ + auVar14._0_4_ + auVar14._8_4_ + fVar2;
      }
      else {
        bVar6 = auVar12._4_4_ + auVar12._0_4_ + auVar12._8_4_ + fVar2 < 0.0;
      }
      if (!bVar6) {
        return true;
      }
      lVar4 = lVar4 + 1;
      pfVar5 = pfVar5 + 4;
    } while (lVar4 < *(int *)(param_1 + 0x20));
  }
  return false;
}



// FUNCTION 144c4cdd0 FUN_144c4cdd0 body=304 status=ok
// SIG undefined FUN_144c4cdd0(void)

void FUN_144c4cdd0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if ((*(uint *)(param_1 + 0x24) & 0x7fffffff) < 6) {
    FUN_1418055da(param_1 + 0x18,&PTR_vftable_14c6e47a0,6);
  }
  if ((*(int *)(param_1 + 0x20) < 6) || (6 < *(int *)(param_1 + 0x20))) {
    *(undefined4 *)(param_1 + 0x20) = 6;
  }
  uVar1 = param_2[4];
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  *puVar3 = 0x3f800000;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = uVar1 ^ 0x80000000;
  uVar2 = *param_2;
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar4 + 0x10) = 0xbf800000;
  *(undefined4 *)(lVar4 + 0x14) = 0;
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined4 *)(lVar4 + 0x1c) = uVar2;
  uVar1 = param_2[5];
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar4 + 0x20) = 0;
  *(undefined4 *)(lVar4 + 0x24) = 0x3f800000;
  *(undefined4 *)(lVar4 + 0x28) = 0;
  *(uint *)(lVar4 + 0x2c) = uVar1 ^ 0x80000000;
  uVar2 = param_2[1];
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar4 + 0x30) = 0;
  *(undefined4 *)(lVar4 + 0x34) = 0xbf800000;
  *(undefined4 *)(lVar4 + 0x38) = 0;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  uVar1 = param_2[6];
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar4 + 0x40) = 0;
  *(undefined4 *)(lVar4 + 0x44) = 0;
  *(undefined4 *)(lVar4 + 0x48) = 0x3f800000;
  *(uint *)(lVar4 + 0x4c) = uVar1 ^ 0x80000000;
  uVar2 = param_2[2];
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar4 + 0x50) = 0;
  *(undefined4 *)(lVar4 + 0x54) = 0;
  *(undefined4 *)(lVar4 + 0x58) = 0xbf800000;
  *(undefined4 *)(lVar4 + 0x5c) = uVar2;
  FUN_144c4d050(param_2,param_1 + 0x28);
  FUN_144b3e8d0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48),param_1 + 0x70);
  return;
}



// FUNCTION 144c4cf00 FUN_144c4cf00 body=331 status=ok
// SIG undefined FUN_144c4cf00(void)

void FUN_144c4cf00(longlong param_1,float *param_2)

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
  float *pfVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  pfVar17 = *(float **)(param_1 + 0x18);
  fVar20 = -param_2[0xc];
  fVar21 = -param_2[0xd];
  fVar22 = -param_2[0xe];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  iVar18 = *(int *)(param_1 + 0x20) + -1;
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[8];
  fVar8 = param_2[9];
  fVar9 = param_2[10];
  do {
    fVar10 = *pfVar17;
    fVar11 = pfVar17[1];
    fVar12 = pfVar17[2];
    *pfVar17 = fVar11 * fVar4 + fVar10 * fVar1 + fVar12 * fVar7;
    pfVar17[1] = fVar11 * fVar5 + fVar10 * fVar2 + fVar12 * fVar8;
    pfVar17[2] = fVar11 * fVar6 + fVar10 * fVar3 + fVar12 * fVar9;
    pfVar17[3] = fVar10 * (fVar21 * fVar2 + fVar20 * fVar1 + fVar22 * fVar3) +
                 fVar11 * (fVar21 * fVar5 + fVar20 * fVar4 + fVar22 * fVar6) +
                 fVar12 * (fVar21 * fVar8 + fVar20 * fVar7 + fVar22 * fVar9) + pfVar17[3];
    pfVar17 = pfVar17 + 4;
    iVar18 = iVar18 + -1;
  } while (-1 < iVar18);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  fVar9 = param_2[8];
  fVar20 = param_2[9];
  fVar21 = param_2[10];
  fVar22 = param_2[0xb];
  fVar10 = param_2[0xc];
  fVar11 = param_2[0xd];
  fVar12 = param_2[0xe];
  fVar13 = param_2[0xf];
  lVar19 = (longlong)(*(int *)(param_1 + 0x48) + -1);
  pfVar17 = (float *)(lVar19 * 0x10 + *(longlong *)(param_1 + 0x40));
  do {
    fVar14 = *pfVar17;
    fVar15 = pfVar17[1];
    fVar16 = pfVar17[2];
    *pfVar17 = fVar15 * fVar5 + fVar14 * fVar1 + fVar16 * fVar9 + fVar10;
    pfVar17[1] = fVar15 * fVar6 + fVar14 * fVar2 + fVar16 * fVar20 + fVar11;
    pfVar17[2] = fVar15 * fVar7 + fVar14 * fVar3 + fVar16 * fVar21 + fVar12;
    pfVar17[3] = fVar15 * fVar8 + fVar14 * fVar4 + fVar16 * fVar22 + fVar13;
    pfVar17 = pfVar17 + -4;
    lVar19 = lVar19 + -1;
  } while (-1 < lVar19);
  FUN_144b3e8d0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48),param_1 + 0x70);
  return;
}



// FUNCTION 144c4d050 FUN_144c4d050 body=617 status=ok
// SIG undefined FUN_144c4d050(void)

void FUN_144c4d050(undefined1 (*param_1) [12],longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((*(uint *)(param_2 + 0x24) & 0x7fffffff) < 8) {
    FUN_1418055da(param_2 + 0x18,&PTR_vftable_14c6e47a0,8);
  }
  if (*(int *)(param_2 + 0x20) != 8) {
    *(undefined4 *)(param_2 + 0x20) = 8;
  }
  auVar2._12_4_ = 0;
  auVar2._0_12_ = *param_1;
  **(undefined1 (**) [16])(param_2 + 0x18) = auVar2;
  auVar3._4_4_ = *(undefined4 *)(*param_1 + 4);
  auVar3._0_4_ = *(undefined4 *)(param_1[1] + 4);
  auVar3._8_4_ = *(undefined4 *)(*param_1 + 8);
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x18) + 0x10) = auVar3;
  auVar4._4_4_ = *(undefined4 *)(param_1[1] + 8);
  auVar4._0_4_ = *(undefined4 *)*param_1;
  auVar4._8_4_ = *(undefined4 *)(*param_1 + 8);
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x18) + 0x20) = auVar4;
  auVar5._8_4_ = *(undefined4 *)(*param_1 + 8);
  auVar5._0_8_ = *(undefined8 *)(param_1[1] + 4);
  auVar5._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x18) + 0x30) = auVar5;
  auVar6._8_4_ = *(undefined4 *)param_1[2];
  auVar6._0_8_ = *(undefined8 *)*param_1;
  auVar6._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x18) + 0x40) = auVar6;
  auVar7._4_4_ = *(undefined4 *)(*param_1 + 4);
  auVar7._0_4_ = *(undefined4 *)(param_1[1] + 4);
  auVar7._8_4_ = *(undefined4 *)param_1[2];
  auVar7._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x18) + 0x50) = auVar7;
  auVar8._4_4_ = *(undefined4 *)(param_1[1] + 8);
  auVar8._0_4_ = *(undefined4 *)*param_1;
  auVar8._8_4_ = *(undefined4 *)param_1[2];
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x18) + 0x60) = auVar8;
  auVar9._12_4_ = 0;
  auVar9._0_12_ = *(undefined1 (*) [12])(param_1[1] + 4);
  *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x18) + 0x70) = auVar9;
  if ((*(uint *)(param_2 + 0x34) & 0x7fffffff) < 0xc) {
    FUN_141805702(param_2 + 0x28,&PTR_vftable_14c6e47a0,0xc);
  }
  if (*(int *)(param_2 + 0x30) != 0xc) {
    *(undefined4 *)(param_2 + 0x30) = 0xc;
  }
  puVar1 = *(undefined4 **)(param_2 + 0x28);
  *puVar1 = 1;
  puVar1[1] = 3;
  *(undefined8 *)(puVar1 + 2) = 7;
  puVar1[4] = 1;
  puVar1[5] = 7;
  *(undefined8 *)(puVar1 + 6) = 5;
  puVar1[8] = 0;
  puVar1[9] = 4;
  *(undefined8 *)(puVar1 + 10) = 6;
  puVar1[0xc] = 0;
  puVar1[0xd] = 6;
  *(undefined8 *)(puVar1 + 0xe) = 2;
  puVar1[0x10] = 2;
  puVar1[0x11] = 6;
  *(undefined8 *)(puVar1 + 0x12) = 7;
  puVar1[0x14] = 2;
  puVar1[0x15] = 7;
  *(undefined8 *)(puVar1 + 0x16) = 3;
  puVar1[0x18] = 0;
  puVar1[0x19] = 1;
  *(undefined8 *)(puVar1 + 0x1a) = 5;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 5;
  *(undefined8 *)(puVar1 + 0x1e) = 4;
  puVar1[0x20] = 4;
  puVar1[0x21] = 5;
  *(undefined8 *)(puVar1 + 0x22) = 7;
  puVar1[0x24] = 4;
  puVar1[0x25] = 7;
  *(undefined8 *)(puVar1 + 0x26) = 6;
  puVar1[0x28] = 0;
  puVar1[0x29] = 2;
  *(undefined8 *)(puVar1 + 0x2a) = 3;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 3;
  *(undefined8 *)(puVar1 + 0x2e) = 1;
  return;
}



// FUNCTION 144c4d2c0 FUN_144c4d2c0 body=168 status=ok
// SIG undefined FUN_144c4d2c0(void)

undefined8 * FUN_144c4d2c0(undefined8 *param_1,ulonglong param_2)

{
  FUN_144b3e940(param_1 + 5);
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
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 144c4d370 FUN_144c4d370 body=179 status=ok
// SIG undefined FUN_144c4d370(void)

/* WARNING: Removing unreachable block (ram,0x000144c4d3f3) */
/* WARNING: Removing unreachable block (ram,0x000144c4d3e6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c4d370(longlong param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  
  fVar1 = *param_2;
  fVar13 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x80) = fVar1;
  *(float *)(param_1 + 0x84) = fVar13;
  *(float *)(param_1 + 0x88) = fVar2;
  *(float *)(param_1 + 0x8c) = fVar3;
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[7];
  *(float *)(param_1 + 0x90) = fVar4;
  *(float *)(param_1 + 0x94) = fVar5;
  *(float *)(param_1 + 0x98) = fVar6;
  *(float *)(param_1 + 0x9c) = fVar7;
  if (param_3 != '\0') {
    auVar8._4_4_ = fVar5 - fVar13;
    auVar8._0_4_ = fVar4 - fVar1;
    auVar8._8_4_ = fVar6 - fVar2;
    auVar8._12_4_ = fVar7 - fVar3;
    fVar13 = (fVar13 + fVar5) * fRam000000014c6dad94 - (fVar5 - fVar13) * fRam000000014c6dad94;
    auVar11._0_8_ =
         CONCAT44(fVar13,(fVar1 + fVar4) * _DAT_14c6dad90 - (fVar4 - fVar1) * _DAT_14c6dad90);
    auVar11._8_4_ = (fVar2 + fVar6) * fRam000000014c6dad98 - (fVar6 - fVar2) * fRam000000014c6dad98;
    auVar11._12_4_ = (fVar3 + fVar7) * fRam000000014c6dad9c - (fVar7 - fVar3) * fRam000000014c6dad9c
    ;
    auVar12._0_8_ = auVar11._0_8_ << 0x20;
    auVar12._8_8_ = auVar11._8_8_ << 0x20 | (ulonglong)(uint)fVar13;
    auVar9._4_4_ = (float)(int)((ulonglong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
    auVar9._0_4_ = (float)(int)*(undefined8 *)(param_1 + 0xc0);
    auVar9._8_4_ = (float)*(int *)(param_1 + 200);
    auVar9._12_4_ = 0x3f800000;
    auVar9 = divps(auVar8,auVar9);
    auVar10._0_8_ = auVar9._0_8_ << 0x20;
    auVar10._8_8_ = auVar9._8_8_ << 0x20 | auVar9._0_8_ >> 0x20;
    *(undefined1 (*) [16])(param_1 + 0xa0) = auVar10 >> 0x20;
    *(undefined1 (*) [16])(param_1 + 0xb0) = auVar12 >> 0x20;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_144fea9c0();
    }
  }
  return;
}



// FUNCTION 144c4d430 FUN_144c4d430 body=179 status=ok
// SIG undefined FUN_144c4d430(void)

/* WARNING: Removing unreachable block (ram,0x000144c4d4c2) */
/* WARNING: Removing unreachable block (ram,0x000144c4d4b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c4d430(longlong param_1,int param_2,int param_3,int param_4,char param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  *(int *)(param_1 + 0xc0) = param_2;
  *(int *)(param_1 + 0xc4) = param_3;
  *(int *)(param_1 + 200) = param_4;
  if (param_5 != '\0') {
    fVar4 = *(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x80);
    fVar5 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x84);
    fVar6 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x88);
    fVar7 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x8c);
    auVar1._4_4_ = fVar5;
    auVar1._0_4_ = fVar4;
    auVar1._8_4_ = fVar6;
    auVar1._12_4_ = fVar7;
    fVar5 = (*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x94)) * fRam000000014c6dad94 -
            fVar5 * fRam000000014c6dad94;
    auVar8._0_8_ = CONCAT44(fVar5,(*(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x90)) *
                                  _DAT_14c6dad90 - fVar4 * _DAT_14c6dad90);
    auVar8._8_4_ = (*(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x98)) * fRam000000014c6dad98
                   - fVar6 * fRam000000014c6dad98;
    auVar8._12_4_ =
         (*(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x9c)) * fRam000000014c6dad9c -
         fVar7 * fRam000000014c6dad9c;
    auVar2._0_4_ = (float)param_2;
    auVar2._4_4_ = (float)param_3;
    auVar2._8_4_ = (float)param_4;
    auVar2._12_4_ = 0x3f800000;
    auVar9._0_8_ = auVar8._0_8_ << 0x20;
    auVar9._8_8_ = auVar8._8_8_ << 0x20 | (ulonglong)(uint)fVar5;
    auVar2 = divps(auVar1,auVar2);
    auVar3._0_8_ = auVar2._0_8_ << 0x20;
    auVar3._8_8_ = auVar2._8_8_ << 0x20 | auVar2._0_8_ >> 0x20;
    *(undefined1 (*) [16])(param_1 + 0xb0) = auVar9 >> 0x20;
    *(undefined1 (*) [16])(param_1 + 0xa0) = auVar3 >> 0x20;
  }
  return;
}



// FUNCTION 144c4d4f0 FUN_144c4d4f0 body=3 status=ok
// SIG undefined FUN_144c4d4f0(void)

void FUN_144c4d4f0(void)

{
  return;
}



// FUNCTION 144c4d500 FUN_144c4d500 body=238 status=ok
// SIG undefined FUN_144c4d500(void)

void FUN_144c4d500(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  puVar4 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar2 = (undefined4 *)(lVar1 + 8);
    uVar5 = (ulonglong)*(uint *)(param_1 + 1);
    puVar3 = puVar4 + 2;
    do {
      if (puVar2 + -2 != (undefined4 *)0x0) {
        puVar2[-2] = *puVar4;
        *(undefined2 *)(puVar2 + -1) = *(undefined2 *)(puVar4 + 1);
        *(undefined2 *)((longlong)puVar2 + -2) = *(undefined2 *)((longlong)puVar3 + -2);
        *puVar2 = *puVar3;
        *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar3 + 1);
        puVar2[2] = puVar3[2];
        puVar2[3] = puVar3[3];
      }
      puVar2 = puVar2 + 6;
      puVar4 = puVar4 + 6;
      puVar3 = puVar3 + 6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c4d650 FUN_144c4d650 body=264 status=ok
// SIG undefined FUN_144c4d650(void)

void FUN_144c4d650(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        *(undefined ***)(puVar6 + -9) = hkaiReferencedArray<unsigned_int>::vftable;
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



// FUNCTION 144c4d760 FUN_144c4d760 body=88 status=ok
// SIG undefined FUN_144c4d760(void)

void FUN_144c4d760(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c4d7c0 FUN_144c4d7c0 body=185 status=ok
// SIG undefined FUN_144c4d7c0(void)

void FUN_144c4d7c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
          FUN_147e4b86a(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
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



// FUNCTION 144c4d880 FUN_144c4d880 body=18 status=ok
// SIG undefined FUN_144c4d880(void)

undefined8 * FUN_144c4d880(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e54a0;
  return param_2;
}



// FUNCTION 144c4d8a0 FUN_144c4d8a0 body=159 status=ok
// SIG undefined FUN_144c4d8a0(void)

undefined8 * FUN_144c4d8a0(undefined8 *param_1,uint param_2)

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



// FUNCTION 144c4d940 FUN_144c4d940 body=289 status=ok
// SIG undefined FUN_144c4d940(void)

void FUN_144c4d940(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  uVar2 = param_2[1];
  if (uVar2 != (int)param_1[1] - 1U) {
    lVar5 = FUN_144c4dc50(param_1,*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x10);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  lVar5 = param_1[1];
  uVar4 = (int)lVar5 - 1;
  *(uint *)(param_1 + 1) = uVar4;
  if (uVar4 != uVar2) {
    puVar7 = (undefined4 *)((longlong)(int)uVar2 * 0x10 + *param_1);
    puVar8 = (undefined4 *)(*param_1 + -0x10 + (longlong)(int)lVar5 * 0x10);
    if ((puVar7 != puVar8) && (puVar7 != (undefined4 *)0x0)) {
      *puVar7 = *puVar8;
      puVar7[1] = puVar8[1];
      puVar7[2] = puVar8[2];
      puVar7[3] = puVar8[3];
    }
  }
  lVar5 = param_1[2];
  uVar9 = (ulonglong)(int)param_1[3];
  uVar6 = ((longlong)param_2 - lVar5 >> 3) + 1U & uVar9;
  puVar1 = (uint *)(lVar5 + uVar6 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  while (-1 < iVar3) {
    lVar5 = lVar5 + ((ulonglong)*puVar1 & uVar9 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar9 = (ulonglong)(int)param_1[3];
    uVar6 = ((longlong)puVar1 - lVar5 >> 3) + 1U & uVar9;
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144c4da70 FUN_144c4da70 body=165 status=ok
// SIG undefined FUN_144c4da70(void)

void FUN_144c4da70(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 144c4db20 FUN_144c4db20 body=299 status=ok
// SIG undefined FUN_144c4db20(void)

uint * FUN_144c4db20(longlong *param_1,uint *param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  
  iVar10 = (int)param_1[1] + 1;
  uVar8 = (longlong)iVar10 * 3;
  if ((iVar10 < 0) || (0xffffffff < uVar8)) {
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
  if (((bool)(bVar4 & bVar3)) && ((uint)uVar2 < (uint)uVar8)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = param_1[2];
  uVar6 = (*param_3 << 0x16 ^ param_3[1]) << 5 ^ param_3[2];
  uVar7 = uVar6 * -0x61c8864f;
  uVar6 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar6 * -0x4f000000;
  uVar8 = (ulonglong)(uVar6 & *(uint *)(param_1 + 3));
  iVar10 = *(int *)(lVar1 + 4 + uVar8 * 8);
  do {
    puVar5 = (uint *)(lVar1 + uVar8 * 8);
    if (iVar10 < 0) {
      uVar7 = *(uint *)(param_1 + 1);
      *puVar5 = uVar6;
      puVar5[1] = uVar7;
      lVar1 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144c4dc21:
      param_2[1] = (uint)((longlong)puVar5 - lVar1 >> 3);
      return param_2;
    }
    if (*puVar5 == uVar6) {
      piVar9 = (int *)((longlong)(int)puVar5[1] * 0x10 + *param_1);
      if (((*piVar9 == *param_3) && (piVar9[1] == param_3[1])) && (piVar9[2] == param_3[2])) {
        *param_2 = puVar5[1];
        goto LAB_144c4dc21;
      }
    }
    uVar8 = ((longlong)puVar5 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar10 = *(int *)(lVar1 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144c4dc50 FUN_144c4dc50 body=141 status=ok
// SIG undefined FUN_144c4dc50(void)

uint * FUN_144c4dc50(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  int *piVar6;
  
  lVar1 = param_1[2];
  uVar2 = (*param_2 << 0x16 ^ param_2[1]) << 5 ^ param_2[2];
  uVar3 = uVar2 * -0x61c8864f;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar2 * -0x4f000000;
  uVar4 = (ulonglong)(uVar3 & *(uint *)(param_1 + 3));
  uVar2 = *(uint *)(lVar1 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar2 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar1 + uVar4 * 8);
    if ((((*puVar5 == uVar3) &&
         (piVar6 = (int *)((ulonglong)uVar2 * 0x10 + *param_1), *piVar6 == *param_2)) &&
        (piVar6[1] == param_2[1])) && (piVar6[2] == param_2[2])) break;
    uVar4 = ((longlong)puVar5 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar2 = *(uint *)(lVar1 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 144c4dce0 FUN_144c4dce0 body=290 status=ok
// SIG undefined FUN_144c4dce0(void)

void FUN_144c4dce0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x10,&local_res8);
  puVar3 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar2 = (undefined4 *)(lVar1 + 8);
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if (puVar2 + -2 != (undefined4 *)0x0) {
        puVar2[-2] = *puVar3;
        puVar2[-1] = puVar3[1];
        *puVar2 = puVar3[2];
        puVar2[1] = puVar3[3];
      }
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar4 * 0x10 + 0x10;
  uVar5 = uVar4;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar5 = uVar4 + 1;
    if (uVar6 <= local_res8) {
      uVar5 = uVar5 + (local_res8 + uVar4 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 << 4);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return;
}



// FUNCTION 144c4de70 FUN_144c4de70 body=611 status=ok
// SIG undefined FUN_144c4de70(void)

void FUN_144c4de70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  lVar12 = (longlong)param_4;
  if (0 < param_4) {
    puVar10 = (uint *)(param_1 + 0x24);
    do {
      if (puVar10 + -9 != (uint *)0x0) {
        puVar10[-7] = 0xffffffff;
        puVar10[-6] = 0;
        puVar10[-5] = 1;
        puVar10[-4] = 0;
        *(undefined ***)(puVar10 + -9) =
             hkaiReferencedArray<hkaiUserEdgeUtils::UserEdgePair>::vftable;
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar3 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar10);
        lVar5 = *(longlong *)((param_2 - param_1) + -0xc + (longlong)puVar10);
        if (0 < (int)uVar3) {
          puVar9 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0x90);
          *(undefined8 **)(puVar10 + -3) = puVar9;
          puVar10[-1] = uVar3;
          uVar13 = (ulonglong)uVar3;
          *puVar10 = uVar3;
          piVar11 = (int *)(lVar5 + 0x68);
          do {
            if (puVar9 != (undefined8 *)0x0) {
              uVar8 = *(undefined8 *)(piVar11 + -0x18);
              plVar1 = puVar9 + 8;
              *puVar9 = *(undefined8 *)(piVar11 + -0x1a);
              puVar9[1] = uVar8;
              iVar4 = piVar11[-0x15];
              iVar6 = piVar11[-0x14];
              iVar7 = piVar11[-0x13];
              *(int *)(puVar9 + 2) = piVar11[-0x16];
              *(int *)((longlong)puVar9 + 0x14) = iVar4;
              *(int *)(puVar9 + 3) = iVar6;
              *(int *)((longlong)puVar9 + 0x1c) = iVar7;
              iVar4 = piVar11[-0x11];
              iVar6 = piVar11[-0x10];
              iVar7 = piVar11[-0xf];
              *(int *)(puVar9 + 4) = piVar11[-0x12];
              *(int *)((longlong)puVar9 + 0x24) = iVar4;
              *(int *)(puVar9 + 5) = iVar6;
              *(int *)((longlong)puVar9 + 0x2c) = iVar7;
              *(int *)(puVar9 + 6) = piVar11[-0xe];
              *(int *)((longlong)puVar9 + 0x34) = piVar11[-0xd];
              *(int *)(puVar9 + 7) = piVar11[-0xc];
              *(int *)((longlong)puVar9 + 0x3c) = piVar11[-0xb];
              *plVar1 = (longlong)(puVar9 + 10);
              *(undefined4 *)(puVar9 + 9) = 0;
              *(undefined4 *)((longlong)puVar9 + 0x4c) = 0x80000004;
              if ((longlong *)(piVar11 + -10) != plVar1) {
                iVar4 = piVar11[-8];
                lVar5 = *(longlong *)(piVar11 + -10);
                if (4 < iVar4) {
                  FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
                }
                FUN_144b3d470(*plVar1,lVar5,(longlong)iVar4 * 4);
                *(int *)(puVar9 + 9) = iVar4;
              }
              plVar1 = puVar9 + 0xc;
              *(undefined4 *)(puVar9 + 0xd) = 0;
              *plVar1 = (longlong)(puVar9 + 0xe);
              *(undefined4 *)((longlong)puVar9 + 0x6c) = 0x80000004;
              if ((longlong *)(piVar11 + -2) != plVar1) {
                iVar4 = *piVar11;
                lVar5 = *(longlong *)(piVar11 + -2);
                if (4 < iVar4) {
                  FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
                }
                FUN_144b3d470(*plVar1,lVar5,(longlong)iVar4 * 4);
                *(int *)(puVar9 + 0xd) = iVar4;
              }
              *(short *)(puVar9 + 0x10) = (short)piVar11[6];
              *(undefined2 *)((longlong)puVar9 + 0x82) = *(undefined2 *)((longlong)piVar11 + 0x1a);
              piVar2 = piVar11 + 7;
              piVar11 = piVar11 + 0x24;
              *(char *)((longlong)puVar9 + 0x84) = (char)*piVar2;
            }
            uVar13 = uVar13 - 1;
            puVar9 = puVar9 + 0x12;
          } while (uVar13 != 0);
        }
      }
      puVar10 = puVar10 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c4e0e0 FUN_144c4e0e0 body=88 status=ok
// SIG undefined FUN_144c4e0e0(void)

void FUN_144c4e0e0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c4e140 FUN_144c4e140 body=804 status=ok
// SIG undefined FUN_144c4e140(void)

void FUN_144c4e140(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  
  if (0 < param_4) {
    plVar22 = (longlong *)(param_1 + 0x18);
    lVar21 = (longlong)param_4;
    do {
      plVar12 = (longlong *)((param_2 - param_1) + (longlong)plVar22);
      if (plVar12 != plVar22) {
        lVar6 = *plVar12;
        iVar5 = *(int *)((longlong)plVar22 + (param_2 - param_1) + 8);
        if ((int)(*(uint *)((longlong)plVar22 + 0xc) & 0x7fffffff) < iVar5) {
          FUN_144c4f5e0(plVar22,&PTR_vftable_14c6e47a0,(longlong)iVar5);
        }
        if (iVar5 < (int)plVar22[1]) {
          puVar13 = (uint *)((longlong)(int)plVar22[1] * 0x90 + *plVar22);
          puVar18 = (uint *)((longlong)iVar5 * 0x90 + *plVar22);
          if (puVar13 != puVar18) {
            puVar13 = puVar13 + 0x1b;
            do {
              puVar2 = puVar13 + -0x24;
              puVar13[-0x25] = 0;
              if ((-1 < (int)*puVar2) && (*(longlong *)(puVar13 + -0x27) != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,*(longlong *)(puVar13 + -0x27),
                           (ulonglong)(*puVar2 & 0x7fffffff) << 2);
              }
              puVar13[-0x27] = 0;
              puVar13[-0x26] = 0;
              *puVar2 = 0x80000000;
              puVar13[-0x2d] = 0;
              if ((-1 < (int)puVar13[-0x2c]) && (*(longlong *)(puVar13 + -0x2f) != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,*(longlong *)(puVar13 + -0x2f),
                           (ulonglong)(puVar13[-0x2c] & 0x7fffffff) << 2);
              }
              puVar1 = puVar13 + -0x3f;
              puVar13[-0x2f] = 0;
              puVar13[-0x2e] = 0;
              puVar13[-0x2c] = 0x80000000;
              puVar13 = puVar2;
            } while (puVar1 != puVar18);
          }
        }
        lVar19 = *plVar22;
        iVar7 = iVar5;
        if ((int)plVar22[1] < iVar5) {
          iVar7 = (int)plVar22[1];
        }
        if ((lVar19 != lVar6) && (lVar16 = (longlong)iVar7, 0 < iVar7)) {
          puVar14 = (undefined4 *)(lVar19 + 0x10);
          lVar19 = lVar6 - lVar19;
          do {
            puVar20 = (undefined8 *)(lVar19 + -0x10 + (longlong)puVar14);
            uVar11 = puVar20[1];
            *(undefined8 *)(puVar14 + -4) = *puVar20;
            *(undefined8 *)(puVar14 + -2) = uVar11;
            puVar4 = (undefined4 *)(lVar19 + (longlong)puVar14);
            uVar8 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            *puVar14 = *puVar4;
            puVar14[1] = uVar8;
            puVar14[2] = uVar9;
            puVar14[3] = uVar10;
            puVar4 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar14);
            uVar8 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            puVar14[4] = *puVar4;
            puVar14[5] = uVar8;
            puVar14[6] = uVar9;
            puVar14[7] = uVar10;
            puVar14[8] = *(undefined4 *)(lVar19 + 0x20 + (longlong)puVar14);
            puVar14[9] = *(undefined4 *)(lVar19 + 0x24 + (longlong)puVar14);
            puVar14[10] = *(undefined4 *)(lVar19 + 0x28 + (longlong)puVar14);
            puVar14[0xb] = *(undefined4 *)(lVar19 + 0x2c + (longlong)puVar14);
            FUN_144c4eb70(puVar14 + 0xc,(longlong)puVar14 + lVar19 + 0x30);
            FUN_144c4eb70(puVar14 + 0x14,(longlong)puVar14 + lVar19 + 0x50);
            *(undefined2 *)(puVar14 + 0x1c) = *(undefined2 *)(lVar19 + 0x70 + (longlong)puVar14);
            *(undefined2 *)((longlong)puVar14 + 0x72) =
                 *(undefined2 *)(lVar19 + 0x72 + (longlong)puVar14);
            *(undefined1 *)(puVar14 + 0x1d) = *(undefined1 *)(lVar19 + 0x74 + (longlong)puVar14);
            puVar14 = puVar14 + 0x24;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        puVar20 = (undefined8 *)((longlong)iVar7 * 0x90 + lVar6);
        if (0 < iVar5 - iVar7) {
          uVar15 = (ulonglong)(uint)(iVar5 - iVar7);
          puVar17 = (undefined8 *)(*plVar22 + (longlong)iVar7 * 0x90);
          do {
            if (puVar17 != (undefined8 *)0x0) {
              uVar11 = puVar20[1];
              *puVar17 = *puVar20;
              puVar17[1] = uVar11;
              uVar8 = *(undefined4 *)((longlong)puVar20 + 0x14);
              uVar9 = *(undefined4 *)(puVar20 + 3);
              uVar10 = *(undefined4 *)((longlong)puVar20 + 0x1c);
              *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar20 + 2);
              *(undefined4 *)((longlong)puVar17 + 0x14) = uVar8;
              *(undefined4 *)(puVar17 + 3) = uVar9;
              *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar10;
              uVar8 = *(undefined4 *)((longlong)puVar20 + 0x24);
              uVar9 = *(undefined4 *)(puVar20 + 5);
              uVar10 = *(undefined4 *)((longlong)puVar20 + 0x2c);
              *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar20 + 4);
              *(undefined4 *)((longlong)puVar17 + 0x24) = uVar8;
              *(undefined4 *)(puVar17 + 5) = uVar9;
              *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar10;
              *(undefined4 *)(puVar17 + 6) = *(undefined4 *)(puVar20 + 6);
              *(undefined4 *)((longlong)puVar17 + 0x34) = *(undefined4 *)((longlong)puVar20 + 0x34);
              *(undefined4 *)(puVar17 + 7) = *(undefined4 *)(puVar20 + 7);
              *(undefined4 *)((longlong)puVar17 + 0x3c) = *(undefined4 *)((longlong)puVar20 + 0x3c);
              puVar17[8] = puVar17 + 10;
              *(undefined4 *)(puVar17 + 9) = 0;
              *(undefined4 *)((longlong)puVar17 + 0x4c) = 0x80000004;
              FUN_144c4eb70(puVar17 + 8,puVar20 + 8);
              *(undefined4 *)(puVar17 + 0xd) = 0;
              puVar17[0xc] = puVar17 + 0xe;
              *(undefined4 *)((longlong)puVar17 + 0x6c) = 0x80000004;
              FUN_144c4eb70(puVar17 + 0xc,puVar20 + 0xc);
              *(undefined2 *)(puVar17 + 0x10) = *(undefined2 *)(puVar20 + 0x10);
              *(undefined2 *)((longlong)puVar17 + 0x82) = *(undefined2 *)((longlong)puVar20 + 0x82);
              puVar3 = (undefined1 *)((longlong)puVar20 + 0x84);
              puVar20 = puVar20 + 0x12;
              *(undefined1 *)((longlong)puVar17 + 0x84) = *puVar3;
            }
            uVar15 = uVar15 - 1;
            puVar17 = puVar17 + 0x12;
          } while (uVar15 != 0);
        }
        *(int *)(plVar22 + 1) = iVar5;
      }
      plVar22 = plVar22 + 5;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return;
}



// FUNCTION 144c4e4d0 FUN_144c4e4d0 body=712 status=ok
// SIG undefined FUN_144c4e4d0(void)

void FUN_144c4e4d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  
  lVar12 = (longlong)param_4;
  if (0 < param_4) {
    puVar14 = (uint *)(param_1 + 0x24);
    do {
      if (puVar14 + -9 != (uint *)0x0) {
        puVar14[-7] = 0xffffffff;
        puVar14[-6] = 0;
        puVar14[-5] = 1;
        puVar14[-4] = 0;
        *(undefined ***)(puVar14 + -9) =
             hkaiReferencedArray<hkaiUserEdgeUtils::UserEdgeSetup>::vftable;
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        *puVar14 = 0x80000000;
        uVar3 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar14);
        lVar5 = *(longlong *)((param_2 - param_1) + -0xc + (longlong)puVar14);
        if (0 < (int)uVar3) {
          puVar10 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0x120);
          *(undefined8 **)(puVar14 + -3) = puVar10;
          uVar11 = (ulonglong)uVar3;
          puVar14[-1] = uVar3;
          puVar13 = (undefined8 *)(lVar5 + 0x70);
          *puVar14 = uVar3;
          do {
            if (puVar10 != (undefined8 *)0x0) {
              uVar9 = puVar13[-0xd];
              plVar1 = puVar10 + 0x14;
              *puVar10 = puVar13[-0xe];
              puVar10[1] = uVar9;
              uVar9 = puVar13[-0xb];
              puVar10[2] = puVar13[-0xc];
              puVar10[3] = uVar9;
              uVar9 = puVar13[-9];
              puVar10[4] = puVar13[-10];
              puVar10[5] = uVar9;
              uVar9 = puVar13[-7];
              puVar10[6] = puVar13[-8];
              puVar10[7] = uVar9;
              uVar9 = puVar13[-5];
              puVar10[8] = puVar13[-6];
              puVar10[9] = uVar9;
              uVar9 = puVar13[-3];
              puVar10[10] = puVar13[-4];
              puVar10[0xb] = uVar9;
              uVar9 = puVar13[-1];
              puVar10[0xc] = puVar13[-2];
              puVar10[0xd] = uVar9;
              uVar9 = puVar13[1];
              puVar10[0xe] = *puVar13;
              puVar10[0xf] = uVar9;
              uVar6 = *(undefined4 *)((longlong)puVar13 + 0x14);
              uVar7 = *(undefined4 *)(puVar13 + 3);
              uVar8 = *(undefined4 *)((longlong)puVar13 + 0x1c);
              *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar13 + 2);
              *(undefined4 *)((longlong)puVar10 + 0x84) = uVar6;
              *(undefined4 *)(puVar10 + 0x11) = uVar7;
              *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar8;
              uVar6 = *(undefined4 *)((longlong)puVar13 + 0x24);
              uVar7 = *(undefined4 *)(puVar13 + 5);
              uVar8 = *(undefined4 *)((longlong)puVar13 + 0x2c);
              *(undefined4 *)(puVar10 + 0x12) = *(undefined4 *)(puVar13 + 4);
              *(undefined4 *)((longlong)puVar10 + 0x94) = uVar6;
              *(undefined4 *)(puVar10 + 0x13) = uVar7;
              *(undefined4 *)((longlong)puVar10 + 0x9c) = uVar8;
              *plVar1 = (longlong)(puVar10 + 0x16);
              *(undefined4 *)(puVar10 + 0x15) = 0;
              *(undefined4 *)((longlong)puVar10 + 0xac) = 0x80000004;
              if (puVar13 + 6 != plVar1) {
                iVar4 = *(int *)(puVar13 + 7);
                lVar5 = puVar13[6];
                if (4 < iVar4) {
                  FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
                }
                FUN_144b3d470(*plVar1,lVar5,(longlong)iVar4 * 4);
                *(int *)(puVar10 + 0x15) = iVar4;
              }
              plVar1 = puVar10 + 0x18;
              *(undefined4 *)(puVar10 + 0x19) = 0;
              *plVar1 = (longlong)(puVar10 + 0x1a);
              *(undefined4 *)((longlong)puVar10 + 0xcc) = 0x80000004;
              if (puVar13 + 10 != plVar1) {
                iVar4 = *(int *)(puVar13 + 0xb);
                lVar5 = puVar13[10];
                if (4 < iVar4) {
                  FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
                }
                FUN_144b3d470(*plVar1,lVar5,(longlong)iVar4 * 4);
                *(int *)(puVar10 + 0x19) = iVar4;
              }
              *(undefined4 *)(puVar10 + 0x1c) = *(undefined4 *)(puVar13 + 0xe);
              *(undefined4 *)((longlong)puVar10 + 0xe4) = *(undefined4 *)((longlong)puVar13 + 0x74);
              uVar6 = *(undefined4 *)((longlong)puVar13 + 0x84);
              uVar7 = *(undefined4 *)(puVar13 + 0x11);
              uVar8 = *(undefined4 *)((longlong)puVar13 + 0x8c);
              *(undefined4 *)(puVar10 + 0x1e) = *(undefined4 *)(puVar13 + 0x10);
              *(undefined4 *)((longlong)puVar10 + 0xf4) = uVar6;
              *(undefined4 *)(puVar10 + 0x1f) = uVar7;
              *(undefined4 *)((longlong)puVar10 + 0xfc) = uVar8;
              uVar9 = puVar13[0x13];
              puVar10[0x20] = puVar13[0x12];
              puVar10[0x21] = uVar9;
              *(undefined1 *)(puVar10 + 0x22) = *(undefined1 *)(puVar13 + 0x14);
              *(undefined1 *)((longlong)puVar10 + 0x111) = *(undefined1 *)((longlong)puVar13 + 0xa1)
              ;
              *(undefined1 *)((longlong)puVar10 + 0x112) = *(undefined1 *)((longlong)puVar13 + 0xa2)
              ;
              puVar2 = (undefined4 *)((longlong)puVar13 + 0xa4);
              puVar13 = puVar13 + 0x24;
              *(undefined4 *)((longlong)puVar10 + 0x114) = *puVar2;
            }
            uVar11 = uVar11 - 1;
            puVar10 = puVar10 + 0x24;
          } while (uVar11 != 0);
        }
      }
      puVar14 = puVar14 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c4e7a0 FUN_144c4e7a0 body=88 status=ok
// SIG undefined FUN_144c4e7a0(void)

void FUN_144c4e7a0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c4e800 FUN_144c4e800 body=70 status=ok
// SIG undefined FUN_144c4e800(void)

void FUN_144c4e800(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c4f200(param_1,param_2 + param_1);
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c4e850 FUN_144c4e850 body=18 status=ok
// SIG undefined FUN_144c4e850(void)

undefined8 * FUN_144c4e850(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e5690;
  return param_2;
}



// FUNCTION 144c4e870 FUN_144c4e870 body=363 status=ok
// SIG undefined FUN_144c4e870(void)

undefined8 * FUN_144c4e870(undefined8 *param_1,uint param_2)

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



// FUNCTION 144c4e9e0 FUN_144c4e9e0 body=18 status=ok
// SIG undefined FUN_144c4e9e0(void)

undefined8 * FUN_144c4e9e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e5820;
  return param_2;
}



// FUNCTION 144c4ea00 FUN_144c4ea00 body=366 status=ok
// SIG undefined FUN_144c4ea00(void)

undefined8 * FUN_144c4ea00(undefined8 *param_1,uint param_2)

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



// FUNCTION 144c4eb70 FUN_144c4eb70 body=108 status=ok
// SIG undefined FUN_144c4eb70(void)

undefined8 * FUN_144c4eb70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    uVar2 = *param_2;
    iVar1 = *(int *)(param_2 + 1);
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_141807e20(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    FUN_144b3d470(*param_1,uVar2,(longlong)iVar1 * 4);
    *(int *)(param_1 + 1) = iVar1;
  }
  return param_1;
}



// FUNCTION 144c4ebe0 FUN_144c4ebe0 body=504 status=ok
// SIG undefined FUN_144c4ebe0(void)

undefined8 * FUN_144c4ebe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar4 = param_2[1];
  plVar2 = param_1 + 0x14;
  *param_1 = *param_2;
  param_1[1] = uVar4;
  plVar3 = param_2 + 0x14;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar4 = param_2[7];
  lVar8 = 4;
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  uVar4 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  uVar4 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  uVar4 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  uVar4 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar4;
  puVar5 = param_1 + 0x16;
  *plVar2 = (longlong)puVar5;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000004;
  if (plVar3 != plVar2) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
    puVar1 = param_2 + 0x16;
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
    if ((undefined8 *)*plVar3 == puVar1) {
      *plVar2 = (longlong)puVar5;
      if (puVar5 != puVar1) {
        lVar6 = (longlong)puVar1 - (longlong)puVar5;
        lVar7 = lVar8;
        do {
          *(undefined4 *)puVar5 = *(undefined4 *)(lVar6 + (longlong)puVar5);
          puVar5 = (undefined8 *)((longlong)puVar5 + 4);
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else {
      *plVar2 = *plVar3;
      *plVar3 = (longlong)puVar1;
      *(undefined4 *)((longlong)param_2 + 0xac) = 0x80000004;
    }
    *(undefined4 *)(param_2 + 0x15) = 0;
  }
  plVar2 = param_1 + 0x18;
  plVar3 = param_2 + 0x18;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000004;
  puVar5 = param_1 + 0x1a;
  *plVar2 = (longlong)puVar5;
  if (plVar3 != plVar2) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
    puVar1 = param_2 + 0x1a;
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
    if ((undefined8 *)*plVar3 == puVar1) {
      *plVar2 = (longlong)puVar5;
      if (puVar5 != puVar1) {
        lVar7 = (longlong)puVar1 - (longlong)puVar5;
        do {
          *(undefined4 *)puVar5 = *(undefined4 *)(lVar7 + (longlong)puVar5);
          puVar5 = (undefined8 *)((longlong)puVar5 + 4);
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
    else {
      *plVar2 = *plVar3;
      *plVar3 = (longlong)puVar1;
      *(undefined4 *)((longlong)param_2 + 0xcc) = 0x80000004;
    }
    *(undefined4 *)(param_2 + 0x19) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
  uVar4 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar4;
  uVar4 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar4;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x111) = *(undefined1 *)((longlong)param_2 + 0x111);
  *(undefined1 *)((longlong)param_1 + 0x112) = *(undefined1 *)((longlong)param_2 + 0x112);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  return param_1;
}



// FUNCTION 144c4ede0 FUN_144c4ede0 body=165 status=ok
// SIG undefined FUN_144c4ede0(void)

void FUN_144c4ede0(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 144c4ee90 FUN_144c4ee90 body=119 status=ok
// SIG undefined FUN_144c4ee90(void)

int * FUN_144c4ee90(longlong param_1,int *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  
  local_18 = *(int *)(param_1 + 0x420);
  *param_2 = local_18;
  local_24 = 6;
  local_28 = 0x5000020;
  *(int *)(param_1 + 0x420) = local_18 + 1;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_28);
  FUN_144c2d170(param_1,&local_28);
  FUN_144c4ede0(param_1 + 0xd8,param_1,*param_2);
  return param_2;
}



// FUNCTION 144c4ef10 FUN_144c4ef10 body=206 status=ok
// SIG undefined FUN_144c4ef10(void)

void FUN_144c4ef10(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  longlong local_20;
  
  local_res8 = 0x28;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkaiReferencedArray");
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    lVar2 = FUN_144c4efe0(lVar1,&local_48);
  }
  local_34 = 7;
  local_38 = 0x5000020;
  local_28 = param_2;
  local_20 = lVar2;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_38);
  FUN_144c2d170(param_1,&local_38);
  if (lVar2 != 0) {
    FUN_144b3f230(lVar2);
  }
  return;
}



// FUNCTION 144c4efe0 FUN_144c4efe0 body=540 status=ok
// SIG undefined FUN_144c4efe0(void)

undefined8 * FUN_144c4efe0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar10 = (undefined8 *)*param_2;
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiReferencedArray<hkaiUserEdgeUtils::UserEdgePair>::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  lVar6 = (param_2[1] - (longlong)puVar10) / 0x12 + (param_2[1] - (longlong)puVar10 >> 0x3f);
  uVar9 = (lVar6 >> 3) - (lVar6 >> 0x3f);
  iVar8 = (int)uVar9;
  if (0 < iVar8) {
    uVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)iVar8 * 0x90);
    param_1[3] = uVar5;
    *(int *)(param_1 + 4) = iVar8;
    *(int *)((longlong)param_1 + 0x24) = iVar8;
    piVar7 = (int *)(puVar10 + 0xd);
    uVar9 = uVar9 & 0xffffffff;
    puVar11 = (undefined8 *)param_1[3];
    do {
      if (puVar11 != (undefined8 *)0x0) {
        uVar5 = puVar10[1];
        plVar1 = puVar11 + 8;
        *puVar11 = *puVar10;
        puVar11[1] = uVar5;
        iVar8 = piVar7[-0x15];
        iVar3 = piVar7[-0x14];
        iVar4 = piVar7[-0x13];
        *(int *)(puVar11 + 2) = piVar7[-0x16];
        *(int *)((longlong)puVar11 + 0x14) = iVar8;
        *(int *)(puVar11 + 3) = iVar3;
        *(int *)((longlong)puVar11 + 0x1c) = iVar4;
        iVar8 = piVar7[-0x11];
        iVar3 = piVar7[-0x10];
        iVar4 = piVar7[-0xf];
        *(int *)(puVar11 + 4) = piVar7[-0x12];
        *(int *)((longlong)puVar11 + 0x24) = iVar8;
        *(int *)(puVar11 + 5) = iVar3;
        *(int *)((longlong)puVar11 + 0x2c) = iVar4;
        *(int *)(puVar11 + 6) = piVar7[-0xe];
        *(int *)((longlong)puVar11 + 0x34) = piVar7[-0xd];
        *(int *)(puVar11 + 7) = piVar7[-0xc];
        *(int *)((longlong)puVar11 + 0x3c) = piVar7[-0xb];
        *plVar1 = (longlong)(puVar11 + 10);
        *(undefined4 *)(puVar11 + 9) = 0;
        *(undefined4 *)((longlong)puVar11 + 0x4c) = 0x80000004;
        if ((longlong *)(piVar7 + -10) != plVar1) {
          iVar8 = piVar7[-8];
          lVar6 = *(longlong *)(piVar7 + -10);
          if (4 < iVar8) {
            FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
          }
          FUN_144b3d470(*plVar1,lVar6,(longlong)iVar8 * 4);
          *(int *)(puVar11 + 9) = iVar8;
        }
        plVar1 = puVar11 + 0xc;
        *(undefined4 *)(puVar11 + 0xd) = 0;
        *plVar1 = (longlong)(puVar11 + 0xe);
        *(undefined4 *)((longlong)puVar11 + 0x6c) = 0x80000004;
        if ((longlong *)(piVar7 + -2) != plVar1) {
          iVar8 = *piVar7;
          lVar6 = *(longlong *)(piVar7 + -2);
          if (4 < iVar8) {
            FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
          }
          FUN_144b3d470(*plVar1,lVar6,(longlong)iVar8 * 4);
          *(int *)(puVar11 + 0xd) = iVar8;
        }
        puVar10 = puVar10 + 0x12;
        *(short *)(puVar11 + 0x10) = (short)piVar7[6];
        *(undefined2 *)((longlong)puVar11 + 0x82) = *(undefined2 *)((longlong)piVar7 + 0x1a);
        piVar2 = piVar7 + 7;
        piVar7 = piVar7 + 0x24;
        *(char *)((longlong)puVar11 + 0x84) = (char)*piVar2;
      }
      uVar9 = uVar9 - 1;
      puVar11 = puVar11 + 0x12;
    } while (uVar9 != 0);
    return param_1;
  }
  return param_1;
}



// FUNCTION 144c4f200 FUN_144c4f200 body=984 status=ok
// SIG undefined FUN_144c4f200(void)

longlong FUN_144c4f200(longlong param_1,longlong param_2)

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



// FUNCTION 144c4f5e0 FUN_144c4f5e0 body=743 status=ok
// SIG undefined FUN_144c4f5e0(void)

void FUN_144c4f5e0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar10 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x90);
  uVar4 = *(uint *)(param_1 + 1);
  puVar5 = (undefined8 *)*param_1;
  uVar15 = (ulonglong)uVar4;
  if (0 < (int)uVar4) {
    puVar12 = puVar5 + 10;
    uVar16 = (ulonglong)uVar4;
    puVar17 = (undefined4 *)(lVar10 + 0x4c);
    puVar13 = puVar5;
    do {
      if ((undefined8 *)(puVar17 + -0x13) != (undefined8 *)0x0) {
        uVar9 = puVar13[1];
        puVar1 = (undefined8 *)(puVar17 + -3);
        *(undefined8 *)(puVar17 + -0x13) = *puVar13;
        *(undefined8 *)(puVar17 + -0x11) = uVar9;
        puVar2 = puVar12 + -2;
        uVar9 = puVar12[-7];
        puVar11 = (undefined8 *)(puVar17 + 1);
        *(undefined8 *)(puVar17 + -0xf) = puVar12[-8];
        *(undefined8 *)(puVar17 + -0xd) = uVar9;
        uVar6 = *(undefined4 *)((longlong)puVar12 + -0x2c);
        uVar7 = *(undefined4 *)(puVar12 + -5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + -0x24);
        puVar17[-0xb] = *(undefined4 *)(puVar12 + -6);
        puVar17[-10] = uVar6;
        puVar17[-9] = uVar7;
        puVar17[-8] = uVar8;
        puVar17[-7] = *(undefined4 *)(puVar12 + -4);
        puVar17[-6] = *(undefined4 *)((longlong)puVar12 + -0x1c);
        puVar17[-5] = *(undefined4 *)(puVar12 + -3);
        puVar17[-4] = *(undefined4 *)((longlong)puVar12 + -0x14);
        *puVar1 = puVar11;
        puVar17[-1] = 0;
        *puVar17 = 0x80000004;
        if (puVar2 != puVar1) {
          *puVar17 = 0x80000000;
          *puVar1 = 0;
          puVar17[-1] = *(undefined4 *)(puVar12 + -1);
          *puVar17 = *(undefined4 *)((longlong)puVar12 + -4);
          if ((undefined8 *)*puVar2 == puVar12) {
            *puVar1 = puVar11;
            if (puVar11 != puVar12) {
              lVar18 = 4;
              lVar19 = (longlong)puVar12 - (longlong)puVar11;
              do {
                *(undefined4 *)puVar11 = *(undefined4 *)(lVar19 + (longlong)puVar11);
                puVar11 = (undefined8 *)((longlong)puVar11 + 4);
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
          }
          else {
            *puVar1 = (undefined8 *)*puVar2;
            *puVar2 = puVar12;
            *(undefined4 *)((longlong)puVar12 + -4) = 0x80000004;
          }
          *(undefined4 *)(puVar12 + -1) = 0;
        }
        puVar1 = (undefined8 *)(puVar17 + 5);
        puVar17[7] = 0;
        puVar2 = puVar12 + 2;
        puVar17[8] = 0x80000004;
        puVar11 = (undefined8 *)(puVar17 + 9);
        *puVar1 = puVar11;
        if (puVar2 != puVar1) {
          *puVar1 = 0;
          puVar3 = puVar12 + 4;
          puVar17[8] = 0x80000000;
          puVar17[7] = *(undefined4 *)(puVar12 + 3);
          puVar17[8] = *(undefined4 *)((longlong)puVar12 + 0x1c);
          if ((undefined8 *)*puVar2 == puVar3) {
            *puVar1 = puVar11;
            if (puVar11 != puVar3) {
              lVar19 = (longlong)puVar3 - (longlong)puVar11;
              lVar18 = 4;
              do {
                *(undefined4 *)puVar11 = *(undefined4 *)(lVar19 + (longlong)puVar11);
                puVar11 = (undefined8 *)((longlong)puVar11 + 4);
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
          }
          else {
            *puVar1 = (undefined8 *)*puVar2;
            *puVar2 = puVar3;
            *(undefined4 *)((longlong)puVar12 + 0x1c) = 0x80000004;
          }
          *(undefined4 *)(puVar12 + 3) = 0;
        }
        *(undefined2 *)(puVar17 + 0xd) = *(undefined2 *)(puVar12 + 6);
        *(undefined2 *)((longlong)puVar17 + 0x36) = *(undefined2 *)((longlong)puVar12 + 0x32);
        *(undefined1 *)(puVar17 + 0xe) = *(undefined1 *)((longlong)puVar12 + 0x34);
      }
      puVar17 = puVar17 + 0x24;
      puVar13 = puVar13 + 0x12;
      puVar12 = puVar12 + 0x12;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    puVar14 = (uint *)((longlong)puVar5 + 0x6c);
    do {
      puVar14[-1] = 0;
      if ((-1 < (int)*puVar14) && (*(longlong *)(puVar14 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar14 + -3),
                   (ulonglong)(*puVar14 & 0x7fffffff) << 2);
      }
      puVar14[-3] = 0;
      puVar14[-2] = 0;
      *puVar14 = 0x80000000;
      puVar14[-9] = 0;
      if ((-1 < (int)puVar14[-8]) && (*(longlong *)(puVar14 + -0xb) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar14 + -0xb),
                   (ulonglong)(puVar14[-8] & 0x7fffffff) << 2);
      }
      puVar14[-0xb] = 0;
      puVar14[-10] = 0;
      puVar14[-8] = 0x80000000;
      puVar14 = puVar14 + 0x24;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar10;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c4f8d0 FUN_144c4f8d0 body=373 status=ok
// SIG undefined FUN_144c4f8d0(void)

void FUN_144c4f8d0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x120);
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = *param_1;
  uVar6 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    uVar7 = (ulonglong)uVar1;
    lVar4 = lVar3;
    lVar8 = lVar2;
    do {
      if (lVar4 != 0) {
        FUN_144c4ebe0(lVar4,lVar8);
      }
      lVar4 = lVar4 + 0x120;
      lVar8 = lVar8 + 0x120;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar5 = (uint *)(lVar2 + 0xcc);
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -3),
                   (ulonglong)(*puVar5 & 0x7fffffff) << 2);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      *puVar5 = 0x80000000;
      puVar5[-9] = 0;
      if ((-1 < (int)puVar5[-8]) && (*(longlong *)(puVar5 + -0xb) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -0xb),
                   (ulonglong)(puVar5[-8] & 0x7fffffff) << 2);
      }
      puVar5[-0xb] = 0;
      puVar5[-10] = 0;
      puVar5[-8] = 0x80000000;
      puVar5 = puVar5 + 0x48;
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



// FUNCTION 144c4fa50 FUN_144c4fa50 body=192 status=ok
// SIG undefined FUN_144c4fa50(void)

void FUN_144c4fa50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_18;
  
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  iVar2 = *(int *)(param_1 + 0x218) + 1;
  if ((int)(*(uint *)(param_1 + 0x21c) & 0x7fffffff) < iVar2) {
    FUN_144c4fc30((longlong *)(param_1 + 0x210),&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x210) + (longlong)*(int *)(param_1 + 0x218) * 8);
  if (plVar1 == (longlong *)0x0) {
    *(int *)(param_1 + 0x218) = iVar2;
    if (param_2 != 0) {
      FUN_144b3f230(param_2);
    }
  }
  else {
    *plVar1 = param_2;
    *(int *)(param_1 + 0x218) = iVar2;
  }
  local_24 = 10;
  local_28 = 0x5000020;
  local_18 = param_2;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_28);
  FUN_144c2d170(param_1,&local_28);
  return;
}



// FUNCTION 144c4fb10 FUN_144c4fb10 body=281 status=ok
// SIG undefined FUN_144c4fb10(void)

void FUN_144c4fb10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_18;
  int local_10;
  
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x218)) {
    plVar4 = *(longlong **)(param_1 + 0x210);
    uVar7 = uVar5;
    do {
      iVar6 = (int)uVar7;
      if (*plVar4 == param_2) goto LAB_144c4fb6a;
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x218));
  }
  iVar6 = -1;
LAB_144c4fb6a:
  if (param_2 != 0) {
    FUN_144b3f230(param_2);
  }
  local_24 = 0xb;
  local_28 = 0x5000020;
  local_18 = param_2;
  local_10 = iVar6;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_28);
  FUN_144c2d170(param_1,&local_28);
  if (*(longlong *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x210)) != 0) {
    FUN_144b3f230();
  }
  iVar2 = *(int *)(param_1 + 0x218);
  iVar3 = iVar2 + -1;
  *(int *)(param_1 + 0x218) = iVar3;
  if (iVar3 != iVar6) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x210) + ((longlong)iVar2 + -1) * 8);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x210) + (longlong)iVar6 * 8);
    if (plVar1 != plVar4) {
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = *plVar4;
        *plVar4 = 0;
      }
      if (*plVar4 != 0) {
        FUN_144b3f230();
      }
    }
  }
  return;
}



// FUNCTION 144c4fc30 FUN_144c4fc30 body=310 status=ok
// SIG undefined FUN_144c4fc30(void)

void FUN_144c4fc30(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144c4fd70 FUN_144c4fd70 body=332 status=ok
// SIG undefined FUN_144c4fd70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c4fd70(undefined1 (*param_1) [16],float *param_2,float *param_3,
                  undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 unaff_XMM7 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  auVar14._0_4_ = *param_3 - *param_2;
  auVar14._4_4_ = param_3[1] - param_2[1];
  auVar14._8_4_ = param_3[2] - param_2[2];
  auVar14._12_4_ = param_3[3] - param_2[3];
  fVar18 = auVar14._0_4_ * _DAT_14c6dad90;
  fVar19 = auVar14._4_4_ * fRam000000014c6dad94;
  fVar20 = auVar14._8_4_ * fRam000000014c6dad98;
  fVar21 = auVar14._12_4_ * fRam000000014c6dad9c;
  fVar9 = auVar14._0_4_ * auVar14._0_4_;
  fVar10 = auVar14._4_4_ * auVar14._4_4_;
  fVar11 = auVar14._8_4_ * auVar14._8_4_;
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  auVar13._0_4_ = fVar10 + fVar9 + fVar11;
  auVar13._4_4_ = fVar10 + fVar9 + fVar11;
  auVar13._8_4_ = fVar10 + fVar9 + fVar11;
  auVar13._12_4_ = fVar10 + fVar9 + fVar11;
  if (auVar13._0_4_ == 0.0) {
    auVar13 = ZEXT816(0);
    fVar9 = 0.0;
  }
  else {
    auVar13 = sqrtps(auVar13,auVar13);
    fVar9 = auVar13._0_4_;
    auVar13 = divps(auVar14,auVar13);
  }
  auVar14 = *param_4;
  fVar10 = auVar14._0_4_ * auVar14._0_4_;
  fVar11 = auVar14._4_4_ * auVar14._4_4_;
  fVar12 = auVar14._8_4_ * auVar14._8_4_;
  auVar8._0_4_ = fVar11 + fVar10 + fVar12;
  auVar8._4_4_ = fVar11 + fVar10 + fVar12;
  auVar8._8_4_ = fVar11 + fVar10 + fVar12;
  auVar8._12_4_ = fVar11 + fVar10 + fVar12;
  if (auVar8._0_4_ == 0.0) {
    auVar14 = ZEXT816(0);
    uVar16 = 0;
  }
  else {
    auVar8 = sqrtps(unaff_XMM7,auVar8);
    uVar16 = auVar8._0_4_;
    auVar14 = divps(auVar14,auVar8);
  }
  fVar12 = auVar14._4_4_ * auVar13._0_4_ - auVar13._4_4_ * auVar14._0_4_;
  fVar10 = auVar14._8_4_ * auVar13._4_4_ - auVar13._8_4_ * auVar14._4_4_;
  fVar11 = auVar14._0_4_ * auVar13._8_4_ - auVar13._0_4_ * auVar14._8_4_;
  auVar15._12_4_ = auVar14._12_4_ * auVar13._12_4_ - auVar13._12_4_ * auVar14._12_4_;
  auVar15._4_4_ = fVar11;
  auVar15._0_4_ = fVar10;
  auVar15._8_4_ = fVar12;
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  fVar12 = fVar12 * fVar12;
  auVar7._4_4_ = fVar10;
  auVar7._0_4_ = fVar10;
  auVar7._8_4_ = fVar10;
  auVar7._12_4_ = fVar10;
  fVar17 = fVar11 + fVar10 + fVar12;
  if (fVar17 == 0.0) {
    auVar8 = ZEXT816(0);
  }
  else {
    auVar1._4_4_ = fVar11 + fVar10 + fVar12;
    auVar1._0_4_ = fVar17;
    auVar1._8_4_ = fVar11 + fVar10 + fVar12;
    auVar1._12_4_ = fVar11 + fVar10 + fVar12;
    auVar8 = sqrtps(auVar7,auVar1);
    auVar8 = divps(auVar15,auVar8);
  }
  *param_1 = auVar13;
  *(float *)param_1[3] = fVar18 + fVar2;
  *(float *)(param_1[3] + 4) = fVar19 + fVar3;
  *(float *)(param_1[3] + 8) = fVar20 + fVar4;
  *(float *)(param_1[3] + 0xc) = fVar21 + fVar5;
  param_1[1] = auVar14;
  param_1[2] = auVar8;
  uVar6 = _DAT_14c6daea0 & 0xffffffff;
  *(ulonglong *)param_1[4] = CONCAT44(uVar16,fVar9 * _DAT_14c6dad90);
  *(ulonglong *)(param_1[4] + 8) = uVar6;
  return;
}



// FUNCTION 144c4fec0 FUN_144c4fec0 body=613 status=ok
// SIG undefined FUN_144c4fec0(void)

void FUN_144c4fec0(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  float fVar8;
  float fVar9;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_a8 [9];
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
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  local_a8[0] = *(float *)(param_1 + 0x40);
  local_a8[1] = *(float *)(param_1 + 0x44);
  local_a8[2] = *(float *)(param_1 + 0x48);
  local_a8[3] = *(float *)(param_1 + 0x4c);
  fVar13 = ABS(local_a8[0]);
  fVar14 = ABS(local_a8[1]);
  fVar15 = ABS(local_a8[2]);
  auVar4._0_8_ = CONCAT44(local_a8[2],local_a8[2]) & 0x7fffffff7fffffff;
  auVar4._8_4_ = fVar15;
  auVar4._12_4_ = fVar15;
  auVar10._0_8_ = CONCAT44(local_a8[1],local_a8[1]) & 0x7fffffff7fffffff;
  auVar10._8_4_ = fVar14;
  auVar10._12_4_ = fVar14;
  auVar11._8_4_ = fVar13;
  auVar11._0_8_ = CONCAT44(local_a8[0],local_a8[0]) & 0x7fffffff7fffffff;
  auVar11._12_4_ = fVar13;
  auVar11 = maxps(auVar10,auVar11);
  auVar11 = maxps(auVar4,auVar11);
  local_a8[4] = 0.0;
  local_a8[5] = 0.0;
  local_a8[6] = 0.0;
  local_a8[7] = 0.0;
  auVar5._4_4_ = -(uint)(auVar11._4_4_ <= fVar14);
  auVar5._0_4_ = -(uint)(auVar11._0_4_ <= fVar13);
  auVar5._8_4_ = -(uint)(auVar11._8_4_ <= fVar15);
  auVar5._12_4_ = -(uint)(auVar11._12_4_ <= ABS(local_a8[3]));
  uVar2 = movmskps((int)&stack0x00000000,auVar5);
  lVar3 = (longlong)(char)(&DAT_14998f5c0)[uVar2 & 7];
  local_a8[lVar3] = 0.0;
  fVar15 = local_a8[2];
  fVar14 = local_a8[1];
  fVar13 = local_a8[0];
  fVar16 = ABS(local_a8[0]);
  fVar18 = ABS(local_a8[1]);
  fVar20 = ABS(local_a8[2]);
  fVar21 = ABS(local_a8[3]);
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  local_a8[3] = 0.0;
  auVar12._0_8_ = CONCAT44(fVar14,fVar14) & 0x7fffffff7fffffff;
  auVar12._8_4_ = fVar18;
  auVar12._12_4_ = fVar18;
  auVar1._8_4_ = fVar16;
  auVar1._0_8_ = CONCAT44(fVar13,fVar13) & 0x7fffffff7fffffff;
  auVar1._12_4_ = fVar16;
  auVar11 = maxps(auVar12,auVar1);
  auVar6._0_8_ = CONCAT44(fVar15,fVar15) & 0x7fffffff7fffffff;
  auVar6._8_4_ = fVar20;
  auVar6._12_4_ = fVar20;
  auVar11 = maxps(auVar6,auVar11);
  auVar7._4_4_ = -(uint)(auVar11._4_4_ <= fVar18);
  auVar7._0_4_ = -(uint)(auVar11._0_4_ <= fVar16);
  auVar7._8_4_ = -(uint)(auVar11._8_4_ <= fVar20);
  auVar7._12_4_ = -(uint)(auVar11._12_4_ <= fVar21);
  uVar2 = movmskps(uVar2 & 7,auVar7);
  fVar13 = *(float *)(param_1 + 0x40 + lVar3 * 4);
  local_a8[lVar3 + 4] = fVar13;
  local_a8[lVar3] = -fVar13;
  lVar3 = (longlong)(char)(&DAT_14998f5c0)[uVar2 & 7];
  FUN_144bfa5a0(&local_68,param_1,local_a8);
  FUN_144bfa5a0(&local_58,param_1,local_a8 + 4);
  fVar13 = *(float *)(param_1 + 0x40 + lVar3 * 4);
  local_a8[4] = 0.0;
  local_a8[5] = 0.0;
  local_a8[6] = 0.0;
  local_a8[7] = 0.0;
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  local_a8[3] = 0.0;
  local_a8[lVar3 + 4] = -fVar13;
  local_a8[lVar3] = fVar13;
  FUN_144bfa5a0(local_a8 + 8,param_1,local_a8 + 4);
  FUN_144bfa5a0(&local_78,param_1,local_a8);
  fVar13 = *param_2;
  fVar14 = param_2[1];
  fVar15 = param_2[2];
  fVar16 = fVar13 * (local_a8[8] - local_78);
  fVar20 = fVar14 * (fStack_84 - fStack_74);
  fVar8 = fVar15 * (fStack_80 - fStack_70);
  fVar18 = fVar13 * (local_68 - local_58);
  fVar21 = fVar14 * (fStack_64 - fStack_54);
  fVar9 = fVar15 * (fStack_60 - fStack_50);
  fVar17 = (local_a8[8] - local_78) - (fVar20 + fVar16 + fVar8) * fVar13;
  fVar19 = (fStack_84 - fStack_74) - (fVar20 + fVar16 + fVar8) * fVar14;
  fVar16 = (fStack_80 - fStack_70) - (fVar20 + fVar16 + fVar8) * fVar15;
  fVar13 = (local_68 - local_58) - (fVar21 + fVar18 + fVar9) * fVar13;
  fVar14 = (fStack_64 - fStack_54) - (fVar21 + fVar18 + fVar9) * fVar14;
  fVar15 = (fStack_60 - fStack_50) - (fVar21 + fVar18 + fVar9) * fVar15;
  if (fVar19 * fVar19 + fVar17 * fVar17 + fVar16 * fVar16 <=
      fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15) {
    *param_5 = local_68;
    param_5[1] = fStack_64;
    param_5[2] = fStack_60;
    param_5[3] = fStack_5c;
    *param_6 = local_58;
    param_6[1] = fStack_54;
    param_6[2] = fStack_50;
    param_6[3] = fStack_4c;
    *param_3 = local_a8[8];
    param_3[1] = fStack_84;
    param_3[2] = fStack_80;
    param_3[3] = fStack_7c;
    *param_4 = local_78;
    param_4[1] = fStack_74;
    param_4[2] = fStack_70;
    param_4[3] = fStack_6c;
  }
  else {
    *param_3 = local_68;
    param_3[1] = fStack_64;
    param_3[2] = fStack_60;
    param_3[3] = fStack_5c;
    *param_4 = local_58;
    param_4[1] = fStack_54;
    param_4[2] = fStack_50;
    param_4[3] = fStack_4c;
    *param_5 = local_a8[8];
    param_5[1] = fStack_84;
    param_5[2] = fStack_80;
    param_5[3] = fStack_7c;
    *param_6 = local_78;
    param_6[1] = fStack_74;
    param_6[2] = fStack_70;
    param_6[3] = fStack_6c;
  }
  return;
}



// FUNCTION 144c50130 FUN_144c50130 body=152 status=ok
// SIG undefined FUN_144c50130(void)

/* WARNING: Removing unreachable block (ram,0x000144c501a5) */

void FUN_144c50130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar7;
  
  FUN_144c4fd70(param_1,param_2,param_3,param_6);
  FUN_144c4fd70(param_1 + 0x50,param_4,param_5,param_6);
  auVar4 = *param_6;
  fVar2 = auVar4._0_4_ * auVar4._0_4_;
  fVar5 = auVar4._4_4_ * auVar4._4_4_;
  fVar6 = auVar4._8_4_ * auVar4._8_4_;
  auVar1._4_4_ = fVar2;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar2;
  auVar1._12_4_ = fVar2;
  fVar7 = fVar5 + fVar2 + fVar6;
  auVar3 = ZEXT816(0);
  if (fVar7 != 0.0) {
    auVar3._4_4_ = fVar5 + fVar2 + fVar6;
    auVar3._0_4_ = fVar7;
    auVar3._8_4_ = fVar5 + fVar2 + fVar6;
    auVar3._12_4_ = fVar5 + fVar2 + fVar6;
    auVar1 = sqrtps(auVar1,auVar3);
    auVar3 = divps(auVar4,auVar1);
  }
  auVar4._0_8_ = auVar3._0_8_ << 0x20;
  auVar4._8_8_ = auVar3._8_8_ << 0x20 | auVar3._0_8_ >> 0x20;
  *(undefined1 (*) [16])(param_1 + 0xf0) = auVar4 >> 0x20;
  *(undefined1 (*) [16])(param_1 + 0x100) = auVar4 >> 0x20;
  return;
}



// FUNCTION 144c501d0 FUN_144c501d0 body=89 status=ok
// SIG undefined FUN_144c501d0(void)

undefined8 * FUN_144c501d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = param_1 + 10;
  param_1[0xc] = param_1 + 0xe;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000004;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000004;
  *(undefined1 *)((longlong)param_1 + 0x84) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0xbf80bf80;
  return param_1;
}



// FUNCTION 144c50230 FUN_144c50230 body=144 status=ok
// SIG undefined FUN_144c50230(void)

void FUN_144c50230(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x6c)) && (*(longlong *)(param_1 + 0x60) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x60),
               (ulonglong)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x4c)) && (*(longlong *)(param_1 + 0x40) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x40),
               (ulonglong)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  return;
}



// FUNCTION 144c502c0 FUN_144c502c0 body=26 status=ok
// SIG undefined FUN_144c502c0(void)

void FUN_144c502c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_144c502e0(param_1,param_2,param_2,param_3,param_4);
  return;
}



// FUNCTION 144c502e0 FUN_144c502e0 body=3482 status=ok
// SIG undefined FUN_144c502e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144c502e0(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4,float param_5)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  bool bVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  float *pfVar27;
  undefined8 *puVar28;
  longlong lVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar34;
  longlong *plVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
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
  float fVar56;
  float fVar59;
  undefined1 in_XMM3 [16];
  float fVar57;
  float fVar58;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [12];
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  int local_3c8;
  longlong *local_3c0;
  longlong local_3b8;
  int local_3b0;
  uint local_3ac;
  longlong local_3a8;
  int local_3a0;
  uint local_39c;
  undefined1 local_398 [8];
  undefined8 uStack_390;
  undefined1 local_388 [8];
  undefined8 uStack_380;
  undefined1 *local_378;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348 [16];
  undefined8 local_338;
  undefined8 local_330;
  undefined1 *local_328;
  int local_320;
  uint local_31c;
  undefined1 local_318 [16];
  undefined1 *local_308;
  int local_300;
  uint local_2fc;
  undefined1 local_2f8 [16];
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined8 local_2d8;
  float fStack_2d0;
  float fStack_2cc;
  undefined **local_2c8;
  ulonglong uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  longlong local_288;
  longlong *plStack_280;
  undefined1 local_278 [16];
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined **local_238;
  ulonglong uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [16];
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
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
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float local_128 [8];
  float local_108 [50];
  ulonglong uVar33;
  
  uVar32 = *(uint *)(*(longlong *)(param_2 + 0x20) + 0x180);
  if ((uVar32 != *(uint *)(*(longlong *)(param_3 + 0x20) + 0x180)) ||
     ((*(uint *)((longlong)param_1 + 0x114) >> (uVar32 & 0x1f) & 1) == 0)) {
    return 5;
  }
  iVar26 = 0;
  fVar45 = *(float *)*(undefined1 (*) [16])(param_1 + 0x1e);
  fVar46 = *(float *)((longlong)param_1 + 0xf4);
  fVar48 = *(float *)(param_1 + 0x1f);
  fVar50 = *(float *)((longlong)param_1 + 0xfc);
  local_278 = *(undefined1 (*) [16])(param_1 + 0x1e);
  fVar69 = *(float *)(param_1 + 0x20);
  fVar70 = *(float *)((longlong)param_1 + 0x104);
  fVar71 = *(float *)(param_1 + 0x21);
  fVar84 = *(float *)((longlong)param_1 + 0x10c);
  local_3a8 = 0;
  local_3a0 = 0;
  local_39c = 0x80000000;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3ac = 0x80000000;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_268 = fVar69;
  fStack_264 = fVar70;
  fStack_260 = fVar71;
  fStack_25c = fVar84;
  do {
    puVar28 = param_1;
    pfVar27 = local_128;
    pfVar1 = (float *)local_1e8;
    if (iVar26 != 0) {
      puVar28 = param_1 + 10;
      pfVar27 = local_108;
      pfVar1 = &local_1c8;
    }
    local_2c8 = (undefined **)*puVar28;
    uStack_2c0 = puVar28[1];
    local_2b8 = puVar28[2];
    uStack_2b0 = puVar28[3];
    local_2a8 = puVar28[4];
    uStack_2a0 = puVar28[5];
    local_288 = puVar28[8];
    plStack_280 = (longlong *)puVar28[9];
    local_298 = puVar28[6];
    uStack_290 = puVar28[7];
    if (*(char *)((longlong)param_1 + 0x111) == '\x01') {
      lVar34 = param_3;
      if (iVar26 == 0) {
        lVar34 = param_2;
      }
      FUN_144f71ef0(&local_238,lVar34 + 0x60,&local_2c8);
      local_2b8 = CONCAT44(uStack_224,local_228);
      local_2c8 = local_238;
      uStack_2c0 = uStack_230;
      uStack_2b0 = uStack_220;
      local_298 = CONCAT44(fStack_204,local_208);
      uStack_290 = CONCAT44(fStack_1fc,fStack_200);
      local_2a8 = local_218;
      uStack_2a0 = uStack_210;
    }
    FUN_144c4fec0(&local_2c8,local_278 + (longlong)iVar26 * 0x10,pfVar27,pfVar27 + 4,pfVar1,
                  pfVar1 + 4);
    fVar44 = *pfVar1 - pfVar1[4];
    fVar44 = fVar44 * fVar44;
    fVar47 = (pfVar1[1] - pfVar1[5]) * (pfVar1[1] - pfVar1[5]);
    fVar49 = (pfVar1[2] - pfVar1[6]) * (pfVar1[2] - pfVar1[6]);
    auVar36._4_4_ = fVar49 + fVar47 + fVar44;
    auVar36._0_4_ = fVar49 + fVar47 + fVar44;
    auVar36._8_4_ = fVar49 + fVar47 + fVar44;
    auVar36._12_4_ = fVar49 + fVar47 + fVar44;
    in_XMM3 = sqrtps(in_XMM3,auVar36);
    if (in_XMM3._0_4_ < param_5) {
      uVar30 = 2;
      goto LAB_144c50f6a;
    }
    auVar74._4_4_ = fRam000000014c6daca4;
    auVar74._0_4_ = _DAT_14c6daca0;
    auVar74._8_4_ = fRam000000014c6daca8;
    auVar74._12_4_ = fRam000000014c6dacac;
    auVar36 = divps(auVar74,in_XMM3);
    pfVar27 = (float *)&local_258;
    if (iVar26 != 0) {
      pfVar27 = (float *)&local_248;
    }
    iVar26 = iVar26 + 1;
    *pfVar27 = auVar36._0_4_ * param_5;
    pfVar27[1] = auVar36._4_4_ * param_5;
    pfVar27[2] = auVar36._8_4_ * param_5;
    pfVar27[3] = auVar36._12_4_ * param_5;
  } while (iVar26 < 2);
  fVar44 = local_1b8;
  fVar47 = fStack_1b4;
  fVar49 = fStack_1b0;
  fVar85 = fStack_1ac;
  if (*(char *)((longlong)param_1 + 0x112) == '\0') {
    local_398._4_4_ = fStack_1c4;
    local_398._0_4_ = local_1c8;
    uStack_390._4_4_ = fStack_1bc;
    uStack_390._0_4_ = fStack_1c0;
    fVar45 = local_1d8;
    fVar46 = fStack_1d4;
    fVar48 = fStack_1d0;
    fVar50 = fStack_1cc;
    auVar36 = local_1e8;
  }
  else {
    _local_388 = auVar74;
    if (fVar71 * fVar48 + fVar70 * fVar46 + fVar69 * fVar45 < 0.0) {
      uStack_380 = uRam000000014c6dac88;
      local_388 = (undefined1  [8])_DAT_14c6dac80;
    }
    auVar42._0_4_ = fVar45 + (float)local_388._0_4_ * fVar69;
    auVar42._4_4_ = fVar46 + (float)local_388._4_4_ * fVar70;
    auVar42._8_4_ = fVar48 + (float)uStack_380 * fVar71;
    auVar42._12_4_ = fVar50 + uStack_380._4_4_ * fVar84;
    fVar45 = auVar42._0_4_ * auVar42._0_4_;
    fVar48 = auVar42._4_4_ * auVar42._4_4_;
    fVar50 = auVar42._8_4_ * auVar42._8_4_;
    auVar38._4_4_ = fVar45;
    auVar38._0_4_ = fVar45;
    auVar38._8_4_ = fVar45;
    auVar38._12_4_ = fVar45;
    fVar46 = fVar50 + fVar48 + fVar45;
    if (fVar46 == 0.0) {
      auVar68 = SUB1612(ZEXT816(0),0);
    }
    else {
      auVar55._4_4_ = fVar50 + fVar48 + fVar45;
      auVar55._0_4_ = fVar46;
      auVar55._8_4_ = fVar50 + fVar48 + fVar45;
      auVar55._12_4_ = fVar50 + fVar48 + fVar45;
      auVar36 = sqrtps(auVar38,auVar55);
      auVar36 = divps(auVar42,auVar36);
      auVar68 = auVar36._0_12_;
    }
    auVar64._4_4_ = fStack_1d4;
    auVar64._0_4_ = local_1d8;
    auVar64._8_4_ = fStack_1d0;
    auVar64._12_4_ = fStack_1cc;
    fVar50 = local_1e8._0_4_;
    fVar84 = local_1e8._4_4_;
    fVar86 = local_1e8._8_4_;
    local_398._4_4_ = fStack_1c4;
    local_398._0_4_ = local_1c8;
    uStack_390._0_4_ = fStack_1c0;
    uStack_390._4_4_ = fStack_1bc;
    fVar45 = ((local_1b8 - local_1c8) * _DAT_14c6dad90 + local_1c8) -
             ((local_1d8 - fVar50) * _DAT_14c6dad90 + fVar50);
    fVar46 = ((fStack_1b4 - fStack_1c4) * fRam000000014c6dad94 + fStack_1c4) -
             ((fStack_1d4 - fVar84) * fRam000000014c6dad94 + fVar84);
    fVar48 = ((fStack_1b0 - fStack_1c0) * fRam000000014c6dad98 + fStack_1c0) -
             ((fStack_1d0 - fVar86) * fRam000000014c6dad98 + fVar86);
    fVar69 = fVar46 * auVar68._0_4_ - fVar45 * auVar68._4_4_;
    fVar70 = fVar48 * auVar68._4_4_ - fVar46 * auVar68._8_4_;
    fVar71 = fVar45 * auVar68._8_4_ - fVar48 * auVar68._0_4_;
    if ((fStack_1d0 - fVar86) * fVar69 +
        (fStack_1d4 - fVar84) * fVar71 + (local_1d8 - fVar50) * fVar70 < 0.0) {
      local_1d8 = fVar50;
      fStack_1d4 = fVar84;
      fStack_1d0 = fVar86;
      fStack_1cc = local_1e8._12_4_;
      local_1e8 = auVar64;
    }
    fVar45 = local_1d8;
    fVar46 = fStack_1d4;
    fVar48 = fStack_1d0;
    fVar50 = fStack_1cc;
    auVar36 = local_1e8;
    if (0.0 < (fStack_1b0 - fStack_1c0) * fVar69 +
              (fStack_1b4 - fStack_1c4) * fVar71 + (local_1b8 - local_1c8) * fVar70) {
      local_398._4_4_ = fStack_1b4;
      local_398._0_4_ = local_1b8;
      uStack_390._0_4_ = fStack_1b0;
      uStack_390._4_4_ = fStack_1ac;
      fVar44 = local_1c8;
      fVar47 = fStack_1c4;
      fVar49 = fStack_1c0;
      fVar85 = fStack_1bc;
    }
  }
  auVar74 = _local_398;
  uVar24 = local_398._0_4_;
  uVar25 = local_398._4_4_;
  fVar69 = (float)uStack_390;
  fVar70 = uStack_390._4_4_;
  iVar26 = 0;
  lVar34 = 0;
  uStack_380._0_4_ = 0.05;
  local_388 = (undefined1  [8])0x3d4ccccd3d4ccccd;
  uStack_380._4_4_ = 0.05;
  do {
    lVar29 = param_3;
    if (iVar26 == 0) {
      lVar29 = param_2;
    }
    FUN_144fd5980(*(undefined8 *)(lVar29 + 0xf0),&local_3c0);
    fVar65 = auVar36._0_4_;
    fVar66 = auVar36._4_4_;
    fVar67 = auVar36._8_4_;
    fVar71 = (float)uVar24;
    fVar84 = (float)uVar25;
    fVar86 = fVar69;
    fVar77 = fVar70;
    fVar79 = fVar44;
    fVar80 = fVar47;
    fStack_2d0 = fVar49;
    fStack_2cc = fVar85;
    _local_398 = auVar74;
    if (lVar34 == 0) {
      fVar71 = fVar65;
      fVar84 = fVar66;
      fVar86 = fVar67;
      fVar77 = auVar36._12_4_;
      fVar79 = fVar45;
      fVar80 = fVar46;
      fStack_2d0 = fVar48;
      fStack_2cc = fVar50;
      _local_398 = auVar36;
    }
    fVar53 = *(float *)(lVar29 + 0x90);
    fVar58 = *(float *)(lVar29 + 0x94);
    fVar61 = *(float *)(lVar29 + 0x98);
    fVar83 = *(float *)(lVar29 + 0x9c);
    fVar11 = *(float *)(lVar29 + 0x60);
    fVar12 = *(float *)(lVar29 + 100);
    fVar13 = *(float *)(lVar29 + 0x68);
    fVar14 = *(float *)(lVar29 + 0x70);
    fVar15 = *(float *)(lVar29 + 0x74);
    fVar16 = *(float *)(lVar29 + 0x78);
    fVar71 = fVar71 - fVar53;
    fVar84 = fVar84 - fVar58;
    fVar86 = fVar86 - fVar61;
    fVar17 = *(float *)(lVar29 + 0x80);
    fVar18 = *(float *)(lVar29 + 0x84);
    fVar19 = *(float *)(lVar29 + 0x88);
    fVar87 = *(float *)(lVar29 + 0x8c);
    local_2d8 = CONCAT44(fVar80,fVar79);
    fVar51 = fVar79 - fVar53;
    fVar56 = fVar80 - fVar58;
    fVar59 = fStack_2d0 - fVar61;
    pfVar27 = local_128;
    plStack_280 = &local_3a8;
    if (iVar26 != 0) {
      pfVar27 = local_108;
      plStack_280 = &local_3b8;
    }
    fVar62 = (fStack_2cc - fVar83) * fVar87;
    fVar52 = pfVar27[4] - fVar53;
    fVar57 = pfVar27[5] - fVar58;
    fVar60 = pfVar27[6] - fVar61;
    fVar76 = fVar59 * fVar13 + fVar56 * fVar12 + fVar51 * fVar11;
    fVar78 = fVar59 * fVar16 + fVar56 * fVar15 + fVar51 * fVar14;
    fVar59 = fVar59 * fVar19 + fVar56 * fVar18 + fVar51 * fVar17;
    fVar62 = fVar62 + fVar62 + fVar56 * fVar18;
    fVar51 = (pfVar27[7] - fVar83) * fVar87;
    fVar53 = *pfVar27 - fVar53;
    fVar58 = pfVar27[1] - fVar58;
    fVar61 = pfVar27[2] - fVar61;
    auVar72._0_4_ = fVar60 * fVar13 + fVar57 * fVar12 + fVar52 * fVar11;
    auVar72._4_4_ = fVar60 * fVar16 + fVar57 * fVar15 + fVar52 * fVar14;
    auVar72._8_4_ = fVar60 * fVar19 + fVar57 * fVar18 + fVar52 * fVar17;
    auVar72._12_4_ = fVar51 + fVar51 + fVar57 * fVar18;
    fVar51 = (pfVar27[3] - fVar83) * fVar87;
    auVar63._0_8_ =
         CONCAT44(fVar16 * fVar61 + fVar15 * fVar58 + fVar14 * fVar53,
                  fVar13 * fVar61 + fVar12 * fVar58 + fVar11 * fVar53);
    auVar63._8_4_ = fVar61 * fVar19 + fVar58 * fVar18 + fVar53 * fVar17;
    auVar63._12_4_ = fVar51 + fVar51 + fVar58 * fVar18;
    fVar87 = (fVar77 - fVar83) * fVar87;
    auVar41._8_4_ = auVar63._8_4_;
    auVar41._0_8_ = auVar63._0_8_;
    auVar41._12_4_ = auVar63._12_4_;
    uStack_220 = 0;
    auVar42 = maxps(auVar41,auVar72);
    local_218 = 0;
    uStack_210 = 0;
    uStack_2c0 = uStack_2c0 & 0xffffffffffffff00;
    local_228 = 0xffffffff;
    auVar54._0_8_ =
         CONCAT44(fVar86 * fVar16 + fVar84 * fVar15 + fVar71 * fVar14,
                  fVar86 * fVar13 + fVar84 * fVar12 + fVar71 * fVar11);
    auVar54._8_4_ = fVar86 * fVar19 + fVar84 * fVar18 + fVar71 * fVar17;
    auVar54._12_4_ = fVar87 + fVar87 + fVar84 * fVar18;
    local_238 = &PTR_LAB_14aba2e30;
    auVar64 = minps(auVar63,auVar72);
    local_2c8 = CreateUserEdgePairsCollector::vftable;
    auVar37._8_4_ = auVar54._8_4_;
    auVar37._0_8_ = auVar54._0_8_;
    auVar37._12_4_ = auVar54._12_4_;
    local_298 = CONCAT44(fVar80,fVar79);
    uStack_290 = CONCAT44(fStack_2cc,fStack_2d0);
    auVar4._4_4_ = fVar78;
    auVar4._0_4_ = fVar76;
    auVar4._8_4_ = fVar59;
    auVar4._12_4_ = fVar62;
    auVar38 = maxps(auVar37,auVar4);
    auVar5._4_4_ = fVar78;
    auVar5._0_4_ = fVar76;
    auVar5._8_4_ = fVar59;
    auVar5._12_4_ = fVar62;
    auVar55 = minps(auVar54,auVar5);
    auVar38 = maxps(auVar42,auVar38);
    local_2b8 = *(undefined8 *)(local_278 + lVar34 * 0x10);
    uStack_2b0 = *(undefined8 *)(local_278 + lVar34 * 0x10 + 8);
    local_1f8 = auVar38._0_4_ + (float)local_388._0_4_;
    fStack_1f4 = auVar38._4_4_ + (float)local_388._4_4_;
    fStack_1f0 = auVar38._8_4_ + (float)uStack_380;
    fStack_1ec = auVar38._12_4_ + uStack_380._4_4_;
    auVar38 = minps(auVar64,auVar55);
    local_208 = auVar38._0_4_ - (float)local_388._0_4_;
    fStack_204 = auVar38._4_4_ - (float)local_388._4_4_;
    fStack_200 = auVar38._8_4_ - (float)uStack_380;
    fStack_1fc = auVar38._12_4_ - uStack_380._4_4_;
    local_2a8 = local_398;
    uStack_2a0 = uStack_390;
    local_288 = lVar29;
    (**(code **)(*local_3c0 + 0x40))(local_3c0,&local_238,&local_2c8);
    if (local_3c0 != (longlong *)0x0) {
      FUN_144b3f230();
    }
    iVar26 = iVar26 + 1;
    lVar34 = lVar34 + 1;
  } while (lVar34 < 2);
  fVar45 = ((fVar45 - fVar65) * _DAT_14c6dad90 + fVar65) -
           ((fVar44 - (float)uVar24) * _DAT_14c6dad90 + (float)uVar24);
  fVar46 = ((fVar46 - fVar66) * fRam000000014c6dad94 + fVar66) -
           ((fVar47 - (float)uVar25) * fRam000000014c6dad94 + (float)uVar25);
  fVar48 = ((fVar48 - fVar67) * fRam000000014c6dad98 + fVar67) -
           ((fVar49 - fVar69) * fRam000000014c6dad98 + fVar69);
  fVar45 = fVar45 * fVar45;
  fVar46 = fVar46 * fVar46;
  fVar48 = fVar48 * fVar48;
  auVar39._4_4_ = fVar45;
  auVar39._0_4_ = fVar45;
  auVar39._8_4_ = fVar45;
  auVar39._12_4_ = fVar45;
  auVar6._4_4_ = fVar48 + fVar46 + fVar45;
  auVar6._0_4_ = fVar48 + fVar46 + fVar45;
  auVar6._8_4_ = fVar48 + fVar46 + fVar45;
  auVar6._12_4_ = fVar48 + fVar46 + fVar45;
  local_278 = sqrtps(auVar39,auVar6);
  FUN_144f71e80(&local_1a8,param_2 + 0x60);
  FUN_144f71e80(&local_168,param_3 + 0x60);
  if ((local_3a0 == 0) || (local_3b0 == 0)) {
    uVar30 = 1;
    goto LAB_144c50f6a;
  }
  bVar22 = false;
  bVar23 = false;
  local_3c8 = 0;
  if (0 < local_3a0) {
    local_3c0 = (longlong *)0x0;
    fVar45 = _DAT_14c6daca0;
    fVar46 = fRam000000014c6daca4;
    fVar48 = fRam000000014c6daca8;
    fVar50 = fRam000000014c6dacac;
    iVar26 = local_3a0;
    do {
      uVar31 = 0;
      plVar35 = local_3c0;
      if (0 < local_3b0) {
        auVar20._8_8_ = uStack_250;
        auVar20._0_8_ = local_258;
        auVar21._8_8_ = uStack_240;
        auVar21._0_8_ = local_248;
        auVar36 = maxps(auVar20,auVar21);
        uVar33 = uVar31;
        _local_388 = auVar36;
        do {
          local_2d8 = local_3a8;
          local_398 = (undefined1  [8])local_3b8;
          fVar69 = *(float *)(local_3b8 + uVar31);
          fVar70 = *(float *)(local_3b8 + 4 + uVar31);
          fVar71 = *(float *)(local_3a8 + 4 + (longlong)plVar35);
          fVar84 = *(float *)(local_3a8 + (longlong)plVar35);
          fVar49 = fVar45 - fVar70;
          fVar85 = fVar46 - fVar70;
          fVar86 = fVar48 - fVar70;
          fVar70 = fVar50 - fVar70;
          auVar81._4_4_ = fVar71;
          auVar81._0_4_ = fVar71;
          auVar81._8_4_ = fVar71;
          auVar81._12_4_ = fVar71;
          auVar73._4_4_ = fVar84;
          auVar73._0_4_ = fVar84;
          auVar73._8_4_ = fVar84;
          auVar73._12_4_ = fVar84;
          auVar7._4_4_ = fVar46 - fVar69;
          auVar7._0_4_ = fVar45 - fVar69;
          auVar7._8_4_ = fVar48 - fVar69;
          auVar7._12_4_ = fVar50 - fVar69;
          auVar38 = minps(auVar81,auVar7);
          auVar10._4_4_ = fVar85;
          auVar10._0_4_ = fVar49;
          auVar10._8_4_ = fVar86;
          auVar10._12_4_ = fVar70;
          auVar74 = maxps(auVar73,auVar10);
          fVar47 = auVar38._0_4_;
          fVar44 = auVar74._0_4_;
          if (fVar47 - fVar44 <= auVar36._0_4_) {
            if (0.0 < fVar47 - fVar44) {
              bVar23 = true;
            }
          }
          else {
            local_328 = local_318;
            local_368 = 0;
            uStack_360 = 0;
            local_358 = 0;
            uStack_350 = 0;
            local_2e4 = *(undefined1 *)(param_1 + 0x22);
            local_348 = ZEXT816(0);
            local_338 = 0xffffffffffffffff;
            local_330 = 0xffffffffffffffff;
            local_320 = 0;
            local_31c = 0x80000004;
            local_300 = 0;
            local_2fc = 0x80000004;
            local_2e8 = 0xbf80bf80;
            fVar77 = fVar45;
            fVar79 = fVar46;
            fVar80 = fVar48;
            local_308 = local_2f8;
            if ((undefined1 **)(param_1 + 0x14) != &local_328) {
              iVar26 = *(int *)(param_1 + 0x15);
              local_378 = (undefined1 *)param_1[0x14];
              if (4 < iVar26) {
                FUN_141807e20(&local_328,&PTR_vftable_14c6e47a0,(longlong)iVar26);
              }
              FUN_144b3d470(local_328,local_378,(longlong)iVar26 * 4);
              plVar35 = local_3c0;
              fVar77 = _DAT_14c6daca0;
              fVar79 = fRam000000014c6daca4;
              fVar80 = fRam000000014c6daca8;
              local_320 = iVar26;
            }
            if ((undefined1 **)(param_1 + 0x18) != &local_308) {
              iVar26 = *(int *)(param_1 + 0x19);
              local_378 = (undefined1 *)param_1[0x18];
              if ((int)(local_2fc & 0x7fffffff) < iVar26) {
                FUN_141807e20(&local_308,&PTR_vftable_14c6e47a0,(longlong)iVar26);
              }
              FUN_144b3d470(local_308,local_378,(longlong)iVar26 * 4);
              plVar35 = local_3c0;
              fVar77 = _DAT_14c6daca0;
              fVar79 = fRam000000014c6daca4;
              fVar80 = fRam000000014c6daca8;
              local_300 = iVar26;
            }
            fVar53 = (fVar45 - fVar69) - fVar49;
            fVar58 = (fVar46 - fVar69) - fVar85;
            fVar61 = (fVar48 - fVar69) - fVar86;
            fVar83 = (fVar50 - fVar69) - fVar70;
            auVar43._0_4_ = fVar44 - fVar84;
            auVar43._4_4_ = auVar74._4_4_ - fVar84;
            auVar43._8_4_ = auVar74._8_4_ - fVar84;
            auVar43._12_4_ = auVar74._12_4_ - fVar84;
            pfVar27 = (float *)(local_2d8 + 0x10 + (longlong)plVar35);
            fVar45 = *pfVar27;
            fVar46 = pfVar27[1];
            fVar48 = pfVar27[2];
            auVar75._0_4_ = fVar44 - fVar49;
            auVar75._4_4_ = auVar74._4_4_ - fVar85;
            auVar75._8_4_ = auVar74._8_4_ - fVar86;
            auVar75._12_4_ = auVar74._12_4_ - fVar70;
            pfVar27 = (float *)(local_2d8 + 0x20 + (longlong)plVar35);
            auVar2._4_4_ = fVar71 - fVar84;
            auVar2._0_4_ = fVar71 - fVar84;
            auVar2._8_4_ = fVar71 - fVar84;
            auVar2._12_4_ = fVar71 - fVar84;
            auVar36 = divps(auVar43,auVar2);
            auVar8._4_4_ = fVar58;
            auVar8._0_4_ = fVar53;
            auVar8._8_4_ = fVar61;
            auVar8._12_4_ = fVar83;
            auVar74 = divps(auVar75,auVar8);
            pfVar1 = (float *)((longlong)local_398 + 0x10 + uVar31);
            fVar50 = *pfVar1;
            fVar69 = pfVar1[1];
            fVar44 = pfVar1[2];
            fVar65 = fVar45 + (*pfVar27 - fVar45) * auVar36._0_4_;
            fVar66 = fVar46 + (pfVar27[1] - fVar46) * auVar36._4_4_;
            fVar67 = fVar48 + (pfVar27[2] - fVar48) * auVar36._8_4_;
            auVar40._0_4_ = fVar47 - fVar84;
            auVar40._4_4_ = auVar38._4_4_ - fVar84;
            auVar40._8_4_ = auVar38._8_4_ - fVar84;
            auVar40._12_4_ = auVar38._12_4_ - fVar84;
            auVar82._0_4_ = fVar47 - fVar49;
            auVar82._4_4_ = auVar38._4_4_ - fVar85;
            auVar82._8_4_ = auVar38._8_4_ - fVar86;
            auVar82._12_4_ = auVar38._12_4_ - fVar70;
            auVar3._4_4_ = fVar71 - fVar84;
            auVar3._0_4_ = fVar71 - fVar84;
            auVar3._8_4_ = fVar71 - fVar84;
            auVar3._12_4_ = fVar71 - fVar84;
            auVar36 = divps(auVar40,auVar3);
            pfVar1 = (float *)((longlong)local_398 + 0x20 + uVar31);
            fVar45 = fVar45 + (*pfVar27 - fVar45) * auVar36._0_4_;
            fVar46 = fVar46 + (pfVar27[1] - fVar46) * auVar36._4_4_;
            fVar48 = fVar48 + (pfVar27[2] - fVar48) * auVar36._8_4_;
            auVar9._4_4_ = fVar58;
            auVar9._0_4_ = fVar53;
            auVar9._8_4_ = fVar61;
            auVar9._12_4_ = fVar83;
            auVar36 = divps(auVar82,auVar9);
            fVar70 = (fVar77 - auVar74._0_4_) * (*pfVar1 - fVar50) + fVar50;
            fVar71 = (fVar79 - auVar74._4_4_) * (pfVar1[1] - fVar69) + fVar69;
            fVar84 = (fVar80 - auVar74._8_4_) * (pfVar1[2] - fVar44) + fVar44;
            fVar50 = (fVar77 - auVar36._0_4_) * (*pfVar1 - fVar50) + fVar50;
            fVar69 = (fVar79 - auVar36._4_4_) * (pfVar1[1] - fVar69) + fVar69;
            fVar44 = (fVar80 - auVar36._8_4_) * (pfVar1[2] - fVar44) + fVar44;
            local_368 = CONCAT44(local_198 * fVar46 + local_1a8 * fVar45 + local_188 * fVar48 +
                                 local_178,
                                 fVar66 * local_198 + fVar65 * local_1a8 + fVar67 * local_188 +
                                 local_178);
            uStack_360 = CONCAT44(fVar84 * local_148 + fVar71 * local_158 + fVar70 * local_168 +
                                  local_138,
                                  local_158 * fVar69 + local_168 * fVar50 + local_148 * fVar44 +
                                  local_138);
            local_358 = CONCAT44(fStack_194 * fVar46 + fStack_1a4 * fVar45 + fStack_184 * fVar48 +
                                 fStack_174,
                                 fVar66 * fStack_194 + fVar65 * fStack_1a4 + fVar67 * fStack_184 +
                                 fStack_174);
            uStack_350 = CONCAT44(fVar84 * fStack_144 + fVar71 * fStack_154 + fVar70 * fStack_164 +
                                  fStack_134,
                                  fStack_154 * fVar69 + fStack_164 * fVar50 + fStack_144 * fVar44 +
                                  fStack_134);
            local_348._4_4_ =
                 fStack_190 * fVar46 + fStack_1a0 * fVar45 + fStack_180 * fVar48 + fStack_170;
            local_348._0_4_ =
                 fVar66 * fStack_190 + fVar65 * fStack_1a0 + fVar67 * fStack_180 + fStack_170;
            local_348._8_4_ =
                 fStack_150 * fVar69 + fStack_160 * fVar50 + fStack_140 * fVar44 + fStack_130;
            local_348._12_4_ =
                 fVar84 * fStack_140 + fVar71 * fStack_150 + fVar70 * fStack_160 + fStack_130;
            local_330 = CONCAT44(*(undefined4 *)(local_3b8 + 0x30 + uVar31),
                                 *(undefined4 *)(local_3a8 + 0x30 + (longlong)plVar35));
            fVar45 = *(float *)(param_1 + 0x1c);
            if (*(float *)(param_1 + 0x1c) < 0.0) {
              fVar45 = (float)local_278._0_4_;
            }
            fVar46 = *(float *)((longlong)param_1 + 0xe4);
            if (*(float *)((longlong)param_1 + 0xe4) < 0.0) {
              fVar46 = (float)local_278._0_4_;
            }
            iVar26 = (int)param_4[1] + 1;
            local_2e8 = CONCAT22((short)((uint)(fVar46 * 1.0039062) >> 0x10),
                                 (short)((uint)(fVar45 * 1.0039062) >> 0x10));
            local_2e4 = *(undefined1 *)(param_1 + 0x22);
            local_338 = CONCAT44(*(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x178),
                                 *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x178));
            if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar26) {
              FUN_144c523d0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar26);
            }
            lVar34 = (longlong)(int)param_4[1] * 0x90 + *param_4;
            if (lVar34 != 0) {
              FUN_141806ca0(lVar34,&local_368);
            }
            *(int *)(param_4 + 1) = iVar26;
            bVar22 = true;
            local_300 = 0;
            if ((-1 < (int)local_2fc) && (local_308 != (undefined1 *)0x0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_308,(ulonglong)(local_2fc & 0x7fffffff) << 2);
            }
            local_308 = (undefined1 *)0x0;
            local_2fc = 0x80000000;
            local_320 = 0;
            auVar36 = _local_388;
            fVar45 = _DAT_14c6daca0;
            fVar46 = fRam000000014c6daca4;
            fVar48 = fRam000000014c6daca8;
            fVar50 = fRam000000014c6dacac;
            if ((-1 < (int)local_31c) && (local_328 != (undefined1 *)0x0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_328,(ulonglong)(local_31c & 0x7fffffff) << 2);
              auVar36 = _local_388;
              fVar45 = _DAT_14c6daca0;
              fVar46 = fRam000000014c6daca4;
              fVar48 = fRam000000014c6daca8;
              fVar50 = fRam000000014c6dacac;
            }
          }
          uVar32 = (int)uVar33 + 1;
          uVar33 = (ulonglong)uVar32;
          uVar31 = uVar31 + 0x40;
          iVar26 = local_3a0;
        } while ((int)uVar32 < local_3b0);
      }
      uVar30 = 0;
      local_3c8 = local_3c8 + 1;
      local_3c0 = plVar35 + 8;
    } while (local_3c8 < iVar26);
    if (bVar22) goto LAB_144c50f6a;
    if (bVar23) {
      uVar30 = 3;
      goto LAB_144c50f6a;
    }
  }
  uVar30 = 4;
LAB_144c50f6a:
  local_3b0 = 0;
  if ((-1 < (int)local_3ac) && (local_3b8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_3b8,(ulonglong)(local_3ac & 0x7fffffff) << 6);
  }
  local_3b8 = 0;
  local_3ac = 0x80000000;
  local_3a0 = 0;
  if ((-1 < (int)local_39c) && (local_3a8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_3a8,(ulonglong)(local_39c & 0x7fffffff) << 6);
  }
  return uVar30;
}



// FUNCTION 144c51080 FUN_144c51080 body=711 status=ok
// SIG undefined FUN_144c51080(void)

void FUN_144c51080(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_res8;
  longlong local_c8;
  int local_c0;
  uint local_bc;
  longlong local_b8;
  int local_b0;
  uint local_ac;
  float *local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  float *local_98;
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
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  pfVar9 = (float *)param_1[1];
  pfVar14 = (float *)*param_1;
  if (pfVar14 != pfVar9) {
    pfVar6 = pfVar14 + 0x24;
    local_98 = pfVar9;
    do {
      uVar7 = 0;
      fVar20 = pfVar6[-0x14];
      fVar17 = pfVar6[-0x13];
      fVar19 = pfVar6[-0x12];
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 0x80000000;
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 0x80000000;
      fVar21 = *pfVar6;
      fVar3 = pfVar6[1];
      fVar4 = pfVar6[2];
      fVar15 = ABS(fVar17 * pfVar6[-0x20]) + ABS(fVar20 * *pfVar14) + ABS(fVar19 * pfVar6[-0x1c]);
      fVar16 = ABS(fVar17 * pfVar6[-0x1f]) + ABS(fVar20 * pfVar14[1]) + ABS(fVar19 * pfVar6[-0x1b]);
      fVar18 = ABS(fVar17 * pfVar6[-0x1e]) + ABS(fVar20 * pfVar14[2]) + ABS(fVar19 * pfVar6[-0x1a]);
      fVar20 = ABS(fVar17 * pfVar6[-0x1d]) + ABS(fVar20 * pfVar14[3]) + ABS(fVar19 * pfVar6[-0x19]);
      local_78 = fVar15 + pfVar6[-0x18];
      fStack_74 = fVar16 + pfVar6[-0x17];
      fStack_70 = fVar18 + pfVar6[-0x16];
      fStack_6c = fVar20 + pfVar6[-0x15];
      local_88 = -fVar15 + pfVar6[-0x18];
      fStack_84 = -fVar16 + pfVar6[-0x17];
      fStack_80 = -fVar18 + pfVar6[-0x16];
      fStack_7c = -fVar20 + pfVar6[-0x15];
      fVar20 = ABS(fVar21 * pfVar6[-0x10]) + ABS(fVar3 * pfVar6[-0xc]) + ABS(fVar4 * pfVar6[-8]);
      fVar17 = ABS(fVar21 * pfVar6[-0xf]) + ABS(fVar3 * pfVar6[-0xb]) + ABS(fVar4 * pfVar6[-7]);
      fVar19 = ABS(fVar21 * pfVar6[-0xe]) + ABS(fVar3 * pfVar6[-10]) + ABS(fVar4 * pfVar6[-6]);
      fVar21 = ABS(fVar21 * pfVar6[-0xd]) + ABS(fVar3 * pfVar6[-9]) + ABS(fVar4 * pfVar6[-5]);
      local_58 = fVar20 + pfVar6[-4];
      fStack_54 = fVar17 + pfVar6[-3];
      fStack_50 = fVar19 + pfVar6[-2];
      fStack_4c = fVar21 + pfVar6[-1];
      local_68 = -fVar20 + pfVar6[-4];
      fStack_64 = -fVar17 + pfVar6[-3];
      fStack_60 = -fVar19 + pfVar6[-2];
      fStack_5c = -fVar21 + pfVar6[-1];
      local_a8 = pfVar6;
      FUN_144fce550(*(undefined8 *)(param_2 + 0x20),local_a0,&local_88,&local_b8);
      FUN_144fce550(*(undefined8 *)(param_2 + 0x20),local_9c,&local_68,&local_c8);
      local_res8 = 0;
      uVar13 = uVar7;
      iVar12 = local_b0;
      iVar11 = local_c0;
      if (0 < local_b0) {
        do {
          lVar1 = *(longlong *)
                   ((longlong)*(int *)(local_b8 + uVar13) * 0x120 + *(longlong *)(param_2 + 0x38));
          uVar10 = (uint)uVar7;
          if ((lVar1 != 0) && (iVar5 = 0, 0 < iVar11)) {
            lVar8 = 0;
            do {
              lVar2 = *(longlong *)
                       ((longlong)*(int *)(local_c8 + lVar8) * 0x120 + *(longlong *)(param_2 + 0x38)
                       );
              if (lVar2 != 0) {
                FUN_144c502e0(pfVar14,lVar1,lVar2,param_3,param_4);
                iVar11 = local_c0;
              }
              iVar5 = iVar5 + 1;
              lVar8 = lVar8 + 4;
              iVar12 = local_b0;
              uVar10 = local_res8;
            } while (iVar5 < iVar11);
          }
          local_res8 = uVar10 + 1;
          uVar7 = (ulonglong)local_res8;
          pfVar6 = local_a8;
          pfVar9 = local_98;
          uVar13 = uVar13 + 4;
        } while ((int)local_res8 < iVar12);
      }
      FUN_144be90e0(0xca5b3771);
      local_c0 = 0;
      if ((-1 < (int)local_bc) && (local_c8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_c8,(ulonglong)(local_bc & 0x7fffffff) << 2);
      }
      local_c8 = 0;
      local_bc = 0x80000000;
      local_b0 = 0;
      if ((-1 < (int)local_ac) && (local_b8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_b8,(ulonglong)(local_ac & 0x7fffffff) << 2);
      }
      pfVar6 = pfVar6 + 0x48;
      pfVar14 = pfVar14 + 0x48;
    } while (pfVar14 != pfVar9);
  }
  return;
}



// FUNCTION 144c51350 FUN_144c51350 body=615 status=ok
// SIG undefined FUN_144c51350(void)

void FUN_144c51350(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int local_res8 [2];
  int local_res10;
  undefined1 local_res18 [8];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  iVar3 = *(int *)(param_1 + 0x40);
  local_88._4_4_ = param_2[4];
  local_88._0_4_ = *param_2;
  local_88._8_4_ = param_2[8];
  local_88._12_4_ = 0;
  local_68._4_4_ = param_2[6];
  local_68._0_4_ = param_2[2];
  local_68._8_4_ = param_2[10];
  local_68._12_4_ = 0;
  local_78._4_4_ = param_2[5];
  local_78._0_4_ = param_2[1];
  local_78._8_4_ = param_2[9];
  local_78._12_4_ = 0;
  local_58._4_4_ = param_2[7];
  local_58._0_4_ = param_2[3];
  local_58._8_4_ = param_2[0xb];
  local_58._12_4_ = 0;
  local_res10 = iVar3;
  FUN_144c3b0a0(param_1,local_res8,local_88,4);
  local_res8[0] = param_2[0xe];
  if (local_res8[0] == param_2[0xf]) {
    piVar6 = (int *)FUN_144c52060(local_res18,param_1,local_res8,2);
    iVar11 = *piVar6;
    iVar12 = iVar11 + 1;
  }
  else {
    piVar6 = (int *)FUN_144c52060(local_res18,param_1,local_res8,1);
    iVar11 = *piVar6;
    local_res8[0] = param_2[0xf];
    piVar6 = (int *)FUN_144c52060(local_res18,param_1,local_res8,1);
    iVar12 = *piVar6;
  }
  uVar4 = param_2[0xf];
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar7 = (longlong)iVar11;
  *(int *)(lVar5 + lVar7 * 0x14) = iVar3;
  *(int *)(lVar5 + 4 + lVar7 * 0x14) = iVar3 + 1;
  *(undefined4 *)(lVar5 + 0xc + lVar7 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 0x10 + lVar7 * 0x14) = 0x14;
  *(int *)(lVar5 + 8 + lVar7 * 0x14) = iVar12;
  *(short *)(lVar5 + 0x12 + lVar7 * 0x14) =
       (short)((uint)((float)((int)*(short *)(param_2 + 0x20) << 0x10) * 1.0039062) >> 0x10);
  lVar9 = (longlong)(*(int *)(param_1 + 0x7c) * iVar11);
  lVar1 = *(longlong *)(param_1 + 0x68) + lVar9 * 4;
  FUN_144b3d470(lVar1,*(undefined8 *)(param_2 + 0x10),
                (longlong)
                (int)(((lVar9 + *(int *)(param_1 + 0x7c)) * 4 - lVar1) +
                      *(longlong *)(param_1 + 0x68) >> 2) << 2);
  lVar9 = *(longlong *)(param_1 + 0x28);
  lVar8 = (longlong)iVar12;
  *(undefined4 *)(lVar9 + 0xc + lVar8 * 0x14) = param_2[0xe];
  *(int *)(lVar9 + lVar8 * 0x14) = local_res10 + 2;
  *(int *)(lVar9 + 4 + lVar8 * 0x14) = local_res10 + 3;
  *(undefined4 *)(lVar9 + 0x10 + lVar8 * 0x14) = 0x14;
  *(int *)(lVar9 + 8 + lVar8 * 0x14) = iVar11;
  *(short *)(lVar9 + 0x12 + lVar8 * 0x14) =
       (short)((uint)((float)((int)*(short *)((longlong)param_2 + 0x82) << 0x10) * 1.0039062) >>
              0x10);
  lVar10 = (longlong)(*(int *)(param_1 + 0x7c) * iVar12);
  lVar1 = *(longlong *)(param_1 + 0x68) + lVar10 * 4;
  FUN_144b3d470(lVar1,*(undefined8 *)(param_2 + 0x18),
                (longlong)
                (int)(((lVar10 + *(int *)(param_1 + 0x7c)) * 4 - lVar1) +
                      *(longlong *)(param_1 + 0x68) >> 2) << 2);
  if ((*(byte *)(param_2 + 0x21) & 1) == 0) {
    pbVar2 = (byte *)(lVar5 + 0x10 + lVar7 * 0x14);
    *pbVar2 = *pbVar2 | 0x20;
  }
  if ((*(byte *)(param_2 + 0x21) & 2) == 0) {
    pbVar2 = (byte *)(lVar9 + 0x10 + lVar8 * 0x14);
    *pbVar2 = *pbVar2 | 0x20;
  }
  return;
}



// FUNCTION 144c515c0 FUN_144c515c0 body=1143 status=ok
// SIG undefined FUN_144c515c0(void)

void FUN_144c515c0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  uint local_res8;
  uint local_258 [2];
  undefined1 local_250 [24];
  undefined1 local_238 [512];
  
  uVar18 = *(uint *)(param_1 + 0x30);
  if ((int)uVar18 < 1) {
    puVar2 = (uint *)0x0;
    local_res8 = 0x80000000;
    uVar18 = 0;
  }
  else {
    puVar2 = (uint *)(**(code **)(PTR_vftable_14c6e47c0 + 8))(&PTR_vftable_14c6e47c0);
    local_res8 = uVar18;
  }
  iVar8 = *(int *)(param_1 + 0x30);
  iVar5 = 0;
  uVar17 = 0;
  lVar10 = 0;
  if (0 < (longlong)iVar8) {
    do {
      lVar3 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      lVar3 = *(longlong *)(param_1 + 0x28) + lVar3 * 0x14;
      puVar6 = puVar2 + lVar10;
      lVar10 = lVar10 + 1;
      if (*(char *)(lVar3 + 0x10) < '\0') {
        *puVar6 = *(uint *)(lVar3 + 8) | 0x80000000;
      }
      else {
        *puVar6 = uVar17;
        local_258[0] = uVar17;
        FUN_144c541b0(param_1,local_258);
        uVar17 = uVar17 + 1;
      }
    } while (lVar10 < iVar8);
  }
  uVar4 = 0;
  puVar6 = puVar2;
  if (0 < (int)uVar18) {
    do {
      uVar14 = *puVar6;
      iVar5 = (int)uVar4;
      if ((int)uVar14 < 0) {
        do {
          uVar14 = puVar2[uVar14 & 0x7fffffff];
        } while ((int)uVar14 < 0);
        do {
          iVar8 = (int)uVar4;
          uVar4 = (ulonglong)(puVar2[iVar8] & 0x7fffffff);
          puVar2[iVar8] = uVar14;
        } while ((int)puVar2[uVar4] < 0);
      }
      uVar14 = iVar5 + 1;
      uVar4 = (ulonglong)uVar14;
      puVar6 = puVar6 + 1;
    } while ((int)uVar14 < (int)uVar18);
  }
  FUN_144c3b330();
  iVar5 = 0;
  if (0 < (int)uVar17) {
    lVar10 = 0;
    do {
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar10);
      if (iVar8 != -1) {
        *(uint *)(*(longlong *)(param_1 + 0x28) + 8 + lVar10) = puVar2[iVar8];
      }
      iVar5 = iVar5 + 1;
      lVar10 = lVar10 + 0x14;
    } while (iVar5 < (int)uVar17);
  }
  iVar5 = *(int *)(param_1 + 0x20);
  iVar8 = 0;
  if (0 < iVar5) {
    lVar10 = 0;
    do {
      puVar6 = (uint *)(*(longlong *)(param_1 + 0x18) + lVar10);
      *puVar6 = puVar2[(int)*puVar6];
      if (*(short *)((longlong)puVar6 + 10) != 0) {
        puVar6[1] = puVar2[(int)puVar6[1]];
      }
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 0xc;
    } while (iVar8 < iVar5);
  }
  pcVar12 = *(char **)(param_1 + 0x48);
  pcVar13 = pcVar12 + (longlong)*(int *)(param_1 + 0x50) * 0x10;
  do {
    if (pcVar12 == pcVar13) {
      pcVar12 = (char *)param_3[1];
      for (pcVar13 = (char *)*param_3; pcVar13 != pcVar12; pcVar13 = pcVar13 + 0x10) {
        lVar10 = *(longlong *)(*(longlong *)(pcVar13 + 8) + 0x20);
        lVar3 = (longlong)*(int *)(*(longlong *)(pcVar13 + 8) + 0x28) * 0x10 + lVar10;
        if (*pcVar13 == '\0') {
          for (; lVar10 != lVar3; lVar10 = lVar10 + 0x10) {
            *(uint *)(lVar10 + 4) = puVar2[*(int *)(lVar10 + 4)];
          }
        }
        else {
          for (; lVar10 != lVar3; lVar10 = lVar10 + 0x10) {
            *(uint *)(lVar10 + 0xc) = puVar2[*(int *)(lVar10 + 0xc)];
          }
        }
      }
      if ((-1 < (int)local_res8) && (puVar2 != (uint *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,puVar2,(ulonglong)(local_res8 & 0x7fffffff) << 2);
      }
      return;
    }
    lVar10 = *(longlong *)(*(longlong *)(pcVar12 + 8) + 0x20);
    lVar3 = (longlong)*(int *)(*(longlong *)(pcVar12 + 8) + 0x28) * 0x10 + lVar10;
    if (*pcVar12 == '\0') {
      for (; lVar10 != lVar3; lVar10 = lVar10 + 0x10) {
        *(uint *)(lVar10 + 4) = puVar2[*(int *)(lVar10 + 4)];
      }
    }
    else {
      for (; lVar10 != lVar3; lVar10 = lVar10 + 0x10) {
        *(uint *)(lVar10 + 0xc) = puVar2[*(int *)(lVar10 + 0xc)];
      }
    }
    plVar11 = (longlong *)*param_2;
    lVar10 = *(longlong *)(pcVar12 + 8);
    if (*pcVar12 == '\0') {
      iVar5 = *(int *)(lVar10 + 0x18);
      piVar7 = (int *)(lVar10 + 0x1c);
    }
    else {
      iVar5 = *(int *)(lVar10 + 0x1c);
      piVar7 = (int *)(lVar10 + 0x18);
    }
    for (; plVar11 != (longlong *)param_2[1]; plVar11 = plVar11 + 1) {
      pcVar15 = *(char **)(*plVar11 + 0x48);
      pcVar16 = pcVar15 + (longlong)*(int *)(*plVar11 + 0x50) * 0x10;
      for (; pcVar15 != pcVar16; pcVar15 = pcVar15 + 0x10) {
        lVar10 = *(longlong *)(pcVar15 + 8);
        piVar9 = (int *)(lVar10 + 0x18);
        if (*pcVar15 != '\0') {
          piVar9 = (int *)(lVar10 + 0x1c);
        }
        if (*piVar9 == *piVar7) {
          piVar9 = (int *)(lVar10 + 0x1c);
          if (*pcVar15 != '\0') {
            piVar9 = (int *)(lVar10 + 0x18);
          }
          if (*piVar9 == iVar5) goto LAB_144c518f3;
        }
      }
    }
    FUN_144bde670(local_250,local_238,0x200);
    FUN_144be6160(local_250,"Opposite streaming set not found");
    iVar5 = FUN_144bfc110(0x5fe1ff71,local_238,"NavMesh\\UserEdge\\hkaiUserEdgeUtils.cpp");
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_144bde6e0(local_250);
    pcVar15 = (char *)0x0;
LAB_144c518f3:
    lVar10 = *(longlong *)(pcVar15 + 8);
    if (*(longlong *)(pcVar12 + 8) != lVar10) {
      lVar3 = *(longlong *)(lVar10 + 0x20);
      lVar10 = (longlong)*(int *)(lVar10 + 0x28) * 0x10 + lVar3;
      if (*pcVar15 == '\0') {
        for (; lVar3 != lVar10; lVar3 = lVar3 + 0x10) {
          *(uint *)(lVar3 + 4) = puVar2[*(int *)(lVar3 + 4)];
        }
      }
      else {
        for (; lVar3 != lVar10; lVar3 = lVar3 + 0x10) {
          *(uint *)(lVar3 + 0xc) = puVar2[*(int *)(lVar3 + 0xc)];
        }
      }
    }
    pcVar12 = pcVar12 + 0x10;
  } while( true );
}



// FUNCTION 144c51a40 FUN_144c51a40 body=150 status=ok
// SIG undefined FUN_144c51a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_144c51a40(undefined2 *param_1,float *param_2)

{
  float fVar1;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  fVar1 = (param_2[1] + *param_2) * _DAT_14c6dad90 - (param_2[3] + param_2[2]) * _DAT_14c6dad90;
  fVar4 = (param_2[5] + param_2[4]) * fRam000000014c6dad94 -
          (param_2[7] + param_2[6]) * fRam000000014c6dad94;
  fVar5 = (param_2[9] + param_2[8]) * fRam000000014c6dad98 -
          (param_2[0xb] + param_2[10]) * fRam000000014c6dad98;
  fVar1 = fVar1 * fVar1;
  fVar4 = fVar4 * fVar4;
  auVar2._8_4_ = fVar5 * fVar5;
  auVar2._4_4_ = auVar2._8_4_;
  auVar2._0_4_ = auVar2._8_4_;
  auVar2._12_4_ = auVar2._8_4_;
  auVar3._4_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._0_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._8_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._12_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3 = sqrtps(auVar2,auVar3);
  *param_1 = (short)((uint)(auVar3._0_4_ * 1.0039062) >> 0x10);
  return param_1;
}



// FUNCTION 144c51ae0 FUN_144c51ae0 body=230 status=ok
// SIG undefined FUN_144c51ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_144c51ae0(undefined2 *param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar4;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  
  local_48 = (param_4[1] + *param_4) * _DAT_14c6dad90;
  fStack_44 = (param_4[5] + param_4[4]) * fRam000000014c6dad94;
  fStack_40 = (param_4[9] + param_4[8]) * fRam000000014c6dad98;
  fStack_3c = fRam000000014c6dad9c * 0.0;
  local_38 = (param_4[3] + param_4[2]) * _DAT_14c6dad90;
  fStack_34 = (param_4[7] + param_4[6]) * fRam000000014c6dad94;
  fStack_30 = (param_4[0xb] + param_4[10]) * fRam000000014c6dad98;
  fStack_2c = fRam000000014c6dad9c * 0.0;
  FUN_144bfa5a0(&local_28,local_48,&local_48);
  FUN_144bfa5a0(&local_18,param_3,&local_38);
  fVar1 = (local_28 - local_18) * (local_28 - local_18);
  fVar4 = (fStack_24 - fStack_14) * (fStack_24 - fStack_14);
  auVar2._8_4_ = (fStack_20 - fStack_10) * (fStack_20 - fStack_10);
  auVar2._4_4_ = auVar2._8_4_;
  auVar2._0_4_ = auVar2._8_4_;
  auVar2._12_4_ = auVar2._8_4_;
  auVar3._4_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._0_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._8_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._12_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3 = sqrtps(auVar2,auVar3);
  *param_1 = (short)((uint)(auVar3._0_4_ * 1.0039062) >> 0x10);
  return param_1;
}



// FUNCTION 144c51bd0 FUN_144c51bd0 body=196 status=ok
// SIG undefined FUN_144c51bd0(void)

void FUN_144c51bd0(undefined8 *param_1,longlong param_2,int *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0xe0) + (longlong)*param_3 * 0x14);
  puVar3 = (undefined4 *)*param_1;
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  puVar1[2] = puVar3[2];
  puVar1[3] = puVar3[3];
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar3 + 4);
  *(undefined1 *)((longlong)puVar1 + 0x11) = *(undefined1 *)((longlong)puVar3 + 0x11);
  *(undefined2 *)((longlong)puVar1 + 0x12) = *(undefined2 *)((longlong)puVar3 + 0x12);
  lVar4 = (longlong)(*(int *)(param_2 + 0x60) * *param_3);
  lVar2 = *(longlong *)(param_2 + 0x150) + lVar4 * 4;
  FUN_144b3d470(lVar2,param_1[1],
                (longlong)
                (int)(((lVar4 + *(int *)(param_2 + 0x60)) * 4 - lVar2) +
                      *(longlong *)(param_2 + 0x150) >> 2) << 2);
  *(undefined2 *)(*(longlong *)(param_2 + 0x110) + (longlong)*param_3 * 2) =
       *(undefined2 *)(param_1 + 3);
  return;
}



// FUNCTION 144c51ca0 FUN_144c51ca0 body=949 status=ok
// SIG undefined FUN_144c51ca0(void)

void FUN_144c51ca0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
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
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong local_res8;
  longlong local_c8 [2];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  int local_90;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  
  param_2 = param_2 & 0x3fffff;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x20);
  if ((int)param_2 < *(int *)(lVar5 + 0x20)) {
    uVar8 = param_2;
    if (*(int *)(lVar5 + 0x98) != 0) {
      uVar8 = *(uint *)(*(longlong *)(lVar5 + 0x90) + (ulonglong)param_2 * 4);
    }
    if (uVar8 == 0xffffffff) {
      lVar5 = *(longlong *)(lVar5 + 0x18);
      lVar6 = (ulonglong)param_2 * 3;
    }
    else {
      lVar6 = (longlong)(int)uVar8 * 3;
      lVar5 = *(longlong *)(lVar5 + 0xb0);
    }
  }
  else {
    lVar6 = (longlong)(int)(param_2 - *(int *)(lVar5 + 0x20)) * 3;
    lVar5 = *(longlong *)(lVar5 + 0xd0);
  }
  lVar1 = lVar5 + lVar6 * 4;
  uVar8 = (int)*(short *)(lVar5 + 8 + lVar6 * 4) + 1;
  local_90 = 0;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar5 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar5 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar5 + 0xf0) = lVar6;
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x3d0) + 0x10);
  local_88 = 0;
  if (*(longlong *)(lVar5 + 8) == 0) {
    local_88 = lVar5;
  }
  local_c8[0] = (longlong)(int)uVar8 * 0x10;
  local_78 = local_c8[0];
  if (local_88 == 0) {
    local_98 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)local_c8[0] >> 8),1),local_c8,0x40);
  }
  else {
    local_res8 = local_c8[0] + 0x3fU & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)(local_88 + 0x28)) {
      local_98 = *(longlong *)(local_88 + 0x38);
      if (local_98 + local_res8 <= *(ulonglong *)(local_88 + 0x40)) {
        *(ulonglong *)(local_88 + 0x38) = local_98 + local_res8;
        goto LAB_144c51e13;
      }
    }
    local_98 = FUN_144b454a0(local_88,&local_res8);
  }
LAB_144c51e13:
  local_8c = uVar8 | 0x80000000;
  iVar4 = *(short *)(lVar1 + 8) + 1;
  if ((local_90 < iVar4) || (iVar4 < local_90)) {
    local_90 = iVar4;
  }
  local_80 = local_98;
  thunk_FUN_144c555a0(*(undefined8 *)(param_1 + 0x40),lVar1,&local_98);
  cVar3 = FUN_144feea30(&local_98,param_1 + 0x20,param_1 + 0x30,param_1 + 0x10,&local_b8,&local_a8);
  if (cVar3 != '\0') {
    plVar2 = *(longlong **)(param_1 + 0x48);
    fVar14 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x20);
    fVar15 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x24);
    fVar16 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x28);
    fVar23 = local_b8 * fVar14;
    fVar26 = fStack_b4 * fVar15;
    fVar27 = fStack_b0 * fVar16;
    iVar4 = (int)plVar2[1] + 1;
    fVar17 = *(float *)(param_1 + 0x20) * fVar14;
    fVar19 = *(float *)(param_1 + 0x24) * fVar15;
    fVar21 = *(float *)(param_1 + 0x28) * fVar16;
    fVar10 = fVar14 * fVar14;
    fVar11 = fVar15 * fVar15;
    fVar12 = fVar16 * fVar16;
    fVar14 = local_a8 * fVar14;
    fVar15 = fStack_a4 * fVar15;
    fVar16 = fStack_a0 * fVar16;
    fVar18 = fVar21 + fVar19 + fVar17;
    fVar20 = fVar21 + fVar19 + fVar17;
    fVar22 = fVar21 + fVar19 + fVar17;
    fVar21 = fVar21 + fVar19 + fVar17;
    fVar17 = fVar12 + fVar11 + fVar10;
    fVar19 = fVar12 + fVar11 + fVar10;
    fVar13 = fVar12 + fVar11 + fVar10;
    fVar12 = fVar12 + fVar11 + fVar10;
    auVar24._0_4_ = (fVar27 + fVar26 + fVar23) - fVar18;
    auVar24._4_4_ = (fVar27 + fVar26 + fVar23) - fVar20;
    auVar24._8_4_ = (fVar27 + fVar26 + fVar23) - fVar22;
    auVar24._12_4_ = (fVar27 + fVar26 + fVar23) - fVar21;
    auVar25._4_4_ = fVar19;
    auVar25._0_4_ = fVar17;
    auVar25._8_4_ = fVar13;
    auVar25._12_4_ = fVar12;
    auVar25 = divps(auVar24,auVar25);
    auVar28._0_4_ = (fVar16 + fVar15 + fVar14) - fVar18;
    auVar28._4_4_ = (fVar16 + fVar15 + fVar14) - fVar20;
    auVar28._8_4_ = (fVar16 + fVar15 + fVar14) - fVar22;
    auVar28._12_4_ = (fVar16 + fVar15 + fVar14) - fVar21;
    auVar29._4_4_ = fVar19;
    auVar29._0_4_ = fVar17;
    auVar29._8_4_ = fVar13;
    auVar29._12_4_ = fVar12;
    auVar29 = divps(auVar28,auVar29);
    if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < iVar4) {
      FUN_144c52170(plVar2,&PTR_vftable_14c6e47c0,(longlong)iVar4);
    }
    puVar7 = (undefined4 *)((longlong)(int)plVar2[1] * 0x40 + *plVar2);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = auVar25._0_4_;
      puVar7[1] = auVar29._0_4_;
      puVar7[4] = local_b8;
      puVar7[5] = fStack_b4;
      puVar7[6] = fStack_b0;
      puVar7[7] = uStack_ac;
      puVar7[8] = local_a8;
      puVar7[9] = fStack_a4;
      puVar7[10] = fStack_a0;
      puVar7[0xb] = uStack_9c;
      puVar7[0xc] = param_2;
    }
    *(int *)(plVar2 + 1) = iVar4;
  }
  if (local_80 == local_98) {
    local_90 = 0;
  }
  if (local_88 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar9 = local_78 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_88 + 0x28) < uVar9) ||
       (local_80 + uVar9 != *(longlong *)(local_88 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_88 + 0x38) = local_80;
      if (*(longlong *)(local_88 + 0x48) == local_80) {
        FUN_144be8430();
      }
    }
  }
  local_90 = 0;
  if ((-1 < (int)local_8c) && (local_98 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_98,(ulonglong)(local_8c & 0x7fffffff) << 4);
  }
  return;
}



// FUNCTION 144c52060 FUN_144c52060 body=266 status=ok
// SIG undefined FUN_144c52060(void)

undefined4 * FUN_144c52060(undefined4 *param_1,longlong param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  short sVar7;
  int iVar8;
  int local_res8 [2];
  int local_res10 [2];
  
  lVar2 = *(longlong *)(param_2 + 0x18) + (longlong)*param_3 * 0xc;
  sVar7 = *(short *)(*(longlong *)(param_2 + 0x18) + 10 + (longlong)*param_3 * 0xc);
  if (sVar7 == 0) {
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_2 + 0x30);
    *(short *)(lVar2 + 10) = (short)param_4;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x30);
    if (*(int *)(lVar2 + 4) + (int)sVar7 < iVar3) {
      FUN_144c3b1a0(param_2,(int)sVar7,0xffffffff);
      sVar7 = *(short *)(lVar2 + 10);
      iVar8 = 0;
      if (0 < sVar7) {
        do {
          iVar1 = iVar8 + iVar3;
          local_res8[0] = *(int *)(lVar2 + 4) + iVar8;
          local_res10[0] = iVar1;
          FUN_144c541b0(param_2,local_res10,local_res8);
          iVar5 = *(int *)(lVar2 + 4) + iVar8;
          iVar8 = iVar8 + 1;
          lVar6 = (longlong)iVar5;
          lVar4 = *(longlong *)(param_2 + 0x28);
          *(undefined1 *)(lVar4 + 0x10 + lVar6 * 0x14) = 0x80;
          *(int *)(lVar4 + 8 + lVar6 * 0x14) = iVar1;
          sVar7 = *(short *)(lVar2 + 10);
        } while (iVar8 < sVar7);
      }
      *(int *)(lVar2 + 4) = iVar3;
    }
    *(short *)(lVar2 + 10) = sVar7 + (short)param_4;
  }
  *param_1 = *(undefined4 *)(param_2 + 0x30);
  FUN_144c3b1a0(param_2,param_4,0xffffffff);
  return param_1;
}



// FUNCTION 144c52170 FUN_144c52170 body=608 status=ok
// SIG undefined FUN_144c52170(void)

void FUN_144c52170(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  ulonglong local_res8;
  
  uVar16 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar11 = param_3;
  if (param_3 < uVar16) {
    uVar11 = uVar16;
  }
  if ((0x7ffffffe < uVar11) && (uVar11 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar11 * 0x40;
  puVar7 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  iVar2 = *(int *)(param_1 + 1);
  iVar13 = 0;
  puVar14 = (undefined4 *)*param_1;
  puVar15 = puVar7;
  if (3 < iVar2) {
    puVar10 = puVar7 + 0x14;
    uVar8 = (iVar2 - 4U >> 2) + 1;
    uVar16 = (ulonglong)uVar8;
    iVar13 = uVar8 * 4;
    do {
      if (puVar15 != (undefined4 *)0x0) {
        *puVar15 = *puVar14;
        puVar10[-0x13] = puVar14[1];
        uVar3 = puVar14[5];
        uVar4 = puVar14[6];
        uVar5 = puVar14[7];
        puVar10[-0x10] = puVar14[4];
        puVar10[-0xf] = uVar3;
        puVar10[-0xe] = uVar4;
        puVar10[-0xd] = uVar5;
        uVar6 = *(undefined8 *)(puVar14 + 10);
        *(undefined8 *)(puVar10 + -0xc) = *(undefined8 *)(puVar14 + 8);
        *(undefined8 *)(puVar10 + -10) = uVar6;
        puVar10[-8] = puVar14[0xc];
      }
      if (puVar10 + -4 != (undefined4 *)0x0) {
        puVar10[-4] = puVar14[0x10];
        puVar10[-3] = puVar14[0x11];
        uVar3 = puVar14[0x15];
        uVar4 = puVar14[0x16];
        uVar5 = puVar14[0x17];
        *puVar10 = puVar14[0x14];
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar6 = *(undefined8 *)(puVar14 + 0x1a);
        *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar14 + 0x18);
        *(undefined8 *)(puVar10 + 6) = uVar6;
        puVar10[8] = puVar14[0x1c];
      }
      if (puVar10 + 0xc != (undefined4 *)0x0) {
        puVar10[0xc] = puVar14[0x20];
        puVar10[0xd] = puVar14[0x21];
        uVar3 = puVar14[0x25];
        uVar4 = puVar14[0x26];
        uVar5 = puVar14[0x27];
        puVar10[0x10] = puVar14[0x24];
        puVar10[0x11] = uVar3;
        puVar10[0x12] = uVar4;
        puVar10[0x13] = uVar5;
        uVar6 = *(undefined8 *)(puVar14 + 0x2a);
        *(undefined8 *)(puVar10 + 0x14) = *(undefined8 *)(puVar14 + 0x28);
        *(undefined8 *)(puVar10 + 0x16) = uVar6;
        puVar10[0x18] = puVar14[0x2c];
      }
      if (puVar10 + 0x1c != (undefined4 *)0x0) {
        puVar10[0x1c] = puVar14[0x30];
        puVar10[0x1d] = puVar14[0x31];
        uVar3 = puVar14[0x35];
        uVar4 = puVar14[0x36];
        uVar5 = puVar14[0x37];
        puVar10[0x20] = puVar14[0x34];
        puVar10[0x21] = uVar3;
        puVar10[0x22] = uVar4;
        puVar10[0x23] = uVar5;
        uVar6 = *(undefined8 *)(puVar14 + 0x3a);
        *(undefined8 *)(puVar10 + 0x24) = *(undefined8 *)(puVar14 + 0x38);
        *(undefined8 *)(puVar10 + 0x26) = uVar6;
        puVar10[0x28] = puVar14[0x3c];
      }
      puVar15 = puVar15 + 0x40;
      puVar10 = puVar10 + 0x40;
      puVar14 = puVar14 + 0x40;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  if (iVar13 < iVar2) {
    puVar10 = puVar15 + 4;
    puVar9 = puVar14 + 4;
    uVar16 = (ulonglong)(uint)(iVar2 - iVar13);
    do {
      puVar1 = (undefined4 *)((longlong)puVar15 + (-0x10 - (longlong)puVar14) + (longlong)puVar9);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar9[-4];
        puVar10[-3] = puVar9[-3];
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        *puVar10 = *puVar9;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar6 = *(undefined8 *)(puVar9 + 6);
        *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar9 + 4);
        *(undefined8 *)(puVar10 + 6) = uVar6;
        puVar10[8] = puVar9[8];
      }
      puVar10 = puVar10 + 0x10;
      puVar9 = puVar9 + 0x10;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar16 = uVar11 * 0x40 + 0x40;
  uVar12 = uVar11;
  if (uVar16 <= local_res8) {
    local_res8 = local_res8 - 0x40;
    uVar12 = uVar11 + 1;
    if (uVar16 <= local_res8) {
      uVar12 = uVar12 + (local_res8 + uVar11 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar7;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar12;
  return;
}



// FUNCTION 144c523d0 FUN_144c523d0 body=698 status=ok
// SIG undefined FUN_144c523d0(void)

ulonglong FUN_144c523d0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong local_res8;
  longlong local_res10;
  
  uVar14 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar16 = param_3;
  if (param_3 < uVar14) {
    uVar16 = uVar14;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar16) && (uVar16 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar16 * 0x90;
  lVar10 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar4 = *(uint *)(param_1 + 1);
  puVar13 = (undefined8 *)*param_1;
  uVar14 = (ulonglong)uVar4;
  if (0 < (int)uVar4) {
    puVar12 = puVar13 + 10;
    uVar20 = (ulonglong)uVar4;
    puVar17 = (undefined4 *)(lVar10 + 0x4c);
    puVar15 = puVar13;
    do {
      if ((undefined8 *)(puVar17 + -0x13) != (undefined8 *)0x0) {
        uVar9 = puVar15[1];
        puVar1 = (undefined8 *)(puVar17 + -3);
        *(undefined8 *)(puVar17 + -0x13) = *puVar15;
        *(undefined8 *)(puVar17 + -0x11) = uVar9;
        puVar2 = puVar12 + -2;
        uVar9 = puVar12[-7];
        puVar11 = (undefined8 *)(puVar17 + 1);
        *(undefined8 *)(puVar17 + -0xf) = puVar12[-8];
        *(undefined8 *)(puVar17 + -0xd) = uVar9;
        uVar6 = *(undefined4 *)((longlong)puVar12 + -0x2c);
        uVar7 = *(undefined4 *)(puVar12 + -5);
        uVar8 = *(undefined4 *)((longlong)puVar12 + -0x24);
        puVar17[-0xb] = *(undefined4 *)(puVar12 + -6);
        puVar17[-10] = uVar6;
        puVar17[-9] = uVar7;
        puVar17[-8] = uVar8;
        puVar17[-7] = *(undefined4 *)(puVar12 + -4);
        puVar17[-6] = *(undefined4 *)((longlong)puVar12 + -0x1c);
        puVar17[-5] = *(undefined4 *)(puVar12 + -3);
        puVar17[-4] = *(undefined4 *)((longlong)puVar12 + -0x14);
        *puVar1 = puVar11;
        puVar17[-1] = 0;
        *puVar17 = 0x80000004;
        if (puVar2 != puVar1) {
          *puVar17 = 0x80000000;
          *puVar1 = 0;
          puVar17[-1] = *(undefined4 *)(puVar12 + -1);
          *puVar17 = *(undefined4 *)((longlong)puVar12 + -4);
          if ((undefined8 *)*puVar2 == puVar12) {
            *puVar1 = puVar11;
            if (puVar11 != puVar12) {
              lVar18 = 4;
              lVar19 = (longlong)puVar12 - (longlong)puVar11;
              do {
                *(undefined4 *)puVar11 = *(undefined4 *)((longlong)puVar11 + lVar19);
                puVar11 = (undefined8 *)((longlong)puVar11 + 4);
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
          }
          else {
            *puVar1 = (undefined8 *)*puVar2;
            *puVar2 = puVar12;
            *(undefined4 *)((longlong)puVar12 + -4) = 0x80000004;
          }
          *(undefined4 *)(puVar12 + -1) = 0;
        }
        puVar1 = (undefined8 *)(puVar17 + 5);
        puVar17[7] = 0;
        puVar2 = puVar12 + 2;
        puVar17[8] = 0x80000004;
        puVar11 = (undefined8 *)(puVar17 + 9);
        *puVar1 = puVar11;
        if (puVar2 != puVar1) {
          *puVar1 = 0;
          puVar3 = puVar12 + 4;
          puVar17[8] = 0x80000000;
          puVar17[7] = *(undefined4 *)(puVar12 + 3);
          puVar17[8] = *(undefined4 *)((longlong)puVar12 + 0x1c);
          if ((undefined8 *)*puVar2 == puVar3) {
            *puVar1 = puVar11;
            if (puVar11 != puVar3) {
              lVar19 = (longlong)puVar3 - (longlong)puVar11;
              lVar18 = 4;
              do {
                *(undefined4 *)puVar11 = *(undefined4 *)((longlong)puVar11 + lVar19);
                puVar11 = (undefined8 *)((longlong)puVar11 + 4);
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
          }
          else {
            *puVar1 = (undefined8 *)*puVar2;
            *puVar2 = puVar3;
            *(undefined4 *)((longlong)puVar12 + 0x1c) = 0x80000004;
          }
          *(undefined4 *)(puVar12 + 3) = 0;
        }
        *(undefined2 *)(puVar17 + 0xd) = *(undefined2 *)(puVar12 + 6);
        *(undefined2 *)((longlong)puVar17 + 0x36) = *(undefined2 *)((longlong)puVar12 + 0x32);
        *(undefined1 *)(puVar17 + 0xe) = *(undefined1 *)((longlong)puVar12 + 0x34);
      }
      puVar17 = puVar17 + 0x24;
      puVar15 = puVar15 + 0x12;
      puVar12 = puVar12 + 0x12;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    do {
      FUN_144c50230(puVar13);
      puVar13 = puVar13 + 0x12;
      uVar14 = uVar14 - 1;
      param_2 = local_res10;
    } while (uVar14 != 0);
  }
  uVar14 = uVar16 * 0x90 + 0x90;
  uVar20 = uVar16;
  if (uVar14 <= local_res8) {
    local_res8 = local_res8 - 0x90;
    uVar20 = uVar16 + 1;
    if (uVar14 <= local_res8) {
      uVar16 = local_res8 + uVar16 * -0x90;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar16;
      uVar14 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar5,0);
      uVar20 = uVar20 + uVar16 / 0x90;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar14 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar10;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar20;
  return uVar14;
}



// FUNCTION 144c52690 FUN_144c52690 body=103 status=ok
// SIG undefined FUN_144c52690(void)

void FUN_144c52690(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c52700 FUN_144c52700 body=377 status=ok
// SIG undefined FUN_144c52700(void)

void FUN_144c52700(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 + (longlong)(int)param_1[1] * 0xe != puVar2) {
    puVar4 = puVar2 + (longlong)(int)param_1[1] * 0xe + 0xd;
    do {
      puVar4[-0xf] = 0;
      if ((-1 < (int)puVar4[-0xe]) && (*(longlong *)(puVar4 + -0x11) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x11),
                   (ulonglong)(puVar4[-0xe] & 0x7fffffff) << 2);
      }
      *(undefined8 *)(puVar4 + -0x11) = 0;
      puVar4[-0xe] = 0x80000000;
      puVar4[-0x13] = 0;
      if ((-1 < (int)puVar4[-0x12]) && (*(longlong *)(puVar4 + -0x15) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x15),
                   (ulonglong)(puVar4[-0x12] & 0x7fffffff) << 2);
      }
      *(undefined8 *)(puVar4 + -0x15) = 0;
      puVar4[-0x12] = 0x80000000;
      puVar4[-0x17] = 0;
      if ((-1 < (int)puVar4[-0x16]) && (*(longlong *)(puVar4 + -0x19) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x19),
                   (ulonglong)(puVar4[-0x16] & 0x7fffffff) * 0x14);
      }
      puVar1 = puVar4 + -0x1b;
      *(undefined8 *)(puVar4 + -0x19) = 0;
      puVar4[-0x16] = 0x80000000;
      puVar4 = puVar4 + -0xe;
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
  lVar3 = param_1[2];
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
    FUN_144b3ec00(param_1 + 2);
  }
  return;
}



// FUNCTION 144c52880 FUN_144c52880 body=218 status=ok
// SIG undefined FUN_144c52880(void)

void FUN_144c52880(longlong param_1,int *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  uVar2 = *(ushort *)(param_2 + 2);
  iVar3 = *param_2;
  puVar9 = (undefined8 *)*param_3;
  uVar7 = (int)(short)uVar2 & 0xfffffffe;
  if (0 < (int)uVar7) {
    lVar8 = (longlong)iVar3 * 0x14;
    uVar10 = (ulonglong)((uVar7 - 1 >> 1) + 1);
    do {
      lVar8 = lVar8 + 0x28;
      puVar1 = (undefined8 *)
               (*(longlong *)(param_1 + 0x38) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + -0x24 + lVar8) * 0x10);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)
               (*(longlong *)(param_1 + 0x38) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + -0x28 + lVar8) * 0x10);
      uVar6 = puVar1[1];
      *puVar9 = *puVar1;
      puVar9[1] = uVar6;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9 = puVar9 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if ((uVar2 & 1) != 0) {
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x38) +
             (longlong)
             *(int *)(*(longlong *)(param_1 + 0x28) + -0x14 +
                     (longlong)((short)uVar2 + iVar3) * 0x14) * 0x10);
    uVar4 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar4;
  }
  puVar9 = (undefined8 *)*param_3;
  lVar8 = param_3[1];
  uVar4 = puVar9[1];
  puVar9[(longlong)(int)lVar8 * 2 + -2] = *puVar9;
  (puVar9 + (longlong)(int)lVar8 * 2 + -2)[1] = uVar4;
  return;
}



// FUNCTION 144c52960 thunk_FUN_144c553a0 body=5 status=ok
// SIG undefined thunk_FUN_144c553a0(void)

void thunk_FUN_144c553a0(longlong param_1,int *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  
  uVar1 = *(ushort *)(param_2 + 2);
  puVar4 = (undefined8 *)*param_3;
  iVar7 = *param_2;
  uVar11 = (int)(short)uVar1 & 0xfffffffe;
  puVar16 = puVar4;
  if (0 < (int)uVar11) {
    iVar2 = *(int *)(param_1 + 0x40);
    iVar3 = *(int *)(param_1 + 0x30);
    lVar13 = (longlong)iVar7 * 4;
    lVar14 = (longlong)iVar7 * 0x14;
    uVar17 = (ulonglong)((uVar11 - 1 >> 1) + 1);
    iVar15 = iVar7;
    do {
      if (iVar15 < iVar3) {
        iVar6 = iVar15;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar6 = *(int *)(lVar13 + *(longlong *)(param_1 + 0x70));
        }
        if (iVar6 != -1) {
          lVar8 = *(longlong *)(param_1 + 0xc0);
          goto LAB_144c55468;
        }
        piVar12 = (int *)(*(longlong *)(param_1 + 0x28) + lVar14);
      }
      else {
        iVar6 = iVar15 - iVar3;
        lVar8 = *(longlong *)(param_1 + 0xe0);
LAB_144c55468:
        piVar12 = (int *)(lVar8 + (longlong)iVar6 * 0x14);
      }
      iVar6 = *piVar12;
      if (iVar6 < iVar2) {
        puVar9 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar9 = (undefined8 *)((longlong)(iVar6 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      uVar5 = puVar9[1];
      iVar6 = piVar12[1];
      if (iVar6 < iVar2) {
        puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar10 = (undefined8 *)((longlong)(iVar6 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      *puVar16 = *puVar9;
      puVar16[1] = uVar5;
      iVar15 = iVar15 + 2;
      uVar5 = puVar10[1];
      lVar13 = lVar13 + 8;
      puVar16[2] = *puVar10;
      puVar16[3] = uVar5;
      lVar14 = lVar14 + 0x28;
      puVar16 = puVar16 + 4;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if ((uVar1 & 1) != 0) {
    iVar7 = iVar7 + -1 + (int)(short)uVar1;
    if (iVar7 < *(int *)(param_1 + 0x30)) {
      lVar13 = (longlong)iVar7;
      if (*(int *)(param_1 + 0x78) != 0) {
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar13 * 4);
      }
      if (iVar7 == -1) {
        lVar14 = *(longlong *)(param_1 + 0x28);
        lVar13 = lVar13 * 5;
      }
      else {
        lVar13 = (longlong)iVar7 * 5;
        lVar14 = *(longlong *)(param_1 + 0xc0);
      }
    }
    else {
      lVar13 = (longlong)(iVar7 - *(int *)(param_1 + 0x30)) * 5;
      lVar14 = *(longlong *)(param_1 + 0xe0);
    }
    iVar7 = *(int *)(lVar14 + lVar13 * 4);
    if (iVar7 < *(int *)(param_1 + 0x40)) {
      puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x38));
    }
    else {
      puVar9 = (undefined8 *)
               ((longlong)(iVar7 - *(int *)(param_1 + 0x40)) * 0x10 + *(longlong *)(param_1 + 0xf0))
      ;
    }
    uVar5 = puVar9[1];
    *puVar16 = *puVar9;
    puVar16[1] = uVar5;
  }
  lVar13 = param_3[1];
  uVar5 = puVar4[1];
  puVar4[(longlong)(int)lVar13 * 2 + -2] = *puVar4;
  (puVar4 + (longlong)(int)lVar13 * 2 + -2)[1] = uVar5;
  return;
}



// FUNCTION 144c52970 thunk_FUN_144c555a0 body=5 status=ok
// SIG undefined thunk_FUN_144c555a0(void)

void thunk_FUN_144c555a0(longlong param_1,int *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
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
  undefined8 uVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  float *pfVar31;
  longlong lVar32;
  float *pfVar33;
  longlong lVar34;
  int *piVar35;
  int iVar36;
  uint uVar37;
  ulonglong uVar38;
  longlong lVar39;
  
  uVar1 = *(ushort *)(param_2 + 2);
  iVar29 = *param_2;
  pfVar33 = (float *)*param_3;
  uVar37 = (int)(short)uVar1 & 0xfffffffe;
  if (0 < (int)uVar37) {
    lVar32 = *(longlong *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 0x60);
    fVar6 = *(float *)(param_1 + 100);
    fVar7 = *(float *)(param_1 + 0x68);
    fVar8 = *(float *)(param_1 + 0x6c);
    fVar9 = *(float *)(param_1 + 0x70);
    fVar10 = *(float *)(param_1 + 0x74);
    fVar11 = *(float *)(param_1 + 0x78);
    fVar12 = *(float *)(param_1 + 0x7c);
    fVar13 = *(float *)(param_1 + 0x80);
    fVar14 = *(float *)(param_1 + 0x84);
    fVar15 = *(float *)(param_1 + 0x88);
    fVar16 = *(float *)(param_1 + 0x8c);
    iVar2 = *(int *)(lVar32 + 0x40);
    iVar3 = *(int *)(lVar32 + 0x30);
    lVar39 = (longlong)iVar29 * 4;
    lVar34 = (longlong)iVar29 * 0x14;
    uVar38 = (ulonglong)((uVar37 - 1 >> 1) + 1);
    fVar17 = *(float *)(param_1 + 0x90);
    fVar18 = *(float *)(param_1 + 0x94);
    fVar19 = *(float *)(param_1 + 0x98);
    fVar20 = *(float *)(param_1 + 0x9c);
    iVar36 = iVar29;
    do {
      if (iVar36 < iVar3) {
        iVar28 = iVar36;
        if (*(int *)(lVar32 + 0x78) != 0) {
          iVar28 = *(int *)(lVar39 + *(longlong *)(lVar32 + 0x70));
        }
        if (iVar28 != -1) {
          lVar30 = *(longlong *)(lVar32 + 0xc0);
          goto LAB_144c55678;
        }
        piVar35 = (int *)(*(longlong *)(lVar32 + 0x28) + lVar34);
      }
      else {
        iVar28 = iVar36 - iVar3;
        lVar30 = *(longlong *)(lVar32 + 0xe0);
LAB_144c55678:
        piVar35 = (int *)(lVar30 + (longlong)iVar28 * 0x14);
      }
      iVar28 = *piVar35;
      if (iVar28 < iVar2) {
        pfVar31 = (float *)((longlong)iVar28 * 0x10 + *(longlong *)(lVar32 + 0x38));
      }
      else {
        pfVar31 = (float *)((longlong)(iVar28 - iVar2) * 0x10 + *(longlong *)(lVar32 + 0xf0));
      }
      fVar21 = *pfVar31;
      fVar22 = pfVar31[1];
      fVar23 = pfVar31[2];
      iVar28 = piVar35[1];
      if (iVar28 < iVar2) {
        pfVar31 = (float *)((longlong)iVar28 * 0x10 + *(longlong *)(lVar32 + 0x38));
      }
      else {
        pfVar31 = (float *)((longlong)(iVar28 - iVar2) * 0x10 + *(longlong *)(lVar32 + 0xf0));
      }
      fVar24 = *pfVar31;
      fVar25 = pfVar31[1];
      fVar26 = pfVar31[2];
      iVar36 = iVar36 + 2;
      *pfVar33 = fVar21 * fVar5 + fVar22 * fVar9 + fVar23 * fVar13 + fVar17;
      pfVar33[1] = fVar21 * fVar6 + fVar22 * fVar10 + fVar23 * fVar14 + fVar18;
      pfVar33[2] = fVar21 * fVar7 + fVar22 * fVar11 + fVar23 * fVar15 + fVar19;
      pfVar33[3] = fVar21 * fVar8 + fVar22 * fVar12 + fVar23 * fVar16 + fVar20;
      lVar39 = lVar39 + 8;
      lVar34 = lVar34 + 0x28;
      pfVar33[4] = fVar25 * fVar9 + fVar24 * fVar5 + fVar26 * fVar13 + fVar17;
      pfVar33[5] = fVar25 * fVar10 + fVar24 * fVar6 + fVar26 * fVar14 + fVar18;
      pfVar33[6] = fVar25 * fVar11 + fVar24 * fVar7 + fVar26 * fVar15 + fVar19;
      pfVar33[7] = fVar25 * fVar12 + fVar24 * fVar8 + fVar26 * fVar16 + fVar20;
      pfVar33 = pfVar33 + 8;
      uVar38 = uVar38 - 1;
    } while (uVar38 != 0);
  }
  if ((uVar1 & 1) != 0) {
    lVar39 = *(longlong *)(param_1 + 0x20);
    iVar29 = (int)(short)uVar1 + iVar29 + -1;
    if (iVar29 < *(int *)(lVar39 + 0x30)) {
      lVar32 = (longlong)iVar29;
      if (*(int *)(lVar39 + 0x78) != 0) {
        iVar29 = *(int *)(*(longlong *)(lVar39 + 0x70) + lVar32 * 4);
      }
      if (iVar29 == -1) {
        lVar34 = *(longlong *)(lVar39 + 0x28);
        lVar32 = lVar32 * 5;
      }
      else {
        lVar32 = (longlong)iVar29 * 5;
        lVar34 = *(longlong *)(lVar39 + 0xc0);
      }
    }
    else {
      lVar32 = (longlong)(iVar29 - *(int *)(lVar39 + 0x30)) * 5;
      lVar34 = *(longlong *)(lVar39 + 0xe0);
    }
    iVar29 = *(int *)(lVar34 + lVar32 * 4);
    if (iVar29 < *(int *)(lVar39 + 0x40)) {
      pfVar31 = (float *)((longlong)iVar29 * 0x10 + *(longlong *)(lVar39 + 0x38));
    }
    else {
      pfVar31 = (float *)((longlong)(iVar29 - *(int *)(lVar39 + 0x40)) * 0x10 +
                         *(longlong *)(lVar39 + 0xf0));
    }
    fVar5 = *pfVar31;
    fVar6 = pfVar31[1];
    fVar7 = pfVar31[2];
    fVar8 = *(float *)(param_1 + 0x74);
    fVar9 = *(float *)(param_1 + 0x78);
    fVar10 = *(float *)(param_1 + 0x7c);
    fVar11 = *(float *)(param_1 + 100);
    fVar12 = *(float *)(param_1 + 0x68);
    fVar13 = *(float *)(param_1 + 0x6c);
    fVar14 = *(float *)(param_1 + 0x84);
    fVar15 = *(float *)(param_1 + 0x88);
    fVar16 = *(float *)(param_1 + 0x8c);
    fVar17 = *(float *)(param_1 + 0x94);
    fVar18 = *(float *)(param_1 + 0x98);
    fVar19 = *(float *)(param_1 + 0x9c);
    *pfVar33 = fVar6 * *(float *)(param_1 + 0x70) + fVar5 * *(float *)(param_1 + 0x60) +
               fVar7 * *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x90);
    pfVar33[1] = fVar6 * fVar8 + fVar5 * fVar11 + fVar7 * fVar14 + fVar17;
    pfVar33[2] = fVar6 * fVar9 + fVar5 * fVar12 + fVar7 * fVar15 + fVar18;
    pfVar33[3] = fVar6 * fVar10 + fVar5 * fVar13 + fVar7 * fVar16 + fVar19;
  }
  puVar4 = (undefined8 *)*param_3;
  lVar39 = param_3[1];
  uVar27 = puVar4[1];
  puVar4[(longlong)(int)lVar39 * 2 + -2] = *puVar4;
  (puVar4 + (longlong)(int)lVar39 * 2 + -2)[1] = uVar27;
  return;
}



// FUNCTION 144c52980 FUN_144c52980 body=239 status=ok
// SIG undefined FUN_144c52980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c52980(longlong *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  pfVar6 = (float *)*param_1;
  iVar8 = (int)param_1[1] + -1;
  fVar26 = 0.0;
  fVar27 = 0.0;
  fVar28 = 0.0;
  auVar19 = ZEXT816(0);
  lVar7 = (longlong)iVar8;
  fVar14 = *pfVar6;
  fVar15 = pfVar6[1];
  fVar16 = pfVar6[2];
  fVar22 = pfVar6[3];
  auVar17 = auVar19;
  fVar21 = fVar14;
  fVar23 = fVar15;
  fVar24 = fVar16;
  fVar25 = fVar22;
  if (0 < iVar8) {
    do {
      fVar26 = fVar26 + fVar21;
      fVar27 = fVar27 + fVar23;
      fVar28 = fVar28 + fVar24;
      fVar2 = pfVar6[4];
      pfVar3 = pfVar6 + 5;
      pfVar4 = pfVar6 + 6;
      pfVar5 = pfVar6 + 7;
      fVar9 = fVar2 - fVar14;
      fVar11 = *pfVar3 - fVar15;
      fVar12 = *pfVar4 - fVar16;
      fVar13 = *pfVar5 - fVar22;
      auVar19._0_4_ = auVar17._0_4_ + (fVar12 * (fVar23 - fVar15) - (fVar24 - fVar16) * fVar11);
      auVar19._4_4_ = auVar17._4_4_ + (fVar9 * (fVar24 - fVar16) - (fVar21 - fVar14) * fVar12);
      auVar19._8_4_ = auVar17._8_4_ + (fVar11 * (fVar21 - fVar14) - (fVar23 - fVar15) * fVar9);
      auVar19._12_4_ = auVar17._12_4_ + (fVar13 * (fVar25 - fVar22) - (fVar25 - fVar22) * fVar13);
      lVar7 = lVar7 + -1;
      pfVar6 = pfVar6 + 4;
      auVar17 = auVar19;
      fVar21 = fVar2;
      fVar23 = *pfVar3;
      fVar24 = *pfVar4;
      fVar25 = *pfVar5;
    } while (lVar7 != 0);
  }
  auVar17._0_4_ = (float)iVar8;
  fVar14 = auVar19._0_4_ * auVar19._0_4_;
  fVar15 = auVar19._4_4_ * auVar19._4_4_;
  fVar16 = auVar19._8_4_ * auVar19._8_4_;
  auVar17._4_4_ = auVar17._0_4_;
  auVar17._8_4_ = auVar17._0_4_;
  auVar17._12_4_ = auVar17._0_4_;
  auVar17 = divps(_DAT_14c6daca0,auVar17);
  auVar10._4_4_ = fVar14;
  auVar10._0_4_ = fVar14;
  auVar10._8_4_ = fVar14;
  auVar10._12_4_ = fVar14;
  fVar22 = fVar15 + fVar14 + fVar16;
  if (fVar22 == 0.0) {
    auVar18 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar1._4_4_ = fVar15 + fVar14 + fVar16;
    auVar1._0_4_ = fVar22;
    auVar1._8_4_ = fVar15 + fVar14 + fVar16;
    auVar1._12_4_ = fVar15 + fVar14 + fVar16;
    auVar10 = sqrtps(auVar10,auVar1);
    auVar19 = divps(auVar19,auVar10);
    auVar18 = auVar19._0_12_;
  }
  auVar20._12_4_ =
       0.0 - (auVar17._4_4_ * fVar27 * auVar18._4_4_ + auVar17._0_4_ * fVar26 * auVar18._0_4_ +
             auVar17._8_4_ * fVar28 * auVar18._8_4_);
  auVar20._0_12_ = auVar18;
  *param_2 = auVar20;
  return;
}



// FUNCTION 144c52a70 FUN_144c52a70 body=106 status=ok
// SIG undefined FUN_144c52a70(void)

void FUN_144c52a70(longlong *param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar1 = (float *)(*param_1 + (longlong)param_2 * 0x10);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  pfVar1 = (float *)(*param_1 + ((longlong)param_2 + 1) * 0x10);
  fVar5 = *pfVar1 - fVar2;
  fVar6 = pfVar1[1] - fVar3;
  fVar7 = pfVar1[2] - fVar4;
  fVar8 = param_3[1] * fVar5 - fVar6 * *param_3;
  fVar6 = param_3[2] * fVar6 - fVar7 * param_3[1];
  fVar5 = *param_3 * fVar7 - fVar5 * param_3[2];
  *param_4 = fVar6;
  param_4[1] = fVar5;
  param_4[2] = fVar8;
  param_4[3] = 0.0 - (fVar3 * fVar5 + fVar2 * fVar6 + fVar4 * fVar8);
  return;
}



// FUNCTION 144c52ae0 FUN_144c52ae0 body=35 status=ok
// SIG undefined FUN_144c52ae0(void)

undefined8 FUN_144c52ae0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *param_3;
  FUN_144c55830(param_1,param_2,local_res8);
  return param_1;
}



// FUNCTION 144c52b10 FUN_144c52b10 body=86 status=ok
// SIG undefined FUN_144c52b10(void)

undefined8 FUN_144c52b10(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = *param_3;
  FUN_144c55940(param_1,*(undefined8 *)(param_2 + 0x20),local_res8,local_18);
  FUN_144bfa530(param_4,param_2 + 0x60,local_18);
  return param_1;
}



// FUNCTION 144c52b70 FUN_144c52b70 body=25 status=ok
// SIG undefined FUN_144c52b70(void)

void FUN_144c52b70(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *param_2;
  FUN_144c58020(param_1,local_res10);
  return;
}



// FUNCTION 144c52b90 FUN_144c52b90 body=137 status=ok
// SIG undefined FUN_144c52b90(void)

undefined1 FUN_144c52b90(float *param_1,float *param_2,float *param_3)

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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = *param_3 * *param_2;
  fVar6 = fVar1 * param_2[1];
  fVar8 = fVar2 * param_2[2];
  fVar11 = fVar6 + fVar4 + fVar8;
  if (fVar11 == 0.0) {
    return 0;
  }
  fVar5 = param_1[1] * param_2[1] + *param_1 * *param_2;
  fVar7 = *param_1 * *param_2 + param_1[1] * param_2[1];
  fVar9 = param_2[3] + param_1[2] * param_2[2];
  fVar10 = param_1[2] * param_2[2] + param_2[3];
  auVar12._0_4_ = 0.0 - (fVar9 + fVar5);
  auVar12._4_4_ = 0.0 - (fVar10 + fVar7);
  auVar12._8_4_ = 0.0 - (fVar5 + fVar9);
  auVar12._12_4_ = 0.0 - (fVar7 + fVar10);
  auVar13._4_4_ = fVar6 + fVar4 + fVar8;
  auVar13._0_4_ = fVar11;
  auVar13._8_4_ = fVar6 + fVar4 + fVar8;
  auVar13._12_4_ = fVar6 + fVar4 + fVar8;
  auVar13 = divps(auVar12,auVar13);
  *param_1 = auVar13._0_4_ * *param_3 + *param_1;
  param_1[1] = auVar13._4_4_ * fVar1 + param_1[1];
  param_1[2] = auVar13._8_4_ * fVar2 + param_1[2];
  param_1[3] = auVar13._12_4_ * fVar3 + param_1[3];
  return 1;
}



// FUNCTION 144c52c20 FUN_144c52c20 body=112 status=ok
// SIG undefined FUN_144c52c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c52c20(longlong param_1,int *param_2,float *param_3)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  sVar2 = *(short *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)*param_2 * 0xc);
  if (0 < sVar2) {
    piVar5 = (int *)(*(longlong *)(param_1 + 0x28) +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)*param_2 * 0xc) *
                    0x14);
    uVar4 = (ulonglong)(uint)(int)sVar2;
    do {
      iVar3 = *piVar5;
      piVar5 = piVar5 + 5;
      pfVar1 = (float *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 0x10);
      fVar7 = fVar7 + *pfVar1;
      fVar8 = fVar8 + pfVar1[1];
      fVar9 = fVar9 + pfVar1[2];
      fVar10 = fVar10 + pfVar1[3];
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  fVar11 = (float)(int)sVar2;
  auVar6._4_4_ = fVar11;
  auVar6._0_4_ = fVar11;
  auVar6._8_4_ = fVar11;
  auVar6._12_4_ = fVar11;
  auVar6 = divps(_DAT_14c6daca0,auVar6);
  *param_3 = auVar6._0_4_ * fVar7;
  param_3[1] = auVar6._4_4_ * fVar8;
  param_3[2] = auVar6._8_4_ * fVar9;
  param_3[3] = auVar6._12_4_ * fVar10;
  return;
}



// FUNCTION 144c52c90 FUN_144c52c90 body=69 status=ok
// SIG undefined FUN_144c52c90(void)

void FUN_144c52c90(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = *param_2;
  FUN_144c55bd0(*(undefined8 *)(param_1 + 0x20),local_res8,local_18);
  FUN_144bfa5a0(param_3,param_1 + 0x60,local_18);
  return;
}



// FUNCTION 144c52ce0 FUN_144c52ce0 body=59 status=ok
// SIG undefined FUN_144c52ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c52ce0(longlong param_1,int *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x38) +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 0x14) *
                    0x10);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  pfVar2 = (float *)(*(longlong *)(param_1 + 0x38) +
                    (longlong)
                    *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 0x14 + 4) * 0x10);
  fVar6 = (pfVar2[1] - fVar3) * fRam000000014c6dad94;
  fVar7 = (pfVar2[2] - fVar4) * fRam000000014c6dad98;
  fVar8 = (pfVar2[3] - fVar5) * fRam000000014c6dad9c;
  *param_3 = (*pfVar2 - *pfVar1) * _DAT_14c6dad90 + *pfVar1;
  param_3[1] = fVar6 + fVar3;
  param_3[2] = fVar7 + fVar4;
  param_3[3] = fVar8 + fVar5;
  return;
}



// FUNCTION 144c52d20 FUN_144c52d20 body=60 status=ok
// SIG undefined FUN_144c52d20(void)

void FUN_144c52d20(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_res8 [8];
  undefined1 local_18 [16];
  
  local_res8[0] = *param_2;
  FUN_144c576b0(*(undefined8 *)(param_1 + 0x20),local_res8,local_18);
  FUN_144bfa5a0(param_3,param_1 + 0x60,local_18);
  return;
}



// FUNCTION 144c52d60 FUN_144c52d60 body=49 status=ok
// SIG undefined FUN_144c52d60(void)

bool FUN_144c52d60(undefined4 param_1,undefined4 *param_2,undefined8 param_3,float *param_4)

{
  float extraout_XMM0_Da;
  undefined4 local_res10 [6];
  undefined1 local_18 [16];
  
  local_res10[0] = *param_2;
  FUN_144b3dde0(param_1,local_res10,param_3,local_18);
  return extraout_XMM0_Da < *param_4 * *param_4;
}



// FUNCTION 144c52da0 FUN_144c52da0 body=127 status=ok
// SIG undefined FUN_144c52da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c52da0(longlong param_1,int *param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar12._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
  auVar12._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
  auVar12._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)*param_2 * 0xc);
  uVar11 = (uint)*(short *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)*param_2 * 0xc);
  uVar10 = (ulonglong)uVar11;
  auVar13 = _DAT_14c6dae80;
  if (iVar1 < (int)(uVar11 + iVar1)) {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x14);
    do {
      iVar1 = *piVar9;
      piVar9 = piVar9 + 5;
      auVar13 = minps(auVar13,*(undefined1 (*) [16])
                               (*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x10));
      auVar12 = maxps(auVar12,*(undefined1 (*) [16])
                               (*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x10));
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  param_4[4] = auVar12._0_4_ + *param_3;
  param_4[5] = auVar12._4_4_ + fVar2;
  param_4[6] = auVar12._8_4_ + fVar3;
  param_4[7] = auVar12._12_4_ + fVar4;
  *param_4 = auVar13._0_4_ - fVar5;
  param_4[1] = auVar13._4_4_ - fVar6;
  param_4[2] = auVar13._8_4_ - fVar7;
  param_4[3] = auVar13._12_4_ - fVar8;
  return;
}



// FUNCTION 144c52e20 FUN_144c52e20 body=25 status=ok
// SIG undefined FUN_144c52e20(void)

void FUN_144c52e20(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *param_2;
  FUN_144c57770(param_1,local_res10);
  return;
}



// FUNCTION 144c52e40 FUN_144c52e40 body=59 status=ok
// SIG undefined FUN_144c52e40(void)

void FUN_144c52e40(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_144be90f0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  param_3[4] = param_3[4] + *param_2;
  param_3[5] = param_3[5] + fVar1;
  param_3[6] = param_3[6] + fVar2;
  param_3[7] = param_3[7] + fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_3 = *param_3 - *param_2;
  param_3[1] = param_3[1] - fVar1;
  param_3[2] = param_3[2] - fVar2;
  param_3[3] = param_3[3] - fVar3;
  return;
}



// FUNCTION 144c52e80 FUN_144c52e80 body=26 status=ok
// SIG undefined FUN_144c52e80(void)

void FUN_144c52e80(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_3;
  FUN_144c55d20(param_1,param_2,local_res18);
  return;
}



// FUNCTION 144c52ea0 FUN_144c52ea0 body=114 status=ok
// SIG undefined FUN_144c52ea0(void)

void FUN_144c52ea0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 local_res8 [2];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  FUN_144b3fa50(local_28,param_1 + 0x60,param_2);
  local_res8[0] = *param_3;
  FUN_144c56190(*(undefined8 *)(param_1 + 0x20),local_28,local_res8,local_18);
  FUN_144bfa5a0(param_4,param_1 + 0x60,local_18);
  return;
}



// FUNCTION 144c52f20 FUN_144c52f20 body=529 status=ok
// SIG undefined FUN_144c52f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_144c52f20(int *param_1,longlong param_2,float *param_3,int *param_4,float *param_5,
                   longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_res10 [4];
  int local_res20 [2];
  int local_78;
  int local_74 [3];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  fVar10 = _DAT_14c6dae80;
  local_78 = *param_4;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if ((*(int *)(lVar1 + 0x108) == 0) ||
     ((*(byte *)((longlong)local_78 + *(longlong *)(lVar1 + 0x100)) & 1) == 0)) {
    if ((param_6 == (longlong *)0x0) ||
       (local_res10[0] = local_78,
       iVar3 = (**(code **)(*param_6 + 0x20))(param_6,param_2,local_res10,param_7,param_8),
       iVar3 != 0)) {
      local_res10[0] = *param_4;
      FUN_144c55d20(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x68),param_3,local_res10,
                    param_5);
      *param_1 = *param_4;
    }
    else {
      *param_1 = -1;
    }
  }
  else {
    iVar2 = -1;
    iVar3 = -1;
    fVar6 = *param_5;
    fVar7 = param_5[1];
    fVar8 = param_5[2];
    fVar9 = param_5[3];
    FUN_144c42800(lVar1,local_res10,&local_78,local_74,local_res20);
    if (((char)local_res10[0] != '\0') && (iVar4 = local_74[0], local_74[0] < local_res20[0])) {
      do {
        iVar3 = iVar2;
        if ((param_6 == (longlong *)0x0) ||
           (local_res10[0] = iVar4,
           iVar2 = (**(code **)(*param_6 + 0x20))(param_6,param_2,local_res10,param_7,param_8),
           iVar2 != 0)) {
          local_res10[0] = iVar4;
          FUN_144c56190(*(undefined8 *)(param_2 + 0x20),param_3,local_res10,&local_68);
          fVar5 = (fStack_64 - param_3[1]) * (fStack_64 - param_3[1]) +
                  (local_68 - *param_3) * (local_68 - *param_3) +
                  (fStack_60 - param_3[2]) * (fStack_60 - param_3[2]);
          if (fVar5 < fVar10) {
            fVar6 = local_68;
            fVar7 = fStack_64;
            fVar8 = fStack_60;
            fVar9 = fStack_5c;
            fVar10 = fVar5;
            iVar3 = iVar4;
          }
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (iVar4 < local_res20[0]);
    }
    *param_1 = iVar3;
    *param_5 = fVar6;
    param_5[1] = fVar7;
    param_5[2] = fVar8;
    param_5[3] = fVar9;
  }
  return param_1;
}



// FUNCTION 144c53140 FUN_144c53140 body=58 status=ok
// SIG undefined FUN_144c53140(void)

undefined8
FUN_144c53140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *param_4;
  FUN_144c56740(param_1,param_2,local_res8,param_3,param_5,param_6);
  return param_1;
}



// FUNCTION 144c53180 FUN_144c53180 body=605 status=ok
// SIG undefined FUN_144c53180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_144c53180(int *param_1,longlong param_2,undefined8 param_3,int *param_4,undefined8 param_5
                   ,undefined4 *param_6,longlong *param_7,undefined8 param_8,undefined8 param_9)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  int local_res10 [2];
  int local_res20 [2];
  int local_78;
  int local_74 [3];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  
  fVar9 = fRam000000014c6dae8c;
  fVar8 = _DAT_14c6dae80;
  local_78 = *param_4;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if ((*(int *)(lVar1 + 0x108) != 0) &&
     ((*(byte *)((longlong)local_78 + *(longlong *)(lVar1 + 0x100)) & 1) != 0)) {
    iVar3 = -1;
    uVar5 = *param_6;
    uVar6 = param_6[1];
    uVar7 = param_6[2];
    FUN_144c42800(lVar1,local_res10,&local_78,local_74,local_res20);
    if (((char)local_res10[0] != '\0') && (iVar4 = local_74[0], local_74[0] < local_res20[0])) {
      do {
        if (((param_7 == (longlong *)0x0) ||
            (local_res10[0] = iVar4,
            iVar2 = (**(code **)(*param_7 + 0x20))(param_7,param_2,local_res10,param_8,param_9),
            iVar2 != 0)) &&
           (local_res10[0] = iVar4,
           FUN_144c56980(&local_78,*(undefined8 *)(param_2 + 0x20),local_res10,param_3,param_5,
                         &local_68), fStack_5c < fVar8)) {
          uVar5 = local_68;
          uVar6 = uStack_64;
          uVar7 = uStack_60;
          fVar8 = fStack_5c;
          fVar9 = fStack_5c;
          iVar3 = local_78;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res20[0]);
    }
    *param_6 = uVar5;
    param_6[1] = uVar6;
    param_6[2] = uVar7;
    param_6[3] = fVar9;
    *param_1 = iVar3;
    return param_1;
  }
  if ((param_7 != (longlong *)0x0) &&
     (local_res10[0] = local_78,
     iVar3 = (**(code **)(*param_7 + 0x20))(param_7,param_2,local_res10,param_8,param_9), iVar3 == 0
     )) {
    *param_1 = -1;
    return param_1;
  }
  local_res10[0] = *param_4;
  FUN_144c56740(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x68),local_res10,param_3,
                param_5,param_6);
  return param_1;
}



// FUNCTION 144c533e0 FUN_144c533e0 body=355 status=ok
// SIG undefined FUN_144c533e0(void)

char FUN_144c533e0(longlong param_1,int *param_2,longlong param_3,float *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  cVar6 = '\0';
  fVar7 = *(float *)(param_3 + 0x1c);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)*param_2 * 0xc);
  puVar2 = (undefined8 *)
           (*(longlong *)(param_1 + 0x38) +
           (longlong)
           *(int *)(*(longlong *)(param_1 + 0x28) +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)*param_2 * 0xc) *
                   0x14) * 0x10);
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  iVar5 = *piVar1 + 1;
  fVar8 = fVar7;
  fVar9 = fVar7;
  fVar10 = fVar7;
  if (iVar5 < *piVar1 + -1 + (int)(short)piVar1[2]) {
    do {
      piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0x14);
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)*piVar4 * 0x10);
      local_68 = *puVar2;
      uStack_60 = puVar2[1];
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)piVar4[1] * 0x10);
      local_78 = *puVar3;
      uStack_74 = puVar3[1];
      uStack_70 = puVar3[2];
      uStack_6c = puVar3[3];
      local_88 = fVar7;
      fStack_84 = fVar8;
      fStack_80 = fVar9;
      fStack_7c = fVar10;
      piVar4 = (int *)FUN_144ff16b0(local_38,param_3,&local_58,&local_68,&local_78,0,&local_88,
                                    local_48,0);
      if ((*piVar4 != 0) && (local_88 < fVar7)) {
        cVar6 = '\x01';
        fVar7 = local_88;
        fVar8 = fStack_84;
        fVar9 = fStack_80;
        fVar10 = fStack_7c;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (short)piVar1[2] + -1 + *piVar1);
    if (cVar6 != '\0') {
      *param_4 = fVar7;
      param_4[1] = fVar8;
      param_4[2] = fVar9;
      param_4[3] = fVar10;
    }
  }
  else {
    cVar6 = '\0';
  }
  return cVar6;
}



// FUNCTION 144c53550 FUN_144c53550 body=611 status=ok
// SIG undefined FUN_144c53550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144c53550(longlong param_1,int *param_2,longlong param_3,float *param_4,int *param_5,
                       longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_res8 [2];
  int local_res10 [2];
  int local_b8;
  int local_b4 [3];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  fVar15 = fRam000000014c6dacac;
  fVar14 = fRam000000014c6daca8;
  fVar13 = fRam000000014c6daca4;
  fVar12 = _DAT_14c6daca0;
  lVar4 = *(longlong *)(param_1 + 0x20);
  local_b8 = *param_2;
  if ((*(int *)(lVar4 + 0x108) == 0) ||
     ((*(byte *)((longlong)local_b8 + *(longlong *)(lVar4 + 0x100)) & 1) == 0)) {
    if ((param_6 == (longlong *)0x0) ||
       (local_res8[0] = local_b8,
       uVar7 = (**(code **)(*param_6 + 0x20))(param_6,param_1,local_res8,param_7,param_8),
       (int)uVar7 != 0)) {
      bVar11 = 0;
      *param_5 = *param_2;
      fVar12 = *(float *)(param_3 + 0x1c);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x68);
      piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + (longlong)*param_2 * 0xc);
      puVar2 = (undefined8 *)
               (*(longlong *)(lVar4 + 0x38) +
               (longlong)
               *(int *)(*(longlong *)(lVar4 + 0x28) +
                       (longlong)*(int *)(*(longlong *)(lVar4 + 0x18) + (longlong)*param_2 * 0xc) *
                       0x14) * 0x10);
      local_78 = *puVar2;
      uStack_70 = puVar2[1];
      iVar10 = *piVar1 + 1;
      fVar13 = fVar12;
      fVar14 = fVar12;
      fVar15 = fVar12;
      if (iVar10 < *piVar1 + -1 + (int)(short)piVar1[2]) {
        do {
          piVar8 = (int *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar10 * 0x14);
          puVar2 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + (longlong)*piVar8 * 0x10);
          local_88 = *puVar2;
          uStack_80 = puVar2[1];
          puVar3 = (undefined4 *)(*(longlong *)(lVar4 + 0x38) + (longlong)piVar8[1] * 0x10);
          local_98 = *puVar3;
          uStack_94 = puVar3[1];
          uStack_90 = puVar3[2];
          uStack_8c = puVar3[3];
          local_a8 = fVar12;
          fStack_a4 = fVar13;
          fStack_a0 = fVar14;
          fStack_9c = fVar15;
          piVar8 = (int *)FUN_144ff16b0(local_58,param_3,&local_78,&local_88,&local_98,0,&local_a8,
                                        local_68,0);
          if ((*piVar8 != 0) && (local_a8 < fVar12)) {
            bVar11 = 1;
            fVar12 = local_a8;
            fVar13 = fStack_a4;
            fVar14 = fStack_a0;
            fVar15 = fStack_9c;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (short)piVar1[2] + -1 + *piVar1);
        if (bVar11 != 0) {
          *param_4 = fVar12;
          param_4[1] = fVar13;
          param_4[2] = fVar14;
          param_4[3] = fVar15;
        }
      }
      uVar7 = (ulonglong)bVar11;
    }
  }
  else {
    bVar11 = 0;
    iVar6 = -1;
    iVar10 = -1;
    FUN_144c42800(lVar4,local_res8,&local_b8,local_b4,local_res10);
    if (((char)local_res8[0] != '\0') && (iVar9 = local_b4[0], local_b4[0] < local_res10[0])) {
      do {
        iVar10 = iVar6;
        if (((param_6 == (longlong *)0x0) ||
            (local_res8[0] = iVar9,
            iVar6 = (**(code **)(*param_6 + 0x20))(param_6,param_1,local_res8,param_7,param_8),
            iVar6 != 0)) &&
           ((local_res8[0] = iVar9,
            cVar5 = FUN_144c56d60(*(undefined8 *)(param_1 + 0x20),local_res8,param_3,&local_a8),
            cVar5 != '\0' && (local_a8 < fVar12)))) {
          bVar11 = 1;
          fVar12 = local_a8;
          fVar13 = fStack_a4;
          fVar14 = fStack_a0;
          fVar15 = fStack_9c;
          iVar10 = iVar9;
        }
        iVar9 = iVar9 + 1;
        iVar6 = iVar10;
      } while (iVar9 < local_res10[0]);
    }
    *param_4 = fVar12;
    param_4[1] = fVar13;
    param_4[2] = fVar14;
    param_4[3] = fVar15;
    uVar7 = (ulonglong)bVar11;
    *param_5 = iVar10;
  }
  return uVar7;
}



// FUNCTION 144c537c0 FUN_144c537c0 body=25 status=ok
// SIG undefined FUN_144c537c0(void)

void FUN_144c537c0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *param_2;
  FUN_144c56fe0(param_1,local_res10);
  return;
}



// FUNCTION 144c537e0 FUN_144c537e0 body=194 status=ok
// SIG undefined FUN_144c537e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c537e0(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 local_res8 [2];
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  
  FUN_144b3fa50(local_48,param_1 + 0x60);
  FUN_144bfa560(&local_38,param_1 + 0x60,param_3 + 0x10);
  local_res8[0] = *param_2;
  local_38 = (float)(~-(uint)(local_38 == 0.0) & (uint)local_38);
  fStack_34 = (float)(~-(uint)(fStack_34 == 0.0) & (uint)fStack_34);
  fStack_30 = (float)(~-(uint)(fStack_30 == 0.0) & (uint)fStack_30);
  fStack_2c = (float)(~-(uint)(*(float *)(param_3 + 0x1c) == 0.0) & (uint)*(float *)(param_3 + 0x1c)
                     );
  auVar2._4_4_ = fStack_34;
  auVar2._0_4_ = local_38;
  auVar2._8_4_ = fStack_30;
  auVar2._12_4_ = fStack_2c;
  auVar2 = divps(_DAT_14c6daca0,auVar2);
  local_28._0_4_ = ~-(uint)(local_38 == 0.0) & auVar2._0_4_;
  local_28._4_4_ = ~-(uint)(fStack_34 == 0.0) & auVar2._4_4_;
  local_28._8_4_ = ~-(uint)(fStack_30 == 0.0) & auVar2._8_4_;
  local_28._12_4_ = ~-(uint)(fStack_2c == 0.0) & auVar2._12_4_;
  auVar1._8_4_ = -(uint)(fStack_30 == 0.0) & 0x7f7fffee;
  auVar1._0_8_ = CONCAT44(-(uint)(fStack_34 == 0.0),-(uint)(local_38 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar1._12_4_ = -(uint)(fStack_2c == 0.0) & 0x7f7fffee;
  local_28 = local_28 | auVar1;
  FUN_144c571a0(*(undefined8 *)(param_1 + 0x20),local_res8,local_48,param_4);
  return;
}



// FUNCTION 144c538b0 FUN_144c538b0 body=559 status=ok
// SIG undefined FUN_144c538b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144c538b0(longlong param_1,int *param_2,undefined8 param_3,float *param_4,int *param_5
                       ,longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_res8 [2];
  int local_res10 [2];
  int local_78;
  int local_74 [3];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  fVar8 = _DAT_14c6dad90;
  fVar12 = fRam000000014c6dacac;
  fVar11 = fRam000000014c6daca8;
  fVar10 = fRam000000014c6daca4;
  fVar9 = _DAT_14c6daca0;
  local_78 = *param_2;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((*(int *)(lVar1 + 0x108) != 0) &&
     ((*(byte *)((longlong)local_78 + *(longlong *)(lVar1 + 0x100)) & 1) != 0)) {
    bVar7 = 0;
    iVar3 = -1;
    iVar6 = -1;
    FUN_144c42800(lVar1,local_res8,&local_78,local_74,local_res10);
    if (((char)local_res8[0] != '\0') && (iVar5 = local_74[0], local_74[0] < local_res10[0])) {
      do {
        iVar6 = iVar3;
        if ((param_6 == (longlong *)0x0) ||
           (local_res8[0] = iVar5,
           iVar3 = (**(code **)(*param_6 + 0x20))(param_6,param_1,local_res8,param_7,param_8),
           iVar3 != 0)) {
          local_res8[0] = iVar5;
          cVar2 = FUN_144c571a0(*(undefined8 *)(param_1 + 0x20),local_res8,param_3,&local_68);
          if ((cVar2 != '\0') && (ABS(local_68 - _DAT_14c6dad90) < fVar8)) {
            bVar7 = 1;
            fVar8 = ABS(local_68 - _DAT_14c6dad90);
            fVar9 = local_68;
            fVar10 = fStack_64;
            fVar11 = fStack_60;
            fVar12 = fStack_5c;
            iVar6 = iVar5;
          }
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar6;
      } while (iVar5 < local_res10[0]);
    }
    *param_4 = fVar9;
    param_4[1] = fVar10;
    param_4[2] = fVar11;
    param_4[3] = fVar12;
    *param_5 = iVar6;
    return (ulonglong)bVar7;
  }
  if ((param_6 != (longlong *)0x0) &&
     (local_res8[0] = local_78,
     uVar4 = (**(code **)(*param_6 + 0x20))(param_6,param_1,local_res8,param_7,param_8),
     (int)uVar4 == 0)) {
    return uVar4;
  }
  *param_5 = *param_2;
  local_res8[0] = *param_2;
  uVar4 = FUN_144c56fe0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x68),local_res8,param_3,
                        param_4);
  return uVar4;
}



// FUNCTION 144c53ae0 FUN_144c53ae0 body=335 status=ok
// SIG undefined FUN_144c53ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_144c53ae0(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [32];
  
  cVar7 = '\0';
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)*param_2 * 0xc);
  puVar2 = (undefined8 *)
           (*(longlong *)(param_1 + 0x38) +
           (longlong)
           *(int *)(*(longlong *)(param_1 + 0x28) +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)*param_2 * 0xc) *
                   0x14) * 0x10);
  local_48 = *puVar2;
  uStack_40 = puVar2[1];
  iVar6 = *piVar1 + 1;
  fVar8 = _DAT_14c6daca0;
  fVar9 = fRam000000014c6daca4;
  fVar10 = fRam000000014c6daca8;
  fVar11 = fRam000000014c6dacac;
  if (iVar6 < *piVar1 + -1 + (int)(short)piVar1[2]) {
    do {
      piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 0x14);
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)*piVar3 * 0x10);
      local_58 = *puVar2;
      uStack_50 = puVar2[1];
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)piVar3[1] * 0x10);
      local_68 = *puVar4;
      uStack_64 = puVar4[1];
      uStack_60 = puVar4[2];
      uStack_5c = puVar4[3];
      local_78 = fVar8;
      fStack_74 = fVar9;
      fStack_70 = fVar10;
      fStack_6c = fVar11;
      iVar5 = FUN_144ff1ba0(param_3,param_4,&local_48,&local_58,&local_68,&local_78,local_38);
      if ((iVar5 != 0) && (local_78 < fVar8)) {
        cVar7 = '\x01';
        fVar8 = local_78;
        fVar9 = fStack_74;
        fVar10 = fStack_70;
        fVar11 = fStack_6c;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (short)piVar1[2] + -1 + *piVar1);
    if (cVar7 != '\0') {
      *param_5 = fVar8;
      param_5[1] = fVar9;
      param_5[2] = fVar10;
      param_5[3] = fVar11;
    }
  }
  else {
    cVar7 = '\0';
  }
  return cVar7;
}



// FUNCTION 144c53c30 FUN_144c53c30 body=609 status=ok
// SIG undefined FUN_144c53c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144c53c30(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                       float *param_5,int *param_6,longlong *param_7,undefined8 param_8,
                       undefined8 param_9)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_res8 [2];
  int local_res10 [2];
  int local_a8;
  int local_a4 [3];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [32];
  
  fVar15 = fRam000000014c6dacac;
  fVar14 = fRam000000014c6daca8;
  fVar13 = fRam000000014c6daca4;
  fVar12 = _DAT_14c6daca0;
  local_a8 = *param_2;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if ((*(int *)(lVar5 + 0x108) == 0) ||
     ((*(byte *)((longlong)local_a8 + *(longlong *)(lVar5 + 0x100)) & 1) == 0)) {
    if ((param_7 == (longlong *)0x0) ||
       (local_res8[0] = local_a8,
       uVar8 = (**(code **)(*param_7 + 0x20))(param_7,param_1,local_res8,param_8,param_9),
       (int)uVar8 != 0)) {
      bVar11 = 0;
      *param_6 = *param_2;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x68);
      piVar1 = (int *)(*(longlong *)(lVar5 + 0x18) + (longlong)*param_2 * 0xc);
      puVar2 = (undefined8 *)
               (*(longlong *)(lVar5 + 0x38) +
               (longlong)
               *(int *)(*(longlong *)(lVar5 + 0x28) +
                       (longlong)*(int *)(*(longlong *)(lVar5 + 0x18) + (longlong)*param_2 * 0xc) *
                       0x14) * 0x10);
      local_68 = *puVar2;
      uStack_60 = puVar2[1];
      iVar10 = *piVar1 + 1;
      fVar12 = _DAT_14c6daca0;
      fVar13 = fRam000000014c6daca4;
      fVar14 = fRam000000014c6daca8;
      fVar15 = fRam000000014c6dacac;
      if (iVar10 < *piVar1 + -1 + (int)(short)piVar1[2]) {
        do {
          piVar3 = (int *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar10 * 0x14);
          puVar2 = (undefined8 *)(*(longlong *)(lVar5 + 0x38) + (longlong)*piVar3 * 0x10);
          local_78 = *puVar2;
          uStack_70 = puVar2[1];
          puVar4 = (undefined4 *)(*(longlong *)(lVar5 + 0x38) + (longlong)piVar3[1] * 0x10);
          local_88 = *puVar4;
          uStack_84 = puVar4[1];
          uStack_80 = puVar4[2];
          uStack_7c = puVar4[3];
          local_98 = fVar12;
          fStack_94 = fVar13;
          fStack_90 = fVar14;
          fStack_8c = fVar15;
          iVar7 = FUN_144ff1ba0(param_3,param_4,&local_68,&local_78,&local_88,&local_98,local_58);
          if ((iVar7 != 0) && (local_98 < fVar12)) {
            bVar11 = 1;
            fVar12 = local_98;
            fVar13 = fStack_94;
            fVar14 = fStack_90;
            fVar15 = fStack_8c;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (short)piVar1[2] + -1 + *piVar1);
        if (bVar11 != 0) {
          *param_5 = fVar12;
          param_5[1] = fVar13;
          param_5[2] = fVar14;
          param_5[3] = fVar15;
        }
      }
      uVar8 = (ulonglong)bVar11;
    }
  }
  else {
    bVar11 = 0;
    iVar7 = -1;
    iVar10 = -1;
    FUN_144c42800(lVar5,local_res8,&local_a8,local_a4,local_res10);
    if (((char)local_res8[0] != '\0') && (iVar9 = local_a4[0], local_a4[0] < local_res10[0])) {
      do {
        iVar10 = iVar7;
        if (((param_7 == (longlong *)0x0) ||
            (local_res8[0] = iVar9,
            iVar7 = (**(code **)(*param_7 + 0x20))(param_7,param_1,local_res8,param_8,param_9),
            iVar7 != 0)) &&
           ((local_res8[0] = iVar9,
            cVar6 = FUN_144c57460(*(undefined8 *)(param_1 + 0x20),local_res8,param_3,param_4,
                                  &local_98), cVar6 != '\0' && (local_98 < fVar12)))) {
          bVar11 = 1;
          fVar12 = local_98;
          fVar13 = fStack_94;
          fVar14 = fStack_90;
          fVar15 = fStack_8c;
          iVar10 = iVar9;
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar10;
      } while (iVar9 < local_res10[0]);
    }
    uVar8 = (ulonglong)bVar11;
    *param_5 = fVar12;
    param_5[1] = fVar13;
    param_5[2] = fVar14;
    param_5[3] = fVar15;
    *param_6 = iVar10;
  }
  return uVar8;
}



// FUNCTION 144c53ea0 thunk_FUN_144c3b070 body=5 status=ok
// SIG undefined thunk_FUN_144c3b070(void)

void thunk_FUN_144c3b070(longlong param_1)

{
  longlong lStack_18;
  longlong lStack_10;
  
  lStack_18 = *(longlong *)(param_1 + 0x48);
  lStack_10 = (longlong)*(int *)(param_1 + 0x50) * 0x10 + lStack_18;
  FUN_144fc0090(&lStack_18);
  return;
}



// FUNCTION 144c53eb0 FUN_144c53eb0 body=414 status=ok
// SIG undefined FUN_144c53eb0(void)

void FUN_144c53eb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  
  *(undefined4 *)(param_2 + 1) = 0;
  iVar6 = *(int *)(param_1 + 0xe8);
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar6) {
    FUN_141807aa8(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar6);
  }
  iVar1 = (int)param_2[1];
  if (iVar1 < iVar6) {
    *(int *)(param_2 + 1) = iVar6;
    if (0 < iVar6 - iVar1) {
      uVar3 = (ulonglong)(uint)(iVar6 - iVar1);
      puVar7 = (undefined4 *)(*param_2 + (longlong)iVar1 * 4);
      do {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0xffffffff;
        }
        uVar3 = uVar3 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (iVar6 < iVar1) {
    *(int *)(param_2 + 1) = iVar6;
  }
  iVar6 = *(int *)(param_1 + 0xd8);
  lVar10 = (longlong)iVar6;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar8 = 0;
  iVar2 = *(int *)(param_1 + 0x20);
  FUN_144be90e0(0x6deb4d92);
  lVar11 = 0;
  iVar9 = 0;
  if (0 < iVar6) {
    do {
      iVar6 = 0;
      if (*(int *)(*(longlong *)(param_1 + 0x168) + (longlong)(iVar9 + iVar2) * 4) != -3) {
        piVar12 = (int *)(*(longlong *)(param_1 + 0xd0) + lVar11);
        if ((iVar1 <= *piVar12) && (0 < (short)piVar12[2])) {
          lVar4 = (longlong)(*piVar12 - iVar1) * 4;
          iVar5 = iVar6;
          do {
            iVar5 = iVar5 + 1;
            *(int *)(lVar4 + *param_2) = iVar9;
            lVar4 = lVar4 + 4;
          } while (iVar5 < (short)piVar12[2]);
        }
        if ((iVar1 <= piVar12[1]) && (0 < *(short *)((longlong)piVar12 + 10))) {
          lVar4 = (longlong)(piVar12[1] - iVar1) * 4;
          do {
            iVar6 = iVar6 + 1;
            *(int *)(lVar4 + *param_2) = iVar9;
            lVar4 = lVar4 + 4;
          } while (iVar6 < *(short *)((longlong)piVar12 + 10));
        }
        uVar8 = uVar8 + 0x1f7510;
        if (uVar8 < 0x1f7510) {
          FUN_144be90e0(0xce2693db);
        }
      }
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 0xc;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144c54050 FUN_144c54050 body=352 status=ok
// SIG undefined FUN_144c54050(void)

void FUN_144c54050(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  iVar8 = *(int *)(param_1 + 0xe8);
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar8) {
    FUN_141807aa8(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar8);
  }
  iVar1 = (int)param_2[1];
  if (iVar1 < iVar8) {
    *(int *)(param_2 + 1) = iVar8;
    if (0 < iVar8 - iVar1) {
      uVar3 = (ulonglong)(uint)(iVar8 - iVar1);
      puVar5 = (undefined4 *)(*param_2 + (longlong)iVar1 * 4);
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xffffffff;
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (iVar8 < iVar1) {
    *(int *)(param_2 + 1) = iVar8;
  }
  uVar3 = uVar6;
  uVar9 = uVar6;
  if (0 < *(int *)(param_1 + 0xb8)) {
    do {
      piVar7 = (int *)(*(longlong *)(param_1 + 0xb0) + uVar9);
      iVar8 = (int)uVar3;
      if ((*(int *)(param_1 + 0x30) <= *piVar7) && (0 < (short)piVar7[2])) {
        lVar2 = (longlong)(*piVar7 - *(int *)(param_1 + 0x30)) * 4;
        uVar3 = uVar6;
        do {
          uVar4 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar4;
          *(int *)(lVar2 + *param_2) = iVar8;
          lVar2 = lVar2 + 4;
        } while ((int)uVar4 < (int)(short)piVar7[2]);
      }
      if ((*(int *)(param_1 + 0x30) <= piVar7[1]) && (0 < *(short *)((longlong)piVar7 + 10))) {
        lVar2 = (longlong)(piVar7[1] - *(int *)(param_1 + 0x30)) * 4;
        uVar3 = uVar6;
        do {
          uVar4 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar4;
          *(int *)(lVar2 + *param_2) = iVar8;
          lVar2 = lVar2 + 4;
        } while ((int)uVar4 < (int)*(short *)((longlong)piVar7 + 10));
      }
      uVar3 = (ulonglong)(iVar8 + 1U);
      uVar9 = uVar9 + 0xc;
    } while ((int)(iVar8 + 1U) < *(int *)(param_1 + 0xb8));
  }
  return;
}



// FUNCTION 144c541b0 FUN_144c541b0 body=169 status=ok
// SIG undefined FUN_144c541b0(void)

void FUN_144c541b0(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *param_3;
  lVar4 = (longlong)*param_2;
  if (*param_2 != iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar1 = lVar3 + (longlong)iVar2 * 0x14;
    *(undefined4 *)(lVar3 + lVar4 * 0x14) = *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x14);
    *(undefined4 *)(lVar3 + 4 + lVar4 * 0x14) = *(undefined4 *)(lVar1 + 4);
    *(undefined4 *)(lVar3 + 8 + lVar4 * 0x14) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)(lVar3 + 0xc + lVar4 * 0x14) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined1 *)(lVar3 + 0x10 + lVar4 * 0x14) = *(undefined1 *)(lVar1 + 0x10);
    *(undefined1 *)(lVar3 + 0x11 + lVar4 * 0x14) = *(undefined1 *)(lVar1 + 0x11);
    *(undefined2 *)(lVar3 + 0x12 + lVar4 * 0x14) = *(undefined2 *)(lVar1 + 0x12);
    iVar2 = *(int *)(param_1 + 0x7c);
    lVar1 = *(longlong *)(param_1 + 0x68);
    lVar4 = lVar1 + (longlong)(iVar2 * *param_2) * 4;
    FUN_144b3d470(lVar4,lVar1 + (longlong)(iVar2 * *param_3) * 4,
                  (longlong)
                  (int)((((longlong)(iVar2 * *param_2) + (longlong)iVar2) * 4 - lVar4) + lVar1 >> 2)
                  << 2);
    return;
  }
  return;
}



// FUNCTION 144c54260 FUN_144c54260 body=103 status=ok
// SIG undefined FUN_144c54260(void)

void FUN_144c54260(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c542d0 FUN_144c542d0 body=1285 status=ok
// SIG undefined FUN_144c542d0(void)

void FUN_144c542d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0;
  uVar1 = uVar2;
  uVar3 = uVar2;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      if (*(int *)(uVar3 + *(longlong *)(param_1 + 0xa0)) != -1) {
        FUN_144c57940(param_1,param_2,*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar1 * 0xc,
                      param_3);
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x90) +
         (longlong)*(int *)(uVar3 + *(longlong *)(param_1 + 0xa0)) * 4) = 0xffffffff;
      }
      uVar4 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar4;
      uVar3 = uVar3 + 4;
    } while ((int)uVar4 < *(int *)(param_1 + 0xa8));
  }
  FUN_144be90e0(0x9ca33514);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar1 = uVar2;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      iVar5 = (int)uVar1;
      if (*(int *)(*(longlong *)(param_1 + 0x168) + (longlong)(*(int *)(param_1 + 0x20) + iVar5) * 4
                  ) != -3) {
        FUN_144c57940(param_1,param_2,*(longlong *)(param_1 + 0xd0) + (longlong)iVar5 * 0xc,param_3)
        ;
        FUN_144be90e0(0x23896da3);
      }
      uVar1 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < *(int *)(param_1 + 0xd8));
  }
  uVar1 = uVar2;
  uVar3 = uVar2;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      uVar4 = (int)uVar1 + 1;
      *(undefined4 *)(uVar3 + *(longlong *)(param_1 + 0x70)) = 0xffffffff;
      uVar1 = (ulonglong)uVar4;
      uVar3 = uVar3 + 4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xbc)) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xb0),
               (ulonglong)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) * 0xc);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 200) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xcc)) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xc0),
               (ulonglong)(*(uint *)(param_1 + 0xcc) & 0x7fffffff) * 0x14);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xdc)) && (*(longlong *)(param_1 + 0xd0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xd0),
               (ulonglong)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) * 0xc);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xec)) && (*(longlong *)(param_1 + 0xe0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xe0),
               (ulonglong)(*(uint *)(param_1 + 0xec) & 0x7fffffff) * 0x14);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x80000000;
  FUN_144be90e0(0x7289a97e);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xfc)) && (*(longlong *)(param_1 + 0xf0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xf0),
               (ulonglong)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if ((-1 < *(int *)(param_1 + 0x11c)) && (*(longlong *)(param_1 + 0x110) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x110),*(int *)(param_1 + 0x11c) * 2);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 300)) && (*(longlong *)(param_1 + 0x120) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x120),
               (ulonglong)(*(uint *)(param_1 + 300) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x13c)) && (*(longlong *)(param_1 + 0x130) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x130),
               (ulonglong)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14c)) && (*(longlong *)(param_1 + 0x140) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x140),
               (ulonglong)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x158) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x15c)) && (*(longlong *)(param_1 + 0x150) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x150),
               (ulonglong)(*(uint *)(param_1 + 0x15c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0x80000000;
  iVar5 = *(int *)(param_1 + 0x20);
  if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar5) {
    FUN_144c44560(param_1 + 0x100,&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  if (*(int *)(param_1 + 0x108) < iVar5) {
    *(int *)(param_1 + 0x108) = iVar5;
  }
  else if (iVar5 < *(int *)(param_1 + 0x108)) {
    *(int *)(param_1 + 0x108) = iVar5;
  }
  uVar1 = uVar2;
  uVar3 = uVar2;
  if (0 < *(int *)(param_1 + 0x108)) {
    do {
      uVar4 = (int)uVar3 + 1;
      *(undefined1 *)(uVar1 + *(longlong *)(param_1 + 0x100)) = 0;
      uVar1 = uVar1 + 1;
      uVar3 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x108));
  }
  iVar5 = *(int *)(param_1 + 0x20);
  if ((int)(*(uint *)(param_1 + 0x174) & 0x7fffffff) < iVar5) {
    FUN_141807aa8((longlong *)(param_1 + 0x168),&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  if ((*(int *)(param_1 + 0x170) < iVar5) || (iVar5 < *(int *)(param_1 + 0x170))) {
    *(int *)(param_1 + 0x170) = iVar5;
  }
  uVar1 = uVar2;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      uVar4 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar4;
      *(undefined4 *)(uVar1 + *(longlong *)(param_1 + 0x168)) = 0xffffffff;
      uVar1 = uVar1 + 4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  FUN_144c52700(param_1 + 0x1c0);
  return;
}



// FUNCTION 144c547e0 FUN_144c547e0 body=212 status=ok
// SIG undefined FUN_144c547e0(void)

void FUN_144c547e0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) + param_2;
  if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < param_2) {
    FUN_144c44340(param_1 + 0xd0,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  if ((*(int *)(param_1 + 0xd8) < param_2) || (param_2 < *(int *)(param_1 + 0xd8))) {
    *(int *)(param_1 + 0xd8) = param_2;
  }
  if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar1) {
    FUN_144c44560(param_1 + 0x100,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(param_1 + 0x108) < iVar1) || (iVar1 < *(int *)(param_1 + 0x108))) {
    *(int *)(param_1 + 0x108) = iVar1;
  }
  param_2 = param_2 * *(int *)(param_1 + 0x50);
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < param_2) {
    FUN_141807aa8(param_1 + 0x140,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  if ((*(int *)(param_1 + 0x148) < param_2) || (param_2 < *(int *)(param_1 + 0x148))) {
    *(int *)(param_1 + 0x148) = param_2;
  }
  return;
}



// FUNCTION 144c548c0 FUN_144c548c0 body=1027 status=ok
// SIG undefined FUN_144c548c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c548c0(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  lVar10 = (longlong)*param_4;
  if (*param_4 != *param_3) {
    lVar7 = *(longlong *)(param_2 + 0xd0);
    iVar8 = *(int *)(param_2 + 0x20);
    puVar1 = (undefined4 *)(lVar7 + (longlong)*param_3 * 0xc);
    *puVar1 = *(undefined4 *)(lVar7 + lVar10 * 0xc);
    puVar1[1] = *(undefined4 *)(lVar7 + 4 + lVar10 * 0xc);
    *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(lVar7 + 8 + lVar10 * 0xc);
    *(undefined2 *)((longlong)puVar1 + 10) = *(undefined2 *)(lVar7 + 10 + lVar10 * 0xc);
    *(undefined1 *)((longlong)(*param_3 + iVar8) + *(longlong *)(param_2 + 0x100)) =
         *(undefined1 *)((longlong)(*param_4 + iVar8) + *(longlong *)(param_2 + 0x100));
    iVar9 = *(int *)(param_2 + 0x50);
    FUN_144b3d470(*(longlong *)(param_2 + 0x140) + (longlong)(iVar9 * *param_3) * 4,
                  *(longlong *)(param_2 + 0x140) + (longlong)(iVar9 * *param_4) * 4,
                  (longlong)iVar9 << 2);
    lVar10 = (longlong)*param_3;
    uVar13 = 0;
    uVar12 = iVar8 + *param_3;
    uVar11 = lVar10 * 3;
    piVar2 = (int *)(*(longlong *)(param_2 + 0xd0) + lVar10 * 0xc);
    uVar14 = uVar13;
    if (0 < *(short *)(*(longlong *)(param_2 + 0xd0) + 8 + lVar10 * 0xc)) {
      do {
        uVar5 = *(uint *)(param_2 + 0x30);
        uVar11 = (ulonglong)uVar5;
        iVar8 = *piVar2 + (int)uVar14;
        if (iVar8 < (int)uVar5) {
          lVar10 = (longlong)iVar8;
          if (*(int *)(param_2 + 0x78) != 0) {
            iVar8 = *(int *)(*(longlong *)(param_2 + 0x70) + lVar10 * 4);
          }
          if (iVar8 == -1) {
            lVar7 = *(longlong *)(param_2 + 0x28);
            lVar10 = lVar10 * 5;
          }
          else {
            lVar10 = (longlong)iVar8 * 5;
            lVar7 = *(longlong *)(param_2 + 0xc0);
          }
        }
        else {
          lVar10 = (longlong)(int)(iVar8 - uVar5) * 5;
          lVar7 = *(longlong *)(param_2 + 0xe0);
        }
        lVar3 = lVar7 + lVar10 * 4;
        uVar6 = *(uint *)(lVar7 + 8 + lVar10 * 4);
        if (uVar6 != 0xffffffff) {
          if ((*(byte *)(lVar3 + 0x10) & 0x40) == 0) {
            uVar6 = uVar6 & 0x3fffff;
            if ((int)uVar6 < (int)uVar5) {
              if (*(int *)(param_2 + 0x78) != 0) {
                uVar6 = *(uint *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar6 * 4);
              }
              uVar11 = uVar13;
              if (uVar6 != 0xffffffff) {
                lVar10 = *(longlong *)(param_2 + 0xc0);
                goto LAB_144c54b04;
              }
            }
            else {
              uVar6 = uVar6 - uVar5;
              lVar10 = *(longlong *)(param_2 + 0xe0);
LAB_144c54b04:
              uVar11 = lVar10 + (longlong)(int)uVar6 * 0x14;
            }
            *(uint *)(uVar11 + 0xc) = uVar12;
          }
          else {
            lVar10 = *(longlong *)
                      ((ulonglong)(uVar6 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38));
            if (lVar10 == 0) {
              lVar10 = 0;
            }
            else if (*(char *)(lVar10 + 0x30) == '\x01') {
              lVar10 = *(longlong *)(lVar10 + 0x20);
            }
            else {
              lVar10 = FUN_147e4bb26();
            }
            uVar5 = *(uint *)(lVar3 + 8) & 0x3fffff;
            if ((int)uVar5 < *(int *)(lVar10 + 0x30)) {
              if (*(int *)(lVar10 + 0x78) != 0) {
                uVar5 = *(uint *)(*(longlong *)(lVar10 + 0x70) + (ulonglong)uVar5 * 4);
              }
              if (uVar5 == 0xffffffff) {
                uVar11 = 0;
                _DAT_0000000c = _DAT_0000000c & 0xffc00000 | uVar12;
              }
              else {
                lVar7 = (longlong)(int)uVar5;
                lVar10 = *(longlong *)(lVar10 + 0xc0);
                puVar4 = (uint *)(lVar10 + 0xc + lVar7 * 0x14);
                *puVar4 = *puVar4 & 0xffc00000;
                puVar4 = (uint *)(lVar10 + 0xc + lVar7 * 0x14);
                *puVar4 = *puVar4 | uVar12;
                uVar11 = lVar10 + lVar7 * 0x14;
              }
            }
            else {
              lVar7 = (longlong)(int)(uVar5 - *(int *)(lVar10 + 0x30));
              lVar10 = *(longlong *)(lVar10 + 0xe0);
              puVar4 = (uint *)(lVar10 + 0xc + lVar7 * 0x14);
              *puVar4 = *puVar4 & 0xffc00000;
              puVar4 = (uint *)(lVar10 + 0xc + lVar7 * 0x14);
              *puVar4 = *puVar4 | uVar12;
              uVar11 = lVar10 + lVar7 * 0x14;
            }
          }
        }
        uVar5 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)(short)piVar2[2]);
    }
    uVar14 = uVar13;
    if (0 < *(short *)((longlong)piVar2 + 10)) {
      do {
        iVar8 = *(int *)(param_2 + 0x30);
        iVar9 = piVar2[1] + (int)uVar14;
        if (iVar9 < iVar8) {
          uVar11 = (ulonglong)iVar9;
          if (*(int *)(param_2 + 0x78) != 0) {
            iVar9 = *(int *)(*(longlong *)(param_2 + 0x70) + uVar11 * 4);
          }
          if (iVar9 == -1) {
            lVar10 = *(longlong *)(param_2 + 0x28);
            lVar7 = uVar11 * 5;
          }
          else {
            lVar7 = (longlong)iVar9 * 5;
            lVar10 = *(longlong *)(param_2 + 0xc0);
          }
        }
        else {
          lVar7 = (longlong)(iVar9 - iVar8) * 5;
          lVar10 = *(longlong *)(param_2 + 0xe0);
        }
        lVar3 = lVar10 + lVar7 * 4;
        uVar5 = *(uint *)(lVar10 + 8 + lVar7 * 4);
        if (uVar5 != 0xffffffff) {
          if ((*(byte *)(lVar3 + 0x10) & 0x40) == 0) {
            uVar5 = uVar5 & 0x3fffff;
            if ((int)uVar5 < iVar8) {
              if (*(int *)(param_2 + 0x78) != 0) {
                uVar5 = *(uint *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar5 * 4);
              }
              uVar11 = uVar13;
              if (uVar5 != 0xffffffff) {
                lVar10 = *(longlong *)(param_2 + 0xc0);
                goto LAB_144c54c89;
              }
            }
            else {
              uVar5 = uVar5 - iVar8;
              lVar10 = *(longlong *)(param_2 + 0xe0);
LAB_144c54c89:
              uVar11 = lVar10 + (longlong)(int)uVar5 * 0x14;
            }
            *(uint *)(uVar11 + 0xc) = uVar12;
          }
          else {
            lVar10 = *(longlong *)
                      ((ulonglong)(uVar5 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38));
            if (lVar10 == 0) {
              lVar10 = 0;
            }
            else if (*(char *)(lVar10 + 0x30) == '\x01') {
              lVar10 = *(longlong *)(lVar10 + 0x20);
            }
            else {
              lVar10 = FUN_147e4bb26((longlong *)(lVar10 + 0x20),uVar11);
            }
            uVar5 = *(uint *)(lVar3 + 8) & 0x3fffff;
            if ((int)uVar5 < *(int *)(lVar10 + 0x30)) {
              if (*(int *)(lVar10 + 0x78) != 0) {
                uVar5 = *(uint *)(*(longlong *)(lVar10 + 0x70) + (ulonglong)uVar5 * 4);
              }
              if (uVar5 == 0xffffffff) {
                _DAT_0000000c = _DAT_0000000c & 0xffc00000 | uVar12;
                uVar11 = uVar13;
              }
              else {
                lVar7 = (longlong)(int)uVar5;
                lVar10 = *(longlong *)(lVar10 + 0xc0);
                puVar4 = (uint *)(lVar10 + 0xc + lVar7 * 0x14);
                *puVar4 = *puVar4 & 0xffc00000;
                puVar4 = (uint *)(lVar10 + 0xc + lVar7 * 0x14);
                *puVar4 = *puVar4 | uVar12;
                uVar11 = lVar10 + lVar7 * 0x14;
              }
            }
            else {
              lVar7 = (longlong)(int)(uVar5 - *(int *)(lVar10 + 0x30));
              lVar10 = *(longlong *)(lVar10 + 0xe0);
              puVar4 = (uint *)(lVar10 + 0xc + lVar7 * 0x14);
              *puVar4 = *puVar4 & 0xffc00000;
              puVar4 = (uint *)(lVar10 + 0xc + lVar7 * 0x14);
              *puVar4 = *puVar4 | uVar12;
              uVar11 = lVar10 + lVar7 * 0x14;
            }
          }
        }
        uVar5 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)*(short *)((longlong)piVar2 + 10));
    }
  }
  return;
}



// FUNCTION 144c54cd0 FUN_144c54cd0 body=520 status=ok
// SIG undefined FUN_144c54cd0(void)

void FUN_144c54cd0(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar8 = *param_3;
  iVar5 = *param_4;
  if (iVar5 == iVar8) {
    return;
  }
  iVar6 = *(int *)(param_2 + 0x30);
  puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0xe0) + (longlong)iVar5 * 0x14);
  puVar2 = (undefined4 *)(*(longlong *)(param_2 + 0xe0) + (longlong)iVar8 * 0x14);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  puVar2[3] = puVar1[3];
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar1 + 4);
  *(undefined1 *)((longlong)puVar2 + 0x11) = *(undefined1 *)((longlong)puVar1 + 0x11);
  *(undefined2 *)((longlong)puVar2 + 0x12) = *(undefined2 *)((longlong)puVar1 + 0x12);
  *(undefined2 *)(*(longlong *)(param_2 + 0x110) + (longlong)iVar8 * 2) =
       *(undefined2 *)(*(longlong *)(param_2 + 0x110) + (longlong)iVar5 * 2);
  iVar7 = *(int *)(param_2 + 0x60);
  FUN_144b3d470(*(longlong *)(param_2 + 0x150) + (longlong)(iVar7 * iVar8) * 4,
                *(longlong *)(param_2 + 0x150) + (longlong)(iVar7 * iVar5) * 4,(longlong)iVar7 << 2)
  ;
  lVar11 = *(longlong *)(param_2 + 0xe0);
  iVar8 = *param_3;
  lVar3 = lVar11 + (longlong)iVar8 * 0x14;
  uVar10 = *(uint *)(lVar3 + 8);
  lVar4 = lVar11 + (longlong)*param_4 * 0x14;
  if (uVar10 == 0xffffffff) goto LAB_144c54eb6;
  if ((*(byte *)(lVar3 + 0x10) & 0x40) == 0) {
    uVar10 = uVar10 & 0x3fffff;
    if ((int)uVar10 < *(int *)(param_2 + 0x30)) {
      if (*(int *)(param_2 + 0x78) != 0) {
        uVar10 = *(uint *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar10 * 4);
      }
      if (uVar10 == 0xffffffff) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(param_2 + 0xc0) + (longlong)(int)uVar10 * 0x14;
      }
    }
    else {
      lVar11 = lVar11 + (longlong)(int)(uVar10 - *(int *)(param_2 + 0x30)) * 0x14;
    }
    *(int *)(lVar11 + 8) = iVar8 + iVar6;
  }
  else {
    lVar11 = 0;
    lVar9 = *(longlong *)((ulonglong)(uVar10 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38));
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else if (*(char *)(lVar9 + 0x30) == '\x01') {
      lVar9 = *(longlong *)(lVar9 + 0x20);
      iVar8 = *param_3;
    }
    else {
      lVar9 = FUN_147e4bb26();
      iVar8 = *param_3;
    }
    uVar10 = *(uint *)(lVar3 + 8) & 0x3fffff;
    if ((int)uVar10 < *(int *)(lVar9 + 0x30)) {
      if (*(int *)(lVar9 + 0x78) != 0) {
        uVar10 = *(uint *)(*(longlong *)(lVar9 + 0x70) + (ulonglong)uVar10 * 4);
      }
      if (uVar10 != 0xffffffff) {
        lVar11 = *(longlong *)(lVar9 + 0xc0);
        goto LAB_144c54e4b;
      }
    }
    else {
      uVar10 = uVar10 - *(int *)(lVar9 + 0x30);
      lVar11 = *(longlong *)(lVar9 + 0xe0);
LAB_144c54e4b:
      lVar11 = lVar11 + (longlong)(int)uVar10 * 0x14;
    }
    *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) & 0xffc00000;
    *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | iVar8 + iVar6;
  }
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xbf;
  *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
LAB_144c54eb6:
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) | 0x80;
  return;
}



// FUNCTION 144c54ee0 FUN_144c54ee0 body=37 status=ok
// SIG undefined FUN_144c54ee0(void)

void FUN_144c54ee0(undefined8 *param_1,undefined8 *param_2,float param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(float *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(float *)(param_1 + 3) = param_3 * 2.0;
  return;
}



// FUNCTION 144c54f10 FUN_144c54f10 body=120 status=ok
// SIG undefined FUN_144c54f10(void)

void FUN_144c54f10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0x20;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkaiNavMeshStaticTreeFaceIterator");
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144fca940(lVar1,param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144c54f90 FUN_144c54f90 body=174 status=ok
// SIG undefined FUN_144c54f90(void)

longlong * FUN_144c54f90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  lVar2 = 0;
  *param_1 = 0;
  if (*(longlong *)(param_2 + 0xd8) == 0) {
    local_res8 = 0x20;
    lVar1 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar1,"hkaiNavMeshStaticTreeFaceIterator");
    }
    if (lVar1 != 0) {
      lVar2 = FUN_144fca940(lVar1,param_2);
    }
    lVar1 = *param_1;
    *param_1 = lVar2;
  }
  else {
    FUN_144b3d910();
    lVar1 = *param_1;
    *param_1 = *(longlong *)(param_2 + 0xd8);
  }
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144c55040 FUN_144c55040 body=174 status=ok
// SIG undefined FUN_144c55040(void)

longlong * FUN_144c55040(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  lVar2 = 0;
  *param_1 = 0;
  if (*(longlong *)(param_2 + 0xd8) == 0) {
    local_res8 = 0x20;
    lVar1 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar1,"hkaiNavMeshTrivialFaceIterator");
    }
    if (lVar1 != 0) {
      lVar2 = FUN_144ff63f0(lVar1,param_2);
    }
    lVar1 = *param_1;
    *param_1 = lVar2;
  }
  else {
    FUN_144b3d910();
    lVar1 = *param_1;
    *param_1 = *(longlong *)(param_2 + 0xd8);
  }
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144c550f0 FUN_144c550f0 body=553 status=ok
// SIG undefined FUN_144c550f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144c550f0(float *param_1,float *param_2,float *param_3)

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
  float fVar10;
  float fVar11;
  undefined4 in_EAX;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
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
  undefined4 uVar25;
  undefined4 uVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  fVar40 = *param_2;
  fVar41 = param_2[1];
  fVar42 = param_2[2];
  fVar3 = param_2[3];
  fVar43 = *param_3;
  fVar44 = param_3[1];
  fVar45 = param_3[2];
  fVar46 = param_3[3];
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  fVar8 = param_1[4];
  fVar9 = param_1[5];
  fVar10 = param_1[6];
  fVar11 = param_1[7];
  auVar15._0_4_ = -(uint)(fVar4 <= fVar40 && fVar40 <= fVar8);
  auVar15._4_4_ = -(uint)(fVar5 <= fVar41 && fVar41 <= fVar9);
  auVar15._8_4_ = -(uint)(fVar6 <= fVar42 && fVar42 <= fVar10);
  auVar15._12_4_ = -(uint)(fVar7 <= fVar3 && fVar3 <= fVar11);
  uVar12 = movmskps(in_EAX,auVar15);
  auVar28._0_4_ = -(uint)(fVar4 <= fVar43 && fVar43 <= fVar8);
  auVar28._4_4_ = -(uint)(fVar5 <= fVar44 && fVar44 <= fVar9);
  auVar28._8_4_ = -(uint)(fVar6 <= fVar45 && fVar45 <= fVar10);
  auVar28._12_4_ = -(uint)(fVar7 <= fVar46 && fVar46 <= fVar11);
  uVar14 = movmskps((int)param_2,auVar28);
  if (((uVar12 & 7) == 7) && ((uVar14 & 7) == 7)) {
    return 1;
  }
  fVar49 = DAT_14c6daca0._12_4_;
  fVar34 = fVar40;
  fVar37 = fVar41;
  fVar38 = fVar42;
  fVar39 = fVar3;
  if ((uVar12 & 7) == 7) {
LAB_144c55230:
    if ((uVar14 & 7) != 7) {
      fVar40 = fVar40 - fVar43;
      fVar41 = fVar41 - fVar44;
      fVar42 = fVar42 - fVar45;
      auVar30._0_4_ = (float)(~-(uint)(fVar40 == 0.0) & (uint)fVar40);
      auVar30._4_4_ = (float)(~-(uint)(fVar41 == 0.0) & (uint)fVar41);
      auVar30._8_4_ = (float)(~-(uint)(fVar42 == 0.0) & (uint)fVar42);
      auVar30._12_4_ = (float)(~-(uint)(fVar49 == 0.0) & (uint)fVar49);
      auVar15 = divps(_DAT_14c6daca0,auVar30);
      fVar49 = (float)(~-(uint)(auVar30._0_4_ == 0.0) & auVar15._0_4_ |
                      -(uint)(auVar30._0_4_ == 0.0) & 0x7f7fffee);
      fVar50 = (float)(~-(uint)(auVar30._4_4_ == 0.0) & auVar15._4_4_ |
                      -(uint)(auVar30._4_4_ == 0.0) & 0x7f7fffee);
      fVar51 = (float)(~-(uint)(auVar30._8_4_ == 0.0) & auVar15._8_4_ |
                      -(uint)(auVar30._8_4_ == 0.0) & 0x7f7fffee);
      fVar52 = (float)(~-(uint)(auVar30._12_4_ == 0.0) & auVar15._12_4_ |
                      -(uint)(auVar30._12_4_ == 0.0) & 0x7f7fffee);
      auVar47._0_8_ = CONCAT44((fVar5 - fVar44) * fVar50,(fVar4 - fVar43) * fVar49);
      auVar47._8_4_ = (fVar6 - fVar45) * fVar51;
      auVar47._12_4_ = (fVar7 - fVar46) * fVar52;
      fVar49 = (fVar8 - fVar43) * fVar49;
      fVar50 = (fVar9 - fVar44) * fVar50;
      fVar51 = (fVar10 - fVar45) * fVar51;
      fVar52 = (fVar11 - fVar46) * fVar52;
      auVar31._8_4_ = auVar47._8_4_;
      auVar31._0_8_ = auVar47._0_8_;
      auVar31._12_4_ = auVar47._12_4_;
      auVar1._4_4_ = fVar50;
      auVar1._0_4_ = fVar49;
      auVar1._8_4_ = fVar51;
      auVar1._12_4_ = fVar52;
      auVar15 = minps(auVar31,auVar1);
      auVar2._4_4_ = fVar50;
      auVar2._0_4_ = fVar49;
      auVar2._8_4_ = fVar51;
      auVar2._12_4_ = fVar52;
      auVar28 = maxps(auVar47,auVar2);
      uVar25 = auVar15._0_4_;
      uVar33 = auVar15._4_4_;
      auVar32._8_4_ = auVar15._8_4_;
      auVar23._4_4_ = uVar33;
      auVar23._0_4_ = uVar33;
      auVar23._8_4_ = uVar33;
      auVar23._12_4_ = uVar33;
      auVar19._4_4_ = uVar25;
      auVar19._0_4_ = uVar25;
      auVar19._8_4_ = uVar25;
      auVar19._12_4_ = uVar25;
      auVar15 = maxps(auVar23,auVar19);
      uVar25 = auVar28._0_4_;
      uVar33 = auVar28._4_4_;
      auVar48._8_4_ = auVar28._8_4_;
      auVar32._4_4_ = auVar32._8_4_;
      auVar32._0_4_ = auVar32._8_4_;
      auVar32._12_4_ = auVar32._8_4_;
      auVar28 = maxps(auVar32,auVar15);
      auVar20._4_4_ = uVar25;
      auVar20._0_4_ = uVar25;
      auVar20._8_4_ = uVar25;
      auVar20._12_4_ = uVar25;
      auVar24._4_4_ = uVar33;
      auVar24._0_4_ = uVar33;
      auVar24._8_4_ = uVar33;
      auVar24._12_4_ = uVar33;
      auVar48._4_4_ = auVar48._8_4_;
      auVar48._0_4_ = auVar48._8_4_;
      auVar48._12_4_ = auVar48._8_4_;
      auVar15 = minps(auVar24,auVar20);
      auVar28 = maxps(auVar28,ZEXT816(0));
      auVar15 = minps(auVar48,auVar15);
      auVar15 = minps(auVar15,_DAT_14c6daca0);
      if (auVar15._0_4_ < auVar28._0_4_) goto LAB_144c552d8;
      fVar43 = fVar43 + auVar28._0_4_ * fVar40;
      fVar44 = fVar44 + auVar28._4_4_ * fVar41;
      fVar45 = fVar45 + auVar28._8_4_ * fVar42;
      fVar46 = fVar46 + auVar28._12_4_ * (fVar3 - fVar46);
    }
    *param_2 = fVar34;
    param_2[1] = fVar37;
    param_2[2] = fVar38;
    param_2[3] = fVar39;
    uVar13 = 1;
    *param_3 = fVar43;
    param_3[1] = fVar44;
    param_3[2] = fVar45;
    param_3[3] = fVar46;
  }
  else {
    fVar50 = fVar43 - fVar40;
    fVar51 = fVar44 - fVar41;
    fVar52 = fVar45 - fVar42;
    auVar26._0_4_ = (float)(~-(uint)(fVar50 == 0.0) & (uint)fVar50);
    auVar26._4_4_ = (float)(~-(uint)(fVar51 == 0.0) & (uint)fVar51);
    auVar26._8_4_ = (float)(~-(uint)(fVar52 == 0.0) & (uint)fVar52);
    auVar26._12_4_ = (float)(~-(uint)(fVar49 == 0.0) & (uint)fVar49);
    auVar15 = divps(_DAT_14c6daca0,auVar26);
    fVar34 = (float)(~-(uint)(auVar26._0_4_ == 0.0) & auVar15._0_4_ |
                    -(uint)(auVar26._0_4_ == 0.0) & 0x7f7fffee);
    fVar37 = (float)(~-(uint)(auVar26._4_4_ == 0.0) & auVar15._4_4_ |
                    -(uint)(auVar26._4_4_ == 0.0) & 0x7f7fffee);
    fVar38 = (float)(~-(uint)(auVar26._8_4_ == 0.0) & auVar15._8_4_ |
                    -(uint)(auVar26._8_4_ == 0.0) & 0x7f7fffee);
    fVar39 = (float)(~-(uint)(auVar26._12_4_ == 0.0) & auVar15._12_4_ |
                    -(uint)(auVar26._12_4_ == 0.0) & 0x7f7fffee);
    auVar27._0_8_ = CONCAT44((fVar5 - fVar41) * fVar37,(fVar4 - fVar40) * fVar34);
    auVar27._8_4_ = (fVar6 - fVar42) * fVar38;
    auVar27._12_4_ = (fVar7 - fVar3) * fVar39;
    auVar16._0_4_ = (fVar8 - fVar40) * fVar34;
    auVar16._4_4_ = (fVar9 - fVar41) * fVar37;
    auVar16._8_4_ = (fVar10 - fVar42) * fVar38;
    auVar16._12_4_ = (fVar11 - fVar3) * fVar39;
    auVar35._8_4_ = auVar27._8_4_;
    auVar35._0_8_ = auVar27._0_8_;
    auVar35._12_4_ = auVar27._12_4_;
    auVar15 = minps(auVar35,auVar16);
    auVar28 = maxps(auVar27,auVar16);
    uVar25 = auVar15._0_4_;
    uVar33 = auVar15._4_4_;
    auVar36._8_4_ = auVar15._8_4_;
    auVar21._4_4_ = uVar33;
    auVar21._0_4_ = uVar33;
    auVar21._8_4_ = uVar33;
    auVar21._12_4_ = uVar33;
    auVar17._4_4_ = uVar25;
    auVar17._0_4_ = uVar25;
    auVar17._8_4_ = uVar25;
    auVar17._12_4_ = uVar25;
    auVar15 = maxps(auVar21,auVar17);
    uVar25 = auVar28._0_4_;
    uVar33 = auVar28._4_4_;
    auVar29._8_4_ = auVar28._8_4_;
    auVar36._4_4_ = auVar36._8_4_;
    auVar36._0_4_ = auVar36._8_4_;
    auVar36._12_4_ = auVar36._8_4_;
    auVar28 = maxps(auVar36,auVar15);
    auVar18._4_4_ = uVar25;
    auVar18._0_4_ = uVar25;
    auVar18._8_4_ = uVar25;
    auVar18._12_4_ = uVar25;
    auVar22._4_4_ = uVar33;
    auVar22._0_4_ = uVar33;
    auVar22._8_4_ = uVar33;
    auVar22._12_4_ = uVar33;
    auVar29._4_4_ = auVar29._8_4_;
    auVar29._0_4_ = auVar29._8_4_;
    auVar29._12_4_ = auVar29._8_4_;
    auVar15 = minps(auVar22,auVar18);
    auVar28 = maxps(auVar28,ZEXT816(0));
    auVar15 = minps(auVar29,auVar15);
    auVar15 = minps(auVar15,_DAT_14c6daca0);
    if (auVar28._0_4_ <= auVar15._0_4_) {
      fVar34 = auVar28._0_4_ * fVar50 + fVar40;
      fVar37 = auVar28._4_4_ * fVar51 + fVar41;
      fVar38 = auVar28._8_4_ * fVar52 + fVar42;
      fVar39 = auVar28._12_4_ * (fVar46 - fVar3) + fVar3;
      goto LAB_144c55230;
    }
LAB_144c552d8:
    uVar13 = 0;
  }
  return uVar13;
}



// FUNCTION 144c55320 FUN_144c55320 body=122 status=ok
// SIG undefined FUN_144c55320(void)

undefined8 FUN_144c55320(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_2;
  iVar3 = 2;
  iVar4 = (int)(param_2[1] - lVar1 >> 4);
  if (2 < iVar4) {
    do {
      iVar2 = FUN_144ff20b0(param_1,lVar1,(longlong)(iVar3 + -1) * 0x10 + lVar1,
                            (longlong)iVar3 * 0x10 + lVar1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return 0;
}



// FUNCTION 144c553a0 FUN_144c553a0 body=505 status=ok
// SIG undefined FUN_144c553a0(void)

void FUN_144c553a0(longlong param_1,int *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  
  uVar1 = *(ushort *)(param_2 + 2);
  puVar4 = (undefined8 *)*param_3;
  iVar7 = *param_2;
  uVar11 = (int)(short)uVar1 & 0xfffffffe;
  puVar16 = puVar4;
  if (0 < (int)uVar11) {
    iVar2 = *(int *)(param_1 + 0x40);
    iVar3 = *(int *)(param_1 + 0x30);
    lVar13 = (longlong)iVar7 * 4;
    lVar14 = (longlong)iVar7 * 0x14;
    uVar17 = (ulonglong)((uVar11 - 1 >> 1) + 1);
    iVar15 = iVar7;
    do {
      if (iVar15 < iVar3) {
        iVar6 = iVar15;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar6 = *(int *)(lVar13 + *(longlong *)(param_1 + 0x70));
        }
        if (iVar6 != -1) {
          lVar8 = *(longlong *)(param_1 + 0xc0);
          goto LAB_144c55468;
        }
        piVar12 = (int *)(*(longlong *)(param_1 + 0x28) + lVar14);
      }
      else {
        iVar6 = iVar15 - iVar3;
        lVar8 = *(longlong *)(param_1 + 0xe0);
LAB_144c55468:
        piVar12 = (int *)(lVar8 + (longlong)iVar6 * 0x14);
      }
      iVar6 = *piVar12;
      if (iVar6 < iVar2) {
        puVar9 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar9 = (undefined8 *)((longlong)(iVar6 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      uVar5 = puVar9[1];
      iVar6 = piVar12[1];
      if (iVar6 < iVar2) {
        puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar10 = (undefined8 *)((longlong)(iVar6 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      *puVar16 = *puVar9;
      puVar16[1] = uVar5;
      iVar15 = iVar15 + 2;
      uVar5 = puVar10[1];
      lVar13 = lVar13 + 8;
      puVar16[2] = *puVar10;
      puVar16[3] = uVar5;
      lVar14 = lVar14 + 0x28;
      puVar16 = puVar16 + 4;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if ((uVar1 & 1) != 0) {
    iVar7 = iVar7 + -1 + (int)(short)uVar1;
    if (iVar7 < *(int *)(param_1 + 0x30)) {
      lVar13 = (longlong)iVar7;
      if (*(int *)(param_1 + 0x78) != 0) {
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar13 * 4);
      }
      if (iVar7 == -1) {
        lVar14 = *(longlong *)(param_1 + 0x28);
        lVar13 = lVar13 * 5;
      }
      else {
        lVar13 = (longlong)iVar7 * 5;
        lVar14 = *(longlong *)(param_1 + 0xc0);
      }
    }
    else {
      lVar13 = (longlong)(iVar7 - *(int *)(param_1 + 0x30)) * 5;
      lVar14 = *(longlong *)(param_1 + 0xe0);
    }
    iVar7 = *(int *)(lVar14 + lVar13 * 4);
    if (iVar7 < *(int *)(param_1 + 0x40)) {
      puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x38));
    }
    else {
      puVar9 = (undefined8 *)
               ((longlong)(iVar7 - *(int *)(param_1 + 0x40)) * 0x10 + *(longlong *)(param_1 + 0xf0))
      ;
    }
    uVar5 = puVar9[1];
    *puVar16 = *puVar9;
    puVar16[1] = uVar5;
  }
  lVar13 = param_3[1];
  uVar5 = puVar4[1];
  puVar4[(longlong)(int)lVar13 * 2 + -2] = *puVar4;
  (puVar4 + (longlong)(int)lVar13 * 2 + -2)[1] = uVar5;
  return;
}



// FUNCTION 144c555a0 FUN_144c555a0 body=652 status=ok
// SIG undefined FUN_144c555a0(void)

void FUN_144c555a0(longlong param_1,int *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
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
  undefined8 uVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  float *pfVar31;
  longlong lVar32;
  float *pfVar33;
  longlong lVar34;
  int *piVar35;
  int iVar36;
  uint uVar37;
  ulonglong uVar38;
  longlong lVar39;
  
  uVar1 = *(ushort *)(param_2 + 2);
  iVar29 = *param_2;
  pfVar33 = (float *)*param_3;
  uVar37 = (int)(short)uVar1 & 0xfffffffe;
  if (0 < (int)uVar37) {
    lVar32 = *(longlong *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 0x60);
    fVar6 = *(float *)(param_1 + 100);
    fVar7 = *(float *)(param_1 + 0x68);
    fVar8 = *(float *)(param_1 + 0x6c);
    fVar9 = *(float *)(param_1 + 0x70);
    fVar10 = *(float *)(param_1 + 0x74);
    fVar11 = *(float *)(param_1 + 0x78);
    fVar12 = *(float *)(param_1 + 0x7c);
    fVar13 = *(float *)(param_1 + 0x80);
    fVar14 = *(float *)(param_1 + 0x84);
    fVar15 = *(float *)(param_1 + 0x88);
    fVar16 = *(float *)(param_1 + 0x8c);
    iVar2 = *(int *)(lVar32 + 0x40);
    iVar3 = *(int *)(lVar32 + 0x30);
    lVar39 = (longlong)iVar29 * 4;
    lVar34 = (longlong)iVar29 * 0x14;
    uVar38 = (ulonglong)((uVar37 - 1 >> 1) + 1);
    fVar17 = *(float *)(param_1 + 0x90);
    fVar18 = *(float *)(param_1 + 0x94);
    fVar19 = *(float *)(param_1 + 0x98);
    fVar20 = *(float *)(param_1 + 0x9c);
    iVar36 = iVar29;
    do {
      if (iVar36 < iVar3) {
        iVar28 = iVar36;
        if (*(int *)(lVar32 + 0x78) != 0) {
          iVar28 = *(int *)(lVar39 + *(longlong *)(lVar32 + 0x70));
        }
        if (iVar28 != -1) {
          lVar30 = *(longlong *)(lVar32 + 0xc0);
          goto LAB_144c55678;
        }
        piVar35 = (int *)(*(longlong *)(lVar32 + 0x28) + lVar34);
      }
      else {
        iVar28 = iVar36 - iVar3;
        lVar30 = *(longlong *)(lVar32 + 0xe0);
LAB_144c55678:
        piVar35 = (int *)(lVar30 + (longlong)iVar28 * 0x14);
      }
      iVar28 = *piVar35;
      if (iVar28 < iVar2) {
        pfVar31 = (float *)((longlong)iVar28 * 0x10 + *(longlong *)(lVar32 + 0x38));
      }
      else {
        pfVar31 = (float *)((longlong)(iVar28 - iVar2) * 0x10 + *(longlong *)(lVar32 + 0xf0));
      }
      fVar21 = *pfVar31;
      fVar22 = pfVar31[1];
      fVar23 = pfVar31[2];
      iVar28 = piVar35[1];
      if (iVar28 < iVar2) {
        pfVar31 = (float *)((longlong)iVar28 * 0x10 + *(longlong *)(lVar32 + 0x38));
      }
      else {
        pfVar31 = (float *)((longlong)(iVar28 - iVar2) * 0x10 + *(longlong *)(lVar32 + 0xf0));
      }
      fVar24 = *pfVar31;
      fVar25 = pfVar31[1];
      fVar26 = pfVar31[2];
      iVar36 = iVar36 + 2;
      *pfVar33 = fVar21 * fVar5 + fVar22 * fVar9 + fVar23 * fVar13 + fVar17;
      pfVar33[1] = fVar21 * fVar6 + fVar22 * fVar10 + fVar23 * fVar14 + fVar18;
      pfVar33[2] = fVar21 * fVar7 + fVar22 * fVar11 + fVar23 * fVar15 + fVar19;
      pfVar33[3] = fVar21 * fVar8 + fVar22 * fVar12 + fVar23 * fVar16 + fVar20;
      lVar39 = lVar39 + 8;
      lVar34 = lVar34 + 0x28;
      pfVar33[4] = fVar25 * fVar9 + fVar24 * fVar5 + fVar26 * fVar13 + fVar17;
      pfVar33[5] = fVar25 * fVar10 + fVar24 * fVar6 + fVar26 * fVar14 + fVar18;
      pfVar33[6] = fVar25 * fVar11 + fVar24 * fVar7 + fVar26 * fVar15 + fVar19;
      pfVar33[7] = fVar25 * fVar12 + fVar24 * fVar8 + fVar26 * fVar16 + fVar20;
      pfVar33 = pfVar33 + 8;
      uVar38 = uVar38 - 1;
    } while (uVar38 != 0);
  }
  if ((uVar1 & 1) != 0) {
    lVar39 = *(longlong *)(param_1 + 0x20);
    iVar29 = (int)(short)uVar1 + iVar29 + -1;
    if (iVar29 < *(int *)(lVar39 + 0x30)) {
      lVar32 = (longlong)iVar29;
      if (*(int *)(lVar39 + 0x78) != 0) {
        iVar29 = *(int *)(*(longlong *)(lVar39 + 0x70) + lVar32 * 4);
      }
      if (iVar29 == -1) {
        lVar34 = *(longlong *)(lVar39 + 0x28);
        lVar32 = lVar32 * 5;
      }
      else {
        lVar32 = (longlong)iVar29 * 5;
        lVar34 = *(longlong *)(lVar39 + 0xc0);
      }
    }
    else {
      lVar32 = (longlong)(iVar29 - *(int *)(lVar39 + 0x30)) * 5;
      lVar34 = *(longlong *)(lVar39 + 0xe0);
    }
    iVar29 = *(int *)(lVar34 + lVar32 * 4);
    if (iVar29 < *(int *)(lVar39 + 0x40)) {
      pfVar31 = (float *)((longlong)iVar29 * 0x10 + *(longlong *)(lVar39 + 0x38));
    }
    else {
      pfVar31 = (float *)((longlong)(iVar29 - *(int *)(lVar39 + 0x40)) * 0x10 +
                         *(longlong *)(lVar39 + 0xf0));
    }
    fVar5 = *pfVar31;
    fVar6 = pfVar31[1];
    fVar7 = pfVar31[2];
    fVar8 = *(float *)(param_1 + 0x74);
    fVar9 = *(float *)(param_1 + 0x78);
    fVar10 = *(float *)(param_1 + 0x7c);
    fVar11 = *(float *)(param_1 + 100);
    fVar12 = *(float *)(param_1 + 0x68);
    fVar13 = *(float *)(param_1 + 0x6c);
    fVar14 = *(float *)(param_1 + 0x84);
    fVar15 = *(float *)(param_1 + 0x88);
    fVar16 = *(float *)(param_1 + 0x8c);
    fVar17 = *(float *)(param_1 + 0x94);
    fVar18 = *(float *)(param_1 + 0x98);
    fVar19 = *(float *)(param_1 + 0x9c);
    *pfVar33 = fVar6 * *(float *)(param_1 + 0x70) + fVar5 * *(float *)(param_1 + 0x60) +
               fVar7 * *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x90);
    pfVar33[1] = fVar6 * fVar8 + fVar5 * fVar11 + fVar7 * fVar14 + fVar17;
    pfVar33[2] = fVar6 * fVar9 + fVar5 * fVar12 + fVar7 * fVar15 + fVar18;
    pfVar33[3] = fVar6 * fVar10 + fVar5 * fVar13 + fVar7 * fVar16 + fVar19;
  }
  puVar4 = (undefined8 *)*param_3;
  lVar39 = param_3[1];
  uVar27 = puVar4[1];
  puVar4[(longlong)(int)lVar39 * 2 + -2] = *puVar4;
  (puVar4 + (longlong)(int)lVar39 * 2 + -2)[1] = uVar27;
  return;
}



// FUNCTION 144c55830 FUN_144c55830 body=262 status=ok
// SIG undefined FUN_144c55830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144c55830(float *param_1,longlong param_2,int *param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  float *pfVar2;
  short sVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  uVar8 = uRam000000014c6dae68;
  fVar28 = 0.0;
  fVar29 = 0.0;
  fVar30 = 0.0;
  fVar31 = 0.0;
  sVar3 = *(short *)(*(longlong *)(param_2 + 0x18) + 8 + (longlong)*param_3 * 0xc);
  piVar11 = (int *)(*(longlong *)(param_2 + 0x28) +
                   (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + (longlong)*param_3 * 0xc) *
                   0x14);
  lVar4 = *(longlong *)(param_2 + 0x38);
  lVar10 = (longlong)*piVar11;
  pfVar1 = (float *)(lVar4 + lVar10 * 0x10);
  if (0 < sVar3) {
    uVar12 = (ulonglong)(uint)(int)sVar3;
    do {
      pfVar2 = (float *)(lVar4 + (longlong)*piVar11 * 0x10);
      lVar10 = (longlong)piVar11[1];
      fVar24 = *pfVar2 - *pfVar1;
      fVar25 = pfVar2[1] - pfVar1[1];
      fVar26 = pfVar2[2] - pfVar1[2];
      fVar27 = pfVar2[3] - pfVar1[3];
      piVar11 = piVar11 + 5;
      pfVar2 = (float *)(lVar4 + lVar10 * 0x10);
      fVar17 = *pfVar2 - *pfVar1;
      fVar20 = pfVar2[1] - pfVar1[1];
      fVar21 = pfVar2[2] - pfVar1[2];
      fVar22 = pfVar2[3] - pfVar1[3];
      fVar28 = fVar28 + (fVar21 * fVar25 - fVar26 * fVar20);
      fVar29 = fVar29 + (fVar17 * fVar26 - fVar24 * fVar21);
      fVar30 = fVar30 + (fVar20 * fVar24 - fVar25 * fVar17);
      fVar31 = fVar31 + (fVar22 * fVar27 - fVar27 * fVar22);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  fVar17 = fVar28 * fVar28;
  fVar20 = fVar29 * fVar29;
  fVar21 = fVar30 * fVar30;
  auVar19._4_4_ = fVar17;
  auVar19._0_4_ = fVar17;
  auVar19._8_4_ = fVar17;
  auVar19._12_4_ = fVar17;
  fVar22 = fVar20 + fVar17 + fVar21;
  fVar24 = fVar20 + fVar17 + fVar21;
  fVar25 = fVar20 + fVar17 + fVar21;
  fVar21 = fVar20 + fVar17 + fVar21;
  uVar13 = -(uint)(0.0 - fVar22 < 0.0);
  uVar14 = -(uint)(0.0 - fVar24 < 0.0);
  uVar15 = -(uint)(0.0 - fVar25 < 0.0);
  uVar16 = -(uint)(0.0 - fVar21 < 0.0);
  if (!NAN(fVar22) && fVar22 == 0.0) {
    auVar19 = ZEXT816(0);
  }
  else {
    auVar6._4_4_ = fVar24;
    auVar6._0_4_ = fVar22;
    auVar6._8_4_ = fVar25;
    auVar6._12_4_ = fVar21;
    auVar19 = sqrtps(auVar19,auVar6);
    auVar19 = divps(_DAT_14c6daca0,auVar19);
  }
  auVar7._4_4_ = uVar14;
  auVar7._0_4_ = uVar13;
  auVar7._8_4_ = uVar15;
  auVar7._12_4_ = uVar16;
  iVar9 = movmskps((int)CONCAT71((int7)((ulonglong)(lVar10 * 2) >> 8),!NAN(fVar22)),auVar7);
  auVar18._0_4_ = ~uVar13 & (uint)fVar28;
  auVar18._4_4_ = ~uVar14 & (uint)fVar29;
  auVar18._8_4_ = ~uVar15 & (uint)fVar30;
  auVar18._12_4_ = ~uVar16 & (uint)fVar31;
  auVar23._0_4_ = (uint)(auVar19._0_4_ * fVar28) & uVar13;
  auVar23._4_4_ = (uint)(auVar19._4_4_ * fVar29) & uVar14;
  auVar23._8_4_ = (uint)(auVar19._8_4_ * fVar30) & uVar15;
  auVar23._12_4_ = (uint)(auVar19._12_4_ * fVar31) & uVar16;
  if (iVar9 == 0) {
    *(undefined8 *)*param_4 = _DAT_14c6dae60;
    *(undefined8 *)(*param_4 + 8) = uVar8;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return param_1;
  }
  auVar5._4_4_ = fVar24;
  auVar5._0_4_ = fVar22;
  auVar5._8_4_ = fVar25;
  auVar5._12_4_ = fVar21;
  auVar19 = sqrtps(auVar18,auVar5);
  *param_4 = auVar23 | auVar18;
  fVar28 = auVar19._4_4_ * fRam000000014c6dad94;
  fVar29 = auVar19._8_4_ * fRam000000014c6dad98;
  fVar30 = auVar19._12_4_ * fRam000000014c6dad9c;
  *param_1 = auVar19._0_4_ * _DAT_14c6dad90;
  param_1[1] = fVar28;
  param_1[2] = fVar29;
  param_1[3] = fVar30;
  return param_1;
}



// FUNCTION 144c55940 FUN_144c55940 body=645 status=ok
// SIG undefined FUN_144c55940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144c55940(float *param_1,longlong param_2,int *param_3,undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  uVar4 = uRam000000014c6dae68;
  iVar6 = *param_3;
  lVar7 = (longlong)iVar6;
  if (iVar6 < *(int *)(param_2 + 0x20)) {
    if (*(int *)(param_2 + 0x98) != 0) {
      iVar6 = *(int *)(*(longlong *)(param_2 + 0x90) + lVar7 * 4);
    }
    if (iVar6 == -1) {
      lVar13 = *(longlong *)(param_2 + 0x18);
    }
    else {
      lVar7 = (longlong)iVar6;
      lVar13 = *(longlong *)(param_2 + 0xb0);
    }
    piVar15 = (int *)(lVar13 + lVar7 * 0xc);
  }
  else {
    piVar15 = (int *)(*(longlong *)(param_2 + 0xd0) +
                     (longlong)(iVar6 - *(int *)(param_2 + 0x20)) * 0xc);
  }
  iVar11 = *piVar15;
  uVar17 = (ulonglong)iVar11;
  iVar6 = *(int *)(param_2 + 0x30);
  fVar33 = 0.0;
  fVar34 = 0.0;
  fVar35 = 0.0;
  fVar36 = 0.0;
  uVar14 = (ulonglong)(uint)(int)(short)piVar15[2];
  if (iVar11 < iVar6) {
    if (*(int *)(param_2 + 0x78) != 0) {
      iVar11 = *(int *)(*(longlong *)(param_2 + 0x70) + uVar17 * 4);
    }
    if (iVar11 == -1) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      lVar13 = uVar17 * 5;
    }
    else {
      lVar13 = (longlong)iVar11 * 5;
      lVar7 = *(longlong *)(param_2 + 0xc0);
    }
  }
  else {
    lVar13 = (longlong)(iVar11 - iVar6) * 5;
    lVar7 = *(longlong *)(param_2 + 0xe0);
  }
  iVar11 = *(int *)(param_2 + 0x40);
  iVar16 = *(int *)(lVar7 + lVar13 * 4);
  pfVar8 = (float *)(longlong)iVar16;
  if (iVar16 < iVar11) {
    pfVar12 = (float *)((longlong)pfVar8 * 0x10 + *(longlong *)(param_2 + 0x38));
  }
  else {
    pfVar8 = (float *)(ulonglong)(uint)(iVar16 - iVar11);
    pfVar12 = (float *)((longlong)(iVar16 - iVar11) * 0x10 + *(longlong *)(param_2 + 0xf0));
  }
  if (0 < (short)piVar15[2]) {
    lVar7 = uVar17 * 4;
    lVar13 = uVar17 * 0x14;
    do {
      iVar16 = (int)uVar17;
      if (iVar16 < iVar6) {
        iVar5 = iVar16;
        if (*(int *)(param_2 + 0x78) != 0) {
          iVar5 = *(int *)(lVar7 + *(longlong *)(param_2 + 0x70));
        }
        if (iVar5 != -1) {
          lVar9 = *(longlong *)(param_2 + 0xc0);
          goto LAB_144c55aa0;
        }
        piVar15 = (int *)(*(longlong *)(param_2 + 0x28) + lVar13);
      }
      else {
        iVar5 = iVar16 - iVar6;
        lVar9 = *(longlong *)(param_2 + 0xe0);
LAB_144c55aa0:
        piVar15 = (int *)(lVar9 + (longlong)iVar5 * 0x14);
      }
      iVar5 = *piVar15;
      if (iVar5 < iVar11) {
        pfVar10 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(param_2 + 0x38));
      }
      else {
        pfVar10 = (float *)((longlong)(iVar5 - iVar11) * 0x10 + *(longlong *)(param_2 + 0xf0));
      }
      iVar5 = piVar15[1];
      if (iVar5 < iVar11) {
        pfVar8 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(param_2 + 0x38));
      }
      else {
        pfVar8 = (float *)((longlong)(iVar5 - iVar11) * 0x10 + *(longlong *)(param_2 + 0xf0));
      }
      fVar29 = *pfVar10 - *pfVar12;
      fVar30 = pfVar10[1] - pfVar12[1];
      fVar31 = pfVar10[2] - pfVar12[2];
      fVar32 = pfVar10[3] - pfVar12[3];
      fVar24 = *pfVar8 - *pfVar12;
      fVar26 = pfVar8[1] - pfVar12[1];
      fVar27 = pfVar8[2] - pfVar12[2];
      fVar28 = pfVar8[3] - pfVar12[3];
      uVar17 = (ulonglong)(iVar16 + 1);
      lVar7 = lVar7 + 4;
      lVar13 = lVar13 + 0x14;
      fVar33 = fVar33 + (fVar27 * fVar30 - fVar31 * fVar26);
      fVar34 = fVar34 + (fVar24 * fVar31 - fVar29 * fVar27);
      fVar35 = fVar35 + (fVar26 * fVar29 - fVar30 * fVar24);
      fVar36 = fVar36 + (fVar28 * fVar32 - fVar32 * fVar28);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  fVar24 = fVar33 * fVar33;
  fVar26 = fVar34 * fVar34;
  fVar27 = fVar35 * fVar35;
  auVar23._4_4_ = fVar24;
  auVar23._0_4_ = fVar24;
  auVar23._8_4_ = fVar24;
  auVar23._12_4_ = fVar24;
  fVar28 = fVar26 + fVar24 + fVar27;
  fVar29 = fVar26 + fVar24 + fVar27;
  fVar30 = fVar26 + fVar24 + fVar27;
  fVar27 = fVar26 + fVar24 + fVar27;
  uVar18 = -(uint)(0.0 - fVar28 < 0.0);
  uVar19 = -(uint)(0.0 - fVar29 < 0.0);
  uVar20 = -(uint)(0.0 - fVar30 < 0.0);
  uVar21 = -(uint)(0.0 - fVar27 < 0.0);
  if (!NAN(fVar28) && fVar28 == 0.0) {
    auVar23 = ZEXT816(0);
  }
  else {
    auVar2._4_4_ = fVar29;
    auVar2._0_4_ = fVar28;
    auVar2._8_4_ = fVar30;
    auVar2._12_4_ = fVar27;
    auVar23 = sqrtps(auVar23,auVar2);
    auVar23 = divps(_DAT_14c6daca0,auVar23);
  }
  auVar3._4_4_ = uVar19;
  auVar3._0_4_ = uVar18;
  auVar3._8_4_ = uVar20;
  auVar3._12_4_ = uVar21;
  iVar6 = movmskps((int)CONCAT71((int7)((ulonglong)pfVar8 >> 8),!NAN(fVar28)),auVar3);
  auVar22._0_4_ = ~uVar18 & (uint)fVar33;
  auVar22._4_4_ = ~uVar19 & (uint)fVar34;
  auVar22._8_4_ = ~uVar20 & (uint)fVar35;
  auVar22._12_4_ = ~uVar21 & (uint)fVar36;
  auVar25._0_4_ = (uint)(auVar23._0_4_ * fVar33) & uVar18;
  auVar25._4_4_ = (uint)(auVar23._4_4_ * fVar34) & uVar19;
  auVar25._8_4_ = (uint)(auVar23._8_4_ * fVar35) & uVar20;
  auVar25._12_4_ = (uint)(auVar23._12_4_ * fVar36) & uVar21;
  if (iVar6 != 0) {
    auVar1._4_4_ = fVar29;
    auVar1._0_4_ = fVar28;
    auVar1._8_4_ = fVar30;
    auVar1._12_4_ = fVar27;
    auVar23 = sqrtps(auVar22,auVar1);
    *param_4 = auVar25 | auVar22;
    fVar33 = auVar23._4_4_ * fRam000000014c6dad94;
    fVar34 = auVar23._8_4_ * fRam000000014c6dad98;
    fVar35 = auVar23._12_4_ * fRam000000014c6dad9c;
    *param_1 = auVar23._0_4_ * _DAT_14c6dad90;
    param_1[1] = fVar33;
    param_1[2] = fVar34;
    param_1[3] = fVar35;
    return param_1;
  }
  *(undefined8 *)*param_4 = _DAT_14c6dae60;
  *(undefined8 *)(*param_4 + 8) = uVar4;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return param_1;
}



// FUNCTION 144c55bd0 FUN_144c55bd0 body=321 status=ok
// SIG undefined FUN_144c55bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c55bd0(longlong param_1,int *param_2,float *param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar7 = *param_2;
  lVar3 = (longlong)iVar7;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  if (iVar7 < *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar3 * 4);
    }
    if (iVar7 == -1) {
      lVar10 = *(longlong *)(param_1 + 0x18);
      lVar3 = lVar3 * 3;
    }
    else {
      lVar3 = (longlong)iVar7 * 3;
      lVar10 = *(longlong *)(param_1 + 0xb0);
    }
  }
  else {
    lVar3 = (longlong)(iVar7 - *(int *)(param_1 + 0x20)) * 3;
    lVar10 = *(longlong *)(param_1 + 0xd0);
  }
  sVar1 = *(short *)(lVar10 + 8 + lVar3 * 4);
  if (0 < sVar1) {
    uVar8 = (ulonglong)*(int *)(lVar10 + lVar3 * 4);
    lVar10 = uVar8 * 0x14;
    lVar3 = uVar8 * 4;
    uVar9 = (ulonglong)(uint)(int)sVar1;
    do {
      iVar7 = (int)uVar8;
      if (iVar7 < *(int *)(param_1 + 0x30)) {
        iVar2 = iVar7;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar2 = *(int *)(lVar3 + *(longlong *)(param_1 + 0x70));
        }
        if (iVar2 != -1) {
          lVar5 = *(longlong *)(param_1 + 0xc0);
          goto LAB_144c55cb0;
        }
        piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + lVar10);
      }
      else {
        iVar2 = iVar7 - *(int *)(param_1 + 0x30);
        lVar5 = *(longlong *)(param_1 + 0xe0);
LAB_144c55cb0:
        piVar4 = (int *)(lVar5 + (longlong)iVar2 * 0x14);
      }
      iVar2 = *piVar4;
      if (iVar2 < *(int *)(param_1 + 0x40)) {
        pfVar6 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pfVar6 = (float *)((longlong)(iVar2 - *(int *)(param_1 + 0x40)) * 0x10 +
                          *(longlong *)(param_1 + 0xf0));
      }
      fVar12 = fVar12 + *pfVar6;
      fVar13 = fVar13 + pfVar6[1];
      fVar14 = fVar14 + pfVar6[2];
      fVar15 = fVar15 + pfVar6[3];
      uVar8 = (ulonglong)(iVar7 + 1);
      lVar3 = lVar3 + 4;
      lVar10 = lVar10 + 0x14;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  fVar16 = (float)(int)sVar1;
  auVar11._4_4_ = fVar16;
  auVar11._0_4_ = fVar16;
  auVar11._8_4_ = fVar16;
  auVar11._12_4_ = fVar16;
  auVar11 = divps(_DAT_14c6daca0,auVar11);
  *param_3 = auVar11._0_4_ * fVar12;
  param_3[1] = auVar11._4_4_ * fVar13;
  param_3[2] = auVar11._8_4_ * fVar14;
  param_3[3] = auVar11._12_4_ * fVar15;
  return;
}



// FUNCTION 144c55d20 FUN_144c55d20 body=1131 status=ok
// SIG undefined FUN_144c55d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c55d20(longlong param_1,float *param_2,int *param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
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
  undefined1 local_118 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  local_118._8_8_ = uRam000000014c6dae88;
  local_118._0_8_ = _DAT_14c6dae80;
  iVar15 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)*param_3 * 0xc);
  iVar17 = iVar15 + 1;
  pfVar1 = (float *)(lVar2 + (longlong)
                             *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar15 * 0x14) *
                             0x10);
  fVar9 = *pfVar1;
  fVar10 = pfVar1[1];
  fVar11 = pfVar1[2];
  fVar12 = pfVar1[3];
  iVar15 = iVar15 + -1 +
           (int)*(short *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)*param_3 * 0xc);
  fVar51 = fVar5;
  fVar52 = fVar6;
  fVar53 = fVar7;
  fVar54 = fVar8;
  if (iVar17 < iVar15) {
    uVar16 = (ulonglong)(uint)(iVar15 - iVar17);
    fVar42 = fVar5 - fVar9;
    fVar43 = fVar6 - fVar10;
    fVar44 = fVar7 - fVar11;
    piVar14 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar17 * 0x14);
    do {
      pfVar1 = (float *)(lVar2 + (longlong)*piVar14 * 0x10);
      fVar29 = *pfVar1;
      fVar30 = pfVar1[1];
      fVar34 = pfVar1[2];
      fVar24 = pfVar1[3];
      fVar63 = fVar5 - fVar29;
      fVar64 = fVar6 - fVar30;
      fVar65 = fVar7 - fVar34;
      fVar55 = fVar29 - fVar9;
      fVar56 = fVar30 - fVar10;
      fVar57 = fVar34 - fVar11;
      fVar58 = fVar24 - fVar12;
      pfVar1 = (float *)(lVar2 + (longlong)piVar14[1] * 0x10);
      fVar59 = *pfVar1;
      fVar60 = pfVar1[1];
      fVar61 = pfVar1[2];
      fVar62 = pfVar1[3];
      fVar45 = fVar9 - fVar59;
      fVar48 = fVar10 - fVar60;
      fVar49 = fVar11 - fVar61;
      fVar50 = fVar12 - fVar62;
      fVar38 = fVar5 - fVar59;
      fVar39 = fVar6 - fVar60;
      fVar40 = fVar7 - fVar61;
      fVar41 = fVar8 - fVar62;
      fVar59 = fVar59 - fVar29;
      fVar60 = fVar60 - fVar30;
      fVar61 = fVar61 - fVar34;
      fVar62 = fVar62 - fVar24;
      fVar34 = fVar60 * fVar55 - fVar59 * fVar56;
      fVar35 = fVar61 * fVar56 - fVar60 * fVar57;
      fVar36 = fVar59 * fVar57 - fVar61 * fVar55;
      fVar37 = fVar62 * fVar58 - fVar62 * fVar58;
      fVar29 = (fVar38 * fVar49 - fVar45 * fVar40) * fVar36;
      fVar30 = (fVar41 * fVar50 - fVar50 * fVar41) * fVar37;
      auVar23._4_4_ =
           -(uint)(0.0 < (fVar63 * fVar61 - fVar59 * fVar65) * fVar36 +
                         (fVar65 * fVar60 - fVar61 * fVar64) * fVar35 +
                         (fVar64 * fVar59 - fVar60 * fVar63) * fVar34);
      auVar23._0_4_ =
           -(uint)(0.0 < (fVar57 * fVar42 - fVar44 * fVar55) * fVar36 +
                         (fVar56 * fVar44 - fVar43 * fVar57) * fVar35 +
                         (fVar55 * fVar43 - fVar42 * fVar56) * fVar34);
      auVar23._8_4_ =
           -(uint)(0.0 < fVar29 + (fVar40 * fVar48 - fVar49 * fVar39) * fVar35 +
                         (fVar39 * fVar45 - fVar48 * fVar38) * fVar34);
      auVar23._12_4_ = -(uint)(0.0 < fVar30 + fVar29 + fVar30);
      uVar13 = movmskps(piVar14[1] * 2,auVar23);
      if (((byte)uVar13 & 7) == 7) {
        fVar29 = fVar35 * fVar35;
        fVar30 = fVar36 * fVar36;
        fVar24 = fVar34 * fVar34;
        auVar26._0_4_ = fVar30 + fVar29 + fVar24;
        auVar26._4_4_ = fVar30 + fVar29 + fVar24;
        auVar26._8_4_ = fVar30 + fVar29 + fVar24;
        auVar26._12_4_ = fVar30 + fVar29 + fVar24;
        fVar29 = fVar35 * fVar42;
        fVar30 = fVar36 * fVar43;
        fVar24 = fVar34 * fVar44;
        auVar46._0_4_ = fVar30 + fVar29 + fVar24;
        auVar46._4_4_ = fVar30 + fVar29 + fVar24;
        auVar46._8_4_ = fVar30 + fVar29 + fVar24;
        auVar46._12_4_ = fVar30 + fVar29 + fVar24;
        if (auVar26._0_4_ == 0.0) {
          auVar47._0_12_ = ZEXT812(0);
          auVar47._12_4_ = 0;
          auVar33._0_4_ = auVar26._0_4_ * 0.0;
          auVar33._4_4_ = 0;
          auVar33._8_4_ = auVar26._8_4_ * 0.0;
          auVar33._12_4_ = auVar26._12_4_ * 0.0;
        }
        else {
          auVar47 = divps(auVar46,auVar26);
          auVar33._0_4_ = auVar47._0_4_ * auVar47._0_4_ * auVar26._0_4_;
          auVar33._4_4_ = 0;
          auVar33._8_4_ = auVar47._8_4_ * auVar47._8_4_ * auVar26._8_4_;
          auVar33._12_4_ = auVar47._12_4_ * auVar47._12_4_ * auVar26._12_4_;
        }
      }
      else {
        auVar31._0_4_ = fVar56 * fVar56 + fVar55 * fVar55 + fVar57 * fVar57;
        auVar31._4_4_ = fVar60 * fVar60 + fVar59 * fVar59 + fVar61 * fVar61;
        auVar31._8_4_ = fVar48 * fVar48 + fVar45 * fVar45 + fVar49 * fVar49;
        auVar31._12_4_ = fVar50 * fVar50 + fVar48 * fVar48 + fVar50 * fVar50;
        auVar22._0_4_ = fVar43 * fVar56 + fVar42 * fVar55 + fVar44 * fVar57;
        auVar22._4_4_ = fVar60 * fVar64 + fVar59 * fVar63 + fVar61 * fVar65;
        auVar22._8_4_ = fVar39 * fVar48 + fVar38 * fVar45 + fVar40 * fVar49;
        auVar22._12_4_ = fVar41 * fVar50 + fVar39 * fVar48 + fVar41 * fVar50;
        auVar23 = divps(auVar22,auVar31);
        auVar27._0_4_ = ~-(uint)(auVar31._0_4_ == 0.0) & auVar23._0_4_;
        auVar27._4_4_ = ~-(uint)(auVar31._4_4_ == 0.0) & auVar23._4_4_;
        auVar27._8_4_ = ~-(uint)(auVar31._8_4_ == 0.0) & auVar23._8_4_;
        auVar27._12_4_ = ~-(uint)(auVar31._12_4_ == 0.0) & auVar23._12_4_;
        auVar23 = minps(auVar27,_DAT_14c6daca0);
        auVar23 = maxps(ZEXT816(0),auVar23);
        fVar29 = auVar23._0_4_;
        fVar37 = auVar23._4_4_;
        fVar25 = auVar23._8_4_;
        fVar36 = fVar42 - fVar29 * fVar55;
        fVar55 = fVar43 - fVar29 * fVar56;
        fVar56 = fVar44 - fVar29 * fVar57;
        fVar38 = fVar38 - fVar25 * fVar45;
        fVar39 = fVar39 - fVar25 * fVar48;
        fVar40 = fVar40 - fVar25 * fVar49;
        fVar30 = fVar36 * fVar36;
        fVar34 = fVar55 * fVar55;
        fVar35 = fVar56 * fVar56;
        fVar63 = fVar63 - fVar37 * fVar59;
        fVar64 = fVar64 - fVar37 * fVar60;
        fVar65 = fVar65 - fVar37 * fVar61;
        auVar32._0_4_ = fVar34 + fVar30 + fVar35;
        auVar32._4_4_ = fVar34 + fVar30 + fVar35;
        auVar32._8_4_ = fVar34 + fVar30 + fVar35;
        auVar32._12_4_ = fVar34 + fVar30 + fVar35;
        fVar30 = fVar63 * fVar63;
        fVar34 = fVar64 * fVar64;
        fVar59 = fVar65 * fVar65;
        auVar28._0_4_ = fVar34 + fVar30 + fVar59;
        auVar28._4_4_ = fVar34 + fVar30 + fVar59;
        auVar28._8_4_ = fVar34 + fVar30 + fVar59;
        auVar28._12_4_ = fVar34 + fVar30 + fVar59;
        fVar30 = fVar38 * fVar38;
        fVar34 = fVar39 * fVar39;
        fVar59 = fVar40 * fVar40;
        auVar23 = minps(auVar32,auVar28);
        fVar60 = fVar34 + fVar30 + fVar59;
        fVar61 = fVar34 + fVar30 + fVar59;
        fVar45 = fVar34 + fVar30 + fVar59;
        fVar59 = fVar34 + fVar30 + fVar59;
        uVar18 = -(uint)(auVar23._0_4_ < fVar60);
        uVar19 = -(uint)(auVar23._4_4_ < fVar61);
        uVar20 = -(uint)(auVar23._8_4_ < fVar45);
        uVar21 = -(uint)(auVar23._12_4_ < fVar59);
        fVar35 = (float)((~-(uint)(auVar32._0_4_ < auVar28._0_4_) & (uint)fVar63 |
                         (uint)fVar36 & -(uint)(auVar32._0_4_ < auVar28._0_4_)) & uVar18 |
                        ~uVar18 & (uint)fVar38);
        fVar36 = (float)((~-(uint)(auVar32._4_4_ < auVar28._4_4_) & (uint)fVar64 |
                         (uint)fVar55 & -(uint)(auVar32._4_4_ < auVar28._4_4_)) & uVar19 |
                        ~uVar19 & (uint)fVar39);
        fVar34 = (float)((~-(uint)(auVar32._8_4_ < auVar28._8_4_) & (uint)fVar65 |
                         (uint)fVar56 & -(uint)(auVar32._8_4_ < auVar28._8_4_)) & uVar20 |
                        ~uVar20 & (uint)fVar40);
        fVar37 = (float)((~-(uint)(auVar32._12_4_ < auVar28._12_4_) &
                          (uint)((fVar8 - fVar24) - fVar37 * fVar62) |
                         (uint)((fVar8 - fVar12) - fVar29 * fVar58) &
                         -(uint)(auVar32._12_4_ < auVar28._12_4_)) & uVar21 |
                        ~uVar21 & (uint)(fVar41 - fVar25 * fVar50));
        auVar3._4_4_ = fVar61;
        auVar3._0_4_ = fVar60;
        auVar3._8_4_ = fVar45;
        auVar3._12_4_ = fVar59;
        auVar33 = minps(auVar23,auVar3);
        auVar47 = _DAT_14c6daca0;
      }
      bVar4 = auVar33._0_4_ < (float)local_118._0_4_;
      if (bVar4) {
        fVar51 = fVar5 - auVar47._0_4_ * fVar35;
        fVar52 = fVar6 - auVar47._4_4_ * fVar36;
        fVar53 = fVar7 - auVar47._8_4_ * fVar34;
        fVar54 = fVar8 - auVar47._12_4_ * fVar37;
        local_118 = auVar33;
      }
      piVar14 = piVar14 + 5;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  *param_4 = fVar51;
  param_4[1] = fVar52;
  param_4[2] = fVar53;
  param_4[3] = fVar54;
  return;
}



// FUNCTION 144c56190 FUN_144c56190 body=1445 status=ok
// SIG undefined FUN_144c56190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c56190(longlong param_1,float *param_2,int *param_3,float *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  int *piVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
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
  undefined1 local_118 [16];
  
  iVar20 = *param_3;
  lVar15 = (longlong)iVar20;
  if (iVar20 < *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar20 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar15 * 4);
    }
    if (iVar20 == -1) {
      lVar22 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar15 = (longlong)iVar20;
      lVar22 = *(longlong *)(param_1 + 0xb0);
    }
    piVar21 = (int *)(lVar22 + lVar15 * 0xc);
  }
  else {
    piVar21 = (int *)(*(longlong *)(param_1 + 0xd0) +
                     (longlong)(iVar20 - *(int *)(param_1 + 0x20)) * 0xc);
  }
  iVar20 = *piVar21;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar20 < iVar1) {
    iVar17 = iVar20;
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar17 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar20 * 4);
    }
    if (iVar17 == -1) {
      lVar15 = *(longlong *)(param_1 + 0x28);
      lVar22 = (longlong)iVar20 * 5;
    }
    else {
      lVar22 = (longlong)iVar17 * 5;
      lVar15 = *(longlong *)(param_1 + 0xc0);
    }
  }
  else {
    lVar22 = (longlong)(iVar20 - iVar1) * 5;
    lVar15 = *(longlong *)(param_1 + 0xe0);
  }
  iVar17 = *(int *)(param_1 + 0x40);
  iVar18 = *(int *)(lVar15 + lVar22 * 4);
  if (iVar18 < iVar17) {
    pfVar19 = (float *)((longlong)iVar18 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar19 = (float *)((longlong)(iVar18 - iVar17) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  fVar4 = *pfVar19;
  fVar5 = pfVar19[1];
  fVar6 = pfVar19[2];
  fVar7 = pfVar19[3];
  iVar18 = iVar20 + 1;
  fVar8 = *param_2;
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = param_2[3];
  iVar20 = (short)piVar21[2] + -1 + iVar20;
  local_118._8_8_ = uRam000000014c6dae88;
  local_118._0_8_ = _DAT_14c6dae80;
  fVar55 = fVar8;
  fVar56 = fVar9;
  fVar57 = fVar10;
  fVar58 = fVar11;
  if (iVar18 < iVar20) {
    fVar46 = fVar8 - fVar4;
    fVar47 = fVar9 - fVar5;
    fVar48 = fVar10 - fVar6;
    lVar15 = (longlong)iVar18 * 4;
    lVar22 = (longlong)iVar18 * 0x14;
    do {
      if (iVar18 < iVar1) {
        iVar13 = iVar18;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar13 = *(int *)(lVar15 + *(longlong *)(param_1 + 0x70));
        }
        if (iVar13 != -1) {
          lVar16 = *(longlong *)(param_1 + 0xc0);
          goto LAB_144c56385;
        }
        piVar21 = (int *)(*(longlong *)(param_1 + 0x28) + lVar22);
      }
      else {
        iVar13 = iVar18 - iVar1;
        lVar16 = *(longlong *)(param_1 + 0xe0);
LAB_144c56385:
        piVar21 = (int *)(lVar16 + (longlong)iVar13 * 0x14);
      }
      iVar13 = *piVar21;
      if (iVar13 < iVar17) {
        pfVar19 = (float *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pfVar19 = (float *)((longlong)(iVar13 - iVar17) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      fVar67 = *pfVar19;
      fVar68 = pfVar19[1];
      fVar69 = pfVar19[2];
      fVar12 = pfVar19[3];
      iVar13 = piVar21[1];
      if (iVar13 < iVar17) {
        pfVar19 = (float *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pfVar19 = (float *)((longlong)(iVar13 - iVar17) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      fVar42 = *pfVar19;
      fVar43 = pfVar19[1];
      fVar44 = pfVar19[2];
      fVar45 = pfVar19[3];
      fVar49 = fVar4 - fVar42;
      fVar52 = fVar5 - fVar43;
      fVar53 = fVar6 - fVar44;
      fVar54 = fVar7 - fVar45;
      fVar63 = fVar42 - fVar67;
      fVar64 = fVar43 - fVar68;
      fVar65 = fVar44 - fVar69;
      fVar66 = fVar45 - fVar12;
      fVar59 = fVar67 - fVar4;
      fVar60 = fVar68 - fVar5;
      fVar61 = fVar69 - fVar6;
      fVar62 = fVar12 - fVar7;
      fVar42 = fVar8 - fVar42;
      fVar43 = fVar9 - fVar43;
      fVar44 = fVar10 - fVar44;
      fVar45 = fVar11 - fVar45;
      fVar67 = fVar8 - fVar67;
      fVar68 = fVar9 - fVar68;
      fVar69 = fVar10 - fVar69;
      fVar38 = fVar64 * fVar59 - fVar60 * fVar63;
      fVar39 = fVar65 * fVar60 - fVar61 * fVar64;
      fVar40 = fVar63 * fVar61 - fVar59 * fVar65;
      fVar41 = fVar66 * fVar62 - fVar62 * fVar66;
      fVar33 = (fVar42 * fVar53 - fVar49 * fVar44) * fVar40;
      fVar34 = (fVar45 * fVar54 - fVar54 * fVar45) * fVar41;
      auVar28._4_4_ =
           -(uint)(0.0 < (fVar67 * fVar65 - fVar63 * fVar69) * fVar40 +
                         (fVar69 * fVar64 - fVar65 * fVar68) * fVar39 +
                         (fVar68 * fVar63 - fVar64 * fVar67) * fVar38);
      auVar28._0_4_ =
           -(uint)(0.0 < (fVar46 * fVar61 - fVar59 * fVar48) * fVar40 +
                         (fVar48 * fVar60 - fVar61 * fVar47) * fVar39 +
                         (fVar47 * fVar59 - fVar60 * fVar46) * fVar38);
      auVar28._8_4_ =
           -(uint)(0.0 < fVar33 + (fVar44 * fVar52 - fVar53 * fVar43) * fVar39 +
                         (fVar43 * fVar49 - fVar52 * fVar42) * fVar38);
      auVar28._12_4_ = -(uint)(0.0 < fVar34 + fVar33 + fVar34);
      uVar14 = movmskps((int)pfVar19,auVar28);
      if (((byte)uVar14 & 7) == 7) {
        fVar67 = fVar39 * fVar39;
        fVar68 = fVar40 * fVar40;
        fVar69 = fVar38 * fVar38;
        auVar30._0_4_ = fVar68 + fVar67 + fVar69;
        auVar30._4_4_ = fVar68 + fVar67 + fVar69;
        auVar30._8_4_ = fVar68 + fVar67 + fVar69;
        auVar30._12_4_ = fVar68 + fVar67 + fVar69;
        fVar67 = fVar39 * fVar46;
        fVar68 = fVar40 * fVar47;
        fVar69 = fVar38 * fVar48;
        auVar50._0_4_ = fVar68 + fVar67 + fVar69;
        auVar50._4_4_ = fVar68 + fVar67 + fVar69;
        auVar50._8_4_ = fVar68 + fVar67 + fVar69;
        auVar50._12_4_ = fVar68 + fVar67 + fVar69;
        if (auVar30._0_4_ == 0.0) {
          auVar51._0_12_ = ZEXT812(0);
          auVar51._12_4_ = 0;
          auVar37._0_4_ = auVar30._0_4_ * 0.0;
          auVar37._4_4_ = 0;
          auVar37._8_4_ = auVar30._8_4_ * 0.0;
          auVar37._12_4_ = auVar30._12_4_ * 0.0;
        }
        else {
          auVar51 = divps(auVar50,auVar30);
          auVar37._0_4_ = auVar51._0_4_ * auVar51._0_4_ * auVar30._0_4_;
          auVar37._4_4_ = 0;
          auVar37._8_4_ = auVar51._8_4_ * auVar51._8_4_ * auVar30._8_4_;
          auVar37._12_4_ = auVar51._12_4_ * auVar51._12_4_ * auVar30._12_4_;
        }
      }
      else {
        auVar35._0_4_ = fVar60 * fVar60 + fVar59 * fVar59 + fVar61 * fVar61;
        auVar35._4_4_ = fVar64 * fVar64 + fVar63 * fVar63 + fVar65 * fVar65;
        auVar35._8_4_ = fVar52 * fVar52 + fVar49 * fVar49 + fVar53 * fVar53;
        auVar35._12_4_ = fVar54 * fVar54 + fVar52 * fVar52 + fVar54 * fVar54;
        auVar27._0_4_ = fVar60 * fVar47 + fVar59 * fVar46 + fVar61 * fVar48;
        auVar27._4_4_ = fVar68 * fVar64 + fVar67 * fVar63 + fVar69 * fVar65;
        auVar27._8_4_ = fVar43 * fVar52 + fVar42 * fVar49 + fVar44 * fVar53;
        auVar27._12_4_ = fVar45 * fVar54 + fVar43 * fVar52 + fVar45 * fVar54;
        auVar28 = divps(auVar27,auVar35);
        auVar31._0_4_ = ~-(uint)(auVar35._0_4_ == 0.0) & auVar28._0_4_;
        auVar31._4_4_ = ~-(uint)(auVar35._4_4_ == 0.0) & auVar28._4_4_;
        auVar31._8_4_ = ~-(uint)(auVar35._8_4_ == 0.0) & auVar28._8_4_;
        auVar31._12_4_ = ~-(uint)(auVar35._12_4_ == 0.0) & auVar28._12_4_;
        auVar28 = minps(auVar31,_DAT_14c6daca0);
        auVar28 = maxps(ZEXT816(0),auVar28);
        fVar33 = auVar28._0_4_;
        fVar41 = auVar28._4_4_;
        fVar29 = auVar28._8_4_;
        fVar40 = fVar46 - fVar33 * fVar59;
        fVar60 = fVar47 - fVar33 * fVar60;
        fVar61 = fVar48 - fVar33 * fVar61;
        fVar42 = fVar42 - fVar29 * fVar49;
        fVar43 = fVar43 - fVar29 * fVar52;
        fVar44 = fVar44 - fVar29 * fVar53;
        fVar34 = fVar40 * fVar40;
        fVar38 = fVar60 * fVar60;
        fVar39 = fVar61 * fVar61;
        fVar67 = fVar67 - fVar41 * fVar63;
        fVar68 = fVar68 - fVar41 * fVar64;
        fVar69 = fVar69 - fVar41 * fVar65;
        auVar36._0_4_ = fVar38 + fVar34 + fVar39;
        auVar36._4_4_ = fVar38 + fVar34 + fVar39;
        auVar36._8_4_ = fVar38 + fVar34 + fVar39;
        auVar36._12_4_ = fVar38 + fVar34 + fVar39;
        fVar34 = fVar67 * fVar67;
        fVar38 = fVar68 * fVar68;
        fVar39 = fVar69 * fVar69;
        auVar32._0_4_ = fVar38 + fVar34 + fVar39;
        auVar32._4_4_ = fVar38 + fVar34 + fVar39;
        auVar32._8_4_ = fVar38 + fVar34 + fVar39;
        auVar32._12_4_ = fVar38 + fVar34 + fVar39;
        fVar34 = fVar42 * fVar42;
        fVar38 = fVar43 * fVar43;
        fVar49 = fVar44 * fVar44;
        auVar28 = minps(auVar36,auVar32);
        fVar52 = fVar38 + fVar34 + fVar49;
        fVar53 = fVar38 + fVar34 + fVar49;
        fVar59 = fVar38 + fVar34 + fVar49;
        fVar49 = fVar38 + fVar34 + fVar49;
        uVar23 = -(uint)(auVar28._0_4_ < fVar52);
        uVar24 = -(uint)(auVar28._4_4_ < fVar53);
        uVar25 = -(uint)(auVar28._8_4_ < fVar59);
        uVar26 = -(uint)(auVar28._12_4_ < fVar49);
        fVar39 = (float)((~-(uint)(auVar36._0_4_ < auVar32._0_4_) & (uint)fVar67 |
                         -(uint)(auVar36._0_4_ < auVar32._0_4_) & (uint)fVar40) & uVar23 |
                        ~uVar23 & (uint)fVar42);
        fVar40 = (float)((~-(uint)(auVar36._4_4_ < auVar32._4_4_) & (uint)fVar68 |
                         -(uint)(auVar36._4_4_ < auVar32._4_4_) & (uint)fVar60) & uVar24 |
                        ~uVar24 & (uint)fVar43);
        fVar38 = (float)((~-(uint)(auVar36._8_4_ < auVar32._8_4_) & (uint)fVar69 |
                         -(uint)(auVar36._8_4_ < auVar32._8_4_) & (uint)fVar61) & uVar25 |
                        ~uVar25 & (uint)fVar44);
        fVar41 = (float)((~-(uint)(auVar36._12_4_ < auVar32._12_4_) &
                          (uint)((fVar11 - fVar12) - fVar41 * fVar66) |
                         -(uint)(auVar36._12_4_ < auVar32._12_4_) &
                         (uint)((fVar11 - fVar7) - fVar33 * fVar62)) & uVar26 |
                        ~uVar26 & (uint)(fVar45 - fVar29 * fVar54));
        auVar2._4_4_ = fVar53;
        auVar2._0_4_ = fVar52;
        auVar2._8_4_ = fVar59;
        auVar2._12_4_ = fVar49;
        auVar37 = minps(auVar28,auVar2);
        auVar51 = _DAT_14c6daca0;
      }
      bVar3 = auVar37._0_4_ < (float)local_118._0_4_;
      if (bVar3) {
        fVar55 = fVar8 - auVar51._0_4_ * fVar39;
        fVar56 = fVar9 - auVar51._4_4_ * fVar40;
        fVar57 = fVar10 - auVar51._8_4_ * fVar38;
        fVar58 = fVar11 - auVar51._12_4_ * fVar41;
        local_118 = auVar37;
      }
      iVar18 = iVar18 + 1;
      lVar15 = lVar15 + 4;
      lVar22 = lVar22 + 0x14;
    } while (iVar18 < iVar20);
  }
  *param_4 = fVar55;
  param_4[1] = fVar56;
  param_4[2] = fVar57;
  param_4[3] = fVar58;
  return;
}



// FUNCTION 144c56740 FUN_144c56740 body=569 status=ok
// SIG undefined FUN_144c56740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_144c56740(int *param_1,longlong param_2,int *param_3,float *param_4,float *param_5,
                   float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  int iVar12;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_58;
  float fStack_54;
  float fStack_50;
  
  fVar30 = fRam000000014c6dae8c;
  fVar29 = _DAT_14c6dae80;
  uVar11 = 0xffffffff;
  fVar16 = *param_4;
  fVar20 = param_4[1];
  fVar24 = param_4[2];
  fVar5 = *param_5;
  fVar6 = param_5[1];
  fVar7 = param_5[2];
  iVar12 = *param_3;
  fVar13 = fVar5 * fVar16;
  fVar17 = fVar6 * fVar20;
  fVar21 = fVar7 * fVar24;
  *param_1 = -1;
  iVar3 = *(int *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar12 * 0xc);
  uVar9 = (ulonglong)iVar3;
  iVar12 = *(short *)(*(longlong *)(param_2 + 0x18) + 8 + (longlong)iVar12 * 0xc) + iVar3;
  if (iVar3 < iVar12) {
    lVar4 = *(longlong *)(param_2 + 0x28);
    pbVar10 = (byte *)(lVar4 + uVar9 * 0x14 + 0x10);
    do {
      if ((*(int *)(pbVar10 + -8) == -1) || ((*pbVar10 & 0x20) != 0)) {
        pfVar1 = (float *)(*(longlong *)(param_2 + 0x38) +
                          (longlong)*(int *)(pbVar10 + -0x10) * 0x10);
        fVar14 = *pfVar1 * fVar5;
        fVar18 = pfVar1[1] * fVar6;
        fVar22 = pfVar1[2] * fVar7;
        pfVar2 = (float *)(*(longlong *)(param_2 + 0x38) + (longlong)*(int *)(pbVar10 + -0xc) * 0x10
                          );
        fVar15 = *pfVar2 * fVar5;
        fVar19 = pfVar2[1] * fVar6;
        fVar23 = pfVar2[2] * fVar7;
        fVar31 = *pfVar1 - (fVar18 + fVar14 + fVar22) * fVar5;
        fVar32 = pfVar1[1] - (fVar18 + fVar14 + fVar22) * fVar6;
        fVar33 = pfVar1[2] - (fVar18 + fVar14 + fVar22) * fVar7;
        fVar18 = fVar31 - (fVar16 - (fVar17 + fVar13 + fVar21) * fVar5);
        fVar22 = fVar32 - (fVar20 - (fVar17 + fVar13 + fVar21) * fVar6);
        fVar34 = fVar33 - (fVar24 - (fVar17 + fVar13 + fVar21) * fVar7);
        fVar31 = fVar31 - (*pfVar2 - (fVar19 + fVar15 + fVar23) * fVar5);
        fVar32 = fVar32 - (pfVar2[1] - (fVar19 + fVar15 + fVar23) * fVar6);
        fVar33 = fVar33 - (pfVar2[2] - (fVar19 + fVar15 + fVar23) * fVar7);
        fVar14 = fVar18 * fVar31;
        fVar15 = fVar22 * fVar32;
        fVar19 = fVar34 * fVar33;
        fVar23 = fVar31 * fVar31;
        fVar25 = fVar32 * fVar32;
        fVar26 = fVar33 * fVar33;
        auVar27._0_4_ = fVar15 + fVar14 + fVar19;
        auVar27._4_4_ = fVar15 + fVar14 + fVar19;
        auVar27._8_4_ = fVar15 + fVar14 + fVar19;
        auVar27._12_4_ = fVar15 + fVar14 + fVar19;
        auVar28._4_4_ = fVar25 + fVar23 + fVar26;
        auVar28._0_4_ = fVar25 + fVar23 + fVar26;
        auVar28._8_4_ = fVar25 + fVar23 + fVar26;
        auVar28._12_4_ = fVar25 + fVar23 + fVar26;
        auVar28 = divps(auVar27,auVar28);
        auVar28 = minps(auVar28,_DAT_1499314a0);
        auVar28 = maxps(auVar28,ZEXT816(0));
        fVar15 = auVar28._12_4_;
        fVar18 = fVar18 - fVar31 * auVar28._0_4_;
        fVar22 = fVar22 - fVar32 * auVar28._4_4_;
        fVar34 = fVar34 - fVar33 * auVar28._8_4_;
        fVar18 = fVar18 * fVar18;
        fVar22 = fVar22 * fVar22;
        fVar34 = fVar34 * fVar34;
        fVar14 = fVar22 + fVar18 + fVar34;
        if (fVar14 < fVar29) {
          uVar11 = uVar9 & 0xffffffff;
          local_58 = fVar15;
          fStack_54 = fVar15;
          fStack_50 = fVar15;
          fVar29 = fVar14;
          fVar30 = fVar22 + fVar18 + fVar34;
        }
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      pbVar10 = pbVar10 + 0x14;
    } while ((int)uVar8 < iVar12);
    fVar16 = 0.0;
    fVar20 = 0.0;
    fVar24 = 0.0;
    iVar12 = (int)uVar11;
    *param_1 = iVar12;
    if (iVar12 != -1) {
      pfVar1 = (float *)(*(longlong *)(param_2 + 0x38) +
                        (longlong)*(int *)(lVar4 + (longlong)iVar12 * 0x14) * 0x10);
      pfVar2 = (float *)(*(longlong *)(param_2 + 0x38) +
                        (longlong)*(int *)(lVar4 + 4 + (longlong)iVar12 * 0x14) * 0x10);
      fVar16 = (*pfVar2 - *pfVar1) * local_58 + *pfVar1;
      fVar20 = (pfVar2[1] - pfVar1[1]) * fStack_54 + pfVar1[1];
      fVar24 = (pfVar2[2] - pfVar1[2]) * fStack_50 + pfVar1[2];
    }
  }
  else {
    fVar16 = 0.0;
    fVar20 = 0.0;
    fVar24 = 0.0;
  }
  *param_6 = fVar16;
  param_6[1] = fVar20;
  param_6[2] = fVar24;
  param_6[3] = fVar30;
  return param_1;
}



// FUNCTION 144c56980 FUN_144c56980 body=990 status=ok
// SIG undefined FUN_144c56980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_144c56980(int *param_1,longlong param_2,int *param_3,float *param_4,float *param_5,
                   float *param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_58;
  float fStack_54;
  float fStack_50;
  
  fVar38 = fRam000000014c6dae8c;
  fVar37 = _DAT_14c6dae80;
  fVar20 = *param_4;
  fVar24 = param_4[1];
  fVar28 = param_4[2];
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  iVar13 = *param_3;
  lVar6 = (longlong)iVar13;
  fVar17 = fVar3 * fVar20;
  fVar21 = fVar4 * fVar24;
  fVar25 = fVar5 * fVar28;
  *param_1 = -1;
  if (iVar13 < *(int *)(param_2 + 0x20)) {
    if (*(int *)(param_2 + 0x98) != 0) {
      iVar13 = *(int *)(*(longlong *)(param_2 + 0x90) + lVar6 * 4);
    }
    if (iVar13 == -1) {
      lVar15 = *(longlong *)(param_2 + 0x18);
      lVar6 = lVar6 * 3;
    }
    else {
      lVar6 = (longlong)iVar13 * 3;
      lVar15 = *(longlong *)(param_2 + 0xb0);
    }
  }
  else {
    lVar6 = (longlong)(iVar13 - *(int *)(param_2 + 0x20)) * 3;
    lVar15 = *(longlong *)(param_2 + 0xd0);
  }
  iVar13 = *(int *)(lVar15 + lVar6 * 4);
  uVar14 = (ulonglong)iVar13;
  iVar12 = *(short *)(lVar15 + lVar6 * 4 + 8) + iVar13;
  if (iVar13 < iVar12) {
    iVar1 = *(int *)(param_2 + 0x30);
    lVar6 = uVar14 * 4;
    lVar15 = uVar14 * 0x14;
    lVar16 = (longlong)(iVar13 - iVar1) * 0x14;
    do {
      iVar13 = (int)uVar14;
      if (iVar13 < iVar1) {
        iVar9 = iVar13;
        if (*(int *)(param_2 + 0x78) != 0) {
          iVar9 = *(int *)(lVar6 + *(longlong *)(param_2 + 0x70));
        }
        if (iVar9 == -1) {
          lVar10 = *(longlong *)(param_2 + 0x28) + lVar15;
        }
        else {
          lVar10 = *(longlong *)(param_2 + 0xc0) + (longlong)iVar9 * 0x14;
        }
      }
      else {
        lVar10 = *(longlong *)(param_2 + 0xe0) + lVar16;
      }
      if ((*(int *)(lVar10 + 8) == -1) || ((*(byte *)(lVar10 + 0x10) & 0x20) != 0)) {
        if (iVar13 < iVar1) {
          iVar9 = iVar13;
          if (*(int *)(param_2 + 0x78) != 0) {
            iVar9 = *(int *)(lVar6 + *(longlong *)(param_2 + 0x70));
          }
          if (iVar9 == -1) {
            piVar11 = (int *)(*(longlong *)(param_2 + 0x28) + lVar15);
          }
          else {
            piVar11 = (int *)(*(longlong *)(param_2 + 0xc0) + (longlong)iVar9 * 0x14);
          }
        }
        else {
          piVar11 = (int *)(*(longlong *)(param_2 + 0xe0) + lVar16);
        }
        iVar9 = *piVar11;
        iVar2 = *(int *)(param_2 + 0x40);
        if (iVar9 < iVar2) {
          pfVar7 = (float *)((longlong)iVar9 * 0x10 + *(longlong *)(param_2 + 0x38));
        }
        else {
          pfVar7 = (float *)((longlong)(iVar9 - iVar2) * 0x10 + *(longlong *)(param_2 + 0xf0));
        }
        iVar9 = piVar11[1];
        if (iVar9 < iVar2) {
          pfVar8 = (float *)((longlong)iVar9 * 0x10 + *(longlong *)(param_2 + 0x38));
        }
        else {
          pfVar8 = (float *)((longlong)(iVar9 - iVar2) * 0x10 + *(longlong *)(param_2 + 0xf0));
        }
        fVar18 = fVar3 * *pfVar7;
        fVar22 = fVar4 * pfVar7[1];
        fVar26 = fVar5 * pfVar7[2];
        fVar19 = fVar3 * *pfVar8;
        fVar23 = fVar4 * pfVar8[1];
        fVar27 = fVar5 * pfVar8[2];
        fVar33 = *pfVar7 - (fVar22 + fVar18 + fVar26) * fVar3;
        fVar34 = pfVar7[1] - (fVar22 + fVar18 + fVar26) * fVar4;
        fVar35 = pfVar7[2] - (fVar22 + fVar18 + fVar26) * fVar5;
        fVar22 = fVar33 - (fVar20 - (fVar21 + fVar17 + fVar25) * fVar3);
        fVar26 = fVar34 - (fVar24 - (fVar21 + fVar17 + fVar25) * fVar4);
        fVar36 = fVar35 - (fVar28 - (fVar21 + fVar17 + fVar25) * fVar5);
        fVar33 = fVar33 - (*pfVar8 - (fVar23 + fVar19 + fVar27) * fVar3);
        fVar34 = fVar34 - (pfVar8[1] - (fVar23 + fVar19 + fVar27) * fVar4);
        fVar35 = fVar35 - (pfVar8[2] - (fVar23 + fVar19 + fVar27) * fVar5);
        fVar18 = fVar22 * fVar33;
        fVar19 = fVar26 * fVar34;
        fVar23 = fVar36 * fVar35;
        fVar27 = fVar33 * fVar33;
        fVar29 = fVar34 * fVar34;
        fVar30 = fVar35 * fVar35;
        auVar31._0_4_ = fVar19 + fVar18 + fVar23;
        auVar31._4_4_ = fVar19 + fVar18 + fVar23;
        auVar31._8_4_ = fVar19 + fVar18 + fVar23;
        auVar31._12_4_ = fVar19 + fVar18 + fVar23;
        auVar32._4_4_ = fVar29 + fVar27 + fVar30;
        auVar32._0_4_ = fVar29 + fVar27 + fVar30;
        auVar32._8_4_ = fVar29 + fVar27 + fVar30;
        auVar32._12_4_ = fVar29 + fVar27 + fVar30;
        auVar32 = divps(auVar31,auVar32);
        auVar32 = minps(auVar32,_DAT_1499314a0);
        auVar32 = maxps(auVar32,ZEXT816(0));
        fVar19 = auVar32._12_4_;
        fVar22 = fVar22 - auVar32._0_4_ * fVar33;
        fVar26 = fVar26 - auVar32._4_4_ * fVar34;
        fVar36 = fVar36 - auVar32._8_4_ * fVar35;
        fVar22 = fVar22 * fVar22;
        fVar26 = fVar26 * fVar26;
        fVar36 = fVar36 * fVar36;
        fVar18 = fVar26 + fVar22 + fVar36;
        if (fVar18 < fVar37) {
          *param_1 = iVar13;
          local_58 = fVar19;
          fStack_54 = fVar19;
          fStack_50 = fVar19;
          fVar37 = fVar18;
          fVar38 = fVar26 + fVar22 + fVar36;
        }
      }
      uVar14 = (ulonglong)(iVar13 + 1U);
      lVar16 = lVar16 + 0x14;
      lVar6 = lVar6 + 4;
      lVar15 = lVar15 + 0x14;
    } while ((int)(iVar13 + 1U) < iVar12);
  }
  iVar13 = *param_1;
  lVar6 = (longlong)iVar13;
  fVar20 = 0.0;
  fVar24 = 0.0;
  fVar28 = 0.0;
  if (iVar13 != -1) {
    if (iVar13 < *(int *)(param_2 + 0x30)) {
      if ((*(int *)(param_2 + 0x78) == 0) ||
         (iVar13 = *(int *)(*(longlong *)(param_2 + 0x70) + lVar6 * 4), iVar13 != -1)) {
        lVar6 = (longlong)iVar13 * 5;
        lVar15 = *(longlong *)(param_2 + 0xc0);
      }
      else {
        lVar15 = *(longlong *)(param_2 + 0x28);
        lVar6 = lVar6 * 5;
      }
    }
    else {
      lVar6 = (longlong)(iVar13 - *(int *)(param_2 + 0x30)) * 5;
      lVar15 = *(longlong *)(param_2 + 0xe0);
    }
    iVar13 = *(int *)(param_2 + 0x40);
    iVar12 = *(int *)(lVar15 + lVar6 * 4);
    if (iVar12 < iVar13) {
      pfVar7 = (float *)((longlong)iVar12 * 0x10 + *(longlong *)(param_2 + 0x38));
    }
    else {
      pfVar7 = (float *)((longlong)(iVar12 - iVar13) * 0x10 + *(longlong *)(param_2 + 0xf0));
    }
    iVar12 = *(int *)(lVar15 + lVar6 * 4 + 4);
    if (iVar12 < iVar13) {
      pfVar8 = (float *)((longlong)iVar12 * 0x10 + *(longlong *)(param_2 + 0x38));
    }
    else {
      pfVar8 = (float *)((longlong)(iVar12 - iVar13) * 0x10 + *(longlong *)(param_2 + 0xf0));
    }
    fVar20 = (*pfVar8 - *pfVar7) * local_58 + *pfVar7;
    fVar24 = (pfVar8[1] - pfVar7[1]) * fStack_54 + pfVar7[1];
    fVar28 = (pfVar8[2] - pfVar7[2]) * fStack_50 + pfVar7[2];
  }
  *param_6 = fVar20;
  param_6[1] = fVar24;
  param_6[2] = fVar28;
  param_6[3] = fVar38;
  return param_1;
}



// FUNCTION 144c56d60 FUN_144c56d60 body=628 status=ok
// SIG undefined FUN_144c56d60(void)

char FUN_144c56d60(longlong param_1,int *param_2,longlong param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  iVar10 = *param_2;
  lVar3 = (longlong)iVar10;
  if (iVar10 < *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar3 * 4);
    }
    if (iVar10 == -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      lVar3 = lVar3 * 3;
    }
    else {
      lVar3 = (longlong)iVar10 * 3;
      lVar4 = *(longlong *)(param_1 + 0xb0);
    }
  }
  else {
    lVar3 = (longlong)(iVar10 - *(int *)(param_1 + 0x20)) * 3;
    lVar4 = *(longlong *)(param_1 + 0xd0);
  }
  piVar1 = (int *)(lVar4 + lVar3 * 4);
  iVar10 = *piVar1;
  lVar3 = (longlong)iVar10;
  if (iVar10 < *(int *)(param_1 + 0x30)) {
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar3 * 4);
    }
    if (iVar10 == -1) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      lVar3 = lVar3 * 5;
    }
    else {
      lVar3 = (longlong)iVar10 * 5;
      lVar4 = *(longlong *)(param_1 + 0xc0);
    }
  }
  else {
    lVar3 = (longlong)(iVar10 - *(int *)(param_1 + 0x30)) * 5;
    lVar4 = *(longlong *)(param_1 + 0xe0);
  }
  iVar10 = *(int *)(lVar4 + lVar3 * 4);
  if (iVar10 < *(int *)(param_1 + 0x40)) {
    puVar5 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    puVar5 = (undefined8 *)
             ((longlong)(iVar10 - *(int *)(param_1 + 0x40)) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  local_58 = *puVar5;
  uStack_50 = puVar5[1];
  cVar9 = '\0';
  fVar11 = *(float *)(param_3 + 0x1c);
  iVar10 = *piVar1 + 1;
  fVar12 = fVar11;
  fVar13 = fVar11;
  fVar14 = fVar11;
  if (iVar10 < *piVar1 + -1 + (int)(short)piVar1[2]) {
    do {
      if (iVar10 < *(int *)(param_1 + 0x30)) {
        iVar8 = iVar10;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar8 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar10 * 4);
        }
        if (iVar8 == -1) {
          lVar3 = *(longlong *)(param_1 + 0x28);
          lVar4 = (longlong)iVar10 * 5;
        }
        else {
          lVar4 = (longlong)iVar8 * 5;
          lVar3 = *(longlong *)(param_1 + 0xc0);
        }
      }
      else {
        lVar4 = (longlong)(iVar10 - *(int *)(param_1 + 0x30)) * 5;
        lVar3 = *(longlong *)(param_1 + 0xe0);
      }
      piVar7 = (int *)(lVar3 + lVar4 * 4);
      iVar8 = *(int *)(param_1 + 0x40);
      iVar2 = *piVar7;
      if (iVar2 < iVar8) {
        puVar6 = (undefined4 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar6 = (undefined4 *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      local_68 = *puVar6;
      uStack_64 = puVar6[1];
      uStack_60 = puVar6[2];
      uStack_5c = puVar6[3];
      iVar2 = piVar7[1];
      if (iVar2 < iVar8) {
        puVar6 = (undefined4 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar6 = (undefined4 *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      local_78 = *puVar6;
      uStack_74 = puVar6[1];
      uStack_70 = puVar6[2];
      uStack_6c = puVar6[3];
      local_88 = fVar11;
      fStack_84 = fVar12;
      fStack_80 = fVar13;
      fStack_7c = fVar14;
      piVar7 = (int *)FUN_144ff16b0(local_38,param_3,&local_58,&local_68,&local_78,0,&local_88,
                                    local_48,0);
      if ((*piVar7 != 0) && (local_88 < fVar11)) {
        cVar9 = '\x01';
        fVar11 = local_88;
        fVar12 = fStack_84;
        fVar13 = fStack_80;
        fVar14 = fStack_7c;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (short)piVar1[2] + -1 + *piVar1);
    if (cVar9 != '\0') {
      *param_4 = fVar11;
      param_4[1] = fVar12;
      param_4[2] = fVar13;
      param_4[3] = fVar14;
    }
  }
  else {
    cVar9 = '\0';
  }
  return cVar9;
}



// FUNCTION 144c56fe0 FUN_144c56fe0 body=442 status=ok
// SIG undefined FUN_144c56fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_144c56fe0(longlong param_1,int *param_2,longlong param_3,float *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  
  cVar6 = '\0';
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)*param_2 * 0xc);
  puVar2 = (undefined8 *)
           (*(longlong *)(param_1 + 0x38) +
           (longlong)
           *(int *)(*(longlong *)(param_1 + 0x28) +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)*param_2 * 0xc) *
                   0x14) * 0x10);
  local_78 = *puVar2;
  uStack_70 = puVar2[1];
  fVar10 = *(float *)(param_3 + 0x1c);
  iVar5 = *piVar1 + 1;
  fVar7 = ABS(fVar10 - _DAT_14c6dad90);
  fVar8 = ABS(fVar10 - fRam000000014c6dad94);
  fVar9 = ABS(fVar10 - fRam000000014c6dad98);
  fVar10 = ABS(fVar10 - fRam000000014c6dad9c);
  if (iVar5 < *piVar1 + -1 + (int)(short)piVar1[2]) {
    do {
      local_a8 = fVar7 + _DAT_14c6dad90;
      fStack_a4 = fVar8 + fRam000000014c6dad94;
      fStack_a0 = fVar9 + fRam000000014c6dad98;
      fStack_9c = fVar10 + fRam000000014c6dad9c;
      piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0x14);
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)*piVar4 * 0x10);
      local_88 = *puVar2;
      uStack_80 = puVar2[1];
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)piVar4[1] * 0x10);
      local_98 = *puVar3;
      uStack_94 = puVar3[1];
      uStack_90 = puVar3[2];
      uStack_8c = puVar3[3];
      piVar4 = (int *)FUN_144ff16b0(local_58,param_3,&local_78,&local_88,&local_98,0,&local_a8,
                                    local_68,0);
      if (*piVar4 != 0) {
        if (ABS(local_a8 - _DAT_14c6dad90) < fVar7) {
          cVar6 = '\x01';
          fVar7 = ABS(local_a8 - _DAT_14c6dad90);
          fVar8 = ABS(fStack_a4 - fRam000000014c6dad94);
          fVar9 = ABS(fStack_a0 - fRam000000014c6dad98);
          fVar10 = ABS(fStack_9c - fRam000000014c6dad9c);
          fVar11 = local_a8;
          fVar12 = fStack_a4;
          fVar13 = fStack_a0;
          fVar14 = fStack_9c;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (short)piVar1[2] + -1 + *piVar1);
    if (cVar6 != '\0') {
      *param_4 = fVar11;
      param_4[1] = fVar12;
      param_4[2] = fVar13;
      param_4[3] = fVar14;
    }
  }
  else {
    cVar6 = '\0';
  }
  return cVar6;
}



// FUNCTION 144c571a0 FUN_144c571a0 body=703 status=ok
// SIG undefined FUN_144c571a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_144c571a0(longlong param_1,int *param_2,longlong param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  
  iVar10 = *param_2;
  lVar3 = (longlong)iVar10;
  if (iVar10 < *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar3 * 4);
    }
    if (iVar10 == -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      lVar3 = lVar3 * 3;
    }
    else {
      lVar3 = (longlong)iVar10 * 3;
      lVar4 = *(longlong *)(param_1 + 0xb0);
    }
  }
  else {
    lVar3 = (longlong)(iVar10 - *(int *)(param_1 + 0x20)) * 3;
    lVar4 = *(longlong *)(param_1 + 0xd0);
  }
  piVar1 = (int *)(lVar4 + lVar3 * 4);
  iVar10 = *piVar1;
  lVar3 = (longlong)iVar10;
  if (iVar10 < *(int *)(param_1 + 0x30)) {
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar3 * 4);
    }
    if (iVar10 == -1) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      lVar3 = lVar3 * 5;
    }
    else {
      lVar3 = (longlong)iVar10 * 5;
      lVar4 = *(longlong *)(param_1 + 0xc0);
    }
  }
  else {
    lVar3 = (longlong)(iVar10 - *(int *)(param_1 + 0x30)) * 5;
    lVar4 = *(longlong *)(param_1 + 0xe0);
  }
  iVar10 = *(int *)(lVar4 + lVar3 * 4);
  if (iVar10 < *(int *)(param_1 + 0x40)) {
    puVar5 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    puVar5 = (undefined8 *)
             ((longlong)(iVar10 - *(int *)(param_1 + 0x40)) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  local_78 = *puVar5;
  uStack_70 = puVar5[1];
  cVar9 = '\0';
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar14 = *(float *)(param_3 + 0x1c);
  iVar10 = *piVar1 + 1;
  fVar11 = ABS(fVar14 - _DAT_14c6dad90);
  fVar12 = ABS(fVar14 - fRam000000014c6dad94);
  fVar13 = ABS(fVar14 - fRam000000014c6dad98);
  fVar14 = ABS(fVar14 - fRam000000014c6dad9c);
  if (iVar10 < *piVar1 + -1 + (int)(short)piVar1[2]) {
    do {
      if (iVar10 < *(int *)(param_1 + 0x30)) {
        iVar8 = iVar10;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar8 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar10 * 4);
        }
        if (iVar8 == -1) {
          lVar3 = *(longlong *)(param_1 + 0x28);
          lVar4 = (longlong)iVar10 * 5;
        }
        else {
          lVar4 = (longlong)iVar8 * 5;
          lVar3 = *(longlong *)(param_1 + 0xc0);
        }
      }
      else {
        lVar4 = (longlong)(iVar10 - *(int *)(param_1 + 0x30)) * 5;
        lVar3 = *(longlong *)(param_1 + 0xe0);
      }
      piVar7 = (int *)(lVar3 + lVar4 * 4);
      iVar8 = *(int *)(param_1 + 0x40);
      iVar2 = *piVar7;
      if (iVar2 < iVar8) {
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar5 = (undefined8 *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      local_88 = *puVar5;
      uStack_80 = puVar5[1];
      iVar2 = piVar7[1];
      if (iVar2 < iVar8) {
        puVar6 = (undefined4 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar6 = (undefined4 *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      local_98 = *puVar6;
      uStack_94 = puVar6[1];
      uStack_90 = puVar6[2];
      uStack_8c = puVar6[3];
      local_a8 = fVar11 + _DAT_14c6dad90;
      fStack_a4 = fVar12 + fRam000000014c6dad94;
      fStack_a0 = fVar13 + fRam000000014c6dad98;
      fStack_9c = fVar14 + fRam000000014c6dad9c;
      piVar7 = (int *)FUN_144ff16b0(local_58,param_3,&local_78,&local_88,&local_98,0,&local_a8,
                                    local_68,0);
      if (*piVar7 != 0) {
        if (ABS(local_a8 - _DAT_14c6dad90) < fVar11) {
          cVar9 = '\x01';
          fVar11 = ABS(local_a8 - _DAT_14c6dad90);
          fVar12 = ABS(fStack_a4 - fRam000000014c6dad94);
          fVar13 = ABS(fStack_a0 - fRam000000014c6dad98);
          fVar14 = ABS(fStack_9c - fRam000000014c6dad9c);
          fVar15 = local_a8;
          fVar16 = fStack_a4;
          fVar17 = fStack_a0;
          fVar18 = fStack_9c;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (short)piVar1[2] + -1 + *piVar1);
    if (cVar9 != '\0') {
      *param_4 = fVar15;
      param_4[1] = fVar16;
      param_4[2] = fVar17;
      param_4[3] = fVar18;
    }
  }
  else {
    cVar9 = '\0';
  }
  return cVar9;
}



// FUNCTION 144c57460 FUN_144c57460 body=592 status=ok
// SIG undefined FUN_144c57460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_144c57460(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  char cVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [32];
  
  iVar10 = *param_2;
  lVar5 = (longlong)iVar10;
  if (iVar10 < *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar5 * 4);
    }
    if (iVar10 == -1) {
      lVar6 = *(longlong *)(param_1 + 0x18);
      lVar5 = lVar5 * 3;
    }
    else {
      lVar5 = (longlong)iVar10 * 3;
      lVar6 = *(longlong *)(param_1 + 0xb0);
    }
  }
  else {
    lVar5 = (longlong)(iVar10 - *(int *)(param_1 + 0x20)) * 3;
    lVar6 = *(longlong *)(param_1 + 0xd0);
  }
  piVar1 = (int *)(lVar6 + lVar5 * 4);
  iVar10 = *piVar1;
  lVar5 = (longlong)iVar10;
  if (iVar10 < *(int *)(param_1 + 0x30)) {
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar5 * 4);
    }
    if (iVar10 == -1) {
      lVar6 = *(longlong *)(param_1 + 0x28);
      lVar5 = lVar5 * 5;
    }
    else {
      lVar5 = (longlong)iVar10 * 5;
      lVar6 = *(longlong *)(param_1 + 0xc0);
    }
  }
  else {
    lVar5 = (longlong)(iVar10 - *(int *)(param_1 + 0x30)) * 5;
    lVar6 = *(longlong *)(param_1 + 0xe0);
  }
  iVar10 = *(int *)(lVar6 + lVar5 * 4);
  if (iVar10 < *(int *)(param_1 + 0x40)) {
    puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    puVar7 = (undefined8 *)
             ((longlong)(iVar10 - *(int *)(param_1 + 0x40)) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  local_48 = *puVar7;
  uStack_40 = puVar7[1];
  cVar9 = '\0';
  iVar10 = *piVar1 + 1;
  fVar11 = _DAT_14c6daca0;
  fVar12 = fRam000000014c6daca4;
  fVar13 = fRam000000014c6daca8;
  fVar14 = fRam000000014c6dacac;
  if (iVar10 < *piVar1 + -1 + (int)(short)piVar1[2]) {
    do {
      if (iVar10 < *(int *)(param_1 + 0x30)) {
        iVar4 = iVar10;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar10 * 4);
        }
        if (iVar4 == -1) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          lVar6 = (longlong)iVar10 * 5;
        }
        else {
          lVar6 = (longlong)iVar4 * 5;
          lVar5 = *(longlong *)(param_1 + 0xc0);
        }
      }
      else {
        lVar6 = (longlong)(iVar10 - *(int *)(param_1 + 0x30)) * 5;
        lVar5 = *(longlong *)(param_1 + 0xe0);
      }
      piVar2 = (int *)(lVar5 + lVar6 * 4);
      iVar4 = *(int *)(param_1 + 0x40);
      iVar3 = *piVar2;
      if (iVar3 < iVar4) {
        puVar8 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar8 = (undefined4 *)((longlong)(iVar3 - iVar4) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      local_58 = *puVar8;
      uStack_54 = puVar8[1];
      uStack_50 = puVar8[2];
      uStack_4c = puVar8[3];
      iVar3 = piVar2[1];
      if (iVar3 < iVar4) {
        puVar8 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar8 = (undefined4 *)((longlong)(iVar3 - iVar4) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      local_68 = *puVar8;
      uStack_64 = puVar8[1];
      uStack_60 = puVar8[2];
      uStack_5c = puVar8[3];
      local_78 = fVar11;
      fStack_74 = fVar12;
      fStack_70 = fVar13;
      fStack_6c = fVar14;
      iVar4 = FUN_144ff1ba0(param_3,param_4,&local_48,&local_58,&local_68,&local_78,local_38);
      if ((iVar4 != 0) && (local_78 < fVar11)) {
        cVar9 = '\x01';
        fVar11 = local_78;
        fVar12 = fStack_74;
        fVar13 = fStack_70;
        fVar14 = fStack_6c;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (short)piVar1[2] + -1 + *piVar1);
    if (cVar9 != '\0') {
      *param_5 = fVar11;
      param_5[1] = fVar12;
      param_5[2] = fVar13;
      param_5[3] = fVar14;
    }
  }
  else {
    cVar9 = '\0';
  }
  return cVar9;
}



// FUNCTION 144c576b0 FUN_144c576b0 body=183 status=ok
// SIG undefined FUN_144c576b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c576b0(longlong param_1,int *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar5 = *param_2;
  lVar6 = (longlong)iVar5;
  if (iVar5 < *(int *)(param_1 + 0x30)) {
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar6 * 4);
    }
    if (iVar5 == -1) {
      lVar7 = *(longlong *)(param_1 + 0x28);
    }
    else {
      lVar6 = (longlong)iVar5;
      lVar7 = *(longlong *)(param_1 + 0xc0);
    }
    piVar10 = (int *)(lVar7 + lVar6 * 0x14);
  }
  else {
    piVar10 = (int *)(*(longlong *)(param_1 + 0xe0) +
                     (longlong)(iVar5 - *(int *)(param_1 + 0x30)) * 0x14);
  }
  iVar5 = *piVar10;
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar5 < iVar1) {
    pfVar9 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar9 = (float *)((longlong)(iVar5 - iVar1) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  iVar5 = piVar10[1];
  fVar2 = pfVar9[1];
  fVar3 = pfVar9[2];
  fVar4 = pfVar9[3];
  if (iVar5 < iVar1) {
    pfVar8 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar8 = (float *)((longlong)(iVar5 - iVar1) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  fVar11 = (pfVar8[1] - fVar2) * fRam000000014c6dad94;
  fVar12 = (pfVar8[2] - fVar3) * fRam000000014c6dad98;
  fVar13 = (pfVar8[3] - fVar4) * fRam000000014c6dad9c;
  *param_3 = (*pfVar8 - *pfVar9) * _DAT_14c6dad90 + *pfVar9;
  param_3[1] = fVar11 + fVar2;
  param_3[2] = fVar12 + fVar3;
  param_3[3] = fVar13 + fVar4;
  return;
}



// FUNCTION 144c57770 FUN_144c57770 body=455 status=ok
// SIG undefined FUN_144c57770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c57770(longlong param_1,int *param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  iVar13 = *param_2;
  lVar8 = (longlong)iVar13;
  lVar1 = *(longlong *)(param_1 + 0x20);
  auVar20._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
  auVar20._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
  auVar20._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
  if (iVar13 < *(int *)(lVar1 + 0x20)) {
    if (*(int *)(lVar1 + 0x98) != 0) {
      iVar13 = *(int *)(*(longlong *)(lVar1 + 0x90) + lVar8 * 4);
    }
    if (iVar13 == -1) {
      lVar15 = *(longlong *)(lVar1 + 0x18);
      lVar8 = lVar8 * 3;
    }
    else {
      lVar8 = (longlong)iVar13 * 3;
      lVar15 = *(longlong *)(lVar1 + 0xb0);
    }
  }
  else {
    lVar8 = (longlong)(iVar13 - *(int *)(lVar1 + 0x20)) * 3;
    lVar15 = *(longlong *)(lVar1 + 0xd0);
  }
  iVar13 = *(int *)(lVar15 + lVar8 * 4);
  uVar14 = (ulonglong)iVar13;
  iVar12 = *(short *)(lVar15 + lVar8 * 4 + 8) + iVar13;
  auVar21 = _DAT_14c6dae80;
  if (iVar13 < iVar12) {
    lVar8 = uVar14 * 4;
    lVar15 = uVar14 * 0x14;
    do {
      iVar13 = (int)uVar14;
      if (iVar13 < *(int *)(lVar1 + 0x30)) {
        iVar7 = iVar13;
        if (*(int *)(lVar1 + 0x78) != 0) {
          iVar7 = *(int *)(lVar8 + *(longlong *)(lVar1 + 0x70));
        }
        if (iVar7 != -1) {
          lVar10 = *(longlong *)(lVar1 + 0xc0);
          goto LAB_144c57898;
        }
        piVar9 = (int *)(*(longlong *)(lVar1 + 0x28) + lVar15);
      }
      else {
        iVar7 = iVar13 - *(int *)(lVar1 + 0x30);
        lVar10 = *(longlong *)(lVar1 + 0xe0);
LAB_144c57898:
        piVar9 = (int *)(lVar10 + (longlong)iVar7 * 0x14);
      }
      iVar7 = *piVar9;
      if (iVar7 < *(int *)(lVar1 + 0x40)) {
        pfVar11 = (float *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar1 + 0x38));
      }
      else {
        pfVar11 = (float *)((longlong)(iVar7 - *(int *)(lVar1 + 0x40)) * 0x10 +
                           *(longlong *)(lVar1 + 0xf0));
      }
      fVar19 = *pfVar11;
      fVar4 = pfVar11[1];
      fVar5 = pfVar11[2];
      uVar14 = (ulonglong)(iVar13 + 1U);
      lVar8 = lVar8 + 4;
      lVar15 = lVar15 + 0x14;
      fVar16 = fVar19 * *(float *)(param_1 + 0x60) + fVar4 * *(float *)(param_1 + 0x70) +
               fVar5 * *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x90);
      fVar17 = fVar19 * *(float *)(param_1 + 100) + fVar4 * *(float *)(param_1 + 0x74) +
               fVar5 * *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x94);
      fVar18 = fVar19 * *(float *)(param_1 + 0x68) + fVar4 * *(float *)(param_1 + 0x78) +
               fVar5 * *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x98);
      fVar19 = fVar19 * *(float *)(param_1 + 0x6c) + fVar4 * *(float *)(param_1 + 0x7c) +
               fVar5 * *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x9c);
      auVar2._4_4_ = fVar17;
      auVar2._0_4_ = fVar16;
      auVar2._8_4_ = fVar18;
      auVar2._12_4_ = fVar19;
      auVar21 = minps(auVar21,auVar2);
      auVar3._4_4_ = fVar17;
      auVar3._0_4_ = fVar16;
      auVar3._8_4_ = fVar18;
      auVar3._12_4_ = fVar19;
      auVar20 = maxps(auVar20,auVar3);
    } while ((int)(iVar13 + 1U) < iVar12);
  }
  fVar19 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar16 = *param_3;
  fVar17 = param_3[1];
  fVar18 = param_3[2];
  fVar6 = param_3[3];
  param_4[4] = auVar20._0_4_ + *param_3;
  param_4[5] = auVar20._4_4_ + fVar19;
  param_4[6] = auVar20._8_4_ + fVar4;
  param_4[7] = auVar20._12_4_ + fVar5;
  *param_4 = auVar21._0_4_ - fVar16;
  param_4[1] = auVar21._4_4_ - fVar17;
  param_4[2] = auVar21._8_4_ - fVar18;
  param_4[3] = auVar21._12_4_ - fVar6;
  return;
}



// FUNCTION 144c57940 FUN_144c57940 body=887 status=ok
// SIG undefined FUN_144c57940(void)

void FUN_144c57940(longlong param_1,longlong param_2,int *param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 local_res18 [16];
  undefined1 local_48 [16];
  
  uVar11 = 0;
  uVar9 = uVar11;
  if (0 < (short)param_3[2]) {
    do {
      iVar5 = *param_3 + (int)uVar9;
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
      lVar1 = lVar4 + lVar3 * 4;
      if ((*(byte *)(lVar4 + 0x10 + lVar3 * 4) & 0x40) != 0) {
        lVar3 = *(longlong *)
                 ((ulonglong)(*(uint *)(lVar1 + 8) >> 0x16) * 0x120 + *(longlong *)(param_2 + 0x38))
        ;
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else if (*(char *)(lVar3 + 0x30) == '\x01') {
          lVar3 = *(longlong *)(lVar3 + 0x20);
        }
        else {
          lVar3 = FUN_147e4bb26();
        }
        uVar2 = *(uint *)(lVar1 + 8) & 0x3fffff;
        if ((int)uVar2 < *(int *)(lVar3 + 0x30)) {
          if (*(int *)(lVar3 + 0x78) != 0) {
            uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)uVar2 * 4);
          }
          uVar8 = uVar11;
          if (uVar2 != 0xffffffff) {
            lVar3 = *(longlong *)(lVar3 + 0xc0);
            goto LAB_144c57a5b;
          }
        }
        else {
          uVar2 = uVar2 - *(int *)(lVar3 + 0x30);
          lVar3 = *(longlong *)(lVar3 + 0xe0);
LAB_144c57a5b:
          uVar8 = lVar3 + (longlong)(int)uVar2 * 0x14;
        }
        *(byte *)(uVar8 + 0x10) = *(byte *)(uVar8 + 0x10) & 0xbf;
        *(undefined8 *)(uVar8 + 8) = 0xffffffffffffffff;
        if (param_4 != (longlong *)0x0) {
          uVar2 = *(uint *)(lVar1 + 8) >> 0x16;
          if ((int)param_4[1] + -1 < (int)param_4[2] * 2) {
            FUN_144c57cc0(param_4,local_res18,(int)param_4[1] * 2);
          }
          lVar3 = *param_4;
          uVar10 = (int)param_4[1] - 1;
          uVar6 = uVar2 * -0x61c8864f;
          uVar7 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                  uVar2 * -0x4f000000) & uVar10;
          uVar6 = *(uint *)(lVar3 + (longlong)(int)uVar7 * 4);
          while ((iVar5 = 1, uVar6 != 0xffffffff && (iVar5 = 0, uVar6 != uVar2))) {
            uVar7 = uVar7 + 1 & uVar10;
            uVar6 = *(uint *)(lVar3 + (longlong)(int)uVar7 * 4);
          }
          *(int *)(param_4 + 2) = (int)param_4[2] + iVar5;
          *(uint *)(lVar3 + (longlong)(int)uVar7 * 4) = uVar2;
        }
      }
      uVar2 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar2;
    } while ((int)uVar2 < (int)(short)param_3[2]);
  }
  FUN_144be90e0(0x127befaa);
  if (0 < *(short *)((longlong)param_3 + 10)) {
    do {
      iVar5 = param_3[1] + (int)uVar11;
      if (iVar5 < *(int *)(param_1 + 0x30)) {
        lVar3 = (longlong)iVar5;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar3 * 4);
        }
        if (iVar5 == -1) {
          lVar4 = *(longlong *)(param_1 + 0x28);
        }
        else {
          lVar3 = (longlong)iVar5;
          lVar4 = *(longlong *)(param_1 + 0xc0);
        }
      }
      else {
        lVar3 = (longlong)(iVar5 - *(int *)(param_1 + 0x30));
        lVar4 = *(longlong *)(param_1 + 0xe0);
      }
      lVar1 = lVar4 + lVar3 * 0x14;
      if ((*(byte *)(lVar4 + 0x10 + lVar3 * 0x14) & 0x40) != 0) {
        lVar3 = *(longlong *)
                 ((ulonglong)(*(uint *)(lVar1 + 8) >> 0x16) * 0x120 + *(longlong *)(param_2 + 0x38))
        ;
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else if (*(char *)(lVar3 + 0x30) == '\x01') {
          lVar3 = *(longlong *)(lVar3 + 0x20);
        }
        else {
          lVar3 = FUN_147e4bb26();
        }
        lVar4 = 0;
        uVar2 = *(uint *)(lVar1 + 8) & 0x3fffff;
        if ((int)uVar2 < *(int *)(lVar3 + 0x30)) {
          if (*(int *)(lVar3 + 0x78) != 0) {
            uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)uVar2 * 4);
          }
          if (uVar2 != 0xffffffff) {
            lVar4 = *(longlong *)(lVar3 + 0xc0);
            goto LAB_144c57bf2;
          }
        }
        else {
          uVar2 = uVar2 - *(int *)(lVar3 + 0x30);
          lVar4 = *(longlong *)(lVar3 + 0xe0);
LAB_144c57bf2:
          lVar4 = lVar4 + (longlong)(int)uVar2 * 0x14;
        }
        *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xbf;
        *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
        if (param_4 != (longlong *)0x0) {
          uVar2 = *(uint *)(lVar1 + 8) >> 0x16;
          if ((int)param_4[1] + -1 < (int)param_4[2] * 2) {
            FUN_144c57cc0(param_4,local_48,(int)param_4[1] * 2);
          }
          iVar5 = 1;
          lVar1 = *param_4;
          uVar10 = (int)param_4[1] - 1;
          uVar6 = uVar2 * -0x61c8864f;
          uVar7 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                  uVar2 * -0x4f000000) & uVar10;
          uVar6 = *(uint *)(lVar1 + (longlong)(int)uVar7 * 4);
          while (uVar6 != 0xffffffff) {
            if (uVar6 == uVar2) {
              iVar5 = 0;
              break;
            }
            uVar7 = uVar7 + 1 & uVar10;
            uVar6 = *(uint *)(lVar1 + (longlong)(int)uVar7 * 4);
          }
          *(int *)(param_4 + 2) = (int)param_4[2] + iVar5;
          *(uint *)(lVar1 + (longlong)(int)uVar7 * 4) = uVar2;
        }
        if ((*(byte *)(lVar4 + 0x10) & 4) == 0) {
          *(int *)(lVar3 + 0x164) = *(int *)(lVar3 + 0x164) + 1;
        }
      }
      uVar2 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar2;
    } while ((int)uVar2 < (int)*(short *)((longlong)param_3 + 10));
  }
  return;
}



// FUNCTION 144c57cc0 FUN_144c57cc0 body=655 status=ok
// SIG undefined FUN_144c57cc0(void)

undefined4 * FUN_144c57cc0(longlong *param_1,undefined4 *param_2,int param_3)

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
    FUN_144c54260(&local_48,&PTR_vftable_14c6e47c0);
    FUN_144c54260(param_1,&PTR_vftable_14c6e47c0);
    lVar10 = *param_1;
    *param_1 = local_48;
    local_res18 = *(uint *)((longlong)param_1 + 0xc);
    *(undefined4 *)(param_1 + 1) = local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar8) {
    FUN_144c58ab0(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar8);
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
          FUN_144c57cc0(param_1,local_res8,iVar7 * 2 + 2);
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



// FUNCTION 144c57f50 FUN_144c57f50 body=197 status=ok
// SIG undefined FUN_144c57f50(void)

/* WARNING: Removing unreachable block (ram,0x000144c57fa5) */

longlong * FUN_144c57f50(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  *param_1 = (longlong)param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar4 = param_3 >> 2;
  *(uint *)(param_1 + 1) = uVar4;
  *(uint *)((longlong)param_1 + 0xc) = uVar4 | 0x80000000;
  iVar3 = 0;
  if (((param_3 >> 2 != 0) && (iVar3 = 0, 3 < uVar4)) &&
     ((param_1 < param_2 || ((longlong *)((longlong)param_2 + ((ulonglong)uVar4 - 1) * 4) < param_1)
      ))) {
    iVar2 = uVar4 - (uVar4 & 0x80000003);
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 4;
    } while (iVar3 < iVar2);
    iVar2 = iVar2 + 3;
    memset(param_2,-1,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) << 4);
  }
  for (lVar1 = (longlong)iVar3; lVar1 < (longlong)(ulonglong)uVar4; lVar1 = lVar1 + 1) {
    *(undefined4 *)(*param_1 + lVar1 * 4) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 144c58020 FUN_144c58020 body=657 status=ok
// SIG undefined FUN_144c58020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c58020(longlong param_1,int *param_2,undefined1 (*param_3) [16])

{
  short sVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  
  iVar3 = *param_2;
  lVar5 = (longlong)iVar3;
  if (iVar3 < *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar5 * 4);
    }
    if (iVar3 == -1) {
      lVar12 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar5 = (longlong)iVar3;
      lVar12 = *(longlong *)(param_1 + 0xb0);
    }
    piVar11 = (int *)(lVar12 + lVar5 * 0xc);
  }
  else {
    piVar11 = (int *)(*(longlong *)(param_1 + 0xd0) +
                     (longlong)(iVar3 - *(int *)(param_1 + 0x20)) * 0xc);
  }
  iVar9 = *piVar11;
  uVar15 = (ulonglong)iVar9;
  iVar3 = *(int *)(param_1 + 0x30);
  fVar29 = 0.0;
  fVar30 = 0.0;
  fVar31 = 0.0;
  sVar1 = (short)piVar11[2];
  auVar26 = ZEXT816(0);
  if (iVar9 < iVar3) {
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x70) + uVar15 * 4);
    }
    if (iVar9 == -1) {
      lVar5 = *(longlong *)(param_1 + 0x28);
      lVar12 = uVar15 * 5;
    }
    else {
      lVar12 = (longlong)iVar9 * 5;
      lVar5 = *(longlong *)(param_1 + 0xc0);
    }
  }
  else {
    lVar12 = (longlong)(iVar9 - iVar3) * 5;
    lVar5 = *(longlong *)(param_1 + 0xe0);
  }
  iVar9 = *(int *)(param_1 + 0x40);
  iVar14 = *(int *)(lVar5 + lVar12 * 4);
  if (iVar14 < iVar9) {
    pfVar10 = (float *)((longlong)iVar14 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar10 = (float *)((longlong)(iVar14 - iVar9) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  if (0 < sVar1) {
    lVar5 = uVar15 * 4;
    lVar12 = uVar15 * 0x14;
    uVar13 = (ulonglong)(uint)(int)sVar1;
    auVar28 = auVar26;
    do {
      iVar14 = (int)uVar15;
      if (iVar14 < iVar3) {
        iVar4 = iVar14;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar4 = *(int *)(lVar5 + *(longlong *)(param_1 + 0x70));
        }
        if (iVar4 != -1) {
          lVar6 = *(longlong *)(param_1 + 0xc0);
          goto LAB_144c5818d;
        }
        piVar11 = (int *)(*(longlong *)(param_1 + 0x28) + lVar12);
      }
      else {
        iVar4 = iVar14 - iVar3;
        lVar6 = *(longlong *)(param_1 + 0xe0);
LAB_144c5818d:
        piVar11 = (int *)(lVar6 + (longlong)iVar4 * 0x14);
      }
      iVar4 = *piVar11;
      if (iVar4 < iVar9) {
        pfVar7 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pfVar7 = (float *)((longlong)(iVar4 - iVar9) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      iVar4 = piVar11[1];
      if (iVar4 < iVar9) {
        pfVar8 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pfVar8 = (float *)((longlong)(iVar4 - iVar9) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      fVar29 = fVar29 + *pfVar7;
      fVar30 = fVar30 + pfVar7[1];
      fVar31 = fVar31 + pfVar7[2];
      fVar16 = *pfVar8 - *pfVar10;
      fVar18 = pfVar8[1] - pfVar10[1];
      fVar19 = pfVar8[2] - pfVar10[2];
      fVar20 = pfVar8[3] - pfVar10[3];
      uVar15 = (ulonglong)(iVar14 + 1);
      fVar21 = *pfVar7 - *pfVar10;
      fVar22 = pfVar7[1] - pfVar10[1];
      fVar23 = pfVar7[2] - pfVar10[2];
      fVar24 = pfVar7[3] - pfVar10[3];
      lVar5 = lVar5 + 4;
      lVar12 = lVar12 + 0x14;
      auVar26._0_4_ = auVar28._0_4_ + (fVar19 * fVar22 - fVar23 * fVar18);
      auVar26._4_4_ = auVar28._4_4_ + (fVar16 * fVar23 - fVar21 * fVar19);
      auVar26._8_4_ = auVar28._8_4_ + (fVar18 * fVar21 - fVar22 * fVar16);
      auVar26._12_4_ = auVar28._12_4_ + (fVar20 * fVar24 - fVar24 * fVar20);
      uVar13 = uVar13 - 1;
      auVar28 = auVar26;
    } while (uVar13 != 0);
  }
  auVar28._0_4_ = (float)(int)sVar1;
  fVar16 = auVar26._0_4_ * auVar26._0_4_;
  fVar18 = auVar26._4_4_ * auVar26._4_4_;
  fVar19 = auVar26._8_4_ * auVar26._8_4_;
  auVar28._4_4_ = auVar28._0_4_;
  auVar28._8_4_ = auVar28._0_4_;
  auVar28._12_4_ = auVar28._0_4_;
  auVar28 = divps(_DAT_14c6daca0,auVar28);
  auVar17._4_4_ = fVar16;
  auVar17._0_4_ = fVar16;
  auVar17._8_4_ = fVar16;
  auVar17._12_4_ = fVar16;
  fVar20 = fVar18 + fVar16 + fVar19;
  if (fVar20 == 0.0) {
    auVar25 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar2._4_4_ = fVar18 + fVar16 + fVar19;
    auVar2._0_4_ = fVar20;
    auVar2._8_4_ = fVar18 + fVar16 + fVar19;
    auVar2._12_4_ = fVar18 + fVar16 + fVar19;
    auVar17 = sqrtps(auVar17,auVar2);
    auVar26 = divps(auVar26,auVar17);
    auVar25 = auVar26._0_12_;
  }
  auVar27._12_4_ =
       0.0 - (auVar25._4_4_ * auVar28._4_4_ * fVar30 + auVar25._0_4_ * auVar28._0_4_ * fVar29 +
             auVar25._8_4_ * auVar28._8_4_ * fVar31);
  auVar27._0_12_ = auVar25;
  *param_3 = auVar27;
  return;
}



// FUNCTION 144c582c0 FUN_144c582c0 body=250 status=ok
// SIG undefined FUN_144c582c0(void)

longlong * FUN_144c582c0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_res8;
  longlong local_res18;
  
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
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar3 = 0;
  }
  *param_1 = lVar3;
  param_1[1] = 0;
  local_res18 = (longlong)param_2 * 4;
  *(int *)(param_1 + 2) = param_2;
  if (lVar3 == 0) {
    lVar3 = (*DAT_14c787670)(1,&local_res18,0x40);
    param_1[1] = lVar3;
  }
  else {
    local_res8 = local_res18 + 0x3fU & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)(lVar3 + 0x28)) {
      lVar2 = *(longlong *)(lVar3 + 0x38);
      uVar1 = local_res8 + lVar2;
      if (uVar1 <= *(ulonglong *)(lVar3 + 0x40)) {
        *(ulonglong *)(lVar3 + 0x38) = uVar1;
        param_1[1] = lVar2;
        return param_1;
      }
    }
    lVar3 = FUN_144b454a0(lVar3,&local_res8);
    param_1[1] = lVar3;
  }
  return param_1;
}



// FUNCTION 144c583c0 FUN_144c583c0 body=235 status=ok
// SIG undefined FUN_144c583c0(void)

void FUN_144c583c0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144c584b0 FUN_144c584b0 body=235 status=ok
// SIG undefined FUN_144c584b0(void)

void FUN_144c584b0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144c585a0 FUN_144c585a0 body=247 status=ok
// SIG undefined FUN_144c585a0(void)

void FUN_144c585a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c586a0 FUN_144c586a0 body=247 status=ok
// SIG undefined FUN_144c586a0(void)

void FUN_144c586a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c587a0 FUN_144c587a0 body=247 status=ok
// SIG undefined FUN_144c587a0(void)

void FUN_144c587a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c588a0 FUN_144c588a0 body=247 status=ok
// SIG undefined FUN_144c588a0(void)

void FUN_144c588a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c589a0 FUN_144c589a0 body=257 status=ok
// SIG undefined FUN_144c589a0(void)

void FUN_144c589a0(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float local_40;
  
  lVar5 = (longlong)param_2;
  do {
    local_40 = (float)*(undefined8 *)(param_1 + ((longlong)(param_2 + param_3) >> 1) * 8);
    lVar7 = (longlong)param_3;
    iVar8 = param_2;
    iVar6 = param_3;
    do {
      fVar3 = *(float *)(param_1 + lVar5 * 8);
      while (local_40 < fVar3) {
        lVar2 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        iVar8 = iVar8 + 1;
        fVar3 = *(float *)(param_1 + 8 + lVar2);
      }
      pfVar1 = (float *)(param_1 + lVar7 * 8);
      if (*pfVar1 <= local_40 && local_40 != *pfVar1) {
        do {
          lVar7 = lVar7 + -1;
          iVar6 = iVar6 + -1;
          pfVar1 = (float *)(param_1 + lVar7 * 8);
        } while (*pfVar1 <= local_40 && local_40 != *pfVar1);
      }
      if (lVar7 < lVar5) break;
      if (lVar7 != lVar5) {
        uVar4 = *(undefined8 *)(param_1 + lVar7 * 8);
        *(undefined8 *)(param_1 + lVar7 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
        *(undefined8 *)(param_1 + lVar5 * 8) = uVar4;
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -1;
      iVar8 = iVar8 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 <= lVar7);
    if (param_2 < iVar6) {
      FUN_144c589a0(param_1,local_40,iVar6,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}



// FUNCTION 144c58ab0 FUN_144c58ab0 body=159 status=ok
// SIG undefined FUN_144c58ab0(void)

void FUN_144c58ab0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c58b50 FUN_144c58b50 body=188 status=ok
// SIG undefined FUN_144c58b50(void)

longlong * FUN_144c58b50(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3 * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x30);
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar2) {
    FUN_141807aa8(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  *(int *)(param_1 + 0x30) = iVar2;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = iVar2 + param_3;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar3) {
    FUN_144c5c270((longlong *)(param_1 + 0x18),&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  *(int *)(param_1 + 0x20) = iVar3;
  lVar1 = (longlong)iVar2 * 0x90 + *(longlong *)(param_1 + 0x18);
  *param_2 = lVar1;
  param_2[1] = (longlong)param_3 * 0x90 + lVar1;
  return param_2;
}



// FUNCTION 144c58c10 FUN_144c58c10 body=1293 status=ok
// SIG undefined FUN_144c58c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144c58c10(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,float param_7,longlong param_8,undefined8 param_9
             ,uint *param_10,uint *param_11)

{
  float *pfVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint local_res10 [2];
  uint local_b8 [4];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  ulonglong uVar12;
  
  local_res10[0] = *param_2;
  if ((int)*param_2 < 0) {
    local_res10[0] = 0;
  }
  uVar13 = 0xffffffff;
  cVar4 = FUN_144c59e80(param_1,param_3,param_4,param_5,param_6,param_8,local_res10,param_9);
  uVar10 = local_res10[0];
  if (cVar4 == '\0') {
LAB_144c590d4:
    uVar7 = 1;
  }
  else {
    lVar9 = (longlong)(int)local_res10[0] * 0x90;
    FUN_144ca81d0(*(longlong *)(param_1 + 0x18) + 0x70 + lVar9,local_b8,param_8);
    uVar5 = local_b8[0] >> 0x16;
    FUN_144b3fa50(&local_a8,
                  *(longlong *)((ulonglong)uVar5 * 0x120 + *(longlong *)(param_8 + 0x38)) + 0x60,
                  param_3);
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar6 = uVar10;
    if (((*(byte *)(lVar2 + 0x80 + lVar9) & 0x10) != 0) &&
       (uVar5 == *(uint *)(lVar2 + 0x70 + lVar9) >> 0x16)) {
      pfVar8 = (float *)(lVar2 + 0x20 + lVar9);
      fVar20 = *pfVar8;
      fVar21 = pfVar8[1];
      fVar22 = pfVar8[2];
      pfVar8 = (float *)(lVar2 + lVar9);
      pfVar1 = (float *)(lVar2 + 0x10 + lVar9);
      fVar31 = local_a8 - *pfVar8;
      fVar32 = fStack_a4 - pfVar8[1];
      fVar33 = fStack_a0 - pfVar8[2];
      fVar26 = *pfVar1 - *pfVar8;
      fVar27 = pfVar1[1] - pfVar8[1];
      fVar28 = pfVar1[2] - pfVar8[2];
      fVar14 = fVar20 * fVar26;
      fVar16 = fVar21 * fVar27;
      fVar18 = fVar22 * fVar28;
      fVar15 = fVar20 * fVar31;
      fVar17 = fVar21 * fVar32;
      fVar19 = fVar22 * fVar33;
      fVar26 = fVar26 - (fVar16 + fVar14 + fVar18) * fVar20;
      fVar27 = fVar27 - (fVar16 + fVar14 + fVar18) * fVar21;
      fVar28 = fVar28 - (fVar16 + fVar14 + fVar18) * fVar22;
      fVar14 = fVar26 * fVar26;
      fVar16 = fVar27 * fVar27;
      fVar18 = fVar28 * fVar28;
      fVar31 = fVar31 - (fVar17 + fVar15 + fVar19) * fVar20;
      fVar32 = fVar32 - (fVar17 + fVar15 + fVar19) * fVar21;
      fVar33 = fVar33 - (fVar17 + fVar15 + fVar19) * fVar22;
      auVar23._4_4_ = fVar16 + fVar14 + fVar18;
      auVar23._0_4_ = fVar16 + fVar14 + fVar18;
      auVar23._8_4_ = fVar16 + fVar14 + fVar18;
      auVar23._12_4_ = fVar16 + fVar14 + fVar18;
      auVar23 = divps(_DAT_14c6daca0,auVar23);
      fVar14 = fVar31 * fVar26;
      fVar15 = fVar32 * fVar27;
      fVar16 = fVar33 * fVar28;
      auVar24._0_4_ = auVar23._0_4_ * (fVar15 + fVar14 + fVar16);
      auVar24._4_4_ = auVar23._4_4_ * (fVar15 + fVar14 + fVar16);
      auVar24._8_4_ = auVar23._8_4_ * (fVar15 + fVar14 + fVar16);
      auVar24._12_4_ = auVar23._12_4_ * (fVar15 + fVar14 + fVar16);
      auVar23 = minps(auVar24,_DAT_1499314a0);
      auVar23 = maxps(auVar23,ZEXT816(0));
      fVar17 = ((0.0 - param_7) - -param_7) * auVar23._0_4_ + -param_7;
      fVar31 = fVar31 - auVar23._0_4_ * fVar26;
      fVar32 = fVar32 - auVar23._4_4_ * fVar27;
      fVar33 = fVar33 - auVar23._8_4_ * fVar28;
      fVar14 = fVar20 * fVar31;
      fVar15 = fVar21 * fVar32;
      fVar16 = fVar22 * fVar33;
      fVar31 = fVar31 - (fVar15 + fVar14 + fVar16) * fVar20;
      fVar32 = fVar32 - (fVar15 + fVar14 + fVar16) * fVar21;
      fVar33 = fVar33 - (fVar15 + fVar14 + fVar16) * fVar22;
      if ((fVar32 * fVar32 + fVar31 * fVar31 + fVar33 * fVar33 < fVar17 * fVar17) &&
         (uVar6 = uVar10 + 1, uVar13 = uVar10, *(int *)(param_1 + 0x20) <= (int)uVar6))
      goto LAB_144c590d4;
    }
    uVar11 = (ulonglong)(int)uVar6;
    uVar10 = uVar6;
    if (0 < (int)uVar6) {
      pfVar8 = (float *)(lVar2 + -0x50 + uVar11 * 0x90);
      uVar12 = uVar11;
      do {
        uVar10 = (uint)uVar12;
        if (((uint)pfVar8[0x10] & 0x10) != 0) break;
        fVar20 = pfVar8[-0x10];
        fVar21 = pfVar8[-0xf];
        fVar22 = pfVar8[-0xe];
        fVar14 = pfVar8[-8];
        fVar15 = pfVar8[-7];
        fVar16 = pfVar8[-6];
        fVar18 = local_a8 * pfVar8[-3];
        fVar19 = local_a8 * pfVar8[-2];
        fVar17 = fStack_a4 * pfVar8[2];
        local_a8 = local_a8 * pfVar8[-4] + pfVar8[8] + fStack_a4 * *pfVar8 + fStack_a0 * pfVar8[4];
        fStack_a4 = fVar18 + pfVar8[9] + fStack_a4 * pfVar8[1] + fStack_a0 * pfVar8[5];
        fStack_a0 = fVar19 + pfVar8[10] + fVar17 + fStack_a0 * pfVar8[6];
        fVar17 = pfVar8[-0xc] - local_a8;
        fVar18 = pfVar8[-0xb] - fStack_a4;
        fVar19 = pfVar8[-10] - fStack_a0;
        if (0.0 < ((fVar20 - local_a8) * fVar19 - fVar17 * (fVar22 - fStack_a0)) * fVar15 +
                  ((fVar22 - fStack_a0) * fVar18 - fVar19 * (fVar21 - fStack_a4)) * fVar14 +
                  ((fVar21 - fStack_a4) * fVar17 - fVar18 * (fVar20 - local_a8)) * fVar16) break;
        fVar31 = pfVar8[-0xc] - fVar20;
        fVar32 = pfVar8[-0xb] - fVar21;
        fVar33 = pfVar8[-10] - fVar22;
        fVar17 = fVar31 * fVar14;
        fVar19 = fVar32 * fVar15;
        fVar27 = fVar33 * fVar16;
        fVar18 = (local_a8 - fVar20) * fVar14;
        fVar26 = (fStack_a4 - fVar21) * fVar15;
        fVar28 = (fStack_a0 - fVar22) * fVar16;
        fVar31 = fVar31 - (fVar19 + fVar17 + fVar27) * fVar14;
        fVar32 = fVar32 - (fVar19 + fVar17 + fVar27) * fVar15;
        fVar33 = fVar33 - (fVar19 + fVar17 + fVar27) * fVar16;
        fVar17 = fVar31 * fVar31;
        fVar19 = fVar32 * fVar32;
        fVar27 = fVar33 * fVar33;
        fVar29 = (local_a8 - fVar20) - (fVar26 + fVar18 + fVar28) * fVar14;
        fVar30 = (fStack_a4 - fVar21) - (fVar26 + fVar18 + fVar28) * fVar15;
        fVar18 = (fStack_a0 - fVar22) - (fVar26 + fVar18 + fVar28) * fVar16;
        auVar3._4_4_ = fVar19 + fVar17 + fVar27;
        auVar3._0_4_ = fVar19 + fVar17 + fVar27;
        auVar3._8_4_ = fVar19 + fVar17 + fVar27;
        auVar3._12_4_ = fVar19 + fVar17 + fVar27;
        auVar23 = divps(_DAT_14c6daca0,auVar3);
        fVar20 = fVar29 * fVar31;
        fVar21 = fVar30 * fVar32;
        fVar22 = fVar18 * fVar33;
        auVar25._0_4_ = auVar23._0_4_ * (fVar21 + fVar20 + fVar22);
        auVar25._4_4_ = auVar23._4_4_ * (fVar21 + fVar20 + fVar22);
        auVar25._8_4_ = auVar23._8_4_ * (fVar21 + fVar20 + fVar22);
        auVar25._12_4_ = auVar23._12_4_ * (fVar21 + fVar20 + fVar22);
        auVar23 = minps(auVar25,_DAT_1499314a0);
        auVar23 = maxps(auVar23,ZEXT816(0));
        fVar29 = fVar29 - fVar31 * auVar23._0_4_;
        fVar30 = fVar30 - fVar32 * auVar23._4_4_;
        fVar18 = fVar18 - fVar33 * auVar23._8_4_;
        fVar20 = fVar29 * fVar14;
        fVar21 = fVar30 * fVar15;
        fVar22 = fVar18 * fVar16;
        fVar17 = ((0.0 - pfVar8[-9]) - pfVar8[-0xd]) * auVar23._0_4_ + pfVar8[-0xd];
        fVar29 = fVar29 - (fVar21 + fVar20 + fVar22) * fVar14;
        fVar30 = fVar30 - (fVar21 + fVar20 + fVar22) * fVar15;
        fVar18 = fVar18 - (fVar21 + fVar20 + fVar22) * fVar16;
        if (fVar17 * fVar17 <= fVar30 * fVar30 + fVar29 * fVar29 + fVar18 * fVar18) break;
        uVar10 = uVar10 - 1;
        uVar12 = (ulonglong)uVar10;
        uVar11 = uVar11 - 1;
        pfVar8 = pfVar8 + -0x24;
      } while (0 < (longlong)uVar11);
    }
    *param_2 = uVar6;
    param_2[1] = uVar10;
    *param_10 = local_b8[0];
    *param_11 = uVar13;
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 144c59120 FUN_144c59120 body=45 status=ok
// SIG undefined FUN_144c59120(void)

void FUN_144c59120(longlong param_1,int param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x90 + *(longlong *)(param_1 + 0x18);
  *param_4 = uVar2;
  uVar1 = (longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x18);
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 144c59150 FUN_144c59150 body=90 status=ok
// SIG undefined FUN_144c59150(void)

undefined8 FUN_144c59150(longlong param_1,uint *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x20) * 0x90 + *(longlong *)(param_1 + 0x18);
    auVar1._4_4_ = -(uint)(*(float *)(lVar5 + -0x7c) == *(float *)(lVar5 + -0x8c));
    auVar1._0_4_ = -(uint)(*(float *)(lVar5 + -0x80) == *(float *)(lVar5 + -0x90));
    auVar1._8_4_ = -(uint)(*(float *)(lVar5 + -0x78) == *(float *)(lVar5 + -0x88));
    auVar1._12_4_ = -(uint)(*(float *)(lVar5 + -0x74) == *(float *)(lVar5 + -0x84));
    iVar3 = movmskps(*(int *)(param_1 + 0x20),auVar1);
    if (iVar3 == 0xf) {
      uVar4 = 0xffffffff;
      if (*(int *)(lVar5 + -0x20) != -1) {
        uVar4 = *(uint *)(lVar5 + -0x20) >> 0x16;
      }
      *param_2 = uVar4;
      uVar2 = *(undefined8 *)(lVar5 + -0x88);
      *param_3 = *(undefined8 *)(lVar5 + -0x90);
      param_3[1] = uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144c591b0 FUN_144c591b0 body=32 status=ok
// SIG undefined FUN_144c591b0(void)

void FUN_144c591b0(longlong param_1,int param_2,byte param_3)

{
  *(undefined2 *)
   (*(longlong *)(param_1 + 0x18) + 0x7c + (((ulonglong)param_3 ^ 1) + (longlong)param_2 * 0x48) * 2
   ) = 0x8000;
  return;
}



// FUNCTION 144c591d0 FUN_144c591d0 body=54 status=ok
// SIG undefined FUN_144c591d0(void)

void FUN_144c591d0(longlong param_1,int param_2,byte param_3,short param_4,byte param_5)

{
  *(ushort *)
   (*(longlong *)(param_1 + 0x18) + 0x7c + (((ulonglong)param_3 ^ 1) + (longlong)param_2 * 0x48) * 2
   ) = (ushort)(param_5 | 6) << 0xd | param_4 - (short)param_2;
  return;
}



// FUNCTION 144c59210 FUN_144c59210 body=34 status=ok
// SIG undefined FUN_144c59210(void)

ushort FUN_144c59210(longlong param_1,int param_2,byte param_3)

{
  return *(ushort *)
          ((longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x18) + 0x7c +
          ((ulonglong)param_3 ^ 1) * 2) & 0x8000;
}



// FUNCTION 144c59240 FUN_144c59240 body=77 status=ok
// SIG undefined FUN_144c59240(void)

undefined8 FUN_144c59240(longlong param_1,int param_2,byte param_3,int *param_4,byte *param_5)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar1 = ((ulonglong)param_3 ^ 1) + (longlong)param_2 * 0x48;
  uVar2 = *(ushort *)(lVar3 + 0x7c + lVar1 * 2);
  if ((uVar2 >> 0xe & 1) != 0) {
    *param_4 = (uVar2 & 0x1fff) + param_2;
    *param_5 = (byte)((ushort)*(undefined2 *)(lVar3 + lVar1 * 2 + 0x7c) >> 0xd) & 1;
    return 1;
  }
  return 0;
}



// FUNCTION 144c59290 FUN_144c59290 body=2200 status=ok
// SIG undefined FUN_144c59290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c59290(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,float *param_5,
                  uint *param_6,uint *param_7,byte *param_8,float param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float local_res20 [2];
  undefined8 in_stack_fffffffffffffe08;
  undefined4 uVar36;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
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
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  uVar36 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
  pfVar23 = (float *)((longlong)(int)param_9 * 0x90 + *(longlong *)(param_1 + 0x18));
  uVar18 = param_4 & 0x3fffff;
  uVar15 = (ulonglong)uVar18;
  lVar17 = (longlong)(*(int *)(param_1 + 0x38) * (int)param_9);
  local_178 = *(longlong *)(param_1 + 0x28) + lVar17 * 4;
  local_180 = *(longlong *)(param_1 + 0x28) + (lVar17 + *(int *)(param_1 + 0x38)) * 4;
  lVar17 = *(longlong *)
            (*(longlong *)((ulonglong)(param_4 >> 0x16) * 0x120 + *(longlong *)(param_2 + 0x38)) +
            0x20);
  if ((int)uVar18 < *(int *)(lVar17 + 0x30)) {
    uVar22 = uVar18;
    if (*(int *)(lVar17 + 0x78) != 0) {
      uVar22 = *(uint *)(*(longlong *)(lVar17 + 0x70) + uVar15 * 4);
    }
    if (uVar22 == 0xffffffff) {
      lVar17 = *(longlong *)(lVar17 + 0x28);
      lVar13 = uVar15 * 5;
    }
    else {
      lVar13 = (longlong)(int)uVar22 * 5;
      lVar17 = *(longlong *)(lVar17 + 0xc0);
    }
  }
  else {
    lVar13 = (longlong)(int)(uVar18 - *(int *)(lVar17 + 0x30)) * 5;
    lVar17 = *(longlong *)(lVar17 + 0xe0);
  }
  uVar22 = *(uint *)(lVar17 + 8 + lVar13 * 4);
  piVar1 = (int *)(lVar17 + lVar13 * 4);
  local_1a8 = *(longlong *)((longlong)(int)*param_7 * 0x120 + *(longlong *)(param_2 + 0x38));
  lVar17 = *(longlong *)(local_1a8 + 0x20);
  uVar10 = *(uint *)(lVar17 + 0x17c);
  if ((*(byte *)(piVar1 + 4) & 0x40) != 0) {
    uVar10 = uVar22 >> 0x16;
  }
  uVar20 = piVar1[3];
  uVar21 = 0xffffffff;
  if (uVar22 != 0xffffffff) {
    uVar21 = uVar10;
  }
  if (((*(byte *)(piVar1 + 4) & 0x40) == 0) && (uVar20 != 0xffffffff)) {
    uVar20 = *(uint *)(lVar17 + 0x17c) << 0x16 | uVar20 & 0x3fffff;
  }
  iVar2 = *piVar1;
  iVar3 = *(int *)(lVar17 + 0x40);
  if (iVar2 < iVar3) {
    pfVar11 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar17 + 0x38));
  }
  else {
    pfVar11 = (float *)((longlong)(iVar2 - iVar3) * 0x10 + *(longlong *)(lVar17 + 0xf0));
  }
  fVar26 = *pfVar11;
  fVar27 = pfVar11[1];
  fVar28 = pfVar11[2];
  fStack_15c = pfVar11[3];
  iVar2 = piVar1[1];
  if (iVar2 < iVar3) {
    pfVar11 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar17 + 0x38));
  }
  else {
    pfVar11 = (float *)((longlong)(iVar2 - iVar3) * 0x10 + *(longlong *)(lVar17 + 0xf0));
  }
  fVar5 = *pfVar11;
  fVar6 = pfVar11[1];
  fVar7 = pfVar11[2];
  fVar8 = pfVar11[3];
  param_9 = (float)(*param_6 & 0x3fffff);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_168 = fVar26;
  fStack_164 = fVar27;
  fStack_160 = fVar28;
  local_158 = fVar5;
  fStack_154 = fVar6;
  fStack_150 = fVar7;
  fStack_14c = fVar8;
  local_188 = FUN_144c44fc0(lVar17,&param_9,&local_1c8);
  local_1b8 = 0;
  uStack_1b0 = 0;
  param_9 = (float)uVar18;
  uVar12 = FUN_144c450c0(*(undefined8 *)(local_1a8 + 0x20),&param_9,&local_1b8);
  if ((*(byte *)(piVar1 + 4) & 0x10) == 0) {
    param_9 = *(float *)(param_1 + 0x40);
    fVar29 = *(float *)(param_1 + 0x3c);
    if (*(float *)(param_1 + 0x3c) <= param_9) {
      fVar29 = param_9;
    }
    FUN_144c48e00(param_3,*param_6,local_188,&local_1c8,CONCAT44(uVar36,param_4),uVar12,&local_1b8,
                  fVar29,local_res20,&param_9);
    fVar29 = *(float *)(param_1 + 0x44);
    fVar35 = fVar29 - local_res20[0];
    fVar34 = fVar29 - param_9;
    fVar30 = (fVar5 - fVar26) * (fVar5 - fVar26);
    fVar31 = (fVar6 - fVar27) * (fVar6 - fVar27);
    fVar32 = (fVar7 - fVar28) * (fVar7 - fVar28);
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
    }
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
    auVar25._0_4_ = fVar31 + fVar30 + fVar32;
    auVar25._4_4_ = fVar31 + fVar30 + fVar32;
    auVar25._8_4_ = fVar31 + fVar30 + fVar32;
    auVar25._12_4_ = fVar31 + fVar30 + fVar32;
    auVar25 = sqrtps(auVar25,auVar25);
    fVar30 = auVar25._0_4_;
    if (fVar35 + fVar34 <= fVar30) {
      fVar31 = *(float *)(param_1 + 0x3c) - param_9;
      param_9 = *(float *)(param_1 + 0x40) - local_res20[0];
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
      if (param_9 <= 0.0) {
        param_9 = 0.0;
      }
      if (fVar30 < param_9 + fVar31) {
        fVar31 = *(float *)(param_1 + 0x40) - fVar29;
        fVar29 = *(float *)(param_1 + 0x3c) - fVar29;
        fVar30 = (fVar30 - (fVar35 + fVar34)) / (fVar31 + fVar29);
        param_9 = fVar30 * fVar31 + fVar35;
        fVar31 = fVar30 * fVar29 + fVar34;
      }
    }
    else if (param_9 == local_res20[0]) {
      param_9 = fVar30 * 0.5;
      fVar31 = param_9;
    }
    else {
      fVar30 = fVar30 / (local_res20[0] + param_9);
      param_9 = fVar30 * param_9;
      fVar31 = fVar30 * local_res20[0];
    }
  }
  else {
    param_9 = 0.0;
    fVar31 = 0.0;
  }
  *pfVar23 = fVar5;
  pfVar23[1] = fVar6;
  pfVar23[2] = fVar7;
  pfVar23[3] = -fVar31;
  pfVar23[4] = fVar26;
  pfVar23[5] = fVar27;
  pfVar23[6] = fVar28;
  pfVar23[7] = param_9;
  uVar12 = *(undefined8 *)(param_5 + 2);
  *(undefined8 *)(pfVar23 + 8) = *(undefined8 *)param_5;
  *(undefined8 *)(pfVar23 + 10) = uVar12;
  FUN_144b44130(pfVar23 + 0x1c,param_2,param_4,*param_6);
  *(char *)(pfVar23 + 0x20) = (char)piVar1[4];
  pfVar23[0x1f] = 0.0;
  lVar17 = *(longlong *)(local_1a8 + 0x20);
  iVar2 = *(int *)(lVar17 + 0x60);
  if ((int)uVar18 < *(int *)(lVar17 + 0x30)) {
    uVar10 = uVar18;
    if (*(int *)(lVar17 + 0x78) != 0) {
      uVar10 = *(uint *)(*(longlong *)(lVar17 + 0x70) + uVar15 * 4);
    }
    if (uVar10 == 0xffffffff) {
      lVar17 = *(longlong *)(lVar17 + 0x58) + (longlong)(int)(iVar2 * uVar18) * 4;
    }
    else {
      lVar17 = *(longlong *)(lVar17 + 0x130) + (longlong)(int)(uVar10 * iVar2) * 4;
    }
  }
  else {
    lVar17 = *(longlong *)(lVar17 + 0x150) +
             (longlong)(int)((uVar18 - *(int *)(lVar17 + 0x30)) * iVar2) * 4;
  }
  FUN_144b3d470(local_178,lVar17,(longlong)(int)(local_180 - local_178 >> 2) << 2);
  uVar18 = *param_7;
  lVar17 = *(longlong *)((longlong)(int)uVar21 * 0x120 + *(longlong *)(param_2 + 0x38));
  param_9 = (float)CONCAT31(param_9._1_3_,(char)piVar1[4]);
  bVar19 = *(byte *)(*(longlong *)(*(longlong *)(lVar17 + 0x20) + 0x68) + 0x80) & 1;
  if ((*param_8 == 0) && (bVar19 == 0)) {
    local_198 = *(float *)(lVar17 + 0xc0);
    fStack_194 = *(float *)(lVar17 + 0xc4);
    fStack_190 = *(float *)(lVar17 + 200);
    fStack_18c = *(float *)(lVar17 + 0xcc);
    bVar9 = false;
  }
  else {
    local_res20[0] = (float)(uVar20 & 0x3fffff);
    bVar9 = true;
    FUN_144c52b10(&local_1c8,lVar17,local_res20,&local_198);
  }
  uVar12 = uRam000000014c6dae48;
  if ((((uint)param_9 & 0x10) == 0) && (uVar21 == uVar18)) {
    if (bVar9) {
      local_118 = ZEXT816(0);
      local_f8 = *param_5;
      fStack_f4 = param_5[1];
      fStack_f0 = param_5[2];
      fStack_ec = param_5[3];
      fVar29 = local_198 * fStack_f4 - fStack_194 * local_f8;
      fVar30 = fStack_194 * fStack_f0 - fStack_190 * fStack_f4;
      fVar31 = fStack_190 * local_f8 - local_198 * fStack_f0;
      fVar26 = fVar30 * fVar30;
      fVar27 = fVar31 * fVar31;
      fVar28 = fVar29 * fVar29;
      auVar24._4_4_ = fVar26;
      auVar24._0_4_ = fVar26;
      auVar24._8_4_ = fVar26;
      auVar24._12_4_ = fVar26;
      fVar32 = fVar27 + fVar26 + fVar28;
      if (fVar32 != 0.0) {
        auVar4._4_4_ = fVar27 + fVar26 + fVar28;
        auVar4._0_4_ = fVar32;
        auVar4._8_4_ = fVar27 + fVar26 + fVar28;
        auVar4._12_4_ = fVar27 + fVar26 + fVar28;
        auVar25 = sqrtps(auVar24,auVar4);
        auVar33._4_4_ = fVar31;
        auVar33._0_4_ = fVar30;
        auVar33._8_4_ = fVar29;
        auVar33._12_4_ = fStack_18c * fStack_ec - fStack_18c * fStack_ec;
        local_118 = divps(auVar33,auVar25);
      }
      fVar26 = local_118._0_4_;
      local_138 = local_118._4_4_;
      local_128 = local_118._8_4_;
      fStack_100 = local_138 * local_f8 - fStack_f4 * fVar26;
      local_108 = local_128 * fStack_f4 - fStack_f0 * local_138;
      fStack_104 = fVar26 * fStack_f0 - local_f8 * local_128;
      fStack_fc = local_118._12_4_ * fStack_ec - fStack_ec * local_118._12_4_;
      fStack_124 = local_138 * local_198 - fStack_194 * fVar26;
      fStack_134 = fVar26 * fStack_190 - local_198 * local_128;
      local_148 = CONCAT44(local_128 * fStack_194 - fStack_190 * local_138,fVar26);
      uStack_140 = CONCAT44(fStack_194,local_198);
      fStack_130 = fStack_194;
      fStack_12c = fStack_18c;
      fStack_120 = fStack_190;
      fStack_11c = fStack_18c;
      FUN_144f75870(&local_e8,local_118,&local_148);
      pfVar23[0xc] = local_e8;
      pfVar23[0xd] = fStack_e4;
      pfVar23[0xe] = fStack_e0;
      pfVar23[0xf] = fStack_dc;
      pfVar23[0x10] = local_d8;
      pfVar23[0x11] = fStack_d4;
      pfVar23[0x12] = fStack_d0;
      pfVar23[0x13] = fStack_cc;
      pfVar23[0x14] = local_c8;
      pfVar23[0x15] = fStack_c4;
      pfVar23[0x16] = fStack_c0;
      pfVar23[0x17] = fStack_bc;
      fVar27 = fVar5 - (fVar6 * local_d8 + fVar5 * local_e8 + fVar7 * local_c8);
      fVar28 = fVar6 - (fVar6 * fStack_d4 + fVar5 * fStack_e4 + fVar7 * fStack_c4);
      fVar29 = fVar7 - (fVar6 * fStack_d0 + fVar5 * fStack_e0 + fVar7 * fStack_c0);
      pfVar23[0x18] = fVar27;
      pfVar23[0x19] = fVar28;
      pfVar23[0x1a] = fVar29;
      pfVar23[0x1b] = fVar8 - (fVar6 * fStack_cc + fVar5 * fStack_dc + fVar7 * fStack_bc);
      pfVar23[0xc] = local_e8;
      pfVar23[0xd] = fStack_e4;
      pfVar23[0xe] = fStack_e0;
      pfVar23[0xf] = 0.0;
      pfVar23[0x10] = local_d8;
      pfVar23[0x11] = fStack_d4;
      pfVar23[0x12] = fStack_d0;
      pfVar23[0x13] = 0.0;
      pfVar23[0x14] = local_c8;
      pfVar23[0x15] = fStack_c4;
      pfVar23[0x16] = fStack_c0;
      pfVar23[0x17] = 0.0;
      fVar26 = fRam000000014c6dacac;
      pfVar23[0x18] = fVar27;
      pfVar23[0x19] = fVar28;
      pfVar23[0x1a] = fVar29;
      pfVar23[0x1b] = fVar26;
    }
    else {
      *(undefined8 *)(pfVar23 + 0xc) = _DAT_14c6dae40;
      *(undefined8 *)(pfVar23 + 0xe) = uVar12;
      uVar12 = uRam000000014c6dae58;
      *(undefined8 *)(pfVar23 + 0x10) = _DAT_14c6dae50;
      *(undefined8 *)(pfVar23 + 0x12) = uVar12;
      uVar12 = uRam000000014c6dae68;
      *(undefined8 *)(pfVar23 + 0x14) = _DAT_14c6dae60;
      *(undefined8 *)(pfVar23 + 0x16) = uVar12;
      uVar12 = _DAT_14c6dae78;
      *(undefined8 *)(pfVar23 + 0x18) = _DAT_14c6dae70;
      *(undefined8 *)(pfVar23 + 0x1a) = uVar12;
    }
  }
  else {
    lVar17 = *(longlong *)(lVar17 + 0x20);
    uVar22 = uVar22 & 0x3fffff;
    if ((int)uVar22 < *(int *)(lVar17 + 0x30)) {
      uVar15 = (ulonglong)uVar22;
      if (*(int *)(lVar17 + 0x78) != 0) {
        uVar22 = *(uint *)(*(longlong *)(lVar17 + 0x70) + (ulonglong)uVar22 * 4);
      }
      if (uVar22 == 0xffffffff) {
        lVar13 = *(longlong *)(lVar17 + 0x28);
        lVar16 = uVar15 * 5;
      }
      else {
        lVar16 = (longlong)(int)uVar22 * 5;
        lVar13 = *(longlong *)(lVar17 + 0xc0);
      }
    }
    else {
      lVar16 = (longlong)(int)(uVar22 - *(int *)(lVar17 + 0x30)) * 5;
      lVar13 = *(longlong *)(lVar17 + 0xe0);
    }
    piVar1 = (int *)(lVar13 + lVar16 * 4);
    iVar2 = *(int *)(lVar17 + 0x40);
    iVar3 = *piVar1;
    if (iVar3 < iVar2) {
      puVar14 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar17 + 0x38));
    }
    else {
      puVar14 = (undefined8 *)((longlong)(iVar3 - iVar2) * 0x10 + *(longlong *)(lVar17 + 0xf0));
    }
    local_1b8 = *puVar14;
    uStack_1b0 = puVar14[1];
    iVar3 = piVar1[1];
    if (iVar3 < iVar2) {
      puVar14 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar17 + 0x38));
    }
    else {
      puVar14 = (undefined8 *)((longlong)(iVar3 - iVar2) * 0x10 + *(longlong *)(lVar17 + 0xf0));
    }
    local_1c8 = *puVar14;
    uStack_1c0 = puVar14[1];
    FUN_144b442e0(&local_158,&local_168,param_5,&local_1b8,&local_1c8,&local_198,pfVar23 + 0xc);
  }
  *param_7 = uVar21;
  *param_6 = uVar20;
  *param_8 = bVar19;
  *(ulonglong *)param_5 = CONCAT44(fStack_194,local_198);
  *(ulonglong *)(param_5 + 2) = CONCAT44(fStack_18c,fStack_190);
  return;
}



// FUNCTION 144c59b30 FUN_144c59b30 body=270 status=ok
// SIG undefined FUN_144c59b30(void)

bool FUN_144c59b30(longlong param_1,int param_2,char param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 local_res8 [2];
  int local_res10 [2];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined1 local_c [4];
  
  pfVar4 = (float *)((longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x18));
  pfVar5 = (float *)(((longlong)param_2 + 1) * 0x90 + *(longlong *)(param_1 + 0x18));
  auVar1._4_4_ = -(uint)(pfVar4[5] == pfVar4[1]);
  auVar1._0_4_ = -(uint)(pfVar4[4] == *pfVar4);
  auVar1._8_4_ = -(uint)(pfVar4[6] == pfVar4[2]);
  auVar1._12_4_ = -(uint)(pfVar4[7] == pfVar4[3]);
  iVar3 = movmskps(param_2,auVar1);
  if ((iVar3 != 0xf) && (((uint)pfVar4[0x20] & 0x10) == 0)) {
    auVar2._4_4_ = -(uint)(pfVar5[5] == pfVar5[1]);
    auVar2._0_4_ = -(uint)(pfVar5[4] == *pfVar5);
    auVar2._8_4_ = -(uint)(pfVar5[6] == pfVar5[2]);
    auVar2._12_4_ = -(uint)(pfVar5[7] == pfVar5[3]);
    iVar3 = movmskps(iVar3,auVar2);
    if ((iVar3 != 0xf) && (((uint)pfVar5[0x20] & 0x10) == 0)) {
      FUN_144b40820(&local_18,pfVar4,param_4,&local_14);
      if (local_18 != -1) {
        local_res10[0] = local_18;
        local_res8[0] = local_14;
        if (param_3 == '\0') {
          iVar3 = FUN_144c5b850(param_4,local_res10,local_res8,param_5);
        }
        else {
          iVar3 = FUN_144c5bab0();
        }
        if (iVar3 == 0) {
          FUN_144b40820(&local_10,pfVar5,param_4,local_c);
          return local_res10[0] == local_10;
        }
      }
    }
  }
  return false;
}



// FUNCTION 144c59c40 FUN_144c59c40 body=140 status=ok
// SIG undefined FUN_144c59c40(void)

void FUN_144c59c40(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  param_3 = *(int *)(param_1 + 0x20) - param_3;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < param_3) {
    FUN_144c5c170(param_2,&PTR_vftable_14c6e47a0,(longlong)param_3);
  }
  iVar2 = (int)param_2[1];
  if ((iVar2 < param_3) || (param_3 < iVar2)) {
    *(int *)(param_2 + 1) = param_3;
    iVar2 = param_3;
  }
  lVar1 = *param_2;
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = lVar3;
    do {
      *(undefined4 *)(lVar1 + lVar3 * 4) =
           *(undefined4 *)(lVar4 + 0x70 + *(longlong *)(param_1 + 0x18));
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x90;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 144c59cd0 FUN_144c59cd0 body=78 status=ok
// SIG undefined FUN_144c59cd0(void)

void FUN_144c59cd0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  iVar1 = (int)(param_2[1] - (longlong)*param_2 >> 2);
  lVar4 = (longlong)iVar1;
  if (0 < iVar1) {
    lVar2 = (longlong)param_3 * 0x90;
    puVar3 = (undefined4 *)*param_2;
    do {
      *puVar3 = *(undefined4 *)(lVar2 + 0x70 + *(longlong *)(param_1 + 0x18));
      lVar4 = lVar4 + -1;
      lVar2 = lVar2 + 0x90;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144c59d20 FUN_144c59d20 body=344 status=ok
// SIG undefined FUN_144c59d20(void)

void FUN_144c59d20(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  iVar3 = *(int *)(param_1 + 0x20);
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  lVar5 = (longlong)param_2;
  puVar1 = puVar8 + lVar5 * 0x12;
  lVar7 = ((longlong)iVar3 * 0x90 - (longlong)puVar1) + (longlong)puVar8;
  lVar7 = lVar7 / 0x12 + (lVar7 >> 0x3f);
  iVar6 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f);
  if (0 < iVar6) {
    if (puVar8 < puVar1) {
      if ((longlong)iVar6 * 0x90 != 0) {
        lVar7 = ((longlong)iVar6 * 0x90 - 1U >> 3) + 1;
        do {
          *puVar8 = puVar8[lVar5 * 0x12];
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else if (puVar8 != puVar1) {
      FUN_144bfb260(puVar8,puVar1,(longlong)iVar6 * 0x90);
    }
  }
  *(int *)(param_1 + 0x20) = iVar3 - (int)((lVar5 * 0x90) / 0x90);
  param_2 = param_2 * *(int *)(param_1 + 0x38);
  puVar4 = *(undefined4 **)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x30);
  puVar2 = puVar4 + param_2;
  iVar6 = (int)(((longlong)iVar3 * 4 - (longlong)puVar2) + (longlong)puVar4 >> 2);
  if (0 < iVar6) {
    if (puVar4 < puVar2) {
      if ((longlong)iVar6 * 4 != 0) {
        lVar7 = ((longlong)iVar6 * 4 - 1U >> 2) + 1;
        do {
          *puVar4 = puVar4[param_2];
          puVar4 = puVar4 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else if (puVar4 != puVar2) {
      FUN_144bfb260(puVar4,puVar2,(longlong)iVar6 << 2);
    }
  }
  *(int *)(param_1 + 0x30) = iVar3 - param_2;
  return;
}



// FUNCTION 144c59e80 FUN_144c59e80 body=622 status=ok
// SIG undefined FUN_144c59e80(void)

undefined8
FUN_144c59e80(longlong param_1,undefined8 param_2,float *param_3,float param_4,float param_5,
             longlong param_6,int *param_7,float *param_8)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float extraout_XMM0_Da;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  uint local_res20 [2];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  piVar2 = param_7;
  iVar3 = *param_7;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  param_4 = param_4 * param_4;
  iVar4 = -1;
  if (iVar3 < *(int *)(param_1 + 0x20)) {
    do {
      FUN_144ca81d0((longlong)iVar3 * 0x90 + *(longlong *)(param_1 + 0x18) + 0x70,local_res20,
                    param_6);
      lVar1 = *(longlong *)
               ((ulonglong)(local_res20[0] >> 0x16) * 0x120 + *(longlong *)(param_6 + 0x38));
      if (0.0 <= param_3[3] + param_3[2] * *(float *)(lVar1 + 200) +
                 param_3[1] * *(float *)(lVar1 + 0xc4) + *param_3 * *(float *)(lVar1 + 0xc0)) {
        param_7._0_4_ = local_res20[0] & 0x3fffff;
        FUN_144b3dde0(lVar1,&param_7,param_2,&local_b8);
        if (extraout_XMM0_Da < param_4) {
          param_7._0_4_ = local_res20[0] & 0x3fffff;
          FUN_144b3dd40(lVar1,&param_7,&local_a8);
          fVar11 = *(float *)(lVar1 + 0xc0) * local_a8;
          fVar12 = *(float *)(lVar1 + 0xc4) * fStack_a4;
          fVar13 = *(float *)(lVar1 + 200) * fStack_a0;
          fVar7 = fStack_a4 * fStack_b4 + local_a8 * local_b8;
          fVar8 = local_a8 * local_b8 + fStack_a4 * fStack_b4;
          fVar9 = fStack_9c + fStack_a0 * fStack_b0;
          fVar10 = fStack_a0 * fStack_b0 + fStack_9c;
          auVar6._0_4_ = fVar12 + fVar11 + fVar13;
          auVar6._4_4_ = fVar12 + fVar11 + fVar13;
          auVar6._8_4_ = fVar12 + fVar11 + fVar13;
          auVar6._12_4_ = fVar12 + fVar11 + fVar13;
          auVar5._0_4_ = 0.0 - (fVar9 + fVar7);
          auVar5._4_4_ = 0.0 - (fVar10 + fVar8);
          auVar5._8_4_ = 0.0 - (fVar7 + fVar9);
          auVar5._12_4_ = 0.0 - (fVar8 + fVar10);
          auVar6 = divps(auVar5,auVar6);
          local_b8 = auVar6._0_4_ * *(float *)(lVar1 + 0xc0) + local_b8;
          fStack_b4 = auVar6._4_4_ * *(float *)(lVar1 + 0xc4) + fStack_b4;
          fStack_b0 = auVar6._8_4_ * *(float *)(lVar1 + 200) + fStack_b0;
          fStack_ac = auVar6._12_4_ * *(float *)(lVar1 + 0xcc) + fStack_ac;
          if ((ABS(auVar6._0_4_) < param_5) &&
             (param_4 = extraout_XMM0_Da, fVar14 = local_b8, fVar15 = fStack_b4, fVar16 = fStack_b0,
             fVar17 = fStack_ac, iVar4 = iVar3, extraout_XMM0_Da == 0.0)) break;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x20));
    if (-1 < iVar4) {
      *piVar2 = iVar4;
      *param_8 = fVar14;
      param_8[1] = fVar15;
      param_8[2] = fVar16;
      param_8[3] = fVar17;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144c5a0f0 FUN_144c5a0f0 body=1529 status=ok
// SIG undefined FUN_144c5a0f0(void)

undefined8
FUN_144c5a0f0(longlong param_1,int param_2,ulonglong param_3,longlong param_4,longlong param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  uint local_res8 [2];
  uint local_res10 [2];
  byte local_res18;
  uint local_res20 [2];
  uint local_98 [2];
  longlong local_90;
  uint local_88 [2];
  longlong local_80;
  uint local_78 [2];
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  local_res18 = (byte)param_3;
  iVar4 = *(int *)(param_4 + 4) + 1;
  iVar6 = 1;
  if (1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar4 = param_2;
  if (iVar6 <= param_2) {
    do {
      iVar11 = iVar4 + -1;
      iVar5 = FUN_144c59b30(param_1,iVar11,param_3,param_5,param_6);
      if (iVar5 == 0) break;
      param_3 = (ulonglong)local_res18;
      iVar4 = iVar11;
    } while (iVar6 <= iVar11);
    param_3 = (ulonglong)local_res18;
  }
  param_2 = param_2 + 1;
  bVar15 = param_2 == *(int *)(param_1 + 0x20);
  if (param_2 < *(int *)(param_1 + 0x20)) {
    do {
      iVar6 = FUN_144c59b30(param_1,param_2 + -1,param_3,param_5,param_6);
      if (iVar6 == 0) break;
      param_3 = (ulonglong)local_res18;
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0x20));
    bVar15 = param_2 == *(int *)(param_1 + 0x20);
  }
  if (bVar15) {
    return 1;
  }
  FUN_144ca81d0((longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x18) + 0x70,local_88,param_5);
  if (local_88[0] == 0xffffffff) {
    return 2;
  }
  local_70 = (longlong)iVar4;
  param_2 = param_2 - iVar4;
  local_90 = local_70 * 0x90;
  local_80 = *(longlong *)(param_1 + 0x18) + local_90;
  FUN_144b40820(local_78,local_80,param_5,local_res20);
  uVar3 = local_res20[0];
  if (local_78[0] == 0xffffffff) {
    return 2;
  }
  local_res10[0] = local_78[0];
  local_98[0] = 0;
  local_res8[0] = local_res20[0];
  if (local_res18 == 0) {
    iVar6 = FUN_144c5b6d0(param_5,local_res10,local_res20[0]);
  }
  else {
    iVar6 = FUN_144c5b790();
  }
  if (iVar6 != 0) {
    return 2;
  }
  uVar12 = local_98[0];
  if (uVar3 != local_88[0]) {
    do {
      uVar12 = uVar12 + 1;
      local_98[0] = uVar12;
      if (local_res18 == 0) {
        iVar6 = FUN_144c5bab0(param_5,local_res10,local_res8,param_6);
      }
      else {
        iVar6 = FUN_144c5b850();
      }
      if (iVar6 != 0) {
        return 2;
      }
      if (local_res8[0] == local_res20[0]) {
        return 2;
      }
    } while (local_res8[0] != local_88[0]);
  }
  uVar1 = *(undefined8 *)(local_80 + 0x20);
  uVar2 = *(undefined8 *)(local_80 + 0x28);
  if ((int)uVar12 < param_2) {
    param_2 = param_2 - uVar12;
    local_res10[0] = *(int *)(param_1 + 0x20) - param_2;
    iVar6 = local_res10[0] - iVar4;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < (int)local_res10[0]) {
      FUN_144c5c270(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)(int)local_res10[0]);
    }
    puVar7 = (undefined8 *)(local_90 + *(longlong *)(param_1 + 0x18));
    if (0 < iVar6) {
      puVar13 = puVar7 + (longlong)param_2 * 0x12;
      if (puVar7 < puVar13) {
        if ((longlong)iVar6 * 0x90 != 0) {
          lVar9 = ((longlong)iVar6 * 0x90 - 1U >> 3) + 1;
          do {
            *puVar7 = puVar7[(longlong)param_2 * 0x12];
            puVar7 = puVar7 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      else if (puVar7 != puVar13) {
        FUN_144bfb260(puVar7,puVar13,(longlong)iVar6 * 0x90);
      }
    }
    *(uint *)(param_1 + 0x20) = local_res10[0];
    local_res8[0] = *(int *)(param_1 + 0x38) * iVar4;
    local_res10[0] = *(int *)(param_1 + 0x38) * param_2;
    iVar6 = *(int *)(param_1 + 0x30) - local_res10[0];
    local_90 = CONCAT44(local_90._4_4_,iVar6);
    iVar5 = iVar6 - local_res8[0];
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar6) {
      FUN_141807aa8(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)local_res8[0] * 4);
    if (0 < iVar5) {
      puVar10 = puVar8 + (int)local_res10[0];
      if (puVar8 < puVar10) {
        if ((longlong)iVar5 * 4 != 0) {
          lVar9 = ((longlong)iVar5 * 4 - 1U >> 2) + 1;
          do {
            *puVar8 = puVar8[(int)local_res10[0]];
            puVar8 = puVar8 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      else if (puVar8 != puVar10) {
LAB_144c5a547:
        FUN_144bfb260(puVar8,puVar10,(longlong)iVar5 << 2);
      }
    }
  }
  else {
    if ((int)uVar12 <= param_2) goto LAB_144c5a55a;
    local_res10[0] = uVar12 - param_2;
    local_res8[0] = *(int *)(param_1 + 0x20) + local_res10[0];
    iVar6 = *(int *)(param_1 + 0x20) - iVar4;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < (int)local_res8[0]) {
      FUN_144c5c270(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)(int)local_res8[0]);
    }
    uVar3 = local_res10[0];
    puVar13 = (undefined8 *)(local_90 + *(longlong *)(param_1 + 0x18));
    puVar7 = puVar13 + (longlong)(int)local_res10[0] * 0x12;
    if (iVar6 != 0) {
      if (puVar7 < puVar13) {
        if ((longlong)iVar6 * 0x90 != 0) {
          lVar14 = (longlong)puVar13 - (longlong)puVar7;
          lVar9 = ((longlong)iVar6 * 0x90 - 1U >> 3) + 1;
          do {
            *puVar7 = *(undefined8 *)(lVar14 + (longlong)puVar7);
            puVar7 = puVar7 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      else if (puVar7 != puVar13) {
        FUN_144bfb260(puVar7,puVar13,(longlong)iVar6 * 0x90);
      }
    }
    *(uint *)(param_1 + 0x20) = local_res8[0];
    local_res10[0] = *(int *)(param_1 + 0x38) * iVar4;
    local_res8[0] = *(int *)(param_1 + 0x38) * uVar3;
    iVar6 = local_res8[0] + *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x30) - local_res10[0];
    local_90 = CONCAT44(local_90._4_4_,iVar6);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar6) {
      FUN_141807aa8(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)local_res10[0] * 4);
    puVar8 = puVar10 + (int)local_res8[0];
    if (iVar5 != 0) {
      if (puVar8 < puVar10) {
        if ((longlong)iVar5 * 4 != 0) {
          lVar14 = (longlong)puVar10 - (longlong)puVar8;
          lVar9 = ((longlong)iVar5 * 4 - 1U >> 2) + 1;
          do {
            *puVar8 = *(undefined4 *)(lVar14 + (longlong)puVar8);
            puVar8 = puVar8 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      else if (puVar8 != puVar10) goto LAB_144c5a547;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_90;
LAB_144c5a55a:
  local_res8[0] = local_78[0];
  local_90 = CONCAT44(local_90._4_4_,local_res20[0] >> 0x16);
  local_80 = CONCAT44(local_80._4_4_,local_res20[0]);
  local_res10[0] =
       CONCAT31(local_res10[0]._1_3_,
                *(undefined1 *)
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       ((ulonglong)(local_res20[0] >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38))
                     + 0x20) + 0x68) + 0x80)) & 0xffffff01;
  local_68 = uVar1;
  uStack_60 = uVar2;
  if (local_res18 == 0) {
    FUN_144c5b6d0(param_5,local_res8);
  }
  else {
    FUN_144c5b790();
  }
  iVar6 = local_98[0] + iVar4;
  if (iVar4 != iVar6) {
    local_98[0] = local_res20[0];
    if (local_res18 == 0) {
      while( true ) {
        local_98[0] = local_res20[0];
        FUN_144c59290(param_1,param_5,param_6,local_res8[0],&local_68,local_98,&local_90,local_res10
                      ,iVar4);
        FUN_144c5bab0(param_5,local_res8,&local_80,param_6);
        iVar4 = iVar4 + 1;
        if (iVar4 == iVar6) break;
        local_res20[0] = (uint)local_80;
      }
    }
    else {
      while( true ) {
        FUN_144c59290(param_1,param_5,param_6,local_res8[0],&local_68,local_98,&local_90,local_res10
                      ,iVar4);
        FUN_144c5b850(param_5,local_res8,&local_80,param_6);
        iVar4 = iVar4 + 1;
        if (iVar4 == iVar6) break;
        local_98[0] = (uint)local_80;
      }
    }
  }
  if (local_70 != 0) {
    lVar9 = 0;
    do {
      *(undefined2 *)(lVar9 + 0x7c + *(longlong *)(param_1 + 0x18)) = 0;
      *(undefined2 *)(lVar9 + 0x7e + *(longlong *)(param_1 + 0x18)) = 0;
      local_70 = local_70 + -1;
      lVar9 = lVar9 + 0x90;
    } while (local_70 != 0);
  }
  return 0;
}



// FUNCTION 144c5a6f0 FUN_144c5a6f0 body=4056 status=ok
// SIG undefined FUN_144c5a6f0(void)

/* WARNING: Removing unreachable block (ram,0x000144c5a8e5) */
/* WARNING: Removing unreachable block (ram,0x000144c5a78f) */
/* WARNING: Removing unreachable block (ram,0x000144c5a785) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_144c5a6f0(longlong param_1,int param_2,char param_3,undefined8 param_4,longlong param_5,
             undefined8 param_6,float *param_7)

{
  undefined4 *puVar1;
  short sVar2;
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
  float *pfVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  float *******pppppppfVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  uint uVar29;
  float *pfVar30;
  longlong lVar31;
  undefined8 *puVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  longlong lVar39;
  int iVar40;
  int iVar41;
  undefined1 *puVar42;
  uint uVar43;
  bool bVar44;
  bool bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  uint local_res18 [2];
  uint local_154;
  uint local_150 [2];
  longlong local_148;
  float fStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  uint local_130 [2];
  float ******local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float *******local_118;
  undefined4 uStack_110;
  float fStack_10c;
  float *******local_108;
  undefined8 uStack_100;
  float ******local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  longlong local_d8;
  longlong local_d0;
  float *******local_c8;
  undefined8 uStack_c0;
  float ******local_b8;
  undefined8 uStack_b0;
  float *******local_a8;
  undefined8 uStack_a0;
  float ******local_98;
  undefined8 uStack_90;
  
  local_d0 = (longlong)param_2;
  local_138 = (longlong *)(param_1 + 0x18);
  pfVar30 = (float *)(local_d0 * 0x90 + *local_138);
  fVar52 = *param_7 * *param_7;
  fVar3 = pfVar30[8];
  fVar4 = pfVar30[9];
  fVar5 = pfVar30[10];
  fStack_dc = pfVar30[0xb];
  pfVar25 = pfVar30 + 4;
  pfVar15 = pfVar30;
  if (param_3 == '\0') {
    pfVar25 = pfVar30;
    pfVar15 = pfVar30 + 4;
  }
  fVar7 = *pfVar15;
  fVar8 = pfVar15[1];
  local_148 = *(longlong *)pfVar15;
  fVar6 = pfVar15[2];
  fVar10 = *pfVar25;
  fVar11 = pfVar25[1];
  fVar9 = pfVar25[2];
  uStack_13c = 0;
  fStack_140 = fVar6;
  local_e8 = fVar3;
  fStack_e4 = fVar4;
  fStack_e0 = fVar5;
  puVar19 = (uint *)FUN_144b40820(local_res18,pfVar30,param_5,local_150);
  uVar24 = *puVar19;
  uVar35 = uVar24 & 0x3fffff;
  local_d8 = (ulonglong)(uVar24 >> 0x16) * 0x120;
  lVar31 = *(longlong *)(*(longlong *)(local_d8 + *(longlong *)(param_5 + 0x38)) + 0x20);
  if ((int)uVar35 < *(int *)(lVar31 + 0x30)) {
    uVar17 = uVar35;
    if (*(int *)(lVar31 + 0x78) != 0) {
      uVar17 = *(uint *)(*(longlong *)(lVar31 + 0x70) + (ulonglong)uVar35 * 4);
    }
    if (uVar17 == 0xffffffff) {
      lVar39 = *(longlong *)(lVar31 + 0x28);
      lVar22 = (ulonglong)uVar35 * 5;
    }
    else {
      lVar22 = (longlong)(int)uVar17 * 5;
      lVar39 = *(longlong *)(lVar31 + 0xc0);
    }
  }
  else {
    lVar22 = (longlong)(int)(uVar35 - *(int *)(lVar31 + 0x30)) * 5;
    lVar39 = *(longlong *)(lVar31 + 0xe0);
  }
  uVar17 = *(uint *)(lVar39 + lVar22 * 4 + 8);
  if ((*(byte *)(lVar39 + 0x10 + lVar22 * 4) & 0x40) == 0) {
    if (uVar17 == 0xffffffff) {
      return 2;
    }
    uVar17 = *(int *)(lVar31 + 0x17c) << 0x16 | uVar17 & 0x3fffff;
  }
  if (uVar17 != 0xffffffff) {
    local_res18[0] = uVar17 & 0x3fffff;
    FUN_144c2ead0(*(undefined8 *)
                   ((ulonglong)(uVar17 >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38)),local_res18
                  ,&local_118,&local_128);
    local_108 = local_118;
    uStack_100 = CONCAT44(fStack_10c,uStack_110);
    uVar17 = 0xffffffff;
    pppppppfVar20 = (float *******)&local_108;
    if (param_3 == '\0') {
      pppppppfVar20 = &local_f8;
    }
    local_f8 = local_128;
    uStack_f0 = CONCAT44(uStack_11c,uStack_120);
    fVar13 = *(float *)pppppppfVar20;
    fVar14 = *(float *)((longlong)pppppppfVar20 + 4);
    fVar12 = *(float *)(pppppppfVar20 + 1);
    FUN_144c5bd10(local_res18,
                  *(undefined8 *)
                   ((ulonglong)(local_150[0] >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38)),
                  local_150[0],&local_148,&local_e8,param_6,&local_118);
    uVar43 = local_150[0];
    if (((local_res18[0] != 0xffffffff) && (fStack_10c < fVar52)) &&
       (uVar17 = local_150[0] & 0xffc00000 | local_res18[0], uVar17 != 0xffffffff)) {
      uVar43 = local_res18[0] & 0x3fffff;
      lVar31 = *(longlong *)
                (*(longlong *)((ulonglong)(uVar17 >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38))
                + 0x20);
      if ((int)uVar43 < *(int *)(lVar31 + 0x30)) {
        uVar21 = (ulonglong)uVar43;
        if (*(int *)(lVar31 + 0x78) != 0) {
          uVar43 = *(uint *)(*(longlong *)(lVar31 + 0x70) + (ulonglong)uVar43 * 4);
        }
        if (uVar43 == 0xffffffff) {
          lVar39 = *(longlong *)(lVar31 + 0x28);
          lVar22 = uVar21 * 5;
        }
        else {
          lVar22 = (longlong)(int)uVar43 * 5;
          lVar39 = *(longlong *)(lVar31 + 0xc0);
        }
      }
      else {
        lVar22 = (longlong)(int)(uVar43 - *(int *)(lVar31 + 0x30)) * 5;
        lVar39 = *(longlong *)(lVar31 + 0xe0);
      }
      uVar43 = *(uint *)(lVar39 + lVar22 * 4 + 0xc);
      if (((*(byte *)(lVar39 + 0x10 + lVar22 * 4) & 0x40) == 0) && (uVar43 != 0xffffffff)) {
        uVar43 = *(int *)(lVar31 + 0x17c) << 0x16 | uVar43 & 0x3fffff;
      }
    }
    uVar29 = uVar43 & 0x3fffff;
    lVar31 = *(longlong *)
              (*(longlong *)((ulonglong)(uVar43 >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38)) +
              0x20);
    if ((int)uVar29 < *(int *)(lVar31 + 0x20)) {
      uVar21 = (ulonglong)uVar29;
      if (*(int *)(lVar31 + 0x98) != 0) {
        uVar29 = *(uint *)(*(longlong *)(lVar31 + 0x90) + (ulonglong)uVar29 * 4);
      }
      if (uVar29 == 0xffffffff) {
        lVar31 = *(longlong *)(lVar31 + 0x18);
        lVar39 = uVar21 * 3;
      }
      else {
        lVar39 = (longlong)(int)uVar29 * 3;
        lVar31 = *(longlong *)(lVar31 + 0xb0);
      }
    }
    else {
      lVar39 = (longlong)(int)(uVar29 - *(int *)(lVar31 + 0x20)) * 3;
      lVar31 = *(longlong *)(lVar31 + 0xd0);
    }
    local_128 = (float ******)(lVar31 + lVar39 * 4);
    uVar29 = 0xffffffff;
    param_7._0_4_ = 0;
    local_130[0] = uVar43;
    if (0 < *(short *)((longlong)local_128 + 10)) {
      do {
        if (uVar29 != 0xffffffff) goto LAB_144c5add7;
        uVar36 = *(int *)((longlong)local_128 + 4) + (int)param_7;
        uVar37 = uVar36 | uVar43 & 0xffc00000;
        uVar18 = uVar29;
        if (uVar37 != uVar24) {
          uVar36 = uVar36 & 0x3fffff;
          uVar21 = (ulonglong)uVar36;
          local_148 = (ulonglong)(uVar37 >> 0x16) * 0x120;
          lVar31 = *(longlong *)(*(longlong *)(local_148 + *(longlong *)(param_5 + 0x38)) + 0x20);
          if ((int)uVar36 < *(int *)(lVar31 + 0x30)) {
            uVar23 = uVar36;
            if (*(int *)(lVar31 + 0x78) != 0) {
              uVar23 = *(uint *)(*(longlong *)(lVar31 + 0x70) + uVar21 * 4);
            }
            if (uVar23 == 0xffffffff) {
              lVar31 = *(longlong *)(lVar31 + 0x28);
              lVar39 = uVar21 * 5;
            }
            else {
              lVar39 = (longlong)(int)uVar23 * 5;
              lVar31 = *(longlong *)(lVar31 + 0xc0);
            }
          }
          else {
            lVar39 = (longlong)(int)(uVar36 - *(int *)(lVar31 + 0x30)) * 5;
            lVar31 = *(longlong *)(lVar31 + 0xe0);
          }
          if (((*(int *)(lVar31 + 8 + lVar39 * 4) != -1) &&
              ((*(byte *)(lVar31 + lVar39 * 4 + 0x10) & 0x20) == 0)) &&
             (cVar16 = FUN_144c49370(param_6,uVar37,6), cVar16 != '\0')) {
            puVar42 = &DAT_149995410;
            local_154 = uVar36;
            do {
              local_res18[0] = CONCAT31(local_res18[0]._1_3_,*puVar42);
              FUN_144c2ead0(*(undefined8 *)(*(longlong *)(param_5 + 0x38) + local_148),&local_154,
                            &local_c8,&local_b8);
              local_f8 = local_b8;
              uStack_f0 = uStack_b0;
              local_108 = local_c8;
              uStack_100 = uStack_c0;
              pppppppfVar20 = &local_f8;
              if ((byte)local_res18[0] == '\0') {
                pppppppfVar20 = (float *******)&local_108;
              }
              fVar49 = *(float *)pppppppfVar20 - fVar7;
              fVar50 = *(float *)((longlong)pppppppfVar20 + 4) - fVar8;
              fVar51 = *(float *)(pppppppfVar20 + 1) - fVar6;
              fVar46 = fVar49 * fVar3;
              fVar47 = fVar50 * fVar4;
              fVar48 = fVar51 * fVar5;
              fVar49 = fVar49 - (fVar47 + fVar46 + fVar48) * fVar3;
              fVar50 = fVar50 - (fVar47 + fVar46 + fVar48) * fVar4;
              fVar51 = fVar51 - (fVar47 + fVar46 + fVar48) * fVar5;
              if (fVar50 * fVar50 + fVar49 * fVar49 + fVar51 * fVar51 <= fVar52) {
                local_118 = (float *******)&local_108;
                if ((byte)local_res18[0] == '\0') {
                  local_118 = &local_f8;
                }
                if (0.0 <= (*(float *)((longlong)local_118 + 4) -
                           *(float *)((longlong)pppppppfVar20 + 4)) * (fVar8 - fVar11) +
                           (*(float *)local_118 - *(float *)pppppppfVar20) * (fVar7 - fVar10) +
                           (*(float *)(local_118 + 1) - *(float *)(pppppppfVar20 + 1)) *
                           (fVar6 - fVar9)) {
                  lVar31 = *(longlong *)
                            (*(longlong *)(*(longlong *)(param_5 + 0x38) + local_148) + 0x20);
                  if ((int)uVar36 < *(int *)(lVar31 + 0x30)) {
                    uVar18 = uVar36;
                    if (*(int *)(lVar31 + 0x78) != 0) {
                      uVar18 = *(uint *)(*(longlong *)(lVar31 + 0x70) + uVar21 * 4);
                    }
                    if (uVar18 == 0xffffffff) {
                      lVar39 = *(longlong *)(lVar31 + 0x28);
                      lVar22 = uVar21 * 5;
                    }
                    else {
                      lVar22 = (longlong)(int)uVar18 * 5;
                      lVar39 = *(longlong *)(lVar31 + 0xc0);
                    }
                  }
                  else {
                    lVar22 = (longlong)(int)(uVar36 - *(int *)(lVar31 + 0x30)) * 5;
                    lVar39 = *(longlong *)(lVar31 + 0xe0);
                  }
                  uVar18 = *(uint *)(lVar39 + lVar22 * 4 + 8);
                  if ((*(byte *)(lVar39 + 0x10 + lVar22 * 4) & 0x40) == 0) {
                    if (uVar18 == 0xffffffff) goto LAB_144c5ad88;
                    uVar18 = *(int *)(lVar31 + 0x17c) << 0x16 | uVar18 & 0x3fffff;
                  }
                  if (uVar18 != 0xffffffff) {
                    local_res18[0] = uVar18 & 0x3fffff;
                    FUN_144c2ead0(*(undefined8 *)
                                   ((ulonglong)(uVar18 >> 0x16) * 0x120 +
                                   *(longlong *)(param_5 + 0x38)),local_res18,&local_a8,&local_98);
                    local_f8 = local_98;
                    uStack_f0 = uStack_90;
                    local_108 = local_a8;
                    uStack_100 = uStack_a0;
                    fVar50 = *(float *)((longlong)local_118 + 4) - fVar14;
                    fVar46 = fVar3 * (*(float *)local_118 - fVar13);
                    fVar47 = fVar4 * fVar50;
                    fVar48 = fVar5 * (*(float *)(local_118 + 1) - fVar12);
                    fVar49 = (*(float *)local_118 - fVar13) - (fVar47 + fVar46 + fVar48) * fVar3;
                    fVar50 = fVar50 - (fVar47 + fVar46 + fVar48) * fVar4;
                    fVar46 = (*(float *)(local_118 + 1) - fVar12) -
                             (fVar47 + fVar46 + fVar48) * fVar5;
                    uVar18 = uVar37;
                    if (fVar50 * fVar50 + fVar49 * fVar49 + fVar46 * fVar46 < fVar52) break;
                  }
                }
              }
LAB_144c5ad88:
              puVar42 = puVar42 + 1;
              uVar18 = uVar29;
            } while (puVar42 != &DAT_149995412);
          }
        }
        uVar29 = uVar18;
        param_7._0_4_ = (int)param_7 + 1;
      } while ((int)param_7 < *(short *)((longlong)local_128 + 10));
      if (uVar29 != 0xffffffff) {
LAB_144c5add7:
        uVar24 = 0xffffffff;
        uVar21 = (ulonglong)uVar35;
        lVar31 = *(longlong *)(*(longlong *)(local_d8 + *(longlong *)(param_5 + 0x38)) + 0x20);
        if ((int)uVar35 < *(int *)(lVar31 + 0x30)) {
          if (*(int *)(lVar31 + 0x78) != 0) {
            uVar35 = *(uint *)(*(longlong *)(lVar31 + 0x70) + uVar21 * 4);
          }
          if (uVar35 == 0xffffffff) {
            lVar39 = *(longlong *)(lVar31 + 0x28);
            lVar22 = uVar21 * 5;
          }
          else {
            lVar22 = (longlong)(int)uVar35 * 5;
            lVar39 = *(longlong *)(lVar31 + 0xc0);
          }
        }
        else {
          lVar22 = (longlong)(int)(uVar35 - *(int *)(lVar31 + 0x30)) * 5;
          lVar39 = *(longlong *)(lVar31 + 0xe0);
        }
        uVar35 = *(uint *)(lVar39 + lVar22 * 4 + 0xc);
        if (((*(byte *)(lVar39 + 0x10 + lVar22 * 4) & 0x40) == 0) && (uVar35 != 0xffffffff)) {
          uVar35 = *(int *)(lVar31 + 0x17c) << 0x16 | uVar35 & 0x3fffff;
        }
        uVar36 = uVar29 & 0x3fffff;
        lVar31 = *(longlong *)
                  (*(longlong *)
                    ((ulonglong)(uVar29 >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38)) + 0x20);
        if ((int)uVar36 < *(int *)(lVar31 + 0x30)) {
          uVar21 = (ulonglong)uVar36;
          if (*(int *)(lVar31 + 0x78) != 0) {
            uVar36 = *(uint *)(*(longlong *)(lVar31 + 0x70) + (ulonglong)uVar36 * 4);
          }
          if (uVar36 == 0xffffffff) {
            lVar39 = *(longlong *)(lVar31 + 0x28);
            lVar22 = uVar21 * 5;
          }
          else {
            lVar22 = (longlong)(int)uVar36 * 5;
            lVar39 = *(longlong *)(lVar31 + 0xc0);
          }
        }
        else {
          lVar22 = (longlong)(int)(uVar36 - *(int *)(lVar31 + 0x30)) * 5;
          lVar39 = *(longlong *)(lVar31 + 0xe0);
        }
        uVar36 = *(uint *)(lVar39 + lVar22 * 4 + 0xc);
        if (((*(byte *)(lVar39 + 0x10 + lVar22 * 4) & 0x40) == 0) && (uVar36 != 0xffffffff)) {
          uVar36 = *(int *)(lVar31 + 0x17c) << 0x16 | uVar36 & 0x3fffff;
        }
        local_128 = (float ******)CONCAT44(local_128._4_4_,uVar36);
        if ((uVar35 != 0xffffffff) && (uVar36 != 0xffffffff)) {
          bVar44 = uVar17 != 0xffffffff;
          param_7._0_4_ = param_2;
          local_res18[0]._0_1_ = bVar44;
          if ((bVar44) && (param_7._0_4_ = param_2, 0 < param_2)) {
            puVar19 = (uint *)FUN_144ca81d0((longlong)param_2 * 0x90 + *local_138 + -0x20,&local_148
                                            ,param_5);
            param_7._0_4_ = param_2;
            if (*puVar19 == uVar43) {
              local_res18[0]._0_1_ = 0;
              param_7._0_4_ = param_2 + -1;
            }
          }
          iVar40 = param_2 + 1;
          bVar44 = uVar35 != uVar36;
          if (((uVar35 == uVar36) || (*(int *)(param_1 + 0x20) <= param_2 + 2)) ||
             (puVar19 = (uint *)FUN_144ca81d0((local_d0 + 2) * 0x90 + 0x70 +
                                              *(longlong *)(param_1 + 0x18),&local_148,param_5),
             *puVar19 != uVar36)) {
            if (bVar44) {
              uVar24 = uVar36 & 0x3fffff;
              local_148 = *(longlong *)(param_5 + 0x38);
              lVar31 = *(longlong *)
                        (*(longlong *)((ulonglong)(uVar36 >> 0x16) * 0x120 + local_148) + 0x20);
              if ((int)uVar24 < *(int *)(lVar31 + 0x20)) {
                uVar21 = (ulonglong)uVar24;
                if (*(int *)(lVar31 + 0x98) != 0) {
                  uVar24 = *(uint *)(*(longlong *)(lVar31 + 0x90) + (ulonglong)uVar24 * 4);
                }
                if (uVar24 == 0xffffffff) {
                  lVar31 = *(longlong *)(lVar31 + 0x18);
                }
                else {
                  uVar21 = (ulonglong)(int)uVar24;
                  lVar31 = *(longlong *)(lVar31 + 0xb0);
                }
              }
              else {
                uVar21 = (ulonglong)(int)(uVar24 - *(int *)(lVar31 + 0x20));
                lVar31 = *(longlong *)(lVar31 + 0xd0);
              }
              sVar2 = *(short *)(lVar31 + 8 + uVar21 * 0xc);
              iVar33 = 0;
              if (sVar2 < 1) {
                return 2;
              }
              while( true ) {
                uVar18 = *(int *)(lVar31 + uVar21 * 0xc) + iVar33;
                uVar24 = uVar18 | uVar36 & 0xffc00000;
                uVar18 = uVar18 & 0x3fffff;
                lVar39 = *(longlong *)
                          (*(longlong *)((ulonglong)(uVar24 >> 0x16) * 0x120 + local_148) + 0x20);
                if ((int)uVar18 < *(int *)(lVar39 + 0x30)) {
                  uVar38 = (ulonglong)uVar18;
                  if (*(int *)(lVar39 + 0x78) != 0) {
                    uVar18 = *(uint *)(*(longlong *)(lVar39 + 0x70) + (ulonglong)uVar18 * 4);
                  }
                  if (uVar18 == 0xffffffff) {
                    lVar22 = *(longlong *)(lVar39 + 0x28);
                    lVar26 = uVar38 * 5;
                  }
                  else {
                    lVar26 = (longlong)(int)uVar18 * 5;
                    lVar22 = *(longlong *)(lVar39 + 0xc0);
                  }
                }
                else {
                  lVar26 = (longlong)(int)(uVar18 - *(int *)(lVar39 + 0x30)) * 5;
                  lVar22 = *(longlong *)(lVar39 + 0xe0);
                }
                uVar18 = *(uint *)(lVar22 + lVar26 * 4 + 0xc);
                if (((*(byte *)(lVar22 + 0x10 + lVar26 * 4) & 0x40) == 0) && (uVar18 != 0xffffffff))
                {
                  uVar18 = *(int *)(lVar39 + 0x17c) << 0x16 | uVar18 & 0x3fffff;
                }
                if (uVar18 == uVar35) break;
                iVar33 = iVar33 + 1;
                if (sVar2 <= iVar33) {
                  return 2;
                }
              }
              if (uVar24 == 0xffffffff) {
                return 2;
              }
              cVar16 = FUN_144c49370(param_6,uVar24,6);
              if (cVar16 == '\0') {
                return 2;
              }
            }
          }
          else {
            bVar44 = false;
            iVar40 = param_2 + 2;
          }
          iVar40 = iVar40 - (int)param_7;
          iVar33 = (byte)local_res18[0] + 1 + (uint)bVar44;
          if (iVar33 < iVar40) {
            iVar40 = iVar40 - iVar33;
            iVar34 = (int)local_138[1] - iVar40;
            iVar33 = iVar34 - (int)param_7;
            if ((int)(*(uint *)((longlong)local_138 + 0xc) & 0x7fffffff) < iVar34) {
              FUN_144c5c270(local_138,&PTR_vftable_14c6e47a0,(longlong)iVar34);
            }
            puVar27 = (undefined8 *)((longlong)(int)param_7 * 0x90 + *local_138);
            if (0 < iVar33) {
              puVar32 = puVar27 + (longlong)iVar40 * 0x12;
              if (puVar27 < puVar32) {
                if ((longlong)iVar33 * 0x90 != 0) {
                  lVar31 = ((longlong)iVar33 * 0x90 - 1U >> 3) + 1;
                  do {
                    *puVar27 = puVar27[(longlong)iVar40 * 0x12];
                    puVar27 = puVar27 + 1;
                    lVar31 = lVar31 + -1;
                  } while (lVar31 != 0);
                }
              }
              else if (puVar27 != puVar32) {
                FUN_144bfb260(puVar27,puVar32,(longlong)iVar33 * 0x90);
              }
            }
            *(int *)(local_138 + 1) = iVar34;
            local_154 = *(int *)(param_1 + 0x38) * (int)param_7;
            iVar40 = *(int *)(param_1 + 0x38) * iVar40;
            iVar33 = *(int *)(param_1 + 0x30) - iVar40;
            iVar34 = (*(int *)(param_1 + 0x30) - local_154) - iVar40;
            local_148 = CONCAT44(local_148._4_4_,iVar33);
            if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar33) {
              FUN_141807aa8((longlong *)(param_1 + 0x28),&PTR_vftable_14c6e47a0,(longlong)iVar33);
            }
            puVar28 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)local_154 * 4);
            if (0 < iVar34) {
              puVar1 = puVar28 + iVar40;
              if (puVar28 < puVar1) {
                if ((longlong)iVar34 * 4 != 0) {
                  lVar31 = ((longlong)iVar34 * 4 - 1U >> 2) + 1;
                  do {
                    *puVar28 = puVar28[iVar40];
                    puVar28 = puVar28 + 1;
                    lVar31 = lVar31 + -1;
                  } while (lVar31 != 0);
                  *(int *)(param_1 + 0x30) = (int)local_148;
                  goto LAB_144c5b4e8;
                }
              }
              else if (puVar28 != puVar1) {
                FUN_144bfb260(puVar28,puVar1,(longlong)iVar34 << 2);
              }
            }
            *(int *)(param_1 + 0x30) = (int)local_148;
          }
          else if (iVar40 < iVar33) {
            iVar33 = iVar33 - iVar40;
            iVar40 = iVar33 + (int)local_138[1];
            iVar34 = (int)local_138[1] - (int)param_7;
            local_148 = CONCAT44(local_148._4_4_,iVar40);
            if ((int)(*(uint *)((longlong)local_138 + 0xc) & 0x7fffffff) < iVar40) {
              FUN_144c5c270(local_138,&PTR_vftable_14c6e47a0,(longlong)iVar40);
            }
            puVar32 = (undefined8 *)((longlong)(int)param_7 * 0x90 + *local_138);
            puVar27 = puVar32 + (longlong)iVar33 * 0x12;
            if (iVar34 != 0) {
              if (puVar27 < puVar32) {
                if ((longlong)iVar34 * 0x90 != 0) {
                  lVar31 = (longlong)puVar32 - (longlong)puVar27;
                  lVar39 = ((longlong)iVar34 * 0x90 - 1U >> 3) + 1;
                  do {
                    *puVar27 = *(undefined8 *)(lVar31 + (longlong)puVar27);
                    puVar27 = puVar27 + 1;
                    lVar39 = lVar39 + -1;
                  } while (lVar39 != 0);
                }
              }
              else if (puVar27 != puVar32) {
                FUN_144bfb260(puVar27,puVar32,(longlong)iVar34 * 0x90);
              }
            }
            *(int *)(local_138 + 1) = (int)local_148;
            iVar34 = (int)param_7 * *(int *)(param_1 + 0x38);
            iVar33 = iVar33 * *(int *)(param_1 + 0x38);
            local_148 = CONCAT44(local_148._4_4_,iVar34);
            iVar40 = iVar33 + *(int *)(param_1 + 0x30);
            iVar41 = *(int *)(param_1 + 0x30) - iVar34;
            if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar40) {
              FUN_141807aa8(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar40);
              iVar34 = (int)local_148;
            }
            puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar34 * 4);
            puVar28 = puVar1 + iVar33;
            if (iVar41 != 0) {
              if (puVar28 < puVar1) {
                if ((longlong)iVar41 * 4 != 0) {
                  lVar39 = (longlong)puVar1 - (longlong)puVar28;
                  lVar31 = ((longlong)iVar41 * 4 - 1U >> 2) + 1;
                  do {
                    *puVar28 = *(undefined4 *)(lVar39 + (longlong)puVar28);
                    puVar28 = puVar28 + 1;
                    lVar31 = lVar31 + -1;
                  } while (lVar31 != 0);
                }
              }
              else if (puVar28 != puVar1) {
                FUN_144bfb260(puVar28,puVar1,(longlong)iVar41 << 2);
              }
            }
            *(int *)(param_1 + 0x30) = iVar40;
          }
LAB_144c5b4e8:
          bVar45 = (byte)local_res18[0] != 0;
          if (bVar45) {
            local_154 = local_150[0] >> 0x16;
            local_res18[0]._0_1_ =
                 *(byte *)(*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                ((ulonglong)local_154 * 0x120 + *(longlong *)(param_5 + 0x38)) +
                              0x20) + 0x68) + 0x80) & 1;
            FUN_144c59290(param_1,param_5,param_6,uVar17,&local_e8,local_150,&local_154,local_res18,
                          (int)param_7);
          }
          lVar31 = (longlong)(int)param_7;
          local_154 = uVar43 >> 0x16;
          iVar40 = (uint)bVar45 + (int)param_7;
          local_res18[0]._0_1_ =
               *(byte *)(*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              ((ulonglong)local_154 * 0x120 + *(longlong *)(param_5 + 0x38)) + 0x20)
                          + 0x68) + 0x80) & 1;
          FUN_144c59290(param_1,param_5,param_6,uVar29,&local_e8,local_130,&local_154,local_res18,
                        iVar40);
          if (bVar44 != false) {
            local_154 = uVar36 >> 0x16;
            local_res18[0] =
                 CONCAT31(local_res18[0]._1_3_,
                          *(undefined1 *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 ((ulonglong)local_154 * 0x120 + *(longlong *)(param_5 + 0x38)) +
                               0x20) + 0x68) + 0x80)) & 0xffffff01;
            FUN_144c59290(param_1,param_5,param_6,uVar24,&local_e8,&local_128,&local_154,local_res18
                          ,iVar40 + 1);
          }
          if ((int)param_7 != 0) {
            lVar39 = 0;
            do {
              *(undefined2 *)(lVar39 + 0x7c + *(longlong *)(param_1 + 0x18)) = 0;
              *(undefined2 *)(lVar39 + 0x7e + *(longlong *)(param_1 + 0x18)) = 0;
              lVar31 = lVar31 + -1;
              lVar39 = lVar39 + 0x90;
            } while (lVar31 != 0);
          }
          return 0;
        }
      }
    }
  }
  return 2;
}



// FUNCTION 144c5b6d0 FUN_144c5b6d0 body=180 status=ok
// SIG undefined FUN_144c5b6d0(void)

undefined8 FUN_144c5b6d0(longlong param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = param_3 & 0x3fffff;
  lVar2 = *(longlong *)
           (*(longlong *)((ulonglong)(param_3 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38)) +
           0x20);
  if ((int)uVar6 < *(int *)(lVar2 + 0x20)) {
    uVar4 = (ulonglong)uVar6;
    if (*(int *)(lVar2 + 0x98) != 0) {
      uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x90) + (ulonglong)uVar6 * 4);
    }
    if (uVar6 == 0xffffffff) {
      lVar2 = *(longlong *)(lVar2 + 0x18);
      lVar5 = uVar4 * 3;
    }
    else {
      lVar5 = (longlong)(int)uVar6 * 3;
      lVar2 = *(longlong *)(lVar2 + 0xb0);
    }
  }
  else {
    lVar5 = (longlong)(int)(uVar6 - *(int *)(lVar2 + 0x20)) * 3;
    lVar2 = *(longlong *)(lVar2 + 0xd0);
  }
  puVar1 = (uint *)(lVar2 + lVar5 * 4);
  uVar6 = *puVar1;
  uVar3 = *param_2 & 0x3fffff;
  if (uVar3 == uVar6) {
    uVar3 = (int)(short)puVar1[2] + uVar6;
  }
  *param_2 = *param_2 & 0xffc00000 | uVar3 - 1;
  return 0;
}



// FUNCTION 144c5b790 FUN_144c5b790 body=188 status=ok
// SIG undefined FUN_144c5b790(void)

undefined8 FUN_144c5b790(longlong param_1,uint *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = param_3 & 0x3fffff;
  lVar1 = *(longlong *)
           (*(longlong *)((ulonglong)(param_3 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38)) +
           0x20);
  if ((int)uVar5 < *(int *)(lVar1 + 0x20)) {
    uVar3 = (ulonglong)uVar5;
    if (*(int *)(lVar1 + 0x98) != 0) {
      uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x90) + (ulonglong)uVar5 * 4);
    }
    if (uVar5 == 0xffffffff) {
      lVar1 = *(longlong *)(lVar1 + 0x18);
      lVar4 = uVar3 * 3;
    }
    else {
      lVar4 = (longlong)(int)uVar5 * 3;
      lVar1 = *(longlong *)(lVar1 + 0xb0);
    }
  }
  else {
    lVar4 = (longlong)(int)(uVar5 - *(int *)(lVar1 + 0x20)) * 3;
    lVar1 = *(longlong *)(lVar1 + 0xd0);
  }
  uVar5 = *(uint *)(lVar1 + lVar4 * 4);
  uVar2 = *param_2 & 0x3fffff;
  if (uVar2 != *(short *)(lVar1 + 8 + lVar4 * 4) + -1 + uVar5) {
    uVar5 = uVar2 + 1;
  }
  *param_2 = uVar5 | *param_2 & 0xffc00000;
  return 0;
}



// FUNCTION 144c5b850 FUN_144c5b850 body=604 status=ok
// SIG undefined FUN_144c5b850(void)

char FUN_144c5b850(longlong param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = *param_2 & 0x3fffff;
  lVar2 = *(longlong *)
           (*(longlong *)((ulonglong)(*param_2 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38)) +
           0x20);
  if ((int)uVar6 < *(int *)(lVar2 + 0x30)) {
    uVar4 = (ulonglong)uVar6;
    if (*(int *)(lVar2 + 0x78) != 0) {
      uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x70) + (ulonglong)uVar6 * 4);
    }
    if (uVar6 == 0xffffffff) {
      lVar2 = *(longlong *)(lVar2 + 0x28);
      lVar3 = uVar4 * 5;
    }
    else {
      lVar3 = (longlong)(int)uVar6 * 5;
      lVar2 = *(longlong *)(lVar2 + 0xc0);
    }
  }
  else {
    lVar3 = (longlong)(int)(uVar6 - *(int *)(lVar2 + 0x30)) * 5;
    lVar2 = *(longlong *)(lVar2 + 0xe0);
  }
  lVar5 = lVar2 + lVar3 * 4;
  if ((*(int *)(lVar2 + 8 + lVar3 * 4) != -1) && ((*(byte *)(lVar5 + 0x10) & 0x20) == 0)) {
    cVar1 = FUN_144c49370(param_4,*param_2,6);
    if (cVar1 != '\0') {
      uVar6 = *param_2 & 0x3fffff;
      uVar4 = (ulonglong)uVar6;
      lVar2 = *(longlong *)
               (*(longlong *)((ulonglong)(*param_2 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38))
               + 0x20);
      if ((int)uVar6 < *(int *)(lVar2 + 0x30)) {
        if (*(int *)(lVar2 + 0x78) != 0) {
          uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x70) + uVar4 * 4);
        }
        if (uVar6 == 0xffffffff) {
          lVar3 = *(longlong *)(lVar2 + 0x28);
          lVar5 = uVar4 * 5;
        }
        else {
          lVar5 = (longlong)(int)uVar6 * 5;
          lVar3 = *(longlong *)(lVar2 + 0xc0);
        }
      }
      else {
        lVar5 = (longlong)(int)(uVar6 - *(int *)(lVar2 + 0x30)) * 5;
        lVar3 = *(longlong *)(lVar2 + 0xe0);
      }
      uVar6 = *(uint *)(lVar3 + lVar5 * 4 + 0xc);
      if (((*(byte *)(lVar3 + 0x10 + lVar5 * 4) & 0x40) == 0) && (uVar6 != 0xffffffff)) {
        uVar6 = *(int *)(lVar2 + 0x17c) << 0x16 | uVar6 & 0x3fffff;
      }
      *param_3 = uVar6;
      uVar6 = *param_2 & 0x3fffff;
      uVar4 = (ulonglong)uVar6;
      lVar2 = *(longlong *)
               (*(longlong *)((ulonglong)(*param_2 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38))
               + 0x20);
      if ((int)uVar6 < *(int *)(lVar2 + 0x30)) {
        if (*(int *)(lVar2 + 0x78) != 0) {
          uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x70) + uVar4 * 4);
        }
        if (uVar6 == 0xffffffff) {
          lVar3 = *(longlong *)(lVar2 + 0x28);
          lVar5 = uVar4 * 5;
        }
        else {
          lVar5 = (longlong)(int)uVar6 * 5;
          lVar3 = *(longlong *)(lVar2 + 0xc0);
        }
      }
      else {
        lVar5 = (longlong)(int)(uVar6 - *(int *)(lVar2 + 0x30)) * 5;
        lVar3 = *(longlong *)(lVar2 + 0xe0);
      }
      uVar6 = *(uint *)(lVar3 + lVar5 * 4 + 8);
      if (((*(byte *)(lVar3 + 0x10 + lVar5 * 4) & 0x40) == 0) && (uVar6 != 0xffffffff)) {
        uVar6 = *(int *)(lVar2 + 0x17c) << 0x16 | uVar6 & 0x3fffff;
      }
      *param_2 = uVar6;
      FUN_144c5b790(param_1,param_2,*param_3);
      return '\0';
    }
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return '\x01';
  }
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  return ((*(byte *)(lVar5 + 0x10) & 0x40) != 0) + '\x01';
}



// FUNCTION 144c5bab0 FUN_144c5bab0 body=604 status=ok
// SIG undefined FUN_144c5bab0(void)

char FUN_144c5bab0(longlong param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = *param_2 & 0x3fffff;
  lVar2 = *(longlong *)
           (*(longlong *)((ulonglong)(*param_2 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38)) +
           0x20);
  if ((int)uVar6 < *(int *)(lVar2 + 0x30)) {
    uVar4 = (ulonglong)uVar6;
    if (*(int *)(lVar2 + 0x78) != 0) {
      uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x70) + (ulonglong)uVar6 * 4);
    }
    if (uVar6 == 0xffffffff) {
      lVar2 = *(longlong *)(lVar2 + 0x28);
      lVar3 = uVar4 * 5;
    }
    else {
      lVar3 = (longlong)(int)uVar6 * 5;
      lVar2 = *(longlong *)(lVar2 + 0xc0);
    }
  }
  else {
    lVar3 = (longlong)(int)(uVar6 - *(int *)(lVar2 + 0x30)) * 5;
    lVar2 = *(longlong *)(lVar2 + 0xe0);
  }
  lVar5 = lVar2 + lVar3 * 4;
  if ((*(int *)(lVar2 + 8 + lVar3 * 4) != -1) && ((*(byte *)(lVar5 + 0x10) & 0x20) == 0)) {
    cVar1 = FUN_144c49370(param_4,*param_2,6);
    if (cVar1 != '\0') {
      uVar6 = *param_2 & 0x3fffff;
      uVar4 = (ulonglong)uVar6;
      lVar2 = *(longlong *)
               (*(longlong *)((ulonglong)(*param_2 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38))
               + 0x20);
      if ((int)uVar6 < *(int *)(lVar2 + 0x30)) {
        if (*(int *)(lVar2 + 0x78) != 0) {
          uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x70) + uVar4 * 4);
        }
        if (uVar6 == 0xffffffff) {
          lVar3 = *(longlong *)(lVar2 + 0x28);
          lVar5 = uVar4 * 5;
        }
        else {
          lVar5 = (longlong)(int)uVar6 * 5;
          lVar3 = *(longlong *)(lVar2 + 0xc0);
        }
      }
      else {
        lVar5 = (longlong)(int)(uVar6 - *(int *)(lVar2 + 0x30)) * 5;
        lVar3 = *(longlong *)(lVar2 + 0xe0);
      }
      uVar6 = *(uint *)(lVar3 + lVar5 * 4 + 0xc);
      if (((*(byte *)(lVar3 + 0x10 + lVar5 * 4) & 0x40) == 0) && (uVar6 != 0xffffffff)) {
        uVar6 = *(int *)(lVar2 + 0x17c) << 0x16 | uVar6 & 0x3fffff;
      }
      *param_3 = uVar6;
      uVar6 = *param_2 & 0x3fffff;
      uVar4 = (ulonglong)uVar6;
      lVar2 = *(longlong *)
               (*(longlong *)((ulonglong)(*param_2 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38))
               + 0x20);
      if ((int)uVar6 < *(int *)(lVar2 + 0x30)) {
        if (*(int *)(lVar2 + 0x78) != 0) {
          uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x70) + uVar4 * 4);
        }
        if (uVar6 == 0xffffffff) {
          lVar3 = *(longlong *)(lVar2 + 0x28);
          lVar5 = uVar4 * 5;
        }
        else {
          lVar5 = (longlong)(int)uVar6 * 5;
          lVar3 = *(longlong *)(lVar2 + 0xc0);
        }
      }
      else {
        lVar5 = (longlong)(int)(uVar6 - *(int *)(lVar2 + 0x30)) * 5;
        lVar3 = *(longlong *)(lVar2 + 0xe0);
      }
      uVar6 = *(uint *)(lVar3 + lVar5 * 4 + 8);
      if (((*(byte *)(lVar3 + 0x10 + lVar5 * 4) & 0x40) == 0) && (uVar6 != 0xffffffff)) {
        uVar6 = *(int *)(lVar2 + 0x17c) << 0x16 | uVar6 & 0x3fffff;
      }
      *param_2 = uVar6;
      FUN_144c5b6d0(param_1,param_2,*param_3);
      return '\0';
    }
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return '\x01';
  }
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  return ((*(byte *)(lVar5 + 0x10) & 0x40) != 0) + '\x01';
}



// FUNCTION 144c5bd10 FUN_144c5bd10 body=999 status=ok
// SIG undefined FUN_144c5bd10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_144c5bd10(uint *param_1,longlong param_2,uint param_3,float *param_4,float *param_5,
                    undefined8 param_6,float *param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  fVar34 = fRam000000014c6dae8c;
  fVar33 = _DAT_14c6dae80;
  lVar6 = *(longlong *)(param_2 + 0x20);
  param_3 = param_3 & 0x3fffff;
  fVar30 = 0.0;
  fVar31 = 0.0;
  fVar32 = 0.0;
  iVar3 = *(int *)(lVar6 + 0x20);
  fVar35 = *param_4;
  fVar36 = param_4[1];
  fVar37 = param_4[2];
  fVar13 = *param_5 * fVar35;
  fVar16 = param_5[1] * fVar36;
  fVar19 = param_5[2] * fVar37;
  *param_1 = 0xffffffff;
  fVar35 = fVar35 - (fVar16 + fVar13 + fVar19) * *param_5;
  fVar36 = fVar36 - (fVar16 + fVar13 + fVar19) * param_5[1];
  fVar37 = fVar37 - (fVar16 + fVar13 + fVar19) * param_5[2];
  if ((int)param_3 < iVar3) {
    uVar10 = (ulonglong)param_3;
    if (*(int *)(lVar6 + 0x98) != 0) {
      param_3 = *(uint *)(*(longlong *)(lVar6 + 0x90) + (ulonglong)param_3 * 4);
    }
    if (param_3 == 0xffffffff) {
      lVar6 = *(longlong *)(lVar6 + 0x18);
      lVar7 = uVar10 * 3;
    }
    else {
      lVar7 = (longlong)(int)param_3 * 3;
      lVar6 = *(longlong *)(lVar6 + 0xb0);
    }
  }
  else {
    lVar7 = (longlong)(int)(param_3 - iVar3) * 3;
    lVar6 = *(longlong *)(lVar6 + 0xd0);
  }
  uVar12 = *(uint *)(lVar6 + lVar7 * 4);
  piVar1 = (int *)(lVar6 + lVar7 * 4);
  if ((int)uVar12 < (int)((int)*(short *)(lVar6 + 8 + lVar7 * 4) + uVar12)) {
    do {
      lVar6 = *(longlong *)(param_2 + 0x20);
      if ((int)uVar12 < *(int *)(lVar6 + 0x30)) {
        uVar9 = uVar12;
        if (*(int *)(lVar6 + 0x78) != 0) {
          uVar9 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (longlong)(int)uVar12 * 4);
        }
        if (uVar9 == 0xffffffff) {
          lVar7 = *(longlong *)(lVar6 + 0x28);
          lVar11 = (longlong)(int)uVar12 * 5;
        }
        else {
          lVar11 = (longlong)(int)uVar9 * 5;
          lVar7 = *(longlong *)(lVar6 + 0xc0);
        }
      }
      else {
        lVar11 = (longlong)(int)(uVar12 - *(int *)(lVar6 + 0x30)) * 5;
        lVar7 = *(longlong *)(lVar6 + 0xe0);
      }
      if (((*(int *)(lVar7 + 8 + lVar11 * 4) != -1) &&
          ((*(byte *)(lVar7 + lVar11 * 4 + 0x10) & 0x20) == 0)) &&
         (cVar5 = FUN_144c49370(param_6,*(int *)(lVar6 + 0x17c) << 0x16 | uVar12,6), cVar5 != '\0'))
      {
        lVar6 = *(longlong *)(param_2 + 0x20);
        if ((int)uVar12 < *(int *)(lVar6 + 0x30)) {
          uVar9 = uVar12;
          if (*(int *)(lVar6 + 0x78) != 0) {
            uVar9 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (longlong)(int)uVar12 * 4);
          }
          if (uVar9 == 0xffffffff) {
            lVar7 = *(longlong *)(lVar6 + 0x28);
            lVar11 = (longlong)(int)uVar12 * 5;
          }
          else {
            lVar11 = (longlong)(int)uVar9 * 5;
            lVar7 = *(longlong *)(lVar6 + 0xc0);
          }
        }
        else {
          lVar11 = (longlong)(int)(uVar12 - *(int *)(lVar6 + 0x30)) * 5;
          lVar7 = *(longlong *)(lVar6 + 0xe0);
        }
        piVar2 = (int *)(lVar7 + lVar11 * 4);
        iVar3 = *(int *)(lVar6 + 0x40);
        iVar4 = *piVar2;
        if (iVar4 < iVar3) {
          pfVar8 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar6 + 0x38));
        }
        else {
          pfVar8 = (float *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(lVar6 + 0xf0));
        }
        fVar13 = *pfVar8;
        fVar16 = pfVar8[1];
        fVar19 = pfVar8[2];
        iVar4 = piVar2[1];
        if (iVar4 < iVar3) {
          pfVar8 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar6 + 0x38));
        }
        else {
          pfVar8 = (float *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(lVar6 + 0xf0));
        }
        fVar15 = *pfVar8;
        fVar18 = pfVar8[1];
        fVar21 = pfVar8[2];
        fVar27 = fVar13 * *(float *)(param_2 + 0x60) + fVar16 * *(float *)(param_2 + 0x70) +
                 fVar19 * *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x90);
        fVar28 = fVar13 * *(float *)(param_2 + 100) + fVar16 * *(float *)(param_2 + 0x74) +
                 fVar19 * *(float *)(param_2 + 0x84) + *(float *)(param_2 + 0x94);
        fVar29 = fVar13 * *(float *)(param_2 + 0x68) + fVar16 * *(float *)(param_2 + 0x78) +
                 fVar19 * *(float *)(param_2 + 0x88) + *(float *)(param_2 + 0x98);
        fVar13 = *param_5;
        fVar16 = param_5[1];
        fVar19 = param_5[2];
        fVar14 = fVar13 * fVar27;
        fVar17 = fVar16 * fVar28;
        fVar20 = fVar19 * fVar29;
        fVar24 = fVar15 * *(float *)(param_2 + 0x60) + fVar18 * *(float *)(param_2 + 0x70) +
                 fVar21 * *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x90);
        fVar25 = fVar15 * *(float *)(param_2 + 100) + fVar18 * *(float *)(param_2 + 0x74) +
                 fVar21 * *(float *)(param_2 + 0x84) + *(float *)(param_2 + 0x94);
        fVar26 = fVar15 * *(float *)(param_2 + 0x68) + fVar18 * *(float *)(param_2 + 0x78) +
                 fVar21 * *(float *)(param_2 + 0x88) + *(float *)(param_2 + 0x98);
        fVar15 = fVar13 * fVar24;
        fVar18 = fVar16 * fVar25;
        fVar21 = fVar19 * fVar26;
        fVar27 = fVar27 - (fVar17 + fVar14 + fVar20) * fVar13;
        fVar28 = fVar28 - (fVar17 + fVar14 + fVar20) * fVar16;
        fVar29 = fVar29 - (fVar17 + fVar14 + fVar20) * fVar19;
        fVar14 = fVar27 - fVar35;
        fVar17 = fVar28 - fVar36;
        fVar20 = fVar29 - fVar37;
        fVar27 = fVar27 - (fVar24 - (fVar18 + fVar15 + fVar21) * fVar13);
        fVar28 = fVar28 - (fVar25 - (fVar18 + fVar15 + fVar21) * fVar16);
        fVar29 = fVar29 - (fVar26 - (fVar18 + fVar15 + fVar21) * fVar19);
        fVar13 = fVar14 * fVar27;
        fVar16 = fVar17 * fVar28;
        fVar19 = fVar20 * fVar29;
        fVar15 = fVar27 * fVar27;
        fVar18 = fVar28 * fVar28;
        fVar21 = fVar29 * fVar29;
        auVar22._0_4_ = fVar16 + fVar13 + fVar19;
        auVar22._4_4_ = fVar16 + fVar13 + fVar19;
        auVar22._8_4_ = fVar16 + fVar13 + fVar19;
        auVar22._12_4_ = fVar16 + fVar13 + fVar19;
        auVar23._4_4_ = fVar18 + fVar15 + fVar21;
        auVar23._0_4_ = fVar18 + fVar15 + fVar21;
        auVar23._8_4_ = fVar18 + fVar15 + fVar21;
        auVar23._12_4_ = fVar18 + fVar15 + fVar21;
        auVar23 = divps(auVar22,auVar23);
        auVar23 = minps(auVar23,_DAT_1499314a0);
        auVar23 = maxps(auVar23,ZEXT816(0));
        fVar14 = fVar14 - auVar23._0_4_ * fVar27;
        fVar17 = fVar17 - auVar23._4_4_ * fVar28;
        fVar20 = fVar20 - auVar23._8_4_ * fVar29;
        fVar13 = fVar17 * fVar17 + fVar14 * fVar14 + fVar20 * fVar20;
        if (fVar13 < fVar33) {
          *param_1 = uVar12;
          fVar30 = fVar35 + fVar14;
          fVar31 = fVar36 + fVar17;
          fVar32 = fVar37 + fVar20;
          fVar33 = fVar13;
          fVar34 = fVar17 * fVar17 + fVar14 * fVar14 + fVar20 * fVar20;
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)(short)piVar1[2] + *piVar1);
  }
  *param_7 = fVar30;
  param_7[1] = fVar31;
  param_7[2] = fVar32;
  param_7[3] = fVar34;
  return param_1;
}



// FUNCTION 144c5c100 FUN_144c5c100 body=102 status=ok
// SIG undefined FUN_144c5c100(void)

uint * FUN_144c5c100(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  iVar1 = *param_2;
  uVar5 = iVar1 * -0x61c8864f;
  uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  while( true ) {
    if ((int)uVar5 < 0) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar2 + uVar3 * 8);
    if ((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 4) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 144c5c170 FUN_144c5c170 body=247 status=ok
// SIG undefined FUN_144c5c170(void)

void FUN_144c5c170(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c5c270 FUN_144c5c270 body=268 status=ok
// SIG undefined FUN_144c5c270(void)

ulonglong FUN_144c5c270(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x90,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x90);
  uVar3 = uVar4 * 0x90 + 0x90;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x90;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x90;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x90;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x90);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144c5c380 FUN_144c5c380 body=1413 status=ok
// SIG undefined FUN_144c5c380(void)

/* WARNING: Removing unreachable block (ram,0x000144c5c494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144c5c380(undefined8 param_1,int param_2,char param_3,undefined8 param_4)

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
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  undefined1 (*pauVar21) [16];
  undefined8 uVar22;
  float *pfVar23;
  longlong lVar24;
  byte bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined1 auVar37 [12];
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
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  int local_1d8;
  undefined4 local_1d4;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [8];
  float fStack_190;
  float fStack_18c;
  int local_188;
  undefined4 local_184;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
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
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  pauVar21 = (undefined1 (*) [16])FUN_144b3f860();
  fVar1 = *(float *)pauVar21[2];
  fVar2 = *(float *)(pauVar21[2] + 4);
  fVar3 = *(float *)(pauVar21[2] + 8);
  fVar4 = *(float *)(pauVar21[2] + 0xc);
  local_248 = fVar1;
  fStack_244 = fVar2;
  fStack_240 = fVar3;
  fStack_23c = fVar4;
  iVar18 = FUN_144b3fa10(param_1);
  iVar18 = iVar18 + -1;
  if (param_2 == iVar18) {
    uVar22 = 4;
  }
  else {
    fVar32 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar35 = 0.0;
    _local_1e8 = pauVar21[1];
    auVar37 = local_1e8._0_12_;
    fVar41 = local_1e8._0_4_;
    fVar42 = local_1e8._4_4_;
    fVar43 = local_1e8._8_4_;
    fVar44 = local_1e8._12_4_;
    _local_198 = *pauVar21;
    fVar45 = local_198._0_4_;
    fVar46 = local_198._4_4_;
    fVar47 = local_198._8_4_;
    fVar48 = local_198._12_4_;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_184 = 0;
    local_1d4 = 0x3f800000;
    bVar25 = pauVar21[8][0] & 0x10;
    local_1d8 = param_2;
    local_188 = param_2;
    if (bVar25 == 0) {
      if (param_3 == '\0') {
        fVar26 = fVar41 * fVar1;
        fVar27 = fVar42 * fVar2;
        fVar28 = fVar43 * fVar3;
        fVar36 = fVar41 - (fVar27 + fVar26 + fVar28) * fVar1;
        fVar38 = fVar42 - (fVar27 + fVar26 + fVar28) * fVar2;
        fVar39 = fVar43 - (fVar27 + fVar26 + fVar28) * fVar3;
        fVar40 = 0.0 - (fVar44 - (fVar27 + fVar26 + fVar28) * fVar4);
        fVar26 = (fVar36 - fVar45) * fVar1;
        fVar27 = (fVar38 - fVar46) * fVar2;
        fVar28 = (fVar39 - fVar47) * fVar3;
        auVar30._4_4_ =
             -(uint)(ABS((fVar38 - fVar46) - (fVar27 + fVar26 + fVar28) * fVar2) <= 0.001);
        auVar30._0_4_ =
             -(uint)(ABS((fVar36 - fVar45) - (fVar27 + fVar26 + fVar28) * fVar1) <= 0.001);
        auVar30._8_4_ =
             -(uint)(ABS((fVar39 - fVar47) - (fVar27 + fVar26 + fVar28) * fVar3) <= 0.001);
        auVar30._12_4_ =
             -(uint)(ABS((fVar40 - fVar48) - (fVar27 + fVar26 + fVar28) * fVar4) <= 0.001);
        uVar19 = movmskps(iVar18,auVar30);
        local_268 = fVar36;
        fStack_264 = fVar38;
        fStack_260 = fVar39;
        fStack_25c = fVar40;
        if (((byte)uVar19 & 7) == 7) {
          local_188 = -1;
        }
        else {
          FUN_144c39240(&local_268,local_198,&local_248,&local_178,&local_258);
          local_178 = local_258 - local_178;
          fStack_174 = fStack_254 - fStack_174;
          fStack_170 = fStack_250 - fStack_170;
          fStack_16c = fStack_24c - fStack_16c;
          local_168 = CONCAT44(fStack_174,local_178);
          uStack_160 = CONCAT44(fStack_16c,fStack_170);
          local_158 = CONCAT44(local_178 * fVar3 - fVar1 * fStack_170,
                               fStack_170 * fVar2 - fVar3 * fStack_174);
          uStack_150 = CONCAT44(fStack_16c * fVar4 - fVar4 * fStack_16c,
                                fStack_174 * fVar1 - fVar2 * local_178);
          fVar45 = (float)local_198._0_4_;
          fVar46 = (float)local_198._4_4_;
          fVar47 = fStack_190;
          fVar48 = fStack_18c;
        }
      }
      else {
        fVar26 = fVar45 * fVar1;
        fVar27 = fVar46 * fVar2;
        fVar28 = fVar47 * fVar3;
        fVar36 = fVar45 - (fVar27 + fVar26 + fVar28) * fVar1;
        fVar38 = fVar46 - (fVar27 + fVar26 + fVar28) * fVar2;
        fVar39 = fVar47 - (fVar27 + fVar26 + fVar28) * fVar3;
        fVar40 = 0.0 - (fVar48 - (fVar27 + fVar26 + fVar28) * fVar4);
        fVar26 = (fVar36 - fVar41) * fVar1;
        fVar27 = (fVar38 - fVar42) * fVar2;
        fVar28 = (fVar39 - fVar43) * fVar3;
        auVar29._4_4_ =
             -(uint)(ABS((fVar38 - fVar42) - (fVar27 + fVar26 + fVar28) * fVar2) <= 0.001);
        auVar29._0_4_ =
             -(uint)(ABS((fVar36 - fVar41) - (fVar27 + fVar26 + fVar28) * fVar1) <= 0.001);
        auVar29._8_4_ =
             -(uint)(ABS((fVar39 - fVar43) - (fVar27 + fVar26 + fVar28) * fVar3) <= 0.001);
        auVar29._12_4_ =
             -(uint)(ABS((fVar40 - fVar44) - (fVar27 + fVar26 + fVar28) * fVar4) <= 0.001);
        uVar19 = movmskps(iVar18,auVar29);
        local_268 = fVar36;
        fStack_264 = fVar38;
        fStack_260 = fVar39;
        fStack_25c = fVar40;
        if (((byte)uVar19 & 7) == 7) {
          local_1d8 = -1;
        }
        else {
          FUN_144c39240(&local_268,local_1e8,&local_248,&local_1c8,&local_258);
          local_1c8 = local_258 - local_1c8;
          fStack_1c4 = fStack_254 - fStack_1c4;
          fStack_1c0 = fStack_250 - fStack_1c0;
          fStack_1bc = fStack_24c - fStack_1bc;
          local_1b8 = CONCAT44(fStack_1c4,local_1c8);
          uStack_1b0 = CONCAT44(fStack_1bc,fStack_1c0);
          local_1a8 = CONCAT44(local_1c8 * fVar3 - fVar1 * fStack_1c0,
                               fStack_1c0 * fVar2 - fVar3 * fStack_1c4);
          uStack_1a0 = CONCAT44(fStack_1bc * fVar4 - fVar4 * fStack_1bc,
                                fStack_1c4 * fVar1 - fVar2 * local_1c8);
          fVar41 = (float)local_1e8._0_4_;
          fVar42 = (float)local_1e8._4_4_;
          fVar43 = fStack_1e0;
          fVar44 = fStack_1dc;
        }
      }
    }
    else {
      if (param_3 != '\0') {
        auVar37 = local_198._0_12_;
      }
      fVar26 = auVar37._0_4_ * fVar1;
      fVar27 = auVar37._4_4_ * fVar2;
      fVar28 = auVar37._8_4_ * fVar3;
      fVar36 = auVar37._0_4_ - (fVar27 + fVar26 + fVar28) * fVar1;
      fVar38 = auVar37._4_4_ - (fVar27 + fVar26 + fVar28) * fVar2;
      fVar39 = auVar37._8_4_ - (fVar27 + fVar26 + fVar28) * fVar3;
      fVar40 = 0.0 - (fVar27 + fVar26 + fVar28) * fVar4;
      local_268 = fVar36;
      fStack_264 = fVar38;
      fStack_260 = fVar39;
      fStack_25c = fVar40;
    }
    fVar26 = *(float *)pauVar21[3];
    fVar27 = *(float *)(pauVar21[3] + 4);
    fVar28 = *(float *)(pauVar21[3] + 8);
    fVar5 = *(float *)(pauVar21[3] + 0xc);
    fVar6 = *(float *)pauVar21[4];
    fVar7 = *(float *)(pauVar21[4] + 4);
    fVar8 = *(float *)(pauVar21[4] + 8);
    fVar9 = *(float *)(pauVar21[4] + 0xc);
    fVar10 = *(float *)pauVar21[5];
    fVar11 = *(float *)(pauVar21[5] + 4);
    fVar12 = *(float *)(pauVar21[5] + 8);
    fVar13 = *(float *)(pauVar21[5] + 0xc);
    fVar14 = *(float *)pauVar21[6];
    fVar15 = *(float *)(pauVar21[6] + 4);
    fVar16 = *(float *)(pauVar21[6] + 8);
    fVar17 = *(float *)(pauVar21[6] + 0xc);
    iVar18 = param_2 + 1;
    local_148 = fVar26;
    fStack_144 = fVar27;
    fStack_140 = fVar28;
    fStack_13c = fVar5;
    local_138 = fVar6;
    fStack_134 = fVar7;
    fStack_130 = fVar8;
    fStack_12c = fVar9;
    local_128 = fVar10;
    fStack_124 = fVar11;
    fStack_120 = fVar12;
    fStack_11c = fVar13;
    local_118 = fVar14;
    fStack_114 = fVar15;
    fStack_110 = fVar16;
    fStack_10c = fVar17;
    if (bVar25 == 0) {
      local_218 = fVar41 - fVar45;
      fStack_214 = fVar42 - fVar46;
      fStack_210 = fVar43 - fVar47;
      fStack_20c = fVar44 - fVar48;
      fVar34 = fStack_214 * fVar1 - fVar2 * local_218;
      fVar32 = fStack_210 * fVar2 - fVar3 * fStack_214;
      fVar33 = local_218 * fVar3 - fVar1 * fStack_210;
      fVar35 = fStack_20c * fVar4 - fVar4 * fStack_20c;
      local_238 = fVar36;
      fStack_234 = fVar38;
      fStack_230 = fVar39;
      fStack_22c = fVar40;
    }
    else {
      iVar20 = FUN_144b3fa10(param_1);
      if (iVar18 < iVar20) {
        pfVar23 = (float *)FUN_144b3f860(param_1,iVar18);
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        fVar41 = *pfVar23;
        fVar45 = pfVar23[1];
        fVar42 = pfVar23[2];
        fVar46 = pfVar23[4];
        fVar43 = pfVar23[5];
        fVar47 = pfVar23[6];
        local_c8 = 0;
        uStack_c0 = 0;
        fStack_224 = 1.0;
        local_238 = fVar41 * fVar26 + fVar14 + fVar45 * fVar6 + fVar42 * fVar10;
        fStack_234 = fVar41 * fVar27 + fVar15 + fVar45 * fVar7 + fVar42 * fVar11;
        fStack_230 = fVar41 * fVar28 + fVar16 + fVar45 * fVar8 + fVar42 * fVar12;
        fStack_22c = fVar41 * fVar5 + fVar17 + fVar45 * fVar9 + fVar42 * fVar13;
        auVar31._4_4_ = -(uint)(fVar43 == fVar45);
        auVar31._0_4_ = -(uint)(fVar46 == fVar41);
        auVar31._8_4_ = -(uint)(fVar47 == fVar42);
        auVar31._12_4_ = -(uint)(pfVar23[7] == pfVar23[3]);
        iVar20 = movmskps((int)pfVar23,auVar31);
        local_108 = fVar46 * fVar26 + fVar14 + fVar43 * fVar6 + fVar47 * fVar10;
        fStack_104 = fVar46 * fVar27 + fVar15 + fVar43 * fVar7 + fVar47 * fVar11;
        fStack_100 = fVar46 * fVar28 + fVar16 + fVar43 * fVar8 + fVar47 * fVar12;
        fStack_fc = fVar46 * fVar5 + fVar17 + fVar43 * fVar9 + fVar47 * fVar13;
        if (iVar20 == 0xf) {
          fVar32 = local_108 - fVar36;
          fVar33 = fStack_104 - fVar38;
          fVar34 = fStack_100 - fVar39;
          fVar35 = fStack_fc - fVar40;
          fStack_210 = fVar2 * fVar32 - fVar33 * fVar1;
          local_218 = fVar3 * fVar33 - fVar34 * fVar2;
          fStack_214 = fVar1 * fVar34 - fVar32 * fVar3;
          fStack_20c = fVar4 * fVar35 - fVar35 * fVar4;
          local_238 = fVar36;
          fStack_234 = fVar38;
          fStack_230 = fVar39;
          fStack_22c = fVar40;
        }
        else {
          local_258 = _DAT_14c6dac80;
          fStack_254 = fRam000000014c6dac84;
          fStack_250 = fRam000000014c6dac88;
          fStack_24c = fRam000000014c6dac8c;
          local_228 = (float)iVar18;
          FUN_144c5cfc0(&local_268,&local_248,&local_258,&local_238,&local_108);
          local_218 = (float)local_d8 - (float)local_208;
          fStack_214 = local_d8._4_4_ - local_208._4_4_;
          fStack_210 = (float)uStack_d0 - (float)uStack_200;
          fStack_20c = uStack_d0._4_4_ - uStack_200._4_4_;
          fVar34 = fStack_214 * fVar1 - fVar2 * local_218;
          fVar32 = fStack_210 * fVar2 - fVar3 * fStack_214;
          fVar33 = local_218 * fVar3 - fVar1 * fStack_210;
          fVar35 = fStack_20c * fVar4 - fVar4 * fStack_20c;
          local_238 = fVar36;
          fStack_234 = fVar38;
          fStack_230 = fVar39;
          fStack_22c = fVar40;
        }
      }
    }
    local_228 = fVar32;
    fStack_224 = fVar33;
    fStack_220 = fVar34;
    fStack_21c = fVar35;
    lVar24 = FUN_144b3f860(param_1,param_2);
    uVar22 = FUN_144c5d820(param_1,lVar24 + 0x20,iVar18,&local_268,local_198,local_1e8,&local_148,0,
                           &local_238,param_4);
  }
  return uVar22;
}



// FUNCTION 144c5c910 FUN_144c5c910 body=358 status=ok
// SIG undefined FUN_144c5c910(void)

/* WARNING: Removing unreachable block (ram,0x000144c5ca45) */
/* WARNING: Removing unreachable block (ram,0x000144c5ca27) */
/* WARNING: Removing unreachable block (ram,0x000144c5c9a6) */
/* WARNING: Removing unreachable block (ram,0x000144c5c98f) */
/* WARNING: Removing unreachable block (ram,0x000144c5c97c) */
/* WARNING: Removing unreachable block (ram,0x000144c5ca3b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_144c5c910(uint *param_1,longlong param_2,longlong param_3,undefined1 (*param_4) [16])

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong local_48;
  longlong lStack_40;
  ulonglong local_38;
  longlong lStack_30;
  ulonglong local_28;
  longlong lStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar5 = uRam000000014c6dae48;
  uVar1 = *param_1;
  if (uVar1 == 0xffffffff) {
    if (*(uint *)(param_2 + 0x70) != 0xffffffff) {
      lVar2 = *(longlong *)
               ((ulonglong)(*(uint *)(param_2 + 0x70) >> 0x16) * 0x120 +
               *(longlong *)(param_3 + 0x38));
      auVar7._0_8_ = *(ulonglong *)(lVar2 + 0x60) << 0x20;
      auVar7._8_8_ = *(longlong *)(lVar2 + 0x68) << 0x20 | *(ulonglong *)(lVar2 + 0x60) >> 0x20;
      *param_4 = auVar7 >> 0x20;
      auVar11._0_8_ = *(ulonglong *)(lVar2 + 0x70) << 0x20;
      auVar11._8_8_ = *(longlong *)(lVar2 + 0x78) << 0x20 | *(ulonglong *)(lVar2 + 0x70) >> 0x20;
      param_4[1] = auVar11 >> 0x20;
      auVar8._0_8_ = *(ulonglong *)(lVar2 + 0x80) << 0x20;
      auVar8._8_8_ = *(longlong *)(lVar2 + 0x88) << 0x20 | *(ulonglong *)(lVar2 + 0x80) >> 0x20;
      param_4[2] = auVar8 >> 0x20;
      local_18 = *(undefined4 *)(lVar2 + 0x90);
      uStack_14 = *(undefined4 *)(lVar2 + 0x94);
      uStack_10 = *(undefined4 *)(lVar2 + 0x98);
LAB_144c5ca5c:
      uVar4 = uRam000000014c6dacac;
      *(undefined4 *)param_4[3] = local_18;
      *(undefined4 *)(param_4[3] + 4) = uStack_14;
      *(undefined4 *)(param_4[3] + 8) = uStack_10;
      *(undefined4 *)(param_4[3] + 0xc) = uVar4;
      return 0;
    }
  }
  else {
    lVar2 = *(longlong *)((longlong)(int)uVar1 * 0x120 + *(longlong *)(param_3 + 0x38));
    if (lVar2 == 0) {
      return 2;
    }
    uVar6 = *(uint *)(param_2 + 0x70) >> 0x16;
    if (uVar1 != uVar6) {
      lVar3 = *(longlong *)((ulonglong)uVar6 * 0x120 + *(longlong *)(param_3 + 0x38));
      if (lVar3 == 0) {
        return 3;
      }
      FUN_144f71fd0(&local_48,lVar2 + 0x60,lVar3 + 0x60);
      auVar9._0_8_ = local_48 << 0x20;
      auVar9._8_8_ = lStack_40 << 0x20 | local_48 >> 0x20;
      *param_4 = auVar9 >> 0x20;
      auVar12._0_8_ = local_38 << 0x20;
      auVar12._8_8_ = lStack_30 << 0x20 | local_38 >> 0x20;
      auVar10._0_8_ = local_28 << 0x20;
      auVar10._8_8_ = lStack_20 << 0x20 | local_28 >> 0x20;
      param_4[1] = auVar12 >> 0x20;
      param_4[2] = auVar10 >> 0x20;
      goto LAB_144c5ca5c;
    }
  }
  *(undefined8 *)*param_4 = _DAT_14c6dae40;
  *(undefined8 *)(*param_4 + 8) = uVar5;
  uVar5 = uRam000000014c6dae58;
  *(undefined8 *)param_4[1] = _DAT_14c6dae50;
  *(undefined8 *)(param_4[1] + 8) = uVar5;
  uVar5 = uRam000000014c6dae68;
  *(undefined8 *)param_4[2] = _DAT_14c6dae60;
  *(undefined8 *)(param_4[2] + 8) = uVar5;
  uVar5 = _DAT_14c6dae78;
  *(undefined8 *)param_4[3] = _DAT_14c6dae70;
  *(undefined8 *)(param_4[3] + 8) = uVar5;
  return 0;
}



// FUNCTION 144c5ca80 FUN_144c5ca80 body=221 status=ok
// SIG undefined FUN_144c5ca80(void)

undefined8
FUN_144c5ca80(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_48 [48];
  undefined4 local_18;
  float local_14;
  
  iVar1 = FUN_144c59210();
  if (iVar1 == 0) {
    iVar1 = FUN_144c5c380(param_1,param_2,param_3,local_48);
    if (((iVar1 - 4U < 2) || (iVar1 == 1)) || ((local_14 != 0.0 && (local_14 != 1.0)))) {
      FUN_144c591b0(param_1,param_2,param_3);
      uVar2 = 0;
    }
    else {
      *param_4 = local_18;
      *(bool *)param_5 = local_14 == 0.0;
      FUN_144c591d0(param_1,param_2,param_3,*param_4,local_14 == 0.0);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = FUN_144c59240(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}



// FUNCTION 144c5cb60 FUN_144c5cb60 body=1112 status=ok
// SIG undefined FUN_144c5cb60(void)

/* WARNING: Removing unreachable block (ram,0x000144c5cd9d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144c5cb60(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6,float *param_7)

{
  float *pfVar1;
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
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
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
  float fVar31;
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
  undefined1 auVar47 [12];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  
  fVar18 = *param_1 - *param_2;
  fVar21 = param_1[1] - param_2[1];
  fVar24 = param_1[2] - param_2[2];
  fVar46 = fVar21 * *param_3 - param_3[1] * fVar18;
  fVar21 = fVar24 * param_3[1] - param_3[2] * fVar21;
  fVar18 = fVar18 * param_3[2] - *param_3 * fVar24;
  auVar48._12_4_ = (param_1[3] - param_2[3]) * param_3[3] - param_3[3] * (param_1[3] - param_2[3]);
  auVar48._4_4_ = fVar18;
  auVar48._0_4_ = fVar21;
  auVar48._8_4_ = fVar46;
  fVar21 = fVar21 * fVar21;
  fVar18 = fVar18 * fVar18;
  fVar46 = fVar46 * fVar46;
  auVar15._4_4_ = fVar21;
  auVar15._0_4_ = fVar21;
  auVar15._8_4_ = fVar21;
  auVar15._12_4_ = fVar21;
  fVar24 = fVar18 + fVar21 + fVar46;
  if (fVar24 == 0.0) {
    auVar47 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar2._4_4_ = fVar18 + fVar21 + fVar46;
    auVar2._0_4_ = fVar24;
    auVar2._8_4_ = fVar18 + fVar21 + fVar46;
    auVar2._12_4_ = fVar18 + fVar21 + fVar46;
    auVar15 = sqrtps(auVar15,auVar2);
    auVar15 = divps(auVar48,auVar15);
    auVar47 = auVar15._0_12_;
  }
  fVar27 = auVar47._0_4_;
  fVar29 = auVar47._4_4_;
  fVar31 = auVar47._8_4_;
  fVar18 = param_6[4];
  fVar21 = param_6[5];
  fVar24 = param_6[6];
  fVar46 = param_6[8];
  fVar3 = param_6[9];
  fVar4 = param_6[10];
  fVar5 = param_6[0xc];
  fVar6 = param_6[0xd];
  fVar7 = param_6[0xe];
  fVar49 = *param_6;
  fVar50 = param_6[1];
  fVar51 = param_6[2];
  fVar17 = 0.0 - (fVar29 * param_2[1] + fVar27 * *param_2 + fVar31 * param_2[2]);
  if (param_4 != param_5) {
    pfVar12 = param_4 + 0x14;
    fVar19 = fVar18;
    fVar22 = fVar21;
    fVar25 = fVar24;
    fVar33 = fVar46;
    fVar34 = fVar3;
    fVar35 = fVar4;
    fVar36 = fVar5;
    fVar37 = fVar6;
    fVar38 = fVar7;
    do {
      fVar39 = pfVar12[-0x14];
      fVar40 = pfVar12[-0x13];
      fVar41 = pfVar12[-0x12];
      fVar13 = pfVar12[-0x10];
      fVar42 = pfVar12[-0xf];
      fVar43 = pfVar12[-0xe];
      fVar13 = fVar17 + (fVar13 * fVar51 + fVar38 + fVar42 * fVar25 + fVar43 * fVar35) * fVar31 +
               (fVar13 * fVar50 + fVar37 + fVar42 * fVar22 + fVar43 * fVar34) * fVar29 +
               (fVar13 * fVar49 + fVar36 + fVar42 * fVar19 + fVar43 * fVar33) * fVar27;
      if (0.0 <= fVar17 + (fVar39 * fVar51 + fVar38 + fVar40 * fVar25 + fVar41 * fVar35) * fVar31 +
                 (fVar39 * fVar50 + fVar37 + fVar40 * fVar22 + fVar41 * fVar34) * fVar29 +
                 (fVar39 * fVar49 + fVar36 + fVar40 * fVar19 + fVar41 * fVar33) * fVar27) {
        if (0.0 <= fVar13) {
          return 0;
        }
      }
      else if (fVar13 < 0.0) {
        if (param_7 != (float *)0x0) {
          fVar49 = *param_6;
          fVar50 = param_6[1];
          fVar51 = param_6[2];
          fVar19 = fVar27 + fVar27;
          fVar22 = fVar29 + fVar29;
          fVar25 = fVar31 + fVar31;
          fVar41 = _DAT_14c6dae40 - fVar27 * fVar19;
          fVar13 = fRam000000014c6dae44 - fVar27 * fVar22;
          fVar42 = fRam000000014c6dae48 - fVar27 * fVar25;
          fVar43 = fRam000000014c6dae4c - fVar27 * 0.0;
          fVar37 = _DAT_14c6dae50 - fVar29 * fVar19;
          fVar38 = fRam000000014c6dae54 - fVar29 * fVar22;
          fVar39 = fRam000000014c6dae58 - fVar29 * fVar25;
          fVar40 = fRam000000014c6dae5c - fVar29 * 0.0;
          fVar33 = _DAT_14c6dae60 - fVar31 * fVar19;
          fVar34 = fRam000000014c6dae64 - fVar31 * fVar22;
          fVar35 = fRam000000014c6dae68 - fVar31 * fVar25;
          fVar36 = fRam000000014c6dae6c - fVar31 * 0.0;
          fVar27 = DAT_14c6dae70 - fVar17 * fVar19;
          fVar29 = DAT_14c6dae74 - fVar17 * fVar22;
          fVar31 = DAT_14c6dae78 - fVar17 * fVar25;
          fVar17 = DAT_14c6dae7c - fVar17 * 0.0;
          *param_7 = fVar50 * fVar37 + fVar49 * fVar41 + fVar51 * fVar33;
          param_7[1] = fVar50 * fVar38 + fVar49 * fVar13 + fVar51 * fVar34;
          param_7[2] = fVar50 * fVar39 + fVar49 * fVar42 + fVar51 * fVar35;
          param_7[3] = fVar50 * fVar40 + fVar49 * fVar43 + fVar51 * fVar36;
          param_7[4] = fVar21 * fVar37 + fVar18 * fVar41 + fVar24 * fVar33;
          param_7[5] = fVar21 * fVar38 + fVar18 * fVar13 + fVar24 * fVar34;
          param_7[6] = fVar21 * fVar39 + fVar18 * fVar42 + fVar24 * fVar35;
          param_7[7] = fVar21 * fVar40 + fVar18 * fVar43 + fVar24 * fVar36;
          param_7[8] = fVar3 * fVar37 + fVar46 * fVar41 + fVar4 * fVar33;
          param_7[9] = fVar3 * fVar38 + fVar46 * fVar13 + fVar4 * fVar34;
          param_7[10] = fVar3 * fVar39 + fVar46 * fVar42 + fVar4 * fVar35;
          param_7[0xb] = fVar3 * fVar40 + fVar46 * fVar43 + fVar4 * fVar36;
          param_7[0xc] = fVar5 * fVar41 + fVar27 + fVar6 * fVar37 + fVar7 * fVar33;
          param_7[0xd] = fVar5 * fVar13 + fVar29 + fVar6 * fVar38 + fVar7 * fVar34;
          param_7[0xe] = fVar5 * fVar42 + fVar31 + fVar6 * fVar39 + fVar7 * fVar35;
          param_7[0xf] = fVar5 * fVar43 + fVar17 + fVar6 * fVar40 + fVar7 * fVar36;
        }
        return 1;
      }
      fVar39 = pfVar12[-4];
      fVar40 = pfVar12[-3];
      fVar41 = pfVar12[-2];
      fVar13 = *pfVar12;
      fVar42 = pfVar12[1];
      fVar43 = pfVar12[2];
      fVar8 = pfVar12[4];
      fVar32 = pfVar12[5];
      fVar9 = pfVar12[6];
      fVar10 = pfVar12[-8];
      fVar26 = pfVar12[-7];
      fVar11 = pfVar12[-6];
      fVar44 = fVar42 * fVar19;
      fVar45 = fVar42 * fVar22;
      fVar42 = fVar42 * fVar25;
      pfVar1 = pfVar12 + 0x10;
      fVar20 = fVar26 * fVar19;
      fVar23 = fVar26 * fVar22;
      fVar26 = fVar26 * fVar25;
      fVar28 = fVar32 * fVar19;
      fVar30 = fVar32 * fVar22;
      fVar32 = fVar32 * fVar25;
      fVar14 = fVar13 * fVar49;
      fVar16 = fVar13 * fVar50;
      fVar13 = fVar13 * fVar51;
      fVar19 = fVar41 * fVar33 + fVar40 * fVar19 + fVar39 * fVar49;
      fVar22 = fVar41 * fVar34 + fVar40 * fVar22 + fVar39 * fVar50;
      fVar25 = fVar41 * fVar35 + fVar40 * fVar25 + fVar39 * fVar51;
      fVar36 = fVar36 + fVar8 * fVar49 + fVar28 + fVar9 * fVar33;
      fVar37 = fVar37 + fVar8 * fVar50 + fVar30 + fVar9 * fVar34;
      fVar38 = fVar38 + fVar8 * fVar51 + fVar32 + fVar9 * fVar35;
      fVar49 = fVar20 + fVar10 * fVar49 + fVar11 * fVar33;
      fVar50 = fVar23 + fVar10 * fVar50 + fVar11 * fVar34;
      fVar51 = fVar26 + fVar10 * fVar51 + fVar11 * fVar35;
      fVar33 = fVar33 * fVar43 + fVar44 + fVar14;
      fVar34 = fVar34 * fVar43 + fVar45 + fVar16;
      fVar35 = fVar35 * fVar43 + fVar42 + fVar13;
      pfVar12 = pfVar12 + 0x24;
    } while (pfVar1 != param_5);
  }
  return 0;
}


