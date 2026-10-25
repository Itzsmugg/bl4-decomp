// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141105736 FUN_141105736 body=61 status=ok
// SIG undefined FUN_141105736(void)

void FUN_141105736(longlong *param_1)

{
  char cVar1;
  
  if (((param_1[1] != 0) && ((*(byte *)(param_1 + 2) & 1) != 0)) &&
     ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x600))();
    if (cVar1 != '\0') {
      FUN_1404fab38(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141105774 FUN_141105774 body=116 status=ok
// SIG undefined FUN_141105774(void)

void FUN_141105774(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if (cVar1 != '\0') {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] != '\x01') {
        return;
      }
      param_1 = param_1 + 0x642;
    }
    else {
      param_1 = (longlong *)(param_1[0x62e] + 0xd8);
    }
    cVar1 = FUN_1411057e8(param_1,param_2);
    if (cVar1 != '\0') {
      FUN_141105826(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1411057e8 FUN_1411057e8 body=62 status=ok
// SIG undefined FUN_1411057e8(void)

undefined8 FUN_1411057e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140153468();
  if ((lVar1 == 0) || ((*(byte *)(param_1 + 0x298) & 2) != 0)) {
LAB_141105819:
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      lVar1 = FUN_140153468(param_1);
      if (lVar1 != param_2) goto LAB_141105819;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 141105826 FUN_141105826 body=897 status=ok
// SIG undefined FUN_141105826(void)

void FUN_141105826(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 *local_a0;
  int local_98;
  char local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = FUN_140153468();
  uVar1 = param_1[1];
  if (((uVar1 == 0) || (uVar6 = *param_1, (int)uVar6 < 0)) || (DAT_14c9647dc <= (int)uVar6)) {
    if ((*(byte *)((longlong)param_1 + 0x299) & 2) == 0) goto LAB_141105b45;
LAB_141105b85:
    lVar4 = 0;
LAB_141105b2c:
    if (((*(longlong *)(lVar4 + 0xa8) == 0) || (uVar1 == 0)) ||
       (*(byte *)(*(longlong *)(lVar4 + 0xa8) + 0x178) < 2)) goto LAB_141105b45;
    uVar6 = *param_1;
  }
  else {
    plVar8 = (longlong *)
             ((ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
    if ((((plVar8 == (longlong *)0x0) || (*(uint *)(plVar8 + 2) != uVar1)) ||
        (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
         ((*plVar8 == 0 || (lVar2 = *(longlong *)(*plVar8 + 0xa8), lVar2 == 0)))))) ||
       ((cVar3 = *(char *)(lVar2 + 0x178), cVar3 != '\x03' &&
        (((lVar4 == 0 || (cVar3 != '\x02')) || ((*(byte *)(lVar4 + 0x101) & 0x10) == 0)))))) {
      if ((*(byte *)((longlong)param_1 + 0x299) & 2) == 0) goto LAB_141105b45;
      if (((DAT_14c9647dc <= (int)uVar6) ||
          (plVar8 = (longlong *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
          plVar8 == (longlong *)0x0)) ||
         ((*(uint *)(plVar8 + 2) != uVar1 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
      goto LAB_141105b85;
      lVar4 = *plVar8;
      goto LAB_141105b2c;
    }
  }
  if (((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) goto LAB_141105b45;
  puVar5 = (undefined8 *)
           ((ulonglong)((uVar6 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
  if ((puVar5 == (undefined8 *)0x0) ||
     ((*(uint *)(puVar5 + 2) != uVar1 || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
  goto LAB_141105b45;
  if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
    plVar8 = (longlong *)*puVar5;
  }
  else {
    plVar8 = (longlong *)0x0;
  }
  cVar3 = (**(code **)(*plVar8 + 0x600))();
  if ((cVar3 == '\0') || ((param_1[0xa6] & 2) != 0)) goto LAB_141105b45;
  uVar1 = param_1[1];
  if (uVar1 == 0) {
LAB_141105b89:
    lVar4 = 0;
  }
  else {
    uVar6 = *param_1;
    lVar4 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         ((*(uint *)(plVar8 + 2) != uVar1 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
      goto LAB_141105b89;
      lVar4 = *plVar8;
    }
  }
  if ((*(longlong *)(lVar4 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(lVar4 + 0xa8) + 0x178) == '\x03')) {
    if (uVar1 == 0) {
LAB_141105b90:
      uVar7 = 0;
    }
    else {
      uVar6 = *param_1;
      uVar7 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar5 + 2) != uVar1 || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
        goto LAB_141105b90;
        uVar7 = *puVar5;
      }
    }
    local_b0[0] = 0;
    local_90 = '\0';
    local_88 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    local_68 = (undefined4)DAT_14c8464e0;
    uStack_64 = DAT_14c8464e0._4_4_;
    uStack_60 = (undefined4)DAT_14c8464e8;
    uStack_5c = DAT_14c8464e8._4_4_;
    local_58 = DAT_14c8464f0;
    local_50 = (undefined4)DAT_14c8464e0;
    uStack_4c = DAT_14c8464e0._4_4_;
    uStack_48 = (undefined4)DAT_14c8464e8;
    uStack_44 = DAT_14c8464e8._4_4_;
    local_40 = DAT_14c8464f0;
    local_38 = 0;
    local_a8 = *(undefined8 *)(param_1 + 10);
    FUN_1403ed422(&local_a0,param_1 + 0xc);
    local_38 = (undefined1)param_2;
    FUN_141874cda(uVar7,local_b0);
    if (local_90 == '\x01') {
      if (local_98 != 0) {
        if (local_a0 == (undefined8 *)0x0) goto LAB_141105ac9;
        (**(code **)*local_a0)(local_a0,0);
        FUN_1446efa72(&local_a0,0,0,0x10);
        local_98 = 0;
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_141105ac9:
  FUN_143cf24da(param_1,param_2);
LAB_141105b45:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141105ba8 FUN_141105ba8 body=88 status=ok
// SIG undefined FUN_141105ba8(void)

undefined8 * FUN_141105ba8(undefined8 *param_1)

{
  undefined8 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_141105c00();
  EnterCriticalSection(lpCriticalSection);
  puVar1 = &DAT_14c83e2c0;
  do {
    puVar2 = puVar1;
    puVar1 = (undefined8 *)*puVar2;
  } while (puVar1 != (undefined8 *)0x0);
  *puVar2 = param_1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_1;
}



// FUNCTION 141105c00 FUN_141105c00 body=356 status=ok
// SIG undefined FUN_141105c00(void)

undefined8 FUN_141105c00(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83e2b8) {
    FUN_144b3d300(&DAT_14c83e2b8);
    if (DAT_14c83e2b8 == -1) {
      plVar4 = (longlong *)FUN_14001cc68(0x38,0x10);
      plVar4[1] = (longlong)&DAT_100000001;
      *plVar4 = (longlong)&PTR_FUN_149e05c70;
      lpCriticalSection = (LPCRITICAL_SECTION)(plVar4 + 2);
      InitializeCriticalSection(lpCriticalSection);
      SetCriticalSectionSpinCount(lpCriticalSection,4000);
      DAT_14c83e2a8 = lpCriticalSection;
      DAT_14c83e2b0 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      atexit(FUN_14274cfba);
      _Init_thread_footer(&DAT_14c83e2b8);
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x458) == '\0') {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined1 *)(lVar3 + 0x458) = 1;
    *(LPCRITICAL_SECTION *)(lVar3 + 0x448) = DAT_14c83e2a8;
    plVar4 = DAT_14c83e2b0;
    *(longlong **)(lVar3 + 0x450) = DAT_14c83e2b0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar4 + 1;
      *(int *)plVar4 = (int)*plVar4 + 1;
      UNLOCK();
    }
    __tlregdtor(FUN_14274cff5);
  }
  return *(undefined8 *)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x448);
}



// FUNCTION 141105d64 FUN_141105d64 body=9 status=ok
// SIG undefined FUN_141105d64(void)

void FUN_141105d64(longlong param_1)

{
  FUN_141105d6e(param_1 + 0x10);
  return;
}



// FUNCTION 141105d6e FUN_141105d6e body=245 status=ok
// SIG undefined FUN_141105d6e(void)

void FUN_141105d6e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b42a880;
  param_1[4] = &PTR_FUN_14b42a8a0;
  plVar3 = (longlong *)param_1[0x11];
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
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_LAB_14b42a8c0;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14b242fd0;
  plVar3 = (longlong *)param_1[2];
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
  plVar3 = (longlong *)param_1[10];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141105e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141105e64 FUN_141105e64 body=1087 status=ok
// SIG undefined FUN_141105e64(void)

undefined8 FUN_141105e64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  byte bVar15;
  undefined1 uVar16;
  void *pvVar17;
  void *pvVar18;
  longlong lVar19;
  longlong lVar20;
  void *pvVar21;
  
  if (param_4 != 0) {
    lVar20 = 0;
    bVar15 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + 0x10 + lVar20) = *(undefined2 *)(param_3 + 0x10 + lVar20);
      *(undefined8 *)(param_2 + 8 + lVar20) = *(undefined8 *)(param_3 + 8 + lVar20);
      *(undefined1 *)(param_2 + 0x20 + lVar20) = *(undefined1 *)(param_3 + 0x20 + lVar20);
      *(undefined8 *)(param_2 + 0x18 + lVar20) = *(undefined8 *)(param_3 + 0x18 + lVar20);
      lVar19 = *(longlong *)(param_3 + 0x28 + lVar20);
      if ((bVar15 & 1) != 0) {
        if (lVar19 == 0) {
          lVar19 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar19 = *(longlong *)(param_3 + 0x28 + lVar20);
        }
      }
      lVar1 = param_3 + lVar20;
      lVar2 = param_2 + lVar20;
      *(longlong *)(param_2 + 0x28 + lVar20) = lVar19;
      if (lVar2 != lVar1) {
        cVar5 = *(char *)(param_2 + 0x88 + lVar20);
        if (*(char *)(param_3 + 0x88 + lVar20) == '\x01') {
          if ((cVar5 != '\0') && (*(longlong *)(param_2 + 0x78 + lVar20) != 0)) {
            FUN_1400020a8();
          }
          lVar19 = param_2 + lVar20;
          puVar3 = (undefined4 *)(param_3 + 0x30 + lVar20);
          *(undefined8 *)(lVar19 + 0x50) = *(undefined8 *)(puVar3 + 8);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          uVar12 = puVar3[5];
          uVar13 = puVar3[6];
          uVar14 = puVar3[7];
          *(undefined4 *)(lVar19 + 0x40) = puVar3[4];
          *(undefined4 *)(lVar19 + 0x44) = uVar12;
          *(undefined4 *)(lVar19 + 0x48) = uVar13;
          *(undefined4 *)(lVar19 + 0x4c) = uVar14;
          *(undefined4 *)(lVar19 + 0x30) = uVar8;
          *(undefined4 *)(lVar19 + 0x34) = uVar9;
          *(undefined4 *)(lVar19 + 0x38) = uVar10;
          *(undefined4 *)(lVar19 + 0x3c) = uVar11;
          *(undefined8 *)(lVar19 + 0x78) = 0;
          iVar6 = puVar3[0x14];
          pvVar18 = *(void **)(puVar3 + 0x12);
          *(int *)(lVar19 + 0x80) = iVar6;
          if ((longlong)iVar6 == 0) {
            *(undefined4 *)(param_2 + 0x84 + lVar20) = 2;
          }
          else {
            pvVar21 = (void *)(param_2 + lVar20 + 0x58);
            pvVar17 = (void *)(param_3 + lVar20 + 0x58);
            if (pvVar18 != (void *)0x0) {
              pvVar17 = pvVar18;
            }
            FUN_144891736(pvVar21,iVar6,0);
            pvVar18 = *(void **)(param_2 + lVar20 + 0x78);
            if (pvVar18 == (void *)0x0) {
              pvVar18 = pvVar21;
            }
            memcpy(pvVar18,pvVar17,(longlong)iVar6 << 4);
          }
          uVar16 = 1;
        }
        else {
          if (cVar5 == '\0') goto LAB_141105efc;
          if (*(longlong *)(param_2 + 0x78 + lVar20) != 0) {
            FUN_1400020a8();
          }
          uVar16 = 0;
        }
        *(undefined1 *)(param_2 + 0x88 + lVar20) = uVar16;
      }
LAB_141105efc:
      *(undefined1 *)(param_2 + 0x98 + lVar20) = *(undefined1 *)(param_3 + 0x98 + lVar20);
      *(undefined8 *)(param_2 + 0x90 + lVar20) = *(undefined8 *)(param_3 + 0x90 + lVar20);
      lVar19 = *(longlong *)(param_3 + 0xa0 + lVar20);
      if (DAT_14c950c29 == 1) {
        if (lVar19 == 0) {
          lVar19 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar19 = *(longlong *)(param_3 + 0xa0 + lVar20);
        }
      }
      *(longlong *)(param_2 + 0xa0 + lVar20) = lVar19;
      if (lVar2 != lVar1) {
        cVar5 = *(char *)(param_2 + 0x100 + lVar20);
        if (*(char *)(param_3 + 0x100 + lVar20) == '\x01') {
          if ((cVar5 != '\0') && (*(longlong *)(param_2 + 0xf0 + lVar20) != 0)) {
            FUN_1400020a8();
          }
          *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(lVar1 + 200);
          uVar8 = *(undefined4 *)(lVar1 + 0xa8);
          uVar9 = *(undefined4 *)(lVar1 + 0xac);
          uVar10 = *(undefined4 *)(lVar1 + 0xb0);
          uVar11 = *(undefined4 *)(lVar1 + 0xb4);
          uVar12 = *(undefined4 *)(lVar1 + 0xbc);
          uVar13 = *(undefined4 *)(lVar1 + 0xc0);
          uVar14 = *(undefined4 *)(lVar1 + 0xc4);
          *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(lVar1 + 0xb8);
          *(undefined4 *)(lVar2 + 0xbc) = uVar12;
          *(undefined4 *)(lVar2 + 0xc0) = uVar13;
          *(undefined4 *)(lVar2 + 0xc4) = uVar14;
          *(undefined4 *)(lVar2 + 0xa8) = uVar8;
          *(undefined4 *)(lVar2 + 0xac) = uVar9;
          *(undefined4 *)(lVar2 + 0xb0) = uVar10;
          *(undefined4 *)(lVar2 + 0xb4) = uVar11;
          *(undefined8 *)(param_2 + 0xf0 + lVar20) = 0;
          iVar6 = *(int *)(param_3 + 0xf8 + lVar20);
          pvVar18 = *(void **)(param_3 + 0xf0 + lVar20);
          *(int *)(param_2 + 0xf8 + lVar20) = iVar6;
          if ((longlong)iVar6 == 0) {
            *(undefined4 *)(param_2 + 0xfc + lVar20) = 2;
          }
          else {
            pvVar17 = (void *)(lVar1 + 0xd0);
            if (pvVar18 != (void *)0x0) {
              pvVar17 = pvVar18;
            }
            FUN_144891736((void *)(lVar2 + 0xd0),iVar6,0);
            pvVar18 = *(void **)(param_2 + 0xf0 + lVar20);
            if (pvVar18 == (void *)0x0) {
              pvVar18 = (void *)(lVar2 + 0xd0);
            }
            memcpy(pvVar18,pvVar17,(longlong)iVar6 << 4);
          }
          uVar16 = 1;
        }
        else {
          if (cVar5 == '\0') goto LAB_141105f59;
          if (*(longlong *)(param_2 + 0xf0 + lVar20) != 0) {
            FUN_1400020a8();
          }
          uVar16 = 0;
        }
        *(undefined1 *)(param_2 + 0x100 + lVar20) = uVar16;
      }
LAB_141105f59:
      *(undefined4 *)(param_2 + 0x118 + lVar20) = *(undefined4 *)(param_3 + 0x118 + lVar20);
      puVar3 = (undefined4 *)(param_3 + 0x108 + lVar20);
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x108 + lVar20);
      *puVar4 = *puVar3;
      puVar4[1] = uVar8;
      puVar4[2] = uVar9;
      puVar4[3] = uVar10;
      FUN_1411062a4(lVar2 + 0x120,lVar1 + 0x120);
      uVar7 = *(undefined8 *)(param_3 + 0x600 + lVar20);
      *(undefined8 *)(param_2 + 0x606 + lVar20) = *(undefined8 *)(param_3 + 0x606 + lVar20);
      *(undefined8 *)(param_2 + 0x600 + lVar20) = uVar7;
      lVar19 = *(longlong *)(param_3 + 0x610 + lVar20);
      if (DAT_14c950c29 == 1) {
        if (lVar19 == 0) {
          lVar19 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar19 = *(longlong *)(param_3 + 0x610 + lVar20);
        }
      }
      bVar15 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x610 + lVar20) = lVar19;
      lVar19 = *(longlong *)(param_3 + 0x618 + lVar20);
      if ((bVar15 & 1) != 0) {
        if (lVar19 == 0) {
          lVar19 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar19 = *(longlong *)(param_3 + 0x618 + lVar20);
          bVar15 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x618 + lVar20) = lVar19;
      lVar20 = lVar20 + 0x620;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1411062a4 FUN_1411062a4 body=720 status=ok
// SIG undefined FUN_1411062a4(void)

longlong FUN_1411062a4(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined1 uVar19;
  longlong lVar20;
  longlong lVar21;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_1404306dc(param_1 + 0x20,param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_140430734(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 100) == '\x01') {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
      uVar19 = 1;
    }
    else {
      if (*(char *)(param_1 + 100) != '\x01') goto LAB_14110631a;
      uVar19 = 0;
    }
    *(undefined1 *)(param_1 + 100) = uVar19;
  }
LAB_14110631a:
  FUN_14043078c(param_1 + 0x68,param_2 + 0x68);
  FUN_1404307f4(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  lVar21 = 0x198;
  bVar18 = DAT_14c950c29;
  do {
    *(undefined2 *)(param_1 + -0x50 + lVar21) = *(undefined2 *)(param_2 + -0x50 + lVar21);
    *(undefined8 *)(param_1 + -0x58 + lVar21) = *(undefined8 *)(param_2 + -0x58 + lVar21);
    puVar1 = (undefined4 *)(param_2 + -0x48 + lVar21);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(param_2 + -0x38 + lVar21);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar2 = (undefined4 *)(param_1 + -0x48 + lVar21);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (undefined4 *)(param_1 + -0x38 + lVar21);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    *(undefined8 *)(param_1 + -0x2b + lVar21) = *(undefined8 *)(param_2 + -0x2b + lVar21);
    *(undefined8 *)(param_1 + -0x20 + lVar21) = *(undefined8 *)(param_2 + -0x20 + lVar21);
    *(undefined4 *)(param_1 + -0x10 + lVar21) = *(undefined4 *)(param_2 + -0x10 + lVar21);
    *(undefined8 *)(param_1 + -0x18 + lVar21) = *(undefined8 *)(param_2 + -0x18 + lVar21);
    lVar20 = *(longlong *)(param_2 + -8 + lVar21);
    if ((bVar18 & 1) != 0) {
      if (lVar20 == 0) {
        lVar20 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar20 = *(longlong *)(param_2 + -8 + lVar21);
        bVar18 = DAT_14c950c29;
      }
    }
    *(longlong *)(param_1 + -8 + lVar21) = lVar20;
    uVar11 = ((undefined8 *)(param_2 + lVar21))[1];
    puVar3 = (undefined8 *)(param_2 + 0x10 + lVar21);
    uVar12 = *puVar3;
    uVar13 = puVar3[1];
    puVar3 = (undefined8 *)(param_2 + 0x20 + lVar21);
    uVar14 = *puVar3;
    uVar15 = puVar3[1];
    puVar3 = (undefined8 *)(param_2 + 0x2a + lVar21);
    uVar16 = *puVar3;
    uVar17 = puVar3[1];
    *(undefined8 *)(param_1 + lVar21) = *(undefined8 *)(param_2 + lVar21);
    ((undefined8 *)(param_1 + lVar21))[1] = uVar11;
    puVar3 = (undefined8 *)(param_1 + 0x10 + lVar21);
    *puVar3 = uVar12;
    puVar3[1] = uVar13;
    puVar3 = (undefined8 *)(param_1 + 0x20 + lVar21);
    *puVar3 = uVar14;
    puVar3[1] = uVar15;
    puVar3 = (undefined8 *)(param_1 + 0x2a + lVar21);
    *puVar3 = uVar16;
    puVar3[1] = uVar17;
    lVar21 = lVar21 + 0xa0;
  } while (lVar21 != 0x378);
  lVar21 = 0;
  do {
    *(undefined2 *)(param_1 + 0x328 + lVar21) = *(undefined2 *)(param_2 + 0x328 + lVar21);
    *(undefined8 *)(param_1 + 800 + lVar21) = *(undefined8 *)(param_2 + 800 + lVar21);
    puVar1 = (undefined4 *)(param_2 + 0x330 + lVar21);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(param_2 + 0x340 + lVar21);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar2 = (undefined4 *)(param_1 + 0x330 + lVar21);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (undefined4 *)(param_1 + 0x340 + lVar21);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    *(undefined8 *)(param_1 + 0x34d + lVar21) = *(undefined8 *)(param_2 + 0x34d + lVar21);
    FUN_140472d3c(param_1 + lVar21 + 0x358,param_2 + lVar21 + 0x358);
    FUN_140472cde(param_1 + lVar21 + 0x368,param_2 + lVar21 + 0x368);
    *(undefined4 *)(param_1 + 0x378 + lVar21) = *(undefined4 *)(param_2 + 0x378 + lVar21);
    lVar20 = *(longlong *)(param_2 + 0x380 + lVar21);
    if (DAT_14c950c29 == 1) {
      if (lVar20 == 0) {
        lVar20 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar20 = *(longlong *)(param_2 + 0x380 + lVar21);
      }
    }
    bVar18 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x380 + lVar21) = lVar20;
    puVar1 = (undefined4 *)(param_2 + 0x388 + lVar21);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar1 = (undefined4 *)(param_2 + 0x398 + lVar21);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0x398 + lVar21);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    puVar1 = (undefined4 *)(param_1 + 0x388 + lVar21);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    lVar20 = *(longlong *)(param_2 + 0x3a8 + lVar21);
    if ((bVar18 & 1) != 0) {
      if (lVar20 == 0) {
        lVar20 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar20 = *(longlong *)(param_2 + 0x3a8 + lVar21);
      }
    }
    *(longlong *)(param_1 + 0x3a8 + lVar21) = lVar20;
    lVar21 = lVar21 + 0x98;
  } while (lVar21 != 0x1c8);
  return param_1;
}



// FUNCTION 141106582 FUN_141106582 body=231 status=ok
// SIG undefined FUN_141106582(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141106582(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b6bd390;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4677d0;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14110666a FUN_14110666a body=365 status=ok
// SIG undefined FUN_14110666a(void)

longlong * FUN_14110666a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  longlong local_2a0;
  undefined1 *local_298;
  longlong *local_290;
  int local_284;
  undefined1 local_280 [552];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_141106d58(local_280,param_3);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77488);
  iVar3 = FUN_1411067d8(&DAT_14ca774b0,local_58,local_280);
  lVar4 = 0;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x268 + DAT_14ca774b0;
  }
  if (lVar4 == 0) {
    lVar4 = FUN_14001cc68(0x268,0x10);
    local_2a8 = local_54;
    FUN_1411068aa(lVar4,local_280,local_50,local_58);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    local_290 = &local_2a0;
    local_2a0 = lVar4;
    local_298 = local_280;
    FUN_141106982(&DAT_14ca774b0,&local_284,&local_298,0);
    lVar4 = DAT_14ca774b0;
    if (local_2a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_2a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + (longlong)local_284 * 0x268;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77488);
  lVar4 = *(longlong *)(lVar4 + 600);
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411067d8 FUN_1411067d8 body=113 status=ok
// SIG undefined FUN_1411067d8(void)

int FUN_1411067d8(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_141106849(lVar1 + (longlong)iVar4 * 0x268,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x260 + (longlong)iVar4 * 0x268);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 141106849 FUN_141106849 body=96 status=ok
// SIG undefined FUN_141106849(void)

undefined8 FUN_141106849(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x220);
  if (iVar1 == *(int *)((longlong)param_2 + 0x220)) {
    if (iVar1 != 0) {
      iVar1 = memcmp(param_1,param_2,(longlong)iVar1 << 5);
      if (iVar1 != 0) goto LAB_14110685f;
    }
    iVar1 = memcmp((void *)((longlong)param_1 + 0x230),(void *)((longlong)param_2 + 0x230),0x22);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  else {
LAB_14110685f:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1411068aa FUN_1411068aa body=187 status=ok
// SIG undefined FUN_1411068aa(void)

undefined8 *
FUN_1411068aa(undefined8 *param_1,void *param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 5;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a353f10;
  iVar1 = *(int *)((longlong)param_2 + 0x220);
  *(int *)(param_1 + 0x46) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x234) = 0x11;
  }
  else {
    FUN_141106966(param_1 + 2,iVar1,0);
    memcpy(param_1 + 2,param_2,(longlong)iVar1 << 5);
  }
  *(undefined4 *)((longlong)param_1 + 0x25c) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_5;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  param_1[0x47] = *param_3;
  param_1[0x48] = uVar2;
  param_1[0x49] = uVar3;
  param_1[0x4a] = uVar4;
  *(undefined2 *)(param_1 + 0x4b) = *(undefined2 *)(param_3 + 4);
  return param_1;
}



// FUNCTION 141106966 FUN_141106966 body=27 status=ok
// SIG undefined FUN_141106966(void)

void FUN_141106966(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0x11;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  if (iVar1 <= param_3) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x224) = iVar1;
  return;
}



// FUNCTION 141106982 FUN_141106982 body=981 status=ok
// SIG undefined FUN_141106982(void)

int * FUN_141106982(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  void *_Dst;
  uint *puVar1;
  void *_Src;
  undefined8 *puVar2;
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
  char cVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  longlong *plVar25;
  longlong *plVar26;
  int iVar27;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar24 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar24 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar24) {
      FUN_145806278(param_1,iVar24);
    }
    iVar17 = (int)param_1[5];
    if (iVar17 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar16 = iVar17 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    plVar25 = param_1 + 2;
    iVar22 = iVar17 + 1;
    iVar27 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    if (iVar27 >> 5 == iVar16) {
      *(int *)(param_1 + 5) = iVar22;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar17) {
        if (iVar17 + 0x20U < 0xa0) {
          iVar22 = 0x80;
          iVar16 = iVar17;
        }
        else {
          uVar21 = iVar17 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar21) {
              uVar18 = uVar21;
            }
          }
          else {
            uVar18 = (uVar21 * 3 >> 3) + uVar21 + 0x10;
          }
          uVar23 = FUN_144a3809e(uVar18 << 2,0);
          iVar16 = (int)(uVar23 >> 2);
          iVar22 = -0x20;
          if ((int)uVar21 <= iVar16) {
            iVar22 = iVar16 << 5;
          }
          iVar16 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar22;
        FUN_1446efbd8(plVar25,iVar16);
        iVar22 = (int)param_1[5] + 1;
      }
      iVar16 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar16 = iVar22;
      }
      *(int *)(param_1 + 5) = iVar22;
      if (iVar22 % 0x20 != 0) {
        plVar26 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar26 = plVar25;
        }
        bVar20 = -(char)(iVar22 % 0x20);
        *(uint *)((longlong)plVar26 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar26 + (longlong)(iVar16 >> 5) * 4) << (bVar20 & 0x1f)) >>
             (bVar20 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar24;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar25 = (longlong *)param_1[4];
    }
    bVar20 = (byte)iVar17 & 0x1f;
    puVar1 = (uint *)((longlong)plVar25 + (longlong)(iVar27 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
  }
  else {
    iVar24 = (int)param_1[6];
    lVar19 = (longlong)iVar24;
    iVar17 = *(int *)(*param_1 + 4 + lVar19 * 0x268);
    *(int *)(param_1 + 6) = iVar17;
    iVar16 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x268) = 0xffffffff;
    }
  }
  plVar25 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar25 = (longlong *)param_1[4];
  }
  iVar17 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar17 = iVar24;
  }
  puVar1 = (uint *)((longlong)plVar25 + (longlong)(iVar17 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar24 & 0x1f);
  _Dst = (void *)(*param_1 + lVar19 * 0x268);
  _Src = (void *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  iVar17 = *(int *)((longlong)_Src + 0x220);
  *(int *)(*param_1 + 0x220 + lVar19 * 0x268) = iVar17;
  if ((longlong)iVar17 == 0) {
    *(undefined4 *)((longlong)_Dst + 0x224) = 0x11;
  }
  else {
    FUN_141106966(_Dst,iVar17,0);
    memcpy(_Dst,_Src,(longlong)iVar17 << 5);
  }
  uVar4 = *(undefined4 *)((longlong)_Src + 0x228);
  uVar5 = *(undefined4 *)((longlong)_Src + 0x22c);
  uVar6 = *(undefined4 *)((longlong)_Src + 0x230);
  uVar7 = *(undefined4 *)((longlong)_Src + 0x234);
  uVar8 = *(undefined4 *)((longlong)_Src + 0x238);
  uVar9 = *(undefined4 *)((longlong)_Src + 0x23c);
  uVar10 = *(undefined4 *)((longlong)_Src + 0x240);
  uVar11 = *(undefined4 *)((longlong)_Src + 0x244);
  uVar12 = *(undefined4 *)((longlong)_Src + 0x246);
  uVar13 = *(undefined4 *)((longlong)_Src + 0x24a);
  uVar14 = *(undefined4 *)((longlong)_Src + 0x24e);
  *(undefined4 *)((longlong)_Dst + 0x242) = *(undefined4 *)((longlong)_Src + 0x242);
  *(undefined4 *)((longlong)_Dst + 0x246) = uVar12;
  *(undefined4 *)((longlong)_Dst + 0x24a) = uVar13;
  *(undefined4 *)((longlong)_Dst + 0x24e) = uVar14;
  *(undefined4 *)((longlong)_Dst + 0x238) = uVar8;
  *(undefined4 *)((longlong)_Dst + 0x23c) = uVar9;
  *(undefined4 *)((longlong)_Dst + 0x240) = uVar10;
  *(undefined4 *)((longlong)_Dst + 0x244) = uVar11;
  *(undefined4 *)((longlong)_Dst + 0x228) = uVar4;
  *(undefined4 *)((longlong)_Dst + 0x22c) = uVar5;
  *(undefined4 *)((longlong)_Dst + 0x230) = uVar6;
  *(undefined4 *)((longlong)_Dst + 0x234) = uVar7;
  *(undefined8 *)((longlong)_Dst + 600) = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)((longlong)_Dst + 0x260) = 0xffffffff;
  uVar21 = *(uint *)((longlong)_Dst + 0x228);
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar17 = FUN_1411067d8(param_1,uVar21,_Dst);
    if (iVar17 != -1) {
      lVar19 = *param_1;
      lVar3 = *(longlong *)(lVar19 + 600 + (longlong)iVar17 * 0x268);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar18 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar18 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      memmove((void *)(lVar19 + (longlong)iVar17 * 0x268),_Dst,0x260);
      FUN_147388150(param_1,iVar24);
      cVar15 = '\x01';
      goto LAB_141106b16;
    }
  }
  cVar15 = '\0';
  iVar17 = iVar24;
LAB_141106b16:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar15;
  }
  if (cVar15 == '\0') {
    uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar18 < 4) {
      iVar24 = 1;
    }
    else {
      uVar23 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar24 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar18 < 1) || (iVar24 <= (int)param_1[9])) {
      uVar21 = (int)param_1[9] - 1U & uVar21;
      *(uint *)((longlong)_Dst + 0x264) = uVar21;
      plVar25 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar25 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Dst + 0x260) =
           *(undefined4 *)
            ((longlong)plVar25 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar21) * 4);
      plVar25 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar25 = param_1 + 7;
      }
      *(int *)((longlong)plVar25 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar21) * 4) =
           iVar17;
    }
    else {
      *(int *)(param_1 + 9) = iVar24;
      FUN_14110740c(param_1);
    }
  }
  *param_2 = iVar17;
  return param_2;
}



// FUNCTION 141106d58 FUN_141106d58 body=1715 status=ok
// SIG undefined FUN_141106d58(void)

