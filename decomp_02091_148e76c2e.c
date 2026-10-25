// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148e76c2e FUN_148e76c2e body=62 status=ok
// SIG undefined FUN_148e76c2e(void)

void FUN_148e76c2e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148e76c6c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 148e76c6c FUN_148e76c6c body=93 status=ok
// SIG undefined FUN_148e76c6c(void)

ulonglong FUN_148e76c6c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 148e76cca FUN_148e76cca body=31 status=ok
// SIG undefined FUN_148e76cca(void)

undefined8 FUN_148e76cca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e76d04 FUN_148e76d04 body=29 status=ok
// SIG undefined FUN_148e76d04(void)

bool FUN_148e76d04(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e76d22 FUN_148e76d22 body=93 status=ok
// SIG undefined FUN_148e76d22(void)

void FUN_148e76d22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148e76d80 FUN_148e76d80 body=93 status=ok
// SIG undefined FUN_148e76d80(void)

void FUN_148e76d80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148e76dde FUN_148e76dde body=126 status=ok
// SIG undefined FUN_148e76dde(void)

void FUN_148e76dde(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0710;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e76e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e76e5c FUN_148e76e5c body=35 status=ok
// SIG undefined FUN_148e76e5c(void)

void FUN_148e76e5c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e76e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148e76e7f FUN_148e76e7f body=41 status=ok
// SIG undefined FUN_148e76e7f(void)

void FUN_148e76e7f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c6fdf2(param_1);
    param_1 = param_1 + 0x208;
  }
  return;
}



// FUNCTION 148e76ea8 FUN_148e76ea8 body=150 status=ok
// SIG undefined FUN_148e76ea8(void)

void FUN_148e76ea8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x208,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x208)) {
      uVar5 = uVar4 / 0x208 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x208,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e76f40 FUN_148e76f40 body=110 status=ok
// SIG undefined FUN_148e76f40(void)

void FUN_148e76f40(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x208 + *param_1);
  FUN_145b06d8c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x208 + (longlong)_Dst),(longlong)iVar2 * 0x208);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148e76fae FUN_148e76fae body=62 status=ok
// SIG undefined FUN_148e76fae(void)

void FUN_148e76fae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148e76fec(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x208,8);
  }
  return;
}



// FUNCTION 148e76fec FUN_148e76fec body=118 status=ok
// SIG undefined FUN_148e76fec(void)

ulonglong FUN_148e76fec(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x208) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148e77029;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x208,8);
      param_2 = param_2 / 0x208;
    }
  }
LAB_148e77029:
  return param_2 & 0xffffffff;
}



// FUNCTION 148e77062 FUN_148e77062 body=48 status=ok
// SIG undefined FUN_148e77062(void)

void FUN_148e77062(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x268,8);
  }
  return;
}



// FUNCTION 148e77092 FUN_148e77092 body=48 status=ok
// SIG undefined FUN_148e77092(void)

void FUN_148e77092(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 148e770c2 FUN_148e770c2 body=30 status=ok
// SIG undefined FUN_148e770c2(void)

void * FUN_148e770c2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e770e0 FUN_148e770e0 body=37 status=ok
// SIG undefined FUN_148e770e0(void)

void FUN_148e770e0(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148e77101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148e77111 FUN_148e77111 body=571 status=ok
// SIG undefined FUN_148e77111(void)

void FUN_148e77111(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_c8 [40];
  undefined8 local_a0 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar1 = iVar8;
joined_r0x000148e77158:
    do {
      iVar5 = iVar1 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar1 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (*(int *)((longlong)param_1 + (longlong)iVar5 * 0x80 + 0x4c) <=
            *(int *)((longlong)param_1 + (longlong)iVar6 * 0x80 + 0x4c))) {
          iVar5 = iVar6;
        }
        if (*(int *)((longlong)param_1 + (longlong)iVar1 * 0x80 + 0x4c) <
            *(int *)((longlong)param_1 + (longlong)iVar5 * 0x80 + 0x4c)) {
          puVar3 = param_1 + (longlong)iVar1 * 0x10;
          puVar4 = local_a0;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (longlong)iVar5 * 0x10;
          puVar4 = param_1 + (longlong)iVar1 * 0x10;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_a0;
          puVar4 = param_1 + (longlong)iVar5 * 0x10;
          for (lVar2 = 0x10; iVar1 = iVar5, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          goto joined_r0x000148e77158;
        }
      }
      bVar9 = iVar8 != 0;
      iVar8 = iVar8 + -1;
      iVar1 = iVar8;
    } while (bVar9);
    if (1 < (int)param_2) {
      puVar3 = param_1;
      puVar4 = local_a0;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1 + ((ulonglong)param_2 - 1) * 0x10;
      puVar4 = param_1;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_a0;
      puVar4 = param_1 + ((ulonglong)param_2 - 1) * 0x10;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar1 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar1 = iVar1 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar1 < (longlong)uVar7) &&
               (*(int *)((longlong)param_1 + (longlong)iVar5 * 0x80 + 0x4c) <=
                *(int *)((longlong)param_1 + (longlong)iVar1 * 0x80 + 0x4c))) {
              iVar6 = iVar1;
            }
            if (*(int *)((longlong)param_1 + (longlong)iVar6 * 0x80 + 0x4c) <=
                *(int *)((longlong)param_1 + (longlong)iVar8 * 0x80 + 0x4c)) break;
            puVar3 = param_1 + (longlong)iVar8 * 0x10;
            puVar4 = local_a0;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = param_1 + (longlong)iVar6 * 0x10;
            puVar4 = param_1 + (longlong)iVar8 * 0x10;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = local_a0;
            puVar4 = param_1 + (longlong)iVar6 * 0x10;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            iVar1 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar8 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar7);
          puVar3 = param_1;
          puVar4 = local_a0;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (uVar7 - 1) * 0x10;
          puVar4 = param_1;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_a0;
          puVar4 = param_1 + (uVar7 - 1) * 0x10;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          bVar9 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e7734e FUN_148e7734e body=156 status=ok
// SIG undefined FUN_148e7734e(void)

undefined8 * FUN_148e7734e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14b9c0a00;
  puVar1 = puVar8 + 1;
  puVar8[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar8 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar8[7] = *(undefined8 *)(param_1 + 0x38);
  puVar8[8] = uVar7;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[3] = uVar3;
  puVar8[4] = uVar4;
  return puVar1;
}



// FUNCTION 148e773f4 FUN_148e773f4 body=81 status=ok
// SIG undefined FUN_148e773f4(void)

undefined8 FUN_148e773f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148e7744c FUN_148e7744c body=89 status=ok
// SIG undefined FUN_148e7744c(void)

bool FUN_148e7744c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148e77497;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148e77497:
  return lVar6 == param_2;
}



// FUNCTION 148e774c2 FUN_148e774c2 body=118 status=ok
// SIG undefined FUN_148e774c2(void)

void FUN_148e774c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0a90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e77538 FUN_148e77538 body=156 status=ok
// SIG undefined FUN_148e77538(void)

void FUN_148e77538(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0a90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e775c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e775d4 FUN_148e775d4 body=104 status=ok
// SIG undefined FUN_148e775d4(void)

void FUN_148e775d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148e77621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e77632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e77640 FUN_148e77640 body=81 status=ok
// SIG undefined FUN_148e77640(void)

undefined8 FUN_148e77640(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148e77698 FUN_148e77698 body=89 status=ok
// SIG undefined FUN_148e77698(void)

bool FUN_148e77698(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148e776e3;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148e776e3:
  return lVar6 == param_2;
}



// FUNCTION 148e7770e FUN_148e7770e body=118 status=ok
// SIG undefined FUN_148e7770e(void)

void FUN_148e7770e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e77784 FUN_148e77784 body=118 status=ok
// SIG undefined FUN_148e77784(void)

void FUN_148e77784(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e777fa FUN_148e777fa body=156 status=ok
// SIG undefined FUN_148e777fa(void)

void FUN_148e777fa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0b40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e77886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e77896 FUN_148e77896 body=101 status=ok
// SIG undefined FUN_148e77896(void)

ulonglong FUN_148e77896(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148e778f0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e778f0;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148e778fc FUN_148e778fc body=146 status=ok
// SIG undefined FUN_148e778fc(void)

void FUN_148e778fc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x110,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e77990 FUN_148e77990 body=132 status=ok
// SIG undefined FUN_148e77990(void)

void FUN_148e77990(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e77a15 FUN_148e77a15 body=612 status=ok
// SIG undefined FUN_148e77a15(void)

void FUN_148e77a15(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_90 [9];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    uVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      local_98 = (ulonglong)uVar4;
      uVar6 = local_98;
      while (uVar2 = uVar4 * 2 + 1, (int)uVar2 < (int)param_2) {
        uVar10 = uVar4 * 2 + 2;
        uVar4 = uVar2;
        if (((int)uVar10 < (int)param_2) &&
           (cVar3 = (*(code *)*param_3)(param_1 + (longlong)(int)uVar10 * 9,
                                        param_1 + (longlong)(int)uVar2 * 9), cVar3 == '\0')) {
          uVar4 = uVar10;
        }
        puVar9 = param_1 + (longlong)(int)uVar6 * 9;
        puVar14 = param_1 + (longlong)(int)uVar4 * 9;
        cVar3 = (*(code *)*param_3)(puVar9,puVar14);
        if (cVar3 == '\0') break;
        puVar8 = puVar9;
        puVar13 = local_90;
        for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar13 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar13 = puVar13 + 1;
        }
        puVar8 = puVar14;
        for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar9 = local_90;
        for (lVar5 = 9; uVar6 = (ulonglong)uVar4, lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar14 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar14 = puVar14 + 1;
        }
      }
      uVar4 = (int)local_98 - 1;
    } while ((int)local_98 != 0);
    if (1 < (int)param_2) {
      puVar9 = param_1;
      puVar14 = local_90;
      for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar14 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar9 = param_1 + ((ulonglong)param_2 - 1) * 9;
      puVar14 = param_1;
      for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar14 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar9 = local_90;
      puVar14 = param_1 + ((ulonglong)param_2 - 1) * 9;
      for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar14 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar14 = puVar14 + 1;
      }
      uVar6 = (ulonglong)param_2 - 1;
      if (param_2 != 2) {
        do {
          iVar7 = 0;
          iVar12 = 1;
          iVar15 = 0;
          do {
            iVar7 = iVar7 + 2;
            iVar11 = iVar12;
            if (((longlong)iVar7 < (longlong)uVar6) &&
               (cVar3 = (*(code *)*param_3)(param_1 + (longlong)iVar7 * 9,
                                            param_1 + (longlong)iVar12 * 9), cVar3 == '\0')) {
              iVar11 = iVar7;
            }
            puVar9 = param_1 + (longlong)iVar15 * 9;
            puVar14 = param_1 + (longlong)iVar11 * 9;
            cVar3 = (*(code *)*param_3)(puVar9,puVar14);
            if (cVar3 == '\0') break;
            puVar8 = puVar9;
            puVar13 = local_90;
            for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar13 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar8 = puVar14;
            for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar9 = local_90;
            for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar14 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar14 = puVar14 + 1;
            }
            iVar7 = iVar11 * 2;
            iVar12 = iVar11 * 2 + 1;
            iVar15 = iVar11;
          } while ((longlong)iVar12 < (longlong)uVar6);
          puVar9 = param_1;
          puVar14 = local_90;
          for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar14 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar14 = puVar14 + 1;
          }
          puVar9 = param_1 + (uVar6 - 1) * 9;
          puVar14 = param_1;
          for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar14 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar14 = puVar14 + 1;
          }
          puVar9 = local_90;
          puVar14 = param_1 + (uVar6 - 1) * 9;
          for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar14 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar14 = puVar14 + 1;
          }
          bVar1 = 2 < uVar6;
          uVar6 = uVar6 - 1;
        } while (bVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e77c7a FUN_148e77c7a body=30 status=ok
// SIG undefined FUN_148e77c7a(void)

void * FUN_148e77c7a(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e77c9e FUN_148e77c9e body=30 status=ok
// SIG undefined FUN_148e77c9e(void)

void * FUN_148e77c9e(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e77cc8 FUN_148e77cc8 body=30 status=ok
// SIG undefined FUN_148e77cc8(void)

void * FUN_148e77cc8(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e77cf2 FUN_148e77cf2 body=104 status=ok
// SIG undefined FUN_148e77cf2(void)

void FUN_148e77cf2(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x48);
  if (*(longlong **)((longlong)_Dst + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)_Dst + 0x30) + 0x10))();
  }
  if (*(longlong **)((longlong)_Dst + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)_Dst + 0x10) + 0x10))();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar1) * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 148e77d5a FUN_148e77d5a body=62 status=ok
// SIG undefined FUN_148e77d5a(void)

