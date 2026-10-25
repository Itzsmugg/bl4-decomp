// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1450d2ec0 FUN_1450d2ec0 body=177 status=ok
// SIG undefined FUN_1450d2ec0(void)

CAkEmitter * FUN_1450d2ec0(CAkEmitter *param_1,uint param_2)

{
  CAkEmitter *this;
  longlong lVar1;
  
  if ((param_2 & 2) != 0) {
    lVar1 = *(longlong *)(param_1 + -0x10);
    this = param_1 + lVar1 * 0x80;
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      this = this + -0x80;
      CAkEmitter::~CAkEmitter(this);
    }
    if ((param_2 & 1) != 0) {
      thunk_FUN_1400020a8(param_1 + -0x10,*(longlong *)(param_1 + -0x10) * 0x80 + 0x10);
    }
    return param_1 + -0x10;
  }
  CAkEmitter::~CAkEmitter(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1450d2f80 FUN_1450d2f80 body=125 status=ok
// SIG undefined FUN_1450d2f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450d2f80(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149c27d80;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c79c330) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar2 = DAT_14c79c330;
  }
  DAT_14c79c330 = puVar2;
  if (param_1 == DAT_14c79c328) {
    DAT_14c79c328 = puVar1;
  }
  _DAT_14c79c320 = _DAT_14c79c320 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1450d3000 FUN_1450d3000 body=52 status=ok
// SIG undefined FUN_1450d3000(void)

undefined8 FUN_1450d3000(undefined8 param_1,ulonglong param_2)

{
  FUN_14539e8d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1450d3040 FUN_1450d3040 body=285 status=ok
// SIG undefined FUN_1450d3040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1450d3040(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 == (longlong *)0x0) {
    plVar3 = AK::MemoryMgr::Malloc(4,0x50);
    plVar4 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[9] = 0;
      plVar3[1] = 0;
      *plVar3 = (longlong)&PTR_FUN_149c27d80;
      plVar3[3] = (longlong)DAT_14c79c328;
      plVar1 = plVar3;
      if (DAT_14c79c330 != (longlong *)0x0) {
        DAT_14c79c328[2] = (longlong)plVar3;
        plVar1 = DAT_14c79c330;
      }
      DAT_14c79c330 = plVar1;
      _DAT_14c79c320 = _DAT_14c79c320 + 1;
      DAT_14c79c328 = plVar3;
      *plVar3 = (longlong)&PTR_FUN_149c27d90;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      *(undefined2 *)(plVar3 + 9) = 0;
      *(undefined1 *)((longlong)plVar3 + 0x4a) = 1;
      *(longlong **)(param_1 + 0x18) = plVar3;
      plVar3[1] = param_1;
      iVar2 = (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_1 + 0x58));
      if (iVar2 == 1) {
        return plVar3;
      }
      (**(code **)*plVar3)(plVar3,0);
      AK::MemoryMgr::Free(4,plVar3);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return plVar4;
}



// FUNCTION 1450d3160 FUN_1450d3160 body=230 status=ok
// SIG undefined FUN_1450d3160(void)

void FUN_1450d3160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1 + 0xd;
  if ((void *)*puVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    AK::MemoryMgr::Free(0,(void *)*puVar1);
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  uVar2 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  uVar2 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  uVar2 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar2;
  uVar2 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar2;
  param_1[0x18] = param_2[0x18];
  *puVar1 = 0;
  param_1[0xe] = 0;
  *puVar1 = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 1450d3260 FUN_1450d3260 body=33 status=ok
// SIG undefined FUN_1450d3260(void)

undefined8 FUN_1450d3260(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450d3290 FUN_1450d3290 body=287 status=ok
// SIG undefined FUN_1450d3290(void)

undefined8 FUN_1450d3290(longlong *param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  byte *pbVar5;
  size_t _Size;
  uint uVar6;
  
  pbVar1 = (byte *)*param_1;
  _Size = 0;
  if (pbVar1 != (byte *)0x0) {
    sVar3 = _Size;
    do {
      uVar6 = (int)sVar3 + 1;
      if (pbVar1[uVar6] == param_2) {
        pbVar5 = pbVar1 + sVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        if (pbVar5 != (byte *)0x0) goto LAB_1450d3389;
        if (pbVar1 == (byte *)0x0) goto LAB_1450d32fc;
        break;
      }
      sVar3 = (ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
    _Size = (size_t)*pbVar1;
  }
LAB_1450d32fc:
  iVar2 = (int)_Size;
  uVar6 = iVar2 + 5;
  pcVar4 = AK::MemoryMgr::Malloc(0,(ulonglong)((uVar6 & 0xfffffffc) + 4 + iVar2 * 4));
  if (pcVar4 != (char *)0x0) {
    if (*param_1 != 0) {
      memcpy(pcVar4 + 1,(void *)(*param_1 + 1),_Size);
      memcpy(pcVar4 + ((ulonglong)uVar6 & 0xfffffffc),
             (void *)(((ulonglong)(iVar2 + 4) & 0xfffffffc) + *param_1),_Size * 4);
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
    pcVar4[iVar2 + 1] = param_2;
    *pcVar4 = (char)_Size + '\x01';
    *param_1 = (longlong)pcVar4;
    pbVar5 = (byte *)(pcVar4 + _Size * 4 + ((ulonglong)uVar6 & 0xfffffffc));
    if (pbVar5 != (byte *)0x0) {
LAB_1450d3389:
      *(undefined4 *)pbVar5 = param_3;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1450d33b0 FUN_1450d33b0 body=258 status=ok
// SIG undefined FUN_1450d33b0(void)

undefined8 FUN_1450d33b0(void *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  int iVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  pvVar3 = *(void **)((longlong)param_1 + 8);
  uVar2 = *(uint *)((longlong)param_1 + 0x10);
  iVar7 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar7 = 1;
  }
  _Var6 = (ulonglong)(iVar7 + uVar1) << 3;
  pvVar4 = param_1;
  if (pvVar3 == (void *)0x0) {
    if (8 < _Var6) {
      pvVar4 = AK::MemoryMgr::Malign(0,_Var6,1);
    }
    if (pvVar4 != (void *)0x0) {
      if ((*(void **)((longlong)param_1 + 8) != (void *)0x0) &&
         (*(void **)((longlong)param_1 + 8) != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) =
                 *(undefined8 *)(*(longlong *)((longlong)param_1 + 8) + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        if (param_1 != *(void **)((longlong)param_1 + 8)) {
          AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 8));
        }
      }
      goto LAB_1450d3494;
    }
  }
  else {
    if (8 < _Var6) {
      if (param_1 == pvVar3) {
        pvVar4 = AK::MemoryMgr::Malign(0,_Var6,1);
        if (pvVar4 == (void *)0x0) {
          return 0;
        }
        memcpy(pvVar4,param_1,(ulonglong)(uVar2 * 8));
        goto LAB_1450d3494;
      }
      pvVar4 = AK::MemoryMgr::ReallocAligned(0,pvVar3,_Var6,1);
    }
    if (pvVar4 != (void *)0x0) {
LAB_1450d3494:
      *(void **)((longlong)param_1 + 8) = pvVar4;
      *(uint *)((longlong)param_1 + 0x14) = iVar7 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450d34c0 FUN_1450d34c0 body=186 status=ok
// SIG undefined FUN_1450d34c0(void)

undefined8 FUN_1450d34c0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450d355d;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450d355d:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450d3580 FUN_1450d3580 body=250 status=ok
// SIG undefined FUN_1450d3580(void)

longlong FUN_1450d3580(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  void *_Src;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_res10 [8];
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  lVar3 = FUN_1450d3b20(local_28,&local_28,local_res10);
  uVar4 = *(uint *)(param_1 + 1);
  puVar1 = (uint *)(param_1 + 1);
  if (lVar3 != 0) {
    uVar5 = lVar3 - *param_1 >> 3;
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar2 = FUN_1450d34c0(param_1), cVar2 != '\0')) &&
       (uVar4 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar4 = (uint)uVar5;
      lVar3 = (uVar5 & 0xffffffff) * 8;
      _Src = (void *)(*param_1 + lVar3);
      if (uVar4 < *puVar1) {
        memmove((void *)((longlong)_Src + 8),_Src,(ulonglong)((*puVar1 - uVar4) * 8));
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      lVar3 = *param_1 + lVar3;
    }
    else {
      lVar3 = 0;
    }
    return lVar3;
  }
  if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
      (cVar2 = FUN_1450d34c0(param_1), cVar2 != '\0')) &&
     (uVar4 < *(uint *)((longlong)param_1 + 0xc))) {
    uVar4 = *puVar1;
    *puVar1 = uVar4 + 1;
    return *param_1 + (ulonglong)uVar4 * 8;
  }
  return 0;
}



// FUNCTION 1450d3680 FUN_1450d3680 body=686 status=ok
// SIG undefined FUN_1450d3680(void)

void FUN_1450d3680(longlong *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  char local_res10 [8];
  undefined8 local_38;
  float local_30;
  
  local_38 = *param_2;
  local_30 = *(float *)(param_2 + 1);
  plVar8 = (longlong *)FUN_1450d3b20(local_38,&local_38,local_res10);
  if (local_res10[0] == '\0') {
    return;
  }
  pfVar1 = param_3 + 2;
  uVar15 = (int)param_1[1] - 1;
  uVar16 = (ulonglong)uVar15;
  lVar6 = *param_1;
  uVar14 = (longlong)plVar8 - lVar6 >> 3;
  uVar13 = (uint)uVar14;
  if (uVar13 != 0) {
    fVar3 = *param_3;
    lVar9 = *(longlong *)(lVar6 + (ulonglong)(uVar13 - 1) * 8);
    uVar10 = (ulonglong)(uVar13 - 1);
    fVar4 = *(float *)(lVar9 + 800);
    if (fVar3 == fVar4) {
      fVar4 = *(float *)(lVar9 + 0x328);
      fVar5 = *pfVar1;
      if (*(char *)((longlong)param_1 + 0x12) == '\0') {
        bVar18 = (uint)fVar5 < (uint)fVar4;
        bVar17 = false;
        if (fVar5 == fVar4) {
          bVar18 = (uint)param_3[1] < (uint)*(float *)(lVar9 + 0x324);
          bVar17 = param_3[1] == *(float *)(lVar9 + 0x324);
        }
        goto LAB_1450d3747;
      }
      bVar17 = (uint)fVar5 < (uint)fVar4;
      if (fVar5 == fVar4) {
        bVar17 = (uint)param_3[1] < (uint)*(float *)(lVar9 + 0x324);
      }
    }
    else {
      bVar17 = fVar3 == fVar4;
      bVar18 = fVar3 < fVar4;
LAB_1450d3747:
      bVar17 = !bVar18 && !bVar17;
    }
    if (bVar17) {
      if (uVar13 < 2) goto LAB_1450d37b9;
      lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar13 - 2) * 8);
      fVar4 = *(float *)(lVar7 + 800);
      if (fVar4 == fVar3) {
        fVar3 = *(float *)(lVar7 + 0x328);
        fVar4 = *pfVar1;
        if (*(char *)((longlong)param_1 + 0x12) == '\0') {
          bVar18 = (uint)fVar3 < (uint)fVar4;
          bVar17 = false;
          if (fVar3 == fVar4) {
            bVar18 = (uint)*(float *)(lVar7 + 0x324) < (uint)param_3[1];
            bVar17 = *(float *)(lVar7 + 0x324) == param_3[1];
          }
          goto LAB_1450d37ae;
        }
        bVar17 = (uint)fVar3 < (uint)fVar4;
        if (fVar3 == fVar4) {
          bVar17 = (uint)*(float *)(lVar7 + 0x324) < (uint)param_3[1];
        }
      }
      else {
        bVar17 = fVar4 == fVar3;
        bVar18 = fVar4 < fVar3;
LAB_1450d37ae:
        bVar17 = !bVar18 && !bVar17;
      }
      if (bVar17) goto LAB_1450d37b9;
      goto LAB_1450d38a3;
    }
  }
  if (uVar15 <= uVar13) {
    return;
  }
  fVar3 = *param_3;
  lVar9 = *(longlong *)(lVar6 + (ulonglong)(uVar13 + 1) * 8);
  uVar10 = (ulonglong)(uVar13 + 1);
  fVar4 = *(float *)(lVar9 + 800);
  if (fVar4 == fVar3) {
    fVar4 = *(float *)(lVar9 + 0x328);
    fVar5 = *pfVar1;
    if (*(char *)((longlong)param_1 + 0x12) == '\0') {
      bVar18 = (uint)fVar4 < (uint)fVar5;
      bVar17 = false;
      if (fVar4 == fVar5) {
        bVar18 = (uint)*(float *)(lVar9 + 0x324) < (uint)param_3[1];
        bVar17 = *(float *)(lVar9 + 0x324) == param_3[1];
      }
      goto LAB_1450d383b;
    }
    bVar17 = (uint)fVar4 < (uint)fVar5;
    if (fVar4 == fVar5) {
      bVar17 = (uint)*(float *)(lVar9 + 0x324) < (uint)param_3[1];
    }
  }
  else {
    bVar17 = fVar4 == fVar3;
    bVar18 = fVar4 < fVar3;
LAB_1450d383b:
    bVar17 = !bVar18 && !bVar17;
  }
  if (!bVar17) {
    return;
  }
  if ((int)param_1[1] - 2U <= uVar13) goto LAB_1450d37b9;
  lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar13 + 2) * 8);
  fVar4 = *(float *)(lVar7 + 800);
  if (fVar3 == fVar4) {
    fVar3 = *(float *)(lVar7 + 0x328);
    fVar4 = param_3[2];
    if (*(char *)((longlong)param_1 + 0x12) == '\0') {
      bVar18 = (uint)fVar4 < (uint)fVar3;
      bVar17 = false;
      if (fVar4 == fVar3) {
        bVar18 = (uint)param_3[1] < (uint)*(float *)(lVar7 + 0x324);
        bVar17 = param_3[1] == *(float *)(lVar7 + 0x324);
      }
      goto LAB_1450d3898;
    }
    bVar17 = (uint)fVar4 < (uint)fVar3;
    if (fVar4 == fVar3) {
      bVar17 = (uint)param_3[1] < (uint)*(float *)(lVar7 + 0x324);
    }
  }
  else {
    bVar17 = fVar3 == fVar4;
    bVar18 = fVar3 < fVar4;
LAB_1450d3898:
    bVar17 = !bVar18 && !bVar17;
  }
  if (!bVar17) {
LAB_1450d38a3:
    local_38 = *(undefined8 *)param_3;
    local_30 = param_3[2];
    lVar9 = FUN_1450d3b20(param_1,&local_38,local_res10);
    if (lVar9 != 0) {
      uVar10 = lVar9 - lVar6 >> 3;
      uVar15 = (uint)uVar10;
      uVar16 = (ulonglong)(uVar15 - 1);
      if (uVar15 <= uVar13) {
        uVar16 = uVar10 & 0xffffffff;
      }
    }
    puVar2 = (undefined8 *)(lVar6 + uVar16 * 8);
    puVar12 = (undefined8 *)(lVar6 + (uVar14 & 0xffffffff) * 8);
    if (puVar12 != puVar2) {
      if ((uint)uVar16 < uVar13) {
        do {
          puVar11 = puVar12 + -1;
          *puVar12 = puVar12[-1];
          puVar12 = puVar11;
        } while (puVar11 != puVar2);
        *puVar2 = *param_4;
        return;
      }
      do {
        puVar11 = puVar12 + 1;
        *puVar12 = puVar12[1];
        puVar12 = puVar11;
      } while (puVar11 != puVar2);
    }
    *puVar2 = *param_4;
    return;
  }
LAB_1450d37b9:
  *(longlong *)(lVar6 + uVar10 * 8) = *plVar8;
  *plVar8 = lVar9;
  return;
}



// FUNCTION 1450d3930 FUN_1450d3930 body=488 status=ok
// SIG undefined FUN_1450d3930(void)

void FUN_1450d3930(longlong *param_1)

{
  void *_Src;
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  float local_48;
  uint uStack_44;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar4 = *param_1;
    *(undefined4 *)(param_1 + 1) = 0;
    if (0 < iVar2) {
      lVar12 = 0;
      do {
        lVar5 = *(longlong *)(lVar4 + lVar12 * 8);
        iVar17 = 0;
        uVar16 = *(uint *)(param_1 + 1);
        uVar3 = *(uint *)(lVar5 + 0x328);
        if (uVar16 != 0) {
          lVar18 = *param_1;
          uStack_44 = (uint)((ulonglong)*(undefined8 *)(lVar5 + 800) >> 0x20);
          local_48 = (float)*(undefined8 *)(lVar5 + 800);
          iVar17 = 0;
          do {
            iVar13 = (uVar16 >> 1) + iVar17;
            lVar14 = lVar18 + (longlong)iVar13 * 8;
            lVar6 = *(longlong *)(lVar18 + (longlong)iVar13 * 8);
            uVar1 = *(undefined8 *)(lVar6 + 800);
            uVar9 = *(uint *)(lVar6 + 0x328);
            fVar11 = (float)uVar1;
            if (fVar11 == local_48) {
              uVar8 = (uint)((ulonglong)uVar1 >> 0x20);
              if ((uVar8 == uStack_44) && (uVar9 == uVar3)) goto LAB_1450d3a60;
              if (fVar11 != local_48) goto LAB_1450d3a30;
              if (*(char *)((longlong)param_1 + 0x12) == '\0') {
                bVar20 = uVar9 < uVar3;
                bVar19 = false;
                if (uVar9 == uVar3) {
                  bVar20 = uVar8 < uStack_44;
                  bVar19 = uVar8 == uStack_44;
                }
                goto LAB_1450d3a33;
              }
              bVar19 = uVar9 < uVar3;
              if (uVar9 == uVar3) {
                bVar19 = uVar8 < uStack_44;
              }
            }
            else {
LAB_1450d3a30:
              bVar19 = fVar11 == local_48;
              bVar20 = fVar11 < local_48;
LAB_1450d3a33:
              bVar19 = !bVar20 && !bVar19;
            }
            uVar9 = uVar16 - 1;
            iVar13 = iVar13 + 1;
            if (!bVar19) {
              uVar9 = uVar16;
              iVar13 = iVar17;
            }
            iVar17 = iVar13;
            uVar16 = uVar9 >> 1;
          } while (uVar16 != 0);
        }
        lVar18 = *param_1;
        lVar14 = lVar18 + (longlong)iVar17 * 8;
LAB_1450d3a60:
        uVar16 = *(uint *)(param_1 + 1);
        if (lVar14 == 0) {
          if (((*(uint *)((longlong)param_1 + 0xc) <= uVar16) &&
              (cVar7 = FUN_1450d34c0(param_1), cVar7 == '\0')) ||
             (*(uint *)((longlong)param_1 + 0xc) <= uVar16)) goto LAB_1450d3adb;
          uVar16 = *(uint *)(param_1 + 1);
          *(uint *)(param_1 + 1) = uVar16 + 1;
          plVar10 = (longlong *)(*param_1 + (ulonglong)uVar16 * 8);
        }
        else {
          uVar15 = lVar14 - lVar18 >> 3;
          if (((uVar16 < *(uint *)((longlong)param_1 + 0xc)) ||
              (cVar7 = FUN_1450d34c0(param_1), cVar7 != '\0')) &&
             (uVar16 < *(uint *)((longlong)param_1 + 0xc))) {
            uVar16 = (uint)uVar15;
            uVar15 = uVar15 & 0xffffffff;
            _Src = (void *)(*param_1 + uVar15 * 8);
            if (uVar16 < *(uint *)(param_1 + 1)) {
              memmove((void *)((longlong)_Src + 8),_Src,
                      (ulonglong)((*(uint *)(param_1 + 1) - uVar16) * 8));
            }
            *(int *)(param_1 + 1) = (int)param_1[1] + 1;
            plVar10 = (longlong *)(*param_1 + uVar15 * 8);
          }
          else {
LAB_1450d3adb:
            plVar10 = (longlong *)0x0;
          }
        }
        lVar12 = lVar12 + 1;
        *plVar10 = lVar5;
      } while (lVar12 < iVar2);
    }
  }
  return;
}



// FUNCTION 1450d3b20 FUN_1450d3b20 body=261 status=ok
// SIG undefined FUN_1450d3b20(void)

longlong FUN_1450d3b20(longlong *param_1,float *param_2,undefined1 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  
  uVar9 = *(uint *)(param_1 + 1);
  iVar10 = 0;
  if (uVar9 != 0) {
    fVar1 = *param_2;
    do {
      iVar8 = (uVar9 >> 1) + iVar10;
      lVar4 = *(longlong *)(*param_1 + (longlong)iVar8 * 8);
      uVar2 = *(undefined8 *)(lVar4 + 800);
      fVar3 = *(float *)(lVar4 + 0x328);
      fVar7 = (float)uVar2;
      if (fVar7 == fVar1) {
        fVar5 = (float)((ulonglong)uVar2 >> 0x20);
        if ((fVar5 == param_2[1]) && (fVar3 == param_2[2])) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar8 * 8;
        }
        if (fVar7 != fVar1) goto LAB_1450d3bd0;
        fVar7 = param_2[2];
        if (*(char *)((longlong)param_1 + 0x12) == '\0') {
          bVar12 = (uint)fVar3 < (uint)fVar7;
          bVar11 = false;
          if (fVar3 == fVar7) {
            bVar12 = (uint)fVar5 < (uint)param_2[1];
            bVar11 = fVar5 == param_2[1];
          }
          goto LAB_1450d3bd3;
        }
        bVar11 = (uint)fVar3 < (uint)fVar7;
        if (fVar3 == fVar7) {
          bVar11 = (uint)fVar5 < (uint)param_2[1];
        }
      }
      else {
LAB_1450d3bd0:
        bVar11 = fVar7 == fVar1;
        bVar12 = fVar7 < fVar1;
LAB_1450d3bd3:
        bVar11 = !bVar12 && !bVar11;
      }
      uVar6 = uVar9 - 1;
      iVar8 = iVar8 + 1;
      if (!bVar11) {
        uVar6 = uVar9;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      uVar9 = uVar6 >> 1;
    } while (uVar9 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar10 * 8;
}



// FUNCTION 1450d3c30 FUN_1450d3c30 body=28 status=ok
// SIG undefined FUN_1450d3c30(void)

undefined8 *
FUN_1450d3c30(undefined8 *param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined2 *)(param_1 + 2) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x13) = param_4;
  return param_1;
}



// FUNCTION 1450d3c50 FUN_1450d3c50 body=123 status=ok
// SIG undefined FUN_1450d3c50(void)

undefined8 FUN_1450d3c50(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)(param_2 + 800);
  local_10 = *(undefined4 *)(param_2 + 0x328);
  iVar1 = *(int *)(param_1 + 8);
  plVar2 = (longlong *)FUN_1450d3580(local_18,&local_18);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 2;
  }
  else {
    if (iVar1 == 0) {
      FUN_1450c7f40(param_1);
    }
    *plVar2 = param_2;
    uVar3 = 1;
    *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  }
  return uVar3;
}



// FUNCTION 1450d3cd0 FUN_1450d3cd0 body=150 status=ok
// SIG undefined FUN_1450d3cd0(void)

void FUN_1450d3cd0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  void *pvVar2;
  void *_Dst;
  char local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)(param_2 + 800);
  local_10 = *(undefined4 *)(param_2 + 0x328);
  pvVar2 = (void *)FUN_1450d3b20(local_18,&local_18,local_res8);
  _Dst = (void *)0x0;
  if (local_res8[0] != '\0') {
    _Dst = pvVar2;
  }
  if (_Dst == (void *)0x0) {
    bVar1 = false;
  }
  else {
    pvVar2 = (void *)(*param_1 + (ulonglong)((int)param_1[1] - 1) * 8);
    if (_Dst < pvVar2) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(ulonglong)((int)pvVar2 - (int)_Dst & 0xfffffff8));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    bVar1 = true;
  }
  if ((int)param_1[1] == 0) {
    FUN_1450c7f70(param_1);
  }
  if (bVar1) {
    *(short *)(param_1 + 5) = (short)param_1[5] + -1;
  }
  return;
}



// FUNCTION 1450d3d70 FUN_1450d3d70 body=104 status=ok
// SIG undefined FUN_1450d3d70(void)

void FUN_1450d3d70(undefined8 param_1,uint param_2,longlong param_3)

{
  longlong local_res18 [2];
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (0x7f7fffff < (param_2 & 0x7fffffff)) {
    param_2 = 0x42480000;
  }
  local_24 = *(undefined4 *)(param_3 + 0x324);
  local_18 = *(undefined8 *)(param_3 + 800);
  local_20 = *(undefined4 *)(param_3 + 0x328);
  local_res18[0] = param_3;
  local_28 = param_2;
  local_10 = local_20;
  FUN_1450d3680(local_18,&local_18,&local_28,local_res18);
  return;
}



// FUNCTION 1450d3de0 FUN_1450d3de0 body=401 status=ok
// SIG undefined FUN_1450d3de0(void)

void FUN_1450d3de0(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong *plVar9;
  uint uVar10;
  
  uVar2 = *(ushort *)(param_1 + 2);
  if (uVar2 != 0) {
    if ((uint)uVar2 < *(uint *)(param_1 + 1)) {
      uVar10 = 0;
      plVar9 = (longlong *)*param_1;
      plVar1 = plVar9 + *(uint *)(param_1 + 1);
      for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
        if (uVar2 <= uVar10) {
          if (param_1 == &DAT_14c79c430) {
            do {
              lVar3 = *plVar9;
              if (((*(byte *)(lVar3 + 0x315) & 1) == 0) && ((*(byte *)(lVar3 + 0x316) & 2) == 0)) {
                if (cRam000000014c79c443 == '\0') {
                  FUN_1450eb7c0(lVar3,2);
                }
                else {
                  FUN_1450ebcd0();
                }
              }
              plVar9 = plVar9 + 1;
            } while (plVar9 != plVar1);
            return;
          }
          do {
            lVar3 = *plVar9;
            if (((*(byte *)(lVar3 + 0x315) & 1) == 0) && ((*(byte *)(lVar3 + 0x316) & 2) == 0)) {
              if (*(char *)((longlong)param_1 + 0x13) == '\0') {
                FUN_1450eb7c0(lVar3,1);
              }
              else {
                FUN_1450ebcd0();
              }
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar1);
          return;
        }
        lVar3 = *plVar9;
        if ((((*(byte *)(lVar3 + 0x316) & 2) == 0) && ((*(byte *)(lVar3 + 0x315) & 1) == 0)) &&
           ((*(byte *)(lVar3 + 0x221) & 3) == 0)) {
          lVar4 = *(longlong *)(lVar3 + 0x2a8);
          if (lVar4 == 0) {
LAB_1450d3ebe:
            if ((*(byte *)(lVar3 + 0x313) & 0x78) != 0) goto LAB_1450d3ecb;
          }
          else {
            bVar6 = true;
            bVar7 = true;
            for (lVar5 = *(longlong *)(lVar4 + 0x38); lVar5 != 0;
                lVar5 = *(longlong *)(lVar5 + 0x20)) {
              if ((bVar7) && ((*(uint *)(lVar5 + 0x198) >> 1 & 1) != 0)) {
                bVar7 = true;
              }
              else {
                bVar7 = false;
              }
              if ((bVar6) && ((*(byte *)(lVar5 + 0x198) & 1) != 0)) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
            }
            bVar8 = bVar6;
            if ((((*(byte *)(lVar4 + 0x60) & 2) == 0) || (bVar8 = bVar7, bVar6)) && (bVar8))
            goto LAB_1450d3ebe;
          }
          uVar10 = uVar10 + 1;
        }
LAB_1450d3ecb:
      }
    }
  }
  return;
}



// FUNCTION 1450d3f80 FUN_1450d3f80 body=92 status=ok
// SIG undefined FUN_1450d3f80(void)

undefined8 * FUN_1450d3f80(undefined8 *param_1)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_20 = 0xff;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0xff;
  FUN_145073d10(param_1,&local_38);
  param_1[0xe] = 0;
  *param_1 = &PTR_LAB_149c28030;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 1450d3fe0 FUN_1450d3fe0 body=300 status=ok
// SIG undefined FUN_1450d3fe0(void)

void FUN_1450d3fe0(longlong *param_1,longlong *param_2,longlong param_3,short param_4,
                  undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 local_res8;
  uint uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar5 = 0;
  *(undefined1 *)((longlong)param_1 + 0x82) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x83) = param_6;
  *(short *)(param_1 + 0x10) = param_4;
  if ((int)param_1[8] == 0) {
    uStack_20 = CONCAT31(uStack_20._1_3_,0xff);
    local_18 = CONCAT31(local_18._1_3_,0xff);
    param_1[1] = param_3;
    param_1[2] = (ulonglong)uStack_2c << 0x20;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_24;
    *(undefined4 *)(param_1 + 4) = uStack_20;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_1c;
    *(undefined4 *)(param_1 + 5) = local_18;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_14;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  if ((param_4 != 0) && (param_2 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*param_1 + 0x38))();
    uVar4 = (**(code **)(*param_1 + 0x30))(param_1,&local_res8);
    FUN_145073eb0(param_1,param_2,uVar4,uVar2);
    local_res8 = 0x10000;
    (**(code **)(*param_2 + 0x210))(param_2,param_1,&local_res8);
    FUN_145073de0(param_1,param_2);
  }
  cVar1 = *(char *)((longlong)param_2 + 0xd4);
  if (param_2[0xf] != 0) {
    iVar3 = FUN_1450d7250();
    uVar5 = (ulonglong)(iVar3 + 1);
  }
  param_1[0x12] =
       ((longlong)(((int)cVar1 >> 7) + 2) << 0x1d | uVar5) << 0x20 |
       (ulonglong)*(uint *)(param_2 + 4);
  return;
}



// FUNCTION 1450d4140 FUN_1450d4140 body=87 status=ok
// SIG undefined FUN_1450d4140(void)

undefined8 * FUN_1450d4140(undefined8 *param_1,uint param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0x10000;
  *param_1 = &PTR_LAB_149c28030;
  FUN_145073fe0(param_1,&local_res8,1);
  FUN_145073d80(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1450d41a0 FUN_1450d41a0 body=102 status=ok
// SIG undefined FUN_1450d41a0(void)

void FUN_1450d41a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(void **)(lVar1 + 0x70) != (void *)0x0) {
      *(undefined4 *)(lVar1 + 0x78) = 0;
      AK::MemoryMgr::Free(0,*(void **)(lVar1 + 0x70));
      *(undefined8 *)(lVar1 + 0x70) = 0;
      *(undefined4 *)(lVar1 + 0x7c) = 0;
    }
    plVar2 = (longlong *)*param_1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
      AK::MemoryMgr::Free(0,plVar2);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1450d4210 FUN_1450d4210 body=202 status=ok
// SIG undefined FUN_1450d4210(void)

undefined8 FUN_1450d4210(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  __uint64 _Var7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var7 = (ulonglong)(iVar3 + uVar2) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    puVar6 = AK::MemoryMgr::Malloc(0,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (puVar5 = puVar6, (undefined8 *)*param_1 != puVar6)) {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          if (puVar5 != (undefined8 *)0x0) {
            puVar5[1] = 0;
          }
          puVar1 = (undefined8 *)((longlong)puVar5 + (*param_1 - (longlong)puVar6));
          uVar4 = puVar1[1];
          *puVar5 = *puVar1;
          puVar5[1] = uVar4;
          puVar5 = puVar5 + 2;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450d42bd;
    }
  }
  else {
    puVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
LAB_1450d42bd:
      *param_1 = (longlong)puVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450d42e0 FUN_1450d42e0 body=97 status=ok
// SIG undefined FUN_1450d42e0(void)

void FUN_1450d42e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *_Dst;
  
  plVar1 = (longlong *)*param_1;
  _Dst = plVar1;
  if (plVar1 != plVar1 + (ulonglong)*(uint *)(param_1 + 1) * 2) {
    while (*_Dst != param_2) {
      _Dst = _Dst + 2;
      if (_Dst == plVar1 + (ulonglong)*(uint *)(param_1 + 1) * 2) {
        return;
      }
    }
    if (_Dst < plVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 2) {
      memmove(_Dst,_Dst + 2,
              (ulonglong)
              ((int)(plVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 2) - (int)_Dst & 0xfffffff0)
             );
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  }
  return;
}



// FUNCTION 1450d4350 FUN_1450d4350 body=205 status=ok
// SIG undefined FUN_1450d4350(void)

undefined8 FUN_1450d4350(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  __uint64 _Var7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var7 = (ulonglong)(iVar3 + uVar2) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    puVar6 = AK::MemoryMgr::Malloc(0,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (puVar5 = puVar6, (undefined8 *)*param_1 != puVar6)) {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            *(undefined4 *)(puVar5 + 1) = 0;
          }
          puVar1 = (undefined8 *)((longlong)puVar5 + (*param_1 - (longlong)puVar6));
          uVar4 = puVar1[1];
          *puVar5 = *puVar1;
          puVar5[1] = uVar4;
          puVar5 = puVar5 + 2;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450d4400;
    }
  }
  else {
    puVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
LAB_1450d4400:
      *param_1 = (longlong)puVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450d4420 FUN_1450d4420 body=269 status=ok
// SIG undefined FUN_1450d4420(void)

undefined8 * FUN_1450d4420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c28010;
  param_1[1] = &PTR__purecall_149c28028;
  FUN_1453734e0(param_1 + 2);
  param_1[2] = &PTR_FUN_149c26978;
  FUN_145374bc0();
  *param_1 = &PTR_FUN_149c28080;
  param_1[8] = 0;
  param_1[1] = &PTR_FUN_149c282d0;
  param_1[2] = &PTR_LAB_149c282d8;
  param_1[5] = &PTR_LAB_149c28300;
  param_1[0x15] = param_1;
  param_1[0x17] = param_1 + 0x15;
  param_1[0x16] = 0;
  *(ushort *)((longlong)param_1 + 0xd2) = *(ushort *)((longlong)param_1 + 0xd2) & 0xfc00;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0xd6) = *(byte *)((longlong)param_1 + 0xd6) & 0xf8;
  *(byte *)((longlong)param_1 + 0xd4) = *(byte *)((longlong)param_1 + 0xd4) & 0x40 | 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)((longlong)param_1 + 0xd5) = 0;
  return param_1;
}



// FUNCTION 1450d4530 FUN_1450d4530 body=57 status=ok
// SIG undefined FUN_1450d4530(void)

void FUN_1450d4530(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0x10);
  FUN_145074760(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,0);
    AK::MemoryMgr::Free(2,puVar1);
    return;
  }
  return;
}



// FUNCTION 1450d4570 FUN_1450d4570 body=400 status=ok
// SIG undefined FUN_1450d4570(void)

void FUN_1450d4570(undefined8 *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_149c28080;
  param_1[1] = &PTR_FUN_149c282d0;
  param_1[2] = &PTR_LAB_149c282d8;
  param_1[5] = &PTR_LAB_149c28300;
  FUN_145353c50(param_1 + 5);
  FUN_1450d9fa0(param_1);
  plVar1 = (longlong *)param_1[0xf];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_1);
    param_1[0xf] = 0;
  }
  plVar1 = (longlong *)param_1[0x10];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_1);
    param_1[0x10] = 0;
  }
  if ((void *)param_1[0x11] != (void *)0x0) {
    AK::MemoryMgr::Free(2,(void *)param_1[0x11]);
  }
  if (param_1[0xd] != 0) {
    FUN_14539f610();
    pvVar2 = (void *)param_1[0xd];
    if (pvVar2 != (void *)0x0) {
      FUN_14539f3a0(pvVar2);
      AK::MemoryMgr::Free(2,pvVar2);
    }
    param_1[0xd] = 0;
  }
  FUN_1453738c0(param_1 + 0x15);
  lVar3 = param_1[0xc];
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x10) != 0) {
      AK::MemoryMgr::Free(2,*(void **)(lVar3 + 8));
    }
    if ((void *)param_1[0xc] != (void *)0x0) {
      AK::MemoryMgr::Free(2,(void *)param_1[0xc]);
    }
  }
  if (param_1[0xe] != 0) {
    FUN_1450da060(param_1);
  }
  FUN_1453526b0(param_1 + 9);
  FUN_1450747a0(param_1);
  FUN_145373e20(param_1 + 0x17);
  FUN_1453738c0();
  if ((void *)param_1[0x12] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[0x12]);
  }
  param_1[0x12] = 0;
  FUN_1453525f0(param_1 + 9);
  FUN_145374bf0(param_1 + 5);
  FUN_145374b40(param_1 + 2);
  return;
}



// FUNCTION 1450d4710 FUN_1450d4710 body=158 status=ok
// SIG undefined FUN_1450d4710(void)

void FUN_1450d4710(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  (**(code **)(*param_1 + 0x248))(param_1,local_res10);
  DAT_14c79c389 = local_res10[0] == 0;
  if (local_res10[0] == 0) {
    uVar1 = param_1[0x13] & 0xffffffffe3ffffff;
  }
  else {
    uVar1 = param_1[0x13] | 0x1c000000;
  }
  param_1[0x13] = uVar1;
  if ((param_1[0x10] != local_res10[0]) && (param_1[0x10] = local_res10[0], param_1[0xe] != 0)) {
    FUN_1450a5be0(1);
    (**(code **)(*param_1 + 0x180))(param_1,1,0);
  }
  return;
}



// FUNCTION 1450d47b0 FUN_1450d47b0 body=201 status=ok
// SIG undefined FUN_1450d47b0(void)

void FUN_1450d47b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *_Dst;
  
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 != (longlong *)0x0) {
    uVar3 = (ulonglong)*(uint *)(plVar1 + 1);
    plVar4 = (longlong *)*plVar1;
    _Dst = plVar4;
    if (plVar4 != plVar4 + uVar3 * 2) {
      do {
        if (*_Dst == param_2) {
          pvVar2 = (void *)_Dst[1];
          if (pvVar2 != (void *)0x0) {
            FUN_14539f690(pvVar2);
            AK::MemoryMgr::Free(4,pvVar2);
            uVar3 = (ulonglong)*(uint *)(plVar1 + 1);
          }
          plVar4 = (longlong *)*plVar1;
          if (_Dst < plVar4 + (ulonglong)((int)uVar3 - 1) * 2) {
            memmove(_Dst,_Dst + 2,
                    (ulonglong)
                    ((int)(plVar4 + (ulonglong)((int)uVar3 - 1) * 2) - (int)_Dst & 0xfffffff0));
            plVar4 = (longlong *)*plVar1;
          }
          *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
          uVar3 = (ulonglong)*(uint *)(plVar1 + 1);
        }
        else {
          _Dst = _Dst + 2;
        }
      } while (_Dst != plVar4 + uVar3 * 2);
    }
  }
  return;
}



// FUNCTION 1450d48f0 FUN_1450d48f0 body=75 status=ok
// SIG undefined FUN_1450d48f0(void)

void FUN_1450d48f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined2 local_19;
  undefined8 local_10;
  
  local_19 = 0;
  local_10 = 0;
  local_1c = 0;
  local_1a = 0;
  local_20 = param_5;
  local_38[0] = 0;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  (**(code **)(*param_1 + 0x80))(param_1,local_38);
  return;
}



// FUNCTION 1450d4940 FUN_1450d4940 body=85 status=ok
// SIG undefined FUN_1450d4940(void)

void FUN_1450d4940(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined2 local_19;
  undefined8 local_10;
  
  local_20 = param_5;
  local_19 = 0;
  local_10 = 0;
  local_1c = 0;
  local_1a = 0;
  local_38[0] = 1;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  (**(code **)(*param_1 + 0x80))(param_1,local_38);
  return;
}



// FUNCTION 1450d49a0 FUN_1450d49a0 body=85 status=ok
// SIG undefined FUN_1450d49a0(void)

void FUN_1450d49a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined2 local_19;
  undefined8 local_10;
  
  local_20 = param_5;
  local_19 = 0;
  local_10 = 0;
  local_1c = 0;
  local_1a = 0;
  local_38[0] = 2;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  (**(code **)(*param_1 + 0x80))(param_1,local_38);
  return;
}



// FUNCTION 1450d4a00 FUN_1450d4a00 body=110 status=ok
// SIG undefined FUN_1450d4a00(void)

void FUN_1450d4a00(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  cVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (cVar1 != '\0') {
    local_44 = (undefined4)param_1[4];
    local_40 = 0;
    local_48 = param_2;
    local_3c = param_4;
    local_38 = param_3;
    (**(code **)(*param_1 + 0xa8))(param_1,&local_48);
  }
  return;
}



// FUNCTION 1450d4a70 FUN_1450d4a70 body=32 status=ok
// SIG undefined FUN_1450d4a70(void)

void FUN_1450d4a70(longlong *param_1)

{
  if (param_1[0xe] != 0) {
    (**(code **)(*param_1 + 0xd8))();
    DAT_14c79c388 = 1;
  }
  return;
}



// FUNCTION 1450d4a90 FUN_1450d4a90 body=12 status=ok
// SIG undefined FUN_1450d4a90(void)

byte FUN_1450d4a90(longlong param_1)

{
  return *(byte *)(param_1 + 0xd5) >> 1 & 1;
}



// FUNCTION 1450d4aa0 FUN_1450d4aa0 body=496 status=ok
// SIG undefined FUN_1450d4aa0(void)

undefined8 FUN_1450d4aa0(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  uint local_18 [4];
  
  *param_2 = 0;
  lVar5 = DAT_14c791060;
  do {
    lVar6 = param_1;
    if ((*(ulonglong *)(lVar6 + 0x98) & 0x20020000ffe) != 0) break;
    param_1 = *(longlong *)(lVar6 + 0x78);
  } while (*(longlong *)(lVar6 + 0x78) != 0);
  pbVar3 = *(byte **)(lVar6 + 0x90);
  uVar10 = 0;
  local_18[0] = 0;
  if (pbVar3 != (byte *)0x0) {
    uVar7 = 0;
    do {
      uVar8 = (int)uVar7 + 1;
      if (pbVar3[uVar8] == 0x46) {
        puVar9 = (uint *)(pbVar3 + uVar7 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
        goto LAB_1450d4b15;
      }
      uVar7 = (ulonglong)uVar8;
    } while (uVar8 < *pbVar3);
  }
  puVar9 = (uint *)0x0;
LAB_1450d4b15:
  puVar4 = local_18;
  if (puVar9 != (uint *)0x0) {
    puVar4 = puVar9;
  }
  uVar8 = *puVar4;
  do {
    while (iVar2 = *(int *)(lVar5 + 0x210), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x218));
      if (*(int *)(lVar5 + 0x210) < 0) goto LAB_1450d4b47;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x218));
    }
    LOCK();
    bVar12 = iVar2 == *(int *)(lVar5 + 0x210);
    if (bVar12) {
      *(int *)(lVar5 + 0x210) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar12);
LAB_1450d4b47:
  if (*(uint *)(lVar5 + 600) == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    for (plVar11 = *(longlong **)
                    (*(longlong *)(lVar5 + 0x250) +
                    ((ulonglong)uVar8 % (ulonglong)*(uint *)(lVar5 + 600)) * 8);
        plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[1]) {
      if (*(uint *)(plVar11 + 2) == uVar8) goto LAB_1450d4b77;
    }
    plVar11 = (longlong *)0x0;
LAB_1450d4b77:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar5 + 0x210);
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x218));
LAB_1450d4bf8:
      if (plVar11 != (longlong *)0x0) {
        if (*(byte *)(plVar11 + 0x3f) != 0xff) {
          lVar5 = (ulonglong)*(byte *)(plVar11 + 0x3f) + 2;
          if ((plVar11[lVar5 * 3] != 0) && (plVar11 + lVar5 * 3 != (longlong *)0x0)) {
            uVar10 = 1;
            *param_2 = *(undefined4 *)
                        (plVar11[lVar5 * 3] + (ulonglong)((int)(plVar11 + lVar5 * 3)[1] - 2) * 0xc);
          }
        }
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      return uVar10;
    }
    LOCK();
    bVar12 = iVar2 == *(int *)(lVar5 + 0x210);
    if (bVar12) {
      *(int *)(lVar5 + 0x210) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar12) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar5 + 0x240))) {
        SetEvent(*(HANDLE *)(lVar5 + 0x248));
      }
      goto LAB_1450d4bf8;
    }
    iVar2 = *(int *)(lVar5 + 0x210);
  } while( true );
}



// FUNCTION 1450d4c90 FUN_1450d4c90 body=943 status=ok
// SIG undefined FUN_1450d4c90(void)

void FUN_1450d4c90(longlong param_1,undefined8 param_2,float *param_3)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float local_res8 [2];
  
  pfVar10 = (float *)0x0;
  pfVar11 = pfVar10;
  if (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) {
    pfVar11 = (float *)**(undefined8 **)(param_1 + 0x58);
  }
  pbVar1 = *(byte **)(param_1 + 0x90);
  local_res8[0] = 0.0;
  pfVar3 = pfVar10;
  if (pbVar1 != (byte *)0x0) {
    pfVar2 = pfVar10;
    do {
      uVar9 = (int)pfVar2 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar9 + (longlong)pbVar1) == 0xc) {
        pfVar3 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar2 = (float *)(ulonglong)uVar9;
    } while (uVar9 < *pbVar1);
  }
  pfVar2 = local_res8;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  *param_3 = *pfVar2;
  pbVar1 = *(byte **)(param_1 + 0x90);
  local_res8[0] = 0.0;
  pfVar3 = pfVar10;
  if (pbVar1 != (byte *)0x0) {
    pfVar2 = pfVar10;
    do {
      uVar9 = (int)pfVar2 + 1;
      if (pbVar1[uVar9] == 0xd) {
        pfVar3 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar2 * 4);
        break;
      }
      pfVar2 = (float *)(ulonglong)uVar9;
    } while (uVar9 < *pbVar1);
  }
  pfVar2 = local_res8;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  param_3[1] = *pfVar2;
  pbVar1 = *(byte **)(param_1 + 0x90);
  local_res8[0] = 0.0;
  pfVar3 = pfVar10;
  if (pbVar1 != (byte *)0x0) {
    pfVar2 = pfVar10;
    do {
      uVar9 = (int)pfVar2 + 1;
      if (pbVar1[uVar9] == 0x49) {
        pfVar3 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar2 * 4);
        break;
      }
      pfVar2 = (float *)(ulonglong)uVar9;
    } while (uVar9 < *pbVar1);
  }
  pfVar2 = local_res8;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  local_res8[0] = *pfVar2;
  param_3[2] = local_res8[0];
  if (((ulonglong)pfVar11 >> 0x18 & 1) == 0) {
    pbVar1 = *(byte **)(param_1 + 0x90);
    local_res8[0] = 0.0;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar10;
      do {
        uVar9 = (int)pfVar3 + 1;
        if (pbVar1[uVar9] == 0xe) {
          pfVar10 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) +
                                       (longlong)pfVar3 * 4);
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar9;
      } while (uVar9 < *pbVar1);
    }
    pfVar3 = local_res8;
    if (pfVar10 != (float *)0x0) {
      pfVar3 = pfVar10;
    }
    local_res8[0] = *pfVar3;
    param_3[3] = local_res8[0];
  }
  else {
    param_3[3] = 0.0;
  }
  if (((ulonglong)pfVar11 & 0x4000000010c0000) != 0) {
    plVar4 = (longlong *)
             FUN_1453529d0(param_1 + 0x48,local_res8,0x12,*(longlong *)(param_1 + 0x48),
                           *(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x50) * 8)
    ;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x50);
    lVar8 = *(longlong *)(param_1 + 0x48);
    plVar4 = (longlong *)*plVar4;
    uVar7 = uVar6;
    if (plVar4 != (longlong *)(lVar8 + uVar6 * 8)) {
      do {
        uVar7 = uVar6;
        if (*(int *)(*plVar4 + 8) != 0x12) break;
        fVar12 = (float)FUN_1450800b0(g_pGameSyncMgr,*plVar4,param_2);
        plVar4 = plVar4 + 1;
        *param_3 = fVar12 + *param_3;
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x50);
        lVar8 = *(longlong *)(param_1 + 0x48);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x50);
      } while (plVar4 != (longlong *)(lVar8 + uVar6 * 8));
    }
    uVar6 = uVar7;
    if (plVar4 != (longlong *)(lVar8 + uVar7 * 8)) {
      do {
        uVar6 = uVar7;
        if (*(int *)(*plVar4 + 8) != 0x13) break;
        fVar12 = (float)FUN_1450800b0(g_pGameSyncMgr,*plVar4,param_2);
        plVar4 = plVar4 + 1;
        param_3[1] = fVar12 + param_3[1];
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x50);
        lVar8 = *(longlong *)(param_1 + 0x48);
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x50);
      } while (plVar4 != (longlong *)(lVar8 + uVar7 * 8));
    }
    plVar4 = (longlong *)FUN_1453529d0(param_1 + 0x48,local_res8,0x18,plVar4,lVar8 + uVar6 * 8);
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x50);
    lVar8 = *(longlong *)(param_1 + 0x48);
    plVar4 = (longlong *)*plVar4;
    uVar7 = uVar6;
    if (plVar4 != (longlong *)(lVar8 + uVar6 * 8)) {
      do {
        uVar7 = uVar6;
        if (*(int *)(*plVar4 + 8) != 0x18) break;
        fVar12 = (float)FUN_1450800b0(g_pGameSyncMgr,*plVar4,param_2);
        plVar4 = plVar4 + 1;
        param_3[3] = fVar12 + param_3[3];
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x50);
        lVar8 = *(longlong *)(param_1 + 0x48);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x50);
      } while (plVar4 != (longlong *)(lVar8 + uVar6 * 8));
    }
    plVar4 = (longlong *)FUN_1453529d0(param_1 + 0x48,local_res8,0x3a,plVar4,lVar8 + uVar7 * 8);
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)
                  (*(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x50) * 8)) {
      do {
        if (*(int *)(*plVar4 + 8) != 0x3a) break;
        fVar12 = (float)FUN_1450800b0(g_pGameSyncMgr,*plVar4,param_2);
        plVar4 = plVar4 + 1;
        param_3[2] = fVar12 + param_3[2];
      } while (plVar4 != (longlong *)
                         (*(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x50) * 8))
      ;
    }
  }
  bVar5 = (*(byte *)(param_1 + 0xd5) >> 2 ^ *(byte *)(param_3 + 4)) & 7 ^ *(byte *)(param_3 + 4);
  *(byte *)(param_3 + 4) = bVar5;
  *(byte *)(param_3 + 4) = (*(char *)(param_1 + 0xd5) << 2 ^ bVar5) & 8 ^ bVar5;
  return;
}



// FUNCTION 1450d5040 FUN_1450d5040 body=435 status=ok
// SIG undefined FUN_1450d5040(void)

void FUN_1450d5040(longlong *param_1,undefined8 param_2,float *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float local_res8 [2];
  longlong *local_res20;
  
  if (((uint *)param_1[0xb] != (uint *)0x0) && ((*(uint *)param_1[0xb] & 0x700000) != 0)) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    FUN_145352940(param_1 + 9,&local_res20,0x14);
    uVar3 = (ulonglong)*(uint *)(param_1 + 10);
    lVar2 = param_1[9];
    if (local_res20 != (longlong *)(lVar2 + uVar3 * 8)) {
      uVar3 = (ulonglong)*(uint *)(param_1 + 10);
      do {
        if (*(int *)(*local_res20 + 8) != 0x14) break;
        fVar4 = (float)FUN_1450800b0(g_pGameSyncMgr,*local_res20,param_2);
        local_res20 = local_res20 + 1;
        *param_3 = fVar4 + *param_3;
        uVar3 = (ulonglong)*(uint *)(param_1 + 10);
        lVar2 = param_1[9];
      } while (local_res20 != (longlong *)(lVar2 + uVar3 * 8));
    }
    if (local_res20 != (longlong *)(lVar2 + uVar3 * 8)) {
      do {
        if (*(int *)(*local_res20 + 8) != 0x15) break;
        fVar4 = (float)FUN_1450800b0(g_pGameSyncMgr,*local_res20,param_2);
        local_res20 = local_res20 + 1;
        param_3[2] = fVar4 + param_3[2];
        uVar3 = (ulonglong)*(uint *)(param_1 + 10);
        lVar2 = param_1[9];
      } while (local_res20 != (longlong *)(lVar2 + uVar3 * 8));
    }
    if (local_res20 != (longlong *)(lVar2 + uVar3 * 8)) {
      do {
        if (*(int *)(*local_res20 + 8) != 0x16) break;
        fVar4 = (float)FUN_1450800b0(g_pGameSyncMgr,*local_res20,param_2);
        local_res20 = local_res20 + 1;
        param_3[1] = fVar4 + param_3[1];
      } while (local_res20 != (longlong *)(param_1[9] + (ulonglong)*(uint *)(param_1 + 10) * 8));
    }
    local_res8[0] = 0.0;
    cVar1 = (**(code **)(*param_1 + 0xf8))(param_1,local_res8);
    if (cVar1 != '\0') {
      local_res8[0] = local_res8[0] * 0.01;
      *param_3 = local_res8[0] * *param_3;
      param_3[2] = local_res8[0] * param_3[2];
      param_3[1] = local_res8[0] * param_3[1];
    }
  }
  return;
}



// FUNCTION 1450d5200 FUN_1450d5200 body=68 status=ok
// SIG undefined FUN_1450d5200(void)

undefined8 FUN_1450d5200(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)*param_2;
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_2 + 1) * 2;
  for (; (piVar2 != piVar1 &&
         ((*(int *)(param_1 + 0x20) != *piVar2 ||
          (*(byte *)(param_1 + 0xd4) >> 7 != *(byte *)(piVar2 + 1))))); piVar2 = piVar2 + 2) {
  }
  piVar3 = (int *)0x0;
  if (piVar2 != piVar1) {
    piVar3 = piVar2;
  }
  return CONCAT71((int7)((ulonglong)piVar2 >> 8),piVar3 != (int *)0x0);
}



// FUNCTION 1450d5250 FUN_1450d5250 body=37 status=ok
// SIG undefined FUN_1450d5250(void)

undefined8 FUN_1450d5250(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x80);
  if ((plVar2 == (longlong *)0x0) &&
     (plVar2 = *(longlong **)(param_1 + 0x78), plVar2 == (longlong *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450d5262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0x100))();
  return uVar1;
}



// FUNCTION 1450d5280 FUN_1450d5280 body=78 status=ok
// SIG undefined FUN_1450d5280(void)

longlong * FUN_1450d5280(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    *param_2 = param_1;
    param_2[1] = lVar1;
    return param_2;
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1450d5280();
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1450d52d0 FUN_1450d52d0 body=159 status=ok
// SIG undefined FUN_1450d52d0(void)

byte FUN_1450d52d0(longlong param_1,ushort param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  
  bVar3 = FUN_1450d9d90();
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0xd4) = *(short *)(lVar1 + 0xd4) + 1;
    if ((param_2 & 1) == 0) goto LAB_1450d5334;
    *(short *)(lVar1 + 0xd6) = *(short *)(lVar1 + 0xd6) + 1;
  }
  if (((param_2 & 1) != 0) && (plVar2 = *(longlong **)(param_1 + 0x80), plVar2 != (longlong *)0x0))
  {
    param_2 = param_2 & 0xfffe;
    bVar4 = (**(code **)(*plVar2 + 0x118))(plVar2,1);
    bVar3 = bVar3 & bVar4;
  }
LAB_1450d5334:
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    bVar4 = (**(code **)(*plVar2 + 0x118))(plVar2,param_2);
    return bVar4 & bVar3;
  }
  return bVar3;
}



// FUNCTION 1450d5370 FUN_1450d5370 body=179 status=ok
// SIG undefined FUN_1450d5370(void)

void FUN_1450d5370(longlong param_1,ushort param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0xd4) = *(short *)(lVar1 + 0xd4) + -1;
    if ((param_2 & 1) != 0) {
      *(short *)(lVar1 + 0xd6) = *(short *)(lVar1 + 0xd6) + -1;
    }
    lVar1 = *(longlong *)(param_1 + 0x70);
    if (((((*(short *)(lVar1 + 0xd0) < 1) && (*(short *)(lVar1 + 0xd4) < 1)) &&
         (*(short *)(lVar1 + 0xb8) == 0)) &&
        ((*(short *)(lVar1 + 0xba) == 0 && (*(longlong *)(lVar1 + 0x18) == 0)))) &&
       (*(int *)(lVar1 + 8) == 0)) {
      FUN_1450da060();
    }
  }
  if (((param_2 & 1) != 0) && (plVar2 = *(longlong **)(param_1 + 0x80), plVar2 != (longlong *)0x0))
  {
    param_2 = param_2 & 0xfffe;
    (**(code **)(*plVar2 + 0x120))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x120))(plVar2,param_2);
  }
  return;
}



// FUNCTION 1450d5430 FUN_1450d5430 body=283 status=ok
// SIG undefined FUN_1450d5430(void)

ulonglong FUN_1450d5430(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  piVar1 = DAT_14c791060;
  do {
    while (iVar3 = *piVar1, iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      if (*piVar1 < 0) goto LAB_1450d545f;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar3 + 1;
    }
    UNLOCK();
  } while (iVar3 != iVar2);
LAB_1450d545f:
  plVar7 = (longlong *)0x0;
  plVar8 = plVar7;
  if (piVar1[0x12] != 0) {
    for (plVar6 = *(longlong **)
                   (*(longlong *)(piVar1 + 0x10) +
                   ((ulonglong)param_1 % (ulonglong)(uint)piVar1[0x12]) * 8);
        (plVar8 = plVar7, plVar6 != (longlong *)0x0 &&
        (plVar8 = plVar6, *(uint *)(plVar6 + 2) != param_1)); plVar6 = (longlong *)plVar6[1]) {
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar3 = *piVar1;
  do {
    if (iVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450d54da:
      plVar6 = plVar8 + -2;
      if (plVar8 == (longlong *)0x0) {
        plVar6 = plVar7;
      }
      if (plVar6 == (longlong *)0x0) {
        uVar5 = 2;
      }
      else {
        uVar4 = (**(code **)(*plVar6 + 0x128))(plVar6);
        uVar5 = uVar4;
        if ((int)uVar4 != 1) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0x24);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          uVar5 = uVar4 & 0xffffffff;
          if (iVar3 == 1) {
            (**(code **)(plVar6[2] + 0x18))();
          }
        }
      }
      return uVar5;
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar3 + -1;
    }
    UNLOCK();
    if (iVar3 == iVar2) {
      if ((iVar3 + -1 == 0) && (0 < piVar1[0xc])) {
        SetEvent(*(HANDLE *)(piVar1 + 0xe));
      }
      goto LAB_1450d54da;
    }
    iVar3 = *piVar1;
  } while( true );
}



// FUNCTION 1450d5550 FUN_1450d5550 body=291 status=ok
// SIG undefined FUN_1450d5550(void)

ulonglong FUN_1450d5550(uint param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong extraout_RAX;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  puVar1 = DAT_14c791060;
  do {
    while (uVar5 = *puVar1, (int)uVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
      if ((int)*puVar1 < 0) goto LAB_1450d557f;
      LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
    }
    LOCK();
    uVar3 = *puVar1;
    if (uVar5 == uVar3) {
      *puVar1 = uVar5 + 1;
    }
    UNLOCK();
  } while (uVar5 != uVar3);
LAB_1450d557f:
  plVar8 = (longlong *)0x0;
  plVar9 = plVar8;
  if (puVar1[0x12] != 0) {
    for (plVar7 = *(longlong **)
                   (*(longlong *)(puVar1 + 0x10) +
                   ((ulonglong)param_1 % (ulonglong)puVar1[0x12]) * 8);
        (plVar9 = plVar8, plVar7 != (longlong *)0x0 &&
        (plVar9 = plVar7, *(uint *)(plVar7 + 2) != param_1)); plVar7 = (longlong *)plVar7[1]) {
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  uVar5 = *puVar1;
  do {
    if ((int)uVar5 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
      uVar6 = extraout_RAX;
LAB_1450d55fa:
      plVar7 = plVar9 + -2;
      if (plVar9 == (longlong *)0x0) {
        plVar7 = plVar8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x130))(plVar7);
        LOCK();
        puVar1 = (uint *)((longlong)plVar7 + 0x24);
        uVar5 = *puVar1;
        uVar6 = (ulonglong)uVar5;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar5 == 1) {
          uVar6 = (**(code **)(plVar7[2] + 0x18))(plVar7 + 2);
        }
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0x24);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          uVar6 = (**(code **)(plVar7[2] + 0x18))(plVar7 + 2);
        }
      }
      return uVar6;
    }
    LOCK();
    uVar3 = *puVar1;
    bVar10 = uVar5 == uVar3;
    if (bVar10) {
      *puVar1 = uVar5 - 1;
      uVar3 = uVar5;
    }
    uVar6 = (ulonglong)uVar3;
    UNLOCK();
    if (bVar10) {
      if ((uVar5 - 1 == 0) && (uVar6 = (ulonglong)puVar1[0xc], 0 < (int)puVar1[0xc])) {
        uVar5 = SetEvent(*(HANDLE *)(puVar1 + 0xe));
        uVar6 = (ulonglong)uVar5;
      }
      goto LAB_1450d55fa;
    }
    uVar5 = *puVar1;
  } while( true );
}



// FUNCTION 1450d5680 FUN_1450d5680 body=186 status=ok
// SIG undefined FUN_1450d5680(void)

void FUN_1450d5680(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  
  local_20 = 0;
  local_18 = 0;
  if (param_1 != 0) {
    local_20 = param_1 + 8;
  }
  local_28 = param_1;
  FUN_14507d830(DAT_14c791028,&local_28,param_1 + 0x48,param_2,param_3);
  plVar1 = *(longlong **)(param_1 + 0x78);
  if ((param_4 == '\0') || (*(longlong *)(param_1 + 0x80) == 0)) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
  else {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x138))(plVar1,param_2,param_3,0);
    }
    plVar1 = *(longlong **)(param_1 + 0x80);
    param_4 = '\0';
  }
  (**(code **)(*plVar1 + 0x138))(plVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1450d5740 FUN_1450d5740 body=31 status=ok
// SIG undefined FUN_1450d5740(void)

undefined8 FUN_1450d5740(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14507dee0(param_1 + 0x40,param_3,param_2);
  return 1;
}



// FUNCTION 1450d5760 FUN_1450d5760 body=384 status=ok
// SIG undefined FUN_1450d5760(void)

void FUN_1450d5760(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  byte *pbVar2;
  ulonglong uVar3;
  float *pfVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  plVar1 = (longlong *)param_1[0x19];
  if ((plVar1 != (longlong *)0x0) &&
     (lVar6 = *plVar1, lVar6 != (ulonglong)*(uint *)(plVar1 + 1) * 0x10 + lVar6)) {
    do {
      pbVar2 = *(byte **)(*(longlong *)(lVar6 + 8) + 0x18);
      if (pbVar2 != (byte *)0x0) {
        uVar3 = uVar7;
        do {
          uVar5 = (int)uVar3 + 1;
          if (pbVar2[uVar5] == (byte)param_2) {
            pfVar4 = (float *)(pbVar2 + ((ulonglong)(*pbVar2 + 8) & 0xfffffff8) + uVar3 * 0x10);
            if ((pfVar4 != (float *)0x0) && ((*pfVar4 != 0.0 || (*(longlong *)(pfVar4 + 2) != 0))))
            {
              (**(code **)(*param_1 + 0x158))
                        (param_1,param_2,*(undefined8 *)(*(longlong *)(lVar6 + 8) + 0x10),0,0,4,0);
            }
            break;
          }
          uVar3 = (ulonglong)uVar5;
        } while (uVar5 < *pbVar2);
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != (ulonglong)*(uint *)(plVar1 + 1) * 0x10 + *plVar1);
  }
  if ((param_1[0x18] != 0) && (pbVar2 = *(byte **)(param_1[0x18] + 0x18), pbVar2 != (byte *)0x0)) {
    do {
      uVar5 = (int)uVar7 + 1;
      if (pbVar2[uVar5] == (byte)param_2) {
        pfVar4 = (float *)(pbVar2 + ((ulonglong)(*pbVar2 + 8) & 0xfffffff8) + uVar7 * 0x10);
        if (pfVar4 == (float *)0x0) {
          return;
        }
        if ((*pfVar4 == 0.0) && (*(longlong *)(pfVar4 + 2) == 0)) {
          return;
        }
        (**(code **)(*param_1 + 0x158))(param_1,param_2,0,0,0,param_3,param_4);
        return;
      }
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < *pbVar2);
  }
  return;
}



// FUNCTION 1450d58e0 FUN_1450d58e0 body=491 status=ok
// SIG undefined FUN_1450d58e0(void)

void FUN_1450d58e0(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (param_2 == 0) {
    lVar10 = *(longlong *)(param_1 + 0xc0);
    if ((lVar10 != 0) && (pbVar1 = *(byte **)(lVar10 + 0x18), pbVar1 != (byte *)0x0)) {
      uVar6 = 0;
      do {
        uVar7 = (int)uVar6 + 1;
        if (pbVar1[uVar7] == 0xb) {
          pfVar8 = (float *)(pbVar1 + uVar6 * 0x10 + ((ulonglong)(*pbVar1 + 8) & 0xfffffff8));
          if (pfVar8 == (float *)0x0) {
            return;
          }
          if ((*pfVar8 == 1.0) && (*(longlong *)(pfVar8 + 2) == 0)) {
            return;
          }
          FUN_1450ad2a0(g_pRegistryMgr,param_1);
          goto LAB_1450d59e2;
        }
        uVar6 = (ulonglong)uVar7;
      } while (uVar7 < *pbVar1);
    }
  }
  else {
    plVar5 = *(longlong **)(param_1 + 200);
    if (plVar5 != (longlong *)0x0) {
      plVar2 = (longlong *)*plVar5;
      plVar5 = plVar2 + (ulonglong)*(uint *)(plVar5 + 1) * 2;
      for (; (plVar2 != plVar5 && (*plVar2 != param_2)); plVar2 = plVar2 + 2) {
      }
      plVar9 = plVar2 + 1;
      if (plVar2 == plVar5) {
        plVar9 = (longlong *)0x0;
      }
      if ((plVar9 != (longlong *)0x0) && (lVar10 = *plVar9, lVar10 != 0)) {
LAB_1450d59e2:
        puVar3 = (undefined4 *)FUN_14539f730(lVar10,0xb,0x3f800000);
        if (puVar3 != (undefined4 *)0x0) {
          if (*(longlong *)(puVar3 + 2) == 0) {
            if (param_4 != 0) {
              local_38 = *puVar3;
              local_48[1] = 0xb;
              local_34 = 0x3f800000;
              local_28 = 0xf;
              local_24 = 0x100;
              local_22 = 0;
              local_48[0] = lVar10;
              local_30 = param_4;
              local_2c = param_3;
              lVar4 = FUN_1450b0a50(DAT_14c791068,local_48,0);
              *(longlong *)(puVar3 + 2) = lVar4;
              if (lVar4 != 0) {
                return;
              }
            }
            FUN_14539f8a0(lVar10,0xb,0x3f800000,1);
          }
          else {
            FUN_1450b0c80(DAT_14c791068,*(longlong *)(puVar3 + 2),0xb,0x3f800000,param_4,param_3,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1450d5ad0 FUN_1450d5ad0 body=612 status=ok
// SIG undefined FUN_1450d5ad0(void)

void FUN_1450d5ad0(longlong *param_1,longlong param_2,int param_3,float param_4,int param_5,
                  undefined4 param_6,int param_7)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float local_78 [2];
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  float local_50;
  float local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  
  lVar7 = (longlong)param_3;
  fVar9 = 0.0;
  pfVar2 = (float *)FUN_14539f730(param_2,param_3,0);
  if (pfVar2 != (float *)0x0) {
    if (*(longlong *)(pfVar2 + 2) == 0) {
      fVar8 = *pfVar2;
      pfVar6 = (float *)0x0;
      if (param_5 != 0) {
        if (param_5 == 1) {
          pbVar1 = (byte *)param_1[0x12];
          local_78[0] = *(float *)(&DAT_14c72f470 + lVar7 * 4);
          if (pbVar1 != (byte *)0x0) {
            pfVar3 = pfVar6;
            do {
              uVar5 = (int)pfVar3 + 1;
              if (pbVar1[uVar5] == (byte)param_3) {
                pfVar6 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) +
                                            (longlong)pfVar3 * 4);
                break;
              }
              pfVar3 = (float *)(ulonglong)uVar5;
            } while (uVar5 < *pbVar1);
          }
          pfVar3 = local_78;
          if (pfVar6 != (float *)0x0) {
            pfVar3 = pfVar6;
          }
          local_78[0] = *pfVar3;
          fVar9 = param_4 - local_78[0];
        }
        else if (param_5 == 2) {
          fVar9 = fVar8 + param_4;
        }
      }
      if ((fVar8 != fVar9) && (param_7 != 0)) {
        local_48 = param_7;
        local_44 = param_6;
        local_3c = (&DAT_149c27fc0)[lVar7];
        local_40 = 0xe;
        local_3b = 1;
        local_60 = param_2;
        local_58 = lVar7;
        local_50 = fVar8;
        local_4c = fVar9;
        lVar4 = FUN_1450b0a50(DAT_14c791068,&local_60,0);
        *(longlong *)(pfVar2 + 2) = lVar4;
        if (lVar4 != 0) {
          return;
        }
        fVar8 = *pfVar2;
      }
      *pfVar2 = fVar9;
      local_70 = 0;
      local_6c = 1;
      local_68 = 0;
      (**(code **)(*param_1 + 0x228))
                (param_1,*(undefined4 *)(&DAT_149c27da0 + lVar7 * 4),&local_70,
                 *(undefined8 *)(param_2 + 0x10),fVar9,fVar9 - fVar8);
    }
    else {
      if (param_5 == 1) {
        pbVar1 = (byte *)param_1[0x12];
        pfVar6 = (float *)0x0;
        local_78[0] = *(float *)(&DAT_14c72f470 + lVar7 * 4);
        if (pbVar1 != (byte *)0x0) {
          pfVar3 = pfVar6;
          do {
            uVar5 = (int)pfVar3 + 1;
            if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == (byte)param_3) {
              pfVar6 = (float *)(pbVar1 + (longlong)pfVar3 * 4 +
                                          ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
              break;
            }
            pfVar3 = (float *)(ulonglong)uVar5;
          } while (uVar5 < *pbVar1);
        }
        pfVar3 = local_78;
        if (pfVar6 != (float *)0x0) {
          pfVar3 = pfVar6;
        }
        local_78[0] = *pfVar3;
        param_4 = param_4 - local_78[0];
      }
      FUN_1450b0c80(DAT_14c791068,*(undefined8 *)(pfVar2 + 2),lVar7,param_4,param_7,param_6,param_5)
      ;
    }
  }
  return;
}



// FUNCTION 1450d5d40 FUN_1450d5d40 body=256 status=ok
// SIG undefined FUN_1450d5d40(void)

void FUN_1450d5d40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  puVar1 = (undefined4 *)FUN_14539f730(param_2,0xb,0x3f800000);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(longlong *)(puVar1 + 2) == 0) {
      if (param_5 != 0) {
        local_38 = *puVar1;
        local_40 = 0xb;
        local_30 = param_5;
        local_28 = 0xf;
        local_24 = 0x100;
        local_22 = 0;
        local_48 = param_2;
        local_34 = param_3;
        local_2c = param_4;
        lVar2 = FUN_1450b0a50(DAT_14c791068,&local_48,0);
        *(longlong *)(puVar1 + 2) = lVar2;
        if (lVar2 != 0) {
          return;
        }
      }
      FUN_14539f8a0(param_2,0xb,param_3,1);
    }
    else {
      FUN_1450b0c80(DAT_14c791068,*(longlong *)(puVar1 + 2),0xb,param_3,param_5,param_4,0);
    }
  }
  return;
}



// FUNCTION 1450d5e40 FUN_1450d5e40 body=158 status=ok
// SIG undefined FUN_1450d5e40(void)

void FUN_1450d5e40(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0xd4) & 1) != param_2) {
    *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) & 0xfe | param_2;
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (lVar2 != 0) {
      *(bool *)(lVar2 + 0xa2) = *(char *)(lVar2 + 0xa2) == '\0';
      FUN_1450d3930();
      lVar2 = **(longlong **)(param_1 + 0x70);
      if (lVar2 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x70) + 1) * 0x10 + lVar2) {
        do {
          lVar1 = *(longlong *)(lVar2 + 8);
          if (lVar1 != 0) {
            *(bool *)(lVar1 + 0x82) = *(char *)(lVar1 + 0x82) == '\0';
            FUN_1450d3930();
          }
          lVar2 = lVar2 + 0x10;
        } while (lVar2 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x70) + 1) * 0x10 +
                          **(longlong **)(param_1 + 0x70));
      }
    }
  }
  return;
}



// FUNCTION 1450d5ee0 FUN_1450d5ee0 body=120 status=ok
// SIG undefined FUN_1450d5ee0(void)

void FUN_1450d5ee0(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0xd4) >> 1 & 1) != param_2) {
    *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) & 0xfd | param_2 * '\x02';
    if (*(longlong *)(param_1 + 0x70) != 0) {
      *(byte *)(*(longlong *)(param_1 + 0x70) + 0xa3) = param_2;
      lVar1 = **(longlong **)(param_1 + 0x70);
      if (lVar1 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x70) + 1) * 0x10 + lVar1) {
        do {
          if (*(longlong *)(lVar1 + 8) != 0) {
            *(byte *)(*(longlong *)(lVar1 + 8) + 0x83) = param_2;
          }
          lVar1 = lVar1 + 0x10;
        } while (lVar1 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x70) + 1) * 0x10 +
                          **(longlong **)(param_1 + 0x70));
      }
    }
  }
  return;
}



// FUNCTION 1450d5f60 FUN_1450d5f60 body=21 status=ok
// SIG undefined FUN_1450d5f60(void)

void FUN_1450d5f60(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) & 0xfb | param_2 << 2;
  return;
}



// FUNCTION 1450d5f80 FUN_1450d5f80 body=562 status=ok
// SIG undefined FUN_1450d5f80(void)

/* WARNING: Removing unreachable block (ram,0x0001450d612c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 * FUN_1450d5f80(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) && ((*(byte *)(param_1 + 0x98) & 1) == 0)) {
    FUN_1450d5f80();
    return param_2;
  }
  pfVar5 = (float *)0x0;
  pbVar1 = *(byte **)(param_1 + 0x90);
  local_70 = 0;
  local_68 = 0;
  local_60 = 0xff;
  local_58 = 0xff;
  local_50 = 0;
  local_res8[0] = DAT_14c72f48c;
  pfVar4 = pfVar5;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar5;
    do {
      uVar6 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 7) {
        pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
  }
  fVar8 = 0.0;
  pfVar3 = local_res8;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfVar4;
  }
  local_res8[0] = *pfVar3;
  local_78 = param_3;
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28,0x11);
  if (cVar2 != '\0') {
    fVar8 = (float)FUN_1450c0e90(param_1 + 0x28,0x11);
  }
  if ((*(uint **)(param_1 + 0x58) != (uint *)0x0) &&
     ((**(uint **)(param_1 + 0x58) >> 0x11 & 1) != 0)) {
    fVar7 = (float)FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0x11,&local_78);
    fVar8 = fVar8 + fVar7;
  }
  fVar7 = 50.0;
  if ((uint)ABS(fVar8 + local_res8[0]) < 0x7f800000) {
    fVar7 = fVar8 + local_res8[0];
  }
  if ((*(byte *)(param_1 + 0xd4) & 0x20) == 0) {
    fVar8 = 0.0;
  }
  else {
    pbVar1 = *(byte **)(param_1 + 0x90);
    local_res8[0] = DAT_14c72f490;
    if (pbVar1 == (byte *)0x0) {
LAB_1450d6157:
      pfVar4 = local_res8;
      if (pfVar5 != (float *)0x0) {
        pfVar4 = pfVar5;
      }
      fVar8 = *pfVar4;
    }
    else {
      do {
        uVar6 = (int)pfVar5 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 8) {
          pfVar5 = (float *)(pbVar1 + (longlong)pfVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          goto LAB_1450d6157;
        }
        pfVar5 = (float *)(ulonglong)uVar6;
        fVar8 = DAT_14c72f490;
      } while (uVar6 < *pbVar1);
    }
  }
  fVar9 = 0.0;
  if ((uint)ABS(fVar8) < 0x7f800000) {
    fVar9 = fVar8;
  }
  *param_2 = CONCAT44(fVar9,fVar7);
  return param_2;
}



// FUNCTION 1450d61c0 FUN_1450d61c0 body=760 status=ok
// SIG undefined FUN_1450d61c0(void)

void FUN_1450d61c0(longlong *param_1,int param_2,float param_3)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  float local_res10 [2];
  
  uVar5 = (ulonglong)param_2;
  bVar4 = (byte)param_2;
  if ((((param_2 < 0) || (6 < param_2)) && ((param_2 < 0x13 || (0x1a < param_2)))) &&
     (((param_2 < 0x3c || (0x45 < param_2)) && (param_2 != 0x48)))) {
    if (((param_2 == 0xc) || (param_2 == 0xd)) || (param_2 == 0x49)) {
      pbVar1 = (byte *)param_1[0x12];
      pfVar3 = (float *)0x0;
      local_res10[0] = 0.0;
      if (pbVar1 != (byte *)0x0) {
        pfVar2 = pfVar3;
        do {
          uVar6 = (int)pfVar2 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == bVar4) {
            pfVar3 = (float *)(pbVar1 + (longlong)pfVar2 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar2 = (float *)(ulonglong)uVar6;
        } while (uVar6 < *pbVar1);
      }
      pfVar2 = local_res10;
      if (pfVar3 != (float *)0x0) {
        pfVar2 = pfVar3;
      }
      local_res10[0] = *pfVar2;
      if (param_3 - local_res10[0] == 0.0) {
        return;
      }
      (**(code **)(*param_1 + 0x1e0))
                (param_1,param_3 - local_res10[0],*(undefined4 *)(&DAT_149c27da0 + uVar5 * 4),0);
    }
    else {
      if ((param_2 != 0xe) && (param_2 != 0x47)) {
        pbVar1 = (byte *)param_1[0x12];
        pfVar3 = (float *)0x0;
        local_res10[0] = *(float *)(&DAT_14c72f470 + uVar5 * 4);
        if (pbVar1 != (byte *)0x0) {
          pfVar2 = pfVar3;
          do {
            uVar6 = (int)pfVar2 + 1;
            if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == bVar4) {
              pfVar3 = (float *)(pbVar1 + (longlong)pfVar2 * 4 +
                                          ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
              break;
            }
            pfVar2 = (float *)(ulonglong)uVar6;
          } while (uVar6 < *pbVar1);
        }
        pfVar2 = local_res10;
        if (pfVar3 != (float *)0x0) {
          pfVar2 = pfVar3;
        }
        if (*pfVar2 == param_3) {
          return;
        }
        local_res10[0] = param_3;
        FUN_1450d3290(param_1 + 0x12,uVar5 & 0xff,param_3);
        (**(code **)(*param_1 + 0x180))(param_1,0,0);
        return;
      }
      pbVar1 = (byte *)param_1[0x12];
      pfVar3 = (float *)0x0;
      local_res10[0] = *(float *)(&DAT_14c72f470 + uVar5 * 4);
      if (pbVar1 != (byte *)0x0) {
        pfVar2 = pfVar3;
        do {
          uVar6 = (int)pfVar2 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == bVar4) {
            pfVar3 = (float *)(pbVar1 + (longlong)pfVar2 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar2 = (float *)(ulonglong)uVar6;
        } while (uVar6 < *pbVar1);
      }
      pfVar2 = local_res10;
      if (pfVar3 != (float *)0x0) {
        pfVar2 = pfVar3;
      }
      if (*pfVar2 == param_3) {
        return;
      }
      (**(code **)(*param_1 + 0x1e0))(param_1,param_3,*(undefined4 *)(&DAT_149c27da0 + uVar5 * 4),0)
      ;
    }
  }
  else {
    pbVar1 = (byte *)param_1[0x12];
    pfVar3 = (float *)0x0;
    local_res10[0] = 0.0;
    if (pbVar1 != (byte *)0x0) {
      pfVar2 = pfVar3;
      do {
        uVar6 = (int)pfVar2 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == bVar4) {
          pfVar3 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar2 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    pfVar2 = local_res10;
    if (pfVar3 != (float *)0x0) {
      pfVar2 = pfVar3;
    }
    local_res10[0] = *pfVar2;
    if (param_3 - local_res10[0] == 0.0) {
      return;
    }
    (**(code **)(*param_1 + 0xb0))
              (param_1,*(undefined4 *)(&DAT_149c27da0 + uVar5 * 4),param_3 - local_res10[0],param_3)
    ;
  }
  local_res10[0] = param_3;
  FUN_1450d3290(param_1 + 0x12,uVar5 & 0xff,param_3);
  return;
}



// FUNCTION 1450d64c0 FUN_1450d64c0 body=170 status=ok
// SIG undefined FUN_1450d64c0(void)

void FUN_1450d64c0(longlong *param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 local_18 [4];
  
  pbVar4 = (byte *)0x0;
  pbVar1 = (byte *)param_1[0x12];
  local_18[0] = *(undefined4 *)(&DAT_14c72f470 + (longlong)(int)param_2 * 4);
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = pbVar4;
    do {
      uVar2 = (int)pbVar3 + 1;
      if (pbVar1[uVar2] == (byte)param_2) {
        pbVar4 = pbVar1 + (longlong)pbVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar3 = (byte *)(ulonglong)uVar2;
    } while (uVar2 < *pbVar1);
  }
  pbVar1 = (byte *)local_18;
  if (pbVar4 != (byte *)0x0) {
    pbVar1 = pbVar4;
  }
  if (*(int *)pbVar1 != param_3) {
    FUN_1450d3290(param_1 + 0x12,param_2,param_3);
    (**(code **)(*param_1 + 0x180))(param_1,0,0);
  }
  return;
}



// FUNCTION 1450d65c0 FUN_1450d65c0 body=123 status=ok
// SIG undefined FUN_1450d65c0(void)

void FUN_1450d65c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  int param_5)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0xb0);
  }
  if (iVar1 <= param_5) {
    FUN_145374250(param_1 + 0xb8);
  }
  FUN_145373b30(param_1 + 0xa8,param_2,param_3,param_4);
  return;
}



// FUNCTION 1450d6640 FUN_1450d6640 body=152 status=ok
// SIG undefined FUN_1450d6640(void)

undefined8 FUN_1450d6640(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 == (int *)0x0) {
    piVar1 = AK::MemoryMgr::Malloc(2,0x18);
    if (piVar1 == (int *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      return 0x34;
    }
    *piVar1 = 0;
    piVar1[4] = 0;
    *(int **)(param_1 + 0x60) = piVar1;
  }
  if (*piVar1 <= param_3) {
    *piVar1 = param_3;
    pvVar2 = AK::MemoryMgr::Malloc(2,(ulonglong)(uint)(param_2 * 8));
    *(void **)(*(longlong *)(param_1 + 0x60) + 8) = pvVar2;
    if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) == 0) {
      return 0x34;
    }
    *(int *)(*(longlong *)(param_1 + 0x60) + 0x10) = param_2;
  }
  return 1;
}



// FUNCTION 1450d66e0 FUN_1450d66e0 body=55 status=ok
// SIG undefined FUN_1450d66e0(void)

undefined8 FUN_1450d66e0(longlong param_1,uint param_2,int param_3,char param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (**(int **)(param_1 + 0x60) <= param_5) {
    **(int **)(param_1 + 0x60) = param_5;
    uVar2 = (ulonglong)param_2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
    if ((*(char *)(lVar1 + 5 + uVar2 * 8) != param_4) || (*(int *)(lVar1 + uVar2 * 8) != param_3)) {
      *(char *)(lVar1 + 5 + uVar2 * 8) = param_4;
      *(int *)(lVar1 + uVar2 * 8) = param_3;
    }
  }
  return 1;
}



// FUNCTION 1450d6720 FUN_1450d6720 body=164 status=ok
// SIG undefined FUN_1450d6720(void)

ulonglong FUN_1450d6720(ulonglong param_1)

{
  ulonglong *puVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar4 = uVar5;
  if (*(char *)(param_1 + 0xd4) < '\0') {
    if (param_1 != 0) goto LAB_1450d6793;
  }
  else {
    do {
      uVar3 = param_1;
      if (uVar4 == 0) {
        uVar4 = *(ulonglong *)(uVar3 + 0x80);
      }
    } while (((*(ulonglong *)(uVar3 + 0x98) & 0x40000000000) == 0) &&
            (param_1 = *(ulonglong *)(uVar3 + 0x78), *(ulonglong *)(uVar3 + 0x78) != 0));
    param_1 = uVar4;
    if (*(longlong *)(uVar3 + 0x60) != 0) {
      uVar5 = (ulonglong)*(uint *)(*(longlong *)(uVar3 + 0x60) + 0x10);
    }
    while (param_1 == 0) {
      if (uVar3 == 0) {
        return uVar5;
      }
      puVar1 = (ulonglong *)(uVar3 + 0x80);
      uVar3 = *(ulonglong *)(uVar3 + 0x78);
      param_1 = *puVar1;
    }
    do {
      cVar2 = FUN_14508d190(param_1);
      if (cVar2 != '\0') {
        return uVar5;
      }
LAB_1450d6793:
      if (*(longlong *)(param_1 + 0x60) != 0) {
        uVar5 = (ulonglong)(uint)((int)uVar5 + *(int *)(*(longlong *)(param_1 + 0x60) + 0x10));
      }
      param_1 = *(ulonglong *)(param_1 + 0x80);
    } while (param_1 != 0);
  }
  return uVar5;
}



// FUNCTION 1450d67d0 FUN_1450d67d0 body=203 status=ok
// SIG undefined FUN_1450d67d0(void)

undefined8 FUN_1450d67d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = 0;
  local_10 = 0;
  local_18 = param_2;
  if (*(char *)(param_1 + 0xd4) < '\0') {
    if (param_1 != 0) goto LAB_1450d6860;
  }
  else {
    do {
      lVar4 = param_1;
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(lVar4 + 0x80);
      }
    } while (((*(ulonglong *)(lVar4 + 0x98) & 0x40000000000) == 0) &&
            (param_1 = *(longlong *)(lVar4 + 0x78), *(longlong *)(lVar4 + 0x78) != 0));
    param_1 = lVar3;
    if (*(longlong *)(lVar4 + 0x60) != 0) {
      FUN_1450d90f0(&local_18);
    }
    while (param_1 == 0) {
      if (lVar4 == 0) {
        return 1;
      }
      plVar1 = (longlong *)(lVar4 + 0x80);
      lVar4 = *(longlong *)(lVar4 + 0x78);
      param_1 = *plVar1;
    }
    do {
      cVar2 = FUN_14508d190(param_1);
      if (cVar2 != '\0') {
        return 1;
      }
LAB_1450d6860:
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_1450d90f0(&local_18);
      }
      param_1 = *(longlong *)(param_1 + 0x80);
    } while (param_1 != 0);
  }
  return 1;
}



// FUNCTION 1450d68a0 FUN_1450d68a0 body=122 status=ok
// SIG undefined FUN_1450d68a0(void)

undefined8 FUN_1450d68a0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x70))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  uVar2 = FUN_145373cd0(param_1 + 0x15,param_2,param_3);
  if ((int)uVar2 == 1) {
    FUN_145374600(param_1 + 0x17,param_2,param_3);
    (**(code **)(*param_1 + 0xf0))(param_1,param_2,param_3,0);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1450d6920 FUN_1450d6920 body=448 status=ok
// SIG undefined FUN_1450d6920(void)

void FUN_1450d6920(longlong *param_1,undefined4 param_2,uint param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  
  lVar3 = FUN_145373f10(param_1 + 0x17,param_4,param_1);
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x20) =
         ~(byte)param_3 & *(byte *)(lVar3 + 0x20) | (byte)param_3 & (byte)param_2;
  }
  iVar2 = (**(code **)(*param_1 + 0x70))(param_1);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  if (param_4 == 0) {
    FUN_145374600(param_1 + 0x17,param_2,param_3);
  }
  iVar2 = (**(code **)(*param_1 + 0x70))(param_1);
  if ((((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x70))(param_1), iVar2 != 10)) &&
      (param_1[0xf] != 0)) && ((*(uint *)(param_1 + 0x13) & 0x1f000) == 0)) {
    return;
  }
  puVar4 = (uint *)param_1[0xb];
  if ((puVar4 == (uint *)0x0) || ((*puVar4 >> 0x1d & 1) == 0)) {
    cVar1 = (**(code **)(param_1[5] + 0x18))(param_1 + 5,0x1d);
    puVar4 = (uint *)param_1[0xb];
    if (cVar1 != '\0') goto LAB_1450d69fb;
  }
  else {
LAB_1450d69fb:
    param_3 = param_3 & 0xfffffffe;
  }
  if ((puVar4 == (uint *)0x0) || ((*puVar4 >> 0x1e & 1) == 0)) {
    cVar1 = (**(code **)(param_1[5] + 0x18))(param_1 + 5,0x1e);
    puVar4 = (uint *)param_1[0xb];
    if (cVar1 == '\0') goto LAB_1450d6a2a;
  }
  param_3 = param_3 & 0xfffffffd;
LAB_1450d6a2a:
  if (((puVar4 != (uint *)0x0) && ((int)*puVar4 < 0)) ||
     (cVar1 = (**(code **)(param_1[5] + 0x18))(param_1 + 5,0x1f), cVar1 != '\0')) {
    param_3 = param_3 & 0xfffffffb;
  }
  if ((((ulonglong *)param_1[0xb] != (ulonglong *)0x0) &&
      ((*(ulonglong *)param_1[0xb] & 0x100000000) != 0)) ||
     (cVar1 = (**(code **)(param_1[5] + 0x18))(param_1 + 5,0x20), cVar1 != '\0')) {
    param_3 = param_3 & 0xfffffff7;
  }
  if ((((ulonglong *)param_1[0xb] != (ulonglong *)0x0) &&
      ((*(ulonglong *)param_1[0xb] & 0x200000000) != 0)) ||
     (cVar1 = (**(code **)(param_1[5] + 0x18))(param_1 + 5,0x21), cVar1 != '\0')) {
    param_3 = param_3 & 0xffffffef;
  }
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0xf0))(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 1450d6ae0 FUN_1450d6ae0 body=47 status=ok
// SIG undefined FUN_1450d6ae0(void)

void FUN_1450d6ae0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0x24);
  }
  FUN_1450d6920(param_1,uVar1,param_2,param_3,1);
  return;
}



// FUNCTION 1450d6b10 FUN_1450d6b10 body=203 status=ok
// SIG undefined FUN_1450d6b10(void)

void FUN_1450d6b10(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  lVar1 = param_1[0x16];
  uVar2 = (ulonglong)param_2;
  if ((lVar1 == 0) || (lVar1 + 4 == 0)) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(lVar1 + 9 + uVar2 * 8);
    uVar3 = *(undefined4 *)(uVar2 * 8 + lVar1 + 4);
  }
  lVar1 = FUN_145373f10(param_1 + 0x17,param_3,param_1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x28 + uVar2 * 8) != '\0') {
      return;
    }
    *(undefined4 *)(uVar2 * 8 + 0x24 + lVar1) = uVar3;
    *(undefined1 *)(uVar2 * 8 + 0x29 + lVar1) = uVar4;
  }
  if (param_3 == 0) {
    FUN_145374250(param_1 + 0x17,uVar2,uVar3,uVar4);
  }
  (**(code **)(*param_1 + 0xe8))(param_1,uVar2,param_3);
  return;
}



// FUNCTION 1450d6be0 FUN_1450d6be0 body=155 status=ok
// SIG undefined FUN_1450d6be0(void)

void FUN_1450d6be0(longlong *param_1,uint param_2,undefined4 param_3,undefined1 param_4,
                  longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2;
  lVar1 = FUN_145373f10(param_1 + 0x17,param_5,param_1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x28 + uVar2 * 8) != '\0') {
      return;
    }
    *(undefined4 *)(lVar1 + 0x24 + uVar2 * 8) = param_3;
    *(undefined1 *)(lVar1 + 0x29 + uVar2 * 8) = param_4;
  }
  if (param_5 == 0) {
    FUN_145374250(param_1 + 0x17,uVar2,param_3,param_4);
  }
  (**(code **)(*param_1 + 0xe8))(param_1,uVar2,param_5);
  return;
}



// FUNCTION 1450d6c80 FUN_1450d6c80 body=458 status=ok
// SIG undefined FUN_1450d6c80(void)

uint * FUN_1450d6c80(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  uint *extraout_RAX;
  uint *puVar7;
  longlong *plVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  uint local_18 [4];
  
  lVar6 = DAT_14c791060;
  bVar2 = *(byte *)(param_1 + 0xd4);
  while ((((bVar2 & 8) == 0 && (lVar4 = *(longlong *)(param_1 + 0x78), lVar4 != 0)) &&
         (*(longlong *)(param_1 + 0x80) == 0))) {
    bVar2 = *(byte *)(lVar4 + 0xd4);
    param_1 = lVar4;
  }
  pbVar5 = *(byte **)(param_1 + 0x90);
  puVar11 = (uint *)0x0;
  local_18[0] = DAT_14c72f554;
  puVar10 = puVar11;
  if (pbVar5 != (byte *)0x0) {
    puVar7 = puVar11;
    do {
      uVar9 = (int)puVar7 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar9 + (longlong)pbVar5) == 0x39) {
        puVar10 = (uint *)(pbVar5 + (longlong)puVar7 * 4 + ((ulonglong)(*pbVar5 + 4) & 0xfffffffc));
        break;
      }
      puVar7 = (uint *)(ulonglong)uVar9;
    } while (uVar9 < *pbVar5);
  }
  puVar7 = local_18;
  if (puVar10 != (uint *)0x0) {
    puVar7 = puVar10;
  }
  uVar9 = *puVar7;
  if (uVar9 == 0xffffffff) {
    plVar8 = (longlong *)*param_2;
    *param_2 = 0;
  }
  else {
    do {
      while (iVar3 = *(int *)(lVar6 + 0x370), iVar3 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x378));
        if (*(int *)(lVar6 + 0x370) < 0) goto LAB_1450d6d37;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x378));
      }
      LOCK();
      bVar12 = iVar3 == *(int *)(lVar6 + 0x370);
      if (bVar12) {
        *(int *)(lVar6 + 0x370) = iVar3 + 1;
      }
      UNLOCK();
    } while (!bVar12);
LAB_1450d6d37:
    if (*(uint *)(lVar6 + 0x3b8) != 0) {
      for (puVar10 = *(uint **)(*(longlong *)(lVar6 + 0x3b0) +
                               ((ulonglong)uVar9 % (ulonglong)*(uint *)(lVar6 + 0x3b8)) * 8);
          (puVar7 = puVar11, puVar10 != (uint *)0x0 && (puVar7 = puVar10, puVar10[4] != uVar9));
          puVar10 = *(uint **)(puVar10 + 2)) {
      }
      puVar11 = puVar7;
      if (puVar7 != (uint *)0x0) {
        LOCK();
        puVar7[5] = puVar7[5] + 1;
        UNLOCK();
      }
    }
    uVar9 = *(uint *)(lVar6 + 0x370);
    while (-1 < (int)uVar9) {
      LOCK();
      uVar1 = *(uint *)(lVar6 + 0x370);
      bVar12 = uVar9 == uVar1;
      if (bVar12) {
        *(uint *)(lVar6 + 0x370) = uVar9 - 1;
        uVar1 = uVar9;
      }
      puVar7 = (uint *)(ulonglong)uVar1;
      UNLOCK();
      if (bVar12) {
        if ((uVar9 - 1 == 0) &&
           (puVar7 = (uint *)(ulonglong)*(uint *)(lVar6 + 0x3a0), 0 < (int)*(uint *)(lVar6 + 0x3a0))
           ) {
          uVar9 = SetEvent(*(HANDLE *)(lVar6 + 0x3a8));
          puVar7 = (uint *)(ulonglong)uVar9;
        }
        goto LAB_1450d6de5;
      }
      uVar9 = *(uint *)(lVar6 + 0x370);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x378));
    puVar7 = extraout_RAX;
LAB_1450d6de5:
    plVar8 = (longlong *)*param_2;
    *param_2 = puVar11;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    puVar10 = (uint *)((longlong)plVar8 + 0x14);
    uVar9 = *puVar10;
    puVar7 = (uint *)(ulonglong)uVar9;
    *puVar10 = *puVar10 - 1;
    UNLOCK();
    if (uVar9 == 1) {
      puVar7 = (uint *)(**(code **)(*plVar8 + 0x18))();
    }
  }
  *(undefined2 *)(param_2 + 1) = 0;
  return puVar7;
}



// FUNCTION 1450d6e50 FUN_1450d6e50 body=204 status=ok
// SIG undefined FUN_1450d6e50(void)

undefined8 FUN_1450d6e50(longlong param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (param_2 <= *(uint *)(param_1 + 0x54)) {
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  if (*(void **)(param_1 + 0x48) == (void *)0x0) {
    pvVar3 = AK::MemoryMgr::Malloc(0,(ulonglong)param_2 << 3);
    if (pvVar3 != (void *)0x0) {
      if ((*(void **)(param_1 + 0x48) != (void *)0x0) && (*(void **)(param_1 + 0x48) != pvVar3)) {
        uVar5 = 0;
        if ((ulonglong)uVar1 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar3 + uVar5 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar1);
        }
        AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x48));
      }
      goto LAB_1450d6eef;
    }
  }
  else {
    pvVar3 = AK::MemoryMgr::Realloc(0,*(void **)(param_1 + 0x48),(ulonglong)param_2 << 3);
    if (pvVar3 != (void *)0x0) {
LAB_1450d6eef:
      *(void **)(param_1 + 0x48) = pvVar3;
      bVar2 = true;
      *(uint *)(param_1 + 0x54) = param_2;
      goto LAB_1450d6ef8;
    }
  }
  bVar2 = false;
LAB_1450d6ef8:
  uVar4 = 0x34;
  if (bVar2) {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1450d6f20 FUN_1450d6f20 body=376 status=ok
// SIG undefined FUN_1450d6f20(void)

undefined8
FUN_1450d6f20(longlong param_1,undefined4 param_2,char param_3,undefined1 param_4,uint param_5,
             undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  
  puVar5 = (ulonglong *)0x0;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    puVar2 = AK::MemoryMgr::Malloc(2,0x28);
    puVar4 = puVar5;
    if (puVar2 != (ulonglong *)0x0) {
      *(undefined4 *)((longlong)puVar2 + 0x21) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x25) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x27) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 4) = 0;
      puVar4 = puVar2;
    }
    *(ulonglong **)(param_1 + 0x58) = puVar4;
    if (puVar4 == (ulonglong *)0x0) {
      return 0x34;
    }
  }
  uVar3 = FUN_145352770(param_1 + 0x48,0,*(undefined4 *)(param_1 + 0x20),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,param_9,0);
  if ((int)uVar3 != 1) {
    return uVar3;
  }
  puVar4 = *(ulonglong **)(param_1 + 0x58);
  if (*(ulonglong **)(param_1 + 0x58) == (ulonglong *)0x0) {
    puVar4 = AK::MemoryMgr::Malloc(2,0x28);
    if (puVar4 != (ulonglong *)0x0) {
      *(undefined4 *)((longlong)puVar4 + 0x21) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x25) = 0;
      *(undefined1 *)((longlong)puVar4 + 0x27) = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined1 *)(puVar4 + 4) = 0;
      puVar5 = puVar4;
    }
    *(ulonglong **)(param_1 + 0x58) = puVar5;
    puVar4 = puVar5;
    if (puVar5 == (ulonglong *)0x0) {
      return 1;
    }
  }
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 1L << ((ulonglong)param_5 & 0x3f);
  if (((uVar1 >> ((ulonglong)param_5 & 0x3f) & 1) == 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    FUN_145074210();
  }
  if (param_3 == '\x04') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x58) + 0x20) = 1;
  }
  return 1;
}



// FUNCTION 1450d70a0 FUN_1450d70a0 body=275 status=ok
// SIG undefined FUN_1450d70a0(void)

void FUN_1450d70a0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong uVar7;
  void *local_res8;
  undefined1 local_res18 [16];
  
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (cVar5 = FUN_1453528e0(param_1 + 0x48,param_2,&local_res8), cVar5 != '\0')) {
    uVar1 = *(uint *)(param_1 + 0x50);
    uVar2 = *(uint *)((longlong)local_res8 + 8);
    lVar3 = *(longlong *)(param_1 + 0x48);
    plVar6 = (longlong *)FUN_145352940(param_1 + 0x48,local_res18,uVar2);
    if (*plVar6 == lVar3 + (ulonglong)uVar1 * 8) {
      uVar7 = **(ulonglong **)(param_1 + 0x58);
      if ((uVar7 >> ((ulonglong)uVar2 & 0x3f) & 1) != 0) {
        uVar7 = uVar7 & ~(1L << ((ulonglong)uVar2 & 0x3f));
        **(ulonglong **)(param_1 + 0x58) = uVar7;
      }
      if (((uVar7 == 0) &&
          (pvVar4 = *(void **)(param_1 + 0x58), *(longlong *)((longlong)pvVar4 + 8) == 0)) &&
         ((*(longlong *)(param_1 + 0x38) == 0 ||
          (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) == 0)))) {
        if (pvVar4 != (void *)0x0) {
          if (*(void **)((longlong)pvVar4 + 0x10) != (void *)0x0) {
            *(undefined4 *)((longlong)pvVar4 + 0x18) = 0;
            AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar4 + 0x10));
            *(undefined8 *)((longlong)pvVar4 + 0x10) = 0;
            *(undefined4 *)((longlong)pvVar4 + 0x1c) = 0;
          }
          AK::MemoryMgr::Free(2,pvVar4);
        }
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
    }
    if (local_res8 != (void *)0x0) {
      if (*(void **)((longlong)local_res8 + 0x18) != (void *)0x0) {
        AK::MemoryMgr::Free(0,*(void **)((longlong)local_res8 + 0x18));
      }
      *(undefined8 *)((longlong)local_res8 + 0x18) = 0;
      *(undefined8 *)((longlong)local_res8 + 0x20) = 0;
      *(undefined4 *)((longlong)local_res8 + 0x28) = 1;
      AK::MemoryMgr::Free(2,local_res8);
    }
  }
  return;
}



// FUNCTION 1450d71c0 FUN_1450d71c0 body=136 status=ok
// SIG undefined FUN_1450d71c0(void)

undefined1 FUN_1450d71c0(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  
  cVar1 = FUN_145354810(param_1 + 0x28);
  while( true ) {
    if (cVar1 != '\0') {
      return 1;
    }
    if ((param_4 == '\0') && (*(longlong *)(param_1 + 0x80) != 0)) {
      param_4 = '\x01';
      cVar1 = FUN_14508e5f0(*(longlong *)(param_1 + 0x80),param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    param_1 = *(longlong *)(param_1 + 0x78);
    if (param_1 == 0) break;
    cVar1 = FUN_145354810(param_1 + 0x28,param_2,param_3);
  }
  return 0;
}



// FUNCTION 1450d7250 FUN_1450d7250 body=32 status=ok
// SIG undefined FUN_1450d7250(void)

int FUN_1450d7250(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar1 = FUN_1450d7250();
    return iVar1 + 1;
  }
  return 0;
}



// FUNCTION 1450d7270 FUN_1450d7270 body=152 status=ok
// SIG undefined FUN_1450d7270(void)

undefined8 FUN_1450d7270(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    return 1;
  }
  *(ulonglong *)(param_1 + 0x98) = *(ulonglong *)(param_1 + 0x98) | 0x20020000ffe;
  puVar1 = AK::MemoryMgr::Malloc(2,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    FUN_14539f1d0();
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x68) = puVar1;
    return 1;
  }
  return 0x34;
}



// FUNCTION 1450d7310 FUN_1450d7310 body=35 status=ok
// SIG undefined FUN_1450d7310(void)

longlong FUN_1450d7310(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  while( true ) {
    if (lVar1 != 0) {
      return *(longlong *)(param_1 + 0x68) + 0x38;
    }
    param_1 = *(longlong *)(param_1 + 0x78);
    if (param_1 == 0) break;
    lVar1 = *(longlong *)(param_1 + 0x68);
  }
  return 0;
}



// FUNCTION 1450d7340 FUN_1450d7340 body=217 status=ok
// SIG undefined FUN_1450d7340(void)

void FUN_1450d7340(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x98);
  while (((uVar1 & 0x20020000ffe) == 0 && (lVar2 = *(longlong *)(param_1 + 0x78), lVar2 != 0))) {
    uVar1 = *(ulonglong *)(lVar2 + 0x98);
    param_1 = lVar2;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    puVar5 = AK::MemoryMgr::Malloc(5,0x38);
    if (puVar5 == (undefined8 *)0x0) {
      *param_2 = 0;
      return;
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    FUN_14539f1d0(puVar5);
    puVar3 = *(undefined8 **)(param_1 + 0x68);
    uVar4 = puVar3[1];
    *puVar5 = *puVar3;
    puVar5[1] = uVar4;
    uVar4 = puVar3[3];
    puVar5[2] = puVar3[2];
    puVar5[3] = uVar4;
    uVar4 = puVar3[5];
    puVar5[4] = puVar3[4];
    puVar5[5] = uVar4;
    puVar5[6] = puVar3[6];
    *param_2 = puVar5;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1450d7420 FUN_1450d7420 body=1033 status=ok
// SIG undefined FUN_1450d7420(void)

undefined8 FUN_1450d7420(longlong param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  bool bVar10;
  float local_res8 [2];
  float local_38 [4];
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  lVar6 = param_1;
  if (param_1 == 0) {
    return 0xf;
  }
  do {
    lVar4 = lVar6;
    if ((*(ulonglong *)(lVar4 + 0x98) & 0x20020000ffe) != 0) break;
    lVar6 = *(longlong *)(lVar4 + 0x78);
  } while (*(longlong *)(lVar4 + 0x78) != 0);
  pfVar9 = (float *)0x0;
  local_38[0] = 0.0;
  *(byte *)(param_2 + 1) = *(byte *)(lVar4 + 0xd5) >> 2 & 7;
  *(byte *)((longlong)param_2 + 5) = *(byte *)(param_1 + 0xd0) & 7;
  *(byte *)((longlong)param_2 + 6) = *(byte *)(param_1 + 0xd0) >> 7;
  *(byte *)((longlong)param_2 + 7) = *(byte *)(param_1 + 0xd0) >> 3 & 7;
  lVar6 = DAT_14c791060;
  pbVar3 = *(byte **)(param_1 + 0x90);
  pfVar7 = pfVar9;
  if (pbVar3 != (byte *)0x0) {
    pfVar5 = pfVar9;
    do {
      uVar8 = (int)pfVar5 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar8 + (longlong)pbVar3) == 0x46) {
        pfVar7 = (float *)(pbVar3 + (longlong)pfVar5 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
        break;
      }
      pfVar5 = (float *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar3);
  }
  pfVar5 = local_38;
  if (pfVar7 != (float *)0x0) {
    pfVar5 = pfVar7;
  }
  fVar1 = *pfVar5;
  do {
    while (iVar2 = *(int *)(lVar6 + 0x210), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x218));
      if (*(int *)(lVar6 + 0x210) < 0) goto LAB_1450d7537;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x218));
    }
    LOCK();
    bVar10 = iVar2 == *(int *)(lVar6 + 0x210);
    if (bVar10) {
      *(int *)(lVar6 + 0x210) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar10);
LAB_1450d7537:
  pfVar7 = pfVar9;
  if (*(uint *)(lVar6 + 600) != 0) {
    for (pfVar5 = *(float **)
                   (*(longlong *)(lVar6 + 0x250) +
                   ((ulonglong)(uint)fVar1 % (ulonglong)*(uint *)(lVar6 + 600)) * 8);
        (pfVar7 = pfVar9, pfVar5 != (float *)0x0 && (pfVar7 = pfVar5, pfVar5[4] != fVar1));
        pfVar5 = *(float **)(pfVar5 + 2)) {
    }
    if (pfVar7 != (float *)0x0) {
      LOCK();
      pfVar7[5] = (float)((int)pfVar7[5] + 1);
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar6 + 0x210);
  while (-1 < iVar2) {
    LOCK();
    bVar10 = iVar2 == *(int *)(lVar6 + 0x210);
    if (bVar10) {
      *(int *)(lVar6 + 0x210) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar10) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar6 + 0x240))) {
        SetEvent(*(HANDLE *)(lVar6 + 0x248));
      }
      goto LAB_1450d75eb;
    }
    iVar2 = *(int *)(lVar6 + 0x210);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x218));
LAB_1450d75eb:
  if (pfVar7 != (float *)0x0) {
    *(byte *)(param_2 + 2) = *(byte *)(param_1 + 0xd0) >> 6 & 1;
    *(byte *)((longlong)param_2 + 9) = *(byte *)((longlong)pfVar7 + 0x20b) & 1;
    if ((*(byte *)((longlong)pfVar7 + 0x20b) & 1) != 0) {
      param_2[3] = pfVar7[6];
      param_2[4] = pfVar7[7];
      param_2[5] = pfVar7[8];
      param_2[6] = pfVar7[9];
      param_2[7] = pfVar7[10];
    }
    if (*(byte *)(pfVar7 + 0x7e) != 0xff) {
      lVar6 = (ulonglong)*(byte *)(pfVar7 + 0x7e) + 2;
      pfVar5 = pfVar7 + lVar6 * 6;
      if ((*(longlong *)(pfVar7 + lVar6 * 6) != 0) && (pfVar5 != (float *)0x0)) {
        param_2[8] = *(float *)(*(longlong *)(pfVar7 + lVar6 * 6) +
                               (ulonglong)((int)pfVar5[2] - 2) * 0xc);
        param_2[9] = *(float *)(*(longlong *)pfVar5 + 4 + (ulonglong)((int)pfVar5[2] - 2) * 0xc);
      }
    }
    if (*(byte *)((longlong)pfVar7 + 0x1f9) != 0xff) {
      lVar6 = (ulonglong)*(byte *)((longlong)pfVar7 + 0x1f9) + 2;
      if ((*(longlong *)(pfVar7 + lVar6 * 6) != 0) && (pfVar7 + lVar6 * 6 != (float *)0x0)) {
        param_2[10] = *(float *)(*(longlong *)(pfVar7 + lVar6 * 6) + 4 +
                                (ulonglong)((int)(pfVar7 + lVar6 * 6)[2] - 2) * 0xc);
      }
    }
    if (*(byte *)((longlong)pfVar7 + 0x1fa) != 0xff) {
      lVar6 = (ulonglong)*(byte *)((longlong)pfVar7 + 0x1fa) + 2;
      if ((*(longlong *)(pfVar7 + lVar6 * 6) != 0) && (pfVar7 + lVar6 * 6 != (float *)0x0)) {
        param_2[0xb] = *(float *)(*(longlong *)(pfVar7 + lVar6 * 6) + 4 +
                                 (ulonglong)((int)(pfVar7 + lVar6 * 6)[2] - 2) * 0xc);
      }
    }
    if (*(byte *)((longlong)pfVar7 + 0x1fb) != 0xff) {
      lVar6 = (ulonglong)*(byte *)((longlong)pfVar7 + 0x1fb) + 2;
      if ((*(longlong *)(pfVar7 + lVar6 * 6) != 0) && (pfVar7 + lVar6 * 6 != (float *)0x0)) {
        param_2[0xc] = *(float *)(*(longlong *)(pfVar7 + lVar6 * 6) + 4 +
                                 (ulonglong)((int)(pfVar7 + lVar6 * 6)[2] - 2) * 0xc);
      }
    }
    if (*(byte *)(pfVar7 + 0x7f) != 0xff) {
      lVar6 = (ulonglong)*(byte *)(pfVar7 + 0x7f) + 2;
      if ((*(longlong *)(pfVar7 + lVar6 * 6) != 0) && (pfVar7 + lVar6 * 6 != (float *)0x0)) {
        param_2[0xd] = *(float *)(*(longlong *)(pfVar7 + lVar6 * 6) + 4 +
                                 (ulonglong)((int)(pfVar7 + lVar6 * 6)[2] - 2) * 0xc);
      }
    }
    LOCK();
    pfVar5 = pfVar7 + 5;
    fVar1 = *pfVar5;
    *pfVar5 = (float)((int)*pfVar5 - 1);
    UNLOCK();
    if (fVar1 == 1.4013e-45) {
      (**(code **)(*(longlong *)pfVar7 + 0x18))(pfVar7);
    }
  }
  pbVar3 = *(byte **)(lVar4 + 0x90);
  local_res8[0] = 0.0;
  if (pbVar3 != (byte *)0x0) {
    pfVar7 = pfVar9;
    do {
      uVar8 = (int)pfVar7 + 1;
      if (pbVar3[uVar8] == 0xe) {
        pfVar9 = (float *)(pbVar3 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) + (longlong)pfVar7 * 4);
        break;
      }
      pfVar7 = (float *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar3);
  }
  pfVar7 = local_res8;
  if (pfVar9 != (float *)0x0) {
    pfVar7 = pfVar9;
  }
  *param_2 = *pfVar7 * 0.01;
  return 1;
}



// FUNCTION 1450d7830 FUN_1450d7830 body=97 status=ok
// SIG undefined FUN_1450d7830(void)

void FUN_1450d7830(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  do {
    lVar1 = param_1;
    if ((*(ulonglong *)(lVar1 + 0x98) & 0x20020000ffe) != 0) break;
    param_1 = *(longlong *)(lVar1 + 0x78);
  } while (*(longlong *)(lVar1 + 0x78) != 0);
  FUN_1450d4c90(lVar1);
  if (param_4 != 0) {
    FUN_1450d5040(lVar1,param_2,param_4 + 4);
  }
  return;
}



// FUNCTION 1450d78a0 FUN_1450d78a0 body=517 status=ok
// SIG undefined FUN_1450d78a0(void)

void FUN_1450d78a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  byte local_res8 [8];
  
  uVar1 = *(ulonglong *)(param_1 + 0x98);
  while (((uVar1 & 0x20020000ffe) == 0 && (lVar2 = *(longlong *)(param_1 + 0x78), lVar2 != 0))) {
    uVar1 = *(ulonglong *)(lVar2 + 0x98);
    param_1 = lVar2;
  }
  FUN_1450d4c90(param_1);
  pbVar9 = (byte *)0x0;
  *(undefined2 *)(param_4 + 5) = *(undefined2 *)(param_1 + 0xd0);
  if (((*(ulonglong **)(param_1 + 0x58) != (ulonglong *)0x0) &&
      ((**(ulonglong **)(param_1 + 0x58) & 0x400000000000) != 0)) ||
     (cVar3 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28,0x2e),
     cVar3 != '\0')) {
    fVar12 = 0.0;
    cVar3 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28,0x2e);
    if (cVar3 != '\0') {
      fVar12 = (float)FUN_1450c0e90(param_1 + 0x28,0x2e);
    }
    if ((*(ulonglong **)(param_1 + 0x58) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x58) & 0x400000000000) != 0)) {
      fVar10 = (float)FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0x2e,param_2);
      fVar12 = fVar12 + fVar10;
    }
    bVar5 = 0;
    if (0.0 < fVar12) {
      bVar5 = 0x40;
    }
    *(byte *)(param_4 + 5) = bVar5 | *(byte *)(param_4 + 5) & 0xbf;
  }
  if ((*(uint **)(param_1 + 0x58) == (uint *)0x0) ||
     ((**(uint **)(param_1 + 0x58) >> 0x17 & 1) == 0)) {
    pbVar4 = *(byte **)(param_1 + 0x90);
    local_res8[0] = 0;
    local_res8[1] = 0;
    local_res8[2] = 200;
    local_res8[3] = 0x42;
    pbVar8 = pbVar9;
    if (pbVar4 != (byte *)0x0) {
      pbVar7 = pbVar9;
      do {
        uVar6 = (int)pbVar7 + 1;
        if (pbVar4[uVar6] == 0x47) {
          pbVar8 = pbVar4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc) + (longlong)pbVar7 * 4;
          break;
        }
        pbVar7 = (byte *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar4);
    }
    pbVar4 = local_res8;
    if (pbVar8 != (byte *)0x0) {
      pbVar4 = pbVar8;
    }
    *param_4 = *(undefined4 *)pbVar4;
  }
  else {
    uVar11 = FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0x17,param_2);
    *param_4 = uVar11;
  }
  pbVar4 = *(byte **)(param_1 + 0x90);
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  if (pbVar4 != (byte *)0x0) {
    pbVar8 = pbVar9;
    do {
      uVar6 = (int)pbVar8 + 1;
      if (pbVar4[uVar6] == 0x46) {
        pbVar9 = pbVar4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc) + (longlong)pbVar8 * 4;
        break;
      }
      pbVar8 = (byte *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar4);
  }
  pbVar4 = local_res8;
  if (pbVar9 != (byte *)0x0) {
    pbVar4 = pbVar9;
  }
  param_4[1] = *(undefined4 *)pbVar4;
  return;
}



// FUNCTION 1450d7ab0 FUN_1450d7ab0 body=15 status=ok
// SIG undefined FUN_1450d7ab0(void)

void FUN_1450d7ab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1453742d0(param_1 + 0xb8,param_2,param_3,param_1);
  return;
}



// FUNCTION 1450d7ac0 FUN_1450d7ac0 body=14 status=ok
// SIG undefined FUN_1450d7ac0(void)

void FUN_1450d7ac0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 == 0) {
    return;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(short *)(puVar2 + 2) == 1) {
      if ((void *)*puVar2 != (void *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 0;
        AK::MemoryMgr::Free(0,(void *)*puVar2);
        *puVar2 = 0;
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      AK::MemoryMgr::Free(0,puVar2);
      *(undefined8 *)(lVar1 + 0x40) = 0;
      return;
    }
    *(short *)(puVar2 + 2) = *(short *)(puVar2 + 2) + -1;
  }
  *(undefined8 *)(lVar1 + 0x40) = 0;
  return;
}



// FUNCTION 1450d7ad0 FUN_1450d7ad0 body=1111 status=ok
// SIG undefined FUN_1450d7ad0(void)

ulonglong FUN_1450d7ad0(longlong *param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar8 = (**(code **)(*param_1 + 0x1f0))();
  if (((int)uVar8 == 1) && (param_4 == '\0')) {
    uVar8 = (**(code **)(*param_1 + 0x1f8))(param_1,param_2,param_3);
    if ((int)uVar8 == 1) {
      cVar3 = *(char *)*param_2;
      *param_2 = (char *)*param_2 + 1;
      *(byte *)((longlong)param_1 + 0xd4) =
           (cVar3 << 3 ^ *(byte *)((longlong)param_1 + 0xd4)) & 8 ^
           *(byte *)((longlong)param_1 + 0xd4);
      uVar7 = *(uint *)*param_2;
      *param_2 = (uint *)*param_2 + 1;
      piVar1 = DAT_14c791060;
      uVar8 = uVar8 & 0xffffffff;
      if (uVar7 != 0) {
        do {
          while (iVar6 = piVar1[0x16], iVar6 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
            if (piVar1[0x16] < 0) goto LAB_1450d7b89;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
          }
          LOCK();
          bVar12 = iVar6 == piVar1[0x16];
          if (bVar12) {
            piVar1[0x16] = iVar6 + 1;
          }
          UNLOCK();
        } while (!bVar12);
LAB_1450d7b89:
        if (piVar1[0x28] == 0) {
          lVar11 = 0;
        }
        else {
          for (lVar11 = *(longlong *)
                         (*(longlong *)(piVar1 + 0x26) +
                         ((ulonglong)uVar7 % (ulonglong)(uint)piVar1[0x28]) * 8); lVar11 != 0;
              lVar11 = *(longlong *)(lVar11 + 8)) {
            if (*(uint *)(lVar11 + 0x10) == uVar7) goto LAB_1450d7bc2;
          }
          lVar11 = 0;
LAB_1450d7bc2:
          if (lVar11 != 0) {
            LOCK();
            *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar6 = piVar1[0x16];
        while (-1 < iVar6) {
          LOCK();
          bVar12 = iVar6 == piVar1[0x16];
          if (bVar12) {
            piVar1[0x16] = iVar6 + -1;
          }
          UNLOCK();
          if (bVar12) {
            if ((iVar6 + -1 == 0) && (0 < piVar1[0x22])) {
              SetEvent(*(HANDLE *)(piVar1 + 0x24));
            }
            goto LAB_1450d7c1f;
          }
          iVar6 = piVar1[0x16];
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
LAB_1450d7c1f:
        plVar10 = (longlong *)(lVar11 + -0x10);
        if (lVar11 == 0) {
          plVar10 = (longlong *)0x0;
        }
        if (plVar10 == (longlong *)0x0) {
          return 0x5c;
        }
        uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10);
        uVar8 = (ulonglong)uVar7;
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0x24);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(plVar10[2] + 0x18))();
        }
        if (uVar7 != 1) {
          return uVar8;
        }
      }
      uVar7 = *(uint *)*param_2;
      *param_2 = (uint *)*param_2 + 1;
      piVar1 = DAT_14c791060;
      if (uVar7 != 0) {
        do {
          while (iVar6 = *piVar1, iVar6 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
            if (*piVar1 < 0) goto LAB_1450d7c8f;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
          }
          LOCK();
          iVar2 = *piVar1;
          if (iVar6 == iVar2) {
            *piVar1 = iVar6 + 1;
          }
          UNLOCK();
        } while (iVar6 != iVar2);
LAB_1450d7c8f:
        if (piVar1[0x12] == 0) {
          lVar11 = 0;
        }
        else {
          for (lVar11 = *(longlong *)
                         (*(longlong *)(piVar1 + 0x10) +
                         ((ulonglong)uVar7 % (ulonglong)(uint)piVar1[0x12]) * 8); lVar11 != 0;
              lVar11 = *(longlong *)(lVar11 + 8)) {
            if (*(uint *)(lVar11 + 0x10) == uVar7) goto LAB_1450d7cc2;
          }
          lVar11 = 0;
LAB_1450d7cc2:
          if (lVar11 != 0) {
            LOCK();
            *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar6 = *piVar1;
        while (-1 < iVar6) {
          LOCK();
          iVar2 = *piVar1;
          if (iVar6 == iVar2) {
            *piVar1 = iVar6 + -1;
          }
          UNLOCK();
          if (iVar6 == iVar2) {
            if ((iVar6 + -1 == 0) && (0 < piVar1[0xc])) {
              SetEvent(*(HANDLE *)(piVar1 + 0xe));
            }
            goto LAB_1450d7d49;
          }
          iVar6 = *piVar1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450d7d49:
        plVar10 = (longlong *)(lVar11 + -0x10);
        if (lVar11 == 0) {
          plVar10 = (longlong *)0x0;
        }
        if (plVar10 != (longlong *)0x0) {
          uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,param_1);
          uVar8 = (ulonglong)uVar7;
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0x24);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(plVar10[2] + 0x18))();
          }
          if (uVar7 != 1) {
            return uVar8;
          }
        }
      }
      bVar4 = *(byte *)*param_2;
      *param_2 = (byte *)*param_2 + 1;
      if ((*(byte *)(param_1 + 0x13) & 1) != (bVar4 & 1)) {
        if ((bVar4 & 1) == 0) {
          uVar9 = param_1[0x13] & 0xfffffffffffffffe;
        }
        else {
          uVar9 = param_1[0x13] | 1;
        }
        param_1[0x13] = uVar9;
        (**(code **)(*param_1 + 0x180))(param_1,0,0);
      }
      bVar5 = *(byte *)((longlong)param_1 + 0xd4);
      if (((bVar5 >> 5 ^ bVar4 >> 1) & 1) != 0) {
        *(byte *)((longlong)param_1 + 0xd4) = ((bVar4 >> 1) << 5 ^ bVar5) & 0x20 ^ bVar5;
        (**(code **)(*param_1 + 0x180))(param_1,0,0);
      }
      *(byte *)((longlong)param_1 + 0xd5) =
           ((bVar4 << 3 ^ *(byte *)((longlong)param_1 + 0xd5)) & 0x20 ^
           *(byte *)((longlong)param_1 + 0xd5)) & 0x3f ^ bVar4 << 3 & 0x40 | (bVar4 & 0xf0) << 3;
      *(byte *)((longlong)param_1 + 0xd6) =
           (bVar4 >> 5 ^ *(byte *)((longlong)param_1 + 0xd6)) & 1 ^
           *(byte *)((longlong)param_1 + 0xd6);
      if ((int)uVar8 == 1) {
        uVar7 = (**(code **)(*param_1 + 0x1e8))(param_1,param_2,param_3);
        uVar8 = (ulonglong)uVar7;
        if (uVar7 == 1) {
          uVar7 = FUN_1450d7f30(param_1,param_2,param_3);
          uVar8 = (ulonglong)uVar7;
          if (uVar7 == 1) {
            uVar7 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3);
            uVar8 = (ulonglong)uVar7;
            if (uVar7 == 1) {
              uVar7 = (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
              uVar8 = (ulonglong)uVar7;
              if (uVar7 == 1) {
                uVar7 = (**(code **)(param_1[5] + 0x68))(param_1 + 5,param_2,param_3);
                uVar8 = (ulonglong)uVar7;
                if (uVar7 == 1) {
                  uVar7 = FUN_1450db000(param_2,param_3,param_1);
                  uVar8 = (ulonglong)uVar7;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar8;
}



// FUNCTION 1450d7f30 FUN_1450d7f30 body=768 status=ok
// SIG undefined FUN_1450d7f30(void)

ulonglong FUN_1450d7f30(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  byte bVar12;
  byte bVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  
  bVar3 = *(byte *)*param_2;
  *param_2 = (longlong)((byte *)*param_2 + 1);
  uVar10 = *(ulonglong *)(param_1 + 0x98) | 0x20020000ffe;
  if ((bVar3 & 1) == 0) {
    uVar10 = *(ulonglong *)(param_1 + 0x98) & 0xfffffdffdffff001;
  }
  *(ulonglong *)(param_1 + 0x98) = uVar10;
  bVar12 = ((bVar3 >> 1) * '\x02' ^ *(byte *)(param_1 + 0xd5)) & 2 ^ *(byte *)(param_1 + 0xd5);
  *(byte *)(param_1 + 0xd5) = bVar12;
  if ((bVar3 & 1) != 0) {
    *(byte *)(param_1 + 0xd5) = bVar12 & 0xe3 | bVar3 & 0xc;
    *(byte *)(param_1 + 0xd0) = bVar3 >> 5 & 3 | *(byte *)(param_1 + 0xd0) & 0xf8;
    if ((bVar3 >> 1 & 1) != 0) {
      bVar3 = *(byte *)*param_2;
      *param_2 = (longlong)((byte *)*param_2 + 1);
      bVar13 = (bVar3 & 0xf8) << 3 ^ ((bVar3 & 3) << 3 | *(byte *)(param_1 + 0xd0) & 7);
      *(byte *)(param_1 + 0xd0) = bVar13 & 0x7f | (bVar3 & 0xf0) << 3;
      bVar12 = (bVar3 >> 5 ^ *(byte *)(param_1 + 0xd1)) & 1 ^ *(byte *)(param_1 + 0xd1);
      *(byte *)(param_1 + 0xd1) = (bVar3 >> 6 ^ bVar12) & 2 ^ bVar12;
      if (1 < (byte)((bVar13 & 7) - 1)) {
        return 1;
      }
      uVar10 = FUN_1450d7270(param_1);
      uVar17 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 1) {
        lVar6 = *(longlong *)(param_1 + 0x68);
        puVar14 = (uint *)0x0;
        bVar12 = *(byte *)*param_2;
        *param_2 = (longlong)((byte *)*param_2 + 1);
        *(uint *)(lVar6 + 0x10) = (uint)bVar12;
        *(uint *)(lVar6 + 0x30) =
             (bVar3 & 0xffffffc0) << 0x19 | *(uint *)(lVar6 + 0x30) & 0x7fffffff;
        uVar4 = *(undefined4 *)*param_2;
        *param_2 = (longlong)((undefined4 *)*param_2 + 1);
        *(undefined4 *)(lVar6 + 0x14) = uVar4;
        uVar9 = *(uint *)*param_2;
        puVar15 = (uint *)*param_2 + 1;
        *param_2 = (longlong)puVar15;
        puVar11 = puVar15;
        puVar16 = puVar14;
        if (uVar9 != 0) {
          puVar11 = puVar15 + (ulonglong)uVar9 * 4;
          *param_2 = (longlong)puVar11;
          puVar16 = puVar15;
        }
        uVar5 = *puVar11;
        puVar11 = puVar11 + 1;
        *param_2 = (longlong)puVar11;
        uVar10 = uVar17;
        if ((uVar5 != 0) && (*param_2 = (longlong)(puVar11 + (ulonglong)uVar5 * 2), uVar9 != 0)) {
          uVar10 = 1;
          FUN_1450d7270(param_1);
          if ((*(longlong *)(param_1 + 0x68) != 0) &&
             (cVar8 = FUN_14539f2b0(*(longlong *)(param_1 + 0x68),puVar16,uVar9,puVar11,uVar5),
             cVar8 != '\0')) {
            uVar9 = FUN_14539f440(*(undefined8 *)(param_1 + 0x68),puVar16,uVar9,puVar11,uVar5);
            uVar10 = (ulonglong)uVar9;
          }
        }
        puVar15 = puVar14;
        if (uVar5 != 0) {
          do {
            puVar7 = (undefined4 *)*param_2;
            uVar4 = *puVar7;
            uVar1 = puVar7[1];
            uVar2 = puVar7[2];
            *param_2 = (longlong)(puVar7 + 3);
            FUN_1450d7270(param_1);
            lVar6 = *(longlong *)(param_1 + 0x68);
            if ((lVar6 != 0) && ((uint)puVar14 < (*(uint *)(lVar6 + 0x30) & 0x7fffffff))) {
              *(undefined4 *)(*(longlong *)(lVar6 + 0x28) + 0xc + (longlong)puVar15) = uVar4;
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x28) + 0x10 + (longlong)puVar15) =
                   uVar1;
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x28) + 0x14 + (longlong)puVar15) =
                   uVar2;
            }
            uVar9 = (uint)puVar14 + 1;
            puVar14 = (uint *)(ulonglong)uVar9;
            puVar15 = puVar15 + 6;
          } while (uVar9 < uVar5);
        }
      }
      return uVar10;
    }
  }
  return 1;
}



// FUNCTION 1450d8230 FUN_1450d8230 body=447 status=ok
// SIG undefined FUN_1450d8230(void)

undefined4 FUN_1450d8230(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  uVar4 = param_1[0x13] | 0x18000200000;
  if ((bVar1 & 1) == 0) {
    uVar4 = param_1[0x13] & 0xfffffe7fffdfffff;
  }
  param_1[0x13] = uVar4;
  (**(code **)(*param_1 + 0x180))(param_1,0,0);
  *(byte *)((longlong)param_1 + 0xd5) =
       (bVar1 >> 1 ^ *(byte *)((longlong)param_1 + 0xd5)) & 1 ^ *(byte *)((longlong)param_1 + 0xd5);
  uVar4 = param_1[0x13] | 0x7f83c00000;
  if ((bVar1 & 4) == 0) {
    uVar4 = param_1[0x13] & 0xffffff807c3fffff;
  }
  param_1[0x13] = uVar4;
  (**(code **)(*param_1 + 0x180))(param_1,0,0);
  uVar4 = param_1[0x13] | 0x40000000;
  if ((bVar1 & 0x10) == 0) {
    uVar4 = param_1[0x13] & 0xffffffffbfffffff;
  }
  param_1[0x13] = uVar4;
  (**(code **)(*param_1 + 0x180))(param_1,0,0);
  lVar5 = 0;
  uVar7 = 1;
  do {
    iVar6 = 0;
    if ((bVar1 & 8) != 0) {
      iVar6 = *(int *)*param_2;
      *param_2 = (int *)*param_2 + 1;
    }
    puVar3 = (undefined8 *)param_1[0x11];
    if (puVar3 == (undefined8 *)0x0) {
      if (iVar6 != 0) {
        puVar3 = AK::MemoryMgr::Malloc(2,0x10);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          param_1[0x11] = (longlong)puVar3;
          goto LAB_1450d838e;
        }
        param_1[0x11] = 0;
        uVar7 = 0x34;
        break;
      }
    }
    else {
LAB_1450d838e:
      *(int *)(lVar5 + (longlong)puVar3) = iVar6;
      (**(code **)(*param_1 + 0x180))(param_1,0,0);
    }
    lVar5 = lVar5 + 4;
  } while (lVar5 < 0x10);
  uVar2 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return uVar7;
}



// FUNCTION 1450d8400 FUN_1450d8400 body=15 status=ok
// SIG undefined FUN_1450d8400(void)

void FUN_1450d8400(longlong param_1,undefined8 param_2)

{
  FUN_145373f10(param_1 + 0xb8,param_2,param_1);
  return;
}



// FUNCTION 1450d8410 FUN_1450d8410 body=169 status=ok
// SIG undefined FUN_1450d8410(void)

void FUN_1450d8410(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1450d84d0(param_1,*(longlong *)(param_1 + 0xc0),0,param_3,param_2);
  }
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)*plVar2;
    plVar2 = plVar1 + (ulonglong)*(uint *)(plVar2 + 1) * 2;
    for (; (plVar1 != plVar2 && (*plVar1 != *param_4)); plVar1 = plVar1 + 2) {
    }
    plVar3 = plVar1 + 1;
    if (plVar1 == plVar2) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_1450d84d0(param_1,*plVar3,*param_4,param_3,param_2);
    }
  }
  return;
}



// FUNCTION 1450d84c0 FUN_1450d84c0 body=15 status=ok
// SIG undefined FUN_1450d84c0(void)

void FUN_1450d84c0(longlong param_1,undefined8 param_2)

{
  FUN_145374470(param_1 + 0xb8,param_2,param_1);
  return;
}



// FUNCTION 1450d84d0 FUN_1450d84d0 body=863 status=ok
// SIG undefined FUN_1450d84d0(void)

void FUN_1450d84d0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  float *pfVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  char local_res8 [8];
  longlong local_res10;
  undefined4 local_c0;
  uint local_b0 [4];
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  
  pbVar8 = *(byte **)(param_2 + 0x18);
  bVar4 = *(byte *)(param_1 + 0xd4);
  pfVar16 = (float *)0x0;
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  pfVar17 = pfVar16;
  uVar19 = uStack_98;
  local_res10 = param_2;
  if (pbVar8 != (byte *)0x0) {
    pfVar16 = (float *)(pbVar8 + ((ulonglong)*pbVar8 + 8 & 0xfffffff8));
    pfVar17 = (float *)(pbVar8 + 1);
  }
  do {
    pbVar8 = *(byte **)(param_2 + 0x18);
    pfVar12 = (float *)0x0;
    if (pbVar8 != (byte *)0x0) {
      pfVar12 = (float *)(pbVar8 + (ulonglong)*pbVar8 + 1);
    }
    if (pfVar17 == pfVar12) {
      return;
    }
    bVar5 = *(byte *)pfVar17;
    if (bVar5 == 0xb) {
      if (*pfVar16 != 1.0) {
        uVar18 = (uint)(*(longlong *)(param_1 + 0xc0) == param_2);
        plVar11 = (longlong *)*param_4;
        uVar19 = uVar18 | uVar19 & 0xffffff3c | 0x3c;
        plVar1 = plVar11 + (ulonglong)*(uint *)(param_4 + 1) * 3;
        while ((plVar11 != plVar1 &&
               ((*plVar11 != param_1 || (((uVar18 ^ *(uint *)(plVar11 + 1)) & 1) != 0))))) {
          plVar11 = plVar11 + 3;
        }
        uVar18 = *(uint *)(param_4 + 1);
        pfVar12 = (float *)(plVar11 + 2);
        if (plVar11 == (longlong *)(*param_4 + (ulonglong)uVar18 * 0x18)) {
          pfVar12 = (float *)0x0;
        }
        local_a0 = param_1;
        uStack_98 = uVar19;
        if (pfVar12 == (float *)0x0) {
          uVar7 = *(uint *)((longlong)param_4 + 0xc);
          if (uVar7 <= uVar18) {
            iVar13 = (uVar7 >> 1) + uVar7;
            if (uVar7 == 0) {
              iVar13 = 1;
            }
            cVar9 = FUN_145089db0(param_4,iVar13);
            param_2 = local_res10;
            if (cVar9 == '\0') goto LAB_1450d86c3;
          }
          param_2 = local_res10;
          if (uVar18 < *(uint *)((longlong)param_4 + 0xc)) {
            uVar18 = *(uint *)(param_4 + 1);
            *(uint *)(param_4 + 1) = uVar18 + 1;
            puVar2 = (undefined4 *)(*param_4 + (ulonglong)uVar18 * 0x18);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = (undefined4)local_a0;
              puVar2[1] = local_a0._4_4_;
              puVar2[2] = uStack_98;
              puVar2[3] = uStack_94;
              puVar2[4] = *pfVar16;
            }
          }
        }
        else {
          *pfVar12 = *pfVar16;
          param_2 = local_res10;
        }
      }
    }
    else {
      uVar14 = 1L << (bVar5 & 0x3f);
      if ((*(ulonglong *)(param_5 + 0x90 + (ulonglong)(bVar5 >> 6) * 8) & uVar14) != 0) {
        fVar3 = *pfVar16;
        uVar15 = (ulonglong)(uint)(&DAT_149c29000)[(int)(uint)bVar5];
        if ((&DAT_149c29000)[(int)(uint)bVar5] != 0x1a) {
          if ((DAT_14c791034 == 1) &&
             ((*(ulonglong *)(param_5 + 0xa0 + (ulonglong)(bVar5 >> 6) * 8) & uVar14) != 0)) {
            if (fVar3 != 0.0) {
              local_c0._0_2_ = CONCAT11(1,bVar5);
              local_c0 = (uint)CONCAT12(bVar4 >> 7,(undefined2)local_c0);
              fVar21 = 0.0;
              fVar20 = 0.0;
              local_b0[0] = local_c0;
              local_res8[0] = '\0';
              local_b0[1] = 0;
              local_b0[2] = uVar6;
              lVar10 = FUN_1450899e0(param_5 + 0x68,local_b0,local_res8);
              if (lVar10 != 0) {
                if (local_res8[0] == '\0') {
                  *(undefined4 *)(lVar10 + 0xc) = 0;
                }
                fVar21 = *(float *)(lVar10 + 0xc);
                fVar20 = fVar21 + fVar3;
                *(float *)(lVar10 + 0xc) = fVar20;
              }
              param_2 = local_res10;
              if (((*(ulonglong *)(param_5 + 0xb0 + (ulonglong)(bVar5 >> 6) * 8) >> (bVar5 & 0x3f) &
                   1) != 0) ||
                 ((fVar3 = *(float *)(param_5 + uVar15 * 4), fVar21 == fVar3 && (fVar20 < fVar3))))
              {
                *(byte *)(param_5 + 0xc3) = *(byte *)(param_5 + 0xc3) | 4;
              }
              else if (fVar3 < fVar20) {
                *(float *)(param_5 + uVar15 * 4) = fVar20;
              }
            }
          }
          else {
            *(float *)(param_5 + uVar15 * 4) = fVar3 + *(float *)(param_5 + uVar15 * 4);
          }
        }
      }
    }
LAB_1450d86c3:
    pfVar16 = pfVar16 + 4;
    pfVar17 = (float *)((longlong)pfVar17 + 1);
  } while( true );
}



// FUNCTION 1450d8830 FUN_1450d8830 body=88 status=ok
// SIG undefined FUN_1450d8830(void)

void FUN_1450d8830(longlong param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x58);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((longlong)pvVar1 + 0x10) != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar1 + 0x18) = 0;
      AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar1 + 0x10));
      *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
      *(undefined4 *)((longlong)pvVar1 + 0x1c) = 0;
    }
    AK::MemoryMgr::Free(2,pvVar1);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 1450d8890 FUN_1450d8890 body=154 status=ok
// SIG undefined FUN_1450d8890(void)

undefined8 FUN_1450d8890(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(2,0x28);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar2 + 0x21) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x25) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x27) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 4) = 0;
    }
    *(undefined8 **)(param_1 + 0x58) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
  }
  uVar1 = puVar2[1];
  puVar2[1] = uVar1 | 1L << ((ulonglong)param_2 & 0x3f);
  if (((uVar1 >> ((ulonglong)param_2 & 0x3f) & 1) == 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    FUN_145074210();
  }
  return 1;
}



// FUNCTION 1450d8930 FUN_1450d8930 body=531 status=ok
// SIG undefined FUN_1450d8930(void)

void FUN_1450d8930(longlong *param_1,undefined8 param_2,ulonglong *param_3,char param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong local_res8;
  undefined8 local_res10;
  ulonglong local_48 [2];
  
  bVar2 = false;
  plVar5 = (longlong *)0x0;
  plVar6 = param_1;
  local_res10 = param_2;
  plVar4 = plVar5;
  if (-1 < *(char *)((longlong)param_1 + 0xd4)) {
    plVar6 = plVar5;
    plVar4 = param_1;
  }
  for (; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[0xf]) {
    if ((*param_3 & (~(ulonglong)plVar5 | 0x120df)) == 0) break;
    uVar7 = plVar4[0x13] << 0x11 | 0x7ffc7e3fffe0000;
    if (plVar4[0xf] != 0) {
      uVar7 = plVar4[0x13] << 0x11;
    }
    local_res8 = (uVar7 | 0x120df) & *param_3 & ~(ulonglong)plVar5;
    (**(code **)(*plVar4 + 0x210))(plVar4,local_res10,&local_res8);
    plVar5 = (longlong *)((ulonglong)plVar5 | uVar7);
    if ((((param_4 != '\0') && (plVar6 == (longlong *)0x0)) &&
        (plVar1 = (longlong *)plVar4[0x10], plVar1 != (longlong *)0x0)) &&
       (cVar3 = FUN_14508d190(plVar1), plVar6 = plVar1, cVar3 != '\0')) {
      bVar2 = true;
      plVar5 = (longlong *)((ulonglong)plVar5 | 0x380000000020);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    local_48[0] = *param_3;
    uVar7 = local_48[0] & (~(ulonglong)plVar5 | 0x3800000100bf);
    while (uVar7 != 0) {
      lVar8 = 0;
      plVar4 = (longlong *)((ulonglong)plVar5 & 0xffffc7ffffffffdf);
      if (bVar2) {
        plVar4 = plVar5;
      }
      if (plVar6[0x10] != 0) {
        lVar8 = plVar6[0x13];
      }
      local_48[0] = (lVar8 << 0x11 | 0x4ffff9ffffd00bfU) & ~(ulonglong)plVar4 & local_48[0];
      (**(code **)(*plVar6 + 0x210))(plVar6,local_res10,local_48);
      plVar6 = (longlong *)plVar6[0x10];
      plVar5 = (longlong *)((ulonglong)plVar4 | lVar8 << 0x11);
      if (plVar6 == (longlong *)0x0) {
        return;
      }
      if ((!bVar2) && (cVar3 = FUN_14508d190(plVar6), cVar3 != '\0')) {
        plVar5 = (longlong *)((ulonglong)plVar5 | 0x380000000020);
        bVar2 = true;
      }
      local_48[0] = *param_3;
      uVar7 = local_48[0] & (~(ulonglong)plVar5 | 0x3800000100bf);
    }
  }
  return;
}



// FUNCTION 1450d8b50 FUN_1450d8b50 body=241 status=ok
// SIG undefined FUN_1450d8b50(void)

void FUN_1450d8b50(longlong *param_1,undefined8 param_2,ulonglong *param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)0x0;
  plVar3 = param_1;
  plVar1 = plVar2;
  if (-1 < *(char *)((longlong)param_1 + 0xd4)) {
    plVar3 = plVar2;
    plVar1 = param_1;
  }
  while ((plVar1 != (longlong *)0x0 && ((*param_3 & (~(ulonglong)plVar2 | 0x120df)) != 0))) {
    (**(code **)(*plVar1 + 0x218))(plVar1,param_2);
    plVar2 = (longlong *)((ulonglong)plVar2 | plVar1[0x13] << 0x11);
    if ((param_4 != '\0') && (plVar3 == (longlong *)0x0)) {
      plVar3 = (longlong *)plVar1[0x10];
    }
    plVar1 = (longlong *)plVar1[0xf];
  }
  for (; (plVar3 != (longlong *)0x0 && ((*param_3 & (~(ulonglong)plVar2 | 0x3800000100bf)) != 0));
      plVar2 = (longlong *)((ulonglong)plVar2 | *plVar1 << 0x11)) {
    (**(code **)(*plVar3 + 0x218))(plVar3,param_2);
    plVar1 = plVar3 + 0x13;
    plVar3 = (longlong *)plVar3[0x10];
  }
  return;
}



// FUNCTION 1450d8c50 FUN_1450d8c50 body=193 status=ok
// SIG undefined FUN_1450d8c50(void)

void FUN_1450d8c50(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong local_18;
  undefined8 local_10;
  
  puVar1 = *(ulonglong **)(param_1 + 0x58);
  if (puVar1 != (ulonglong *)0x0) {
    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x10);
    }
    uVar3 = (puVar1[1] | *puVar1 | uVar3) & *param_3;
    if (uVar3 == 0) {
      FUN_145074690(puVar1 + 2);
      return;
    }
    local_18 = uVar3;
    local_10 = param_2;
    FUN_1450744c0(puVar1 + 2,&local_18);
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 != plVar2 + *(uint *)(param_1 + 0x50)) {
      do {
        if ((uVar3 >> ((ulonglong)*(uint *)(*plVar2 + 8) & 0x3f) & 1) != 0) {
          FUN_145074140(param_2);
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != (longlong *)
                         (*(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x50) * 8))
      ;
    }
  }
  return;
}



// FUNCTION 1450d8d20 FUN_1450d8d20 body=111 status=ok
// SIG undefined FUN_1450d8d20(void)

void FUN_1450d8d20(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_145074690(*(longlong *)(param_1 + 0x58) + 0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    if (puVar1 != puVar1 + *(uint *)(param_1 + 0x50)) {
      do {
        FUN_1450741b0(param_2,*puVar1);
        puVar1 = puVar1 + 1;
      } while (puVar1 != (undefined8 *)
                         (*(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x50) * 8))
      ;
    }
  }
  return;
}



// FUNCTION 1450d8d90 FUN_1450d8d90 body=311 status=ok
// SIG undefined FUN_1450d8d90(void)

void FUN_1450d8d90(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong *local_res8;
  
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x20);
  *(byte *)(param_3 + 5) = *(byte *)(param_1 + 0xd4) >> 7;
  uVar3 = 1L << ((byte)param_2 & 0x3f);
  FUN_145074450(*(longlong *)(param_1 + 0x58) + 0x10,&local_res8,param_4);
  puVar2 = (ulonglong *)
           ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x58) + 0x18) * 0x10 +
           *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10));
  if (param_4 == 0) {
    for (; local_res8 != puVar2; local_res8 = local_res8 + 2) {
      if ((*local_res8 & uVar3) != 0) {
        (**(code **)(*(longlong *)local_res8[1] + 0x18))
                  ((longlong *)local_res8[1],param_3,param_2,param_5,param_6);
      }
    }
  }
  else {
    while ((local_res8 != puVar2 && (plVar1 = (longlong *)local_res8[1], plVar1[1] == param_4))) {
      if ((*local_res8 & uVar3) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,param_3,param_2,param_5,param_6);
      }
      local_res8 = local_res8 + 2;
    }
  }
  return;
}



// FUNCTION 1450d8ed0 FUN_1450d8ed0 body=188 status=ok
// SIG undefined FUN_1450d8ed0(void)

void FUN_1450d8ed0(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x20);
  *(byte *)(param_3 + 5) = *(byte *)(param_1 + 0xd4) >> 7;
  puVar1 = *(ulonglong **)(*(longlong *)(param_1 + 0x58) + 0x10);
  puVar2 = puVar1 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x58) + 0x18) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    if ((*puVar1 & 1L << ((byte)param_2 & 0x3f)) != 0) {
      (**(code **)(*(longlong *)puVar1[1] + 0x18))
                ((longlong *)puVar1[1],param_3,param_2,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 1450d8f90 FUN_1450d8f90 body=126 status=ok
// SIG undefined FUN_1450d8f90(void)

void FUN_1450d8f90(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
  if (lVar1 != (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x58) + 0x18) * 0x10 + lVar1) {
    do {
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x20))(*(longlong **)(lVar1 + 8),param_2,param_3);
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x58) + 0x18) * 0x10 +
                      *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10));
  }
  return;
}



// FUNCTION 1450d9010 FUN_1450d9010 body=126 status=ok
// SIG undefined FUN_1450d9010(void)

void FUN_1450d9010(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
  if (lVar1 != (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x58) + 0x18) * 0x10 + lVar1) {
    do {
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x28))(*(longlong **)(lVar1 + 8),param_2,param_3);
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x58) + 0x18) * 0x10 +
                      *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10));
  }
  return;
}



// FUNCTION 1450d9090 FUN_1450d9090 body=87 status=ok
// SIG undefined FUN_1450d9090(void)

undefined8 * FUN_1450d9090(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = AK::MemoryMgr::Malloc(2,0x28);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar1 + 0x21) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x25) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x27) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 4) = 0;
      *(undefined8 **)(param_1 + 0x58) = puVar1;
      return puVar1;
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return puVar2;
}



// FUNCTION 1450d90f0 FUN_1450d90f0 body=664 status=ok
// SIG undefined FUN_1450d90f0(void)

void FUN_1450d90f0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  bool bVar12;
  
  uVar10 = 0;
  uVar8 = uVar10;
  if (*(int *)(param_2 + 0x10) != 0) {
    do {
      puVar2 = (uint *)(*(longlong *)(param_2 + 8) + uVar8 * 8);
      puVar11 = (ulonglong *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      lVar5 = DAT_14c791060;
      uVar7 = *puVar2;
      if (uVar7 == 0) {
        plVar6 = (longlong *)*puVar11;
        *puVar11 = 0;
      }
      else {
        uVar9 = uVar10;
        if (*(char *)((longlong)puVar2 + 5) == '\0') {
          do {
            while (iVar3 = *(int *)(lVar5 + 0x370), iVar3 < 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x378));
              if (*(int *)(lVar5 + 0x370) < 0) goto LAB_1450d926c;
              LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x378));
            }
            LOCK();
            bVar12 = iVar3 == *(int *)(lVar5 + 0x370);
            if (bVar12) {
              *(int *)(lVar5 + 0x370) = iVar3 + 1;
            }
            UNLOCK();
          } while (!bVar12);
LAB_1450d926c:
          if (*(uint *)(lVar5 + 0x3b8) != 0) {
            for (uVar4 = *(ulonglong *)
                          (*(longlong *)(lVar5 + 0x3b0) +
                          ((ulonglong)uVar7 % (ulonglong)*(uint *)(lVar5 + 0x3b8)) * 8);
                (uVar9 = uVar10, uVar4 != 0 && (uVar9 = uVar4, *(uint *)(uVar4 + 0x10) != uVar7));
                uVar4 = *(ulonglong *)(uVar4 + 8)) {
            }
            if (uVar9 != 0) {
              LOCK();
              *(int *)(uVar9 + 0x14) = *(int *)(uVar9 + 0x14) + 1;
              UNLOCK();
            }
          }
          iVar3 = *(int *)(lVar5 + 0x370);
          while (-1 < iVar3) {
            LOCK();
            bVar12 = iVar3 == *(int *)(lVar5 + 0x370);
            if (bVar12) {
              *(int *)(lVar5 + 0x370) = iVar3 + -1;
            }
            UNLOCK();
            if (bVar12) {
              if ((iVar3 + -1 != 0) || (*(int *)(lVar5 + 0x3a0) < 1)) goto LAB_1450d9224;
              SetEvent(*(HANDLE *)(lVar5 + 0x3a8));
              plVar6 = (longlong *)*puVar11;
              *puVar11 = uVar9;
              goto LAB_1450d933d;
            }
            iVar3 = *(int *)(lVar5 + 0x370);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x378));
          plVar6 = (longlong *)*puVar11;
          *puVar11 = uVar9;
        }
        else {
          do {
            while (iVar3 = *(int *)(lVar5 + 0x3c8), iVar3 < 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x3d0));
              if (*(int *)(lVar5 + 0x3c8) < 0) goto LAB_1450d9187;
              LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x3d0));
            }
            LOCK();
            bVar12 = iVar3 == *(int *)(lVar5 + 0x3c8);
            if (bVar12) {
              *(int *)(lVar5 + 0x3c8) = iVar3 + 1;
            }
            UNLOCK();
          } while (!bVar12);
LAB_1450d9187:
          if (*(uint *)(lVar5 + 0x410) != 0) {
            for (uVar4 = *(ulonglong *)
                          (*(longlong *)(lVar5 + 0x408) +
                          ((ulonglong)uVar7 % (ulonglong)*(uint *)(lVar5 + 0x410)) * 8);
                (uVar9 = uVar10, uVar4 != 0 && (uVar9 = uVar4, *(uint *)(uVar4 + 0x10) != uVar7));
                uVar4 = *(ulonglong *)(uVar4 + 8)) {
            }
            if (uVar9 != 0) {
              LOCK();
              *(int *)(uVar9 + 0x14) = *(int *)(uVar9 + 0x14) + 1;
              UNLOCK();
            }
          }
          iVar3 = *(int *)(lVar5 + 0x3c8);
          while (-1 < iVar3) {
            LOCK();
            bVar12 = iVar3 == *(int *)(lVar5 + 0x3c8);
            if (bVar12) {
              *(int *)(lVar5 + 0x3c8) = iVar3 + -1;
            }
            UNLOCK();
            if (bVar12) {
              if ((iVar3 + -1 != 0) || (*(int *)(lVar5 + 0x3f8) < 1)) goto LAB_1450d9224;
              SetEvent(*(HANDLE *)(lVar5 + 0x400));
              plVar6 = (longlong *)*puVar11;
              *puVar11 = uVar9;
              goto LAB_1450d933d;
            }
            iVar3 = *(int *)(lVar5 + 0x3c8);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x3d0));
LAB_1450d9224:
          plVar6 = (longlong *)*puVar11;
          *puVar11 = uVar9;
        }
      }
LAB_1450d933d:
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0x14);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      uVar7 = (int)uVar8 + 1;
      *(undefined2 *)(puVar11 + 1) = 0;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 1450d9390 FUN_1450d9390 body=151 status=ok
// SIG undefined FUN_1450d9390(void)

uint FUN_1450d9390(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort uVar3;
  float fVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  uVar3 = *(ushort *)(param_1 + 0xd2) & 0x3ff;
  if (((*(uint **)(param_1 + 0x58) != (uint *)0x0) &&
      ((**(uint **)(param_1 + 0x58) >> 0x10 & 1) != 0)) && (uVar3 != 0)) {
    plVar2 = *(longlong **)(param_1 + 0x48);
    plVar1 = plVar2 + *(uint *)(param_1 + 0x50);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*(int *)(*plVar2 + 8) == 0x10) {
        local_20 = 0xff;
        local_30 = 0;
        local_28 = 0;
        local_10 = 0;
        local_18 = 0xff;
        local_38 = param_2;
        fVar4 = (float)FUN_1450800b0(g_pGameSyncMgr,*plVar2,&local_38);
        return (int)fVar4;
      }
    }
  }
  return (uint)uVar3;
}



// FUNCTION 1450d9430 FUN_1450d9430 body=1139 status=ok
// SIG undefined FUN_1450d9430(void)

void FUN_1450d9430(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char local_res18 [8];
  undefined8 *local_res20;
  float local_1a8;
  undefined4 local_1a4;
  float local_1a0 [2];
  undefined4 local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  uint local_180;
  undefined4 local_17c;
  undefined4 local_178;
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
  void *pvStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  *(undefined1 *)(param_3 + 1) = 2;
  *param_3 = 0;
  local_168 = *param_4;
  uStack_160 = param_4[1];
  local_158 = param_4[2];
  uStack_150 = param_4[3];
  local_148 = param_4[4];
  uStack_140 = param_4[5];
  local_138 = param_4[6];
  uStack_130 = param_4[7];
  local_128 = param_4[8];
  uStack_120 = param_4[9];
  local_118 = param_4[10];
  uStack_110 = param_4[0xb];
  local_108 = param_4[0xc];
  uStack_f0 = param_4[0xf];
  local_e8 = param_4[0x10];
  uStack_e0 = param_4[0x11];
  local_d8[0] = param_4[0x12];
  local_d8[1] = param_4[0x13];
  local_d8[2] = param_4[0x14];
  local_d8[3] = param_4[0x15];
  local_b8 = param_4[0x16];
  uStack_b0 = param_4[0x17];
  local_a8 = param_4[0x18];
  pvStack_100 = (void *)param_4[0xd];
  local_f8 = param_4[0xe];
  param_4[0xe] = 0;
  param_4[0xd] = 0;
  plVar7 = (longlong *)*param_2;
  local_res20 = param_4;
  if (plVar7 != plVar7 + *(uint *)(param_2 + 1)) {
    do {
      puVar3 = (undefined4 *)*plVar7;
      if ((*(char *)((longlong)puVar3 + 0xd) != '\x04') ||
         (((puVar3[2] != 0 && (puVar3[2] != 7)) || (cVar5 = FUN_14507dda0(*puVar3), cVar5 == '\0')))
         ) {
        puVar3 = (undefined4 *)*plVar7;
        uVar1 = *(uint *)(&DAT_149c27ed0 + (ulonglong)(uint)puVar3[2] * 4);
        if ((int)uVar1 < 0x4a) {
          uVar9 = 1L << ((byte)uVar1 & 0x3f);
          if ((local_d8[uVar1 >> 6] & uVar9) != 0) {
            local_1a8 = 0.0;
            local_188 = *puVar3;
            uStack_184 = CONCAT31(uStack_184._1_3_,*(undefined1 *)((longlong)puVar3 + 0xd));
            FUN_14507fa00(g_pGameSyncMgr,CONCAT44(uStack_184,local_188),param_1,&local_1a8,0);
            fVar12 = local_1a8;
            lVar6 = *plVar7;
            if (local_1a8 == *(float *)(lVar6 + 0x30)) {
              fVar10 = *(float *)(lVar6 + 0x38);
LAB_1450d965a:
              if (fVar10 == 3.4028235e+38) goto LAB_1450d9660;
            }
            else {
              if (local_1a8 == *(float *)(lVar6 + 0x34)) {
                fVar10 = *(float *)(lVar6 + 0x3c);
                goto LAB_1450d965a;
              }
LAB_1450d9660:
              if (*(longlong *)(lVar6 + 0x18) == 0) {
                fVar10 = 0.0;
              }
              else {
                local_1a4 = *(undefined4 *)(lVar6 + 0x28);
                local_1a0[0] = 0.0;
                FUN_1450737c0(lVar6 + 0x18,local_1a8,&local_1a4,local_1a0);
                *(undefined4 *)(lVar6 + 0x28) = local_1a4;
                fVar10 = local_1a0[0];
              }
              *(float *)(lVar6 + 0x30 + (ulonglong)*(byte *)(lVar6 + 0x14) * 4) = fVar12;
              *(float *)(lVar6 + 0x38 + (ulonglong)*(byte *)(lVar6 + 0x14) * 4) = fVar10;
              *(byte *)(lVar6 + 0x14) = *(byte *)(lVar6 + 0x14) ^ 1;
            }
            uVar2 = *(undefined4 *)(*plVar7 + 4);
            *param_3 = uVar2;
            uVar8 = (ulonglong)(uint)(&DAT_149c29000)[(int)uVar1];
            if ((&DAT_149c29000)[(int)uVar1] != 0x1a) {
              if ((DAT_14c791034 == 1) && ((local_d8[(ulonglong)(uVar1 >> 6) + 2] & uVar9) != 0)) {
                if (fVar10 != 0.0) {
                  fVar12 = 0.0;
                  fVar11 = 0.0;
                  local_198._0_2_ = CONCAT11(*(char *)(param_3 + 1),(byte)uVar1);
                  uVar4 = (ushort)local_198;
                  local_198 = (uint)(ushort)local_198;
                  local_178 = 0;
                  local_res18[0] = '\0';
                  if (*(char *)(param_3 + 1) != '\x02') {
                    local_178 = param_3[2];
                    local_198 = (uint)CONCAT12(*(undefined1 *)((longlong)param_3 + 5),uVar4);
                  }
                  local_180 = local_198;
                  local_17c = uVar2;
                  lVar6 = FUN_1450899e0(&pvStack_100,&local_180,local_res18);
                  if (lVar6 != 0) {
                    if (local_res18[0] == '\0') {
                      *(undefined4 *)(lVar6 + 0xc) = 0;
                    }
                    fVar12 = *(float *)(lVar6 + 0xc);
                    fVar11 = fVar10 + fVar12;
                    *(float *)(lVar6 + 0xc) = fVar11;
                  }
                  if (((local_d8[(ulonglong)(uVar1 >> 6) + 4] >> (uVar1 & 0x3f) & 1) != 0) ||
                     ((fVar10 = *(float *)((longlong)&local_168 + uVar8 * 4), fVar12 == fVar10 &&
                      (fVar11 < fVar10)))) {
                    local_a8 = local_a8 | 0x4000000;
                  }
                  else if (fVar10 < fVar11) {
                    *(float *)((longlong)&local_168 + uVar8 * 4) = fVar11;
                  }
                }
              }
              else {
                *(float *)((longlong)&local_168 + uVar8 * 4) =
                     fVar10 + *(float *)((longlong)&local_168 + uVar8 * 4);
              }
            }
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != (longlong *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8));
  }
  FUN_1450d3160(local_res20,&local_168);
  if (pvStack_100 != (void *)0x0) {
    AK::MemoryMgr::Free(0,pvStack_100);
  }
  return;
}



// FUNCTION 1450d98b0 FUN_1450d98b0 body=1244 status=ok
// SIG undefined FUN_1450d98b0(void)

void FUN_1450d98b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ushort *puVar9;
  float *pfVar10;
  ushort *puVar11;
  byte *pbVar12;
  byte bVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  char local_res8 [8];
  undefined4 local_res20;
  undefined4 local_a8;
  undefined1 local_a4;
  byte local_a3;
  undefined4 local_a0;
  undefined4 local_98;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  
  local_res20 = *(undefined4 *)(param_1 + 0x20);
  pbVar7 = *(byte **)(param_1 + 0x90);
  bVar13 = *(byte *)(param_1 + 0xd4) >> 7;
  local_a8 = 0;
  local_a4 = 1;
  local_a3 = bVar13;
  local_a0 = local_res20;
  if (pbVar7 == (byte *)0x0) {
    pbVar12 = (byte *)0x0;
    pfVar10 = (float *)0x0;
  }
  else {
    pbVar12 = pbVar7 + 1;
    pfVar10 = (float *)(pbVar7 + ((ulonglong)*pbVar7 + 4 & 0xfffffffc));
  }
LAB_1450d9950:
  do {
    pbVar7 = *(byte **)(param_1 + 0x90);
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar7 = pbVar7 + (ulonglong)*pbVar7 + 1;
    }
    if (pbVar12 == pbVar7) {
      if (*(int *)(param_1 + 0x50) != 0) {
        FUN_1450d9430(param_3,param_1 + 0x48,&local_a8,param_2);
        local_res20 = local_a0;
        bVar13 = local_a3;
      }
      if ((*(char *)(param_1 + 0x30) != '\0') &&
         (lVar5 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x78))(param_1 + 0x28), lVar5 != 0))
      {
        for (lVar5 = *(longlong *)(lVar5 + 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x10)) {
          puVar9 = *(ushort **)(lVar5 + 0x20);
          uVar3 = *(undefined4 *)(lVar5 + 0x38);
          if (puVar9 == (ushort *)0x0) {
            puVar11 = (ushort *)0x0;
            pfVar10 = (float *)0x0;
          }
          else {
            puVar11 = puVar9 + 1;
            pfVar10 = (float *)(((ulonglong)*puVar9 * 2 + 9 & 0xfffffff8) + (longlong)puVar9);
          }
          while( true ) {
            puVar9 = *(ushort **)(lVar5 + 0x20);
            if (puVar9 == (ushort *)0x0) {
              puVar9 = (ushort *)0x0;
            }
            else {
              puVar9 = puVar9 + (ulonglong)*puVar9 + 1;
            }
            if (puVar11 == puVar9) break;
            uVar4 = *(uint *)(&DAT_149c27ed0 + (ulonglong)*puVar11 * 4);
            if ((int)uVar4 < 0x4a) {
              uVar8 = 1L << ((byte)uVar4 & 0x3f);
              if ((*(ulonglong *)(param_2 + 0x90 + (ulonglong)(uVar4 >> 6) * 8) & uVar8) == 0)
              goto LAB_1450d9d39;
              fVar1 = *pfVar10;
              uVar14 = (ulonglong)(uint)(&DAT_149c29000)[(int)uVar4];
              if ((&DAT_149c29000)[(int)uVar4] == 0x1a) goto LAB_1450d9d39;
              if ((DAT_14c791034 != 1) ||
                 ((*(ulonglong *)(param_2 + 0xa0 + (ulonglong)(uVar4 >> 6) * 8) & uVar8) == 0)) {
                *(float *)(param_2 + uVar14 * 4) = fVar1 + *(float *)(param_2 + uVar14 * 4);
                goto LAB_1450d9d39;
              }
              if (fVar1 == 0.0) goto LAB_1450d9d39;
              local_98._0_2_ = CONCAT11(3,(byte)uVar4);
              local_98._0_3_ = CONCAT12(bVar13,(undefined2)local_98);
              local_98 = (uint)(uint3)local_98;
              fVar16 = 0.0;
              fVar15 = 0.0;
              local_88 = local_98;
              local_80 = local_res20;
              local_res8[0] = '\0';
              local_84 = uVar3;
              lVar6 = FUN_1450899e0(param_2 + 0x68,&local_88,local_res8);
              if (lVar6 != 0) {
                if (local_res8[0] == '\0') {
                  *(undefined4 *)(lVar6 + 0xc) = 0;
                }
                fVar16 = *(float *)(lVar6 + 0xc);
                fVar15 = fVar16 + fVar1;
                *(float *)(lVar6 + 0xc) = fVar15;
              }
              if ((*(ulonglong *)(param_2 + 0xb0 + (ulonglong)(uVar4 >> 6) * 8) >> (uVar4 & 0x3f) &
                  1) == 0) {
                fVar1 = *(float *)(param_2 + uVar14 * 4);
                if ((fVar16 != fVar1) || (fVar1 <= fVar15)) {
                  if (fVar15 <= fVar1) goto LAB_1450d9d39;
                  puVar11 = puVar11 + 1;
                  *(float *)(param_2 + uVar14 * 4) = fVar15;
                  pfVar10 = pfVar10 + 4;
                }
                else {
                  *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | 4;
                  puVar11 = puVar11 + 1;
                  pfVar10 = pfVar10 + 4;
                }
              }
              else {
                *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | 4;
                puVar11 = puVar11 + 1;
                pfVar10 = pfVar10 + 4;
              }
            }
            else {
LAB_1450d9d39:
              puVar11 = puVar11 + 1;
              pfVar10 = pfVar10 + 4;
            }
          }
        }
      }
      return;
    }
    bVar2 = *pbVar12;
    if (bVar2 < 0x4a) {
      uVar8 = 1L << (bVar2 & 0x3f);
      if ((*(ulonglong *)(param_2 + 0x90 + (ulonglong)(bVar2 >> 6) * 8) & uVar8) == 0)
      goto LAB_1450d9aeb;
      fVar1 = *pfVar10;
      uVar14 = (ulonglong)(uint)(&DAT_149c29000)[(int)(uint)bVar2];
      if ((&DAT_149c29000)[(int)(uint)bVar2] == 0x1a) goto LAB_1450d9aeb;
      if ((DAT_14c791034 != 1) ||
         ((*(ulonglong *)(param_2 + 0xa0 + (ulonglong)(bVar2 >> 6) * 8) & uVar8) == 0)) {
        *(float *)(param_2 + uVar14 * 4) = fVar1 + *(float *)(param_2 + uVar14 * 4);
        goto LAB_1450d9aeb;
      }
      if (fVar1 == 0.0) goto LAB_1450d9aeb;
      local_98._0_2_ = CONCAT11(1,bVar2);
      local_98._0_3_ = CONCAT12(bVar13,(undefined2)local_98);
      local_98 = (uint)(uint3)local_98;
      fVar16 = 0.0;
      fVar15 = 0.0;
      local_88 = local_98;
      local_res8[0] = '\0';
      local_84 = 0;
      local_80 = local_res20;
      lVar5 = FUN_1450899e0(param_2 + 0x68,&local_88,local_res8);
      if (lVar5 != 0) {
        if (local_res8[0] == '\0') {
          *(undefined4 *)(lVar5 + 0xc) = 0;
        }
        fVar16 = *(float *)(lVar5 + 0xc);
        fVar15 = fVar16 + fVar1;
        *(float *)(lVar5 + 0xc) = fVar15;
      }
      if ((*(ulonglong *)(param_2 + 0xb0 + (ulonglong)(bVar2 >> 6) * 8) >> (bVar2 & 0x3f) & 1) == 0)
      {
        fVar1 = *(float *)(param_2 + uVar14 * 4);
        if ((fVar16 != fVar1) || (fVar1 <= fVar15)) {
          if (fVar15 <= fVar1) goto LAB_1450d9aeb;
          pbVar12 = pbVar12 + 1;
          *(float *)(param_2 + uVar14 * 4) = fVar15;
          pfVar10 = pfVar10 + 1;
        }
        else {
          *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | 4;
          pbVar12 = pbVar12 + 1;
          pfVar10 = pfVar10 + 1;
        }
      }
      else {
        *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | 4;
        pbVar12 = pbVar12 + 1;
        pfVar10 = pfVar10 + 1;
      }
      goto LAB_1450d9950;
    }
LAB_1450d9aeb:
    pbVar12 = pbVar12 + 1;
    pfVar10 = pfVar10 + 1;
  } while( true );
}



// FUNCTION 1450d9d90 FUN_1450d9d90 body=522 status=ok
// SIG undefined FUN_1450d9d90(void)

undefined8 * FUN_1450d9d90(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined2 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    return (undefined8 *)&DAT_00000001;
  }
  puVar8 = (undefined8 *)0x0;
  for (pvVar5 = DAT_14c79c4f0; pvVar5 != (void *)0x0; pvVar5 = *(void **)((longlong)pvVar5 + 0x7000)
      ) {
    if (*(longlong *)((longlong)pvVar5 + 0x7010) != 0) goto LAB_1450d9e21;
  }
  pvVar5 = AK::MemoryMgr::Malloc(0,0x7018);
  puVar7 = puVar8;
  if (pvVar5 != (void *)0x0) {
    FUN_1450db210(pvVar5);
    if (DAT_14c79c4f0 == (void *)0x0) {
      DAT_14c79c4f0 = pvVar5;
      *(undefined8 *)((longlong)pvVar5 + 0x7000) = 0;
    }
    else {
      *(void **)((longlong)pvVar5 + 0x7000) = DAT_14c79c4f0;
      DAT_14c79c4f0 = pvVar5;
    }
LAB_1450d9e21:
    puVar7 = *(undefined8 **)((longlong)pvVar5 + 0x7010);
    if (puVar7 == (undefined8 *)0x0) goto LAB_1450d9f8a;
    puVar6 = (undefined8 *)*puVar7;
    if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
      puVar6 = puVar8;
    }
    *(undefined8 **)((longlong)pvVar5 + 0x7010) = puVar6;
    *puVar7 = 0;
    *(int *)((longlong)pvVar5 + 0x7008) = *(int *)((longlong)pvVar5 + 0x7008) + -1;
  }
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[3] = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0xff;
    local_18 = 0xff;
    local_10 = 0;
    FUN_145073d10(puVar7 + 4,&local_38);
    puVar7[0x12] = 0;
    puVar7[4] = &PTR_LAB_149c28030;
    puVar7[0x13] = 0;
    *(undefined4 *)(puVar7 + 0x14) = 0;
    *(undefined4 *)(puVar7 + 0x17) = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    *(byte *)(puVar7 + 0x1b) = *(byte *)(puVar7 + 0x1b) & 0xf9 | 1;
    puVar7[0x1a] = 0;
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    bVar1 = *(byte *)(param_1 + 0xd4);
    uVar4 = FUN_1450d9390(param_1,0);
    lVar2 = *(longlong *)(param_1 + 0x70);
    FUN_1450d3fe0(lVar2 + 0x20,param_1,0,uVar4,bVar1 & 1,bVar1 >> 1 & 1);
    *(undefined8 *)(lVar2 + 0xd0) = 0;
    *(byte *)(lVar2 + 0xd8) = (bVar1 >> 4 ^ *(byte *)(lVar2 + 0xd8)) & 1 ^ *(byte *)(lVar2 + 0xd8);
    puVar7 = (undefined8 *)&DAT_00000001;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      cVar3 = FUN_1450d9d90();
      puVar7 = (undefined8 *)&DAT_00000001;
      if (cVar3 == '\0') {
        puVar7 = puVar8;
      }
    }
    if (*(longlong *)(param_1 + 0x78) == 0) {
      return puVar7;
    }
    cVar3 = FUN_1450d9d90();
    if (cVar3 != '\0') {
      return puVar7;
    }
    return (undefined8 *)0x0;
  }
LAB_1450d9f8a:
  *(undefined8 *)(param_1 + 0x70) = 0;
  return (undefined8 *)0x0;
}



// FUNCTION 1450d9fa0 FUN_1450d9fa0 body=186 status=ok
// SIG undefined FUN_1450d9fa0(void)

void FUN_1450d9fa0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (((((*(longlong *)(param_1 + 0x78) != 0) &&
          (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70), lVar1 != 0)) &&
         (*(short *)(lVar1 + 0xd0) < 1)) &&
        ((*(short *)(lVar1 + 0xd4) < 1 && (*(short *)(lVar1 + 0xb8) == 0)))) &&
       ((*(short *)(lVar1 + 0xba) == 0 &&
        ((*(longlong *)(lVar1 + 0x18) == 0 && (*(int *)(lVar1 + 8) == 0)))))) {
      FUN_1450da060();
    }
    if ((((*(longlong *)(param_1 + 0x80) != 0) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x70), lVar1 != 0)) &&
        (*(short *)(lVar1 + 0xd0) < 1)) &&
       (((*(short *)(lVar1 + 0xd4) < 1 && (*(short *)(lVar1 + 0xb8) == 0)) &&
        ((*(short *)(lVar1 + 0xba) == 0 &&
         ((*(longlong *)(lVar1 + 0x18) == 0 && (*(int *)(lVar1 + 8) == 0)))))))) {
      FUN_1450da060();
      return;
    }
  }
  return;
}



// FUNCTION 1450da060 FUN_1450da060 body=417 status=ok
// SIG undefined FUN_1450da060(void)

void FUN_1450da060(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xd8) & 2) != 0) {
    FUN_1450c68f0();
  }
  FUN_1450d9fa0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x70);
  uVar4 = (**(code **)(plVar1[4] + 0x38))(plVar1 + 4);
  uVar5 = (**(code **)(plVar1[4] + 0x30))(plVar1 + 4,&local_res8);
  FUN_145073fe0(plVar1 + 4,uVar5,uVar4);
  if ((void *)plVar1[0x12] != (void *)0x0) {
    *(undefined4 *)(plVar1 + 0x13) = 0;
    AK::MemoryMgr::Free(0,(void *)plVar1[0x12]);
    plVar1[0x12] = 0;
    *(undefined4 *)((longlong)plVar1 + 0x9c) = 0;
  }
  plVar1[3] = 0;
  if ((void *)*plVar1 != (void *)0x0) {
    *(undefined4 *)(plVar1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*plVar1);
    *plVar1 = 0;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
  }
  if ((void *)plVar1[0x18] != (void *)0x0) {
    *(undefined4 *)(plVar1 + 0x19) = 0;
    AK::MemoryMgr::Free(0,(void *)plVar1[0x18]);
    plVar1[0x18] = 0;
    *(undefined4 *)((longlong)plVar1 + 0xcc) = 0;
  }
  local_res8 = 0x10000;
  plVar1[4] = (longlong)&PTR_LAB_149c28030;
  FUN_145073fe0(plVar1 + 4,&local_res8,1);
  FUN_145073d80(plVar1 + 4);
  plVar2 = (longlong *)0x0;
  for (plVar3 = DAT_14c79c4f0;
      (plVar3 != (longlong *)0x0 && ((plVar1 < plVar3 || (plVar3 + 0xe00 <= plVar1))));
      plVar3 = (longlong *)plVar3[0xe00]) {
    plVar2 = plVar3;
  }
  if (plVar3[0xe02] == 0) {
    plVar3[0xe02] = (longlong)plVar1;
    *plVar1 = 0;
  }
  else {
    *plVar1 = plVar3[0xe02];
    plVar3[0xe02] = (longlong)plVar1;
  }
  *(int *)(plVar3 + 0xe01) = (int)plVar3[0xe01] + 1;
  if ((int)plVar3[0xe01] == 0x80) {
    plVar1 = (longlong *)plVar3[0xe00];
    if (plVar3 != DAT_14c79c4f0) {
      plVar2[0xe00] = plVar3[0xe00];
      plVar1 = DAT_14c79c4f0;
    }
    DAT_14c79c4f0 = plVar1;
    AK::MemoryMgr::Free(0,plVar3);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 1450da210 FUN_1450da210 body=230 status=ok
// SIG undefined FUN_1450da210(void)

int FUN_1450da210(longlong param_1,char param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  bVar3 = FUN_1450d9d90();
  lVar2 = *(longlong *)(param_1 + 0x70);
  iVar5 = (bVar3 ^ 1) + 1;
  if (lVar2 != 0) {
    *(short *)(lVar2 + 0xd0) = *(short *)(lVar2 + 0xd0) + 1;
    if (param_2 != '\0') {
      *(short *)(lVar2 + 0xd2) = *(short *)(lVar2 + 0xd2) + 1;
    }
    if (param_3 != 0) {
      uVar1 = *(uint *)(lVar2 + 200);
      plVar7 = (longlong *)(lVar2 + 0xc0);
      plVar6 = (longlong *)*plVar7;
      plVar8 = plVar6 + (ulonglong)uVar1 * 2;
      for (; plVar6 != plVar8; plVar6 = plVar6 + 2) {
        if (*plVar6 == param_3) {
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          goto LAB_1450da2c7;
        }
      }
      if ((*(uint *)(lVar2 + 0xcc) <= uVar1) &&
         ((cVar4 = FUN_1450d4350(plVar7), cVar4 == '\0' || (*(uint *)(lVar2 + 0xcc) <= uVar1)))) {
        return 0x34;
      }
      uVar1 = *(uint *)(lVar2 + 200);
      *(uint *)(lVar2 + 200) = uVar1 + 1;
      plVar7 = (longlong *)((ulonglong)uVar1 * 0x10 + *plVar7);
      if (plVar7 == (longlong *)0x0) {
        return 0x34;
      }
      *plVar7 = 0;
      *(undefined4 *)(plVar7 + 1) = 0;
      *plVar7 = param_3;
      *(undefined4 *)(plVar7 + 1) = 1;
    }
LAB_1450da2c7:
    iVar5 = 1;
  }
  return iVar5;
}



// FUNCTION 1450da300 FUN_1450da300 body=251 status=ok
// SIG undefined FUN_1450da300(void)

void FUN_1450da300(longlong param_1,char param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0xd0) = *(short *)(lVar1 + 0xd0) + -1;
    if (param_2 != '\0') {
      *(short *)(lVar1 + 0xd2) = *(short *)(lVar1 + 0xd2) + -1;
    }
    if (param_3 != 0) {
      plVar5 = *(longlong **)(lVar1 + 0xc0);
      plVar8 = plVar5 + (ulonglong)*(uint *)(lVar1 + 200) * 2;
      for (; plVar5 != plVar8; plVar5 = plVar5 + 2) {
        if (*plVar5 == param_3) {
          iVar6 = (int)plVar5[1] + -1;
          *(int *)(plVar5 + 1) = iVar6;
          if (((*(byte *)(lVar1 + 0xd8) & 4) == 0) && (iVar6 == 0)) {
            plVar8 = *(longlong **)(lVar1 + 0xc0);
            plVar7 = plVar8 + (ulonglong)*(uint *)(lVar1 + 200) * 2;
            goto joined_r0x0001450da391;
          }
          break;
        }
      }
    }
LAB_1450da3b9:
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((((*(short *)(lVar1 + 0xd0) < 1) && (*(short *)(lVar1 + 0xd4) < 1)) &&
        (*(short *)(lVar1 + 0xb8) == 0)) &&
       (((*(short *)(lVar1 + 0xba) == 0 && (*(longlong *)(lVar1 + 0x18) == 0)) &&
        (*(int *)(lVar1 + 8) == 0)))) {
      FUN_1450da060(param_1);
      return;
    }
  }
  return;
joined_r0x0001450da391:
  if (plVar8 == plVar7) goto LAB_1450da3b9;
  if (*plVar8 == *plVar5) {
    if (plVar8 < plVar7 + -2) {
      uVar2 = *(undefined4 *)((longlong)plVar7 + -0xc);
      lVar4 = plVar7[-1];
      uVar3 = *(undefined4 *)((longlong)plVar7 + -4);
      *(int *)plVar8 = (int)plVar7[-2];
      *(undefined4 *)((longlong)plVar8 + 4) = uVar2;
      *(int *)(plVar8 + 1) = (int)lVar4;
      *(undefined4 *)((longlong)plVar8 + 0xc) = uVar3;
    }
    *(int *)(lVar1 + 200) = *(int *)(lVar1 + 200) + -1;
    goto LAB_1450da3b9;
  }
  plVar8 = plVar8 + 2;
  goto joined_r0x0001450da391;
}



// FUNCTION 1450da400 FUN_1450da400 body=60 status=ok
// SIG undefined FUN_1450da400(void)

void FUN_1450da400(longlong param_1,char param_2)

{
  longlong lVar1;
  
  FUN_1450d9d90();
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((lVar1 != 0) && (*(short *)(lVar1 + 0xd4) = *(short *)(lVar1 + 0xd4) + 1, param_2 != '\0')) {
    *(short *)(lVar1 + 0xd6) = *(short *)(lVar1 + 0xd6) + 1;
  }
  return;
}



// FUNCTION 1450da440 FUN_1450da440 body=89 status=ok
// SIG undefined FUN_1450da440(void)

void FUN_1450da440(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uStackX_8;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    *(short *)(lVar2 + 0xd4) = *(short *)(lVar2 + 0xd4) + -1;
    if (param_2 != '\0') {
      *(short *)(lVar2 + 0xd6) = *(short *)(lVar2 + 0xd6) + -1;
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (((((*(short *)(lVar2 + 0xd0) < 1) && (*(short *)(lVar2 + 0xd4) < 1)) &&
         (*(short *)(lVar2 + 0xb8) == 0)) &&
        ((*(short *)(lVar2 + 0xba) == 0 && (*(longlong *)(lVar2 + 0x18) == 0)))) &&
       (*(int *)(lVar2 + 8) == 0)) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xd8) & 2) != 0) {
        FUN_1450c68f0();
      }
      FUN_1450d9fa0(param_1);
      plVar1 = *(longlong **)(param_1 + 0x70);
      uVar5 = (**(code **)(plVar1[4] + 0x38))(plVar1 + 4);
      uVar6 = (**(code **)(plVar1[4] + 0x30))(plVar1 + 4,&uStackX_8);
      FUN_145073fe0(plVar1 + 4,uVar6,uVar5);
      if ((void *)plVar1[0x12] != (void *)0x0) {
        *(undefined4 *)(plVar1 + 0x13) = 0;
        AK::MemoryMgr::Free(0,(void *)plVar1[0x12]);
        plVar1[0x12] = 0;
        *(undefined4 *)((longlong)plVar1 + 0x9c) = 0;
      }
      plVar1[3] = 0;
      if ((void *)*plVar1 != (void *)0x0) {
        *(undefined4 *)(plVar1 + 1) = 0;
        AK::MemoryMgr::Free(0,(void *)*plVar1);
        *plVar1 = 0;
        *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
      }
      if ((void *)plVar1[0x18] != (void *)0x0) {
        *(undefined4 *)(plVar1 + 0x19) = 0;
        AK::MemoryMgr::Free(0,(void *)plVar1[0x18]);
        plVar1[0x18] = 0;
        *(undefined4 *)((longlong)plVar1 + 0xcc) = 0;
      }
      uStackX_8 = 0x10000;
      plVar1[4] = (longlong)&PTR_LAB_149c28030;
      FUN_145073fe0(plVar1 + 4,&uStackX_8,1);
      FUN_145073d80(plVar1 + 4);
      plVar3 = (longlong *)0x0;
      for (plVar4 = DAT_14c79c4f0;
          (plVar4 != (longlong *)0x0 && ((plVar1 < plVar4 || (plVar4 + 0xe00 <= plVar1))));
          plVar4 = (longlong *)plVar4[0xe00]) {
        plVar3 = plVar4;
      }
      if (plVar4[0xe02] == 0) {
        plVar4[0xe02] = (longlong)plVar1;
        *plVar1 = 0;
      }
      else {
        *plVar1 = plVar4[0xe02];
        plVar4[0xe02] = (longlong)plVar1;
      }
      *(int *)(plVar4 + 0xe01) = (int)plVar4[0xe01] + 1;
      if ((int)plVar4[0xe01] == 0x80) {
        plVar1 = (longlong *)plVar4[0xe00];
        if (plVar4 != DAT_14c79c4f0) {
          plVar3[0xe00] = plVar4[0xe00];
          plVar1 = DAT_14c79c4f0;
        }
        DAT_14c79c4f0 = plVar1;
        AK::MemoryMgr::Free(0,plVar4);
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 1450da4a0 FUN_1450da4a0 body=384 status=ok
// SIG undefined FUN_1450da4a0(void)

undefined4 FUN_1450da4a0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  undefined8 local_res8;
  
  uVar5 = FUN_1450d9390(param_1,0);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_1450d9d90(param_1);
  }
  if (uVar5 != 0) {
    lVar3 = *(longlong *)(param_2 + 8);
    if ((lVar3 != 0) && (lVar8 = *(longlong *)(param_1 + 0x70), lVar8 != 0)) {
      uVar2 = *(uint *)(lVar3 + 0x10);
      lVar9 = lVar8 + 0x90;
      if (lVar8 == -0x20) {
        lVar9 = 0;
      }
      if ((uVar2 < *(uint *)(lVar3 + 0x14)) ||
         ((cVar4 = FUN_1450d33b0(lVar3), cVar4 != '\0' && (uVar2 < *(uint *)(lVar3 + 0x14))))) {
        uVar2 = *(uint *)(lVar3 + 0x10);
        *(uint *)(lVar3 + 0x10) = uVar2 + 1;
        plVar1 = (longlong *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar2 * 8);
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = lVar9;
        }
      }
    }
    if (param_3 != '\0') {
      if (*(char *)(param_2 + 0x29) == '\0') {
        return 1;
      }
      uVar10 = 0;
      if (*(short *)(param_2 + 0x26) != 0) {
        return 1;
      }
      lVar3 = *(longlong *)(param_1 + 0x70);
      uVar7 = uVar10;
      if (lVar3 != 0) {
        uVar10 = *(ushort *)(lVar3 + 0xba);
        uVar7 = *(ushort *)(lVar3 + 0xb8);
      }
      if ((int)((uint)uVar7 - (uint)uVar10) < (int)(uint)uVar5) {
        return 1;
      }
      local_res8 = 0;
      lVar8 = lVar3 + 0x90;
      if (lVar3 == -0x20) {
        lVar8 = 0;
      }
      uVar6 = FUN_1450c6990(lVar8,uVar5,*(undefined4 *)(param_2 + 0x20),0,
                            *(byte *)(param_1 + 0xd4) & 1,*(byte *)(param_1 + 0xd4) >> 1 & 1,
                            &local_res8,1);
      *(short *)(param_2 + 0x26) = *(short *)(param_2 + 0x26) + 1;
      return uVar6;
    }
  }
  return 1;
}



// FUNCTION 1450da620 FUN_1450da620 body=67 status=ok
// SIG undefined FUN_1450da620(void)

void FUN_1450da620(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uStackX_8;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (((((lVar2 != 0) && (*(short *)(lVar2 + 0xd0) < 1)) && (*(short *)(lVar2 + 0xd4) < 1)) &&
      ((*(short *)(lVar2 + 0xb8) == 0 && (*(short *)(lVar2 + 0xba) == 0)))) &&
     ((*(longlong *)(lVar2 + 0x18) == 0 && (*(int *)(lVar2 + 8) == 0)))) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xd8) & 2) != 0) {
      FUN_1450c68f0();
    }
    FUN_1450d9fa0(param_1);
    plVar1 = *(longlong **)(param_1 + 0x70);
    uVar5 = (**(code **)(plVar1[4] + 0x38))(plVar1 + 4);
    uVar6 = (**(code **)(plVar1[4] + 0x30))(plVar1 + 4,&uStackX_8);
    FUN_145073fe0(plVar1 + 4,uVar6,uVar5);
    if ((void *)plVar1[0x12] != (void *)0x0) {
      *(undefined4 *)(plVar1 + 0x13) = 0;
      AK::MemoryMgr::Free(0,(void *)plVar1[0x12]);
      plVar1[0x12] = 0;
      *(undefined4 *)((longlong)plVar1 + 0x9c) = 0;
    }
    plVar1[3] = 0;
    if ((void *)*plVar1 != (void *)0x0) {
      *(undefined4 *)(plVar1 + 1) = 0;
      AK::MemoryMgr::Free(0,(void *)*plVar1);
      *plVar1 = 0;
      *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
    }
    if ((void *)plVar1[0x18] != (void *)0x0) {
      *(undefined4 *)(plVar1 + 0x19) = 0;
      AK::MemoryMgr::Free(0,(void *)plVar1[0x18]);
      plVar1[0x18] = 0;
      *(undefined4 *)((longlong)plVar1 + 0xcc) = 0;
    }
    uStackX_8 = 0x10000;
    plVar1[4] = (longlong)&PTR_LAB_149c28030;
    FUN_145073fe0(plVar1 + 4,&uStackX_8,1);
    FUN_145073d80(plVar1 + 4);
    plVar3 = (longlong *)0x0;
    for (plVar4 = DAT_14c79c4f0;
        (plVar4 != (longlong *)0x0 && ((plVar1 < plVar4 || (plVar4 + 0xe00 <= plVar1))));
        plVar4 = (longlong *)plVar4[0xe00]) {
      plVar3 = plVar4;
    }
    if (plVar4[0xe02] == 0) {
      plVar4[0xe02] = (longlong)plVar1;
      *plVar1 = 0;
    }
    else {
      *plVar1 = plVar4[0xe02];
      plVar4[0xe02] = (longlong)plVar1;
    }
    *(int *)(plVar4 + 0xe01) = (int)plVar4[0xe01] + 1;
    if ((int)plVar4[0xe01] == 0x80) {
      plVar1 = (longlong *)plVar4[0xe00];
      if (plVar4 != DAT_14c79c4f0) {
        plVar3[0xe00] = plVar4[0xe00];
        plVar1 = DAT_14c79c4f0;
      }
      DAT_14c79c4f0 = plVar1;
      AK::MemoryMgr::Free(0,plVar4);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    return;
  }
  return;
}



// FUNCTION 1450da670 FUN_1450da670 body=474 status=ok
// SIG undefined FUN_1450da670(void)

undefined4 FUN_1450da670(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  short *psVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_res8;
  
  uVar6 = 1;
  uVar5 = FUN_1450d9390(param_1,*param_2);
  plVar10 = *(longlong **)(param_1 + 0x70);
  if (plVar10 == (longlong *)0x0) {
    return 1;
  }
  plVar8 = (longlong *)*plVar10;
  lVar2 = *param_2;
  plVar10 = plVar8 + (ulonglong)*(uint *)(plVar10 + 1) * 2;
  for (; (plVar8 != plVar10 && (*plVar8 != lVar2)); plVar8 = plVar8 + 2) {
  }
  plVar11 = (longlong *)0x0;
  plVar9 = plVar8 + 1;
  if (plVar8 == plVar10) {
    plVar9 = plVar11;
  }
  local_res8 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    uVar5 = FUN_1450d9390(param_1,lVar2);
    uVar6 = FUN_1450da850(param_1,*param_2,&local_res8,uVar5);
    plVar9 = local_res8;
  }
  else {
    if (param_3 == '\0') goto LAB_1450da7cf;
    lVar3 = *plVar9;
    psVar7 = (short *)(lVar3 + 0x80);
    if (lVar3 == 0) {
      uVar5 = 0;
      psVar7 = (short *)&DAT_00000080;
      plVar10 = plVar11;
    }
    else {
      uVar5 = *(ushort *)(lVar3 + 0x80);
      plVar10 = (longlong *)(ulonglong)uVar5;
    }
    if ((((*(char *)((longlong)param_2 + 0x29) != '\0') && (lVar3 != 0)) && (*psVar7 != 0)) &&
       ((int)plVar10 <=
        (int)(((uint)*(ushort *)(lVar3 + 0x98) - (uint)*(ushort *)((longlong)param_2 + 0x26)) -
             (uint)*(ushort *)(lVar3 + 0x9a)))) {
      local_res8 = (longlong *)0x0;
      uVar6 = FUN_1450c6990(lVar3 + 0x70,plVar10,(int)param_2[4],lVar2,*(byte *)(param_1 + 0xd4) & 1
                            ,*(byte *)(param_1 + 0xd4) >> 1 & 1,&local_res8,1);
      *(short *)((longlong)param_2 + 0x26) = *(short *)((longlong)param_2 + 0x26) + 1;
    }
  }
  if (plVar9 == (longlong *)0x0) {
    return uVar6;
  }
LAB_1450da7cf:
  if ((uVar5 != 0) && (lVar2 = param_2[1], lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x10);
    plVar10 = (longlong *)(*plVar9 + 0x70);
    if (*plVar9 == 0) {
      plVar10 = plVar11;
    }
    if ((uVar1 < *(uint *)(lVar2 + 0x14)) ||
       ((cVar4 = FUN_1450d33b0(lVar2), cVar4 != '\0' && (uVar1 < *(uint *)(lVar2 + 0x14))))) {
      uVar1 = *(uint *)(lVar2 + 0x10);
      *(uint *)(lVar2 + 0x10) = uVar1 + 1;
      plVar8 = (longlong *)(*(longlong *)(lVar2 + 8) + (ulonglong)uVar1 * 8);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)plVar10;
      }
    }
  }
  return uVar6;
}



// FUNCTION 1450da850 FUN_1450da850 body=387 status=ok
// SIG undefined FUN_1450da850(void)

undefined8 FUN_1450da850(longlong param_1,longlong param_2,undefined8 *param_3,undefined2 param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  bVar1 = *(byte *)(param_1 + 0xd4);
  pvVar4 = AK::MemoryMgr::Malloc(0,0xa0);
  if ((pvVar4 != (void *)0x0) &&
     (plVar5 = (longlong *)FUN_1450d3f80(pvVar4), plVar5 != (longlong *)0x0)) {
    FUN_1450d3fe0(plVar5,param_1,param_2,param_4,bVar1 & 1,bVar1 >> 1 & 1);
    plVar8 = *(longlong **)(param_1 + 0x70);
    plVar7 = (longlong *)*plVar8;
    uVar11 = (ulonglong)*(uint *)(plVar8 + 1);
    plVar9 = plVar7 + uVar11 * 2;
    for (; (plVar7 != plVar9 && (*plVar7 != param_2)); plVar7 = plVar7 + 2) {
    }
    plVar6 = (longlong *)0x0;
    plVar10 = plVar7 + 1;
    if (plVar7 == plVar9) {
      plVar10 = plVar6;
    }
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = (longlong)plVar5;
      *param_3 = plVar10;
      return 1;
    }
    if ((uVar11 < *(uint *)((longlong)plVar8 + 0xc)) || (cVar3 = FUN_1450d4210(), cVar3 != '\0')) {
      if (uVar11 < *(uint *)((longlong)plVar8 + 0xc)) {
        uVar2 = *(uint *)(plVar8 + 1);
        *(uint *)(plVar8 + 1) = uVar2 + 1;
        plVar8 = (longlong *)((ulonglong)uVar2 * 0x10 + *plVar8);
        if (plVar8 != (longlong *)0x0) {
          plVar8[1] = 0;
          plVar6 = plVar8 + 1;
          *plVar8 = param_2;
          *plVar6 = (longlong)plVar5;
        }
        *param_3 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          return 1;
        }
      }
      else {
        *param_3 = 0;
      }
    }
    else {
      *param_3 = 0;
    }
    if ((void *)plVar5[0xe] != (void *)0x0) {
      *(undefined4 *)(plVar5 + 0xf) = 0;
      AK::MemoryMgr::Free(0,(void *)plVar5[0xe]);
      plVar5[0xe] = 0;
      *(undefined4 *)((longlong)plVar5 + 0x7c) = 0;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,0);
    AK::MemoryMgr::Free(0,plVar5);
  }
  return 2;
}



// FUNCTION 1450da9e0 FUN_1450da9e0 body=195 status=ok
// SIG undefined FUN_1450da9e0(void)

void FUN_1450da9e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)**(longlong **)(param_1 + 0x70);
  plVar4 = plVar2 + (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x70) + 1) * 2;
  for (; (plVar2 != plVar4 && (*plVar2 != param_2)); plVar2 = plVar2 + 2) {
  }
  plVar3 = plVar2 + 1;
  if (plVar2 == plVar4) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    lVar1 = *plVar3;
    if ((lVar1 == 0) || ((*(short *)(lVar1 + 0x98) == 0 && (*(short *)(lVar1 + 0x9a) == 0)))) {
      FUN_1450d41a0();
      FUN_1450d42e0(*(undefined8 *)(param_1 + 0x70),param_2);
    }
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((((lVar1 != 0) && (*(short *)(lVar1 + 0xd0) < 1)) && (*(short *)(lVar1 + 0xd4) < 1)) &&
       (((*(short *)(lVar1 + 0xb8) == 0 && (*(short *)(lVar1 + 0xba) == 0)) &&
        ((*(longlong *)(lVar1 + 0x18) == 0 && (*(int *)(lVar1 + 8) == 0)))))) {
      FUN_1450da060(param_1);
    }
  }
  return;
}



// FUNCTION 1450daab0 FUN_1450daab0 body=151 status=ok
// SIG undefined FUN_1450daab0(void)

byte FUN_1450daab0(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 local_res8 [2];
  
  bVar1 = *(byte *)(param_1 + 0xd5);
  lVar3 = *(longlong *)(param_1 + 0x78);
  while ((lVar2 = lVar3, (bVar1 & 0x40) == 0 && (lVar2 != 0))) {
    bVar1 = *(byte *)(lVar2 + 0xd5);
    param_1 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 0x78);
  }
  pbVar4 = *(byte **)(param_1 + 0x90);
  pbVar7 = (byte *)0x0;
  local_res8[0] = DAT_14c72f524;
  if (pbVar4 != (byte *)0x0) {
    pbVar5 = pbVar7;
    do {
      uVar6 = (int)pbVar5 + 1;
      if (((byte *)(ulonglong)uVar6)[(longlong)pbVar4] == 0x2d) {
        pbVar7 = pbVar4 + (longlong)pbVar5 * 4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc);
        break;
      }
      pbVar5 = (byte *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar4);
  }
  pbVar4 = (byte *)local_res8;
  if (pbVar7 != (byte *)0x0) {
    pbVar4 = pbVar7;
  }
  *param_2 = *(undefined4 *)pbVar4;
  return *(byte *)(param_1 + 0xd5) >> 7;
}



// FUNCTION 1450dab50 FUN_1450dab50 body=47 status=ok
// SIG undefined FUN_1450dab50(void)

byte FUN_1450dab50(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0xd5);
  lVar3 = *(longlong *)(param_1 + 0x78);
  while ((lVar2 = lVar3, (bVar1 & 0x20) == 0 && (lVar2 != 0))) {
    bVar1 = *(byte *)(lVar2 + 0xd5);
    param_1 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 0x78);
  }
  return *(byte *)(param_1 + 0xd6) & 1;
}



// FUNCTION 1450dab80 FUN_1450dab80 body=41 status=ok
// SIG undefined FUN_1450dab80(void)

ulonglong FUN_1450dab80(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1 + 0x10;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  if ((uVar1 != param_2) && (*(longlong **)(param_1 + 0x78) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001450dab9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x240))();
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1450dabb0 FUN_1450dabb0 body=49 status=ok
// SIG undefined FUN_1450dabb0(void)

void FUN_1450dabb0(longlong param_1)

{
  byte *pbVar1;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xd8) & 2) == 0)) {
    FUN_1450c6880();
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x70) + 0xd8);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}



// FUNCTION 1450dabf0 FUN_1450dabf0 body=59 status=ok
// SIG undefined FUN_1450dabf0(void)

void FUN_1450dabf0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd8) & 2) != 0)) && (*(short *)(lVar2 + 0xd4) == 0)) {
    FUN_1450c68f0();
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x70) + 0xd8);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return;
}



// FUNCTION 1450dac30 FUN_1450dac30 body=182 status=ok
// SIG undefined FUN_1450dac30(void)

void FUN_1450dac30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 local_res8;
  
  if ((param_1[0xe] != 0) && (param_1[0x10] != *param_2)) {
    (**(code **)(*param_1 + 0xd8))();
    DAT_14c79c388 = 1;
    lVar1 = param_1[0xe];
    if (lVar1 == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined2 *)(lVar1 + 0xd2);
      uVar4 = *(undefined2 *)(lVar1 + 0xd6);
    }
    local_res8 = CONCAT22(uVar3,uVar4);
    FUN_1450daf40(param_1,local_res8);
    if (*param_2 == 0) {
      if (param_1[0xf] != 0) {
        FUN_1450dae20(param_1[0xf],local_res8);
      }
    }
    else {
      cVar2 = FUN_1450dacf0(param_1,*param_2,local_res8);
      if (cVar2 == '\0') {
        *param_2 = 0;
        return;
      }
    }
  }
  return;
}



// FUNCTION 1450dacf0 FUN_1450dacf0 body=298 status=ok
// SIG undefined FUN_1450dacf0(void)

undefined8 FUN_1450dacf0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  short sStackX_1a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  
  if (param_2 != (longlong *)0x0) {
    uVar5 = 0;
    sVar3 = (short)param_3;
    uVar4 = 0;
    if (0 < sVar3) {
      do {
        cVar1 = (**(code **)(*param_2 + 0x118))(param_2,1);
        if (cVar1 == '\0') {
          FUN_1450dae70(param_1,param_2,uVar4);
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while ((int)(uint)uVar4 < (int)sVar3);
    }
    sStackX_1a = (short)((uint)param_3 >> 0x10);
    local_40 = 0;
    local_38 = 0;
    local_34 = 1;
    local_2f = 1;
    local_58 = 0;
    uStack_50 = 0;
    if (0 < sStackX_1a) {
      do {
        local_30 = 0;
        local_48 = param_1;
        iVar2 = (**(code **)(*param_2 + 0x108))(param_2,&local_58,1,1);
        if (iVar2 == 0) {
          FUN_1450dae70(param_1,param_2,CONCAT22(uVar5,sVar3));
          return 0;
        }
        uVar5 = uVar5 + 1;
      } while ((int)(uint)uVar5 < (int)sStackX_1a);
    }
  }
  return 1;
}



// FUNCTION 1450dae20 FUN_1450dae20 body=73 status=ok
// SIG undefined FUN_1450dae20(void)

void FUN_1450dae20(longlong param_1,undefined4 param_2)

{
  short *psVar1;
  
  while( true ) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      psVar1 = (short *)(*(longlong *)(param_1 + 0x70) + 0xd6);
      *psVar1 = *psVar1 + (short)param_2;
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      psVar1 = (short *)(*(longlong *)(param_1 + 0x70) + 0xd2);
      *psVar1 = *psVar1 + (short)((uint)param_2 >> 0x10);
    }
    if (*(longlong *)(param_1 + 0x80) != 0) break;
    param_1 = *(longlong *)(param_1 + 0x78);
    if (param_1 == 0) {
      return;
    }
  }
  FUN_1450dacf0(param_1,*(longlong *)(param_1 + 0x80),param_2);
  return;
}



// FUNCTION 1450dae70 FUN_1450dae70 body=202 status=ok
// SIG undefined FUN_1450dae70(void)

void FUN_1450dae70(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sStackX_1a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = 0;
    uVar1 = 0;
    if (0 < (short)param_3) {
      do {
        (**(code **)(*param_2 + 0x120))(param_2,1);
        uVar1 = uVar1 + 1;
      } while ((int)(uint)uVar1 < (int)(short)param_3);
    }
    sStackX_1a = (short)((uint)param_3 >> 0x10);
    local_24 = 1;
    local_1f = 1;
    local_30 = 0;
    local_28 = 0;
    local_48 = 0;
    uStack_40 = 0;
    if (0 < sStackX_1a) {
      do {
        local_20 = 0;
        local_38 = param_1;
        (**(code **)(*param_2 + 0x110))(param_2,&local_48);
        uVar2 = uVar2 + 1;
      } while ((int)(uint)uVar2 < (int)sStackX_1a);
    }
  }
  return;
}



// FUNCTION 1450daf40 FUN_1450daf40 body=118 status=ok
// SIG undefined FUN_1450daf40(void)

void FUN_1450daf40(longlong param_1,undefined4 param_2)

{
  short *psVar1;
  longlong lVar2;
  undefined2 uStackX_12;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uStackX_12 = (short)((uint)param_2 >> 0x10);
    do {
      if (*(longlong *)(param_1 + 0x78) == 0) {
        return;
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70);
      if (lVar2 != 0) {
        psVar1 = (short *)(lVar2 + 0xd6);
        *psVar1 = *psVar1 - (short)param_2;
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70);
      if (lVar2 != 0) {
        psVar1 = (short *)(lVar2 + 0xd2);
        *psVar1 = *psVar1 - uStackX_12;
      }
      param_1 = *(longlong *)(param_1 + 0x78);
    } while (*(longlong *)(param_1 + 0x80) == 0);
  }
  FUN_1450dae70(param_1,*(undefined8 *)(param_1 + 0x80),param_2);
  return;
}



// FUNCTION 1450dafc0 FUN_1450dafc0 body=52 status=ok
// SIG undefined FUN_1450dafc0(void)

undefined8 FUN_1450dafc0(undefined8 param_1,ulonglong param_2)

{
  FUN_1450d4570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1450db000 FUN_1450db000 body=520 status=ok
// SIG undefined FUN_1450db000(void)

undefined8 FUN_1450db000(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  void *pvVar8;
  byte *pbVar9;
  undefined8 uVar10;
  char cVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  uVar3 = *(ushort *)*param_1;
  *param_1 = (longlong)((ushort *)*param_1 + 1);
  uVar13 = (uint)uVar3;
  if (uVar13 == 0) {
    return 1;
  }
  uVar15 = 0;
  if (uVar13 <= *(uint *)((longlong)param_3 + 0x54)) goto LAB_1450db0df;
  uVar14 = *(uint *)(param_3 + 10);
  if ((void *)param_3[9] == (void *)0x0) {
    pvVar8 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar3 << 3);
    bVar7 = false;
    if (pvVar8 != (void *)0x0) {
      if (((void *)param_3[9] != (void *)0x0) && ((void *)param_3[9] != pvVar8)) {
        uVar12 = uVar15;
        if ((ulonglong)uVar14 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar8 + uVar12 * 8) =
                 *(undefined8 *)(param_3[9] + uVar12 * 8);
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar14);
        }
        AK::MemoryMgr::Free(0,(void *)param_3[9]);
      }
      goto LAB_1450db0bf;
    }
  }
  else {
    pvVar8 = AK::MemoryMgr::Realloc(0,(void *)param_3[9],(ulonglong)uVar3 << 3);
    if (pvVar8 == (void *)0x0) {
      bVar7 = false;
    }
    else {
LAB_1450db0bf:
      param_3[9] = (longlong)pvVar8;
      bVar7 = true;
      *(uint *)((longlong)param_3 + 0x54) = uVar13;
    }
  }
  if (!bVar7) {
    return 0x34;
  }
LAB_1450db0df:
  if (uVar3 != 0) {
    do {
      puVar6 = (undefined4 *)*param_1;
      uVar4 = *puVar6;
      *param_1 = (longlong)(puVar6 + 1);
      uVar1 = *(undefined1 *)(puVar6 + 1);
      *param_1 = (longlong)puVar6 + 5;
      cVar11 = *(char *)((longlong)puVar6 + 5);
      *param_1 = (longlong)puVar6 + 6;
      bVar2 = *(byte *)((longlong)puVar6 + 6);
      pbVar9 = (byte *)((longlong)puVar6 + 7);
      *param_1 = (longlong)pbVar9;
      uVar14 = bVar2 & 0x7f;
      while ((char)bVar2 < '\0') {
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        *param_1 = (longlong)pbVar9;
        uVar14 = bVar2 & 0x7f | uVar14 << 7;
      }
      uVar5 = *(undefined4 *)pbVar9;
      *param_1 = (longlong)(pbVar9 + 4);
      bVar2 = pbVar9[4];
      *param_1 = (longlong)(pbVar9 + 5);
      uVar3 = *(ushort *)(pbVar9 + 5);
      *param_1 = (longlong)(pbVar9 + 7);
      if (cVar11 == '\x06') {
        cVar11 = '\x02';
        if (DAT_14c791034 == 1) {
          cVar11 = '\x05';
        }
      }
      uVar10 = (**(code **)(*param_3 + 0x1c0))
                         (param_3,uVar4,uVar1,cVar11,uVar14,uVar5,bVar2,pbVar9 + 7,(uint)uVar3);
      if ((int)uVar10 != 1) {
        return uVar10;
      }
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      *param_1 = *param_1 + (ulonglong)uVar3 * 0xc;
      *param_2 = *param_2 + (uint)uVar3 * -0xc;
    } while (uVar14 < uVar13);
  }
  return 1;
}



// FUNCTION 1450db210 FUN_1450db210 body=918 status=ok
// SIG undefined FUN_1450db210(void)

longlong FUN_1450db210(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x7000) = 0;
  *(undefined4 *)(param_1 + 0x7008) = 0;
  *(undefined8 *)(param_1 + 0x7010) = 0;
  uVar3 = 2;
  do {
    plVar2 = (longlong *)((ulonglong)(uVar3 - 2) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 - 1) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)uVar3 * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 1) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 2) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 3) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 4) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 5) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 6) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 7) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 8) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 9) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 10) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 0xb) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 0xc) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 0xd) * 0xe0 + param_1);
    if (*(longlong *)(param_1 + 0x7010) == 0) {
      *(longlong **)(param_1 + 0x7010) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x7010);
      *(longlong **)(param_1 + 0x7010) = plVar2;
    }
    *(int *)(param_1 + 0x7008) = *(int *)(param_1 + 0x7008) + 1;
    uVar1 = uVar3 + 0xe;
    uVar3 = uVar3 + 0x10;
  } while (uVar1 < 0x80);
  return param_1;
}



// FUNCTION 1450db5d0 FUN_1450db5d0 body=75 status=ok
// SIG undefined FUN_1450db5d0(void)

undefined8 * FUN_1450db5d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453734e0(puVar1);
    *(undefined4 *)(puVar1 + 5) = 0;
    *puVar1 = &PTR_FUN_149c28380;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1450db620 FUN_1450db620 body=154 status=ok
// SIG undefined FUN_1450db620(void)

undefined8 FUN_1450db620(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_res10;
  
  bVar1 = *(byte *)(param_2 + 4);
  pbVar4 = (byte *)(param_2 + 5);
  uVar6 = bVar1 & 0x7f;
  while ((char)bVar1 < '\0') {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar6 = bVar1 & 0x7f | uVar6 << 7;
  }
  uVar5 = 0;
  local_res10 = 0;
  if (uVar6 == 0) {
    uVar3 = 1;
  }
  else {
    do {
      uVar2 = *(undefined4 *)pbVar4;
      pbVar4 = pbVar4 + 4;
      uVar3 = FUN_1450db920(param_1,uVar2,&local_res10);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return uVar3;
}



// FUNCTION 1450db6c0 FUN_1450db6c0 body=322 status=ok
// SIG undefined FUN_1450db6c0(void)

undefined8 FUN_1450db6c0(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  local_res8[0] = 0;
  do {
    if (lVar3 == 0) {
LAB_1450db7e3:
      uVar6 = 3;
      if (*param_2 != 0) {
        uVar6 = 1;
      }
      *param_2 = local_res8[0];
      return uVar6;
    }
    if ((*(short *)(lVar3 + 0x34) == 0x403) &&
       (plVar5 = (longlong *)FUN_145369e40(lVar3), plVar5 != (longlong *)0x0)) {
      if (*param_2 != 0) {
        *(int *)(param_3 + (ulonglong)local_res8[0] * 0xc) = (int)plVar5[4];
        if (plVar5[0xf] == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(plVar5[0xf] + 0x20);
        }
        *(undefined4 *)(param_3 + 4 + (ulonglong)local_res8[0] * 0xc) = uVar7;
        *(undefined4 *)(param_3 + 8 + (ulonglong)local_res8[0] * 0xc) = 0;
        uVar4 = local_res8[0] + 1;
        if (uVar4 == *param_2) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0x24);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_res8[0] = uVar4;
          if (iVar2 == 1) {
            (**(code **)(plVar5[2] + 0x18))();
          }
          goto LAB_1450db7e3;
        }
      }
      local_res8[0] = local_res8[0] + 1;
      (**(code **)(*plVar5 + 0x60))(plVar5,param_2,param_3,local_res8,1);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(plVar5[2] + 0x18))();
      }
      if (local_res8[0] == *param_2) goto LAB_1450db7e3;
    }
    lVar3 = *(longlong *)(lVar3 + 0x18);
  } while( true );
}



// FUNCTION 1450db810 FUN_1450db810 body=221 status=ok
// SIG undefined FUN_1450db810(void)

undefined8
FUN_1450db810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  for (lVar3 = *(longlong *)(param_1 + 0x20); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
    if ((*(short *)(lVar3 + 0x34) == 0x403) &&
       (plVar4 = (longlong *)FUN_145369e40(lVar3), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))(plVar4,param_2,param_3,param_4,1,param_5,param_6,param_7);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(plVar4[2] + 0x18))();
      }
    }
  }
  return 1;
}



// FUNCTION 1450db8f0 FUN_1450db8f0 body=39 status=ok
// SIG undefined FUN_1450db8f0(void)

void FUN_1450db8f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(1,param_1);
  }
  return;
}



// FUNCTION 1450db920 FUN_1450db920 body=344 status=ok
// SIG undefined FUN_1450db920(void)

undefined4 FUN_1450db920(longlong param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = DAT_14c791060;
  if (param_2 == 0) {
    return 0xe;
  }
  do {
    while (iVar1 = *(int *)(lVar2 + 0x160), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x168));
      if (*(int *)(lVar2 + 0x160) < 0) goto LAB_1450db978;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x168));
    }
    LOCK();
    bVar5 = iVar1 == *(int *)(lVar2 + 0x160);
    if (bVar5) {
      *(int *)(lVar2 + 0x160) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar5);
LAB_1450db978:
  if (*(uint *)(lVar2 + 0x1a8) == 0) {
    lVar4 = 0;
  }
  else {
    for (lVar4 = *(longlong *)
                  (*(longlong *)(lVar2 + 0x1a0) +
                  ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar2 + 0x1a8)) * 8); lVar4 != 0;
        lVar4 = *(longlong *)(lVar4 + 8)) {
      if (*(uint *)(lVar4 + 0x10) == param_2) goto LAB_1450db9a8;
    }
    lVar4 = 0;
LAB_1450db9a8:
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(lVar2 + 0x160);
  do {
    if (iVar1 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x168));
LAB_1450dba14:
      if (lVar4 == 0) {
        uVar3 = 0xf;
      }
      else {
        lVar2 = *param_3;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        if (lVar2 == 0) {
          *(longlong *)(param_1 + 0x20) = lVar4;
        }
        else {
          *(longlong *)(lVar2 + 0x18) = lVar4;
        }
        *param_3 = lVar4;
        uVar3 = 1;
      }
      return uVar3;
    }
    LOCK();
    bVar5 = iVar1 == *(int *)(lVar2 + 0x160);
    if (bVar5) {
      *(int *)(lVar2 + 0x160) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar5) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar2 + 400))) {
        SetEvent(*(HANDLE *)(lVar2 + 0x198));
      }
      goto LAB_1450dba14;
    }
    iVar1 = *(int *)(lVar2 + 0x160);
  } while( true );
}



// FUNCTION 1450dba80 FUN_1450dba80 body=147 status=ok
// SIG undefined FUN_1450dba80(void)

undefined8 * FUN_1450dba80(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149c28380;
  FUN_1450cab90();
  plVar3 = (longlong *)param_1[4];
  while (plVar3 != (longlong *)0x0) {
    param_1[4] = plVar3[3];
    plVar3[3] = 0;
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar3 = (longlong *)param_1[4];
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1450dbb20 FUN_1450dbb20 body=1170 status=ok
// SIG undefined FUN_1450dbb20(void)

undefined8 FUN_1450dbb20(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  _SYSTEM_INFO local_48;
  
  lVar15 = (longlong)param_1;
  lVar12 = lVar15 * 0x638;
  if (*(int *)(&DAT_14c79c500 + lVar12) != 0) {
    lVar12 = AkTlsGetValue(*(undefined4 *)(&DAT_14c79d180 + lVar15 * 4));
    if (lVar12 != 0) {
      return 0;
    }
    puVar6 = (undefined8 *)FUN_1450dd9d0(param_1,0);
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    AkTlsSetValue(*(undefined4 *)(&DAT_14c79d180 + lVar15 * 4),puVar6);
    *puVar6 = &ExceptionList;
    return 0;
  }
  uVar11 = 1;
  *(undefined4 *)(&DAT_14c79c500 + lVar12) = 1;
  if (param_2 == (undefined8 *)0x0) {
    *(undefined8 *)(&DAT_14c79c508 + lVar12) = 0;
    *(undefined8 *)(lVar12 + 0x14c79c510) = 0;
    *(undefined8 *)(&DAT_14c79c518 + lVar12) = 0;
    *(undefined8 *)(lVar12 + 0x14c79c520) = 0;
    *(undefined8 *)(&DAT_14c79c528 + lVar12) = 0;
    *(undefined8 *)(&DAT_14c79c530 + lVar12) = 0;
    *(undefined8 *)(&DAT_14c79c538 + lVar12) = 0;
    *(undefined8 *)(&DAT_14c79c540 + lVar12) = 0;
    (&DAT_14c79c548)[lVar15 * 199] = 0;
  }
  else {
    uVar4 = param_2[1];
    *(undefined8 *)(&DAT_14c79c508 + lVar12) = *param_2;
    *(undefined8 *)(lVar12 + 0x14c79c510) = uVar4;
    uVar4 = param_2[3];
    *(undefined8 *)(&DAT_14c79c518 + lVar12) = param_2[2];
    *(undefined8 *)(lVar12 + 0x14c79c520) = uVar4;
    uVar4 = param_2[5];
    *(undefined8 *)(&DAT_14c79c528 + lVar12) = param_2[4];
    *(undefined8 *)(&DAT_14c79c530 + lVar12) = uVar4;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar2 = *(undefined4 *)(param_2 + 7);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(&DAT_14c79c538 + lVar12) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(lVar12 + 0x14c79c53c) = uVar1;
    *(undefined4 *)(&DAT_14c79c540 + lVar12) = uVar2;
    *(undefined4 *)(lVar12 + 0x14c79c544) = uVar3;
    (&DAT_14c79c548)[lVar15 * 199] = param_2[8];
  }
  local_48.u = (_union_552)0x0;
  local_48.dwPageSize = 0;
  local_48.lpMinimumApplicationAddress = (LPVOID)0x0;
  local_48.lpMaximumApplicationAddress = (LPVOID)0x0;
  local_48.dwActiveProcessorMask = 0;
  local_48.dwNumberOfProcessors = 0;
  local_48.dwProcessorType = 0;
  local_48.dwAllocationGranularity = 0;
  local_48.wProcessorLevel = 0;
  local_48.wProcessorRevision = 0;
  GetSystemInfo(&local_48);
  puVar7 = *(undefined1 **)(&DAT_14c79c528 + lVar12);
  lVar14 = 0;
  puVar16 = &DAT_14c79c550 + lVar15 * 199;
  *(undefined4 *)(&DAT_14c79c98c + lVar12) = 0;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)((ulonglong)local_48._0_8_ >> 0x20);
    *(ulonglong *)(&DAT_14c79c560 + lVar12) = local_48._40_8_ & 0xffffffff;
    *puVar16 = (ulonglong)puVar7;
  }
  else {
    *(undefined1 **)(&DAT_14c79c560 + lVar12) = puVar7;
    *puVar16 = (ulonglong)puVar7;
    if (*(int *)(&DAT_14c79c540 + lVar12) != 0) {
      *(undefined4 *)(&DAT_14c79c98c + lVar12) = 1;
    }
  }
  if (puVar7 < (undefined1 *)0x100) {
    *puVar16 = 0x100;
    puVar7 = (undefined1 *)0x100;
  }
  else {
    *puVar16 = (ulonglong)puVar7;
    if (puVar7 < &DAT_100000001) {
      *puVar16 = (ulonglong)puVar7;
    }
    else {
      *puVar16 = 0x100000000;
      puVar7 = (undefined1 *)0x100000000;
    }
  }
  *(longlong *)(&DAT_14c79c558 + lVar12) = 0;
  lVar9 = lVar14;
  do {
    lVar9 = lVar9 + 1;
    puVar7 = (undefined1 *)((ulonglong)puVar7 >> 1);
  } while (puVar7 != (undefined1 *)0x1);
  uVar8 = *(ulonglong *)(&DAT_14c79c530 + lVar12);
  *(longlong *)(&DAT_14c79c558 + lVar12) = lVar9;
  uVar18 = 1L << ((byte)lVar9 & 0x3f);
  *puVar16 = uVar18;
  uVar17 = 0x1000;
  lVar9 = 0xc;
  (&DAT_14c79c568)[lVar15 * 199] = 0x1000;
  *(longlong *)(&DAT_14c79c570 + lVar12) = 0xc;
  if (uVar8 == 0) {
    uVar10 = 0x10000;
  }
  else {
    uVar10 = 0x40000;
    if ((uVar8 < 0x40001) && (uVar10 = uVar8, uVar8 < 0x1001)) goto LAB_1450dbd51;
  }
  do {
    uVar17 = uVar17 * 2;
    lVar9 = lVar9 + 1;
  } while (uVar17 < uVar10);
  (&DAT_14c79c568)[lVar15 * 199] = uVar17;
  *(longlong *)(&DAT_14c79c570 + lVar12) = lVar9;
LAB_1450dbd51:
  (&DAT_14c79c578)[lVar15 * 199] = ~(uVar17 - 1);
  uVar8 = 0x20;
  if (*(ulonglong *)(&DAT_14c79c538 + lVar12) != 0) {
    uVar8 = *(ulonglong *)(&DAT_14c79c538 + lVar12);
  }
  *(ulonglong *)(&DAT_14c79c580 + lVar12) = uVar8;
  if (uVar17 * uVar8 < uVar18) {
    uVar8 = uVar18 / uVar17;
    *(ulonglong *)(&DAT_14c79c580 + lVar12) = uVar8;
  }
  if ((uVar17 <= uVar18) && ((uVar8 * uVar17) % uVar18 != 0)) {
    uVar8 = uVar18 / uVar17;
    *(ulonglong *)(&DAT_14c79c580 + lVar12) = uVar8;
  }
  uVar10 = uVar8;
  if (0x20 < uVar8) {
    uVar10 = 0x20;
  }
  *(ulonglong *)(&DAT_14c79c588 + lVar15 * 0x638) = uVar10;
  *(ulonglong *)(&DAT_14c79c528 + lVar15 * 0x638) = uVar18;
  *(ulonglong *)(&DAT_14c79c530 + lVar15 * 0x638) = uVar17;
  *(ulonglong *)(&DAT_14c79c538 + lVar15 * 0x638) = uVar8;
  *(undefined4 *)(&DAT_14c79c540 + lVar15 * 0x638) =
       *(undefined4 *)(&DAT_14c79c98c + lVar15 * 0x638);
  iVar5 = AkTlsAllocateSlot(&DAT_14c79d180 + lVar15 * 4);
  if (iVar5 != 0) {
    return 0xffffffff;
  }
  if (param_1 == 0) {
    DAT_14c79d170 = DAT_14c79c548;
  }
  *(undefined4 *)(&DAT_14c79c590 + lVar15 * 0x638) = 0x10;
  FUN_1450dedf0(param_1,0);
  piVar13 = (int *)(&DAT_14c79c598 + lVar15 * 0x638);
  do {
    *piVar13 = (int)uVar11 << 4;
    FUN_1450dedf0(param_1,uVar11);
    uVar11 = uVar11 + 1;
    piVar13 = piVar13 + 2;
  } while (uVar11 < 0x41);
  lVar12 = lVar15 * 0x638;
  uVar11 = (&DAT_14c79c568)[lVar15 * 199] - 0x80 >> 1;
  *(ulonglong *)(&DAT_14c79c980 + lVar12) = uVar11;
  if (0x7e00 < uVar11) {
    *(undefined8 *)(&DAT_14c79c980 + lVar12) = 0x7e00;
  }
  uVar11 = 0x600;
  do {
    if (*(ulonglong *)(&DAT_14c79c980 + lVar12) < uVar11) {
      *(longlong *)(&DAT_14c79c980 + lVar15 * 0x638) = (lVar14 + 2) * 0x200;
      break;
    }
    *(int *)(&DAT_14c79c798 + (lVar15 * 199 + lVar14) * 8) = (int)uVar11;
    FUN_1450dedf0(param_1);
    lVar14 = lVar14 + 1;
    uVar11 = uVar11 + 0x200;
  } while (uVar11 < 0x8000);
  *(undefined8 *)(&DAT_14c79cb28 + lVar15 * 0x638) = 0;
  *(undefined8 *)(&DAT_14c79cb30 + lVar15 * 0x638) = 0;
  memset(&DAT_14c79c9a8 + lVar15 * 0x638,0,0x178);
  LOCK();
  *(undefined4 *)(&DAT_14c79cb20 + lVar15 * 0x638) = 0;
  UNLOCK();
  return 0;
}



// FUNCTION 1450dbfc0 FUN_1450dbfc0 body=298 status=ok
// SIG undefined FUN_1450dbfc0(void)

void FUN_1450dbfc0(int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  puVar1 = (undefined4 *)(&DAT_14c79d180 + lVar6 * 4);
  lVar4 = AkTlsGetValue(*(undefined4 *)(&DAT_14c79d180 + lVar6 * 4));
  if (lVar4 != 0) {
    FUN_1450ddb70(param_1,lVar4,0,1);
  }
  AkTlsSetValue(*puVar1,0);
  lVar6 = lVar6 * 0x638;
  if (*(longlong *)(&DAT_14c79c990 + lVar6) != 0) {
    LOCK();
    *(int *)(*(longlong *)(&DAT_14c79c9a0 + lVar6) + 0x38) =
         *(int *)(*(longlong *)(&DAT_14c79c9a0 + lVar6) + 0x38) - *(int *)(&DAT_14c79c998 + lVar6);
    UNLOCK();
    *(undefined8 *)(&DAT_14c79c9a0 + lVar6) = 0;
    *(undefined8 *)(&DAT_14c79c998 + lVar6) = 0;
    *(undefined8 *)(&DAT_14c79c990 + lVar6) = 0;
  }
  LOCK();
  *(undefined4 *)(&DAT_14c79cb20 + lVar6) = 0;
  UNLOCK();
  plVar5 = (longlong *)(&DAT_14c79c9a8 + lVar6);
  lVar4 = 0x2f;
  do {
    lVar3 = *plVar5;
    while (lVar3 != 0) {
      lVar2 = *(longlong *)(lVar3 + 0xd08);
      *(undefined4 *)(lVar3 + 0xd1c) = 1;
      FUN_1450dd100(param_1);
      lVar3 = lVar2;
    }
    plVar5 = plVar5 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  AkTlsFreeSlot(*puVar1);
  *puVar1 = 0;
  *(undefined4 *)(&DAT_14c79c500 + lVar6) = 0;
  return;
}



// FUNCTION 1450dc150 FUN_1450dc150 body=26 status=ok
// SIG undefined FUN_1450dc150(void)

void FUN_1450dc150(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1450dd9d0(param_1,1);
  *puVar1 = 0;
  return;
}



// FUNCTION 1450dc170 FUN_1450dc170 body=20 status=ok
// SIG undefined FUN_1450dc170(void)

void FUN_1450dc170(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1450ddb70(param_1,param_2,1);
    return;
  }
  return;
}



// FUNCTION 1450dc190 thunk_FUN_1450de340 body=5 status=ok
// SIG undefined thunk_FUN_1450de340(void)

undefined8 * thunk_FUN_1450de340(int param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  if (param_3 < 0x401) {
    lVar4 = (param_3 + 0xf >> 4 & 0xffffffff) * 3 + 1;
    puVar1 = *(undefined8 **)(param_2 + lVar4 * 8);
  }
  else {
    if (*(ulonglong *)(&DAT_14c79c980 + lVar4 * 0x638) < param_3) {
      if ((&DAT_14c79c568)[lVar4 * 199] * 0x20 - 0x80U < param_3) {
        puVar1 = (undefined8 *)FUN_1450de150(param_1,param_2);
        return puVar1;
      }
      uVar2 = param_3 + 0x80 >> ((byte)*(undefined8 *)(&DAT_14c79c570 + lVar4 * 0x638) & 0x3f);
      uVar3 = uVar2 + 1;
      if ((param_3 + 0x80 & (&DAT_14c79c568)[lVar4 * 199] - 1) == 0) {
        uVar3 = uVar2;
      }
      lVar4 = FUN_1450dd4d0(param_1,param_2,0,uVar3,0x7e);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)(lVar4 + 0xc) = 0x7e;
      *(longlong *)(lVar4 + 0x40) = param_2;
      if (*(longlong *)(param_2 + 0x3110) != 0) {
        *(longlong *)(*(longlong *)(param_2 + 0x3110) + 0x50) = lVar4;
      }
      *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_2 + 0x3110);
      *(longlong *)(param_2 + 0x3110) = lVar4;
      *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + 1;
      return (undefined8 *)(lVar4 + 0x80);
    }
    lVar4 = (ulonglong)
            *(ushort *)
             (&DAT_14c79c596 + ((ulonglong)((int)(param_3 - 0x401 >> 9) + 0x41) + lVar4 * 199) * 8)
            * 3 + 1;
    puVar1 = *(undefined8 **)(param_2 + lVar4 * 8);
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + lVar4 * 8) = *puVar1;
    return puVar1;
  }
  puVar1 = (undefined8 *)FUN_1450ddd90(param_1,param_2);
  return puVar1;
}



// FUNCTION 1450dc1a0 thunk_FUN_1450de4a0 body=5 status=ok
// SIG undefined thunk_FUN_1450de4a0(void)

/* WARNING: Removing unreachable block (ram,0x0001450de663) */
/* WARNING: Removing unreachable block (ram,0x0001450de750) */

ulonglong thunk_FUN_1450de4a0(int param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uStackX_18;
  ulonglong uStackX_20;
  
  lVar10 = (longlong)param_1;
  uStackX_20 = param_4;
  if (param_3 < 0x11) {
    uVar2 = FUN_1450de340(param_1,param_2,param_4);
    return uVar2;
  }
  uVar2 = 0x80;
  if ((param_3 < 0x81) && (param_4 + 0x80 < *(ulonglong *)(&DAT_14c79c980 + lVar10 * 0x638))) {
    if (param_4 != 0) {
      uVar2 = param_4 + 0x7f & 0xffffffffffffff80;
    }
    if (uVar2 <= param_3 + param_4) {
      uVar2 = FUN_1450de340(param_1);
      return uVar2;
    }
  }
  lVar6 = lVar10 * 0x638;
  uVar2 = param_3 - 1;
  uVar3 = (&DAT_14c79c550)[lVar10 * 199];
  if (uVar3 < param_3) {
    if (((param_3 & uVar2) == 0) && (param_3 < (ulonglong)(&DAT_14c79c568)[lVar10 * 199])) {
      uVar11 = (ulonglong)((param_4 & uVar3 - 1) != 0) + 1 + param_4 / uVar3;
      if (uVar11 < param_3 / uVar3) {
        uVar11 = param_3 / uVar3 + 1;
      }
      uVar3 = (ulonglong)(&DAT_14c79c568)[lVar10 * 199] / uVar3;
      uVar9 = uVar11;
      if (uVar11 * 2 <= uVar3 * 2) {
        uVar9 = uVar3;
      }
      do {
        uVar7 = 0;
        uStackX_18 = 0;
        uVar8 = uVar11 * (&DAT_14c79c550)[lVar10 * 199];
        uVar3 = (&DAT_14c79c568)[lVar10 * 199];
        if ((uVar8 < uVar3) || (uVar3 <= *(ulonglong *)(&DAT_14c79c560 + lVar6))) {
          uVar3 = 0;
        }
        uVar5 = DAT_14c79d178 + uVar3 + uVar8;
        if ((DAT_14c79d170 != 0) && (DAT_14c79d170 < uVar5)) {
LAB_1450de7d0:
          piVar4 = _errno();
          *piVar4 = 0xc;
          goto LAB_1450de7dc;
        }
        LOCK();
        UNLOCK();
        DAT_14c79d178 = uVar5;
        uVar5 = (**(code **)(&DAT_14c79c508 + lVar6))(uVar3 + uVar8,&uStackX_18);
        if ((uVar5 != 0) && (uVar3 != 0)) {
          uVar3 = uVar3 - (~(&DAT_14c79c578)[lVar10 * 199] & uVar5);
          uVar5 = uVar5 + uVar3;
          uVar7 = uVar3 >> 3;
        }
        if (uVar5 == 0) goto LAB_1450de7d0;
        uVar3 = uVar5 + 0x80;
        if ((uVar3 & uVar2) != 0) {
          uVar3 = (uVar3 & ~uVar2) + param_3;
        }
        if (((uVar3 - uVar5 < (ulonglong)(&DAT_14c79c568)[lVar10 * 199]) &&
            (uStackX_20 + uVar3 <= uVar5 + uVar8)) &&
           (((&DAT_14c79c578)[lVar10 * 199] & uVar3) == uVar5)) {
          *(undefined4 *)(uVar5 + 0xc) = 0xffffffff;
          *(int *)(uVar5 + 0x2c) = (int)uVar11;
          *(int *)(uVar5 + 0x3c) = (int)uVar7;
          *(longlong *)(uVar5 + 0x40) = param_2;
          *(undefined8 *)(uVar5 + 0x58) = uStackX_18;
          if (*(longlong *)(param_2 + 0x3110) != 0) {
            *(ulonglong *)(*(longlong *)(param_2 + 0x3110) + 0x50) = uVar5;
          }
          *(undefined8 *)(uVar5 + 0x48) = *(undefined8 *)(param_2 + 0x3110);
          *(ulonglong *)(param_2 + 0x3110) = uVar5;
          *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + 1;
          return uVar3;
        }
        uVar3 = uVar8;
        if ((uVar8 != 0) && (uVar7 != 0)) {
          uVar3 = (&DAT_14c79c568)[lVar10 * 199] + uVar8;
          uVar5 = uVar5 + (longlong)((int)uVar7 * -8);
        }
        (**(code **)(lVar6 + 0x14c79c510))(uVar5,uVar8,uStackX_18,uVar3);
        if (uVar3 != 0) {
          DAT_14c79d178 = DAT_14c79d178 - uVar3;
          LOCK();
          UNLOCK();
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 <= uVar9 * 2);
      piVar4 = _errno();
      *piVar4 = 0x16;
LAB_1450de7dc:
      uVar3 = 0;
    }
    else {
      piVar4 = _errno();
      *piVar4 = 0x16;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = FUN_1450de340(param_1,param_2,param_3 + param_4);
    if ((uVar3 & uVar2) != 0) {
      uVar3 = (uVar3 & ~uVar2) + param_3;
      puVar1 = (uint *)(((&DAT_14c79c578)[lVar10 * 199] & uVar3) + 0x28);
      *puVar1 = *puVar1 | 4;
    }
  }
  return uVar3;
}



// FUNCTION 1450dc1b0 FUN_1450dc1b0 body=31 status=ok
// SIG undefined FUN_1450dc1b0(void)

void FUN_1450dc1b0(void)

{
  FUN_1450dec00();
  return;
}



// FUNCTION 1450dc1d0 FUN_1450dc1d0 body=250 status=ok
// SIG undefined FUN_1450dc1d0(void)

void * FUN_1450dc1d0(ulonglong param_1,undefined8 param_2,void *param_3,ulonglong param_4,
                    ulonglong param_5,uint param_6)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (param_4 < 0x11) {
    _Dst = (void *)FUN_1450dec00();
  }
  else {
    uVar2 = param_4;
    if (param_3 != (void *)0x0) {
      uVar1 = FUN_1450de960(param_1,param_3);
    }
    if ((uVar1 < param_5) || (((ulonglong)param_3 & param_4 - 1) != 0)) {
      if ((param_6 & 2) != 0) {
        return (void *)0x0;
      }
    }
    else {
      if ((param_6 & 2) != 0) {
        return param_3;
      }
      if (uVar1 >> 1 <= param_5) {
        return param_3;
      }
    }
    _Dst = (void *)FUN_1450de4a0(param_1 & 0xffffffff,param_2,uVar2,param_5);
    if (_Dst != (void *)0x0) {
      if (((param_6 & 1) == 0) && (param_3 != (void *)0x0)) {
        if (uVar1 < param_5) {
          param_5 = uVar1;
        }
        memcpy(_Dst,param_3,param_5);
      }
      FUN_1450de9c0(param_1 & 0xffffffff,param_3);
    }
  }
  return _Dst;
}



// FUNCTION 1450dc2d0 FUN_1450dc2d0 body=8 status=ok
// SIG undefined FUN_1450dc2d0(void)

void FUN_1450dc2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1450de9c0(param_1,param_3);
  return;
}



// FUNCTION 1450dc2e0 FUN_1450dc2e0 body=125 status=ok
// SIG undefined FUN_1450dc2e0(void)

void FUN_1450dc2e0(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)AkTlsGetValue(*(undefined4 *)(&DAT_14c79d180 + (longlong)param_1 * 4));
  if (puVar1 != param_2) {
    AkTlsSetValue(*(undefined4 *)(&DAT_14c79d180 + (longlong)param_1 * 4),param_2);
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = &ExceptionList;
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1450ddb70(param_1,puVar1,1);
    }
  }
  return;
}



// FUNCTION 1450dc360 FUN_1450dc360 body=34 status=ok
// SIG undefined FUN_1450dc360(void)

undefined8 FUN_1450dc360(int param_1,ulonglong param_2)

{
  if (((&DAT_14c79c578)[(longlong)param_1 * 199] & param_2) != 0) {
    return *(undefined8 *)(((&DAT_14c79c578)[(longlong)param_1 * 199] & param_2) + 0x40);
  }
  return 0;
}



// FUNCTION 1450dc3a0 FUN_1450dc3a0 body=158 status=ok
// SIG undefined FUN_1450dc3a0(void)

/* WARNING: Removing unreachable block (ram,0x0001450dc420) */

void FUN_1450dc3a0(int param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5
                  ,undefined8 param_6)

{
  if ((param_5 != 0) && (param_4 != 0)) {
    param_2 = param_2 + (int)param_4 * -8;
    param_5 = param_5 + (&DAT_14c79c568)[(longlong)param_1 * 199];
  }
  (**(code **)((longlong)param_1 * 0x638 + 0x14c79c510))(param_2,param_3,param_6,param_5);
  if (param_5 != 0) {
    DAT_14c79d178 = DAT_14c79d178 - param_5;
    LOCK();
    UNLOCK();
  }
  return;
}



// FUNCTION 1450dc440 FUN_1450dc440 body=60 status=ok
// SIG undefined FUN_1450dc440(void)

void FUN_1450dc440(int param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  if (param_3 != param_2) {
    *(undefined4 *)(param_3 + 0x28) = 2;
    *(int *)(param_3 + 0x34) =
         (int)((ulonglong)(param_3 - param_2) >>
              ((byte)*(undefined8 *)(&DAT_14c79c570 + (longlong)param_1 * 0x638) & 0x3f));
    *(undefined4 *)(param_3 + 0x3c) = 0;
  }
  *(undefined4 *)(param_3 + 0x2c) = param_4;
  return;
}



// FUNCTION 1450dc480 FUN_1450dc480 body=142 status=ok
// SIG undefined FUN_1450dc480(void)

longlong FUN_1450dc480(int param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1 * 0x638;
  lVar2 = *(longlong *)(&DAT_14c79c990 + lVar4);
  lVar3 = *(longlong *)(&DAT_14c79c9a0 + lVar4);
  if (lVar2 != lVar3) {
    *(undefined4 *)(lVar2 + 0x28) = 2;
    *(int *)(lVar2 + 0x34) =
         (int)((ulonglong)(lVar2 - lVar3) >> ((byte)*(undefined8 *)(&DAT_14c79c570 + lVar4) & 0x3f))
    ;
    *(undefined4 *)(lVar2 + 0x3c) = 0;
  }
  *(int *)(lVar2 + 0x2c) = (int)param_2;
  plVar1 = (longlong *)(&DAT_14c79c998 + lVar4);
  *plVar1 = *plVar1 - param_2;
  if (*plVar1 != 0) {
    *(longlong *)(&DAT_14c79c990 + lVar4) =
         (param_2 << ((byte)*(undefined8 *)(&DAT_14c79c570 + lVar4) & 0x3f)) + lVar2;
    return lVar2;
  }
  *(undefined8 *)(&DAT_14c79c990 + lVar4) = 0;
  return lVar2;
}



// FUNCTION 1450dc510 FUN_1450dc510 body=289 status=ok
// SIG undefined FUN_1450dc510(void)

void FUN_1450dc510(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  
  if (*(int *)(param_2 + 0xd1c) == 0) {
    uVar1 = *(uint *)(param_3 + 0x2c);
    if ((ulonglong)uVar1 == 1) {
      *(ulonglong *)(param_2 + 0xbe0 + *(longlong *)(param_2 + 0xbd8) * 8) = param_3;
      *(longlong *)(param_2 + 0xbd8) = *(longlong *)(param_2 + 0xbd8) + 1;
      if (*(longlong *)(param_2 + 0xbd8) == 0x20) {
        puVar4 = (undefined8 *)(param_2 + 0xbe0);
        uVar2 = (ulonglong)(uVar1 + 0x1f);
        do {
          FUN_1450dc880(param_1 & 0xffffffff,*puVar4);
          puVar4 = puVar4 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        *(undefined8 *)(param_2 + 0xbd8) = 0;
      }
    }
    else {
      uVar2 = 0x20 - (ulonglong)(uVar1 >> 1);
      puVar6 = (ulonglong *)((ulonglong)uVar1 * 0x108 + 0xb18 + param_2);
      puVar6[*puVar6 + 1] = param_3;
      *puVar6 = *puVar6 + 1;
      if (*puVar6 == uVar2) {
        uVar5 = (uVar2 >> 2) + 2;
        if (5 < uVar5) {
          uVar5 = 6;
        }
        uVar2 = uVar2 - uVar5;
        if (uVar5 != 0) {
          puVar3 = puVar6 + uVar2 + 1;
          do {
            FUN_1450dc880(param_1 & 0xffffffff,*puVar3);
            puVar3 = puVar3 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        *puVar6 = uVar2;
      }
    }
    return;
  }
  FUN_1450dc880(param_1,param_3);
  FUN_1450dd100(param_1 & 0xffffffff,param_2);
  return;
}



// FUNCTION 1450dc640 FUN_1450dc640 body=576 status=ok
// SIG undefined FUN_1450dc640(void)

void FUN_1450dc640(int param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  
  puVar19 = (ulonglong *)0x0;
  if (*(int *)(param_2 + 0xd00) != 0) {
    uVar11 = FUN_1450dcbf0(param_1,param_2,*(int *)(param_2 + 0xd00));
    FUN_1450dc880(param_1,uVar11);
    *(undefined4 *)(param_2 + 0xd00) = 0;
  }
  FUN_1450dcf80(param_1,param_2,0);
  puVar13 = (ulonglong *)(param_2 + 0x10);
  puVar15 = (ulonglong *)(param_2 + 0x2d20);
  puVar18 = puVar19;
  do {
    if (puVar13[1] != 0) {
      FUN_1450dc880(param_1);
    }
    puVar13[1] = 0;
    puVar14 = (ulonglong *)*puVar13;
    while (puVar8 = puVar14, puVar8 != (ulonglong *)0x0) {
      puVar1 = (ulonglong *)puVar13[-1];
      puVar14 = (ulonglong *)puVar8[9];
      if (puVar8 == (ulonglong *)((ulonglong)puVar1 & (&DAT_14c79c578)[(longlong)param_1 * 199])) {
        puVar9 = (ulonglong *)*puVar8;
        puVar6 = puVar19;
        while (puVar5 = puVar9, puVar9 = puVar1, puVar7 = puVar19, uVar12 = 0,
              puVar5 != (ulonglong *)0x0) {
          puVar6 = puVar5;
          puVar9 = (ulonglong *)*puVar5;
        }
        for (; puVar9 != (ulonglong *)0x0; puVar9 = (ulonglong *)*puVar9) {
          uVar12 = (int)puVar7 + 1;
          puVar7 = (ulonglong *)(ulonglong)uVar12;
        }
        if (puVar6 == (ulonglong *)0x0) {
          *puVar8 = (ulonglong)puVar1;
        }
        else {
          *puVar6 = (ulonglong)puVar1;
        }
        puVar13[-1] = 0;
        *(int *)((longlong)puVar8 + 0x14) = *(int *)((longlong)puVar8 + 0x14) - uVar12;
      }
      if ((int)puVar8[4] == *(int *)((longlong)puVar8 + 0x14)) {
        if (puVar13 != (ulonglong *)0x0) {
          uVar2 = puVar8[9];
          if ((ulonglong *)*puVar13 == puVar8) {
            *puVar13 = uVar2;
          }
          else {
            uVar17 = puVar8[10];
            *(ulonglong *)(uVar17 + 0x48) = uVar2;
            if (uVar2 != 0) {
              *(ulonglong *)(uVar2 + 0x50) = uVar17;
            }
          }
        }
        FUN_1450dc880(param_1);
      }
    }
    uVar2 = puVar13[-1];
    if (uVar2 != 0) {
      uVar17 = (&DAT_14c79c578)[(longlong)param_1 * 199];
      *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + -1;
      uVar17 = uVar17 & uVar2;
      iVar10 = FUN_1450dcdf0(param_1,param_2,puVar18,uVar17,puVar15);
      if (iVar10 == 0) {
        if (puVar15 != (ulonglong *)0x0) {
          uVar2 = *(ulonglong *)(uVar17 + 0x48);
          if (*puVar15 == uVar17) {
            *puVar15 = uVar2;
          }
          else {
            lVar3 = *(longlong *)(uVar17 + 0x50);
            *(ulonglong *)(lVar3 + 0x48) = uVar2;
            if (uVar2 != 0) {
              *(longlong *)(uVar2 + 0x50) = lVar3;
            }
          }
        }
        if (*puVar13 != 0) {
          *(ulonglong *)(*puVar13 + 0x50) = uVar17;
        }
        *(ulonglong *)(uVar17 + 0x48) = *puVar13;
        *puVar13 = uVar17;
      }
    }
    puVar18 = (ulonglong *)((longlong)puVar18 + 1);
    puVar15 = puVar15 + 1;
    puVar13 = puVar13 + 3;
    puVar14 = puVar19;
  } while (puVar18 < &DAT_0000007e);
  do {
    if (puVar14 == (ulonglong *)0x0) {
      plVar16 = (longlong *)(param_2 + 0xbd8);
    }
    else {
      plVar16 = (longlong *)((longlong)puVar14 * 0x108 + 0xc20 + param_2);
    }
    puVar13 = puVar19;
    plVar4 = plVar16;
    if (*plVar16 != 0) {
      do {
        FUN_1450dc880(param_1,plVar4[1]);
        puVar13 = (ulonglong *)((longlong)puVar13 + 1);
        plVar4 = plVar4 + 1;
      } while (puVar13 < (ulonglong *)*plVar16);
    }
    puVar14 = (ulonglong *)((longlong)puVar14 + 1);
    *plVar16 = 0;
  } while (puVar14 < &DAT_00000020);
  return;
}



// FUNCTION 1450dc880 FUN_1450dc880 body=250 status=ok
// SIG undefined FUN_1450dc880(void)

void FUN_1450dc880(int param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)param_1;
  if ((*(uint *)(param_2 + 0x28) & 1) == 0) {
    uVar4 = *(uint *)(param_2 + 0x2c);
    lVar6 = param_2 - (ulonglong)*(uint *)(param_2 + 0x34) * (&DAT_14c79c568)[lVar5 * 199];
    if ((ulonglong)(&DAT_14c79c550)[lVar5 * 199] <= (ulonglong)(&DAT_14c79c568)[lVar5 * 199]) {
      (**(code **)(lVar5 * 0x638 + 0x14c79c510))
                (param_2,(ulonglong)uVar4 * (&DAT_14c79c568)[lVar5 * 199],
                 *(undefined8 *)(param_2 + 0x58),0);
    }
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x2c);
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 0xb;
    lVar6 = param_2;
  }
  LOCK();
  piVar1 = (int *)(lVar6 + 0x38);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -uVar4;
  UNLOCK();
  if ((int)(iVar2 + -uVar4) < 1) {
    uVar3 = (&DAT_14c79c568)[lVar5 * 199];
    if (uVar3 < (ulonglong)(&DAT_14c79c550)[lVar5 * 199]) {
      uVar4 = *(uint *)(lVar6 + 0x30);
    }
    else {
      uVar4 = *(uint *)(lVar6 + 0x2c);
    }
    FUN_1450dc3a0(param_1,lVar6,uVar4 * uVar3,*(undefined4 *)(lVar6 + 0x3c),
                  *(uint *)(lVar6 + 0x30) * uVar3,*(undefined8 *)(lVar6 + 0x58));
  }
  return;
}



// FUNCTION 1450dc980 FUN_1450dc980 body=618 status=ok
// SIG undefined FUN_1450dc980(void)

/* WARNING: Removing unreachable block (ram,0x0001450dca3f) */

ulonglong FUN_1450dc980(int param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_res18;
  longlong local_res20;
  
  lVar9 = (longlong)param_1;
  lVar10 = lVar9 * 0x638;
  uVar4 = *(ulonglong *)(&DAT_14c79c580 + lVar10);
  uVar6 = (&DAT_14c79c568)[lVar9 * 199];
  uVar8 = uVar4;
  if (uVar4 < param_3) {
    uVar8 = param_3;
  }
  if ((uVar6 < (ulonglong)(&DAT_14c79c550)[lVar9 * 199]) &&
     ((uVar6 * uVar8) % (ulonglong)(&DAT_14c79c550)[lVar9 * 199] != 0)) {
    uVar8 = uVar8 + (uVar4 - uVar8 % uVar4);
  }
  uVar5 = 0;
  uVar4 = uVar6 * uVar8;
  local_res18 = 0;
  if ((uVar4 < uVar6) || (uVar6 <= *(ulonglong *)(&DAT_14c79c560 + lVar10))) {
    uVar6 = 0;
  }
  lVar7 = uVar6 + uVar4;
  uVar4 = lVar7 + DAT_14c79d178;
  if ((DAT_14c79d170 == 0) || (uVar4 <= DAT_14c79d170)) {
    LOCK();
    UNLOCK();
    DAT_14c79d178 = uVar4;
    local_res20 = lVar9;
    uVar4 = (**(code **)(&DAT_14c79c508 + lVar10))(lVar7,&local_res18);
    if ((uVar4 != 0) && (uVar6 != 0)) {
      uVar6 = uVar6 - (~(&DAT_14c79c578)[lVar9 * 199] & uVar4);
      uVar4 = uVar4 + uVar6;
      uVar5 = (undefined4)(uVar6 >> 3);
    }
    if (uVar4 != 0) {
      *(undefined8 *)(uVar4 + 0x58) = local_res18;
      *(int *)(uVar4 + 0x30) = (int)uVar8;
      *(int *)(uVar4 + 0x2c) = (int)param_3;
      *(undefined4 *)(uVar4 + 0x3c) = uVar5;
      *(undefined4 *)(uVar4 + 0x28) = 1;
      LOCK();
      *(int *)(uVar4 + 0x38) = (int)uVar8;
      UNLOCK();
      if (uVar8 <= param_3) {
        return uVar4;
      }
      uVar8 = uVar8 - param_3;
      iVar1 = *(int *)(param_2 + 0xd00);
      lVar7 = param_3 * (&DAT_14c79c568)[lVar9 * 199] + uVar4;
      if (iVar1 != 0) {
        lVar2 = *(longlong *)(param_2 + 0xcf0);
        lVar3 = *(longlong *)(param_2 + 0xcf8);
        if (lVar2 != lVar3) {
          *(undefined4 *)(lVar2 + 0x28) = 2;
          *(int *)(lVar2 + 0x34) =
               (int)((ulonglong)(lVar2 - lVar3) >>
                    ((byte)*(undefined8 *)(&DAT_14c79c570 + lVar10) & 0x3f));
          *(undefined4 *)(lVar2 + 0x3c) = 0;
        }
        *(int *)(lVar2 + 0x2c) = iVar1;
        FUN_1450dc510(param_1,param_2,*(undefined8 *)(param_2 + 0xcf0));
      }
      uVar6 = *(ulonglong *)(&DAT_14c79c588 + lVar10);
      if (uVar6 < uVar8) {
        lVar9 = (&DAT_14c79c568)[lVar9 * 199];
        if (*(longlong *)(&DAT_14c79c990 + lVar10) != 0) {
          FUN_1450dc440(param_1,*(undefined8 *)(&DAT_14c79c9a0 + lVar10),
                        *(longlong *)(&DAT_14c79c990 + lVar10),
                        *(undefined8 *)(&DAT_14c79c998 + lVar10));
          FUN_1450dc880(param_1,*(undefined8 *)(&DAT_14c79c990 + lVar10));
        }
        *(ulonglong *)(&DAT_14c79c990 + lVar10) = uVar6 * lVar9 + lVar7;
        *(ulonglong *)(&DAT_14c79c9a0 + lVar10) = uVar4;
        *(ulonglong *)(&DAT_14c79c998 + local_res20 * 0x638) = uVar8 - uVar6;
        uVar8 = uVar6;
      }
      *(ulonglong *)(param_2 + 0xcf8) = uVar4;
      *(longlong *)(param_2 + 0xcf0) = lVar7;
      *(int *)(param_2 + 0xd00) = (int)uVar8;
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1450dcbf0 FUN_1450dcbf0 body=510 status=ok
// SIG undefined FUN_1450dcbf0(void)

longlong FUN_1450dcbf0(int param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = (longlong)param_1;
  lVar6 = lVar8 * 0x638;
  iVar5 = (int)param_3;
  if (param_3 <= *(uint *)(param_2 + 0xd00)) {
    lVar1 = *(longlong *)(param_2 + 0xcf0);
    lVar8 = (&DAT_14c79c568)[lVar8 * 199];
    *(uint *)(param_2 + 0xd00) = *(uint *)(param_2 + 0xd00) - iVar5;
    *(ulonglong *)(param_2 + 0xcf0) = param_3 * lVar8 + lVar1;
    lVar8 = *(longlong *)(param_2 + 0xcf8);
    if (lVar1 != lVar8) {
      *(undefined4 *)(lVar1 + 0x28) = 2;
      *(int *)(lVar1 + 0x34) =
           (int)((ulonglong)(lVar1 - lVar8) >>
                ((byte)*(undefined8 *)(&DAT_14c79c570 + lVar6) & 0x3f));
      *(undefined4 *)(lVar1 + 0x3c) = 0;
    }
    *(int *)(lVar1 + 0x2c) = iVar5;
    return lVar1;
  }
  bVar9 = false;
  if (((ulonglong)(&DAT_14c79c568)[lVar8 * 199] < (ulonglong)(&DAT_14c79c550)[lVar8 * 199]) ||
     (*(ulonglong *)(&DAT_14c79c588 + lVar6) < *(ulonglong *)(&DAT_14c79c580 + lVar6))) {
    iVar4 = 1000;
    LOCK();
    bVar9 = *(int *)(&DAT_14c79cb20 + lVar6) == 0;
    if (bVar9) {
      *(int *)(&DAT_14c79cb20 + lVar6) = 1;
    }
    UNLOCK();
    if (!bVar9) {
      do {
        if (iVar4 == 0) goto LAB_1450dcd30;
        iVar4 = iVar4 + -1;
        LOCK();
        bVar9 = *(int *)(&DAT_14c79cb20 + lVar6) == 0;
        if (bVar9) {
          *(int *)(&DAT_14c79cb20 + lVar6) = 1;
        }
        UNLOCK();
      } while (!bVar9);
      if (iVar4 == 0) {
LAB_1450dcd30:
        do {
          Sleep(1);
          LOCK();
          bVar9 = *(int *)(&DAT_14c79cb20 + lVar6) == 0;
          if (bVar9) {
            *(int *)(&DAT_14c79cb20 + lVar6) = 1;
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
    uVar2 = *(ulonglong *)(&DAT_14c79c998 + lVar6);
    bVar9 = true;
    if (param_3 <= uVar2) {
      uVar7 = param_3;
      if ((*(int *)(param_2 + 0xd00) == 0) &&
         (uVar7 = *(ulonglong *)(&DAT_14c79c588 + lVar8 * 0x638),
         uVar2 < *(ulonglong *)(&DAT_14c79c588 + lVar8 * 0x638))) {
        uVar7 = uVar2;
      }
      lVar6 = FUN_1450dc480(param_1,uVar7);
      bVar9 = true;
      if (lVar6 != 0) {
        if (param_3 < uVar7) {
          uVar3 = *(undefined8 *)(&DAT_14c79c570 + lVar8 * 0x638);
          *(undefined8 *)(param_2 + 0xcf8) = *(undefined8 *)(&DAT_14c79c9a0 + lVar8 * 0x638);
          *(ulonglong *)(param_2 + 0xcf0) = (param_3 << ((byte)uVar3 & 0x3f)) + lVar6;
          *(int *)(param_2 + 0xd00) = (int)uVar7 - iVar5;
        }
        *(int *)(lVar6 + 0x2c) = iVar5;
        goto LAB_1450dccc9;
      }
    }
  }
  lVar6 = FUN_1450dc980(param_1,param_2,param_3);
  if (!bVar9) {
    return lVar6;
  }
LAB_1450dccc9:
  LOCK();
  *(undefined4 *)(&DAT_14c79cb20 + lVar8 * 0x638) = 0;
  UNLOCK();
  return lVar6;
}



// FUNCTION 1450dcdf0 FUN_1450dcdf0 body=199 status=ok
// SIG undefined FUN_1450dcdf0(void)

undefined8
FUN_1450dcdf0(int param_1,longlong param_2,longlong param_3,ulonglong *param_4,ulonglong *param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  
  puVar1 = *(ulonglong **)(param_2 + 8 + param_3 * 0x18);
  if (param_4 == (ulonglong *)((&DAT_14c79c578)[(longlong)param_1 * 199] & (ulonglong)puVar1)) {
    puVar2 = (ulonglong *)*param_4;
    puVar6 = (ulonglong *)0x0;
    while (puVar5 = puVar2, puVar5 != (ulonglong *)0x0) {
      puVar6 = puVar5;
      puVar2 = (ulonglong *)*puVar5;
    }
    iVar7 = 0;
    for (puVar2 = puVar1; puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)*puVar2) {
      iVar7 = iVar7 + 1;
    }
    if (puVar6 == (ulonglong *)0x0) {
      *param_4 = (ulonglong)puVar1;
    }
    else {
      *puVar6 = (ulonglong)puVar1;
    }
    *(undefined8 *)(param_2 + param_3 * 0x18 + 8) = 0;
    *(int *)((longlong)param_4 + 0x14) = *(int *)((longlong)param_4 + 0x14) - iVar7;
  }
  if ((int)param_4[4] != *(int *)((longlong)param_4 + 0x14)) {
    return 0;
  }
  if (param_5 != (ulonglong *)0x0) {
    uVar3 = param_4[9];
    if ((ulonglong *)*param_5 == param_4) {
      *param_5 = uVar3;
    }
    else {
      uVar4 = param_4[10];
      *(ulonglong *)(uVar4 + 0x48) = uVar3;
      if (uVar3 != 0) {
        *(ulonglong *)(uVar3 + 0x50) = uVar4;
      }
    }
  }
  FUN_1450dc880(param_1,param_4);
  return 1;
}



// FUNCTION 1450dcec0 FUN_1450dcec0 body=181 status=ok
// SIG undefined FUN_1450dcec0(void)

longlong FUN_1450dcec0(int param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  plVar1 = (longlong *)param_2[8];
  if ((((void **)*plVar1 != (void **)0x0) && ((void **)*plVar1 != &ExceptionList)) &&
     (*(int *)((longlong)plVar1 + 0xd1c) == 0)) {
    do {
      lVar2 = plVar1[0x19c];
      *param_2 = lVar2;
      LOCK();
      lVar3 = plVar1[0x19c];
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        plVar1[0x19c] = (longlong)param_2;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    return lVar3;
  }
  plVar1[0x19d] = plVar1[0x19d] + -1;
  lVar3 = param_2[9];
  if (*(longlong **)(param_2[8] + 0x3110) == param_2) {
    *(longlong *)(param_2[8] + 0x3110) = lVar3;
  }
  else {
    lVar2 = param_2[10];
    *(longlong *)(lVar2 + 0x48) = lVar3;
    if (lVar3 != 0) {
      *(longlong *)(lVar3 + 0x50) = lVar2;
    }
  }
  lVar3 = (ulonglong)*(uint *)((longlong)param_2 + 0x2c) * (&DAT_14c79c550)[(longlong)param_1 * 199]
  ;
  lVar3 = FUN_1450dc3a0(param_1,param_2,lVar3,*(undefined4 *)((longlong)param_2 + 0x3c),lVar3,
                        param_2[0xb]);
  return lVar3;
}



// FUNCTION 1450dcf80 FUN_1450dcf80 body=245 status=ok
// SIG undefined FUN_1450dcf80(void)

void FUN_1450dcf80(undefined4 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  LOCK();
  puVar2 = *(undefined8 **)(param_2 + 0xce0);
  *(undefined8 *)(param_2 + 0xce0) = 0;
  UNLOCK();
  do {
    while( true ) {
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      puVar3 = (undefined8 *)*puVar2;
      if (0x7d < *(uint *)((longlong)puVar2 + 0xc)) break;
      *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + -1;
      lVar1 = param_2 + (ulonglong)*(uint *)((longlong)puVar2 + 0xc) * 8;
      lVar4 = puVar2[9];
      if (*(undefined8 **)(lVar1 + 0x2d20) == puVar2) {
        *(longlong *)(lVar1 + 0x2d20) = lVar4;
      }
      else {
        lVar1 = puVar2[10];
        *(longlong *)(lVar1 + 0x48) = lVar4;
        if (lVar4 != 0) {
          *(longlong *)(lVar4 + 0x50) = lVar1;
        }
      }
LAB_1450dd03a:
      if ((param_3 == (longlong *)0x0) || (*param_3 != 0)) {
LAB_1450dd04a:
        FUN_1450dc510(param_1,param_2);
        puVar2 = puVar3;
      }
      else {
        *param_3 = (longlong)puVar2;
        puVar2 = puVar3;
      }
    }
    if (*(uint *)((longlong)puVar2 + 0xc) != 0xffffffff) {
      *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + -1;
      lVar1 = puVar2[9];
      if (*(undefined8 **)(param_2 + 0x3110) == puVar2) {
        *(longlong *)(param_2 + 0x3110) = lVar1;
      }
      else {
        lVar4 = puVar2[10];
        *(longlong *)(lVar4 + 0x48) = lVar1;
        if (lVar1 != 0) {
          *(longlong *)(lVar1 + 0x50) = lVar4;
        }
      }
      if (*(int *)((longlong)puVar2 + 0x2c) == 1) goto LAB_1450dd03a;
      goto LAB_1450dd04a;
    }
    FUN_1450dcec0(param_1,puVar2);
    puVar2 = puVar3;
  } while( true );
}



// FUNCTION 1450dd100 FUN_1450dd100 body=631 status=ok
// SIG undefined FUN_1450dd100(void)

void FUN_1450dd100(int param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong *puVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar2 = *(int *)(param_2 + 0xd1c);
  *(int *)(param_2 + 0xd1c) = iVar2 + 1;
  if (1 < iVar2) {
    *(int *)(param_2 + 0xd1c) = iVar2;
    return;
  }
  FUN_1450dc640(param_1);
  uVar9 = 0;
  uVar10 = uVar9;
  do {
    if (uVar10 == 0) {
      puVar6 = (ulonglong *)(param_2 + 0xbd8);
    }
    else {
      puVar6 = (ulonglong *)(uVar10 * 0x108 + 0xc20 + param_2);
    }
    uVar8 = uVar9;
    puVar4 = puVar6;
    if (*puVar6 != 0) {
      do {
        FUN_1450dc880(param_1,puVar4[1]);
        uVar8 = uVar8 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar8 < *puVar6);
    }
    uVar10 = uVar10 + 1;
    *puVar6 = 0;
  } while (uVar10 < 0x20);
  if (*(longlong *)(param_2 + 0xce8) == 0) {
    plVar5 = (longlong *)(param_2 + 0x10);
    do {
      if ((plVar5[-1] != 0) || (*plVar5 != 0)) goto LAB_1450dd2ec;
      uVar9 = uVar9 + 1;
      plVar5 = plVar5 + 3;
    } while (uVar9 < 0x7e);
    uVar10 = (ulonglong)*(int *)(param_2 + 0xd18);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    lVar7 = SUB168(ZEXT816(0x5c9882b931057263) * auVar3,8);
    lVar7 = ((longlong)param_1 * 199 + uVar10 + ((uVar10 - lVar7 >> 1) + lVar7 >> 5) * -0x2f) * 8;
    uVar10 = *(ulonglong *)(&DAT_14c79c9a8 + lVar7);
    if (uVar10 == param_2) {
      *(undefined8 *)(&DAT_14c79c9a8 + lVar7) = *(undefined8 *)(param_2 + 0xd08);
    }
    else {
      for (uVar9 = *(ulonglong *)(uVar10 + 0xd08); uVar9 != param_2;
          uVar9 = *(ulonglong *)(uVar9 + 0xd08)) {
        uVar10 = uVar9;
      }
      *(undefined8 *)(uVar10 + 0xd08) = *(undefined8 *)(param_2 + 0xd08);
    }
    if (*(longlong *)(param_2 + 0xd20) == 0) {
      if ((1 < *(int *)(param_2 + 0xd1c)) && (*(int *)(param_2 + 0xd04) == 0)) {
        FUN_1450dc880(param_1,(&DAT_14c79c578)[(longlong)param_1 * 199] & param_2);
        return;
      }
    }
    else {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_2 + 0xd20) + 0xd04);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        uVar9 = *(ulonglong *)(param_2 + 0xd20);
        puVar6 = (ulonglong *)(uVar9 + 0xd20);
        uVar10 = *puVar6;
        while (uVar10 != 0) {
          LOCK();
          piVar1 = (int *)(uVar10 + 0xd04);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            return;
          }
          uVar9 = *puVar6;
          puVar6 = (ulonglong *)(uVar9 + 0xd20);
          uVar10 = *puVar6;
        }
        if ((1 < *(int *)(uVar9 + 0xd1c)) && (*(int *)(uVar9 + 0xd04) == 0)) {
          FUN_1450dc880(param_1,(&DAT_14c79c578)[(longlong)param_1 * 199] & uVar9);
          return;
        }
        return;
      }
    }
  }
  else {
LAB_1450dd2ec:
    *(int *)(param_2 + 0xd1c) = *(int *)(param_2 + 0xd1c) + -1;
  }
  return;
}



// FUNCTION 1450dd300 FUN_1450dd300 body=452 status=ok
// SIG undefined FUN_1450dd300(void)

undefined8 * FUN_1450dd300(undefined4 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x0;
  LOCK();
  puVar1 = *(undefined8 **)(param_2 + 0xce0);
  *(undefined8 *)(param_2 + 0xce0) = 0;
  UNLOCK();
  puVar3 = puVar5;
  if (param_3 == 1) {
    while (puVar5 = puVar3, puVar3 = puVar1, puVar3 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar3;
      if (*(uint *)((longlong)puVar3 + 0xc) < 0x7e) {
        *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + -1;
        lVar4 = param_2 + (ulonglong)*(uint *)((longlong)puVar3 + 0xc) * 8;
        lVar2 = puVar3[9];
        if (*(undefined8 **)(lVar4 + 0x2d20) == puVar3) {
          *(longlong *)(lVar4 + 0x2d20) = lVar2;
        }
        else {
          lVar4 = puVar3[10];
          *(longlong *)(lVar4 + 0x48) = lVar2;
          if (lVar2 != 0) {
            *(longlong *)(lVar2 + 0x50) = lVar4;
          }
        }
LAB_1450dd3ca:
        if (puVar5 != (undefined8 *)0x0) {
LAB_1450dd3d4:
          FUN_1450dc510(param_1,param_2);
          puVar3 = puVar5;
        }
      }
      else {
        if (*(uint *)((longlong)puVar3 + 0xc) != 0xffffffff) {
          *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + -1;
          lVar4 = puVar3[9];
          if (*(undefined8 **)(param_2 + 0x3110) == puVar3) {
            *(longlong *)(param_2 + 0x3110) = lVar4;
          }
          else {
            lVar2 = puVar3[10];
            *(longlong *)(lVar2 + 0x48) = lVar4;
            if (lVar4 != 0) {
              *(longlong *)(lVar4 + 0x50) = lVar2;
            }
          }
          if (*(int *)((longlong)puVar3 + 0x2c) == 1) goto LAB_1450dd3ca;
          goto LAB_1450dd3d4;
        }
        FUN_1450dcec0(param_1,puVar3);
        puVar3 = puVar5;
      }
    }
  }
  else {
    while (puVar1 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar1;
      if (*(uint *)((longlong)puVar1 + 0xc) < 0x7e) {
        *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + -1;
        lVar2 = param_2 + (ulonglong)*(uint *)((longlong)puVar1 + 0xc) * 8;
        lVar4 = puVar1[9];
        if (*(undefined8 **)(lVar2 + 0x2d20) == puVar1) {
          *(longlong *)(lVar2 + 0x2d20) = lVar4;
        }
        else {
LAB_1450dd45f:
          lVar2 = puVar1[10];
          *(longlong *)(lVar2 + 0x48) = lVar4;
          if (lVar4 != 0) {
            *(longlong *)(lVar4 + 0x50) = lVar2;
          }
        }
LAB_1450dd470:
        FUN_1450dc510(param_1,param_2);
        puVar1 = puVar3;
      }
      else {
        if (*(uint *)((longlong)puVar1 + 0xc) != 0xffffffff) {
          *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + -1;
          lVar4 = puVar1[9];
          if (*(undefined8 **)(param_2 + 0x3110) != puVar1) goto LAB_1450dd45f;
          *(longlong *)(param_2 + 0x3110) = lVar4;
          goto LAB_1450dd470;
        }
        FUN_1450dcec0(param_1,puVar1);
        puVar1 = puVar3;
      }
    }
    param_2 = param_3 * 0x108 + param_2;
    if (*(longlong *)(param_2 + 0xb18) != 0) {
      lVar4 = *(longlong *)(param_2 + 0xb18) + -1;
      *(longlong *)(param_2 + 0xb18) = lVar4;
      puVar5 = *(undefined8 **)(param_2 + 0xb20 + lVar4 * 8);
    }
  }
  return puVar5;
}



// FUNCTION 1450dd4d0 FUN_1450dd4d0 body=310 status=ok
// SIG undefined FUN_1450dd4d0(void)

longlong FUN_1450dd4d0(undefined4 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((param_3 != 0) && (lVar2 = *(longlong *)(param_3 + 0x10), lVar2 != 0)) {
    if (*(longlong *)(param_2 + 0xbd8) == 0) {
      *(undefined8 *)(param_3 + 0x10) = 0;
      return lVar2;
    }
    lVar1 = *(longlong *)(param_2 + 0xbd8) + -1;
    *(longlong *)(param_2 + 0xbd8) = lVar1;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0xbe0 + lVar1 * 8);
    return lVar2;
  }
  uVar4 = param_4;
  uVar5 = param_4;
  if ((2 < param_4) && (uVar5 = (param_4 >> 1) + param_4, 0x20 < uVar5)) {
    uVar5 = 0x20;
  }
  while( true ) {
    if (uVar4 == 1) {
      plVar3 = (longlong *)(param_2 + 0xbd8);
    }
    else {
      plVar3 = (longlong *)(uVar4 * 0x108 + 0xb18 + param_2);
    }
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      *plVar3 = lVar2 + -1;
      if (plVar3[lVar2] != 0) {
        return plVar3[lVar2];
      }
    }
    lVar2 = FUN_1450dd300(param_1,param_2,uVar4);
    if (lVar2 != 0) break;
    if ((uVar4 <= *(uint *)(param_2 + 0xd00)) &&
       (lVar2 = FUN_1450dcbf0(param_1,param_2,uVar4), lVar2 != 0)) {
      return lVar2;
    }
    uVar4 = uVar4 + 1;
    if (uVar5 < uVar4) {
      lVar2 = FUN_1450dcbf0(param_1,param_2,param_4);
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 1450dd610 FUN_1450dd610 body=951 status=ok
// SIG undefined FUN_1450dd610(void)

/* WARNING: Removing unreachable block (ram,0x0001450dd74f) */

void * FUN_1450dd610(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  void *_Dst;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 *_Dst_00;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong local_res18;
  ulonglong local_res20;
  
  lVar5 = (longlong)param_1;
  lVar13 = lVar5 * 0x638;
  uVar10 = 0;
  uVar11 = 0x10;
  uVar7 = (&DAT_14c79c568)[lVar5 * 199];
  local_res20 = (uVar7 + 0x3125f) / uVar7;
  uVar6 = 0;
  if (local_res20 <= *(ulonglong *)(&DAT_14c79c998 + lVar13)) {
    uVar6 = FUN_1450dc480();
  }
  local_res18 = local_res20;
  if (uVar6 == 0) {
    uVar6 = (&DAT_14c79c550)[lVar5 * 199];
    uVar12 = uVar7 * local_res20;
    if (uVar7 * local_res20 < uVar6) {
      local_res18 = (&DAT_14c79c568)[lVar5 * 199];
      local_res20 = uVar6 / local_res18;
      uVar7 = (uVar6 - 0x60) / 0x3120;
      if (uVar7 < 0x100) {
        if (uVar7 < 0x10) {
          uVar11 = uVar7;
        }
      }
      else {
        uVar11 = 0x100;
      }
      local_res18 = (uVar11 * 0x3120 + 0x5f + local_res18) / local_res18;
      uVar12 = uVar6;
    }
    uVar7 = (&DAT_14c79c568)[lVar5 * 199];
    if ((uVar12 < uVar7) || (uVar7 <= *(ulonglong *)(&DAT_14c79c560 + lVar13))) {
      uVar7 = 0;
    }
    uVar6 = DAT_14c79d178 + uVar7 + uVar12;
    if ((DAT_14c79d170 == 0) || (uVar6 <= DAT_14c79d170)) {
      LOCK();
      UNLOCK();
      DAT_14c79d178 = uVar6;
      uVar6 = (**(code **)(&DAT_14c79c508 + lVar13))();
      if ((uVar6 != 0) && (uVar7 != 0)) {
        uVar7 = uVar7 - (~(&DAT_14c79c578)[lVar5 * 199] & uVar6);
        uVar6 = uVar6 + uVar7;
        uVar10 = (undefined4)(uVar7 >> 3);
      }
      if (uVar6 != 0) {
        *(undefined8 *)(uVar6 + 0x58) = 0;
        *(int *)(uVar6 + 0x30) = (int)local_res20;
        *(int *)(uVar6 + 0x2c) = (int)local_res18;
        *(undefined4 *)(uVar6 + 0x3c) = uVar10;
        *(undefined4 *)(uVar6 + 0x28) = 1;
        LOCK();
        *(int *)(uVar6 + 0x38) = (int)local_res20;
        UNLOCK();
        goto LAB_1450dd7c6;
      }
    }
    _Dst = (void *)0x0;
  }
  else {
LAB_1450dd7c6:
    lVar9 = (&DAT_14c79c568)[lVar5 * 199];
    _Dst = (void *)(uVar6 + 0x60);
    memset(_Dst,0,0x3118);
    LOCK();
    piVar1 = (int *)(&DAT_14c79c988 + lVar13);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int *)(uVar6 + 0xd78) = iVar2 + 2;
    uVar7 = (ulonglong)(iVar2 + 2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar7;
    lVar8 = SUB168(ZEXT816(0x5c9882b931057263) * auVar3,8);
    lVar8 = (lVar5 * 199 + uVar7 + ((uVar7 - lVar8 >> 1) + lVar8 >> 5) * -0x2f) * 8;
    *(undefined8 *)(uVar6 + 0xd68) = *(undefined8 *)(&DAT_14c79c9a8 + lVar8);
    *(void **)(&DAT_14c79c9a8 + lVar8) = _Dst;
    _Dst_00 = (undefined8 *)(uVar6 + 0x3180);
    uVar7 = (lVar9 - 0x60U) / 0x3120;
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    LOCK();
    *(int *)(uVar6 + 0xd64) = (int)uVar11 + -1;
    UNLOCK();
    if (1 < uVar11) {
      lVar8 = uVar11 - 1;
      do {
        memset(_Dst_00,0,0x3118);
        LOCK();
        piVar1 = (int *)(&DAT_14c79c988 + lVar13);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        *(int *)(_Dst_00 + 0x1a3) = iVar2 + 2;
        uVar7 = (ulonglong)(iVar2 + 2);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar7;
        lVar9 = SUB168(ZEXT816(0x5c9882b931057263) * auVar4,8);
        lVar9 = (lVar5 * 199 + uVar7 + ((uVar7 - lVar9 >> 1) + lVar9 >> 5) * -0x2f) * 8;
        _Dst_00[0x1a1] = *(undefined8 *)(&DAT_14c79c9a8 + lVar9);
        *(undefined8 **)(&DAT_14c79c9a8 + lVar9) = _Dst_00;
        _Dst_00[0x1a4] = _Dst;
        *_Dst_00 = 0xffffffffffffffff;
        _Dst_00[0x1a2] = *(undefined8 *)(&DAT_14c79cb30 + lVar13);
        *(undefined8 **)(&DAT_14c79cb30 + lVar13) = _Dst_00;
        _Dst_00 = _Dst_00 + 0x624;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (local_res18 < local_res20) {
      local_res20 = local_res20 - local_res18;
      uVar7 = *(ulonglong *)(&DAT_14c79c588 + lVar13);
      if (local_res20 <= *(ulonglong *)(&DAT_14c79c588 + lVar13)) {
        uVar7 = local_res20;
      }
      lVar8 = (&DAT_14c79c568)[lVar5 * 199];
      *(ulonglong *)(uVar6 + 0xd58) = uVar6;
      lVar8 = local_res18 * lVar8 + uVar6;
      *(int *)(uVar6 + 0xd60) = (int)uVar7;
      *(longlong *)(uVar6 + 0xd50) = lVar8;
      if (uVar7 < local_res20) {
        *(ulonglong *)(&DAT_14c79c9a0 + lVar13) = uVar6;
        lVar5 = (&DAT_14c79c568)[lVar5 * 199];
        *(ulonglong *)(&DAT_14c79c998 + lVar13) = local_res20 - uVar7;
        *(ulonglong *)(&DAT_14c79c990 + lVar13) = uVar7 * lVar5 + lVar8;
      }
    }
  }
  return _Dst;
}



// FUNCTION 1450dd9d0 FUN_1450dd9d0 body=405 status=ok
// SIG undefined FUN_1450dd9d0(void)

longlong FUN_1450dd9d0(int param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  lVar5 = (longlong)param_1 * 0x638;
  iVar6 = 1000;
  LOCK();
  bVar7 = *(int *)(&DAT_14c79cb20 + lVar5) == 0;
  if (bVar7) {
    *(int *)(&DAT_14c79cb20 + lVar5) = 1;
  }
  UNLOCK();
  if (!bVar7) {
    do {
      if (iVar6 == 0) goto LAB_1450dda33;
      iVar6 = iVar6 + -1;
      LOCK();
      bVar7 = *(int *)(&DAT_14c79cb20 + lVar5) == 0;
      if (bVar7) {
        *(int *)(&DAT_14c79cb20 + lVar5) = 1;
      }
      UNLOCK();
    } while (!bVar7);
    if (iVar6 == 0) {
LAB_1450dda33:
      do {
        Sleep(1);
        LOCK();
        bVar7 = *(int *)(&DAT_14c79cb20 + lVar5) == 0;
        if (bVar7) {
          *(int *)(&DAT_14c79cb20 + lVar5) = 1;
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (param_2 == 0) {
    lVar4 = *(longlong *)(&DAT_14c79cb28 + lVar5);
    if (lVar4 != 0) {
      *(undefined8 *)(&DAT_14c79cb28 + lVar5) = *(undefined8 *)(lVar4 + 0xd10);
      goto LAB_1450ddaa5;
    }
    *(undefined8 *)(&DAT_14c79cb28 + lVar5) = 0;
  }
  lVar4 = *(longlong *)(&DAT_14c79cb30 + lVar5);
  if (lVar4 == 0) {
    *(undefined8 *)(&DAT_14c79cb30 + lVar5) = 0;
    lVar4 = FUN_1450dd610(param_1);
  }
  else {
    *(undefined8 *)(&DAT_14c79cb30 + lVar5) = *(undefined8 *)(lVar4 + 0xd10);
  }
LAB_1450ddaa5:
  LOCK();
  *(undefined4 *)(&DAT_14c79cb20 + lVar5) = 0;
  UNLOCK();
  LOCK();
  puVar2 = *(undefined8 **)(lVar4 + 0xce0);
  *(undefined8 *)(lVar4 + 0xce0) = 0;
  UNLOCK();
  do {
    while( true ) {
      if (puVar2 == (undefined8 *)0x0) {
        return lVar4;
      }
      puVar3 = (undefined8 *)*puVar2;
      if (0x7d < *(uint *)((longlong)puVar2 + 0xc)) break;
      *(longlong *)(lVar4 + 0xce8) = *(longlong *)(lVar4 + 0xce8) + -1;
      lVar1 = lVar4 + (ulonglong)*(uint *)((longlong)puVar2 + 0xc) * 8;
      lVar5 = puVar2[9];
      if (*(undefined8 **)(lVar1 + 0x2d20) == puVar2) {
        *(longlong *)(lVar1 + 0x2d20) = lVar5;
      }
      else {
LAB_1450ddb1d:
        lVar1 = puVar2[10];
        *(longlong *)(lVar1 + 0x48) = lVar5;
        if (lVar5 != 0) {
          *(longlong *)(lVar5 + 0x50) = lVar1;
        }
      }
LAB_1450ddb2e:
      FUN_1450dc510(param_1,lVar4,puVar2);
      puVar2 = puVar3;
    }
    if (*(uint *)((longlong)puVar2 + 0xc) != 0xffffffff) {
      *(longlong *)(lVar4 + 0xce8) = *(longlong *)(lVar4 + 0xce8) + -1;
      lVar5 = puVar2[9];
      if (*(undefined8 **)(lVar4 + 0x3110) != puVar2) goto LAB_1450ddb1d;
      *(longlong *)(lVar4 + 0x3110) = lVar5;
      goto LAB_1450ddb2e;
    }
    FUN_1450dcec0(param_1,puVar2);
    puVar2 = puVar3;
  } while( true );
}



// FUNCTION 1450ddb70 FUN_1450ddb70 body=531 status=ok
// SIG undefined FUN_1450ddb70(void)

void FUN_1450ddb70(int param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar11 = 0;
    lVar12 = (longlong)param_1;
    LOCK();
    puVar5 = (undefined8 *)param_2[0x19c];
    param_2[0x19c] = 0;
    UNLOCK();
    while (puVar5 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar5;
      if (*(uint *)((longlong)puVar5 + 0xc) < 0x7e) {
        param_2[0x19d] = param_2[0x19d] + -1;
        lVar4 = puVar5[9];
        if ((undefined8 *)param_2[(ulonglong)*(uint *)((longlong)puVar5 + 0xc) + 0x5a4] == puVar5) {
          param_2[(ulonglong)*(uint *)((longlong)puVar5 + 0xc) + 0x5a4] = lVar4;
        }
        else {
LAB_1450ddc20:
          lVar2 = puVar5[10];
          *(longlong *)(lVar2 + 0x48) = lVar4;
          if (lVar4 != 0) {
            *(longlong *)(lVar4 + 0x50) = lVar2;
          }
        }
LAB_1450ddc31:
        FUN_1450dc510(param_1,param_2);
        puVar5 = puVar1;
      }
      else {
        if (*(uint *)((longlong)puVar5 + 0xc) != 0xffffffff) {
          param_2[0x19d] = param_2[0x19d] + -1;
          lVar4 = puVar5[9];
          if ((undefined8 *)param_2[0x622] != puVar5) goto LAB_1450ddc20;
          param_2[0x622] = lVar4;
          goto LAB_1450ddc31;
        }
        FUN_1450dcec0(param_1,puVar5);
        puVar5 = puVar1;
      }
    }
    uVar8 = uVar11;
    if ((param_4 != 0) || (*(int *)((longlong)param_2 + 0xd1c) != 0)) {
      do {
        if (uVar8 == 0) {
          puVar9 = param_2 + 0x17b;
        }
        else {
          puVar9 = param_2 + uVar8 * 0x21 + 0x184;
        }
        uVar10 = uVar11;
        puVar3 = puVar9;
        if (*puVar9 != 0) {
          do {
            FUN_1450dc880(param_1,puVar3[1]);
            uVar10 = uVar10 + 1;
            puVar3 = puVar3 + 1;
          } while (uVar10 < *puVar9);
          *puVar9 = 0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x20);
    }
    puVar5 = (undefined8 *)AkTlsGetValue(*(undefined4 *)(&DAT_14c79d180 + lVar12 * 4));
    if (puVar5 == param_2) {
      AkTlsSetValue(*(undefined4 *)(&DAT_14c79d180 + lVar12 * 4),0);
    }
    lVar12 = lVar12 * 0x638;
    iVar6 = 1000;
    LOCK();
    bVar13 = *(int *)(&DAT_14c79cb20 + lVar12) == 0;
    if (bVar13) {
      *(int *)(&DAT_14c79cb20 + lVar12) = 1;
    }
    UNLOCK();
    if (!bVar13) {
      do {
        if (iVar6 == 0) goto LAB_1450ddd20;
        iVar6 = iVar6 + -1;
        LOCK();
        bVar13 = *(int *)(&DAT_14c79cb20 + lVar12) == 0;
        if (bVar13) {
          *(int *)(&DAT_14c79cb20 + lVar12) = 1;
        }
        UNLOCK();
      } while (!bVar13);
      if (iVar6 == 0) {
LAB_1450ddd20:
        do {
          Sleep(1);
          LOCK();
          bVar13 = *(int *)(&DAT_14c79cb20 + lVar12) == 0;
          if (bVar13) {
            *(int *)(&DAT_14c79cb20 + lVar12) = 1;
          }
          UNLOCK();
        } while (!bVar13);
      }
    }
    *param_2 = 0xffffffffffffffff;
    puVar7 = &DAT_14c79cb30;
    if (param_3 == 0) {
      puVar7 = &DAT_14c79cb28;
    }
    param_2[0x1a2] = *(undefined8 *)(puVar7 + lVar12);
    *(undefined8 **)(puVar7 + lVar12) = param_2;
    LOCK();
    *(undefined4 *)(&DAT_14c79cb20 + lVar12) = 0;
    UNLOCK();
  }
  return;
}



// FUNCTION 1450ddd90 FUN_1450ddd90 body=950 status=ok
// SIG undefined FUN_1450ddd90(void)

undefined8 * FUN_1450ddd90(int param_1,longlong param_2,undefined8 *param_3,uint param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  bool bVar15;
  
  plVar9 = (longlong *)param_3[1];
  uVar13 = (ulonglong)param_4;
  lVar11 = (longlong)param_1;
  if (plVar9 == (longlong *)0x0) {
    puVar14 = (undefined8 *)param_3[2];
    uVar8 = 0;
    uVar10 = 1;
    if (puVar14 == (undefined8 *)0x0) {
      bVar15 = true;
      do {
        if (bVar15) {
          plVar9 = (longlong *)(param_2 + 0xbd8);
        }
        else {
          plVar9 = (longlong *)(uVar10 * 0x108 + 0xb18 + param_2);
        }
        lVar6 = *plVar9;
        if (lVar6 != 0) {
          *plVar9 = lVar6 + -1;
          puVar14 = (undefined8 *)plVar9[lVar6];
          if (puVar14 != (undefined8 *)0x0) goto LAB_1450ddf81;
        }
        puVar14 = (undefined8 *)FUN_1450dd300(param_1,param_2,uVar10);
        if ((puVar14 != (undefined8 *)0x0) ||
           ((uVar10 <= *(uint *)(param_2 + 0xd00) &&
            (puVar14 = (undefined8 *)FUN_1450dcbf0(param_1,param_2,uVar10),
            puVar14 != (undefined8 *)0x0)))) goto LAB_1450ddf81;
        uVar10 = uVar10 + 1;
        bVar15 = uVar10 == 1;
      } while (uVar10 < 2);
      puVar14 = (undefined8 *)FUN_1450dcbf0(param_1,param_2,1);
      if (puVar14 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    else {
      if (*(longlong *)(param_2 + 0xbd8) != 0) {
        lVar6 = *(longlong *)(param_2 + 0xbd8) + -1;
        *(longlong *)(param_2 + 0xbd8) = lVar6;
        uVar8 = *(undefined8 *)(param_2 + 0xbe0 + lVar6 * 8);
      }
      param_3[2] = uVar8;
    }
LAB_1450ddf81:
    *(uint *)(puVar14 + 5) = *(uint *)(puVar14 + 5) & 0xfffffffb;
    *(uint *)((longlong)puVar14 + 0xc) = param_4;
    puVar12 = puVar14 + 0x10;
    puVar14[8] = param_2;
    lVar6 = (lVar11 * 199 + uVar13) * 8;
    *(undefined4 *)((longlong)puVar14 + 0x24) = *(undefined4 *)(&DAT_14c79c590 + lVar6);
    *(uint *)(puVar14 + 1) = (uint)*(ushort *)(&DAT_14c79c594 + lVar6);
    *puVar14 = 0;
    *(undefined4 *)(puVar14 + 4) = 0;
    LOCK();
    puVar14[3] = 0;
    UNLOCK();
    uVar1 = *(ushort *)(&DAT_14c79c594 + lVar6);
    uVar4 = (uint)uVar1;
    if (uVar1 < 2) {
      *param_3 = 0;
    }
    else {
      uVar10 = (ulonglong)*(uint *)(&DAT_14c79c590 + lVar6);
      puVar5 = (undefined8 *)((uint)uVar1 * uVar10 + (longlong)puVar12);
      if ((uVar10 < (ulonglong)(&DAT_14c79c550)[lVar11 * 199] >> 1) &&
         (puVar3 = (undefined8 *)((&DAT_14c79c550)[lVar11 * 199] + (longlong)puVar14),
         puVar3 < puVar5)) {
        puVar5 = puVar3;
      }
      *param_3 = (undefined8 *)(uVar10 + (longlong)puVar12);
      uVar4 = 2;
      puVar3 = (undefined8 *)(uVar10 + (longlong)puVar12);
      while (puVar2 = (undefined8 *)(uVar10 + (longlong)puVar3), puVar2 < puVar5) {
        *puVar3 = puVar2;
        uVar4 = uVar4 + 1;
        puVar3 = puVar2;
      }
      *puVar3 = 0;
    }
    *(uint *)(puVar14 + 2) = uVar4;
    if (uVar4 < *(uint *)(puVar14 + 1)) {
      if (param_3[1] != 0) {
        *(undefined8 **)(param_3[1] + 0x50) = puVar14;
      }
      puVar14[9] = param_3[1];
      param_3[1] = puVar14;
      *(undefined4 *)((longlong)puVar14 + 0x14) = *(undefined4 *)(puVar14 + 2);
      return puVar12;
    }
    lVar11 = *(longlong *)(param_2 + 0x2d20 + uVar13 * 8);
    if (lVar11 != 0) {
      *(undefined8 **)(lVar11 + 0x50) = puVar14;
    }
    puVar14[9] = *(undefined8 *)(param_2 + 0x2d20 + uVar13 * 8);
    *(undefined8 **)(param_2 + 0x2d20 + uVar13 * 8) = puVar14;
    *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + 1;
    *(undefined4 *)((longlong)puVar14 + 0x14) = *(undefined4 *)(puVar14 + 1);
    return puVar12;
  }
  puVar14 = (undefined8 *)*plVar9;
  if (puVar14 == (undefined8 *)0x0) {
    uVar13 = (ulonglong)*(uint *)((longlong)plVar9 + 0x24);
    uVar4 = (int)plVar9[1] - *(uint *)(plVar9 + 2);
    puVar14 = (undefined8 *)(*(uint *)(plVar9 + 2) * uVar13 + 0x80 + (longlong)plVar9);
    if (uVar4 < 2) {
      *param_3 = 0;
    }
    else {
      uVar10 = (&DAT_14c79c550)[lVar11 * 199];
      puVar12 = (undefined8 *)(uVar4 * uVar13 + (longlong)puVar14);
      if ((uVar13 < uVar10 >> 1) &&
         (puVar5 = (undefined8 *)((-uVar10 & (ulonglong)puVar14) + uVar10), puVar5 < puVar12)) {
        puVar12 = puVar5;
      }
      *param_3 = (undefined8 *)(uVar13 + (longlong)puVar14);
      uVar4 = 2;
      puVar5 = (undefined8 *)(uVar13 + (longlong)puVar14);
      while (puVar3 = (undefined8 *)(uVar13 + (longlong)puVar5), puVar3 < puVar12) {
        *puVar5 = puVar3;
        uVar4 = uVar4 + 1;
        puVar5 = puVar3;
      }
      *puVar5 = 0;
    }
    *(uint *)(plVar9 + 2) = (int)plVar9[2] + uVar4;
  }
  else {
    *param_3 = *puVar14;
    *plVar9 = 0;
  }
  *(int *)((longlong)plVar9 + 0x14) = (int)plVar9[2];
  if (plVar9[3] == 0) goto LAB_1450ddedc;
  iVar7 = 1000;
  LOCK();
  lVar11 = plVar9[3];
  plVar9[3] = -1;
  UNLOCK();
  while (lVar11 == -1) {
    if (iVar7 == 0) goto LAB_1450ddeb0;
    iVar7 = iVar7 + -1;
    LOCK();
    lVar11 = plVar9[3];
    plVar9[3] = -1;
    UNLOCK();
  }
LAB_1450ddecc:
  *plVar9 = lVar11;
  *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) - (int)plVar9[4];
  *(undefined4 *)(plVar9 + 4) = 0;
  LOCK();
  plVar9[3] = 0;
  UNLOCK();
LAB_1450ddedc:
  if ((*plVar9 == 0) && (*(uint *)(plVar9 + 1) <= *(uint *)(plVar9 + 2))) {
    param_3[1] = *(undefined8 *)(param_3[1] + 0x48);
    lVar11 = param_2 + (ulonglong)param_4 * 8;
    if (*(longlong *)(lVar11 + 0x2d20) != 0) {
      *(longlong **)(*(longlong *)(lVar11 + 0x2d20) + 0x50) = plVar9;
    }
    plVar9[9] = *(longlong *)(lVar11 + 0x2d20);
    *(longlong **)(lVar11 + 0x2d20) = plVar9;
    *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + 1;
  }
  return puVar14;
LAB_1450ddeb0:
  do {
    Sleep(1);
    LOCK();
    lVar11 = plVar9[3];
    plVar9[3] = -1;
    UNLOCK();
  } while (lVar11 == -1);
  goto LAB_1450ddecc;
}



// FUNCTION 1450de150 FUN_1450de150 body=489 status=ok
// SIG undefined FUN_1450de150(void)

/* WARNING: Removing unreachable block (ram,0x0001450de28f) */

longlong FUN_1450de150(int param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 local_res10;
  
  uVar5 = 0;
  lVar7 = (longlong)param_1;
  LOCK();
  puVar1 = *(undefined8 **)(param_2 + 0xce0);
  *(undefined8 *)(param_2 + 0xce0) = 0;
  UNLOCK();
  do {
    while( true ) {
      if (puVar1 == (undefined8 *)0x0) {
        lVar8 = lVar7 * 0x638;
        local_res10 = 0;
        uVar6 = (&DAT_14c79c568)[lVar7 * 199];
        uVar4 = param_3 + 0x80U >> ((byte)*(undefined8 *)(&DAT_14c79c558 + lVar8) & 0x3f);
        uVar9 = uVar4 + 1;
        if ((param_3 + 0x80U & (&DAT_14c79c550)[lVar7 * 199] - 1) == 0) {
          uVar9 = uVar4;
        }
        uVar4 = (&DAT_14c79c550)[lVar7 * 199] * uVar9;
        if ((uVar4 < uVar6) || (uVar6 <= *(ulonglong *)(&DAT_14c79c560 + lVar8))) {
          uVar6 = 0;
        }
        lVar3 = uVar4 + uVar6;
        uVar4 = DAT_14c79d178 + lVar3;
        if ((DAT_14c79d170 == 0) || (uVar4 <= DAT_14c79d170)) {
          LOCK();
          UNLOCK();
          DAT_14c79d178 = uVar4;
          uVar4 = (**(code **)(&DAT_14c79c508 + lVar8))(lVar3,&local_res10);
          if ((uVar4 != 0) && (uVar6 != 0)) {
            uVar6 = uVar6 - (~(&DAT_14c79c578)[lVar7 * 199] & uVar4);
            uVar4 = uVar4 + uVar6;
            uVar5 = (undefined4)(uVar6 >> 3);
          }
          if (uVar4 != 0) {
            *(undefined4 *)(uVar4 + 0xc) = 0xffffffff;
            *(int *)(uVar4 + 0x2c) = (int)uVar9;
            *(undefined4 *)(uVar4 + 0x3c) = uVar5;
            *(undefined8 *)(uVar4 + 0x58) = local_res10;
            *(longlong *)(uVar4 + 0x40) = param_2;
            if (*(longlong *)(param_2 + 0x3110) != 0) {
              *(ulonglong *)(*(longlong *)(param_2 + 0x3110) + 0x50) = uVar4;
            }
            *(undefined8 *)(uVar4 + 0x48) = *(undefined8 *)(param_2 + 0x3110);
            *(ulonglong *)(param_2 + 0x3110) = uVar4;
            *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + 1;
            return uVar4 + 0x80;
          }
        }
        return 0;
      }
      puVar2 = (undefined8 *)*puVar1;
      if (0x7d < *(uint *)((longlong)puVar1 + 0xc)) break;
      *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + -1;
      lVar3 = param_2 + (ulonglong)*(uint *)((longlong)puVar1 + 0xc) * 8;
      lVar8 = puVar1[9];
      if (*(undefined8 **)(lVar3 + 0x2d20) == puVar1) {
        *(longlong *)(lVar3 + 0x2d20) = lVar8;
      }
      else {
LAB_1450de1ef:
        lVar3 = puVar1[10];
        *(longlong *)(lVar3 + 0x48) = lVar8;
        if (lVar8 != 0) {
          *(longlong *)(lVar8 + 0x50) = lVar3;
        }
      }
LAB_1450de200:
      FUN_1450dc510(param_1,param_2);
      puVar1 = puVar2;
    }
    if (*(uint *)((longlong)puVar1 + 0xc) != 0xffffffff) {
      *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + -1;
      lVar8 = puVar1[9];
      if (*(undefined8 **)(param_2 + 0x3110) != puVar1) goto LAB_1450de1ef;
      *(longlong *)(param_2 + 0x3110) = lVar8;
      goto LAB_1450de200;
    }
    FUN_1450dcec0(param_1,puVar1);
    puVar1 = puVar2;
  } while( true );
}



// FUNCTION 1450de340 FUN_1450de340 body=340 status=ok
// SIG undefined FUN_1450de340(void)

undefined8 * FUN_1450de340(int param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  if (param_3 < 0x401) {
    lVar4 = (param_3 + 0xf >> 4 & 0xffffffff) * 3 + 1;
    puVar1 = *(undefined8 **)(param_2 + lVar4 * 8);
  }
  else {
    if (*(ulonglong *)(&DAT_14c79c980 + lVar4 * 0x638) < param_3) {
      if ((&DAT_14c79c568)[lVar4 * 199] * 0x20 - 0x80U < param_3) {
        puVar1 = (undefined8 *)FUN_1450de150(param_1,param_2);
        return puVar1;
      }
      uVar2 = param_3 + 0x80 >> ((byte)*(undefined8 *)(&DAT_14c79c570 + lVar4 * 0x638) & 0x3f);
      uVar3 = uVar2 + 1;
      if ((param_3 + 0x80 & (&DAT_14c79c568)[lVar4 * 199] - 1) == 0) {
        uVar3 = uVar2;
      }
      lVar4 = FUN_1450dd4d0(param_1,param_2,0,uVar3,0x7e);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)(lVar4 + 0xc) = 0x7e;
      *(longlong *)(lVar4 + 0x40) = param_2;
      if (*(longlong *)(param_2 + 0x3110) != 0) {
        *(longlong *)(*(longlong *)(param_2 + 0x3110) + 0x50) = lVar4;
      }
      *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_2 + 0x3110);
      *(longlong *)(param_2 + 0x3110) = lVar4;
      *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + 1;
      return (undefined8 *)(lVar4 + 0x80);
    }
    lVar4 = (ulonglong)
            *(ushort *)
             (&DAT_14c79c596 + ((ulonglong)((int)(param_3 - 0x401 >> 9) + 0x41) + lVar4 * 199) * 8)
            * 3 + 1;
    puVar1 = *(undefined8 **)(param_2 + lVar4 * 8);
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + lVar4 * 8) = *puVar1;
    return puVar1;
  }
  puVar1 = (undefined8 *)FUN_1450ddd90(param_1,param_2);
  return puVar1;
}



// FUNCTION 1450de4a0 FUN_1450de4a0 body=869 status=ok
// SIG undefined FUN_1450de4a0(void)

/* WARNING: Removing unreachable block (ram,0x0001450de663) */
/* WARNING: Removing unreachable block (ram,0x0001450de750) */

ulonglong FUN_1450de4a0(int param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 local_res18;
  ulonglong local_res20;
  
  lVar10 = (longlong)param_1;
  local_res20 = param_4;
  if (param_3 < 0x11) {
    uVar2 = FUN_1450de340(param_1,param_2,param_4);
    return uVar2;
  }
  uVar2 = 0x80;
  if ((param_3 < 0x81) && (param_4 + 0x80 < *(ulonglong *)(&DAT_14c79c980 + lVar10 * 0x638))) {
    if (param_4 != 0) {
      uVar2 = param_4 + 0x7f & 0xffffffffffffff80;
    }
    if (uVar2 <= param_3 + param_4) {
      uVar2 = FUN_1450de340(param_1);
      return uVar2;
    }
  }
  lVar6 = lVar10 * 0x638;
  uVar2 = param_3 - 1;
  uVar3 = (&DAT_14c79c550)[lVar10 * 199];
  if (uVar3 < param_3) {
    if (((param_3 & uVar2) == 0) && (param_3 < (ulonglong)(&DAT_14c79c568)[lVar10 * 199])) {
      uVar11 = (ulonglong)((param_4 & uVar3 - 1) != 0) + 1 + param_4 / uVar3;
      if (uVar11 < param_3 / uVar3) {
        uVar11 = param_3 / uVar3 + 1;
      }
      uVar3 = (ulonglong)(&DAT_14c79c568)[lVar10 * 199] / uVar3;
      uVar9 = uVar11;
      if (uVar11 * 2 <= uVar3 * 2) {
        uVar9 = uVar3;
      }
      do {
        uVar7 = 0;
        local_res18 = 0;
        uVar8 = uVar11 * (&DAT_14c79c550)[lVar10 * 199];
        uVar3 = (&DAT_14c79c568)[lVar10 * 199];
        if ((uVar8 < uVar3) || (uVar3 <= *(ulonglong *)(&DAT_14c79c560 + lVar6))) {
          uVar3 = 0;
        }
        uVar5 = DAT_14c79d178 + uVar3 + uVar8;
        if ((DAT_14c79d170 != 0) && (DAT_14c79d170 < uVar5)) {
LAB_1450de7d0:
          piVar4 = _errno();
          *piVar4 = 0xc;
          goto LAB_1450de7dc;
        }
        LOCK();
        UNLOCK();
        DAT_14c79d178 = uVar5;
        uVar5 = (**(code **)(&DAT_14c79c508 + lVar6))(uVar3 + uVar8,&local_res18);
        if ((uVar5 != 0) && (uVar3 != 0)) {
          uVar3 = uVar3 - (~(&DAT_14c79c578)[lVar10 * 199] & uVar5);
          uVar5 = uVar5 + uVar3;
          uVar7 = uVar3 >> 3;
        }
        if (uVar5 == 0) goto LAB_1450de7d0;
        uVar3 = uVar5 + 0x80;
        if ((uVar3 & uVar2) != 0) {
          uVar3 = (uVar3 & ~uVar2) + param_3;
        }
        if (((uVar3 - uVar5 < (ulonglong)(&DAT_14c79c568)[lVar10 * 199]) &&
            (local_res20 + uVar3 <= uVar5 + uVar8)) &&
           (((&DAT_14c79c578)[lVar10 * 199] & uVar3) == uVar5)) {
          *(undefined4 *)(uVar5 + 0xc) = 0xffffffff;
          *(int *)(uVar5 + 0x2c) = (int)uVar11;
          *(int *)(uVar5 + 0x3c) = (int)uVar7;
          *(longlong *)(uVar5 + 0x40) = param_2;
          *(undefined8 *)(uVar5 + 0x58) = local_res18;
          if (*(longlong *)(param_2 + 0x3110) != 0) {
            *(ulonglong *)(*(longlong *)(param_2 + 0x3110) + 0x50) = uVar5;
          }
          *(undefined8 *)(uVar5 + 0x48) = *(undefined8 *)(param_2 + 0x3110);
          *(ulonglong *)(param_2 + 0x3110) = uVar5;
          *(longlong *)(param_2 + 0xce8) = *(longlong *)(param_2 + 0xce8) + 1;
          return uVar3;
        }
        uVar3 = uVar8;
        if ((uVar8 != 0) && (uVar7 != 0)) {
          uVar3 = (&DAT_14c79c568)[lVar10 * 199] + uVar8;
          uVar5 = uVar5 + (longlong)((int)uVar7 * -8);
        }
        (**(code **)(lVar6 + 0x14c79c510))(uVar5,uVar8,local_res18,uVar3);
        if (uVar3 != 0) {
          DAT_14c79d178 = DAT_14c79d178 - uVar3;
          LOCK();
          UNLOCK();
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 <= uVar9 * 2);
      piVar4 = _errno();
      *piVar4 = 0x16;
LAB_1450de7dc:
      uVar3 = 0;
    }
    else {
      piVar4 = _errno();
      *piVar4 = 0x16;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = FUN_1450de340(param_1,param_2,param_3 + param_4);
    if ((uVar3 & uVar2) != 0) {
      uVar3 = (uVar3 & ~uVar2) + param_3;
      puVar1 = (uint *)(((&DAT_14c79c578)[lVar10 * 199] & uVar3) + 0x28);
      *puVar1 = *puVar1 | 4;
    }
  }
  return uVar3;
}



// FUNCTION 1450de810 FUN_1450de810 body=327 status=ok
// SIG undefined FUN_1450de810(void)

void FUN_1450de810(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = param_2[8];
  if ((*param_2 == 0) && (*(uint *)(param_2 + 1) <= *(uint *)(param_2 + 2))) {
    *(uint *)((longlong)param_2 + 0x14) = *(uint *)(param_2 + 1);
    lVar1 = lVar2 + (ulonglong)*(uint *)((longlong)param_2 + 0xc) * 8;
    lVar3 = param_2[9];
    if (*(longlong **)(lVar1 + 0x2d20) == param_2) {
      *(longlong *)(lVar1 + 0x2d20) = lVar3;
    }
    else {
      lVar1 = param_2[10];
      *(longlong *)(lVar1 + 0x48) = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 0x50) = lVar1;
      }
    }
    uVar4 = (ulonglong)*(uint *)((longlong)param_2 + 0xc);
    lVar1 = *(longlong *)(lVar2 + 0x10 + uVar4 * 0x18);
    if (lVar1 != 0) {
      *(longlong **)(lVar1 + 0x50) = param_2;
    }
    param_2[9] = *(longlong *)(lVar2 + 0x10 + uVar4 * 0x18);
    *(longlong **)(lVar2 + 0x10 + uVar4 * 0x18) = param_2;
    *(longlong *)(lVar2 + 0xce8) = *(longlong *)(lVar2 + 0xce8) + -1;
  }
  *param_3 = *param_2;
  *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + -1;
  *param_2 = (longlong)param_3;
  if (*(int *)((longlong)param_2 + 0x14) == (int)param_2[4]) {
    uVar4 = (ulonglong)*(uint *)((longlong)param_2 + 0xc);
    lVar1 = param_2[9];
    if (*(longlong **)(lVar2 + 0x10 + uVar4 * 0x18) == param_2) {
      *(longlong *)(lVar2 + 0x10 + uVar4 * 0x18) = lVar1;
    }
    else {
      lVar3 = param_2[10];
      *(longlong *)(lVar3 + 0x48) = lVar1;
      if (lVar1 != 0) {
        *(longlong *)(lVar1 + 0x50) = lVar3;
      }
    }
    if (*(int *)(lVar2 + 0xd1c) == 0) {
      if (*(longlong *)(lVar2 + ((ulonglong)*(uint *)((longlong)param_2 + 0xc) + 1) * 0x18) != 0) {
        FUN_1450dc510(param_1,lVar2);
      }
      *(longlong **)(lVar2 + ((ulonglong)*(uint *)((longlong)param_2 + 0xc) + 1) * 0x18) = param_2;
      return;
    }
    FUN_1450dc880(param_1,param_2);
  }
  return;
}



// FUNCTION 1450de960 FUN_1450de960 body=87 status=ok
// SIG undefined FUN_1450de960(void)

longlong FUN_1450de960(int param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (longlong)param_1;
  uVar2 = (&DAT_14c79c578)[lVar1 * 199] & param_2;
  if (*(uint *)(uVar2 + 0xc) < 0x7e) {
    return (ulonglong)*(uint *)(uVar2 + 0x24) -
           ((param_2 - uVar2) - 0x80) % (ulonglong)*(uint *)(uVar2 + 0x24);
  }
  if (*(uint *)(uVar2 + 0xc) == 0x7e) {
    return ((ulonglong)*(uint *)(uVar2 + 0x2c) * (&DAT_14c79c568)[lVar1 * 199] - param_2) + uVar2;
  }
  return ((ulonglong)*(uint *)(uVar2 + 0x2c) * (&DAT_14c79c550)[lVar1 * 199] - param_2) + uVar2;
}



// FUNCTION 1450de9c0 FUN_1450de9c0 body=567 status=ok
// SIG undefined FUN_1450de9c0(void)

ulonglong FUN_1450de9c0(int param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  void **ppvVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong *puVar9;
  bool bVar10;
  
  puVar9 = (ulonglong *)((ulonglong)param_2 & (&DAT_14c79c578)[(longlong)param_1 * 199]);
  if (puVar9 == (ulonglong *)0x0) {
    return in_RAX;
  }
  if (0x7d < *(uint *)((longlong)puVar9 + 0xc)) {
    if (*(uint *)((longlong)puVar9 + 0xc) != 0x7e) {
      uVar6 = FUN_1450dcec0(param_1,puVar9);
      return uVar6;
    }
    plVar4 = (longlong *)puVar9[8];
    if ((((void **)*plVar4 != (void **)0x0) && ((void **)*plVar4 != &ExceptionList)) &&
       (*(int *)((longlong)plVar4 + 0xd1c) == 0)) {
      do {
        uVar7 = plVar4[0x19c];
        *puVar9 = uVar7;
        LOCK();
        uVar6 = plVar4[0x19c];
        bVar10 = uVar7 == uVar6;
        if (bVar10) {
          plVar4[0x19c] = (longlong)puVar9;
          uVar6 = uVar7;
        }
        UNLOCK();
      } while (!bVar10);
      return uVar6;
    }
    plVar4[0x19d] = plVar4[0x19d] + -1;
    uVar6 = puVar9[9];
    if (*(ulonglong **)(puVar9[8] + 0x3110) == puVar9) {
      *(ulonglong *)(puVar9[8] + 0x3110) = uVar6;
    }
    else {
      uVar7 = puVar9[10];
      *(ulonglong *)(uVar7 + 0x48) = uVar6;
      if (uVar6 != 0) {
        *(ulonglong *)(uVar6 + 0x50) = uVar7;
      }
    }
    uVar6 = puVar9[8];
    if (((1 < *(uint *)((longlong)puVar9 + 0x2c)) && (*(longlong *)(uVar6 + 0xbd8) == 0)) &&
       ((*(int *)(uVar6 + 0xd1c) == 0 && (*(int *)(uVar6 + 0xd00) == 0)))) {
      *(ulonglong **)(uVar6 + 0xcf0) = puVar9;
      uVar7 = (ulonglong)*(uint *)((longlong)puVar9 + 0x2c);
      *(uint *)(uVar6 + 0xd00) = *(uint *)((longlong)puVar9 + 0x2c);
      if ((puVar9[5] & 1) == 0) {
        uVar7 = (ulonglong)*(uint *)((longlong)puVar9 + 0x34) *
                (&DAT_14c79c568)[(longlong)param_1 * 199];
        puVar9 = (ulonglong *)((longlong)puVar9 - uVar7);
      }
      *(ulonglong **)(uVar6 + 0xcf8) = puVar9;
      return uVar7;
    }
    uVar6 = FUN_1450dc510(param_1,uVar6,puVar9);
    return uVar6;
  }
  if ((puVar9[5] & 4) != 0) {
    param_2 = (ulonglong *)
              ((longlong)param_2 +
              (longlong)
              (int)-((((int)param_2 - (int)puVar9) - 0x80U) % *(uint *)((longlong)puVar9 + 0x24)));
  }
  ppvVar2 = *(void ***)puVar9[8];
  if (((ppvVar2 == (void **)0x0) || (ppvVar2 == &ExceptionList)) ||
     (*(int *)((longlong)puVar9[8] + 0xd1c) != 0)) {
    uVar6 = FUN_1450de810(param_1,puVar9,param_2);
    return uVar6;
  }
  iVar8 = 1000;
  LOCK();
  uVar6 = puVar9[3];
  puVar9[3] = 0xffffffffffffffff;
  UNLOCK();
  while (uVar6 == 0xffffffffffffffff) {
    if (iVar8 == 0) goto LAB_1450dea70;
    iVar8 = iVar8 + -1;
    LOCK();
    uVar6 = puVar9[3];
    puVar9[3] = 0xffffffffffffffff;
    UNLOCK();
  }
LAB_1450dea8c:
  *param_2 = uVar6;
  uVar5 = (int)puVar9[4] + 1;
  *(uint *)(puVar9 + 4) = uVar5;
  LOCK();
  puVar9[3] = (ulonglong)param_2;
  UNLOCK();
  if (uVar5 != (uint)puVar9[1]) {
    return (ulonglong)uVar5;
  }
  uVar6 = puVar9[8];
  do {
    uVar3 = *(ulonglong *)(uVar6 + 0xce0);
    *puVar9 = uVar3;
    puVar1 = (ulonglong *)(uVar6 + 0xce0);
    LOCK();
    uVar7 = *puVar1;
    bVar10 = uVar3 == uVar7;
    if (bVar10) {
      *puVar1 = (ulonglong)puVar9;
      uVar7 = uVar3;
    }
    UNLOCK();
  } while (!bVar10);
  return uVar7;
LAB_1450dea70:
  do {
    Sleep(1);
    LOCK();
    uVar6 = puVar9[3];
    puVar9[3] = 0xffffffffffffffff;
    UNLOCK();
  } while (uVar6 == 0xffffffffffffffff);
  goto LAB_1450dea8c;
}



// FUNCTION 1450dec00 FUN_1450dec00 body=496 status=ok
// SIG undefined FUN_1450dec00(void)

void * FUN_1450dec00(int param_1,undefined8 param_2,void *param_3,ulonglong param_4,size_t param_5,
                    uint param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  if (param_3 == (void *)0x0) {
    param_5 = 0;
  }
  else {
    uVar4 = (&DAT_14c79c578)[lVar7 * 199] & (ulonglong)param_3;
    pvVar6 = (void *)(uVar4 + 0x80);
    if (*(uint *)(uVar4 + 0xc) < 0x7e) {
      uVar1 = (ulonglong)*(uint *)(uVar4 + 0x24);
      pvVar6 = (void *)(((uint)((int)param_3 - (int)pvVar6) / uVar1) * uVar1 + (longlong)pvVar6);
      if (param_5 == 0) {
        param_5 = ((ulonglong)*(uint *)(uVar4 + 0x24) - (longlong)param_3) + (longlong)pvVar6;
      }
      if (param_4 <= uVar1) {
        if (param_3 == pvVar6) {
          return pvVar6;
        }
        if ((param_6 & 1) != 0) {
          return pvVar6;
        }
        memmove(pvVar6,param_3,param_5);
        return pvVar6;
      }
    }
    else {
      uVar1 = param_4 + 0x80;
      if (*(uint *)(uVar4 + 0xc) == 0x7e) {
        uVar2 = uVar1 >> ((byte)*(undefined8 *)(&DAT_14c79c570 + lVar7 * 0x638) & 0x3f);
        uVar5 = uVar2 + 1;
        if ((uVar1 & (&DAT_14c79c578)[lVar7 * 199] - 1) == 0) {
          uVar5 = uVar2;
        }
        uVar2 = param_5;
        if (param_5 == 0) {
          uVar2 = ((ulonglong)*(uint *)(uVar4 + 0x2c) * (&DAT_14c79c568)[lVar7 * 199] -
                  (longlong)param_3) + -0x80 + (longlong)pvVar6;
        }
        param_5 = uVar2;
        if (*(uint *)(uVar4 + 0x2c) < uVar5) goto LAB_1450ded5e;
      }
      else {
        uVar3 = uVar1 >> ((byte)*(undefined8 *)(&DAT_14c79c558 + lVar7 * 0x638) & 0x3f);
        uVar5 = uVar1 & (&DAT_14c79c550)[lVar7 * 199] - 1;
        uVar2 = (ulonglong)*(uint *)(uVar4 + 0x2c);
        uVar1 = uVar3 + 1;
        if (uVar5 == 0) {
          uVar1 = uVar3;
        }
        if (param_5 == 0) {
          param_5 = uVar4 + ((&DAT_14c79c550)[lVar7 * 199] * uVar2 - (longlong)param_3);
        }
        if (uVar2 < uVar1) goto LAB_1450ded5e;
      }
      if (uVar2 >> 1 <= uVar1) {
        if (param_3 == pvVar6) {
          return pvVar6;
        }
        if ((param_6 & 1) != 0) {
          return pvVar6;
        }
        memmove(pvVar6,param_3,param_5);
        return pvVar6;
      }
    }
  }
LAB_1450ded5e:
  if ((param_6 & 2) == 0) {
    uVar4 = (param_5 >> 2) + (param_5 >> 3) + param_5;
    if ((param_4 <= uVar4) && (param_5 < param_4)) {
      param_4 = uVar4;
    }
    pvVar6 = (void *)FUN_1450de340(param_1,param_2,param_4);
    if ((param_3 != (void *)0x0) && (pvVar6 != (void *)0x0)) {
      if ((param_6 & 1) == 0) {
        if (param_5 < param_4) {
          param_4 = param_5;
        }
        memcpy(pvVar6,param_3,param_4);
      }
      FUN_1450de9c0(param_1,param_3);
    }
  }
  else {
    pvVar6 = (void *)0x0;
  }
  return pvVar6;
}



// FUNCTION 1450dedf0 FUN_1450dedf0 body=158 status=ok
// SIG undefined FUN_1450dedf0(void)

void FUN_1450dedf0(int param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = ((longlong)param_1 * 199 + param_2) * 8;
  lVar2 = (&DAT_14c79c568)[(longlong)param_1 * 199];
  *(short *)(&DAT_14c79c596 + lVar1) = (short)param_2;
  *(short *)(&DAT_14c79c594 + lVar1) =
       (short)((lVar2 - 0x80U) / (ulonglong)*(uint *)(&DAT_14c79c590 + lVar1));
  if (0x40 < param_2) {
    puVar3 = (undefined8 *)(&DAT_14c79c590 + lVar1);
    do {
      param_2 = param_2 - 1;
      if (*(short *)((longlong)puVar3 + -4) != *(short *)(&DAT_14c79c594 + lVar1)) {
        return;
      }
      puVar3[-1] = *(undefined8 *)(&DAT_14c79c590 + lVar1);
      puVar3 = puVar3 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1450dee90 FUN_1450dee90 body=43 status=ok
// SIG undefined FUN_1450dee90(void)

undefined8 * FUN_1450dee90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c283a0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450deec0 FUN_1450deec0 body=43 status=ok
// SIG undefined FUN_1450deec0(void)

undefined8 * FUN_1450deec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28410;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450deef0 FUN_1450deef0 body=119 status=ok
// SIG undefined FUN_1450deef0(void)

undefined8 * FUN_1450deef0(undefined8 *param_1,undefined8 param_2)

{
  FUN_14539fc00();
  *param_1 = &PTR_FUN_149c284a0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  FUN_1453a0c70(param_1 + 0x18);
  param_1[0x85] = param_2;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return param_1;
}



// FUNCTION 1450def70 FUN_1450def70 body=57 status=ok
// SIG undefined FUN_1450def70(void)

void FUN_1450def70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c284a0;
  FUN_1453a0cc0(param_1 + 0x18);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  FUN_14539fc50(param_1);
  return;
}



// FUNCTION 1450defb0 FUN_1450defb0 body=158 status=ok
// SIG undefined FUN_1450defb0(void)

undefined8 FUN_1450defb0(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_2 + 0x14) == 0) ||
      ((*(int *)(param_2 + 8) != 0 &&
       (*(float *)(param_2 + 0x28) <= 0.0 && *(float *)(param_2 + 0x28) != 0.0)))) ||
     (((*(byte *)(param_2 + 0x18) & 2) != 0 &&
      ((*(uint *)(param_2 + 0x2c) == 0 || (0x400 < *(uint *)(param_2 + 0x2c))))))) {
    uVar2 = 0x1f;
  }
  else {
    *(int *)(param_1 + 0x430) = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_2 + 0x28);
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x438) = param_3;
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x34);
    uVar2 = FUN_1453a0cd0(param_1 + 0xc0,param_2,param_1);
    if ((int)uVar2 == 1) {
      uVar2 = FUN_14539fec0(param_1,param_2 + 0x1c);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1450df050 FUN_1450df050 body=65 status=ok
// SIG undefined FUN_1450df050(void)

void FUN_1450df050(undefined8 *param_1)

{
  FUN_1453a0020();
  FUN_1453a0db0(param_1 + 0x18);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(7,param_1);
    return;
  }
  return;
}



// FUNCTION 1450df0a0 FUN_1450df0a0 body=113 status=ok
// SIG undefined FUN_1450df0a0(void)

longlong FUN_1450df0a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x38))();
  if (lVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
    if (param_1[0x10] == 0) {
      param_1[0x10] = lVar1;
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    else {
      *(longlong *)(lVar1 + 0x18) = param_1[0x10];
      param_1[0x10] = lVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  }
  return lVar1;
}



// FUNCTION 1450df120 FUN_1450df120 body=134 status=ok
// SIG undefined FUN_1450df120(void)

longlong FUN_1450df120(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  if (lVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
    if (param_1[0x10] == 0) {
      param_1[0x10] = lVar1;
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    else {
      *(longlong *)(lVar1 + 0x18) = param_1[0x10];
      param_1[0x10] = lVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  }
  return lVar1;
}



// FUNCTION 1450df1b0 FUN_1450df1b0 body=188 status=ok
// SIG undefined FUN_1450df1b0(void)

longlong * FUN_1450df1b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x40))();
  if (plVar1 != (longlong *)0x0) {
    *(undefined1 *)((longlong)plVar1 + 0x7b) = 1;
    (**(code **)(*plVar1 + 0x38))(plVar1,param_4);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
    if (param_1[0x12] == 0) {
      param_1[0x12] = (longlong)plVar1;
      plVar1[3] = 0;
    }
    else {
      plVar1[3] = param_1[0x12];
      param_1[0x12] = (longlong)plVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  }
  return plVar1;
}



// FUNCTION 1450df270 FUN_1450df270 body=102 status=ok
// SIG undefined FUN_1450df270(void)

void FUN_1450df270(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  
  if (*(byte *)(param_2 + 0x74) != param_3) {
    if (param_3 < 0x65) {
      *(byte *)(param_2 + 0x74) = param_3;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
    for (plVar1 = *(longlong **)(param_1 + 0x90); plVar1 != (longlong *)0x0;
        plVar1 = (longlong *)plVar1[3]) {
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  }
  return;
}



// FUNCTION 1450df2e0 FUN_1450df2e0 body=82 status=ok
// SIG undefined FUN_1450df2e0(void)

void FUN_1450df2e0(longlong param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1450df5b0();
  if ((param_2 == '\0') || (cVar1 != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_1450df5b0(param_1,uVar2,param_3,param_1 + 0x78);
  return;
}



// FUNCTION 1450df340 FUN_1450df340 body=56 status=ok
// SIG undefined FUN_1450df340(void)

void FUN_1450df340(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_1453a1770(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x0001450df371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1450df380 FUN_1450df380 body=101 status=ok
// SIG undefined FUN_1450df380(void)

undefined1 FUN_1450df380(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2,local_res18,local_res10,local_res8,1);
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2,uVar2,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return uVar1;
}



// FUNCTION 1450df3f0 FUN_1450df3f0 body=111 status=ok
// SIG undefined FUN_1450df3f0(void)

undefined1 FUN_1450df3f0(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  cVar1 = FUN_1450df460(param_1,param_1 + 0x78);
  cVar2 = FUN_1450df460(param_1,param_1 + 0x88);
  if ((cVar1 == '\0') || (cVar2 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar3;
}



// FUNCTION 1450df460 FUN_1450df460 body=192 status=ok
// SIG undefined FUN_1450df460(void)

undefined8 FUN_1450df460(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  
  plVar1 = *(longlong **)(param_2 + 8);
  plVar3 = (longlong *)0x0;
  while (plVar2 = plVar3, plVar3 = plVar1, plVar3 != (longlong *)0x0) {
    if ((char)plVar3[0xf] == '\0') {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      plVar1 = (longlong *)plVar3[3];
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 8))();
      plVar1 = (longlong *)plVar3[3];
      if (cVar4 != '\0') {
        if (plVar3 == *(longlong **)(param_2 + 8)) {
          *(longlong **)(param_2 + 8) = plVar1;
        }
        else {
          plVar2[3] = (longlong)plVar1;
        }
        (**(code **)*plVar3)(plVar3,0);
        AK::MemoryMgr::Free(7,plVar3);
        plVar3 = plVar2;
      }
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    return 0;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  return 1;
}



// FUNCTION 1450df520 FUN_1450df520 body=137 status=ok
// SIG undefined FUN_1450df520(void)

void FUN_1450df520(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  
  plVar1 = *(longlong **)(param_2 + 8);
  plVar3 = (longlong *)0x0;
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    if (((char)plVar2[0xf] == '\0') || (cVar4 = (**(code **)(*plVar2 + 8))(plVar2), cVar4 == '\0'))
    {
      plVar1 = (longlong *)plVar2[3];
      plVar3 = plVar2;
    }
    else {
      plVar1 = (longlong *)plVar2[3];
      if (plVar2 == *(longlong **)(param_2 + 8)) {
        *(longlong **)(param_2 + 8) = plVar1;
      }
      else {
        plVar3[3] = (longlong)plVar1;
      }
      (**(code **)*plVar2)(plVar2,0);
      AK::MemoryMgr::Free(7,plVar2);
    }
  }
  return;
}



// FUNCTION 1450df5b0 FUN_1450df5b0 body=297 status=ok
// SIG undefined FUN_1450df5b0(void)

undefined8 FUN_1450df5b0(longlong param_1,char param_2,char param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  plVar5 = *(longlong **)(param_4 + 8);
  plVar3 = (longlong *)0x0;
  plVar7 = plVar3;
  if (plVar5 != (longlong *)0x0) {
    do {
      plVar4 = plVar5;
      if ((char)plVar5[0xf] == '\0') {
        if ((param_2 != '\0') &&
           (((plVar7 == (longlong *)0x0 ||
             (*(char *)((longlong)plVar5 + 0x74) < *(char *)((longlong)plVar7 + 0x74))) &&
            (*(char *)((longlong)plVar5 + 0x74) < param_3)))) {
          EnterCriticalSection((LPCRITICAL_SECTION)(plVar5 + 6));
          cVar1 = *(char *)((longlong)plVar5 + 0x7c);
          LeaveCriticalSection((LPCRITICAL_SECTION)(plVar5 + 6));
          if (cVar1 != '\0') {
            plVar7 = plVar5;
          }
        }
        plVar6 = (longlong *)plVar5[3];
      }
      else {
        cVar1 = (**(code **)(*plVar5 + 8))(plVar5);
        plVar6 = (longlong *)plVar5[3];
        if (cVar1 != '\0') {
          if (plVar5 == *(longlong **)(param_4 + 8)) {
            *(longlong **)(param_4 + 8) = plVar6;
          }
          else {
            plVar3[3] = (longlong)plVar6;
          }
          plVar4 = plVar3;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)*plVar5)(plVar5,0);
            AK::MemoryMgr::Free(7,plVar5);
          }
        }
      }
      plVar3 = plVar4;
      plVar5 = plVar6;
    } while (plVar6 != (longlong *)0x0);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      uVar2 = 1;
      goto LAB_1450df6be;
    }
  }
  uVar2 = 0;
LAB_1450df6be:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar2;
}



// FUNCTION 1450df6f0 FUN_1450df6f0 body=705 status=ok
// SIG undefined FUN_1450df6f0(void)

longlong * FUN_1450df6f0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x70));
  if (*(char *)(param_1 + 0x68) != '\0') {
    plVar7 = (longlong *)FUN_1450dfb80(param_1,param_2);
    goto LAB_1450df995;
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  plVar4 = (longlong *)0x0;
  while (plVar2 = plVar4, plVar7 = plVar1, plVar7 != (longlong *)0x0) {
    plVar4 = plVar7;
    if ((char)plVar7[0xf] == '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar7 + 6));
      cVar5 = *(char *)((longlong)plVar7 + 0x7c);
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar7 + 6));
      if (cVar5 != '\0') {
        fVar8 = (float)(**(code **)(*plVar7 + 0x30))(plVar7);
        cVar5 = *(char *)((longlong)plVar7 + 0x7a);
        plVar1 = (longlong *)plVar7[3];
        goto joined_r0x0001450df80d;
      }
      plVar1 = (longlong *)plVar7[3];
    }
    else {
      cVar5 = (**(code **)(*plVar7 + 8))(plVar7);
      plVar1 = (longlong *)plVar7[3];
      if (cVar5 != '\0') {
        if (plVar7 == *(longlong **)(param_1 + 0x80)) {
          *(longlong **)(param_1 + 0x80) = plVar1;
        }
        else {
          plVar2[3] = (longlong)plVar1;
        }
        plVar4 = plVar2;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)*plVar7)(plVar7,0);
          AK::MemoryMgr::Free(7,plVar7);
        }
      }
    }
  }
  goto LAB_1450df982;
joined_r0x0001450df80d:
  plVar3 = plVar4;
  plVar2 = plVar1;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
    if ((char)plVar2[0xf] == '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar2 + 6));
      cVar6 = *(char *)((longlong)plVar2 + 0x7c);
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 6));
      if (cVar6 != '\0') {
        fVar9 = (float)(**(code **)(*plVar2 + 0x30))(plVar2);
        cVar6 = *(char *)((longlong)plVar2 + 0x7a);
        if (cVar5 == '\0') {
          if (cVar6 == '\0') {
LAB_1450df8dc:
            if (fVar9 == 0.0) {
              if (((*(char *)((longlong)plVar7 + 0x74) < *(char *)((longlong)plVar2 + 0x74)) ||
                  (0.0 < fVar8)) ||
                 ((*(char *)((longlong)plVar2 + 0x74) == *(char *)((longlong)plVar7 + 0x74) &&
                  ((float)(*(longlong *)(param_1 + 0x70) - plVar7[0xb]) * (1.0 / DAT_14c79c4d4) <
                   (float)(*(longlong *)(param_1 + 0x70) - plVar2[0xb]) * (1.0 / DAT_14c79c4d4)))))
              goto LAB_1450df93b;
            }
            else if (fVar9 < fVar8) goto LAB_1450df93b;
          }
          else {
            cVar6 = '\x01';
LAB_1450df93b:
            cVar5 = cVar6;
            plVar7 = plVar2;
            fVar8 = fVar9;
          }
        }
        else if (cVar6 != '\0') goto LAB_1450df8dc;
      }
      plVar1 = (longlong *)plVar2[3];
    }
    else {
      cVar6 = (**(code **)(*plVar2 + 8))(plVar2);
      plVar1 = (longlong *)plVar2[3];
      if (cVar6 != '\0') {
        if (plVar2 == *(longlong **)(param_1 + 0x80)) {
          *(longlong **)(param_1 + 0x80) = plVar1;
        }
        else {
          plVar3[3] = (longlong)plVar1;
        }
        plVar4 = plVar3;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)*plVar2)(plVar2,0);
          AK::MemoryMgr::Free(7,plVar2);
        }
      }
    }
    goto joined_r0x0001450df80d;
  }
  *param_2 = fVar8;
  if (cVar5 != '\0') goto LAB_1450df995;
LAB_1450df982:
  plVar7 = (longlong *)FUN_1450df9c0(param_1);
LAB_1450df995:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return plVar7;
}



// FUNCTION 1450df9c0 FUN_1450df9c0 body=442 status=ok
// SIG undefined FUN_1450df9c0(void)

longlong * FUN_1450df9c0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  
  plVar7 = (longlong *)0x0;
  iVar9 = 0;
  bVar1 = false;
  plVar6 = *(longlong **)(param_1 + 0x90);
  plVar8 = (longlong *)0x0;
  while (plVar2 = plVar6, plVar2 != (longlong *)0x0) {
    if (((char)plVar2[0xf] == '\0') || (cVar3 = (**(code **)(*plVar2 + 8))(plVar2), cVar3 == '\0'))
    {
      iVar4 = (**(code **)(*plVar2 + 0x48))(plVar2);
      iVar9 = iVar9 + iVar4;
      plVar6 = (longlong *)plVar2[3];
      plVar8 = plVar2;
    }
    else {
      plVar6 = (longlong *)plVar2[3];
      if (plVar2 == *(longlong **)(param_1 + 0x90)) {
        *(longlong **)(param_1 + 0x90) = plVar6;
      }
      else {
        plVar8[3] = (longlong)plVar6;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,0);
        AK::MemoryMgr::Free(7,plVar2);
      }
      bVar1 = true;
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x90);
  if (plVar6 != (longlong *)0x0) {
    do {
      if (bVar1) {
        (**(code **)(*plVar6 + 0x50))(plVar6);
      }
      if ((*(char *)((longlong)plVar6 + 0x7a) != '\0') &&
         ((plVar7 == (longlong *)0x0 ||
          (*(char *)((longlong)plVar7 + 0x74) < *(char *)((longlong)plVar6 + 0x74))))) {
        plVar7 = plVar6;
      }
      plVar6 = (longlong *)plVar6[3];
    } while (plVar6 != (longlong *)0x0);
    if (plVar7 != (longlong *)0x0) {
      iVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
      iVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
      iVar5 = iVar5 - iVar4;
      if (*(uint *)(param_1 + 0x43c) < (uint)(iVar5 + iVar9)) {
        do {
          plVar6 = *(longlong **)(param_1 + 0x90);
          plVar8 = (longlong *)0x0;
          if (plVar6 == (longlong *)0x0) break;
          do {
            iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
            if (((iVar4 != 0) &&
                (*(char *)((longlong)plVar6 + 0x74) < *(char *)((longlong)plVar7 + 0x74))) &&
               ((plVar8 == (longlong *)0x0 ||
                (*(char *)((longlong)plVar6 + 0x74) < *(char *)((longlong)plVar8 + 0x74))))) {
              plVar8 = plVar6;
            }
            plVar6 = (longlong *)plVar6[3];
          } while (plVar6 != (longlong *)0x0);
          if (plVar8 == (longlong *)0x0) break;
          iVar4 = (**(code **)(*plVar8 + 0x58))(plVar8,iVar5);
          iVar9 = iVar9 - iVar4;
        } while (*(uint *)(param_1 + 0x43c) < (uint)(iVar5 + iVar9));
        if (*(uint *)(param_1 + 0x43c) < (uint)(iVar5 + iVar9)) {
          (**(code **)(*plVar7 + 0x58))(plVar7,0);
          plVar7 = (longlong *)0x0;
        }
      }
    }
  }
  *(int *)(param_1 + 0x440) = iVar9;
  return plVar7;
}



// FUNCTION 1450dfb80 FUN_1450dfb80 body=572 status=ok
// SIG undefined FUN_1450dfb80(void)

longlong * FUN_1450dfb80(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  plVar4 = (longlong *)0x0;
  do {
    while( true ) {
      plVar2 = plVar4;
      plVar6 = plVar1;
      if (plVar6 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      plVar4 = plVar6;
      if ((char)plVar6[0xf] == '\0') break;
      cVar5 = (**(code **)(*plVar6 + 8))(plVar6);
      plVar1 = (longlong *)plVar6[3];
      if (cVar5 != '\0') {
        if (plVar6 == *(longlong **)(param_1 + 0x80)) {
          *(longlong **)(param_1 + 0x80) = plVar1;
        }
        else {
          plVar2[3] = (longlong)plVar1;
        }
        plVar4 = plVar2;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)*plVar6)(plVar6,0);
          AK::MemoryMgr::Free(7,plVar6);
        }
      }
    }
    if (*(char *)((longlong)plVar6 + 0x75) == '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar6 + 6));
      cVar5 = *(char *)((longlong)plVar6 + 0x7c);
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar6 + 6));
      if (cVar5 != '\0') {
        fVar7 = (float)(**(code **)(*plVar6 + 0x30))(plVar6);
        plVar1 = (longlong *)plVar6[3];
        break;
      }
    }
    plVar1 = (longlong *)plVar6[3];
  } while( true );
joined_r0x0001450dfc74:
  while( true ) {
    plVar3 = plVar4;
    plVar2 = plVar1;
    if (plVar2 == (longlong *)0x0) {
      *param_2 = fVar7;
      return plVar6;
    }
    plVar4 = plVar2;
    if ((char)plVar2[0xf] == '\0') break;
    cVar5 = (**(code **)(*plVar2 + 8))(plVar2);
    plVar1 = (longlong *)plVar2[3];
    if (cVar5 != '\0') {
      if (plVar2 == *(longlong **)(param_1 + 0x80)) {
        *(longlong **)(param_1 + 0x80) = plVar1;
      }
      else {
        plVar3[3] = (longlong)plVar1;
      }
      plVar4 = plVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,0);
        AK::MemoryMgr::Free(7,plVar2);
      }
    }
  }
  if (*(char *)((longlong)plVar2 + 0x75) == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar2 + 6));
    cVar5 = *(char *)((longlong)plVar2 + 0x7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 6));
    if (cVar5 != '\0') {
      fVar8 = (float)(**(code **)(*plVar2 + 0x30))(plVar2);
      if (fVar8 == 0.0) {
        if (((*(char *)((longlong)plVar6 + 0x74) < *(char *)((longlong)plVar2 + 0x74)) ||
            (0.0 < fVar7)) ||
           ((*(char *)((longlong)plVar2 + 0x74) == *(char *)((longlong)plVar6 + 0x74) &&
            ((float)(*(longlong *)(param_1 + 0x70) - plVar6[0xb]) * (1.0 / DAT_14c79c4d4) <
             (float)(*(longlong *)(param_1 + 0x70) - plVar2[0xb]) * (1.0 / DAT_14c79c4d4))))) {
LAB_1450dfd84:
          plVar6 = plVar2;
          fVar7 = fVar8;
        }
      }
      else if (fVar8 < fVar7) goto LAB_1450dfd84;
    }
  }
  plVar1 = (longlong *)plVar2[3];
  goto joined_r0x0001450dfc74;
}



// FUNCTION 1450dfdc0 FUN_1450dfdc0 body=90 status=ok
// SIG undefined FUN_1450dfdc0(void)

undefined8 * FUN_1450dfdc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c284a0;
  FUN_1453a0cc0(param_1 + 0x18);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  FUN_14539fc50(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x448);
  }
  return param_1;
}



// FUNCTION 1450dfe20 FUN_1450dfe20 body=138 status=ok
// SIG undefined FUN_1450dfe20(void)

void FUN_1450dfe20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c284f8;
  if (*(char *)((longlong)param_1 + 0x79) != '\0') {
    (**(code **)(**(longlong **)(param_1[0xc] + 0x428) + 8))
              (*(longlong **)(param_1[0xc] + 0x428),param_1[5]);
  }
  if (param_1[4] != 0) {
    FUN_144d4fd10();
    param_1[4] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    AK::MemoryMgr::Free(7,(void *)param_1[0xd]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(7,(void *)param_1[5]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  FUN_14539fb20(param_1);
  return;
}



// FUNCTION 1450dfeb0 FUN_1450dfeb0 body=54 status=ok
// SIG undefined FUN_1450dfeb0(void)

int FUN_1450dfeb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x79) = 0;
  lVar1 = FUN_144d4fba0(param_3,param_4,param_5);
  *(longlong *)(param_1 + 0x20) = lVar1;
  return 2 - (uint)(lVar1 != 0);
}



// FUNCTION 1450dfef0 FUN_1450dfef0 body=53 status=ok
// SIG undefined FUN_1450dfef0(void)

int FUN_1450dfef0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x79) = 0;
  lVar1 = FUN_144d4fc90(param_3,param_4,param_5);
  *(longlong *)(param_1 + 0x20) = lVar1;
  return 2 - (uint)(lVar1 != 0);
}



// FUNCTION 1450dff30 FUN_1450dff30 body=100 status=ok
// SIG undefined FUN_1450dff30(void)

int FUN_1450dff30(longlong *param_1)

{
  int iVar1;
  
  if ((param_1[4] != 0) && ((char)param_1[0xf] == '\0')) {
    iVar1 = FUN_144d4fd50(param_1[4],param_1[5]);
    if (iVar1 == 1) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    if (param_1[4] != 0) {
      FUN_144d4fd10();
      param_1[4] = 0;
    }
    return iVar1;
  }
  return 1;
}



// FUNCTION 1450e0010 FUN_1450e0010 body=52 status=ok
// SIG undefined FUN_1450e0010(void)

undefined8 FUN_1450e0010(undefined8 param_1,ulonglong param_2)

{
  FUN_1450dfe20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1450e0050 FUN_1450e0050 body=171 status=ok
// SIG undefined FUN_1450e0050(void)

undefined8 * FUN_1450e0050(undefined8 *param_1)

{
  FUN_14539fb00();
  *param_1 = &PTR_FUN_149c284f8;
  param_1[4] = 0;
  param_1[5] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_149c28560;
  param_1[0x10] = &PTR_LAB_149c285c8;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x32;
  *(undefined4 *)((longlong)param_1 + 0x77) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7b) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x76) = 0;
  return param_1;
}



// FUNCTION 1450e0100 FUN_1450e0100 body=75 status=ok
// SIG undefined FUN_1450e0100(void)

void FUN_1450e0100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c28560;
  param_1[0x10] = &PTR_LAB_149c285c8;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    FUN_14539fcd0(param_1[0xc]);
  }
  param_1[0x10] = &PTR_FUN_149c283a0;
  FUN_1450dfe20(param_1);
  return;
}



// FUNCTION 1450e0150 FUN_1450e0150 body=131 status=ok
// SIG undefined FUN_1450e0150(void)

undefined4 FUN_1450e0150(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  
  *(longlong *)(param_1 + 0x60) = param_2;
  if (*param_3 < 0) {
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    return 0x1f;
  }
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x428) + 0x10))();
  if (((uVar1 != 0) && (uVar1 <= *(uint *)(param_2 + 0x430))) &&
     (*(uint *)(param_2 + 0x430) % uVar1 == 0)) {
    *(uint *)(param_1 + 0x70) = uVar1;
    return 1;
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return 2;
}



// FUNCTION 1450e0220 FUN_1450e0220 body=144 status=ok
// SIG undefined FUN_1450e0220(void)

undefined8 FUN_1450e0220(longlong param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(void **)(param_1 + -0x18) != (void *)0x0) {
    AK::MemoryMgr::Free(7,*(void **)(param_1 + -0x18));
  }
  if (param_2 != 0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (*(short *)(param_2 + lVar2 * 2) != 0);
    lVar3 = lVar3 + 2;
    pvVar1 = AK::MemoryMgr::Malloc(7,lVar3 * 2);
    *(void **)(param_1 + -0x18) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x34;
    }
    FUN_144d4f820(pvVar1,param_2,lVar3);
  }
  return 1;
}



// FUNCTION 1450e02c0 FUN_1450e02c0 body=65 status=ok
// SIG undefined FUN_1450e02c0(void)

void FUN_1450e02c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_1450e05d0(param_1 + -0x80,0,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1450e0310 FUN_1450e0310 body=65 status=ok
// SIG undefined FUN_1450e0310(void)

void FUN_1450e0310(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_1450e05d0(param_1 + -0x80,1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1450e0370 FUN_1450e0370 body=198 status=ok
// SIG undefined FUN_1450e0370(void)

undefined8 FUN_1450e0370(longlong param_1,longlong param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  if (*(int *)(param_1 + 0x38) == 2) {
    return 2;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      param_2 = param_2 + *(longlong *)(param_1 + 8);
    }
    else {
      if (param_3 != 2) {
        return 0x1f;
      }
      param_2 = param_2 + **(longlong **)(param_1 + -0x58);
    }
  }
  if (-1 < param_2) {
    lVar1 = param_2 % (longlong)(ulonglong)*(uint *)(param_1 + -0x10);
    lVar2 = param_2 - lVar1;
    if (lVar1 == 0) {
      lVar2 = param_2;
    }
    if (param_4 != (longlong *)0x0) {
      if (param_3 == 0) {
        *param_4 = lVar2;
      }
      else if (param_3 == 1) {
        *param_4 = lVar2 - *(longlong *)(param_1 + 8);
      }
      else {
        if (param_3 != 2) {
          return 2;
        }
        *param_4 = lVar2 - **(longlong **)(param_1 + -0x58);
      }
    }
    *(longlong *)(param_1 + 8) = lVar2;
    *(bool *)(param_1 + -9) = **(longlong **)(param_1 + -0x58) <= lVar2;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1450e0460 FUN_1450e0460 body=111 status=ok
// SIG undefined FUN_1450e0460(void)

void FUN_1450e0460(longlong *param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar1 == 2) {
    FUN_14539fb50(param_1 + -0x10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
    FUN_14539fc70(param_1[-4],param_1 + -0x10);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
  }
                    /* WARNING: Could not recover jumptable at 0x0001450e04cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}



// FUNCTION 1450e0530 FUN_1450e0530 body=147 status=ok
// SIG undefined FUN_1450e0530(void)

void FUN_1450e0530(longlong *param_1)

{
  char cVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  *(undefined4 *)(param_1 + 0x17) = 4;
  if ((char)param_1[0xf] != '\0') {
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 != '\0') {
      if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
        FUN_14539fc90(param_1[0xc]);
      }
      goto LAB_1450e0590;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
    FUN_14539fcd0(param_1[0xc]);
  }
LAB_1450e0590:
  if (((char)param_1[2] != '\0') && ((*(uint *)(param_1 + 0x17) & 0xfffffffd) != 0)) {
    FUN_14539fc80(param_1[0xc],param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001450e05bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return;
}



// FUNCTION 1450e05d0 FUN_1450e05d0 body=693 status=ok
// SIG undefined FUN_1450e05d0(void)

char FUN_1450e05d0(longlong *param_1,char param_2,longlong param_3,uint param_4,char param_5,
                  byte param_6,float param_7,uint *param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char local_78 [112];
  
  *param_8 = 0;
  *(float *)((longlong)param_1 + 0xb4) = param_7;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(char *)((longlong)param_1 + 0x76) = param_2;
  *(byte *)((longlong)param_1 + 0x74) = param_6;
  param_1[0x12] = param_3;
  *(uint *)(param_1 + 0x14) = param_4;
  if (param_3 == 0) {
    pcVar7 = "%s, invalid buffer";
  }
  else {
    if ((param_6 < 0x65) && (0.0 <= param_7)) {
      if (((int)param_1[0x17] - 2U & 0xfffffffd) == 0) {
        return '\x02';
      }
      if (param_2 == '\0') {
        if (param_4 % *(uint *)(param_1 + 0xe) != 0) {
          return '\x02';
        }
        if (*(char *)((longlong)param_1 + 0x79) != '\0') {
          uVar1 = param_1[0x11];
          uVar2 = *(ulonglong *)param_1[5];
          uVar6 = (ulonglong)param_4;
          if ((uVar2 < uVar1 + param_4) && (uVar6 = 0, uVar1 < uVar2)) {
            uVar6 = (ulonglong)(uint)((int)uVar2 - (int)uVar1);
          }
          param_4 = (uint)uVar6;
          if ((*(char *)((longlong)param_1 + 0x7b) != '\0') &&
             (uVar5 = (**(code **)(*param_1 + 0x40))(param_1), (ulonglong)uVar5 < uVar6 + uVar1)) {
            param_4 = uVar5 - (int)uVar1;
          }
        }
      }
      if (param_4 != 0) {
        QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0xb));
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
        if (param_5 == '\0') {
          *(undefined4 *)(param_1 + 0x17) = 2;
          if (((char)param_1[0xf] == '\0') ||
             (cVar4 = (**(code **)(*param_1 + 8))(param_1), cVar4 == '\0')) {
            *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
          }
          if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
            *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
            FUN_14539fc90(param_1[0xc]);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
          *param_8 = param_4;
          return '\x01';
        }
        FUN_14539fb50(param_1);
        *(undefined4 *)(param_1 + 0x17) = 2;
        if (((char)param_1[0xf] == '\0') ||
           (cVar4 = (**(code **)(*param_1 + 8))(param_1), cVar4 == '\0')) {
          *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
        }
        if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
          *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
          FUN_14539fc90(param_1[0xc]);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
        FUN_14539fc70(param_1[0xc],param_1);
        lVar3 = param_1[0x17];
        *param_8 = param_4;
        return ((int)lVar3 != 1) + '\x01';
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
      *(undefined4 *)(param_1 + 0x17) = 1;
      if (((char)param_1[0xf] == '\0') ||
         (cVar4 = (**(code **)(*param_1 + 8))(param_1), cVar4 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
        if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
          FUN_14539fcd0(param_1[0xc]);
        }
      }
      else if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
        FUN_14539fc90(param_1[0xc]);
      }
      *param_8 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
      return '\x01';
    }
    pcVar7 = "%s, Invalid heuristics";
  }
  snprintf(local_78,100,pcVar7,"ExecuteOp");
  AK::Monitor::PostString(local_78,2,0,0xffffffffffffffff,0,false);
  return '\x1f';
}



// FUNCTION 1450e0890 FUN_1450e0890 body=115 status=ok
// SIG undefined FUN_1450e0890(void)

void FUN_1450e0890(longlong *param_1,int param_2)

{
  char cVar1;
  
  *(int *)(param_1 + 0x17) = param_2;
  if (((char)param_1[0xf] == '\0') || (cVar1 = (**(code **)(*param_1 + 8))(), cVar1 == '\0')) {
    cVar1 = *(char *)((longlong)param_1 + 0x7a);
    if (param_2 != 2) {
      *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
      if (cVar1 == '\0') {
        return;
      }
      *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
      FUN_14539fcd0(param_1[0xc]);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  }
  else {
    cVar1 = *(char *)((longlong)param_1 + 0x7a);
  }
  if (cVar1 != '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
  FUN_14539fc90(param_1[0xc]);
  return;
}



// FUNCTION 1450e0910 FUN_1450e0910 body=240 status=ok
// SIG undefined FUN_1450e0910(void)

void FUN_1450e0910(longlong param_1,void *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  if (((param_3 != '\0') && (*(char *)(param_1 + 0x78) == '\0')) && (*(int *)(param_1 + 0xb8) != 4))
  {
    *(undefined1 *)(param_1 + 0x77) = 0;
    *(undefined1 *)(param_1 + 0xbc) = 1;
    uVar5 = *(int *)(*(longlong *)((longlong)param_2 + 8) + 0x18) -
            *(int *)((longlong)param_2 + 0x10);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x430);
    if (uVar1 < uVar5) {
      *(undefined1 *)(param_1 + 0xbc) = 0;
      uVar5 = uVar1;
    }
    if ((*(char *)(param_1 + 0x76) == '\0') &&
       ((**(longlong **)(param_1 + 0x28) - **(longlong **)((longlong)param_2 + 8)) -
        (ulonglong)*(uint *)((longlong)param_2 + 0x10) <= (ulonglong)uVar5)) {
      *(undefined1 *)(param_1 + 0x77) = 1;
      *(undefined1 *)(param_1 + 0xbc) = 1;
      *(int *)(param_1 + 0xa0) =
           *(int *)(param_1 + 0xa0) +
           (((int)**(longlong **)(param_1 + 0x28) - (*(int **)((longlong)param_2 + 8))[6]) -
           **(int **)((longlong)param_2 + 8));
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
  lVar3 = *(longlong *)((longlong)param_2 + 8);
  lVar4 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  if (lVar3 != 0) {
    FUN_1453a18a0(lVar4 + 0xc0,param_1 + 0x88);
  }
  AK::MemoryMgr::Free(7,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001450e09f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
  return;
}



// FUNCTION 1450e0a00 FUN_1450e0a00 body=159 status=ok
// SIG undefined FUN_1450e0a00(void)

void FUN_1450e0a00(longlong *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x17) = 4;
  }
  else {
    if (*(char *)((longlong)param_1 + 0xbc) == '\0') goto LAB_1450e0a76;
    param_1[0x11] = param_1[0x11] + (ulonglong)*(uint *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x17) = 1;
  }
  if ((char)param_1[0xf] != '\0') {
    cVar1 = (**(code **)(*param_1 + 8))();
    if (cVar1 != '\0') {
      if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
        FUN_14539fc90(param_1[0xc]);
      }
      goto LAB_1450e0a76;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
    FUN_14539fcd0(param_1[0xc]);
  }
LAB_1450e0a76:
  if (((char)param_1[2] != '\0') && ((*(uint *)(param_1 + 0x17) & 0xfffffffd) != 0)) {
    FUN_14539fc80(param_1[0xc],param_1);
    return;
  }
  return;
}



// FUNCTION 1450e0aa0 FUN_1450e0aa0 body=109 status=ok
// SIG undefined FUN_1450e0aa0(void)

undefined8 * FUN_1450e0aa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28560;
  param_1[0x10] = &PTR_LAB_149c285c8;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    FUN_14539fcd0(param_1[0xc]);
  }
  param_1[0x10] = &PTR_FUN_149c283a0;
  FUN_1450dfe20(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1450e0b10 FUN_1450e0b10 body=170 status=ok
// SIG undefined FUN_1450e0b10(void)

undefined8 * FUN_1450e0b10(undefined8 *param_1)

{
  FUN_14539fb00();
  *param_1 = &PTR_FUN_149c284f8;
  param_1[4] = 0;
  param_1[5] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_149c28638;
  param_1[0x10] = &PTR_LAB_149c286c8;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x132;
  *(undefined4 *)((longlong)param_1 + 0x77) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x76) = 0;
  return param_1;
}



// FUNCTION 1450e0bc0 FUN_1450e0bc0 body=75 status=ok
// SIG undefined FUN_1450e0bc0(void)

void FUN_1450e0bc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c28638;
  param_1[0x10] = &PTR_LAB_149c286c8;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    FUN_14539fd60(param_1[0xc]);
  }
  param_1[0x10] = &PTR_FUN_149c28410;
  FUN_1450dfe20(param_1);
  return;
}



// FUNCTION 1450e0c10 FUN_1450e0c10 body=307 status=ok
// SIG undefined FUN_1450e0c10(void)

undefined8
FUN_1450e0c10(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,float *param_5,
             undefined8 param_6,uint param_7)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  float fVar4;
  
  *(longlong *)(param_1 + 0x60) = param_2;
  if (*param_3 < 0) {
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    return 0x1f;
  }
  *(undefined4 *)(param_1 + 0x90) = param_4;
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x428) + 0x10))();
  if (((uVar1 == 0) || (param_7 < uVar1)) || (param_7 % uVar1 != 0)) {
    uVar2 = 2;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  else {
    *(uint *)(param_1 + 0x70) = uVar1;
    *(uint *)(param_1 + 0xb0) = uVar1;
    fVar4 = *param_5;
    if (fVar4 <= 1.0) {
      fVar4 = 1.0;
    }
    *(float *)(param_1 + 0x94) = fVar4;
    *(uint *)(param_1 + 0x9c) = (int)param_5[1] - (uint)param_5[1] % uVar1;
    fVar4 = param_5[2];
    if (*param_3 < (longlong)(ulonglong)(uint)fVar4) {
      fVar4 = (float)*param_3;
    }
    *(float *)(param_1 + 0xa0) = fVar4;
    cVar3 = '\x01';
    if (*(char *)(param_5 + 3) != '\0') {
      cVar3 = *(char *)(param_5 + 3);
    }
    *(char *)(param_1 + 0xd1) = cVar3;
    *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)((longlong)param_5 + 0xd);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (*param_3 == 0) {
      *(undefined1 *)(param_1 + 0x77) = 1;
      *(undefined1 *)(param_1 + 0x7c) = 0;
    }
    uVar2 = FUN_1450e2150(param_1,param_6,param_7);
    if ((int)uVar2 != 1) {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)(param_1 + 0x78) = 1;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1450e0d50 FUN_1450e0d50 body=181 status=ok
// SIG undefined FUN_1450e0d50(void)

void FUN_1450e0d50(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  puVar5 = *(undefined8 **)(param_1 + 0x48);
  *(undefined1 *)(param_1 + -8) = 1;
  *(undefined1 *)(param_1 + -4) = 0;
  cVar7 = *(char *)(param_1 + 0x50);
  if (cVar7 != '\0') {
    iVar8 = *(int *)(param_1 + 0x28);
    do {
      uVar2 = *(uint *)(puVar5 + 2);
      uVar3 = *(uint *)(param_1 + 0x20);
      lVar4 = *(longlong *)puVar5[1];
      puVar1 = (uint *)((longlong *)puVar5[1] + 3);
      if ((lVar4 + (ulonglong)uVar2 < (ulonglong)uVar3) &&
         ((ulonglong)uVar3 < (ulonglong)*puVar1 + lVar4)) {
        iVar6 = (uVar3 - uVar2) - (int)lVar4;
      }
      else {
        iVar6 = *puVar1 - uVar2;
      }
      iVar8 = iVar8 + iVar6;
      cVar7 = cVar7 + -1;
      *(int *)(param_1 + 0x28) = iVar8;
      *(char *)(param_1 + 0x50) = cVar7;
      puVar5 = (undefined8 *)*puVar5;
    } while (cVar7 != '\0');
  }
  FUN_1450e1e60(param_1 + -0x80);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001450e0dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return;
}



// FUNCTION 1450e0e70 FUN_1450e0e70 body=729 status=ok
// SIG undefined FUN_1450e0e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1450e0e70(longlong param_1,float *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char cVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  float fVar17;
  
  if (100 < *(byte *)((longlong)param_2 + 0xd)) {
    return 0x1f;
  }
  *(byte *)(param_1 + -0xc) = *(byte *)((longlong)param_2 + 0xd);
  fVar17 = *param_2;
  uVar10 = **(ulonglong **)(param_1 + -0x58);
  if (fVar17 <= 1.0) {
    fVar17 = 1.0;
  }
  if (((longlong)(ulonglong)(uint)param_2[2] <= (longlong)uVar10) ||
     (*(char *)(param_1 + -7) == '\0')) {
    uVar10 = (ulonglong)(uint)param_2[2];
  }
  iVar7 = (int)uVar10;
  if ((*(int *)(param_1 + 0x20) == iVar7) && (*(float *)(param_1 + 0x1c) == param_2[1])) {
    cVar12 = '\x01';
    if (*(char *)(param_2 + 3) != '\0') {
      cVar12 = *(char *)(param_2 + 3);
    }
    if ((fVar17 != *(float *)(param_1 + 0x14)) || (*(char *)(param_1 + 0x51) != cVar12)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
      *(float *)(param_1 + 0x14) = fVar17;
      *(char *)(param_1 + 0x51) = cVar12;
      FUN_1450e1c30(param_1 + -0x80);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    *(float *)(param_1 + 0x14) = fVar17;
    cVar12 = '\x01';
    if (*(char *)(param_2 + 3) != '\0') {
      cVar12 = *(char *)(param_2 + 3);
    }
    *(char *)(param_1 + 0x51) = cVar12;
    uVar15 = (int)param_2[1] - (uint)param_2[1] % *(uint *)(param_1 + -0x10);
    *(uint *)(param_1 + 0x1c) = uVar15;
    (**(code **)(*(longlong *)(param_1 + -0x80) + 0x88))
              ((longlong *)(param_1 + -0x80),uVar10 & 0xffffffff);
    puVar16 = (undefined8 *)0x0;
    uVar11 = *(ulonglong *)(param_1 + 8);
    puVar8 = *(undefined8 **)(param_1 + 0x48);
    puVar13 = puVar16;
    if (*(byte *)(param_1 + 0x50) != 0) {
      uVar9 = (ulonglong)*(byte *)(param_1 + 0x50);
      do {
        puVar13 = puVar8;
        puVar8 = (undefined8 *)*puVar13;
        uVar11 = (ulonglong)*(uint *)((longlong *)puVar13[1] + 3) + *(longlong *)puVar13[1];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar14 = puVar16;
    if ((iVar7 != 0) && ((uVar10 & 0xffffffff) <= uVar11)) {
      uVar11 = (ulonglong)uVar15;
    }
    while (puVar6 = puVar8, puVar6 != (undefined8 *)0x0) {
      lVar3 = *(longlong *)puVar6[1];
      if ((ulonglong)*(uint *)(puVar6 + 2) + lVar3 == uVar11) {
        uVar11 = (ulonglong)*(uint *)((longlong *)puVar6[1] + 3) + lVar3;
        if ((iVar7 != 0) && ((uVar10 & 0xffffffff) <= uVar11)) {
          uVar11 = (ulonglong)uVar15;
        }
        puVar8 = (undefined8 *)*puVar6;
        puVar13 = puVar6;
      }
      else {
        puVar8 = (undefined8 *)*puVar6;
        if (puVar6 == *(undefined8 **)(param_1 + 0x48)) {
          *(undefined8 **)(param_1 + 0x48) = puVar8;
        }
        else {
          *puVar13 = puVar8;
        }
        if (puVar6 == *(undefined8 **)(param_1 + 0x40)) {
          *(undefined8 **)(param_1 + 0x40) = puVar13;
        }
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        if (puVar14 == (undefined8 *)0x0) {
          puVar14 = puVar16;
        }
        *puVar6 = puVar14;
        puVar14 = puVar6;
      }
    }
    if (puVar14 != (undefined8 *)0x0) {
      lVar3 = *(longlong *)(param_1 + -0x20);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x18));
      puVar8 = puVar14;
      do {
        puVar13 = (undefined8 *)*puVar8;
        puVar16 = puVar13;
        if (puVar8 == puVar14) {
          puVar14 = puVar13;
          puVar16 = _DAT_00000000;
        }
        _DAT_00000000 = puVar16;
        uVar15 = *(uint *)(puVar8 + 2);
        uVar2 = *(uint *)(param_1 + 0x20);
        lVar4 = *(longlong *)puVar8[1];
        puVar1 = (uint *)((longlong *)puVar8[1] + 3);
        if ((lVar4 + (ulonglong)uVar15 < (ulonglong)uVar2) &&
           ((ulonglong)uVar2 < (ulonglong)*puVar1 + lVar4)) {
          iVar7 = (uVar2 - uVar15) - (int)lVar4;
        }
        else {
          iVar7 = *puVar1 - uVar15;
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - iVar7;
        lVar4 = puVar8[1];
        lVar5 = *(longlong *)(param_1 + -0x20);
        puVar8[1] = 0;
        if (lVar4 != 0) {
          FUN_1453a0ee0(lVar5 + 0xc0);
        }
        AK::MemoryMgr::Free(7,puVar8);
        puVar8 = puVar13;
      } while (puVar13 != (undefined8 *)0x0);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x18));
    }
    (**(code **)(*(longlong *)(param_1 + -0x80) + 0x78))(param_1 + -0x80,uVar11);
    FUN_1450e1c30(param_1 + -0x80);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  }
  return 1;
}



// FUNCTION 1450e1150 FUN_1450e1150 body=239 status=ok
// SIG undefined FUN_1450e1150(void)

undefined8 FUN_1450e1150(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x2c);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
  uVar3 = *(uint *)(param_1 + 6);
  uVar5 = *(uint *)(param_1[-4] + 0x430);
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  uVar5 = uVar5 - uVar5 % uVar3;
  *(uint *)((longlong)param_1 + 0x24) = uVar5;
  if ((param_2 != 0) && (uVar3 < param_2)) {
    uVar2 = (param_2 - 1) + uVar3;
    uVar3 = uVar2 - uVar2 % uVar3;
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    if (uVar5 < uVar3) {
      uVar4 = 2;
      *(undefined1 *)((longlong)param_1 + 0x53) = 1;
      (**(code **)(*param_1 + 0x68))(param_1);
      FUN_1450e1c30(param_1 + -0x10);
      if ((char)param_1[-0xe] != '\0') {
        FUN_14539fc80(param_1[-4],param_1 + -0x10);
      }
      goto LAB_1450e1218;
    }
  }
  uVar4 = 1;
  if (uVar1 < uVar3) {
    (**(code **)(param_1[-0x10] + 0x80))(param_1 + -0x10,param_2);
    FUN_1450e1c30(param_1 + -0x10);
  }
LAB_1450e1218:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
  return uVar4;
}



// FUNCTION 1450e1250 FUN_1450e1250 body=144 status=ok
// SIG undefined FUN_1450e1250(void)

undefined8 FUN_1450e1250(longlong param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(void **)(param_1 + -0x18) != (void *)0x0) {
    AK::MemoryMgr::Free(7,*(void **)(param_1 + -0x18));
  }
  if (param_2 != 0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (*(short *)(param_2 + lVar2 * 2) != 0);
    lVar3 = lVar3 + 2;
    pvVar1 = AK::MemoryMgr::Malloc(7,lVar3 * 2);
    *(void **)(param_1 + -0x18) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x34;
    }
    FUN_144d4f820(pvVar1,param_2,lVar3);
  }
  return 1;
}



// FUNCTION 1450e12f0 FUN_1450e12f0 body=144 status=ok
// SIG undefined FUN_1450e12f0(void)

char FUN_1450e12f0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0x52) == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    *(undefined1 *)(param_1 + 0x52) = 1;
    if ((*(char *)(param_1 + -9) == '\0') && (*(char *)(param_1 + -8) == '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + -4) = uVar2;
    FUN_1450e1c30(param_1 + -0x80);
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(*(longlong *)(param_1 + -0x20) + 0x70);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    lVar1 = *(longlong *)(param_1 + -0x20);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    FUN_14539fda0(*(undefined8 *)(param_1 + -0x20));
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  }
  return (*(char *)(param_1 + 0x53) != '\0') + '\x01';
}



// FUNCTION 1450e1380 FUN_1450e1380 body=66 status=ok
// SIG undefined FUN_1450e1380(void)

undefined8 FUN_1450e1380(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
  FUN_1450e1e60(param_1 + -0x80);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return 1;
}



// FUNCTION 1450e13d0 FUN_1450e13d0 body=115 status=ok
// SIG undefined FUN_1450e13d0(void)

ulonglong FUN_1450e13d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) {
    uVar2 = *(ulonglong *)(param_1 + 8);
  }
  else {
    uVar2 = (ulonglong)*(uint *)(lVar1 + 0x10) + **(longlong **)(lVar1 + 8);
  }
  if (param_2 != 0) {
    *(bool *)param_2 = **(ulonglong **)(param_1 + -0x58) <= uVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return uVar2;
}



// FUNCTION 1450e1450 FUN_1450e1450 body=331 status=ok
// SIG undefined FUN_1450e1450(void)

undefined8 FUN_1450e1450(longlong *param_1,longlong param_2,int param_3,longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar2 = (**(code **)(*param_1 + 0x70))(param_1,0);
      param_2 = param_2 + lVar2;
    }
    else {
      if (param_3 != 2) {
        return 0x1f;
      }
      param_2 = param_2 + *(longlong *)param_1[-0xb];
    }
  }
  if (param_2 < 0) {
    return 0x1f;
  }
  lVar2 = param_2 - param_2 % (longlong)(ulonglong)*(uint *)(param_1 + -2);
  if (param_2 % (longlong)(ulonglong)*(uint *)(param_1 + -2) == 0) {
    lVar2 = param_2;
  }
  if (param_4 != (longlong *)0x0) {
    if (param_3 == 0) {
      *param_4 = lVar2;
    }
    else if (param_3 == 1) {
      lVar3 = (**(code **)(*param_1 + 0x70))(param_1,0);
      *param_4 = lVar2 - lVar3;
    }
    else if (param_3 == 2) {
      *param_4 = lVar2 - *(longlong *)param_1[-0xb];
    }
  }
  plVar6 = param_1 + -0x10;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
  bVar1 = *(byte *)(param_1 + 10);
  uVar5 = (ulonglong)bVar1;
  param_1[1] = lVar2;
  if ((uint)bVar1 < *(uint *)(param_1 + 7)) {
    plVar4 = (longlong *)param_1[9];
    if (bVar1 != 0) {
      do {
        plVar4 = (longlong *)*plVar4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if ((ulonglong)*(uint *)(plVar4 + 2) + *(longlong *)plVar4[1] != lVar2) {
      FUN_1450e1e60();
      goto LAB_1450e156a;
    }
  }
  else {
    (**(code **)(*plVar6 + 0x78))(plVar6,lVar2);
  }
  FUN_1450e1c30(plVar6);
LAB_1450e156a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
  return 1;
}



// FUNCTION 1450e15a0 FUN_1450e15a0 body=374 status=ok
// SIG undefined FUN_1450e15a0(void)

undefined8 FUN_1450e15a0(longlong param_1,longlong *param_2,undefined4 *param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  lVar2 = FUN_1450e1d30(param_1 + -0x80,param_3);
  *param_2 = lVar2;
  if ((lVar2 != 0) || (*(char *)(param_1 + 0x53) != '\0')) goto LAB_1450e16a0;
  if (*(char *)(param_1 + -7) != '\0') {
    lVar2 = FUN_1450e1d30(param_1 + -0x80,param_3);
    *param_2 = lVar2;
    if (lVar2 != 0) goto LAB_1450e16a0;
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x20) + 0x50))
                      (*(longlong **)(param_1 + -0x20),param_1 + -0x80);
    if (cVar1 != '\0') {
      lVar2 = FUN_1450e1d30(param_1 + -0x80,param_3);
      *param_2 = lVar2;
    }
    if (*param_2 != 0) goto LAB_1450e16a0;
  }
  if (param_4 != '\0') {
    do {
      if ((*(char *)(param_1 + 0x53) != '\0') ||
         ((*(char *)(param_1 + -6) == '\0' && (*(int *)(param_1 + 0x28) == 0)))) break;
      FUN_14539fb50(param_1 + -0x80);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
      FUN_14539fc70(*(undefined8 *)(param_1 + -0x20),param_1 + -0x80);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
      lVar2 = FUN_1450e1d30(param_1 + -0x80,param_3);
      *param_2 = lVar2;
    } while (lVar2 == 0);
  }
LAB_1450e16a0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  if (*(char *)(param_1 + 0x53) == '\0') {
    if (*param_2 == 0) {
      if ((*(char *)(param_1 + -9) == '\0') ||
         (*(ulonglong *)(param_1 + 8) < **(ulonglong **)(param_1 + -0x58))) {
        uVar3 = 0x2e;
      }
      else {
        uVar3 = 0x11;
      }
    }
    else if ((*(char *)(param_1 + -9) == '\0') ||
            (uVar3 = 0x11, *(ulonglong *)(param_1 + 8) < **(ulonglong **)(param_1 + -0x58))) {
      uVar3 = 0x2d;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}



// FUNCTION 1450e1720 FUN_1450e1720 body=209 status=ok
// SIG undefined FUN_1450e1720(void)

undefined8 FUN_1450e1720(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar6 = 2;
  }
  else {
    lVar1 = *(longlong *)(param_1 + -0x20);
    pvVar2 = *(void **)(param_1 + 0x48);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      lVar5 = *plVar3;
      if (*plVar3 == 0) {
        *(undefined8 *)(param_1 + 0x40) = 0;
        lVar5 = 0;
      }
      *(longlong *)(param_1 + 0x48) = lVar5;
      *plVar3 = 0;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    }
    lVar5 = *(longlong *)((longlong)pvVar2 + 8);
    lVar4 = *(longlong *)(param_1 + -0x20);
    *(undefined8 *)((longlong)pvVar2 + 8) = 0;
    if (lVar5 != 0) {
      FUN_1453a0ee0(lVar4 + 0xc0);
    }
    AK::MemoryMgr::Free(7,pvVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    *(char *)(param_1 + 0x50) = *(char *)(param_1 + 0x50) + -1;
    FUN_1450e1c30(param_1 + -0x80);
    uVar6 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return uVar6;
}



// FUNCTION 1450e1800 FUN_1450e1800 body=237 status=ok
// SIG undefined FUN_1450e1800(void)

undefined4 FUN_1450e1800(longlong param_1,uint *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x53) != '\0') {
    return 2;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  uVar4 = 0x2e;
  if (*(char *)(param_1 + -7) != '\0') {
    do {
      *param_2 = 0;
      uVar4 = 0x2e;
      uVar3 = (ulonglong)*(byte *)(param_1 + 0x50);
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      if (*(byte *)(param_1 + 0x50) != 0) {
        do {
          puVar2 = (undefined8 *)*puVar2;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      if (puVar2 != (undefined8 *)0x0) {
        uVar4 = 0x2d;
        do {
          *param_2 = *param_2 + (*(int *)(puVar2[1] + 0x18) - *(int *)(puVar2 + 2));
          puVar2 = (undefined8 *)*puVar2;
        } while (puVar2 != (undefined8 *)0x0);
      }
      if ((*(char *)(param_1 + -6) == '\0') && (*(uint *)(param_1 + 0x28) <= *param_2))
      goto LAB_1450e18bd;
      cVar1 = (**(code **)(**(longlong **)(param_1 + -0x20) + 0x50))
                        (*(longlong **)(param_1 + -0x20),param_1 + -0x80);
    } while (cVar1 != '\0');
    if (*(char *)(*(longlong *)(param_1 + -0x20) + 0x68) != '\0') {
LAB_1450e18bd:
      uVar4 = 0x11;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return uVar4;
}



// FUNCTION 1450e1950 FUN_1450e1950 body=90 status=ok
// SIG undefined FUN_1450e1950(void)

undefined4 FUN_1450e1950(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  *(undefined1 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  FUN_1450e1c30(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return uVar1;
}



// FUNCTION 1450e19f0 FUN_1450e19f0 body=90 status=ok
// SIG undefined FUN_1450e19f0(void)

void FUN_1450e19f0(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0xd3) = 1;
  (**(code **)(*(longlong *)(param_1 + 0x80) + 0x68))();
  FUN_1450e1c30(param_1);
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_14539fc80(*(undefined8 *)(param_1 + 0x60),param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001450e1a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1450e1a50 FUN_1450e1a50 body=95 status=ok
// SIG undefined FUN_1450e1a50(void)

void FUN_1450e1a50(longlong param_1)

{
  undefined1 local_18 [8];
  undefined4 local_10;
  
  *(undefined1 *)(param_1 + 0x79) = 1;
  if (**(longlong **)(param_1 + 0x28) < (longlong)(ulonglong)*(uint *)(param_1 + 0xa0)) {
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x20))(param_1 + 0x80,local_18);
    local_10 = **(undefined4 **)(param_1 + 0x28);
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x28))(param_1 + 0x80,local_18);
  }
  return;
}



// FUNCTION 1450e1ad0 FUN_1450e1ad0 body=347 status=ok
// SIG undefined FUN_1450e1ad0(void)

longlong * FUN_1450e1ad0(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  
  plVar14 = (longlong *)0x0;
  plVar13 = plVar14;
  if ((param_2 != 0) && (plVar13 = (longlong *)0x0, *(int *)(param_1 + 0xb8) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x60);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
    plVar5 = *(longlong **)(param_1 + 0xc0);
    plVar13 = plVar14;
    while ((plVar5 != (longlong *)0x0 && ((uint)plVar13 < param_2))) {
      plVar6 = *(longlong **)(param_1 + 200);
      plVar13 = (longlong *)
                (ulonglong)((uint)plVar13 + (*(int *)(plVar5[1] + 0x18) - (int)plVar5[2]));
      plVar9 = plVar6;
      plVar10 = plVar6;
      plVar12 = plVar14;
      if (plVar6 == (longlong *)0x0) {
LAB_1450e1b62:
        if (plVar10 != (longlong *)0x0) {
          if (plVar10 == plVar6) {
            *(longlong *)(param_1 + 200) = *plVar10;
          }
          else {
            *plVar12 = *plVar10;
          }
          if (plVar10 == *(longlong **)(param_1 + 0xc0)) {
            *(longlong **)(param_1 + 0xc0) = plVar12;
          }
          *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
        }
      }
      else {
        do {
          plVar10 = plVar9;
          if (plVar10 == plVar5) goto LAB_1450e1b62;
          plVar9 = (longlong *)*plVar10;
          plVar12 = plVar10;
        } while ((longlong *)*plVar10 != (longlong *)0x0);
      }
      uVar2 = *(uint *)(plVar5 + 2);
      uVar3 = *(uint *)(param_1 + 0xa0);
      lVar7 = *(longlong *)plVar5[1];
      puVar1 = (uint *)((longlong *)plVar5[1] + 3);
      if ((lVar7 + (ulonglong)uVar2 < (ulonglong)uVar3) &&
         ((ulonglong)uVar3 < (ulonglong)*puVar1 + lVar7)) {
        iVar11 = (uVar3 - uVar2) - (int)lVar7;
      }
      else {
        iVar11 = *puVar1 - uVar2;
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar11;
      lVar7 = plVar5[1];
      lVar8 = *(longlong *)(param_1 + 0x60);
      plVar5[1] = 0;
      if (lVar7 != 0) {
        FUN_1453a0ee0(lVar8 + 0xc0);
      }
      AK::MemoryMgr::Free(7,plVar5);
      plVar5 = *(longlong **)(param_1 + 0xc0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
  }
  return plVar13;
}



// FUNCTION 1450e1c30 FUN_1450e1c30 body=248 status=ok
// SIG undefined FUN_1450e1c30(void)

void FUN_1450e1c30(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((((int)param_1[0x14] == 0) &&
      (uVar2 = *(ulonglong *)param_1[5], uVar6 = (**(code **)(*param_1 + 0x68))(), uVar2 <= uVar6))
     && (*(char *)((longlong)param_1 + 0x79) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x77) = 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x77) = 0;
    if ((*(char *)((longlong)param_1 + 0xd2) != '\0') && ((char)param_1[0xf] == '\0')) {
      uVar3 = 1;
      goto LAB_1450e1c76;
    }
  }
  uVar3 = 0;
LAB_1450e1c76:
  *(undefined1 *)((longlong)param_1 + 0x7c) = uVar3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  cVar4 = *(char *)((longlong)param_1 + 0x7c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if (((cVar4 == '\0') ||
      (uVar1 = *(uint *)(param_1 + 0x15), uVar5 = (**(code **)(*param_1 + 0x40))(param_1),
      uVar5 <= uVar1)) &&
     (((char)param_1[0xf] == '\0' || (cVar4 = (**(code **)(*param_1 + 8))(param_1), cVar4 == '\0')))
     ) {
    if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
      FUN_14539fd60(param_1[0xc]);
    }
  }
  else if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
    FUN_14539fd10(param_1[0xc]);
    return;
  }
  return;
}



// FUNCTION 1450e1d30 FUN_1450e1d30 body=290 status=ok
// SIG undefined FUN_1450e1d30(void)

longlong FUN_1450e1d30(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  
  bVar2 = *(byte *)(param_1 + 0x1a);
  if (*(uint *)(param_1 + 0x17) <= (uint)bVar2) {
    *param_2 = 0;
    return 0;
  }
  puVar8 = (undefined8 *)param_1[0x19];
  if (bVar2 != 0) {
    uVar6 = (ulonglong)bVar2;
    do {
      puVar8 = (undefined8 *)*puVar8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((ulonglong)*(uint *)(puVar8 + 2) + *(longlong *)puVar8[1] != param_1[0x11]) {
    (**(code **)(*param_1 + 0x88))(param_1,0);
    FUN_1450e1e60(param_1);
    *param_2 = 0;
    return 0;
  }
  *(byte *)(param_1 + 0x1a) = bVar2 + 1;
  param_1[0x11] = (ulonglong)*(uint *)((longlong *)puVar8[1] + 3) + *(longlong *)puVar8[1];
  *param_2 = *(int *)(puVar8[1] + 0x18) - *(int *)(puVar8 + 2);
  uVar3 = *(uint *)(puVar8 + 2);
  uVar4 = *(uint *)(param_1 + 0x14);
  lVar5 = *(longlong *)puVar8[1];
  puVar1 = (uint *)((longlong *)puVar8[1] + 3);
  if ((lVar5 + (ulonglong)uVar3 < (ulonglong)uVar4) &&
     ((ulonglong)uVar4 < (ulonglong)*puVar1 + lVar5)) {
    iVar7 = (uVar4 - uVar3) - (int)lVar5;
  }
  else {
    iVar7 = *puVar1 - uVar3;
  }
  *(int *)(param_1 + 0x15) = (int)param_1[0x15] - iVar7;
  FUN_1450e1c30(param_1);
  return (ulonglong)*(uint *)(puVar8 + 2) + *(longlong *)(puVar8[1] + 8);
}



// FUNCTION 1450e1e60 FUN_1450e1e60 body=338 status=ok
// SIG undefined FUN_1450e1e60(void)

void FUN_1450e1e60(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  (**(code **)(*param_1 + 0x70))();
  bVar2 = *(byte *)(param_1 + 0x1a);
  uVar9 = (ulonglong)bVar2;
  if ((uint)bVar2 < *(uint *)(param_1 + 0x17)) {
    plVar11 = (longlong *)param_1[0x19];
    plVar12 = (longlong *)0x0;
    if (bVar2 != 0) {
      do {
        plVar12 = plVar11;
        plVar11 = (longlong *)*plVar12;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    lVar5 = param_1[0xc];
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
    while (plVar11 != (longlong *)0x0) {
      plVar6 = (longlong *)*plVar11;
      if (plVar11 == (longlong *)param_1[0x19]) {
        param_1[0x19] = (longlong)plVar6;
      }
      else {
        *plVar12 = (longlong)plVar6;
      }
      if (plVar11 == (longlong *)param_1[0x18]) {
        param_1[0x18] = (longlong)plVar12;
      }
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      uVar3 = *(uint *)(plVar11 + 2);
      uVar4 = *(uint *)(param_1 + 0x14);
      lVar7 = *(longlong *)plVar11[1];
      puVar1 = (uint *)((longlong *)plVar11[1] + 3);
      if ((lVar7 + (ulonglong)uVar3 < (ulonglong)uVar4) &&
         ((ulonglong)uVar4 < (ulonglong)*puVar1 + lVar7)) {
        iVar10 = (uVar4 - uVar3) - (int)lVar7;
      }
      else {
        iVar10 = *puVar1 - uVar3;
      }
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] - iVar10;
      lVar7 = plVar11[1];
      lVar8 = param_1[0xc];
      plVar11[1] = 0;
      if (lVar7 != 0) {
        FUN_1453a0ee0(lVar8 + 0xc0);
      }
      AK::MemoryMgr::Free(7,plVar11);
      plVar11 = plVar6;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
  }
  FUN_1450e1c30(param_1);
  return;
}



// FUNCTION 1450e1fc0 FUN_1450e1fc0 body=122 status=ok
// SIG undefined FUN_1450e1fc0(void)

void FUN_1450e1fc0(longlong param_1,void *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_1 + 0xa0);
  uVar3 = *(uint *)((longlong)param_2 + 0x10);
  lVar4 = **(longlong **)((longlong)param_2 + 8);
  puVar1 = (uint *)(*(longlong **)((longlong)param_2 + 8) + 3);
  if ((lVar4 + (ulonglong)uVar3 < (ulonglong)uVar2) &&
     ((ulonglong)uVar2 < (ulonglong)*puVar1 + lVar4)) {
    iVar6 = (uVar2 - uVar3) - (int)lVar4;
  }
  else {
    iVar6 = *puVar1 - uVar3;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar6;
  lVar4 = *(longlong *)((longlong)param_2 + 8);
  lVar5 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  if (lVar4 != 0) {
    FUN_1453a0ee0(lVar5 + 0xc0);
  }
  AK::MemoryMgr::Free(7,param_2);
  return;
}



// FUNCTION 1450e2040 FUN_1450e2040 body=186 status=ok
// SIG undefined FUN_1450e2040(void)

void FUN_1450e2040(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  
  if (((param_3 != '\0') && (*(char *)(param_1 + 0x78) == '\0')) &&
     (*(char *)(param_1 + 0xd3) == '\0')) {
    *param_2 = 0;
    *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffffb | 3;
    if (*(longlong *)(param_1 + 200) == 0) {
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
      *(undefined8 **)(param_1 + 200) = param_2;
      *(undefined8 **)(param_1 + 0xc0) = param_2;
      return;
    }
    **(undefined8 **)(param_1 + 0xc0) = param_2;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    *(undefined8 **)(param_1 + 0xc0) = param_2;
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x60);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  FUN_1450e1fc0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001450e20f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  return;
}



// FUNCTION 1450e2100 FUN_1450e2100 body=68 status=ok
// SIG undefined FUN_1450e2100(void)

void FUN_1450e2100(longlong param_1,int param_2)

{
  if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0xd3) = 1;
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x68))();
  }
  FUN_1450e1c30(param_1);
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_14539fc80(*(undefined8 *)(param_1 + 0x60),param_1);
    return;
  }
  return;
}



// FUNCTION 1450e2150 FUN_1450e2150 body=367 status=ok
// SIG undefined FUN_1450e2150(void)

undefined8 FUN_1450e2150(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (param_2 == (uint *)0x0) {
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0x70);
    *(uint *)(param_1 + 0xa4) = param_3 - param_3 % *(uint *)(param_1 + 0x70);
    return 1;
  }
  uVar1 = param_2[2];
  if (uVar1 != 0) {
    uVar4 = *(uint *)(param_1 + 0x70);
    uVar2 = uVar4;
    if (uVar1 <= uVar4) {
      uVar2 = uVar1;
    }
    uVar8 = (ulonglong)uVar2;
    uVar7 = uVar1;
    if (uVar1 <= uVar4) {
      uVar7 = uVar4;
    }
    uVar6 = (ulonglong)uVar7 % uVar8;
    if ((uint)uVar6 != 0) {
      bVar3 = 0;
      uVar2 = uVar2 | (uint)uVar6;
      while ((uVar2 & 1) == 0) {
        uVar8 = uVar8 >> 1;
        bVar3 = bVar3 + 1;
        uVar6 = uVar6 >> 1;
        uVar2 = (uint)uVar8 | (uint)uVar6;
      }
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1) {
      }
      uVar2 = (uint)uVar8;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1) {
      }
      if (uVar2 != (uint)uVar6) {
        do {
          uVar5 = (uint)uVar6;
          uVar7 = (uint)uVar8;
          uVar2 = uVar5;
          if (uVar5 <= uVar7) {
            uVar2 = uVar7;
            uVar7 = uVar5;
          }
          uVar2 = uVar2 - uVar7 >> 1;
          uVar8 = (ulonglong)uVar2;
          if ((uVar2 & 1) == 0) {
            do {
              uVar8 = uVar8 >> 1;
            } while ((uVar8 & 1) == 0);
          }
          uVar6 = (ulonglong)uVar7;
          uVar2 = (uint)uVar8;
        } while (uVar2 != uVar7);
      }
      uVar8 = (ulonglong)(uVar2 << (bVar3 & 0x1f));
    }
    *(uint *)(param_1 + 0xb0) = (int)(uVar1 / uVar8) * uVar4;
  }
  uVar1 = *(uint *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xac) = uVar1;
  uVar2 = param_3 - param_3 % uVar1;
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar4 = *param_2;
  if (uVar4 == 0) {
    uVar4 = param_2[1];
    if (uVar4 == 0) {
      return 1;
    }
    if (uVar4 <= uVar1) {
      return 1;
    }
    uVar4 = (uVar4 - 1) + uVar1;
    uVar4 = uVar4 - uVar4 % uVar1;
    *(uint *)(param_1 + 0xac) = uVar4;
    if (uVar4 <= uVar2) {
      return 1;
    }
  }
  else if ((uVar4 <= param_3) && (uVar4 % uVar1 == 0)) {
    *(uint *)(param_1 + 0xa4) = uVar4;
    *(uint *)(param_1 + 0xac) = *param_2;
    return 1;
  }
  return 2;
}



// FUNCTION 1450e22c0 FUN_1450e22c0 body=109 status=ok
// SIG undefined FUN_1450e22c0(void)

undefined8 * FUN_1450e22c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c28638;
  param_1[0x10] = &PTR_LAB_149c286c8;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    FUN_14539fd60(param_1[0xc]);
  }
  param_1[0x10] = &PTR_FUN_149c28410;
  FUN_1450dfe20(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1450e2330 FUN_1450e2330 body=50 status=ok
// SIG undefined FUN_1450e2330(void)

undefined8 * FUN_1450e2330(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 3) = 1;
  *param_1 = &PTR_FUN_149c28758;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  param_1[4] = param_2;
  param_1[5] = param_3;
  return param_1;
}



// FUNCTION 1450e2370 FUN_1450e2370 body=39 status=ok
// SIG undefined FUN_1450e2370(void)

void FUN_1450e2370(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(7,param_1);
  }
  return;
}



// FUNCTION 1450e2410 FUN_1450e2410 body=144 status=ok
// SIG undefined FUN_1450e2410(void)

undefined8 FUN_1450e2410(longlong param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    AK::MemoryMgr::Free(7,*(void **)(param_1 + 0x40));
  }
  if (param_2 != 0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (*(short *)(param_2 + lVar2 * 2) != 0);
    lVar3 = lVar3 + 2;
    pvVar1 = AK::MemoryMgr::Malloc(7,lVar3 * 2);
    *(void **)(param_1 + 0x40) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x34;
    }
    FUN_144d4f820(pvVar1,param_2,lVar3);
  }
  return 1;
}



// FUNCTION 1450e2590 FUN_1450e2590 body=95 status=ok
// SIG undefined FUN_1450e2590(void)

undefined8 * FUN_1450e2590(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149c28758;
  if ((void *)param_1[8] != (void *)0x0) {
    AK::MemoryMgr::Free(7,(void *)param_1[8]);
    param_1[8] = 0;
  }
  *param_1 = &PTR_FUN_149c28410;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1450e2620 FUN_1450e2620 body=68 status=ok
// SIG undefined FUN_1450e2620(void)

undefined4 FUN_1450e2620(longlong param_1,void *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1453a0ee0(param_1 + 0xc0);
  }
  AK::MemoryMgr::Free(7,param_2);
  return uVar2;
}



// FUNCTION 1450e2670 FUN_1450e2670 body=33 status=ok
// SIG undefined FUN_1450e2670(void)

undefined8 * FUN_1450e2670(undefined8 *param_1)

{
  FUN_1450deef0();
  *param_1 = &PTR_FUN_149c28828;
  return param_1;
}



// FUNCTION 1450e26b0 FUN_1450e26b0 body=235 status=ok
// SIG undefined FUN_1450e26b0(void)

undefined8 *
FUN_1450e26b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_4 = 0;
  puVar2 = AK::MemoryMgr::Malloc(7,0xd0);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_144d4ff20(param_1,100);
    puVar2 = AK::MemoryMgr::Malloc(7,0xd0);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  FUN_1450e0050(puVar2);
  *puVar2 = &PTR_FUN_149c28888;
  *(undefined1 *)(puVar2 + 0x19) = 0;
  puVar2[0x18] = 0;
  puVar2[0x10] = &PTR_LAB_149c288f0;
  iVar1 = FUN_1450e0150(puVar2,param_1,param_2,param_3);
  if (iVar1 != 1) {
    (**(code **)*puVar2)(puVar2,0);
    AK::MemoryMgr::Free(7,puVar2);
    return (undefined8 *)0x0;
  }
  puVar3 = puVar2 + 0x10;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  *param_4 = (longlong)puVar3;
  return puVar2;
}



// FUNCTION 1450e27a0 FUN_1450e27a0 body=293 status=ok
// SIG undefined FUN_1450e27a0(void)

undefined8 *
FUN_1450e27a0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
             undefined8 param_5,longlong *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_6 = 0;
  puVar2 = AK::MemoryMgr::Malloc(7,0xe8);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_144d4ff20(param_1,*(undefined1 *)(param_4 + 0xd));
    puVar2 = AK::MemoryMgr::Malloc(7,0xe8);
    if (puVar2 == (undefined8 *)0x0) goto LAB_1450e28a1;
  }
  FUN_1450e0b10(puVar2);
  *puVar2 = &PTR_FUN_149c28960;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  puVar2[0x1b] = 0;
  puVar2[0x10] = &PTR_LAB_149c289f0;
  iVar1 = FUN_1450e0c10(puVar2,param_1,param_2,param_3,param_4,param_5,
                        *(undefined4 *)(param_1 + 0x430));
  if (iVar1 == 1) {
    puVar3 = puVar2 + 0x10;
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    *param_6 = (longlong)puVar3;
    return puVar2;
  }
  (**(code **)*puVar2)(puVar2,0);
  AK::MemoryMgr::Free(7,puVar2);
LAB_1450e28a1:
  *param_6 = 0;
  return (undefined8 *)0x0;
}



// FUNCTION 1450e28d0 FUN_1450e28d0 body=59 status=ok
// SIG undefined FUN_1450e28d0(void)

undefined8 * FUN_1450e28d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(7,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(uint *)((longlong)puVar1 + 0x14) = *(uint *)((longlong)puVar1 + 0x14) & 0xfffffffb | 0xb;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1450e2910 FUN_1450e2910 body=47 status=ok
// SIG undefined FUN_1450e2910(void)

void FUN_1450e2910(undefined8 param_1)

{
  longlong lVar1;
  undefined4 local_res10 [6];
  
  lVar1 = FUN_1450df6f0(param_1,local_res10);
  if (lVar1 != 0) {
    FUN_1450e2ac0(param_1,lVar1,local_res10[0]);
  }
  return;
}



// FUNCTION 1450e2940 FUN_1450e2940 body=381 status=ok
// SIG undefined FUN_1450e2940(void)

void FUN_1450e2940(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined1 local_res24;
  ulonglong in_stack_ffffffffffffffa8;
  undefined8 local_48;
  ulonglong local_40 [3];
  
  plVar2 = (longlong *)FUN_1450df6f0(param_1,local_res18);
  while (plVar2 != (longlong *)0x0) {
    iVar1 = FUN_1450dff30(plVar2);
    lVar4 = *plVar2;
    if (iVar1 == 1) {
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
      lVar3 = (**(code **)(lVar4 + 0x20))
                        (plVar2,&local_48,local_40,local_res10,in_stack_ffffffffffffffa8);
      if (lVar3 == 0) {
        iVar1 = 0x35;
        lVar3 = 0;
      }
      else {
        iVar1 = 1;
        if (local_40[0] != 0) {
          local_res24 = *(undefined1 *)((longlong)plVar2 + 0x74);
          lVar4 = **(longlong **)(param_1 + 0x428);
          in_stack_ffffffffffffffa8 = local_40[0];
          if (*(char *)((longlong)plVar2 + 0x76) == '\0') {
            iVar1 = (**(code **)(lVar4 + 0x28))();
          }
          else {
            iVar1 = (**(code **)(lVar4 + 0x30))
                              (*(longlong **)(param_1 + 0x428),local_48,&local_res20,
                               *(undefined8 *)(local_40[0] + 0x10),local_40[0]);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
          lVar4 = *(longlong *)(lVar3 + 8);
          *(undefined8 *)(lVar4 + 0x10) = 0;
          if ((iVar1 != 1) && (*(int *)(lVar4 + 0x20) != -1)) {
            FUN_1453a1690(param_1 + 0xc0);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
        }
      }
      lVar4 = *plVar2;
    }
    else {
      lVar3 = 0;
      iVar1 = 2;
    }
    (**(code **)(lVar4 + 0x28))(plVar2,lVar3,iVar1);
    plVar2 = (longlong *)FUN_1450df6f0(param_1);
  }
  return;
}