undefined8 * FUN_141106d58(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 **ppuVar27;
  longlong lVar28;
  undefined8 *puVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_3a8 [44];
  undefined4 local_37c;
  uint local_378;
  uint local_374;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  param_1[0x44] = 0x1100000000;
  puVar20 = param_1 + 0x46;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  if (*(int *)(param_2 + 0x88) < 1) {
    iVar23 = 0;
  }
  else {
    lVar28 = 0;
    uVar22 = 0;
    do {
      bVar11 = *(byte *)(param_2 + lVar28 * 8);
      local_374 = (uint)*(byte *)(param_2 + 1 + lVar28 * 8);
      uVar24 = (uint)bVar11;
      switch(*(undefined1 *)(param_2 + 2 + lVar28 * 8)) {
      case 1:
        local_37c = 0x29;
        break;
      case 2:
        local_37c = 0x10;
        break;
      case 3:
        local_37c = 6;
        break;
      case 4:
        local_37c = 2;
        break;
      case 5:
        local_37c = 0x1f;
        break;
      case 6:
        local_37c = 0x1e;
        break;
      case 7:
        local_37c = 0x1c;
        break;
      case 8:
        local_37c = 0x57;
        break;
      case 9:
        local_37c = 0x26;
        break;
      case 10:
        local_37c = 0xe;
        break;
      case 0xb:
        local_37c = 0x25;
        break;
      case 0xc:
        local_37c = 0x22;
        break;
      case 0xd:
        local_37c = 10;
        break;
      case 0xe:
        local_37c = 0xd;
        break;
      case 0xf:
        local_37c = 0x24;
        break;
      case 0x10:
        local_37c = 0xc;
        break;
      case 0x11:
        local_37c = 0x23;
        break;
      case 0x12:
        local_37c = 0xb;
        break;
      case 0x13:
        local_37c = 0x18;
        break;
      case 0x14:
        local_37c = 0x2a;
        break;
      default:
        FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12VertexDeclaration.cpp",0x3a,
                      L"Unknown RHI vertex element type %u");
        bVar11 = *(byte *)(param_2 + lVar28 * 8);
        local_37c = 0;
      }
      bVar1 = *(byte *)(param_2 + 3 + lVar28 * 8);
      sVar2 = *(short *)(param_2 + 6 + lVar28 * 8);
      if (((uVar22 & 0xffff) >> (bVar11 & 0x1f) & 1) == 0) {
        uVar22 = uVar22 | 1 << (bVar11 & 0x1f);
        *(undefined2 *)((longlong)puVar20 + (ulonglong)bVar11 * 2) =
             *(undefined2 *)(param_2 + 4 + lVar28 * 8);
      }
      lVar25 = (longlong)*(int *)(param_1 + 0x44);
      uVar12 = *(int *)(param_1 + 0x44) + 1;
      *(uint *)(param_1 + 0x44) = uVar12;
      if (*(uint *)((longlong)param_1 + 0x224) < uVar12) {
        local_378 = uVar22;
        local_370 = puVar20;
        FUN_147387e74(param_1);
        puVar20 = local_370;
        uVar22 = local_378;
      }
      uVar12 = (uint)(sVar2 != 0);
      lVar26 = lVar25 * 0x20;
      param_1[lVar25 * 4] = 0;
      *(uint *)(param_1 + lVar25 * 4 + 1) = (uint)bVar1;
      *(undefined4 *)((longlong)param_1 + lVar26 + 0xc) = local_37c;
      *(uint *)(param_1 + lVar25 * 4 + 2) = uVar24;
      *(uint *)((longlong)param_1 + lVar26 + 0x14) = local_374;
      *(uint *)(param_1 + lVar25 * 4 + 3) = uVar12;
      *(uint *)((longlong)param_1 + lVar26 + 0x1c) = uVar12;
      lVar28 = lVar28 + 1;
    } while (lVar28 < *(int *)(param_2 + 0x88));
    iVar23 = *(int *)(param_1 + 0x44);
    if (1 < (longlong)iVar23) {
      memset(local_358,0,0x2f0);
      local_360 = param_1 + (longlong)iVar23 * 4 + -4;
      local_368 = param_1;
      fVar31 = logf((float)iVar23);
      local_358[0] = (int)(longlong)(fVar31 + fVar31);
      ppuVar27 = &local_368;
      do {
        puVar15 = *ppuVar27;
        puVar14 = ppuVar27[1];
        iVar23 = *(int *)(ppuVar27 + 2);
        iVar16 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar15) >> 5);
        puVar21 = puVar15;
        if (iVar23 != 0) {
LAB_141106fa2:
          if (8 < (int)(iVar16 + 1U)) {
            uVar17 = (ulonglong)(iVar16 + 1U >> 1);
            uVar3 = puVar21[uVar17 * 4];
            uVar4 = (puVar21 + uVar17 * 4)[1];
            uVar5 = puVar21[uVar17 * 4 + 2];
            uVar6 = (puVar21 + uVar17 * 4 + 2)[1];
            uVar7 = *puVar21;
            uVar8 = puVar21[1];
            uVar9 = puVar21[3];
            puVar21[uVar17 * 4 + 2] = puVar21[2];
            (puVar21 + uVar17 * 4 + 2)[1] = uVar9;
            puVar21[uVar17 * 4] = uVar7;
            (puVar21 + uVar17 * 4)[1] = uVar8;
            puVar21[2] = uVar5;
            puVar21[3] = uVar6;
            *puVar21 = uVar3;
            puVar21[1] = uVar4;
            puVar15 = puVar21;
            puVar18 = puVar14 + 4;
            do {
              puVar15 = puVar15 + 4;
              if (puVar15 <= puVar14) {
                do {
                  bVar30 = *(uint *)(puVar21 + 2) < *(uint *)(puVar15 + 2);
                  if ((*(uint *)(puVar21 + 2) == *(uint *)(puVar15 + 2)) &&
                     (bVar30 = *(uint *)((longlong)puVar21 + 0x14) <
                               *(uint *)((longlong)puVar15 + 0x14),
                     *(uint *)((longlong)puVar21 + 0x14) == *(uint *)((longlong)puVar15 + 0x14))) {
                    bVar30 = *(uint *)(puVar21 + 1) < *(uint *)(puVar15 + 1);
                  }
                } while ((!bVar30) && (puVar15 = puVar15 + 4, puVar15 <= puVar14));
              }
              puVar19 = puVar18 + -4;
              if (puVar21 < puVar19) {
                puVar10 = puVar18;
                do {
                  puVar29 = puVar19;
                  puVar18 = puVar10;
                  puVar19 = puVar29;
                  if (*(uint *)(puVar18 + -2) == *(uint *)(puVar21 + 2)) {
                    if (*(uint *)((longlong)puVar18 - 0xc) == *(uint *)((longlong)puVar21 + 0x14)) {
                      if (*(uint *)(puVar18 + -3) < *(uint *)(puVar21 + 1)) goto LAB_14110705d;
                    }
                    else if (*(uint *)((longlong)puVar18 - 0xc) <
                             *(uint *)((longlong)puVar21 + 0x14)) {
                      puVar19 = puVar18 + -4;
                      goto LAB_14110705d;
                    }
                  }
                  else if (*(uint *)(puVar18 + -2) < *(uint *)(puVar21 + 2)) goto LAB_14110705d;
                  puVar10 = puVar18 + -4;
                  puVar19 = puVar29 + -4;
                } while (puVar21 < puVar18 + -8);
                puVar19 = puVar18 + -8;
                puVar18 = puVar29;
              }
LAB_14110705d:
              if (puVar19 < puVar15) goto code_r0x000141107066;
              uVar3 = *puVar15;
              uVar4 = puVar15[1];
              uVar5 = puVar15[2];
              uVar6 = puVar15[3];
              uVar7 = *puVar19;
              uVar8 = puVar19[1];
              uVar9 = puVar19[3];
              puVar15[2] = puVar19[2];
              puVar15[3] = uVar9;
              *puVar15 = uVar7;
              puVar15[1] = uVar8;
              puVar19[2] = uVar5;
              puVar19[3] = uVar6;
              *puVar19 = uVar3;
              puVar19[1] = uVar4;
              puVar18 = puVar19;
            } while( true );
          }
          for (; puVar15 = puVar21, puVar18 = puVar21, puVar21 < puVar14; puVar14 = puVar14 + -4) {
            while (puVar19 = puVar15, puVar15 = puVar18 + 4, puVar15 <= puVar14) {
              bVar30 = *(uint *)(puVar19 + 2) < *(uint *)(puVar15 + 2);
              if ((*(uint *)(puVar19 + 2) == *(uint *)(puVar15 + 2)) &&
                 (bVar30 = *(uint *)((longlong)puVar19 + 0x14) < *(uint *)((longlong)puVar18 + 0x34)
                 , *(uint *)((longlong)puVar19 + 0x14) == *(uint *)((longlong)puVar18 + 0x34))) {
                bVar30 = *(uint *)(puVar19 + 1) < *(uint *)(puVar15 + 1);
              }
              puVar18 = puVar15;
              if (!bVar30) {
                puVar15 = puVar19;
              }
            }
            local_68 = *puVar19;
            uStack_60 = puVar19[1];
            local_58 = puVar19[2];
            uStack_50 = puVar19[3];
            uVar6 = local_68;
            uVar7 = uStack_60;
            uVar3 = *puVar14;
            uVar4 = puVar14[1];
            uVar5 = puVar14[3];
            puVar19[2] = puVar14[2];
            puVar19[3] = uVar5;
            *puVar19 = uVar3;
            puVar19[1] = uVar4;
            local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
            puVar14[2] = local_58;
            puVar14[3] = uStack_50;
            *(undefined4 *)puVar14 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
            local_68 = uVar6;
            uStack_60 = uVar7;
          }
          goto LAB_1411071a6;
        }
LAB_14110736c:
        FUN_147387e9a(puVar15);
LAB_1411071a6:
        ppuVar27 = ppuVar27 + -3;
      } while (&local_368 <= ppuVar27);
      iVar23 = *(int *)(param_1 + 0x44);
    }
  }
  uVar13 = FUN_1448eb174(param_1,iVar23 << 5,0);
  *(undefined4 *)(param_1 + 0x45) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar13;
  uVar13 = FUN_1448eb174(puVar20,0x22,uVar13);
  *(undefined4 *)(param_1 + 0x45) = uVar13;
  if (0 < *(int *)(param_1 + 0x44)) {
    lVar28 = 0;
    puVar20 = param_1;
    do {
      *puVar20 = "ATTRIBUTE";
      lVar28 = lVar28 + 1;
      puVar20 = puVar20 + 4;
    } while (lVar28 < *(int *)(param_1 + 0x44));
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
code_r0x000141107066:
  local_68 = *puVar21;
  uStack_60 = puVar21[1];
  local_58 = puVar21[2];
  uStack_50 = puVar21[3];
  uVar6 = local_68;
  uVar7 = uStack_60;
  uVar3 = *puVar19;
  uVar4 = puVar19[1];
  uVar5 = puVar19[3];
  puVar21[2] = puVar19[2];
  puVar21[3] = uVar5;
  *puVar21 = uVar3;
  puVar21[1] = uVar4;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar19[2] = local_58;
  puVar19[3] = uStack_50;
  *(undefined4 *)puVar19 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar19 + 4) = local_68._4_4_;
  *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_60._4_4_;
  iVar23 = iVar23 + -1;
  puVar18 = puVar18 + -8;
  local_68 = uVar6;
  uStack_60 = uVar7;
  if ((longlong)puVar18 - (longlong)puVar21 < (longlong)puVar14 - (longlong)puVar15) {
    if (puVar15 < puVar14) {
      *ppuVar27 = puVar15;
      ppuVar27[1] = puVar14;
      *(int *)(ppuVar27 + 2) = iVar23;
      ppuVar27 = ppuVar27 + 3;
    }
    puVar14 = puVar18;
    puVar15 = puVar21;
    if (puVar19 <= puVar21 + 4) goto LAB_1411071a6;
  }
  else {
    if (puVar21 + 4 < puVar19) {
      *ppuVar27 = puVar21;
      ppuVar27[1] = puVar18;
      *(int *)(ppuVar27 + 2) = iVar23;
      ppuVar27 = ppuVar27 + 3;
    }
    if (puVar14 <= puVar15) goto LAB_1411071a6;
  }
  iVar16 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar15) >> 5);
  puVar21 = puVar15;
  if (iVar23 == 0) goto LAB_14110736c;
  goto LAB_141106fa2;
}



// FUNCTION 14110740c FUN_14110740c body=549 status=ok
// SIG undefined FUN_14110740c(void)

void FUN_14110740c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x268;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + 0x228 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x264 + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x260 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1411075ec;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1411075ec:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141107632 FUN_141107632 body=71 status=ok
// SIG undefined FUN_141107632(void)

byte FUN_141107632(undefined8 param_1)

{
  byte bVar1;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  bVar1 = FUN_14016169c(param_1,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar1 ^ 1 | local_14 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141107688 FUN_141107688 body=191 status=ok
// SIG undefined FUN_141107688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141107688(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b7ba180;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_141107747(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141107747 FUN_141107747 body=47 status=ok
// SIG undefined FUN_141107747(void)

void FUN_141107747(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141107776 FUN_141107776 body=262 status=ok
// SIG undefined FUN_141107776(void)

void FUN_141107776(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x39] != 0) goto LAB_141107796;
  (**(code **)(*param_1 + 0x198))(param_1,&local_30);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    param_1[0x39] = local_30;
    plVar4 = (longlong *)param_1[0x3a];
    if (plVar4 != (longlong *)0x0) {
      param_1[0x3a] = 0;
LAB_141107842:
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x00014110786d:
        if (iVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    param_1[0x39] = local_30;
    plVar4 = (longlong *)param_1[0x3a];
    if (local_28 == plVar4) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar4 = plVar1;
        goto joined_r0x00014110786d;
      }
    }
    else {
      param_1[0x3a] = (longlong)local_28;
      if (plVar4 != (longlong *)0x0) goto LAB_141107842;
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
LAB_141107796:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110787e FUN_14110787e body=364 status=ok
// SIG undefined FUN_14110787e(void)

longlong * FUN_14110787e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  plVar6 = (longlong *)FUN_14001cc68(200,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149f2a4d0;
  plVar6[2] = (longlong)&PTR_FUN_149f28df0;
  (**(code **)*param_1)(param_1,plVar6 + 3);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1);
  plVar6[5] = 0;
  iVar3 = *(int *)(puVar7 + 1);
  _Src = (void *)*puVar7;
  *(int *)(plVar6 + 6) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)plVar6 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(plVar6 + 5,iVar3,0);
    memcpy((void *)plVar6[5],_Src,(longlong)iVar3 * 2);
  }
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  *(undefined4 *)(plVar6 + 7) = uVar5;
  uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)((longlong)plVar6 + 0x3c) = uVar4;
  *(undefined4 *)(plVar6 + 8) = 0;
  plVar6[2] = (longlong)&PTR_FUN_149f28210;
  plVar6[0x11] = 0;
  *(undefined4 *)(plVar6 + 0x12) = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar6 + 0x9c) = 0;
  plVar6[0x15] = 0;
  *(undefined4 *)(plVar6 + 0x16) = 0;
  plVar6[0x17] = 0;
  *(undefined4 *)(plVar6 + 0x18) = 0;
  *(undefined4 *)((longlong)plVar6 + 0xc4) = 0;
  *param_2 = (longlong)(plVar6 + 2);
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 141107a02 FUN_141107a02 body=1026 status=ok
// SIG undefined FUN_141107a02(void)

void FUN_141107a02(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_24 = (undefined4)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_24);
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  puVar5 = &uStack_24;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = puVar4;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141107e06(puVar5,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141107e06 FUN_141107e06 body=144 status=ok
// SIG undefined FUN_141107e06(void)

void FUN_141107e06(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 2;
  local_38 = param_2;
  FUN_141107e97(param_1,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141107e97 FUN_141107e97 body=495 status=ok
// SIG undefined FUN_141107e97(void)

void FUN_141107e97(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 != (longlong *)0x0) && (*param_1 != 0)) {
    if (DAT_14c9a4e08 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1470c76a3;
      local_50 = FUN_1462ab034;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar1 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,DAT_14c9a4e08);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14c9a4e08 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1470c76a3;
        local_50 = FUN_1462ab034;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14c9a4e08);
      if (plVar2 != (longlong *)0x0 && plVar1 != plVar2) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411080a4 FUN_1411080a4 body=221 status=ok
// SIG undefined FUN_1411080a4(void)

longlong FUN_1411080a4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacf380 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14799127c;
    local_40 = &LAB_1459d1f78;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 0x10;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/Engine",L"CameraShakeBase",&DAT_14cacf380,FUN_1463b1106);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacf380;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141108188 FUN_141108188 body=221 status=ok
// SIG undefined FUN_141108188(void)

longlong FUN_141108188(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0f898 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147da7dc8;
    local_40 = &LAB_145ad44ca;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/Engine",L"RuntimeVirtualTexture",&DAT_14cb0f898,FUN_14640cdca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0f898;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141108266 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14110826c FUN_14110826c body=489 status=ok
// SIG undefined FUN_14110826c(void)

undefined8 *
FUN_14110826c(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,char param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  lVar4 = param_4[1];
  if (lVar4 == 0) {
    uVar6 = FUN_14043db3a();
    lVar4 = FUN_14477b664(uVar6);
    param_4[1] = lVar4;
  }
  if (((param_4[2] == 0) && (lVar4 != 0)) && (*param_4 != 0)) {
    plVar8 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
      lVar4 = FUN_144aff482(uVar6,param_4);
    }
    param_4[2] = lVar4;
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1a8);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1411082fa;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x1ac) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar7;
      goto LAB_1411082fa;
    }
  }
  uVar6 = 0;
LAB_1411082fa:
  lVar4 = FUN_14031964a(uVar6);
  if (lVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (param_3 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
    }
    if ((((((*(int *)(param_1 + 0x1ac) != 0) &&
           (uVar1 = *(uint *)(param_1 + 0x1a8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
         && ((plVar8 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x1ac))))) &&
        (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
         ((*plVar8 != 0 && (iVar3 = FUN_14490d72a(), iVar3 == 3 && param_5 == '\0')))))) &&
       ((lVar5 == 0 || (*(char *)(lVar5 + 0x178) != '\x03')))) {
      FUN_14888013c(lVar4,param_2,param_4);
      return param_2;
    }
    FUN_141108456(lVar4,param_2,param_3,param_4);
  }
  return param_2;
}



// FUNCTION 141108456 FUN_141108456 body=305 status=ok
// SIG undefined FUN_141108456(void)

undefined8 *
FUN_141108456(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = param_4[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14043db3a();
    lVar4 = FUN_14477b664(uVar3);
    param_4[1] = lVar4;
  }
  if (param_4[2] != 0) {
LAB_14110849d:
    lVar4 = FUN_14188dfbe(param_1,param_4);
    local_38 = lVar4;
    if (lVar4 == 0) {
      FUN_1411a9c12(param_1,param_2,param_4,param_3);
      if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    if (param_3 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    }
    FUN_146550fb4(lVar4,uVar3);
    FUN_14655150e(param_2,&local_38);
    goto LAB_141108533;
  }
  if ((lVar4 != 0) && (*param_4 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_4);
        param_4[2] = lVar4;
        if (lVar4 != 0) goto LAB_14110849d;
        goto LAB_14110852d;
      }
    }
    param_4[2] = 0;
  }
LAB_14110852d:
  *param_2 = 0;
  param_2[1] = 0;
LAB_141108533:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 141108596 FUN_141108596 body=207 status=ok
// SIG undefined FUN_141108596(void)

undefined8 * FUN_141108596(undefined8 *param_1,int param_2)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x314) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x314) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x30c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x30c) = 0;
  }
  *param_1 = &PTR_FUN_14a42e670;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14110867e FUN_14110867e body=97 status=ok
// SIG undefined FUN_14110867e(void)

undefined8 * FUN_14110867e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a491480;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1411086e0 FUN_1411086e0 body=159 status=ok
// SIG undefined FUN_1411086e0(void)

ulonglong FUN_1411086e0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  
  lVar5 = (**(code **)(*param_1 + 0x10))();
  uVar6 = *(ulonglong *)(lVar5 + 8);
  plVar3 = *(longlong **)(lVar5 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  if (uVar6 != 0) {
    uVar6 = uVar6 + 0x38;
    lVar5 = FUN_141108780(uVar6);
    if (lVar5 != 0) {
      uVar4 = FUN_147553a12(lVar5,param_2);
      uVar6 = (ulonglong)uVar4;
      bVar7 = 1;
      goto LAB_141108723;
    }
  }
  bVar7 = 0;
LAB_141108723:
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
  return CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 & bVar7) & 0xffffffff;
}



// FUNCTION 141108780 FUN_141108780 body=190 status=ok
// SIG undefined FUN_141108780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141108780(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 2) >> (_DAT_14cab3288 & 0x1f) & 1) != 0) {
    uVar5 = (1 << ((byte)_DAT_14cab3288 & 0x1f)) - 1U & *(uint *)(param_1 + 2);
    uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar2 = *param_1;
    uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar6 * 6);
    lVar7 = lVar2 + uVar3;
    if (uVar3 == 0xffff) {
      lVar7 = 0;
    }
    puVar4 = (undefined8 *)((ulonglong)*(byte *)(lVar2 + 4 + uVar6 * 6) + lVar7);
    if (puVar4 != (undefined8 *)0x0) {
      cVar1 = *(char *)(lVar2 + uVar6 * 6 + 5);
      if (cVar1 == '\0') {
        return puVar4;
      }
      if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
        return (undefined8 *)*puVar4;
      }
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14110883e FUN_14110883e body=302 status=ok
// SIG undefined FUN_14110883e(void)

void FUN_14110883e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong *puVar4;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = local_38 & 0xffffffffffffff00;
  local_30 = 0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(ulonglong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  puVar4 = *(ulonglong **)(param_2 + 0x38);
  if (*(ulonglong **)(param_2 + 0x38) == (ulonglong *)0x0) {
    puVar4 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14110896e(param_1,puVar4);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110896e FUN_14110896e body=84 status=ok
// SIG undefined FUN_14110896e(void)

void FUN_14110896e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar2 = 0;
  }
  iVar1 = *(int *)(lVar2 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x98);
    lVar3 = 0;
    do {
      FUN_1415c6aaa(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1411089ce FUN_1411089ce body=604 status=ok
// SIG undefined FUN_1411089ce(void)

undefined8 * FUN_1411089ce(undefined8 *param_1)

{
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b684900;
  param_1[0x72] = &PTR_FUN_14b684f70;
  param_1[0x73] = &PTR_FUN_14b684f90;
  param_1[0x74] = &PTR_FUN_14b684fc0;
  param_1[0x75] = &PTR_FUN_14b684fd0;
  param_1[0x76] = &PTR_FUN_14b685040;
  param_1[0x77] = &PTR_FUN_14b685070;
  param_1[0x78] = &PTR_FUN_14b6850a0;
  param_1[0x7f] = &PTR_FUN_14b685150;
  param_1[0x80] = &PTR_FUN_14b6851c0;
  param_1[0x81] = &PTR_FUN_14b685230;
  param_1[0x82] = &PTR_FUN_14b685260;
  param_1[0x83] = &PTR_FUN_14b6852a0;
  param_1[0x84] = &PTR_FUN_14b685340;
  param_1[0x85] = &PTR_FUN_14b685360;
  param_1[0x89] = &PTR_FUN_14b685380;
  param_1[0x8a] = &PTR_FUN_14b685440;
  param_1[0x8b] = &PTR_FUN_14b6854c0;
  param_1[0x8c] = &PTR_FUN_14b685510;
  param_1[0x8d] = &PTR_FUN_14b685550;
  param_1[0x8e] = &PTR_FUN_14b685570;
  param_1[0x8f] = &PTR_FUN_14b685590;
  param_1[0x90] = &PTR_FUN_14b6855b0;
  param_1[0x91] = &PTR_FUN_14b6855d0;
  param_1[0x92] = &PTR_FUN_14b6855f0;
  param_1[0x93] = &PTR_FUN_14b685610;
  param_1[0x94] = &PTR_FUN_14b685630;
  param_1[0x95] = &PTR_FUN_14b685650;
  param_1[0x96] = &PTR_FUN_14b685670;
  param_1[0x34b] = &PTR_FUN_14b685690;
  param_1[0x352] = &PTR_FUN_14b6856a0;
  param_1[0x353] = &PTR_FUN_14b6856e0;
  param_1[0x354] = &PTR_FUN_14b685720;
  param_1[0x355] = &PTR_FUN_14b685770;
  param_1[0x356] = &PTR_FUN_14b6857a0;
  param_1[0x359] = &PTR_FUN_14b6857e0;
  param_1[0x35a] = &PTR_FUN_14b6857f0;
  param_1[0x35b] = &PTR_FUN_14b685820;
  param_1[0x35c] = &PTR_FUN_14b6858c0;
  *(undefined2 *)(param_1 + 0x4bf) = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  *(undefined4 *)(param_1 + 0x4c2) = 0xbf800000;
  param_1[0x4c4] = 0;
  return param_1;
}



// FUNCTION 141108c2a FUN_141108c2a body=192 status=ok
// SIG undefined FUN_141108c2a(void)

longlong FUN_141108c2a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = FUN_141108cea();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_141108c59;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_141108c59:
    lVar2 = FUN_141108cea();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar5 = lVar1;
      }
      goto LAB_141108c7e;
    }
  }
  lVar5 = 0;
LAB_141108c7e:
  plVar3 = (longlong *)FUN_1448a6f9c(param_1 + 0x1750,lVar5);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_14086c8a8();
    lVar1 = (**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (lVar1 != 0) {
      uVar4 = FUN_14086c8a8();
      lVar2 = FUN_144718840(lVar1,uVar4);
      if (lVar1 == lVar2) {
        return 0;
      }
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 141108cea FUN_141108cea body=228 status=ok
// SIG undefined FUN_141108cea(void)

longlong FUN_141108cea(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb34f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465f0cd8;
    local_28 = &LAB_145a8cb92;
    local_38 = &LAB_148c5bcdc;
    local_40 = &LAB_145843f2c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_VehicleVitals",&DAT_14cbb34f0,
                  FUN_1465f8010);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb34f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141108dd0 FUN_141108dd0 body=136 status=ok
// SIG undefined FUN_141108dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141108dd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b9510b0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000141108e4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 141108e58 FUN_141108e58 body=506 status=ok
// SIG undefined FUN_141108e58(void)

void FUN_141108e58(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x40);
    lVar8 = (longlong)*(int *)(param_1 + 0x48) * 0x18;
    do {
      lVar1 = *param_2;
      lVar5 = plVar7[1];
      if (lVar5 == 0) {
        uVar4 = FUN_145d175f8();
        lVar5 = FUN_14477b664(uVar4);
        plVar7[1] = lVar5;
      }
      lVar6 = plVar7[2];
      if (lVar6 == 0) {
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if (*plVar7 != 0) {
            plVar2 = *(longlong **)(lVar5 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
              lVar6 = 0;
            }
            else {
              uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar6 = FUN_144aff482(uVar4,plVar7);
            }
            plVar7[2] = lVar6;
          }
        }
      }
      local_50 = lVar6;
      FUN_141109054(lVar1 + 0x148);
      FUN_14087cadc(lVar1 + 0x198,local_54,&local_50,0);
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x30);
    lVar8 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      lVar1 = *param_2;
      lVar5 = plVar7[1];
      if (lVar5 == 0) {
        uVar4 = FUN_145d175f8();
        lVar5 = FUN_14477b664(uVar4);
        plVar7[1] = lVar5;
      }
      lVar6 = plVar7[2];
      if (lVar6 == 0) {
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if (*plVar7 != 0) {
            plVar2 = *(longlong **)(lVar5 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
              lVar6 = 0;
            }
            else {
              uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar6 = FUN_144aff482(uVar4,plVar7);
            }
            plVar7[2] = lVar6;
          }
        }
      }
      FUN_14087c9f2(lVar1,lVar6);
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141109054 FUN_141109054 body=158 status=ok
// SIG undefined FUN_141109054(void)

undefined8 FUN_141109054(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_1411090f2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1411090f2 FUN_1411090f2 body=95 status=ok
// SIG undefined FUN_1411090f2(void)

void FUN_1411090f2(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_141109152(param_1,param_2,1);
  return;
}



// FUNCTION 141109152 FUN_141109152 body=138 status=ok
// SIG undefined FUN_141109152(void)

void FUN_141109152(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1411091dc FUN_1411091dc body=291 status=ok
// SIG undefined FUN_1411091dc(void)

undefined4 * FUN_1411091dc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141109398(param_1,local_48);
  bVar1 = *(byte *)*param_3;
  *local_40 = bVar1;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0xff;
  local_40[9] = 0xff;
  local_40[10] = 0xff;
  local_40[0xb] = 0xff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_141109300(param_1,bVar1,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0xc) = uVar4;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1456e9d1a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141109300 FUN_141109300 body=152 status=ok
// SIG undefined FUN_141109300(void)

void FUN_141109300(longlong *param_1,uint param_2,char *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(char *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_14023c2b2(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(puVar1 + 1);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_141109324;
    }
  }
  uVar2 = 0;
LAB_141109324:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 141109398 FUN_141109398 body=231 status=ok
// SIG undefined FUN_141109398(void)

int * FUN_141109398(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_144869a3c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 141109488 FUN_141109488 body=205 status=ok
// SIG undefined FUN_141109488(void)

undefined8 * FUN_141109488(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b284200;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_1 + 5) = local_48.Data1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 6) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48.Data4._4_4_;
  *param_1 = &PTR_FUN_14b283110;
  param_1[7] = &PTR_FUN_14b2841e0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_1 + 8) = local_48.Data1;
  *(undefined4 *)((longlong)param_1 + 0x44) = local_48._4_4_;
  *(undefined4 *)(param_1 + 9) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_48.Data4._4_4_;
  param_1[7] = &PTR_FUN_14b283190;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141109556 FUN_141109556 body=267 status=ok
// SIG undefined FUN_141109556(void)

void FUN_141109556(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x130] != 0) {
    if (param_1[0x131] != 0) {
      lVar2 = FUN_1411a5c2e(param_1);
      if (lVar2 != 0) {
        FUN_14580662a(lVar2,param_1 + 0x131);
      }
    }
    (**(code **)(*param_1 + 0x690))(param_1);
    lVar2 = param_1[0x195];
    if (0 < (longlong)(int)lVar2) {
      lVar1 = param_1[0x194];
      lVar3 = 0;
      do {
        local_50 = *(undefined8 *)(lVar1 + lVar3);
        local_58 = &local_68;
        local_60 = &LAB_143f81890;
        local_68 = &local_50;
        FUN_1407a478e(&local_50,&local_60);
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar3);
    }
    *(undefined4 *)(param_1 + 0x195) = 0;
    if (*(int *)((longlong)param_1 + 0xcac) != 0) {
      FUN_145806640(param_1 + 0x194);
    }
  }
  FUN_145806670(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141109662 FUN_141109662 body=102 status=ok
// SIG undefined FUN_141109662(void)

void FUN_141109662(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0xc30)) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xc28) + lVar1 * 8) + 0x2a8))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xc30));
  }
  *(undefined4 *)(param_1 + 0xc30) = 0;
  if (-1 < *(int *)(param_1 + 0xc34)) {
    return;
  }
  FUN_148addd4e(param_1 + 0xc28);
  return;
}



// FUNCTION 1411096ca FUN_1411096ca body=8 status=ok
// SIG undefined FUN_1411096ca(void)

void FUN_1411096ca(longlong param_1)

{
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xf7;
  return;
}



// FUNCTION 1411096d2 FUN_1411096d2 body=37 status=ok
// SIG undefined FUN_1411096d2(void)

void FUN_1411096d2(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x150) != 0) {
    lVar1 = FUN_14496b220();
    if (lVar1 != 0) {
      *(undefined2 *)(lVar1 + 0x72) = 0x101;
    }
  }
  return;
}



// FUNCTION 1411096f8 FUN_1411096f8 body=285 status=ok
// SIG undefined FUN_1411096f8(void)

void FUN_1411096f8(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_141109816(lVar2,*param_2);
    uVar7 = 0;
    uVar9 = 0;
    do {
      uVar8 = (ulonglong)uVar9;
      uVar6 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar1) {
        uVar6 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar8 * 8;
      uVar10 = uVar9;
      uVar5 = uVar8;
      do {
        uVar5 = uVar5 + 1;
        uVar11 = uVar6;
        if (lVar13 <= (longlong)uVar5) break;
        bVar4 = FUN_141109816(lVar12,*param_2);
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 8;
        uVar11 = uVar10;
      } while ((bVar3 & 1) == bVar4);
      if ((bVar3 & 1) == 0) {
        if (uVar7 != uVar9) {
          memmove((void *)(lVar2 + (longlong)(int)uVar7 * 8),(void *)(lVar2 + uVar8 * 8),
                  (longlong)(int)(uVar11 - uVar9) << 3);
        }
        uVar7 = uVar7 + (uVar11 - uVar9);
      }
      uVar9 = uVar11;
      bVar3 = bVar3 ^ 1;
    } while ((longlong)uVar5 < lVar13);
    *(uint *)(param_1 + 1) = uVar7;
  }
  return;
}



// FUNCTION 141109816 FUN_141109816 body=55 status=ok
// SIG undefined FUN_141109816(void)

ulonglong FUN_141109816(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 141109854 FUN_141109854 body=1489 status=ok
// SIG undefined FUN_141109854(void)

void FUN_141109854(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_60;
  int iStack_5c;
  ushort local_48;
  byte local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_48 = 4;
  local_60 = (uint)*(byte *)(*(longlong *)*param_1 + 8);
  local_40 = 2;
  local_38 = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_141109e26(param_2,&DAT_14cbd2d58,&local_68);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_48 < 0x19) {
      puVar3 = &local_60;
    }
    else {
      puVar3 = (uint *)CONCAT44(iStack_5c,local_60);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(CONCAT44(iStack_5c,local_60));
  }
  local_68 = 0;
  local_48 = 8;
  iStack_5c = 0;
  if (*(longlong *)(param_1[1] + 0x10) == 0) {
    local_60 = 0;
    iVar2 = 0;
  }
  else {
    local_60 = *(uint *)(*(longlong *)(param_1[1] + 0x10) + 0xc);
    if ((int)local_60 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_60 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
  }
  local_40 = 7;
  local_38 = 7;
  if ((DAT_14c9a8cf4 & 0x20) != 0) {
    local_38 = 0;
  }
  iStack_5c = iVar2;
  FUN_141109e26(param_2,&DAT_14cbd2d60,&local_68);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_48 < 0x19) {
      puVar3 = &local_60;
    }
    else {
      puVar3 = (uint *)CONCAT44(iStack_5c,local_60);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(CONCAT44(iStack_5c,local_60));
  }
  local_60 = *(uint *)param_1[2];
  local_68 = 0;
  local_48 = 4;
  local_40 = 3;
  local_38 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_141109e26(param_2,&DAT_14cbd2d70,&local_68);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_48 < 0x19) {
      puVar3 = &local_60;
    }
    else {
      puVar3 = (uint *)CONCAT44(iStack_5c,local_60);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(CONCAT44(iStack_5c,local_60));
  }
  local_60 = *(uint *)param_1[3];
  local_68 = 0;
  local_48 = 4;
  local_40 = 3;
  local_38 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_141109e26(param_2,&DAT_14cbd2d68,&local_68);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_48 < 0x19) {
      puVar3 = &local_60;
    }
    else {
      puVar3 = (uint *)CONCAT44(iStack_5c,local_60);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(CONCAT44(iStack_5c,local_60));
  }
  local_68 = 0;
  local_48 = 8;
  iStack_5c = 0;
  if (*(longlong *)param_1[4] == 0) {
    local_60 = 0;
    iVar2 = 0;
  }
  else {
    local_60 = *(uint *)(*(longlong *)param_1[4] + 0xc);
    if ((int)local_60 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_60 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
  }
  local_40 = 7;
  local_38 = 7;
  if ((DAT_14c9a8cf4 & 0x20) != 0) {
    local_38 = 0;
  }
  iStack_5c = iVar2;
  FUN_141109e26(param_2,&DAT_14cbd2d78,&local_68);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_48 < 0x19) {
      puVar3 = &local_60;
    }
    else {
      puVar3 = (uint *)CONCAT44(iStack_5c,local_60);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(CONCAT44(iStack_5c,local_60));
  }
  local_68 = 0;
  local_48 = 8;
  iStack_5c = 0;
  if (*(longlong *)param_1[5] == 0) {
    local_60 = 0;
    iVar2 = 0;
  }
  else {
    local_60 = *(uint *)(*(longlong *)param_1[5] + 0xc);
    if ((int)local_60 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_60 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
  }
  local_40 = 7;
  local_38 = 7;
  if ((DAT_14c9a8cf4 & 0x20) != 0) {
    local_38 = 0;
  }
  iStack_5c = iVar2;
  FUN_141109e26(param_2,&DAT_14cbd2d80,&local_68);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_48 < 0x19) {
      puVar3 = &local_60;
    }
    else {
      puVar3 = (uint *)CONCAT44(iStack_5c,local_60);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(CONCAT44(iStack_5c,local_60));
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141109e26 FUN_141109e26 body=203 status=ok
// SIG undefined FUN_141109e26(void)

void FUN_141109e26(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x48) == lVar1) goto LAB_141109ed5;
        iVar5 = *(int *)(*param_1 + (longlong)iVar5 * 0x48 + 0x40);
      } while (iVar5 != -1);
    }
  }
  local_28 = param_2;
  local_20 = param_3;
  FUN_140ffa80e(param_1,local_14,&local_28,0);