void FUN_148e77d5a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148e77d98(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 148e77d98 FUN_148e77d98 body=112 status=ok
// SIG undefined FUN_148e77d98(void)

ulonglong FUN_148e77d98(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148e77dd2;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_148e77dd2:
  return param_2 & 0xffffffff;
}



// FUNCTION 148e77e08 FUN_148e77e08 body=62 status=ok
// SIG undefined FUN_148e77e08(void)

void FUN_148e77e08(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148e77e46(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 148e77e46 FUN_148e77e46 body=93 status=ok
// SIG undefined FUN_148e77e46(void)

ulonglong FUN_148e77e46(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 148e77ea8 FUN_148e77ea8 body=81 status=ok
// SIG undefined FUN_148e77ea8(void)

undefined8 FUN_148e77ea8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148e77f00 FUN_148e77f00 body=89 status=ok
// SIG undefined FUN_148e77f00(void)

bool FUN_148e77f00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148e77f4b;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148e77f4b:
  return lVar6 == param_2;
}



// FUNCTION 148e77f5a FUN_148e77f5a body=118 status=ok
// SIG undefined FUN_148e77f5a(void)

void FUN_148e77f5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e77fd0 FUN_148e77fd0 body=118 status=ok
// SIG undefined FUN_148e77fd0(void)

void FUN_148e77fd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e78046 FUN_148e78046 body=156 status=ok
// SIG undefined FUN_148e78046(void)

void FUN_148e78046(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0c10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e780d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e780e2 FUN_148e780e2 body=101 status=ok
// SIG undefined FUN_148e780e2(void)

ulonglong FUN_148e780e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148e7813c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e7813c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148e78148 FUN_148e78148 body=132 status=ok
// SIG undefined FUN_148e78148(void)

void FUN_148e78148(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e781d2 FUN_148e781d2 body=81 status=ok
// SIG undefined FUN_148e781d2(void)

undefined8 FUN_148e781d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148e7822a FUN_148e7822a body=89 status=ok
// SIG undefined FUN_148e7822a(void)

bool FUN_148e7822a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148e78275;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148e78275:
  return lVar6 == param_2;
}



// FUNCTION 148e782a0 FUN_148e782a0 body=118 status=ok
// SIG undefined FUN_148e782a0(void)

void FUN_148e782a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0c80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e78316 FUN_148e78316 body=118 status=ok
// SIG undefined FUN_148e78316(void)

void FUN_148e78316(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0c80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e7838c FUN_148e7838c body=156 status=ok
// SIG undefined FUN_148e7838c(void)

void FUN_148e7838c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0c80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e78418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e78428 FUN_148e78428 body=100 status=ok
// SIG undefined FUN_148e78428(void)

void FUN_148e78428(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148e78474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e78481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e7848c FUN_148e7848c body=100 status=ok
// SIG undefined FUN_148e7848c(void)

ulonglong FUN_148e7848c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148e784e5:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e784e5;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148e784f4 FUN_148e784f4 body=81 status=ok
// SIG undefined FUN_148e784f4(void)

undefined8 FUN_148e784f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148e7854c FUN_148e7854c body=89 status=ok
// SIG undefined FUN_148e7854c(void)

bool FUN_148e7854c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148e78597;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148e78597:
  return lVar6 == param_2;
}



// FUNCTION 148e785c2 FUN_148e785c2 body=118 status=ok
// SIG undefined FUN_148e785c2(void)

void FUN_148e785c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e78638 FUN_148e78638 body=118 status=ok
// SIG undefined FUN_148e78638(void)

void FUN_148e78638(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e786ae FUN_148e786ae body=156 status=ok
// SIG undefined FUN_148e786ae(void)

void FUN_148e786ae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0cf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e7873a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e7874a FUN_148e7874a body=104 status=ok
// SIG undefined FUN_148e7874a(void)

void FUN_148e7874a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148e78797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e787a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e787b2 FUN_148e787b2 body=101 status=ok
// SIG undefined FUN_148e787b2(void)

ulonglong FUN_148e787b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148e7880c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e7880c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148e78818 FUN_148e78818 body=48 status=ok
// SIG undefined FUN_148e78818(void)

void FUN_148e78818(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 148e78848 FUN_148e78848 body=38 status=ok
// SIG undefined FUN_148e78848(void)

void FUN_148e78848(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1413e92dc(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 148e7886e FUN_148e7886e body=89 status=ok
// SIG undefined FUN_148e7886e(void)

void FUN_148e7886e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x70 + *param_1);
  FUN_140e631a3(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x70 + (longlong)_Dst),(longlong)iVar2 * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148e788c8 FUN_148e788c8 body=42 status=ok
// SIG undefined FUN_148e788c8(void)

Property * FUN_148e788c8(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e788f2 FUN_148e788f2 body=58 status=ok
// SIG undefined FUN_148e788f2(void)

longlong FUN_148e788f2(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148e7892c FUN_148e7892c body=149 status=ok
// SIG undefined FUN_148e7892c(void)

longlong FUN_148e7892c(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    local_38 = 0;
    local_40 = 0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_40,&local_38);
    FUN_1409ee323(local_40,local_38,iVar1 + param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e789c2 FUN_148e789c2 body=119 status=ok
// SIG undefined FUN_148e789c2(void)

longlong FUN_148e789c2(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x18);
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x1c8))(param_2,&local_38,&local_30);
  FUN_1409ee323(local_38,local_30,iVar1 + param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e78a3a FUN_148e78a3a body=65 status=ok
// SIG undefined FUN_148e78a3a(void)

void FUN_148e78a3a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0d60;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e78a88 FUN_148e78a88 body=42 status=ok
// SIG undefined FUN_148e78a88(void)

Property * FUN_148e78a88(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e78ab2 FUN_148e78ab2 body=64 status=ok
// SIG undefined FUN_148e78ab2(void)

longlong FUN_148e78ab2(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1447a1f4a(*(int *)(param_1 + 0x18) + param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar2);
  return param_3;
}



// FUNCTION 148e78af2 FUN_148e78af2 body=64 status=ok
// SIG undefined FUN_148e78af2(void)

longlong FUN_148e78af2(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_1489e934f(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148e78b32 FUN_148e78b32 body=35 status=ok
// SIG undefined FUN_148e78b32(void)

longlong FUN_148e78b32(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1489e934f(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e78b56 FUN_148e78b56 body=65 status=ok
// SIG undefined FUN_148e78b56(void)

void FUN_148e78b56(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0df0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e78b98 FUN_148e78b98 body=20 status=ok
// SIG undefined FUN_148e78b98(void)

undefined8 FUN_148e78b98(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148e78bac FUN_148e78bac body=20 status=ok
// SIG undefined FUN_148e78bac(void)

undefined8 FUN_148e78bac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148e78bc0 FUN_148e78bc0 body=20 status=ok
// SIG undefined FUN_148e78bc0(void)

undefined8 FUN_148e78bc0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148e78bd4 FUN_148e78bd4 body=49 status=ok
// SIG undefined FUN_148e78bd4(void)

void FUN_148e78bd4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))();
  uVar1 = FUN_1447a1f4a(uVar1);
  FUN_144936510(uVar1,param_3,param_4);
  return;
}



// FUNCTION 148e78c06 FUN_148e78c06 body=20 status=ok
// SIG undefined FUN_148e78c06(void)

undefined8 FUN_148e78c06(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148e78c1a FUN_148e78c1a body=20 status=ok
// SIG undefined FUN_148e78c1a(void)

undefined8 FUN_148e78c1a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148e78c46 FUN_148e78c46 body=42 status=ok
// SIG undefined FUN_148e78c46(void)

Property * FUN_148e78c46(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e78c70 FUN_148e78c70 body=39 status=ok
// SIG undefined FUN_148e78c70(void)

longlong FUN_148e78c70(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148e78c98 FUN_148e78c98 body=66 status=ok
// SIG undefined FUN_148e78c98(void)

longlong FUN_148e78c98(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1d8))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148e78cda FUN_148e78cda body=40 status=ok
// SIG undefined FUN_148e78cda(void)

longlong FUN_148e78cda(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x1d8))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e78d02 FUN_148e78d02 body=65 status=ok
// SIG undefined FUN_148e78d02(void)

void FUN_148e78d02(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0e80;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e78d50 FUN_148e78d50 body=42 status=ok
// SIG undefined FUN_148e78d50(void)

Property * FUN_148e78d50(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e78d7a FUN_148e78d7a body=41 status=ok
// SIG undefined FUN_148e78d7a(void)

longlong FUN_148e78d7a(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148e78da4 FUN_148e78da4 body=66 status=ok
// SIG undefined FUN_148e78da4(void)

longlong FUN_148e78da4(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148e78de6 FUN_148e78de6 body=40 status=ok
// SIG undefined FUN_148e78de6(void)

longlong FUN_148e78de6(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e78e0e FUN_148e78e0e body=65 status=ok
// SIG undefined FUN_148e78e0e(void)

void FUN_148e78e0e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0f10;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e78e5c FUN_148e78e5c body=42 status=ok
// SIG undefined FUN_148e78e5c(void)

Property * FUN_148e78e5c(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e78e86 FUN_148e78e86 body=41 status=ok
// SIG undefined FUN_148e78e86(void)

longlong FUN_148e78e86(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x110))(param_2,*(undefined8 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148e78eb0 FUN_148e78eb0 body=66 status=ok
// SIG undefined FUN_148e78eb0(void)

longlong FUN_148e78eb0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x208))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148e78ef2 FUN_148e78ef2 body=40 status=ok
// SIG undefined FUN_148e78ef2(void)

longlong FUN_148e78ef2(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x208))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e78f1a FUN_148e78f1a body=65 status=ok
// SIG undefined FUN_148e78f1a(void)

void FUN_148e78f1a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0fa0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e78f5c FUN_148e78f5c body=32 status=ok
// SIG undefined FUN_148e78f5c(void)

undefined8 FUN_148e78f5c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x80))();
  *(bool *)param_3 = *plVar1 != 0;
  return 1;
}



// FUNCTION 148e78f7c FUN_148e78f7c body=52 status=ok
// SIG undefined FUN_148e78f7c(void)

undefined8 FUN_148e78f7c(longlong *param_1,undefined8 param_2,double *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x80))();
  *param_3 = ((double)CONCAT44(0x43300000,(int)*puVar1) - 4503599627370496.0) +
             ((double)CONCAT44(0x45300000,(int)((ulonglong)*puVar1 >> 0x20)) -
             1.9342813113834067e+25);
  return 1;
}



// FUNCTION 148e78fb0 FUN_148e78fb0 body=65 status=ok
// SIG undefined FUN_148e78fb0(void)

undefined8 FUN_148e78fb0(longlong *param_1,undefined8 param_2,float *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 0x80))();
  uVar1 = *puVar2;
  uVar3 = uVar1;
  if ((longlong)uVar1 < 0) {
    uVar3 = uVar1 >> 1;
  }
  *param_3 = (float)uVar1;
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 148e78ff2 FUN_148e78ff2 body=43 status=ok
// SIG undefined FUN_148e78ff2(void)

void FUN_148e78ff2(longlong *param_1,undefined8 param_2,char *param_3,__uint64 *param_4)

{
  __uint64 *p_Var1;
  
  p_Var1 = (__uint64 *)(**(code **)(*param_1 + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x000148e79016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::CoherentToString<unsigned___int64>::Invoke(*p_Var1,param_3,param_4);
  return;
}



// FUNCTION 148e7901e FUN_148e7901e body=20 status=ok
// SIG undefined FUN_148e7901e(void)

undefined8 FUN_148e7901e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148e79032 FUN_148e79032 body=20 status=ok
// SIG undefined FUN_148e79032(void)

undefined8 FUN_148e79032(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148e7905e FUN_148e7905e body=42 status=ok
// SIG undefined FUN_148e7905e(void)

Property * FUN_148e7905e(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e79088 FUN_148e79088 body=41 status=ok
// SIG undefined FUN_148e79088(void)

longlong FUN_148e79088(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x118))(param_2,*(undefined8 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148e790b2 FUN_148e790b2 body=66 status=ok
// SIG undefined FUN_148e790b2(void)

longlong FUN_148e790b2(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x210))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148e790f4 FUN_148e790f4 body=40 status=ok
// SIG undefined FUN_148e790f4(void)

longlong FUN_148e790f4(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x210))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e7911c FUN_148e7911c body=65 status=ok
// SIG undefined FUN_148e7911c(void)

void FUN_148e7911c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c1030;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e7915e FUN_148e7915e body=32 status=ok
// SIG undefined FUN_148e7915e(void)

undefined8 FUN_148e7915e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x80))();
  *(bool *)param_3 = *plVar1 != 0;
  return 1;
}



// FUNCTION 148e7917e FUN_148e7917e body=34 status=ok
// SIG undefined FUN_148e7917e(void)

undefined8 FUN_148e7917e(longlong *param_1,undefined8 param_2,double *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x80))();
  *param_3 = (double)*plVar1;
  return 1;
}



// FUNCTION 148e791a0 FUN_148e791a0 body=34 status=ok
// SIG undefined FUN_148e791a0(void)

undefined8 FUN_148e791a0(longlong *param_1,undefined8 param_2,float *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x80))();
  *param_3 = (float)*plVar1;
  return 1;
}



// FUNCTION 148e791c2 FUN_148e791c2 body=43 status=ok
// SIG undefined FUN_148e791c2(void)

void FUN_148e791c2(longlong *param_1,undefined8 param_2,char *param_3,__uint64 *param_4)

{
  __int64 *p_Var1;
  
  p_Var1 = (__int64 *)(**(code **)(*param_1 + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x000148e791e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::CoherentToString<__int64>::Invoke(*p_Var1,param_3,param_4);
  return;
}



// FUNCTION 148e791ee FUN_148e791ee body=20 status=ok
// SIG undefined FUN_148e791ee(void)

undefined8 FUN_148e791ee(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148e79202 FUN_148e79202 body=20 status=ok
// SIG undefined FUN_148e79202(void)

undefined8 FUN_148e79202(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148e7922e FUN_148e7922e body=30 status=ok
// SIG undefined FUN_148e7922e(void)

void * FUN_148e7922e(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e79258 FUN_148e79258 body=62 status=ok
// SIG undefined FUN_148e79258(void)

void FUN_148e79258(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b9c10e0;
  FUN_148e79296(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148e79296 FUN_148e79296 body=105 status=ok
// SIG undefined FUN_148e79296(void)

undefined8 * FUN_148e79296(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_1411724f0(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148e79300 FUN_148e79300 body=48 status=ok
// SIG undefined FUN_148e79300(void)

void FUN_148e79300(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xa0,8);
  }
  return;
}



// FUNCTION 148e79330 FUN_148e79330 body=62 status=ok
// SIG undefined FUN_148e79330(void)

void FUN_148e79330(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b9c1100;
  FUN_148e79374(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148e79374 FUN_148e79374 body=148 status=ok
// SIG undefined FUN_148e79374(void)

undefined8 * FUN_148e79374(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14581e860(param_1 + 2,iVar1);
    FUN_14581e7ef(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148e7941b FUN_148e7941b body=85 status=ok
// SIG undefined FUN_148e7941b(void)

void FUN_148e7941b(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (longlong)param_3 * 0x80 + *param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_141257f3d(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000148e7945a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148e79469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}



// FUNCTION 148e79475 FUN_148e79475 body=58 status=ok
// SIG undefined FUN_148e79475(void)

void FUN_148e79475(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x80 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_141257f3d(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000148e794ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148e794af FUN_148e794af body=765 status=ok
// SIG undefined FUN_148e794af(void)

void FUN_148e794af(void *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_188 [40];
  undefined1 local_160 [288];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_2 != 0) {
    iVar7 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar5 = iVar7;
joined_r0x000148e79500:
    do {
      iVar4 = iVar7 * 2 + 1;
      if (iVar4 < (int)param_2) {
        iVar3 = iVar7 * 2 + 2;
        if (iVar3 < (int)param_2) {
          bVar1 = *(byte *)((longlong)param_1 + (longlong)iVar3 * 0x120 + 0xc);
          bVar2 = *(byte *)((longlong)param_1 + (longlong)iVar4 * 0x120 + 0xc);
          bVar11 = bVar2 < bVar1;
          if (bVar1 == bVar2) {
            bVar11 = *(int *)((longlong)param_1 + (longlong)iVar3 * 0x120) <
                     *(int *)((longlong)param_1 + (longlong)iVar4 * 0x120);
          }
          if (!bVar11) {
            iVar4 = iVar3;
          }
        }
        lVar9 = (longlong)iVar7 * 0x120;
        lVar8 = (longlong)iVar4 * 0x120;
        bVar1 = *(byte *)((longlong)param_1 + lVar9 + 0xc);
        bVar2 = *(byte *)((longlong)param_1 + lVar8 + 0xc);
        bVar11 = bVar2 < bVar1;
        if (bVar1 == bVar2) {
          bVar11 = *(int *)((longlong)param_1 + lVar9) < *(int *)((longlong)param_1 + lVar8);
        }
        if (bVar11) {
          memcpy(local_160,(void *)(lVar9 + (longlong)param_1),0x120);
          memcpy((void *)(lVar9 + (longlong)param_1),(void *)(lVar8 + (longlong)param_1),0x120);
          memcpy((void *)(lVar8 + (longlong)param_1),local_160,0x120);
          iVar7 = iVar4;
          goto joined_r0x000148e79500;
        }
      }
      bVar11 = iVar5 != 0;
      iVar7 = iVar5 + -1;
      iVar5 = iVar7;
    } while (bVar11);
    if (1 < (int)param_2) {
      pvVar6 = (void *)(((ulonglong)param_2 - 1) * 0x120 + (longlong)param_1);
      memcpy(local_160,param_1,0x120);
      memcpy(param_1,pvVar6,0x120);
      memcpy(pvVar6,local_160,0x120);
      if (param_2 != 2) {
        uVar10 = (ulonglong)param_2 - 1;
        do {
          iVar7 = 0;
          iVar4 = 1;
          iVar5 = 0;
          do {
            iVar7 = iVar7 + 2;
            iVar3 = iVar4;
            if ((longlong)iVar7 < (longlong)uVar10) {
              lVar8 = (longlong)iVar7 * 0x120;
              bVar1 = *(byte *)((longlong)param_1 + lVar8 + 0xc);
              bVar2 = *(byte *)((longlong)param_1 + (longlong)iVar4 * 0x120 + 0xc);
              bVar11 = bVar2 < bVar1;
              if (bVar1 == bVar2) {
                bVar11 = *(int *)((longlong)param_1 + lVar8) <
                         *(int *)((longlong)param_1 + (longlong)iVar4 * 0x120);
              }
              if (!bVar11) {
                iVar3 = iVar7;
              }
            }
            lVar9 = (longlong)iVar5 * 0x120;
            lVar8 = (longlong)iVar3 * 0x120;
            bVar1 = *(byte *)((longlong)param_1 + lVar9 + 0xc);
            bVar2 = *(byte *)((longlong)param_1 + lVar8 + 0xc);
            bVar11 = bVar2 < bVar1;
            if (bVar1 == bVar2) {
              bVar11 = *(int *)((longlong)param_1 + lVar9) < *(int *)((longlong)param_1 + lVar8);
            }
            if (!bVar11) break;
            memcpy(local_160,(void *)(lVar9 + (longlong)param_1),0x120);
            memcpy((void *)(lVar9 + (longlong)param_1),(void *)(lVar8 + (longlong)param_1),0x120);
            memcpy((void *)(lVar8 + (longlong)param_1),local_160,0x120);
            iVar7 = iVar3 * 2;
            iVar4 = iVar3 * 2 + 1;
            iVar5 = iVar3;
          } while ((longlong)iVar4 < (longlong)uVar10);
          pvVar6 = (void *)((uVar10 - 1) * 0x120 + (longlong)param_1);
          memcpy(local_160,param_1,0x120);
          memcpy(param_1,pvVar6,0x120);
          memcpy(pvVar6,local_160,0x120);
          bVar11 = 2 < uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar11);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e797b2 FUN_148e797b2 body=81 status=ok
// SIG undefined FUN_148e797b2(void)

undefined8 FUN_148e797b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148e7980a FUN_148e7980a body=91 status=ok
// SIG undefined FUN_148e7980a(void)

bool FUN_148e7980a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148e7983a;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148e7983a:
  return lVar6 == param_2;
}



// FUNCTION 148e79882 FUN_148e79882 body=118 status=ok
// SIG undefined FUN_148e79882(void)

void FUN_148e79882(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c1120;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e798f8 FUN_148e798f8 body=118 status=ok
// SIG undefined FUN_148e798f8(void)

void FUN_148e798f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c1120;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e7996e FUN_148e7996e body=156 status=ok
// SIG undefined FUN_148e7996e(void)

void FUN_148e7996e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c1120;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e799fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e79a0a FUN_148e79a0a body=101 status=ok
// SIG undefined FUN_148e79a0a(void)

ulonglong FUN_148e79a0a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148e79a64:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e79a64;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148e79a74 FUN_148e79a74 body=81 status=ok
// SIG undefined FUN_148e79a74(void)

undefined8 FUN_148e79a74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148e79acc FUN_148e79acc body=91 status=ok
// SIG undefined FUN_148e79acc(void)

bool FUN_148e79acc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148e79afc;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148e79afc:
  return lVar6 == param_2;
}



// FUNCTION 148e79b44 FUN_148e79b44 body=118 status=ok
// SIG undefined FUN_148e79b44(void)

void FUN_148e79b44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c1190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e79bba FUN_148e79bba body=118 status=ok
// SIG undefined FUN_148e79bba(void)

void FUN_148e79bba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c1190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e79c30 FUN_148e79c30 body=156 status=ok
// SIG undefined FUN_148e79c30(void)

void FUN_148e79c30(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c1190;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e79cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e79ccc FUN_148e79ccc body=100 status=ok
// SIG undefined FUN_148e79ccc(void)

void FUN_148e79ccc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148e79d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e79d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e79d30 FUN_148e79d30 body=100 status=ok
// SIG undefined FUN_148e79d30(void)

ulonglong FUN_148e79d30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148e79d89:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e79d89;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148e79d94 FUN_148e79d94 body=333 status=ok
// SIG undefined FUN_148e79d94(void)

undefined8 * FUN_148e79d94(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[9] = param_2[9];
  param_1[0xb] = 0;
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xd] = param_2[0xd];
  FUN_140d9f79e(param_1 + 0xf,param_2 + 0xf);
  param_1[0x19] = 0;
  param_1[0x19] = param_2[0x19];
  param_2[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  param_2[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1b] = param_2[0x1b];
  param_2[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
  param_2[0x1c] = 0;
  return param_1;
}



// FUNCTION 148e79ee2 FUN_148e79ee2 body=48 status=ok
// SIG undefined FUN_148e79ee2(void)

void FUN_148e79ee2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe8,8);
  }
  return;
}



// FUNCTION 148e79f12 FUN_148e79f12 body=62 status=ok
// SIG undefined FUN_148e79f12(void)

void FUN_148e79f12(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b9c1200;
  FUN_148e79f56(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148e79f56 FUN_148e79f56 body=224 status=ok
// SIG undefined FUN_148e79f56(void)

undefined8 * FUN_148e79f56(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  param_1[3] = &PTR_FUN_14b819640;
  param_1[10] = param_2[10];
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148e7a036 FUN_148e7a036 body=62 status=ok
// SIG undefined FUN_148e7a036(void)

void FUN_148e7a036(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b9c1220;
  FUN_148e7a07a(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148e7a07a FUN_148e7a07a body=222 status=ok
// SIG undefined FUN_148e7a07a(void)

undefined8 * FUN_148e7a07a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  param_1[3] = &PTR_FUN_14b8197b0;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148e7a158 FUN_148e7a158 body=74 status=ok
// SIG undefined FUN_148e7a158(void)

void FUN_148e7a158(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = (longlong)&PTR_FUN_14b8194d0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148e7a1aa FUN_148e7a1aa body=182 status=ok
// SIG undefined FUN_148e7a1aa(void)

undefined8 * FUN_148e7a1aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  param_1[3] = &PTR_FUN_14b819920;
  param_1[10] = param_2[10];
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  _Src = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148e7a260 FUN_148e7a260 body=62 status=ok
// SIG undefined FUN_148e7a260(void)

void FUN_148e7a260(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b9c1240;
  FUN_148e7a2f6(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148e7a2a4 FUN_148e7a2a4 body=29 status=ok
// SIG undefined FUN_148e7a2a4(void)

void FUN_148e7a2a4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148e7a2c2 FUN_148e7a2c2 body=52 status=ok
// SIG undefined FUN_148e7a2c2(void)

undefined8 * FUN_148e7a2c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c1240;
  FUN_148e7a158(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e7a2f6 FUN_148e7a2f6 body=224 status=ok
// SIG undefined FUN_148e7a2f6(void)

undefined8 * FUN_148e7a2f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  param_1[3] = &PTR_FUN_14b819920;
  param_1[10] = param_2[10];
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148e7a3d6 FUN_148e7a3d6 body=179 status=ok
// SIG undefined FUN_148e7a3d6(void)

void FUN_148e7a3d6(longlong *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,3);
  (**(code **)(*plVar1 + 0x128))(plVar1,*param_3);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  uVar2 = FUN_1465f219a();
  FUN_1401e1be1(plVar1,param_4,uVar2);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_4);
  if (*(int *)(param_5 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_5;
  }
  (**(code **)(*plVar1 + 0xd0))(plVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x000148e7a485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}



// FUNCTION 148e7a48a FUN_148e7a48a body=74 status=ok
// SIG undefined FUN_148e7a48a(void)

void FUN_148e7a48a(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = (longlong)&PTR_FUN_14b8194d0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148e7a4dc FUN_148e7a4dc body=184 status=ok
// SIG undefined FUN_148e7a4dc(void)

undefined8 * FUN_148e7a4dc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  param_1[3] = &PTR_FUN_14b819a90;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  _Src = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148e7a594 FUN_148e7a594 body=62 status=ok
// SIG undefined FUN_148e7a594(void)

void FUN_148e7a594(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b9c1260;
  FUN_148e7a62a(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148e7a5d8 FUN_148e7a5d8 body=29 status=ok
// SIG undefined FUN_148e7a5d8(void)

void FUN_148e7a5d8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148e7a5f6 FUN_148e7a5f6 body=52 status=ok
// SIG undefined FUN_148e7a5f6(void)

undefined8 * FUN_148e7a5f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c1260;
  FUN_148e7a48a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e7a62a FUN_148e7a62a body=226 status=ok
// SIG undefined FUN_148e7a62a(void)

undefined8 * FUN_148e7a62a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  param_1[3] = &PTR_FUN_14b819a90;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148e7a70c FUN_148e7a70c body=179 status=ok
// SIG undefined FUN_148e7a70c(void)

void FUN_148e7a70c(longlong *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,3);
  (**(code **)(*plVar1 + 0x128))(plVar1,*param_3);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  uVar2 = FUN_1465f2230();
  FUN_1401e1be1(plVar1,param_4,uVar2);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_4);
  if (*(int *)(param_5 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_5;
  }
  (**(code **)(*plVar1 + 0xd0))(plVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x000148e7a7bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}



// FUNCTION 148e7a7c0 FUN_148e7a7c0 body=30 status=ok
// SIG undefined FUN_148e7a7c0(void)

void * FUN_148e7a7c0(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e7a7ea FUN_148e7a7ea body=122 status=ok
// SIG undefined FUN_148e7a7ea(void)

void FUN_148e7a7ea(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7a866 FUN_148e7a866 body=30 status=ok
// SIG undefined FUN_148e7a866(void)

void * FUN_148e7a866(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e7a88a FUN_148e7a88a body=118 status=ok
// SIG undefined FUN_148e7a88a(void)

undefined8 * FUN_148e7a88a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9c1470;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 148e7a900 FUN_148e7a900 body=150 status=ok
// SIG undefined FUN_148e7a900(void)

void FUN_148e7a900(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1a8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1a8)) {
      uVar5 = uVar4 / 0x1a8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1a8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e7a998 FUN_148e7a998 body=66 status=ok
// SIG undefined FUN_148e7a998(void)

undefined8 * FUN_148e7a998(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c12e0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e7a9de FUN_148e7a9de body=81 status=ok
// SIG undefined FUN_148e7a9de(void)

undefined8 FUN_148e7a9de(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148e7aa36 FUN_148e7aa36 body=91 status=ok
// SIG undefined FUN_148e7aa36(void)

bool FUN_148e7aa36(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148e7aa66;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148e7aa66:
  return lVar6 == param_2;
}



// FUNCTION 148e7aaae FUN_148e7aaae body=118 status=ok
// SIG undefined FUN_148e7aaae(void)

void FUN_148e7aaae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c12e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e7ab24 FUN_148e7ab24 body=118 status=ok
// SIG undefined FUN_148e7ab24(void)

void FUN_148e7ab24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c12e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e7ab9a FUN_148e7ab9a body=156 status=ok
// SIG undefined FUN_148e7ab9a(void)

void FUN_148e7ab9a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5afcc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c12e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e7ac26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e7ac36 FUN_148e7ac36 body=104 status=ok
// SIG undefined FUN_148e7ac36(void)

void FUN_148e7ac36(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148e7ac83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e7ac94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e7ac9e FUN_148e7ac9e body=101 status=ok
// SIG undefined FUN_148e7ac9e(void)

ulonglong FUN_148e7ac9e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148e7acf8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e7acf8;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148e7ad0c FUN_148e7ad0c body=148 status=ok
// SIG undefined FUN_148e7ad0c(void)

undefined8 * FUN_148e7ad0c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b9c1350;
  puVar1 = puVar4 + 1;
  puVar4[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar4 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  return puVar1;
}



// FUNCTION 148e7ada6 FUN_148e7ada6 body=29 status=ok
// SIG undefined FUN_148e7ada6(void)

void FUN_148e7ada6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148e7adc4 FUN_148e7adc4 body=57 status=ok
// SIG undefined FUN_148e7adc4(void)

undefined8 * FUN_148e7adc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c1350;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e7adfe FUN_148e7adfe body=138 status=ok
// SIG undefined FUN_148e7adfe(void)

void FUN_148e7adfe(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,3);
    FUN_14140a72a(plVar1,param_3);
    (**(code **)(*plVar1 + 0xe0))(plVar1,*param_4);
    (**(code **)(*plVar1 + 0xe0))(plVar1,*param_5);
                    /* WARNING: Could not recover jumptable at 0x000148e7ae77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148e7ae88 FUN_148e7ae88 body=48 status=ok
// SIG undefined FUN_148e7ae88(void)

void FUN_148e7ae88(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 148e7aeb8 FUN_148e7aeb8 body=26 status=ok
// SIG undefined FUN_148e7aeb8(void)

void FUN_148e7aeb8(undefined8 param_1)

{
  FUN_1410ea50c();
  FUN_14575b2fa(param_1);
  return;
}



// FUNCTION 148e7aed2 FUN_148e7aed2 body=26 status=ok
// SIG undefined FUN_148e7aed2(void)

void FUN_148e7aed2(undefined8 param_1)

{
  FUN_141197922();
  FUN_141196df0(param_1);
  return;
}



// FUNCTION 148e7aeec FUN_148e7aeec body=137 status=ok
// SIG undefined FUN_148e7aeec(void)

void FUN_148e7aeec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14123bd7e();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = FUN_14585facc;
      local_20 = 0;
      FUN_148e7af76(param_1,param_2,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7af76 FUN_148e7af76 body=329 status=ok
// SIG undefined FUN_148e7af76(void)

void FUN_148e7af76(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442d8926(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442d8926(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_1442d8926(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_14125f16a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7b0c0 FUN_148e7b0c0 body=77 status=ok
// SIG undefined FUN_148e7b0c0(void)

void FUN_148e7b0c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 148e7b10e FUN_148e7b10e body=351 status=ok
// SIG undefined FUN_148e7b10e(void)

undefined8 FUN_148e7b10e(undefined8 param_1,int param_2)

{
  undefined1 auStack_a8 [32];
  longlong local_88 [4];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a83b10(&local_58,param_2 % 0x3c);
  if (param_2 % 0x3c < 10) {
    FUN_1400b22c2(local_88 + 2,&DAT_149dfd150);
    FUN_144a7dea0(&local_68,local_88 + 2,&local_58);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_58 = local_68;
    uStack_50 = uStack_60;
    local_68 = 0;
    uStack_60 = 0;
    if (local_88[2] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400b22c2(local_88 + 2,L":Asset");
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_144a83b10(local_88,param_2 / 0x3c);
  FUN_1401c7f3e(&local_68,local_88,local_88 + 2);
  FUN_144a7dea0(param_1,&local_68,&local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7b26e FUN_148e7b26e body=159 status=ok
// SIG undefined FUN_148e7b26e(void)

void FUN_148e7b26e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  uVar2 = FUN_14479d2ce(param_1 + 0x30);
  lVar3 = FUN_1407f492e(uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (lVar1 != 0 &&
        *(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      if (*(char *)(lVar1 + 0xb4) == '\x01') {
        if (1 < *(int *)(lVar1 + 0x110)) {
          return;
        }
        puVar5 = &DAT_14cbdbce0;
      }
      else {
        puVar5 = &DAT_14cbdbcd0;
      }
      FUN_140de1078(param_1,puVar5,0,0);
      FUN_148dbb456(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148e7b320 FUN_148e7b320 body=47 status=ok
// SIG undefined FUN_148e7b320(void)

void FUN_148e7b320(longlong param_1)

{
  FUN_1410ea50c();
  FUN_140de1078(param_1,&DAT_14cbdbd40,0,0);
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  return;
}



// FUNCTION 148e7b350 FUN_148e7b350 body=156 status=ok
// SIG undefined FUN_148e7b350(void)

void FUN_148e7b350(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141196df0();
  FUN_1400b22c2(&local_28,&DAT_149e02088);
  if ((longlong *)(param_1 + 0x298) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x298) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x298) = local_28;
    *(undefined4 *)(param_1 + 0x2a0) = local_20;
    *(undefined4 *)(param_1 + 0x2a4) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7b3ee FUN_148e7b3ee body=41 status=ok
// SIG undefined FUN_148e7b3ee(void)

void FUN_148e7b3ee(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x8c) & 0x80) == 0) {
    return;
  }
  FUN_14581711c();
  FUN_141196df0(param_1);
  return;
}



// FUNCTION 148e7b418 FUN_148e7b418 body=635 status=ok
// SIG undefined FUN_148e7b418(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x000148e7b645 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_148e7b418(longlong param_1,char *param_2,longlong *param_3,undefined8 *param_4,
                  undefined1 *param_5,undefined8 *param_6,undefined1 *param_7)

{
  void *pvVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_218 [40];
  undefined1 local_1f0 [16];
  longlong *local_1e0;
  undefined4 local_1d8;
  void *local_1d0;
  int local_1c8;
  undefined4 local_1c4;
  undefined1 local_1c0;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined1 local_1a0 [256];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_a0 = 0;
  if (param_2 == (char *)0x0) {
    local_98 = 0;
    local_90 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_1a0,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_1f0,local_98);
  local_1e0 = (longlong *)*param_3;
  if (local_1e0 != (longlong *)0x0) {
    (**(code **)(*local_1e0 + 8))();
  }
  local_1d8 = (undefined4)param_3[1];
  local_1d0 = (void *)0x0;
  local_1c8 = *(int *)(param_4 + 1);
  lVar5 = (longlong)local_1c8;
  pvVar1 = (void *)*param_4;
  if (lVar5 == 0) {
    local_1c4 = 0;
  }
  else {
    FUN_1446dd670(&local_1d0,local_1c8,0);
    memcpy(local_1d0,pvVar1,lVar5 * 2);
  }
  local_1c0 = *param_5;
  local_1b8 = (void *)0x0;
  local_1b0 = *(int *)(param_6 + 1);
  lVar5 = (longlong)local_1b0;
  pvVar1 = (void *)*param_6;
  if (lVar5 == 0) {
    local_1ac = 0;
  }
  else {
    FUN_1446dd670(&local_1b8,local_1b0,0);
    memcpy(local_1b8,pvVar1,lVar5 * 2);
  }
  local_1a8 = *param_7;
  local_88 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,8);
  *puVar3 = &PTR_FUN_14b9c5430;
  FUN_148e97f7c(puVar3 + 1,local_1f0);
  if (puVar3 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = &LAB_148e97f74;
    local_88 = &LAB_148e97f74;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = puVar6;
  puVar4[4] = puVar3;
  local_78 = 0;
  *(undefined4 *)(puVar4 + 8) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_54;
  *(undefined4 *)(puVar4 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_4c;
  *(undefined4 *)(puVar4 + 6) = local_68;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_64;
  *(undefined4 *)(puVar4 + 7) = uStack_60;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_5c;
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_88 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    UNLOCK();
    LOCK();
    *puVar3 = puVar4;
    UNLOCK();
    if (local_88 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
    }
  }
  FUN_148e97f28(local_1f0);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e7b694 FUN_148e7b694 body=415 status=ok
// SIG undefined FUN_148e7b694(void)

/* WARNING: Removing unreachable block (ram,0x000148e7b7b3) */
/* WARNING: Removing unreachable block (ram,0x000148e7b7c2) */
/* WARNING: Removing unreachable block (ram,0x000148e7b7c6) */

undefined8 FUN_148e7b694(longlong param_1,char *param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_1a8,local_88);
  local_198 = *param_3;
  local_194 = *param_4;
  local_58 = &PTR_FUN_14b9c54b0;
  uStack_50 = local_1a8;
  uStack_48 = uStack_1a0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_3c = CONCAT31(uStack_3c._1_3_,local_194);
  uStack_40 = local_198;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = &LAB_148e984d4;
  puVar3[4] = 0;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_58._4_4_;
  *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_50._4_4_;
  *(undefined4 *)(puVar3 + 8) = (undefined4)uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_48._4_4_;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  local_78 = 0;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = puVar3;
    UNLOCK();
  }
  if (local_1a8 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148e7b846 FUN_148e7b846 body=196 status=ok
// SIG undefined FUN_148e7b846(void)

undefined8 FUN_148e7b846(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
switchD_148e7b86f_default:
    uVar2 = 0;
  }
  else {
    switch(param_4) {
    case 1:
      fVar3 = (float)param_2 / (float)param_3;
      fVar4 = *(float *)(lVar1 + 0xf8);
      break;
    case 2:
      fVar3 = (float)param_2 / (float)param_3;
      fVar4 = *(float *)(lVar1 + 0xfc);
      break;
    case 3:
      fVar3 = (float)param_2 / (float)param_3;
      fVar4 = *(float *)(lVar1 + 0x100);
      break;
    case 4:
      fVar3 = (float)param_2 / (float)param_3;
      fVar4 = *(float *)(lVar1 + 0x104);
      break;
    case 5:
      fVar3 = (float)param_2 / (float)param_3;
      fVar4 = *(float *)(lVar1 + 0x108);
      break;
    case 6:
      fVar3 = (float)param_2 / (float)param_3;
      fVar4 = *(float *)(lVar1 + 0x10c);
      break;
    default:
      goto switchD_148e7b86f_default;
    }
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),fVar3 <= fVar4);
  }
  return uVar2;
}



// FUNCTION 148e7b90a FUN_148e7b90a body=138 status=ok
// SIG undefined FUN_148e7b90a(void)

undefined8 FUN_148e7b90a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_3 + 0x20);
  local_20 = *(undefined8 *)(param_3 + 0x28);
  local_18 = *(longlong **)(param_3 + 0x30);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x60))(param_1,&local_28);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7b9aa FUN_148e7b9aa body=270 status=ok
// SIG undefined FUN_148e7b9aa(void)

void FUN_148e7b9aa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_140230656(param_2);
  if (cVar2 != '\0') {
    cVar2 = FUN_144a8fce0(param_2);
    if (((((cVar2 == '\0') && (lVar1 = *param_2, lVar1 != DAT_14c9659c8)) &&
         (lVar1 != DAT_14c9659e0)) &&
        (((lVar1 != DAT_14c9659f8 && (lVar1 != DAT_14c965a10)) &&
         ((lVar1 != DAT_14c965a28 && ((lVar1 != DAT_14c965a40 && (lVar1 != DAT_14c965a58)))))))) &&
       (lVar1 != DAT_14c965a70)) {
      if ((((lVar1 == DAT_14c965848) || (lVar1 == DAT_14c965860)) || (lVar1 == DAT_14c965878)) ||
         (lVar1 == DAT_14c965890)) goto LAB_148e7ba6c;
      local_28 = param_2[1];
      local_20 = param_2[2];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      local_30 = lVar1;
      FUN_148b00da4(param_1 + 0x20,&local_30);
    }
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_148e7ba6c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 148e7bac8 FUN_148e7bac8 body=56 status=ok
// SIG undefined FUN_148e7bac8(void)

void FUN_148e7bac8(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148e7baf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e7bb00 FUN_148e7bb00 body=138 status=ok
// SIG undefined FUN_148e7bb00(void)

undefined8 FUN_148e7bb00(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_3 + 0x20);
  local_20 = *(undefined8 *)(param_3 + 0x28);
  local_18 = *(longlong **)(param_3 + 0x30);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x60))(param_1,&local_28);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7bb90 FUN_148e7bb90 body=138 status=ok
// SIG undefined FUN_148e7bb90(void)

undefined8 FUN_148e7bb90(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_3 + 0x40);
  local_20 = *(undefined8 *)(param_3 + 0x48);
  local_18 = *(longlong **)(param_3 + 0x50);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x60))(param_1,&local_28);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7bc20 FUN_148e7bc20 body=138 status=ok
// SIG undefined FUN_148e7bc20(void)

undefined8 FUN_148e7bc20(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_3 + 0x40);
  local_20 = *(undefined8 *)(param_3 + 0x48);
  local_18 = *(longlong **)(param_3 + 0x50);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x60))(param_1,&local_28);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7bcac FUN_148e7bcac body=212 status=ok
// SIG undefined FUN_148e7bcac(void)

undefined8 FUN_148e7bcac(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar3 = *(float *)(param_3 + 0x6c);
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    puVar5 = &DAT_14c964cf8;
    if (fVar3 < 0.0) {
      puVar5 = &DAT_14c964d10;
    }
    puVar6 = &DAT_14c964d00;
    if (fVar3 < 0.0) {
      puVar6 = &DAT_14c964d18;
    }
    local_28 = *puVar5;
    local_18 = &DAT_14c964d08;
    if (fVar3 < 0.0) {
      local_18 = &DAT_14c964d20;
    }
    local_20 = *puVar6;
    local_18 = (longlong *)*local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x60))(fVar3,&local_28);
    plVar4 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7bd82 FUN_148e7bd82 body=183 status=ok
// SIG undefined FUN_148e7bd82(void)

void FUN_148e7bd82(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if ((lVar1 != DAT_14c9654a8) && (lVar1 != DAT_14c9654c0)) {
    if (lVar1 != DAT_14c964dd0) {
      cVar2 = FUN_140230860(param_2);
      if (cVar2 == '\0') {
        cVar2 = FUN_140230656(param_2);
        if (cVar2 == '\0') {
          local_30 = *param_2;
          local_28 = param_2[1];
          local_20 = param_2[2];
          if (local_20 != 0) {
            LOCK();
            *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
            UNLOCK();
          }
          FUN_148b00da4(param_1 + 0x20,&local_30);
          goto LAB_148e7be2a;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
LAB_148e7be2a:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7be48 FUN_148e7be48 body=373 status=ok
// SIG undefined FUN_148e7be48(void)

float * FUN_148e7be48(float *param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int iStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  iStack_38 = *(int *)(param_2 + 1);
  lVar4 = (longlong)iStack_38;
  _Src = (void *)*param_2;
  if (lVar4 == 0) {
    uStack_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,iStack_38,0);
    memcpy(local_40,_Src,lVar4 * 2);
  }
  cVar1 = FUN_144a791f8(param_2,&DAT_149eca134,1,1);
  if (cVar1 != '\0') {
    iVar3 = 0;
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
      iVar3 = *(int *)(param_2 + 1) + -1;
    }
    iVar5 = 1;
    if (1 < iVar3) {
      iVar5 = iVar3;
    }
    FUN_140056680(&local_50,puVar2 + ((longlong)iVar3 - (ulonglong)(iVar5 - 1)));
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_40 = (void *)CONCAT44(uStack_4c,local_50);
    iStack_38 = iStack_48;
    uStack_34 = uStack_44;
  }
  FUN_1415445ba(&local_50,&local_40);
  *param_1 = (float)(local_50 >> 0x10 & 0xff) * 0.003921569;
  param_1[1] = (float)(local_50 >> 8 & 0xff) * 0.003921569;
  param_1[2] = (float)(local_50 & 0xff) * 0.003921569;
  param_1[3] = (float)(local_50 >> 0x18) * 0.003921569;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148e7bfbe FUN_148e7bfbe body=15823 status=ok
// SIG undefined FUN_148e7bfbe(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000148e7c7c9) */
/* WARNING: Removing unreachable block (ram,0x000148e7c7d5) */
/* WARNING: Removing unreachable block (ram,0x000148e7c7ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148e7bfbe(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined ***pppuVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_5df8 [32];
  undefined4 **local_5dd8;
  longlong local_5dc8;
  longlong local_5dc0;
  undefined8 local_5db8;
  longlong *local_5db0;
  longlong *local_5da8;
  longlong *local_5da0;
  longlong *local_5d98;
  undefined8 local_5d90;
  longlong *local_5d88;
  longlong *local_5d80;
  longlong local_5d78;
  undefined1 local_5d70 [16];
  undefined1 local_5d60 [8];
  longlong *local_5d58;
  undefined1 local_5d49;
  undefined1 local_5d48 [8];
  longlong *local_5d40;
  undefined1 local_5d29;
  undefined8 local_5d28;
  longlong *local_5d20;
  undefined1 local_5d09;
  undefined8 local_5d08;
  longlong *local_5d00;
  undefined1 local_5ce9;
  undefined1 local_5ce8 [8];
  longlong *local_5ce0;
  undefined1 local_5cc9;
  undefined8 local_5cc8;
  longlong *local_5cc0;
  undefined4 local_5cb0;
  undefined1 local_5cac;
  undefined8 local_5ca8;
  undefined8 uStack_5ca0;
  undefined1 *local_5c98;
  undefined1 *puStack_5c90;
  uint local_5c88;
  undefined1 local_5c84;
  undefined8 local_5c80;
  undefined8 uStack_5c78;
  undefined1 local_5c68 [96];
  undefined1 local_5c08;
  undefined8 local_5c00;
  undefined8 uStack_5bf8;
  undefined4 local_5bf0;
  undefined1 local_5bec;
  undefined8 local_5be8;
  undefined8 uStack_5be0;
  undefined8 local_5bd8;
  longlong *local_5bd0;
  undefined8 local_5bc8;
  longlong *local_5bc0;
  undefined1 local_5bb1;
  undefined8 local_5bb0;
  longlong *local_5ba8;
  undefined1 *local_5b98;
  undefined1 *puStack_5b90;
  uint local_5b88;
  undefined1 local_5b84;
  undefined8 local_5b80;
  undefined8 uStack_5b78;
  undefined1 local_5b68 [96];
  undefined1 local_5b08;
  undefined8 local_5b00;
  undefined8 uStack_5af8;
  undefined8 local_5af0;
  longlong *local_5ae8;
  undefined8 local_5ae0;
  longlong *local_5ad8;
  undefined8 local_5ad0;
  longlong *local_5ac8;
  undefined8 local_5ac0;
  undefined8 uStack_5ab8;
  uint local_5ab0;
  undefined1 local_5aac;
  undefined8 local_5aa8;
  undefined8 uStack_5aa0;
  undefined8 local_5a98;
  undefined8 local_5a90;
  undefined1 local_5a88;
  undefined8 local_5a80;
  undefined8 uStack_5a78;
  undefined8 local_5a70;
  longlong *local_5a68;
  undefined8 local_5a60;
  longlong *local_5a58;
  undefined8 local_5a50;
  longlong *local_5a48;
  undefined1 local_5a39;
  undefined1 local_5a38 [8];
  longlong *local_5a30;
  undefined1 local_5a19;
  undefined8 local_5a18;
  longlong *local_5a10;
  undefined1 local_59f9;
  undefined1 local_59f8 [8];
  longlong *plStack_59f0;
  undefined1 local_59d9;
  undefined1 local_59d8 [8];
  longlong *local_59d0;
  undefined1 local_59b9;
  undefined1 local_59b8 [8];
  longlong *plStack_59b0;
  undefined1 local_5999;
  undefined8 local_5998;
  longlong *local_5990;
  undefined4 local_5980;
  undefined1 local_597c;
  undefined8 local_5978;
  undefined8 uStack_5970;
  undefined2 local_5968;
  undefined8 local_5960;
  undefined8 uStack_5958;
  undefined8 local_5950;
  longlong *plStack_5948;
  undefined8 local_5940;
  undefined8 uStack_5938;
  uint local_5930;
  undefined1 local_592c;
  undefined8 local_5928;
  undefined8 uStack_5920;
  undefined8 local_5918;
  undefined8 local_5910;
  undefined1 local_5908;
  undefined8 local_5900;
  undefined8 uStack_58f8;
  undefined8 local_58f0;
  longlong *local_58e8;
  undefined4 local_58e0;
  undefined1 local_58dc;
  undefined8 local_58d8;
  undefined8 uStack_58d0;
  undefined8 local_58c8;
  longlong *local_58c0;
  undefined8 local_58b8;
  longlong *plStack_58b0;
  undefined1 local_58a1;
  undefined8 local_58a0;
  longlong *local_5898;
  undefined1 local_5881;
  undefined1 local_5880 [8];
  longlong *local_5878;
  undefined1 local_5861;
  undefined8 local_5860;
  longlong *local_5858;
  undefined8 local_5848;
  longlong *local_5840;
  undefined8 local_5838;
  longlong *local_5830;
  undefined8 *local_5828;
  undefined4 local_5820;
  undefined8 local_5818;
  undefined8 uStack_5810;
  undefined1 local_5808;
  undefined8 local_5800;
  undefined4 local_57f8;
  undefined8 local_57f0;
  longlong *local_57e8;
  undefined8 local_57e0;
  longlong *local_57d8;
  undefined1 local_57c9;
  undefined8 local_57c8;
  longlong *local_57c0;
  undefined8 local_57b0;
  longlong *local_57a8;
  undefined8 local_57a0;
  longlong *local_5798;
  undefined1 local_5789;
  undefined8 local_5788;
  longlong *local_5780;
  undefined8 local_5770;
  longlong *local_5768;
  undefined8 local_5760;
  longlong *plStack_5758;
  undefined1 local_5749;
  undefined1 local_5748 [8];
  longlong *local_5740;
  undefined1 local_5729;
  undefined8 local_5728;
  longlong *local_5720;
  undefined8 local_5710;
  longlong *local_5708;
  undefined8 local_5700;
  longlong *local_56f8;
  undefined1 local_56e9;
  undefined1 local_56e8 [8];
  longlong *local_56e0;
  undefined1 local_56c9;
  undefined1 local_56c8 [8];
  longlong *local_56c0;
  undefined8 local_56b0;
  undefined8 uStack_56a8;
  undefined1 local_56a0;
  undefined8 local_5698;
  undefined8 uStack_5690;
  undefined1 *local_5688;
  undefined1 *puStack_5680;
  uint local_5678;
  undefined1 local_5674;
  undefined8 local_5670;
  undefined8 uStack_5668;
  undefined8 local_5658;
  undefined8 local_5650;
  undefined1 local_5648;
  undefined8 local_5640;
  undefined8 uStack_5638;
  undefined8 local_5630;
  longlong *local_5628;
  undefined8 local_5620;
  longlong *local_5618;
  undefined8 local_5610;
  longlong *local_5608;
  undefined1 local_55f9;
  undefined1 local_55f8 [8];
  longlong *local_55f0;
  undefined1 local_55d9;
  undefined1 local_55d8 [8];
  longlong *local_55d0;
  undefined8 local_55c0;
  undefined8 uStack_55b8;
  undefined1 local_55b0;
  undefined8 local_55a8;
  undefined8 uStack_55a0;
  undefined1 *local_5598;
  undefined1 *puStack_5590;
  uint local_5588;
  undefined1 local_5584;
  undefined8 local_5580;
  undefined8 uStack_5578;
  undefined8 local_5570;
  undefined8 local_5568;
  undefined1 local_5560;
  undefined8 local_5558;
  undefined8 uStack_5550;
  undefined8 local_5548;
  longlong *local_5540;
  undefined8 local_5538;
  longlong *local_5530;
  undefined8 local_5528;
  longlong *local_5520;
  undefined8 local_5518;
  longlong *local_5510;
  undefined8 local_5508;
  longlong *local_5500;
  undefined1 local_54f1;
  undefined8 local_54f0;
  longlong *local_54e8;
  undefined8 local_54d8;
  longlong *local_54d0;
  undefined8 local_54c8;
  longlong *local_54c0;
  undefined1 local_54b1;
  undefined8 local_54b0;
  longlong *local_54a8;
  undefined8 local_5498;
  longlong *local_5490;
  undefined8 local_5488;
  longlong *local_5480;
  undefined1 local_5471;
  undefined1 local_5470 [8];
  longlong *plStack_5468;
  undefined8 local_5458;
  undefined8 uStack_5450;
  uint local_5448;
  undefined1 local_5444;
  undefined8 local_5440;
  undefined8 uStack_5438;
  undefined8 local_5430;
  undefined8 local_5428;
  undefined1 local_5420;
  undefined8 local_5418;
  undefined8 uStack_5410;
  undefined8 local_5408;
  longlong *local_5400;
  undefined8 local_53f8;
  longlong *local_53f0;
  undefined2 local_53e8;
  undefined8 local_53e0;
  undefined8 uStack_53d8;
  undefined8 local_53d0;
  longlong *local_53c8;
  undefined8 local_53c0;
  longlong *local_53b8;
  undefined8 local_53b0;
  longlong *local_53a8;
  undefined8 local_53a0;
  longlong *local_5398;
  undefined8 local_5390;
  longlong *local_5388;
  undefined8 local_5380;
  longlong *local_5378;
  undefined8 local_5370;
  longlong *local_5368;
  undefined8 local_5360;
  longlong *local_5358;
  undefined8 local_5350;
  longlong *local_5348;
  undefined8 local_5340;
  longlong *local_5338;
  undefined4 local_5330;
  undefined4 uStack_532c;
  undefined4 uStack_5328;
  undefined4 uStack_5324;
  undefined1 local_5320;
  undefined8 local_5318;
  undefined8 uStack_5310;
  undefined8 local_5308;
  undefined8 local_5300;
  longlong local_52f8;
  undefined7 uStack_52f0;
  undefined1 uStack_52e9;
  undefined7 uStack_52e8;
  undefined8 local_52e0;
  undefined8 local_52d8;
  undefined8 uStack_52d0;
  undefined8 local_52c8;
  longlong *plStack_52c0;
  undefined8 local_52b8;
  undefined8 local_52b0;
  undefined4 local_52a8;
  undefined2 local_52a4;
  undefined1 local_52a2;
  undefined4 local_52a0;
  undefined1 local_5298 [8];
  undefined1 local_5290;
  undefined1 local_528f;
  undefined8 local_5288;
  undefined8 uStack_5280;
  undefined1 local_5278 [88];
  undefined1 local_5220 [24];
  undefined4 local_5208;
  undefined4 uStack_5204;
  undefined4 uStack_5200;
  undefined4 uStack_51fc;
  undefined1 local_51f8;
  undefined1 local_51f0 [40];
  undefined1 local_51c8 [64];
  undefined4 local_5188;
  undefined1 local_5184;
  undefined4 local_5180;
  undefined1 local_517c;
  undefined1 local_5170 [24];
  undefined4 local_5158;
  undefined4 uStack_5154;
  undefined4 uStack_5150;
  undefined4 uStack_514c;
  undefined1 local_5148;
  undefined1 local_5140 [40];
  undefined1 local_5118 [24];
  undefined4 local_5100;
  undefined4 uStack_50fc;
  undefined4 uStack_50f8;
  undefined4 uStack_50f4;
  undefined1 local_50f0;
  undefined1 local_50e8 [40];
  undefined4 local_50c0;
  undefined1 local_50bc;
  undefined1 local_50b8;
  undefined8 local_50b0;
  undefined8 uStack_50a8;
  undefined1 local_50a0 [88];
  undefined1 local_5048 [64];
  undefined4 local_5008;
  undefined1 local_5004;
  undefined4 local_5000;
  undefined1 local_4ffc;
  undefined1 local_4ff0 [64];
  undefined4 local_4fb0;
  undefined1 local_4fac;
  undefined4 local_4fa8;
  undefined1 local_4fa4;
  undefined1 local_4f98 [24];
  undefined8 local_4f80;
  undefined8 uStack_4f78;
  undefined1 local_4f70;
  undefined1 local_4f68 [40];
  undefined1 local_4f40 [24];
  undefined4 local_4f28;
  undefined4 uStack_4f24;
  undefined4 uStack_4f20;
  undefined4 uStack_4f1c;
  undefined1 local_4f18;
  undefined1 local_4f10 [40];
  undefined1 local_4ee8 [24];
  undefined4 local_4ed0;
  undefined4 uStack_4ecc;
  undefined4 uStack_4ec8;
  undefined4 uStack_4ec4;
  undefined1 local_4ec0;
  undefined1 local_4eb8 [40];
  undefined1 local_4e90 [88];
  undefined1 local_4e38 [88];
  undefined1 local_4de0 [24];
  undefined4 local_4dc8;
  undefined4 uStack_4dc4;
  undefined4 uStack_4dc0;
  undefined4 uStack_4dbc;
  undefined1 local_4db8;
  undefined1 local_4db0 [16];
  undefined4 local_4da0;
  undefined1 local_4d9c;
  undefined4 local_4d98;
  undefined1 local_4d94;
  undefined8 local_4d88;
  longlong *plStack_4d80;
  undefined1 local_4d78;
  undefined8 local_4d70;
  undefined8 uStack_4d68;
  undefined1 local_4bb0 [96];
  undefined1 local_4b50;
  undefined1 local_4b48 [48];
  undefined1 *local_4b18;
  undefined1 *puStack_4b10;
  uint local_4b08;
  undefined1 local_4b04;
  undefined1 local_4b00 [208];
  undefined4 local_4a30;
  undefined1 local_4a2c;
  undefined1 local_4a28 [176];
  undefined4 local_4978;
  undefined1 local_4974;
  undefined1 local_4970 [88];
  undefined1 local_4918 [192];
  undefined8 local_4858;
  longlong *plStack_4850;
  undefined1 local_4848;
  undefined8 local_4840;
  undefined8 uStack_4838;
  undefined1 auStack_4680 [96];
  undefined1 local_4620;
  undefined1 local_4618 [48];
  undefined1 *local_45e8;
  undefined1 *puStack_45e0;
  uint local_45d8;
  undefined1 local_45d4;
  undefined1 local_45d0 [488];
  undefined1 local_43e8 [192];
  undefined1 local_4328 [440];
  undefined1 local_4170 [424];
  undefined8 local_3fc8;
  longlong *local_3fc0;
  undefined4 local_3fb0;
  undefined4 uStack_3fac;
  undefined4 uStack_3fa8;
  undefined4 uStack_3fa4;
  undefined1 local_3fa0;
  undefined1 auStack_3f98 [80];
  undefined8 local_3f48;
  undefined1 local_3f40;
  undefined1 local_3f38 [136];
  undefined4 local_3eb0;
  undefined4 uStack_3eac;
  undefined4 uStack_3ea8;
  undefined4 uStack_3ea4;
  uint local_3ea0;
  undefined1 local_3e9c;
  undefined1 local_3e98 [88];
  undefined1 local_3e40 [424];
  undefined8 local_3c98;
  undefined4 local_3c90;
  undefined4 uStack_3c8c;
  undefined4 uStack_3c88;
  undefined4 uStack_3c84;
  undefined1 local_3c80;
  undefined1 local_3c78 [16];
  undefined8 local_3c68;
  longlong *local_3c60;
  undefined8 local_3b98;
  undefined1 *puStack_3b90;
  undefined8 local_3b88;
  undefined8 uStack_3b80;
  undefined8 uStack_3b78;
  undefined8 uStack_3b70;
  undefined8 local_3b68;
  longlong *aplStack_3b60 [2];
  undefined4 local_3b50;
  undefined1 local_3b4c;
  undefined4 local_3b30;
  undefined4 uStack_3b2c;
  undefined4 uStack_3b28;
  undefined4 uStack_3b24;
  undefined1 local_3b20;
  undefined1 *local_39c8;
  undefined2 local_3828;
  undefined1 local_3820 [152];
  undefined4 local_3788;
  undefined1 local_3784;
  undefined1 local_3780 [96];
  undefined1 local_3720 [424];
  undefined8 local_3578;
  longlong *local_3570;
  undefined4 local_3560;
  undefined4 uStack_355c;
  undefined4 uStack_3558;
  undefined4 uStack_3554;
  undefined1 local_3550;
  undefined1 local_3548 [80];
  undefined8 local_34f8;
  undefined1 local_34f0;
  undefined1 local_34e8 [136];
  undefined4 local_3460;
  undefined4 uStack_345c;
  undefined4 uStack_3458;
  undefined4 uStack_3454;
  uint local_3450;
  undefined1 local_344c;
  undefined1 local_3448 [88];
  undefined1 local_33f0 [472];
  undefined8 local_3218;
  longlong *local_3210;
  undefined4 local_31f0;
  undefined1 local_31ec;
  undefined1 local_31e8 [160];
  undefined1 local_3148 [64];
  undefined4 local_3108;
  undefined1 local_3104;
  undefined4 local_3100;
  undefined1 local_30fc;
  undefined1 *local_3088;
  undefined ***local_3078;
  undefined **local_3068;
  longlong local_3060;
  undefined8 local_3048;
  undefined8 local_3040;
  undefined1 local_3038;
  undefined1 local_3030;
  undefined8 local_3028;
  undefined8 uStack_3020;
  undefined1 local_3018 [568];
  undefined1 local_2de0 [440];
  undefined1 *local_2c28;
  undefined ***local_2c18;
  undefined **local_2c08;
  longlong local_2c00;
  undefined1 local_2be0 [568];
  undefined1 *local_29a8;
  undefined ***local_2998;
  undefined **local_2988;
  longlong local_2980;
  undefined1 local_2968 [568];
  undefined1 local_2730 [432];
  undefined8 local_2580;
  longlong local_2508;
  longlong local_2500;
  undefined1 local_24e8 [448];
  undefined4 local_2328;
  undefined4 uStack_2324;
  undefined4 uStack_2320;
  undefined4 uStack_231c;
  undefined1 local_2318;
  undefined1 local_2310 [80];
  undefined8 local_22c0;
  undefined1 local_22b8;
  undefined1 local_22b0 [136];
  undefined1 *local_2228;
  undefined1 *puStack_2220;
  uint local_2218;
  undefined1 local_2214;
  undefined1 local_2210 [88];
  undefined1 *local_21b8;
  undefined ***local_21a8;
  undefined **local_2198;
  longlong local_2190;
  undefined1 local_2170 [472];
  undefined8 local_1f98;
  longlong *local_1f90;
  undefined4 local_1ec8 [112];
  undefined4 local_1d08;
  undefined4 uStack_1d04;
  undefined4 uStack_1d00;
  undefined4 uStack_1cfc;
  undefined1 local_1cf8;
  undefined1 local_1cf0 [80];
  undefined8 local_1ca0;
  undefined1 local_1c98;
  undefined1 local_1c90 [136];
  undefined1 *local_1c08;
  undefined1 *puStack_1c00;
  uint local_1bf8;
  undefined1 local_1bf4;
  undefined1 local_1bf0 [88];
  undefined1 *local_1b98;
  undefined ***local_1b88;
  undefined **local_1b78;
  longlong local_1b70;
  undefined1 local_1b58 [472];
  undefined8 local_1980;
  longlong *local_1978;
  undefined1 local_18b0 [440];
  undefined1 *local_16f8;
  undefined ***local_16e8;
  undefined **local_16d8;
  longlong local_16d0;
  undefined8 local_16b0;
  undefined8 local_16a8;
  undefined1 local_16a0;
  undefined1 local_1698;
  undefined8 local_1690;
  undefined8 uStack_1688;
  undefined1 local_1680 [568];
  undefined1 *local_1448;
  undefined ***local_1438;
  undefined **local_1428;
  longlong local_1420;
  undefined8 local_1408;
  undefined8 local_1400;
  undefined1 local_13f8;
  undefined1 local_13f0;
  undefined8 local_13e8;
  undefined8 uStack_13e0;
  undefined1 local_13d8 [568];
  undefined4 *local_11a0 [56];
  undefined4 local_fe0;
  undefined4 uStack_fdc;
  undefined4 uStack_fd8;
  undefined4 uStack_fd4;
  undefined1 local_fd0;
  undefined1 local_fc8 [80];
  undefined8 local_f78;
  undefined1 local_f70;
  undefined1 local_f68 [136];
  undefined4 local_ee0;
  undefined4 uStack_edc;
  undefined4 uStack_ed8;
  undefined4 uStack_ed4;
  uint local_ed0;
  undefined1 local_ecc;
  undefined1 local_ec8 [88];
  undefined1 local_e70 [112];
  undefined2 local_e00;
  undefined1 local_df8 [320];
  undefined1 local_cb8 [192];
  undefined1 local_bf8 [440];
  undefined1 local_a40 [424];
  undefined8 local_898;
  undefined8 local_868;
  longlong *local_860;
  undefined1 local_798 [192];
  undefined1 local_6d8 [162];
  undefined1 local_636;
  undefined1 local_520 [440];
  undefined1 local_368 [744];
  ulonglong local_80;
  undefined8 uStack_48;
  
  uStack_48 = 0x148e7bfd4;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_5df8;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  plVar11 = (longlong *)(param_1 + 0x270);
  local_5d78 = param_2;
  if (*(int *)(param_1 + 0x27c) < param_3) {
    FUN_145ff9422(plVar11,param_3);
  }
  local_5dc8 = param_1;
  if (param_3 != 0) {
    do {
      thunk_FUN_140a5071c(&local_3b98);
      local_1ec8[0] = 0x3f000000;
      local_11a0[0] = local_1ec8;
      FUN_148e98e0a(&local_4858,local_11a0);
      FUN_148e7fd8e(&local_4858,&local_4d88,&local_3b98);
      plVar7 = plStack_4850;
      if (plStack_4850 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_4850 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plStack_4850)(plStack_4850);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      FUN_140a4ff8c(&local_3b98);
      uVar12 = local_4d88;
      local_5290 = DAT_14c96b23b;
      local_528f = 1;
      local_5288 = 0;
      uStack_5280 = 0;
      FUN_14020e622(local_4d88,&local_5290);
      param_1 = local_5dc8;
      aplStack_3b60[0] = (longlong *)0x0;
      uStack_3b78 = 0;
      uStack_3b70 = 0;
      local_3b88 = 0;
      uStack_3b80 = 0;
      local_3b98 = (code *)0x0;
      puStack_3b90 = (undefined1 *)0x0;
      if (plStack_4d80 == (longlong *)0x0) {
        local_3b68 = uVar12;
        plVar7 = aplStack_3b60[0];
      }
      else {
        LOCK();
        *(int *)(plStack_4d80 + 1) = (int)plStack_4d80[1] + 1;
        UNLOCK();
        local_3b68 = uVar12;
        plVar7 = plStack_4d80;
        if (plStack_4d80 == (longlong *)0x0) {
          LOCK();
          _DAT_00000008 = _DAT_00000008 + -1;
          UNLOCK();
          plVar7 = aplStack_3b60[0];
          if (_DAT_00000008 == 0) {
            (*(code *)*_DAT_00000000)(0);
            LOCK();
            _DAT_0000000c = _DAT_0000000c + -1;
            UNLOCK();
            plVar7 = aplStack_3b60[0];
            if (_DAT_0000000c == 0) {
              (*(code *)_DAT_00000000[2])(0);
              plVar7 = aplStack_3b60[0];
            }
          }
        }
      }
      aplStack_3b60[0] = plVar7;
      iVar5 = *(int *)(param_1 + 0x278);
      *(uint *)(param_1 + 0x278) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x27c) < iVar5 + 1U) {
        FUN_148e98f86(plVar11,iVar5);
      }
      lVar15 = *plVar11;
      lVar18 = (longlong)iVar5 * 0x40;
      FUN_145ff90f2(lVar15 + lVar18,&local_3b98);
      *(undefined8 *)(lVar15 + 0x30 + lVar18) = local_3b68;
      *(longlong **)(lVar15 + 0x38 + lVar18) = aplStack_3b60[0];
      if (aplStack_3b60[0] != (longlong *)0x0) {
        LOCK();
        *(int *)(aplStack_3b60[0] + 1) = (int)aplStack_3b60[0][1] + 1;
        UNLOCK();
      }
      FUN_145ff903a(&local_3b98);
      plVar7 = plStack_4d80;
      if (plStack_4d80 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_4d80 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plStack_4d80)(plStack_4d80);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_1407679b0(&local_3b98);
  local_5dd8 = local_11a0;
  FUN_14076837c(&local_4858,"SVerticalBox",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x3d);
  FUN_14076784c(&local_4858,&local_4d88,&local_3b98);
  local_5dc0 = local_4d88;
  if (plStack_4d80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_4d80 + 1) = (int)plStack_4d80[1] + 1;
    UNLOCK();
    if (plStack_4d80 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_4d80 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plStack_4d80)(plStack_4d80);
        LOCK();
        piVar1 = (int *)((longlong)plStack_4d80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_4d80 + 0x10))(plStack_4d80);
        }
      }
    }
  }
  plVar11 = plStack_4850;
  local_5db0 = plStack_4d80;
  if (plStack_4850 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_4850 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_4850)(plStack_4850);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_14149255e(&local_3b98);
  iVar5 = *(int *)(param_1 + 0x278);
  if ((longlong)iVar5 != 0) {
    lVar15 = *(longlong *)(local_5dc8 + 0x270);
    lVar18 = 0;
    do {
      FUN_140767c14(local_5dc0,&local_3b98,0xffffffff);
      local_3b50 = 1;
      local_3b4c = 1;
      local_4858 = 0x4120000000000000;
      plStack_4850 = (longlong *)0x0;
      local_4848 = 1;
      local_4840 = 0;
      uStack_4838 = 0;
      local_3b68 = CONCAT71(local_3b68._1_7_,1);
      uStack_3b78 = 0x4120000000000000;
      uStack_3b70 = 0;
      FUN_144a450dc(aplStack_3b60,&local_4840);
      FUN_1449db362(&local_4840);
      local_4858 = *(undefined8 *)(lVar15 + 0x30 + lVar18);
      plVar11 = *(longlong **)(lVar15 + 0x38 + lVar18);
      if (plVar11 == (longlong *)0x0) {
        plStack_4850 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        plStack_4850 = plVar11;
      }
      FUN_145aaf878(&puStack_3b90,&local_4858);
      plVar7 = plStack_4850;
      if (plStack_4850 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_4850 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plStack_4850)(plStack_4850);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar11 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      FUN_140767802(&local_3b98);
      lVar18 = lVar18 + 0x40;
    } while ((longlong)iVar5 * 0x40 != lVar18);
  }
  FUN_145ffbb24(local_5298);
  local_52e0 = 0;
  local_52f8 = 0;
  uStack_52f0 = 0;
  uStack_52e9 = 0;
  uStack_52e8 = 0;
  local_52d8 = 0;
  uStack_52d0 = 0x3f80000000000000;
  local_52c8 = 0;
  plStack_52c0 = (longlong *)0x0;
  local_52b8 = 0;
  local_52b0 = 0x41c00000;
  local_52a8 = 0;
  local_52a4 = 2;
  local_52a2 = 0;
  local_52a0 = 0x3f800000;
  cVar10 = FUN_14493c216(local_5298,0);
  lVar15 = local_5dc8;
  if (cVar10 == '\0') {
    lVar18 = FUN_14479d2ce(local_5298);
    if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar18);
    }
    local_52f8 = lVar18;
    lVar18 = FUN_14479d2ce(local_5298);
    if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar18);
    }
    *(longlong *)(lVar15 + 0x868) = lVar18;
  }
  FUN_1446ddc76(&local_3b98,"Medium",1);
  local_52b8 = local_3b98;
  *(undefined4 *)(lVar15 + 0x8b0) = 0x41b00000;
  FUN_1446ddc76(&local_3b98,"Medium",1);
  *(code **)(lVar15 + 0x8a8) = local_3b98;
  *(undefined4 *)(lVar15 + 0x878) = 1;
  *(undefined8 *)(lVar15 + 0x888) = 0;
  *(undefined8 *)(lVar15 + 0x890) = 0x3f80000000000000;
  FUN_140a581a0(&local_3b98);
  FUN_1412cc59c(&puStack_3b90,&local_52f8);
  local_3b30 = 0x3f1f9db2;
  uStack_3b2c = 0x3f2f9db2;
  uStack_3b28 = 0x3f30a3d7;
  uStack_3b24 = 0x3f800000;
  local_3b20 = 0;
  FUN_140e9ea3a(local_368,&local_3b98);
  FUN_140e9e952(&local_3b98);
  plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_5300,"WhiteBrush",1);
  uVar12 = (**(code **)(*plVar11 + 0x50))(plVar11,local_5300,0,0);
  FUN_140f13d9e(lVar15 + 0x6d0,uVar12);
  *(undefined8 *)(lVar15 + 0x6d8) = 0;
  *(undefined8 *)(lVar15 + 0x6e0) = 0;
  *(undefined1 *)(lVar15 + 0x6e8) = 0;
  plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_5308,"WhiteBrush",1);
  uVar12 = (**(code **)(*plVar11 + 0x50))(plVar11,local_5308,0,0);
  FUN_140f13d9e(lVar15 + 0x780,uVar12);
  *(undefined8 *)(lVar15 + 0x788) = 0x3f40be0e3e58c7e3;
  *(undefined8 *)(lVar15 + 0x790) = 0x3e99999a3f72f1aa;
  *(undefined1 *)(lVar15 + 0x798) = 0;
  local_5330 = 0;
  uStack_532c = 0;
  uStack_5328 = 0x42480000;
  uStack_5324 = 0x41c80000;
  local_5320 = 1;
  local_5318 = 0;
  uStack_5310 = 0;
  local_5d90 = FUN_140a58d14(lVar15 + 0x218);
  FUN_140a504fe(local_520);
  FUN_140a4fdf2(local_4de0,0);
  local_4da0 = 1;
  local_4d9c = 1;
  local_4d98 = 2;
  local_4d94 = 1;
  local_3b98 = (code *)0x4248000042400000;
  puStack_3b90 = (undefined1 *)0x0;
  local_3b88._0_1_ = 1;
  uStack_3b80 = 0;
  uStack_3b78 = 0;
  local_4db8 = 1;
  local_4dc8 = 0x42400000;
  uStack_4dc4 = 0x42480000;
  uStack_4dc0 = 0;
  uStack_4dbc = 0;
  FUN_144a450dc(local_4db0,&uStack_3b80);
  FUN_1449db362(&uStack_3b80);
  if (local_5db0 == (longlong *)0x0) {
    local_5358 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_5db0 + 1) = (int)local_5db0[1] + 1;
    UNLOCK();
    local_5358 = local_5db0;
    LOCK();
    *(int *)(local_5db0 + 1) = (int)local_5db0[1] + 1;
    UNLOCK();
  }
  local_5360 = local_5dc0;
  uVar12 = FUN_140a4fd40(local_4de0,&local_5360);
  local_5db8 = FUN_140a5058c(local_520,uVar12);
  FUN_140a4fdf2(local_4e38,0);
  FUN_1407679b0(local_6d8);
  local_636 = 0;
  FUN_145aafb3e(local_798);
  FUN_140a53a96(local_a40);
  local_898 = 0x300000003;
  FUN_140a5296a(local_bf8);
  FUN_140a50426(local_cb8);
  local_5dc0 = FUN_140a52578(local_cb8);
  FUN_140a504fe(local_e70);
  local_53e8 = CONCAT11(1,DAT_14c96b1e1);
  local_53e0 = 0;
  uStack_53d8 = 0;
  local_e00 = local_53e8;
  FUN_144a450dc(local_df8,&local_53e0);
  FUN_1449db362(&local_53e0);
  FUN_140a4fdf2(local_4e90,0);
  FUN_140a562d0(local_11a0);
  local_3b98 = (code *)&DAT_3f8000003f800000;
  puStack_3b90 = &DAT_3f8000003f800000;
  local_3b88._0_1_ = 1;
  uStack_3b80 = 0;
  uStack_3b78 = 0;
  local_fd0 = 1;
  local_fe0 = 0x3f800000;
  uStack_fdc = 0x3f800000;
  uStack_fd8 = 0x3f800000;
  uStack_fd4 = 0x3f800000;
  FUN_144a450dc(local_fc8,&uStack_3b80);
  FUN_1449db362(&uStack_3b80);
  plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_5430,"WhiteBrush",1);
  local_5428 = (**(code **)(*plVar11 + 0x50))(plVar11,local_5430,0,0);
  local_5420 = 1;
  local_5418 = 0;
  uStack_5410 = 0;
  local_f70 = 1;
  local_f78 = local_5428;
  FUN_144a450dc(local_f68,&local_5418);
  FUN_1449db362(&local_5418);
  local_5458 = 0x3e8a3d7100000000;
  uStack_5450 = 0x3f28f5c33ed1eb85;
  local_5448 = local_5448 & 0xffffff00;
  local_5444 = 1;
  local_5440 = 0;
  uStack_5438 = 0;
  local_ee0 = 0;
  uStack_edc = 0x3e8a3d71;
  uStack_ed8 = 0x3ed1eb85;
  uStack_ed4 = 0x3f28f5c3;
  local_ed0 = local_5448;
  local_ecc = 1;
  FUN_144a450dc(local_ec8,&local_5440);
  FUN_1449db362(&local_5440);
  local_5dd8 = (undefined4 **)&local_5471;
  FUN_140a55c32(local_5470,"SBorder",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x7a);
  FUN_140a530e4(local_5470,&local_5408,local_11a0);
  local_53f8 = local_5408;
  local_53f0 = local_5400;
  if (local_5400 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5400 + 1) = (int)local_5400[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fd40(local_4e90,&local_53f8);
  uVar12 = FUN_140a5058c(local_e70,uVar12);
  FUN_140a4fdf2(local_4ee8,0);
  local_3b98 = (code *)0x40a0000000000000;
  puStack_3b90 = (undefined1 *)0x40a0000000000000;
  local_3b88 = CONCAT71(local_3b88._1_7_,1);
  uStack_3b80 = 0;
  uStack_3b78 = 0;
  local_4ec0 = 1;
  local_4ed0 = 0;
  uStack_4ecc = 0x40a00000;
  uStack_4ec8 = 0;
  uStack_4ec4 = 0x40a00000;
  FUN_144a450dc(local_4eb8,&uStack_3b80);
  FUN_1449db362(&uStack_3b80);
  FUN_140a53334(local_13d8);
  local_1408 = 0x4053000000000000;
  local_1400 = 0x4044000000000000;
  local_13f8 = 1;
  local_13f0 = 1;
  local_13e8 = 0;
  uStack_13e0 = 0;
  uVar13 = FUN_1469f8fd4(local_13d8);
  lVar18 = local_5dc8;
  local_1438 = (undefined ***)0x0;
  local_1428 = &PTR_LAB_14b9c58b0;
  local_1420 = local_5dc8;
  local_1448 = &LAB_1442d96bc;
  FUN_148e7fe06(uVar13);
  local_5dd8 = (undefined4 **)&local_54b1;
  FUN_140a554b8(&local_54b0,"SImage",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x83);
  if (local_54a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_54a8 + 1) = (int)local_54a8[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar18 + 0x2d0);
  *(undefined8 *)(lVar18 + 0x2c8) = local_54b0;
  *(longlong **)(lVar18 + 0x2d0) = local_54a8;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a52c70(&local_54b0,&local_5498,uVar13);
  local_5488 = local_5498;
  local_5480 = local_5490;
  if (local_5490 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5490 + 1) = (int)local_5490[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_4ee8,&local_5488);
  uVar12 = FUN_140a5058c(uVar12,uVar13);
  FUN_140a4fdf2(local_4f40,0);
  local_3b98 = (code *)0x40a0000040a00000;
  puStack_3b90 = (undefined1 *)0x40a0000040a00000;
  local_3b88 = CONCAT71(local_3b88._1_7_,1);
  uStack_3b80 = 0;
  uStack_3b78 = 0;
  local_4f18 = 1;
  local_4f28 = 0x40a00000;
  uStack_4f24 = 0x40a00000;
  uStack_4f20 = 0x40a00000;
  uStack_4f1c = 0x40a00000;
  FUN_144a450dc(local_4f10,&uStack_3b80);
  FUN_1449db362(&uStack_3b80);
  FUN_140a53334(local_1680);
  local_16b0 = 0x4044000000000000;
  local_16a8 = 0x4044000000000000;
  local_16a0 = 1;
  local_1698 = 1;
  local_1690 = 0;
  uStack_1688 = 0;
  uVar13 = FUN_1469f8fd4(local_1680);
  local_16e8 = (undefined ***)0x0;
  local_16d8 = &PTR_LAB_14b9c58d0;
  local_16d0 = lVar18;
  local_16f8 = &LAB_1442d9728;
  FUN_148e7fe06(uVar13);
  local_5dd8 = (undefined4 **)&local_54f1;
  FUN_140a554b8(&local_54f0,"SImage",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x8d);
  if (local_54e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_54e8 + 1) = (int)local_54e8[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar18 + 0x398);
  *(undefined8 *)(lVar18 + 0x390) = local_54f0;
  *(longlong **)(lVar18 + 0x398) = local_54e8;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a52c70(&local_54f0,&local_54d8,uVar13);
  local_54c8 = local_54d8;
  local_54c0 = local_54d0;
  if (local_54d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_54d0 + 1) = (int)local_54d0[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_4f40,&local_54c8);
  uVar12 = FUN_140a5058c(uVar12,uVar13);
  FUN_140a4fdf2(local_4f98,0);
  local_3b98 = (code *)0x0;
  puStack_3b90 = (undefined1 *)0x0;
  local_3b88 = CONCAT71(local_3b88._1_7_,1);
  uStack_3b80 = 0;
  uStack_3b78 = 0;
  local_4f80 = 0;
  uStack_4f78 = 0;
  local_4f70 = 1;
  FUN_144a450dc(local_4f68,&uStack_3b80);
  FUN_1449db362(&uStack_3b80);
  FUN_140a504fe(local_18b0);
  FUN_140a4fdf2(local_4ff0,0);
  local_4fb0 = 1;
  local_4fac = 1;
  local_4fa8 = 3;
  local_4fa4 = 1;
  FUN_140a53a96(local_1b58);
  local_1b88 = (undefined ***)0x0;
  local_1b78 = &PTR_LAB_14b9c58f0;
  local_1b70 = local_5dc8;
  local_1b98 = &LAB_1442d9794;
  FUN_148e7fe96(local_1b58);
  FUN_140a562d0(local_1ec8);
  plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_5570,"WhiteBrush",1);
  local_5568 = (**(code **)(*plVar11 + 0x50))(plVar11,local_5570,0,0);
  local_5560 = 1;
  local_5558 = 0;
  uStack_5550 = 0;
  local_1c98 = 1;
  local_1ca0 = local_5568;
  FUN_144a450dc(local_1c90,&local_5558);
  FUN_1449db362(&local_5558);
  local_5598 = &DAT_3f8000003f800000;
  puStack_5590 = &DAT_3f8000003f800000;
  local_5588 = local_5588 & 0xffffff00;
  local_5584 = 1;
  local_5580 = 0;
  uStack_5578 = 0;
  local_1c08 = &DAT_3f8000003f800000;
  puStack_1c00 = &DAT_3f8000003f800000;
  local_1bf8 = local_5588;
  local_1bf4 = 1;
  FUN_144a450dc(local_1bf0,&local_5580);
  FUN_1449db362(&local_5580);
  local_55c0 = 0x40000000;
  uStack_55b8 = 0x40000000;
  local_55b0 = 1;
  local_55a8 = 0;
  uStack_55a0 = 0;
  local_1cf8 = 1;
  local_1d08 = 0x40000000;
  uStack_1d04 = 0;
  uStack_1d00 = 0x40000000;
  uStack_1cfc = 0;
  FUN_144a450dc(local_1cf0,&local_55a8);
  FUN_1449db362(&local_55a8);
  local_5dd8 = (undefined4 **)&local_55d9;
  FUN_140a55c32(local_55d8,"SBorder",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x9e);
  FUN_140a530e4(local_55d8,&local_5548,local_1ec8);
  plVar7 = local_1978;
  plVar11 = local_5540;
  lVar18 = local_5dc8;
  if (local_5540 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5540 + 1) = (int)local_5540[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_5540 + 1) = (int)local_5540[1] + 1;
    UNLOCK();
  }
  local_1980 = local_5548;
  local_1978 = local_5540;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_5d80 = plVar11;
  local_5dd8 = (undefined4 **)&local_55f9;
  FUN_140a53d66(local_55f8,&DAT_149efe19f,
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x9b);
  FUN_140a50bf4(local_55f8,&local_5538,local_1b58);
  local_5528 = local_5538;
  local_5520 = local_5530;
  if (local_5530 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5530 + 1) = (int)local_5530[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_4ff0,&local_5528);
  uVar13 = FUN_140a5058c(local_18b0,uVar13);
  FUN_140a4fdf2(local_5048,0);
  local_5008 = 3;
  local_5004 = 1;
  local_5000 = 3;
  local_4ffc = 1;
  FUN_140a53a96(local_2170);
  local_21a8 = (undefined ***)0x0;
  local_2198 = &PTR_LAB_14b9c5910;
  local_2190 = lVar18;
  local_21b8 = &LAB_1442d97f8;
  FUN_148e7fe96(local_2170);
  FUN_140a562d0(local_24e8);
  plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_5658,"WhiteBrush",1);
  local_5650 = (**(code **)(*plVar11 + 0x50))(plVar11,local_5658,0,0);
  local_5648 = 1;
  local_5640 = 0;
  uStack_5638 = 0;
  local_22b8 = 1;
  local_22c0 = local_5650;
  FUN_144a450dc(local_22b0,&local_5640);
  FUN_1449db362(&local_5640);
  local_5688 = &DAT_3f8000003f800000;
  puStack_5680 = &DAT_3f8000003f800000;
  local_5678 = local_5678 & 0xffffff00;
  local_5674 = 1;
  local_5670 = 0;
  uStack_5668 = 0;
  local_2228 = &DAT_3f8000003f800000;
  puStack_2220 = &DAT_3f8000003f800000;
  local_2218 = local_5678;
  local_2214 = 1;
  FUN_144a450dc(local_2210,&local_5670);
  FUN_1449db362(&local_5670);
  local_56b0 = 0x40000000;
  uStack_56a8 = 0x40000000;
  local_56a0 = 1;
  local_5698 = 0;
  uStack_5690 = 0;
  local_2318 = 1;
  local_2328 = 0x40000000;
  uStack_2324 = 0;
  uStack_2320 = 0x40000000;
  uStack_231c = 0;
  FUN_144a450dc(local_2310,&local_5698);
  FUN_1449db362(&local_5698);
  local_5dd8 = (undefined4 **)&local_56c9;
  FUN_140a55c32(local_56c8,"SBorder",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xab);
  FUN_140a530e4(local_56c8,&local_5630,local_24e8);
  plVar11 = local_1f90;
  if (local_5628 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5628 + 1) = (int)local_5628[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_5628 + 1) = (int)local_5628[1] + 1;
    UNLOCK();
  }
  local_1f98 = local_5630;
  local_5d88 = local_5628;
  local_1f90 = local_5628;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  local_5dd8 = (undefined4 **)&local_56e9;
  FUN_140a53d66(local_56e8,&DAT_149efe19f,
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xa8);
  FUN_140a50bf4(local_56e8,&local_5620,local_2170);
  lVar18 = local_5dc8;
  local_5610 = local_5620;
  local_5608 = local_5618;
  if (local_5618 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5618 + 1) = (int)local_5618[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140a4fd40(local_5048,&local_5610);
  uVar13 = FUN_140a5058c(uVar13,uVar14);
  FUN_140a4fdf2(local_50a0,0);
  FUN_146ad4974(local_2730);
  local_2580 = 6;
  local_50c0 = 0;
  local_50bc = 1;
  local_50b8 = 1;
  local_50b0 = 0;
  uStack_50a8 = 0;
  local_2508 = lVar15 + 0x6d0;
  local_2500 = lVar15 + 0x780;
  FUN_148e7ff38(local_2730);
  local_5dd8 = (undefined4 **)&local_5729;
  FUN_147772aa6(&local_5728,"SProgressBar",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xb3);
  if (local_5720 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5720 + 1) = (int)local_5720[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar18 + 0x2c0);
  *(undefined8 *)(lVar18 + 0x2b8) = local_5728;
  *(longlong **)(lVar18 + 0x2c0) = local_5720;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_1477452aa(&local_5728,&local_5710,local_2730);
  local_5700 = local_5710;
  local_56f8 = local_5708;
  if (local_5708 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5708 + 1) = (int)local_5708[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140a4fd40(local_50a0,&local_5700);
  uVar13 = FUN_140a5058c(uVar13,uVar14);
  local_5dd8 = (undefined4 **)&local_5749;
  FUN_140a536a8(local_5748,"SOverlay",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x96);
  FUN_140a4ff16(local_5748,&local_5518,uVar13);
  local_5508 = local_5518;
  local_5500 = local_5510;
  if (local_5510 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5510 + 1) = (int)local_5510[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_4f98,&local_5508);
  uVar12 = FUN_140a5058c(uVar12,uVar13);
  FUN_140a4fdf2(local_5118,0);
  local_3b98 = (code *)0x3f800000;
  puStack_3b90 = (undefined1 *)0x3f800000;
  local_3b88 = CONCAT71(local_3b88._1_7_,1);
  uStack_3b80 = 0;
  uStack_3b78 = 0;
  local_50f0 = 1;
  local_5100 = 0x3f800000;
  uStack_50fc = 0;
  uStack_50f8 = 0x3f800000;
  uStack_50f4 = 0;
  FUN_144a450dc(local_50e8,&uStack_3b80);
  FUN_1449db362(&uStack_3b80);
  FUN_140a53334(local_2968);
  local_2998 = (undefined ***)0x0;
  local_2988 = &PTR_LAB_14b9c5930;
  local_2980 = lVar18;
  local_29a8 = &LAB_1442d985c;
  FUN_148e7fe06(local_2968);
  local_5dd8 = (undefined4 **)&local_5789;
  FUN_140a554b8(&local_5788,"SImage",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xbe);
  if (local_5780 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5780 + 1) = (int)local_5780[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar18 + 0x538);
  *(undefined8 *)(lVar18 + 0x530) = local_5788;
  *(longlong **)(lVar18 + 0x538) = local_5780;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a52c70(&local_5788,&local_5770,local_2968);
  local_5760 = local_5770;
  plStack_5758 = local_5768;
  if (local_5768 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5768 + 1) = (int)local_5768[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_5118,&local_5760);
  uVar12 = FUN_140a5058c(uVar12,uVar13);
  FUN_140a4fdf2(local_5170,0);
  local_3b98 = (code *)0x3f800000;
  puStack_3b90 = (undefined1 *)0x3f800000;
  local_3b88 = CONCAT71(local_3b88._1_7_,1);
  uStack_3b80 = 0;
  uStack_3b78 = 0;
  local_5148 = 1;
  local_5158 = 0x3f800000;
  uStack_5154 = 0;
  uStack_5150 = 0x3f800000;
  uStack_514c = 0;
  FUN_144a450dc(local_5140,&uStack_3b80);
  FUN_1449db362(&uStack_3b80);
  FUN_140a53334(local_2be0);
  local_2c18 = (undefined ***)0x0;
  local_2c08 = &PTR_LAB_14b9c5950;
  local_2c00 = lVar18;
  local_2c28 = &LAB_1442d98d0;
  FUN_148e7fe06(local_2be0);
  local_5dd8 = (undefined4 **)&local_57c9;
  FUN_140a554b8(&local_57c8,"SImage",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xc6);
  if (local_57c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_57c0 + 1) = (int)local_57c0[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar18 + 0x608);
  *(undefined8 *)(lVar18 + 0x600) = local_57c8;
  *(longlong **)(lVar18 + 0x608) = local_57c0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a52c70(&local_57c8,&local_57b0,local_2be0);
  local_57a0 = local_57b0;
  local_5798 = local_57a8;
  if (local_57a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_57a8 + 1) = (int)local_57a8[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_5170,&local_57a0);
  uVar12 = FUN_140a5058c(uVar12,uVar13);
  FUN_140a4fdf2(local_51c8,0);
  local_5180 = 1;
  local_517c = 1;
  local_5188 = 2;
  local_5184 = 1;
  FUN_140a504fe(local_2de0);
  FUN_140a4fdf2(local_5220,0);
  local_5828 = (undefined8 *)0x0;
  local_5820 = 0;
  FUN_1446efa72(&local_5828,0,3,0x10);
  local_5820 = 3;
  *local_5828 = &PTR_LAB_149f05530;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_5828[2] = lVar17;
  *local_5828 = &PTR_FUN_14b9c5970;
  local_5828[3] = lVar18;
  local_5828[4] = &LAB_148e7ffae;
  *(undefined4 *)(local_5828 + 5) = 0;
  local_5818 = 0;
  uStack_5810 = 0;
  local_5808 = 1;
  local_5800 = 0;
  local_57f8 = 0;
  FUN_140a58be0(&local_5800,&local_5828);
  local_51f8 = local_5808;
  local_5208 = (undefined4)local_5818;
  uStack_5204 = local_5818._4_4_;
  uStack_5200 = (undefined4)uStack_5810;
  uStack_51fc = uStack_5810._4_4_;
  FUN_144a450dc(local_51f0,&local_5800);
  FUN_1449db362(&local_5800);
  FUN_140a53334(local_3018);
  local_3048 = 0x4046000000000000;
  local_3040 = 0x4034000000000000;
  local_3038 = 1;
  local_3030 = 1;
  local_3028 = 0;
  uStack_3020 = 0;
  uVar13 = FUN_1469f8fd4(local_3018);
  local_3078 = (undefined ***)0x0;
  local_3068 = &PTR_LAB_14b9c59e0;
  local_3060 = lVar18;
  local_3088 = &LAB_1442d9944;
  FUN_148e7fffc(uVar13);
  local_5dd8 = (undefined4 **)&local_5861;
  FUN_140a554b8(&local_5860,"SImage",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xd3);
  if (local_5858 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5858 + 1) = (int)local_5858[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar18 + 0x468);
  *(undefined8 *)(lVar18 + 0x460) = local_5860;
  *(longlong **)(lVar18 + 0x468) = local_5858;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a52c70(&local_5860,&local_5848,uVar13);
  local_5838 = local_5848;
  local_5830 = local_5840;
  if (local_5840 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5840 + 1) = (int)local_5840[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_5220,&local_5838);
  uVar13 = FUN_140a5058c(local_2de0,uVar13);
  local_5dd8 = (undefined4 **)&local_5881;
  FUN_140a536a8(local_5880,"SOverlay",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xcf);
  FUN_140a4ff16(local_5880,&local_57f0,uVar13);
  local_57e0 = local_57f0;
  local_57d8 = local_57e8;
  if (local_57e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_57e8 + 1) = (int)local_57e8[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_51c8,&local_57e0);
  uVar12 = FUN_140a5058c(uVar12,uVar13);
  local_5dd8 = (undefined4 **)&local_58a1;
  FUN_140a536a8(&local_58a0,"SOverlay",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x76);
  if (local_5898 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5898 + 1) = (int)local_5898[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar18 + 0x290);
  *(undefined8 *)(lVar18 + 0x288) = local_58a0;
  *(longlong **)(lVar18 + 0x290) = local_5898;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a4ff16(&local_58a0,&local_53d0,uVar12);
  local_53c0 = local_53d0;
  local_53b8 = local_53c8;
  if (local_53c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_53c8 + 1) = (int)local_53c8[1] + 1;
    UNLOCK();
  }
  lVar15 = FUN_140a4fe8e(local_5dc0,&local_53c0);
  local_3b98 = (code *)0x40c0000040c00000;
  puStack_3b90 = (undefined1 *)0x40c0000040c00000;
  local_3b88._0_1_ = 1;
  uStack_3b80 = 0;
  uStack_3b78 = 0;
  *(undefined1 *)(lVar15 + 0x28) = 1;
  *(undefined4 *)(lVar15 + 0x18) = 0x40c00000;
  *(undefined4 *)(lVar15 + 0x1c) = 0x40c00000;
  *(undefined4 *)(lVar15 + 0x20) = 0x40c00000;
  *(undefined4 *)(lVar15 + 0x24) = 0x40c00000;
  FUN_144a450dc(lVar15 + 0x30,&uStack_3b80);
  FUN_1449db362(&uStack_3b80);
  uVar12 = FUN_140a52392(local_bf8,lVar15);
  FUN_140a50426(local_3148);
  local_3100 = 2;
  local_30fc = 1;
  local_3108 = 3;
  local_3104 = 1;
  FUN_140a53a96(local_33f0);
  local_58e0 = 0x42480000;
  local_58dc = 1;
  local_58d8 = 0;
  uStack_58d0 = 0;
  local_31f0 = 0x42480000;
  local_31ec = 1;
  FUN_144a450dc(local_31e8,&local_58d8);
  FUN_1449db362(&local_58d8);
  FUN_140a562d0(local_3720);
  plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_5918,"WhiteBrush",1);
  local_5910 = (**(code **)(*plVar11 + 0x50))(plVar11,local_5918,0,0);
  local_5908 = 1;
  local_5900 = 0;
  uStack_58f8 = 0;
  local_34f0 = 1;
  local_34f8 = local_5910;
  FUN_144a450dc(local_34e8,&local_5900);
  FUN_1449db362(&local_5900);
  local_5940 = 0x3e8a3d7100000000;
  uStack_5938 = 0x3e99999a3ed1eb85;
  local_5930 = local_5930 & 0xffffff00;
  local_592c = 1;
  local_5928 = 0;
  uStack_5920 = 0;
  local_3460 = 0;
  uStack_345c = 0x3e8a3d71;
  uStack_3458 = 0x3ed1eb85;
  uStack_3454 = 0x3e99999a;
  local_3450 = local_5930;
  local_344c = 1;
  FUN_144a450dc(local_3448,&local_5928);
  FUN_1449db362(&local_5928);
  local_3b98 = (code *)0x4080000041000000;
  puStack_3b90 = (undefined1 *)0x4080000041000000;
  local_3b88 = CONCAT71(local_3b88._1_7_,1);
  uStack_3b80 = 0;
  uStack_3b78 = 0;
  local_3550 = 1;
  local_3560 = 0x41000000;
  uStack_355c = 0x40800000;
  uStack_3558 = 0x41000000;
  uStack_3554 = 0x40800000;
  FUN_144a450dc(local_3548,&uStack_3b80);
  FUN_1449db362(&uStack_3b80);
  FUN_140a570d8(&local_3b98);
  local_39c8 = local_368;
  local_5968 = 0x100;
  local_5960 = 0;
  uStack_5958 = 0;
  local_3828 = 0x100;
  FUN_144a450dc(local_3820,&local_5960);
  FUN_1449db362(&local_5960);
  local_5980 = 1;
  local_597c = 1;
  local_5978 = 0;
  uStack_5970 = 0;
  local_3788 = 1;
  local_3784 = 1;
  FUN_144a450dc(local_3780,&local_5978);
  FUN_1449db362(&local_5978);
  local_5dd8 = (undefined4 **)&local_5999;
  FUN_140a54526(&local_5998,"STextBlock",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xe8);
  if (local_5990 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5990 + 1) = (int)local_5990[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar18 + 0x2b0);
  *(undefined8 *)(lVar18 + 0x2a8) = local_5998;
  *(longlong **)(lVar18 + 0x2b0) = local_5990;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a52852(&local_5998,&local_5950,&local_3b98);
  plVar7 = local_3570;
  plVar11 = plStack_5948;
  if (plStack_5948 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_5948 + 1) = (int)plStack_5948[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_5948 + 1) = (int)plStack_5948[1] + 1;
    UNLOCK();
  }
  local_3578 = local_5950;
  local_3570 = plStack_5948;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_5dd8 = (undefined4 **)&local_59b9;
  FUN_140a55c32(local_59b8,"SBorder",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xe3);
  FUN_140a530e4(local_59b8,&local_58f0,local_3720);
  plVar8 = local_3210;
  plVar7 = local_58e8;
  if (local_58e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58e8 + 1) = (int)local_58e8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_58e8 + 1) = (int)local_58e8[1] + 1;
    UNLOCK();
  }
  local_3218 = local_58f0;
  local_3210 = local_58e8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  local_5dd8 = (undefined4 **)&local_59d9;
  FUN_140a53d66(local_59d8,&DAT_149efe19f,
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xe0);
  FUN_140a50bf4(local_59d8,&local_58c8,local_33f0);
  local_58b8 = local_58c8;
  plStack_58b0 = local_58c0;
  if (local_58c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58c0 + 1) = (int)local_58c0[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fe8e(local_3148,&local_58b8);
  uVar12 = FUN_140a52392(uVar12,uVar13);
  local_5dd8 = (undefined4 **)&local_59f9;
  FUN_140a541dc(local_59f8,"SHorizontalBox",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x72);
  FUN_140a50ec6(local_59f8,&local_53b0,uVar12);
  plVar6 = local_860;
  plVar8 = local_53a8;
  if (local_53a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_53a8 + 1) = (int)local_53a8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_53a8 + 1) = (int)local_53a8[1] + 1;
    UNLOCK();
  }
  local_868 = local_53b0;
  local_860 = local_53a8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  local_5dd8 = (undefined4 **)&local_5a19;
  FUN_140a53d66(&local_5a18,&DAT_149efe19f,
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x6e);
  if (local_5a10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5a10 + 1) = (int)local_5a10[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(lVar18 + 0x2a0);
  *(undefined8 *)(lVar18 + 0x298) = local_5a18;
  *(longlong **)(lVar18 + 0x2a0) = local_5a10;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_140a50bf4(&local_5a18,&local_53a0,local_a40);
  local_5390 = local_53a0;
  local_5388 = local_5398;
  if (local_5398 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5398 + 1) = (int)local_5398[1] + 1;
    UNLOCK();
  }
  local_5d98 = plVar11;
  uVar12 = FUN_145aaf878(local_798,&local_5390);
  uVar12 = FUN_145aaf822(local_6d8,uVar12);
  local_5dd8 = (undefined4 **)&local_5a39;
  FUN_14076837c(local_5a38,"SVerticalBox",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x6a);
  FUN_14076784c(local_5a38,&local_5380,uVar12);
  local_5370 = local_5380;
  local_5368 = local_5378;
  if (local_5378 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5378 + 1) = (int)local_5378[1] + 1;
    UNLOCK();
  }
  local_5da8 = plVar8;
  local_5da0 = plVar7;
  local_5dc0 = lVar18 + 0x868;
  uVar12 = FUN_140a4fd40(local_4e38,&local_5370);
  local_5db8 = FUN_140a5058c(local_5db8,uVar12);
  FUN_140a4fdf2(local_5278,0);
  FUN_140a53a96(local_3e40);
  local_3c98 = 0x300000002;
  local_4858 = 0;
  plStack_4850 = (longlong *)0x41c8000000000000;
  local_4848 = 1;
  local_4840 = 0;
  uStack_4838 = 0;
  local_3c80 = 1;
  local_3c90 = 0;
  uStack_3c8c = 0;
  uStack_3c88 = 0;
  uStack_3c84 = 0x41c80000;
  FUN_144a450dc(local_3c78,&local_4840);
  FUN_1449db362(&local_4840);
  FUN_140a562d0(local_4170);
  plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_5a98,"WhiteBrush",1);
  local_5a90 = (**(code **)(*plVar11 + 0x50))(plVar11,local_5a98,0,0);
  local_5a88 = 1;
  local_5a80 = 0;
  uStack_5a78 = 0;
  local_3f40 = 1;
  local_3f48 = local_5a90;
  FUN_144a450dc(local_3f38,&local_5a80);
  FUN_1449db362(&local_5a80);
  local_4858 = 0x3f80000040800000;
  plStack_4850 = (longlong *)0x4000000040800000;
  local_4848 = 1;
  local_4840 = 0;
  uStack_4838 = 0;
  local_3fa0 = 1;
  local_3fb0 = 0x40800000;
  uStack_3fac = 0x3f800000;
  uStack_3fa8 = 0x40800000;
  uStack_3fa4 = 0x40000000;
  FUN_144a450dc(auStack_3f98,&local_4840);
  FUN_1449db362(&local_4840);
  local_5ac0 = 0;
  uStack_5ab8 = 0x3f4ccccd00000000;
  local_5ab0 = local_5ab0 & 0xffffff00;
  local_5aac = 1;
  local_5aa8 = 0;
  uStack_5aa0 = 0;
  local_3eb0 = 0;
  uStack_3eac = 0;
  uStack_3ea8 = 0;
  uStack_3ea4 = 0x3f4ccccd;
  local_3ea0 = local_5ab0;
  local_3e9c = 1;
  FUN_144a450dc(local_3e98,&local_5aa8);
  FUN_1449db362(&local_5aa8);
  FUN_140a5296a(local_4328);
  FUN_140a50426(local_43e8);
  lVar15 = FUN_140a52578(local_43e8);
  local_4858 = 0;
  plStack_4850 = (longlong *)0x40800000;
  local_4848 = 1;
  local_4840 = 0;
  uStack_4838 = 0;
  *(undefined1 *)(lVar15 + 0x28) = 1;
  *(undefined4 *)(lVar15 + 0x18) = 0;
  *(undefined4 *)(lVar15 + 0x1c) = 0;
  *(undefined4 *)(lVar15 + 0x20) = 0x40800000;
  *(undefined4 *)(lVar15 + 0x24) = 0;
  FUN_144a450dc(lVar15 + 0x30,&local_4840);
  FUN_1449db362(&local_4840);
  FUN_140a570d8(&local_4858);
  FUN_144a87366(local_5b68,local_5dc0);
  local_5b08 = 1;
  local_5b00 = 0;
  uStack_5af8 = 0;
  FUN_1412cc59c(auStack_4680,local_5b68);
  local_4620 = local_5b08;
  FUN_144a450dc(local_4618,&local_5b00);
  FUN_141515cba(local_5b68);
  local_5b98 = &DAT_3f8000003f800000;
  puStack_5b90 = &DAT_3f8000003f800000;
  local_5b88 = local_5b88 & 0xffffff00;
  local_5b84 = 1;
  local_5b80 = 0;
  uStack_5b78 = 0;
  local_45e8 = &DAT_3f8000003f800000;
  puStack_45e0 = &DAT_3f8000003f800000;
  local_45d8 = local_5b88;
  local_45d4 = 1;
  FUN_144a450dc(local_45d0,&local_5b80);
  FUN_1449db362(&local_5b80);
  local_5dd8 = (undefined4 **)&local_5bb1;
  FUN_140a54526(&local_5bb0,"STextBlock",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x103);
  plVar11 = local_5d88;
  if (local_5ba8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5ba8 + 1) = (int)local_5ba8[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(local_5dc8 + 0x8f0);
  *(undefined8 *)(local_5dc8 + 0x8e8) = local_5bb0;
  *(longlong **)(local_5dc8 + 0x8f0) = local_5ba8;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a52852(&local_5bb0,&local_5af0,&local_4858);
  plVar7 = local_5da8;
  local_5ae0 = local_5af0;
  local_5ad8 = local_5ae8;
  if (local_5ae8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5ae8 + 1) = (int)local_5ae8[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fe8e(lVar15,&local_5ae0);
  uVar12 = FUN_140a52392(local_4328,uVar12);
  FUN_140a50426(local_4918);
  lVar15 = FUN_140a52578(local_4918);
  local_4d88 = 0;
  plStack_4d80 = (longlong *)0x0;
  local_4d78 = 1;
  local_4d70 = 0;
  uStack_4d68 = 0;
  *(undefined1 *)(lVar15 + 0x28) = 1;
  *(undefined8 *)(lVar15 + 0x18) = 0;
  *(undefined8 *)(lVar15 + 0x20) = 0;
  FUN_144a450dc(lVar15 + 0x30,&local_4d70);
  FUN_1449db362(&local_4d70);
  FUN_140a570d8(&local_4d88);
  local_5bf0 = 0;
  local_5bec = 1;
  local_5be8 = 0;
  uStack_5be0 = 0;
  local_4978 = 0;
  local_4974 = 1;
  FUN_144a450dc(local_4970,&local_5be8);
  FUN_1449db362(&local_5be8);
  FUN_144a87366(local_5c68,local_5dc0);
  local_5c08 = 1;
  local_5c00 = 0;
  uStack_5bf8 = 0;
  FUN_1412cc59c(local_4bb0,local_5c68);
  local_4b50 = local_5c08;
  FUN_144a450dc(local_4b48,&local_5c00);
  FUN_141515cba(local_5c68);
  local_5c98 = &DAT_3f8000003f800000;
  puStack_5c90 = &DAT_3f8000003f800000;
  local_5c88 = local_5c88 & 0xffffff00;
  local_5c84 = 1;
  local_5c80 = 0;
  uStack_5c78 = 0;
  local_4b18 = &DAT_3f8000003f800000;
  puStack_4b10 = &DAT_3f8000003f800000;
  local_4b08 = local_5c88;
  local_4b04 = 1;
  FUN_144a450dc(local_4b00,&local_5c80);
  FUN_1449db362(&local_5c80);
  local_5cb0 = 0x44960000;
  local_5cac = 1;
  local_5ca8 = 0;
  uStack_5ca0 = 0;
  local_4a30 = 0x44960000;
  local_4a2c = 1;
  FUN_144a450dc(local_4a28,&local_5ca8);
  FUN_1449db362(&local_5ca8);
  local_5dd8 = (undefined4 **)&local_5cc9;
  FUN_140a54526(&local_5cc8,"STextBlock",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x10b);
  if (local_5cc0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5cc0 + 1) = (int)local_5cc0[1] + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(local_5dc8 + 0x900);
  *(undefined8 *)(local_5dc8 + 0x8f8) = local_5cc8;
  *(longlong **)(local_5dc8 + 0x900) = local_5cc0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  FUN_140a52852(&local_5cc8,&local_5bd8,&local_4d88);
  local_5bc8 = local_5bd8;
  local_5bc0 = local_5bd0;
  if (local_5bd0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5bd0 + 1) = (int)local_5bd0[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fe8e(lVar15,&local_5bc8);
  uVar12 = FUN_140a52392(uVar12,uVar13);
  local_5dd8 = (undefined4 **)&local_5ce9;
  FUN_140a541dc(local_5ce8,"SHorizontalBox",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xfe);
  FUN_140a50ec6(local_5ce8,&local_5ad0,uVar12);
  plVar6 = local_3fc0;
  plVar8 = local_5ac8;
  if (local_5ac8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5ac8 + 1) = (int)local_5ac8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_5ac8 + 1) = (int)local_5ac8[1] + 1;
    UNLOCK();
  }
  local_3fc8 = local_5ad0;
  local_3fc0 = local_5ac8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  local_5dd8 = (undefined4 **)&local_5d09;
  FUN_140a55c32(&local_5d08,"SBorder",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xf9);
  if (local_5d00 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5d00 + 1) = (int)local_5d00[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(local_5dc8 + 0x8e0);
  *(undefined8 *)(local_5dc8 + 0x8d8) = local_5d08;
  *(longlong **)(local_5dc8 + 0x8e0) = local_5d00;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_140a530e4(&local_5d08,&local_5a70,local_4170);
  plVar9 = local_3c60;
  plVar6 = local_5a68;
  if (local_5a68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5a68 + 1) = (int)local_5a68[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_5a68 + 1) = (int)local_5a68[1] + 1;
    UNLOCK();
  }
  local_3c68 = local_5a70;
  local_3c60 = local_5a68;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  local_5dd8 = (undefined4 **)&local_5d29;
  FUN_140a53d66(&local_5d28,&DAT_149efe19f,
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0xf4);
  if (local_5d20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5d20 + 1) = (int)local_5d20[1] + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(local_5dc8 + 0x8d0);
  *(undefined8 *)(local_5dc8 + 0x8c8) = local_5d28;
  *(longlong **)(local_5dc8 + 0x8d0) = local_5d20;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140a50bf4(&local_5d28,&local_5a60,local_3e40);
  local_5a50 = local_5a60;
  local_5a48 = local_5a58;
  if (local_5a58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5a58 + 1) = (int)local_5a58[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fd40(local_5278,&local_5a50);
  uVar12 = FUN_140a5058c(local_5db8,uVar12);
  local_5dd8 = (undefined4 **)&local_5d49;
  FUN_140a536a8(local_5d48,"SOverlay",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakCutsceneWidget.cpp",0x60);
  FUN_140a4ff16(local_5d48,&local_5350,uVar12);
  local_5340 = local_5350;
  local_5338 = local_5348;
  if (local_5348 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5348 + 1) = (int)local_5348[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(local_5d90,&local_5340);
  plVar2 = local_5338;
  plVar9 = local_5db0;
  if (local_5338 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5338 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5338)(local_5338);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_5348 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5348 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5348)(local_5348);
      LOCK();
      piVar1 = (int *)((longlong)local_5348 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5348 + 0x10))(local_5348);
      }
    }
  }
  if (local_5d40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5d40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5d40)(local_5d40);
      LOCK();
      piVar1 = (int *)((longlong)local_5d40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5d40 + 0x10))(local_5d40);
      }
    }
  }
  plVar2 = local_5a48;
  if (local_5a48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5a48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5a48)(local_5a48);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_5a58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5a58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5a58)(local_5a58);
      LOCK();
      piVar1 = (int *)((longlong)local_5a58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5a58 + 0x10))(local_5a58);
      }
    }
  }
  if (local_5d20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5d20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5d20)(local_5d20);
      LOCK();
      piVar1 = (int *)((longlong)local_5d20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5d20 + 0x10))(local_5d20);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_5a68 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_5a68 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_5a68)(local_5a68);
      LOCK();
      piVar1 = (int *)((longlong)local_5a68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5a68 + 0x10))(local_5a68);
      }
    }
  }
  plVar2 = local_5d80;
  plVar6 = local_5d98;
  if (local_5d00 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5d00 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5d00)(local_5d00);
      LOCK();
      piVar1 = (int *)((longlong)local_5d00 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5d00 + 0x10))(local_5d00);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_5ac8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_5ac8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_5ac8)(local_5ac8);
      LOCK();
      piVar1 = (int *)((longlong)local_5ac8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5ac8 + 0x10))(local_5ac8);
      }
    }
  }
  plVar8 = local_5da0;
  lVar15 = local_5dc8;
  if (local_5ce0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5ce0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5ce0)(local_5ce0);
      LOCK();
      piVar1 = (int *)((longlong)local_5ce0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5ce0 + 0x10))(local_5ce0);
      }
    }
  }
  plVar3 = local_5bc0;
  if (local_5bc0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_5bc0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_5bc0)(local_5bc0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5bd0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5bd0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5bd0)(local_5bd0);
      LOCK();
      piVar1 = (int *)((longlong)local_5bd0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5bd0 + 0x10))(local_5bd0);
      }
    }
  }
  if (local_5cc0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5cc0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5cc0)(local_5cc0);
      LOCK();
      piVar1 = (int *)((longlong)local_5cc0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5cc0 + 0x10))(local_5cc0);
      }
    }
  }
  FUN_140a59ae6(&local_4d88);
  FUN_140a509a6(local_4918);
  plVar3 = local_5ad8;
  if (local_5ad8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_5ad8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_5ad8)(local_5ad8);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5ae8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5ae8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5ae8)(local_5ae8);
      LOCK();
      piVar1 = (int *)((longlong)local_5ae8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5ae8 + 0x10))(local_5ae8);
      }
    }
  }
  if (local_5ba8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5ba8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5ba8)(local_5ba8);
      LOCK();
      piVar1 = (int *)((longlong)local_5ba8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5ba8 + 0x10))(local_5ba8);
      }
    }
  }
  FUN_140a59ae6(&local_4858);
  FUN_140a509a6(local_43e8);
  FUN_145ab33da(local_4328);
  FUN_140a59028(local_4170);
  FUN_140a5660c(local_3e40);
  FUN_1415b5e50(local_5278);
  plVar3 = local_5368;
  if (local_5368 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_5368 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_5368)(local_5368);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5378 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5378 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5378)(local_5378);
      LOCK();
      piVar1 = (int *)((longlong)local_5378 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5378 + 0x10))(local_5378);
      }
    }
  }
  if (local_5a30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5a30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5a30)(local_5a30);
      LOCK();
      piVar1 = (int *)((longlong)local_5a30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5a30 + 0x10))(local_5a30);
      }
    }
  }
  plVar3 = local_5388;
  if (local_5388 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_5388 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_5388)(local_5388);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5398 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5398 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5398)(local_5398);
      LOCK();
      piVar1 = (int *)((longlong)local_5398 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5398 + 0x10))(local_5398);
      }
    }
  }
  if (local_5a10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5a10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5a10)(local_5a10);
      LOCK();
      piVar1 = (int *)((longlong)local_5a10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5a10 + 0x10))(local_5a10);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_53a8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_53a8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_53a8)(local_53a8);
      LOCK();
      piVar1 = (int *)((longlong)local_53a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_53a8 + 0x10))(local_53a8);
      }
    }
  }
  if (plStack_59f0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_59f0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_59f0)(plStack_59f0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_59f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_59f0 + 0x10))(plStack_59f0);
      }
    }
  }
  plVar7 = plStack_58b0;
  if (plStack_58b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_58b0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_58b0)(plStack_58b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_58c0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_58c0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_58c0)(local_58c0);
      LOCK();
      piVar1 = (int *)((longlong)local_58c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58c0 + 0x10))(local_58c0);
      }
    }
  }
  if (local_59d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_59d0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_59d0)(local_59d0);
      LOCK();
      piVar1 = (int *)((longlong)local_59d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_59d0 + 0x10))(local_59d0);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_58e8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_58e8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_58e8)(local_58e8);
      LOCK();
      piVar1 = (int *)((longlong)local_58e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58e8 + 0x10))(local_58e8);
      }
    }
  }
  if (plStack_59b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_59b0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_59b0)(plStack_59b0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_59b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_59b0 + 0x10))(plStack_59b0);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plStack_5948 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_5948 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_5948)(plStack_5948);
      LOCK();
      piVar1 = (int *)((longlong)plStack_5948 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_5948 + 0x10))(plStack_5948);
      }
    }
  }
  if (local_5990 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5990 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5990)(local_5990);
      LOCK();
      piVar1 = (int *)((longlong)local_5990 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5990 + 0x10))(local_5990);
      }
    }
  }
  FUN_140a59ae6(&local_3b98);
  FUN_140a59028(local_3720);
  FUN_140a5660c(local_33f0);
  FUN_140a509a6(local_3148);
  plVar7 = local_53b8;
  if (local_53b8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_53b8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_53b8)(local_53b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_53c8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_53c8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_53c8)(local_53c8);
      LOCK();
      piVar1 = (int *)((longlong)local_53c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_53c8 + 0x10))(local_53c8);
      }
    }
  }
  if (local_5898 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5898 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5898)(local_5898);
      LOCK();
      piVar1 = (int *)((longlong)local_5898 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5898 + 0x10))(local_5898);
      }
    }
  }
  plVar7 = local_57d8;
  if (local_57d8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_57d8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_57d8)(local_57d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_57e8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_57e8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_57e8)(local_57e8);
      LOCK();
      piVar1 = (int *)((longlong)local_57e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_57e8 + 0x10))(local_57e8);
      }
    }
  }
  if (local_5878 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5878 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5878)(local_5878);
      LOCK();
      piVar1 = (int *)((longlong)local_5878 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5878 + 0x10))(local_5878);
      }
    }
  }
  plVar7 = local_5830;
  if (local_5830 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_5830 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_5830)(local_5830);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_5840 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5840 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5840)(local_5840);
      LOCK();
      piVar1 = (int *)((longlong)local_5840 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5840 + 0x10))(local_5840);
      }
    }
  }
  if (local_5858 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5858 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5858)(local_5858);
      LOCK();
      piVar1 = (int *)((longlong)local_5858 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5858 + 0x10))(local_5858);
      }
    }
  }
  if (local_3088 != (undefined1 *)0x0) {
    pppuVar16 = local_3078;
    if (local_3078 == (undefined ***)0x0) {
      pppuVar16 = &local_3068;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  FUN_140a55a86(local_3018);
  FUN_1449db362(&local_5828);
  FUN_1415b5e50(local_5220);
  FUN_1415b5e16(local_2de0);
  FUN_1415b5e50(local_51c8);
  plVar7 = local_5798;
  if (local_5798 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_5798 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_5798)(local_5798);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_57a8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_57a8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_57a8)(local_57a8);
      LOCK();
      piVar1 = (int *)((longlong)local_57a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_57a8 + 0x10))(local_57a8);
      }
    }
  }
  if (local_57c0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_57c0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_57c0)(local_57c0);
      LOCK();
      piVar1 = (int *)((longlong)local_57c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_57c0 + 0x10))(local_57c0);
      }
    }
  }
  if (local_2c28 != (undefined1 *)0x0) {
    pppuVar16 = local_2c18;
    if (local_2c18 == (undefined ***)0x0) {
      pppuVar16 = &local_2c08;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  FUN_140a55a86(local_2be0);
  FUN_1415b5e50(local_5170);
  plVar7 = plStack_5758;
  if (plStack_5758 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_5758 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_5758)(plStack_5758);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_5768 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5768 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5768)(local_5768);
      LOCK();
      piVar1 = (int *)((longlong)local_5768 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5768 + 0x10))(local_5768);
      }
    }
  }
  if (local_5780 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5780 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5780)(local_5780);
      LOCK();
      piVar1 = (int *)((longlong)local_5780 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5780 + 0x10))(local_5780);
      }
    }
  }
  if (local_29a8 != (undefined1 *)0x0) {
    pppuVar16 = local_2998;
    if (local_2998 == (undefined ***)0x0) {
      pppuVar16 = &local_2988;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  FUN_140a55a86(local_2968);
  FUN_1415b5e50(local_5118);
  plVar7 = local_5500;
  if (local_5500 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_5500 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_5500)(local_5500);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_5510 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5510 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5510)(local_5510);
      LOCK();
      piVar1 = (int *)((longlong)local_5510 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5510 + 0x10))(local_5510);
      }
    }
  }
  if (local_5740 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5740 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5740)(local_5740);
      LOCK();
      piVar1 = (int *)((longlong)local_5740 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5740 + 0x10))(local_5740);
      }
    }
  }
  plVar7 = local_56f8;
  if (local_56f8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_56f8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_56f8)(local_56f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_5708 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5708 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5708)(local_5708);
      LOCK();
      piVar1 = (int *)((longlong)local_5708 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5708 + 0x10))(local_5708);
      }
    }
  }
  if (local_5720 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5720 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5720)(local_5720);
      LOCK();
      piVar1 = (int *)((longlong)local_5720 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5720 + 0x10))(local_5720);
      }
    }
  }
  FUN_146ad4aa0(local_2730);
  FUN_1415b5e50(local_50a0);
  plVar7 = local_5608;
  if (local_5608 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_5608 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_5608)(local_5608);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_5618 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5618 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5618)(local_5618);
      LOCK();
      piVar1 = (int *)((longlong)local_5618 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5618 + 0x10))(local_5618);
      }
    }
  }
  if (local_56e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_56e0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_56e0)(local_56e0);
      LOCK();
      piVar1 = (int *)((longlong)local_56e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_56e0 + 0x10))(local_56e0);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_5628 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_5628 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_5628)(local_5628);
      LOCK();
      piVar1 = (int *)((longlong)local_5628 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5628 + 0x10))(local_5628);
      }
    }
  }
  if (local_56c0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_56c0 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_56c0)(local_56c0);
      LOCK();
      piVar1 = (int *)((longlong)local_56c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_56c0 + 0x10))(local_56c0);
      }
    }
  }
  FUN_140a59028(local_24e8);
  if (local_21b8 != (undefined1 *)0x0) {
    pppuVar16 = local_21a8;
    if (local_21a8 == (undefined ***)0x0) {
      pppuVar16 = &local_2198;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  FUN_140a5660c(local_2170);
  FUN_1415b5e50(local_5048);
  plVar11 = local_5520;
  if (local_5520 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5520 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5520)(local_5520);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_5530 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_5530 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_5530)(local_5530);
      LOCK();
      piVar1 = (int *)((longlong)local_5530 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5530 + 0x10))(local_5530);
      }
    }
  }
  if (local_55f0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_55f0 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_55f0)(local_55f0);
      LOCK();
      piVar1 = (int *)((longlong)local_55f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_55f0 + 0x10))(local_55f0);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar2 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_5540 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_5540 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_5540)(local_5540);
      LOCK();
      piVar1 = (int *)((longlong)local_5540 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5540 + 0x10))(local_5540);
      }
    }
  }
  if (local_55d0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_55d0 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_55d0)(local_55d0);
      LOCK();
      piVar1 = (int *)((longlong)local_55d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_55d0 + 0x10))(local_55d0);
      }
    }
  }
  FUN_140a59028(local_1ec8);
  if (local_1b98 != (undefined1 *)0x0) {
    pppuVar16 = local_1b88;
    if (local_1b88 == (undefined ***)0x0) {
      pppuVar16 = &local_1b78;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  FUN_140a5660c(local_1b58);
  FUN_1415b5e50(local_4ff0);
  FUN_1415b5e16(local_18b0);
  FUN_1415b5e50(local_4f98);
  plVar11 = local_54c0;
  if (local_54c0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_54c0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_54c0)(local_54c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_54d0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_54d0 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_54d0)(local_54d0);
      LOCK();
      piVar1 = (int *)((longlong)local_54d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_54d0 + 0x10))(local_54d0);
      }
    }
  }
  if (local_54e8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_54e8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_54e8)(local_54e8);
      LOCK();
      piVar1 = (int *)((longlong)local_54e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_54e8 + 0x10))(local_54e8);
      }
    }
  }
  if (local_16f8 != (undefined1 *)0x0) {
    pppuVar16 = local_16e8;
    if (local_16e8 == (undefined ***)0x0) {
      pppuVar16 = &local_16d8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  FUN_140a55a86(local_1680);
  FUN_1415b5e50(local_4f40);
  plVar11 = local_5480;
  if (local_5480 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5480 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5480)(local_5480);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_5490 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_5490 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_5490)(local_5490);
      LOCK();
      piVar1 = (int *)((longlong)local_5490 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5490 + 0x10))(local_5490);
      }
    }
  }
  if (local_54a8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_54a8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_54a8)(local_54a8);
      LOCK();
      piVar1 = (int *)((longlong)local_54a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_54a8 + 0x10))(local_54a8);
      }
    }
  }
  if (local_1448 != (undefined1 *)0x0) {
    pppuVar16 = local_1438;
    if (local_1438 == (undefined ***)0x0) {
      pppuVar16 = &local_1428;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  FUN_140a55a86(local_13d8);
  FUN_1415b5e50(local_4ee8);
  plVar11 = local_53f0;
  if (local_53f0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_53f0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_53f0)(local_53f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_5400 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_5400 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_5400)(local_5400);
      LOCK();
      piVar1 = (int *)((longlong)local_5400 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5400 + 0x10))(local_5400);
      }
    }
  }
  if (plStack_5468 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_5468 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plStack_5468)(plStack_5468);
      LOCK();
      piVar1 = (int *)((longlong)plStack_5468 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_5468 + 0x10))(plStack_5468);
      }
    }
  }
  FUN_140a59028(local_11a0);
  FUN_1415b5e50(local_4e90);
  FUN_1415b5e16(local_e70);
  FUN_140a509a6(local_cb8);
  FUN_145ab33da(local_bf8);
  FUN_140a5660c(local_a40);
  FUN_140767f30(local_798);
  FUN_14149255e(local_6d8);
  FUN_1415b5e50(local_4e38);
  plVar11 = local_5358;
  if (local_5358 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_5358 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_5358)(local_5358);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_1415b5e50(local_4de0);
  FUN_1415b5e16(local_520);
  *(undefined1 *)(lVar15 + 0x280) = 0;
  *(undefined4 *)(lVar15 + 0x85c) = *(undefined4 *)(local_5d78 + 0x1a8);
  FUN_148e800c8(lVar15,0);
  if (*(longlong **)(lVar15 + 0x298) != (longlong *)0x0) {
    local_3b98._0_2_ = CONCAT11(1,DAT_14c96b23b);
    puStack_3b90 = (undefined1 *)0x0;
    local_3b88 = 0;
    (**(code **)(**(longlong **)(lVar15 + 0x298) + 0x1c0))();
  }
  local_3b98 = FUN_148e803d2;
  puStack_3b90 = (undefined1 *)((ulonglong)puStack_3b90 & 0xffffffff00000000);
  FUN_148e80250(local_5d70,lVar15);
  FUN_14697ef1e(lVar15,local_5d60,0,local_5d70);
  if (local_5d58 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_5d58 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_5d58)(local_5d58);
      LOCK();
      piVar1 = (int *)((longlong)local_5d58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5d58 + 0x10))(local_5d58);
      }
    }
  }
  FUN_140e9e952(local_368);
  plVar11 = plStack_52c0;
  if (plStack_52c0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_52c0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_52c0)(plStack_52c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_5df8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7fd8e FUN_148e7fd8e body=120 status=ok
// SIG undefined FUN_148e7fd8e(void)

longlong * FUN_148e7fd8e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145ffa43e(*param_1,**(undefined4 **)param_1[2]);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148e7fe06 FUN_148e7fe06 body=143 status=ok
// SIG undefined FUN_148e7fe06(void)

longlong FUN_148e7fe06(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1469ed78a(local_30);
  local_48 = 0x119;
  local_40 = 0;
  local_38 = 0;
  FUN_140fe25fc(&local_40,local_30);
  FUN_1449db362(local_30);
  *(undefined2 *)(param_1 + 0x70) = local_48;
  FUN_144a450dc(param_1 + 0x78,&local_40);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7fe96 FUN_148e7fe96 body=161 status=ok
// SIG undefined FUN_148e7fe96(void)

longlong FUN_148e7fe96(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148e9562c(local_30);
  local_48 = 0xbf800000;
  local_44 = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_140a58922(&local_40,local_30);
  FUN_1449db362(local_30);
  *(undefined1 *)(param_1 + 0x204) = local_44;
  *(undefined4 *)(param_1 + 0x200) = local_48;
  FUN_144a450dc(param_1 + 0x208,&local_40);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7ff38 FUN_148e7ff38 body=117 status=ok
// SIG undefined FUN_148e7ff38(void)

longlong FUN_148e7ff38(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if ((undefined4 *)(param_1 + 0x1b8) != param_2) {
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined4 *)(param_1 + 0x1b8) = *param_2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x1bc) != '\x01') goto LAB_148e7ff67;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x1bc) = uVar1;
  }
LAB_148e7ff67:
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 2);
  FUN_144a450dc(param_1 + 0x1c8,param_2 + 4);
  FUN_1449db362(param_2 + 4);
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 148e7fffc FUN_148e7fffc body=203 status=ok
// SIG undefined FUN_148e7fffc(void)

longlong FUN_148e7fffc(longlong param_1)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148e95996(local_60);
  local_40 = '\0';
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_14697c70c(&local_30,local_60);
  FUN_1449db362(local_60);
  if (&local_50 != (undefined4 *)(param_1 + 0x1f0)) {
    if (local_40 == '\x01') {
      *(undefined4 *)(param_1 + 0x1f0) = local_50;
      *(undefined4 *)(param_1 + 500) = uStack_4c;
      *(undefined4 *)(param_1 + 0x1f8) = uStack_48;
      *(undefined4 *)(param_1 + 0x1fc) = uStack_44;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x200) != '\x01') goto LAB_148e80078;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x200) = uVar1;
  }
LAB_148e80078:
  *(undefined1 *)(param_1 + 0x208) = local_38;
  FUN_144a450dc(param_1 + 0x210,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e800c8 FUN_148e800c8 body=281 status=ok
// SIG undefined FUN_148e800c8(void)

void FUN_148e800c8(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0x8c8) != (longlong *)0x0) {
    puVar3 = &DAT_14c96b23b;
    if (param_2 != '\0') {
      puVar3 = &DAT_14c96b238;
    }
    local_38 = *puVar3;
    local_37 = 1;
    local_30 = 0;
    uStack_28 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x1c0))();
  }
  if (param_2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x8e8);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_140e82300();
      local_60 = (longlong *)*plVar2;
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 8))();
      }
      local_58 = (undefined4)plVar2[1];
      local_50 = 1;
      local_48 = 0;
      uStack_40 = 0;
      FUN_140a5cace(lVar1);
    }
    lVar1 = *(longlong *)(param_1 + 0x8f8);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_140e82300();
      local_88 = (longlong *)*plVar2;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 8))();
      }
      local_80 = (undefined4)plVar2[1];
      local_78 = 1;
      local_70 = 0;
      uStack_68 = 0;
      FUN_140a5cace(lVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e801e2 FUN_148e801e2 body=108 status=ok
// SIG undefined FUN_148e801e2(void)

void FUN_148e801e2(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x298) != (longlong *)0x0) {
    puVar1 = &DAT_14c96b23b;
    if (param_2 != '\0') {
      puVar1 = &DAT_14c96b238;
    }
    local_20 = *puVar1;
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x298) + 0x1c0))();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e80250 FUN_148e80250 body=386 status=ok
// SIG undefined FUN_148e80250(void)

longlong * FUN_148e80250(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148e80361:
    *puVar5 = &PTR_LAB_149ed0600;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c5a00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148e80361;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149ed0600;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c5a00;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 148e803d2 FUN_148e803d2 body=1073 status=ok
// SIG undefined FUN_148e803d2(void)

undefined8 FUN_148e803d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Src;
  char cVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_218 [32];
  longlong *local_1f8 [2];
  longlong local_1e8;
  int local_1e0;
  longlong local_1d8 [2];
  void *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8 [96];
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140 [96];
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong *local_90;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(int *)(param_1 + 0x85c) != 0) {
    FUN_1448d5e3c(&local_a0,param_1 + 0x85c);
    lVar3 = *(longlong *)(local_a0 + 0x180);
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x138));
    plVar4 = (longlong *)CONCAT44(uStack_94,uStack_98);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (*(int *)(param_1 + 0x860) != *(int *)(lVar3 + 0x90)) {
      *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(lVar3 + 0x130);
      if (*(longlong *)(param_1 + 0x8d8) != 0) {
        FUN_148e7be48(&local_a0,lVar3 + 0xf0);
        uStack_94 = *(undefined4 *)(lVar3 + 0xe8);
        uStack_c0 = CONCAT44(uStack_94,uStack_98);
        local_c8 = local_a0;
        local_b8 = 0;
        local_b4 = 1;
        local_b0 = 0;
        uStack_a8 = 0;
        FUN_14605ea88(*(undefined8 *)(param_1 + 0x8d8));
      }
      *(float *)(param_1 + 0x8b0) = (float)(*(double *)(lVar3 + 0x98) * 22.0);
      pcVar8 = "Medium";
      if (*(char *)(lVar3 + 0x120) != '\0') {
        pcVar8 = "Bold";
      }
      FUN_1446ddc76(&local_a0,pcVar8,1);
      *(longlong *)(param_1 + 0x8a8) = local_a0;
      lVar10 = *(longlong *)(param_1 + 0x8e8);
      if (lVar10 != 0) {
        FUN_144a87366(local_140,param_1 + 0x868);
        local_e0 = 1;
        local_d8 = 0;
        uStack_d0 = 0;
        FUN_1410da64c(lVar10,local_140);
      }
      lVar10 = *(longlong *)(param_1 + 0x8f8);
      if (lVar10 != 0) {
        FUN_144a87366(local_1b8,param_1 + 0x868);
        local_158 = 1;
        local_150 = 0;
        uStack_148 = 0;
        FUN_1410da64c(lVar10,local_1b8);
      }
      FUN_140056680(&local_a0,L"#FFFFFF");
      FUN_144a5dc74(&local_90);
      FUN_144a5dc74(local_80);
      plVar1 = local_90;
      local_70 = 0;
      local_60 = 0;
      local_5c = 0;
      uStack_54 = 0;
      local_4c = 0xffffffff;
      local_68 = *(undefined8 *)(lVar3 + 0x18);
      plVar4 = *(longlong **)(lVar3 + 0x30);
      if (local_90 != plVar4) {
        local_90 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      local_88 = *(undefined4 *)(lVar3 + 0x38);
      local_60 = *(undefined1 *)(lVar3 + 0x60);
      local_70 = *(undefined4 *)(lVar3 + 0x28);
      puVar6 = (undefined8 *)FUN_1447a1f4a(lVar3 + 0x48);
      local_1c8 = (void *)0x0;
      local_1c0 = *(int *)(puVar6 + 1);
      lVar10 = (longlong)local_1c0;
      _Src = (void *)*puVar6;
      if (lVar10 == 0) {
        local_1bc = 0;
      }
      else {
        FUN_1446dd670(&local_1c8,local_1c0,0);
        memcpy(local_1c8,_Src,lVar10 * 2);
      }
      lVar10 = (longlong)&local_5c + 4;
      FUN_1400b22c2(local_1d8,L"[Left Bracket");
      FUN_1400b22c2(&local_1e8,L"]Right Bracket");
      iVar9 = local_1c0 + -1;
      if (local_1c0 == 0) {
        iVar9 = 0;
      }
      FUN_1400020e8(local_1d8,local_1c8,iVar9);
      iVar9 = local_1e0 + -1;
      if (local_1e0 == 0) {
        iVar9 = 0;
      }
      FUN_1400020e8(local_1d8,local_1e8,iVar9);
      FUN_140009b9a(local_1f8,local_1d8);
      FUN_140008f88(local_80,local_1f8);
      if (local_1f8[0] != (longlong *)0x0) {
        (**(code **)(*local_1f8[0] + 0x10))();
      }
      FUN_144a787a6(&local_a0,lVar3 + 0xb0);
      if (lVar3 + 0xd0 != lVar10) {
        FUN_14034a368(lVar10);
      }
      if ((lVar3 + 0x68 != lVar10) && (*(int *)(lVar3 + 0x74) != -1)) {
        FUN_14034a368(lVar10);
      }
      FUN_148e80e58(param_1,&local_a0);
      cVar5 = FUN_144a7c5f6(&local_90);
      if (cVar5 == '\0') {
        uVar7 = *(undefined1 *)(lVar3 + 0x110);
      }
      else {
        uVar7 = 0;
      }
      FUN_148e800c8(param_1,uVar7);
      if (local_1e8 != 0) {
        FUN_1400020a8();
      }
      if (local_1d8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_1c8 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_145a1d468(&local_a0);
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x138));
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e80804 FUN_148e80804 body=1242 status=ok
// SIG undefined FUN_148e80804(void)

void FUN_148e80804(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_148e80cde();
  plVar3 = (longlong *)param_1[0x122];
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
  plVar3 = (longlong *)param_1[0x120];
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
  plVar3 = (longlong *)param_1[0x11e];
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
  plVar3 = (longlong *)param_1[0x11c];
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
  plVar3 = (longlong *)param_1[0x11a];
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
  plVar3 = (longlong *)param_1[0x114];
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
  FUN_1449db362(param_1 + 0x109);
  param_1[0xf0] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x104];
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
  param_1[0xda] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xee];
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
  param_1[0xc4] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xd8];
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
  if (param_1[0xc2] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0xc2] = 0;
  }
  plVar3 = (longlong *)param_1[0xc1];
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
  param_1[0xaa] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xbe];
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
  if (param_1[0xa8] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0xa8] = 0;
  }
  plVar3 = (longlong *)param_1[0xa7];
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
  param_1[0x90] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xa4];
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
  if (param_1[0x8e] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x8e] = 0;
  }
  plVar3 = (longlong *)param_1[0x8d];
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
  param_1[0x76] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x8a];
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
  if (param_1[0x74] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x74] = 0;
  }
  plVar3 = (longlong *)param_1[0x73];
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
  param_1[0x5c] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x70];
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
  if (param_1[0x5b] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x5b] = 0;
  }
  plVar3 = (longlong *)param_1[0x5a];
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
  plVar3 = (longlong *)param_1[0x58];
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
  plVar3 = (longlong *)param_1[0x56];
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
  plVar3 = (longlong *)param_1[0x54];
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
  plVar3 = (longlong *)param_1[0x52];
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
  FUN_1461164ba(param_1[0x4e],*(undefined4 *)(param_1 + 0x4f));
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 148e80cde FUN_148e80cde body=377 status=ok
// SIG undefined FUN_148e80cde(void)

void FUN_148e80cde(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c872a71 == '\0') {
    local_28 = 0;
    lVar1 = *(longlong *)(param_1 + 0x540);
    if (lVar1 != 0) {
      FUN_1401924dc(lVar1);
      local_28 = lVar1;
    }
    FUN_148e81c1a(param_1 + 0x530,&local_28,param_1 + 0x550);
    local_30 = 0;
    lVar1 = *(longlong *)(param_1 + 0x610);
    if (lVar1 != 0) {
      FUN_1401924dc(lVar1);
      local_30 = lVar1;
    }
    FUN_148e81c1a(param_1 + 0x600,&local_30,param_1 + 0x620);
    local_38 = 0;
    lVar1 = *(longlong *)(param_1 + 0x470);
    if (lVar1 != 0) {
      FUN_1401924dc(lVar1);
      local_38 = lVar1;
    }
    FUN_148e81c1a(param_1 + 0x460,&local_38,param_1 + 0x480);
    local_40 = 0;
    lVar1 = *(longlong *)(param_1 + 0x3a0);
    if (lVar1 != 0) {
      FUN_1401924dc(lVar1);
      local_40 = lVar1;
    }
    FUN_148e81c1a(param_1 + 0x390,&local_40,param_1 + 0x3b0);
    local_48 = 0;
    lVar1 = *(longlong *)(param_1 + 0x2d8);
    if (lVar1 != 0) {
      FUN_1401924dc(lVar1);
      local_48 = lVar1;
    }
    FUN_148e81c1a(param_1 + 0x2c8,&local_48,param_1 + 0x2e0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e80e58 FUN_148e80e58 body=401 status=ok
// SIG undefined FUN_148e80e58(void)

void FUN_148e80e58(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong **)(param_1 + 0x8e8) != (longlong *)0x0) {
    puVar3 = &DAT_14c96b238;
    if (*(char *)(param_2 + 0x40) != '\0') {
      puVar3 = &DAT_14c96b23b;
    }
    local_58 = *puVar3;
    local_57 = 1;
    local_50 = 0;
    uStack_48 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x1c0))();
    uVar2 = *(undefined8 *)(param_1 + 0x8e8);
    local_80 = *(longlong **)(param_2 + 0x20);
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 8))();
    }
    local_78 = *(undefined4 *)(param_2 + 0x28);
    local_70 = 1;
    local_68 = 0;
    uStack_60 = 0;
    FUN_140a5cace(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x8e8);
    FUN_148e7be48(local_a8,param_2);
    local_98 = 0;
    local_94 = 1;
    local_90 = 0;
    uStack_88 = 0;
    FUN_1410da5ca(uVar2,local_a8);
  }
  lVar1 = *(longlong *)(param_1 + 0x8f8);
  if (lVar1 != 0) {
    local_d0 = *(longlong **)(param_2 + 0x10);
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 8))();
    }
    local_c8 = *(undefined4 *)(param_2 + 0x18);
    local_c0 = 1;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_140a5cace(lVar1);
    if (*(int *)(param_2 + 0x54) != -1) {
      uVar2 = *(undefined8 *)(param_1 + 0x8f8);
      FUN_148e7be48(local_f8,param_2 + 0x48);
      local_e8 = 0;
      local_e4 = 1;
      local_e0 = 0;
      uStack_d8 = 0;
      FUN_1410da5ca(uVar2,local_f8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e80fea FUN_148e80fea body=113 status=ok
// SIG undefined FUN_148e80fea(void)

uint FUN_148e80fea(void)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0)) {
    uVar2 = FUN_140d66c9c();
    lVar3 = FUN_1411c648e(uVar2);
    if (lVar3 != 0) {
      lVar4 = FUN_147aa5636(uVar2,0);
      if (lVar4 == 0) {
        return 0;
      }
      bVar1 = FUN_14600c716(lVar3,lVar4);
      if (bVar1 < 3) {
        return 0x30102 >> ((bVar1 & 3) << 3);
      }
    }
  }
  return 0;
}



// FUNCTION 148e8105c FUN_148e8105c body=105 status=ok
// SIG undefined FUN_148e8105c(void)

void FUN_148e8105c(longlong param_1,float param_2)

{
  undefined1 auStack_48 [32];
  float local_28;
  undefined1 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x858) = param_2;
  local_24 = 1;
  local_20 = 1;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = param_2;
  FUN_146ad45a2(*(undefined8 *)(param_1 + 0x2b8));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e810c6 FUN_148e810c6 body=33 status=ok
// SIG undefined FUN_148e810c6(void)

void FUN_148e810c6(longlong param_1,char param_2)

{
  undefined1 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_148e80fea();
  }
  *(undefined1 *)(param_1 + 0x280) = uVar1;
  return;
}



// FUNCTION 148e810e8 FUN_148e810e8 body=114 status=ok
// SIG undefined FUN_148e810e8(void)

void FUN_148e810e8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  if (lVar1 != 0) {
    local_40 = (longlong *)*param_2;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 8))();
    }
    local_38 = (undefined4)param_2[1];
    local_30 = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_140a5cace(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8115c FUN_148e8115c body=1658 status=ok
// SIG undefined FUN_148e8115c(void)

/* WARNING: Instruction at (ram,0x0001442d5216) overlaps instruction at (ram,0x0001442d5215)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001442d5f86) */
/* WARNING: Removing unreachable block (ram,0x0001442d5f8e) */
/* WARNING: Removing unreachable block (ram,0x0001442d5fac) */
/* WARNING: Removing unreachable block (ram,0x0001442d5fb5) */
/* WARNING: Removing unreachable block (ram,0x0001442d6258) */
/* WARNING: Removing unreachable block (ram,0x0001442d5fc3) */
/* WARNING: Removing unreachable block (ram,0x00014626708a) */
/* WARNING: Removing unreachable block (ram,0x0001462669d8) */
/* WARNING: Removing unreachable block (ram,0x000146266a05) */
/* WARNING: Removing unreachable block (ram,0x0001442d5b90) */
/* WARNING: Removing unreachable block (ram,0x0001442d5ba3) */
/* WARNING: Removing unreachable block (ram,0x0001442d5bb4) */
/* WARNING: Removing unreachable block (ram,0x0001442d5f59) */
/* WARNING: Removing unreachable block (ram,0x0001442d5f61) */
/* WARNING: Removing unreachable block (ram,0x0001442d5f6e) */
/* WARNING: Removing unreachable block (ram,0x0001442d5f7d) */
/* WARNING: Removing unreachable block (ram,0x0001442d5fc6) */
/* WARNING: Removing unreachable block (ram,0x0001442d5fd0) */
/* WARNING: Removing unreachable block (ram,0x0001442d65b3) */
/* WARNING: Removing unreachable block (ram,0x0001442d5fe3) */
/* WARNING: Removing unreachable block (ram,0x0001442d5ff0) */
/* WARNING: Removing unreachable block (ram,0x0001442d602c) */
/* WARNING: Removing unreachable block (ram,0x0001442d6038) */
/* WARNING: Removing unreachable block (ram,0x0001442d6502) */
/* WARNING: Removing unreachable block (ram,0x0001442d65a7) */
/* WARNING: Removing unreachable block (ram,0x0001442d6048) */
/* WARNING: Removing unreachable block (ram,0x0001442d604d) */
/* WARNING: Removing unreachable block (ram,0x0001442d6056) */
/* WARNING: Removing unreachable block (ram,0x0001442d605f) */
/* WARNING: Removing unreachable block (ram,0x0001442d606d) */
/* WARNING: Removing unreachable block (ram,0x0001442d6091) */
/* WARNING: Removing unreachable block (ram,0x0001442d609d) */
/* WARNING: Removing unreachable block (ram,0x0001442d60f1) */
/* WARNING: Removing unreachable block (ram,0x0001442d610c) */
/* WARNING: Removing unreachable block (ram,0x0001442d6119) */
/* WARNING: Removing unreachable block (ram,0x0001442d612b) */
/* WARNING: Removing unreachable block (ram,0x0001442d615c) */
/* WARNING: Removing unreachable block (ram,0x0001442d615f) */
/* WARNING: Removing unreachable block (ram,0x0001442d617c) */
/* WARNING: Removing unreachable block (ram,0x0001442d6191) */
/* WARNING: Removing unreachable block (ram,0x0001442d619b) */
/* WARNING: Removing unreachable block (ram,0x0001442d61a2) */
/* WARNING: Removing unreachable block (ram,0x0001442d61ad) */
/* WARNING: Removing unreachable block (ram,0x0001442d61bd) */
/* WARNING: Removing unreachable block (ram,0x0001442d6661) */
/* WARNING: Removing unreachable block (ram,0x0001442d61d1) */
/* WARNING: Removing unreachable block (ram,0x0001442d61e8) */
/* WARNING: Removing unreachable block (ram,0x0001442d61ed) */
/* WARNING: Removing unreachable block (ram,0x0001442d6301) */
/* WARNING: Removing unreachable block (ram,0x0001442d5ce0) */
/* WARNING: Removing unreachable block (ram,0x0001442d5ce8) */
/* WARNING: Removing unreachable block (ram,0x0001442d5cf5) */
/* WARNING: Removing unreachable block (ram,0x0001442d5d13) */
/* WARNING: Removing unreachable block (ram,0x0001442d5d1d) */
/* WARNING: Removing unreachable block (ram,0x0001442d5d2d) */
/* WARNING: Removing unreachable block (ram,0x0001442d5d47) */
/* WARNING: Removing unreachable block (ram,0x0001442d5d54) */
/* WARNING: Removing unreachable block (ram,0x0001442d5d66) */
/* WARNING: Removing unreachable block (ram,0x0001442d5da0) */
/* WARNING: Removing unreachable block (ram,0x0001442d5da7) */
/* WARNING: Removing unreachable block (ram,0x0001442d5db6) */
/* WARNING: Removing unreachable block (ram,0x0001442d5dbf) */
/* WARNING: Removing unreachable block (ram,0x0001442d5de7) */
/* WARNING: Removing unreachable block (ram,0x0001442d5df8) */
/* WARNING: Removing unreachable block (ram,0x0001442d5e01) */
/* WARNING: Removing unreachable block (ram,0x0001442d5e06) */
/* WARNING: Removing unreachable block (ram,0x0001442d5e10) */
/* WARNING: Removing unreachable block (ram,0x0001442d5e20) */
/* WARNING: Removing unreachable block (ram,0x0001442d5e34) */
/* WARNING: Removing unreachable block (ram,0x0001442d5e57) */
/* WARNING: Removing unreachable block (ram,0x0001442d6654) */
/* WARNING: Removing unreachable block (ram,0x0001442d5eb9) */
/* WARNING: Removing unreachable block (ram,0x0001442d5ec1) */
/* WARNING: Removing unreachable block (ram,0x0001442d5ece) */
/* WARNING: Removing unreachable block (ram,0x0001442d5bc4) */
/* WARNING: Removing unreachable block (ram,0x0001442d5bcc) */
/* WARNING: Removing unreachable block (ram,0x0001442d5bd9) */
/* WARNING: Removing unreachable block (ram,0x0001442d5bf7) */
/* WARNING: Removing unreachable block (ram,0x0001442d5c07) */
/* WARNING: Removing unreachable block (ram,0x0001442d5c21) */
/* WARNING: Removing unreachable block (ram,0x0001442d5c2e) */
/* WARNING: Removing unreachable block (ram,0x0001442d5c40) */
/* WARNING: Removing unreachable block (ram,0x0001442d5c4d) */
/* WARNING: Removing unreachable block (ram,0x0001442d622d) */
/* WARNING: Removing unreachable block (ram,0x0001442d5c5e) */
/* WARNING: Removing unreachable block (ram,0x0001442d5c7c) */
/* WARNING: Removing unreachable block (ram,0x0001442d625f) */
/* WARNING: Removing unreachable block (ram,0x0001442d626b) */
/* WARNING: Removing unreachable block (ram,0x0001442d6277) */
/* WARNING: Removing unreachable block (ram,0x0001442d621d) */
/* WARNING: Removing unreachable block (ram,0x0001442d6325) */
/* WARNING: Removing unreachable block (ram,0x0001442d6361) */
/* WARNING: Removing unreachable block (ram,0x0001442d6389) */
/* WARNING: Removing unreachable block (ram,0x0001442d639b) */
/* WARNING: Removing unreachable block (ram,0x0001442d6354) */
/* WARNING: Removing unreachable block (ram,0x0001442d6394) */
/* WARNING: Removing unreachable block (ram,0x0001442d63cb) */
/* WARNING: Removing unreachable block (ram,0x0001442d63d1) */
/* WARNING: Removing unreachable block (ram,0x0001442d63d5) */
/* WARNING: Removing unreachable block (ram,0x0001442d641a) */
/* WARNING: Removing unreachable block (ram,0x0001442d6426) */
/* WARNING: Removing unreachable block (ram,0x0001442d648f) */
/* WARNING: Removing unreachable block (ram,0x0001442d649c) */
/* WARNING: Removing unreachable block (ram,0x0001442d64a9) */
/* WARNING: Removing unreachable block (ram,0x0001442d64ae) */
/* WARNING: Removing unreachable block (ram,0x0001442d64b8) */
/* WARNING: Removing unreachable block (ram,0x0001442d64c5) */
/* WARNING: Removing unreachable block (ram,0x0001442d64ca) */
/* WARNING: Removing unreachable block (ram,0x0001442d64eb) */
/* WARNING: Removing unreachable block (ram,0x0001442d64f0) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x0001442d5e86 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_148e8115c(RTL_SRWLOCK *param_1,PSRWLOCK param_2)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  undefined8 *puVar3;
  ushort *puVar4;
  void *pvVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint *extraout_RAX;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint *extraout_RAX_00;
  longlong *plVar15;
  longlong *plVar16;
  uint *puVar17;
  uint *puVar18;
  ulonglong *puVar20;
  longlong *plVar21;
  longlong lVar22;
  PVOID pvVar23;
  PVOID pvVar24;
  uint *puVar25;
  longlong lVar26;
  char *pcVar27;
  longlong lVar28;
  RTL_SRWLOCK RVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined8 *unaff_RBP;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  RTL_SRWLOCK *pRVar33;
  RTL_SRWLOCK *unaff_R12;
  RTL_SRWLOCK *pRVar34;
  longlong unaff_R13;
  RTL_SRWLOCK *pRVar35;
  ulonglong unaff_R14;
  ulonglong uVar36;
  ulonglong unaff_R15;
  bool bVar37;
  PVOID extraout_XMM0_Qa;
  undefined1 auVar38 [16];
  PVOID extraout_XMM0_Qb;
  longlong unaff_retaddr;
  uint *puStackX_8;
  ulonglong uStackX_10;
  ulonglong in_stack_00000038;
  undefined1 auStack_fa4b [32];
  longlong lStack_fa2b;
  PSRWLOCK pRStack_fa1b;
  undefined8 *puStack_f9fb;
  longlong *plStack_f9eb;
  ulonglong uStack_f7bb;
  undefined1 auStack_430 [616];
  undefined1 *puStack_1c8;
  uint *puStack_1c0;
  RTL_SRWLOCK *pRStack_1b8;
  undefined1 auStack_1a8 [32];
  RTL_SRWLOCK local_188;
  uint *local_180;
  undefined8 *local_178;
  undefined8 uStack_170;
  RTL_SRWLOCK *local_168;
  RTL_SRWLOCK *local_160;
  undefined1 *local_158;
  RTL_SRWLOCK *pRStack_150;
  longlong *plStack_148;
  code *pcStack_140;
  RTL_SRWLOCK *pRStack_138;
  RTL_SRWLOCK *pRStack_130;
  RTL_SRWLOCK *pRStack_128;
  PSRWLOCK pRStack_120;
  RTL_SRWLOCK *pRStack_118;
  RTL_SRWLOCK *pRStack_110;
  RTL_SRWLOCK *pRStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong lStack_f0;
  RTL_SRWLOCK RStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  RTL_SRWLOCK RStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined8 uStack_78;
  longlong *plStack_70;
  longlong *aplStack_58 [2];
  undefined1 *puStack_48;
  RTL_SRWLOCK *local_40;
  uint *local_38;
  int iVar39;
  uint uVar40;
  char cVar19;
  
  puVar31 = auStack_1a8;
  puVar32 = auStack_1a8;
  puVar17 = (uint *)(DAT_14c707940 ^ (ulonglong)auStack_1a8);
  local_38 = puVar17;
  if (DAT_14c872a71 != '\0') goto LAB_148e81187;
  FUN_148e817d8(&local_158);
  plVar16 = param_1[2].Ptr;
  local_40 = param_1;
  if (plVar16 == (longlong *)0x0) {
LAB_148e811d9:
    local_168 = (RTL_SRWLOCK *)0x0;
    local_160 = (RTL_SRWLOCK *)((ulonglong)local_160 & 0xffffffff00000000);
    puVar17 = (uint *)&DAT_00000010;
    pRVar33 = (RTL_SRWLOCK *)&DAT_00000015;
    FUN_1446efa72(&local_168,0);
    pRVar34 = local_168;
    local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,0x15);
    local_168->Ptr = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    pvVar23 = (PVOID)(DAT_14c758608 + 1);
    lVar28 = DAT_14c758608 + 1;
    if (pvVar23 == (PVOID)0x0) {
      LOCK();
      UNLOCK();
      pvVar23 = (PVOID)(DAT_14c758608 + 2);
      lVar28 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar28;
    local_168[2].Ptr = pvVar23;
    local_168->Ptr = &PTR_FUN_14b9c5a70;
    local_168[3].Ptr = (PVOID)0x0;
    local_168[4].Ptr = (PVOID)0x0;
    FUN_148e817d8(local_168 + 5);
    pRVar34[0x28].Ptr = local_40;
    pRVar34 = unaff_R12;
  }
  else {
    iVar10 = (int)plVar16[1];
    do {
      if (iVar10 == 0) goto LAB_148e811d9;
      LOCK();
      iVar39 = (int)plVar16[1];
      bVar37 = iVar10 == iVar39;
      if (bVar37) {
        *(int *)(plVar16 + 1) = iVar10 + 1;
        iVar39 = iVar10;
      }
      iVar10 = iVar39;
      UNLOCK();
    } while (!bVar37);
    pvVar23 = param_1[1].Ptr;
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar16 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    local_168 = (RTL_SRWLOCK *)0x0;
    local_160 = (RTL_SRWLOCK *)((ulonglong)local_160 & 0xffffffff00000000);
    puVar17 = (uint *)&DAT_00000010;
    pRVar33 = (RTL_SRWLOCK *)&DAT_00000015;
    FUN_1446efa72(&local_168,0);
    pRVar34 = local_168;
    local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,0x15);
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    local_168->Ptr = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    pvVar24 = (PVOID)(DAT_14c758608 + 1);
    lVar28 = DAT_14c758608 + 1;
    if (pvVar24 == (PVOID)0x0) {
      LOCK();
      UNLOCK();
      pvVar24 = (PVOID)(DAT_14c758608 + 2);
      lVar28 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar28;
    local_168[2].Ptr = pvVar24;
    local_168->Ptr = &PTR_FUN_14b9c5a70;
    local_168[3].Ptr = pvVar23;
    local_168[4].Ptr = plVar16;
    LOCK();
    *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
    UNLOCK();
    FUN_148e817d8(local_168 + 5);
    pRVar34[0x28].Ptr = local_40;
    LOCK();
    plVar21 = plVar16 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    plVar21 = plVar16 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  local_178 = (undefined8 *)0x0;
  uStack_170 = 1;
  plVar21 = (longlong *)0x0;
  FUN_1406f071e(&local_178);
  pvVar23 = param_2[2].Ptr;
  *local_178 = param_2[1].Ptr;
  local_178[1] = pvVar23;
  local_178[2] = 0;
  iVar10 = *(int *)&param_2[4].Ptr;
  plVar16 = param_2[3].Ptr;
  *(int *)(local_178 + 3) = iVar10;
  if ((longlong)iVar10 == 0) {
    *(undefined4 *)((longlong)local_178 + 0x1c) = 0;
    plVar16 = plVar21;
  }
  else {
    puVar13 = local_178 + 2;
    FUN_1446dd670(puVar13,iVar10,0);
    pRVar33 = (RTL_SRWLOCK *)((longlong)iVar10 * 2);
    memcpy((void *)*puVar13,plVar16,(size_t)pRVar33);
  }
  uVar36 = uStack_170;
  lVar28 = (longlong)(int)uStack_170;
  uVar9 = (int)uStack_170 + 1;
  uStack_170 = CONCAT44(uStack_170._4_4_,uVar9);
  if (uStack_170._4_4_ < uVar9) {
    plVar16 = (longlong *)(uVar36 & 0xffffffff);
    FUN_1406f071e(&local_178);
  }
  pvVar23 = param_2[7].Ptr;
  local_178[lVar28 * 4] = param_2[6].Ptr;
  (local_178 + lVar28 * 4)[1] = pvVar23;
  local_178[lVar28 * 4 + 2] = 0;
  iVar10 = *(int *)&param_2[9].Ptr;
  plVar21 = param_2[8].Ptr;
  *(int *)(local_178 + lVar28 * 4 + 3) = iVar10;
  if ((longlong)iVar10 == 0) {
    *(undefined4 *)((longlong)local_178 + lVar28 * 0x20 + 0x1c) = 0;
    plVar21 = plVar16;
  }
  else {
    puVar13 = local_178 + lVar28 * 4 + 2;
    FUN_1446dd670(puVar13,iVar10,0);
    pRVar33 = (RTL_SRWLOCK *)((longlong)iVar10 * 2);
    memcpy((void *)*puVar13,plVar21,(size_t)pRVar33);
  }
  uVar36 = uStack_170;
  lVar28 = (longlong)(int)uStack_170;
  uVar9 = (int)uStack_170 + 1;
  uStack_170 = CONCAT44(uStack_170._4_4_,uVar9);
  if (uStack_170._4_4_ < uVar9) {
    plVar21 = (longlong *)(uVar36 & 0xffffffff);
    FUN_1406f071e(&local_178);
  }
  pvVar23 = param_2[0xc].Ptr;
  local_178[lVar28 * 4] = param_2[0xb].Ptr;
  (local_178 + lVar28 * 4)[1] = pvVar23;
  local_178[lVar28 * 4 + 2] = 0;
  iVar10 = *(int *)&param_2[0xe].Ptr;
  plVar16 = param_2[0xd].Ptr;
  *(int *)(local_178 + lVar28 * 4 + 3) = iVar10;
  if ((longlong)iVar10 == 0) {
    *(undefined4 *)((longlong)local_178 + lVar28 * 0x20 + 0x1c) = 0;
    plVar16 = plVar21;
  }
  else {
    puVar13 = local_178 + lVar28 * 4 + 2;
    FUN_1446dd670(puVar13,iVar10,0);
    pRVar33 = (RTL_SRWLOCK *)((longlong)iVar10 * 2);
    memcpy((void *)*puVar13,plVar16,(size_t)pRVar33);
  }
  uVar36 = uStack_170;
  lVar28 = (longlong)(int)uStack_170;
  uVar9 = (int)uStack_170 + 1;
  uStack_170 = CONCAT44(uStack_170._4_4_,uVar9);
  if (uStack_170._4_4_ < uVar9) {
    plVar16 = (longlong *)(uVar36 & 0xffffffff);
    FUN_1406f071e(&local_178);
  }
  RVar29.Ptr = (PVOID)(lVar28 * 0x20);
  pvVar23 = param_2[0x11].Ptr;
  local_178[lVar28 * 4] = param_2[0x10].Ptr;
  (local_178 + lVar28 * 4)[1] = pvVar23;
  (local_178 + 2)[lVar28 * 4] = 0;
  iVar10 = *(int *)&param_2[0x13].Ptr;
  plVar21 = param_2[0x12].Ptr;
  *(int *)(local_178 + 3 + lVar28 * 4) = iVar10;
  if ((longlong)iVar10 == 0) {
    *(undefined4 *)((longlong)(local_178 + lVar28 * 4) + 0x1c) = 0;
    pRVar35 = (RTL_SRWLOCK *)0x0;
  }
  else {
    RVar29.Ptr = (PVOID)((longlong)&((RTL_SRWLOCK *)((longlong)RVar29.Ptr + 0x10))->Ptr +
                        (longlong)local_178);
    FUN_1446dd670(RVar29.Ptr,iVar10,0);
    pRVar35 = (RTL_SRWLOCK *)((longlong)iVar10 * 2);
    plVar16 = plVar21;
    pRVar33 = pRVar35;
    memcpy(((RTL_SRWLOCK *)RVar29.Ptr)->Ptr,plVar21,(size_t)pRVar35);
  }
  bVar7 = FUN_148e80fea();
  uVar36 = uStack_170;
  *(byte *)&param_1[0x50].Ptr = bVar7;
  puVar25 = &switchD_148e8159f::switchdataD_14b9c744c;
  puVar18 = (uint *)((longlong)&switchD_148e8159f::switchdataD_14b9c744c +
                    (longlong)(int)(&switchD_148e8159f::switchdataD_14b9c744c)[bVar7]);
  cVar6 = (char)puVar18;
  cVar19 = (char)((ulonglong)puVar18 >> 8);
  iVar10 = (int)puVar18;
  puVar30 = puStack_1c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar7) {
  case 0:
    goto switchD_148e8159f_caseD_0;
  case 1:
    lVar28 = (longlong)(int)uStack_170;
    uVar9 = (int)uStack_170 + 1;
    uStack_170 = CONCAT44(uStack_170._4_4_,uVar9);
    if (uStack_170._4_4_ < uVar9) {
      FUN_1406f071e(&local_178,uVar36 & 0xffffffff);
    }
    lVar26 = lVar28 * 0x20;
    pvVar23 = param_2[0x16].Ptr;
    local_178[lVar28 * 4] = param_2[0x15].Ptr;
    (local_178 + lVar28 * 4)[1] = pvVar23;
    local_178[lVar28 * 4 + 2] = 0;
    uVar36 = (ulonglong)*(int *)&param_2[0x18].Ptr;
    pvVar23 = param_2[0x17].Ptr;
    goto LAB_148e8168f;
  case 2:
    lVar28 = (longlong)(int)uStack_170;
    uVar9 = (int)uStack_170 + 1;
    uStack_170 = CONCAT44(uStack_170._4_4_,uVar9);
    if (uStack_170._4_4_ < uVar9) {
      FUN_1406f071e(&local_178,uVar36 & 0xffffffff);
    }
    lVar26 = lVar28 * 0x20;
    pvVar23 = param_2[0x1b].Ptr;
    local_178[lVar28 * 4] = param_2[0x1a].Ptr;
    (local_178 + lVar28 * 4)[1] = pvVar23;
    local_178[lVar28 * 4 + 2] = 0;
    uVar36 = (ulonglong)*(int *)&param_2[0x1d].Ptr;
    pvVar23 = param_2[0x1c].Ptr;
    goto LAB_148e8168f;
  case 3:
    lVar28 = (longlong)(int)uStack_170;
    uVar9 = (int)uStack_170 + 1;
    uStack_170 = CONCAT44(uStack_170._4_4_,uVar9);
    if (uStack_170._4_4_ < uVar9) {
      FUN_1406f071e(&local_178,uVar36 & 0xffffffff);
    }
    lVar26 = lVar28 * 0x20;
    pvVar23 = param_2[0x20].Ptr;
    local_178[lVar28 * 4] = param_2[0x1f].Ptr;
    (local_178 + lVar28 * 4)[1] = pvVar23;
    local_178[lVar28 * 4 + 2] = 0;
    uVar36 = (ulonglong)*(int *)&param_2[0x22].Ptr;
    pvVar23 = param_2[0x21].Ptr;
LAB_148e8168f:
    *(int *)((longlong)local_178 + lVar26 + 0x18) = (int)uVar36;
    if (uVar36 == 0) {
      *(undefined4 *)((longlong)local_178 + lVar26 + 0x1c) = 0;
    }
    else {
      puVar13 = (undefined8 *)((longlong)local_178 + lVar26 + 0x10);
      FUN_1446dd670(puVar13,uVar36 & 0xffffffff,0);
      memcpy((void *)*puVar13,pvVar23,uVar36 * 2);
    }
switchD_148e8159f_caseD_0:
    lVar28 = FUN_14050fd64();
    FUN_148e81adc(lVar28 + 0x1e8,&local_188,&local_178,&local_168);
    puVar17 = local_180;
    if (param_1 + 0x121 != &local_188) {
      param_1[0x121].Ptr = local_188.Ptr;
      local_188.Ptr = (RTL_SRWLOCK *)0x0;
      puVar18 = param_1[0x122].Ptr;
      if (local_180 != puVar18) {
        local_180 = (uint *)0x0;
        param_1[0x122].Ptr = puVar17;
        if (puVar18 != (uint *)0x0) {
          LOCK();
          puVar17 = puVar18 + 2;
          *puVar17 = *puVar17 - 1;
          UNLOCK();
          if (*puVar17 == 0) {
            (*(code *)**(undefined8 **)puVar18)(puVar18);
            LOCK();
            puVar17 = puVar18 + 3;
            *puVar17 = *puVar17 - 1;
            UNLOCK();
            if (*puVar17 == 0) {
              (**(code **)(*(longlong *)puVar18 + 0x10))(puVar18);
            }
          }
        }
      }
    }
    puVar17 = local_180;
    if (local_180 != (uint *)0x0) {
      LOCK();
      puVar18 = local_180 + 2;
      *puVar18 = *puVar18 - 1;
      UNLOCK();
      if (*puVar18 == 0) {
        (*(code *)**(undefined8 **)local_180)(local_180);
        LOCK();
        puVar18 = puVar17 + 3;
        *puVar18 = *puVar18 - 1;
        UNLOCK();
        if (*puVar18 == 0) {
          (**(code **)(*(longlong *)puVar17 + 0x10))(puVar17);
        }
      }
    }
    FUN_140861e20(local_178,uStack_170 & 0xffffffff);
    if (local_178 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1449db362(&local_168);
    puVar17 = (uint *)FUN_145ab9500(&local_158);
LAB_148e81187:
    if (((ulonglong)local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
      return puVar17;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  case 4:
                    /* WARNING: Could not emulate address calculation at 0x000146266376 */
                    /* WARNING: Treating indirect jump as call */
    puVar17 = (uint *)(*(code *)((longlong)&switchD_14626637d::switchdataD_14b9c745c +
                                (longlong)
                                (int)(&switchD_14626637d::switchdataD_14b9c745c)[(longlong)puVar18])
                      )();
    return puVar17;
  case 5:
    param_2[3].Ptr = extraout_XMM0_Qa;
    param_2[4].Ptr = extraout_XMM0_Qb;
    pcVar27 = "UIDifficultyBase";
    break;
  case 6:
    param_2[3].Ptr = extraout_XMM0_Qa;
    param_2[4].Ptr = extraout_XMM0_Qb;
    pcVar27 = "UIDifficulty_VEasy";
    break;
  case 7:
    pcVar27 = (char *)((longlong)&param_1[8].Ptr + 1);
    *pcVar27 = *pcVar27 + cVar19;
    param_2[3].Ptr = extraout_XMM0_Qa;
    param_2[4].Ptr = extraout_XMM0_Qb;
    pcVar27 = "UIDifficulty_Easy";
    break;
  case 8:
    pcVar27 = (char *)((longlong)&param_1[8].Ptr + 1);
    *pcVar27 = *pcVar27 + cVar19;
    param_2[3].Ptr = extraout_XMM0_Qa;
    param_2[4].Ptr = extraout_XMM0_Qb;
    pcVar27 = "UIDifficulty_Normal";
    break;
  case 9:
    pcVar27 = (char *)((longlong)&param_1[8].Ptr + 1);
    *pcVar27 = *pcVar27 + cVar19;
    param_2[3].Ptr = extraout_XMM0_Qa;
    param_2[4].Ptr = extraout_XMM0_Qb;
    pcVar27 = "UIDifficulty_Hard";
    break;
  case 10:
    puVar18 = (uint *)(ulonglong)(uint)((int)plVar16 + *(int *)((ulonglong)plVar16 & 0xffffffff));
    pcVar27 = (char *)((longlong)&((RTL_SRWLOCK *)((longlong)RVar29.Ptr + 0x11080))->Ptr + 3);
    *pcVar27 = *pcVar27 + 'L';
    pcVar27 = (char *)((longlong)&((RTL_SRWLOCK *)((longlong)RVar29.Ptr + 0x3cc88))->Ptr + 7);
    *pcVar27 = *pcVar27 + 'L';
    bVar7 = (byte)((ulonglong)RVar29.Ptr >> 8);
    lVar28 = CONCAT62((int6)((ulonglong)RVar29.Ptr >> 0x10),
                      CONCAT11(bVar7 * '\x02',(char)RVar29.Ptr));
    puStack_1c8 = &stack0xfffffffffffffe50;
    puVar13 = (undefined8 *)&stack0xfffffffffffffe50;
    cVar6 = '\x02';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar13 = puVar13 + -1;
      *puVar13 = *unaff_RBP;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    puVar30 = &stack0xfffffffffffffe50;
    if (CARRY1(bVar7,bVar7) || (byte)(bVar7 * '\x02') == '\0') goto switchD_148e8159f_caseD_d;
    *(undefined4 *)((longlong)&param_2[0x79].Ptr + 4) = 0;
    puVar32 = &stack0xfffffffffffffe50;
    if (((char)puVar17 != '\0') &&
       (puVar32 = &stack0xfffffffffffffe50, *(char *)((longlong)&param_1[0x59].Ptr + 1) == '\0')) {
      pRVar33 = (RTL_SRWLOCK *)((ulonglong)pRVar33 & 0xffffffff);
      uVar9 = *(uint *)&param_2[0x6d].Ptr;
      if ((int)uVar9 < *(int *)&param_2[0x6f].Ptr && -1 < (int)uVar9) {
        *(int *)&param_2[0x70].Ptr = *(int *)&param_2[0x70].Ptr + 1;
        puVar11 = (undefined4 *)((ulonglong)uVar9 * 4 + (longlong)param_2[0x6e].Ptr);
LAB_1442d07bc:
        uVar8 = *puVar11;
      }
      else {
        uVar8 = 0xffffffff;
        if (0 < *(int *)&param_2[0x6f].Ptr) {
          puVar11 = (undefined4 *)*puStack_f9fb;
          goto LAB_1442d07bc;
        }
      }
      uVar12 = FUN_14626750a(lStack_fa2b,uVar8);
      FUN_1462653da(param_1,uVar12,param_2,uVar8);
      lVar28 = lStack_fa2b;
      pRVar35 = pRStack_fa1b;
      puVar32 = puStack_1c8;
    }
    puStack_1c8 = puVar32;
    if (((char)pRVar33 != '\0') && (puVar4 = param_2[0x10].Ptr, puVar4 != (ushort *)0x0)) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)&param_2[0xf].Ptr & 0x3f));
    }
    cVar6 = *(char *)(lVar28 + 0x118);
    if (plStack_f9eb != (longlong *)0x0) {
      (**(code **)(*plStack_f9eb + 0x10))();
    }
    if (cVar6 == '\0') goto LAB_1442cfbfe;
    iVar10 = *(int *)((longlong)&param_1[6].Ptr + 4);
    if (iVar10 == 0) {
LAB_1442d0294:
      uVar12 = 0;
    }
    else {
      uVar9 = *(uint *)&param_1[6].Ptr;
      uVar12 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        puVar13 = (undefined8 *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((puVar13 == (undefined8 *)0x0) ||
           ((*(int *)(puVar13 + 2) != iVar10 || ((*(uint *)(puVar13 + 1) & 0x10200000) != 0))))
        goto LAB_1442d0294;
        uVar12 = *puVar13;
      }
    }
    lVar28 = FUN_140391a3c(uVar12);
    if (lVar28 != 0) {
      puVar13 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar13 = &PTR_FUN_14b9c4868;
      FUN_14039144e(lVar28,puVar13);
    }
LAB_1442cfbfe:
    ReleaseSRWLockShared(pRVar35);
    if ((uStack_f7bb ^ (ulonglong)auStack_fa4b) == DAT_14c707940) {
      return extraout_RAX;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  case 0xb:
    puVar18 = (uint *)(ulonglong)(uint)(iVar10 + (int)plVar16);
  case 0xd:
switchD_148e8159f_caseD_d:
    puStack_1c8 = puVar30;
                    /* WARNING: Could not recover jumptable at 0x0001442d06db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar17 = (uint *)(*(code *)((longlong)&switchD_1442d06db::switchdataD_14b9c7474 +
                                (longlong)
                                (int)(&switchD_1442d06db::switchdataD_14b9c7474)[(longlong)puVar18])
                      )();
    return puVar17;
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    puVar18 = puVar17;
    goto code_r0x000148e90de0;
  case 0xf:
    *(byte *)puVar18 = (byte)*puVar18 + cVar6;
    goto code_r0x000148e90ded;
  case 0x10:
code_r0x000148e90de0:
    if (puVar18 == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar18 = *(uint **)((longlong)L"Whether to clear pips on hover or click" +
                        (longlong)(int)(&switchD_148e8159f::switchdataD_14b9c744c)[bVar7] + 0x2c);
    puVar25 = (uint *)(ulonglong)*(byte *)&pRVar33->Ptr;
code_r0x000148e90ded:
    lVar28 = (longlong)puVar17 * 0x1e8;
    do {
      switch((int)puVar25) {
      case 1:
        lVar26 = *(longlong *)(puVar18 + 0x12);
        break;
      case 2:
        lVar26 = *(longlong *)(puVar18 + 0x54);
        goto joined_r0x000148e90e29;
      case 3:
        lVar26 = *(longlong *)(puVar18 + 0x22);
        break;
      case 4:
        lVar26 = *(longlong *)(puVar18 + 0x34);
joined_r0x000148e90e29:
        if (lVar26 == *plVar16) {
          return puVar18;
        }
      default:
        goto switchD_148e90e0c_default;
      }
      if (lVar26 == *plVar16) {
        return puVar18;
      }
switchD_148e90e0c_default:
      puVar18 = puVar18 + 0x7a;
      lVar28 = lVar28 + -0x1e8;
      if (lVar28 == 0) {
                    /* WARNING: Read-only address (ram,0x00014b9c7844) is written */
                    /* WARNING: Read-only address (ram,0x00014b9c7844) is written */
        return (uint *)0x0;
      }
    } while( true );
  case 0x11:
    puVar25 = (uint *)(ulonglong)(byte)*puVar18;
    goto code_r0x000148e90ded;
  case 0x12:
    *(byte *)puVar18 = (byte)*puVar18 + cVar6;
    if (iVar10 == *(int *)&pRVar34[0x29].Ptr) {
LAB_1442d4b7d:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(in_stack_00000038 ^ (ulonglong)auStack_1a8);
    }
    pvVar23 = param_1[0x7f].Ptr;
    puVar17 = (uint *)0x0;
    puVar30 = auStack_1a8;
    if (pvVar23 == (PVOID)0x0) goto LAB_1442d499f;
    if (*(char *)((longlong)pvVar23 + 2) == '\0') goto LAB_1442d4b7d;
    switch(*(undefined1 *)((longlong)pvVar23 + 0x108)) {
    case 1:
      plVar16 = *(longlong **)((longlong)pvVar23 + 0x110);
      if (plVar16 == (longlong *)0x0) {
LAB_1442d4a2b:
        plVar21 = (longlong *)0x0;
      }
      else {
        lVar28 = (**(code **)(*plVar16 + 8))(plVar16);
        lVar26 = FUN_1465f1bf8();
        if ((lVar26 == 0) || (*(int *)(lVar28 + 0x38) < *(int *)(lVar26 + 0x38)))
        goto LAB_1442d4a2b;
        plVar21 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(lVar28 + 0x30) + (longlong)*(int *)(lVar26 + 0x38) * 8) ==
            lVar26 + 0x30) {
          plVar21 = plVar16;
        }
      }
      iVar10 = *(int *)((longlong)&param_1[6].Ptr + 4);
      if (iVar10 == 0) {
LAB_1442d555b:
        uVar12 = 0;
      }
      else {
        uVar9 = *(uint *)&param_1[6].Ptr;
        uVar12 = 0;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
          puVar13 = (undefined8 *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if ((puVar13 == (undefined8 *)0x0) ||
             ((*(int *)(puVar13 + 2) != iVar10 || ((*(uint *)(puVar13 + 1) & 0x10200000) != 0))))
          goto LAB_1442d555b;
          uVar12 = *puVar13;
        }
      }
      lVar28 = FUN_1407f492e(uVar12);
      puVar17 = (uint *)0x0;
      puVar30 = auStack_1a8;
      if (lVar28 == 0) goto LAB_1442d499f;
      if (DAT_14cbadd90 == (uint *)0x0) {
        pRStack_150 = &RStack_a0;
        RStack_a0.Ptr = FUN_141030f22;
        pcStack_140 = FUN_14081d0ea;
        plStack_148 = (longlong *)&LAB_1459f2e4c;
        local_158 = &LAB_148c39de3;
        local_160 = (RTL_SRWLOCK *)&LAB_1457a9eb2;
        local_168 = (RTL_SRWLOCK *)&DAT_149e063b2;
        uStack_170 = 0;
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x10000004);
        local_180 = (uint *)CONCAT44(local_180._4_4_,0x10);
        local_188.Ptr._0_4_ = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      puVar17 = DAT_14cbadd90;
      puVar30 = auStack_1a8;
      if (((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < (int)DAT_14cbadd90[0xe]) ||
          (puVar17 = DAT_14cbadd90 + 0xc, puVar30 = auStack_1a8,
          *(uint **)(*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
                    (longlong)(int)DAT_14cbadd90[0xe] * 8) != puVar17)) ||
         (lVar26 = *(longlong *)(lVar28 + 0x398), puVar30 = auStack_1a8, lVar26 == 0))
      goto LAB_1442d499f;
      if (DAT_14cbae3d8 == (uint *)0x0) {
        pRStack_150 = &RStack_a0;
        RStack_a0.Ptr = FUN_141030f22;
        pcStack_140 = FUN_14081d0ea;
        plStack_148 = (longlong *)&LAB_1464f5fc4;
        local_158 = &LAB_148c3dd26;
        local_160 = (RTL_SRWLOCK *)&LAB_1459673ba;
        local_168 = (RTL_SRWLOCK *)0x149e2b68a;
        uStack_170 = 0;
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x10000004);
        local_180 = (uint *)CONCAT44(local_180._4_4_,0x10);
        local_188.Ptr._0_4_ = 0x1360;
        puVar17 = (uint *)FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,
                                        FUN_1465eb604);
        lVar26 = *(longlong *)(lVar28 + 0x398);
        puVar30 = auStack_1a8;
        if (lVar26 == 0) goto LAB_1442d499f;
      }
      puVar17 = DAT_14cbae3d8;
      puVar30 = auStack_1a8;
      if (((DAT_14cbae3d8 == (uint *)0x0) ||
          (lVar28 = *(longlong *)(lVar26 + 0x10), puVar30 = auStack_1a8, lVar28 == 0)) ||
         ((puVar30 = auStack_1a8, *(int *)(lVar28 + 0x38) < (int)DAT_14cbae3d8[0xe] ||
          (puVar17 = DAT_14cbae3d8 + 0xc, puVar30 = auStack_1a8,
          *(uint **)(*(longlong *)(lVar28 + 0x30) + (longlong)(int)DAT_14cbae3d8[0xe] * 8) !=
          puVar17)))) goto LAB_1442d499f;
      pRVar33 = param_1 + 0x2e;
      cVar6 = FUN_14021d296(pRVar33,&DAT_14cbd9498);
      if (cVar6 == '\0') {
        cVar6 = FUN_14021d296(pRVar33,&DAT_14cbd94a0);
        if (cVar6 == '\0') {
          cVar6 = FUN_14021d296(pRVar33,&DAT_14cbd94a8);
          if (cVar6 == '\0') break;
          pRVar35 = (RTL_SRWLOCK *)(lVar26 + 0xd50);
          param_2 = (PSRWLOCK)(plVar21 + 0xf);
          puVar13 = &DAT_14cbcfbe8;
        }
        else {
          pRVar35 = (RTL_SRWLOCK *)(lVar26 + 0xd50);
          param_2 = (PSRWLOCK)(plVar21 + 0xf);
          puVar13 = &DAT_14cbcfbe0;
        }
      }
      else {
        pRVar35 = (RTL_SRWLOCK *)(lVar26 + 0xd50);
        param_2 = (PSRWLOCK)(plVar21 + 0xf);
        puVar13 = &DAT_14cbcfbd8;
      }
LAB_1442d5603:
      FUN_148db69ee(pRVar35,puVar13,param_2);
      break;
    case 3:
      iVar10 = *(int *)((longlong)&param_1[6].Ptr + 4);
      if (iVar10 == 0) {
LAB_1442d5562:
        uVar12 = 0;
      }
      else {
        uVar9 = *(uint *)&param_1[6].Ptr;
        uVar12 = 0;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
          puVar13 = (undefined8 *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if ((puVar13 == (undefined8 *)0x0) ||
             ((*(int *)(puVar13 + 2) != iVar10 || ((*(uint *)(puVar13 + 1) & 0x10200000) != 0))))
          goto LAB_1442d5562;
          uVar12 = *puVar13;
        }
      }
      param_2 = (PSRWLOCK)FUN_1407f492e(uVar12);
      puVar17 = (uint *)0x0;
      puVar30 = auStack_1a8;
      if (param_2 == (PSRWLOCK)0x0) goto LAB_1442d499f;
      bVar37 = DAT_14cbadd90 == (uint *)0x0;
      puVar18 = DAT_14cbadd90;
      goto code_r0x0001442d4f82;
    case 4:
      uVar9 = *(uint *)((longlong)&param_1[6].Ptr + 4);
      puVar18 = (uint *)(ulonglong)uVar9;
      if (uVar9 != 0) {
        plVar16 = (longlong *)(ulonglong)*(uint *)&param_1[6].Ptr;
        puVar25 = (uint *)0x0;
        goto code_r0x0001442d4bba;
      }
      goto LAB_1442d5554;
    case 5:
      iVar10 = *(int *)((longlong)&param_1[6].Ptr + 4);
      if (iVar10 == 0) {
LAB_1442d5569:
        uVar12 = 0;
      }
      else {
        uVar9 = *(uint *)&param_1[6].Ptr;
        uVar12 = 0;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
          puVar13 = (undefined8 *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if ((puVar13 == (undefined8 *)0x0) ||
             ((*(int *)(puVar13 + 2) != iVar10 || ((*(uint *)(puVar13 + 1) & 0x10200000) != 0))))
          goto LAB_1442d5569;
          uVar12 = *puVar13;
        }
      }
      lVar28 = FUN_1407f492e(uVar12);
      puVar17 = (uint *)0x0;
      puVar30 = auStack_1a8;
      if (lVar28 == 0) goto LAB_1442d499f;
      if (DAT_14cbadd90 == (uint *)0x0) {
        pRStack_150 = &RStack_a0;
        RStack_a0.Ptr = FUN_141030f22;
        pcStack_140 = FUN_14081d0ea;
        plStack_148 = (longlong *)&LAB_1459f2e4c;
        local_158 = &LAB_148c39de3;
        local_160 = (RTL_SRWLOCK *)&LAB_1457a9eb2;
        local_168 = (RTL_SRWLOCK *)&DAT_149e063b2;
        uStack_170 = 0;
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x10000004);
        local_180 = (uint *)CONCAT44(local_180._4_4_,0x10);
        local_188.Ptr._0_4_ = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      puVar17 = DAT_14cbadd90;
      puVar30 = auStack_1a8;
      if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < (int)DAT_14cbadd90[0xe]) ||
         (puVar17 = DAT_14cbadd90 + 0xc, puVar30 = auStack_1a8,
         *(uint **)(*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
                   (longlong)(int)DAT_14cbadd90[0xe] * 8) != DAT_14cbadd90 + 0xc))
      goto LAB_1442d499f;
      plVar16 = *(longlong **)((longlong)param_1[0x7f].Ptr + 0x110);
      puVar17 = param_1[0x7f].Ptr;
      puVar30 = auStack_1a8;
      if (plVar16 == (longlong *)0x0) goto LAB_1442d499f;
      lVar26 = (**(code **)(*plVar16 + 8))(plVar16);
      puVar18 = (uint *)FUN_1465f1b62();
      puVar17 = puVar18;
      puVar30 = auStack_1a8;
      if (((puVar18 == (uint *)0x0) ||
          (puVar30 = auStack_1a8, *(int *)(lVar26 + 0x38) < (int)puVar18[0xe])) ||
         (puVar17 = puVar18 + 0xc, puVar30 = auStack_1a8,
         *(uint **)(*(longlong *)(lVar26 + 0x30) + (longlong)(int)puVar18[0xe] * 8) != puVar18 + 0xc
         )) goto LAB_1442d499f;
      lStack_b8 = plVar16[1];
      uVar12 = FUN_14477b664(plVar16[2]);
      uStack_b0 = FUN_14477b664(uVar12);
      lStack_a8 = plVar16[3];
      FUN_14570615e(lVar28,&lStack_b8);
      FUN_148e94d4e(param_1);
    }
    goto switchD_1442d4a19_caseD_2;
  case 0x13:
    bVar37 = iVar10 == 0;
code_r0x0001442d4f82:
    if (bVar37) {
      pRStack_150 = &RStack_a0;
      RStack_a0.Ptr = FUN_141030f22;
      pcStack_140 = FUN_14081d0ea;
      plStack_148 = (longlong *)&LAB_1459f2e4c;
      local_158 = &LAB_148c39de3;
      local_160 = (RTL_SRWLOCK *)&LAB_1457a9eb2;
      local_168 = (RTL_SRWLOCK *)&DAT_149e063b2;
      uStack_170 = 0;
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x10000004);
      local_180 = (uint *)CONCAT44(local_180._4_4_,0x10);
      local_188.Ptr._0_4_ = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      puVar18 = DAT_14cbadd90;
    }
    puVar17 = puVar18;
    puVar30 = auStack_1a8;
    if ((*(int *)((longlong)param_2[2].Ptr + 0x38) < (int)puVar18[0xe]) ||
       (puVar17 = puVar18 + 0xc, puVar30 = auStack_1a8,
       *(uint **)(*(longlong *)((longlong)param_2[2].Ptr + 0x30) + (longlong)(int)puVar18[0xe] * 8)
       != puVar18 + 0xc)) goto LAB_1442d499f;
    pvVar23 = (PVOID)((longlong)*(int *)&pRVar34[0x2e].Ptr * 0x188 + (longlong)pRVar34[0x1d].Ptr);
    if (pvVar23 != (PVOID)0x0) {
      uStack_d0 = *(undefined8 *)((longlong)pvVar23 + 0x170);
      uVar12 = FUN_14477b664(*(undefined8 *)((longlong)pvVar23 + 0x178));
      uStack_c8 = FUN_14477b664(uVar12);
      uStack_c0 = *(undefined8 *)((longlong)pvVar23 + 0x180);
      FUN_145979580(param_2,&uStack_d0);
    }
    goto switchD_1442d4a19_caseD_2;
  case 0x14:
    pcVar27 = (char *)((longlong)&((RTL_SRWLOCK *)((longlong)RVar29.Ptr + 0x52e71d130))->Ptr + 1);
    *pcVar27 = *pcVar27 + 'L';
code_r0x0001442d4ecf:
    local_188.Ptr = pRVar35;
    local_180 = puVar18;
    FUN_1488d8584(plVar21,2);
    *(undefined4 *)&param_1[0x5c].Ptr = 0;
    if (*(int *)((longlong)&param_1[0x5c].Ptr + 4) != 0) {
      FUN_1488d20d8(pRStack_138,0);
    }
LAB_1442d5712:
    FUN_1448d5e3c(&RStack_a0,pRStack_118);
    pvVar23 = ((RTL_SRWLOCK *)((longlong)RStack_a0.Ptr + 0x1b0))->Ptr;
    SRWLock = (PSRWLOCK)((longlong)pvVar23 + 0x1c0);
    AcquireSRWLockShared(SRWLock);
    plVar16 = (longlong *)CONCAT44(uStack_94,uStack_98);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar16 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    lVar28 = FUN_140c6f194(pvVar23,pRStack_128);
    if (lVar28 == 0) {
      ReleaseSRWLockShared(SRWLock);
LAB_1442d57e4:
      ReleaseSRWLockExclusive(pRStack_120);
      puVar17 = extraout_RAX_00;
      puVar30 = auStack_1a8;
      goto LAB_1442d499f;
    }
    cVar6 = FUN_140991644((RTL_SRWLOCK *)((longlong)RVar29.Ptr + 0x80),lVar28 + 0x218);
    if (cVar6 == '\0') {
      FUN_1406fd608(&RStack_a0,lVar28 + 0x218);
      FUN_140a6a9d4((RTL_SRWLOCK *)((longlong)RVar29.Ptr + 0x80),&RStack_a0);
      FUN_140368b56(&RStack_a0);
      *(int *)&((RTL_SRWLOCK *)((longlong)RVar29.Ptr + 0x160))->Ptr =
           *(int *)&((RTL_SRWLOCK *)((longlong)RVar29.Ptr + 0x160))->Ptr + 1;
    }
    ReleaseSRWLockShared(SRWLock);
    goto LAB_1442d562d;
  case 0x15:
    if (-1 < (longlong)puVar18) {
      puVar13 = (undefined8 *)0x4cbcfbe8;
      goto LAB_1442d5603;
    }
code_r0x0001442d4bba:
    uVar9 = (uint)puVar18 ^ 0x85;
    *(byte *)&param_2->Ptr = *(byte *)&param_2->Ptr >> 4 | *(char *)&param_2->Ptr << 4;
    uVar36 = (ulonglong)uVar9;
    *(uint *)((ulonglong)puVar25 & 0xffffffff) =
         *(uint *)((ulonglong)puVar25 & 0xffffffff) | (uint)puVar25;
    pcVar27 = (char *)((longlong)&((RTL_SRWLOCK *)((longlong)RVar29.Ptr + -0x36cecfb0))->Ptr + 6);
    *pcVar27 = *pcVar27 + (char)uVar9;
    uVar9 = (uint)plVar16;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
      puVar20 = (ulonglong *)
                ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
      if ((puVar20 == (ulonglong *)0x0) ||
         (((uint)puVar20[2] != (uint)puVar25 || ((puVar20[1] & 0x10200000) != 0)))) {
LAB_1442d5554:
        uVar36 = 0;
      }
      else {
        uVar36 = *puVar20;
      }
    }
    lVar28 = FUN_1407f492e(uVar36);
    puVar17 = (uint *)0x0;
    puVar30 = auStack_1a8;
    if (lVar28 == 0) goto LAB_1442d499f;
    if (DAT_14cbadd90 == (uint *)0x0) {
      pRStack_150 = &RStack_a0;
      RStack_a0.Ptr = FUN_141030f22;
      pcStack_140 = FUN_14081d0ea;
      plStack_148 = (longlong *)&LAB_1459f2e4c;
      local_158 = &LAB_148c39de3;
      local_160 = (RTL_SRWLOCK *)&LAB_1457a9eb2;
      local_168 = (RTL_SRWLOCK *)&DAT_149e063b2;
      uStack_170 = 0;
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x10000004);
      local_180 = (uint *)CONCAT44(local_180._4_4_,0x10);
      local_188.Ptr._0_4_ = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    puVar17 = DAT_14cbadd90;
    puVar30 = auStack_1a8;
    if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < (int)DAT_14cbadd90[0xe]) ||
       (puVar17 = DAT_14cbadd90 + 0xc, puVar30 = auStack_1a8,
       *(uint **)(*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
                 (longlong)(int)DAT_14cbadd90[0xe] * 8) != DAT_14cbadd90 + 0xc)) goto LAB_1442d499f;
    plVar16 = *(longlong **)((longlong)param_1[0x7f].Ptr + 0x110);
    puVar17 = param_1[0x7f].Ptr;
    puVar30 = auStack_1a8;
    if (plVar16 == (longlong *)0x0) goto LAB_1442d499f;
    lVar26 = (**(code **)(*plVar16 + 8))(plVar16);
    puVar18 = (uint *)FUN_1465f1b62();
    puVar17 = puVar18;
    puVar30 = auStack_1a8;
    if (((puVar18 == (uint *)0x0) ||
        (puVar30 = auStack_1a8, *(int *)(lVar26 + 0x38) < (int)puVar18[0xe])) ||
       (puVar17 = puVar18 + 0xc, puVar30 = auStack_1a8,
       *(uint **)(*(longlong *)(lVar26 + 0x30) + (longlong)(int)puVar18[0xe] * 8) != puVar18 + 0xc))
    goto LAB_1442d499f;
    lVar26 = plVar16[2];
    if (lVar26 == 0) {
      uVar12 = FUN_141340f56();
      lVar26 = FUN_14477b664(uVar12);
      plVar16[2] = lVar26;
    }
    plVar21 = plVar16 + 1;
    if (plVar16[3] == 0) {
      if ((lVar26 != 0) && (*plVar21 != 0)) {
        plVar15 = *(longlong **)(lVar26 + 0xb8);
        if ((plVar15 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 == '\0')) {
          plVar16[3] = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar15 + 0x110))(plVar15);
          lVar26 = FUN_144aff482(uVar12,plVar21);
          plVar16[3] = lVar26;
          if (lVar26 != 0) goto LAB_1442d4d22;
        }
      }
      if (*(int *)&param_1[0x5c].Ptr == 0) goto switchD_1442d4a19_caseD_2;
    }
LAB_1442d4d22:
    pRStack_118 = param_1 + 0x41;
    pRVar35 = &RStack_a0;
    FUN_1448d5e3c(pRVar35);
    RVar29.Ptr = ((RTL_SRWLOCK *)((longlong)RStack_a0.Ptr + 0x4d0))->Ptr;
    pRStack_120 = (PSRWLOCK)((longlong)RVar29.Ptr + 0x168);
    AcquireSRWLockExclusive(pRStack_120);
    plVar15 = (longlong *)CONCAT44(uStack_94,uStack_98);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if (*(int *)&((RTL_SRWLOCK *)((longlong)RVar29.Ptr + 0x158))->Ptr == -1) goto LAB_1442d57e4;
    lVar26 = plVar16[2];
    if (lVar26 == 0) {
      uVar12 = FUN_141340f56();
      lVar26 = FUN_14477b664(uVar12);
      plVar16[2] = lVar26;
    }
    pRStack_128 = (RTL_SRWLOCK *)((longlong)RVar29.Ptr + 0x158);
    lVar22 = plVar16[3];
    if (lVar22 == 0) {
      if ((lVar26 != 0) && (*plVar21 != 0)) {
        plVar15 = *(longlong **)(lVar26 + 0xb8);
        if ((plVar15 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 == '\0')) {
          lVar22 = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar15 + 0x110))(plVar15);
          lVar22 = FUN_144aff482(uVar12,plVar21);
        }
        plVar16[3] = lVar22;
        goto LAB_1442d4e1e;
      }
      lVar26 = (longlong)*(int *)&param_1[0x5c].Ptr;
      if (lVar26 == 0) goto LAB_1442d57e4;
      plVar16 = param_1[0x5b].Ptr;
      lVar22 = 0;
LAB_1442d4e4d:
      pRStack_130 = param_1 + 0x5c;
      pRStack_138 = param_1 + 0x5b;
      plVar21 = plVar16 + lVar26;
      do {
        if (*plVar16 == lVar22) goto LAB_1442d57e4;
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar21);
      if (lVar22 != 0) goto LAB_1442d561c;
      lVar26 = FUN_14011c349();
      plVar21 = *(longlong **)(lVar28 + 0xc38);
      if (plVar21 != (longlong *)0x0) {
        if (*(int *)&pRStack_130->Ptr != 0) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar28);
          }
          puVar18 = (uint *)&lStack_f0;
          RStack_e8.Ptr = (PVOID)(lVar28 + 0xe18);
          RStack_a0.Ptr = *(PVOID *)(lVar26 + 0x48);
          lStack_f0 = lVar28;
          goto code_r0x0001442d4ecf;
        }
        goto LAB_1442d5712;
      }
    }
    else {
LAB_1442d4e1e:
      pRStack_138 = param_1 + 0x5b;
      pRStack_130 = param_1 + 0x5c;
      lVar26 = (longlong)*(int *)&param_1[0x5c].Ptr;
      if (lVar26 != 0) {
        plVar16 = param_1[0x5b].Ptr;
        goto LAB_1442d4e4d;
      }
      if (lVar22 == 0) goto LAB_1442d57e4;
LAB_1442d561c:
      pRStack_130 = param_1 + 0x5c;
      pRStack_138 = param_1 + 0x5b;
      lVar14 = FUN_14011c349();
      lVar26 = *(longlong *)(lVar28 + 0xc38);
      if (lVar26 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar28);
        }
        local_180 = (uint *)&lStack_e0;
        lStack_d8 = lVar28 + 0xe18;
        RStack_a0.Ptr = *(PVOID *)(lVar14 + 0x48);
        local_188.Ptr = pRVar35;
        lStack_e0 = lVar28;
        FUN_1488d8584(lVar26,1,lVar22,pRStack_128);
        *(undefined4 *)&param_1[0x5c].Ptr = 0;
        uVar9 = 0;
        iVar10 = 0;
        if (*(int *)((longlong)&param_1[0x5c].Ptr + 4) != 0) {
          FUN_1488d20d8(pRStack_138,0);
          iVar10 = *(int *)&param_1[0x5c].Ptr;
          uVar9 = *(uint *)((longlong)&param_1[0x5c].Ptr + 4);
        }
        *(uint *)&pRStack_130->Ptr = iVar10 + 1U;
        if (uVar9 < iVar10 + 1U) {
          FUN_141895c4e(pRStack_138,iVar10);
        }
        *(longlong *)((longlong)pRStack_138->Ptr + (longlong)iVar10 * 8) = lVar22;
        goto LAB_1442d5712;
      }
    }
LAB_1442d562d:
    ReleaseSRWLockExclusive(pRStack_120);
switchD_1442d4a19_caseD_2:
    FUN_1448d5e3c(&RStack_a0);
    plVar16 = ((RTL_SRWLOCK *)((longlong)RStack_a0.Ptr + 0x4d0))->Ptr;
    AcquireSRWLockExclusive((PSRWLOCK)(plVar16 + 0x2d));
    *(int *)(plVar16 + 0x2c) = (int)plVar16[0x2c] + 1;
    plVar21 = (longlong *)CONCAT44(uStack_94,uStack_98);
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar21 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    if ((int)plVar16[1] != 0) {
      iVar10 = *(int *)&pRVar34[0x18].Ptr;
      if ((-1 < (longlong)iVar10) && (iVar10 < (int)plVar16[1])) {
        lVar28 = (longlong)iVar10 * 0xb0 + *plVar16;
        plVar21 = (longlong *)(lVar28 + 0x48);
        iVar10 = *(int *)(lVar28 + 0x50);
        if (0 < iVar10) {
          lVar28 = 0;
          lVar26 = 0;
          do {
            iVar10 = *(int *)(*(longlong *)(*plVar21 + lVar28) + 0xd0);
            *(bool *)(*(longlong *)(*plVar21 + lVar28) + 1) =
                 iVar10 == *(int *)((longlong)param_1[0x7f].Ptr + 0xd0);
            *(bool *)*(undefined8 *)
                      (*(longlong *)(*plVar16 + 0x48 + (longlong)*(int *)&pRVar34[0x18].Ptr * 0xb0)
                      + lVar28) = iVar10 == *(int *)((longlong)param_1[0x7f].Ptr + 0xd0);
            lVar26 = lVar26 + 1;
            lVar22 = (longlong)*(int *)&pRVar34[0x18].Ptr * 0xb0 + *plVar16;
            plVar21 = (longlong *)(lVar22 + 0x48);
            iVar10 = *(int *)(lVar22 + 0x50);
            lVar28 = lVar28 + 0x10;
          } while (lVar26 < iVar10);
        }
        uStack_100 = 0;
        lVar28 = *plVar21;
        iStack_f8 = iVar10;
        if (iVar10 == 0) {
          uStack_f4 = 0;
        }
        else {
          FUN_145b2a9a0(&uStack_100,iVar10,0);
          FUN_1414c8b3b(uStack_100,lVar28,iVar10);
        }
        FUN_1442d712c(param_1,&uStack_100);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(plVar16 + 0x2d));
    pRVar35 = DAT_14caa8578;
    pRStack_108 = DAT_14caa8578;
    pRStack_110 = DAT_14caa8578;
    pRVar33 = param_1 + 0x2e;
    cVar6 = FUN_14021d296(pRVar33,&DAT_14cbd9498);
    RVar29.Ptr = pRVar35;
    if (cVar6 == '\0') {
      cVar6 = FUN_14021d296(pRVar33,&DAT_14cbd94a0);
      if (cVar6 == '\0') {
        cVar6 = FUN_14021d296(pRVar33,&DAT_14cbd94a8);
        if (cVar6 == '\0') {
          cVar6 = FUN_14021d296(pRVar33,&DAT_14cbd94b0);
          if (cVar6 != '\0') {
            pRStack_108 = param_1[0x7b].Ptr;
            RVar29.Ptr = pRStack_108;
            puVar32 = auStack_1a8;
          }
          goto LAB_1442d5462;
        }
        if (DAT_14caa8580 == (uint *)0x0) {
          FUN_140608a9e();
        }
        RStack_a0.Ptr = "StandIn.Vehicle";
        uStack_98 = 0xf;
      }
      else {
        if (DAT_14caa8580 == (uint *)0x0) {
          FUN_140608a9e();
        }
        RStack_a0.Ptr = "StandIn.Echo4";
        uStack_98 = 0xd;
      }
      puVar17 = DAT_14caa8580;
      uStack_94 = uStack_94 & 0xffffff00;
      uVar8 = FUN_14001a6c0(&RStack_a0,1);
      FUN_1400702d4(puVar17,&RStack_a0,uVar8,0);
      RVar29.Ptr = RStack_a0.Ptr;
      puVar32 = auStack_1a8;
      pRStack_108 = RStack_a0.Ptr;
    }
    else {
      iVar10 = *(int *)&pRVar34[0x18].Ptr;
      puVar32 = auStack_1a8;
      if ((-1 < (longlong)iVar10) && (puVar32 = auStack_1a8, iVar10 < *(int *)&pRVar34[0x17].Ptr)) {
        if ((longlong)*(int *)&param_1[0x78].Ptr != 0) {
          lVar28 = 0;
          do {
            puVar32 = auStack_1a8;
            if (*(longlong *)((longlong)param_1[0x77].Ptr + lVar28) ==
                *(longlong *)((longlong)pRVar34[0x16].Ptr + (longlong)iVar10 * 0xb0 + 0x70))
            goto LAB_1442d5462;
            lVar28 = lVar28 + 8;
          } while ((longlong)*(int *)&param_1[0x78].Ptr * 8 != lVar28);
        }
        if (DAT_14caa8580 == (uint *)0x0) {
          FUN_140608a9e();
        }
        puVar17 = DAT_14caa8580;
        RStack_a0.Ptr = "StandIn.PlayerCharacter";
        uStack_98 = 0x17;
        uStack_94 = uStack_94 & 0xffffff00;
        uVar8 = FUN_14001a6c0(&RStack_a0,1);
        FUN_1400702d4(puVar17,&RStack_a0,uVar8,0);
        pRStack_108 = RStack_a0.Ptr;
        puVar25 = DAT_14caa8580;
        RVar29.Ptr = RStack_a0.Ptr;
code_r0x0001442d521d:
        if (puVar25 == (uint *)0x0) {
          *(undefined8 *)(puVar31 + -8) = 0x1442d5227;
          FUN_140608a9e();
          puVar25 = DAT_14caa8580;
        }
        *(undefined8 *)(puVar31 + -8) = 0x1442d5248;
        FUN_1400702d4(puVar25,puVar31 + 0x108,DAT_14cbdd830,0);
        pRVar35 = *(RTL_SRWLOCK **)(puVar31 + 0x108);
        *(RTL_SRWLOCK **)(puVar31 + 0x98) = pRVar35;
        puVar32 = puVar31;
      }
    }
LAB_1442d5462:
    if (pRVar35 != (RTL_SRWLOCK *)0x0 && RVar29.Ptr != (RTL_SRWLOCK *)0x0) {
      *(undefined8 *)(puVar32 + -8) = 0x1442d5511;
      FUN_148ec90d0(param_1,puVar32 + 0xa0,puVar32 + 0x98);
    }
    *(undefined8 *)(puVar32 + -8) = 0x1442d5488;
    puVar13 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    pvVar23 = param_1[6].Ptr;
    *puVar13 = &PTR_FUN_14b9c5040;
    *(char **)(puVar32 + 0x108) = "FOakUIEvent_Customization_CosmeticApplied";
    *(undefined4 *)(puVar32 + 0x110) = 0x29;
    puVar32[0x114] = 0;
    *(undefined8 *)(puVar32 + -8) = 0x1442d54c0;
    uVar8 = FUN_14001a6c0(puVar32 + 0x108,1);
    *(undefined8 *)(puVar32 + -8) = 0x1442d54d1;
    FUN_14039176c(puVar13,pvVar23,uVar8,1);
    *puVar13 = &PTR_FUN_14b9c5040;
    *(undefined8 *)(puVar32 + -8) = 0x1442d54df;
    FUN_140391314(param_1,puVar13);
    *(undefined8 *)(puVar32 + -8) = 0x1442d54f4;
    puVar17 = (uint *)FUN_140de1078(param_1,&DAT_14cbdd858,0,0);
    puVar30 = puVar32;
LAB_1442d499f:
    if ((*(ulonglong *)(puVar30 + 0x1e0) ^ (ulonglong)puVar30) == DAT_14c707940) {
      return puVar17;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar30 + -8) = &UNK_1442d49cc;
    FUN_144d8e3a0();
  case 0x16:
    puVar31 = &stack0xfffffffffffffe50;
    pcVar27 = (char *)((ulonglong)puVar18 & 0xffffffffffffffa0);
    *pcVar27 = *pcVar27 + (char)pcVar27;
    pcVar27[-0x75] = pcVar27[-0x75] + 'L';
    goto code_r0x0001442d521d;
  case 0x17:
    pRStack_1b8 = RVar29.Ptr;
    puVar13 = (undefined8 *)auStack_430;
    puVar17 = (uint *)(DAT_14c707940 ^ (ulonglong)auStack_430);
    puStack_1c0 = puVar17;
    goto LAB_1442d5ffe;
  case 0x18:
    goto switchD_148e8159f_caseD_18;
  case 0x19:
    *(byte *)puVar18 = (byte)*puVar18 + cVar6;
                    /* WARNING: Read-only address (ram,0x00014b9c7844) is written */
    FUN_1488cb966(&switchD_148e8159f::switchdataD_14b9c744c);
                    /* WARNING: Read-only address (ram,0x00014b9c7844) is written */
    pRVar35 = &RStack_e8;
    FUN_148e94a90(&puStackX_8,pRVar35);
    plVar21 = (longlong *)(unaff_R13 + 0x1e0);
    puVar18 = puStackX_8;
    goto switchD_148e8159f_caseD_18;
  case 0x1a:
                    /* WARNING: Read-only address (ram,0x00014b9c7844) is written */
    cVar6 = FUN_14021d296((ulonglong)param_2 & 0xffffffff);
    if (cVar6 == '\0') {
      cVar6 = FUN_14021d296(param_2,&DAT_14cbd94a8);
      if (cVar6 != '\0') {
        if (DAT_14caa8580 == (uint *)0x0) {
          FUN_140608a9e();
        }
        goto LAB_1442d62c3;
      }
    }
    else {
      if (DAT_14caa8580 == (uint *)0x0) {
        FUN_140608a9e();
      }
LAB_1442d62c3:
      puVar17 = DAT_14caa8580;
      uVar8 = FUN_14001a6c0(&RStack_e8,1);
      FUN_1400702d4(puVar17,&RStack_e8,uVar8,0);
      FUN_148ec917e(RVar29.Ptr,&RStack_e8,param_1 + 0xf);
    }
    goto switchD_1442d5bc2_caseD_2;
  case 0x1b:
    puVar13 = unaff_RBP + 1;
    goto code_r0x0001442d5efe;
  }
  FUN_1446ddda2(plVar21,pcVar27,0);
  FUN_1410d1eba(&stack0xffffffffffffffd8,plVar21);
  uVar12 = FUN_1447a1f4a(&stack0xffffffffffffffd8);
  FUN_144a787a6(pRVar35,uVar12);
  if (unaff_RDI != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x10))();
  }
  if (unaff_retaddr != 0) {
    FUN_1400020a8();
  }
  cVar6 = *(char *)((longlong)&param_2[0x10].Ptr + 4);
  *(char *)&param_1[0x4f].Ptr = cVar6;
  *(undefined1 *)((longlong)&param_1[0x4f].Ptr + 1) =
       *(undefined1 *)((longlong)&param_2[0x10].Ptr + 5);
  if (cVar6 == '\x01') {
    cVar6 = FUN_144a7c5f6(param_2 + 0x19);
    if (cVar6 == '\0') {
      puVar13 = (undefined8 *)FUN_1447a1f4a(param_2 + 0x19);
      unaff_R12 = (RTL_SRWLOCK *)0x0;
      uVar9 = *(uint *)(puVar13 + 1);
      pvVar5 = (void *)*puVar13;
      unaff_R14 = CONCAT44((int)(unaff_R14 >> 0x20),uVar9);
      if ((longlong)(int)uVar9 == 0) {
        unaff_R14 = (ulonglong)uVar9;
      }
      else {
        FUN_1446dd670(&stack0xffffffffffffffe8,uVar9,0);
        memcpy((void *)0x0,pvVar5,(longlong)(int)uVar9 * 2);
      }
    }
    else {
      FUN_1400b22c2(&stack0xffffffffffffffe8,"Designer: Set my location name");
    }
    iVar39 = (int)unaff_R14;
    iVar10 = iVar39 + -1;
    if (iVar39 == 0) {
      iVar10 = 0;
    }
    FUN_1402980a2(param_1 + 0x3f,unaff_R12,iVar10);
    if (unaff_R12 != (RTL_SRWLOCK *)0x0) {
      FUN_1400020a8();
    }
    plVar15 = (longlong *)FUN_140e82300();
    plVar16 = (longlong *)*plVar15;
    plVar21 = param_1[0x48].Ptr;
    if (plVar21 != plVar16) {
      param_1[0x48].Ptr = plVar16;
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      if (plVar21 != (longlong *)0x0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    *(int *)&param_1[0x49].Ptr = (int)plVar15[1];
    FUN_1400b22c2(RVar29.Ptr,&DAT_149e02088);
    if (param_1 + 0x5a == RVar29.Ptr) {
      if (unaff_R12 != (RTL_SRWLOCK *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5a].Ptr != (PVOID)0x0) {
        FUN_1400020a8();
      }
      param_1[0x5a].Ptr = unaff_R12;
      unaff_R12 = (RTL_SRWLOCK *)0x0;
      *(int *)&param_1[0x5b].Ptr = iVar39;
      *(int *)((longlong)&param_1[0x5b].Ptr + 4) = (int)(unaff_R14 >> 0x20);
    }
    *(undefined1 *)((longlong)&param_1[0x4f].Ptr + 2) =
         *(undefined1 *)((longlong)&param_2[0x10].Ptr + 6);
  }
  uVar9 = (uint)unaff_R14;
  if ((*(char *)&param_2[0x13].Ptr == '\x01') && ((longlong)*(int *)&param_2[0x15].Ptr != 0)) {
    pvVar23 = param_2[0x14].Ptr;
    lVar28 = (longlong)*(int *)&param_2[0x15].Ptr * 0xd8;
    do {
      FUN_145a050a6(param_1 + 0x50,pvVar23);
      pvVar23 = (PVOID)((longlong)pvVar23 + 0xd8);
      lVar28 = lVar28 + -0xd8;
    } while (lVar28 != 0);
  }
  cVar6 = *(char *)&param_2[0x1d].Ptr;
  *(char *)&param_1[0x59].Ptr = cVar6;
  if ((cVar6 == '\x01') && (iVar10 = *(int *)&param_2[0x1f].Ptr, (longlong)iVar10 != 0)) {
    local_168 = param_2[0x1e].Ptr;
    local_160 = param_1 + 0x5e;
    lVar28 = 0;
    do {
      lVar26 = *(longlong *)((longlong)&local_168->Ptr + lVar28);
      if (lVar26 != 0) {
        lVar26 = lVar26 + 0x18;
        lVar22 = FUN_14090ae24(lVar26);
        if (lVar22 != 0) {
          unaff_R12 = (RTL_SRWLOCK *)0x0;
          unaff_R14 = 0;
          FUN_140390f7a(lVar26,&stack0xffffffffffffffe8);
          iVar39 = *(int *)&param_1[0x5f].Ptr;
          *(uint *)&param_1[0x5f].Ptr = iVar39 + 1U;
          if (*(uint *)((longlong)&param_1[0x5f].Ptr + 4) < iVar39 + 1U) {
            FUN_1447a1bd6(local_160,iVar39);
          }
          pvVar23 = local_160->Ptr;
          lVar26 = (longlong)iVar39 * 0x10;
          *(undefined8 *)((longlong)pvVar23 + lVar26) = 0;
          *(undefined4 *)((longlong)pvVar23 + lVar26 + 8) = 0;
          *(undefined4 *)((longlong)pvVar23 + lVar26 + 0xc) = 0;
                    /* WARNING: Read-only address (ram,0x00014b9c7844) is written */
        }
      }
      uVar9 = (uint)unaff_R14;
      lVar28 = lVar28 + 8;
    } while ((longlong)iVar10 * 8 != lVar28);
  }
  cVar6 = *(char *)&param_2[0xb].Ptr;
  *(char *)&param_1[0x4a].Ptr = cVar6;
  if (cVar6 == '\x01') {
    uVar40 = *(uint *)&param_2[0xf].Ptr;
    if ((int)uVar40 < 2) {
      FUN_1400b22c2(&stack0xffffffffffffffe8,"No Player Name Set");
      uVar40 = uVar9;
    }
    else {
      unaff_R12 = (RTL_SRWLOCK *)0x0;
      pvVar5 = param_2[0xe].Ptr;
      FUN_1446dd670(&stack0xffffffffffffffe8,(ulonglong)uVar40,0);
      memcpy((void *)0x0,pvVar5,(ulonglong)uVar40 * 2);
    }
    iVar10 = uVar40 - 1;
    if (uVar40 == 0) {
      iVar10 = 0;
    }
    FUN_1402980a2(param_1 + 0x3f,unaff_R12,iVar10);
    if (unaff_R12 != (RTL_SRWLOCK *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a787a6(param_1 + 0x4b,param_2 + 0xc);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbdd478) && (FUN_144b3d300(&DAT_14cbdd478), DAT_14cbdd478 == -1)) {
      plVar16 = (longlong *)FUN_140e82300();
      DAT_14cbdd468 = (longlong *)*plVar16;
      if (DAT_14cbdd468 != (longlong *)0x0) {
        (**(code **)(*DAT_14cbdd468 + 8))();
      }
      _DAT_14cbdd470 = (undefined4)plVar16[1];
      atexit((_func_5014 *)&LAB_1442d1e4b);
      _Init_thread_footer(&DAT_14cbdd478);
    }
    uVar9 = 0;
    puStackX_8 = (uint *)0x0;
    FUN_1446ddda2(&stack0xffffffffffffffe8,"UIBigMap_CharacterLevel",0);
    FUN_140ac6c96(&stack0xffffffffffffffe8,&DAT_14cbdd468);
                    /* WARNING: Read-only address (ram,0x00014b9c7844) is written */
    uStack_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_1413a454c(&plStack_148,*(undefined4 *)&param_2[0x10].Ptr,0);
    FUN_14023409e(&local_158,&DAT_14cbdd468,1);
    unaff_R12 = (RTL_SRWLOCK *)&DAT_00000004;
    FUN_14023423e(&stack0xfffffffffffffff8,&plStack_148);
    local_38 = (uint *)&stack0xffffffffffffffe8;
    FUN_14010d304(&stack0xffffffffffffffd8);
    puStack_48 = local_158;
    local_40 = pRStack_150;
    if (pRStack_150 != (RTL_SRWLOCK *)0x0) {
      LOCK();
      *(int *)&pRStack_150[1].Ptr = *(int *)&pRStack_150[1].Ptr + 1;
      UNLOCK();
    }
    FUN_14010c016(aplStack_58,&puStack_48,&stack0xffffffffffffffd8);
    FUN_14007f2db(unaff_RDI,unaff_ESI);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong *)(unaff_R15 & 0xffffffff00000000) != (longlong *)0x0) {
      (**(code **)(*(longlong *)(unaff_R15 & 0xffffffff00000000) + 0x10))();
    }
    if (pRStack_150 != (RTL_SRWLOCK *)0x0) {
      LOCK();
      pRVar33 = pRStack_150 + 1;
      *(int *)&pRVar33->Ptr = *(int *)&pRVar33->Ptr + -1;
      UNLOCK();
      if (*(int *)&pRVar33->Ptr == 0) {
        (**(code **)pRStack_150->Ptr)(pRStack_150);
        LOCK();
        piVar2 = (int *)((longlong)&pRStack_150[1].Ptr + 4);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)((longlong)pRStack_150->Ptr + 0x10))(pRStack_150);
        }
      }
    }
    if (plStack_148 != (longlong *)0x0) {
      (**(code **)(*plStack_148 + 0x10))();
    }
    uVar12 = FUN_1447a1f4a(aplStack_58);
    FUN_144a787a6(param_1 + 0x4d,uVar12);
    if (aplStack_58[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_58[0] + 0x10))();
    }
    plVar16 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar21 = plStack_70 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    plVar15 = (longlong *)FUN_140e82300();
    plVar16 = (longlong *)*plVar15;
    plVar21 = param_1[0x48].Ptr;
    if (plVar21 != plVar16) {
      param_1[0x48].Ptr = plVar16;
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      if (plVar21 != (longlong *)0x0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    *(int *)&param_1[0x49].Ptr = (int)plVar15[1];
  }
  if (0 < (longlong)*(int *)&param_2[0x23].Ptr) {
    pvVar23 = param_2[0x22].Ptr;
    local_168 = param_1 + 0x60;
    lVar28 = (longlong)*(int *)&param_2[0x23].Ptr << 4;
    do {
      puVar13 = (undefined8 *)FUN_1447a1f4a(pvVar23);
      iVar10 = *(int *)&param_1[0x61].Ptr;
      *(uint *)&param_1[0x61].Ptr = iVar10 + 1U;
      if (*(uint *)((longlong)&param_1[0x61].Ptr + 4) < iVar10 + 1U) {
        FUN_1447a1bd6(local_168,iVar10);
      }
      pvVar24 = local_168->Ptr;
      lVar26 = (longlong)iVar10 * 0x10;
      puVar3 = (undefined8 *)((longlong)pvVar24 + lVar26);
      *(undefined8 *)((longlong)pvVar24 + lVar26) = 0;
      iVar10 = *(int *)(puVar13 + 1);
      pvVar5 = (void *)*puVar13;
      *(int *)((longlong)pvVar24 + lVar26 + 8) = iVar10;
      if ((longlong)iVar10 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar10,0);
        memcpy((void *)*puVar3,pvVar5,(longlong)iVar10 * 2);
      }
      pvVar23 = (PVOID)((longlong)pvVar23 + 0x10);
      lVar28 = lVar28 + -0x10;
    } while (lVar28 != 0);
  }
  cVar6 = *(char *)&param_2[0x29].Ptr;
  *(char *)&param_1[0x62].Ptr = cVar6;
  if (cVar6 == '\x01') {
    iVar10 = *(int *)((longlong)&param_2[0x29].Ptr + 4);
    FUN_140212f8e(&local_38);
    puVar17 = local_38;
    uStack_170 = uStack_170 & 0xffffffff00000000;
    local_178 = (undefined8 *)((ulonglong)local_178 & 0xffffffff00000000);
    local_180 = (uint *)((ulonglong)local_180 & 0xffffffff00000000);
    local_188.Ptr = local_188.Ptr & 0xffffffff00000000;
    FUN_14021300e(&stack0xffffffffffffffe8,0x7b2,1,1);
    lVar28 = SUB168(SEXT816((longlong)puVar17 - (longlong)unaff_R12) * SEXT816(0x29406b2a1a85bd43),8
                   ) - ((longlong)puVar17 - (longlong)unaff_R12);
    auVar38._0_8_ =
         (double)(((lVar28 >> 0x17) - (lVar28 >> 0x3f)) + (longlong)iVar10) * 10000000.0 + 0.5;
    auVar38._8_8_ = 0;
    roundpd(auVar38,auVar38,1);
    FUN_14681ea84(&stack0xffffffffffffffd8,&stack0xffffffffffffffe8,L"%h:%m");
    FUN_14496493a(&stack0xffffffffffffffe8,0,1,1);
    iVar10 = uVar9 - 1;
    if (uVar9 == 0) {
      iVar10 = 0;
    }
    FUN_1402980a2(param_1 + 99,unaff_R12,iVar10);
    if (unaff_R12 != (RTL_SRWLOCK *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar17 = param_1[0x10].Ptr;
  if (puVar17 != (uint *)0x0) {
    *(ushort *)puVar17 = (ushort)*puVar17 | (ushort)(1L << (*(byte *)&param_1[0xf].Ptr & 0x3f));
  }
  if ((uStackX_10 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return puVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
switchD_148e8159f_caseD_18:
  *(uint **)(unaff_R13 + 0x1e0) = puVar18;
  FUN_148ec95d4(RVar29.Ptr,pRVar35);
  FUN_148ec967a(RVar29.Ptr,plVar21);
  FUN_140368b56(pRVar35);
  ReleaseSRWLockShared(param_2);
switchD_1442d5bc2_caseD_2:
  puVar13 = (undefined8 *)auStack_1a8;
  puVar32 = auStack_1a8;
  *(int *)(unaff_R13 + 0x170) = (int)unaff_RBP;
  if (0 < *(int *)(unaff_R13 + 0xe0)) {
    puVar18 = (uint *)((ulonglong)unaff_RBP & 0xffffffff);
    puVar25 = (uint *)0x0;
    do {
      plVar16 = (longlong *)((longlong)puVar25 * 9);
      puVar13 = (undefined8 *)puVar32;
code_r0x0001442d5efe:
      *(bool *)(*(longlong *)(unaff_R13 + 0xd8) + (longlong)plVar16 * 0x20) = puVar25 == puVar18;
      puVar25 = (uint *)((longlong)puVar25 + 1);
      puVar32 = (undefined1 *)puVar13;
    } while ((longlong)puVar25 < (longlong)*(int *)(unaff_R13 + 0xe0));
  }
  *(undefined8 *)((longlong)puVar13 + -8) = 0x1442d5f35;
  FUN_140de1078(RVar29.Ptr,&DAT_14cbdd888,0,0);
  puVar17 = *(uint **)(unaff_R13 + 0x80);
  if (puVar17 != (uint *)0x0) {
    *(ushort *)puVar17 = (ushort)*puVar17 | (ushort)(1L << (*(byte *)(unaff_R13 + 0x78) & 0x3f));
  }
LAB_1442d5ffe:
  if ((*(ulonglong *)((longlong)puVar13 + 0x270) ^ (ulonglong)puVar13) == DAT_14c707940) {
    return puVar17;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar13 + -8) = &UNK_1442d602b;
  FUN_144d8e3a0();
}



// FUNCTION 148e817d8 FUN_148e817d8 body=771 status=ok
// SIG undefined FUN_148e817d8(void)

undefined8 * FUN_148e817d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = param_2[5];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = param_2[10];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 100) = uVar5;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  pvVar2 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = param_2[0xf];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar4 = *(undefined4 *)(param_2 + 0x11);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x13);
  pvVar2 = (void *)param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x14] = param_2[0x14];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar4 = *(undefined4 *)(param_2 + 0x16);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
  *(undefined4 *)(param_1 + 0x16) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar5;
  param_1[0x17] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  pvVar2 = (void *)param_2[0x17];
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x17,iVar1,0);
    memcpy((void *)param_1[0x17],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x19] = param_2[0x19];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar4 = *(undefined4 *)(param_2 + 0x1b);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
  *(undefined4 *)(param_1 + 0x1b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar5;
  param_1[0x1c] = 0;
  iVar1 = *(int *)(param_2 + 0x1d);
  pvVar2 = (void *)param_2[0x1c];
  *(int *)(param_1 + 0x1d) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1c,iVar1,0);
    memcpy((void *)param_1[0x1c],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x1e] = param_2[0x1e];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xfc);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar5;
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x22);
  pvVar2 = (void *)param_2[0x21];
  *(int *)(param_1 + 0x22) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x21,iVar1,0);
    memcpy((void *)param_1[0x21],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148e81adc FUN_148e81adc body=317 status=ok
// SIG undefined FUN_148e81adc(void)

undefined8
FUN_148e81adc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  longlong *local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = 0;
  local_48 = 0;
  local_68 = 0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  FUN_14009d848(&local_68,param_4);
  FUN_144a450dc(&local_50,&local_68);
  FUN_1449db362(&local_68);
  FUN_140d01986();
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_70 = iVar1;
  if (iVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_140a1e386(&local_78,iVar1,0);
    FUN_140a1e307(local_78,uVar2,iVar1);
  }
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = &local_68;
  FUN_140421d62(param_1,param_2,&local_78,&local_50);
  FUN_140861e20(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e81c1a FUN_148e81c1a body=219 status=ok
// SIG undefined FUN_148e81c1a(void)

void FUN_148e81c1a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    if (*param_2 == 0) goto LAB_148e81cd8;
LAB_148e81cc3:
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
  }
  else {
    FUN_140648376(param_3,0);
    local_38 = 0;
    local_30 = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_140a5cfd6(*param_1 + 0x1e0,*param_1,&local_38);
    FUN_1449db362(&local_28);
    if (*param_2 == 0) goto LAB_148e81cd8;
    uVar1 = *(uint *)(*param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
    if (*param_2 != 0) goto LAB_148e81cc3;
  }
  *param_2 = 0;
LAB_148e81cd8:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e81cf6 FUN_148e81cf6 body=1279 status=ok
// SIG undefined FUN_148e81cf6(void)

void FUN_148e81cf6(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  int local_158;
  undefined1 local_150;
  undefined1 local_14f;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  ulonglong local_60;
  
  uVar4 = DAT_14c96b23b;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((int)param_2[1] == 0) {
    iVar6 = *(int *)(param_1 + 0x278);
    if ((longlong)iVar6 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x270);
      lVar11 = 0;
      do {
        local_150 = uVar4;
        local_14f = 1;
        local_148 = 0;
        uStack_140 = 0;
        FUN_14020e622(*(undefined8 *)(lVar9 + 0x30 + lVar11),&local_150);
        lVar11 = lVar11 + 0x40;
      } while ((longlong)iVar6 * 0x40 != lVar11);
    }
  }
  else {
    memset(&local_150,0,0xf0);
    FUN_145bd41de(&local_150);
    if (0 < (int)param_2[1]) {
      lVar9 = 0;
      do {
        lVar12 = *param_2;
        lVar11 = lVar12 + lVar9 * 0x30;
        lVar3 = *(longlong *)(param_1 + 0x270);
        lVar8 = lVar9 * 0x40;
        local_168 = lVar3 + lVar8;
        FUN_145bd4200(local_168,lVar11);
        lVar12 = lVar12 + lVar9 * 0x30;
        FUN_145bd4274(*(undefined8 *)(lVar3 + 0x30 + lVar8),lVar12 + 0x10);
        FUN_145bd4472(*(undefined8 *)(lVar3 + 0x30 + lVar8),&local_150);
        FUN_1400b22c2(&local_160,"shift");
        iVar6 = *(int *)(lVar12 + 0x28);
        if (iVar6 == local_158) {
          bVar13 = true;
          if (1 < iVar6) {
            lVar12 = 0;
            while( true ) {
              uVar1 = *(ushort *)(*(longlong *)(lVar11 + 0x20) + lVar12);
              uVar5 = (uint)uVar1;
              uVar2 = *(ushort *)(local_160 + lVar12);
              uVar10 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148e81e84;
                }
                iVar6 = uVar5 - uVar10;
                goto LAB_148e82021;
              }
              if (uVar1 == 0) break;
LAB_148e81e84:
              lVar12 = lVar12 + 2;
            }
            iVar6 = 0;
LAB_148e82021:
            bVar13 = iVar6 == 0;
          }
        }
        else {
          bVar13 = local_158 + iVar6 == 1;
        }
        if (local_160 != 0) {
          FUN_1400020a8();
        }
        puVar7 = local_128;
        if (bVar13) {
LAB_148e81ed9:
          FUN_145bd42f6(*(undefined8 *)(local_168 + 0x30),puVar7);
        }
        else {
          FUN_1400b22c2(&local_160,"steam");
          iVar6 = *(int *)(lVar11 + 0x28);
          if (iVar6 == local_158) {
            bVar13 = true;
            if (1 < iVar6) {
              lVar12 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(lVar11 + 0x20) + lVar12);
                uVar5 = (uint)uVar1;
                uVar2 = *(ushort *)(local_160 + lVar12);
                uVar10 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148e81f45;
                  }
                  iVar6 = uVar5 - uVar10;
                  goto LAB_148e820d4;
                }
                if (uVar1 == 0) break;
LAB_148e81f45:
                lVar12 = lVar12 + 2;
              }
              iVar6 = 0;
LAB_148e820d4:
              bVar13 = iVar6 == 0;
            }
          }
          else {
            bVar13 = local_158 + iVar6 == 1;
          }
          if (local_160 != 0) {
            FUN_1400020a8();
          }
          puVar7 = local_100;
          if (bVar13) goto LAB_148e81ed9;
          FUN_1400b22c2(&local_160,&DAT_14b501638);
          iVar6 = *(int *)(lVar11 + 0x28);
          if (iVar6 == local_158) {
            bVar13 = true;
            if (1 < iVar6) {
              lVar12 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(lVar11 + 0x20) + lVar12);
                uVar5 = (uint)uVar1;
                uVar2 = *(ushort *)(local_160 + lVar12);
                uVar10 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148e81feb;
                  }
                  iVar6 = uVar5 - uVar10;
                  goto LAB_148e82180;
                }
                if (uVar1 == 0) break;
LAB_148e81feb:
                lVar12 = lVar12 + 2;
              }
              iVar6 = 0;
LAB_148e82180:
              bVar13 = iVar6 == 0;
            }
          }
          else {
            bVar13 = local_158 + iVar6 == 1;
          }
          if (local_160 != 0) {
            FUN_1400020a8();
          }
          puVar7 = local_d8;
          if (bVar13) goto LAB_148e81ed9;
          FUN_1400b22c2(&local_160,&DAT_14b50162e);
          iVar6 = *(int *)(lVar11 + 0x28);
          if (iVar6 == local_158) {
            bVar13 = true;
            if (1 < iVar6) {
              lVar12 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(lVar11 + 0x20) + lVar12);
                uVar5 = (uint)uVar1;
                uVar2 = *(ushort *)(local_160 + lVar12);
                uVar10 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148e8209e;
                  }
                  iVar6 = uVar5 - uVar10;
                  goto LAB_148e821bb;
                }
                if (uVar1 == 0) break;
