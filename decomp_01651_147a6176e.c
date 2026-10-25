// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a6176e FUN_147a6176e body=313 status=ok
// SIG undefined FUN_147a6176e(void)

longlong FUN_147a6176e(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong *local_48;
  longlong local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x790) != *(int *)(param_1 + 0x7bc)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x7c0;
    if (*(longlong *)(param_1 + 0x7c8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x7c8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 2000) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x788) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
            lVar3 = (longlong)(int)puVar1[1] * 0x18 + *(longlong *)(param_1 + 0x728);
            goto LAB_147a61882;
          }
          break;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  FUN_147cded98(&local_48,param_2);
  lVar3 = FUN_147a67c9c(param_1,&local_48);
  if (local_48 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  local_40 = lVar3 + 0x10;
  local_48 = &local_50;
  local_50 = param_2;
  FUN_147a67eb4((longlong *)(param_1 + 0x788),local_34,&local_48,0);
LAB_147a61882:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a618a8 FUN_147a618a8 body=41 status=ok
// SIG undefined FUN_147a618a8(void)

void FUN_147a618a8(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147a711be();
  return;
}



// FUNCTION 147a618d2 FUN_147a618d2 body=172 status=ok
// SIG undefined FUN_147a618d2(void)

longlong * FUN_147a618d2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_2 + 0x98);
    if ((lVar2 != 0 & DAT_14c950c29) != 1) goto LAB_147a618f1;
  }
  else if (DAT_14c950c29 == 0) goto LAB_147a618f1;
  FUN_1456cec3c(lVar2);
LAB_147a618f1:
  *param_1 = lVar2;
  if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x98);
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x6b8))();
  }
  param_1[1] = lVar2;
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x1c8), lVar2 == 0)) {
    plVar3 = &DAT_14c8464e0;
    lVar2 = DAT_14c8464f0;
  }
  else {
    plVar3 = (longlong *)(lVar2 + 0x260);
    lVar2 = *(longlong *)(lVar2 + 0x270);
  }
  lVar1 = plVar3[1];
  param_1[2] = *plVar3;
  param_1[3] = lVar1;
  param_1[4] = lVar2;
  return param_1;
}



// FUNCTION 147a6197e FUN_147a6197e body=127 status=ok
// SIG undefined FUN_147a6197e(void)

undefined8 FUN_147a6197e(longlong param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x9a0)) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x998) + -0x10 +
                      (longlong)*(int *)(param_1 + 0x9a0) * 0x20);
    if ((*(float *)(param_1 + 0xca8) < fVar1) && (5.0 < fVar1 - *(float *)(param_1 + 0xca8))) {
      return 0;
    }
  }
  uVar2 = FUN_14368ad3e(param_1 + 0xb40,*(undefined8 *)(param_1 + 0xf0),param_2,param_1 + 0x998,0,
                        *(undefined8 *)(param_1 + 0xb18),0);
  return uVar2;
}



// FUNCTION 147a619fe FUN_147a619fe body=136 status=ok
// SIG undefined FUN_147a619fe(void)

void FUN_147a619fe(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xa30) != 0) {
    plVar1 = (longlong *)(param_1 + 0xa28);
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
      if ((*(int *)(param_1 + 0xa30) != 0) &&
         (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)(param_1 + 0xa30) = 0;
      }
    }
  }
  if ((char)param_2 != '\0') {
    FUN_14107e8f0(&DAT_14cb0d3b8,*(undefined8 *)(param_1 + 0x1a8));
    return;
  }
  return;
}



// FUNCTION 147a61a86 FUN_147a61a86 body=26 status=ok
// SIG undefined FUN_147a61a86(void)

void FUN_147a61a86(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xc78) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a61a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0xc78) + 0x180))();
    return;
  }
  return;
}



// FUNCTION 147a61aa0 FUN_147a61aa0 body=181 status=ok
// SIG undefined FUN_147a61aa0(void)

undefined8 * FUN_147a61aa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14a8ba590;
  puVar1 = param_1 + 3;
  param_1[3] = 0;
  FUN_14485c47a(puVar1);
  *param_1 = &PTR_FUN_14a8ba6d0;
  cVar2 = FUN_144729dda(puVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(puVar1);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar3 + 0xcac);
    QueryPerformanceCounter(&local_20);
    param_1[5] = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a61b56 FUN_147a61b56 body=276 status=ok
// SIG undefined FUN_147a61b56(void)

longlong FUN_147a61b56(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x50);
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_28 = local_30;
  iVar1 = FUN_14472ec42(plVar4,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  if (((iVar1 == -1) || (lVar2 = (longlong)iVar1 * 0x18 + *plVar4, lVar2 == 0)) ||
     (lVar2 = *(longlong *)(lVar2 + 8), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1488) != *(int *)(param_1 + 0x14b4)) {
      lVar3 = param_1 + 0x14b8;
      if (*(longlong *)(param_1 + 0x14c0) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x14c0);
      }
      iVar1 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x14c8) - 1U &
                               (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
      if (iVar1 != -1) {
        do {
          lVar3 = *(longlong *)(param_1 + 0x1480) + (longlong)iVar1 * 0x20;
          if (*(longlong *)(*(longlong *)(param_1 + 0x1480) + (longlong)iVar1 * 0x20) == lVar2)
          goto LAB_147a61bd7;
          iVar1 = *(int *)(lVar3 + 0x18);
        } while (iVar1 != -1);
      }
    }
    lVar3 = 0;
LAB_147a61bd7:
    lVar2 = lVar3 + 8;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 147a61c6c FUN_147a61c6c body=72 status=ok
// SIG undefined FUN_147a61c6c(void)

undefined8 FUN_147a61c6c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_1 + 0x100) < 1) || (lVar1 = **(longlong **)(param_1 + 0xf8), lVar1 == 0)) ||
     (*(int *)(lVar1 + 0x134) == 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14368a920(param_1 + 0xb40,lVar1,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 147a61cb4 FUN_147a61cb4 body=366 status=ok
// SIG undefined FUN_147a61cb4(void)

void FUN_147a61cb4(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b97432(param_1,&local_40,*(undefined8 *)(param_2 + 0x10));
  if (local_40 != 0) {
    plVar8 = (longlong *)0x0;
    FUN_144750a86(param_2,&local_50,0,0);
    puVar6 = local_50;
    if (local_48 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    plVar7 = (longlong *)(ulonglong)(local_48 - 1);
    if (local_48 == 0) {
      plVar7 = plVar8;
    }
    uVar3 = FUN_144a49b4a(plVar7,puVar6);
    iVar4 = FUN_147a71ef2(param_3 + 0x70,uVar3,&local_50);
    lVar5 = (longlong)iVar4 * 0x28 + *(longlong *)(param_3 + 0x70);
    plVar7 = (longlong *)0x0;
    if (lVar5 != 0 && iVar4 != -1) {
      plVar7 = *(longlong **)(lVar5 + 0x10);
      plVar8 = *(longlong **)(lVar5 + 0x18);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((plVar7 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar7, puVar2 != (undefined8 *)0x0)
       ) {
      local_58 = *puVar2;
      FUN_147ce25b4(local_40,puVar2 + 0xe,0,param_2);
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
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_38 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a61e24 FUN_147a61e24 body=113 status=ok
// SIG undefined FUN_147a61e24(void)

longlong FUN_147a61e24(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar5 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar5;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_144a7df4c((longlong *)(param_1 + 0x738),uVar1,param_2);
  if (iVar2 != -1) {
    uVar5 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x738);
  }
  return (longlong)*(int *)(uVar5 + 0x10) * 0x18 + *(longlong *)(param_1 + 0x728);
}



// FUNCTION 147a61e96 FUN_147a61e96 body=110 status=ok
// SIG undefined FUN_147a61e96(void)

void FUN_147a61e96(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145ad5862(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_147a71006(param_1);
    return;
  }
  FUN_147a72470(param_1);
  FUN_145ad5862(param_1,param_2);
  return;
}



// FUNCTION 147a61f04 FUN_147a61f04 body=68 status=ok
// SIG undefined FUN_147a61f04(void)

void FUN_147a61f04(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147a677f2();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147a61f48 FUN_147a61f48 body=59 status=ok
// SIG undefined FUN_147a61f48(void)

undefined8 * FUN_147a61f48(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  FUN_14485c47a();
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1);
    FUN_14358c244(uVar2,1);
  }
  return param_1;
}



// FUNCTION 147a61f84 FUN_147a61f84 body=47 status=ok
// SIG undefined FUN_147a61f84(void)

void FUN_147a61f84(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda();
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1);
    FUN_14358c244(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 147a61fb4 FUN_147a61fb4 body=162 status=ok
// SIG undefined FUN_147a61fb4(void)

void FUN_147a61fb4(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  local_30 = 0;
  FUN_14485c47a(&local_30);
  plVar3 = (longlong *)FUN_147a6238e(uVar2,&local_30);
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
    uVar2 = *(undefined8 *)(*plVar3 + 0x70);
    iVar1 = *(int *)(param_1 + 0x9f0);
    *(uint *)(param_1 + 0x9f0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x9f4) < iVar1 + 1U) {
      FUN_140b3b51e((longlong *)(param_1 + 0x9e8),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x9e8) + (longlong)iVar1 * 8) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a62058 FUN_147a62058 body=312 status=ok
// SIG undefined FUN_147a62058(void)

void FUN_147a62058(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1433b72a0(param_2,2);
  if ((param_3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_2 + 0x608) = param_3;
  *(undefined8 *)(param_3 + 0x1d8) = *(undefined8 *)(param_1 + 0x300);
  QueryPerformanceCounter(&local_48);
  *(double *)(param_3 + 0x1e0) = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  QueryPerformanceCounter(&local_48);
  *(double *)(param_3 + 0x1e8) = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  *(undefined4 *)(param_3 + 0x134) = 3;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_3 + 0x30) = param_2;
  if ((param_2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_3 + 0x98) = param_2;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a621e4 FUN_147a621e4 body=95 status=ok
// SIG undefined FUN_147a621e4(void)

undefined1 FUN_147a621e4(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_14cad5e38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar4 * 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (*(char *)(param_1 + 0xcbe) == '\0') {
      uVar3 = *(undefined1 *)(param_1 + 0x9a8);
    }
  }
  return uVar3;
}



// FUNCTION 147a62244 FUN_147a62244 body=75 status=ok
// SIG undefined FUN_147a62244(void)

undefined8 * FUN_147a62244(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x100) < 1) {
    plVar1 = (longlong *)(param_1 + 0xf0);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0xf8);
  }
  if (*plVar1 == 0) {
    *param_2 = 0;
  }
  else {
    plVar1 = *(longlong **)(*plVar1 + 0x68);
    (**(code **)(*plVar1 + 0x328))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 147a62290 FUN_147a62290 body=152 status=ok
// SIG undefined FUN_147a62290(void)

longlong FUN_147a62290(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x100) < 1) {
    plVar3 = (longlong *)(param_1 + 0xf0);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0xf8);
  }
  local_18 = param_2;
  if (*plVar3 != 0) {
    plVar3 = *(longlong **)(*plVar3 + 0x68);
    lVar1 = (**(code **)(*plVar3 + 800))(plVar3,&local_18,1);
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_147a62300;
    }
  }
  lVar1 = 0;
LAB_147a62300:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6232a FUN_147a6232a body=100 status=ok
// SIG undefined FUN_147a6232a(void)

byte FUN_147a6232a(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xcbe) == '\0') {
    if (param_2 == 0) {
      return 1;
    }
    if ((*(byte *)(param_1 + 0x9ab) & 2) == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_144a6c4d8();
  bVar1 = 1;
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    bVar1 = FUN_1449e2a3e(param_2);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



// FUNCTION 147a6238e FUN_147a6238e body=119 status=ok
// SIG undefined FUN_147a6238e(void)

longlong * FUN_147a6238e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x1460) != *(int *)(param_1 + 0x148c)) {
    lVar1 = *param_2;
    lVar5 = param_1 + 0x1490;
    if (*(longlong *)(param_1 + 0x1498) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1498);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x14a0) - 1U &
                             ((uint)((ulonglong)lVar1 >> 0x20) ^ (uint)lVar1)) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x1458) + (longlong)iVar4 * 0x18);
        if (*plVar3 == lVar1) goto LAB_147a6239e;
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_147a6239e:
  plVar2 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 147a62406 FUN_147a62406 body=68 status=ok
// SIG undefined FUN_147a62406(void)