LAB_141109ed5:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141109ef2 FUN_141109ef2 body=38 status=ok
// SIG undefined FUN_141109ef2(void)

undefined8 FUN_141109ef2(undefined8 param_1,int param_2)

{
  FUN_141109f18();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141109f18 FUN_141109f18 body=3168 status=ok
// SIG undefined FUN_141109f18(void)

void FUN_141109f18(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b069e00;
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4e],*(undefined4 *)(param_1 + 0x4f));
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4b],*(undefined4 *)(param_1 + 0x4c));
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x45],*(undefined4 *)(param_1 + 0x46));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0xe4) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x1b) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x1b) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xbc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0xbc) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x16) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x16) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x16) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0xa4) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x13) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x13) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x8c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x10) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x10) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x74) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xd) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0xd) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x5c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 10) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 10) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 10) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x44) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 7) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 7) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 7) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x2c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 4) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14110ab78 FUN_14110ab78 body=229 status=ok
// SIG undefined FUN_14110ab78(void)

void FUN_14110ab78(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined1 *local_50;
  int **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  LOCK();
  param_1[2] = param_1[2] + 1;
  UNLOCK();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  local_50 = &LAB_1427e3f18;
  local_58 = param_1;
  local_48 = &local_58;
  FUN_14110ac5e(&local_50,0);
  EnterCriticalSection(lpCriticalSection);
  if (*param_1 != 0) {
    do {
      LeaveCriticalSection(lpCriticalSection);
      local_50 = &LAB_1427e3f18;
      local_58 = param_1;
      local_48 = &local_58;
      FUN_14110ac5e(&local_50,0);
      EnterCriticalSection(lpCriticalSection);
    } while (*param_1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0xe) + 0x18))();
  LOCK();
  param_1[1] = param_1[1] + 1;
  UNLOCK();
  LOCK();
  param_1[2] = 0;
  UNLOCK();
  LeaveCriticalSection(lpCriticalSection);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14110ac5e FUN_14110ac5e body=114 status=ok
// SIG undefined FUN_14110ac5e(void)

void FUN_14110ac5e(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (*(code *)*param_1)(param_1[1]);
  if (cVar1 == '\0') {
    FUN_1403937d4(local_28,0);
    do {
      FUN_14279b9b6(param_2);
      cVar1 = (*(code *)*param_1)(param_1[1]);
    } while (cVar1 == '\0');
    FUN_140248952(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110acd2 FUN_14110acd2 body=135 status=ok
// SIG undefined FUN_14110acd2(void)

undefined8 * FUN_14110acd2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8597d0;
  param_1[5] = &PTR_LAB_14b85a2b0;
  param_1[6] = &PTR_LAB_14b85a2f0;
  param_1[0x55] = &PTR_LAB_14b85a340;
  param_1[0x56] = &PTR_LAB_14b85a3c0;
  param_1[0x57] = &PTR_LAB_14b85a3d0;
  if ((longlong *)param_1[0xfa] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xfa] + 0x10))();
  }
  FUN_14110ad5a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14110ad5a FUN_14110ad5a body=207 status=ok
// SIG undefined FUN_14110ad5a(void)

void FUN_14110ad5a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a53ddb0;
  param_1[5] = &PTR_FUN_14a53e890;
  param_1[6] = &PTR_LAB_14a53e8d0;
  param_1[0x55] = &PTR_FUN_14a53e920;
  param_1[0x56] = &PTR_FUN_14a53e9a0;
  param_1[0x57] = &PTR_FUN_14a53e9b0;
  plVar3 = (longlong *)param_1[0xf1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0xef];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0xe9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 14110ae2a FUN_14110ae2a body=169 status=ok
// SIG undefined FUN_14110ae2a(void)

undefined8 * FUN_14110ae2a(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a759e50;
  param_1[5] = &PTR_FUN_14a75a180;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x73) = 1;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x340400000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x41a0000041a00000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 14110aed4 FUN_14110aed4 body=78 status=ok
// SIG undefined FUN_14110aed4(void)

void FUN_14110aed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a759e50;
  param_1[5] = &PTR_FUN_14a75a180;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14110af42 FUN_14110af42 body=1038 status=ok
// SIG undefined FUN_14110af42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14110af42(longlong param_1,byte param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar21 [16];
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int local_9c;
  undefined8 local_98;
  byte local_89;
  undefined8 local_88;
  uint uVar18;
  
  local_88 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0x68) = 0;
  local_c8 = &LAB_141720150;
  local_d0 = &LAB_141720158;
  local_d8 = 0;
  local_9c = param_3;
  local_89 = param_2;
  uVar9 = png_create_read_struct_2("1.5.2",param_1,FUN_142884d06,&LAB_142884d00);
  local_98 = uVar9;
  local_b0 = png_create_info_struct(uVar9);
  local_a8 = param_1;
  local_c0 = png_malloc(uVar9,*(longlong *)(param_1 + 0x50) << 3);
  local_b8 = local_c0;
  uVar9 = png_set_longjmp_fn(uVar9,longjmp,0x100);
  iVar6 = __intrinsic_setjmp(uVar9,local_f8);
  lVar15 = local_a8;
  if (iVar6 != 0) {
    *(undefined8 *)(local_a8 + 0x18) = 0;
    if (*(longlong *)(local_a8 + 0x20) != 0) {
      FUN_140d2d4a8(local_a8 + 0x10,0);
    }
    goto LAB_14110b2ea;
  }
  uVar18 = *(uint *)(local_a8 + 0x70);
  if (uVar18 == 3) {
    png_set_palette_to_rgb(local_98);
    uVar18 = *(uint *)(lVar15 + 0x70);
  }
  bVar5 = local_89;
  iVar8 = local_9c;
  if (((uVar18 & 2) == 0) && (*(int *)(lVar15 + 0x44) < 8)) {
    png_set_expand_gray_1_2_4_to_8(local_98);
    uVar18 = *(uint *)(lVar15 + 0x70);
  }
  if ((bVar5 < 2) && ((uVar18 & 4) == 0)) {
    png_set_tRNS_to_alpha(local_98);
    if (iVar8 == 0x10) {
      uVar9 = 0xffff;
    }
    else {
      if (iVar8 != 8) goto LAB_14110b0c1;
      uVar9 = 0xff;
    }
    png_set_add_alpha(local_98,uVar9,1);
  }
LAB_14110b0c1:
  uVar14 = ((ulonglong)((longlong)iVar8 << (bVar5 != 2) * '\x02') >> 3) *
           *(longlong *)(lVar15 + 0x48);
  uVar13 = *(longlong *)(lVar15 + 0x50) * uVar14;
  if ((longlong)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar13);
  }
  plVar1 = (longlong *)(lVar15 + 0x10);
  *(undefined8 *)(lVar15 + 0x18) = 0;
  if (*(ulonglong *)(lVar15 + 0x20) == uVar13) {
    lVar11 = 0;
    uVar10 = uVar13;
  }
  else {
    FUN_140d2d4a8(plVar1,uVar13);
    lVar11 = *(longlong *)(local_a8 + 0x18);
    uVar10 = *(ulonglong *)(local_a8 + 0x20);
    lVar15 = local_a8;
  }
  *(ulonglong *)(lVar15 + 0x18) = lVar11 + uVar13;
  if (uVar10 - lVar11 < uVar13) {
    FUN_14112c458(plVar1);
  }
  lVar11 = local_a8;
  png_set_read_fn(local_98,local_a8,FUN_14288509e);
  bVar5 = local_89;
  auVar3 = _DAT_149931e80;
  lVar15 = *(longlong *)(lVar11 + 0x50);
  if (0 < lVar15) {
    lVar2 = *plVar1;
    lVar12 = lVar15 + -1;
    auVar19._8_4_ = (int)lVar12;
    auVar19._0_8_ = lVar12;
    auVar19._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    uVar18 = (uint)(uVar14 >> 0x20);
    auVar17._8_4_ = (int)uVar14;
    auVar17._0_8_ = uVar14;
    auVar17._12_4_ = uVar18;
    auVar21 = pmovsxbq(unaff_XMM6,0x100);
    uVar13 = 0;
    auVar19 = auVar19 ^ _DAT_149931e80;
    auVar20 = pmovsxbq(in_XMM5,0x202);
    do {
      uVar10 = auVar21._8_8_;
      if ((bool)(~(auVar19._0_8_ < SUB168(auVar21 ^ auVar3,0)) & 1)) {
        *(ulonglong *)(local_b8 + uVar13 * 8) =
             (ulonglong)auVar21._0_4_ * (uVar14 & 0xffffffff) +
             ((ulonglong)auVar21._0_4_ * (ulonglong)uVar18 +
              (auVar21._0_8_ >> 0x20) * (uVar14 & 0xffffffff) << 0x20) + lVar2;
      }
      if (SUB168(auVar21 ^ auVar3,8) <= auVar19._8_8_) {
        *(ulonglong *)(local_b8 + 8 + uVar13 * 8) =
             (uVar10 & 0xffffffff) * (uVar14 & 0xffffffff) +
             ((uVar10 & 0xffffffff) * (auVar17._8_8_ >> 0x20) +
              (uVar10 >> 0x20) * (uVar14 & 0xffffffff) << 0x20) + lVar2;
      }
      uVar13 = uVar13 + 2;
      auVar21._0_8_ = auVar21._0_8_ + auVar20._0_8_;
      auVar21._8_8_ = uVar10 + auVar20._8_8_;
    } while ((lVar15 + 1U & 0xfffffffffffffffe) != uVar13);
  }
  png_set_rows(local_98,local_b0,local_b8);
  iVar4 = local_9c;
  uVar7 = (uint)(bVar5 == 1) * 0x80;
  iVar8 = *(int *)(lVar11 + 0x44);
  uVar18 = uVar7 + 0x200;
  if (iVar8 != 0x10) {
    uVar18 = uVar7;
  }
  bVar16 = (*(byte *)(lVar11 + 0x70) & 2) != 0;
  uVar7 = uVar18 + 0x2000;
  if (bVar16) {
    uVar7 = uVar18;
  }
  if (1 < bVar5) {
    uVar7 = uVar18;
  }
  if (bVar5 == 2 && bVar16) {
    png_set_rgb_to_gray_fixed(local_98,2,0xffffffff,0xffffffff);
    iVar8 = *(int *)(lVar11 + 0x44);
  }
  uVar18 = uVar7 | 2;
  if (bVar5 != 2) {
    uVar18 = uVar7;
  }
  png_read_png(local_98,local_b0,(iVar4 == 8 && iVar8 == 0x10) | uVar18,0);
LAB_14110b2ea:
  if (local_c0 != 0) {
    png_free(local_98,local_b8);
  }
  png_destroy_read_struct(&local_98,&local_b0,0);
  if (iVar6 == 0) {
    *(byte *)(local_a8 + 0x40) = local_89;
    *(int *)(local_a8 + 0x44) = local_9c;
  }
  return;
}



// FUNCTION 14110b352 Unwind@14110b352 body=133 status=ok
// SIG undefined Unwind@14110b352(void)

void Unwind_14110b352(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    png_free(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x40));
  }
  png_destroy_read_struct(param_2 + 0x60,param_2 + 0x48,0);
  return;
}



// FUNCTION 14110b3d8 Catch@14110b3d8 body=102 status=ok
// SIG undefined Catch@14110b3d8(void)

undefined8 Catch_14110b3d8(void)

{
  return 0x14110b314;
}



// FUNCTION 14110b43e FUN_14110b43e body=40 status=ok
// SIG undefined FUN_14110b43e(void)

undefined8 FUN_14110b43e(undefined8 param_1,int param_2)

{
  FUN_14110b466();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14110b466 FUN_14110b466 body=582 status=ok
// SIG undefined FUN_14110b466(void)

void FUN_14110b466(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b684900;
  param_1[0x72] = &PTR_FUN_14b684f70;
  param_1[0x73] = &PTR_FUN_14b684f90;
  param_1[0x74] = &PTR_FUN_14b684fc0;
  param_1[0x75] = &PTR_FUN_14b684fd0;
  param_1[0x76] = &PTR_FUN_14b685040;
  param_1[0x77] = &PTR_FUN_14b685070;
  param_1[0x78] = &PTR_FUN_14b6850a0;
  param_1[0x7f] = &PTR_FUN_14b685150;
  param_1[0x80] = &PTR_FUN_14b6851c0;
  param_1[0x81] = &PTR_FUN_14b685230;
  param_1[0x82] = &PTR_FUN_14b685260;
  param_1[0x83] = &PTR_FUN_14b6852a0;
  param_1[0x84] = &PTR_FUN_14b685340;
  param_1[0x85] = &PTR_FUN_14b685360;
  param_1[0x89] = &PTR_FUN_14b685380;
  param_1[0x8a] = &PTR_FUN_14b685440;
  param_1[0x8b] = &PTR_FUN_14b6854c0;
  param_1[0x8c] = &PTR_FUN_14b685510;
  param_1[0x8d] = &PTR_FUN_14b685550;
  param_1[0x8e] = &PTR_FUN_14b685570;
  param_1[0x8f] = &PTR_FUN_14b685590;
  param_1[0x90] = &PTR_FUN_14b6855b0;
  param_1[0x91] = &PTR_FUN_14b6855d0;
  param_1[0x92] = &PTR_FUN_14b6855f0;
  param_1[0x93] = &PTR_FUN_14b685610;
  param_1[0x94] = &PTR_FUN_14b685630;
  param_1[0x95] = &PTR_FUN_14b685650;
  param_1[0x96] = &PTR_FUN_14b685670;
  param_1[0x34b] = &PTR_FUN_14b685690;
  param_1[0x352] = &PTR_FUN_14b6856a0;
  param_1[0x353] = &PTR_FUN_14b6856e0;
  param_1[0x354] = &PTR_FUN_14b685720;
  param_1[0x355] = &PTR_FUN_14b685770;
  param_1[0x356] = &PTR_FUN_14b6857a0;
  param_1[0x359] = &PTR_FUN_14b6857e0;
  param_1[0x35a] = &PTR_FUN_14b6857f0;
  param_1[0x35b] = &PTR_FUN_14b685820;
  param_1[0x35c] = &PTR_FUN_14b6858c0;
  if (param_1[0x4c0] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 14110b6ac FUN_14110b6ac body=40 status=ok
// SIG undefined FUN_14110b6ac(void)

undefined8 FUN_14110b6ac(undefined8 param_1,int param_2)

{
  FUN_14110b6d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14110b6d4 FUN_14110b6d4 body=144 status=ok
// SIG undefined FUN_14110b6d4(void)

void FUN_14110b6d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4fe9e0;
  param_1[5] = &PTR_FUN_14a4fed00;
  plVar3 = (longlong *)param_1[0x60];
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
  param_1[0x38] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x4c];
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
  FUN_140f861ce(param_1);
  return;
}



// FUNCTION 14110b764 FUN_14110b764 body=139 status=ok
// SIG undefined FUN_14110b764(void)

void FUN_14110b764(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_148952ed2(param_2,0);
  }
  local_28 = FUN_14081cebe();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_14110b7f0(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110b7f0 FUN_14110b7f0 body=719 status=ok
// SIG undefined FUN_14110b7f0(void)

void FUN_14110b7f0(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_14110b979:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_14110b85b:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1489b1848(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1489b15e0(param_1,&local_40,param_4);
      }
      goto LAB_14110b899;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_14110b979;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14110b85b;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14110bac0(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1489b197e(param_1,&local_50,param_4);
  }
LAB_14110b899:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14110bac0 FUN_14110bac0 body=948 status=ok
// SIG undefined FUN_14110bac0(void)

void FUN_14110bac0(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  uint *local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar10 = (uint *)(param_1 + 0x250);
  uVar2 = *(uint *)(param_1 + 0x268);
  if (uVar2 == 0) {
    uVar8 = 1;
    uVar12 = 0;
    uVar3 = 0;
    iVar7 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar4 = puVar10;
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar7 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar7 = uVar2 - 1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar7 = 0;
      do {
        if (uVar8 == uVar12) goto LAB_14110bd15;
        iVar7 = iVar7 + 0x20;
        uVar3 = puVar4[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar12 = 0;
      iVar7 = 0;
    }
    uVar8 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar3 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != uVar2) {
    uVar14 = 0xffffffff;
    local_70 = puVar10;
    local_60 = (ulonglong)uVar2;
    local_58 = param_1;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar3 * 0x10);
      if (lVar9 != 0) {
        lVar13 = *param_2;
        if ((lVar13 != 0 & DAT_14c950c29) == 1) {
          local_68 = param_3;
          FUN_1456cec3c(lVar13);
          puVar10 = local_70;
          param_3 = local_68;
LAB_14110bbc7:
          if (DAT_14cad00c8 == 0) {
            local_90 = &local_50;
            local_50 = FUN_144a7958c;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_14081d0ea;
            local_98 = &LAB_1479b7a0c;
            local_a0 = &LAB_1463b464e;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10000005;
            local_c0 = 8;
            local_c8 = 0x110;
            local_68 = param_3;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar10 = local_70;
            param_3 = local_68;
            if (DAT_14cad00c8 == 0) goto LAB_14110be00;
          }
          if (*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14110be00;
          if (*(longlong *)
               (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar13 = 0;
          }
        }
        else {
          if (lVar13 != 0) goto LAB_14110bbc7;
LAB_14110be00:
          lVar13 = 0;
        }
        if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
          iVar11 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar11 + 1U) {
            FUN_140b24874(param_3,iVar11);
            param_1 = local_58;
            puVar10 = local_70;
          }
          *(longlong *)(*param_3 + (longlong)iVar11 * 8) = lVar9;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar8;
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = puVar10;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar11 = (int)uVar12;
      lVar9 = (longlong)iVar11;
      uVar3 = puVar4[lVar9] & uVar14;
      if (uVar3 == 0) {
        iVar5 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar5 = uVar2 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar11) {
          iVar6 = iVar11;
        }
        puVar10 = local_70;
        if (iVar11 < iVar5) {
          lVar13 = 0;
          do {
            uVar3 = puVar4[lVar9 + lVar13 + 1];
            if (uVar3 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_14110bc9c;
            }
            iVar7 = iVar7 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar6 - lVar9 != lVar13);
          uVar14 = 0xffffffff;
          iVar11 = iVar6;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        param_1 = local_58;
        uVar3 = uVar2;
      }
      else {
LAB_14110bc9c:
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar8 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar3 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
    } while (uVar3 != (uint)local_60);
  }
LAB_14110bd15:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14110be76 FUN_14110be76 body=86 status=ok
// SIG undefined FUN_14110be76(void)

undefined8 * FUN_14110be76(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b78a7f0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14110becc(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14110becc FUN_14110becc body=55 status=ok
// SIG undefined FUN_14110becc(void)

void FUN_14110becc(longlong *param_1)

{
  FUN_14110bf04(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14110bf04 FUN_14110bf04 body=123 status=ok
// SIG undefined FUN_14110bf04(void)

void FUN_14110bf04(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14110bf80 FUN_14110bf80 body=272 status=ok
// SIG undefined FUN_14110bf80(void)

int FUN_14110bf80(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  
  iVar6 = *(int *)(param_1 + 0xa8);
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar12 = param_1;
    }
    iVar13 = 0;
    bVar11 = *(longlong *)(lVar12 + 0x20) == *(longlong *)*param_2;
    iVar2 = 0;
    do {
      lVar9 = (longlong)iVar2;
      iVar5 = iVar2 + 1;
      if (iVar2 + 1 < iVar6) {
        iVar5 = iVar6;
      }
      plVar8 = (longlong *)(lVar12 + 0x48 + lVar9 * 0x28);
      iVar4 = iVar2;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar3 = iVar5;
        if (lVar7 <= lVar10) break;
        lVar1 = *plVar8;
        iVar4 = iVar4 + 1;
        plVar8 = plVar8 + 5;
        iVar3 = iVar4;
      } while (bVar11 == (lVar1 == *(longlong *)*param_2));
      iVar5 = iVar3 - iVar2;
      if (bVar11 == false) {
        if (iVar13 != iVar2) {
          memmove((void *)(lVar12 + (longlong)iVar13 * 0x28),(void *)(lVar12 + lVar9 * 0x28),
                  (longlong)iVar5 * 0x28);
        }
        iVar13 = iVar13 + iVar5;
      }
      else {
        FUN_140810683(lVar12 + lVar9 * 0x28,iVar5);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar2 = iVar3;
    } while (lVar10 < lVar7);
    *(int *)(param_1 + 0xa8) = iVar13;
    iVar6 = iVar6 - iVar13;
  }
  return iVar6;
}



// FUNCTION 14110c090 FUN_14110c090 body=73 status=ok
// SIG undefined FUN_14110c090(void)

void FUN_14110c090(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14110c0da FUN_14110c0da body=59 status=ok
// SIG undefined FUN_14110c0da(void)

void FUN_14110c0da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 14110c124 FUN_14110c124 body=206 status=ok
// SIG undefined FUN_14110c124(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14110c124(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1a4bf0;
  plVar3 = (longlong *)param_1[8];
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
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    if (plVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar3 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14110c1f2 FUN_14110c1f2 body=171 status=ok
// SIG undefined FUN_14110c1f2(void)

longlong FUN_14110c1f2(longlong param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  piVar1 = (int *)0x0;
  if (param_3[3] == DAT_14c758c50 &&
      (param_3[2] == DAT_14c758c4c && (param_3[1] == DAT_14c758c48 && *param_3 == DAT_14c758c44))) {
    piVar1 = param_3 + 6;
  }
  FUN_14110c29e(local_68,*(undefined8 *)piVar1);
  *(byte *)(param_1 + 0x40) = local_28;
  (*(code *)(&PTR_thunk_FUN_141151bf0_149e1d9a0)[local_28])(param_1,local_68);
  (*(code *)(&PTR_LAB_149e1d9c0)[local_28])(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110c29e FUN_14110c29e body=1136 status=ok
// SIG undefined FUN_14110c29e(void)

undefined8 * FUN_14110c29e(undefined8 *param_1,double param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  double local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40 [3];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_2 <= 0.0) || (2147483647.0 <= param_2)) {
    local_60 = L"OutOfBoundsFPS";
    local_58._0_4_ = 0xe;
    FUN_1446e940c(local_c4,&local_60);
    local_60 = L"FFrameRate";
    local_58 = (double)CONCAT44(local_58._4_4_,10);
    FUN_1446e940c(local_c8,&local_60);
    FUN_140208bae(local_c0,local_c8,local_c4,L"Invalid FPS specified: {0} (out of bounds)");
    FUN_14023409e(&local_b0,local_c0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,3);
    local_50 = (longlong *)0x0;
    local_48 = 0;
    local_78 = local_40;
    local_80 = &local_60;
    local_58 = param_2;
    FUN_14010d304(&local_70);
    local_90 = local_b0;
    local_88 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
LAB_14110c48c:
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_a8 + 0x10))(local_a8);
        }
      }
    }
    *param_1 = local_a0;
    if (local_a0 == (longlong *)0x0) {
      *(undefined4 *)(param_1 + 1) = local_98;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      (**(code **)(*local_a0 + 8))();
      *(undefined4 *)(param_1 + 1) = local_98;
      *(undefined1 *)(param_1 + 8) = 1;
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
  }
  else {
    auVar5._0_8_ = param_2 + 0.5;
    auVar5._8_8_ = 0;
    auVar5 = roundpd(auVar5,auVar5,1);
    dVar4 = auVar5._0_8_;
    if ((dVar4 != param_2) || (NAN(dVar4) || NAN(param_2))) {
      if (ABS(param_2 + -23.976) <= 0.0001) {
        *param_1 = 0xb75e4b9e4edaa92f;
        param_1[1] = 0x8d981fcbb7e0abc2;
        param_1[2] = &PTR_FUN_149e301f0;
        uVar3 = 0x3e900005dc0;
      }
      else if (ABS(param_2 + -29.97) <= 0.0001) {
        *param_1 = 0xb75e4b9e4edaa92f;
        param_1[1] = 0x8d981fcbb7e0abc2;
        param_1[2] = &PTR_FUN_149e301f0;
        uVar3 = 0x3e900007530;
      }
      else {
        if (0.0001 < ABS(param_2 + -59.94)) {
          local_60 = L"FractionalFrameRate_Format";
          local_58._0_4_ = 0x1a;
          FUN_1446e940c(local_c4,&local_60);
          local_60 = L"FFrameRate";
          local_58 = (double)CONCAT44(local_58._4_4_,10);
          FUN_1446e940c(local_c8,&local_60);
          FUN_140208bae(local_c0,local_c8,local_c4,
                        L"Fractional FPS specified: {0}.\nPlease use x/y notation to define such framerates."
                       );
          FUN_14023409e(&local_d8,local_c0,1);
          local_60 = (wchar_t *)CONCAT44(local_60._4_4_,3);
          local_50 = (longlong *)0x0;
          local_48 = 0;
          local_78 = local_40;
          local_80 = &local_60;
          local_58 = param_2;
          FUN_14010d304(&local_70);
          local_90 = local_d8;
          local_88 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_a0,&local_90,&local_70);
          FUN_14007f2db(local_70,local_68);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          local_a8 = local_d0;
          if (local_50 != (longlong *)0x0) {
            (**(code **)(*local_50 + 0x10))();
            local_a8 = local_d0;
          }
          goto LAB_14110c48c;
        }
        *param_1 = 0xb75e4b9e4edaa92f;
        param_1[1] = 0x8d981fcbb7e0abc2;
        param_1[2] = &PTR_FUN_149e301f0;
        uVar3 = 0x3e90000ea60;
      }
    }
    else {
      uVar3 = (ulonglong)(uint)(int)dVar4 | 0x100000000;
      *param_1 = 0xb75e4b9e4edaa92f;
      param_1[1] = 0x8d981fcbb7e0abc2;
      param_1[2] = &PTR_FUN_149e301f0;
    }
    param_1[3] = uVar3;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if ((local_40[0] ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14110c710 FUN_14110c710 body=304 status=ok
// SIG undefined FUN_14110c710(void)

void FUN_14110c710(longlong *param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cb10130 == 0) {
      local_40 = &local_20;
      local_20 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_14110c769;
  }
  param_2 = 0;
LAB_14110c769:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014110c79a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2d8))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98,*(undefined1 *)(param_2 + 0x152));
}



// FUNCTION 14110c842 FUN_14110c842 body=9 status=ok
// SIG undefined FUN_14110c842(void)

bool FUN_14110c842(undefined8 param_1,int param_2)

{
  return param_2 - 1U < 3;
}



// FUNCTION 14110c91a FUN_14110c91a body=221 status=ok
// SIG undefined FUN_14110c91a(void)

longlong FUN_14110c91a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac8098 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478a582b;
    local_40 = &LAB_145a24d39;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3f8;
    FUN_14081cfa3(L"/Script/Engine",L"SoundAttenuation",&DAT_14cac8098,&DAT_1478a582a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8098;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110c9fe FUN_14110c9fe body=221 status=ok
// SIG undefined FUN_14110c9fe(void)

longlong FUN_14110c9fe(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb432e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481e24db;
    local_40 = &LAB_1460d4c7b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x210;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSimCache",&DAT_14cb432e8,FUN_146479b36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb432e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110cae2 FUN_14110cae2 body=221 status=ok
// SIG undefined FUN_14110cae2(void)

longlong FUN_14110cae2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf6f10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149062e37;
    local_40 = &LAB_145c678c0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/GeometryCache",L"GeometryCache",&DAT_14cbf6f10,&DAT_149062e36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf6f10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110cbcc FUN_14110cbcc body=307 status=ok
// SIG undefined FUN_14110cbcc(void)

undefined8 * FUN_14110cbcc(undefined8 *param_1)

{
  char cVar1;
  
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14b2140a0;
  param_1[0x1f] = &PTR_LAB_14b214410;
  param_1[0x20] = &PTR_LAB_14b214440;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 2;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2b] = 2;
  param_1[0x22] = &PTR_FUN_14b214520;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfc | 2;
  if (((*(uint *)(param_1 + 1) >> 9 & 1) != 0) ||
     (cVar1 = FUN_145c40fca(param_1,0xffffffff00000001), cVar1 != '\0')) {
    param_1[0x13] = 2;
    param_1[0x14] = 2;
  }
  return param_1;
}



// FUNCTION 14110cd00 FUN_14110cd00 body=325 status=ok
// SIG undefined FUN_14110cd00(void)

void FUN_14110cd00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x10,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x398,0,0);
  lVar1 = FUN_14110ce46();
  local_34 = 0;
  if (lVar1 == 0) {
    local_38 = 0;
    iVar2 = 0;
  }
  else {
    local_38 = *(uint *)(lVar1 + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar1 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar1 = 0;
    }
    iVar2 = *(int *)(lVar1 + 0x10);
    if (*(int *)(lVar1 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 0x10);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar2 = iVar3;
      }
    }
  }
  local_48 = 0;
  local_34 = iVar2;
  FUN_140de7278(param_2,&local_38,param_1 + 0x50,0);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14110ce46 FUN_14110ce46 body=57 status=ok
// SIG undefined FUN_14110ce46(void)

void FUN_14110ce46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba30f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba30f8 =
         FUN_140002ddd(FUN_1465b8148,uVar1,L"GbxSkillComponent_Turret_FiringSolutionData");
  }
  return;
}



// FUNCTION 14110ce80 FUN_14110ce80 body=77 status=ok
// SIG undefined FUN_14110ce80(void)

void FUN_14110ce80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14110cecd(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14110cecd FUN_14110cecd body=48 status=ok
// SIG undefined FUN_14110cecd(void)

void FUN_14110cecd(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14110cefd FUN_14110cefd body=71 status=ok
// SIG undefined FUN_14110cefd(void)

void FUN_14110cefd(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b8c2a60;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x10))();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 14110cf4a FUN_14110cf4a body=228 status=ok
// SIG undefined FUN_14110cf4a(void)

longlong FUN_14110cf4a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac51c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478853db;
    local_40 = &LAB_146388aea;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModule",&DAT_14cac51c8,&DAT_1478853da);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac51c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110d034 FUN_14110d034 body=228 status=ok
// SIG undefined FUN_14110d034(void)

longlong FUN_14110d034(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1d5e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147e6fa4d;
    local_40 = &LAB_146423897;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000007;
    local_60 = 8;
    local_68 = 0x5e8;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"NavigationData",&DAT_14cb1d5e0,&DAT_147e6fa4c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d5e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110d11e FUN_14110d11e body=228 status=ok
// SIG undefined FUN_14110d11e(void)

longlong FUN_14110d11e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb44c50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587df46;
    local_38 = &LAB_14821d190;
    local_40 = &LAB_14647f441;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x430;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonActivatableWidget",&DAT_14cb44c50,FUN_14647f41a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44c50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110d204 FUN_14110d204 body=41 status=ok
// SIG undefined FUN_14110d204(void)

void FUN_14110d204(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30);
  FUN_14110d22e(param_1 + 0x30,uVar1);
  return;
}



// FUNCTION 14110d22e FUN_14110d22e body=139 status=ok
// SIG undefined FUN_14110d22e(void)

void FUN_14110d22e(undefined8 param_1,undefined4 param_2)

{
  if ((char)param_2 != '\x03') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0bab8) {
      FUN_144b3d300(&DAT_14cb0bab8);
      if (DAT_14cb0bab8 == -1) {
        FUN_146408b70(&DAT_14cb0ba00);
        atexit((_func_5014 *)&LAB_14373e0ae);
        _Init_thread_footer(&DAT_14cb0bab8);
      }
    }
    FUN_144a5e012(&DAT_14cb0ba00,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14110d2ba FUN_14110d2ba body=370 status=ok
// SIG undefined FUN_14110d2ba(void)

undefined8 * FUN_14110d2ba(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14110d43a FUN_14110d43a body=640 status=ok
// SIG undefined FUN_14110d43a(void)

undefined8 FUN_14110d43a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar7 = 0;
  }
  else {
    lVar6 = FUN_1404101e2(param_2 + 0x48);
    if (lVar6 != 0) {
      FUN_147a91426(lVar6 + 0x20f,param_2);
    }
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (DAT_14c950c29 == '\x01') {
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar6 = *(longlong *)(param_1 + 0x40);
      }
    }
    *(longlong *)(param_2 + 0x40) = lVar6;
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    uVar5 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar3;
    *(undefined4 *)(param_2 + 0x58) = uVar4;
    *(undefined4 *)(param_2 + 0x5c) = uVar5;
    if (param_2 != param_1) {
      iVar1 = *(int *)(param_1 + 0x68);
      pvVar2 = *(void **)(param_1 + 0x60);
      *(int *)(param_2 + 0x68) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0x6c) == 0) {
        *(undefined4 *)(param_2 + 0x6c) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_2 + 0x60),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x60),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x70);
    if (DAT_14c950c29 == '\x01') {
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar6 = *(longlong *)(param_1 + 0x70);
      }
    }
    *(longlong *)(param_2 + 0x70) = lVar6;
    FUN_14054c6c4(param_2 + 0x78,param_1 + 0x78);
    *(undefined1 *)(param_2 + 0x88) = *(undefined1 *)(param_1 + 0x88);
    *(undefined1 *)(param_2 + 0x89) = *(undefined1 *)(param_1 + 0x89);
    FUN_1406fa324(param_2 + 0xd8,param_1 + 0xd8);
    *(undefined1 *)(param_2 + 0x8a) = *(undefined1 *)(param_1 + 0x8a);
    *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_1 + 0x98);
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 0x90);
    if (param_2 == param_1) {
      *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
    }
    else {
      iVar1 = *(int *)(param_1 + 0xa8);
      pvVar2 = *(void **)(param_1 + 0xa0);
      *(int *)(param_2 + 0xa8) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0xac) == 0) {
        *(undefined4 *)(param_2 + 0xac) = 0;
      }
      else {
        FUN_1447a127e((undefined8 *)(param_2 + 0xa0),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0xa0),pvVar2,(longlong)iVar1);
        }
      }
      *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
      iVar1 = *(int *)(param_1 + 200);
      pvVar2 = *(void **)(param_1 + 0xc0);
      *(int *)(param_2 + 200) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0xcc) == 0) {
        *(undefined4 *)(param_2 + 0xcc) = 0;
      }
      else {
        FUN_1447a127e((undefined8 *)(param_2 + 0xc0),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0xc0),pvVar2,(longlong)iVar1);
        }
      }
    }
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
    FUN_14110d6ba(param_2);
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 14110d6ba FUN_14110d6ba body=108 status=ok
// SIG undefined FUN_14110d6ba(void)