LAB_148e8209e:
                lVar12 = lVar12 + 2;
              }
              iVar6 = 0;
LAB_148e821bb:
              bVar13 = iVar6 == 0;
            }
          }
          else {
            bVar13 = local_158 + iVar6 == 1;
          }
          if (local_160 != 0) {
            FUN_1400020a8();
          }
          puVar7 = local_b0;
          if (bVar13) goto LAB_148e81ed9;
          FUN_1400b22c2(&local_160,"xboxlive");
          iVar6 = *(int *)(lVar11 + 0x28);
          if (iVar6 == local_158) {
            bVar13 = true;
            if (1 < iVar6) {
              lVar12 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(lVar11 + 0x20) + lVar12);
                uVar5 = (uint)uVar1;
                uVar2 = *(ushort *)(local_160 + lVar12);
                uVar10 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148e8214d;
                  }
                  iVar6 = uVar5 - uVar10;
                  goto LAB_148e821c8;
                }
                if (uVar1 == 0) break;
LAB_148e8214d:
                lVar12 = lVar12 + 2;
              }
              iVar6 = 0;
LAB_148e821c8:
              bVar13 = iVar6 == 0;
            }
          }
          else {
            bVar13 = local_158 + iVar6 == 1;
          }
          if (local_160 != 0) {
            FUN_1400020a8();
          }
          puVar7 = local_88;
          if (bVar13) goto LAB_148e81ed9;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_2[1]);
    }
    FUN_145b06482(&local_150);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e821f6 FUN_148e821f6 body=175 status=ok