void FUN_147a62406(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140441f4a(param_1 + 0x18);
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000147a6243f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147a6244a FUN_147a6244a body=842 status=ok
// SIG undefined FUN_147a6244a(void)

longlong * FUN_147a6244a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined1 local_88 [4];
  uint local_84;
  longlong local_80;
  uint local_78;
  int local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((((0 < *(int *)(param_1 + 0x100)) && (lVar9 = **(longlong **)(param_1 + 0xf8), lVar9 != 0)) &&
      (*(int *)(lVar9 + 0x134) != 1)) &&
     (FUN_147a4c716(lVar9,&local_90), local_74 < *(int *)(local_80 + 0x18))) {
    do {
      lVar9 = *(longlong *)(*local_90 + 8 + (longlong)local_74 * 0x18);
      if (lVar9 != 0) {
        lVar1 = lVar9 + 0xb8;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar1;
        if (*(int *)(lVar9 + 0xd0) == 0) {
          iVar10 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar10 = *(int *)(lVar9 + 0xd0);
        }
        plVar11 = (longlong *)(lVar9 + 0xa8);
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        local_a0 = local_58;
        uVar4 = local_a0;
        local_b0 = (undefined4)local_68;
        uStack_ac = local_68._4_4_;
        uStack_a8 = (undefined4)uStack_60;
        uStack_a4 = uStack_60._4_4_;
        local_a0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar6 = local_a0._4_4_;
        local_b8 = plVar11;
        if ((local_a0._4_4_ != iVar10) || (local_a0 = uVar4, uStack_60 != lVar1)) {
          do {
            local_a0 = uVar4;
            lVar9 = *local_b8;
            local_c0 = *(undefined8 *)(*(longlong *)(lVar9 + 8 + (longlong)iVar6 * 0x20) + 0xd8);
            lVar8 = FUN_14479d2ce(&local_c0);
            if (lVar8 != 0) {
              lVar9 = *(longlong *)(lVar9 + (longlong)iVar6 * 0x20 + 8);
              uVar4 = *(undefined8 *)(lVar9 + 0x20);
              plVar5 = *(longlong **)(lVar9 + 0x28);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
                LOCK();
                plVar2 = plVar5 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
              local_c8 = uVar4;
              FUN_140a1a5e0(uVar4,&local_68,lVar8);
              iVar6 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
                FUN_147a73e62(param_2,iVar6);
              }
              lVar9 = *param_2;
              lVar7 = (longlong)iVar6 * 0x38;
              *(undefined8 *)(lVar9 + lVar7) = local_c0;
              *(undefined8 *)(lVar9 + 8 + lVar7) = local_c8;
              *(longlong **)(lVar9 + 0x10 + lVar7) = plVar5;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              lVar9 = lVar9 + lVar7;
              *(undefined8 *)(lVar9 + 0x18) = 0;
              *(undefined8 *)(lVar9 + 0x18) = local_68;
              local_68 = 0;
              *(undefined4 *)(lVar9 + 0x20) = (undefined4)uStack_60;
              *(undefined4 *)(lVar9 + 0x24) = uStack_60._4_4_;
              uStack_60 = 0;
              *(undefined8 *)(lVar9 + 0x28) = local_58;
              lVar7 = CONCAT44(uStack_4c,uStack_50);
              *(longlong *)(lVar9 + 0x30) = lVar7;
              if (lVar7 != 0) {
                LOCK();
                *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
                UNLOCK();
              }
              FUN_140441f4a(&local_68);
              local_d8 = 3;
              FUN_147ce2758(*(undefined8 *)(lVar9 + 8),0,*(undefined8 *)(lVar9 + 0x18),lVar8);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar5 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
            }
            local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
            FUN_1449c0562(&local_b0);
            iVar6 = local_a0._4_4_;
            uVar4 = local_a0;
          } while (local_b8 != plVar11 ||
                   (CONCAT44(uStack_a4,uStack_a8) != lVar1 || local_a0._4_4_ != iVar10));
        }
      }
      local_78 = local_78 & ~local_84;
      FUN_1449c0562(local_88);
    } while (local_74 < *(int *)(local_80 + 0x18));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a62796 FUN_147a62796 body=93 status=ok
// SIG undefined FUN_147a62796(void)

void FUN_147a62796(longlong *param_1)

{
  int iVar1;
  int in_stack_00000030;
  
  FUN_147bcbe6e();
  iVar1 = 0x800;
  if (in_stack_00000030 < 0x800) {
    iVar1 = in_stack_00000030;
  }
  if (in_stack_00000030 == 0) {
    iVar1 = 0x800;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  *(undefined1 *)(param_1 + 0x3a9) = 1;
  *(byte *)((longlong)param_1 + 0xa4) = *(byte *)((longlong)param_1 + 0xa4) | 0x17;
                    /* WARNING: Could not recover jumptable at 0x000147a627ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1);
  return;
}



// FUNCTION 147a627f4 FUN_147a627f4 body=32 status=ok
// SIG undefined FUN_147a627f4(void)

undefined8 FUN_147a627f4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"UDemoNetConnection");
  return param_2;
}



// FUNCTION 147a62814 FUN_147a62814 body=32 status=ok
// SIG undefined FUN_147a62814(void)

undefined8 FUN_147a62814(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Demo recording/playback driver connection");
  return param_2;
}



// FUNCTION 147a62856 FUN_147a62856 body=937 status=ok
// SIG undefined FUN_147a62856(void)

void FUN_147a62856(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar15;
  char cVar16;
  ulonglong uVar17;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  longlong *local_b0;
  uint local_a8 [7];
  char local_8c;
  longlong local_80;
  char local_58;
  ulonglong local_50;
  longlong **pplVar14;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar15 = *(longlong *)(param_1 + 0x58);
  if (*(longlong **)(lVar15 + 0x8f0) == param_2) {
    FUN_147a62058(lVar15,param_2,param_3);
    *(longlong **)(lVar15 + 0x8f0) = param_2;
    if (param_2 != (longlong *)0x0) {
      local_b0 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_14062a7e2(lVar15 + 0xa88,&local_b0);
    }
    goto LAB_147a628db;
  }
  FUN_14375df50(DAT_14cb0d2b0,&local_b0);
  uVar13 = (ulonglong)(int)local_a8[0];
  if (-1 < (longlong)uVar13) {
    iVar8 = (int)local_b0[1];
    if ((int)local_a8[0] < iVar8) {
      lVar1 = *(longlong *)(*local_b0 + uVar13 * 8);
      uVar17 = uVar13;
      while (lVar1 == 0) {
        uVar17 = uVar17 + 1;
        local_a8[0] = (int)uVar13 + 1;
        iVar8 = (int)local_b0[1];
        if (iVar8 <= (int)local_a8[0]) {
          uVar13 = (ulonglong)local_a8[0];
          break;
        }
        uVar13 = (ulonglong)((int)uVar13 + 1);
        lVar1 = *(longlong *)(*local_b0 + uVar17 * 8);
      }
      if ((int)uVar13 < 0) goto LAB_147a629d2;
    }
    cVar16 = '\0';
    do {
      if (iVar8 <= (int)uVar13) break;
      uVar13 = uVar13 & 0xffffffff;
      if (*(char *)((longlong)param_2 + 0x5a4) == cVar16) {
        if (*(longlong *)(*local_b0 + uVar13 * 8) != 0) {
          FUN_14358d8c6(param_1,param_2,param_3);
          goto LAB_147a629e0;
        }
        break;
      }
      do {
        uVar13 = uVar13 + 1;
        local_a8[0] = (uint)uVar13;
        iVar8 = (int)local_b0[1];
        if (iVar8 <= (int)local_a8[0]) break;
      } while (*(longlong *)(*local_b0 + uVar13 * 8) == 0);
      cVar16 = cVar16 + '\x01';
    } while (-1 < (int)local_a8[0]);
  }
LAB_147a629d2:
  FUN_147a62058(lVar15,param_2,param_3);
LAB_147a629e0:
  *(longlong **)(lVar15 + 0x8f0) = param_2;
  if (param_2 != (longlong *)0x0) {
    local_b0 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_14062a7e2(lVar15 + 0xa88,&local_b0);
  }
  local_f0 = FUN_145983792();
  if ((local_f0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_f0);
  }
  pplVar14 = &local_b0;
  dVar9 = (double)FUN_14578a328(pplVar14,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1a8),
                                &local_f0,5);
  lVar15 = local_80;
  uVar11 = SUB84(pplVar14,0);
  if (local_8c == '\0') {
    lVar1 = *(longlong *)(local_80 + 0x1c8);
    if (lVar1 == 0) {
      local_b8 = DAT_14c846508;
      local_c8 = DAT_14c8464f8;
      dStack_c0 = DAT_14c846500;
LAB_147a62b4c:
      local_d8 = (double)DAT_14c8464f0;
      local_e8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_e0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar10 = *(double **)(lVar1 + 0x228);
      local_e8 = dVar4;
      uStack_e0 = dVar5;
      local_d8 = dVar6;
      uStack_d0 = dVar7;
      if (pdVar10 == (double *)0x0) {
        uVar11 = 0x40;
        pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar10 = DAT_14c8463d0;
        pdVar10[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar10[2] = DAT_14c8463e0;
        pdVar10[3] = dVar9;
        dVar9 = DAT_14c846500;
        pdVar10[4] = DAT_14c8464f8;
        pdVar10[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar10[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar10;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
      uVar12 = movmskpd(uVar11,auVar3);
      if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar10 + 2) = (undefined4)local_d8;
        *(undefined4 *)((longlong)pdVar10 + 0x14) = local_d8._4_4_;
        *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_d0._4_4_;
        *(undefined4 *)pdVar10 = (undefined4)local_e8;
        *(undefined4 *)((longlong)pdVar10 + 4) = local_e8._4_4_;
        *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_e0._4_4_;
        FUN_1448052ee(&local_e8,&local_c8);
        pdVar10[6] = local_b8;
        pdVar10[4] = local_c8;
        pdVar10[5] = dStack_c0;
        lVar15 = local_80;
      }
      local_b8 = pdVar10[6];
      local_c8 = pdVar10[4];
      dStack_c0 = pdVar10[5];
      lVar15 = *(longlong *)(lVar15 + 0x1c8);
      if (lVar15 == 0) goto LAB_147a62b4c;
      local_e8 = *(double *)(lVar15 + 0x260);
      uStack_e0 = *(double *)(lVar15 + 0x268);
      local_d8 = *(double *)(lVar15 + 0x270);
    }
    (**(code **)(*param_2 + 0x690))(param_2,&local_e8,&local_c8);
  }
  if (local_58 == '\x01') {
    FUN_14024445c(local_a8);
  }
LAB_147a628db:
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a62c36 FUN_147a62c36 body=474 status=ok
// SIG undefined FUN_147a62c36(void)

longlong * FUN_147a62c36(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0xe0);
  *puVar6 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = 0x80;
  puVar6[0x15] = 0;
  *(undefined4 *)(puVar6 + 0x16) = 0;
  memset(puVar6 + 2,0,0x88);
  *(undefined8 *)((longlong)puVar6 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0xbc) = 0;
  puVar6[0x19] = 0;
  *(undefined4 *)(puVar6 + 0x1a) = 0;
  puVar6[0x1b] = 0;
  *param_2 = (longlong)puVar6;
  puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_FUN_14a8bce20;
  puVar7[2] = puVar6;
  param_2[1] = (longlong)puVar7;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (param_3 != 0) {
    lVar8 = FUN_144a6c4d8();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (lVar10 = param_3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
       == lVar8 + 0x30)) goto LAB_147a62d16;
  }
  lVar10 = 0;
LAB_147a62d16:
  if (((lVar1 == 0) || (lVar10 == 0)) || (*(char *)(lVar1 + 0xcbe) == '\0')) {
    FUN_140c4bc9a(puVar6,param_3,param_1,1);
  }
  else {
    uVar5 = FUN_1449e2a3e(lVar10);
    lVar1 = *param_2;
    FUN_140c4bc9a(lVar1,param_3,param_1,uVar5 ^ 1);
    if ((((char)(uVar5 ^ 1) == '\0') && (lVar8 = *(longlong *)(lVar1 + 0x20), lVar8 != 0)) &&
       (lVar2 = *(longlong *)(param_3 + 0x10), lVar2 != 0)) {
      lVar9 = *(longlong *)(lVar2 + 0x110);
      if (lVar9 == 0) {
        FUN_140aa6c08(lVar2);
        lVar9 = *(longlong *)(lVar2 + 0x110);
        lVar8 = *(longlong *)(lVar1 + 0x20);
      }
      FUN_147ce2514(lVar8,0,param_3,lVar9,1);
      if (*(char *)(lVar10 + 0x178) == '\x03') {
        FUN_1478c0b8c(lVar10);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (lVar10 != 0 && plVar3 != (longlong *)0x0) {
    cVar4 = FUN_1449e2a3e(lVar10);
    if ((cVar4 != '\0') && (-1 < *(char *)(lVar10 + 0x61))) {
      (**(code **)(*plVar3 + 0x4b0))(plVar3,lVar10);
    }
  }
  return param_2;
}



// FUNCTION 147a62e10 FUN_147a62e10 body=84 status=ok
// SIG undefined FUN_147a62e10(void)

void FUN_147a62e10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (param_2 != 0 && plVar1 != (longlong *)0x0) {
    cVar2 = FUN_1449e2a3e(param_2);
    if ((cVar2 != '\0') && (-1 < *(char *)(param_2 + 0x61))) {
      (**(code **)(*plVar1 + 0x4b0))(plVar1,param_2);
    }
  }
  FUN_147bcd5e4(param_1,param_2);
  return;
}



// FUNCTION 147a62e64 FUN_147a62e64 body=123 status=ok
// SIG undefined FUN_147a62e64(void)

void FUN_147a62e64(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if ((*(longlong *)(param_1 + 0x58) != 0 && param_2 != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x58) + 0xcc0) == '\x01')) {
    local_20 = param_2 + 0x70;
    local_18 = &local_28;
    FUN_147a73fee(param_1 + 0x1de8,local_c);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a62f22 FUN_147a62f22 body=45 status=ok
// SIG undefined FUN_147a62f22(void)

void FUN_147a62f22(longlong param_1,undefined8 param_2)

{
  if (0 < *(int *)(param_1 + 0x100)) {
    FUN_147cdda4a(param_1 + 0xb40,*(undefined8 *)(param_1 + 0x1a8),param_2,
                  **(undefined8 **)(param_1 + 0xf8));
    return;
  }
  return;
}



// FUNCTION 147a62f50 FUN_147a62f50 body=490 status=ok
// SIG undefined FUN_147a62f50(void)

void FUN_147a62f50(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14359e6fe();
  if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
     (FUN_147dab51c(*(longlong *)(param_1 + 0x1a8),&local_58), -1 < (int)local_50)) {
    local_60 = (longlong *)(param_1 + 0x1520);
    do {
      if ((int)local_58[1] <= (int)local_50) break;
      if (*(longlong *)(*local_58 + (ulonglong)local_50 * 8) != 0) {
        plVar8 = (longlong *)FUN_143551d28();
        local_68 = (longlong)(int)plVar8[1];
        if (local_68 != 0) {
          lVar4 = *plVar8;
          local_68 = local_68 << 6;
          lVar9 = 0;
          do {
            iVar3 = *(int *)(param_1 + 0x1528);
            *(uint *)(param_1 + 0x1528) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0x152c) < iVar3 + 1U) {
              FUN_1447a1bd6(local_60,iVar3);
            }
            lVar5 = *local_60;
            lVar10 = (longlong)iVar3 * 0x10;
            puVar2 = (undefined8 *)(lVar5 + lVar10);
            *(undefined8 *)(lVar5 + lVar10) = 0;
            iVar3 = *(int *)(lVar4 + 0x10 + lVar9);
            pvVar6 = *(void **)(lVar4 + 8 + lVar9);
            *(int *)(lVar5 + 8 + lVar10) = iVar3;
            if ((longlong)iVar3 == 0) {
              *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar2,iVar3,0);
              memcpy((void *)*puVar2,pvVar6,(longlong)iVar3 * 2);
            }
            iVar3 = *(int *)(param_1 + 0x10a0);
            *(uint *)(param_1 + 0x10a0) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0x10a4) < iVar3 + 1U) {
              FUN_1447a1bd6((longlong *)(param_1 + 0x1098),iVar3);
            }
            lVar5 = *(longlong *)(param_1 + 0x1098);
            lVar10 = (longlong)iVar3 * 0x10;
            puVar2 = (undefined8 *)(lVar5 + lVar10);
            *(undefined8 *)(lVar5 + lVar10) = 0;
            iVar3 = *(int *)(lVar4 + 0x10 + lVar9);
            pvVar6 = *(void **)(lVar4 + 8 + lVar9);
            *(int *)(lVar5 + 8 + lVar10) = iVar3;
            if ((longlong)iVar3 == 0) {
              *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar2,iVar3,0);
              memcpy((void *)*puVar2,pvVar6,(longlong)iVar3 * 2);
            }
            lVar9 = lVar9 + 0x40;
          } while (local_68 != lVar9);
        }
      }
      uVar1 = local_50 + 1;
      bVar7 = -2 < (int)local_50;
      local_50 = uVar1;
    } while (bVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a6316e FUN_147a6316e body=142 status=ok
// SIG undefined FUN_147a6316e(void)

void FUN_147a6316e(longlong param_1,longlong param_2)

{
  if ((((0 < *(int *)(param_1 + 0x100)) && (**(longlong **)(param_1 + 0xf8) != 0)) && (param_2 != 0)
      ) && ((*(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) != 1 &&
            ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)))) {
    FUN_140de33da(param_1,param_2);
    FUN_14368a3f6(param_1 + 0xb40,param_2,**(undefined8 **)(param_1 + 0xf8),1);
    FUN_14368bafa(param_1 + 0xb40,**(undefined8 **)(param_1 + 0xf8),param_2);
  }
  return;
}



// FUNCTION 147a631fc FUN_147a631fc body=142 status=ok
// SIG undefined FUN_147a631fc(void)

void FUN_147a631fc(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  
  if (param_3 != (longlong *)0x0 && param_2 != 0) {
    iVar1 = FUN_140326250(param_1 + 0xaa8,param_2 + 0x70);
    if (0 < iVar1) {
      (**(code **)(*param_3 + 0x2f8))(param_3);
    }
    if ((((0 < *(int *)(param_1 + 0x100)) && (**(longlong **)(param_1 + 0xf8) != 0)) &&
        (*(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) != 1)) &&
       (*(char *)(param_1 + 0xcc0) == '\x01')) {
      FUN_140326250(param_1 + 0x10f8,param_2 + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 147a6328a FUN_147a6328a body=149 status=ok
// SIG undefined FUN_147a6328a(void)

void FUN_147a6328a(longlong param_1,longlong param_2)

{
  if ((((0 < *(int *)(param_1 + 0x100)) && (**(longlong **)(param_1 + 0xf8) != 0)) &&
      (*(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) != 1)) && (*(byte *)(param_2 + 0x179) < 2))
  {
    FUN_14081b550(param_1,param_2);
    FUN_14081b236(param_1,param_2,0);
    FUN_140b952ca(*(undefined8 *)(param_1 + 0x858),param_2,**(undefined8 **)(param_1 + 0xf8),param_1
                 );
    FUN_14096bbf8(*(undefined8 *)(param_1 + 0x858),param_2,**(undefined8 **)(param_1 + 0xf8),param_1
                 );
    return;
  }
  return;
}



// FUNCTION 147a63320 FUN_147a63320 body=182 status=ok
// SIG undefined FUN_147a63320(void)

void FUN_147a63320(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_39 = param_3;
  if ((((0 < *(int *)(param_1 + 0x100)) && (**(longlong **)(param_1 + 0xf8) != 0)) &&
      (*(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) != 1)) &&
     (((*(char *)(param_1 + 0xcc0) == '\x01' && (param_2 != 0)) &&
      ((*(int *)(param_1 + 0xd80) == 0 && ((*(byte *)(param_2 + 0x31) & 0x20) != 0)))))) {
    local_38 = param_2 + 0x70;
    local_30 = &local_39;
    FUN_147a74578(param_1 + 0x1148,local_24,&local_38,0);
  }
  FUN_1435a00dc(param_1,param_2,local_39);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a633d8 FUN_147a633d8 body=167 status=ok
// SIG undefined FUN_147a633d8(void)

void FUN_147a633d8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_2);
    lVar1 = FUN_144b238ce(lVar1,&local_30);
    if (lVar1 != 0) {
      FUN_140744940(*(undefined8 *)(param_1 + 0xf0),param_2);
      FUN_147a4821c(lVar1,0);
      FUN_140cef0f4(lVar1,0,2);
    }
  }
  FUN_1404e5f7c(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a63480 FUN_147a63480 body=82 status=ok
// SIG undefined FUN_147a63480(void)

void FUN_147a63480(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x830) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a634a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2e8))();
    return;
  }
  lVar1 = FUN_140573df4(param_1);
  if (lVar1 != 0) {
    *(double *)(lVar1 + 0x10) = (double)(*(float *)(param_1 + 0xca8) + -0.01);
  }
  return;
}



// FUNCTION 147a634d2 FUN_147a634d2 body=76 status=ok
// SIG undefined FUN_147a634d2(void)

longlong FUN_147a634d2(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1408e7e96();
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_14482b126(lVar3,0x4000000);
  }
  return lVar2;
}



// FUNCTION 147a6351e FUN_147a6351e body=73 status=ok
// SIG undefined FUN_147a6351e(void)

longlong FUN_147a6351e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146efe1f2(param_1,param_2);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return param_1;
}



// FUNCTION 147a63568 FUN_147a63568 body=533 status=ok
// SIG undefined FUN_147a63568(void)

undefined8 FUN_147a63568(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((param_3 != 0) && ((*(byte *)(param_3 + 0xb1) & 0x40) != 0)) &&
      (0 < *(int *)(param_1 + 0x100))) &&
     ((**(longlong **)(param_1 + 0xf8) != 0 &&
      (*(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) != 1)))) {
    FUN_14010318a(param_3,&local_58,0);
    _Src = local_58;
    local_68 = (void *)0x0;
    local_60 = local_50;
    if ((longlong)local_50 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_50,0);
      memcpy(local_68,_Src,(longlong)local_50 * 2);
    }
    iVar6 = -1;
    if ((longlong)*(int *)(param_1 + 0xa80) != 0) {
      plVar1 = *(longlong **)(param_1 + 0xa78);
      plVar4 = plVar1;
LAB_147a63682:
      if ((int)plVar4[1] != local_60) {
        if ((int)plVar4[1] + local_60 == 1) goto LAB_147a636fd;
        goto LAB_147a636db;
      }
      if (1 < local_60) {
        lVar11 = 0;
        do {
          uVar9 = *(ushort *)(*plVar4 + lVar11);
          uVar10 = (ulonglong)uVar9;
          uVar7 = *(ushort *)((longlong)local_68 + lVar11);
          if (uVar9 == uVar7) {
            if (uVar9 == 0) break;
          }
          else {
            if (0x7f < (uVar7 | uVar9)) goto LAB_147a636f5;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar8 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar8]) goto LAB_147a636f5;
          }
          lVar11 = lVar11 + 2;
        } while( true );
      }
      goto LAB_147a636fd;
    }
LAB_147a6370a:
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (iVar6 == -1) {
      bVar5 = 1;
    }
    else {
      if (*(longlong *)(param_1 + 0x1a8) == 0) {
        lVar11 = *(longlong *)(param_1 + 0xa78);
LAB_147a6374f:
        bVar5 = *(byte *)(lVar11 + 0x10 + (longlong)iVar6 * 0x18);
      }
      else {
        cVar2 = FUN_144b2c478();
        lVar11 = *(longlong *)(param_1 + 0xa78);
        if (cVar2 == '\0') goto LAB_147a6374f;
        bVar5 = *(byte *)(lVar11 + 0x11 + (longlong)iVar6 * 0x18);
      }
      bVar5 = bVar5 ^ 1;
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = 1;
    if (bVar5 != 0) goto LAB_147a635ac;
  }
  uVar3 = FUN_1435a00a6(param_1,param_2,param_3);
LAB_147a635ac:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
LAB_147a636f5:
  if (uVar9 == uVar7) {
LAB_147a636fd:
    iVar6 = (int)((ulonglong)((longlong)plVar4 - (longlong)plVar1) >> 3) * -0x55555555;
    goto LAB_147a6370a;
  }
LAB_147a636db:
  plVar4 = plVar4 + 3;
  if (plVar4 == plVar1 + (longlong)*(int *)(param_1 + 0xa80) * 3) goto LAB_147a6370a;
  goto LAB_147a63682;
}



// FUNCTION 147a6377e FUN_147a6377e body=98 status=ok
// SIG undefined FUN_147a6377e(void)

bool FUN_147a6377e(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  bool bVar3;
  
  if ((param_2 == 0) ||
     (((*(byte *)(param_2 + 99) & 8) == 0 && ((*(byte *)(param_2 + 0x61) & 1) == 0)))) {
    bVar3 = false;
  }
  else {
    cVar2 = FUN_1435a00c0(param_1,param_2);
    bVar3 = true;
    if (cVar2 == '\0') {
      uVar1 = *(ulonglong *)(param_2 + 0x170);
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      bVar3 = uVar1 == DAT_14c892fa8;
    }
  }
  return bVar3;
}



// FUNCTION 147a637e4 thunk_FUN_14358620a body=5 status=ok
// SIG undefined thunk_FUN_14358620a(void)

void thunk_FUN_14358620a(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_208 [40];
  uint *puStack_1e0;
  undefined **ppuStack_1d8;
  longlong *plStack_1d0;
  undefined ***pppuStack_1c8;
  undefined ****ppppuStack_1c0;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  ppppuStack_1c0 = &pppuStack_1c8;
  ppuStack_1d8 = &PTR_FUN_149e37810;
  pppuStack_1c8 = &ppuStack_1d8;
  plStack_1d0 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x68);
  iVar1 = *(int *)(param_1 + 0x13f8);
  if ((longlong)iVar1 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x13f0);
    lVar12 = 0;
    do {
      ppuStack_1d8 = *(undefined ***)(lVar8 + lVar12);
      (**(code **)(*param_2 + 0x150))(param_2,&ppuStack_1d8);
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar1 * 8 != lVar12);
  }
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x13f8) << 3,
               (longlong)*(int *)(param_1 + 0x13fc) << 3);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1a0) * 2,
               (longlong)*(int *)(param_1 + 0x1a4) * 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1b0) * 2,
               (longlong)*(int *)(param_1 + 0x1b4) * 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1c0) * 2,
               (longlong)*(int *)(param_1 + 0x1c4) * 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x6b8),(longlong)*(int *)(param_1 + 0x6bc));
    (**(code **)(*param_2 + 0x10))(param_2,0xb8,0xb8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x13f8) << 3,
               (longlong)*(int *)(param_1 + 0x13fc) << 3);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1408) << 2,
               (longlong)*(int *)(param_1 + 0x140c) << 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1418) << 2,
               (longlong)*(int *)(param_1 + 0x141c) << 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1428) << 2,
               (longlong)*(int *)(param_1 + 0x142c) << 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1460) * 0x18,
               (longlong)*(int *)(param_1 + 0x1464) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1480) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x1484) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x14a0) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x14e8) << 4,
               (longlong)*(int *)(param_1 + 0x14ec) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1508) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x150c) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x1528) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1588) << 5,
               (longlong)*(int *)(param_1 + 0x158c) << 5);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x15a8) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x15ac) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x15c8) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    iVar1 = *(int *)(param_1 + 0x15a8);
    if (iVar1 == 0) {
      uVar13 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar11 = 0;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x15a0);
      if (*(uint **)(param_1 + 0x15a0) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x1590);
      }
      uVar4 = *puVar3;
      if (uVar4 == 0) {
        iVar9 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar9 = iVar1 + -1;
        }
        uVar14 = 0;
        uVar5 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar5 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar5 == uVar14) goto LAB_1435865bf;
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar3[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar5 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar11 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar11) {
        iVar11 = iVar1;
      }
    }
    if (iVar11 != iVar1) {
      uVar4 = 0xffffffff;
      do {
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)
                           *(int *)(*(longlong *)(param_1 + 0x1580) + 0x10 + (longlong)iVar11 * 0x20
                                   ) << 3,
                   (longlong)
                   *(int *)(*(longlong *)(param_1 + 0x1580) + 0x14 + (longlong)iVar11 * 0x20) << 3);
        uVar4 = ~(uint)uVar13 & uVar4;
        puVar3 = *(uint **)(param_1 + 0x15a0);
        if (*(uint **)(param_1 + 0x15a0) == (uint *)0x0) {
          puVar3 = (uint *)(param_1 + 0x1590);
        }
        iVar2 = *(int *)(param_1 + 0x15a8);
        iVar11 = (int)uVar14;
        lVar8 = (longlong)iVar11;
        uVar10 = puVar3[lVar8] & uVar4;
        if (uVar10 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar6 = iVar7;
          if (iVar7 < iVar11) {
            iVar6 = iVar11;
          }
          if (iVar11 < iVar7) {
            lVar12 = 0;
            do {
              uVar10 = puVar3[lVar8 + lVar12 + 1];
              if (uVar10 != 0) {
                uVar14 = (ulonglong)(iVar11 + (int)lVar12 + 1);
                uVar4 = 0xffffffff;
                goto LAB_143586942;
              }
              iVar9 = iVar9 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar6 - lVar8 != lVar12);
            uVar4 = 0xffffffff;
            iVar11 = iVar6;
          }
          uVar14 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar2;
        }
        else {
LAB_143586942:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar5 = uVar13 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar11 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar11) {
            iVar11 = iVar2;
          }
        }
      } while (iVar11 != iVar1);
    }
LAB_1435865bf:
    FUN_147bdbdaa(param_1 + 0x15d0,param_2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1678) << 4,
               (longlong)*(int *)(param_1 + 0x167c) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1698) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x169c) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x16b8) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1718) * 0x14,
               (longlong)*(int *)(param_1 + 0x171c) * 0x14);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1738) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x173c) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x1758) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1810) * 0x28,
               (longlong)*(int *)(param_1 + 0x1814) * 0x28);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1830) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x1834) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x1850) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    puStack_1e0 = (uint *)(param_1 + 0x1818);
    iVar1 = *(int *)(param_1 + 0x1830);
    if (iVar1 == 0) {
      uVar13 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar11 = 0;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x1828);
      if (*(uint **)(param_1 + 0x1828) == (uint *)0x0) {
        puVar3 = puStack_1e0;
      }
      uVar4 = *puVar3;
      if (uVar4 == 0) {
        iVar9 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar9 = iVar1 + -1;
        }
        uVar14 = 0;
        uVar5 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar5 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar5 == uVar14) goto LAB_14358679e;
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar3[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar5 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar11 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar11) {
        iVar11 = iVar1;
      }
    }
    if (iVar11 != iVar1) {
      uVar4 = 0xffffffff;
      do {
        lVar8 = *(longlong *)(param_1 + 0x1808) + (longlong)iVar11 * 0x28;
        FUN_14021219d(param_2,lVar8);
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(lVar8 + 0x18) << 2,
                   (longlong)*(int *)(lVar8 + 0x1c) << 2);
        uVar4 = ~(uint)uVar13 & uVar4;
        puVar3 = *(uint **)(param_1 + 0x1828);
        if (*(uint **)(param_1 + 0x1828) == (uint *)0x0) {
          puVar3 = puStack_1e0;
        }
        iVar2 = *(int *)(param_1 + 0x1830);
        iVar11 = (int)uVar14;
        lVar8 = (longlong)iVar11;
        uVar10 = puVar3[lVar8] & uVar4;
        if (uVar10 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar6 = iVar7;
          if (iVar7 < iVar11) {
            iVar6 = iVar11;
          }
          if (iVar11 < iVar7) {
            lVar12 = 0;
            do {
              uVar10 = puVar3[lVar8 + lVar12 + 1];
              if (uVar10 != 0) {
                uVar14 = (ulonglong)(iVar11 + (int)lVar12 + 1);
                uVar4 = 0xffffffff;
                goto LAB_143586a4a;
              }
              iVar9 = iVar9 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar6 - lVar8 != lVar12);
            uVar4 = 0xffffffff;
            iVar11 = iVar6;
          }
          uVar14 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar2;
        }
        else {
LAB_143586a4a:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar5 = uVar13 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar11 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar11) {
            iVar11 = iVar2;
          }
        }
      } while (iVar11 != iVar1);
    }
LAB_14358679e:
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(&DAT_00001860 + param_1) * 0x18,
               (longlong)*(int *)(param_1 + 0x1864) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1880) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x1884) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x18a0) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1a08) << 3,
               (longlong)*(int *)(param_1 + 0x1a0c) << 3);
    lVar8 = (longlong)*(int *)(param_1 + 0x1a28) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    FUN_147a4757a(param_1 + 0x280,param_2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x450),(longlong)*(int *)(param_1 + 0x454));
    (**(code **)(*param_2 + 0x10))(param_2,0xb8,0xb8);
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_14707999e(*(longlong *)(param_1 + 0x140),param_2);
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a637ea FUN_147a637ea body=179 status=ok
// SIG undefined FUN_147a637ea(void)

void FUN_147a637ea(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_147bd5a56(param_1,&local_28);
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_147cdff02(param_1 + 0xb40,&local_38);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6389e FUN_147a6389e body=320 status=ok
// SIG undefined FUN_147a6389e(void)

void FUN_147a6389e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1417f9c30(*(longlong *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0xb00));
  }
  FUN_1414ee49c(param_1,param_2);
  FUN_14485c47a(param_1 + 0xc88,param_2);
  if (param_2 != 0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar1 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_40[2] = lVar3;
    *local_40 = &PTR_FUN_14a8bc830;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    puVar1[4] = &LAB_147a6313c;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_1417f9b76(param_2,&local_30,&local_40);
    *(undefined8 *)(param_1 + 0xb00) = local_30;
    FUN_1449db362(&local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a639e4 FUN_147a639e4 body=46 status=ok
// SIG undefined FUN_147a639e4(void)

void FUN_147a639e4(longlong param_1)

{
  if (((0 < *(int *)(param_1 + 0x100)) && (**(longlong **)(param_1 + 0xf8) != 0)) &&
     (*(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) != 1)) {
    FUN_147cdffa6(param_1 + 0xb40);
    return;
  }
  return;
}



// FUNCTION 147a63a24 FUN_147a63a24 body=392 status=ok
// SIG undefined FUN_147a63a24(void)

ulonglong FUN_147a63a24(undefined8 param_1)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1408bde70(DAT_14c872ce0,&DAT_14c872b28,&local_48);
  _Src = DAT_14c872b28;
  local_58 = (void *)0x0;
  lVar3 = (longlong)DAT_14c872b30;
  local_50 = DAT_14c872b30;
  local_60 = &local_48;
  if (lVar3 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,DAT_14c872b30,0);
    memcpy(local_58,_Src,lVar3 * 2);
  }
  local_30 = *(undefined8 *)(*(longlong *)(DAT_14cad6230 + 0x78) + 0x18);
  FUN_1400021e4(&local_30,local_70);
  cVar1 = FUN_1434cebb8(&local_60,local_70,param_1);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  uVar4 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
  if (cVar1 == '\0') {
    if (*(longlong *)(DAT_14cad6230 + 0x80) == 0) {
      uVar4 = 0;
    }
    else {
      local_30 = *(undefined8 *)(*(longlong *)(DAT_14cad6230 + 0x80) + 0x18);
      FUN_1400021e4(&local_30,local_70);
      uVar2 = FUN_1434cebb8(&local_60,local_70,param_1);
      uVar4 = (ulonglong)uVar2;
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a63bae FUN_147a63bae body=1143 status=ok
// SIG undefined FUN_147a63bae(void)

void FUN_147a63bae(longlong param_1)

{
  void *_Src;
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong unaff_RBP;
  undefined7 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  longlong local_1d8 [2];
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  ulonglong uStack_1a0;
  undefined2 *local_198;
  int local_190;
  void *local_188;
  int local_180;
  undefined4 local_17c;
  longlong local_178;
  int local_170;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*DAT_14cad60c8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_208);
  }
  local_188 = (void *)0x0;
  local_180 = *(int *)(DAT_14cad6098 + 1);
  lVar8 = (longlong)local_180;
  _Src = (void *)*DAT_14cad6098;
  if (lVar8 == 0) {
    local_17c = 0;
  }
  else {
    FUN_1446dd670(&local_188,local_180,0);
    memcpy(local_188,_Src,lVar8 * 2);
    if (local_180 - 2U < 0x7fffffff) {
      local_198 = *(undefined2 **)(*(longlong *)(param_1 + 0x78) + 0x18);
      FUN_1400021e4(&local_198,&local_178);
      if (local_180 == local_170) {
        bVar15 = true;
        if (1 < local_180) {
          lVar8 = 0;
          while( true ) {
            uVar5 = *(ushort *)((longlong)local_188 + lVar8);
            uVar6 = (uint)uVar5;
            uVar11 = *(ushort *)(local_178 + lVar8);
            uVar13 = (uint)uVar11;
            if (uVar5 != uVar11) {
              if ((uVar11 | uVar5) < 0x80) {
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar11];
                if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar11]) goto LAB_147a63cee;
              }
              iVar2 = uVar6 - uVar13;
              goto LAB_147a63fd1;
            }
            if (uVar5 == 0) break;
LAB_147a63cee:
            lVar8 = lVar8 + 2;
          }
          iVar2 = 0;
LAB_147a63fd1:
          bVar15 = iVar2 == 0;
        }
      }
      else {
        bVar15 = local_170 + local_180 == 1;
      }
      if (local_178 != 0) {
        FUN_1400020a8();
      }
      if (!bVar15) {
        FUN_144a81018(&local_178,"Windows");
        FUN_140056680(&local_198,local_70);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        local_1a8 = 0;
        uStack_1a0 = 0;
        FUN_1408e76da(&local_178);
        puVar9 = local_198;
        if (local_190 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        uVar3 = FUN_14590861c(&local_178,L"DeviceProfiles",puVar9);
        FUN_14105ab36(uVar3,L"DeviceProfiles",L"DeviceProfileNameAndTypes",&local_1a8);
        if ((longlong)(int)uStack_1a0 == 0) {
          uVar6 = 0;
        }
        else {
          lVar14 = (longlong)(int)uStack_1a0 * 0x10 + local_1a8;
          uVar6 = 0;
          lVar8 = local_1a8;
          do {
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            FUN_140056680(local_1d8,&DAT_149e06196);
            local_1e0 = 0;
            local_1e8 = 1;
            FUN_1407cdbc6(lVar8,local_1d8,&local_1b8,&local_1c8);
            if (local_1d8[0] != 0) {
              FUN_1400020a8();
            }
            if ((int)uStack_1c0 == local_190) {
              if (1 < (int)uStack_1c0) {
                lVar10 = 0;
                while( true ) {
                  uVar5 = *(ushort *)(local_1c8 + lVar10);
                  uVar4 = (ulonglong)uVar5;
                  uVar11 = *(ushort *)((longlong)local_198 + lVar10);
                  if (uVar5 != uVar11) break;
                  if (uVar5 == 0) goto LAB_147a63f05;
LAB_147a63ec2:
                  lVar10 = lVar10 + 2;
                }
                if ((uVar11 | uVar5) < 0x80) {
                  uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
                  uVar12 = (ulonglong)uVar11;
                  uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                  if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar12]) goto LAB_147a63ec2;
                }
                if (uVar5 != uVar11) goto LAB_147a63f8c;
              }
LAB_147a63f05:
              uVar7 = (undefined7)(unaff_RBP >> 8);
              if ((int)uStack_1b0 == local_180) {
                unaff_RBP = CONCAT71(uVar7,1);
                if (1 < (int)uStack_1b0) {
                  lVar10 = 0;
                  while( true ) {
                    uVar5 = *(ushort *)(local_1b8 + lVar10);
                    uVar4 = (ulonglong)uVar5;
                    uVar11 = *(ushort *)((longlong)local_188 + lVar10);
                    if (uVar5 != uVar11) {
                      if ((uVar11 | uVar5) < 0x80) {
                        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
                        uVar12 = (ulonglong)uVar11;
                        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar12]) goto LAB_147a63f48;
                      }
                      bVar1 = 1;
                      if (uVar5 == uVar11) goto LAB_147a63f91;
                      goto LAB_147a63f8c;
                    }
                    if (uVar5 == 0) break;
LAB_147a63f48:
                    lVar10 = lVar10 + 2;
                  }
                }
                bVar1 = 1;
              }
              else {
                unaff_RBP = CONCAT71(uVar7,1);
                bVar1 = 1;
                if (local_180 + (int)uStack_1b0 != 1) goto LAB_147a63f8c;
              }
            }
            else {
              if (local_190 + (int)uStack_1c0 == 1) goto LAB_147a63f05;
LAB_147a63f8c:
              bVar1 = 0;
              unaff_RBP = (ulonglong)uVar6;
            }
LAB_147a63f91:
            uVar6 = (uint)unaff_RBP;
            if (local_1c8 != 0) {
              FUN_1400020a8();
            }
            if (local_1b8 != 0) {
              FUN_1400020a8();
            }
            lVar8 = lVar8 + 0x10;
          } while (!(bool)(bVar1 | lVar8 == lVar14));
        }
        lVar8 = FUN_1415de87c(param_1,&local_188,uVar6,0);
        if (lVar8 != 0) {
          FUN_1434cf100(param_1,lVar8);
        }
        FUN_1409263a6(&local_178);
        FUN_1447a1747(local_1a8,uStack_1a0 & 0xffffffff);
        if (local_1a8 != 0) {
          FUN_1400020a8();
        }
        if (local_198 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_188 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a6404a FUN_147a6404a body=56 status=ok
// SIG undefined FUN_147a6404a(void)

void FUN_147a6404a(void)

{
  int iVar1;
  
  if ((DAT_14cad6230 != 0) && (0 < *(int *)(DAT_14cad6230 + 0x98))) {
    iVar1 = *(int *)(DAT_14cad6230 + 0xac);
    if (iVar1 < 1) {
      *(int *)(DAT_14cad6230 + 0xa4) = *(int *)(DAT_14cad6230 + 0xa4) + 1;
      FUN_1414cecc8(iVar1,2);
      return;
    }
    *(int *)(DAT_14cad6230 + 0xac) = iVar1 + -1;
  }
  return;
}



// FUNCTION 147a64082 FUN_147a64082 body=21 status=ok
// SIG undefined FUN_147a64082(void)

undefined8 * FUN_147a64082(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(DAT_14cad6230 + 0xb8);
  return param_2;
}



// FUNCTION 147a6409e FUN_147a6409e body=83 status=ok
// SIG undefined FUN_147a6409e(void)

void FUN_147a6409e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8bb7b0;
  FUN_147a6b7f1(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147a6b7f1(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147a69dcc(param_1);
  return;
}



// FUNCTION 147a640f1 FUN_147a640f1 body=87 status=ok
// SIG undefined FUN_147a640f1(void)

undefined8 FUN_147a640f1(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((*param_1 == lVar1) && ((int)param_1[2] == (int)param_2[2])) {
    uVar2 = FUN_147a758de(param_1[1],param_2[1]);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147a64148 FUN_147a64148 body=54 status=ok
// SIG undefined FUN_147a64148(void)

undefined8 * FUN_147a64148(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_145b087ba(param_1 + 1);
  *(undefined8 *)param_1[1] = 0;
  return param_1;
}



// FUNCTION 147a6417e FUN_147a6417e body=1405 status=ok
// SIG undefined FUN_147a6417e(void)

undefined8 FUN_147a6417e(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  longlong lVar26;
  undefined8 *puVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  undefined4 local_380;
  int local_37c;
  undefined8 local_378;
  undefined8 *local_370;
  longlong local_368;
  undefined8 uStack_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar9 = 0;
  uVar7 = 0;
  if (*param_1 != 0) {
    uVar7 = (*(code *)PTR_FUN_14c75b148)(*param_1 + 0x2c,0x10,0);
  }
  local_368 = 0;
  uStack_360 = 0;
  lVar17 = param_1[2];
  if ((longlong)(int)lVar17 != 0) {
    lVar20 = param_1[1];
    lVar26 = 0;
    local_380 = uVar7;
    local_378 = param_2;
    do {
      if (*(longlong *)(lVar20 + lVar26) != 0) {
        FUN_140c608a8(&local_368);
      }
      lVar5 = local_368;
      lVar26 = lVar26 + 8;
    } while ((longlong)(int)lVar17 * 8 != lVar26);
    iVar11 = (int)uStack_360;
    lVar17 = (longlong)(int)uStack_360;
    if (1 < lVar17) {
      memset(local_348,0,0x2f0);
      local_358 = lVar5;
      local_350 = lVar17 * 0x10 + lVar5 + -0x10;
      fVar29 = logf((float)iVar11);
      local_348[0] = (int)(longlong)(fVar29 + fVar29);
      plVar12 = &local_358;
      do {
        puVar23 = (undefined8 *)*plVar12;
        puVar15 = (undefined8 *)plVar12[1];
        iVar11 = (int)plVar12[2];
        iVar8 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar23) >> 4);
        uVar21 = iVar8 + 1;
        puVar18 = puVar15;
        puVar24 = puVar23;
        puVar13 = puVar23;
        local_388 = plVar12;
        if (iVar11 != 0) {
LAB_147a642a2:
          if (8 < (int)uVar21) {
            uVar2 = puVar24[(ulonglong)(uVar21 >> 1) * 2];
            uVar3 = (puVar24 + (ulonglong)(uVar21 >> 1) * 2)[1];
            uVar4 = puVar24[1];
            puVar24[(ulonglong)(uVar21 >> 1) * 2] = *puVar24;
            (puVar24 + (ulonglong)(uVar21 >> 1) * 2)[1] = uVar4;
            local_58._0_4_ = (undefined4)uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar3;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)puVar24 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar24 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_50._4_4_;
            puVar27 = puVar15 + 2;
            puVar13 = puVar24;
            local_37c = iVar11;
            local_370 = puVar23;
            local_58 = uVar2;
            uStack_50 = uVar3;
            do {
              puVar23 = puVar13 + 2;
              puVar16 = puVar13 + 2;
              do {
                puVar13 = puVar16;
                puVar10 = puVar23;
                if (puVar15 < puVar13) break;
                cVar6 = FUN_1434d5e86(puVar24,puVar13);
                puVar23 = puVar10 + 2;
                puVar16 = puVar13 + 2;
              } while (cVar6 == '\0');
              puVar23 = puVar27 + -4;
              do {
                puVar16 = puVar27;
                puVar22 = puVar23;
                puVar27 = puVar16 + -2;
                if (puVar27 <= puVar24) break;
                cVar6 = FUN_1434d5e86(puVar27,puVar24);
                puVar23 = puVar22 + -2;
              } while (cVar6 == '\0');
              if (puVar27 < puVar13) goto LAB_147a64362;
              uVar2 = *puVar13;
              uVar3 = puVar13[1];
              uVar4 = puVar16[-1];
              *puVar13 = *puVar27;
              puVar13[1] = uVar4;
              local_58._0_4_ = (undefined4)uVar2;
              local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
              uStack_50._0_4_ = (undefined4)uVar3;
              uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
              *(undefined4 *)puVar27 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar16 + -0xc) = local_58._4_4_;
              *(undefined4 *)(puVar16 + -1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar16 + -4) = uStack_50._4_4_;
              local_58 = uVar2;
              uStack_50 = uVar3;
            } while( true );
          }
          for (; plVar12 = local_388, puVar13 = puVar24, puVar23 = puVar24, puVar24 < puVar15;
              puVar15 = puVar15 + -2) {
            while (puVar18 = puVar13, puVar23 = puVar23 + 2, puVar23 <= puVar15) {
              cVar6 = FUN_1434d5e86(puVar18,puVar23);
              puVar13 = puVar23;
              if (cVar6 == '\0') {
                puVar13 = puVar18;
              }
            }
            local_58 = *puVar18;
            uStack_50 = puVar18[1];
            uVar3 = local_58;
            uVar4 = uStack_50;
            uVar2 = puVar15[1];
            *puVar18 = *puVar15;
            puVar18[1] = uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(undefined4 *)puVar15 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
            local_58 = uVar3;
            uStack_50 = uVar4;
          }
          goto LAB_147a64654;
        }
LAB_147a6442c:
        plVar12 = local_388;
        if (uVar21 != 0) {
          iVar11 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
          iVar8 = iVar11;
joined_r0x000147a6444b:
          do {
            iVar14 = iVar11 * 2 + 1;
            if (iVar14 < (int)uVar21) {
              iVar25 = iVar11 * 2 + 2;
              if ((iVar25 < (int)uVar21) &&
                 (cVar6 = FUN_1434d5e86(puVar13 + (longlong)iVar25 * 2,
                                        puVar13 + (longlong)iVar14 * 2), cVar6 == '\0')) {
                iVar14 = iVar25;
              }
              puVar15 = puVar13 + (longlong)iVar11 * 2;
              puVar23 = puVar13 + (longlong)iVar14 * 2;
              cVar6 = FUN_1434d5e86(puVar15,puVar23);
              if (cVar6 != '\0') {
                local_58 = *puVar15;
                uStack_50 = puVar15[1];
                uVar3 = local_58;
                uVar4 = uStack_50;
                uVar2 = puVar23[1];
                *puVar15 = *puVar23;
                puVar15[1] = uVar2;
                local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                *(undefined4 *)puVar23 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar23 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_50._4_4_;
                iVar11 = iVar14;
                local_58 = uVar3;
                uStack_50 = uVar4;
                goto joined_r0x000147a6444b;
              }
            }
            bVar28 = iVar8 != 0;
            iVar11 = iVar8 + -1;
            iVar8 = iVar11;
          } while (bVar28);
          plVar12 = local_388;
          if (1 < (int)uVar21) {
            uVar19 = (ulonglong)uVar21 - 1;
            local_58 = *puVar13;
            uStack_50 = puVar13[1];
            uVar3 = local_58;
            uVar4 = uStack_50;
            uVar2 = (puVar13 + uVar19 * 2)[1];
            *puVar13 = puVar13[uVar19 * 2];
            puVar13[1] = uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            puVar15 = puVar13 + uVar19 * 2;
            *(undefined4 *)puVar15 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
            local_58 = uVar3;
            uStack_50 = uVar4;
            if (uVar21 != 2) {
              do {
                iVar11 = 0;
                iVar14 = 1;
                iVar8 = 0;
                do {
                  iVar11 = iVar11 + 2;
                  iVar25 = iVar14;
                  if (((longlong)iVar11 < (longlong)uVar19) &&
                     (cVar6 = FUN_1434d5e86(puVar13 + (longlong)iVar11 * 2,
                                            puVar13 + (longlong)iVar14 * 2), cVar6 == '\0')) {
                    iVar25 = iVar11;
                  }
                  puVar15 = puVar13 + (longlong)iVar8 * 2;
                  puVar23 = puVar13 + (longlong)iVar25 * 2;
                  cVar6 = FUN_1434d5e86(puVar15,puVar23);
                  if (cVar6 == '\0') break;
                  uVar2 = *puVar15;
                  uVar3 = puVar15[1];
                  uVar4 = puVar23[1];
                  *puVar15 = *puVar23;
                  puVar15[1] = uVar4;
                  local_58._0_4_ = (undefined4)uVar2;
                  local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
                  uStack_50._0_4_ = (undefined4)uVar3;
                  uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
                  *(undefined4 *)puVar23 = (undefined4)local_58;
                  *(undefined4 *)((longlong)puVar23 + 4) = local_58._4_4_;
                  *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_50;
                  *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_50._4_4_;
                  iVar11 = iVar25 * 2;
                  iVar14 = iVar25 * 2 + 1;
                  iVar8 = iVar25;
                  local_58 = uVar2;
                  uStack_50 = uVar3;
                } while ((longlong)iVar14 < (longlong)uVar19);
                uVar1 = uVar19 - 1;
                local_58 = *puVar13;
                uStack_50 = puVar13[1];
                uVar3 = local_58;
                uVar4 = uStack_50;
                uVar2 = (puVar13 + uVar1 * 2)[1];
                *puVar13 = puVar13[uVar1 * 2];
                puVar13[1] = uVar2;
                local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                puVar15 = puVar13 + uVar1 * 2;
                *(undefined4 *)puVar15 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
                bVar28 = 2 < uVar19;
                plVar12 = local_388;
                uVar19 = uVar1;
                local_58 = uVar3;
                uStack_50 = uVar4;
              } while (bVar28);
            }
          }
        }
LAB_147a64654:
        plVar12 = plVar12 + -3;
      } while (&local_358 <= plVar12);
    }
    param_2 = local_378;
    uVar7 = local_380;
    if ((int)uStack_360 == 0) {
      uVar9 = 0;
    }
    else {
      lVar20 = (longlong)(int)uStack_360 << 4;
      uVar9 = 0;
      lVar17 = local_368;
      do {
        uVar9 = (*(code *)PTR_FUN_14c75b148)(lVar17,0x10,uVar9);
        lVar17 = lVar17 + 0x10;
        lVar20 = lVar20 + -0x10;
      } while (lVar20 != 0);
    }
  }
  FUN_140002266(param_2,L"%08X%08X",uVar7,uVar9);
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_147a64362:
  local_58 = *puVar24;
  uStack_50 = puVar24[1];
  uVar3 = local_58;
  uVar4 = uStack_50;
  uVar2 = puVar16[-1];
  *puVar24 = *puVar27;
  puVar24[1] = uVar2;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar27 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar16 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar16 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar16 + -4) = uStack_50._4_4_;
  iVar11 = local_37c + -1;
  puVar16 = puVar16 + -4;
  local_58 = uVar3;
  uStack_50 = uVar4;
  if ((longlong)puVar22 - (longlong)local_370 < (longlong)puVar18 - (longlong)puVar10) {
    plVar12 = local_388;
    if (puVar13 < puVar15) {
      *local_388 = (longlong)puVar13;
      local_388[1] = (longlong)puVar15;
      *(int *)(local_388 + 2) = iVar11;
      plVar12 = local_388 + 3;
    }
    puVar13 = puVar24;
    if (puVar27 <= puVar24 + 2) goto LAB_147a64654;
  }
  else {
    if (puVar24 + 2 < puVar27) {
      *local_388 = (longlong)puVar24;
      local_388[1] = (longlong)puVar16;
      *(int *)(local_388 + 2) = iVar11;
      local_388 = local_388 + 3;
    }
    plVar12 = local_388;
    puVar16 = puVar15;
    puVar22 = puVar15;
    puVar24 = puVar10;
    if (puVar15 <= puVar13) goto LAB_147a64654;
  }
  local_388 = plVar12;
  iVar8 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar24) >> 4);
  uVar21 = iVar8 + 1;
  puVar15 = puVar16;
  puVar18 = puVar22;
  puVar23 = puVar24;
  puVar24 = puVar13;
  if (iVar11 == 0) goto LAB_147a6442c;
  goto LAB_147a642a2;
}



// FUNCTION 147a64710 FUN_147a64710 body=438 status=ok
// SIG undefined FUN_147a64710(void)

undefined8 FUN_147a64710(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_1446f470e(&local_50,L"Gender",1);
  lVar2 = FUN_140f1fabf(*(undefined8 *)(param_1 + 0x10),local_50);
  FUN_1406f1d90(*(undefined8 *)(lVar2 + 0x70),&local_60,*(undefined1 *)(param_1 + 0x28));
  puVar3 = (undefined8 *)FUN_1447a1f4a(&local_60);
  iVar1 = *(int *)(puVar3 + 1) + -1;
  if (*(int *)(puVar3 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,*puVar3,iVar1);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    FUN_1446f470e(&local_68,L"Plurality",1);
    lVar2 = FUN_140f1fabf(*(undefined8 *)(param_1 + 0x10),local_68);
    thunk_FUN_14047a987(&local_48,&DAT_149dfd133,2);
    FUN_1406f1d90(*(undefined8 *)(lVar2 + 0x70),&local_60,*(undefined1 *)(param_1 + 0x29));
    puVar3 = (undefined8 *)FUN_1447a1f4a(&local_60);
    iVar1 = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_48,*puVar3,iVar1);
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  puVar4 = &DAT_149dfb77a;
  if ((int)uStack_40 != 0) {
    puVar4 = local_48;
  }
  local_30 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_30,&local_60);
  plVar5 = (longlong *)&DAT_149dfb77a;
  if (local_58 != 0) {
    plVar5 = local_60;
  }
  FUN_140002266(param_2,L"%s (%s)",plVar5,puVar4);
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a648ce FUN_147a648ce body=77 status=ok
// SIG undefined FUN_147a648ce(void)

void FUN_147a648ce(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6491c FUN_147a6491c body=77 status=ok
// SIG undefined FUN_147a6491c(void)

void FUN_147a6491c(longlong param_1,char param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    FUN_1412e3d1e(&local_28);
    *(undefined4 *)(param_1 + 0x2c) = local_28;
    *(undefined4 *)(param_1 + 0x30) = uStack_24;
    *(undefined4 *)(param_1 + 0x34) = uStack_20;
    *(undefined4 *)(param_1 + 0x38) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a64986 FUN_147a64986 body=295 status=ok
// SIG undefined FUN_147a64986(void)

void FUN_147a64986(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined ****local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  *(byte *)((longlong)param_2 + 0x2a) = *(byte *)((longlong)param_2 + 0x2a) | 1;
  uVar3 = 0;
  if (param_2[0xd] != 0) {
    uVar3 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_1b0 = (undefined **)CONCAT44(local_1b0._4_4_,uVar3);
    (**(code **)(*param_2 + 0x170))(param_2,&local_1b0,4);
    uVar3 = (uint)local_1b0;
    if (1 < (uint)local_1b0) {
      FUN_14572541c(param_2);
      uVar3 = (uint)local_1b0;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((uVar3 == 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    FUN_144750a86(param_1,&local_1b0,0,0);
    ppuVar4 = local_1b0;
    if ((int)local_1a8 == 0) {
      ppuVar4 = (undefined **)&DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Engine/Private/DialogueWave.cpp",0x20f,
                  L"This platform requires cooked packages, and audio data was not cooked into %s.",
                  ppuVar4);
    if (local_1b0 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a64aae FUN_147a64aae body=308 status=ok
// SIG undefined FUN_147a64aae(void)

undefined8 FUN_147a64aae(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_108 [40];
  longlong local_e0 [2];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  longlong local_b0;
  longlong *local_a0;
  undefined1 *local_98;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_147a6417e(param_1,local_d0);
  FUN_14146ec20(local_c0,local_d0);
  FUN_140056680(local_e0,L"ContextHash");
  local_a0 = local_e0;
  local_98 = local_c0;
  FUN_1472ad862(&local_88,local_8c,&local_a0,0);
  if (local_e0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x20);
  }
  FUN_140a69a60(param_2,puVar1,&local_88);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(&local_88);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a64be4 FUN_147a64be4 body=134 status=ok
// SIG undefined FUN_147a64be4(void)

undefined8 FUN_147a64be4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a64aae(param_1,&local_30);
  puVar1 = &DAT_149dfb77a;
  puVar2 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar2 = local_30;
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar1 = (undefined2 *)*param_3;
  }
  FUN_140002266(param_2,L"%s_%s",puVar1,puVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a64cd8 FUN_147a64cd8 body=327 status=ok
// SIG undefined FUN_147a64cd8(void)

void FUN_147a64cd8(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_6[1];
  lVar2 = param_1[0x2f];
  local_88 = FUN_1478b6144(param_4,param_3);
  *(byte *)(param_4 + 0x199) = *(byte *)(param_4 + 0x199) & 0xf7 | (0 < (int)lVar2) << 3;
  local_90 = param_6;
  local_98 = param_5;
  (**(code **)(*(longlong *)param_1[0x2d] + 0x310))
            ((longlong *)param_1[0x2d],param_2,param_3,param_4);
  if (((((int)param_6[1] == (int)lVar1 + 1) && (local_88 == 0)) &&
      (lVar1 = *(longlong *)(*param_6 + -8 + (longlong)(int)param_6[1] * 8), lVar1 != 0)) &&
     ((0 < (int)lVar2 && ((*(byte *)(param_4 + 0x199) & 4) != 0)))) {
    local_58 = param_1 + 0x2e;
    local_80 = *(undefined8 *)(param_4 + 0x30);
    local_78 = *(undefined8 *)(param_4 + 8);
    local_68 = *(undefined4 *)(param_4 + 0x218);
    local_70 = lVar1;
    local_64 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_60 = 0;
    local_50 = *(undefined4 *)(param_4 + 0x1b4);
    FUN_14372ab58(&local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a64e50 FUN_147a64e50 body=32 status=ok
// SIG undefined FUN_147a64e50(void)

undefined8 FUN_147a64e50(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Dialogue Wave Description");
  return param_2;
}



// FUNCTION 147a64e76 FUN_147a64e76 body=77 status=ok
// SIG undefined FUN_147a64e76(void)

void FUN_147a64e76(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a64ec4 FUN_147a64ec4 body=77 status=ok
// SIG undefined FUN_147a64ec4(void)

void FUN_147a64ec4(longlong param_1,char param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    FUN_1412e3d1e(&local_28);
    *(undefined4 *)(param_1 + 0x60) = local_28;
    *(undefined4 *)(param_1 + 100) = uStack_24;
    *(undefined4 *)(param_1 + 0x68) = uStack_20;
    *(undefined4 *)(param_1 + 0x6c) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a64f12 FUN_147a64f12 body=61 status=ok
// SIG undefined FUN_147a64f12(void)

void FUN_147a64f12(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1446e0b6e();
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar1 = (longlong)*(int *)(param_1 + 0x58) * 0x38;
    do {
      FUN_147a64f50(param_1,lVar2);
      lVar2 = lVar2 + 0x38;
      lVar1 = lVar1 + -0x38;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 147a64f50 FUN_147a64f50 body=403 status=ok
// SIG undefined FUN_147a64f50(void)

void FUN_147a64f50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_2 + 0x18) == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x30);
    if (lVar4 == 0) {
      lVar4 = FUN_147a653b6(DAT_14c951640);
      if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
        *(longlong *)(param_2 + 0x30) = lVar4;
        if (lVar4 == 0) goto LAB_147a64f7a;
      }
      else {
        FUN_1456cec3c(lVar4);
        *(longlong *)(param_2 + 0x30) = lVar4;
      }
    }
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(lVar4 + 0x168) = uVar3;
    FUN_147a6544c(uVar3,*(undefined8 *)(param_2 + 0x30));
    FUN_144a5dc74(&local_40);
    local_30 = 0;
    FUN_147a6527c(param_1,local_50,param_2);
    FUN_140008f88(&local_40,local_50);
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_30 = 0;
    lVar4 = *(longlong *)(param_2 + 0x30);
    FUN_1458791db(*(undefined8 *)(lVar4 + 0x170),*(undefined4 *)(lVar4 + 0x178));
    *(undefined4 *)(lVar4 + 0x178) = 0;
    if (*(int *)(lVar4 + 0x17c) != 0) {
      FUN_147a75946(lVar4 + 0x170,0);
    }
    lVar4 = *(longlong *)(param_2 + 0x30);
    iVar2 = *(int *)(lVar4 + 0x178);
    *(uint *)(lVar4 + 0x178) = iVar2 + 1U;
    if (*(uint *)(lVar4 + 0x17c) < iVar2 + 1U) {
      FUN_147a759b8((longlong *)(lVar4 + 0x170),iVar2);
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x170) + (longlong)iVar2 * 0x18);
    *puVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 8))();
    }
    *(undefined4 *)(puVar1 + 1) = local_38;
    *(undefined4 *)(puVar1 + 2) = local_30;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
LAB_147a64f7a:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a650e4 FUN_147a650e4 body=114 status=ok
// SIG undefined FUN_147a650e4(void)

undefined8 FUN_147a650e4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1407c869a(param_1 + 0x60,local_38,0);
  FUN_147a64be4(param_3,param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a65158 FUN_147a65158 body=291 status=ok
// SIG undefined FUN_147a65158(void)

undefined8 FUN_147a65158(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined8 local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x38) + -1;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar3 = 0;
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_1407c869a(param_1 + 0x60,&local_58,0);
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    iVar3 = *(int *)(param_1 + 0x48) + -1;
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar3 = 0;
    }
    iVar1 = DAT_14cad64d0 + -1;
    if (DAT_14cad64d0 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_58,DAT_14cad64c8,iVar1);
  }
  local_40 = local_58;
  local_38 = (int)uStack_50 + -1;
  if ((int)uStack_50 == 0) {
    local_38 = 0;
  }
  local_68 = uVar2;
  local_60 = iVar3;
  FUN_1446e940c(local_6c,&local_40);
  local_40 = DAT_14cad64a8;
  local_38 = DAT_14cad64b0 + -1;
  if (DAT_14cad64b0 == 0) {
    local_38 = 0;
  }
  FUN_1446e940c(local_70,&local_40);
  FUN_140208c1e(param_2,local_70,local_6c,&local_68);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6527c FUN_147a6527c body=313 status=ok
// SIG undefined FUN_147a6527c(void)

longlong * FUN_147a6527c(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_3 != 0) {
    FUN_147a650e4(param_1,&local_58);
    if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
      lVar3 = param_1 + 0x30;
    }
    else {
      lVar3 = param_1 + 0x40;
      iVar1 = DAT_14cad64d0 + -1;
      if (DAT_14cad64d0 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_58,DAT_14cad64c8,iVar1);
    }
    FUN_144a5dc74(param_2);
    local_48 = local_58;
    local_40 = local_50 + -1;
    if (local_50 == 0) {
      local_40 = 0;
    }
    FUN_1446e940c(local_5c,&local_48);
    local_48 = DAT_14cad64a8;
    local_40 = DAT_14cad64b0 + -1;
    if (DAT_14cad64b0 == 0) {
      local_40 = 0;
    }
    FUN_1446e940c(local_60,&local_48);
    cVar2 = FUN_140008c02(local_60,local_5c,param_2,lVar3);
    if ((cVar2 == '\0') && ((longlong *)*param_2 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\0') goto LAB_147a652ae;
  }
  FUN_147a65158(param_1,param_2);
LAB_147a652ae:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a653b6 FUN_147a653b6 body=148 status=ok
// SIG undefined FUN_147a653b6(void)

undefined8 FUN_147a653b6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459e71f4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6544c FUN_147a6544c body=465 status=ok
// SIG undefined FUN_147a6544c(void)

void FUN_147a6544c(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  longlong lVar14;
  
  lVar14 = *(longlong *)(param_1 + 0x30);
  if (DAT_14c950c29 == 1) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = *(longlong *)(param_1 + 0x30);
    }
  }
  *(longlong *)(param_2 + 0x30) = lVar14;
  bVar7 = *(byte *)(param_1 + 0x38) & 1;
  bVar1 = *(byte *)(param_2 + 0x38);
  *(byte *)(param_2 + 0x38) = bVar1 & 0xfe | bVar7;
  bVar8 = *(byte *)(param_1 + 0x38) & 2;
  *(byte *)(param_2 + 0x38) = bVar1 & 0xfc | bVar7 | bVar8;
  bVar9 = *(byte *)(param_1 + 0x38) & 4;
  *(byte *)(param_2 + 0x38) = bVar1 & 0xf8 | bVar7 | bVar8 | bVar9;
  bVar10 = *(byte *)(param_1 + 0x38) & 8;
  *(byte *)(param_2 + 0x38) = bVar1 & 0xf0 | bVar7 | bVar8 | bVar9 | bVar10;
  bVar11 = *(byte *)(param_1 + 0x38) & 0x10;
  *(byte *)(param_2 + 0x38) = bVar1 & 0xe0 | bVar7 | bVar8 | bVar9 | bVar10 | bVar11;
  bVar12 = *(byte *)(param_1 + 0x38) & 0x20;
  *(byte *)(param_2 + 0x38) = bVar1 & 0xc0 | bVar7 | bVar8 | bVar9 | bVar10 | bVar11 | bVar12;
  bVar13 = *(byte *)(param_1 + 0x38) & 0x40;
  *(byte *)(param_2 + 0x38) =
       bVar1 & 0x80 | bVar7 | bVar8 | bVar9 | bVar10 | bVar11 | bVar12 | bVar13;
  *(undefined1 *)(param_2 + 0x39) = *(undefined1 *)(param_1 + 0x39);
  *(byte *)(param_2 + 0x38) =
       bVar7 | bVar8 | bVar9 | bVar10 | bVar11 | bVar12 | bVar13 | *(byte *)(param_1 + 0x38) & 0x80;
  FUN_1477db3d8(param_2 + 0x90,param_1 + 0x90);
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  uVar2 = *(undefined4 *)(param_1 + 0xf0);
  uVar3 = *(undefined4 *)(param_1 + 0xf4);
  uVar4 = *(undefined4 *)(param_1 + 0xf8);
  uVar5 = *(undefined4 *)(param_1 + 0xfc);
  *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_2 + 0xe8) = uVar6;
  *(undefined4 *)(param_2 + 0xf0) = uVar2;
  *(undefined4 *)(param_2 + 0xf4) = uVar3;
  *(undefined4 *)(param_2 + 0xf8) = uVar4;
  *(undefined4 *)(param_2 + 0xfc) = uVar5;
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_2 + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  lVar14 = *(longlong *)(param_1 + 0x110);
  if (DAT_14c950c29 == 1) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = *(longlong *)(param_1 + 0x110);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x110) = lVar14;
  lVar14 = *(longlong *)(param_1 + 0x118);
  if ((bVar1 & 1) != 0) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = *(longlong *)(param_1 + 0x118);
    }
  }
  *(longlong *)(param_2 + 0x118) = lVar14;
  FUN_1477daebe(param_2 + 0x120,param_1 + 0x120);
  lVar14 = *(longlong *)(param_1 + 0x130);
  if (DAT_14c950c29 == 1) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = *(longlong *)(param_1 + 0x130);
    }
  }
  *(longlong *)(param_2 + 0x130) = lVar14;
  FUN_1477daf1e(param_2 + 0x138,param_1 + 0x138);
  FUN_1477daf1e(param_2 + 0x148,param_1 + 0x148);
  return;
}



// FUNCTION 147a6561e FUN_147a6561e body=94 status=ok
// SIG undefined FUN_147a6561e(void)

void FUN_147a6561e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  
  plVar3 = DAT_14c8442c0;
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x28) != '\0')) &&
     (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,lVar1);
    if (cVar4 != '\0') {
      *(longlong **)(lVar1 + 0x20) = plVar3;
      *(undefined1 *)(lVar1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x000147a65671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147a6567c FUN_147a6567c body=68 status=ok
// SIG undefined FUN_147a6567c(void)

void FUN_147a6567c(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147a75b3c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147a656c0 FUN_147a656c0 body=276 status=ok
// SIG undefined FUN_147a656c0(void)

void FUN_147a656c0(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a8b9d20;
  param_1[9] = 0;
  param_1[10] = 0x8000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x800000000;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x3a) = param_2;
  return;
}



// FUNCTION 147a657d4 FUN_147a657d4 body=725 status=ok
// SIG undefined FUN_147a657d4(void)

void FUN_147a657d4(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  wchar_t *pwVar11;
  int *piVar12;
  bool bVar13;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar4 = *(int *)(param_1 + 0x1d0);
  bVar13 = iVar4 == 0;
  piVar9 = &DAT_14c7614e8;
  if (bVar13) {
    piVar9 = &DAT_14c7614dc;
  }
  piVar10 = &DAT_14c7614ec;
  if (bVar13) {
    piVar10 = &DAT_14c7614e0;
  }
  piVar12 = &DAT_14c7614f0;
  if (bVar13) {
    piVar12 = &DAT_14c7614e4;
  }
  iVar5 = *piVar12;
  if ((((*(longlong *)(param_1 + 0x1c0) != 0) && (*(int *)(param_1 + 0x10) == *piVar9)) &&
      (*(int *)(param_1 + 0x1c) == *piVar10)) && (*(int *)(param_1 + 0x1c8) == iVar5))
  goto LAB_147a65861;
  FUN_147a65aaa(param_1 + 0x10);
  if (0 < *(int *)(param_1 + 0x1b8)) {
    lVar8 = 0;
    do {
      pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar8 * 8) + 0xbc);
      *pbVar1 = *pbVar1 & 0xf7;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x1b8));
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    FUN_147a75c80(param_1 + 0x1b0,0);
  }
  plVar2 = (longlong *)(param_1 + 0x160);
  local_98 = param_1 + 0x170;
  local_a0 = (longlong *)&DAT_100000000;
  local_90 = 0xffffffff;
  local_88 = 0;
  if (*(int *)(param_1 + 0x188) != 0) {
    FUN_1449c0562(&local_a0);
  }
  pplVar3 = (longlong **)(param_1 + 0x1c0);
  local_68 = local_90;
  uVar6 = local_68;
  local_60 = local_88;
  local_5c = CONCAT44(local_5c._4_4_,local_84);
  local_78 = local_a0;
  uStack_70 = local_98;
  local_68._4_4_ = (int)((ulonglong)local_90 >> 0x20);
  local_80 = plVar2;
  if (local_68._4_4_ < *(int *)(local_98 + 0x18)) {
    iVar7 = local_68._4_4_;
    local_68 = uVar6;
    do {
      FUN_147a75ce0(param_1 + 0xc0,&local_a0,(longlong)iVar7 * 0x18 + *local_80);
      local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
      FUN_1449c0562(&local_78);
      iVar7 = local_68._4_4_;
      uVar6 = local_68;
    } while (local_68._4_4_ < *(int *)(uStack_70 + 0x18));
  }
  local_68 = uVar6;
  FUN_147a65c34(plVar2);
  local_4d = 3;
  if (iVar4 == 0) {
    local_4d = 0x28;
  }
  pwVar11 = L"VisibilityAtlas";
  if (iVar4 == 0) {
    pwVar11 = L"HeightFieldAtlas";
  }
  local_78 = (longlong *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_70 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_5c = CONCAT44(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x28));
  local_80 = (longlong *)&DAT_00020008;
  local_68 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
  local_60 = 0;
  local_54 = 0x10001;
  local_50 = 0x101;
  local_4e = 0;
  local_4c = 0xff00;
  FUN_14613d399(&local_a0,&local_80,pwVar11);
  if (pplVar3 == &local_a0) {
LAB_147a65a89:
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 0x38))();
    }
  }
  else {
    plVar2 = *pplVar3;
    *pplVar3 = local_a0;
    local_a0 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
      goto LAB_147a65a89;
    }
  }
  *(int *)(param_1 + 0x1c8) = iVar5;
  *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
LAB_147a65861:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a65aaa FUN_147a65aaa body=393 status=ok
// SIG undefined FUN_147a65aaa(void)

void FUN_147a65aaa(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  
  *param_1 = param_2;
  param_1[1] = 1;
  param_1[2] = param_2 + 2;
  param_1[3] = param_3;
  uVar4 = param_3 - 1;
  uVar7 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
  param_1[4] = (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  param_1[5] = uVar4;
  uVar4 = (param_2 + 2) * param_3;
  param_1[6] = uVar4;
  fVar9 = 1.0 / (float)uVar4;
  param_1[7] = param_3 * param_3;
  param_1[8] = (uint)fVar9;
  param_1[9] = (uint)((float)param_2 * fVar9);
  puVar1 = param_1 + 0x12;
  param_1[0x1c] = 0;
  if (param_1[0x1d] != 0) {
    FUN_146effd44(puVar1,0);
  }
  puVar2 = param_1 + 10;
  param_1[0x10] = 0;
  if (0x80 < param_1[0x11]) {
    param_1[0x11] = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  FUN_145942432(param_1 + 0x1e);
  if (param_1[3] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar8 = 1;
    do {
      uVar3 = param_1[0x1c];
      param_1[0x1c] = uVar3 + 1;
      if (param_1[0x1d] < uVar3 + 1) {
        FUN_140694806(puVar1,uVar3);
      }
      puVar6 = *(uint **)(param_1 + 0x1a);
      if (*(uint **)(param_1 + 0x1a) == (uint *)0x0) {
        puVar6 = puVar1;
      }
      puVar6[(int)uVar3] = uVar4;
      uVar4 = uVar4 + uVar8 * uVar8;
      uVar8 = uVar8 * 2;
    } while (uVar8 <= param_1[3]);
    if ((int)uVar4 < 0) {
      return;
    }
  }
  uVar5 = FUN_144a54ea4(puVar2,uVar4);
  FUN_1447c6044(puVar2,uVar5,uVar4,0);
  return;
}



// FUNCTION 147a65c34 FUN_147a65c34 body=68 status=ok
// SIG undefined FUN_147a65c34(void)

void FUN_147a65c34(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147a75e16();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147a65c78 FUN_147a65c78 body=457 status=ok
// SIG undefined FUN_147a65c78(void)

void FUN_147a65c78(longlong param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0x78) + (longlong)param_2 * 0x20);
  iVar13 = *(int *)(*(longlong *)(param_1 + 0x78) + 4 + (longlong)param_2 * 0x20);
  FUN_147a76cda(param_1 + 0x78);
  lVar1 = param_1 + 0x48;
  uVar6 = *(uint *)(param_1 + 0x70);
  if (uVar8 < uVar6) {
    lVar5 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar5 = lVar1;
    }
    iVar10 = iVar13 - *(int *)(lVar5 + (longlong)(int)uVar8 * 4);
    iVar14 = 1;
    uVar7 = uVar8;
    do {
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar5 = lVar1;
      }
      if (iVar14 != 0) {
        iVar4 = *(int *)(lVar5 + (longlong)(int)uVar7 * 4) + iVar10;
        iVar16 = iVar14;
        do {
          lVar5 = *(longlong *)(param_1 + 0x38);
          if (*(longlong *)(param_1 + 0x38) == 0) {
            lVar5 = param_1 + 0x28;
          }
          iVar15 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar15 = iVar4;
          }
          bVar3 = (byte)iVar4 & 0x1f;
          puVar2 = (uint *)(lVar5 + (longlong)(iVar15 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          iVar4 = iVar4 + 1;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      iVar10 = iVar10 << 2;
      iVar14 = iVar14 << 2;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  if (uVar8 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar5 = lVar1;
    }
    uVar6 = iVar13 - *(int *)(lVar5 + (longlong)(int)uVar8 * 4);
    do {
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar5 = lVar1;
      }
      iVar13 = *(int *)(lVar5 + (longlong)(int)uVar8 * 4);
      uVar7 = iVar13 + (uVar6 & 0xfffffffc);
      lVar9 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar9 = param_1 + 0x28;
      }
      uVar12 = iVar13 + (uVar6 & 0xfffffffc) + 0x1f;
      if (-1 < (int)uVar7) {
        uVar12 = uVar7;
      }
      if ((*(uint *)(lVar9 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        return;
      }
      uVar11 = uVar7 + 1;
      uVar12 = uVar7 + 0x20;
      if (-1 < (int)uVar11) {
        uVar12 = uVar11;
      }
      if ((*(uint *)(lVar9 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0) {
        return;
      }
      uVar11 = uVar7 + 2;
      uVar12 = uVar7 + 0x21;
      if (-1 < (int)uVar11) {
        uVar12 = uVar11;
      }
      if ((*(uint *)(lVar9 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0) {
        return;
      }
      uVar12 = uVar7 + 3;
      uVar7 = uVar7 + 0x22;
      if (-1 < (int)uVar12) {
        uVar7 = uVar12;
      }
      if ((*(uint *)(lVar9 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
        return;
      }
      uVar8 = uVar8 - 1;
      uVar6 = uVar6 >> 2;
      iVar13 = *(int *)(lVar5 + (longlong)(int)uVar8 * 4);
      iVar10 = iVar13 + uVar6;
      iVar13 = iVar13 + uVar6 + 0x1f;
      if (-1 < iVar10) {
        iVar13 = iVar10;
      }
      bVar3 = (byte)iVar10 & 0x1f;
      puVar2 = (uint *)(lVar9 + (longlong)(iVar13 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 147a65e42 FUN_147a65e42 body=42 status=ok
// SIG undefined FUN_147a65e42(void)

void FUN_147a65e42(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147a65e74 FUN_147a65e74 body=96 status=ok
// SIG undefined FUN_147a65e74(void)

undefined8 FUN_147a65e74(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145debaa6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cad6c10,1);
  return uVar3;
}



// FUNCTION 147a65ed4 FUN_147a65ed4 body=52 status=ok
// SIG undefined FUN_147a65ed4(void)

void FUN_147a65ed4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147a65f08 FUN_147a65f08 body=42 status=ok
// SIG undefined FUN_147a65f08(void)

void FUN_147a65f08(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147a65f3a FUN_147a65f3a body=96 status=ok
// SIG undefined FUN_147a65f3a(void)

undefined8 FUN_147a65f3a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea422c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cad6d20,1);
  return uVar3;
}



// FUNCTION 147a65f9a FUN_147a65f9a body=52 status=ok
// SIG undefined FUN_147a65f9a(void)

void FUN_147a65f9a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147a65fce FUN_147a65fce body=786 status=ok
// SIG undefined FUN_147a65fce(void)

undefined4 FUN_147a65fce(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStack_c8 [32];
  uint local_a8;
  int local_a4;
  undefined4 local_a0 [2];
  int *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar12 = param_2;
  if (param_2 < param_3) {
    uVar12 = param_3;
  }
  uVar6 = ((uVar12 + *param_1) - 1) / *param_1;
  puVar2 = param_1 + 0x12;
  uVar12 = param_1[0x1c];
  uVar3 = (ulonglong)((uVar6 - 1) + (uint)(uVar6 == 0)) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  uVar6 = uVar12 - (int)lVar5;
  iVar1 = uVar6 - 1;
  puVar9 = *(uint **)(param_1 + 0x1a);
  if (*(uint **)(param_1 + 0x1a) == (uint *)0x0) {
    puVar9 = puVar2;
  }
  bVar10 = (byte)iVar1;
  iVar7 = (1 << (bVar10 & 0x1f)) << (bVar10 & 0x1f);
  uVar15 = puVar9[iVar1];
  uVar19 = iVar7 + uVar15;
  uVar13 = uVar15;
  if (uVar15 < uVar19) {
    puVar9 = param_1 + 10;
    if (*(uint **)(param_1 + 0xe) != (uint *)0x0) {
      puVar9 = *(uint **)(param_1 + 0xe);
    }
    do {
      uVar14 = uVar13 + 0x1f;
      if (-1 < (int)uVar13) {
        uVar14 = uVar13;
      }
      if ((puVar9[(int)uVar14 >> 5] >> (uVar13 & 0x1f) & 1) == 0) goto LAB_147a6609a;
      iVar7 = iVar7 + -1;
      uVar13 = uVar13 + 1;
    } while (iVar7 != 0);
    uVar8 = 0xffffffff;
  }
  else {
LAB_147a6609a:
    uVar8 = 0xffffffff;
    if (uVar13 != uVar19) {
      local_a8 = uVar13 - uVar15;
      if (uVar6 != 0) {
        iVar7 = iVar1;
        uVar19 = local_a8;
        do {
          puVar9 = *(uint **)(param_1 + 0x1a);
          if (*(uint **)(param_1 + 0x1a) == (uint *)0x0) {
            puVar9 = puVar2;
          }
          uVar15 = puVar9[iVar7] + uVar19;
          puVar18 = *(uint **)(param_1 + 0xe);
          if (*(uint **)(param_1 + 0xe) == (uint *)0x0) {
            puVar18 = param_1 + 10;
          }
          uVar14 = puVar9[iVar7] + uVar19 + 0x1f;
          if (-1 < (int)uVar15) {
            uVar14 = uVar15;
          }
          if ((puVar18[(int)uVar14 >> 5] >> (uVar15 & 0x1f) & 1) != 0) break;
          puVar18[(int)uVar14 >> 5] = 1 << ((byte)uVar15 & 0x1f) | puVar18[(int)uVar14 >> 5];
          uVar19 = uVar19 >> 2;
          bVar20 = iVar7 != 0;
          iVar7 = iVar7 + -1;
        } while (bVar20);
      }
      if (uVar6 < uVar12) {
        iVar7 = 4;
        uVar19 = local_a8;
        do {
          uVar19 = uVar19 * 4;
          puVar9 = *(uint **)(param_1 + 0x1a);
          if (*(uint **)(param_1 + 0x1a) == (uint *)0x0) {
            puVar9 = puVar2;
          }
          if (iVar7 != 0) {
            iVar11 = puVar9[(int)uVar6] + uVar19;
            iVar16 = iVar7;
            do {
              puVar9 = *(uint **)(param_1 + 0xe);
              if (*(uint **)(param_1 + 0xe) == (uint *)0x0) {
                puVar9 = param_1 + 10;
              }
              iVar17 = iVar11 + 0x1f;
              if (-1 < iVar11) {
                iVar17 = iVar11;
              }
              puVar9[iVar17 >> 5] = puVar9[iVar17 >> 5] | 1 << ((byte)iVar11 & 0x1f);
              iVar11 = iVar11 + 1;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          iVar7 = iVar7 << 2;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar12);
      }
      uVar12 = ((local_a8 & 0x55555555) >> 1 | local_a8 & 0x55555555) & 0x33333333;
      uVar6 = (uVar12 >> 2 | uVar12) & 0xf0f0f0f;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar12 = local_a8 & 0x22222222 | local_a8 >> 1 & 0x44444444;
      uVar19 = (uVar12 >> 3 | uVar12 >> 1) & 0xf0f0f0f;
      uVar19 = uVar19 >> 4 | uVar19;
      uVar12 = param_1[1];
      fVar21 = (float)param_1[3];
      uVar15 = param_1[3] >> (bVar10 & 0x1f);
      fVar4 = (float)param_1[8];
      local_a4 = iVar1;
      FUN_147a76b6c(param_1 + 0x1e,local_a0);
      *local_98 = iVar1;
      local_98[1] = uVar13;
      local_98[4] = (int)((float)param_2 * fVar4);
      local_98[5] = (int)((float)param_3 * fVar4);
      local_98[6] = (int)((float)((uVar6 & 0xff | uVar6 >> 8 & 0xff00) * uVar15) / fVar21 +
                         (float)uVar12 * fVar4);
      local_98[7] = (int)((float)(uVar15 * (uVar19 & 0xff | uVar19 >> 8 & 0xff00)) / fVar21 +
                         (float)uVar12 * fVar4);
      uVar8 = local_a0[0];
    }
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 147a662e2 FUN_147a662e2 body=63 status=ok
// SIG undefined FUN_147a662e2(void)

void FUN_147a662e2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14594236a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1402854d8(param_1);
    return;
  }
  FUN_147a75e16(param_1);
  FUN_14594236a(param_1);
  return;
}



// FUNCTION 147a66322 FUN_147a66322 body=138 status=ok
// SIG undefined FUN_147a66322(void)

undefined8
FUN_147a66322(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_4 + 0x1d0) == 0) {
    *(undefined8 *)(param_3 + 0x40) = param_5;
    FUN_147a6669c(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  local_28 = 0;
  uStack_20 = 0;
  *(undefined4 *)((longlong)&local_28 + (ulonglong)(*(uint *)(param_1 + 0x14) & 3) * 4) = 0x3f800000
  ;
  *(undefined4 *)(param_3 + 0x40) = (undefined4)local_28;
  *(undefined4 *)(param_3 + 0x44) = local_28._4_4_;
  *(undefined4 *)(param_3 + 0x48) = (undefined4)uStack_20;
  *(undefined4 *)(param_3 + 0x4c) = uStack_20._4_4_;
  *(undefined8 *)(param_3 + 0x50) = param_5;
  FUN_147a6669c((undefined4)local_28,param_2);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a663ad FUN_147a663ad body=177 status=ok
// SIG undefined FUN_147a663ad(void)

void FUN_147a663ad(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145debaa6();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cad6c10,param_4);
  local_78 = &DAT_14cad6c10;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147a763ea(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6645f FUN_147a6645f body=177 status=ok
// SIG undefined FUN_147a6645f(void)

void FUN_147a6645f(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ea422c();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cad6d20,param_4);
  local_78 = &DAT_14cad6d20;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147a767a2(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a66512 FUN_147a66512 body=173 status=ok
// SIG undefined FUN_147a66512(void)

undefined4 FUN_147a66512(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1a0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar3 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 == (ulonglong *)0x0) {
            return 0xffffffff;
          }
          return (int)puVar1[1];
        }
        iVar3 = (int)puVar1[2];
      } while (iVar3 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 147a665c0 FUN_147a665c0 body=220 status=ok
// SIG undefined FUN_147a665c0(void)

int * FUN_147a665c0(longlong param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + (ulonglong)param_3 * 0x20);
  lVar3 = param_1 + 0x48;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x68);
  }
  uVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 4 + (ulonglong)param_3 * 0x20) -
          *(int *)(lVar3 + (longlong)iVar4 * 4);
  uVar2 = ((uVar1 & 0x55555555) >> 1 | uVar1 & 0x55555555) & 0x33333333;
  uVar2 = (uVar2 >> 2 | uVar2) & 0xf0f0f0f;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar1 = uVar1 & 0x22222222 | uVar1 >> 1 & 0x44444444;
  uVar1 = (uVar1 >> 3 | uVar1 >> 1) & 0xf0f0f0f;
  uVar1 = uVar1 >> 4 | uVar1;
  iVar4 = (*(uint *)(param_1 + 0xc) >> ((byte)iVar4 & 0x1f)) * *(int *)(param_1 + 8);
  *param_2 = iVar4 * (uVar2 & 0xff | uVar2 >> 8 & 0xff00);
  param_2[1] = (uVar1 & 0xff | uVar1 >> 8 & 0xff00) * iVar4;
  return param_2;
}



// FUNCTION 147a6669c FUN_147a6669c body=303 status=ok
// SIG undefined FUN_147a6669c(void)

void FUN_147a6669c(undefined8 *param_1,uint *param_2,undefined8 *param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  uint *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  local_84 = *(undefined4 *)(param_1 + 2);
  uVar3 = *(uint *)(param_4 + 0x14);
  local_80 = param_2;
  FUN_147a665c0(param_4 + 0x10,&local_78,*(uint *)((longlong)param_1 + 0x14) >> 2);
  *param_3 = local_78;
  *(uint *)(param_3 + 1) = uVar1 + uVar3 * 2;
  *(uint *)((longlong)param_3 + 0xc) = uVar2 + uVar3 * 2;
  *(float *)(param_3 + 2) = 1.0 / (float)uVar1;
  *(float *)((longlong)param_3 + 0x14) = 1.0 / (float)uVar2;
  *(float *)(param_3 + 3) = (0.5 - (float)uVar3) * (1.0 / (float)uVar1);
  *(float *)((longlong)param_3 + 0x1c) = (1.0 / (float)uVar2) * (0.5 - (float)uVar3);
  *(undefined4 *)(param_3 + 4) = local_84;
  param_3[5] = *param_1;
  param_3[6] = DAT_14c9c0de0;
  *local_80 = uVar1 + uVar3 * 2 + 7 >> 3;
  local_80[1] = uVar2 + uVar3 * 2 + 7 >> 3;
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a66808 FUN_147a66808 body=38 status=ok
// SIG undefined FUN_147a66808(void)

undefined8 FUN_147a66808(undefined8 param_1,int param_2)

{
  FUN_1405d133e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a668c8 FUN_147a668c8 body=56 status=ok
// SIG undefined FUN_147a668c8(void)

void FUN_147a668c8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147a668f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147a66916 FUN_147a66916 body=45 status=ok
// SIG undefined FUN_147a66916(void)

longlong FUN_147a66916(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ad4d44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a66958 FUN_147a66958 body=38 status=ok
// SIG undefined FUN_147a66958(void)

undefined8 FUN_147a66958(undefined8 param_1,int param_2)

{
  FUN_14594224e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a6697e FUN_147a6697e body=47 status=ok
// SIG undefined FUN_147a6697e(void)

longlong FUN_147a6697e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a66a38 FUN_147a66a38 body=59 status=ok
// SIG undefined FUN_147a66a38(void)

undefined8 FUN_147a66a38(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a66ad8 FUN_147a66ad8 body=29 status=ok
// SIG undefined FUN_147a66ad8(void)

undefined8 FUN_147a66ad8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a66af6 FUN_147a66af6 body=200 status=ok
// SIG undefined FUN_147a66af6(void)

void FUN_147a66af6(longlong *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  uVar6 = (param_1[1] - lVar2 >> 4) + 1;
  uVar5 = param_1[2] - lVar2 >> 4;
  uVar7 = (uVar5 >> 1) + uVar5;
  if (uVar7 <= uVar6) {
    uVar7 = uVar6;
  }
  if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar7 = 0xfffffffffffffff;
  }
  _Dst = (void *)FUN_147a66c2e(uVar7);
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar2));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  pvVar3 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar3 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar2) + 0x10),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_147a66bbe(param_1,_Dst,uVar6,uVar7);
  return;
}



// FUNCTION 147a66bbe FUN_147a66bbe body=110 status=ok
// SIG undefined FUN_147a66bbe(void)

void FUN_147a66bbe(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}



// FUNCTION 147a66c2e FUN_147a66c2e body=75 status=ok
// SIG undefined FUN_147a66c2e(void)

undefined8 FUN_147a66c2e(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 << 4);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 << 4,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147a66c7c FUN_147a66c7c body=148 status=ok
// SIG undefined FUN_147a66c7c(void)

undefined8 FUN_147a66c7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b0c958();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a66d12 FUN_147a66d12 body=52 status=ok
// SIG undefined FUN_147a66d12(void)

void FUN_147a66d12(longlong *param_1)

{
  FUN_147a66d46();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a66d46 FUN_147a66d46 body=89 status=ok
// SIG undefined FUN_147a66d46(void)

void FUN_147a66d46(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147a66da0 FUN_147a66da0 body=38 status=ok
// SIG undefined FUN_147a66da0(void)

undefined8 FUN_147a66da0(undefined8 param_1,int param_2)

{
  FUN_14125d002();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a66dde FUN_147a66dde body=57 status=ok
// SIG undefined FUN_147a66dde(void)

undefined8 * FUN_147a66dde(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8bd0b0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a66e18 FUN_147a66e18 body=147 status=ok
// SIG undefined FUN_147a66e18(void)

void FUN_147a66e18(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a66eac FUN_147a66eac body=73 status=ok
// SIG undefined FUN_147a66eac(void)

undefined8 * FUN_147a66eac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a66ef6 FUN_147a66ef6 body=32 status=ok
// SIG undefined FUN_147a66ef6(void)

undefined8 FUN_147a66ef6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinder");
  return param_2;
}



// FUNCTION 147a66f16 FUN_147a66f16 body=57 status=ok
// SIG undefined FUN_147a66f16(void)

void FUN_147a66f16(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  return;
}



// FUNCTION 147a66fbc FUN_147a66fbc body=63 status=ok
// SIG undefined FUN_147a66fbc(void)

undefined1 FUN_147a66fbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a6733c(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 147a67024 FUN_147a67024 body=59 status=ok
// SIG undefined FUN_147a67024(void)

undefined8 FUN_147a67024(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a67070 FUN_147a67070 body=40 status=ok
// SIG undefined FUN_147a67070(void)

void FUN_147a67070(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_147a670e6(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 147a670e6 FUN_147a670e6 body=118 status=ok
// SIG undefined FUN_147a670e6(void)

void FUN_147a670e6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_147a6715c(param_1 + 0x70);
  plVar3 = *(longlong **)(param_1 + 0x68);
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
                    /* WARNING: Could not recover jumptable at 0x000147a67150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147a6715c FUN_147a6715c body=54 status=ok
// SIG undefined FUN_147a6715c(void)

void FUN_147a6715c(longlong *param_1)

{
  FUN_147a67192(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a67192 FUN_147a67192 body=350 status=ok
// SIG undefined FUN_147a67192(void)

void FUN_147a67192(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_147a672f2((longlong)iStack_54 * 0x28 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147a672f2 FUN_147a672f2 body=74 status=ok
// SIG undefined FUN_147a672f2(void)

void FUN_147a672f2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a6733c FUN_147a6733c body=178 status=ok
// SIG undefined FUN_147a6733c(void)

undefined8 * FUN_147a6733c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = *param_2;
  lVar5 = param_2[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[1];
    }
  }
  param_1[1] = lVar5;
  puVar6 = param_2 + 2;
  puVar7 = param_1 + 2;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar3 = param_2[0xc];
  lVar5 = param_2[0xd];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0xd];
  param_1[0xc] = uVar3;
  param_1[0xd] = lVar5;
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
  FUN_147a673ee(param_1 + 0xe,param_2 + 0xe);
  FUN_1402ae23a(param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



// FUNCTION 147a673ee FUN_147a673ee body=122 status=ok
// SIG undefined FUN_147a673ee(void)

longlong FUN_147a673ee(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147a67468(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147a67468 FUN_147a67468 body=210 status=ok
// SIG undefined FUN_147a67468(void)

undefined8 * FUN_147a67468(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147a67192(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_147a6753a(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147a6753a FUN_147a6753a body=114 status=ok
// SIG undefined FUN_147a6753a(void)

undefined8 * FUN_147a6753a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
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
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 147a675f0 FUN_147a675f0 body=62 status=ok
// SIG undefined FUN_147a675f0(void)

undefined8 FUN_147a675f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 147a67656 FUN_147a67656 body=59 status=ok
// SIG undefined FUN_147a67656(void)

undefined8 FUN_147a67656(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6769c FUN_147a6769c body=37 status=ok
// SIG undefined FUN_147a6769c(void)

void FUN_147a6769c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147a67712 FUN_147a67712 body=110 status=ok
// SIG undefined FUN_147a67712(void)

void FUN_147a67712(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145ad5d76(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_147a67936(param_1);
    return;
  }
  FUN_147a677f2(param_1);
  FUN_145ad5d76(param_1,param_2);
  return;
}



// FUNCTION 147a67780 FUN_147a67780 body=113 status=ok
// SIG undefined FUN_147a67780(void)

void FUN_147a67780(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147a677f2 FUN_147a677f2 body=322 status=ok
// SIG undefined FUN_147a677f2(void)

void FUN_147a677f2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a67936 FUN_147a67936 body=477 status=ok
// SIG undefined FUN_147a67936(void)

void FUN_147a67936(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a67b14 FUN_147a67b14 body=68 status=ok
// SIG undefined FUN_147a67b14(void)

void FUN_147a67b14(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147a67b58();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147a67b58 FUN_147a67b58 body=322 status=ok
// SIG undefined FUN_147a67b58(void)

void FUN_147a67b58(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a67c9c FUN_147a67c9c body=387 status=ok
// SIG undefined FUN_147a67c9c(void)

longlong FUN_147a67c9c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined1 auStack_88 [36];
  int local_64;
  undefined8 *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x738);
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar3,puVar8);
  iVar5 = FUN_144a7df4c(plVar1,uVar4,param_2);
  if ((iVar5 == -1) ||
     (lVar6 = (longlong)iVar5 * 0x20 + *plVar1, piVar7 = (int *)(lVar6 + 0x10),
     piVar7 == (int *)0x0 || lVar6 == 0)) {
    iVar5 = *(int *)(param_1 + 0x730);
    *(uint *)(param_1 + 0x730) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x734) < iVar5 + 1U) {
      FUN_147a67e20((longlong *)(param_1 + 0x728),iVar5);
    }
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x728) + (longlong)iVar5 * 0x18);
    *puVar2 = 0;
    iVar3 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(puVar2 + 1) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iVar3,0);
      memcpy((void *)*puVar2,_Src,(longlong)iVar3 * 2);
    }
    *(undefined4 *)(puVar2 + 2) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 0x14) = 0;
    local_58 = &local_64;
    *(int *)(*(longlong *)(param_1 + 0x728) + 0x10 + (longlong)iVar5 * 0x18) = iVar5;
    local_64 = iVar5;
    local_60 = param_2;
    FUN_14171d5f2(plVar1,local_4c,&local_60,0);
    *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + 1;
    iVar5 = local_64;
  }
  else {
    iVar5 = *piVar7;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return (longlong)iVar5 * 0x18 + *(longlong *)(param_1 + 0x728);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a67e20 FUN_147a67e20 body=147 status=ok
// SIG undefined FUN_147a67e20(void)

void FUN_147a67e20(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a67eb4 FUN_147a67eb4 body=344 status=ok
// SIG undefined FUN_147a67eb4(void)

undefined4 *
FUN_147a67eb4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147a6800e(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_147a680f4(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147a68212(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6800e FUN_147a6800e body=230 status=ok
// SIG undefined FUN_147a6800e(void)

int * FUN_147a6800e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147a680f4 FUN_147a680f4 body=148 status=ok
// SIG undefined FUN_147a680f4(void)

void FUN_147a680f4(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_147a68188((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_147a6815e;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_147a6815e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 147a68188 FUN_147a68188 body=138 status=ok
// SIG undefined FUN_147a68188(void)

void FUN_147a68188(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147a68212 FUN_147a68212 body=474 status=ok
// SIG undefined FUN_147a68212(void)

void FUN_147a68212(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a683ee FUN_147a683ee body=98 status=ok
// SIG undefined FUN_147a683ee(void)

void FUN_147a683ee(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  bVar1 = true;
  do {
    bVar2 = bVar1;
    *(undefined4 *)(param_1 + 0x18 + lVar4 * 4) = 0;
    if (*(longlong *)(param_1 + 0x20 + lVar4 * 0x10) != 0) {
      FUN_1400020a8();
    }
    puVar3 = (undefined8 *)(lVar4 * 0x10 + param_1 + 0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    lVar4 = 1;
    bVar1 = false;
  } while (bVar2);
  return;
}



// FUNCTION 147a68456 FUN_147a68456 body=74 status=ok
// SIG undefined FUN_147a68456(void)

undefined8 * FUN_147a68456(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a8ba5c0;
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 147a684a0 FUN_147a684a0 body=400 status=ok
// SIG undefined FUN_147a684a0(void)

void FUN_147a684a0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 unaff_RBP;
  float fVar10;
  float fVar11;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x18;
  cVar6 = FUN_144729dda(lVar1);
  if (cVar6 != '\0') {
    lVar7 = FUN_14479d2ce(lVar1);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar7 + 0xca8);
    lVar7 = FUN_14479d2ce(lVar1);
    *(undefined4 *)(lVar7 + 0xca8) = *(undefined4 *)(param_1 + 0x24);
    lVar7 = FUN_14479d2ce(lVar1);
    lVar8 = FUN_14479d2ce(lVar1);
    fVar11 = *(float *)(lVar8 + 0xcac) + -0.01;
    lVar8 = FUN_14479d2ce(lVar1);
    fVar10 = *(float *)(lVar8 + 0xca8);
    if (fVar11 <= *(float *)(lVar8 + 0xca8)) {
      fVar10 = fVar11;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *(float *)(lVar7 + 0xca8) = fVar10;
    lVar7 = FUN_14479d2ce(lVar1);
    uVar3 = *(undefined1 *)(lVar7 + 0xcc0);
    lVar7 = FUN_14479d2ce(lVar1);
    plVar4 = *(longlong **)(lVar7 + 0x8f8);
    plVar5 = *(longlong **)(lVar7 + 0x900);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_70 = &LAB_1434d27c2;
    local_68 = 0;
    FUN_147a686f4(local_60,param_1);
    lVar7 = FUN_14479d2ce(lVar1);
    (**(code **)(*plVar4 + 0x40))
              (plVar4,(longlong)(*(float *)(lVar7 + 0xca8) * 1000.0),local_60,
               CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff);
    FUN_1449db362(local_60);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    uVar9 = FUN_14479d2ce(lVar1);
    FUN_1434c1d2e(uVar9,1);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a68632 FUN_147a68632 body=179 status=ok
// SIG undefined FUN_147a68632(void)

undefined8 FUN_147a68632(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x18;
  cVar5 = FUN_144729dda(lVar1);
  uVar7 = 1;
  if (cVar5 != '\0') {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      if (*(int *)(param_1 + 0x30) != 0) {
        return 1;
      }
      if (*(longlong *)(param_1 + 0x38) < 1) {
LAB_147a686b1:
        uVar7 = FUN_14479d2ce(lVar1);
        uVar7 = FUN_1434c68de(uVar7,param_1 + 0x28);
        return uVar7;
      }
      lVar6 = FUN_14479d2ce(lVar1);
      plVar3 = *(longlong **)(lVar6 + 0x8f8);
      plVar4 = *(longlong **)(lVar6 + 0x900);
      if (plVar4 == (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar3 + 0x68))();
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        cVar5 = (**(code **)(*plVar3 + 0x68))();
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (cVar5 != '\0') goto LAB_147a686b1;
    }
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 147a686f4 FUN_147a686f4 body=386 status=ok
// SIG undefined FUN_147a686f4(void)

longlong * FUN_147a686f4(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_147a68805:
    *puVar5 = &PTR_LAB_14a8ba660;
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
    *puVar5 = &PTR_FUN_14a8ba5f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_147a68805;
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
    *puVar5 = &PTR_LAB_14a8ba660;
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
    *puVar5 = &PTR_FUN_14a8ba5f0;
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



// FUNCTION 147a68876 FUN_147a68876 body=64 status=ok
// SIG undefined FUN_147a68876(void)

undefined8 * FUN_147a68876(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a8ba5f0;
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



// FUNCTION 147a688ba FUN_147a688ba body=81 status=ok
// SIG undefined FUN_147a688ba(void)

undefined8 FUN_147a688ba(longlong param_1)

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



// FUNCTION 147a68912 FUN_147a68912 body=89 status=ok
// SIG undefined FUN_147a68912(void)

bool FUN_147a68912(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147a6895d;
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
LAB_147a6895d:
  return lVar6 == param_2;
}



// FUNCTION 147a68994 FUN_147a68994 body=118 status=ok
// SIG undefined FUN_147a68994(void)

void FUN_147a68994(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8ba660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8ba5f0;
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



// FUNCTION 147a68a0a FUN_147a68a0a body=118 status=ok
// SIG undefined FUN_147a68a0a(void)

void FUN_147a68a0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8ba660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8ba5f0;
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



// FUNCTION 147a68a80 FUN_147a68a80 body=156 status=ok
// SIG undefined FUN_147a68a80(void)

void FUN_147a68a80(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8ba660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8ba5f0;
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
                    /* WARNING: Could not recover jumptable at 0x000147a68b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147a68b1c FUN_147a68b1c body=104 status=ok
// SIG undefined FUN_147a68b1c(void)

void FUN_147a68b1c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147a68b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147a68b7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147a68b84 FUN_147a68b84 body=101 status=ok
// SIG undefined FUN_147a68b84(void)

ulonglong FUN_147a68b84(longlong param_1)

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
LAB_147a68bde:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147a68bde;
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



// FUNCTION 147a68bec FUN_147a68bec body=54 status=ok
// SIG undefined FUN_147a68bec(void)

longlong FUN_147a68bec(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 147a68c32 FUN_147a68c32 body=74 status=ok
// SIG undefined FUN_147a68c32(void)

undefined8 * FUN_147a68c32(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a8ba700;
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 147a68c7c FUN_147a68c7c body=404 status=ok
// SIG undefined FUN_147a68c7c(void)

void FUN_147a68c7c(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined4 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x18;
  cVar6 = FUN_144729dda(lVar1);
  if (cVar6 != '\0') {
    lVar8 = FUN_14479d2ce(lVar1);
    if (*(int *)(lVar8 + 0xa00) < 1) {
      local_48[0] = 0;
    }
    else {
      (**(code **)(*(longlong *)**(undefined8 **)(lVar8 + 0x9f8) + 0x18))
                ((longlong *)**(undefined8 **)(lVar8 + 0x9f8),local_48);
    }
    if (local_48[0] == DAT_14cad5f50) {
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
    else {
      lVar8 = FUN_14479d2ce(lVar1);
      *(int *)(param_1 + 0x20) = (int)(longlong)(*(float *)(lVar8 + 0xaf8) * 1000.0);
      lVar8 = FUN_14479d2ce(lVar1);
      uVar3 = *(undefined1 *)(lVar8 + 0xcc0);
      lVar8 = FUN_14479d2ce(lVar1);
      plVar4 = *(longlong **)(lVar8 + 0x8f8);
      plVar5 = *(longlong **)(lVar8 + 0x900);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_58 = &LAB_1434d2ab0;
      local_50 = 0;
      FUN_147a69008(local_48,param_1);
      (**(code **)(*plVar4 + 0x40))
                (plVar4,*(undefined4 *)(param_1 + 0x20),local_48,
                 CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff);
      FUN_1449db362(local_48);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar8 = DAT_14cad5f38;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar9 = 0;
      }
      else {
        bVar7 = FUN_144a61b4f();
        uVar9 = (ulonglong)(bVar7 ^ 1);
      }
      if (*(int *)(lVar8 + uVar9 * 4) != 0) {
        uVar10 = FUN_14479d2ce(lVar1);
        FUN_1434c1d2e(uVar10,1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a68e12 FUN_147a68e12 body=418 status=ok
// SIG undefined FUN_147a68e12(void)

ulonglong FUN_147a68e12(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 unaff_RBX;
  float fVar13;
  
  uVar12 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(char *)(param_1 + 0x24) == '\0') {
    lVar1 = param_1 + 0x18;
    cVar6 = FUN_144729dda(lVar1);
    if (cVar6 != '\0') {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        lVar8 = FUN_14479d2ce(lVar1);
        lVar10 = DAT_14cad5f38;
        fVar13 = *(float *)(lVar8 + 0xaf8);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar9 = 0;
        }
        else {
          bVar7 = FUN_144a61b4f();
          uVar9 = (ulonglong)(bVar7 ^ 1);
        }
        if (*(int *)(lVar10 + uVar9 * 4) == 0) {
          fVar13 = fVar13 * 1000.0;
        }
        else {
          fVar13 = (float)*(uint *)(param_1 + 0x20);
        }
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_147a68f72;
        if (*(longlong *)(param_1 + 0x38) < 1) {
LAB_147a68f93:
          uVar11 = FUN_14479d2ce(lVar1);
          uVar12 = FUN_1434c453e(uVar11);
          return uVar12;
        }
        lVar10 = FUN_14479d2ce(lVar1);
        plVar3 = *(longlong **)(lVar10 + 0x8f8);
        plVar4 = *(longlong **)(lVar10 + 0x900);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar3 + 0x68))();
        bVar7 = 1;
        if (cVar6 != '\0') {
          lVar10 = FUN_14479d2ce(lVar1);
          plVar3 = *(longlong **)(lVar10 + 0x8f8);
          plVar5 = *(longlong **)(lVar10 + 0x900);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          bVar7 = (**(code **)(*plVar3 + 0x78))
                            (plVar3,*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x38),
                             (longlong)fVar13 & 0xffffffff);
          bVar7 = bVar7 ^ 1;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        if (bVar7 == 0) goto LAB_147a68f93;
      }
      uVar12 = 0;
    }
  }
LAB_147a68f72:
  return uVar12 & 0xffffffff;
}



// FUNCTION 147a68fc2 FUN_147a68fc2 body=70 status=ok
// SIG undefined FUN_147a68fc2(void)

bool FUN_147a68fc2(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14cad5f38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(int *)(lVar1 + uVar3 * 4) != 0;
}



// FUNCTION 147a69008 FUN_147a69008 body=386 status=ok
// SIG undefined FUN_147a69008(void)

longlong * FUN_147a69008(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_147a69119:
    *puVar5 = &PTR_LAB_14a8ba660;
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
    *puVar5 = &PTR_FUN_14a8ba730;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_147a69119;
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
    *puVar5 = &PTR_LAB_14a8ba660;
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
    *puVar5 = &PTR_FUN_14a8ba730;
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



// FUNCTION 147a6918a FUN_147a6918a body=64 status=ok
// SIG undefined FUN_147a6918a(void)

undefined8 * FUN_147a6918a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a8ba730;
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



// FUNCTION 147a691ce FUN_147a691ce body=81 status=ok
// SIG undefined FUN_147a691ce(void)

undefined8 FUN_147a691ce(longlong param_1)

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



// FUNCTION 147a69226 FUN_147a69226 body=89 status=ok
// SIG undefined FUN_147a69226(void)

bool FUN_147a69226(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147a69271;
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
LAB_147a69271:
  return lVar6 == param_2;
}



// FUNCTION 147a6929c FUN_147a6929c body=118 status=ok
// SIG undefined FUN_147a6929c(void)

void FUN_147a6929c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8ba660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8ba730;
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



// FUNCTION 147a69312 FUN_147a69312 body=118 status=ok
// SIG undefined FUN_147a69312(void)

void FUN_147a69312(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8ba660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8ba730;
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



// FUNCTION 147a69388 FUN_147a69388 body=156 status=ok
// SIG undefined FUN_147a69388(void)

void FUN_147a69388(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8ba660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8ba730;
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
                    /* WARNING: Could not recover jumptable at 0x000147a69414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147a69424 FUN_147a69424 body=104 status=ok
// SIG undefined FUN_147a69424(void)

void FUN_147a69424(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147a69471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147a69482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147a6948c FUN_147a6948c body=101 status=ok
// SIG undefined FUN_147a6948c(void)

ulonglong FUN_147a6948c(longlong param_1)

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
LAB_147a694e6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147a694e6;
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



// FUNCTION 147a69530 FUN_147a69530 body=32 status=ok
// SIG undefined FUN_147a69530(void)

undefined8 FUN_147a69530(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Demo Internet Address");
  return param_2;
}



// FUNCTION 147a69550 FUN_147a69550 body=253 status=ok
// SIG undefined FUN_147a69550(void)

ulonglong FUN_147a69550(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  undefined7 uVar6;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  (**(code **)(*param_2 + 0x80))(param_2,&local_38,1);
  (**(code **)(*param_1 + 0x80))(param_1,&local_48);
  if (local_30 == local_40) {
    if (1 < local_30) {
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_38 + lVar7);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(local_48 + lVar7);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147a695d3;
          }
          iVar4 = uVar3 - uVar8;
          goto LAB_147a69647;
        }
        if (uVar1 == 0) break;
LAB_147a695d3:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
LAB_147a69647:
      uVar5 = CONCAT71(uVar6,iVar4 == 0);
    }
  }
  else {
    uVar5 = CONCAT71(uVar6,local_40 + local_30 == 1);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a69686 FUN_147a69686 body=121 status=ok
// SIG undefined FUN_147a69686(void)

undefined4 FUN_147a69686(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x80))(param_1,&local_20,1);
  puVar3 = local_20;
  if (local_18 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar1 = local_18 + -1;
  if (local_18 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar3);
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147a69700 FUN_147a69700 body=38 status=ok
// SIG undefined FUN_147a69700(void)

undefined8 FUN_147a69700(undefined8 param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a69726 FUN_147a69726 body=125 status=ok
// SIG undefined FUN_147a69726(void)

longlong FUN_147a69726(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (FUN_147a697a4(local_30,param_1), local_28 != 0)) {
    do {
      lVar1 = local_28;
      if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147a69745;
      local_28 = *(longlong *)(local_28 + 0x18);
      FUN_147a69828(local_30);
    } while (local_28 != 0);
  }
  lVar1 = 0;
LAB_147a69745:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147a697a4 FUN_147a697a4 body=132 status=ok
// SIG undefined FUN_147a697a4(void)

longlong * FUN_147a697a4(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  bool bVar2;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x50);
  }
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar1 = FUN_144a797b2();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30;
      goto LAB_147a69802;
    }
  }
  bVar2 = false;
LAB_147a69802:
  *(bool *)((longlong)param_1 + 0x16) = bVar2;
  FUN_147a69828(param_1);
  return param_1;
}



// FUNCTION 147a69828 FUN_147a69828 body=175 status=ok
// SIG undefined FUN_147a69828(void)

void FUN_147a69828(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147a6983c:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x208001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147a6989d;
      }
      if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
        lVar4 = (longlong)(int)param_1[2] + 1;
        iVar3 = (int)lVar4;
        *(int *)(param_1 + 2) = iVar3;
        if (iVar3 < (int)plVar2[0x3c]) {
          lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
          lVar4 = 0;
          if (lVar1 != 0) {
            lVar4 = *(longlong *)(lVar1 + 0x50);
          }
          goto LAB_147a6983c;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147a698d3;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147a698d1;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147a6989d:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147a698d1:
  plVar2 = (longlong *)0x0;
LAB_147a698d3:
  lVar4 = 0;
  goto LAB_147a6989d;
}



// FUNCTION 147a69920 FUN_147a69920 body=94 status=ok
// SIG undefined FUN_147a69920(void)

undefined8 FUN_147a69920(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 1);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a699a6 FUN_147a699a6 body=59 status=ok
// SIG undefined FUN_147a699a6(void)

undefined8 FUN_147a699a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a699ec FUN_147a699ec body=38 status=ok
// SIG undefined FUN_147a699ec(void)

void FUN_147a699ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147a69a8a FUN_147a69a8a body=48 status=ok
// SIG undefined FUN_147a69a8a(void)

void FUN_147a69a8a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a69ad0 FUN_147a69ad0 body=96 status=ok
// SIG undefined FUN_147a69ad0(void)

undefined8 FUN_147a69ad0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a69b58 FUN_147a69b58 body=59 status=ok
// SIG undefined FUN_147a69b58(void)

undefined8 FUN_147a69b58(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a69bf6 FUN_147a69bf6 body=52 status=ok
// SIG undefined FUN_147a69bf6(void)

void FUN_147a69bf6(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147a69c8a FUN_147a69c8a body=54 status=ok
// SIG undefined FUN_147a69c8a(void)

undefined1 FUN_147a69c8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a69e6c(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 147a69ce8 FUN_147a69ce8 body=59 status=ok
// SIG undefined FUN_147a69ce8(void)

undefined8 FUN_147a69ce8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a69d2e FUN_147a69d2e body=34 status=ok
// SIG undefined FUN_147a69d2e(void)

void FUN_147a69d2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_147a69dcc(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147a69d9e FUN_147a69d9e body=38 status=ok
// SIG undefined FUN_147a69d9e(void)

undefined8 FUN_147a69d9e(undefined8 param_1,int param_2)

{
  FUN_147a69dcc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a69dcc FUN_147a69dcc body=98 status=ok
// SIG undefined FUN_147a69dcc(void)

void FUN_147a69dcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8baeb0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_147a69e2e(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a69e2e FUN_147a69e2e body=61 status=ok
// SIG undefined FUN_147a69e2e(void)

void FUN_147a69e2e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147a69e6c FUN_147a69e6c body=77 status=ok
// SIG undefined FUN_147a69e6c(void)

longlong FUN_147a69e6c(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_147a69eba(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 147a69eba FUN_147a69eba body=95 status=ok
// SIG undefined FUN_147a69eba(void)

undefined8 * FUN_147a69eba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147a69e2e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a69f1a(param_1,iVar1);
      FUN_147a69f8d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a69f1a FUN_147a69f1a body=115 status=ok
// SIG undefined FUN_147a69f1a(void)

void FUN_147a69f1a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a69f8d FUN_147a69f8d body=52 status=ok
// SIG undefined FUN_147a69f8d(void)

void FUN_147a69f8d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147a69fc2(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 147a69fc2 FUN_147a69fc2 body=172 status=ok
// SIG undefined FUN_147a69fc2(void)

undefined8 * FUN_147a69fc2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
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
  return param_1;
}



// FUNCTION 147a6a0e0 FUN_147a6a0e0 body=100 status=ok
// SIG undefined FUN_147a6a0e0(void)

undefined1 FUN_147a6a0e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a69e6c(param_2,param_3);
    FUN_147a6a2de(param_2 + 0x48,param_3 + 0x48);
    FUN_147a6a2de(param_2 + 0x58,param_3 + 0x58);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147a6a16c FUN_147a6a16c body=59 status=ok
// SIG undefined FUN_147a6a16c(void)

undefined8 FUN_147a6a16c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6a1b2 FUN_147a6a1b2 body=34 status=ok
// SIG undefined FUN_147a6a1b2(void)

void FUN_147a6a1b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_147a6a264(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147a6a222 FUN_147a6a222 body=38 status=ok
// SIG undefined FUN_147a6a222(void)

undefined8 FUN_147a6a222(undefined8 param_1,int param_2)

{
  FUN_147a6a264();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a6a264 FUN_147a6a264 body=83 status=ok
// SIG undefined FUN_147a6a264(void)

void FUN_147a6a264(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8bb030;
  FUN_147a6a2b7(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147a6a2b7(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147a69dcc(param_1);
  return;
}



// FUNCTION 147a6a2b7 FUN_147a6a2b7 body=38 status=ok
// SIG undefined FUN_147a6a2b7(void)

void FUN_147a6a2b7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a69dcc(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 147a6a2de FUN_147a6a2de body=95 status=ok
// SIG undefined FUN_147a6a2de(void)

undefined8 * FUN_147a6a2de(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147a6a2b7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a6a33e(param_1,iVar1);
      FUN_147a6a3b1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a6a33e FUN_147a6a33e body=115 status=ok
// SIG undefined FUN_147a6a33e(void)

void FUN_147a6a33e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a6a3b1 FUN_147a6a3b1 body=52 status=ok
// SIG undefined FUN_147a6a3b1(void)

void FUN_147a6a3b1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147a6a3e6(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 147a6a3e6 FUN_147a6a3e6 body=319 status=ok
// SIG undefined FUN_147a6a3e6(void)

undefined8 * FUN_147a6a3e6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_14a8baeb0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_147a69f1a(param_1 + 3,iVar1,0);
    FUN_147a69f8d(param_1[3],uVar3,iVar1);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  pvVar2 = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  pvVar2 = *(void **)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 147a6a596 FUN_147a6a596 body=100 status=ok
// SIG undefined FUN_147a6a596(void)

undefined1 FUN_147a6a596(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a69e6c(param_2,param_3);
    FUN_147a6a794(param_2 + 0x48,param_3 + 0x48);
    FUN_147a6a794(param_2 + 0x58,param_3 + 0x58);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147a6a622 FUN_147a6a622 body=59 status=ok
// SIG undefined FUN_147a6a622(void)

undefined8 FUN_147a6a622(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6a668 FUN_147a6a668 body=34 status=ok
// SIG undefined FUN_147a6a668(void)

void FUN_147a6a668(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_147a6a71a(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147a6a6d8 FUN_147a6a6d8 body=38 status=ok
// SIG undefined FUN_147a6a6d8(void)

undefined8 FUN_147a6a6d8(undefined8 param_1,int param_2)

{
  FUN_147a6a71a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a6a71a FUN_147a6a71a body=83 status=ok
// SIG undefined FUN_147a6a71a(void)

void FUN_147a6a71a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8bb1b0;
  FUN_147a6a76d(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147a6a76d(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147a69dcc(param_1);
  return;
}



// FUNCTION 147a6a76d FUN_147a6a76d body=38 status=ok
// SIG undefined FUN_147a6a76d(void)

void FUN_147a6a76d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a6a264(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 147a6a794 FUN_147a6a794 body=95 status=ok
// SIG undefined FUN_147a6a794(void)

undefined8 * FUN_147a6a794(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147a6a76d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a6a7f4(param_1,iVar1);
      FUN_147a6a863(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a6a7f4 FUN_147a6a7f4 body=111 status=ok
// SIG undefined FUN_147a6a7f4(void)

void FUN_147a6a7f4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a6a863 FUN_147a6a863 body=52 status=ok
// SIG undefined FUN_147a6a863(void)

void FUN_147a6a863(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147a6a898(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 147a6a898 FUN_147a6a898 body=171 status=ok
// SIG undefined FUN_147a6a898(void)

undefined8 * FUN_147a6a898(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_147a6a3e6();
  *param_1 = &PTR_FUN_14a8bb030;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_147a6a33e(param_1 + 9,iVar1,0);
    FUN_147a6a3b1(param_1[9],uVar2,iVar1);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_147a6a33e(param_1 + 0xb,iVar1,0);
    FUN_147a6a3b1(param_1[0xb],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147a6a9b4 FUN_147a6a9b4 body=100 status=ok
// SIG undefined FUN_147a6a9b4(void)

undefined1 FUN_147a6a9b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a69e6c(param_2,param_3);
    FUN_147a6abb2(param_2 + 0x48,param_3 + 0x48);
    FUN_147a6abb2(param_2 + 0x58,param_3 + 0x58);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147a6aa40 FUN_147a6aa40 body=59 status=ok
// SIG undefined FUN_147a6aa40(void)

undefined8 FUN_147a6aa40(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6aa86 FUN_147a6aa86 body=34 status=ok
// SIG undefined FUN_147a6aa86(void)

void FUN_147a6aa86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_147a6ab38(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147a6aaf6 FUN_147a6aaf6 body=38 status=ok
// SIG undefined FUN_147a6aaf6(void)

undefined8 FUN_147a6aaf6(undefined8 param_1,int param_2)

{
  FUN_147a6ab38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a6ab38 FUN_147a6ab38 body=83 status=ok
// SIG undefined FUN_147a6ab38(void)

void FUN_147a6ab38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8bb330;
  FUN_147a6ab8b(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147a6ab8b(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147a69dcc(param_1);
  return;
}



// FUNCTION 147a6ab8b FUN_147a6ab8b body=38 status=ok
// SIG undefined FUN_147a6ab8b(void)

void FUN_147a6ab8b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a6a71a(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 147a6abb2 FUN_147a6abb2 body=95 status=ok
// SIG undefined FUN_147a6abb2(void)

undefined8 * FUN_147a6abb2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147a6ab8b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a6ac12(param_1,iVar1);
      FUN_147a6ac81(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a6ac12 FUN_147a6ac12 body=111 status=ok
// SIG undefined FUN_147a6ac12(void)

void FUN_147a6ac12(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a6ac81 FUN_147a6ac81 body=52 status=ok
// SIG undefined FUN_147a6ac81(void)

void FUN_147a6ac81(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147a6acb6(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 147a6acb6 FUN_147a6acb6 body=171 status=ok
// SIG undefined FUN_147a6acb6(void)

undefined8 * FUN_147a6acb6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_147a6a3e6();
  *param_1 = &PTR_FUN_14a8bb1b0;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_147a6a7f4(param_1 + 9,iVar1,0);
    FUN_147a6a863(param_1[9],uVar2,iVar1);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_147a6a7f4(param_1 + 0xb,iVar1,0);
    FUN_147a6a863(param_1[0xb],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147a6add2 FUN_147a6add2 body=100 status=ok
// SIG undefined FUN_147a6add2(void)

undefined1 FUN_147a6add2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a69e6c(param_2,param_3);
    FUN_147a6afd0(param_2 + 0x48,param_3 + 0x48);
    FUN_147a6afd0(param_2 + 0x58,param_3 + 0x58);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147a6ae5e FUN_147a6ae5e body=59 status=ok
// SIG undefined FUN_147a6ae5e(void)

undefined8 FUN_147a6ae5e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6aea4 FUN_147a6aea4 body=34 status=ok
// SIG undefined FUN_147a6aea4(void)

void FUN_147a6aea4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_147a6af56(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147a6af14 FUN_147a6af14 body=38 status=ok
// SIG undefined FUN_147a6af14(void)

undefined8 FUN_147a6af14(undefined8 param_1,int param_2)

{
  FUN_147a6af56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a6af56 FUN_147a6af56 body=83 status=ok
// SIG undefined FUN_147a6af56(void)

void FUN_147a6af56(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8bb4b0;
  FUN_147a6afa9(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147a6afa9(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147a69dcc(param_1);
  return;
}



// FUNCTION 147a6afa9 FUN_147a6afa9 body=38 status=ok
// SIG undefined FUN_147a6afa9(void)

void FUN_147a6afa9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a6ab38(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 147a6afd0 FUN_147a6afd0 body=95 status=ok
// SIG undefined FUN_147a6afd0(void)

undefined8 * FUN_147a6afd0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147a6afa9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a6b030(param_1,iVar1);
      FUN_147a6b09f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a6b030 FUN_147a6b030 body=111 status=ok
// SIG undefined FUN_147a6b030(void)

void FUN_147a6b030(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a6b09f FUN_147a6b09f body=52 status=ok
// SIG undefined FUN_147a6b09f(void)

void FUN_147a6b09f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147a6b0d4(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 147a6b0d4 FUN_147a6b0d4 body=171 status=ok
// SIG undefined FUN_147a6b0d4(void)

undefined8 * FUN_147a6b0d4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_147a6a3e6();
  *param_1 = &PTR_FUN_14a8bb330;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_147a6ac12(param_1 + 9,iVar1,0);
    FUN_147a6ac81(param_1[9],uVar2,iVar1);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_147a6ac12(param_1 + 0xb,iVar1,0);
    FUN_147a6ac81(param_1[0xb],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147a6b1f0 FUN_147a6b1f0 body=100 status=ok
// SIG undefined FUN_147a6b1f0(void)

undefined1 FUN_147a6b1f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a69e6c(param_2,param_3);
    FUN_147a6b3ee(param_2 + 0x48,param_3 + 0x48);
    FUN_147a6b3ee(param_2 + 0x58,param_3 + 0x58);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147a6b27c FUN_147a6b27c body=59 status=ok
// SIG undefined FUN_147a6b27c(void)

undefined8 FUN_147a6b27c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6b2c2 FUN_147a6b2c2 body=34 status=ok
// SIG undefined FUN_147a6b2c2(void)

void FUN_147a6b2c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_147a6b374(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147a6b332 FUN_147a6b332 body=38 status=ok
// SIG undefined FUN_147a6b332(void)

undefined8 FUN_147a6b332(undefined8 param_1,int param_2)

{
  FUN_147a6b374();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a6b374 FUN_147a6b374 body=83 status=ok
// SIG undefined FUN_147a6b374(void)

void FUN_147a6b374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8bb630;
  FUN_147a6b3c7(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147a6b3c7(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147a69dcc(param_1);
  return;
}



// FUNCTION 147a6b3c7 FUN_147a6b3c7 body=38 status=ok
// SIG undefined FUN_147a6b3c7(void)

void FUN_147a6b3c7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a6af56(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 147a6b3ee FUN_147a6b3ee body=95 status=ok
// SIG undefined FUN_147a6b3ee(void)

undefined8 * FUN_147a6b3ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147a6b3c7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a6b44e(param_1,iVar1);
      FUN_147a6b4bd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a6b44e FUN_147a6b44e body=111 status=ok
// SIG undefined FUN_147a6b44e(void)

void FUN_147a6b44e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a6b4bd FUN_147a6b4bd body=52 status=ok
// SIG undefined FUN_147a6b4bd(void)

void FUN_147a6b4bd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147a6b4f2(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 147a6b4f2 FUN_147a6b4f2 body=171 status=ok
// SIG undefined FUN_147a6b4f2(void)

undefined8 * FUN_147a6b4f2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_147a6a3e6();
  *param_1 = &PTR_FUN_14a8bb4b0;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_147a6b030(param_1 + 9,iVar1,0);
    FUN_147a6b09f(param_1[9],uVar2,iVar1);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_147a6b030(param_1 + 0xb,iVar1,0);
    FUN_147a6b09f(param_1[0xb],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147a6b60e FUN_147a6b60e body=100 status=ok
// SIG undefined FUN_147a6b60e(void)

undefined1 FUN_147a6b60e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a69e6c(param_2,param_3);
    FUN_147a6b792(param_2 + 0x48,param_3 + 0x48);
    FUN_147a6b792(param_2 + 0x58,param_3 + 0x58);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147a6b69a FUN_147a6b69a body=59 status=ok
// SIG undefined FUN_147a6b69a(void)

undefined8 FUN_147a6b69a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6b6e0 FUN_147a6b6e0 body=34 status=ok
// SIG undefined FUN_147a6b6e0(void)

void FUN_147a6b6e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_147a6409e(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147a6b750 FUN_147a6b750 body=38 status=ok
// SIG undefined FUN_147a6b750(void)

undefined8 FUN_147a6b750(undefined8 param_1,int param_2)

{
  FUN_147a6409e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a6b792 FUN_147a6b792 body=95 status=ok
// SIG undefined FUN_147a6b792(void)

undefined8 * FUN_147a6b792(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147a6b7f1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a6b818(param_1,iVar1);
      FUN_147a6b887(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a6b7f1 FUN_147a6b7f1 body=38 status=ok
// SIG undefined FUN_147a6b7f1(void)

void FUN_147a6b7f1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a6b374(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 147a6b818 FUN_147a6b818 body=111 status=ok
// SIG undefined FUN_147a6b818(void)

void FUN_147a6b818(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a6b887 FUN_147a6b887 body=52 status=ok
// SIG undefined FUN_147a6b887(void)

void FUN_147a6b887(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147a6b8bc(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 147a6b8bc FUN_147a6b8bc body=171 status=ok
// SIG undefined FUN_147a6b8bc(void)

undefined8 * FUN_147a6b8bc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_147a6a3e6();
  *param_1 = &PTR_FUN_14a8bb630;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_147a6b44e(param_1 + 9,iVar1,0);
    FUN_147a6b4bd(param_1[9],uVar2,iVar1);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_147a6b44e(param_1 + 0xb,iVar1,0);
    FUN_147a6b4bd(param_1[0xb],uVar2,iVar1);
  }
  return param_1;
}