void FUN_14110d6ba(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1404101e2(param_1 + 0x48);
  if (lVar1 != 0) {
    FUN_1480a62b6(&local_28);
    FUN_1480a622c(lVar1 + 0x20f,param_1,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110d728 FUN_14110d728 body=327 status=ok
// SIG undefined FUN_14110d728(void)

void FUN_14110d728(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_178 [32];
  ushort *local_158;
  code **local_150;
  longlong local_148;
  undefined1 local_134 [4];
  undefined2 *local_130;
  undefined2 *local_128;
  ushort local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined2 local_110;
  undefined1 local_10b;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [12];
  undefined1 local_f4;
  byte bStack_f3;
  uint local_f0;
  longlong local_98;
  code *local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = FUN_14009d2a0();
  local_118 = *(undefined2 *)(lVar1 + 0x4a);
  local_112 = *(undefined2 *)(lVar1 + 0x108);
  local_116 = *(undefined4 *)(lVar1 + 0x104);
  local_110 = *(undefined2 *)*param_3;
  local_10b = 0;
  local_108 = 0x6ff;
  local_104 = 0;
  local_11a = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_11a;
  local_128 = &local_118;
  FUN_14110d870(&local_118,local_100);
  local_f0 = *(uint *)(param_6 + 0x290);
  bVar2 = bStack_f3 & 0xfe | (local_f0 & 0xfffffeff) == 1;
  _local_f4 = CONCAT11(bVar2,local_f4);
  local_158 = &local_11c;
  local_11c = CONCAT11(bVar2,local_f4) & 0xfdff;
  local_150 = &local_38;
  local_38 = FUN_140f080ea;
  local_30 = 3;
  local_148 = param_2;
  FUN_14110dab6(local_100,local_134,param_6 + 0x28,param_5);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110d870 FUN_14110d870 body=581 status=ok
// SIG undefined FUN_14110d870(void)

ushort * FUN_14110d870(undefined8 *param_1,ushort *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  
  uVar4 = param_1[1];
  *(undefined8 *)param_2 = *param_1;
  *(undefined8 *)(param_2 + 4) = uVar4;
  *(undefined8 *)(param_2 + 8) = param_1[2];
  puVar1 = param_2 + 0xc;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x100;
  param_2[0x1f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0x100;
  param_2[0x33] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x100;
  param_2[0x4f] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0x100;
  param_2[99] = 0;
  uVar2 = *param_2;
  iVar8 = uVar2 + 1;
  iVar6 = iVar8;
  if (0xff < uVar2) {
    FUN_14497ddce(puVar1,0);
    iVar6 = *(int *)(param_2 + 0x1c) + iVar8;
  }
  iVar9 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar9 = iVar6;
  }
  *(int *)(param_2 + 0x1c) = iVar6;
  if (iVar6 % 0x20 != 0) {
    bVar5 = -(char)(iVar6 % 0x20);
    *(uint *)(puVar1 + (longlong)(iVar9 >> 5) * 2) =
         (uint)(*(int *)(puVar1 + (longlong)(iVar9 >> 5) * 2) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  }
  FUN_1447c45ca(puVar1,0,iVar8,0);
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  FUN_140dad887(param_2 + 1,puVar1);
  uVar2 = param_2[4];
  iVar8 = uVar2 + 1;
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar9 = iVar8 - iVar6;
  if (iVar9 == 0 || iVar8 < iVar6) goto LAB_14110d9a5;
  if (iVar6 == 0) {
LAB_14110d965:
    if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
      param_2[0x1e] = 0x100;
      param_2[0x1f] = 0;
      FUN_14497ddce(puVar1,iVar6);
      iVar8 = *(int *)(param_2 + 0x1c) + iVar9;
    }
    iVar7 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar7 = iVar8;
    }
    *(int *)(param_2 + 0x1c) = iVar8;
    if (iVar8 % 0x20 != 0) {
      bVar5 = -(char)(iVar8 % 0x20);
      *(uint *)(puVar1 + (longlong)(iVar7 >> 5) * 2) =
           (uint)(*(int *)(puVar1 + (longlong)(iVar7 >> 5) * 2) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f)
      ;
    }
  }
  else {
    iVar7 = iVar6 + 0x1e;
    if (-1 < iVar6 + -1) {
      iVar7 = iVar6 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14110d965;
    *(int *)(param_2 + 0x1c) = iVar8;
  }
  FUN_1447c45ca(puVar1,iVar6,iVar9,0);
LAB_14110d9a5:
  *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) =
       *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) | 1 << ((byte)uVar2 & 0x1f);
  puVar10 = (ushort *)*param_3;
  puVar3 = (ushort *)param_3[1];
  do {
    if (puVar10 == puVar3) {
      return param_2;
    }
    uVar2 = *puVar10;
    iVar8 = uVar2 + 1;
    iVar6 = *(int *)(param_2 + 0x1c);
    iVar9 = iVar8 - iVar6;
    if (iVar9 != 0 && iVar6 <= iVar8) {
      if (iVar6 == 0) {
LAB_14110d9f3:
        if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
          param_2[0x1e] = 0x100;
          param_2[0x1f] = 0;
          FUN_14497ddce(puVar1,iVar6);
          iVar8 = *(int *)(param_2 + 0x1c) + iVar9;
        }
        iVar7 = iVar8 + 0x1f;
        if (-1 < iVar8) {
          iVar7 = iVar8;
        }
        *(int *)(param_2 + 0x1c) = iVar8;
        if (iVar8 % 0x20 != 0) {
          bVar5 = -(char)(iVar8 % 0x20);
          *(uint *)(puVar1 + (longlong)(iVar7 >> 5) * 2) =
               (uint)(*(int *)(puVar1 + (longlong)(iVar7 >> 5) * 2) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar7 = iVar6 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14110d9f3;
        *(int *)(param_2 + 0x1c) = iVar8;
      }
      FUN_1447c45ca(puVar1,iVar6,iVar9,0);
    }
    *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) =
         *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) | 1 << ((byte)uVar2 & 0x1f);
    puVar10 = puVar10 + 1;
  } while( true );
}



// FUNCTION 14110dab6 FUN_14110dab6 body=1528 status=ok
// SIG undefined FUN_14110dab6(void)

int * FUN_14110dab6(ushort *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  code **local_100;
  ushort *local_f8;
  longlong *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  code *local_c0;
  ushort **local_b8;
  ushort *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  int local_78;
  uint local_74;
  longlong local_70;
  longlong lStack_68;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == 0xffff) || (param_1[4] == 0xffff)) ||
     (cVar9 = FUN_14110e0b0(param_1,param_3), cVar9 == '\0')) {
    *param_2 = -1;
    goto LAB_14110df76;
  }
  local_e0 = param_4;
  plVar11 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14a4c64a0;
  plVar11[2] = (longlong)&PTR_FUN_14a4c64b8;
  param_7 = (longlong *)*param_7;
  plVar11[3] = (longlong)param_7;
  plVar11[4] = 0;
  plVar11[5] = 0;
  if (param_7 != (longlong *)0x0) {
    (**(code **)(*param_7 + 8))(param_7,&local_70);
    plVar11[4] = local_70;
    plVar11[5] = lStack_68;
  }
  plVar11[8] = *(longlong *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 2);
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar11 + 6) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar11 + 0x34) = uVar5;
  *(undefined4 *)(plVar11 + 7) = uVar6;
  *(undefined4 *)((longlong)plVar11 + 0x3c) = uVar7;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)();
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
  }
  local_4c = 0;
  iVar16 = *(int *)(param_1 + 0x4c);
  local_50 = 0;
  uVar10 = iVar16 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar10) {
    local_4c = 0x100;
    if (0x100 < uVar10) {
      local_4c = uVar10;
    }
    FUN_14497ddce(&local_70,0);
    iVar16 = *(int *)(param_1 + 0x4c);
  }
  local_50 = iVar16;
  if (iVar16 != 0) {
    memcpy(&local_70,param_1 + 0x3c,(ulonglong)(iVar16 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_74 = 0;
  iVar16 = *(int *)(param_1 + 0x60);
  local_78 = 0;
  uVar10 = iVar16 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar10) {
    local_74 = 0x100;
    if (0x100 < uVar10) {
      local_74 = uVar10;
    }
    FUN_14497ddce(local_98,0);
    iVar16 = *(int *)(param_1 + 0x60);
  }
  local_78 = iVar16;
  if (iVar16 != 0) {
    memcpy(local_98,param_1 + 0x50,(ulonglong)(iVar16 + 0x1fU >> 3 & 0xfffffffc));
  }
  iVar16 = local_50;
  uVar4 = *param_1;
  iVar13 = uVar4 + 1;
  iVar15 = iVar13 - local_50;
  if (iVar15 != 0 && local_50 <= iVar13) {
    if (local_50 == 0) {
LAB_14110dcbf:
      if ((int)local_4c <= (int)(uint)uVar4) {
        local_4c = 0x100;
        FUN_14497ddce(&local_70,local_50);
        iVar13 = local_50 + iVar15;
      }
      iVar14 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar14 = iVar13;
      }
      local_50 = iVar13;
      iVar13 = local_50;
      if (iVar13 % 0x20 != 0) {
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)&local_70 + (longlong)(iVar14 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar14 >> 5) * 4) << (bVar12 & 0x1f))
             >> (bVar12 & 0x1f);
        iVar13 = local_50;
      }
    }
    else {
      iVar14 = local_50 + 0x1e;
      if (-1 < local_50 + -1) {
        iVar14 = local_50 + -1;
      }
      if (iVar14 >> 5 != (uint)(uVar4 >> 5)) goto LAB_14110dcbf;
    }
    local_50 = iVar13;
    FUN_1447c45ca(&local_70,iVar16,iVar15,0);
  }
  puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
  lVar17 = 1;
  do {
    iVar16 = local_50;
    uVar4 = param_1[lVar17];
    if (uVar4 != 0xffff) {
      iVar13 = uVar4 + 1;
      iVar15 = iVar13 - local_50;
      if (iVar15 != 0 && local_50 <= iVar13) {
        if (local_50 == 0) {
LAB_14110dd78:
          if ((int)local_4c <= (int)(uint)uVar4) {
            local_4c = 0x100;
            FUN_14497ddce(&local_70,local_50);
            iVar13 = local_50 + iVar15;
          }
          iVar14 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar14 = iVar13;
          }
          local_50 = iVar13;
          iVar13 = local_50;
          if (iVar13 % 0x20 != 0) {
            bVar12 = -(char)(iVar13 % 0x20);
            *(uint *)((longlong)&local_70 + (longlong)(iVar14 >> 5) * 4) =
                 (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar14 >> 5) * 4) <<
                       (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
            iVar13 = local_50;
          }
        }
        else {
          iVar14 = local_50 + 0x1e;
          if (-1 < local_50 + -1) {
            iVar14 = local_50 + -1;
          }
          if (iVar14 >> 5 != (uint)(uVar4 >> 5)) goto LAB_14110dd78;
        }
        local_50 = iVar13;
        FUN_1447c45ca(&local_70,iVar16,iVar15,0);
      }
      puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
    }
    iVar16 = local_50;
    lVar17 = lVar17 + 1;
  } while (lVar17 != 4);
  uVar4 = param_1[4];
  iVar13 = uVar4 + 1;
  iVar15 = iVar13 - local_50;
  if (iVar15 != 0 && local_50 <= iVar13) {
    if (local_50 == 0) {
LAB_14110de33:
      if ((int)local_4c <= (int)(uint)uVar4) {
        local_4c = 0x100;
        FUN_14497ddce(&local_70,local_50);
        iVar13 = local_50 + iVar15;
      }
      iVar14 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar14 = iVar13;
      }
      local_50 = iVar13;
      iVar13 = local_50;
      if (iVar13 % 0x20 != 0) {
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)&local_70 + (longlong)(iVar14 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar14 >> 5) * 4) << (bVar12 & 0x1f))
             >> (bVar12 & 0x1f);
        iVar13 = local_50;
      }
    }
    else {
      iVar14 = local_50 + 0x1e;
      if (-1 < local_50 + -1) {
        iVar14 = local_50 + -1;
      }
      if (iVar14 >> 5 != (uint)(uVar4 >> 5)) goto LAB_14110de33;
    }
    local_50 = iVar13;
    FUN_1447c45ca(&local_70,iVar16,iVar15,0);
  }
  puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
  local_b8 = &local_b0;
  local_c0 = FUN_1417a217a;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  uVar8 = local_e0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_e8 = local_98;
  local_f0 = &local_70;
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_d0 = plVar11 + 2;
  local_c8 = plVar11;
  FUN_1406ac01c(local_e0,param_2,param_5,&local_d0);
  iVar16 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(uVar8,&local_d4);
      *param_2 = local_d4;
      iVar16 = local_d4;
      if (local_d4 != -1) goto LAB_14110df49;
    }
  }
  else {
LAB_14110df49:
    FUN_1407ce0e2(uVar8,iVar16,0xffffffff);
    FUN_1407cdf34(uVar8,*param_2,0xffffffff);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_14110df76:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14110e0b0 FUN_14110e0b0 body=112 status=ok
// SIG undefined FUN_14110e0b0(void)

undefined8 FUN_14110e0b0(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 14110e120 FUN_14110e120 body=53 status=ok
// SIG undefined FUN_14110e120(void)

void FUN_14110e120(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14110e156(param_2);
  if (lVar1 != 0) {
    FUN_14110e454(lVar1,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14110e156 FUN_14110e156 body=746 status=ok
// SIG undefined FUN_14110e156(void)

undefined8 FUN_14110e156(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) goto LAB_14110e42e;
  if (DAT_14cac9ca8 == 0) {
    local_40 = &local_20;
    local_20 = FUN_141030f22;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1478c0a72;
    local_50 = (code *)&LAB_1417b2375;
    local_58 = L"Engine";
    local_60 = 0x1000000000;
    local_68 = 0x10000004;
    local_70 = 8;
    local_78 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
    lVar1 = FUN_140789e1e();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30 ||
        (param_1 = *(longlong *)(param_1 + 0x20), param_1 == 0)))) goto LAB_14110e42e;
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = (code *)&LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_14110e42e;
  }
  if (DAT_14cb56270 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_1427b09ee;
    local_48 = &LAB_148630fef;
    local_50 = FUN_1464b6a91;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10004001;
    local_70 = 8;
    local_78 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  lVar1 = FUN_144718840(param_1,DAT_14cb56270);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
LAB_14110e42e:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110e454 FUN_14110e454 body=890 status=ok
// SIG undefined FUN_14110e454(void)

void FUN_14110e454(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [36];
  int local_84;
  undefined1 local_80 [8];
  undefined8 local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) goto LAB_14110e59d;
  if (param_3 == 0) {
LAB_14110e631:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_140789e1e();
    if (((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) ||
       (lVar3 = *(longlong *)(param_1 + 0x250), lVar3 == 0)) goto LAB_14110e631;
    uVar4 = FUN_140437988();
    plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
    if (plVar5 == (longlong *)0x0) goto LAB_14110e631;
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if ((longlong)*(int *)(param_2 + 0x30) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x28);
    lVar10 = (longlong)*(int *)(param_2 + 0x30) * 0x60 + lVar3;
    bVar7 = false;
LAB_14110e511:
    do {
      if ((plVar5 != (longlong *)0x0) && (*(longlong *)(lVar3 + 0x58) != 0)) {
        iVar2 = (int)plVar5[1];
        bVar7 = true;
        if ((longlong)iVar2 != 0) {
          lVar9 = 0;
          do {
            if (*(longlong *)(*plVar5 + 0x68 + lVar9) == *(longlong *)(lVar3 + 0x58)) {
              uVar6 = (int)(lVar9 >> 3) * -0xf0f0f0f;
              if (((-1 < (int)uVar6) && ((int)uVar6 < iVar2)) &&
                 (*(int *)(*plVar5 + 0x80 + (ulonglong)(uVar6 & 0x7fffffff) * 0x88) < 1)) {
                lVar3 = lVar3 + 0x60;
                bVar7 = true;
                if (lVar3 != lVar10) goto LAB_14110e511;
                goto LAB_14110e691;
              }
              break;
            }
            lVar9 = lVar9 + 0x88;
          } while ((longlong)iVar2 * 0x88 != lVar9);
        }
      }
      local_78._0_4_ = 0;
      uStack_70 = 0;
      if (param_3 == 0) {
        iVar2 = 0;
        uVar6 = (uint)local_78;
      }
      else {
        uVar6 = *(uint *)(param_3 + 0xc);
        local_78 = (undefined8 *)(ulonglong)uVar6;
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar2 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar11) {
            local_84 = iVar8;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
            iVar8 = local_84;
          }
          LOCK();
          iVar2 = *(int *)(lVar9 + 0x10);
          bVar11 = iVar2 == 0;
          if (bVar11) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar2 = 0;
          }
          UNLOCK();
          uVar6 = (uint)local_78;
          if (bVar11) {
            iVar2 = iVar8;
          }
        }
      }
      local_78._0_4_ = uVar6;
      local_78 = (undefined8 *)CONCAT44(iVar2,(uint)local_78);
      uStack_70 = *(ulonglong *)(lVar3 + 0x50);
      FUN_14110e7d0(param_1,lVar3,&local_78);
      lVar3 = lVar3 + 0x60;
    } while (lVar3 != lVar10);
    if (bVar7) {
LAB_14110e691:
      iVar2 = *(int *)(param_1 + 0x520);
      *(uint *)(param_1 + 0x520) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x524) < iVar2 + 1U) {
        FUN_1458080ee(param_1 + 0x518,iVar2);
      }
      FUN_145807fba((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x518),param_3,param_2);
      if ((*(byte *)(param_1 + 0x471) & 2) == 0) {
        *(byte *)(param_1 + 0x471) = *(byte *)(param_1 + 0x471) | 2;
        uVar4 = *(undefined8 *)(param_1 + 0x250);
        local_78 = (undefined8 *)0x0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        FUN_1446efa72(&local_78,0,3,0x10);
        puVar1 = local_78;
        uStack_70 = CONCAT44(uStack_70._4_4_,3);
        *local_78 = &PTR_LAB_14b3f7600;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_78[2] = lVar10;
        *local_78 = &PTR_FUN_14b3f7220;
        local_78[3] = 0;
        FUN_14485c47a(local_78 + 3,uVar4);
        puVar1[4] = param_1;
        FUN_140740a5e(plVar5 + 0xb,local_80,&local_78);
        FUN_1449db362(&local_78);
      }
    }
  }
LAB_14110e59d:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14110e7d0 FUN_14110e7d0 body=553 status=ok
// SIG undefined FUN_14110e7d0(void)

void FUN_14110e7d0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar7 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  *puVar7 = &PTR_FUN_14b105bb0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = *param_2;
  puVar7[4] = 0;
  iVar2 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(puVar7 + 5) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
  }
  else {
    FUN_1447c510a(puVar7 + 4,iVar2,0);
    memcpy((void *)puVar7[4],_Src,(longlong)iVar2 << 2);
  }
  *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(param_2 + 3);
  puVar7[7] = param_2[4];
  *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(param_2 + 5);
  puVar7[9] = 0;
  uVar6 = param_2[8];
  puVar7[10] = param_2[7];
  puVar7[0xb] = uVar6;
  *(undefined8 *)((longlong)puVar7 + 0x5d) = *(undefined8 *)((longlong)param_2 + 0x45);
  puVar7[0xd] = 0xffffffff00000000;
  puVar7[0xe] = 0xbf800000;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = 0xffffffff;
  *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)puVar7 + 0x84) = 0;
  local_50 = puVar7;
  puVar8 = (undefined8 *)FUN_14001cc68();
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_FUN_14b3f7200;
  puVar8[2] = puVar7;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(puVar7 + 1) = *param_3;
  *(undefined4 *)((longlong)puVar7 + 0xc) = uVar3;
  *(undefined4 *)(puVar7 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0x14) = uVar5;
  local_48 = puVar8;
  if (((*(byte *)(param_2 + 8) & 1) == 0) || (param_2[7] == 0)) {
    if (*(longlong *)(param_1 + 600) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x260);
    }
    lVar9 = (**(code **)(*plVar10 + 0x10))();
    if (lVar9 != 0) {
      *(uint *)((longlong)puVar7 + 0x84) =
           -(uint)((*(byte *)((longlong)param_2 + 1) & 8) != 0) |
           (uint)*(byte *)((longlong)param_2 + 2);
    }
    iVar2 = *(int *)(param_1 + 0x2f8);
    *(uint *)(param_1 + 0x2f8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x2fc) < iVar2 + 1U) {
      FUN_14110ea14((longlong *)(param_1 + 0x2f0),iVar2);
    }
    lVar9 = *(longlong *)(param_1 + 0x2f0);
    *(undefined8 **)(lVar9 + (longlong)iVar2 * 0x10) = puVar7;
    *(undefined8 **)(lVar9 + 8 + (longlong)iVar2 * 0x10) = puVar8;
    if (puVar8 == (undefined8 *)0x0) goto LAB_14110e96c;
    LOCK();
    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    UNLOCK();
    puVar8 = local_48;
  }
  else {
    FUN_14580800c(param_1 + 0x270,&local_50);
  }
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8);
      LOCK();
      piVar1 = (int *)((longlong)puVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
LAB_14110e96c:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110ea14 FUN_14110ea14 body=269 status=ok
// SIG undefined FUN_14110ea14(void)

void FUN_14110ea14(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14110eb22 FUN_14110eb22 body=96 status=ok
// SIG undefined FUN_14110eb22(void)

ulonglong FUN_14110eb22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14110eb65:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14110eb65;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14110eb88 FUN_14110eb88 body=477 status=ok
// SIG undefined FUN_14110eb88(void)

void FUN_14110eb88(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  void *_Dst;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar4 != 0) {
      lVar10 = 0;
      uVar7 = 0;
      do {
        puVar3 = *(uint **)(*(longlong *)(param_1 + 0x68) + lVar10);
        uVar1 = puVar3[1];
        if ((uVar1 == 0) || (uVar2 = *puVar3, (int)uVar2 < 0)) {
LAB_14110ed28:
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar9 == (longlong *)0x0) || (*(uint *)(plVar9 + 2) != uVar1)) ||
               ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_14110ed28;
            lVar8 = *plVar9;
          }
        }
        if (lVar8 == param_2) {
          if ((int)uVar7 < 0) {
            return;
          }
          if (iVar4 <= (int)uVar7) {
            return;
          }
          FUN_1400da9ba(param_1 + 0x30,param_2);
          FUN_140457ffc(param_2 + 0x2b8,param_1);
          FUN_140457ffc(param_2 + 0x2d0,param_1);
          lVar6 = (ulonglong)(uVar7 & 0x7fffffff) * 0x10;
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar6);
          lVar8 = *(longlong *)(lVar10 + 8);
          iVar4 = *(int *)(lVar10 + 0x10);
          if ((longlong)iVar4 == 0) {
            uVar5 = 0;
          }
          else {
            lVar10 = 0;
            do {
              FUN_14110ed66(*(undefined8 *)(lVar8 + lVar10),param_2);
              FUN_140ec3de0(*(undefined8 *)(lVar8 + lVar10));
              lVar10 = lVar10 + 0x10;
            } while ((longlong)iVar4 * 0x10 != lVar10);
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar6);
            uVar5 = *(undefined4 *)(lVar10 + 0x10);
            lVar8 = *(longlong *)(lVar10 + 8);
          }
          iVar4 = *(int *)(lVar10 + 0x14);
          FUN_140ec3a0d(lVar8,uVar5);
          *(undefined4 *)(lVar10 + 0x10) = 0;
          if ((iVar4 < 0) && (*(int *)(lVar10 + 0x14) != 0)) {
            FUN_140ec3e5c(lVar10 + 8,0);
          }
          _Dst = (void *)(lVar6 + *(longlong *)(param_1 + 0x68));
          FUN_140d5d7d7(_Dst,1);
          iVar4 = *(int *)(param_1 + 0x70);
          if (iVar4 - 1U != uVar7) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar7 + iVar4) << 4);
            iVar4 = *(int *)(param_1 + 0x70);
          }
          *(int *)(param_1 + 0x70) = iVar4 + -1;
          return;
        }
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)iVar4 << 4 != lVar10);
    }
  }
  return;
}



// FUNCTION 14110ed66 FUN_14110ed66 body=308 status=ok
// SIG undefined FUN_14110ed66(void)

void FUN_14110ed66(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_1[8] != 0) {
    lVar3 = param_1[7];
    lVar5 = (longlong)(int)param_1[8] << 3;
    do {
      cVar1 = FUN_14069eaf4(lVar3,param_2);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 8))(param_1,param_2);
        local_3c = 0;
        if (param_2 == 0) {
          local_40 = 0;
          iVar2 = 0;
        }
        else {
          local_40 = *(uint *)(param_2 + 0xc);
          if ((int)local_40 < DAT_14c9647dc) {
            lVar3 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
          }
          else {
            lVar3 = 0;
          }
          iVar2 = *(int *)(lVar3 + 0x10);
          if (*(int *)(lVar3 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            iVar4 = DAT_14c964868 + 1;
            bVar6 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar6) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar4);
            }
            LOCK();
            iVar2 = *(int *)(lVar3 + 0x10);
            bVar6 = iVar2 == 0;
            if (bVar6) {
              *(int *)(lVar3 + 0x10) = iVar4;
              iVar2 = 0;
            }
            UNLOCK();
            if (bVar6) {
              iVar2 = iVar4;
            }
          }
        }
        local_38 = &local_40;
        local_3c = iVar2;
        FUN_140bf0ae6(param_1 + 7);
        break;
      }
      lVar3 = lVar3 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14110ee9b FUN_14110ee9b body=42 status=ok
// SIG undefined FUN_14110ee9b(void)

void FUN_14110ee9b(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    do {
      FUN_14110eec6(param_1);
      param_1 = param_1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14110eec6 FUN_14110eec6 body=61 status=ok
// SIG undefined FUN_14110eec6(void)

void FUN_14110eec6(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 4) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14110ef04 FUN_14110ef04 body=1959 status=ok
// SIG undefined FUN_14110ef04(void)

void FUN_14110ef04(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  char local_e0 [16];
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0);
  puVar7 = &local_b0;
  FUN_1448729ea(param_1 + 0x30,puVar7,local_e0);
  uVar9 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar9 = local_88;
    if (local_68 == 0) {
      uVar9 = 0x40000000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar6 = FUN_1408f543e();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,0);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,uVar9,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar7 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar7 = &local_88;
  FUN_1448729ea(param_1 + 0x88,puVar7,local_e0);
  iVar5 = FUN_14005fbd2(puVar7,1);
  uVar6 = FUN_14110f6ac();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,0);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,(float)iVar5,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_70) {
      puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar7 = &local_88;
  FUN_1448729ea(param_1 + 0xd8,puVar7,local_e0);
  iVar5 = FUN_14005fbd2(puVar7,0x1e);
  uVar6 = FUN_14110f6ac();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,1);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,(float)iVar5,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_70) {
      puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar7 = &local_b0;
  FUN_1448729ea(param_1 + 0x128,puVar7,local_e0);
  uVar9 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar9 = local_88;
    if (local_68 == 0) {
      uVar9 = 0x3f000000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar6 = FUN_14110f6ac();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,2);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,uVar9,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar7 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar7 = &local_b0;
  FUN_1448729ea(param_1 + 0x180,puVar7,local_e0);
  uVar9 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar9 = 0;
    if (local_68 != 0) {
      uVar9 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar6 = FUN_14110f6ac();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,3);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,uVar9,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar7 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14110f6ac FUN_14110f6ac body=57 status=ok
// SIG undefined FUN_14110f6ac(void)

void FUN_14110f6ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0dc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0dc8 = FUN_14171c317(FUN_1466194ae,uVar1,L"EAtt_WeaponBehaviorRepair");
  }
  return;
}



// FUNCTION 14110f6ee FUN_14110f6ee body=448 status=ok
// SIG undefined FUN_14110f6ee(void)

undefined8 * FUN_14110f6ee(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eb1504();
  *param_1 = &PTR_FUN_14b976e70;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xf00000d0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xf00000d0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xf00000d0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xf00000d0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f266666;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.GrenadeBehavior_PayloadTargetCombo";
  local_30 = 0x32;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14110f8b0 FUN_14110f8b0 body=40 status=ok
// SIG undefined FUN_14110f8b0(void)

undefined8 FUN_14110f8b0(undefined8 param_1,int param_2)

{
  FUN_14110f8d8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14110f8d8 FUN_14110f8d8 body=213 status=ok
// SIG undefined FUN_14110f8d8(void)

void FUN_14110f8d8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14b50a340;
  if (param_1[0x77] != 0) {
    LOCK();
    *(int *)(param_1[0x78] + 8) = *(int *)(param_1[0x78] + 8) + -1;
    UNLOCK();
    plVar2 = param_1 + 0x75;
    puVar4 = (undefined8 *)param_1[0x78];
    if (param_1[0x75] == 0) {
      uVar6 = 0;
      puVar7 = puVar4;
    }
    else {
      *(undefined8 *)(param_1[0x75] + 8) = 0;
      uVar6 = param_1[0x75];
      puVar7 = (undefined8 *)param_1[0x78];
    }
    LOCK();
    plVar3 = (longlong *)*puVar7;
    if (plVar2 == plVar3) {
      *puVar7 = uVar6;
    }
    UNLOCK();
    if (plVar2 != plVar3) {
      while ((longlong *)param_1[0x76] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar5 = *plVar2;
      *(longlong *)param_1[0x76] = lVar5;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 8) = param_1[0x76];
      }
    }
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    *plVar2 = 0;
    param_1[0x76] = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_144760e21(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14110f9ae FUN_14110f9ae body=40 status=ok
// SIG undefined FUN_14110f9ae(void)

undefined8 FUN_14110f9ae(undefined8 param_1,int param_2)

{
  FUN_14110f9d6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14110f9d6 FUN_14110f9d6 body=76 status=ok
// SIG undefined FUN_14110f9d6(void)

void FUN_14110f9d6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b94fa50;
  plVar3 = (longlong *)param_1[0x74];
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
  FUN_14103dce8(param_1);
  return;
}



// FUNCTION 14110fa22 FUN_14110fa22 body=266 status=ok
// SIG undefined FUN_14110fa22(void)

void FUN_14110fa22(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *param_2;
  if (*(longlong *)(param_1 + 0x20) != lVar1) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(longlong *)(param_1 + 0x20) = lVar1;
  if (*(longlong *)(param_1 + 0x28) != param_2[1]) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar4 = FUN_14477b664();
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(longlong *)(param_1 + 0x30) = param_2[2];
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  FUN_14110fb2c(lVar1,param_2);
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0) {
    uVar4 = FUN_14043db3a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x28) = lVar5;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    if (lVar5 == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x20));
    *(longlong *)(param_1 + 0x30) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  if (((*(byte *)(param_1 + -0x72) & 0x10) != 0) && (*(char *)(lVar1 + 0x188) == '\0')) {
    FUN_140d53872(lVar1);
    return;
  }
  return;
}



// FUNCTION 14110fb2c FUN_14110fb2c body=237 status=ok
// SIG undefined FUN_14110fb2c(void)

void FUN_14110fb2c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x189) == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x150);
    if (lVar4 == 0) {
      uVar3 = FUN_14043db3a();
      lVar4 = FUN_14477b664(uVar3);
      *(longlong *)(param_1 + 0x150) = lVar4;
    }
    if (*(longlong *)(param_1 + 0x158) != 0) {
LAB_14110fbf2:
      FUN_140d53d1a(param_1,param_2,0);
      return;
    }
    if ((*(longlong *)(param_1 + 0x148) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 != '\0') {
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x148));
          *(longlong *)(param_1 + 0x158) = lVar4;
          if (lVar4 != 0) goto LAB_14110fbf2;
          goto LAB_14110fb6b;
        }
      }
      *(undefined8 *)(param_1 + 0x158) = 0;
    }
  }