// SIG undefined FUN_148e821f6(void)

void FUN_148e821f6(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x278);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x270);
    lVar6 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar6);
      if (puVar3 != (undefined8 *)0x0) {
        cVar4 = (**(code **)*puVar3)(puVar3,*param_2);
        if (cVar4 != '\0') {
          puVar5 = &DAT_14c96b23b;
          if (param_3 == 1) {
            puVar5 = &DAT_14c96b238;
          }
          local_48 = *puVar5;
          local_47 = 1;
          local_40 = 0;
          uStack_38 = 0;
          FUN_14020e622(*(undefined8 *)(lVar2 + 0x30 + lVar6));
          break;
        }
      }
      lVar6 = lVar6 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e822a6 FUN_148e822a6 body=157 status=ok
// SIG undefined FUN_148e822a6(void)

void FUN_148e822a6(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  
  FUN_148e82344();
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x928) = 0;
    *(undefined1 *)(lVar2 + 0xc0) = 0;
    *(undefined1 *)(lVar2 + 0x1c0) = 0;
    plVar5 = (longlong *)FUN_1408cbae2(param_1);
    lVar3 = *plVar5;
    SRWLock = (PSRWLOCK)(lVar3 + 0xb0);
    AcquireSRWLockShared(SRWLock);
    iVar1 = *(int *)(lVar3 + 8);
    ReleaseSRWLockShared(SRWLock);
    *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffdffff | (uint)(iVar1 == 2) << 0x11;
    puVar4 = *(ushort **)(lVar2 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148e82344 FUN_148e82344 body=574 status=ok
// SIG undefined FUN_148e82344(void)

void FUN_148e82344(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  code *local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14588cd9e();
  lVar4 = param_1[0x58];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = param_1[0x57];
    lVar6 = 0;
    do {
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar6) != 0) {
        puVar5 = *(undefined2 **)(lVar1 + lVar6);
      }
      FUN_140002266(&local_58,L"UI.State.%s",puVar5);
      iVar2 = local_50 + -1;
      if (local_50 == 0) {
        iVar2 = 0;
      }
      FUN_1446f82e2(local_70,iVar2,local_58,1);
      FUN_1447683ea(&local_68,local_70,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      *puVar3 = &PTR_FUN_14b9c13e0;
      FUN_1446ddc76(&local_58,"AddState",1);
      FUN_14039176c(puVar3,param_1[6],local_58,1);
      *puVar3 = &PTR_FUN_14b9c13e0;
      puVar3[7] = local_68;
      *(undefined1 *)(puVar3 + 8) = 0;
      FUN_140391314(param_1,puVar3);
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar4 * 0x10 != lVar6);
  }
  lVar4 = (**(code **)(*param_1 + 0x198))(param_1);
  if (lVar4 != 0) {
    FUN_1446ddc76(&local_58,"equip_slot_dropdown",1);
    *(longlong *)(lVar4 + 0xa18) = local_58;
    *(undefined4 *)(lVar4 + 0xacc) = 0;
    *(undefined4 *)(lVar4 + 0xac4) = 0;
    *(undefined1 *)(lVar4 + 0x928) = 0;
    *(undefined1 *)(lVar4 + 0xc0) = 0;
    *(undefined1 *)(lVar4 + 0x1c0) = 0;
    *(undefined4 *)(lVar4 + 0x328) = 0xffffffff;
  }
  *(undefined2 *)(param_1 + 0x6b) = 0;
  lVar4 = (**(code **)(*param_1 + 400))(param_1);
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x330) = *(byte *)(lVar4 + 0x330) | 0x20;
    *(undefined4 *)(lVar4 + 0xac) = 0;
  }
  lVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_1400d6ce6(lVar4);
    if (lVar4 != 0) {
      local_68 = FUN_148e85476;
      local_60 = 0;
      FUN_148e99b60(&local_58,param_1);
      FUN_1448b6402(lVar4 + 0x160,&local_68,&local_58);
      FUN_1449db362(&local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e82584 FUN_148e82584 body=51 status=ok
// SIG undefined FUN_148e82584(void)

undefined4 FUN_148e82584(void)

{
  PSRWLOCK SRWLock;
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_1408cbae2();
  lVar2 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  uVar1 = *(undefined4 *)(lVar2 + 8);
  ReleaseSRWLockShared(SRWLock);
  return uVar1;
}



// FUNCTION 148e825b8 FUN_148e825b8 body=26 status=ok
// SIG undefined FUN_148e825b8(void)

void FUN_148e825b8(undefined8 param_1)

{
  FUN_148e825d2();
  FUN_148e82806(param_1);
  return;
}



// FUNCTION 148e825d2 FUN_148e825d2 body=562 status=ok
// SIG undefined FUN_148e825d2(void)

void FUN_148e825d2(longlong *param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  ushort *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined1 *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_1408cbae2();
  lVar6 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar6 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar6 + 0x60) == -1) {
    iVar1 = *(int *)(lVar6 + 0x68);
    ReleaseSRWLockShared(SRWLock);
    if (iVar1 == 0) goto LAB_148e82636;
  }
  else {
    ReleaseSRWLockShared(SRWLock);
  }
  FUN_140de1078(param_1,&DAT_14cbdcba8,0,0);
LAB_148e82636:
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar6 = param_1[6];
  *puVar4 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(local_78,"ClearItem",1);
  FUN_14039176c(puVar4,lVar6,local_78[0],1);
  *puVar4 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar4 + 7) = 1;
  FUN_140391314(param_1,puVar4);
  plVar3 = (longlong *)FUN_1408cbae2(param_1);
  lVar6 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0xb0));
  *(int *)(lVar6 + 0xa8) = *(int *)(lVar6 + 0xa8) + 1;
  FUN_146234ee6(lVar6);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0xb0));
  FUN_140de1078(param_1,&DAT_14cbdcba8,0,0);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
  if (plVar3 != (longlong *)0x0) {
    if ((longlong)(int)plVar3[0x81] != 0) {
      lVar7 = (longlong)(int)plVar3[0x81] * 0x268;
      lVar6 = plVar3[0x80] + 0x148;
      do {
        FUN_14020fad6(lVar6,&DAT_149dfb77a);
        lVar6 = lVar6 + 0x268;
        lVar7 = lVar7 + -0x268;
      } while (lVar7 != 0);
    }
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14b9c7360;
    local_50 = &LAB_1442da714;
    local_78[0] = &LAB_148e9a540;
    FUN_1462350d0(plVar3,local_78);
    if (local_78[0] != (undefined1 *)0x0) {
      pppuVar5 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar5 = &local_58;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    (**(code **)(*plVar3 + 0xf8))(plVar3,0xffffffff);
    (**(code **)(*plVar3 + 0x88))(plVar3,0xffffffff);
    *(byte *)(plVar3 + 0x11f) = *(byte *)(plVar3 + 0x11f) & 0x7f;
    puVar2 = (ushort *)plVar3[0x10];
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(plVar3 + 0xf) & 0x3f));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e82806 FUN_148e82806 body=433 status=ok
// SIG undefined FUN_148e82806(void)