LAB_14110fb6b:
  FUN_140316e34(param_1,1);
  FUN_140d53d1a(param_1,param_2,0);
  FUN_140d53872(param_1);
  return;
}



// FUNCTION 14110fc1a FUN_14110fc1a body=426 status=ok
// SIG undefined FUN_14110fc1a(void)

undefined8 FUN_14110fc1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
    do {
      *(undefined4 *)(param_2 + -0xa0) = *(undefined4 *)(param_3 + -0xa0);
      lVar1 = *(longlong *)(param_3 + -0x98);
      if (*(longlong *)(param_2 + -0x98) != lVar1) {
        *(undefined8 *)(param_2 + -0x88) = 0;
      }
      *(longlong *)(param_2 + -0x98) = lVar1;
      if (*(longlong *)(param_2 + -0x90) != *(longlong *)(param_3 + -0x90)) {
        *(undefined8 *)(param_2 + -0x88) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + -0x90) = uVar2;
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      uVar2 = *(undefined8 *)(param_3 + -0x78);
      *(undefined8 *)(param_2 + -0x80) = *(undefined8 *)(param_3 + -0x80);
      *(undefined8 *)(param_2 + -0x78) = uVar2;
      if ((*(longlong *)(param_2 + -0x70) != *(longlong *)(param_3 + -0x70)) ||
         (*(int *)(param_2 + -0x68) != *(int *)(param_3 + -0x68))) {
        *(longlong *)(param_2 + -0x70) = *(longlong *)(param_3 + -0x70);
        *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
        *(undefined8 *)(param_2 + -0x60) = 0;
      }
      *(undefined4 *)(param_2 + -0x58) = *(undefined4 *)(param_3 + -0x58);
      *(undefined4 *)(param_2 + -0x50) = *(undefined4 *)(param_3 + -0x50);
      lVar1 = *(longlong *)(param_3 + -0x48);
      if (*(longlong *)(param_2 + -0x48) != lVar1) {
        *(undefined8 *)(param_2 + -0x38) = 0;
      }
      *(longlong *)(param_2 + -0x48) = lVar1;
      if (*(longlong *)(param_2 + -0x40) != *(longlong *)(param_3 + -0x40)) {
        *(undefined8 *)(param_2 + -0x38) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + -0x40) = uVar2;
      *(undefined8 *)(param_2 + -0x38) = *(undefined8 *)(param_3 + -0x38);
      uVar2 = *(undefined8 *)(param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x28) = uVar2;
      if ((*(longlong *)(param_2 + -0x20) != *(longlong *)(param_3 + -0x20)) ||
         (*(int *)(param_2 + -0x18) != *(int *)(param_3 + -0x18))) {
        *(longlong *)(param_2 + -0x20) = *(longlong *)(param_3 + -0x20);
        *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
        *(undefined8 *)(param_2 + -0x10) = 0;
      }
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_14110fdc4(param_2,param_3);
      param_3 = param_3 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14110fdc4 FUN_14110fdc4 body=79 status=ok
// SIG undefined FUN_14110fdc4(void)

undefined8 * FUN_14110fdc4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bf1756(param_1,iVar1);
      FUN_148bf17c9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14110fe14 FUN_14110fe14 body=147 status=ok
// SIG undefined FUN_14110fe14(void)

void FUN_14110fe14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((((param_6 != 0) && (*(int *)(param_6 + 0x74) != 0)) &&
      (uVar1 = *(uint *)(param_6 + 0x70), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_6 + 0x74))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = FUN_1401726e6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_14110fea8(lVar2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14110fea8 FUN_14110fea8 body=90 status=ok
// SIG undefined FUN_14110fea8(void)

void FUN_14110fea8(longlong param_1,longlong *param_2)

{
  if ((longlong *)(param_1 + 0x688) != param_2) {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = *(longlong *)(param_1 + 0x688);
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x690);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x694);
    *(undefined8 *)(param_1 + 0x690) = 0;
  }
  return;
}



// FUNCTION 14110ff02 FUN_14110ff02 body=461 status=ok
// SIG undefined FUN_14110ff02(void)

void FUN_14110ff02(longlong param_1,longlong param_2,undefined2 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined6 uStack_58;
  undefined2 local_52;
  undefined6 uStack_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_52 = 0;
  uStack_50 = 0;
  uStack_4a = 0;
  uStack_48 = 0;
  local_78 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_70 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_68 = DAT_14c8464f0;
  local_98 = (undefined4)DAT_14c8464e0;
  uStack_94 = DAT_14c8464e0._4_4_;
  uStack_90 = (undefined4)DAT_14c8464e8;
  uStack_8c = DAT_14c8464e8._4_4_;
  local_88 = DAT_14c8464f0;
  if (param_2 == 0) {
    uVar8 = 0;
    iVar5 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar6;
      }
    }
  }
  uVar3 = *param_3;
  uStack_48 = (undefined6)((ulonglong)*(undefined8 *)(param_3 + 8) >> 0x10);
  uStack_58 = (undefined6)*(undefined8 *)(param_3 + 1);
  local_52 = (undefined2)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x30);
  uStack_50 = (undefined6)*(undefined8 *)(param_3 + 5);
  uStack_4a = (undefined2)((ulonglong)*(undefined8 *)(param_3 + 5) >> 0x30);
  local_68 = *(undefined8 *)(param_3 + 0x14);
  local_78 = *(undefined8 *)(param_3 + 0xc);
  uStack_70 = *(undefined8 *)(param_3 + 0x10);
  local_88 = *(undefined8 *)(param_3 + 0x20);
  local_98 = *(undefined4 *)(param_3 + 0x18);
  uStack_94 = *(undefined4 *)(param_3 + 0x1a);
  uStack_90 = *(undefined4 *)(param_3 + 0x1c);
  uStack_8c = *(undefined4 *)(param_3 + 0x1e);
  iVar6 = *(int *)(param_1 + 0x3188);
  *(uint *)(param_1 + 0x3188) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x318c) < iVar6 + 1U) {
    FUN_1411100d0((longlong *)(param_1 + 0x3180),iVar6);
  }
  lVar7 = *(longlong *)(param_1 + 0x3180);
  lVar4 = (longlong)iVar6 * 0x50;
  *(uint *)(lVar7 + lVar4) = uVar8;
  *(int *)(lVar7 + 4 + lVar4) = iVar5;
  *(undefined2 *)(lVar7 + 8 + lVar4) = uVar3;
  *(ulonglong *)(lVar7 + 0x18 + lVar4) = CONCAT62(uStack_48,uStack_4a);
  puVar1 = (undefined8 *)(lVar7 + 10 + lVar4);
  *puVar1 = CONCAT26(local_52,uStack_58);
  puVar1[1] = CONCAT26(uStack_4a,uStack_50);
  puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar4);
  *puVar1 = local_78;
  puVar1[1] = uStack_70;
  *(undefined8 *)(lVar7 + 0x30 + lVar4) = local_68;
  puVar2 = (undefined4 *)(lVar7 + 0x38 + lVar4);
  *puVar2 = local_98;
  puVar2[1] = uStack_94;
  puVar2[2] = uStack_90;
  puVar2[3] = uStack_8c;
  *(undefined8 *)(lVar7 + 0x48 + lVar4) = local_88;
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411100d0 FUN_1411100d0 body=272 status=ok
// SIG undefined FUN_1411100d0(void)

void FUN_1411100d0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1411101e0 FUN_1411101e0 body=269 status=ok
// SIG undefined FUN_1411101e0(void)

void FUN_1411101e0(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1411102ed(param_1[0x10],(int)param_1[0x11]);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 10;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xe) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 3;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 7) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 6)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 6)) {
    FUN_1400020a8(*plVar1);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411102ed FUN_1411102ed body=40 status=ok
// SIG undefined FUN_1411102ed(void)

void FUN_1411102ed(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144a2da94(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 141110316 FUN_141110316 body=69 status=ok
// SIG undefined FUN_141110316(void)

void FUN_141110316(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x58))();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) {
    if (param_2 == 1) {
      lVar2 = 0x5800;
    }
    else {
      lVar2 = 0x57e0;
      if (param_2 != 2) {
        return;
      }
    }
    FUN_1447f69b6(lVar1 + lVar2);
    return;
  }
  return;
}



// FUNCTION 14111035c FUN_14111035c body=285 status=ok
// SIG undefined FUN_14111035c(void)

longlong FUN_14111035c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + -0xc40);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) goto LAB_1411103b2;
  }
  lVar1 = 0;
LAB_1411103b2:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111047a FUN_14111047a body=311 status=ok
// SIG undefined FUN_14111047a(void)

undefined8 FUN_14111047a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1411105aa;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1411105aa;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1411105aa:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141110553;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_141110553;
    }
  }
  uVar6 = 0;
LAB_141110553:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411105b2 FUN_1411105b2 body=673 status=ok
// SIG undefined FUN_1411105b2(void)

void FUN_1411105b2(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = FUN_1401902e2();
  if (iVar2 != param_3) {
    iVar2 = FUN_140232fad();
    if (param_2 != (longlong *)0x0 && iVar2 == param_3) {
      lVar3 = (**(code **)(*param_2 + 8))(param_2);
      if (lVar3 != 0) {
        lVar4 = FUN_140232dfe();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           (*(longlong *)(param_1 + 0x180) != 0)) {
          FUN_1410aade0(param_1);
        }
      }
    }
    goto LAB_1411105f9;
  }
  if (param_2 == (longlong *)0x0) {
LAB_14111084d:
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar3 == 0) goto LAB_14111084d;
    lVar4 = FUN_1401900c0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_14111084d;
  }
  FUN_14580832c(param_1,lVar3);
LAB_1411105f9:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
      lVar3 = (**(code **)(*plVar1 + 0x5d8))(plVar1);
      if ((lVar3 != 0) && (DAT_14cbadd90 == 0)) {
        local_40 = &local_28;
        local_28 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1459f2e4c;
        local_48 = &LAB_148c39de3;
        local_50 = &LAB_1457a9eb2;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141110854 FUN_141110854 body=15 status=ok
// SIG undefined FUN_141110854(void)

void FUN_141110854(longlong param_1)

{
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x80) + -1;
  return;
}



// FUNCTION 141110864 FUN_141110864 body=38 status=ok
// SIG undefined FUN_141110864(void)

void FUN_141110864(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x88;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar1 + (longlong)*(int *)(param_1 + 0xc0) * 4);
  return;
}



// FUNCTION 14111088a FUN_14111088a body=760 status=ok
// SIG undefined FUN_14111088a(void)

void FUN_14111088a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_78);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_78);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_78 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_78);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141110b84(local_20,puVar4);
  FUN_140d4df51(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140d4df51(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141110b84 FUN_141110b84 body=305 status=ok
// SIG undefined FUN_141110b84(void)

void FUN_141110b84(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411119a6 FUN_1411119a6 body=162 status=ok
// SIG undefined FUN_1411119a6(void)

void FUN_1411119a6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x28) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x30) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x28) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x28) = param_2;
    if (*(longlong **)(param_2 + 0x30) == plVar2) goto LAB_1411119e5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x30) = plVar2;
      goto LAB_1411119e5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x30) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1411119e5:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141111a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 141111a48 FUN_141111a48 body=150 status=ok
// SIG undefined FUN_141111a48(void)