void FUN_148e82806(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (**(code **)(*param_1 + 0xc0))();
  if (lVar4 != 0) {
    lVar4 = FUN_1400d6ce6(lVar4);
    if (lVar4 != 0) {
      FUN_140457ffc(lVar4 + 0x160,param_1);
    }
  }
  lVar4 = param_1[0x5a];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = param_1[0x59];
    lVar6 = 0;
    do {
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar6) != 0) {
        puVar7 = *(undefined2 **)(lVar1 + lVar6);
      }
      FUN_140002266(&local_68,L"UI.State.%s",puVar7);
      iVar3 = local_60 + -1;
      if (local_60 == 0) {
        iVar3 = 0;
      }
      FUN_1446f82e2(local_58,iVar3,local_68,1);
      FUN_1447683ea(&local_50,local_58,1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar2 = param_1[6];
      *puVar5 = &PTR_FUN_14b9c1410;
      FUN_1446ddc76(&local_68,"RemoveState",1);
      FUN_14039176c(puVar5,lVar2,local_68,1);
      *puVar5 = &PTR_FUN_14b9c1410;
      puVar5[7] = local_50;
      FUN_140391314(param_1,puVar5);
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar4 * 0x10 != lVar6);
  }
  if ((*(byte *)(param_1 + 0x5b) & 2) != 0) {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  (**(code **)(*param_1 + 0x220))(param_1);
  lVar4 = (**(code **)(*param_1 + 400))(param_1);
  if (lVar4 != 0) {
    FUN_144b085dc(lVar4 + 0x78);
  }
  FUN_1459249be(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e829b8 FUN_148e829b8 body=264 status=ok
// SIG undefined FUN_148e829b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_148e829b8(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar1 = (**(code **)(*param_1 + 0x198))();
  if (lVar1 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbdd098) && (FUN_144b3d300(&DAT_14cbdd098), DAT_14cbdd098 == -1)) {
      _DAT_14cbdd070 = 0;
      uRam000000014cbdd078 = 0;
      _DAT_14cbdd080 = 0;
      DAT_14cbdd088 = 0;
      uRam000000014cbdd090 = 0;
      FUN_1446ddda2(&DAT_14cbdd070,"Character",0);
      atexit((_func_5014 *)&LAB_1442c9c60);
      _Init_thread_footer(&DAT_14cbdd098);
    }
    puVar2 = (undefined8 *)FUN_148e8612a(param_1);
    puVar2 = (undefined8 *)*puVar2;
    AcquireSRWLockShared((PSRWLOCK)(puVar2 + 5));
    ReleaseSRWLockShared((PSRWLOCK)(puVar2 + 5));
    if ((longlong)*(int *)(puVar2 + 1) != 0) {
      piVar5 = (int *)*puVar2;
      lVar4 = (longlong)*(int *)(puVar2 + 1) * 0xf8;
      do {
        if (*piVar5 == DAT_14cbdd070) {
          uVar3 = FUN_148ee61aa(lVar1);
          return uVar3;
        }
        piVar5 = piVar5 + 0x3e;
        lVar4 = lVar4 + -0xf8;
      } while (lVar4 != 0);
    }
  }
  return 0;
}



// FUNCTION 148e82ac0 FUN_148e82ac0 body=325 status=ok
// SIG undefined FUN_148e82ac0(void)

undefined4 FUN_148e82ac0(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  PSRWLOCK local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0xa98);
    plVar5 = (longlong *)FUN_1408cbae2();
    lVar3 = *plVar5;
    local_48 = (PSRWLOCK)(lVar3 + 0xb0);
    local_40 = 0;
    AcquireSRWLockShared(local_48);
    local_38 = lVar3;
    uVar4 = FUN_148ee60f6(lVar2,&local_48);
    if (local_40 == 0) {
      ReleaseSRWLockShared(local_48);
    }
    else {
      ReleaseSRWLockExclusive(local_48);
    }
    if (((char)uVar4 != '\0') && (iVar1 != *(int *)(lVar2 + 0xa98))) {
      FUN_148e82e64(param_1);
    }
    if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
      plVar5 = (longlong *)FUN_1408cbae2(param_1);
      lVar2 = *plVar5;
      SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
      AcquireSRWLockShared(SRWLock);
      if (*(int *)(param_1 + 0x364) == *(int *)(lVar2 + 0x14)) {
        ReleaseSRWLockShared(SRWLock);
      }
      else {
        *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(lVar2 + 0x10);
        *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(lVar2 + 0x14);
        ReleaseSRWLockShared(SRWLock);
        *(uint *)(param_1 + 0x8c) =
             *(uint *)(param_1 + 0x8c) & 0xfffdffff |
             (uint)(*(int *)(param_1 + 0x360) - 1U < 2) << 0x11;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e82c06 FUN_148e82c06 body=50 status=ok
// SIG undefined FUN_148e82c06(void)

void FUN_148e82c06(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar2 == (longlong *)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (**(code **)(*plVar2 + 0x100))(plVar2);
  }
  *(byte *)((longlong)param_1 + 0x35a) = *(byte *)((longlong)param_1 + 0x35a) | bVar1;
  return;
}