undefined8 * FUN_141111a48(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((param_3 != 0) && (lVar1 = *(longlong *)(param_3 + 0xd0), lVar1 != 0)) &&
      (*(longlong *)(param_1 + 8) != 0)) &&
     (((*(longlong **)(param_1 + 0x10) != (longlong *)0x0 &&
       (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(), lVar2 != 0)) &&
      (((*(byte *)(lVar2 + 0x130) & 1) != 0 && ((longlong)*(int *)(lVar2 + 0x118) != 0)))))) {
    lVar3 = *(longlong *)(lVar2 + 0x110);
    lVar2 = (longlong)*(int *)(lVar2 + 0x118) * 0x38;
    do {
      if (*(longlong *)(lVar3 + 0x10) == lVar1) {
        if (lVar3 != 0) {
          *param_2 = *(undefined8 *)(lVar3 + 0x20);
          lVar1 = *(longlong *)(lVar3 + 0x28);
          param_2[1] = lVar1;
          if (lVar1 == 0) {
            return param_2;
          }
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
          return param_2;
        }
        break;
      }
      lVar3 = lVar3 + 0x38;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141111ade FUN_141111ade body=367 status=ok
// SIG undefined FUN_141111ade(void)

undefined8 *
FUN_141111ade(undefined8 *param_1,undefined1 param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 uVar9;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_14b430d60;
  param_1[1] = *param_4;
  lVar7 = param_4[1];
  param_1[2] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_14b9a2a60;
  *(undefined1 *)(param_1 + 7) = param_2;
  lVar7 = *(longlong *)(param_3 + 2);
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  if (lVar7 == 0) {
    iVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar7 + 0xc);
    *(uint *)((longlong)param_1 + 0x3c) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 8) = iVar5;
  fVar1 = *param_3;
  *(float *)((longlong)param_1 + 0x44) = fVar1;
  fVar2 = param_3[1];
  *(float *)(param_1 + 9) = fVar2;
  *(float *)((longlong)param_1 + 0x4c) = fVar2 - fVar1;
  uVar9 = FUN_141111c4e(*param_4,*(undefined1 *)(param_1 + 7));
  *(undefined4 *)(param_1 + 10) = uVar9;
  param_1[0xb] = 0;
  fVar1 = param_3[6];
  uVar4 = *(undefined8 *)(param_3 + 4);
  *(float *)(param_1 + 0xc) = fVar1;
  if (fVar1 == 0.0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_140d4df7e(param_1 + 0xb,fVar1,0);
    FUN_140d4e0ce(param_1[0xb],uVar4,fVar1);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 141111c4e FUN_141111c4e body=128 status=ok
// SIG undefined FUN_141111c4e(void)

undefined4 FUN_141111c4e(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & (uint)param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 0x20;
        if (*(byte *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 0x20) == param_2) {
          if (lVar2 == 0) {
            return 0;
          }
          if ((longlong *)(lVar2 + 8) == (longlong *)0x0) {
            return 0;
          }
          lVar2 = *(longlong *)(lVar2 + 8);
          if (lVar2 == 0) {
            return 0;
          }
          if (*(char *)(lVar2 + 0x24) != '\x01') {
            return 0;
          }
          return *(undefined4 *)(lVar2 + 0x20);
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 141111cce FUN_141111cce body=226 status=ok
// SIG undefined FUN_141111cce(void)

undefined8 * FUN_141111cce(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar2 + lVar6);
      lVar4 = *(longlong *)(lVar5 + 0x30);
      if ((((lVar4 == 0) || (lVar3 = FUN_140f1dd56(), lVar3 == 0)) ||
          (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x30);
      }
      lVar4 = *param_3;
      if (((lVar4 == 0) || (lVar3 = FUN_140f1dd56(), lVar3 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      else {
        lVar4 = *param_3;
      }
      if (lVar5 == lVar4) {
        *param_2 = *(undefined8 *)(lVar2 + lVar6);
        lVar2 = *(longlong *)(lVar2 + 8 + lVar6);
        param_2[1] = lVar2;
        if (lVar2 == 0) {
          return param_2;
        }
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
        return param_2;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141111db0 FUN_141111db0 body=2184 status=ok
// SIG undefined FUN_141111db0(void)

void FUN_141111db0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 *_Src;
  undefined8 *puVar6;
  undefined1 *_Src_00;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  undefined8 local_190;
  undefined8 local_188;
  code *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = 0;
      local_198 = (undefined1 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_141111eac;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_141111eac:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = 0;
      local_198 = (undefined1 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_141111f82;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_141111f82:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1403a682c;
      local_190 = 0;
      local_198 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_14111204a;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_14111204a:
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_14111211a;
          }
        }
        _Src_00 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_14111211a:
  local_198 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_198 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = local_48;
  local_178 = local_58;
  uStack_174 = uStack_54;
  uStack_170 = uStack_50;
  uStack_16c = uStack_4c;
  (**(code **)(*param_1 + 0x6c0))(param_1,local_38,local_40);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111263a FUN_14111263a body=105 status=ok
// SIG undefined FUN_14111263a(void)

void FUN_14111263a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined1 auStack_68 [48];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1411128ea(param_1,param_2,param_3,param_5);
  local_28 = *(undefined8 *)(param_4 + 4);
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  FUN_1411126a4(local_38,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411126a4 FUN_1411126a4 body=580 status=ok
// SIG undefined FUN_1411126a4(void)

void FUN_1411126a4(undefined8 param_1,longlong param_2,longlong param_3,double *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  double local_40;
  double local_38;
  double local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((9.999999747378752e-05 < ABS(*param_4)) || (9.999999747378752e-05 < ABS(param_4[1]))) {
    if (param_3 == 0) goto LAB_141112706;
  }
  else if ((param_3 == 0) || (ABS(param_4[2]) <= 9.999999747378752e-05)) goto LAB_141112706;
  if (DAT_14cba8288 == 0) {
    local_60 = &local_28;
    local_28 = FUN_141864c34;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1464cee30;
    local_68 = &LAB_148bfac22;
    local_70 = &LAB_140f21842;
    local_78 = &DAT_149e063b2;
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
      (*(longlong *)(param_3 + 0x3f70) != 0)) &&
     (local_28 = *(code **)(*(longlong *)(param_3 + 0x3f70) + 0xfb8), local_28 != (code *)0x0)) {
    uVar2 = FUN_140c4e3ec();
    lVar3 = FUN_14036a402(uVar2,&local_28);
    if ((0.0 < *(float *)(lVar3 + 4)) &&
       (plVar1 = *(longlong **)(param_2 + 0x1c8), plVar1 != (longlong *)0x0)) {
      lVar4 = FUN_144a3a302();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        local_40 = (double)*(float *)(lVar3 + 4);
        local_30 = -param_4[2] * local_40;
        local_38 = -param_4[1] * local_40;
        local_40 = -*param_4 * local_40;
        (**(code **)(*plVar1 + 0x6a8))(plVar1,&local_40,0,0);
      }
    }
  }
LAB_141112706:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411128ea FUN_1411128ea body=1811 status=ok
// SIG undefined FUN_1411128ea(void)

void FUN_1411128ea(longlong param_1,undefined8 param_2,longlong ****param_3,longlong param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong ****pppplVar15;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  uint local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  longlong ***local_110;
  code *local_108;
  code *local_100;
  undefined8 local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong ***local_c8;
  longlong local_c0;
  undefined4 local_a0;
  longlong ***local_98 [3];
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_3 != (longlong ****)0x0) {
    if (DAT_14cb56270 == 0) {
      local_110 = (longlong ***)&local_c8;
      local_c8 = (longlong ***)FUN_1449e2820;
      local_100 = FUN_14081d0ea;
      local_108 = FUN_1427b09ee;
      local_118 = &LAB_148630fef;
      local_120 = FUN_1464b6a91;
      local_128 = L"Engine";
      local_130 = 0;
      local_138 = 0x10004001;
      local_140 = 8;
      local_148 = CONCAT44(local_148._4_4_,0x28);
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar11 = (longlong *)(*(code *)(*param_3)[0x51])(param_3,DAT_14cb56270);
    if (plVar11 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_110 = (longlong ***)&local_c8;
        local_c8 = (longlong ***)FUN_1449e2820;
        local_100 = FUN_14081d0ea;
        local_108 = FUN_1427b09ee;
        local_118 = &LAB_148630fef;
        local_120 = FUN_1464b6a91;
        local_128 = L"Engine";
        local_130 = 0;
        local_138 = 0x10004001;
        local_140 = 8;
        local_148 = CONCAT44(local_148._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar12 = (longlong *)FUN_144718840(plVar11,DAT_14cb56270);
      if ((((plVar11 != plVar12) && (plVar12 != (longlong *)0x0)) &&
          ((lVar13 = (**(code **)(*plVar12 + 0x10))(plVar12), lVar13 != 0 ||
           (lVar13 = (**(code **)(*plVar12 + 0x20))(plVar12), lVar13 != 0)))) &&
         (((*(longlong *)(param_1 + 0x1990) != 0 &&
           (lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x1990) + 0x1a00), lVar13 != 0)) &&
          (lVar14 = FUN_14082ce84(lVar13 + 0xe30), lVar14 != 0)))) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_3);
        }
        local_c8 = (longlong ***)param_3;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(param_3);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(param_3);
        }
        uVar9 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        iVar10 = FUN_141112ffe(param_1 + 0x19c8,uVar9 >> 0x10 ^ uVar9,&local_c8);
        if (iVar10 == -1) {
          local_98[0] = (longlong ***)param_3;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_3);
          }
          local_c8 = (longlong ***)local_98;
          local_c0 = lVar13 + 0xe4c;
          FUN_14580881e(param_1 + 0x19c8,&local_d8,&local_c8);
          FUN_1405fab15(&local_d8);
          local_f0 = FUN_1406f3fb0(lVar13 + 0xe14);
          local_c8 = (longlong ***)((ulonglong)local_c8 & 0xffffffffffffff00);
          local_a0 = 0;
          FUN_1456bb102(&local_c8,param_2);
          FUN_1448729ea(local_f0,local_98,&local_c8);
          uVar16 = FUN_144a7ecd0(local_98);
          *(undefined4 *)(local_d8 + 8) = uVar16;
          *(undefined1 *)(local_d8 + 0xc) = 1;
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
          if (pcVar6 != (code *)0x0) {
            pppplVar15 = local_98;
            if (0x18 < local_80) {
              pppplVar15 = (longlong ****)local_98[0];
            }
            (*pcVar6)(pppplVar15);
          }
          if (0x18 < local_80) {
            FUN_1400020a8(local_98[0]);
          }
          FUN_144a5ac3a(&local_c8);
          if ((*(char *)(local_d8 + 0xc) == '\x01') && (1.0 <= *(float *)(local_d8 + 8))) {
            fVar21 = (float)SQRT(*(double *)(param_1 + 0x1cb8) * *(double *)(param_1 + 0x1cb8) +
                                 *(double *)(param_1 + 0x1cc0) * *(double *)(param_1 + 0x1cc0));
            puVar1 = (undefined8 *)(param_4 + 0x10);
            if (puVar1 != (undefined8 *)(local_d8 + 0x1a0)) {
              *(undefined8 *)(local_d8 + 0x1b0) = *(undefined8 *)(param_4 + 0x20);
              uVar8 = *(undefined8 *)(param_4 + 0x18);
              *(undefined8 *)(local_d8 + 0x1a0) = *puVar1;
              *(undefined8 *)(local_d8 + 0x1a8) = uVar8;
              *(undefined1 *)(local_d8 + 0x1b8) = 1;
            }
            *(float *)(local_d8 + 0x1c0) = *(float *)(lVar13 + 0xe48) * fVar21;
            *(undefined1 *)(local_d8 + 0x1c4) = 1;
            dVar3 = *(double *)(param_1 + 0x860);
            dVar4 = *(double *)(param_1 + 0x868);
            dVar5 = *(double *)(param_1 + 0x870);
            dVar20 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
            if (((dVar20 != 1.0) || (dVar18 = dVar4, dVar19 = dVar5, dVar7 = dVar3, NAN(dVar20))) &&
               (dVar18 = DAT_14c8464e8, dVar19 = DAT_14c8464f0, dVar7 = DAT_14c8464e0,
               9.99999993922529e-09 <= dVar20)) {
              dVar20 = 1.0 / SQRT(dVar20);
              dVar18 = dVar4 * dVar20;
              dVar19 = dVar5 * dVar20;
              dVar7 = dVar3 * dVar20;
            }
            *(double *)(local_d8 + 0x220) = dVar7;
            *(double *)(local_d8 + 0x228) = dVar18;
            *(double *)(local_d8 + 0x230) = dVar19;
            *(undefined1 *)(local_d8 + 0x238) = 1;
            local_e8 = local_d8;
            local_e0 = local_d0;
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
              UNLOCK();
            }
            local_148 = 0;
            FUN_1405fd19a(param_2,lVar14,param_3,&local_e8);
            if ((*(longlong *)(param_1 + 0x1990) != 0) &&
               (lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x1990) + 0x1a08), lVar13 != 0)) {
              local_c8 = (longlong ***)((ulonglong)local_c8 & 0xffffffffffffff00);
              local_a0 = 0;
              FUN_1456bb102(&local_c8);
              FUN_1448729ea(param_1 + 0xdb8,local_98,&local_c8);
              fVar17 = (float)FUN_144a7ecd0(local_98);
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
              if (pcVar6 != (code *)0x0) {
                pppplVar15 = local_98;
                if (0x18 < local_80) {
                  pppplVar15 = (longlong ****)local_98[0];
                }
                (*pcVar6)(pppplVar15);
              }
              if (0x18 < local_80) {
                FUN_1400020a8(local_98[0]);
              }
              FUN_144a5ac3a(&local_c8);
              local_138 = CONCAT31(local_138._1_3_,
                                   fVar21 < ((fVar17 * 100000.0) / 2236.942) *
                                            *(float *)(lVar13 + 0x7ec));
              local_148 = CONCAT44(local_148._4_4_,fVar21);
              local_140 = local_140 & 0xffffff00;
              (**(code **)(**(longlong **)(param_1 + 0x1990) + 0x860))
                        (*(longlong **)(param_1 + 0x1990),puVar1,param_4 + 0x40,param_4);
            }
          }
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_d0 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar2 = (int *)((longlong)local_d0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_d0 + 0x10))(local_d0);
              }
            }
          }
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141112ffe FUN_141112ffe body=208 status=ok
// SIG undefined FUN_141112ffe(void)

int FUN_141112ffe(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1411130ce FUN_1411130ce body=9618 status=ok
// SIG undefined FUN_1411130ce(void)

void FUN_1411130ce(longlong *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 ****ppppuVar17;
  longlong lVar18;
  int *piVar19;
  int **ppiVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  int **local_178;
  undefined1 *local_170;
  undefined8 local_168;
  int *local_160;
  longlong *local_158;
  int local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  int **local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  int *piStack_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 ***local_d8 [3];
  ushort local_c0;
  byte local_b8;
  undefined1 local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 local_94;
  undefined8 local_90;
  ushort local_88;
  undefined1 local_84 [4];
  byte local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  (**(code **)(*param_1 + 0x90))();
  param_1[0x88] = param_1[2];
  FUN_1446f470e(&local_150,L"Target",1);
  local_a8 = &local_150;
  uStack_a0 = param_1 + 0x33;
  FUN_140ffad64(param_1 + 0x3b,&local_e0,&local_a8,0);
  uVar9 = DAT_14cb7e658;
  uVar7 = FUN_141115664();
  lVar8 = FUN_140c48046(param_1 + 0x10,uVar7,uVar9,0);
  if (lVar8 != 0) {
    local_a8 = (int *)0x0;
    uVar9 = FUN_1411157a2();
    lVar10 = FUN_140c47e50(lVar8,uVar9,&local_a8);
    if (lVar10 != 0) {
      FUN_14054d68c(lVar10 + 0x80,param_1 + 0x3a);
      if (*(char *)((longlong)param_1 + 0x449) == '\x01') {
        *(char *)(lVar10 + 0x331) = (char)param_1[0x89];
      }
      else if ((char)param_1[0xde] == '\x01') {
        *(undefined1 *)(lVar10 + 0x331) = 1;
      }
      else {
        *(undefined1 *)(lVar10 + 0x331) = 3;
      }
    }
    local_188 = param_1 + 0x3b;
    uVar9 = FUN_141115664();
    local_180 = lVar8;
    lVar8 = FUN_140c483dc(lVar8,uVar9,&DAT_14cb7e668,0);
    local_198 = lVar10;
    if (lVar8 != 0) {
      local_a8 = (int *)0x0;
      uVar9 = FUN_140c48226();
      lVar11 = FUN_140c47e50(lVar8,uVar9,&local_a8);
      if (lVar11 != 0) {
        *(char *)(lVar11 + 0x1c) = (char)param_1[0xde];
        *(undefined4 *)(lVar11 + 0x19c) = 2;
        local_f8 = 0;
        piStack_f0 = (int *)0x0;
        local_e8 = (longlong *)0x0;
        if (lVar10 == 0) {
          piStack_f0 = (int *)0x0;
          local_e8 = (longlong *)0x0;
        }
        else {
          FUN_14111569e(lVar10,&local_a8);
          plVar13 = local_e8;
          piStack_f0 = local_a8;
          local_e8 = uStack_a0;
          local_a8 = (int *)0x0;
          uStack_a0._0_4_ = 0;
          uStack_a0._4_4_ = 0;
          uStack_a0 = (longlong *)0x0;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            piVar19 = (int *)((longlong)plVar13 + 0xc);
            *piVar19 = *piVar19 + -1;
            UNLOCK();
            if (*piVar19 == 0) {
              (**(code **)(*plVar13 + 0x10))();
            }
            lVar10 = local_198;
            if (uStack_a0 != (longlong *)0x0) {
              LOCK();
              piVar19 = (int *)((longlong)uStack_a0 + 0xc);
              *piVar19 = *piVar19 + -1;
              UNLOCK();
              if (*piVar19 == 0) {
                (**(code **)(*uStack_a0 + 0x10))();
              }
            }
          }
        }
        FUN_141115702(&local_a8,&local_f8);
        FUN_1403719a4(lVar11 + 0x1e8,&local_a8);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
        if (pcVar4 != (code *)0x0) {
          plVar13 = uStack_a0;
          if (local_88 < 0x19) {
            plVar13 = &uStack_a0;
          }
          (*pcVar4)(plVar13);
        }
        if (0x18 < local_88) {
          FUN_1400020a8(uStack_a0);
        }
        *(undefined1 *)(lVar11 + 0x158) = 1;
        plVar13 = param_1 + 0xe0;
        plVar21 = (longlong *)(lVar11 + 0x128);
        bVar1 = *(byte *)(lVar11 + 0x148);
        if (bVar1 == *(byte *)(param_1 + 0xe4)) {
          if (0x18 < *(ushort *)(param_1 + 0xe3)) {
            plVar13 = (longlong *)param_1[0xe0];
          }
          if (0x18 < *(ushort *)(lVar11 + 0x140)) {
            plVar21 = (longlong *)*plVar21;
          }
          uVar12 = (ulonglong)((uint)bVar1 * 0x120);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
          if (pcVar4 == (code *)0x0) {
            memcpy(plVar21,plVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
          }
          else {
            (*pcVar4)(plVar21,plVar13);
          }
        }
        else {
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar4 != (code *)0x0) {
            plVar14 = plVar21;
            if (0x18 < *(ushort *)(lVar11 + 0x140)) {
              plVar14 = (longlong *)*plVar21;
            }
            (*pcVar4)(plVar14);
          }
          if (0x18 < *(ushort *)(lVar11 + 0x140)) {
            FUN_1400020a8(*plVar21);
          }
          bVar1 = *(byte *)(param_1 + 0xe4);
          uVar2 = *(ushort *)(param_1 + 0xe3);
          *(ushort *)(lVar11 + 0x140) = uVar2;
          plVar14 = plVar21;
          if (0x18 < uVar2) {
            plVar14 = (longlong *)FUN_14001cc68(uVar2,0);
            *plVar21 = (longlong)plVar14;
            plVar13 = (longlong *)*plVar13;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar4 == (code *)0x0) {
            memcpy(plVar14,plVar13,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
          }
          else {
            (*pcVar4)(plVar14,plVar13);
          }
          *(char *)(lVar11 + 0x148) = (char)param_1[0xe4];
          lVar10 = local_198;
        }
        *(char *)(lVar11 + 0x150) = (char)param_1[0xe5];
        *(undefined1 *)(lVar11 + 0x198) = 1;
        plVar13 = param_1 + 0xe7;
        puVar22 = (undefined8 *)(lVar11 + 0x168);
        bVar1 = *(byte *)(lVar11 + 0x188);
        if (bVar1 == *(byte *)(param_1 + 0xeb)) {
          if (0x18 < *(ushort *)(param_1 + 0xea)) {
            plVar13 = (longlong *)param_1[0xe7];
          }
          if (0x18 < *(ushort *)(lVar11 + 0x180)) {
            puVar22 = (undefined8 *)*puVar22;
          }
          uVar12 = (ulonglong)((uint)bVar1 * 0x120);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar22,plVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
          }
          else {
            (*pcVar4)(puVar22,plVar13);
          }
        }
        else {
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar15 = puVar22;
            if (0x18 < *(ushort *)(lVar11 + 0x180)) {
              puVar15 = (undefined8 *)*puVar22;
            }
            (*pcVar4)(puVar15);
          }
          if (0x18 < *(ushort *)(lVar11 + 0x180)) {
            FUN_1400020a8(*puVar22);
          }
          bVar1 = *(byte *)(param_1 + 0xeb);
          uVar2 = *(ushort *)(param_1 + 0xea);
          *(ushort *)(lVar11 + 0x180) = uVar2;
          puVar15 = puVar22;
          if (0x18 < uVar2) {
            puVar15 = (undefined8 *)FUN_14001cc68(uVar2,0);
            *puVar22 = puVar15;
            plVar13 = (longlong *)*plVar13;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar15,plVar13,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
          }
          else {
            (*pcVar4)(puVar15,plVar13);
          }
          *(char *)(lVar11 + 0x188) = (char)param_1[0xeb];
          lVar10 = local_198;
        }
        *(char *)(lVar11 + 400) = (char)param_1[0xec];
        *(undefined4 *)(lVar11 + 0xa1) = 0;
        *(undefined1 *)(lVar11 + 0x101) = 1;
      }
      uVar9 = FUN_140a48832();
      lVar11 = FUN_140c483dc(lVar8,uVar9,&DAT_14cb7e670,0);
      if (lVar11 != 0) {
        local_a8 = (int *)0x0;
        uVar9 = FUN_140b01c92();
        FUN_140c47e50(lVar11,uVar9,&local_a8);
        local_a8 = (int *)0x0;
        uVar9 = FUN_140c483a2();
        plVar13 = (longlong *)FUN_140c47e50(lVar11,uVar9,&local_a8);
        local_190 = lVar8;
        if (plVar13 != (longlong *)0x0) {
          *(bool *)((longlong)plVar13 + 0x1c) = *(char *)((longlong)param_1 + 0x4dc) != '\0';
          plVar21 = param_1 + 0x34;
          plVar14 = plVar13 + 0x11;
          bVar1 = *(byte *)(plVar13 + 0x15);
          if (bVar1 == *(byte *)(param_1 + 0x38)) {
            if (0x18 < *(ushort *)(param_1 + 0x37)) {
              plVar21 = (longlong *)param_1[0x34];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x14)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x14)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x14)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 0x38);
            uVar2 = *(ushort *)(param_1 + 0x37);
            *(ushort *)(plVar13 + 0x14) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x15) = (char)param_1[0x38];
            lVar8 = local_190;
          }
          *(char *)(plVar13 + 0x16) = (char)param_1[0x39];
          plVar13[0x17] = (longlong)DAT_14cb72618;
          plVar21 = param_1 + 0x9d;
          plVar14 = plVar13 + 0x19;
          bVar1 = *(byte *)(plVar13 + 0x1d);
          if (bVar1 == *(byte *)(param_1 + 0xa1)) {
            if (0x18 < *(ushort *)(param_1 + 0xa0)) {
              plVar21 = (longlong *)param_1[0x9d];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x1c)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x1c)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x1c)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 0xa1);
            uVar2 = *(ushort *)(param_1 + 0xa0);
            *(ushort *)(plVar13 + 0x1c) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x1d) = (char)param_1[0xa1];
            lVar8 = local_190;
          }
          *(char *)(plVar13 + 0x1e) = (char)param_1[0xa2];
          plVar21 = param_1 + 0xa4;
          plVar14 = plVar13 + 0x27;
          bVar1 = *(byte *)(plVar13 + 0x2b);
          if (bVar1 == *(byte *)(param_1 + 0xa8)) {
            if (0x18 < *(ushort *)(param_1 + 0xa7)) {
              plVar21 = (longlong *)param_1[0xa4];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x2a)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x2a)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x2a)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 0xa8);
            uVar2 = *(ushort *)(param_1 + 0xa7);
            *(ushort *)(plVar13 + 0x2a) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x2b) = (char)param_1[0xa8];
            lVar8 = local_190;
          }
          *(char *)(plVar13 + 0x2c) = (char)param_1[0xa9];
          *(char *)(plVar13 + 0x2d) = (char)param_1[0xaa];
          *(char *)(plVar13 + 0x35) = (char)param_1[0xb2];
          plVar21 = param_1 + 0xac;
          plVar14 = plVar13 + 0x2f;
          bVar1 = *(byte *)(plVar13 + 0x33);
          if (bVar1 == *(byte *)(param_1 + 0xb0)) {
            if (0x18 < *(ushort *)(param_1 + 0xaf)) {
              plVar21 = (longlong *)param_1[0xac];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x32)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x32)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x32)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 0xb0);
            uVar2 = *(ushort *)(param_1 + 0xaf);
            *(ushort *)(plVar13 + 0x32) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x33) = (char)param_1[0xb0];
            lVar8 = local_190;
          }
          *(char *)(plVar13 + 0x34) = (char)param_1[0xb1];
          lVar10 = param_1[0xd2];
          *(char *)(plVar13 + 0x36) = (char)lVar10;
          *(char *)((longlong)plVar13 + 0x1b1) = (char)lVar10;
          plVar13[0x37] = param_1[0xb3];
          plVar21 = param_1 + 0xb5;
          plVar14 = plVar13 + 0x39;
          bVar1 = *(byte *)(plVar13 + 0x3d);
          if (bVar1 == *(byte *)(param_1 + 0xb9)) {
            if (0x18 < *(ushort *)(param_1 + 0xb8)) {
              plVar21 = (longlong *)param_1[0xb5];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x3c)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x3c)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x3c)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 0xb9);
            uVar2 = *(ushort *)(param_1 + 0xb8);
            *(ushort *)(plVar13 + 0x3c) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x3d) = (char)param_1[0xb9];
            lVar8 = local_190;
          }
          *(char *)(plVar13 + 0x3e) = (char)param_1[0xba];
          plVar21 = param_1 + 0xbc;
          plVar14 = plVar13 + 0x40;
          bVar1 = *(byte *)(plVar13 + 0x44);
          if (bVar1 == *(byte *)(param_1 + 0xc0)) {
            if (0x18 < *(ushort *)(param_1 + 0xbf)) {
              plVar21 = (longlong *)param_1[0xbc];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x43)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x43)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x43)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 0xc0);
            uVar2 = *(ushort *)(param_1 + 0xbf);
            *(ushort *)(plVar13 + 0x43) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x44) = (char)param_1[0xc0];
            lVar8 = local_190;
          }
          *(char *)(plVar13 + 0x45) = (char)param_1[0xc1];
          plVar21 = param_1 + 0xc3;
          plVar14 = plVar13 + 0x47;
          bVar1 = *(byte *)(plVar13 + 0x4b);
          if (bVar1 == *(byte *)(param_1 + 199)) {
            if (0x18 < *(ushort *)(param_1 + 0xc6)) {
              plVar21 = (longlong *)param_1[0xc3];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x4a)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x4a)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x4a)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 199);
            uVar2 = *(ushort *)(param_1 + 0xc6);
            *(ushort *)(plVar13 + 0x4a) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x4b) = (char)param_1[199];
            lVar8 = local_190;
          }
          *(char *)(plVar13 + 0x4c) = (char)param_1[200];
          *(char *)(plVar13 + 0x4d) = (char)param_1[0xc9];
          plVar21 = param_1 + 0xcb;
          plVar14 = plVar13 + 0x4f;
          bVar1 = *(byte *)(plVar13 + 0x53);
          if (bVar1 == *(byte *)(param_1 + 0xcf)) {
            if (0x18 < *(ushort *)(param_1 + 0xce)) {
              plVar21 = (longlong *)param_1[0xcb];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x52)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x52)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x52)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 0xcf);
            uVar2 = *(ushort *)(param_1 + 0xce);
            *(ushort *)(plVar13 + 0x52) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x53) = (char)param_1[0xcf];
          }
          *(char *)(plVar13 + 0x54) = (char)param_1[0xd0];
          *(char *)(plVar13 + 0x55) = (char)param_1[0xd1];
          (**(code **)(*plVar13 + 0x90))(plVar13);
        }
        local_a8 = (int *)0x0;
        uVar9 = FUN_140c4800c();
        lVar10 = FUN_140c47e50(lVar11,uVar9,&local_a8);
        if (lVar10 != 0) {
          bVar23 = *(char *)((longlong)param_1 + 0x4dc) == '\x01';
          uVar5 = 1;
          if ((!bVar23) && (*(char *)((longlong)param_1 + 0x591) == '\0')) {
            uVar5 = *(undefined1 *)((longlong)param_1 + 0x592);
          }
          *(undefined1 *)(lVar10 + 0x1c) = uVar5;
          plVar13 = param_1 + 0x34;
          plVar21 = (longlong *)(lVar10 + 0x88);
          bVar1 = *(byte *)(lVar10 + 0xa8);
          if (bVar1 == *(byte *)(param_1 + 0x38)) {
            if (0x18 < *(ushort *)(param_1 + 0x37)) {
              plVar13 = (longlong *)param_1[0x34];
            }
            if (0x18 < *(ushort *)(lVar10 + 0xa0)) {
              plVar21 = (longlong *)*plVar21;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar21,plVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar21,plVar13);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar14 = plVar21;
              if (0x18 < *(ushort *)(lVar10 + 0xa0)) {
                plVar14 = (longlong *)*plVar21;
              }
              (*pcVar4)(plVar14);
            }
            if (0x18 < *(ushort *)(lVar10 + 0xa0)) {
              FUN_1400020a8(*plVar21);
            }
            bVar1 = *(byte *)(param_1 + 0x38);
            uVar2 = *(ushort *)(param_1 + 0x37);
            *(ushort *)(lVar10 + 0xa0) = uVar2;
            plVar14 = plVar21;
            if (0x18 < uVar2) {
              plVar14 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar21 = (longlong)plVar14;
              plVar13 = (longlong *)*plVar13;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar13,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar14,plVar13);
            }
            *(char *)(lVar10 + 0xa8) = (char)param_1[0x38];
            lVar8 = local_190;
          }
          *(char *)(lVar10 + 0xb0) = (char)param_1[0x39];
          FUN_1411157dc(lVar10 + 0x2a8,param_1 + 0xd3);
          local_100 = local_84;
          local_a8 = DAT_14cb72618;
          uStack_a0._0_4_ = CONCAT31(uStack_a0._1_3_,bVar23);
          uStack_a0._4_4_ = (undefined4)DAT_14cb72620;
          uStack_98 = (undefined4)((ulonglong)DAT_14cb72620 >> 0x20);
          local_94 = *(undefined1 *)((longlong)param_1 + 0x591);
          local_90 = DAT_14cb72628;
          local_88 = CONCAT11(local_88._1_1_,*(undefined1 *)((longlong)param_1 + 0x592));
          local_108 = &local_a8;
          FUN_140c482d4(lVar10);
        }
        local_a8 = (int *)0x0;
        uVar9 = FUN_140c48260();
        lVar11 = FUN_140c47e50(lVar11,uVar9,&local_a8);
        lVar10 = local_198;
        if (lVar11 != 0) {
          lVar18 = param_1[0x8a];
          if (DAT_14c950c29 == '\x01') {
            if (lVar18 == 0) {
              lVar18 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar18 = param_1[0x8a];
            }
          }
          lVar10 = local_198;
          *(longlong *)(lVar11 + 0x80) = lVar18;
          *(int *)(lVar11 + 0x90) = (int)param_1[0x8c];
          *(longlong *)(lVar11 + 0x88) = param_1[0x8b];
          plVar13 = param_1 + 0x8e;
          plVar21 = (longlong *)(lVar11 + 0xa0);
          bVar1 = *(byte *)(lVar11 + 0xc0);
          if (bVar1 == *(byte *)(param_1 + 0x92)) {
            if (0x18 < *(ushort *)(param_1 + 0x91)) {
              plVar13 = (longlong *)param_1[0x8e];
            }
            if (0x18 < *(ushort *)(lVar11 + 0xb8)) {
              plVar21 = (longlong *)*plVar21;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar21,plVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar21,plVar13);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar14 = plVar21;
              if (0x18 < *(ushort *)(lVar11 + 0xb8)) {
                plVar14 = (longlong *)*plVar21;
              }
              (*pcVar4)(plVar14);
            }
            if (0x18 < *(ushort *)(lVar11 + 0xb8)) {
              FUN_1400020a8(*plVar21);
            }
            bVar1 = *(byte *)(param_1 + 0x92);
            uVar2 = *(ushort *)(param_1 + 0x91);
            *(ushort *)(lVar11 + 0xb8) = uVar2;
            plVar14 = plVar21;
            if (0x18 < uVar2) {
              plVar14 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar21 = (longlong)plVar14;
              plVar13 = (longlong *)*plVar13;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar13,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar14,plVar13);
            }
            *(char *)(lVar11 + 0xc0) = (char)param_1[0x92];
            lVar10 = local_198;
          }
          *(char *)(lVar11 + 200) = (char)param_1[0x93];
          plVar13 = param_1 + 0x95;
          plVar21 = (longlong *)(lVar11 + 0xd8);
          bVar1 = *(byte *)(lVar11 + 0xf8);
          if (bVar1 == *(byte *)(param_1 + 0x99)) {
            if (0x18 < *(ushort *)(param_1 + 0x98)) {
              plVar13 = (longlong *)param_1[0x95];
            }
            if (0x18 < *(ushort *)(lVar11 + 0xf0)) {
              plVar21 = (longlong *)*plVar21;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar21,plVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar21,plVar13);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar14 = plVar21;
              if (0x18 < *(ushort *)(lVar11 + 0xf0)) {
                plVar14 = (longlong *)*plVar21;
              }
              (*pcVar4)(plVar14);
            }
            if (0x18 < *(ushort *)(lVar11 + 0xf0)) {
              FUN_1400020a8(*plVar21);
            }
            bVar1 = *(byte *)(param_1 + 0x99);
            uVar2 = *(ushort *)(param_1 + 0x98);
            *(ushort *)(lVar11 + 0xf0) = uVar2;
            plVar14 = plVar21;
            if (0x18 < uVar2) {
              plVar14 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar21 = (longlong)plVar14;
              plVar13 = (longlong *)*plVar13;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar13,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar14,plVar13);
            }
            *(char *)(lVar11 + 0xf8) = (char)param_1[0x99];
            lVar10 = local_198;
          }
          *(char *)(lVar11 + 0x100) = (char)param_1[0x9a];
          *(int *)(lVar11 + 0x108) = (int)param_1[0x9b];
          local_150 = 0;
          local_14c = 0;
          local_148 = 0xbf80000000000000;
          local_140 = 0xc4750000;
          local_13c = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          cVar6 = FUN_140a3e98a(local_188,DAT_14cb7e6a0);
          if (cVar6 != '\0') {
            iVar3 = *(int *)(lVar11 + 0x118);
            *(uint *)(lVar11 + 0x118) = iVar3 + 1U;
            if (*(uint *)(lVar11 + 0x11c) < iVar3 + 1U) {
              FUN_141115832((longlong *)(lVar11 + 0x110),iVar3);
            }
            lVar8 = *(longlong *)(lVar11 + 0x110);
            lVar11 = (longlong)iVar3 * 0x58;
            piVar19 = &local_150;
            ppiVar20 = &local_a8;
            for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
              *ppiVar20 = *(int **)piVar19;
              piVar19 = piVar19 + 2;
              ppiVar20 = ppiVar20 + 1;
            }
            local_e0 = 0;
            local_c0 = 0x48;
            local_d8[0] = (undefined8 ***)FUN_14001cc68(0x48,0);
            ppiVar20 = &local_a8;
            ppppuVar17 = (undefined8 ****)local_d8[0];
            for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
              *ppppuVar17 = (undefined8 ***)*ppiVar20;
              ppiVar20 = ppiVar20 + 1;
              ppppuVar17 = ppppuVar17 + 1;
            }
            local_b8 = 0xf;
            local_b0 = 0xf;
            if ((DAT_14c9a95f4 & 0x20) != 0) {
              local_b0 = 0;
            }
            FUN_14034cca6(lVar8 + lVar11,&local_e0);
            *(undefined8 *)(lVar8 + 0x38 + lVar11) = DAT_14cb7e6a0;
            puVar22 = (undefined8 *)(lVar8 + 0x40 + lVar11);
            *puVar22 = 0;
            puVar22[1] = 0;
            *(undefined1 *)(lVar8 + 0x50 + lVar11) = 0;
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b8 * 0x120));
            if (pcVar4 != (code *)0x0) {
              ppppuVar17 = (undefined8 ****)local_d8[0];
              if (local_c0 < 0x19) {
                ppppuVar17 = local_d8;
              }
              (*pcVar4)(ppppuVar17);
            }
            lVar8 = local_190;
            lVar10 = local_198;
            if (0x18 < local_c0) {
              FUN_1400020a8(local_d8[0]);
            }
          }
        }
      }
      uVar9 = FUN_140a48832();
      lVar11 = FUN_140c483dc(lVar8,uVar9,&DAT_14cb7e678,&local_150);
      if (lVar11 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0xd8);
        *(undefined1 *)(lVar8 + (longlong)local_150 * 4) = 0;
        *(char *)(lVar8 + 2 + (longlong)local_150 * 4) = (char)param_1[0xd6];
        *(bool *)(lVar11 + 0x1c) = *(char *)((longlong)param_1 + 0x4dc) != '\0';
        local_a8 = (int *)0x0;
        uVar9 = FUN_140c4800c();
        plVar13 = (longlong *)FUN_140c47e50(lVar11,uVar9,&local_a8);
        if (plVar13 != (longlong *)0x0) {
          plVar21 = param_1 + 0x34;
          plVar14 = plVar13 + 0x11;
          bVar1 = *(byte *)(plVar13 + 0x15);
          if (bVar1 == *(byte *)(param_1 + 0x38)) {
            if (0x18 < *(ushort *)(param_1 + 0x37)) {
              plVar21 = (longlong *)param_1[0x34];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x14)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x14)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x14)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 0x38);
            uVar2 = *(ushort *)(param_1 + 0x37);
            *(ushort *)(plVar13 + 0x14) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x15) = (char)param_1[0x38];
            lVar10 = local_198;
          }
          *(char *)(plVar13 + 0x16) = (char)param_1[0x39];
          *(undefined1 *)(plVar13 + 0x54) = 1;
          plVar21 = param_1 + 0x9d;
          plVar14 = plVar13 + 0x4e;
          bVar1 = *(byte *)(plVar13 + 0x52);
          if (bVar1 == *(byte *)(param_1 + 0xa1)) {
            if (0x18 < *(ushort *)(param_1 + 0xa0)) {
              plVar21 = (longlong *)param_1[0x9d];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x51)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x51)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x51)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 0xa1);
            uVar2 = *(ushort *)(param_1 + 0xa0);
            *(ushort *)(plVar13 + 0x51) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x52) = (char)param_1[0xa1];
            lVar10 = local_198;
          }
          *(char *)(plVar13 + 0x53) = (char)param_1[0xa2];
          *(char *)((longlong)plVar13 + 0x219) = (char)param_1[0xd5];
          *(undefined4 *)((longlong)plVar13 + 0x21c) = *(undefined4 *)((longlong)param_1 + 0x6ac);
          if ((char)plVar13[0x17] != '\x04') {
            *(undefined1 *)(plVar13 + 0x17) = 4;
            FUN_1403a3fe6(plVar13);
          }
          *(char *)(plVar13 + 0x44) = (char)param_1[0xd6];
          plVar21 = param_1 + 0xd8;
          plVar14 = plVar13 + 0x46;
          bVar1 = *(byte *)(plVar13 + 0x4a);
          if (bVar1 == *(byte *)(param_1 + 0xdc)) {
            if (0x18 < *(ushort *)(param_1 + 0xdb)) {
              plVar21 = (longlong *)param_1[0xd8];
            }
            if (0x18 < *(ushort *)(plVar13 + 0x49)) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar12 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar14,plVar21,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar14,plVar21);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar16 = plVar14;
              if (0x18 < *(ushort *)(plVar13 + 0x49)) {
                plVar16 = (longlong *)*plVar14;
              }
              (*pcVar4)(plVar16);
            }
            if (0x18 < *(ushort *)(plVar13 + 0x49)) {
              FUN_1400020a8(*plVar14);
            }
            bVar1 = *(byte *)(param_1 + 0xdc);
            uVar2 = *(ushort *)(param_1 + 0xdb);
            *(ushort *)(plVar13 + 0x49) = uVar2;
            plVar16 = plVar14;
            if (0x18 < uVar2) {
              plVar16 = (longlong *)FUN_14001cc68(uVar2,0);
              *plVar14 = (longlong)plVar16;
              plVar21 = (longlong *)*plVar21;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar16,plVar21,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar16,plVar21);
            }
            *(char *)(plVar13 + 0x4a) = (char)param_1[0xdc];
            lVar10 = local_198;
          }
          *(char *)(plVar13 + 0x4b) = (char)param_1[0xdd];
          (**(code **)(*plVar13 + 0x90))(plVar13);
        }
      }
    }
    uVar9 = FUN_140a48832();
    lVar8 = local_180;
    lVar11 = FUN_140c483dc(local_180,uVar9,&DAT_14cb7e680,&local_150);
    if (lVar11 != 0) {
      *(undefined1 *)(*(longlong *)(lVar8 + 0xd8) + (longlong)local_150 * 4) = 0;
      *(char *)(lVar11 + 0x1c) = (char)param_1[0xde];
      local_a8 = (int *)0x0;
      uVar9 = FUN_140c48226();
      lVar8 = FUN_140c47e50(lVar11,uVar9,&local_a8);
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x158) = 1;
        plVar13 = param_1 + 0xe0;
        plVar21 = (longlong *)(lVar8 + 0x128);
        bVar1 = *(byte *)(lVar8 + 0x148);
        if (bVar1 == *(byte *)(param_1 + 0xe4)) {
          if (0x18 < *(ushort *)(param_1 + 0xe3)) {
            plVar13 = (longlong *)param_1[0xe0];
          }
          if (0x18 < *(ushort *)(lVar8 + 0x140)) {
            plVar21 = (longlong *)*plVar21;
          }
          uVar12 = (ulonglong)((uint)bVar1 * 0x120);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
          if (pcVar4 == (code *)0x0) {
            memcpy(plVar21,plVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
          }
          else {
            (*pcVar4)(plVar21,plVar13);
          }
        }
        else {
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar4 != (code *)0x0) {
            plVar14 = plVar21;
            if (0x18 < *(ushort *)(lVar8 + 0x140)) {
              plVar14 = (longlong *)*plVar21;
            }
            (*pcVar4)(plVar14);
          }
          if (0x18 < *(ushort *)(lVar8 + 0x140)) {
            FUN_1400020a8(*plVar21);
          }
          bVar1 = *(byte *)(param_1 + 0xe4);
          uVar2 = *(ushort *)(param_1 + 0xe3);
          *(ushort *)(lVar8 + 0x140) = uVar2;
          plVar14 = plVar21;
          if (0x18 < uVar2) {
            plVar14 = (longlong *)FUN_14001cc68(uVar2,0);
            *plVar21 = (longlong)plVar14;
            plVar13 = (longlong *)*plVar13;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar4 == (code *)0x0) {
            memcpy(plVar14,plVar13,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
          }
          else {
            (*pcVar4)(plVar14,plVar13);
          }
          *(char *)(lVar8 + 0x148) = (char)param_1[0xe4];
          lVar10 = local_198;
        }
        *(char *)(lVar8 + 0x150) = (char)param_1[0xe5];
        *(undefined1 *)(lVar8 + 0x198) = 1;
        plVar13 = param_1 + 0xe7;
        plVar21 = (longlong *)(lVar8 + 0x168);
        bVar1 = *(byte *)(lVar8 + 0x188);
        if (bVar1 == *(byte *)(param_1 + 0xeb)) {
          if (0x18 < *(ushort *)(param_1 + 0xea)) {
            plVar13 = (longlong *)param_1[0xe7];
          }
          if (0x18 < *(ushort *)(lVar8 + 0x180)) {
            plVar21 = (longlong *)*plVar21;
          }
          uVar12 = (ulonglong)((uint)bVar1 * 0x120);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
          if (pcVar4 == (code *)0x0) {
            memcpy(plVar21,plVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            plVar13 = uStack_a0;
          }
          else {
            (*pcVar4)(plVar21,plVar13);
            plVar13 = uStack_a0;
          }
        }
        else {
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar4 != (code *)0x0) {
            plVar14 = plVar21;
            if (0x18 < *(ushort *)(lVar8 + 0x180)) {
              plVar14 = (longlong *)*plVar21;
            }
            (*pcVar4)(plVar14);
          }
          if (0x18 < *(ushort *)(lVar8 + 0x180)) {
            FUN_1400020a8(*plVar21);
          }
          bVar1 = *(byte *)(param_1 + 0xeb);
          uVar2 = *(ushort *)(param_1 + 0xea);
          *(ushort *)(lVar8 + 0x180) = uVar2;
          plVar14 = plVar21;
          if (0x18 < uVar2) {
            plVar14 = (longlong *)FUN_14001cc68(uVar2,0);
            *plVar21 = (longlong)plVar14;
            plVar13 = (longlong *)*plVar13;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar4 == (code *)0x0) {
            memcpy(plVar14,plVar13,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
          }
          else {
            (*pcVar4)(plVar14,plVar13);
          }
          *(char *)(lVar8 + 0x188) = (char)param_1[0xeb];
          lVar10 = local_198;
          plVar13 = uStack_a0;
        }
        *(char *)(lVar8 + 400) = (char)param_1[0xec];
        *(undefined4 *)(lVar8 + 0xa1) = 0;
        *(undefined1 *)(lVar8 + 0x101) = 1;
        local_168 = 0;
        if (lVar10 == 0) {
          uStack_a0 = (longlong *)0x0;
          local_160 = (int *)0x0;
        }
        else {
          uStack_a0 = plVar13;
          FUN_14111569e(lVar10,&local_a8);
          local_160 = local_a8;
          plVar13 = uStack_a0;
        }
        local_158 = uStack_a0;
        uStack_a0 = plVar13;
        FUN_141115702(&local_a8);
        FUN_1403719a4(lVar8 + 0x1e8,&local_a8);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
        if (pcVar4 != (code *)0x0) {
          plVar13 = uStack_a0;
          if (local_88 < 0x19) {
            plVar13 = &uStack_a0;
          }
          (*pcVar4)(plVar13);
        }
        if (0x18 < local_88) {
          FUN_1400020a8(uStack_a0);
        }
      }
      local_a8 = (int *)0x0;
      uVar9 = FUN_140c4800c();
      lVar8 = FUN_140c47e50(lVar11,uVar9,&local_a8);
      if (lVar8 != 0) {
        plVar13 = param_1 + 0x34;
        puVar22 = (undefined8 *)(lVar8 + 0x88);
        bVar1 = *(byte *)(lVar8 + 0xa8);
        if (bVar1 == *(byte *)(param_1 + 0x38)) {
          if (0x18 < *(ushort *)(param_1 + 0x37)) {
            plVar13 = (longlong *)param_1[0x34];
          }
          if (0x18 < *(ushort *)(lVar8 + 0xa0)) {
            puVar22 = (undefined8 *)*puVar22;
          }
          uVar12 = (ulonglong)((uint)bVar1 * 0x120);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar22,plVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
          }
          else {
            (*pcVar4)(puVar22,plVar13);
          }
        }
        else {
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar15 = puVar22;
            if (0x18 < *(ushort *)(lVar8 + 0xa0)) {
              puVar15 = (undefined8 *)*puVar22;
            }
            (*pcVar4)(puVar15);
          }
          if (0x18 < *(ushort *)(lVar8 + 0xa0)) {
            FUN_1400020a8(*puVar22);
          }
          bVar1 = *(byte *)(param_1 + 0x38);
          uVar2 = *(ushort *)(param_1 + 0x37);
          *(ushort *)(lVar8 + 0xa0) = uVar2;
          puVar15 = puVar22;
          if (0x18 < uVar2) {
            puVar15 = (undefined8 *)FUN_14001cc68(uVar2,0);
            *puVar22 = puVar15;
            plVar13 = (longlong *)*plVar13;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar15,plVar13,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
          }
          else {
            (*pcVar4)(puVar15,plVar13);
          }
          *(char *)(lVar8 + 0xa8) = (char)param_1[0x38];
        }
        *(char *)(lVar8 + 0xb0) = (char)param_1[0x39];
        local_170 = local_84;
        local_a8 = DAT_14cb72618;
        uStack_a0._0_4_ = CONCAT31(uStack_a0._1_3_,(char)param_1[0xed] == '\x01');
        uStack_a0._4_4_ = (undefined4)DAT_14cb72620;
        uStack_98 = (undefined4)((ulonglong)DAT_14cb72620 >> 0x20);
        local_94 = *(undefined1 *)((longlong)param_1 + 0x76a);
        local_90 = DAT_14cb72628;
        local_88 = CONCAT11(local_88._1_1_,*(undefined1 *)((longlong)param_1 + 0x769));
        local_178 = &local_a8;
        FUN_140c482d4(lVar8);
        *(bool *)(lVar8 + 0x1c) = *(char *)((longlong)param_1 + 0x4dc) == '\x01';
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141115664 FUN_141115664 body=57 status=ok
// SIG undefined FUN_141115664(void)

void FUN_141115664(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21d80 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21d80 = FUN_140002ddd(FUN_146435940,uVar1,L"GbxBrainTaskSettings_Priority");
  }
  return;
}



// FUNCTION 14111569e FUN_14111569e body=99 status=ok
// SIG undefined FUN_14111569e(void)

longlong * FUN_14111569e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xa0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
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
    *param_2 = param_1;
    param_2[1] = (longlong)plVar3;
  }
  return param_2;
}



// FUNCTION 141115702 FUN_141115702 body=160 status=ok
// SIG undefined FUN_141115702(void)

undefined8 * FUN_141115702(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 uVar5;
  
  *param_1 = 0;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  plVar4 = (longlong *)param_2[2];
  if (plVar4 == (longlong *)0x0) {
    *(undefined2 *)(param_1 + 4) = 0x18;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 5) = 0xd;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    *(undefined2 *)(param_1 + 4) = 0x18;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    *(undefined1 *)(param_1 + 5) = 0xd;
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = 0xd;
  if ((DAT_14c9a93b4 & 0x20) != 0) {
    uVar5 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar5;
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 1411157a2 FUN_1411157a2 body=57 status=ok
// SIG undefined FUN_1411157a2(void)

void FUN_1411157a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21390 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21390 = FUN_140002ddd(FUN_146432c13,uVar1,L"GbxBrainAspectSettings_Gps");
  }
  return;
}



// FUNCTION 1411157dc FUN_1411157dc body=85 status=ok
// SIG undefined FUN_1411157dc(void)

undefined8 * FUN_1411157dc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147e37118(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 141115832 FUN_141115832 body=369 status=ok
// SIG undefined FUN_141115832(void)

void FUN_141115832(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x58;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411158b7;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1411158b7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 1411159a4 FUN_1411159a4 body=335 status=ok
// SIG undefined FUN_1411159a4(void)

void FUN_1411159a4(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined1 local_6c [4];
  ulonglong *local_68;
  char ***local_60;
  ulonglong **local_58;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x198) == '\0') {
    local_58 = (ulonglong **)0x14a7b0739;
    local_50[0] = (undefined8 ***)CONCAT35(local_50[0]._5_3_,0xb);
    uVar2 = FUN_14001a6c0(&local_58,1);
    local_68 = (ulonglong *)(ulonglong)uVar2;
    local_58 = &local_68;
    local_50[0] = (undefined8 ****)(param_1 + 0x1a0);
    FUN_140ffad64(param_1 + 0x460,&local_78,&local_58,0);
  }
  else {
    FUN_140785382(&local_58,4);
    local_68 = (ulonglong *)0x14a7b0739;
    local_60 = (char ***)CONCAT35(local_60._5_3_,0xb);
    uVar2 = FUN_14001a6c0(&local_68,1);
    local_78 = (ulonglong)uVar2;
    local_68 = &local_78;
    local_60 = (char ***)&local_58;
    FUN_140ff1448(param_1 + 0x460,local_6c,&local_68,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar3 = (undefined8 ****)local_50[0];
      if (local_38 < 0x19) {
        ppppuVar3 = local_50;
      }
      (*pcVar1)(ppppuVar3);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141115af4 FUN_141115af4 body=708 status=ok
// SIG undefined FUN_141115af4(void)

void FUN_141115af4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined4 uStack_98;
  undefined3 uStack_94;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar11 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *param_2;
    }
  }
  bVar10 = DAT_14c950c29;
  param_1[0x3a] = lVar11;
  lVar11 = param_2[1];
  if ((bVar10 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = param_2[1];
      bVar10 = DAT_14c950c29;
    }
  }
  param_1[0x3b] = lVar11;
  lVar11 = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x13);
  *(int *)(param_1 + 0x3c) = (int)lVar11;
  lVar11 = param_2[3];
  if ((bVar10 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = param_2[3];
    }
  }
  param_1[0x3d] = lVar11;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar11 = param_2[5];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 0x3e) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 500) = uVar5;
  *(int *)(param_1 + 0x3f) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uVar6;
  lVar11 = param_2[6];
  lVar3 = param_2[7];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x41];
  param_1[0x40] = lVar11;
  param_1[0x41] = lVar3;
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
  lVar11 = param_2[8];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar3 = param_2[9];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x4c);
  lVar8 = param_2[10];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
  lVar9 = param_2[0xb];
  *(undefined4 *)((longlong)param_1 + 0x21c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 0x44) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar7;
  *(int *)(param_1 + 0x45) = (int)lVar9;
  *(int *)(param_1 + 0x42) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar5;
  *(int *)(param_1 + 0x43) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar6;
  lVar11 = param_1[99];
  if (lVar11 != 0) {
    local_a8 = param_1[0x3a];
    if ((local_a8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_a0 = param_1[0x3b];
    if ((local_a0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uStack_98 = (undefined4)param_1[0x3c];
    uStack_94 = (undefined3)((uint)*(undefined4 *)((longlong)param_1 + 0x1e3) >> 8);
    local_90 = param_1[0x3d];
    if ((local_90 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_88 = param_1[0x3e];
    lStack_80 = param_1[0x3f];
    local_78 = param_1[0x40];
    local_70 = param_1[0x41];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    lStack_68 = param_1[0x42];
    lStack_60 = param_1[0x43];
    uStack_58 = (undefined4)param_1[0x44];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x224);
    uStack_50 = (undefined4)param_1[0x45];
    local_48 = 1;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1410da64c(lVar11);
  }
  (**(code **)(*param_1 + 0x358))(param_1);
  plVar4 = (longlong *)param_2[7];
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
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141115dca FUN_141115dca body=132 status=ok
// SIG undefined FUN_141115dca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141115dca(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141115e4e FUN_141115e4e body=562 status=ok
// SIG undefined FUN_141115e4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141115e4e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b76b380;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1f] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (*(int *)((longlong)param_1 + 0x114) != 0) {
    FUN_140115c12(param_1 + 0x21,0);
  }
  param_1[0x20] = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1a] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (*(int *)((longlong)param_1 + 0xec) != 0) {
    FUN_140115c12(param_1 + 0x1c,0);
  }
  param_1[0x1b] = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x16] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    FUN_140115c12(param_1 + 0x18,0);
  }
  param_1[0x17] = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_141116080(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000141116054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 141116080 FUN_141116080 body=65 status=ok
// SIG undefined FUN_141116080(void)

void FUN_141116080(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411160c2 FUN_1411160c2 body=938 status=ok
// SIG undefined FUN_1411160c2(void)

void FUN_1411160c2(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_149edc760;
  local_58 = param_1 + 0x45;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar11 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar11 = local_60 >> 0x20;
  }
  puVar3 = local_58;
  iVar4 = *(int *)(local_58 + 3);
  iVar12 = (int)local_60;
  uVar13 = (uint)local_50;
  iVar6 = local_50._4_4_;
  iVar9 = local_48;
  if (local_50._4_4_ < iVar4) {
    do {
      puVar7 = *(undefined8 **)(param_1[0x43] + 8 + (longlong)iVar6 * 0x18);
      if (((puVar7[7] == 0) && (puVar7 != (undefined8 *)0x0)) &&
         ((*(byte *)((longlong)puVar7 + 0x94) & 2) == 0)) {
        (**(code **)*puVar7)(puVar7,1);
        iVar4 = *(int *)(puVar3 + 3);
      }
      uVar13 = uVar13 & ~(uint)uVar11;
      puVar7 = (undefined8 *)puVar3[2];
      if ((undefined8 *)puVar3[2] == (undefined8 *)0x0) {
        puVar7 = puVar3;
      }
      lVar10 = (longlong)iVar12;
      uVar5 = *(uint *)((longlong)puVar7 + lVar10 * 4) & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar12) {
          iVar2 = iVar12;
        }
        if (iVar6 <= iVar12) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)puVar7 + lVar8 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar10 == lVar8) goto LAB_141116219;
        }
        iVar12 = iVar12 + (int)lVar8 + 1;
        uVar13 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_141116219:
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x6b);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  FUN_145808da0(param_1 + 0x61);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  FUN_145808dd6(param_1 + 0x57);
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_145808e0c(param_1 + 0x4d);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_145808e42(param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_145808e78(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_145808eae(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_1406feffc(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145808ee4(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145808f1a(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111646e FUN_14111646e body=88 status=ok
// SIG undefined FUN_14111646e(void)

undefined8 * FUN_14111646e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x14];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411164c6 FUN_1411164c6 body=88 status=ok
// SIG undefined FUN_1411164c6(void)

undefined8 * FUN_1411164c6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x14];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14111651e FUN_14111651e body=88 status=ok
// SIG undefined FUN_14111651e(void)

undefined8 * FUN_14111651e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x14];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141116576 FUN_141116576 body=476 status=ok
// SIG undefined FUN_141116576(void)

void FUN_141116576(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  plVar7 = local_60;
  iVar16 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_1411166b9;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_1411166b9:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141116754 FUN_141116754 body=9 status=ok
// SIG undefined FUN_141116754(void)

void FUN_141116754(longlong param_1)

{
  FUN_140e9e952(param_1 + 0x10);
  return;
}



// FUNCTION 14111675e FUN_14111675e body=9 status=ok
// SIG undefined FUN_14111675e(void)

void FUN_14111675e(longlong param_1)

{
  FUN_140ffd6b6(param_1 + 0x10);
  return;
}



// FUNCTION 141116768 FUN_141116768 body=9 status=ok
// SIG undefined FUN_141116768(void)

void FUN_141116768(longlong param_1)

{
  FUN_140ffdb16(param_1 + 0x10);
  return;
}



// FUNCTION 141116772 FUN_141116772 body=482 status=ok
// SIG undefined FUN_141116772(void)

void FUN_141116772(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  plVar7 = local_60;
  iVar16 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x40 + (longlong)iVar9 * 0x70);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_1411168b6;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_1411168b6:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141116956 FUN_141116956 body=312 status=ok
// SIG undefined FUN_141116956(void)

void FUN_141116956(longlong param_1,ulonglong param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)param_4;
  if (((int)param_4 < 1) && (uVar9 = 1, 0 < param_3 && (param_2 & 1) != 0)) {
    uVar1 = (**(code **)(*DAT_14c82b500 + 0x20))();
    uVar8 = 1;
    if (1 < (int)uVar1) {
      uVar8 = uVar1;
    }
    uVar1 = (param_3 + 99U) / 100;
    if (uVar1 < uVar8) {
      uVar8 = uVar1;
    }
    uVar9 = (ulonglong)uVar8;
  }
  uVar8 = (uint)uVar9;
  iVar2 = param_3 / (int)uVar8 + 1;
  iVar4 = *(int *)(param_1 + 0x408);
  *(uint *)(param_1 + 0x408) = iVar4 + uVar8;
  if ((uint)(*(int *)(param_1 + 0x40c) - iVar4) < uVar8) {
    FUN_1468b4174(param_1,iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar5 = param_1;
  }
  FUN_141116a8e((longlong)iVar4 * 0x20 + lVar5,uVar9);
  iVar4 = 0;
  lVar5 = 0xc;
  uVar6 = 0;
  do {
    lVar7 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar7 = param_1;
    }
    *(int *)(lVar7 + -0xc + lVar5) = iVar4;
    *(int *)(lVar7 + -8 + lVar5) = iVar4;
    iVar3 = param_3 - iVar2 * (uVar8 - 1);
    if (uVar6 < uVar8 - 1) {
      iVar3 = iVar2;
    }
    *(int *)(lVar7 + -4 + lVar5) = iVar3;
    iVar3 = iVar3 + iVar4 + -1;
    if (param_3 + -1 < iVar3) {
      iVar3 = param_3 + -1;
    }
    *(int *)(lVar7 + lVar5) = iVar3;
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + iVar2;
    lVar5 = lVar5 + 0x20;
  } while (uVar9 != uVar6);
  return;
}



// FUNCTION 141116a8e FUN_141116a8e body=14 status=ok
// SIG undefined FUN_141116a8e(void)

void FUN_141116a8e(void *param_1,uint param_2)

{
  memset(param_1,0,(ulonglong)param_2 << 5);
  return;
}



// FUNCTION 141116a9c FUN_141116a9c body=40 status=ok
// SIG undefined FUN_141116a9c(void)

void FUN_141116a9c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145809462(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 141116ac4 FUN_141116ac4 body=106 status=ok
// SIG undefined FUN_141116ac4(void)

void FUN_141116ac4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b5ebab0;
  lVar1 = 0xa0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0x28);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 141116b2e FUN_141116b2e body=267 status=ok
// SIG undefined FUN_141116b2e(void)

undefined8 * FUN_141116b2e(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  
  lVar2 = *param_1;
  puVar7 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
  bVar4 = (byte)DAT_14c760da4 & 0x1f;
  puVar3 = *(undefined4 **)(lVar2 + 2000);
  puVar7[2] = puVar3;
  *(undefined4 *)(puVar7 + 3) = *puVar3;
  *(int *)((longlong)puVar7 + 0x1c) = ~(-1 << bVar4);
  puVar7[4] = puVar3;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  *(undefined1 *)(puVar7 + 0x12) = 0;
  *(undefined2 *)((longlong)puVar7 + 0x91) = 0xff;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  uVar5 = DAT_14c760b60;
  *(undefined4 *)(puVar7 + 0x13) = DAT_14c760b60;
  *(undefined4 *)((longlong)puVar7 + 0x9c) = uVar5;
  DVar6 = GetCurrentThreadId();
  *(DWORD *)(puVar7 + 1) = DVar6;
  *puVar7 = &PTR_FUN_14a345bd0;
  puVar7[0x14] = lVar2;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x7a0);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(lVar2 + 0x798);
  *(uint *)(lVar2 + 0x798) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x79c) < iVar1 + 1U) {
    FUN_146319dcc((longlong *)(lVar2 + 0x790),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x790) + (longlong)iVar1 * 8) = puVar7;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return puVar7;
}



// FUNCTION 141116c40 FUN_141116c40 body=221 status=ok
// SIG undefined FUN_141116c40(void)

longlong FUN_141116c40(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacc510 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147921889;
    local_40 = FUN_1463a6c06;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"AnimNotifyState",&DAT_14cacc510,FUN_1463a6be4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacc510;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141116d24 FUN_141116d24 body=221 status=ok
// SIG undefined FUN_141116d24(void)

longlong FUN_141116d24(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb29390 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fd9db7;
    local_40 = FUN_146457d30;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraNode",&DAT_14cb29390,&DAT_147fd9db6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29390;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141116e08 FUN_141116e08 body=221 status=ok
// SIG undefined FUN_141116e08(void)

longlong FUN_141116e08(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb906b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489c8ac6;
    local_40 = &LAB_145aa5ea7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlJSEvent",&DAT_14cb906b0,FUN_146566576);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb906b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141116f4c FUN_141116f4c body=470 status=ok
// SIG undefined FUN_141116f4c(void)

void FUN_141116f4c(longlong param_1,byte param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  uVar4 = DAT_14cb1c840;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_1);
    plVar8 = local_30;
    if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar9 = local_30 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      iVar6 = (int)plVar8[1];
      do {
        plVar9 = (longlong *)0x0;
        if (iVar6 == 0) break;
        LOCK();
        iVar5 = (int)plVar8[1];
        bVar11 = iVar6 == iVar5;
        if (bVar11) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
        plVar9 = plVar8;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      if (plVar9 != (longlong *)0x0) {
        if (local_38 != 0) {
          iVar6 = *(int *)(local_38 + 0x560);
          if ((longlong)iVar6 != 0) {
            lVar2 = *(longlong *)(local_38 + 0x558);
            lVar7 = 0;
            do {
              lVar3 = *(longlong *)(lVar2 + lVar7);
              if ((*(int *)(lVar3 + 0x30) == 1) &&
                 (*(undefined4 *)(lVar3 + 0x30) = 0, *(int *)(lVar3 + 8) == 5)) {
                bVar10 = *(int *)(lVar3 + 0x28) == 0 & param_2;
                *(uint *)(lVar3 + 8) = (uint)bVar10 + (uint)bVar10 * 4 + 1;
              }
              lVar7 = lVar7 + 8;
            } while ((longlong)iVar6 * 8 != lVar7);
          }
          *(undefined1 *)(local_38 + 0x590) = 1;
        }
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111712a FUN_14111712a body=228 status=ok
// SIG undefined FUN_14111712a(void)

longlong FUN_14111712a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae4660 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147af1071;
    local_40 = &LAB_1463d2394;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Info",&DAT_14cae4660,&DAT_147af1070);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae4660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141117214 FUN_141117214 body=228 status=ok
// SIG undefined FUN_141117214(void)

longlong FUN_141117214(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8d48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_147490397;
    local_40 = FUN_14632b22b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"FieldNodeBase",&DAT_14caa8d48,&DAT_147490396);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8d48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141117300 FUN_141117300 body=228 status=ok
// SIG undefined FUN_141117300(void)

longlong FUN_141117300(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab80b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d45ea;
    local_38 = &LAB_14774327e;
    local_40 = FUN_146355bcc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/UMG",L"PanelSlot",&DAT_14cab80b0,FUN_146355baa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab80b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411173e6 FUN_1411173e6 body=277 status=ok
// SIG undefined FUN_1411173e6(void)

undefined8 FUN_1411173e6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1411174f5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1411174f5;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1411174f5:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1411174a3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1411174a3;
    }
  }
  uVar6 = 0;
LAB_1411174a3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411174fc FUN_1411174fc body=284 status=ok
// SIG undefined FUN_1411174fc(void)

void FUN_1411174fc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14cbd42a8;
  local_40 = 0xffffffff;
  FUN_140c823b2(param_1 + 0x9b,&local_58,&local_48);
  lVar2 = local_58;
  FUN_140f35564(param_1);
  local_48 = DAT_14cbd42a8;
  local_40 = 0xffffffff;
  FUN_140c823b2(param_1 + 0x9b,&local_58,&local_48);
  if ((lVar2 != local_58) && (param_1[0x4ce] != 0)) {
    FUN_145809676(param_1[0x4ce],&local_58);
    lVar2 = local_58;
    if ((longlong)local_50 != 0) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar3);
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        (**(code **)(*param_1 + 0x670))(param_1,lVar1);
        lVar3 = lVar3 + 8;
      } while ((longlong)local_50 * 8 != lVar3);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111762c FUN_14111762c body=179 status=ok
// SIG undefined FUN_14111762c(void)

void FUN_14111762c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  local_40 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_38);
  puVar2[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14ba44510;
  FUN_140dfab96(puVar2 + 3,&local_40);
  FUN_143e6b0f2(param_1,puVar2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411176e0 FUN_1411176e0 body=3611 status=ok
// SIG undefined FUN_1411176e0(void)

void FUN_1411176e0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  char param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  char *pcVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_138 [44];
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ulonglong local_100;
  longlong local_f8;
  longlong local_f0;
  char *local_e8;
  ulonglong local_e0;
  int local_d8;
  undefined1 local_d1;
  longlong local_d0;
  int local_c8 [6];
  longlong local_b0;
  char local_a0;
  longlong local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined4 uStack_74;
  int local_70;
  uint local_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar3 = FUN_1411184fc();
  if (cVar3 == '\0') {
    local_d0 = param_1;
    FUN_1447a97f4(local_c8,param_4);
    local_a0 = param_5;
    local_98 = param_2;
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      pcVar19 = (char *)*param_3;
      local_e8 = pcVar19 + (longlong)*(int *)(param_3 + 1) * 0x38;
LAB_14111777a:
      iVar5 = *(int *)(pcVar19 + 0x10);
      piVar10 = &DAT_14c948620;
      piVar14 = (int *)&DAT_14c948618;
      if (iVar5 != 0) {
        piVar10 = &DAT_14c948620;
        piVar14 = (int *)&DAT_14c948618;
        if (*(int *)(pcVar19 + 0x14) != 0) {
          piVar10 = &DAT_14c948620;
          piVar14 = (int *)&DAT_14c948618;
          if (iVar5 != DAT_14c948000) {
            piVar10 = &DAT_14c948620;
            piVar14 = (int *)&DAT_14c948618;
            if (1 < *(int *)(pcVar19 + 0x14)) {
              piVar14 = (int *)(*(longlong *)(pcVar19 + 0x28) + 0xc);
              piVar10 = (int *)(*(longlong *)(pcVar19 + 0x28) + 0x14);
            }
          }
        }
      }
      local_f8 = local_d0;
      if ((*piVar14 == *(int *)(local_d0 + 0x2c)) && (*piVar10 == *(int *)(local_d0 + 0x34))) {
LAB_1411177e6:
        cVar3 = FUN_1401144ce(pcVar19);
        iVar16 = (int)DAT_14cb7bd80;
        iVar17 = DAT_14cb7bd70;
        iVar5 = (int)DAT_14cb7bd68;
        if (cVar3 == '\0') goto LAB_141118126;
        local_10c = DAT_14cb7bd88;
        plVar7 = (longlong *)(local_f8 + 0x78);
        local_104 = DAT_14cb7bd68._4_4_;
        local_108 = DAT_14cb7bd80._4_4_;
        local_90 = DAT_14c948618;
        if (local_a0 != '\x01') {
          if (((*(int *)(pcVar19 + 0x10) == 0) || (iVar4 = *(int *)(pcVar19 + 0x14), iVar4 == 0)) ||
             (*(int *)(pcVar19 + 0x10) == DAT_14c948000)) {
LAB_141118388:
            local_88 = DAT_14c948620;
          }
          else {
            if ((iVar4 < 2) && (*(int *)(pcVar19 + 0x34) < 1)) {
              pcVar11 = pcVar19 + 0x18;
            }
            else {
              pcVar11 = *(char **)(pcVar19 + 0x28);
            }
            if ((iVar4 == 1) || (iVar4 < 3)) goto LAB_141118388;
            local_88 = *(int *)(pcVar11 + 0x20);
            local_90 = *(ulonglong *)(pcVar11 + 0x18);
          }
          uVar6 = (int)local_90;
          if (local_88 != 0) {
            uVar6 = FUN_144a78877(local_90 & 0xffffffff,local_88);
          }
          iVar4 = FUN_140502a60(plVar7,uVar6,&local_90);
          if (iVar4 != -1) {
            if (*plVar7 + (longlong)iVar4 * 0x70 != 0) {
              plVar7 = (longlong *)(*plVar7 + (longlong)iVar4 * 0x70 + 0x10);
              goto LAB_141117a00;
            }
          }
          goto LAB_141118126;
        }
        if (((*(int *)(pcVar19 + 0x10) == 0) || (iVar4 = *(int *)(pcVar19 + 0x14), iVar4 == 0)) ||
           (*(int *)(pcVar19 + 0x10) == DAT_14c948000)) {
LAB_14111836f:
          local_88 = DAT_14c948620;
        }
        else {
          if ((iVar4 < 2) && (*(int *)(pcVar19 + 0x34) < 1)) {
            pcVar11 = pcVar19 + 0x18;
          }
          else {
            pcVar11 = *(char **)(pcVar19 + 0x28);
          }
          if ((iVar4 == 1) || (iVar4 < 3)) goto LAB_14111836f;
          local_88 = *(int *)(pcVar11 + 0x20);
          local_90 = *(ulonglong *)(pcVar11 + 0x18);
        }
        uVar6 = (int)local_90;
        if (local_88 != 0) {
          uVar6 = FUN_144a78877(local_90 & 0xffffffff,local_88);
        }
        plVar7 = (longlong *)FUN_140726908(plVar7,uVar6,&local_90);
LAB_141117a00:
        if (plVar7 == (longlong *)0x0) goto LAB_141118126;
        local_90 = DAT_14c948618;
        if (local_a0 != '\x01') {
          if (((*(int *)(pcVar19 + 0x10) == 0) || (iVar4 = *(int *)(pcVar19 + 0x14), iVar4 == 0)) ||
             (*(int *)(pcVar19 + 0x10) == DAT_14c948000)) {
LAB_1411183ba:
            local_88 = DAT_14c948620;
          }
          else {
            if ((iVar4 < 2) && (*(int *)(pcVar19 + 0x34) < 1)) {
              pcVar11 = pcVar19 + 0x18;
            }
            else {
              pcVar11 = *(char **)(pcVar19 + 0x28);
            }
            if ((iVar4 == 1) || (iVar4 < 4)) goto LAB_1411183ba;
            local_88 = *(int *)(pcVar11 + 0x2c);
            local_90 = *(ulonglong *)(pcVar11 + 0x24);
          }
          uVar12 = local_90 & 0xffffffff;
          if (local_88 != 0) {
            uVar20 = FUN_144a78877(uVar12,local_88);
            uVar12 = (ulonglong)uVar20;
          }
          iVar4 = FUN_144a24328(plVar7,uVar12,&local_90);
          if (iVar4 != -1) {
            if (*plVar7 + (longlong)iVar4 * 0x68 != 0) {
              plVar7 = (longlong *)(*plVar7 + (longlong)iVar4 * 0x68 + 0x10);
              goto LAB_141117b5b;
            }
          }
          goto LAB_141118126;
        }
        if (((*(int *)(pcVar19 + 0x10) == 0) || (iVar4 = *(int *)(pcVar19 + 0x14), iVar4 == 0)) ||
           (*(int *)(pcVar19 + 0x10) == DAT_14c948000)) {
LAB_1411183a1:
          local_88 = DAT_14c948620;
        }
        else {
          if ((iVar4 < 2) && (*(int *)(pcVar19 + 0x34) < 1)) {
            pcVar11 = pcVar19 + 0x18;
          }
          else {
            pcVar11 = *(char **)(pcVar19 + 0x28);
          }
          if ((iVar4 == 1) || (iVar4 < 4)) goto LAB_1411183a1;
          local_88 = *(int *)(pcVar11 + 0x2c);
          local_90 = *(ulonglong *)(pcVar11 + 0x24);
        }
        if (local_88 != 0) {
          FUN_144a78877(local_90 & 0xffffffff,local_88);
        }
        plVar7 = (longlong *)FUN_140726d02(plVar7);
LAB_141117b5b:
        if (plVar7 == (longlong *)0x0) goto LAB_141118126;
        if (local_a0 != '\x01') {
          if (((*(int *)(pcVar19 + 0x10) == 0) || (iVar5 = *(int *)(pcVar19 + 0x14), iVar5 == 0)) ||
             (*(int *)(pcVar19 + 0x10) == DAT_14c948000)) {
LAB_1411183e9:
            local_88 = DAT_14c948620;
            local_90 = DAT_14c948618;
          }
          else {
            if ((iVar5 < 2) && (*(int *)(pcVar19 + 0x34) < 1)) {
              pcVar11 = pcVar19 + 0x18;
            }
            else {
              pcVar11 = *(char **)(pcVar19 + 0x28);
            }
            if ((iVar5 == 1) || (iVar5 < 5)) goto LAB_1411183e9;
            local_88 = *(int *)(pcVar11 + 0x38);
            local_90 = *(ulonglong *)(pcVar11 + 0x30);
          }
          uVar12 = local_90 & 0xffffffff;
          if (local_88 != 0) {
            uVar20 = FUN_144a78877(uVar12,local_88);
            uVar12 = (ulonglong)uVar20;
          }
          iVar5 = FUN_140727b76(plVar7,uVar12,&local_90);
          if (iVar5 != -1) {
            lVar18 = *plVar7 + (longlong)iVar5 * 0xa8;
            if ((lVar18 != 0) && ((longlong)iVar5 * 0xa8 + *plVar7 != -0x10)) {
              iVar5 = *(int *)(lVar18 + 0x98);
              if ((longlong)iVar5 != 0) {
                lVar8 = *(longlong *)(lVar18 + 0x90);
                uVar12 = (longlong)iVar5 * 0x30;
                uVar23 = 0;
                do {
                  if (*(int *)(lVar8 + uVar23) == local_c8[0]) {
                    iVar17 = *(int *)(lVar8 + 0x2c + uVar23);
                    if ((iVar17 == 0) ||
                       (uVar20 = *(uint *)(lVar8 + 0x28 + uVar23), (int)uVar20 < 0)) {
LAB_14111833c:
                      lVar22 = 0;
                    }
                    else {
                      lVar22 = 0;
                      if ((int)uVar20 < DAT_14c9647dc) {
                        plVar7 = (longlong *)
                                 ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                        if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar17)) ||
                           ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_14111833c;
                        lVar22 = *plVar7;
                      }
                    }
                    if (lVar22 == local_98) {
                      if (-1 < (int)(uVar23 >> 4) * -0x55555555) {
                        uVar23 = 0;
                        goto LAB_141117ee0;
                      }
                      break;
                    }
                  }
                  uVar23 = uVar23 + 0x30;
                } while (uVar12 != uVar23);
              }
            }
          }
          goto LAB_141118126;
        }
        local_d1 = 0;
        if (((*(int *)(pcVar19 + 0x10) == 0) || (iVar4 = *(int *)(pcVar19 + 0x14), iVar4 == 0)) ||
           (*(int *)(pcVar19 + 0x10) == DAT_14c948000)) {
LAB_1411183d3:
          local_d8 = DAT_14c948620;
          local_e0 = DAT_14c948618;
        }
        else {
          if ((iVar4 < 2) && (*(int *)(pcVar19 + 0x34) < 1)) {
            pcVar11 = pcVar19 + 0x18;
          }
          else {
            pcVar11 = *(char **)(pcVar19 + 0x28);
          }
          if ((iVar4 == 1) || (iVar4 < 5)) goto LAB_1411183d3;
          local_d8 = *(int *)(pcVar11 + 0x38);
          local_e0 = *(ulonglong *)(pcVar11 + 0x30);
        }
        lVar8 = FUN_14072739f(&local_e0,plVar7,&local_d1);
        lVar18 = local_98;
        if ((longlong)*(int *)(lVar8 + 0x88) != 0) {
          lVar2 = *(longlong *)(lVar8 + 0x80);
          uVar12 = (longlong)*(int *)(lVar8 + 0x88) * 0x30;
          lVar22 = lVar2 + 0x28;
          uVar23 = 0;
          do {
            if ((*(int *)(lVar2 + uVar23) == local_c8[0]) &&
               (local_100 = uVar12, local_f0 = lVar22, lVar9 = FUN_14479d2ce(lVar22 + uVar23),
               uVar12 = local_100, lVar22 = local_f0, lVar9 == lVar18)) {
              iVar4 = 0;
              uVar6 = 0;
              iVar21 = 0;
              if (-1 < (int)(uVar23 >> 4) * -0x55555555) goto LAB_141117d4e;
              break;
            }
            uVar23 = uVar23 + 0x30;
          } while (uVar12 != uVar23);
        }
        lVar18 = local_98;
        FUN_1447a97f4(&local_90,local_c8);
        iStack_64 = 0;
        if (lVar18 == 0) {
          local_68 = 0;
          iVar5 = 0;
        }
        else {
          local_68 = *(uint *)(lVar18 + 0xc);
          if ((int)local_68 < DAT_14c9647dc) {
            lVar18 = (ulonglong)((local_68 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
          }
          else {
            lVar18 = 0;
          }
          iVar5 = *(int *)(lVar18 + 0x10);
          if (*(int *)(lVar18 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar24 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar24) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar5 = *(int *)(lVar18 + 0x10);
            bVar24 = iVar5 == 0;
            if (bVar24) {
              *(int *)(lVar18 + 0x10) = iVar17;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar24) {
              iVar5 = iVar17;
            }
          }
        }
        iVar17 = *(int *)(lVar8 + 0x88);
        iStack_64 = iVar5;
        if ((longlong)iVar17 != 0) {
          lVar18 = *(longlong *)(lVar8 + 0x80);
          uVar12 = 0;
          do {
            if ((*(int *)(lVar18 + uVar12) == (int)local_90) &&
               (cVar3 = FUN_148852ed2(lVar18 + 0x28 + uVar12,&local_68), cVar3 != '\0')) {
              if ((int)(uVar12 >> 4) * -0x55555555 != -1) goto LAB_141117ce0;
              break;
            }
            uVar12 = uVar12 + 0x30;
          } while ((longlong)iVar17 * 0x30 != uVar12);
        }
        iVar5 = *(int *)(lVar8 + 0x88);
        *(uint *)(lVar8 + 0x88) = iVar5 + 1U;
        if (*(uint *)(lVar8 + 0x8c) < iVar5 + 1U) {
          FUN_14111861a((longlong *)(lVar8 + 0x80),iVar5);
        }
        lVar18 = *(longlong *)(lVar8 + 0x80);
        lVar8 = (longlong)iVar5 * 0x30;
        *(undefined8 *)(lVar18 + lVar8) = 0;
        ((undefined8 *)(lVar18 + lVar8))[1] = 0;
        *(undefined4 *)(lVar18 + 0x10 + lVar8) = 0;
        puVar15 = (undefined8 *)(lVar18 + 0x18 + lVar8);
        *puVar15 = 0;
        puVar15[1] = 0;
        FUN_1404e49fa(lVar18 + lVar8,&local_90);
        *(ulonglong *)(lVar18 + 0x28 + lVar8) = CONCAT44(iStack_64,local_68);
LAB_141117ce0:
        if (CONCAT44(uStack_74,local_78) != 0) {
          FUN_1400020a8();
        }
        FUN_140ac173c(&local_90,pcVar19);
        local_104 = local_90._4_4_;
        local_108 = local_80;
        local_10c = local_7c;
        iVar17 = local_88;
        iVar16 = local_84;
        uVar6 = uStack_74;
        iVar4 = local_70;
        iVar5 = (int)local_90;
        iVar21 = local_78;
LAB_141117d4e:
        local_100 = CONCAT44(local_100._4_4_,uVar6);
        goto LAB_14111800a;
      }
      if (*pcVar19 == '\x01') {
        piVar14 = (int *)&DAT_14c948618;
        piVar10 = &DAT_14c948620;
        if (iVar5 != 0) {
          piVar14 = (int *)&DAT_14c948618;
          piVar10 = &DAT_14c948620;
          if (*(int *)(pcVar19 + 0x14) != 0) {
            piVar14 = (int *)&DAT_14c948618;
            piVar10 = &DAT_14c948620;
            if (iVar5 != DAT_14c948000) {
              piVar14 = (int *)&DAT_14c948618;
              piVar10 = &DAT_14c948620;
              if (1 < *(int *)(pcVar19 + 0x14)) {
                piVar14 = (int *)(*(longlong *)(pcVar19 + 0x28) + 0xc);
                piVar10 = (int *)(*(longlong *)(pcVar19 + 0x28) + 0x14);
              }
            }
          }
        }
        if ((*piVar14 == (int)DAT_14cb7bb98) && (*piVar10 == DAT_14cb7bba0)) goto LAB_1411177e6;
      }
      goto LAB_141118126;
    }
LAB_141118143:
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_141117ee0:
  do {
    if (*(int *)(lVar8 + uVar23) == local_c8[0]) {
      iVar17 = *(int *)(lVar8 + 0x2c + uVar23);
      if ((iVar17 == 0) || (uVar20 = *(uint *)(lVar8 + 0x28 + uVar23), (int)uVar20 < 0)) {
LAB_141118344:
        lVar22 = 0;
      }
      else {
        lVar22 = 0;
        if ((int)uVar20 < DAT_14c9647dc) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar17)) ||
             ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_141118344;
          lVar22 = *plVar7;
        }
      }
      if (lVar22 == local_98) {
        uVar20 = (int)((longlong)uVar23 >> 4) * -0x55555555;
        if ((-1 < (int)uVar20) && ((int)uVar20 < iVar5)) {
          lVar22 = (ulonglong)(uVar20 & 0x7fffffff) * 0x30;
          if (*(longlong *)(lVar8 + 0x18 + lVar22) != 0) {
            FUN_1400020a8();
            iVar5 = *(int *)(lVar18 + 0x98);
          }
          iVar17 = ~uVar20 + iVar5;
          if (iVar17 != 0) {
            if (0 < iVar17) {
              iVar17 = 1;
            }
            memmove((void *)(lVar22 + lVar8),(void *)((longlong)(iVar5 - iVar17) * 0x30 + lVar8),
                    (longlong)iVar17 * 0x30);
            iVar5 = *(int *)(lVar18 + 0x98);
          }
          *(int *)(lVar18 + 0x98) = iVar5 + -1;
          FUN_14111857c(lVar18 + 0x90);
        }
        break;
      }
    }
    uVar23 = uVar23 + 0x30;
  } while (uVar12 != uVar23);
  FUN_140ac173c(&local_90,pcVar19);
  local_104 = local_90._4_4_;
  local_108 = local_80;
  local_10c = local_7c;
  local_100 = CONCAT44(local_100._4_4_,uStack_74);
  iVar17 = local_88;
  iVar16 = local_84;
  iVar4 = local_70;
  iVar5 = (int)local_90;
  iVar21 = local_78;
LAB_14111800a:
  lVar18 = local_f8;
  if (iVar21 != 0) {
    if (((((*(int *)(local_f8 + 0xc) != 0) && (uVar20 = *(uint *)(local_f8 + 8), -1 < (int)uVar20))
         && ((int)uVar20 < DAT_14c9647dc)) &&
        ((puVar15 = (undefined8 *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
         puVar15 != (undefined8 *)0x0 && (*(int *)(puVar15 + 2) == *(int *)(local_f8 + 0xc))))) &&
       ((*(uint *)(puVar15 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar15 + 1) & 0x10200000) == 0) {
        uVar13 = *puVar15;
      }
      else {
        uVar13 = 0;
      }
      FUN_1405f658a(uVar13);
    }
    lVar8 = *(longlong *)(lVar18 + 400);
    iVar1 = *(int *)(lVar18 + 0x198);
    lVar18 = (longlong)iVar1;
    if (lVar18 != 0) {
      uVar12 = 0;
      do {
        if (((*(int *)(lVar8 + uVar12) == iVar5) && (*(int *)(lVar8 + 8 + uVar12) == iVar17)) &&
           ((*(int *)(lVar8 + 0xc + uVar12) == iVar16 &&
            (((*(int *)(lVar8 + 0x14 + uVar12) == local_10c &&
              (*(int *)(lVar8 + 0x18 + uVar12) == iVar21)) &&
             (*(int *)(lVar8 + 0x20 + uVar12) == iVar4)))))) {
          if ((int)(uVar12 >> 2) * 0x38e38e39 != -1) goto LAB_141118126;
          break;
        }
        uVar12 = uVar12 + 0x24;
      } while (lVar18 * 0x24 != uVar12);
    }
    *(uint *)(local_f8 + 0x198) = iVar1 + 1U;
    if (*(uint *)(local_f8 + 0x19c) < iVar1 + 1U) {
      plVar7 = (longlong *)(local_f8 + 400);
      FUN_1408e8c18(plVar7,iVar1);
      lVar8 = *plVar7;
    }
    *(int *)(lVar8 + lVar18 * 0x24) = iVar5;
    *(undefined4 *)(lVar8 + 4 + lVar18 * 0x24) = local_104;
    *(int *)(lVar8 + 8 + lVar18 * 0x24) = iVar17;
    *(int *)(lVar8 + 0xc + lVar18 * 0x24) = iVar16;
    *(undefined4 *)(lVar8 + 0x10 + lVar18 * 0x24) = local_108;
    *(int *)(lVar8 + 0x14 + lVar18 * 0x24) = local_10c;
    *(int *)(lVar8 + 0x18 + lVar18 * 0x24) = iVar21;
    *(undefined4 *)(lVar8 + 0x1c + lVar18 * 0x24) = (undefined4)local_100;
    *(int *)(lVar8 + 0x20 + lVar18 * 0x24) = iVar4;
  }
LAB_141118126:
  pcVar19 = pcVar19 + 0x38;
  if (pcVar19 == local_e8) goto LAB_141118143;
  goto LAB_14111777a;
}



// FUNCTION 1411184fc FUN_1411184fc body=128 status=ok
// SIG undefined FUN_1411184fc(void)

undefined8 FUN_1411184fc(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0xc))))) &&
     ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar4;
    }
    else {
      lVar3 = 0;
    }
    if (((*(longlong *)(lVar3 + 0x30) != 0) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360) != 0)) &&
       (iVar2 = FUN_14490d72a(), iVar2 == 3)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14111857c FUN_14111857c body=158 status=ok
// SIG undefined FUN_14111857c(void)

void FUN_14111857c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x30)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x30,8);
      uVar3 = uVar3 / 0x30;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x30,8);
    }
  }
  return;
}