// FUNCTION 148e82c38 FUN_148e82c38 body=270 status=ok
// SIG undefined FUN_148e82c38(void)

void FUN_148e82c38(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 **local_48;
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1442c8c42();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = &LAB_1442c8f68;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148e82d48(param_1,param_2,&DAT_14cb92ab0,param_1);
      local_38 = &LAB_1442c8f70;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148e82d48(param_1,param_2,&DAT_14cb92ab8,param_1);
      local_38 = &LAB_1442c8f7a;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148e82d48(param_1,param_2,&DAT_14cb92ac0,param_1);
      local_38 = &LAB_1442c8f84;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148e82d48(param_1,param_2,&DAT_14cb92ac8,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e82d48 FUN_148e82d48 body=282 status=ok
// SIG undefined FUN_148e82d48(void)

void FUN_148e82d48(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1442da2c6(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e82e64 FUN_148e82e64 body=133 status=ok
// SIG undefined FUN_148e82e64(void)

void FUN_148e82e64(longlong param_1,uint param_2)

{
  longlong lVar1;
  ushort *puVar2;
  
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffdffff | (uint)(param_2 == 2) << 0x11;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if ((param_2 & 0xfffffffd) == 0) {
      FUN_148e825d2();
    }
    FUN_14431454e(lVar1);
    *(undefined1 *)(lVar1 + 0x928) = 0;
    *(undefined1 *)(lVar1 + 0xc0) = 0;
    *(undefined1 *)(lVar1 + 0x1c0) = 0;
    *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) | 0x20;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148e82eea FUN_148e82eea body=161 status=ok
// SIG undefined FUN_148e82eea(void)

void FUN_148e82eea(longlong param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    plVar3 = (longlong *)FUN_1408cbae2();
    lVar2 = *plVar3;
    SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
    AcquireSRWLockShared(SRWLock);
    iVar1 = *(int *)(lVar2 + 8);
    ReleaseSRWLockShared(SRWLock);
    if (iVar1 == 2) {
      lVar2 = *(longlong *)(param_1 + 0x288);
      if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x1c0) == '\0')) && (*(char *)(lVar2 + 0xc0) == '\0')
          ) && (*(char *)(lVar2 + 0x928) == '\0')) {
        FUN_148e8378e(param_1,param_2);
        return;
      }
    }
    else if (iVar1 == 1) {
      FUN_148e82f8c(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148e82f8c FUN_148e82f8c body=1284 status=ok
// SIG undefined FUN_148e82f8c(void)

void FUN_148e82f8c(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  PSRWLOCK pRVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)FUN_1408cbae2();
  lVar5 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xb0));
  *(int *)(lVar5 + 0xa8) = *(int *)(lVar5 + 0xa8) + 1;
  if (*(int *)(lVar5 + 0x10) == 1) {
    if (*(int *)(lVar5 + 0x14) == 0) {
      iVar3 = 1;
      goto LAB_148e82fe7;
    }
  }
  else {
    iVar3 = *(int *)(lVar5 + 0x14) + 1;
LAB_148e82fe7:
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(int *)(lVar5 + 0x14) = iVar3;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0xb0));
  plVar4 = (longlong *)param_1[0x51];
  if (plVar4 == (longlong *)0x0) goto LAB_148e83450;
  if (((*(byte *)((longlong)plVar4 + 0x331) & 4) != 0) && ((int)plVar4[0x65] != param_2)) {
    if (param_2 == -1) {
      pcVar9 = "BackpackSlotUnfocused";
    }
    else {
      pcVar9 = "BackpackSlotFocused";
    }
    FUN_1400b22c2(local_60,pcVar9);
    FUN_140de1078(param_1,local_60,0,0);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar4 + 0x90))(plVar4,param_2);
  lVar5 = (**(code **)(*param_1 + 400))(param_1);
  if ((lVar5 != 0) && ((*(char *)(lVar5 + 0x1c0) != '\0' || (*(char *)(lVar5 + 0xc0) != '\0'))))
  goto LAB_148e83450;
  FUN_140056680(local_60,&DAT_149dfb77a);
  if ((*(int *)((longlong)plVar4 + 0x67c) == -1) &&
     (((int)plVar4[0xd0] == 0 && ((*(byte *)((longlong)plVar4 + 0x4c7) & 0x20) == 0)))) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    lVar5 = param_1[6];
    *puVar8 = &PTR_FUN_14b9c71b0;
    FUN_1446ddc76(&local_50,"ClearItem",1);
    FUN_14039176c(puVar8,lVar5,local_50,1);
    *puVar8 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar8 + 7) = 0;
    FUN_140391314(param_1,puVar8);
    bVar12 = false;
    uVar11 = 0;
  }
  else {
    plVar6 = (longlong *)FUN_1408cbae2(param_1);
    lVar5 = *plVar6;
    pRVar10 = (PSRWLOCK)(lVar5 + 0xb0);
    AcquireSRWLockShared(pRVar10);
    uVar1 = *(undefined4 *)(lVar5 + 0x18);
    ReleaseSRWLockShared(pRVar10);
    plVar6 = (longlong *)FUN_148e834c2(param_1);
    lVar5 = *plVar6;
    pRVar10 = (PSRWLOCK)(lVar5 + 0x1478);
    AcquireSRWLockShared(pRVar10);
    FUN_140f99464(lVar5,uVar1);
    ReleaseSRWLockShared(pRVar10);
    (**(code **)(*param_1 + 0x198))(param_1);
    plVar6 = (longlong *)FUN_1408cbae2(param_1);
    lVar5 = *plVar6;
    pRVar10 = (PSRWLOCK)(lVar5 + 0xb0);
    AcquireSRWLockShared(pRVar10);
    if (*(int *)(lVar5 + 0x60) == -1) {
      iVar3 = *(int *)(lVar5 + 0x68);
      ReleaseSRWLockShared(pRVar10);
      if (iVar3 != 0) goto LAB_148e831ef;
      bVar12 = false;
    }
    else {
      ReleaseSRWLockShared(pRVar10);
LAB_148e831ef:
      plVar6 = (longlong *)FUN_1408cbae2(param_1);
      lVar5 = *plVar6;
      pRVar10 = (PSRWLOCK)(lVar5 + 0xb0);
      AcquireSRWLockShared(pRVar10);
      bVar12 = *(int *)(lVar5 + 0x60) != *(int *)((longlong)plVar4 + 0x67c);
      ReleaseSRWLockShared(pRVar10);
    }
    uVar7 = FUN_14001cc68(0x148,0x10);
    local_80 = &local_78;
    local_78 = (undefined4)DAT_14c8464e0;
    uStack_74 = DAT_14c8464e0._4_4_;
    uStack_70 = (undefined4)DAT_14c8464e8;
    uStack_6c = DAT_14c8464e8._4_4_;
    local_68 = DAT_14c8464f0;
    local_88 = *(undefined4 *)((longlong)plVar4 + 0x67c);
    FUN_14664e342(uVar7,param_1[6],0,*(undefined8 *)((longlong)plVar4 + 0x684));
    FUN_140391314(param_1,uVar7);
    if ((*(byte *)((longlong)plVar4 + 0x4c5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      lVar5 = param_1[6];
      *puVar8 = &PTR_FUN_14b9c7260;
      FUN_1446ddc76(&local_50,"UpdateItemFlags",1);
      FUN_14039176c(puVar8,lVar5,local_50,1);
      *puVar8 = &PTR_FUN_14b9c7260;
      *(undefined4 *)(puVar8 + 7) = *(undefined4 *)((longlong)plVar4 + 0x67c);
      *(undefined8 *)((longlong)puVar8 + 0x3c) = 1;
      FUN_140391314(param_1,puVar8);
    }
    plVar6 = (longlong *)FUN_1408cbae2(param_1);
    lVar5 = *plVar6;
    pRVar10 = (PSRWLOCK)(lVar5 + 0xb0);
    AcquireSRWLockShared(pRVar10);
    if (*(int *)(lVar5 + 0x60) == -1) {
      iVar3 = *(int *)(lVar5 + 0x68);
      ReleaseSRWLockShared(pRVar10);
      if (iVar3 != 0) goto LAB_148e8332c;
      uVar11 = 0x13;
    }
    else {
      ReleaseSRWLockShared(pRVar10);
LAB_148e8332c:
      uVar11 = 0x23;
    }
    if ((*(byte *)(plVar4 + 0x11f) & 2) != 0) {
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
      if (plVar6 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar6 + 0x110))(plVar6,plVar4 + 0x85);
        if (cVar2 != '\0') {
          uVar11 = uVar11 | 8;
        }
      }
    }
    FUN_144a787a6(local_60,plVar4 + 0x8f);
  }
  puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar5 = param_1[6];
  *puVar8 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_50,"SetVisible",1);
  FUN_14039176c(puVar8,lVar5,local_50,1);
  *puVar8 = &PTR_FUN_14b9c7210;
  *(bool *)(puVar8 + 7) = bVar12;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 1;
  FUN_140391314(param_1,puVar8);
  puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar5 = param_1[6];
  *puVar8 = &PTR_FUN_14b9c7290;
  FUN_1446ddc76(&local_50,"SetGlyphs",1);
  FUN_14039176c(puVar8,lVar5,local_50,1);
  *puVar8 = &PTR_FUN_14b9c7290;
  *(uint *)(puVar8 + 7) = uVar11;
  FUN_140391314(param_1,puVar8);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