// FUNCTION 14111861a FUN_14111861a body=272 status=ok
// SIG undefined FUN_14111861a(void)

void FUN_14111861a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14111872a FUN_14111872a body=273 status=ok
// SIG undefined FUN_14111872a(void)

void FUN_14111872a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(uint *)(param_1 + -0x3a0) & 0x10) == 0) {
    uVar2 = FUN_141118888();
    FUN_14042b5a6(local_78,uVar2);
    FUN_14042b1ec(param_2,local_78,1);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if ((longlong)*(int *)(param_1 + 0x200) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1f8);
      lVar4 = (longlong)*(int *)(param_1 + 0x200) << 3;
      do {
        FUN_14111883c(local_78,lVar3);
        FUN_14042b1ec(param_2,local_78,1);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))();
          }
        }
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        lVar3 = lVar3 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111883c FUN_14111883c body=76 status=ok
// SIG undefined FUN_14111883c(void)

void FUN_14111883c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140789e1e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_141118879;
    }
  }
  lVar2 = 0;
LAB_141118879:
  FUN_14042b5a6(param_1,lVar2);
  return;
}



// FUNCTION 141118888 FUN_141118888 body=228 status=ok
// SIG undefined FUN_141118888(void)

longlong FUN_141118888(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba75b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148bf2783;
    local_40 = &LAB_1414a6bd2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x8e0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakBossFight",&DAT_14cba75b8,FUN_1465cc2b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba75b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111896e FUN_14111896e body=222 status=ok
// SIG undefined FUN_14111896e(void)

undefined8 * FUN_14111896e(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14abfde50;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,
                    FUN_1408a629c);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  param_1[5] = &DAT_14c952378;
  return param_1;
}



// FUNCTION 141118a4c FUN_141118a4c body=212 status=ok
// SIG undefined FUN_141118a4c(void)

undefined8 * FUN_141118a4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14abfde70;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      uVar1 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar1,FUN_14067a048);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  param_1[5] = &DAT_14c951cd0;
  return param_1;
}



// FUNCTION 141118b20 FUN_141118b20 body=118 status=ok
// SIG undefined FUN_141118b20(void)

void FUN_141118b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b53d730;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140d4e9b8(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141118b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 141118b96 FUN_141118b96 body=421 status=ok
// SIG undefined FUN_141118b96(void)

void FUN_141118b96(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_1447210f0();
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x238))) {
    lVar6 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar6 * 8);
      if (((((iVar1 != 0) &&
            (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar6 * 8), -1 < (int)uVar2)) &&
           ((int)uVar2 < DAT_14c9647dc)) &&
          ((plVar5 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar1)))) &&
         (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
          ((*plVar5 != 0 && (lVar3 = *(longlong *)(*plVar5 + 0x3e0), lVar3 != 0)))))) {
        if (DAT_14cba8288 == 0) {
          local_50 = &local_30;
          local_30 = FUN_141864c34;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1464cee30;
          local_58 = &LAB_148bfac22;
          local_60 = &LAB_140f21842;
          local_68 = &DAT_149e063b2;
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
          FUN_141118d3c(param_1,lVar3);
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(lVar4 + 0x238));
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141118d3c FUN_141118d3c body=504 status=ok
// SIG undefined FUN_141118d3c(void)

void FUN_141118d3c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  float local_9c;
  undefined1 local_98 [24];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_2 + 0x1c8);
  if (lVar2 == 0) {
    puVar7 = &DAT_14c8464e0;
    uVar9 = (undefined4)DAT_14c8464f0;
    uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar9 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
    puVar7 = (undefined8 *)(lVar2 + 0x260);
  }
  uVar4 = *puVar7;
  uVar5 = puVar7[1];
  iVar1 = *(int *)(param_1 + 0x560);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x558);
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar8) != 0) {
        FUN_141118f36();
        local_a8 = CONCAT44(uVar10,uVar9);
        plVar3 = *(longlong **)(*(longlong *)(lVar2 + lVar8) + 0x3a8);
        local_b8 = uVar4;
        uStack_b0 = uVar5;
        if (plVar3 != (longlong *)0x0) {
          cVar6 = (**(code **)(*plVar3 + 0x7c0))(plVar3,&local_b8,&local_9c,local_98);
          if (((cVar6 != '\0') && (0.0 <= local_9c)) && (local_9c <= 0.0)) {
            FUN_148d217da(param_1,*(undefined8 *)(lVar2 + lVar8),param_2);
          }
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  iVar1 = *(int *)(param_1 + 0x570);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x568);
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar8) != 0) {
        FUN_141118f36();
        local_c8 = CONCAT44(uVar10,uVar9);
        plVar3 = *(longlong **)(*(longlong *)(lVar2 + lVar8) + 0x3a8);
        local_d8 = uVar4;
        uStack_d0 = uVar5;
        if (plVar3 != (longlong *)0x0) {
          cVar6 = (**(code **)(*plVar3 + 0x7c0))(plVar3,&local_d8,&local_9c,local_98);
          if (((cVar6 != '\0') && (0.0 <= local_9c)) && (local_9c <= 0.0)) {
            FUN_145c7f2d6(param_1,*(undefined8 *)(lVar2 + lVar8),param_2);
          }
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141118f36 FUN_141118f36 body=114 status=ok
// SIG undefined FUN_141118f36(void)

void FUN_141118f36(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      (lVar2 = *(longlong *)(param_1 + 0x3a8), lVar2 != 0)) &&
     ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    bVar1 = *(byte *)(lVar2 + 0x9c);
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 8) != 0) {
        return;
      }
      if (*(int *)(lVar2 + 0x98) != 2) {
        return;
      }
    }
    else if ((bVar1 & 8) != 0) {
      return;
    }
    if ((*(longlong *)(lVar2 + 0xb0) != 0) || (lVar3 = FUN_1448abda6(lVar2), lVar3 != 0)) {
      FUN_141062a52(lVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 141118fa8 FUN_141118fa8 body=192 status=ok
// SIG undefined FUN_141118fa8(void)

ulonglong FUN_141118fa8(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x3d08);
  uVar6 = (ulonglong)(int)uVar2;
  if (0 < (longlong)uVar6) {
    pcVar5 = (char *)(*(longlong *)(param_1 + 0x3d00) + 0x1c);
    uVar7 = 0;
    do {
      if (*pcVar5 == '\0') {
        *pcVar5 = '\x01';
        uVar6 = uVar7 & 0xffffffff;
        goto LAB_14111904b;
      }
      uVar7 = uVar7 + 1;
      pcVar5 = pcVar5 + 0x48;
    } while (uVar2 != uVar7);
  }
  if (*(char *)(param_1 + -0x3a70) == '\x03') {
    plVar1 = (longlong *)(param_1 + 0x3d00);
    *(uint *)(param_1 + 0x3d08) = uVar2 + 1;
    if (*(uint *)(param_1 + 0x3d0c) < uVar2 + 1) {
      FUN_14036e94c(plVar1,uVar2);
    }
    lVar4 = uVar6 * 0x48;
    FUN_141119068(*plVar1 + lVar4,1);
    lVar3 = *plVar1;
    FUN_140705884(param_1 + 0x3bf0,lVar3 + lVar4);
    *(undefined1 *)(lVar3 + 0x1c + lVar4) = 1;
  }
  else {
    *(uint *)(param_1 + 0x3d10) = *(uint *)(param_1 + 0x3d10) | 1 << ((byte)uVar2 & 0x1f);
  }
LAB_14111904b:
  return uVar6 & 0xffffffff;
}



// FUNCTION 141119068 FUN_141119068 body=62 status=ok
// SIG undefined FUN_141119068(void)

void FUN_141119068(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0xffffffff;
    param_1[3] = 0xffffffff;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0xff;
    param_1[0xd] = 0xffffffff;
    *(undefined8 *)(param_1 + 0xe) = 0;
    param_1[0x10] = 0xffffffff;
    param_1 = param_1 + 0x12;
  }
  return;
}



// FUNCTION 1411190a6 FUN_1411190a6 body=68 status=ok
// SIG undefined FUN_1411190a6(void)

void FUN_1411190a6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xe8);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b302cf0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_1411190ea(param_2 + 6);
  return;
}



// FUNCTION 1411190ea FUN_1411190ea body=134 status=ok
// SIG undefined FUN_1411190ea(void)

undefined8 * FUN_1411190ea(undefined8 *param_1)

{
  FUN_140265f12();
  param_1[1] = &DAT_14cb83310;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b1828b0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 141119170 FUN_141119170 body=491 status=ok
// SIG undefined FUN_141119170(void)

undefined8 * FUN_141119170(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a160ed0;
  param_1[2] = &PTR_LAB_14a160ee0;
  puVar1 = (undefined8 *)param_1[0x44];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = param_1[0x4c];
  if (lVar2 != 0) {
    FUN_141119470(lVar2);
    FUN_1400020a8(lVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x45));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1411193f4(param_1 + 0x32,0);
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_14111935c(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14111935c(param_1 + 0x1d);
  FUN_1411193c3(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  FUN_141119393(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14111935c FUN_14111935c body=55 status=ok
// SIG undefined FUN_14111935c(void)

void FUN_14111935c(longlong *param_1)

{
  FUN_141119514(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141119393 FUN_141119393 body=48 status=ok
// SIG undefined FUN_141119393(void)

void FUN_141119393(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1411193c3 FUN_1411193c3 body=49 status=ok
// SIG undefined FUN_1411193c3(void)

void FUN_1411193c3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411193f4 FUN_1411193f4 body=123 status=ok
// SIG undefined FUN_1411193f4(void)

void FUN_1411193f4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 141119470 FUN_141119470 body=164 status=ok
// SIG undefined FUN_141119470(void)

void FUN_141119470(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141119514 FUN_141119514 body=560 status=ok
// SIG undefined FUN_141119514(void)

void FUN_141119514(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_78 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._4_4_ = 0;
    uVar13 = 0xffffffff;
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
    uVar13 = (uint)local_58;
    iVar10 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar9 = (longlong)iVar6 * 0x68;
      *(undefined4 *)(lVar11 + 0x58 + lVar9) = 0;
      local_74 = iVar12;
      if (*(longlong *)(lVar11 + 0x50 + lVar9) != 0) {
        FUN_1400020a8();
      }
      FUN_141119746(lVar11 + lVar9 + 0x10);
      if (*(longlong *)(lVar11 + lVar9) != 0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar8;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar10;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar13;
      iVar12 = local_74;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar10) {
          iVar3 = iVar10;
        }
        if (iVar6 <= iVar10) break;
        lVar9 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar11 == lVar9) goto LAB_1411196b1;
        }
        iVar10 = iVar10 + (int)lVar9 + 1;
        uVar13 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1411196b1:
  iVar10 = local_78;
  if (local_78 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_78);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_78) {
    FUN_14059f004(param_1,local_78);
  }
  param_1[6] = 0xffffffff;
  uVar13 = iVar10 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar13) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar13) {
      uVar5 = uVar13;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141119746 FUN_141119746 body=55 status=ok
// SIG undefined FUN_141119746(void)

void FUN_141119746(longlong *param_1)

{
  FUN_1448faf04(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141119784 FUN_141119784 body=228 status=ok
// SIG undefined FUN_141119784(void)

longlong FUN_141119784(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba4b40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148bd0341;
    local_40 = &LAB_1411611df;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2610;
    FUN_14081cfa3(L"/Script/OakGame",L"InteractiveSwitch",&DAT_14cba4b40,&DAT_148bd0340);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba4b40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111986a FUN_14111986a body=40 status=ok
// SIG undefined FUN_14111986a(void)

undefined8 FUN_14111986a(undefined8 param_1,int param_2)

{
  FUN_141119892();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141119892 FUN_141119892 body=125 status=ok
// SIG undefined FUN_141119892(void)

void FUN_141119892(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a534660;
  param_1[5] = &PTR_FUN_14a534980;
  plVar3 = (longlong *)param_1[0x31];
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 141119910 FUN_141119910 body=323 status=ok
// SIG undefined FUN_141119910(void)

undefined8 FUN_141119910(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [16];
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    lVar4 = FUN_144a7a908();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = *(longlong *)(lVar2 + 0x398);
      goto LAB_141119970;
    }
  }
  lVar4 = 0;
LAB_141119970:
  cVar3 = (**(code **)(*param_1 + 0xb18))(param_1);
  uVar6 = 0;
  if (((lVar2 != 0) && (lVar4 != 0)) && (cVar3 != '\0')) {
    iVar1 = *(int *)(lVar4 + 0x628);
    dVar7 = DAT_14c8464f0;
    if (*(longlong *)(lVar2 + 0x1c8) != 0) {
      dVar7 = *(double *)(*(longlong *)(lVar2 + 0x1c8) + 0x270);
    }
    iVar5 = 0;
    if (iVar1 < 1) {
      uVar6 = 0;
    }
    else {
      dVar7 = (double)(float)dVar7;
      uVar6 = 0;
      do {
        FUN_141119a54(lVar4,local_58,iVar5,1);
        if ((local_48 != dVar7) || (NAN(local_48) || NAN(dVar7))) {
          local_68 = 1;
          local_48 = dVar7;
          FUN_147a24efe(lVar4,iVar5,local_58,1);
          uVar6 = 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 141119a54 FUN_141119a54 body=400 status=ok
// SIG undefined FUN_141119a54(void)

void FUN_141119a54(longlong param_1,undefined1 (*param_2) [16],uint param_3,int param_4)

{
  double dVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  iVar2 = *(int *)(param_1 + 0x628);
  if (iVar2 < 1) {
    puVar10 = &DAT_14cad3298;
  }
  else {
    uVar9 = 0;
    if (((int)param_3 < iVar2) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar11 = iVar2 - 1U;
      if ((int)param_3 < (int)(iVar2 - 1U)) {
        uVar11 = param_3;
      }
      if (0 < (int)uVar11) {
        uVar9 = (ulonglong)uVar11;
      }
    }
    puVar10 = (undefined4 *)(uVar9 * 0x58 + *(longlong *)(param_1 + 0x620));
  }
  if (param_4 == 1) {
    dVar13 = *(double *)(puVar10 + 2) * *(double *)(param_1 + 0x280);
    dVar14 = *(double *)(puVar10 + 4) * *(double *)(param_1 + 0x288);
    dVar12 = *(double *)(puVar10 + 6) * *(double *)(param_1 + 0x290);
    dVar5 = *(double *)(param_1 + 0x240);
    dVar6 = *(double *)(param_1 + 0x248);
    dVar7 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar15 = dVar14 * dVar5 - dVar13 * dVar6;
    dVar16 = dVar12 * dVar6 - dVar14 * dVar7;
    dVar17 = dVar13 * dVar7 - dVar5 * dVar12;
    dVar16 = dVar16 + dVar16;
    dVar17 = dVar17 + dVar17;
    dVar15 = dVar15 + dVar15;
    dVar4 = (dVar7 * dVar16 - dVar5 * dVar15) + *(double *)(param_1 + 600) * dVar17 + dVar14 +
            *(double *)(param_1 + 0x268);
    dVar14 = *(double *)(param_1 + 0x270);
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = (dVar15 * dVar6 - dVar17 * dVar7) + dVar1 * dVar16 + dVar13 +
                   *(double *)(param_1 + 0x260);
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *param_2 = auVar3;
    *(double *)param_2[1] = dVar15 * dVar1 + dVar12 + (dVar17 * dVar5 - dVar16 * dVar6) + dVar14;
  }
  else {
    *(undefined8 *)param_2[1] = *(undefined8 *)(puVar10 + 6);
    uVar8 = *(undefined8 *)(puVar10 + 4);
    *(undefined8 *)*param_2 = *(undefined8 *)(puVar10 + 2);
    *(undefined8 *)(*param_2 + 8) = uVar8;
  }
  return;
}



// FUNCTION 141119be4 FUN_141119be4 body=1602 status=ok
// SIG undefined FUN_141119be4(void)

void FUN_141119be4(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = (undefined4 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = (undefined4 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1409e12a0;
      local_80 = 0;
      local_88 = (undefined4 *)0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = (undefined4 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = &local_68;
  local_58 = local_38;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  (**(code **)(*(longlong *)(param_1 + 0x3d0) + 0x80))(param_1 + 0x3d0,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111a228 FUN_14111a228 body=907 status=ok
// SIG undefined FUN_14111a228(void)

void FUN_14111a228(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  undefined8 local_70;
  code *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = param_1 + -0x3d0;
  cVar2 = *(char *)(param_1 + -600);
  FUN_14111a674(lVar1);
  if ((((cVar2 == '\x03') && (lVar4 = *(longlong *)(param_1 + 0xba8), lVar4 != 0)) &&
      ((*(byte *)(lVar4 + 0x65) & 2) == 0)) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
    if (*(longlong *)(param_1 + 0xde8) != 0) {
      uVar5 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(lVar4,uVar5);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if ((lVar4 != 0) && (*(longlong *)(param_1 + 0xde8) != 0)) {
          FUN_14480f766(lVar4 + 400);
        }
      }
      *(undefined8 *)(param_1 + 0xde8) = 0;
      lVar4 = *(longlong *)(param_1 + 0xba8);
    }
    FUN_14111a5b4(&local_50);
    FUN_1410ccfa4(lVar4 + 0x20e,lVar1,local_50);
  }
  *(undefined8 *)(param_1 + 0xbe0) = 0;
  if (*(char *)(param_1 + 0xc00) == '\x01') {
    *(undefined1 *)(param_1 + 0xc00) = 0;
  }
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar6 = DAT_14c950c29;
  *(longlong *)(param_1 + 0xba8) = param_2;
  if ((param_3 != 0) && ((bVar6 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0xbb0) = param_3;
  *(undefined8 *)(param_1 + 3000) = param_4;
  uVar5 = param_5[1];
  *(undefined8 *)(param_1 + 0xbc0) = *param_5;
  *(undefined8 *)(param_1 + 0xbc8) = uVar5;
  *(undefined8 *)(param_1 + 0xbd0) = param_5[2];
  if (*(longlong *)(param_1 + 0xa68) != 0) {
    bVar6 = 1;
    if (param_3 == 0 && *(longlong *)(param_1 + 0xba8) == 0) {
      if ((((*(double *)(param_1 + 0xbc0) == 0.0) && (!NAN(*(double *)(param_1 + 0xbc0)))) &&
          (*(double *)(param_1 + 0xbc8) == 0.0)) && (!NAN(*(double *)(param_1 + 0xbc8)))) {
        bVar6 = -(*(double *)(param_1 + 0xbd0) != 0.0) & 1;
      }
    }
    FUN_140478a46(*(longlong *)(param_1 + 0xa68) + 0x3a0,bVar6);
  }
  if ((cVar2 == '\x03') && (lVar4 = *(longlong *)(param_1 + 0xba8), lVar4 != 0)) {
    if (DAT_14cb56270 == 0) {
      local_90 = &local_68;
      local_68 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_1427b09ee;
      local_98 = &LAB_148630fef;
      local_a0 = FUN_1464b6a91;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10004001;
      local_c0 = 8;
      local_c8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar3 = (longlong *)FUN_144718840(lVar4,DAT_14cb56270);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (lVar4 != 0) {
        local_68 = (code *)&LAB_1459515ea;
        local_60 = 0;
        FUN_14111ac76(lVar4 + 400,&local_58,lVar1);
        *(undefined8 *)(param_1 + 0xde8) = local_58;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0xba8);
    FUN_14111a5b4(&local_70);
    FUN_14111aa78(lVar4 + 0x20e,lVar1,local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111a5b4 FUN_14111a5b4 body=190 status=ok
// SIG undefined FUN_14111a5b4(void)

undefined8 * FUN_14111a5b4(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb852b4) {
    FUN_144b3d300(&DAT_14cb852b4);
    if (DAT_14cb852b4 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"stroyed",8);
      builtin_wcsncpy(local_48 + 8,L"TargetDe",8);
      builtin_wcsncpy(local_48,L"OnHoming",8);
      FUN_1446f470e(&DAT_14cb852ac,local_48,1);
      _Init_thread_footer(&DAT_14cb852b4);
    }
  }
  *param_1 = DAT_14cb852ac;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111a674 FUN_14111a674 body=637 status=ok
// SIG undefined FUN_14111a674(void)

void FUN_14111a674(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) goto LAB_14111a762;
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_50 = &local_28;
      local_28 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b47bc4;
      local_58 = &LAB_1478989f1;
      local_60 = &LAB_146391124;
      local_68 = L"Engine";
      local_70 = 0x10000000000;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      lVar2 = *(longlong *)(param_1 + 0x1c8);
      if (lVar2 == 0) goto LAB_14111a6ec;
    }
    if ((((DAT_14cac6e60 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
      FUN_140b51838(lVar2,param_2,0);
    }
  }
LAB_14111a6ec:
  lVar2 = *(longlong *)(param_2 + 0x1c8);
  if (lVar2 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_50 = &local_28;
      local_28 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b47bc4;
      local_58 = &LAB_1478989f1;
      local_60 = &LAB_146391124;
      local_68 = L"Engine";
      local_70 = 0x10000000000;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
      FUN_140b51838(lVar2,param_1,0);
    }
  }
  local_30 = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  local_28 = (code *)&local_30;
  FUN_14111a8f2(param_1 + 0x1488);
LAB_14111a762:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111a8f2 FUN_14111a8f2 body=390 status=ok
// SIG undefined FUN_14111a8f2(void)

int FUN_14111a8f2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar4 = *(longlong *)*param_2;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    iVar7 = 0;
    bVar8 = *plVar1 == lVar4;
    iVar10 = 0;
    do {
      lVar9 = (longlong)iVar10;
      iVar11 = iVar10;
      lVar4 = lVar9;
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar5) {
        iVar3 = iVar5;
      }
      do {
        lVar4 = lVar4 + 1;
        iVar12 = iVar3;
        if (lVar6 <= lVar4) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar11;
      } while (bVar8 == (plVar1[lVar4] == lVar2));
      if (bVar8 == false) {
        if (iVar7 != iVar10) {
          memmove(plVar1 + iVar7,plVar1 + lVar9,(longlong)(iVar12 - iVar10) << 3);
        }
        iVar7 = iVar7 + (iVar12 - iVar10);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar10 = iVar12;
    } while (lVar4 < lVar6);
    *(int *)(param_1 + 1) = iVar7;
    iVar5 = iVar5 - iVar7;
  }
  return iVar5;
}



// FUNCTION 14111aa78 FUN_14111aa78 body=389 status=ok
// SIG undefined FUN_14111aa78(void)

void FUN_14111aa78(byte *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar3 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_3,1);
    }
  }
  FUN_14111abfe(param_1,&local_50);
  local_48 = (ulonglong)uVar7 | uVar5 << 0x20;
  local_40 = param_3;
  bVar2 = FUN_140a28ca8(param_1 + -0x20e,local_50);
  *param_1 = *param_1 | bVar2;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111abfe FUN_14111abfe body=120 status=ok
// SIG undefined FUN_14111abfe(void)

undefined8 * FUN_14111abfe(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9fa0) {
    FUN_144b3d300(&DAT_14cac9fa0);
    if (DAT_14cac9fa0 == -1) {
      FUN_1446ddc76(&DAT_14cac9f98,"OnDestroyed",1);
      _Init_thread_footer(&DAT_14cac9fa0);
    }
  }
  *param_2 = DAT_14cac9f98;
  return param_2;
}



// FUNCTION 14111ac76 FUN_14111ac76 body=772 status=ok
// SIG undefined FUN_14111ac76(void)

undefined8 * FUN_14111ac76(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b4226d0;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_14111ae2a;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14111ae14;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_14111ae14:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14111ae2a:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14111af7c FUN_14111af7c body=88 status=ok
// SIG undefined FUN_14111af7c(void)

undefined8 * FUN_14111af7c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae86c10;
  FUN_14111afd4(param_1[0x7c],*(undefined4 *)(param_1 + 0x7d));
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  FUN_1402d9b92(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14111afd4 FUN_14111afd4 body=47 status=ok
// SIG undefined FUN_14111afd4(void)

void FUN_14111afd4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14111b004 FUN_14111b004 body=40 status=ok
// SIG undefined FUN_14111b004(void)

undefined8 FUN_14111b004(undefined8 param_1,int param_2)

{
  FUN_14111b02c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14111b02c FUN_14111b02c body=225 status=ok
// SIG undefined FUN_14111b02c(void)

void FUN_14111b02c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6aab70;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14111b10e FUN_14111b10e body=9 status=ok
// SIG undefined FUN_14111b10e(void)

void FUN_14111b10e(longlong param_1)

{
  FUN_14111b118(param_1 + 0x10);
  return;
}



// FUNCTION 14111b118 FUN_14111b118 body=192 status=ok
// SIG undefined FUN_14111b118(void)

void FUN_14111b118(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14affef30;
  lVar3 = param_1[0xd];
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_140e74610(lVar3 + 8);
    FUN_1400020a8(lVar3);
    param_1[0xd] = 0;
  }
  FUN_141870262(param_1);
  plVar4 = (longlong *)param_1[0xc];
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
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ab50b00;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014111b1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14111b1d8 FUN_14111b1d8 body=151 status=ok
// SIG undefined FUN_14111b1d8(void)

void FUN_14111b1d8(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14581b476(iVar2,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = piVar1[4];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_14111b1fc;
    }
  }
  uVar6 = 0;
LAB_14111b1fc:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14111b270 FUN_14111b270 body=476 status=ok
// SIG undefined FUN_14111b270(void)

int * FUN_14111b270(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14111b44c FUN_14111b44c body=637 status=ok
// SIG undefined FUN_14111b44c(void)

void FUN_14111b44c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14111b4af;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_14111b4af:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x18);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 14111b6ca FUN_14111b6ca body=228 status=ok
// SIG undefined FUN_14111b6ca(void)

void FUN_14111b6ca(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"SHIFT",1);
  FUN_14111b7b0(param_1);
  local_20 = local_40;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      iVar5 = 0;
      do {
        iVar3 = (**(code **)(*local_38 + 0x138))(local_38,iVar5);
        if (iVar3 == 2) {
          FUN_14580a5c0(param_1,iVar5);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
    }
  }
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111b7b0 FUN_14111b7b0 body=132 status=ok
// SIG undefined FUN_14111b7b0(void)

undefined8 FUN_14111b7b0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  cVar2 = FUN_14111b834((uint *)(param_1 + 0x28),0);
  if (cVar2 != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14111b811;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(param_1 + 0x2c) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))
       ) {
      lVar3 = *plVar4;
      goto LAB_14111b811;
    }
  }
  lVar3 = 0;
LAB_14111b811:
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
  }
  return uVar5;
}



// FUNCTION 14111b834 FUN_14111b834 body=70 status=ok
// SIG undefined FUN_14111b834(void)

bool FUN_14111b834(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 14111b87a FUN_14111b87a body=91 status=ok
// SIG undefined FUN_14111b87a(void)

void FUN_14111b87a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14111b8d6 FUN_14111b8d6 body=267 status=ok
// SIG undefined FUN_14111b8d6(void)

void FUN_14111b8d6(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  uint *local_40;
  int *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_2 != 0) && (*(char *)(param_1 + 0x5d) != '\0')) &&
     (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0)) {
    local_44 = 0;
    local_48 = *(uint *)(param_2 + 0xc);
    if ((int)local_48 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_48 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar1 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar2 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar2);
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar3 + 0x10) = iVar2;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar2;
      }
    }
    local_40 = &local_48;
    local_44 = iVar1;
    local_38 = param_3;
    FUN_14111b9e2(param_1 + 0x110,local_2c,&local_40,0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111b9e2 FUN_14111b9e2 body=596 status=ok
// SIG undefined FUN_14111b9e2(void)

int * FUN_14111b9e2(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_1405b363e(param_1,iVar18);
    }
    lVar19 = (longlong)iVar18;
    iVar13 = FUN_144a54ea4(param_1 + 2,1);
    plVar16 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar16 = param_1 + 2;
    }
    iVar15 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar15 = iVar13;
    }
    bVar7 = (byte)iVar13 & 0x1f;
    puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar19 = (longlong)iVar18;
    iVar13 = *(int *)(*param_1 + 4 + lVar19 * 0x20);
    *(int *)(param_1 + 6) = iVar13;
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x20) = 0xffffffff;
    }
  }
  plVar16 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar16 = (longlong *)param_1[4];
  }
  iVar13 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar13 = iVar18;
  }
  puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar13 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
  lVar4 = *param_1;
  lVar19 = lVar19 * 0x20;
  puVar2 = (undefined4 *)(lVar4 + lVar19);
  puVar5 = (undefined4 *)param_3[1];
  uVar6 = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar4 + lVar19) = uVar6;
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  puVar3 = (undefined4 *)(lVar4 + 8 + lVar19);
  *puVar3 = *puVar5;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  *(undefined4 *)(lVar4 + 0x18 + lVar19) = 0xffffffff;
  uVar20 = (uint)((ulonglong)uVar6 >> 0x20) ^ (uint)uVar6;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_50 = uVar6;
    iVar13 = FUN_14111bcac(param_1,uVar20);
    if (iVar13 != -1) {
      lVar19 = *param_1;
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      *(undefined8 *)(lVar19 + 0x10 + (longlong)iVar13 * 0x20) = *(undefined8 *)(puVar2 + 4);
      puVar3 = (undefined4 *)(lVar19 + (longlong)iVar13 * 0x20);
      *puVar3 = uVar8;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      FUN_14111bc38(param_1,iVar18);
      cVar12 = '\x01';
      iVar18 = iVar13;
      goto LAB_14111baf1;
    }
  }
  cVar12 = '\0';
LAB_14111baf1:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar12;
  }
  if (cVar12 == '\0') {
    uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar14) {
      uVar17 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar14 < 1) || (iVar13 <= (int)param_1[9])) {
      uVar20 = (int)param_1[9] - 1U & uVar20;
      puVar2[7] = uVar20;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = param_1 + 7;
      }
      puVar2[6] = *(undefined4 *)
                   ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar20) * 4
                   );
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = param_1 + 7;
      }
      *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar20) * 4) =
           iVar18;
    }
    else {
      *(int *)(param_1 + 9) = iVar13;
      FUN_14580ad46(param_1);
    }
  }
  *param_2 = iVar18;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111bc38 FUN_14111bc38 body=116 status=ok
// SIG undefined FUN_14111bc38(void)

void FUN_14111bc38(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14111bcac FUN_14111bcac body=180 status=ok
// SIG undefined FUN_14111bcac(void)

int FUN_14111bcac(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_14472ecf8(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14111bd3a;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14111bd3a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111bd62 FUN_14111bd62 body=191 status=ok
// SIG undefined FUN_14111bd62(void)

longlong FUN_14111bd62(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14111be22();
  lVar3 = *param_1;
  if (DAT_14cb81640 != DAT_14cb8166c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb81670;
    if (DAT_14cb81678 != (undefined *)0x0) {
      puVar7 = DAT_14cb81678;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb81680 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb81638 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb81630;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14111be22 FUN_14111be22 body=152 status=ok
// SIG undefined FUN_14111be22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14111be22(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb81688) {
    FUN_144b3d300(&DAT_14cb81688);
    if (DAT_14cb81688 == -1) {
      DAT_14cb81658 = 0;
      DAT_14cb81660 = 0;
      DAT_14cb81638 = 0;
      _DAT_14cb81640 = 0;
      _DAT_14cb81664 = 0xffffffff00000080;
      DAT_14cb8166c = 0;
      DAT_14cb81678 = 0;
      DAT_14cb81680 = 0;
      atexit(FUN_143d90fa4);
      _Init_thread_footer(&DAT_14cb81688);
      return;
    }
  }
  return;
}



// FUNCTION 14111beba FUN_14111beba body=77 status=ok
// SIG undefined FUN_14111beba(void)

void FUN_14111beba(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x70);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14111bf08 FUN_14111bf08 body=117 status=ok
// SIG undefined FUN_14111bf08(void)

void FUN_14111bf08(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14111bf7d(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14111bf7d FUN_14111bf7d body=45 status=ok
// SIG undefined FUN_14111bf7d(void)

void FUN_14111bf7d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14111bfaa FUN_14111bfaa body=398 status=ok
// SIG undefined FUN_14111bfaa(void)

void FUN_14111bfaa(longlong *param_1,char param_2,undefined4 param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [37];
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *(byte *)(param_1 + 0x17b);
  if ((int)param_1[0x17e] <= (int)(uint)bVar1) goto LAB_14111c0c1;
  plVar2 = *(longlong **)(param_1[0x17d] + 0x28 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
  if (plVar2 == (longlong *)0x0) goto LAB_14111c0c1;
  if (param_2 == '\x01' && (*(byte *)(param_1 + 0x172) & 8) != 0) {
    if (((*(byte *)(param_1 + 0x172) & 2) != 0) && (*(char *)((longlong)param_1 + 0xb91) != '\0')) {
      FUN_145784dac(param_1);
    }
LAB_14111c08b:
    (**(code **)(*plVar2 + 0x2d0))(plVar2,param_3);
    if ((longlong *)param_1[0x120] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x120] + 0x78))();
    }
    param_1 = param_1 + 0x14c;
    puVar3 = &local_23;
  }
  else {
    if (param_2 == '\0') {
      (**(code **)(*plVar2 + 0x2e8))(plVar2);
      (**(code **)(*param_1 + 0x8a8))(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    if (param_2 != '\x02') {
      if (param_2 != '\x01') {
        (**(code **)(*plVar2 + 0x2e0))(plVar2,param_3);
        local_21 = (char)param_3;
        FUN_1447cd2ec(param_1 + 0x150);
        if (param_1[0x120] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
        }
        goto LAB_14111c0c1;
      }
      goto LAB_14111c08b;
    }
    (**(code **)(*plVar2 + 0x2d8))(plVar2,param_3);
    if ((longlong *)param_1[0x120] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x120] + 0x80))();
    }
    param_1 = param_1 + 0x14e;
    puVar3 = &local_22;
  }
  *puVar3 = (char)param_3;
  FUN_1447cd2ec(param_1);
LAB_14111c0c1:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