LAB_148e83450:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e83492 FUN_148e83492 body=47 status=ok
// SIG undefined FUN_148e83492(void)

undefined8 FUN_148e83492(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 400))();
  if ((lVar1 == 0) || ((*(char *)(lVar1 + 0x1c0) == '\0' && (*(char *)(lVar1 + 0xc0) == '\0')))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148e834c2 FUN_148e834c2 body=121 status=ok
// SIG undefined FUN_148e834c2(void)

longlong FUN_148e834c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8353c FUN_148e8353c body=75 status=ok
// SIG undefined FUN_148e8353c(void)

longlong FUN_148e8353c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x198))();
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x408) != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x400);
    lVar1 = (longlong)*(int *)(lVar1 + 0x408) * 0x268;
    do {
      if ((*(byte *)(lVar2 + 0x9f) & 1) != 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x268;
      lVar1 = lVar1 + -0x268;
    } while (lVar1 != 0);
  }
  return 0;
}



// FUNCTION 148e83588 FUN_148e83588 body=67 status=ok
// SIG undefined FUN_148e83588(void)

ulonglong FUN_148e83588(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 unaff_RBX;
  bool bVar3;
  
  plVar2 = (longlong *)FUN_1408cbae2();
  lVar1 = *plVar2;
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0xb0));
  if (*(int *)(lVar1 + 0x60) == -1) {
    bVar3 = *(int *)(lVar1 + 0x68) != 0;
  }
  else {
    bVar3 = true;
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0xb0));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffffff;
}



// FUNCTION 148e835cc FUN_148e835cc body=54 status=ok
// SIG undefined FUN_148e835cc(void)

undefined8 FUN_148e835cc(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e835f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x110))(plVar1,param_2,*(code **)(*plVar1 + 0x110));
    return uVar2;
  }
  return 0;
}



// FUNCTION 148e83602 FUN_148e83602 body=131 status=ok
// SIG undefined FUN_148e83602(void)

undefined8 * FUN_148e83602(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(&local_38,"ClearItem",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(param_1 + 7) = param_3;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e83686 FUN_148e83686 body=141 status=ok
// SIG undefined FUN_148e83686(void)

undefined8 *
FUN_148e83686(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_40,"SetVisible",1);
  FUN_14039176c(param_1,param_2,local_40,1);
  *param_1 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(param_1 + 7) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e83714 FUN_148e83714 body=121 status=ok
// SIG undefined FUN_148e83714(void)

longlong FUN_148e83714(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x290;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8378e FUN_148e8378e body=1703 status=ok
// SIG undefined FUN_148e8378e(void)

void FUN_148e8378e(longlong *param_1,int param_2)

{
  PSRWLOCK pRVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined ***pppuVar11;
  char *pcVar12;
  undefined1 uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 *local_100;
  uint local_ec;
  undefined8 local_e8;
  longlong local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  void *local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar4 == (longlong *)0x0) goto LAB_148e8380f;
  if (((*(byte *)((longlong)plVar4 + 0x331) & 4) != 0) && ((int)plVar4[0x65] != param_2)) {
    if (param_2 == -1) {
      pcVar12 = "BackpackSlotUnfocused";
    }
    else {
      pcVar12 = "BackpackSlotFocused";
    }
    FUN_1400b22c2(local_88,pcVar12);
    FUN_140de1078(param_1,local_88,0,0);
    if (local_88[0] != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar4 + 0x90))(plVar4);
  lVar5 = (**(code **)(*param_1 + 400))(param_1);
  if ((lVar5 != 0) && ((*(char *)(lVar5 + 0x1c0) != '\0' || (*(char *)(lVar5 + 0xc0) != '\0'))))
  goto LAB_148e8380f;
  lVar5 = (**(code **)(*param_1 + 0x198))(param_1);
  if (lVar5 == 0) {
LAB_148e8389e:
    (**(code **)(*param_1 + 0x250))(param_1);
    local_e8 = 0;
    local_e0 = 0;
LAB_148e838c6:
    local_ec = 1;
    bVar16 = false;
    uVar13 = 0;
  }
  else {
    if (*(int *)(lVar5 + 0x67c) == -1) {
      if ((*(int *)(lVar5 + 0x680) == 0) && ((*(byte *)(lVar5 + 0x4c7) & 0x20) == 0))
      goto LAB_148e8389e;
      local_e0 = lVar5 + 0x428;
      uVar9 = (**(code **)(*param_1 + 0x250))(param_1);
      local_e8 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      goto LAB_148e838c6;
    }
    lVar7 = (**(code **)(*param_1 + 0x250))(param_1);
    plVar8 = (longlong *)FUN_1408cbae2(param_1);
    lVar15 = *plVar8;
    pRVar1 = (PSRWLOCK)(lVar15 + 0xb0);
    AcquireSRWLockShared(pRVar1);
    if (*(int *)(lVar15 + 0x60) == -1) {
      iVar2 = *(int *)(lVar15 + 0x68);
      ReleaseSRWLockShared(pRVar1);
      if (iVar2 != 0) goto LAB_148e83da7;
LAB_148e83a98:
      uVar14 = 0;
    }
    else {
      ReleaseSRWLockShared(pRVar1);
LAB_148e83da7:
      bVar10 = 1;
      if ((*(int *)(lVar5 + 0x67c) == -1) && (*(int *)(lVar5 + 0x680) == 0)) {
        bVar10 = (*(byte *)(lVar5 + 0x4c7) & 0x20) >> 5;
      }
      uVar14 = 0;
      if ((lVar7 != 0) && (bVar10 != 0)) {
        if ((*(int *)(lVar7 + 0x254) == -1) &&
           ((*(int *)(lVar7 + 600) == 0 && ((*(byte *)(lVar7 + 0x9f) & 0x20) == 0))))
        goto LAB_148e83a98;
        uVar14 = 1;
        if (*(int *)(lVar7 + 0x254) == *(int *)(lVar5 + 0x67c)) {
          uVar14 = (uint)(*(int *)(lVar7 + 600) != *(int *)(lVar5 + 0x680));
        }
      }
    }
    local_e8 = CONCAT44(local_e8._4_4_,uVar14);
    plVar8 = (longlong *)FUN_1408cbae2(param_1);
    lVar15 = *plVar8;
    pRVar1 = (PSRWLOCK)(lVar15 + 0xb0);
    AcquireSRWLockShared(pRVar1);
    if (*(int *)(lVar15 + 0x60) == -1) {
      iVar2 = *(int *)(lVar15 + 0x68);
      ReleaseSRWLockShared(pRVar1);
      uVar14 = 0x21;
      if ((iVar2 == 0) && (uVar14 = 1, (*(byte *)(plVar4 + 0x11f) & 8) != 0)) {
        uVar14 = (uint)(*(int *)((longlong)plVar4 + 0x32c) != (int)plVar4[0x65]) * 0x10 + 1;
      }
    }
    else {
      ReleaseSRWLockShared(pRVar1);
      uVar14 = 0x21;
    }
    lVar15 = lVar5 + 0x428;
    cVar3 = (**(code **)(*plVar4 + 0x118))(plVar4);
    local_ec = uVar14 | 2;
    if (cVar3 == '\0') {
      local_ec = uVar14;
    }
    if ((*(byte *)(plVar4 + 0x11f) & 2) != 0) {
      cVar3 = (**(code **)(*param_1 + 600))(param_1,lVar15);
      if (cVar3 != '\0') {
        local_ec = local_ec | 8;
      }
    }
    local_e0 = lVar15;
    if ((*(byte *)(lVar5 + 0x4c5) & 1) != 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      lVar15 = param_1[6];
      *puVar6 = &PTR_FUN_14b9c7260;
      FUN_1446ddc76(local_88,"UpdateItemFlags",1);
      FUN_14039176c(puVar6,lVar15,local_88[0],1);
      *puVar6 = &PTR_FUN_14b9c7260;
      *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar5 + 0x67c);
      *(undefined8 *)((longlong)puVar6 + 0x3c) = 1;
      FUN_140391314(param_1,puVar6);
    }
    uVar9 = FUN_14001cc68(0x148,0x10);
    local_100 = &local_a8;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    local_108 = *(undefined4 *)(lVar5 + 0x67c);
    FUN_14664e342(uVar9,param_1[6],0,*(undefined8 *)(lVar5 + 0x684));
    uVar9 = FUN_140391314(param_1,uVar9);
    bVar16 = (char)local_e8 != '\0';
    if (bVar16) {
      uVar9 = FUN_14001cc68(0x148,0x10);
      local_100 = &local_c8;
      local_c8 = (undefined4)DAT_14c8464e0;
      uStack_c4 = DAT_14c8464e0._4_4_;
      uStack_c0 = (undefined4)DAT_14c8464e8;
      uStack_bc = DAT_14c8464e8._4_4_;
      local_b8 = DAT_14c8464f0;
      local_108 = *(undefined4 *)(lVar7 + 0x254);
      FUN_14664e342(uVar9,param_1[6],1,*(undefined8 *)(lVar7 + 0x25c));
      uVar9 = FUN_140391314(param_1,uVar9);
    }
    local_e8 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    uVar13 = 1;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar5 = param_1[6];
  *puVar6 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(local_88,"SetVisible",1);
  FUN_14039176c(puVar6,lVar5,local_88[0],1);
  *puVar6 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar6 + 7) = uVar13;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
  FUN_140391314(param_1,puVar6);
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar5 = param_1[6];
  *puVar6 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(local_88,"SetVisible",1);
  FUN_14039176c(puVar6,lVar5,local_88[0],1);
  *puVar6 = &PTR_FUN_14b9c7210;
  *(bool *)(puVar6 + 7) = bVar16;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 1;
  FUN_140391314(param_1,puVar6);
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar5 = param_1[6];
  *puVar6 = &PTR_FUN_14b9c7290;
  FUN_1446ddc76(local_88,"SetGlyphs",1);
  FUN_14039176c(puVar6,lVar5,local_88[0],1);
  *puVar6 = &PTR_FUN_14b9c7290;
  *(uint *)(puVar6 + 7) = local_ec;
  FUN_140391314(param_1,puVar6);
  puVar6 = (undefined8 *)FUN_148e83714(param_1);
  uVar9 = *puVar6;
  if ((char)local_e8 == '\0') {
    FUN_140056680(&local_d8,&DAT_149e62e78);
  }
  else {
    local_d8 = (void *)0x0;
    uVar14 = *(uint *)(local_e0 + 0x58);
    _Src = *(void **)(local_e0 + 0x50);
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar14);
    if ((longlong)(int)uVar14 == 0) {
      uStack_d0 = (ulonglong)uVar14;
    }
    else {
      FUN_1446dd670(&local_d8,uVar14,0);
      memcpy(local_d8,_Src,(longlong)(int)uVar14 * 2);
    }
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_FUN_14b9c5e90;
  local_60 = local_d8;
  local_58 = (undefined4)uStack_d0;
  local_54 = uStack_d0._4_4_;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_88[0] = &LAB_1442da510;
  FUN_148e863d0(uVar9,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar11 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar11 = &local_68;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148e8380f:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e83e36 FUN_148e83e36 body=113 status=ok
// SIG undefined FUN_148e83e36(void)

void FUN_148e83e36(undefined8 param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_1408cbae2();
  lVar2 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(lVar2 + 8);
  ReleaseSRWLockShared(SRWLock);
  if (iVar1 == 2) {
    FUN_148e842a6(param_1,param_2);
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  FUN_148e83eaa(param_1,param_2);
  return;
}



// FUNCTION 148e83ea8 FUN_148e83ea8 body=1 status=ok
// SIG undefined FUN_148e83ea8(void)

void FUN_148e83ea8(void)

{
  return;
}



// FUNCTION 148e83eaa FUN_148e83eaa body=632 status=ok
// SIG undefined FUN_148e83eaa(void)

void FUN_148e83eaa(longlong *param_1,uint param_2)

{
  PSRWLOCK SRWLock;
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0x51] != 0) {
    lVar3 = (**(code **)(*param_1 + 0x198))();
    if ((((lVar3 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar3 + 0x3f8))) &&
       ((lVar3 = (ulonglong)param_2 * 0x268 + *(longlong *)(lVar3 + 0x3f0), lVar3 != 0 &&
        (((*(int *)(lVar3 + 0x254) != -1 || (*(int *)(lVar3 + 600) != 0)) ||
         ((*(byte *)(lVar3 + 0x9f) & 0x20) != 0)))))) {
      if ((*(byte *)(lVar3 + 0x9d) & 4) != 0) {
        FUN_140de1078(param_1,&DAT_14cbdcbf8,0,0);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
      }
      puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      plVar5 = (longlong *)FUN_1408cbae2(param_1);
      lVar2 = *plVar5;
      SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
      AcquireSRWLockShared(SRWLock);
      uVar1 = *(undefined1 *)(lVar2 + 0x18);
      ReleaseSRWLockShared(SRWLock);
      lVar2 = param_1[6];
      *puVar4 = &PTR_FUN_14b9c6e90;
      FUN_1446ddc76(local_58,"EquipItem",1);
      FUN_14039176c(puVar4,lVar2,local_58[0],1);
      *puVar4 = &PTR_FUN_14b9c6e90;
      *(undefined1 *)(puVar4 + 7) = uVar1;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = *(undefined4 *)(lVar3 + 0x254);
      puVar4[8] = 0;
      FUN_140391314(param_1,puVar4);
      puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar2 = param_1[6];
      *puVar4 = &PTR_FUN_14b9c71b0;
      FUN_1446ddc76(local_58,"ClearItem",1);
      FUN_14039176c(puVar4,lVar2,local_58[0],1);
      *puVar4 = &PTR_FUN_14b9c71b0;
      *(undefined4 *)(puVar4 + 7) = 0;
      FUN_140391314(param_1,puVar4);
      puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar2 = param_1[6];
      *puVar4 = &PTR_FUN_14b9c71b0;
      FUN_1446ddc76(local_58,"ClearItem",1);
      FUN_14039176c(puVar4,lVar2,local_58[0],1);
      *puVar4 = &PTR_FUN_14b9c71b0;
      *(undefined4 *)(puVar4 + 7) = 1;
      FUN_140391314(param_1,puVar4);
      FUN_148ee407e(lVar3,local_58);
      FUN_140de1078(param_1,local_58,0,0);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      FUN_148e84220(param_1,0);
      FUN_1457d7894(param_1,param_1 + 100);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8413e FUN_148e8413e body=62 status=ok
// SIG undefined FUN_148e8413e(void)

longlong FUN_148e8413e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x198))();
  if (((lVar1 == 0) || ((int)param_2 < 0)) || (*(int *)(lVar1 + 0x3f8) <= (int)param_2)) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)param_2 * 0x268 + *(longlong *)(lVar1 + 0x3f0);
  }
  return lVar1;
}



// FUNCTION 148e8417c FUN_148e8417c body=163 status=ok
// SIG undefined FUN_148e8417c(void)

undefined8 *
FUN_148e8417c(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 *param_4,
             undefined8 *param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9c6e90;
  FUN_1446ddc76(&local_48,"EquipItem",1);
  FUN_14039176c(param_1,param_2,local_48,1);
  *param_1 = &PTR_FUN_14b9c6e90;
  *(undefined1 *)(param_1 + 7) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = *param_4;
  param_1[8] = *param_5;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e84220 FUN_148e84220 body=133 status=ok
// SIG undefined FUN_148e84220(void)

void FUN_148e84220(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined4 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_1408cbae2();
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b9c5eb0;
  local_58[0] = &LAB_1442da5c0;
  local_30 = param_2;
  FUN_148e57a3a(*puVar1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e842a6 FUN_148e842a6 body=2203 status=ok
// SIG undefined FUN_148e842a6(void)

void FUN_148e842a6(longlong *param_1,uint param_2)

{
  PSRWLOCK pRVar1;
  byte bVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  wchar_t **ppwVar9;
  undefined8 *puVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  wchar_t *_Str;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  uint local_74;
  longlong local_70;
  PSRWLOCK local_68;
  ulonglong local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar6 == (longlong *)0x0) goto LAB_148e84431;
  lVar7 = (**(code **)(*param_1 + 0x198))(param_1);
  if ((((lVar7 == 0) || ((int)param_2 < 0)) || (*(int *)(lVar7 + 0x3f8) <= (int)param_2)) ||
     ((lVar7 = (ulonglong)param_2 * 0x268 + *(longlong *)(lVar7 + 0x3f0), lVar7 == 0 ||
      (((*(int *)(lVar7 + 0x254) == -1 && (*(int *)(lVar7 + 600) == 0)) &&
       ((*(byte *)(lVar7 + 0x9f) & 0x20) == 0)))))) {
    FUN_140de1078(param_1,&DAT_14cbdcc28,0,0);
    *(undefined1 *)(plVar6 + 0x125) = 0;
  }
  else {
    *(undefined1 *)(plVar6 + 0x38) = 0;
    *(undefined1 *)(plVar6 + 0x18) = 0;
    if ((*(byte *)(lVar7 + 0x9d) & 4) != 0) {
      FUN_140de1078(param_1,&DAT_14cbdcbf8,0,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    if ((*(byte *)(lVar7 + 0x9f) & 0x20) != 0) {
      *(undefined1 *)(plVar6 + 0x125) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    local_88 = lVar7;
    plVar8 = (longlong *)FUN_1408cbae2(param_1);
    lVar7 = *plVar8;
    pRVar1 = (PSRWLOCK)(lVar7 + 0xb0);
    AcquireSRWLockShared(pRVar1);
    local_74 = param_2;
    if (*(int *)(lVar7 + 0x60) == -1) {
      iVar5 = *(int *)(lVar7 + 0x68);
      ReleaseSRWLockShared(pRVar1);
      if (iVar5 != 0) goto LAB_148e84497;
    }
    else {
      ReleaseSRWLockShared(pRVar1);
LAB_148e84497:
      (**(code **)(*param_1 + 0x220))(param_1);
    }
    plVar8 = (longlong *)FUN_148e834c2(param_1);
    lVar7 = *plVar8;
    AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0x1478));
    lVar16 = local_88;
    iVar5 = 4;
    local_70 = 3;
    if ((longlong)*(int *)(lVar7 + 0x1460) == 0) {
LAB_148e844e7:
      local_90 = 0;
    }
    else {
      plVar8 = *(longlong **)(lVar7 + 0x1458);
      lVar20 = (longlong)*(int *)(lVar7 + 0x1460) * 0x1c;
      local_90 = 0;
      do {
        if (*plVar8 == DAT_14cbccb58) {
          if (plVar8 == (longlong *)0x0) goto LAB_148e844e7;
          local_90 = (longlong)*(int *)((longlong)plVar8 + 0xc);
          iVar5 = *(int *)((longlong)plVar8 + 0x14);
          local_70 = (longlong)(*(int *)((longlong)plVar8 + 0xc) + iVar5 + -1);
          break;
        }
        plVar8 = (longlong *)((longlong)plVar8 + 0x1c);
        lVar20 = lVar20 + -0x1c;
      } while (lVar20 != 0);
    }
    *(int *)(plVar6 + 0x154) = iVar5;
    local_80 = plVar6 + 0x14e;
    local_68 = (PSRWLOCK)(lVar7 + 0x1478);
    FUN_148e87918(local_80,*(undefined4 *)(lVar7 + 0x1450));
    local_60 = (ulonglong)*(uint *)(lVar7 + 0x1450);
    if (local_60 != 0) {
      uVar21 = 0;
      do {
        ppwVar9 = (wchar_t **)FUN_1410d1d12(local_80);
        lVar20 = lVar7 + uVar21 * 0x68;
        iVar5 = *(int *)(lVar7 + 0x38 + uVar21 * 0x68);
        if (iVar5 == *(int *)(lVar16 + 0x48)) {
          if (1 < iVar5) {
            lVar17 = 0;
            while( true ) {
              uVar14 = *(ushort *)(*(longlong *)(lVar20 + 0x30) + lVar17);
              uVar15 = (ulonglong)uVar14;
              uVar18 = *(ushort *)(*(longlong *)(lVar16 + 0x40) + lVar17);
              if (uVar14 != uVar18) break;
              if (uVar14 == 0) goto LAB_148e846ce;
LAB_148e84688:
              lVar17 = lVar17 + 2;
            }
            if ((uVar18 | uVar14) < 0x80) {
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              uVar19 = (ulonglong)uVar18;
              uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
              if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar19]) goto LAB_148e84688;
            }
            if (uVar14 != uVar18) goto LAB_148e846ba;
          }
LAB_148e846ce:
          FUN_140002266(&local_58,L"equip%d",uVar21 & 0xffffffff);
          if (ppwVar9 == &local_58) {
            if (local_58 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*ppwVar9 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            *ppwVar9 = local_58;
            local_58 = (wchar_t *)0x0;
            *(int *)(ppwVar9 + 1) = (int)uStack_50;
            *(uint *)((longlong)ppwVar9 + 0xc) = uStack_50._4_4_;
          }
          FUN_1402980a2(ppwVar9 + 4,*ppwVar9);
          bVar2 = *(byte *)(ppwVar9 + 0x11);
          bVar11 = ((longlong)uVar21 <= local_70 && local_90 <= (longlong)uVar21) << 2;
          *(byte *)(ppwVar9 + 0x11) = bVar2 & 0xfb | bVar11;
          bVar12 = (*(int *)(lVar20 + 0x58) != -1) << 6;
          *(byte *)(ppwVar9 + 0x11) = bVar2 & 0xbb | bVar11 | bVar12;
          bVar13 = (*(int *)(lVar16 + 0x254) == *(int *)(lVar20 + 0x58)) << 3;
          *(byte *)(ppwVar9 + 0x11) = bVar2 & 0xb3 | bVar11 | bVar12 | bVar13;
          *(byte *)(ppwVar9 + 0x11) =
               bVar2 & 0x82 | bVar11 | bVar12 | bVar13 | *(char *)(lVar20 + 0x50) << 4 | 0x20;
          lVar16 = FUN_148ee540c(plVar6,lVar20 + 0x58);
          if (lVar16 == 0) {
            plVar8 = (longlong *)FUN_148e8625c(param_1);
            lVar16 = *plVar8;
            pRVar1 = (PSRWLOCK)(lVar16 + 0x1c0);
            AcquireSRWLockShared(pRVar1);
            lVar16 = FUN_148e1ab1a(lVar16 + 0x50,lVar20 + 0x58);
            ReleaseSRWLockShared(pRVar1);
            if (lVar16 == 0) goto LAB_148e847e4;
          }
          FUN_144a787a6(ppwVar9 + 6,lVar16 + 0x1d8);
          *(byte *)(ppwVar9 + 0x11) = *(byte *)(ppwVar9 + 0x11) & 0xfd;
        }
        else {
          if (*(int *)(lVar16 + 0x48) + iVar5 == 1) goto LAB_148e846ce;
LAB_148e846ba:
          FUN_144a7e010(ppwVar9);
        }
LAB_148e847e4:
        uVar21 = uVar21 + 1;
        lVar16 = local_88;
      } while (uVar21 != local_60);
    }
    ReleaseSRWLockShared(local_68);
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    if ((longlong)(int)plVar6[0x14f] != 0) {
      lVar7 = plVar6[0x14e];
      lVar16 = (longlong)(int)plVar6[0x14f] * 0x90;
      do {
        uVar21 = uStack_50;
        if (1 < *(int *)(lVar7 + 8)) {
          lVar20 = (longlong)(int)uStack_50;
          uVar4 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
          if (uStack_50._4_4_ < uVar4) {
            FUN_1410d2002(&local_58,uVar21 & 0xffffffff);
          }
          FUN_1410d0c56(local_58 + lVar20 * 0x48,lVar7);
        }
        lVar7 = lVar7 + 0x90;
        lVar16 = lVar16 + -0x90;
      } while (lVar16 != 0);
    }
    FUN_148e87956(local_80,&local_58);
    FUN_140d47191(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if ((int)plVar6[0x14f] == 1) {
      FUN_144a49bb4(*local_80,&local_58,5);
      _Str = local_58;
      if ((int)uStack_50 == 0) {
        _Str = L"";
      }
      iVar5 = _wtoi(_Str);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      lVar7 = param_1[6];
      *puVar10 = &PTR_FUN_14b9c6e90;
      FUN_1446ddc76(&local_58,"EquipItem",1);
      FUN_14039176c(puVar10,lVar7,local_58,1);
      lVar16 = local_88;
      *puVar10 = &PTR_FUN_14b9c6e90;
      *(char *)(puVar10 + 7) = (char)iVar5;
      *(undefined4 *)((longlong)puVar10 + 0x3c) = *(undefined4 *)(local_88 + 0x254);
      puVar10[8] = *(undefined8 *)(local_88 + 0x25c);
      FUN_140391314(param_1,puVar10);
      puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar7 = param_1[6];
      *puVar10 = &PTR_FUN_14b9c71b0;
      FUN_1446ddc76(&local_58,"ClearItem",1);
      FUN_14039176c(puVar10,lVar7,local_58,1);
      *puVar10 = &PTR_FUN_14b9c71b0;
      *(undefined4 *)(puVar10 + 7) = 1;
      FUN_140391314(param_1,puVar10);
      puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar7 = param_1[6];
      *puVar10 = &PTR_FUN_14b9c71b0;
      FUN_1446ddc76(&local_58,"ClearItem",1);
      FUN_14039176c(puVar10,lVar7,local_58,1);
      *puVar10 = &PTR_FUN_14b9c71b0;
      *(undefined4 *)(puVar10 + 7) = 0;
      FUN_140391314(param_1,puVar10);
      FUN_148ee407e(lVar16,&local_58);
      FUN_140de1078(param_1,&local_58,0,0);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x178))(param_1,param_1 + 100);
      *(undefined1 *)(plVar6 + 0x125) = 0;
      (**(code **)(*plVar6 + 0x88))(plVar6,0xffffffff);
    }
    else {
      puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar7 = param_1[6];
      *puVar10 = &PTR_FUN_14b9c7290;
      FUN_1446ddc76(&local_58,"SetGlyphs",1);
      FUN_14039176c(puVar10,lVar7,local_58,1);
      *puVar10 = &PTR_FUN_14b9c7290;
      *(undefined4 *)(puVar10 + 7) = 0xb;
      FUN_140391314(param_1,puVar10);
      puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar7 = param_1[6];
      *puVar10 = &PTR_FUN_14b9c7210;
      FUN_1446ddc76(&local_58,"SetVisible",1);
      FUN_14039176c(puVar10,lVar7,local_58,1);
      *puVar10 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar10 + 7) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x3c) = 0;
      FUN_140391314(param_1,puVar10);
      FUN_148ee3dae(local_88,&local_58);
      FUN_140de1078(param_1,&local_58,0,0);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      (**(code **)(*plVar6 + 0x88))(plVar6,local_74);
      FUN_1457fd360(plVar6 + 0x123,plVar6 + 0x143);
      *(undefined1 *)(plVar6 + 0x125) = 1;
      plVar6[0x122] = plVar6[0x122] + 1;
    }
  }
  *(byte *)(plVar6 + 0x66) = *(byte *)(plVar6 + 0x66) | 0x20;
  puVar3 = (ushort *)plVar6[0x10];
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(plVar6 + 0xf) & 0x3f));
  }
LAB_148e84431:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e84b80 FUN_148e84b80 body=134 status=ok
// SIG undefined FUN_148e84b80(void)

void FUN_148e84b80(undefined8 param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_1408cbae2();
  lVar3 = *plVar4;
  pRVar1 = (PSRWLOCK)(lVar3 + 0xb0);
  AcquireSRWLockShared(pRVar1);
  iVar2 = *(int *)(lVar3 + 8);
  ReleaseSRWLockShared(pRVar1);
  if (iVar2 == 2) {
    FUN_1442c91d8(param_1);
    return;
  }
  plVar4 = (longlong *)FUN_1408cbae2(param_1);
  lVar3 = *plVar4;
  pRVar1 = (PSRWLOCK)(lVar3 + 0xb0);
  AcquireSRWLockShared(pRVar1);
  iVar2 = *(int *)(lVar3 + 8);
  ReleaseSRWLockShared(pRVar1);
  if (iVar2 == 1) {
    FUN_1442c950a(param_1);
    return;
  }
  return;
}



// FUNCTION 148e84c06 FUN_148e84c06 body=279 status=ok
// SIG undefined FUN_148e84c06(void)

void FUN_148e84c06(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)(**(code **)(*param_1 + 400))();
  if (((plVar5 != (longlong *)0x0) && ((char)plVar5[0x18] == '\x01')) &&
     (*(char *)((longlong)plVar5 + 0x119) == '\x01')) {
    plVar6 = (longlong *)FUN_148e861a2(param_1);
    lVar2 = *plVar6;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
    *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
    (**(code **)(*plVar5 + 0xa8))(plVar5,local_38);
    FUN_148e1b34a(lVar2);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
    lVar2 = plVar5[0x22];
    if ((longlong)(int)lVar2 != 0) {
      lVar3 = plVar5[0x21];
      lVar7 = 0;
      do {
        pbVar1 = (byte *)(lVar3 + 0x88 + lVar7);
        *pbVar1 = *pbVar1 & 0xbf;
        lVar7 = lVar7 + 0x90;
      } while ((longlong)(int)lVar2 * 0x90 != lVar7);
    }
    *(undefined1 *)((longlong)plVar5 + 0x119) = 0;
    *(undefined1 *)(plVar5 + 0x73) = 1;
    *(byte *)((longlong)plVar5 + 0x331) = *(byte *)((longlong)plVar5 + 0x331) | 2;
    puVar4 = (ushort *)plVar5[0x10];
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(plVar5 + 0xf) & 0x3f));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


