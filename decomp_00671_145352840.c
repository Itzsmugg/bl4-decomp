// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145352840 FUN_145352840 body=158 status=ok
// SIG undefined FUN_145352840(void)

undefined8 FUN_145352840(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *_Dst;
  
  puVar1 = (undefined8 *)*param_1;
  _Dst = puVar1;
  while( true ) {
    if (_Dst == puVar1 + *(uint *)(param_1 + 1)) {
      return 0;
    }
    pvVar2 = (void *)*_Dst;
    if (*(int *)((longlong)pvVar2 + 4) == param_2) break;
    _Dst = _Dst + 1;
  }
  if (_Dst < puVar1 + (*(uint *)(param_1 + 1) - 1)) {
    memmove(_Dst,_Dst + 1,
            (ulonglong)((int)(puVar1 + (*(uint *)(param_1 + 1) - 1)) - (int)_Dst & 0xfffffff8));
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (pvVar2 != (void *)0x0) {
    if (*(void **)((longlong)pvVar2 + 0x18) != (void *)0x0) {
      AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar2 + 0x18));
    }
    *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x20) = 0;
    *(undefined4 *)((longlong)pvVar2 + 0x28) = 1;
    AK::MemoryMgr::Free(2,pvVar2);
  }
  return 1;
}



// FUNCTION 1453528e0 FUN_1453528e0 body=96 status=ok
// SIG undefined FUN_1453528e0(void)

undefined8 FUN_1453528e0(longlong *param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *_Dst;
  
  _Dst = (longlong *)*param_1;
  plVar1 = _Dst + *(uint *)(param_1 + 1);
  while( true ) {
    if (_Dst == plVar1) {
      return 0;
    }
    if (*(int *)(*_Dst + 4) == param_2) break;
    _Dst = _Dst + 1;
  }
  *param_3 = *_Dst;
  plVar1 = (longlong *)(*param_1 + (ulonglong)((int)param_1[1] - 1) * 8);
  if (_Dst < plVar1) {
    memmove(_Dst,_Dst + 1,(ulonglong)((int)plVar1 - (int)_Dst & 0xfffffff8));
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return 1;
}



// FUNCTION 145352940 FUN_145352940 body=131 status=ok
// SIG undefined FUN_145352940(void)

longlong * FUN_145352940(longlong *param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = 0;
  lVar2 = *param_1;
  uVar7 = (ulonglong)uVar1;
  if ((ulonglong)uVar1 != 0) {
    do {
      uVar6 = (int)((longlong)uVar7 >> 1) + uVar4;
      uVar5 = uVar7 - 1;
      uVar3 = uVar6 + 1;
      if (param_3 <= *(uint *)(*(longlong *)(lVar2 + (ulonglong)uVar6 * 8) + 8)) {
        uVar5 = uVar7;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
      uVar7 = (longlong)uVar5 >> 1;
    } while (0 < (longlong)uVar7);
  }
  uVar7 = (ulonglong)uVar4;
  if (lVar2 + (ulonglong)uVar4 * 8 == 0) {
    uVar7 = (ulonglong)uVar1;
  }
  *param_2 = lVar2 + uVar7 * 8;
  return param_2;
}



// FUNCTION 1453529d0 FUN_1453529d0 body=150 status=ok
// SIG undefined FUN_1453529d0(void)

longlong *
FUN_1453529d0(longlong *param_1,longlong *param_2,uint param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  uVar7 = param_4 - lVar1 >> 3;
  uVar3 = param_5 - param_4 >> 3;
  while (0 < (longlong)uVar3) {
    uVar5 = (int)(uVar3 >> 1) + (uint)uVar7;
    uVar6 = uVar5 + 1;
    uVar2 = uVar3 - 1;
    if (param_3 <= *(uint *)(*(longlong *)(lVar1 + (ulonglong)uVar5 * 8) + 8)) {
      uVar6 = (uint)uVar7;
      uVar2 = uVar3;
    }
    uVar7 = (ulonglong)uVar6;
    uVar3 = (longlong)uVar2 >> 1;
  }
  lVar4 = lVar1 + (uVar7 & 0xffffffff) * 8;
  if (lVar4 == 0) {
    lVar4 = lVar1 + (ulonglong)*(uint *)(param_1 + 1) * 8;
  }
  *param_2 = lVar4;
  return param_2;
}



// FUNCTION 145352a70 FUN_145352a70 body=295 status=ok
// SIG undefined FUN_145352a70(void)

undefined8 * FUN_145352a70(undefined8 *param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *_Dst;
  undefined8 *local_res8;
  
  plVar1 = (longlong *)*param_1;
  for (plVar2 = plVar1; plVar2 != plVar1 + *(uint *)(param_1 + 1); plVar2 = plVar2 + 1) {
    _Dst = plVar1;
    if (*(int *)(*plVar2 + 4) == param_2) goto LAB_145352b13;
  }
  puVar3 = AK::MemoryMgr::Malloc(2,0x40);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 5) = 1;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  *(undefined2 *)((longlong)puVar3 + 0xc) = 0x800;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x14) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  goto LAB_145352af4;
  while (_Dst = _Dst + 1, puVar3 = local_res8, _Dst != plVar1 + *(uint *)(param_1 + 1)) {
LAB_145352b13:
    puVar3 = (undefined8 *)*_Dst;
    if (*(int *)((longlong)puVar3 + 4) == param_2) {
      if (_Dst < plVar1 + (*(uint *)(param_1 + 1) - 1)) {
        memmove(_Dst,_Dst + 1,
                (ulonglong)((int)(plVar1 + (*(uint *)(param_1 + 1) - 1)) - (int)_Dst & 0xfffffff8));
      }
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
      break;
    }
  }
LAB_145352af4:
  puVar4 = (undefined8 *)FUN_145352480(param_1,param_3,&local_res8);
  if (puVar4 == (undefined8 *)0x0) {
    if (puVar3 != (undefined8 *)0x0) {
      if ((void *)puVar3[3] != (void *)0x0) {
        AK::MemoryMgr::Free(0,(void *)puVar3[3]);
      }
      puVar3[3] = 0;
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 1;
      AK::MemoryMgr::Free(2,puVar3);
    }
    return (undefined8 *)0x0;
  }
  *puVar4 = puVar3;
  return puVar3;
}



// FUNCTION 145352ba0 FUN_145352ba0 body=548 status=ok
// SIG undefined FUN_145352ba0(void)

undefined8 * FUN_145352ba0(longlong *param_1,uint5 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *_Src;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  
  uVar8 = *(uint *)(param_1 + 1);
  iVar10 = 0;
  if (uVar8 != 0) {
    iVar10 = 0;
    do {
      iVar6 = (uVar8 >> 1) + iVar10;
      lVar7 = (longlong)iVar6 * 0x18;
      uVar4 = *(uint *)(lVar7 + 8 + *param_1);
      uVar9 = *(ulonglong *)(lVar7 + *param_1);
      if (uVar4 == (uint)param_2[1]) {
        *param_3 = 1;
        return (undefined8 *)(*param_1 + lVar7);
      }
      uVar9 = (uVar9 >> 0x20 & 0xff) << 0x20 | uVar9 & 0xffffffff;
      bVar11 = uVar9 < *param_2;
      if (uVar9 == *param_2) {
        bVar11 = uVar4 < (uint)param_2[1];
      }
      uVar4 = uVar8 - 1;
      iVar6 = iVar6 + 1;
      if (!bVar11) {
        uVar4 = uVar8;
        iVar6 = iVar10;
      }
      iVar10 = iVar6;
      uVar8 = uVar4 >> 1;
    } while (uVar8 != 0);
  }
  *param_3 = 0;
  uVar8 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  lVar7 = (longlong)iVar10 * 0x18;
  if (*param_1 + lVar7 == 0) {
    if (uVar4 <= uVar8) {
      iVar10 = (uVar4 >> 1) + uVar4;
      if (uVar4 == 0) {
        iVar10 = 1;
      }
      cVar3 = FUN_1450e5c00(param_1,iVar10);
      if (cVar3 == '\0') {
        return (undefined8 *)0x0;
      }
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar8) {
      return (undefined8 *)0x0;
    }
    puVar5 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *(undefined4 *)puVar5 = 0;
    *(undefined1 *)((longlong)puVar5 + 4) = 8;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
  }
  else {
    lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
    uVar9 = (lVar7 >> 2) - (lVar7 >> 0x3f);
    if (uVar4 <= uVar8) {
      iVar10 = (uVar4 >> 1) + uVar4;
      if (uVar4 == 0) {
        iVar10 = 1;
      }
      cVar3 = FUN_1450e5c00(param_1,iVar10);
      if (cVar3 == '\0') {
        return (undefined8 *)0x0;
      }
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar8) {
      return (undefined8 *)0x0;
    }
    uVar8 = (uint)uVar9;
    lVar7 = (uVar9 & 0xffffffff) * 0x18;
    _Src = (undefined4 *)(*param_1 + lVar7);
    if (uVar8 < *(uint *)(param_1 + 1)) {
      memmove(_Src + 6,_Src,(ulonglong)((*(uint *)(param_1 + 1) - uVar8) * 0x18));
    }
    if (_Src != (undefined4 *)0x0) {
      *_Src = 0;
      *(undefined1 *)(_Src + 1) = 8;
      _Src[2] = 0;
      *(undefined8 *)(_Src + 4) = 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    puVar5 = (undefined8 *)(*param_1 + lVar7);
  }
  if (puVar5 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + 1);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = uVar2;
    puVar5[2] = uVar1;
  }
  return puVar5;
}



// FUNCTION 145352dd0 FUN_145352dd0 body=264 status=ok
// SIG undefined FUN_145352dd0(void)

undefined8 FUN_145352dd0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [5];
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_54;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *local_28;
  
  if ((*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 1)) &&
     (cVar1 = FUN_1450e5c00(param_1,*(uint *)(param_2 + 1) - *(uint *)(param_1 + 0xc)),
     cVar1 == '\0')) {
    return 0x34;
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != puVar2 + *(uint *)(param_2 + 1)) {
    do {
      local_28 = (undefined4 *)*puVar2;
      local_38 = *local_28;
      uStack_30 = local_28[1];
      uStack_54 = CONCAT13(local_resf,CONCAT21(local_resd,*(undefined1 *)((longlong)local_28 + 0xd))
                          );
      uStack_34 = uStack_54;
      FUN_145352ba0(param_1,&local_38,local_res8);
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8));
  }
  return 1;
}



// FUNCTION 145352ee0 FUN_145352ee0 body=111 status=ok
// SIG undefined FUN_145352ee0(void)

undefined8 FUN_145352ee0(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [5];
  undefined2 local_res15;
  undefined1 local_res17;
  undefined4 uStack_44;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *local_18;
  
  local_28 = *param_2;
  uStack_20 = param_2[1];
  uStack_44 = CONCAT31(CONCAT12(local_res17,local_res15),*(undefined1 *)((longlong)param_2 + 0xd));
  uStack_24 = uStack_44;
  local_18 = param_2;
  lVar1 = FUN_145352ba0(local_28,&local_28,local_res10);
  uVar2 = 1;
  if (lVar1 == 0) {
    uVar2 = 0x34;
  }
  return uVar2;
}



// FUNCTION 145352f50 FUN_145352f50 body=223 status=ok
// SIG undefined FUN_145352f50(void)

undefined8 FUN_145352f50(longlong *param_1,undefined4 *param_2,undefined1 *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 uVar4;
  void *_Dst;
  undefined8 uVar5;
  undefined4 uStackX_c;
  
  pvVar3 = (void *)*param_1;
  uVar2 = *param_2;
  uVar5 = 0;
  uStackX_c = CONCAT31(uStackX_c._1_3_,*(undefined1 *)((longlong)param_2 + 0xd));
  pvVar1 = (void *)((longlong)pvVar3 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
  _Dst = pvVar3;
  if (pvVar3 != pvVar1) {
    do {
      if (*(int *)((longlong)_Dst + 8) == param_2[1]) {
        pvVar3 = (void *)((longlong)pvVar3 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 0x18);
        if (_Dst < pvVar3) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x18),
                  (ulonglong)(uint)((int)(((longlong)pvVar3 - (longlong)_Dst) / 0x18) * 0x18));
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        uVar5 = 1;
        break;
      }
      _Dst = (void *)((longlong)_Dst + 0x18);
    } while (_Dst != pvVar1);
  }
  uVar4 = FUN_1453530b0(param_1,CONCAT44(uStackX_c,uVar2),((longlong)_Dst - *param_1) / 0x18);
  *param_3 = uVar4;
  return uVar5;
}



// FUNCTION 145353030 FUN_145353030 body=122 status=ok
// SIG undefined FUN_145353030(void)

void FUN_145353030(longlong *param_1,uint param_2,undefined1 *param_3)

{
  void *_Dst;
  undefined8 uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  uVar1 = *(undefined8 *)(*param_1 + uVar3 * 0x18);
  _Dst = (void *)(*param_1 + uVar3 * 0x18);
  if (param_2 + 1 < *(uint *)(param_1 + 1)) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),
            (ulonglong)((*(uint *)(param_1 + 1) - param_2) * 0x18 - 0x18));
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  uVar2 = FUN_1453530b0(param_1,uVar1,uVar3);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1453530b0 FUN_1453530b0 body=195 status=ok
// SIG undefined FUN_1453530b0(void)

ulonglong FUN_1453530b0(longlong *param_1,ulonglong param_2,int param_3)

{
  uint5 *puVar1;
  ulonglong in_RAX;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  if (((char)(param_2 >> 0x20) != '\b') && ((int)param_2 != 0)) {
    if ((param_3 < (int)param_1[1]) &&
       (in_RAX = param_2 & 0xffffffff,
       (ulonglong)
       CONCAT14(*(undefined1 *)(*param_1 + 4 + lVar2 * 0x18),
                *(undefined4 *)(*param_1 + lVar2 * 0x18)) == (param_2 & 0xffffffffff))) {
      return CONCAT71((uint7)(uint3)(param_2 >> 8),1);
    }
    if ((-1 < param_3 + -1) && (param_3 + -1 < (int)param_1[1])) {
      puVar1 = (uint5 *)(*param_1 + lVar2 * 0x18 + -0x18);
      return (ulonglong)
             CONCAT31((int3)((uint)*(undefined4 *)puVar1 >> 8),
                      (ulonglong)*puVar1 == (param_2 & 0xffffffffff));
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 145353180 FUN_145353180 body=326 status=ok
// SIG undefined FUN_145353180(void)

void FUN_145353180(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *_Src;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  lVar3 = FUN_1453535b0(param_1 + 0x38,param_2,local_res8);
  if (local_res8[0] == '\0') {
    uVar5 = *(uint *)(param_1 + 0x40);
    if (lVar3 == 0) {
      if ((*(uint *)(param_1 + 0x44) <= uVar5) &&
         (cVar1 = FUN_145353480(param_1 + 0x38), cVar1 == '\0')) {
        return;
      }
      if (*(uint *)(param_1 + 0x44) <= uVar5) {
        return;
      }
      puVar4 = (undefined8 *)
               (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 8);
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + 1;
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      *(undefined4 *)puVar4 = 0;
      *(undefined1 *)((longlong)puVar4 + 4) = 8;
    }
    else {
      uVar6 = lVar3 - *(longlong *)(param_1 + 0x38) >> 3;
      if ((*(uint *)(param_1 + 0x44) <= uVar5) &&
         (cVar1 = FUN_145353480(param_1 + 0x38), cVar1 == '\0')) {
        return;
      }
      if (*(uint *)(param_1 + 0x44) <= uVar5) {
        return;
      }
      uVar5 = (uint)uVar6;
      lVar3 = (uVar6 & 0xffffffff) * 8;
      _Src = (undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar3);
      if (uVar5 < *(uint *)(param_1 + 0x40)) {
        memmove(_Src + 2,_Src,(ulonglong)((*(uint *)(param_1 + 0x40) - uVar5) * 8));
      }
      if (_Src != (undefined4 *)0x0) {
        *_Src = 0;
        *(undefined1 *)(_Src + 1) = 8;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar3);
    }
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    *puVar4 = param_2;
  }
  else if (lVar3 == 0) {
    return;
  }
  if ((local_res8[0] == '\0') && (iVar2 = FUN_14507ec00(g_pGameSyncMgr,param_2,param_1), iVar2 != 1)
     ) {
    FUN_145353550(param_1 + 0x38,param_2);
  }
  return;
}



// FUNCTION 1453532d0 FUN_1453532d0 body=169 status=ok
// SIG undefined FUN_1453532d0(void)

void FUN_1453532d0(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  char local_res8 [8];
  
  pvVar1 = (void *)FUN_1453535b0(param_1 + 0x38,param_2,local_res8);
  pvVar2 = (void *)0x0;
  if (local_res8[0] != '\0') {
    pvVar2 = pvVar1;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_14507ee00(g_pGameSyncMgr,param_2,param_1);
    pvVar1 = (void *)FUN_1453535b0(param_1 + 0x38,param_2,local_res8);
    pvVar2 = (void *)0x0;
    if (local_res8[0] != '\0') {
      pvVar2 = pvVar1;
    }
    if (pvVar2 != (void *)0x0) {
      pvVar1 = (void *)(*(longlong *)(param_1 + 0x38) +
                       (ulonglong)(*(int *)(param_1 + 0x40) - 1) * 8);
      if (pvVar2 < pvVar1) {
        memmove(pvVar2,(void *)((longlong)pvVar2 + 8),
                (ulonglong)((int)pvVar1 - (int)pvVar2 & 0xfffffff8));
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    }
  }
  return;
}



// FUNCTION 145353380 FUN_145353380 body=106 status=ok
// SIG undefined FUN_145353380(void)

void FUN_145353380(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0x40)) {
    do {
      FUN_14507ee00(g_pGameSyncMgr,*puVar1,param_1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 8));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1453533f0 FUN_1453533f0 body=137 status=ok
// SIG undefined FUN_1453533f0(void)

void FUN_1453533f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[7];
  *param_1 = &PTR_LAB_149c23690;
  puVar1 = puVar2;
  if (puVar2 != puVar2 + *(uint *)(param_1 + 8)) {
    do {
      FUN_14507ee00(g_pGameSyncMgr,*puVar1,param_1);
      puVar2 = (undefined8 *)param_1[7];
      puVar1 = puVar1 + 1;
    } while (puVar1 != puVar2 + *(uint *)(param_1 + 8));
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    AK::MemoryMgr::Free(0,puVar2);
    param_1[7] = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  return;
}



// FUNCTION 145353480 FUN_145353480 body=205 status=ok
// SIG undefined FUN_145353480(void)

undefined8 FUN_145353480(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  __uint64 _Var5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  _Var5 = (ulonglong)(iVar2 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    puVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (puVar4 != (undefined8 *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (puVar3 = puVar4, (undefined8 *)*param_1 != puVar4)) {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined4 *)puVar3 = 0;
            *(undefined1 *)((longlong)puVar3 + 4) = 8;
          }
          *puVar3 = *(undefined8 *)((longlong)puVar3 + (*param_1 - (longlong)puVar4));
          puVar3 = puVar3 + 1;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145353530;
    }
  }
  else {
    puVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (puVar4 != (undefined8 *)0x0) {
LAB_145353530:
      *param_1 = (longlong)puVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145353550 FUN_145353550 body=86 status=ok
// SIG undefined FUN_145353550(void)

undefined8 FUN_145353550(longlong *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *_Dst;
  char local_res18 [16];
  
  pvVar1 = (void *)FUN_1453535b0(param_1,param_2,local_res18);
  _Dst = (void *)0x0;
  if (local_res18[0] != '\0') {
    _Dst = pvVar1;
  }
  if (_Dst != (void *)0x0) {
    pvVar1 = (void *)(*param_1 + (ulonglong)((int)param_1[1] - 1) * 8);
    if (_Dst < pvVar1) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(ulonglong)((int)pvVar1 - (int)_Dst & 0xfffffff8));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return 1;
  }
  return 0;
}



// FUNCTION 1453535b0 FUN_1453535b0 body=202 status=ok
// SIG undefined FUN_1453535b0(void)

longlong FUN_1453535b0(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar6;
  ulonglong uVar7;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar4 != 0) {
    uVar7 = (param_2 >> 0x20 & 0xff) << 0x20 | param_2 & 0xffffffff;
    do {
      iVar3 = (uVar4 >> 1) + iVar6;
      lVar1 = (longlong)iVar3 * 8;
      uVar2 = *(ulonglong *)(lVar1 + *param_1);
      uVar2 = (uVar2 >> 0x20 & 0xff) << 0x20 | uVar2 & 0xffffffff;
      if (uVar2 == uVar7) {
        *param_3 = 1;
        return *param_1 + lVar1;
      }
      uVar5 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (uVar7 <= uVar2) {
        uVar5 = uVar4;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar4 = uVar5 >> 1;
    } while (uVar4 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar6 * 8;
}



// FUNCTION 145353680 FUN_145353680 body=190 status=ok
// SIG undefined FUN_145353680(void)

undefined8 FUN_145353680(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  _Var6 = (ulonglong)(iVar2 + uVar1) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar5 = 0;
          do {
            uVar3 = ((undefined8 *)(lVar5 + *param_1))[1];
            *(undefined8 *)(lVar5 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + *param_1);
            ((undefined8 *)(lVar5 + (longlong)pvVar4))[1] = uVar3;
            uVar7 = uVar7 - 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145353721;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_145353721:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145353740 FUN_145353740 body=96 status=ok
// SIG undefined FUN_145353740(void)

void FUN_145353740(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *_Dst;
  
  piVar1 = (int *)*param_1;
  _Dst = piVar1;
  if (piVar1 != piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4) {
    while (*_Dst != param_2) {
      _Dst = _Dst + 4;
      if (_Dst == piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4) {
        return;
      }
    }
    if (_Dst < piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 4) {
      memmove(_Dst,_Dst + 4,
              (ulonglong)
              ((int)(piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 4) - (int)_Dst & 0xfffffff0)
             );
    }
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  }
  return;
}



// FUNCTION 1453537a0 FUN_1453537a0 body=56 status=ok
// SIG undefined FUN_1453537a0(void)

undefined8 FUN_1453537a0(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x28);
  piVar2 = piVar3 + (ulonglong)*(uint *)(param_1 + 0x30) * 4;
  for (; (piVar3 != piVar2 && (*piVar3 != param_2)); piVar3 = piVar3 + 4) {
  }
  piVar1 = piVar3 + 2;
  if (piVar3 == piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *(undefined8 *)piVar1;
}



// FUNCTION 1453537e0 FUN_1453537e0 body=657 status=ok
// SIG undefined FUN_1453537e0(void)

undefined4 FUN_1453537e0(longlong param_1,uint param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar3 = DAT_14c791060;
  do {
    while (iVar1 = *(int *)(lVar3 + 0xb0), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0xb8));
      if (*(int *)(lVar3 + 0xb0) < 0) goto LAB_145353829;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0xb8));
    }
    LOCK();
    bVar10 = iVar1 == *(int *)(lVar3 + 0xb0);
    if (bVar10) {
      *(int *)(lVar3 + 0xb0) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar10);
LAB_145353829:
  plVar9 = (longlong *)0x0;
  plVar8 = plVar9;
  if (*(uint *)(lVar3 + 0xf8) != 0) {
    for (plVar7 = *(longlong **)
                   (*(longlong *)(lVar3 + 0xf0) +
                   ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar3 + 0xf8)) * 8);
        (plVar8 = plVar9, plVar7 != (longlong *)0x0 &&
        (plVar8 = plVar7, *(uint *)(plVar7 + 2) != param_2)); plVar7 = (longlong *)plVar7[1]) {
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(lVar3 + 0xb0);
  while (-1 < iVar1) {
    LOCK();
    bVar10 = iVar1 == *(int *)(lVar3 + 0xb0);
    if (bVar10) {
      *(int *)(lVar3 + 0xb0) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar10) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar3 + 0xe0))) {
        SetEvent(*(HANDLE *)(lVar3 + 0xe8));
      }
      goto LAB_1453538ca;
    }
    iVar1 = *(int *)(lVar3 + 0xb0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0xb8));
LAB_1453538ca:
  piVar5 = *(int **)(param_1 + 0x28);
  piVar6 = piVar5 + (ulonglong)*(uint *)(param_1 + 0x30) * 4;
  for (; (piVar5 != piVar6 && (*piVar5 != param_3)); piVar5 = piVar5 + 4) {
  }
  plVar7 = (longlong *)(piVar5 + 2);
  if (piVar5 == (int *)((ulonglong)*(uint *)(param_1 + 0x30) * 0x10 + *(longlong *)(param_1 + 0x28))
     ) {
    plVar7 = plVar9;
  }
  if (plVar7 != (longlong *)0x0) {
    if (plVar8 == (longlong *)*plVar7) {
      if (plVar8 == (longlong *)0x0) {
        return 1;
      }
      LOCK();
      piVar5 = (int *)((longlong)plVar8 + 0x14);
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 != 1) {
        return 1;
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
      return 1;
    }
    FUN_145391d10();
    plVar7 = (longlong *)*plVar7;
    LOCK();
    piVar5 = (int *)((longlong)plVar7 + 0x14);
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)(*plVar7 + 0x18))();
    }
    FUN_145353740(param_1 + 0x28,param_3);
  }
  if (plVar8 == (longlong *)0x0) {
    return 0x10;
  }
  piVar5 = *(int **)(param_1 + 0x28);
  piVar6 = piVar5 + (ulonglong)*(uint *)(param_1 + 0x30) * 4;
  for (; (piVar5 != piVar6 && (*piVar5 != param_3)); piVar5 = piVar5 + 4) {
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  plVar7 = (longlong *)(piVar5 + 2);
  if (piVar5 == (int *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x28))) {
    plVar7 = plVar9;
  }
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)plVar8;
LAB_145353a1c:
    FUN_145391d00(plVar8,*(undefined8 *)(param_1 + 0x18));
    if (param_4 != '\0') {
      FUN_145354910(*(undefined8 *)(param_1 + 0x18));
    }
    return 1;
  }
  if ((uVar2 < *(uint *)(param_1 + 0x34)) ||
     ((cVar4 = FUN_145353680(param_1 + 0x28), cVar4 != '\0' && (uVar2 < *(uint *)(param_1 + 0x34))))
     ) {
    uVar2 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar2 + 1;
    piVar5 = (int *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x28));
    if (piVar5 != (int *)0x0) {
      *piVar5 = param_3;
      *(longlong **)(piVar5 + 2) = plVar8;
      if (piVar5 + 2 != (int *)0x0) goto LAB_145353a1c;
    }
  }
  LOCK();
  piVar5 = (int *)((longlong)plVar8 + 0x14);
  iVar1 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  return 0x34;
}



// FUNCTION 145353a80 FUN_145353a80 body=171 status=ok
// SIG undefined FUN_145353a80(void)

void FUN_145353a80(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  longlong *plVar3;
  ushort *puVar4;
  
  puVar2 = *(ushort **)(param_1 + 0x20);
  if (puVar2 != (ushort *)0x0) {
    uVar1 = *puVar2;
    puVar4 = puVar2 + 1;
    if (puVar4 != puVar2 + (ulonglong)uVar1 + 1) {
      plVar3 = (longlong *)(((ulonglong)*puVar2 * 2 + 9 & 0xfffffff8) + 8 + (longlong)puVar2);
      do {
        if (*plVar3 != 0) {
          FUN_1450b0bd0(DAT_14c791068,*plVar3,param_1);
          *plVar3 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
        }
        puVar4 = puVar4 + 1;
        plVar3 = plVar3 + 2;
      } while (puVar4 != puVar2 + (ulonglong)uVar1 + 1);
    }
  }
  return;
}



// FUNCTION 145353b30 FUN_145353b30 body=233 status=ok
// SIG undefined FUN_145353b30(void)

void FUN_145353b30(longlong param_1,uint param_2,undefined4 param_3,char param_4)

{
  ushort *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  
  cVar7 = (char)(param_2 >> 0x10);
  if (cVar7 == '\x03') {
    uVar8 = 0x3f800000;
  }
  else {
    uVar8 = 0;
  }
  puVar1 = *(ushort **)(param_1 + 0x20);
  if (puVar1 != (ushort *)0x0) {
    uVar3 = 0;
    do {
      uVar4 = uVar3 + 1;
      if (puVar1[uVar4] == (ushort)param_2) {
        puVar5 = (undefined4 *)
                 ((longlong)puVar1 +
                 (ulonglong)uVar3 * 0x10 + ((ulonglong)((uint)*puVar1 * 2 + 9) & 0xfffffff8));
        if (puVar5 != (undefined4 *)0x0) {
          uVar8 = *puVar5;
          cVar6 = '\0';
          *puVar5 = param_3;
          if ((param_4 != '\0') && (*(longlong *)(puVar5 + 2) != 0)) {
            *(undefined8 *)(puVar5 + 2) = 0;
            cVar6 = '\x01';
          }
          goto LAB_145353b85;
        }
        break;
      }
      uVar3 = uVar4;
    } while (uVar4 < *puVar1);
  }
  cVar6 = '\0';
LAB_145353b85:
  plVar2 = *(longlong **)(param_1 + 0x18);
  if ((char)plVar2[1] != '\0') {
    (**(code **)(*plVar2 + 0x40))
              (plVar2,param_2 & 0xffff,cVar7,*(undefined4 *)(param_1 + 0x38),uVar8,param_3,cVar6);
  }
  if (cVar6 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  return;
}



// FUNCTION 145353c20 FUN_145353c20 body=18 status=ok
// SIG undefined FUN_145353c20(void)

undefined8 * FUN_145353c20(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_149d421b0;
  return param_1;
}



// FUNCTION 145353c40 FUN_145353c40 body=11 status=ok
// SIG undefined FUN_145353c40(void)

void FUN_145353c40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d421b0;
  return;
}



// FUNCTION 145353c50 FUN_145353c50 body=213 status=ok
// SIG undefined FUN_145353c50(void)

void FUN_145353c50(longlong *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x78))();
  if (lVar3 != 0) {
    for (lVar3 = *(longlong *)(lVar3 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
      puVar2 = *(ushort **)(lVar3 + 0x20);
      if (puVar2 != (ushort *)0x0) {
        puVar4 = puVar2 + 1;
        uVar1 = *puVar2;
        if (puVar4 != puVar2 + (ulonglong)uVar1 + 1) {
          plVar5 = (longlong *)(((ulonglong)*puVar2 * 2 + 9 & 0xfffffff8) + 8 + (longlong)puVar2);
          do {
            if (*plVar5 != 0) {
              FUN_1450b0bd0(DAT_14c791068,*plVar5,lVar3);
              *plVar5 = 0;
              (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x10))();
            }
            puVar4 = puVar4 + 1;
            plVar5 = plVar5 + 2;
          } while (puVar4 != puVar2 + (ulonglong)uVar1 + 1);
        }
      }
    }
  }
  return;
}



// FUNCTION 145353d30 FUN_145353d30 body=74 status=ok
// SIG undefined FUN_145353d30(void)

undefined8 FUN_145353d30(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x78))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145353d80 FUN_145353d80 body=62 status=ok
// SIG undefined FUN_145353d80(void)

undefined8 FUN_145353d80(longlong *param_1,short param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x30))();
  if (plVar1 != (longlong *)0x0) {
    uVar3 = 0;
    if (*(uint *)(plVar1 + 1) != 0) {
      do {
        if (*(short *)(*plVar1 + uVar3 * 4) == param_2) {
          return 1;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(plVar1 + 1));
    }
  }
  return 0;
}



// FUNCTION 145353dc0 FUN_145353dc0 body=528 status=ok
// SIG undefined FUN_145353dc0(void)

void FUN_145353dc0(longlong *param_1,uint param_2,longlong param_3,char param_4)

{
  short *psVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = (ulonglong)param_2;
  cVar3 = (**(code **)(*param_1 + 0x70))();
  if (cVar3 == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x30))();
  uVar6 = 0;
  if (*(uint *)(plVar4 + 1) == param_2) {
    if (param_2 != 0) {
      uVar8 = 0;
      do {
        uVar6 = (uint)uVar8;
        psVar1 = (short *)(*plVar4 + uVar8 * 4);
        if ((*psVar1 != *(short *)(param_3 + uVar8 * 8)) ||
           ((char)psVar1[1] != *(char *)(param_3 + uVar8 * 8 + 4))) break;
        uVar6 = uVar6 + 1;
        uVar8 = (ulonglong)uVar6;
      } while (uVar6 < param_2);
    }
    if (uVar6 == param_2) {
      return;
    }
  }
  if ((void *)*plVar4 != (void *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*plVar4);
    *plVar4 = 0;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
  }
  if (param_2 != 0) {
    uVar6 = *(uint *)(plVar4 + 1);
    uVar8 = (ulonglong)uVar6;
    if (uVar6 <= param_2) {
      if (*(uint *)((longlong)plVar4 + 0xc) < param_2) {
        uVar11 = (ulonglong)uVar6;
        puVar5 = AK::MemoryMgr::Malloc(0,uVar10 * 4);
        if (puVar5 == (undefined4 *)0x0) goto LAB_145353fae;
        if (((undefined4 *)*plVar4 != (undefined4 *)0x0) && ((undefined4 *)*plVar4 != puVar5)) {
          puVar7 = puVar5;
          if (uVar6 != 0) {
            do {
              if (puVar7 != (undefined4 *)0x0) {
                *(byte *)((longlong)puVar7 + 3) = *(byte *)((longlong)puVar7 + 3) & 0xfe;
                *(undefined2 *)puVar7 = 0xffff;
                *(undefined1 *)((longlong)puVar7 + 2) = 2;
              }
              *puVar7 = *(undefined4 *)((*plVar4 - (longlong)puVar5) + (longlong)puVar7);
              uVar11 = uVar11 - 1;
              puVar7 = puVar7 + 1;
            } while (uVar11 != 0);
          }
          AK::MemoryMgr::Free(0,(void *)*plVar4);
        }
        *plVar4 = (longlong)puVar5;
        *(uint *)((longlong)plVar4 + 0xc) = param_2;
      }
      for (; uVar8 < uVar10; uVar8 = uVar8 + 1) {
        puVar2 = (undefined2 *)(*plVar4 + uVar8 * 4);
        if (puVar2 != (undefined2 *)0x0) {
          *(byte *)((longlong)puVar2 + 3) = *(byte *)((longlong)puVar2 + 3) & 0xfe;
          *puVar2 = 0xffff;
          *(undefined1 *)(puVar2 + 1) = 2;
        }
      }
    }
    *(uint *)(plVar4 + 1) = param_2;
    uVar8 = 0;
    pcVar9 = (char *)(param_3 + 5);
    do {
      uVar11 = uVar8 + 4;
      *(undefined2 *)(uVar8 + *plVar4) = *(undefined2 *)(pcVar9 + -5);
      *(char *)(uVar8 + 2 + *plVar4) = pcVar9[-1];
      *(byte *)(*plVar4 + -1 + uVar11) = *pcVar9 != '\0' | *(byte *)(*plVar4 + -1 + uVar11) & 0xfe;
      uVar10 = uVar10 - 1;
      uVar8 = uVar11;
      pcVar9 = pcVar9 + 8;
    } while (uVar10 != 0);
  }
LAB_145353fae:
  if (param_4 != '\0') {
    FUN_145354910(param_1);
  }
  return;
}



// FUNCTION 145354000 FUN_145354000 body=306 status=ok
// SIG undefined FUN_145354000(void)

void FUN_145354000(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  
  lVar5 = (**(code **)(*param_1 + 0x78))();
  if (lVar5 != 0) {
    plVar4 = *(longlong **)(lVar5 + 8);
    plVar8 = (longlong *)0x0;
    while (plVar3 = plVar4, plVar3 != (longlong *)0x0) {
      if ((int)plVar3[7] == param_2) {
        if (plVar3 == *(longlong **)(lVar5 + 8)) {
          *(longlong *)(lVar5 + 8) = plVar3[2];
        }
        else {
          plVar8[2] = plVar3[2];
        }
        FUN_145076250(DAT_14c790ff8,param_2,plVar3);
        iVar2 = (int)plVar3[6];
        while (iVar2 != 0) {
          piVar6 = (int *)plVar3[5];
          piVar7 = piVar6 + (ulonglong)*(uint *)(plVar3 + 6) * 4;
          iVar2 = *piVar6;
          for (; (piVar6 != piVar7 && (*piVar6 != iVar2)); piVar6 = piVar6 + 4) {
          }
          plVar8 = (longlong *)(piVar6 + 2);
          if (piVar6 == piVar7) {
            plVar8 = (longlong *)0x0;
          }
          if (plVar8 != (longlong *)0x0) {
            FUN_145391d10(*plVar8);
            plVar8 = (longlong *)*plVar8;
            LOCK();
            piVar6 = (int *)((longlong)plVar8 + 0x14);
            iVar1 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)(*plVar8 + 0x18))();
            }
            FUN_145353740(plVar3 + 5,iVar2);
          }
          iVar2 = (int)plVar3[6];
        }
        FUN_145075a30(plVar3);
        AK::MemoryMgr::Free(2,plVar3);
        if (param_3 == '\0') {
          return;
        }
        FUN_145354910(param_1);
        return;
      }
      plVar8 = plVar3;
      plVar4 = (longlong *)plVar3[2];
    }
  }
  return;
}



// FUNCTION 145354140 FUN_145354140 body=310 status=ok
// SIG undefined FUN_145354140(void)

undefined8 * FUN_145354140(longlong *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x70))();
  if (cVar1 != '\0') {
    lVar4 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar4 != 0) {
      for (puVar5 = *(undefined8 **)(lVar4 + 8); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)puVar5[2]) {
        if (*(int *)(puVar5 + 7) == param_2) {
          return puVar5;
        }
      }
    }
    puVar5 = AK::MemoryMgr::Malloc(2,0x48);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[3] = param_1;
      *puVar5 = &PTR_FUN_149c237a0;
      *(int *)(puVar5 + 7) = param_2;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x2ca33bdb;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 8) = 0;
      iVar2 = FUN_1450761f0(DAT_14c790ff8,param_2,puVar5);
      if (iVar2 != 1) {
        FUN_145075a30(puVar5);
        AK::MemoryMgr::Free(2,puVar5);
        return (undefined8 *)0x0;
      }
      lVar4 = (**(code **)(*param_1 + 0x78))(param_1);
      if (*(longlong *)(lVar4 + 8) == 0) {
        *(undefined8 **)(lVar4 + 8) = puVar5;
        puVar5[2] = 0;
      }
      else {
        puVar5[2] = *(longlong *)(lVar4 + 8);
        *(undefined8 **)(lVar4 + 8) = puVar5;
      }
      uVar3 = FUN_145076420(DAT_14c790ff8,param_2);
      *(undefined4 *)((longlong)puVar5 + 0x3c) = uVar3;
      if (param_3 == '\0') {
        return puVar5;
      }
      FUN_145354910(param_1);
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145354280 FUN_145354280 body=901 status=ok
// SIG undefined FUN_145354280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145354280(longlong *param_1,int param_2,longlong param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int *piVar18;
  longlong *plVar19;
  int *piVar20;
  uint *puVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  byte *pbVar25;
  int local_res10;
  undefined1 auStack_78 [32];
  byte local_58 [4];
  uint local_54;
  int local_50;
  byte *local_48;
  ulonglong uVar13;
  
  puVar15 = auStack_78;
  cVar6 = (**(code **)(*param_1 + 0x70))();
  if (cVar6 == '\0') {
LAB_1453545ec:
    iVar24 = 0x34;
  }
  else {
    local_50 = 1;
    lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
    uVar11 = 0;
    local_54 = 0;
    lVar12 = *(longlong *)(lVar9 + 8);
    lVar9 = lVar12;
    if (lVar12 != 0) {
      do {
        lVar9 = *(longlong *)(lVar9 + 0x10);
        local_54 = (int)uVar11 + 1;
        uVar11 = (ulonglong)local_54;
      } while (lVar9 != 0);
    }
    local_48 = (byte *)0x0;
    if ((uint)uVar11 != 0) {
      uVar10 = uVar11 * 4 + 0xf;
      if (uVar10 <= uVar11 * 4) {
        uVar10 = 0xffffffffffffff0;
      }
      puVar15 = auStack_78 + -(uVar10 & 0xfffffffffffffff0);
      pbVar25 = local_58 + -(uVar10 & 0xfffffffffffffff0);
      if (pbVar25 == (byte *)0x0) goto LAB_1453545ec;
      for (; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x10)) {
        *(undefined4 *)pbVar25 = *(undefined4 *)(lVar12 + 0x38);
        pbVar25 = pbVar25 + 4;
      }
      local_48 = pbVar25 + uVar11 * -4;
    }
    puVar17 = puVar15;
    pbVar25 = local_48;
    bVar22 = 0;
    uVar7 = (uint)uVar11;
    iVar24 = 1;
    if (param_2 != 0) {
      puVar21 = (uint *)(param_3 + 4);
      puVar16 = puVar15;
      local_res10 = param_2;
      do {
        uVar10 = 0;
        uVar7 = (uint)uVar11;
        if (pbVar25 == (byte *)0x0) {
LAB_145354384:
          uVar23 = (uint)uVar10;
        }
        else {
          while (uVar23 = (uint)uVar10, uVar23 < uVar7) {
            if (*(uint *)(pbVar25 + uVar10 * 4) == puVar21[-1]) goto LAB_145354384;
            uVar10 = (ulonglong)(uVar23 + 1);
          }
        }
        if (uVar23 == uVar7) {
          uVar23 = puVar21[-1];
          local_58[0] = 1;
          pcVar4 = *(code **)(*param_1 + 0x58);
          *(undefined8 *)(puVar16 + -8) = 0x1453543f0;
          lVar9 = (*pcVar4)(param_1,uVar23,1);
          if (lVar9 == 0) {
            puVar17 = puVar16;
            bVar22 = 1;
            iVar24 = 0x34;
            break;
          }
        }
        else {
          local_54 = uVar7 - 1;
          *(undefined4 *)(pbVar25 + uVar10 * 4) =
               *(undefined4 *)(pbVar25 + (ulonglong)(uVar7 - 1) * 4);
          uVar7 = puVar21[-1];
          pcVar4 = *(code **)(*param_1 + 0x78);
          *(undefined8 *)(puVar16 + -8) = 0x1453543a5;
          lVar9 = (*pcVar4)();
          if (lVar9 != 0) {
            for (lVar9 = *(longlong *)(lVar9 + 8); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x10))
            {
              if (*(uint *)(lVar9 + 0x38) == uVar7) goto LAB_1453543c3;
            }
          }
          lVar9 = 0;
LAB_1453543c3:
          local_58[0] = bVar22 | *(char *)(lVar9 + 0x40) != (char)puVar21[1];
        }
        *(char *)(lVar9 + 0x40) = (char)puVar21[1];
        uVar10 = (ulonglong)*(uint *)(lVar9 + 0x34) * 4;
        uVar11 = uVar10 + 0xf;
        if (uVar11 <= uVar10) {
          uVar11 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar16 + -8) = 0x145354427;
        lVar5 = -(uVar11 & 0xfffffffffffffff0);
        puVar17 = puVar16 + lVar5;
        lVar12 = *(longlong *)(lVar9 + 0x28);
        uVar10 = 0;
        piVar18 = (int *)(puVar16 + lVar5 + 0x20);
        uVar11 = uVar10;
        piVar20 = piVar18;
        if (lVar12 != (ulonglong)*(uint *)(lVar9 + 0x30) * 0x10 + lVar12) {
          do {
            plVar1 = (longlong *)(lVar12 + 8);
            uVar11 = (ulonglong)((int)uVar11 + 1);
            lVar12 = lVar12 + 0x10;
            *piVar20 = *(int *)(*plVar1 + 0x10);
            piVar20 = piVar20 + 1;
          } while (lVar12 != (ulonglong)*(uint *)(lVar9 + 0x30) * 0x10 + *(longlong *)(lVar9 + 0x28)
                  );
        }
        uVar7 = (uint)uVar11;
        iVar24 = local_50;
        if (*puVar21 != 0) {
          do {
            uVar13 = 0;
            uVar7 = 0;
            uVar23 = (uint)uVar11;
            if (uVar23 != 0) {
              do {
                uVar7 = (uint)uVar13;
                if (piVar18[uVar13] == *param_4) break;
                uVar7 = uVar7 + 1;
                uVar13 = (ulonglong)uVar7;
              } while (uVar7 < uVar23);
            }
            if (uVar7 == uVar23) {
              iVar8 = param_4[1];
              iVar2 = *param_4;
              local_58[0] = 1;
              *(undefined8 *)(puVar16 + lVar5 + -8) = 0x1453544c5;
              iVar8 = FUN_1453537e0(lVar9,iVar2,iVar8);
              if (iVar8 != 1) {
                iVar24 = iVar8;
              }
            }
            else {
              uVar11 = (ulonglong)(uVar23 - 1);
              piVar18[uVar7] = piVar18[uVar11];
            }
            uVar7 = (uint)uVar11;
            uVar23 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar23;
            param_4 = param_4 + 2;
          } while (uVar23 < *puVar21);
          local_50 = iVar24;
          pbVar25 = local_48;
        }
        local_58[0] = local_58[0] | uVar7 != 0;
        if (uVar7 != 0) {
          plVar1 = (longlong *)(lVar9 + 0x28);
          uVar11 = (ulonglong)uVar7;
          do {
            piVar20 = (int *)*plVar1;
            iVar24 = *piVar18;
            piVar14 = piVar20 + (ulonglong)*(uint *)(lVar9 + 0x30) * 4;
            for (; (piVar20 != piVar14 && (*piVar20 != iVar24)); piVar20 = piVar20 + 4) {
            }
            plVar19 = (longlong *)(piVar20 + 2);
            if (piVar20 == (int *)((ulonglong)*(uint *)(lVar9 + 0x30) * 0x10 + *plVar1)) {
              plVar19 = (longlong *)0x0;
            }
            if (plVar19 != (longlong *)0x0) {
              lVar12 = *plVar19;
              *(undefined8 *)(puVar16 + lVar5 + -8) = 0x145354555;
              FUN_145391d10(lVar12);
              plVar19 = (longlong *)*plVar19;
              LOCK();
              piVar20 = (int *)((longlong)plVar19 + 0x14);
              iVar8 = *piVar20;
              *piVar20 = *piVar20 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                pcVar4 = *(code **)(*plVar19 + 0x18);
                *(undefined8 *)(puVar16 + lVar5 + -8) = 0x14535456d;
                (*pcVar4)();
              }
              *(undefined8 *)(puVar16 + lVar5 + -8) = 0x145354577;
              FUN_145353740(plVar1,iVar24);
            }
            piVar18 = piVar18 + 1;
            uVar11 = uVar11 - 1;
            pbVar25 = local_48;
          } while (uVar11 != 0);
        }
        puVar21 = puVar21 + 3;
        uVar11 = (ulonglong)local_54;
        local_res10 = local_res10 + -1;
        puVar16 = puVar16 + lVar5;
        bVar22 = local_58[0];
        uVar7 = local_54;
        iVar24 = local_50;
      } while (local_res10 != 0);
    }
    if (uVar7 != 0) {
      uVar11 = (ulonglong)uVar7;
      do {
        uVar3 = *(undefined4 *)pbVar25;
        pcVar4 = *(code **)(*param_1 + 0x50);
        *(undefined8 *)(puVar17 + -8) = 0x1453545d1;
        (*pcVar4)(param_1,uVar3,0);
        pbVar25 = pbVar25 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (bVar22 != 0 || uVar7 != 0) {
      *(undefined8 *)(puVar17 + -8) = 0x1453545e8;
      FUN_145354910(param_1);
    }
  }
  return iVar24;
}



// FUNCTION 145354610 FUN_145354610 body=308 status=ok
// SIG undefined FUN_145354610(void)

void FUN_145354610(longlong *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  void *pvVar7;
  longlong *plVar8;
  
  lVar4 = (**(code **)(*param_1 + 0x78))();
  if ((lVar4 != 0) && (pvVar7 = *(void **)(lVar4 + 8), pvVar7 != (void *)0x0)) {
    do {
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)((longlong)pvVar7 + 0x10);
      *(undefined8 *)((longlong)pvVar7 + 0x10) = 0;
      FUN_145076250(DAT_14c790ff8,*(undefined4 *)((longlong)pvVar7 + 0x38),pvVar7);
      uVar2 = *(uint *)((longlong)pvVar7 + 0x30);
      while (uVar2 != 0) {
        piVar5 = *(int **)((longlong)pvVar7 + 0x28);
        piVar6 = piVar5 + (ulonglong)uVar2 * 4;
        iVar3 = *piVar5;
        for (; (piVar5 != piVar6 && (*piVar5 != iVar3)); piVar5 = piVar5 + 4) {
        }
        plVar8 = (longlong *)(piVar5 + 2);
        if (piVar5 == piVar6) {
          plVar8 = (longlong *)0x0;
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_145391d10(*plVar8);
          plVar8 = (longlong *)*plVar8;
          LOCK();
          piVar5 = (int *)((longlong)plVar8 + 0x14);
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar8 + 0x18))();
          }
          FUN_145353740((longlong)pvVar7 + 0x28,iVar3);
        }
        uVar2 = *(uint *)((longlong)pvVar7 + 0x30);
      }
      FUN_145075a30(pvVar7);
      AK::MemoryMgr::Free(2,pvVar7);
      pvVar7 = *(void **)(lVar4 + 8);
    } while (pvVar7 != (void *)0x0);
    if (param_2 != '\0') {
      FUN_145354910(param_1);
    }
  }
  return;
}



// FUNCTION 145354750 FUN_145354750 body=184 status=ok
// SIG undefined FUN_145354750(void)

undefined8 FUN_145354750(longlong *param_1)

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
  _Var6 = (ulonglong)(iVar3 + uVar1) << 2;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined4 *)((longlong)pvVar4 + uVar5 * 4) = *(undefined4 *)(*param_1 + uVar5 * 4);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1453547eb;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1453547eb:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145354810 FUN_145354810 body=238 status=ok
// SIG undefined FUN_145354810(void)

undefined8 FUN_145354810(longlong *param_1,int param_2,longlong *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  uint *puVar7;
  
  lVar6 = (**(code **)(*param_1 + 0x78))();
  if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
    while (*(int *)(lVar6 + 0x38) != param_2) {
      lVar6 = *(longlong *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        return 0;
      }
    }
    bVar3 = *(byte *)(lVar6 + 0x40);
    if (bVar3 == 0) {
      *(undefined4 *)(param_3 + 1) = 0;
      if ((*(int *)((longlong)param_3 + 0xc) != 0) ||
         ((cVar5 = FUN_145354750(param_3), cVar5 != '\0' && (*(int *)((longlong)param_3 + 0xc) != 0)
          ))) {
        uVar4 = *(uint *)(param_3 + 1);
        *(uint *)(param_3 + 1) = uVar4 + 1;
        puVar1 = (undefined4 *)(*param_3 + (ulonglong)uVar4 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
        }
      }
      return 1;
    }
    puVar7 = (uint *)*param_3;
    uVar4 = *(uint *)(param_3 + 1);
    puVar2 = puVar7 + uVar4;
    for (; puVar7 != puVar2; puVar7 = puVar7 + 1) {
      if (*puVar7 == (uint)bVar3) {
        return 0;
      }
    }
    if ((uVar4 < *(uint *)((longlong)param_3 + 0xc)) ||
       ((cVar5 = FUN_145354750(param_3), cVar5 != '\0' &&
        (uVar4 < *(uint *)((longlong)param_3 + 0xc))))) {
      uVar4 = *(uint *)(param_3 + 1);
      *(uint *)(param_3 + 1) = uVar4 + 1;
      puVar2 = (uint *)(*param_3 + (ulonglong)uVar4 * 4);
      if (puVar2 != (uint *)0x0) {
        *puVar2 = (uint)bVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 145354900 FUN_145354900 body=10 status=ok
// SIG undefined FUN_145354900(void)

void FUN_145354900(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000145354906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



// FUNCTION 145354910 FUN_145354910 body=733 status=ok
// SIG undefined FUN_145354910(void)

void FUN_145354910(longlong *param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  short *psVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  
  lVar7 = (**(code **)(*param_1 + 0x78))();
  if (lVar7 != 0) {
    for (lVar7 = *(longlong *)(lVar7 + 8); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x10)) {
      piVar8 = *(int **)(lVar7 + 0x28);
      piVar10 = piVar8 + (ulonglong)*(uint *)(lVar7 + 0x30) * 4;
      for (; (piVar8 != piVar10 && (*piVar8 != *(int *)(lVar7 + 0x3c))); piVar8 = piVar8 + 4) {
      }
      plVar13 = (longlong *)(piVar8 + 2);
      if (piVar8 == piVar10) {
        plVar13 = (longlong *)0x0;
      }
      if ((plVar13 == (longlong *)0x0) || (*plVar13 == 0)) {
        FUN_145353a80(lVar7);
      }
      else {
        puVar4 = *(ushort **)(*plVar13 + 0x18);
        if (puVar4 != (ushort *)0x0) {
          puVar1 = puVar4 + (ulonglong)*puVar4 + 1;
          puVar16 = (undefined4 *)(((ulonglong)*puVar4 * 2 + 5 & 0xfffffffc) + (longlong)puVar4);
          while (puVar4 = puVar4 + 1, puVar4 != puVar1) {
            uVar15 = 0;
            puVar5 = *(ushort **)(lVar7 + 0x20);
            uVar2 = *puVar16;
            if (puVar5 != (ushort *)0x0) {
              uVar11 = uVar15;
              do {
                uVar12 = (int)uVar11 + 1;
                if (puVar5[uVar12] == *puVar4) {
                  puVar14 = (undefined4 *)
                            (((ulonglong)((uint)*puVar5 * 2 + 9) & 0xfffffff8) + uVar11 * 0x10 +
                            *(longlong *)(lVar7 + 0x20));
                  if (puVar14 != (undefined4 *)0x0) {
                    if (*(longlong *)(puVar14 + 2) == 0) {
                      *puVar14 = uVar2;
                    }
                    else {
                      FUN_1450b0c80(DAT_14c791068,*(longlong *)(puVar14 + 2),*puVar4,uVar2,0,4,0);
                    }
                    goto LAB_145354b74;
                  }
                  break;
                }
                uVar11 = (ulonglong)uVar12;
              } while (uVar12 < *puVar5);
            }
            uVar3 = *puVar4;
            if (*(ushort **)(lVar7 + 0x20) != (ushort *)0x0) {
              uVar15 = (ulonglong)**(ushort **)(lVar7 + 0x20);
            }
            iVar6 = (int)uVar15;
            uVar12 = iVar6 * 2 + 0xb;
            psVar9 = AK::MemoryMgr::Malloc
                               (0,(ulonglong)((iVar6 + 1) * 0x10 + (uVar12 & 0xfffffff8)));
            if (psVar9 != (short *)0x0) {
              if (*(longlong *)(lVar7 + 0x20) != 0) {
                memcpy(psVar9 + 1,(void *)(*(longlong *)(lVar7 + 0x20) + 2),uVar15 * 2);
                memcpy((void *)(((ulonglong)uVar12 & 0xfffffff8) + (longlong)psVar9),
                       (void *)(((ulonglong)(iVar6 * 2 + 9) & 0xfffffff8) +
                               *(longlong *)(lVar7 + 0x20)),uVar15 << 4);
                AK::MemoryMgr::Free(0,*(void **)(lVar7 + 0x20));
              }
              psVar9[iVar6 + 1] = uVar3;
              *psVar9 = (short)uVar15 + 1;
              *(short **)(lVar7 + 0x20) = psVar9;
              puVar14 = (undefined4 *)
                        ((longlong)psVar9 + ((ulonglong)uVar12 & 0xfffffff8) + uVar15 * 0x10);
              if (puVar14 != (undefined4 *)0x0) {
                *puVar14 = uVar2;
                *(undefined8 *)(puVar14 + 2) = 0;
              }
            }
LAB_145354b74:
            puVar16 = puVar16 + 1;
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}



// FUNCTION 145354bf0 FUN_145354bf0 body=204 status=ok
// SIG undefined FUN_145354bf0(void)

void FUN_145354bf0(longlong *param_1,char param_2)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x78))();
  if (lVar3 != 0) {
    for (lVar3 = *(longlong *)(lVar3 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
      puVar2 = *(ushort **)(lVar3 + 0x20);
      if (puVar2 != (ushort *)0x0) {
        puVar4 = puVar2 + 1;
        uVar1 = *puVar2;
        if (puVar4 != puVar2 + (ulonglong)uVar1 + 1) {
          plVar5 = (longlong *)(((ulonglong)*puVar2 * 2 + 9 & 0xfffffff8) + 8 + (longlong)puVar2);
          do {
            if (*plVar5 != 0) {
              if (param_2 == '\0') {
                FUN_1450b0c60(DAT_14c791068);
              }
              else {
                FUN_1450b0c40();
              }
            }
            puVar4 = puVar4 + 1;
            plVar5 = plVar5 + 2;
          } while (puVar4 != puVar2 + (ulonglong)uVar1 + 1);
        }
      }
    }
  }
  return;
}



// FUNCTION 145354cc0 FUN_145354cc0 body=641 status=ok
// SIG undefined FUN_145354cc0(void)

undefined8 FUN_145354cc0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  
  bVar1 = *(byte *)*param_2;
  pbVar13 = (byte *)*param_2 + 1;
  *param_2 = (longlong)pbVar13;
  uVar9 = bVar1 & 0x7f;
  while ((char)bVar1 < '\0') {
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    *param_2 = (longlong)pbVar13;
    uVar9 = bVar1 & 0x7f | uVar9 << 7;
  }
  if (uVar9 != 0) {
    cVar6 = (**(code **)(*param_1 + 0x70))(param_1);
    if (cVar6 == '\0') {
      return 0x34;
    }
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
    cVar6 = FUN_145354f80(plVar7,uVar9);
    if (cVar6 == '\0') {
      return 0x34;
    }
    if (uVar9 != 0) {
      lVar14 = 0;
      uVar15 = (ulonglong)uVar9;
      do {
        bVar1 = *(byte *)*param_2;
        pbVar13 = (byte *)*param_2 + 1;
        *param_2 = (longlong)pbVar13;
        uVar11 = bVar1 & 0x7f;
        while ((char)bVar1 < '\0') {
          bVar1 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          *param_2 = (longlong)pbVar13;
          uVar11 = bVar1 & 0x7f | uVar11 << 7;
        }
        *(ushort *)(lVar14 + *plVar7) = uVar11;
        uVar2 = *(undefined1 *)*param_2;
        *param_2 = (longlong)((undefined1 *)*param_2 + 1);
        *(undefined1 *)(lVar14 + 2 + *plVar7) = uVar2;
        cVar6 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        *(byte *)(*plVar7 + 3 + lVar14) = cVar6 != '\0' | *(byte *)(*plVar7 + 3 + lVar14) & 0xfe;
        lVar14 = lVar14 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  bVar1 = *(byte *)*param_2;
  pbVar13 = (byte *)*param_2 + 1;
  *param_2 = (longlong)pbVar13;
  uVar9 = bVar1 & 0x7f;
  while ((char)bVar1 < '\0') {
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    *param_2 = (longlong)pbVar13;
    uVar9 = bVar1 & 0x7f | uVar9 << 7;
  }
  if ((uVar9 != 0) && (cVar6 = (**(code **)(*param_1 + 0x70))(param_1), cVar6 == '\0')) {
    return 0x34;
  }
  uVar16 = 0;
  if (uVar9 != 0) {
    do {
      uVar3 = *(undefined4 *)*param_2;
      *param_2 = (longlong)((undefined4 *)*param_2 + 1);
      lVar14 = (**(code **)(*param_1 + 0x58))(param_1,uVar3,1);
      if (lVar14 == 0) {
        return 2;
      }
      uVar2 = *(undefined1 *)*param_2;
      *param_2 = (longlong)((undefined1 *)*param_2 + 1);
      *(undefined1 *)(lVar14 + 0x40) = uVar2;
      bVar1 = *(byte *)*param_2;
      pbVar13 = (byte *)*param_2 + 1;
      *param_2 = (longlong)pbVar13;
      uVar12 = bVar1 & 0x7f;
      while ((char)bVar1 < '\0') {
        bVar1 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        *param_2 = (longlong)pbVar13;
        uVar12 = bVar1 & 0x7f | uVar12 << 7;
      }
      uVar10 = 0;
      if ((uVar12 & 0xffff) != 0) {
        do {
          puVar5 = (undefined4 *)*param_2;
          uVar3 = *puVar5;
          *param_2 = (longlong)(puVar5 + 1);
          uVar4 = puVar5[1];
          *param_2 = (longlong)(puVar5 + 2);
          uVar8 = FUN_1453537e0(lVar14,uVar4,uVar3,1);
          if ((int)uVar8 != 1) {
            return uVar8;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < (uVar12 & 0xffff));
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar9);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  (**(code **)(*param_1 + 0x48))(param_1);
  return 1;
}



// FUNCTION 145354f50 FUN_145354f50 body=43 status=ok
// SIG undefined FUN_145354f50(void)

undefined8 * FUN_145354f50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d421b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145354f80 FUN_145354f80 body=271 status=ok
// SIG undefined FUN_145354f80(void)

undefined8 FUN_145354f80(longlong *param_1,uint param_2)

{
  undefined2 *puVar1;
  __uint64 _Var2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  if (*(uint *)(param_1 + 1) <= param_2) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    if (*(uint *)((longlong)param_1 + 0xc) < param_2) {
      _Var2 = (ulonglong)param_2 * 4;
      if ((void *)*param_1 == (void *)0x0) {
        puVar5 = AK::MemoryMgr::Malloc(0,_Var2);
        if (puVar5 == (undefined4 *)0x0) {
          return 0;
        }
        if (((undefined4 *)*param_1 != (undefined4 *)0x0) &&
           (puVar3 = puVar5, uVar4 = uVar6, (undefined4 *)*param_1 != puVar5)) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *(byte *)((longlong)puVar3 + 3) = *(byte *)((longlong)puVar3 + 3) & 0xfe;
              *(undefined2 *)puVar3 = 0xffff;
              *(undefined1 *)((longlong)puVar3 + 2) = 2;
            }
            *puVar3 = *(undefined4 *)((longlong)puVar3 + (*param_1 - (longlong)puVar5));
            puVar3 = puVar3 + 1;
          }
          AK::MemoryMgr::Free(0,(void *)*param_1);
        }
      }
      else {
        puVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var2);
        if (puVar5 == (undefined4 *)0x0) {
          return 0;
        }
      }
      *param_1 = (longlong)puVar5;
      *(uint *)((longlong)param_1 + 0xc) = param_2;
    }
    for (; uVar6 < param_2; uVar6 = uVar6 + 1) {
      puVar1 = (undefined2 *)(*param_1 + uVar6 * 4);
      if (puVar1 != (undefined2 *)0x0) {
        *(byte *)((longlong)puVar1 + 3) = *(byte *)((longlong)puVar1 + 3) & 0xfe;
        *puVar1 = 0xffff;
        *(undefined1 *)(puVar1 + 1) = 2;
      }
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}



// FUNCTION 145355090 FUN_145355090 body=15 status=ok
// SIG undefined FUN_145355090(void)

void FUN_145355090(undefined8 param_1)

{
  FUN_1450ac3f0(g_pRegistryMgr,param_1);
  return;
}



// FUNCTION 1453550a0 FUN_1453550a0 body=15 status=ok
// SIG undefined FUN_1453550a0(void)

void FUN_1453550a0(undefined8 param_1)

{
  FUN_1450ac4f0(g_pRegistryMgr,param_1);
  return;
}



// FUNCTION 1453550b0 FUN_1453550b0 body=52 status=ok
// SIG undefined FUN_1453550b0(void)

undefined8 * FUN_1453550b0(undefined8 *param_1,undefined8 param_2)

{
  param_1[0xb] = param_2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_149d42230;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
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
  return param_1;
}



// FUNCTION 1453550f0 ~CAkGameObject body=113 status=ok
// SIG void ~CAkGameObject(CAkGameObject * this)

/* public: virtual __cdecl CAkGameObject::~CAkGameObject(void) __ptr64 */

void __thiscall CAkGameObject::~CAkGameObject(CAkGameObject *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  
                    /* 0x53550f0  12  ??1CAkGameObject@@UEAA@XZ */
  lVar2 = 10;
  *(undefined ***)this = &PTR_FUN_149d42230;
  do {
    this = this + 8;
    puVar1 = *(undefined8 **)this;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(4,puVar1);
      *(undefined8 *)this = 0;
    }
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 145355170 FUN_145355170 body=253 status=ok
// SIG undefined FUN_145355170(void)

CAkGameObject * FUN_145355170(CAkGameObject *param_1,ulonglong param_2)

{
  CAkGameObject *pCVar1;
  CAkGameObject *pCVar2;
  undefined8 *puVar3;
  CAkGameObject *pCVar4;
  CAkGameObject *pCVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_2 & 2) == 0) {
    CAkGameObject::~CAkGameObject(param_1);
    if ((param_2 & 1) != 0) {
      thunk_FUN_1400020a8(param_1,0x68);
    }
    return param_1;
  }
  lVar6 = *(longlong *)(param_1 + -8);
  pCVar1 = param_1 + -8;
  pCVar4 = param_1 + lVar6 * 0x68;
  while (lVar6 != 0) {
    pCVar2 = pCVar4 + -0x68;
    lVar6 = lVar6 + -1;
    *(undefined ***)pCVar2 = &PTR_FUN_149d42230;
    pCVar5 = pCVar4 + -0x60;
    lVar7 = 10;
    do {
      puVar3 = *(undefined8 **)pCVar5;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        AK::MemoryMgr::Free(4,puVar3);
        *(undefined8 *)pCVar5 = 0;
      }
      pCVar5 = pCVar5 + 8;
      lVar7 = lVar7 + -1;
      pCVar4 = pCVar2;
    } while (lVar7 != 0);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(pCVar1,*(longlong *)pCVar1 * 0x68 + 8);
  }
  return pCVar1;
}



// FUNCTION 145355270 FUN_145355270 body=100 status=ok
// SIG undefined FUN_145355270(void)

void FUN_145355270(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if ((*(longlong *)(param_1 + 0x80) != 0) && (*(char *)(param_1 + 0x88) != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x10))();
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1453552e0 FUN_1453552e0 body=297 status=ok
// SIG undefined FUN_1453552e0(void)

void FUN_1453552e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
    param_1[0xc] = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  if ((param_1[0x10] != 0) && (*(char *)(param_1 + 0x11) != '\0')) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_2[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return;
}



// FUNCTION 145355410 FUN_145355410 body=43 status=ok
// SIG undefined FUN_145355410(void)

undefined8 * FUN_145355410(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d42238;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 145355440 FUN_145355440 body=294 status=ok
// SIG undefined FUN_145355440(void)

undefined8 * FUN_145355440(undefined8 *param_1)

{
  param_1[4] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) & 0xff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffff;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6e) = 1;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0x32;
  FUN_145381d00(param_1 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  *(uint *)((longlong)param_1 + 0x10c) = *(uint *)((longlong)param_1 + 0x10c) & 0xff;
  param_1[0xf] = &PTR_PTR_14c72f458;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 145355570 FUN_145355570 body=246 status=ok
// SIG undefined FUN_145355570(void)

void FUN_145355570(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = param_2[3];
  param_2[3] = 0;
  FUN_1453552e0(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  FUN_145381f50(param_1 + 0x18,param_2 + 0x18);
  FUN_14553c660(param_1 + 0x1d);
  param_1[0x1d] = param_2[0x1d];
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x1e) = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  return;
}



// FUNCTION 145355670 FUN_145355670 body=338 status=ok
// SIG undefined FUN_145355670(void)

undefined8 FUN_145355670(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  __uint64 _Var5;
  int iVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x124);
  iVar6 = (uVar1 >> 1) + uVar1;
  uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x120);
  if (uVar1 == 0) {
    iVar6 = 1;
  }
  _Var5 = (ulonglong)(iVar6 + uVar1) * 0x118;
  pvVar4 = param_1;
  if (0x118 < _Var5) {
    pvVar4 = AK::MemoryMgr::Malign(0,_Var5,8);
  }
  if (pvVar4 != (void *)0x0) {
    if ((*(void **)((longlong)param_1 + 0x118) != (void *)0x0) &&
       (pvVar3 = pvVar4, *(void **)((longlong)param_1 + 0x118) != pvVar4)) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (pvVar3 != (void *)0x0) {
          FUN_145355440(pvVar3);
        }
        FUN_145355570(pvVar3,(longlong)pvVar3 +
                             (*(longlong *)((longlong)param_1 + 0x118) - (longlong)pvVar4));
        lVar2 = *(longlong *)((longlong)param_1 + 0x118) - (longlong)pvVar4;
        FUN_14553c660((longlong)pvVar3 + lVar2 + 0xe8);
        FUN_145381df0((longlong)pvVar3 + lVar2 + 0xc0);
        FUN_145381d30((longlong)pvVar3 + lVar2 + 0xc0);
        FUN_145355270();
        pvVar3 = (void *)((longlong)pvVar3 + 0x118);
      }
      if (param_1 != *(void **)((longlong)param_1 + 0x118)) {
        AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 0x118));
      }
    }
    *(void **)((longlong)param_1 + 0x118) = pvVar4;
    *(uint *)((longlong)param_1 + 0x124) = iVar6 + uVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1453557d0 FUN_1453557d0 body=19 status=ok
// SIG undefined FUN_1453557d0(void)

undefined4 * FUN_1453557d0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x168);
  return param_2;
}



// FUNCTION 1453557f0 FUN_1453557f0 body=12 status=ok
// SIG undefined FUN_1453557f0(void)

longlong FUN_1453557f0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x158) + 0x70;
}



// FUNCTION 145355800 FUN_145355800 body=8 status=ok
// SIG undefined FUN_145355800(void)

undefined8 FUN_145355800(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



// FUNCTION 145355810 FUN_145355810 body=303 status=ok
// SIG undefined FUN_145355810(void)

void FUN_145355810(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x148);
  if (*(uint *)(param_1 + 0x148) != 0) {
    lVar5 = uVar7 * 0x118;
    do {
      lVar3 = *(longlong *)(param_1 + 0x140);
      lVar1 = lVar5 + -0x118;
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
      uVar2 = *(uint *)(lVar5 + -0xc + lVar3);
      uVar4 = uVar2 & 0xf00;
      if ((0x300 < uVar4) || (((char)uVar2 == '\0' && (uVar4 != 0x300)))) {
        if (*(char *)(lVar5 + -8 + lVar3) == '\0') {
          *(undefined4 *)(lVar5 + -0xc + lVar3) = param_2;
          *(undefined1 *)(lVar5 + -8 + lVar3) = 0;
          *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x110 + lVar1) = 1;
        }
        else {
          if ((ulonglong)(lVar1 + lVar3) <
              (ulonglong)*(uint *)(param_1 + 0x148) * 0x118 + -0x118 + lVar3) {
            FUN_145355570();
          }
          lVar5 = (ulonglong)*(uint *)(param_1 + 0x148) * 0x118 + *(longlong *)(param_1 + 0x140);
          FUN_14553c660(lVar5 + -0x30);
          FUN_145381df0(lVar5 + -0x58);
          FUN_145381d30(lVar5 + -0x58);
          FUN_145355270(lVar5 + -0xf8);
          *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
        }
      }
      lVar5 = lVar1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 145355940 FUN_145355940 body=775 status=ok
// SIG undefined FUN_145355940(void)

undefined8 * FUN_145355940(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined2 uStack_cc;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (((uVar1 < *(uint *)(param_1 + 0x14c)) ||
      (cVar3 = FUN_145355670(param_1 + 0x28), cVar3 != '\0')) &&
     (uVar1 < *(uint *)(param_1 + 0x14c))) {
    uVar1 = *(uint *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x148) = uVar1 + 1;
    puVar5 = (undefined8 *)((ulonglong)uVar1 * 0x118 + *(longlong *)(param_1 + 0x140));
    if (puVar5 != (undefined8 *)0x0) {
      FUN_145355440(puVar5);
      local_80 = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x168);
      LOCK();
      UNLOCK();
      local_110 = 0;
      uStack_108 = 0x3f800000;
      uVar4 = DAT_14c7fdcb0 + 1;
      local_e0 = 0x3f800000;
      uStack_d8 = 0;
      local_c0 = (undefined **)0x0;
      uStack_b8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_118 = 0xffffffffffffffff;
      uStack_ec = 0x3f800000;
      uStack_e8 = 0x3f800000;
      uStack_e4 = 0xffff;
      uStack_f8 = 0;
      local_f0 = 0;
      local_100 = 0x3f800000;
      local_d0 = 0x3f800000;
      uStack_cc = 0;
      uStack_ca = 1;
      local_c8 = 0x3f800000;
      local_c4 = 0x3f800000;
      local_b0 = 0;
      local_a8 = 0;
      local_90 = 0;
      local_88 = 0x32;
      DAT_14c7fdcb0 = DAT_14c7fdcb0 + 1;
      FUN_145381d00(&local_78);
      uVar2 = uStack_98;
      local_c0 = &PTR_PTR_14c72f458;
      *puVar5 = param_2;
      puVar5[1] = uVar4 & 0xffffffffffffff;
      *(undefined4 *)(puVar5 + 2) = param_3;
      puVar5[3] = 0;
      puVar5[5] = local_110;
      puVar5[6] = uStack_108;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 0x12) = local_a8;
      puVar5[7] = local_100;
      puVar5[8] = uStack_f8;
      local_50 = 0;
      puVar5[9] = CONCAT44(uStack_ec,local_f0);
      puVar5[10] = CONCAT44(uStack_e4,uStack_e8);
      uStack_48 = 0;
      puVar5[0xb] = local_e0;
      puVar5[0xc] = uStack_d8;
      local_118 = 0;
      puVar5[0xd] = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,local_d0)));
      *(undefined4 *)(puVar5 + 0xe) = local_c8;
      local_30 = 0;
      *(undefined4 *)((longlong)puVar5 + 0x74) = local_c4;
      *(undefined4 *)(puVar5 + 0xf) = 0x4c72f458;
      *(undefined4 *)((longlong)puVar5 + 0x7c) = 1;
      *(undefined4 *)(puVar5 + 0x10) = (undefined4)uStack_b8;
      *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_b8._4_4_;
      local_2c = 0;
      puVar5[0x11] = local_b0;
      local_28 = 0;
      local_40 = 0;
      uStack_38 = 0;
      if ((puVar5[0x14] != 0) && (*(char *)(puVar5 + 0x15) != '\0')) {
        (**(code **)(*(longlong *)puVar5[0x13] + 0x10))();
        *(undefined1 *)(puVar5 + 0x15) = 0;
      }
      puVar5[0x13] = local_a0;
      puVar5[0x14] = uVar2;
      *(undefined1 *)(puVar5 + 0x16) = local_88;
      puVar5[0x18] = local_78;
      puVar5[0x19] = uStack_70;
      *(undefined4 *)(puVar5 + 0x17) = local_80;
      puVar5[0x1a] = local_68;
      puVar5[0x1b] = uStack_60;
      *(undefined1 *)(puVar5 + 0x21) = local_30;
      *(undefined4 *)((longlong)puVar5 + 0x10c) = local_2c;
      puVar5[0x1c] = local_58;
      *(undefined4 *)(puVar5 + 0x1d) = (undefined4)local_50;
      *(undefined4 *)((longlong)puVar5 + 0xec) = local_50._4_4_;
      *(undefined4 *)(puVar5 + 0x1e) = uStack_48;
      *(undefined4 *)((longlong)puVar5 + 0xf4) = uStack_44;
      *(undefined1 *)(puVar5 + 0x22) = local_28;
      puVar5[0x1f] = local_40;
      puVar5[0x20] = uStack_38;
      FUN_14553c660(&local_50);
      FUN_145381df0(&local_78);
      FUN_145381d30(&local_78);
      FUN_145355270(&local_118);
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}



// FUNCTION 145355c50 FUN_145355c50 body=147 status=ok
// SIG undefined FUN_145355c50(void)

longlong FUN_145355c50(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 8);
  plVar3 = *(longlong **)(lVar1 + 0x1f8);
  if (plVar3 != plVar3 + (ulonglong)*(uint *)(lVar1 + 0x200) * 0x11) {
    do {
      iVar2 = (**(code **)(*plVar3 + 8))(plVar3);
      if (iVar2 == param_2) {
        return plVar3[10];
      }
      plVar3 = plVar3 + 0x11;
    } while (plVar3 != (longlong *)
                       ((ulonglong)*(uint *)(lVar1 + 0x200) * 0x88 + *(longlong *)(lVar1 + 0x1f8)));
  }
  return 0;
}



// FUNCTION 145355e50 FUN_145355e50 body=116 status=ok
// SIG undefined FUN_145355e50(void)

ulonglong FUN_145355e50(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_28 [2];
  undefined8 *local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28[0] = *(undefined8 *)(param_1 + 0x170);
  local_18 = local_28;
  local_c = 1;
  local_10 = 1;
  uVar1 = FUN_1450e7d80(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 8),local_28,0);
  uVar2 = uVar1;
  if ((local_18 != (undefined8 *)0x0) &&
     (local_10 = 0, uVar2 = uVar1 & 0xffffffff, local_28 != local_18)) {
    AK::MemoryMgr::Free(4,local_18);
  }
  return uVar2;
}



// FUNCTION 145355ed0 FUN_145355ed0 body=202 status=ok
// SIG undefined FUN_145355ed0(void)

undefined8 FUN_145355ed0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_28 [2];
  undefined8 *local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28[0] = *(undefined8 *)(param_1 + 0x170);
  local_18 = local_28;
  uVar3 = 1;
  local_c = 1;
  local_10 = 1;
  puVar2 = (undefined8 *)
           FUN_1450e7e20(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 8),local_28,0,param_2);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 2;
  }
  else {
    uVar1 = puVar2[1];
    *param_3 = *puVar2;
    param_3[1] = uVar1;
    uVar1 = puVar2[3];
    param_3[2] = puVar2[2];
    param_3[3] = uVar1;
    uVar1 = puVar2[5];
    param_3[4] = puVar2[4];
    param_3[5] = uVar1;
    uVar1 = puVar2[7];
    param_3[6] = puVar2[6];
    param_3[7] = uVar1;
    uVar1 = puVar2[9];
    param_3[8] = puVar2[8];
    param_3[9] = uVar1;
    uVar1 = puVar2[0xb];
    param_3[10] = puVar2[10];
    param_3[0xb] = uVar1;
    uVar1 = puVar2[0xd];
    param_3[0xc] = puVar2[0xc];
    param_3[0xd] = uVar1;
    param_3[0xe] = puVar2[0xe];
  }
  if ((local_18 != (undefined8 *)0x0) && (local_10 = 0, local_28 != local_18)) {
    AK::MemoryMgr::Free(4,local_18);
  }
  return uVar3;
}



// FUNCTION 145355fa0 FUN_145355fa0 body=219 status=ok
// SIG undefined FUN_145355fa0(void)

undefined8 FUN_145355fa0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_38 [2];
  undefined8 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_38[0] = *(undefined8 *)(param_1 + 0x170);
  local_1c = 1;
  local_28 = local_38;
  local_20 = 1;
  lVar1 = FUN_1450e7e20(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 8),local_38,0,param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_145077820(*(undefined8 *)(param_1 + 0x170));
    if (lVar2 != 0) {
      uVar3 = FUN_14507b1a0(lVar2,lVar1);
      uVar4 = FUN_1450e6e00(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 8),uVar3);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      fVar5 = (float)uVar4 * 0.01;
      goto LAB_14535603e;
    }
  }
  fVar5 = 0.0;
  uVar3 = 0;
LAB_14535603e:
  if ((local_28 != (undefined8 *)0x0) && (local_20 = 0, local_38 != local_28)) {
    AK::MemoryMgr::Free(4,local_28);
  }
  return CONCAT44(uVar3,fVar5);
}



// FUNCTION 145356080 FUN_145356080 body=219 status=ok
// SIG undefined FUN_145356080(void)

undefined8 FUN_145356080(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_38 [2];
  undefined8 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_38[0] = *(undefined8 *)(param_1 + 0x170);
  local_1c = 1;
  local_28 = local_38;
  local_20 = 1;
  lVar1 = FUN_1450e7e20(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 8),local_38,0,param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_145077820(*(undefined8 *)(param_1 + 0x170));
    if (lVar2 != 0) {
      uVar3 = FUN_14507b1a0(lVar2,lVar1);
      uVar4 = FUN_1450e6ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 8),uVar3);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      fVar5 = (float)uVar4 * 0.01;
      goto LAB_14535611e;
    }
  }
  fVar5 = 0.0;
  uVar3 = 0;
LAB_14535611e:
  if ((local_28 != (undefined8 *)0x0) && (local_20 = 0, local_38 != local_28)) {
    AK::MemoryMgr::Free(4,local_28);
  }
  return CONCAT44(uVar3,fVar5);
}



// FUNCTION 145356180 FUN_145356180 body=226 status=ok
// SIG undefined FUN_145356180(void)

void FUN_145356180(longlong param_1,void *param_2,void *param_3)

{
  longlong lVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x148) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x140);
    uVar2 = *(uint *)(lVar1 + 0xb8);
    if ((*(uint *)(lVar1 + 0xb8) & 0xf00) == 0x300) {
      uVar2 = *(uint *)(lVar1 + 0xc0);
    }
    uVar2 = ((uVar2 & 0xff) + 7 & 0xfffffff8) * (*(uint *)(lVar1 + 0xc0) & 0xff);
    if (*(longlong *)(lVar1 + 0xe8) == 0) {
      if (uVar2 != 0) {
        memset(param_2,0,(ulonglong)uVar2 << 2);
        memset(param_3,0,(ulonglong)uVar2 << 2);
      }
    }
    else if (uVar2 != 0) {
      memcpy(param_2,*(void **)(lVar1 + 0x100),(ulonglong)uVar2 << 2);
      memcpy(param_3,*(void **)(*(longlong *)(param_1 + 0x140) + 0xf8),(ulonglong)uVar2 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 145356290 FUN_145356290 body=424 status=ok
// SIG undefined FUN_145356290(void)

undefined8 * FUN_145356290(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar3;
  
  *param_1 = &PTR_FUN_149d422d0;
  if (param_1[0x2b] != 0) {
    FUN_14537da20(param_1[0x2b],param_1);
  }
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x29);
  if (*(uint *)(param_1 + 0x29) != 0) {
    lVar6 = uVar1 * 0x118;
    uVar3 = uVar1;
    do {
      lVar6 = lVar6 + -0x118;
      uVar2 = (int)uVar3 - 1;
      uVar3 = (ulonglong)uVar2;
      if ((ulonglong)(lVar6 + param_1[0x28]) < uVar1 * 0x118 + -0x118 + param_1[0x28]) {
        FUN_145355570();
      }
      lVar5 = (ulonglong)*(uint *)(param_1 + 0x29) * 0x118 + param_1[0x28];
      FUN_14553c660(lVar5 + -0x30);
      FUN_145381df0(lVar5 + -0x58);
      FUN_145381d30(lVar5 + -0x58);
      FUN_145355270();
      *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + -1;
      uVar1 = (ulonglong)*(uint *)(param_1 + 0x29);
    } while (uVar2 != 0);
  }
  lVar6 = param_1[0x28];
  if (lVar6 != 0) {
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x29) * 0x118 + lVar6;
    if (lVar6 != lVar5) {
      lVar4 = lVar6 + 0xc0;
      do {
        FUN_14553c660(lVar4 + 0x28);
        FUN_145381df0(lVar4);
        FUN_145381d30(lVar4);
        FUN_145355270();
        lVar6 = lVar6 + 0x118;
        lVar4 = lVar4 + 0x118;
      } while (lVar6 != lVar5);
    }
    *(undefined4 *)(param_1 + 0x29) = 0;
    if (param_1 + 5 != (undefined8 *)param_1[0x28]) {
      AK::MemoryMgr::Free(0,(undefined8 *)param_1[0x28]);
    }
    param_1[0x28] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  }
  *param_1 = &PTR_FUN_149d42238;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 145356440 FUN_145356440 body=354 status=ok
// SIG undefined FUN_145356440(void)

undefined8 *
FUN_145356440(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,byte param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = AK::MemoryMgr::Malign(5,0x1a0,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_149d422d0;
    *(undefined4 *)((longlong)puVar1 + 0x194) = param_5;
    *(undefined4 *)(puVar1 + 1) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x3f800000;
    *(undefined4 *)(puVar1 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3f800000;
    puVar1[0x28] = 0;
    *(uint *)(puVar1 + 0x33) =
         ((*(uint *)(puVar1 + 0x33) & 0xfffffffe | (uint)param_6) & 0xfffffffd |
         (uint)param_6 + (uint)param_6) & 0xfffffffb;
    puVar1[0x29] = 0;
    puVar1[0x2a] = param_2;
    puVar1[0x2b] = param_3;
    puVar1[0x2c] = param_4;
    puVar1[0x2d] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    *(undefined4 *)(puVar1 + 0x31) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x18c) = 0xc5800000;
    *(undefined4 *)(puVar1 + 0x32) = 0xc5800000;
    if (*(longlong *)(param_3 + 0x70) == 0) {
      uVar2 = (**(code **)(*param_2 + 8))(param_2);
    }
    else {
      uVar2 = FUN_145377010();
    }
    puVar1[0x2e] = uVar2;
    FUN_145355940(puVar1,0,0);
    FUN_14537d9b0(param_3,puVar1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 **)(param_1 + 8) = puVar1;
      puVar1[4] = 0;
    }
    else {
      puVar1[4] = *(longlong *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = puVar1;
    }
  }
  return puVar1;
}



// FUNCTION 1453565b0 FUN_1453565b0 body=125 status=ok
// SIG undefined FUN_1453565b0(void)

undefined8 FUN_1453565b0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *_Dst;
  
  plVar1 = (longlong *)*param_1;
  _Dst = plVar1;
  while( true ) {
    if (_Dst == plVar1 + (ulonglong)*(uint *)(param_1 + 1) * 2) {
      return 2;
    }
    if (*_Dst == param_2) break;
    _Dst = _Dst + 2;
  }
  if (_Dst < plVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 2) {
    memmove(_Dst,_Dst + 2,
            (ulonglong)
            ((int)(plVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 2) - (int)_Dst & 0xfffffff0));
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(byte *)(param_1 + 2) = (*(byte *)(param_1 + 2) & 0xfc) != 0 | *(byte *)(param_1 + 2) & 0xfe;
  return 1;
}



// FUNCTION 145356630 FUN_145356630 body=294 status=ok
// SIG undefined FUN_145356630(void)

void FUN_145356630(ulonglong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  if ((uint)param_1[1] != 0) {
    plVar2 = (longlong *)*param_1;
    plVar9 = plVar2 + (ulonglong)(uint)param_1[1] * 2;
    while (plVar2 != plVar9) {
      plVar9 = (longlong *)*param_2;
      plVar7 = plVar9 + (ulonglong)*(uint *)(param_2 + 1) * 2;
      if (plVar9 != plVar7) {
        do {
          if (*plVar9 == *plVar2) goto LAB_1453566e6;
          plVar9 = plVar9 + 2;
        } while (plVar9 != plVar7);
      }
      *(undefined1 *)(plVar2 + 1) = *(undefined1 *)((longlong)param_2 + 0x11);
      uVar1 = *(uint *)(param_2 + 1);
      if ((uVar1 < *(uint *)((longlong)param_2 + 0xc)) ||
         ((cVar6 = FUN_145356820(param_2), cVar6 != '\0' &&
          (uVar1 < *(uint *)((longlong)param_2 + 0xc))))) {
        uVar1 = *(uint *)(param_2 + 1);
        *(uint *)(param_2 + 1) = uVar1 + 1;
        puVar8 = (undefined8 *)((ulonglong)uVar1 * 0x10 + *param_2);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          *(undefined1 *)(puVar8 + 1) = 0;
          uVar3 = *(undefined4 *)((longlong)plVar2 + 4);
          lVar5 = plVar2[1];
          uVar4 = *(undefined4 *)((longlong)plVar2 + 0xc);
          *(int *)puVar8 = (int)*plVar2;
          *(undefined4 *)((longlong)puVar8 + 4) = uVar3;
          *(int *)(puVar8 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uVar4;
          *(byte *)(param_2 + 2) =
               (*(byte *)(param_2 + 2) & 0xfc) != 0 | *(byte *)(param_2 + 2) & 0xfe;
        }
      }
LAB_1453566e6:
      plVar9 = (longlong *)((*param_1 - 0x10) + (ulonglong)(uint)param_1[1] * 0x10);
      if (plVar2 < plVar9) {
        uVar3 = *(undefined4 *)((longlong)plVar9 + 4);
        lVar5 = plVar9[1];
        uVar4 = *(undefined4 *)((longlong)plVar9 + 0xc);
        *(int *)plVar2 = (int)*plVar9;
        *(undefined4 *)((longlong)plVar2 + 4) = uVar3;
        *(int *)(plVar2 + 1) = (int)lVar5;
        *(undefined4 *)((longlong)plVar2 + 0xc) = uVar4;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      plVar9 = (longlong *)((ulonglong)(uint)param_1[1] * 0x10 + *param_1);
    }
    *(byte *)(param_2 + 2) = (*(byte *)(param_2 + 2) & 0xfc) != 0 | *(byte *)(param_2 + 2) & 0xfe;
    *(byte *)(param_1 + 2) = ((byte)param_1[2] & 0xfc) != 0 | (byte)param_1[2] & 0xfe;
  }
  return;
}



// FUNCTION 145356760 FUN_145356760 body=191 status=ok
// SIG undefined FUN_145356760(void)

undefined8 FUN_145356760(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)*param_1;
  plVar5 = plVar4 + (ulonglong)*(uint *)(param_1 + 1) * 2;
  if (plVar4 != plVar5) {
    do {
      if (*plVar4 == *param_2) {
        return 1;
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar5);
  }
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)((longlong)param_1 + 0x11);
  uVar1 = *(uint *)(param_1 + 1);
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
    cVar3 = FUN_145356820(param_1);
    if (cVar3 == '\0') {
      return 0x34;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
      return 0x34;
    }
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  plVar4 = (longlong *)((ulonglong)uVar1 * 0x10 + *param_1);
  if (plVar4 == (longlong *)0x0) {
    return 0x34;
  }
  *plVar4 = 0;
  *(undefined1 *)(plVar4 + 1) = 0;
  lVar2 = param_2[1];
  *plVar4 = *param_2;
  plVar4[1] = lVar2;
  *(byte *)(param_1 + 2) = (*(byte *)(param_1 + 2) & 0xfc) != 0 | *(byte *)(param_1 + 2) & 0xfe;
  return 1;
}



// FUNCTION 145356820 FUN_145356820 body=205 status=ok
// SIG undefined FUN_145356820(void)

undefined8 FUN_145356820(longlong *param_1)

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
            *(undefined1 *)(puVar5 + 1) = 0;
          }
          puVar1 = (undefined8 *)((longlong)puVar5 + (*param_1 - (longlong)puVar6));
          uVar4 = puVar1[1];
          *puVar5 = *puVar1;
          puVar5[1] = uVar4;
          puVar5 = puVar5 + 2;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1453568d0;
    }
  }
  else {
    puVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
LAB_1453568d0:
      *param_1 = (longlong)puVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1453568f0 FUN_1453568f0 body=394 status=ok
// SIG undefined FUN_1453568f0(void)

void FUN_1453568f0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)*param_1;
  if (plVar9 != plVar9 + (ulonglong)*(uint *)(param_1 + 1) * 2) {
    do {
      plVar6 = (longlong *)(*(code *)**(undefined8 **)*plVar9)();
      if ((((((*param_3 == 0) || (*plVar6 == *param_3)) &&
            (((int)param_3[1] == 0 || ((int)plVar6[1] == (int)param_3[1])))) &&
           (((int)param_3[2] == 0 || ((int)plVar6[2] == (int)param_3[2])))) &&
          (((char)param_3[3] == -1 || ((char)plVar6[3] == (char)param_3[3])))) &&
         ((((char)param_3[4] == -1 || ((char)plVar6[4] == (char)param_3[4])) &&
          ((param_3[5] == 0 || (plVar6[5] == param_3[5])))))) {
        plVar6 = (longlong *)*param_2;
        plVar7 = plVar6 + (ulonglong)*(uint *)(param_2 + 1) * 2;
        if (plVar6 != plVar7) {
          do {
            if (*plVar6 == *plVar9) goto LAB_145356a07;
            plVar6 = plVar6 + 2;
          } while (plVar6 != plVar7);
        }
        *(undefined1 *)(plVar9 + 1) = *(undefined1 *)((longlong)param_2 + 0x11);
        uVar1 = *(uint *)(param_2 + 1);
        if ((uVar1 < *(uint *)((longlong)param_2 + 0xc)) ||
           ((cVar5 = FUN_145356820(param_2), cVar5 != '\0' &&
            (uVar1 < *(uint *)((longlong)param_2 + 0xc))))) {
          uVar1 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar1 + 1;
          puVar8 = (undefined8 *)((ulonglong)uVar1 * 0x10 + *param_2);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = 0;
            *(undefined1 *)(puVar8 + 1) = 0;
            uVar2 = *(undefined4 *)((longlong)plVar9 + 4);
            lVar4 = plVar9[1];
            uVar3 = *(undefined4 *)((longlong)plVar9 + 0xc);
            *(int *)puVar8 = (int)*plVar9;
            *(undefined4 *)((longlong)puVar8 + 4) = uVar2;
            *(int *)(puVar8 + 1) = (int)lVar4;
            *(undefined4 *)((longlong)puVar8 + 0xc) = uVar3;
            *(byte *)(param_2 + 2) =
                 (*(byte *)(param_2 + 2) & 0xfc) != 0 | *(byte *)(param_2 + 2) & 0xfe;
          }
        }
LAB_145356a07:
        plVar6 = (longlong *)(*param_1 + -0x10 + (ulonglong)*(uint *)(param_1 + 1) * 0x10);
        if (plVar9 < plVar6) {
          uVar2 = *(undefined4 *)((longlong)plVar6 + 4);
          lVar4 = plVar6[1];
          uVar3 = *(undefined4 *)((longlong)plVar6 + 0xc);
          *(int *)plVar9 = (int)*plVar6;
          *(undefined4 *)((longlong)plVar9 + 4) = uVar2;
          *(int *)(plVar9 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar9 + 0xc) = uVar3;
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        *(byte *)(param_1 + 2) =
             (*(byte *)(param_1 + 2) & 0xfc) != 0 | *(byte *)(param_1 + 2) & 0xfe;
        *(byte *)(param_2 + 2) =
             (*(byte *)(param_2 + 2) & 0xfc) != 0 | *(byte *)(param_2 + 2) & 0xfe;
      }
      else {
        plVar9 = plVar9 + 2;
      }
    } while (plVar9 != (longlong *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1));
  }
  return;
}



// FUNCTION 145356a90 FUN_145356a90 body=226 status=ok
// SIG undefined FUN_145356a90(void)

undefined8 * FUN_145356a90(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = AK::MemoryMgr::Malloc(2,0x98);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_145356b80(puVar1,0,1,0);
      *puVar1 = &PTR_FUN_149d42400;
      return puVar1;
    }
  }
  else if (param_1 == 1) {
    puVar1 = AK::MemoryMgr::Malloc(2,0x98);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_145356b80(puVar1,1,1);
      *puVar1 = &PTR_FUN_149d42440;
      return puVar1;
    }
  }
  else {
    if (param_1 != 2) {
      return (undefined8 *)0x0;
    }
    puVar1 = AK::MemoryMgr::Malloc(2,0x98);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_145356b80(puVar1,2,0);
      *puVar1 = &PTR_FUN_149d42480;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145356b80 FUN_145356b80 body=180 status=ok
// SIG undefined FUN_145356b80(void)

undefined8 * FUN_145356b80(undefined8 *param_1,undefined4 param_2,byte param_3,char param_4)

{
  FUN_1453734e0();
  *param_1 = &PTR_FUN_149d423c0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x12) = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(byte *)((longlong)param_1 + 0x94) =
       (*(byte *)((longlong)param_1 + 0x94) & 0xfe | param_3) & 0xfd | param_4 * '\x02';
  return param_1;
}



// FUNCTION 145356c40 FUN_145356c40 body=245 status=ok
// SIG undefined FUN_145356c40(void)

void FUN_145356c40(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_149d423c0;
  FUN_1453526b0();
  iVar1 = *(int *)(param_1 + 0xf);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_14535ae20();
  }
  if ((void *)param_1[0xe] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0xe]);
    param_1[0xe] = 0;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  if ((void *)param_1[0x11] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[0x11]);
  }
  param_1[0x11] = 0;
  if ((void *)param_1[0x10] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[0x10]);
  }
  param_1[0x10] = 0;
  FUN_1453525f0();
  if ((void *)param_1[6] != (void *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[6]);
    param_1[6] = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  FUN_145373500(param_1);
  return;
}



// FUNCTION 145356d40 FUN_145356d40 body=344 status=ok
// SIG undefined FUN_145356d40(void)

undefined8 FUN_145356d40(longlong param_1,longlong param_2,undefined4 param_3)

{
  size_t sVar1;
  byte bVar2;
  void *pvVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *local_res10;
  undefined4 local_res18 [2];
  
  bVar2 = *(byte *)(param_2 + 4);
  pbVar6 = (byte *)(param_2 + 5);
  pvVar3 = *(void **)(param_1 + 0x80);
  local_res18[0] = param_3;
  if (bVar2 == 0) {
    if (pvVar3 != (void *)0x0) {
      AK::MemoryMgr::Free(0,pvVar3);
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
LAB_145356de3:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pvVar3 = *(void **)(param_1 + 0x88);
    local_res10 = pbVar6;
    if (bVar2 == 0) {
      if (pvVar3 != (void *)0x0) {
        AK::MemoryMgr::Free(0,pvVar3);
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
    }
    else {
      uVar7 = bVar2 + 4 & 0xfffffffc;
      pbVar4 = AK::MemoryMgr::Realloc(0,pvVar3,(ulonglong)(uVar7 + (uint)bVar2 * 8));
      if (pbVar4 == (byte *)0x0) goto LAB_145356e54;
      *pbVar4 = bVar2;
      memcpy(pbVar4 + 1,pbVar6,(ulonglong)bVar2);
      sVar1 = (ulonglong)bVar2 * 8;
      memcpy(pbVar4 + uVar7,pbVar6 + bVar2,sVar1);
      *(byte **)(param_1 + 0x88) = pbVar4;
      local_res10 = pbVar6 + bVar2 + sVar1;
    }
    uVar5 = FUN_145359df0(&local_res10,local_res18,param_1);
  }
  else {
    uVar7 = bVar2 + 4 & 0xfffffffc;
    pbVar4 = AK::MemoryMgr::Realloc(0,pvVar3,(ulonglong)(uVar7 + (uint)bVar2 * 4));
    if (pbVar4 != (byte *)0x0) {
      *pbVar4 = bVar2;
      memcpy(pbVar4 + 1,pbVar6,(ulonglong)bVar2);
      sVar1 = (ulonglong)bVar2 * 4;
      memcpy(pbVar4 + uVar7,pbVar6 + bVar2,sVar1);
      pbVar6 = pbVar6 + bVar2 + sVar1;
      *(byte **)(param_1 + 0x80) = pbVar4;
      goto LAB_145356de3;
    }
LAB_145356e54:
    uVar5 = 2;
  }
  return uVar5;
}



// FUNCTION 145356ea0 FUN_145356ea0 body=118 status=ok
// SIG undefined FUN_145356ea0(void)

void FUN_145356ea0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *local_48;
  undefined1 local_40;
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
  
  puVar1 = (undefined8 *)(**(code **)*param_2)(param_2);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  local_28 = *(undefined4 *)(puVar1 + 2);
  uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_20 = *(undefined4 *)(puVar1 + 3);
  uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x1c);
  local_18 = *(undefined4 *)(puVar1 + 4);
  uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_10 = *(undefined4 *)(puVar1 + 5);
  uStack_c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  plVar2 = (longlong *)FUN_145357e50(param_1 + 0x58,&local_38);
  if ((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) {
    param_1 = param_1 + 0x18;
  }
  else {
    param_1 = *plVar2 + 0x48;
  }
  local_40 = 0;
  local_48 = param_2;
  FUN_145356760(param_1,&local_48);
  return;
}



// FUNCTION 145356f20 FUN_145356f20 body=121 status=ok
// SIG undefined FUN_145356f20(void)

void FUN_145356f20(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
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
  
  puVar1 = (undefined8 *)(**(code **)*param_2)(param_2);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  local_28 = *(undefined4 *)(puVar1 + 2);
  uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_20 = *(undefined4 *)(puVar1 + 3);
  uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x1c);
  local_18 = *(undefined4 *)(puVar1 + 4);
  uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_10 = *(undefined4 *)(puVar1 + 5);
  uStack_c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  plVar2 = (longlong *)FUN_145357e50(param_1 + 0x58,&local_38);
  if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
    FUN_1453565b0(*plVar2 + 0x48,param_2);
    return;
  }
  FUN_1453565b0(param_1 + 0x18,param_2);
  return;
}



// FUNCTION 145356fa0 FUN_145356fa0 body=102 status=ok
// SIG undefined FUN_145356fa0(void)

void FUN_145356fa0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  *(char *)(param_1 + 0x41) = *(char *)(param_1 + 0x41) + '\x01';
  bVar1 = *(byte *)(param_1 + 0x40) + 4;
  *(byte *)(param_1 + 0x40) = (bVar1 ^ *(byte *)(param_1 + 0x40)) & 3 ^ bVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  local_14 = param_4;
  FUN_14535c8d0(param_1 + 0x30,&local_28);
  *(byte *)(param_1 + 0x40) =
       ((*(byte *)(param_1 + 0x40) >> 2) - 1) * '\x04' | *(byte *)(param_1 + 0x40) & 3;
  return;
}



// FUNCTION 145357010 FUN_145357010 body=61 status=ok
// SIG undefined FUN_145357010(void)

undefined8 FUN_145357010(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_145357e50(param_1 + 0x58);
  if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
    uVar1 = *(undefined4 *)(*plVar2 + 0xcc);
    *param_3 = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  *param_3 = 0;
  return 0;
}



// FUNCTION 145357050 FUN_145357050 body=1635 status=ok
// SIG undefined FUN_145357050(void)

int FUN_145357050(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                 undefined8 *param_5,char *param_6,char *param_7)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  undefined8 *_Src;
  undefined1 local_b8 [4];
  uint local_b4;
  ulonglong *local_b0;
  longlong local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  *param_6 = '\0';
  *param_7 = '\0';
  uVar5 = FUN_1453576c0();
  cVar4 = *(char *)((longlong)param_3 + 9);
  local_b4 = *(uint *)(param_2 + 2);
  if ((int)*(uint *)(param_2 + 2) <= (int)uVar5) {
    local_b4 = uVar5;
  }
  if ((((char)param_3[1] + 0x80U & 0xcf) == 0) && ((char)param_3[1] != -0x50)) {
    cVar3 = *(char *)((longlong)param_3 + 0xc);
  }
  else {
    cVar3 = -1;
  }
  local_a8 = *param_3;
  puVar9 = (ulonglong *)0x0;
  uStack_80 = param_3[6];
  iStack_a0 = *(int *)((longlong)param_3 + 0x24);
  local_98 = (int)param_3[4];
  uStack_90 = CONCAT31(uStack_90._1_3_,cVar4);
  local_88 = CONCAT31(local_88._1_3_,cVar3);
  if ((local_b4 == 0) && (uStack_80 == 0)) {
    local_b4 = 1;
LAB_145357114:
    uStack_80 = 0;
    if (cVar3 == -1) {
      cVar4 = -1;
      local_98 = 0;
      uStack_90 = CONCAT31(uStack_90._1_3_,0xff);
    }
    else {
      iStack_a0 = 0;
    }
    if (local_b4 == 1) {
      if ((iStack_a0 == 0) && (cVar3 == -1)) {
        local_b4 = 2;
LAB_14535717e:
        local_88 = CONCAT31(local_88._1_3_,0xff);
        uStack_90 = CONCAT31(uStack_90._1_3_,0xff);
        cVar4 = -1;
        local_98 = 0;
        iStack_a0 = 0;
        if (local_a8 == 0) {
          local_b4 = 3;
LAB_145357194:
          local_88 = CONCAT31(local_88._1_3_,0xff);
          uStack_90 = CONCAT31(uStack_90._1_3_,0xff);
          cVar4 = -1;
          local_98 = 0;
          iStack_a0 = 0;
          local_a8 = 0;
        }
      }
    }
    else if (1 < local_b4) {
      cVar4 = -1;
      local_98 = 0;
      cVar3 = -1;
      uStack_90 = CONCAT31(uStack_90._1_3_,0xff);
      local_88 = CONCAT31(local_88._1_3_,0xff);
      iStack_a0 = 0;
      if (local_b4 == 2) goto LAB_14535717e;
      if (2 < local_b4) goto LAB_145357194;
    }
  }
  else if (0 < (int)local_b4) goto LAB_145357114;
  local_b8[0] = 0;
  if (((((local_a8 == 0) && (iStack_a0 == 0)) && (local_98 == 0)) &&
      ((cVar4 == -1 && (cVar3 == -1)))) && (uStack_80 == 0)) {
    puVar13 = (ulonglong *)(param_1 + 0xc);
    if (((char)param_1[0xd] == '\0') && (puVar13 != (ulonglong *)0x0)) {
      *puVar13 = 0;
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
    puVar16 = puVar9;
    cVar4 = -1;
  }
  else {
    puVar16 = (ulonglong *)(param_1 + 0xc);
    if ((char)param_1[0xd] == '\0') {
      puVar16 = puVar9;
    }
    lVar8 = FUN_145357c60(param_1 + 0xe,local_a8,local_b8);
    if (lVar8 == 0) goto LAB_145357686;
    if (((iStack_a0 == 0) && (local_98 == 0)) &&
       (((char)uStack_90 == -1 && (((char)local_88 == -1 && (uStack_80 == 0)))))) {
LAB_1453572e2:
      if (*(char *)(lVar8 + 0x10) == '\0') {
        *(ulonglong *)(lVar8 + 8) = 0;
      }
      *(undefined1 *)(lVar8 + 0x10) = 1;
      puVar13 = (ulonglong *)(lVar8 + 8);
    }
    else {
      if (*(char *)(lVar8 + 0x10) != '\0') {
        puVar16 = (ulonglong *)(lVar8 + 8);
      }
      local_b0 = puVar16;
      lVar8 = FUN_14535abb0(lVar8 + 0x18,iStack_a0,local_b8);
      puVar13 = puVar9;
      if (lVar8 != 0) {
        if ((((local_98 == 0) && ((char)uStack_90 == -1)) && ((char)local_88 == -1)) &&
           (uStack_80 == 0)) goto LAB_1453572e2;
        if (*(char *)(lVar8 + 0x10) != '\0') {
          puVar16 = (ulonglong *)(lVar8 + 8);
          local_b0 = puVar16;
        }
        lVar8 = FUN_14535b390(lVar8 + 0x18,local_98,local_b8);
        if (lVar8 != 0) {
          if ((((char)uStack_90 == -1) && ((char)local_88 == -1)) && (uStack_80 == 0))
          goto LAB_1453572e2;
          if (*(char *)(lVar8 + 0x10) != '\0') {
            puVar16 = (ulonglong *)(lVar8 + 8);
            local_b0 = puVar16;
          }
          lVar8 = FUN_14535bb20(lVar8 + 0x18,(char)uStack_90,local_b8);
          if (lVar8 == 0) {
            puVar13 = (ulonglong *)0x0;
          }
          else {
            if (((char)local_88 == -1) && (uStack_80 == 0)) goto LAB_1453572e2;
            if (*(char *)(lVar8 + 0x10) != '\0') {
              puVar16 = (ulonglong *)(lVar8 + 8);
              local_b0 = puVar16;
            }
            lVar8 = FUN_14535c210(lVar8 + 0x18,(char)local_88,local_b8);
            uVar2 = uStack_80;
            if (lVar8 == 0) {
              puVar13 = (ulonglong *)0x0;
            }
            else if (uStack_80 == 0) {
              if (*(char *)(lVar8 + 0x10) == '\0') {
                *(ulonglong *)(lVar8 + 8) = 0;
              }
              *(undefined1 *)(lVar8 + 0x10) = 1;
              puVar13 = (ulonglong *)(lVar8 + 8);
            }
            else {
              if (*(char *)(lVar8 + 0x10) != '\0') {
                local_b0 = (ulonglong *)(lVar8 + 8);
              }
              uVar5 = *(uint *)(lVar8 + 0x20);
              puVar16 = puVar9;
              if (uVar5 != 0) {
                do {
                  iVar7 = (uVar5 >> 1) + (uint)puVar16;
                  puVar11 = (ulonglong *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar8 + 0x18));
                  uVar15 = *puVar11;
                  if (uVar15 == uStack_80) goto LAB_145357446;
                  uVar6 = iVar7 + 1;
                  if (uStack_80 <= uVar15) {
                    uVar6 = (uint)puVar16;
                  }
                  puVar16 = (ulonglong *)(ulonglong)uVar6;
                  uVar6 = uVar5 - 1;
                  if (uStack_80 <= uVar15) {
                    uVar6 = uVar5;
                  }
                  uVar5 = uVar6 >> 1;
                } while (uVar5 != 0);
              }
              uVar5 = *(uint *)(lVar8 + 0x20);
              lVar14 = (longlong)(int)puVar16 * 0x10;
              puVar11 = puVar9;
              if (*(longlong *)(lVar8 + 0x18) + lVar14 == 0) {
                if (((uVar5 < *(uint *)(lVar8 + 0x24)) ||
                    (cVar4 = FUN_14535c6d0(lVar8 + 0x18), cVar4 != '\0')) &&
                   (uVar5 < *(uint *)(lVar8 + 0x24))) {
                  uVar5 = *(uint *)(lVar8 + 0x20);
                  *(uint *)(lVar8 + 0x20) = uVar5 + 1;
                  puVar11 = (ulonglong *)((ulonglong)uVar5 * 0x10 + *(longlong *)(lVar8 + 0x18));
                  if (puVar11 != (ulonglong *)0x0) {
                    *puVar11 = 0;
                    puVar11[1] = 0;
                  }
                  goto LAB_145357439;
                }
              }
              else {
                uVar15 = lVar14 >> 4;
                if (((uVar5 < *(uint *)(lVar8 + 0x24)) ||
                    (cVar4 = FUN_14535c6d0(lVar8 + 0x18), cVar4 != '\0')) &&
                   (uVar5 < *(uint *)(lVar8 + 0x24))) {
                  uVar5 = (uint)uVar15;
                  lVar14 = (uVar15 & 0xffffffff) * 0x10;
                  _Src = (undefined8 *)(*(longlong *)(lVar8 + 0x18) + lVar14);
                  if (uVar5 < *(uint *)(lVar8 + 0x20)) {
                    memmove(_Src + 2,_Src,(ulonglong)((*(uint *)(lVar8 + 0x20) - uVar5) * 0x10));
                  }
                  if (_Src != (undefined8 *)0x0) {
                    *_Src = 0;
                    _Src[1] = 0;
                  }
                  *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + 1;
                  puVar11 = (ulonglong *)(*(longlong *)(lVar8 + 0x18) + lVar14);
LAB_145357439:
                  if (puVar11 != (ulonglong *)0x0) {
                    *puVar11 = uVar2;
                  }
                }
              }
LAB_145357446:
              puVar13 = puVar11 + 1;
              puVar16 = local_b0;
              if (puVar11 == (ulonglong *)0x0) {
                puVar13 = puVar9;
              }
            }
          }
        }
      }
    }
    cVar4 = (char)local_88;
  }
  iVar7 = 2;
  if (puVar13 == (ulonglong *)0x0) {
LAB_145357686:
    FUN_145357f30(param_1 + 0xb,&local_a8);
    return 0x34;
  }
  puVar11 = (ulonglong *)*puVar13;
  *param_6 = '\0';
  if (((local_b4 == 1) && (cVar4 != -1)) && ((char)param_3[1] != '\0')) {
    cVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_3);
    if (cVar4 == '\0') goto LAB_1453575fa;
LAB_1453574c2:
    if ((puVar11 != (ulonglong *)0x0) && ((int)puVar11[0x18] != 4)) {
      if (((*(byte *)((longlong)param_1 + 0x94) & 2) != 0) &&
         ((*(int *)((longlong)param_3 + 0x2c) - 1U & 0xfffffffd) == 0)) {
        FUN_14535e1b0(puVar11,param_3,*param_2);
        *param_7 = '\x01';
      }
      puVar10 = (ulonglong *)*puVar13;
      puVar9 = puVar11;
LAB_145357565:
      if (puVar10 != puVar9) {
        *(int *)((longlong)puVar9 + 0xbc) = *(int *)((longlong)puVar9 + 0xbc) + 1;
        if (*puVar13 != 0) {
          FUN_145359db0();
        }
        *puVar13 = (ulonglong)puVar9;
      }
      if (param_4 == (longlong *)0x0) {
        iVar7 = 1;
      }
      else {
        if (*param_4 == 0) {
          FUN_14538ea00(param_4);
        }
        if (*param_4 != 0) {
          iVar7 = FUN_14538e290(*param_4,puVar9,param_3,param_2);
        }
        if ((iVar7 == 1) && (iVar1 = (int)param_4[1], iVar1 != -1)) {
          if (*param_4 == 0) {
            *(int *)(param_4 + 1) = iVar1;
            *param_5 = puVar9;
          }
          else {
            FUN_14538e3e0(*param_4,iVar1);
            *param_5 = puVar9;
          }
          goto LAB_14535762a;
        }
      }
      *param_5 = puVar9;
      goto LAB_14535762a;
    }
    if ((*(int *)((longlong)param_3 + 0x2c) == 0) && (local_b4 != 0)) goto LAB_1453575fa;
    puVar9 = (ulonglong *)FUN_14535e090((int)param_1[0x12],param_1,local_b4,&local_a8);
    if (puVar9 != (ulonglong *)0x0) {
      FUN_14535e1b0(puVar9,param_3,*param_2);
      *param_7 = '\x01';
      *param_6 = '\x01';
    }
    puVar10 = (ulonglong *)*puVar13;
    if (puVar9 != (ulonglong *)0x0) goto LAB_145357565;
  }
  else {
    if (*(int *)((longlong)param_3 + 0x2c) != 3) goto LAB_1453574c2;
LAB_1453575fa:
    puVar10 = (ulonglong *)*puVar13;
  }
  if (puVar10 == (ulonglong *)0x0) {
    FUN_145357f30(param_1 + 0xb,&local_a8);
    *param_5 = puVar9;
    return 2;
  }
  *param_5 = puVar9;
  if (puVar9 == (ulonglong *)0x0) {
    return 2;
  }
LAB_14535762a:
  if (*param_6 != '\0') {
    if ((puVar16 == (ulonglong *)0x0) || (plVar12 = (longlong *)(*puVar16 + 0x48), *puVar16 == 0)) {
      plVar12 = param_1 + 3;
    }
    uStack_70 = CONCAT44(uStack_9c,iStack_a0);
    local_78 = local_a8;
    local_68 = local_98;
    uStack_64 = uStack_94;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    local_58 = local_88;
    uStack_54 = uStack_84;
    uStack_50 = (undefined4)uStack_80;
    uStack_4c = uStack_80._4_4_;
    FUN_1453568f0(plVar12,*puVar13 + 0x48,&local_78);
  }
  if (*param_7 == '\0') {
    return iVar7;
  }
  FUN_14535e310(puVar9);
  return iVar7;
}



// FUNCTION 1453576c0 FUN_1453576c0 body=97 status=ok
// SIG undefined FUN_1453576c0(void)

/* WARNING: Removing unreachable block (ram,0x0001453576f8) */

undefined4 FUN_1453576c0(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 local_res8 [8];
  
  pbVar1 = *(byte **)(param_1 + 0x80);
  pbVar2 = (byte *)0x0;
  local_res8[0] = DAT_14c738640;
  if (pbVar1 != (byte *)0x0) {
    while( true ) {
      uVar3 = (int)pbVar2 + 1;
      if (((byte *)(ulonglong)uVar3)[(longlong)pbVar1] == 0) break;
      pbVar2 = (byte *)(ulonglong)uVar3;
      if (*pbVar1 <= uVar3) {
        return DAT_14c738640;
      }
    }
    pbVar2 = pbVar1 + (longlong)pbVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
  }
  pbVar1 = (byte *)local_res8;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  return *(undefined4 *)pbVar1;
}



// FUNCTION 145357730 FUN_145357730 body=135 status=ok
// SIG undefined FUN_145357730(void)

void FUN_145357730(int *param_1,longlong *param_2)

{
  if (*param_1 == 0) {
    if (param_2[5] != 0) {
      return;
    }
    *param_1 = 1;
  }
  else if (*param_1 < 1) {
    return;
  }
  param_2[5] = 0;
  if ((char)param_2[4] == -1) {
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined1 *)(param_2 + 3) = 0xff;
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_1 == 1) {
    if ((int)param_2[1] != 0) {
      return;
    }
    if ((char)param_2[4] != -1) {
      return;
    }
    *param_1 = 2;
  }
  else if (*param_1 < 2) {
    return;
  }
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_2 + 3) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*param_1 == 2) {
    if (*param_2 == 0) {
      *param_1 = 3;
      *param_2 = 0;
      return;
    }
  }
  else if (2 < *param_1) {
    *param_2 = 0;
  }
  return;
}



// FUNCTION 1453577c0 FUN_1453577c0 body=125 status=ok
// SIG undefined FUN_1453577c0(void)

/* WARNING: Removing unreachable block (ram,0x00014535780c) */

undefined8 FUN_1453577c0(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  int local_res8 [8];
  
  if (*(int *)(param_1 + 0x90) == 0) {
    return 0;
  }
  pbVar1 = *(byte **)(param_1 + 0x80);
  local_res8[0] = DAT_14c738644;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    do {
      uVar4 = (int)uVar3 + 1;
      if (pbVar1[uVar4] == 1) {
        pbVar2 = (byte *)local_res8;
        if (pbVar1 + uVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) != (byte *)0x0) {
          pbVar2 = pbVar1 + uVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        }
        return CONCAT71((int7)((ulonglong)pbVar2 >> 8),*(int *)pbVar2 != 0);
      }
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  return CONCAT71((int7)((ulonglong)local_res8 >> 8),DAT_14c738644 != 0);
}



// FUNCTION 145357840 FUN_145357840 body=14 status=ok
// SIG undefined FUN_145357840(void)

void FUN_145357840(longlong param_1,undefined8 param_2)

{
  FUN_14535a010(param_1 + 0x58,0,param_2);
  return;
}



// FUNCTION 145357850 FUN_145357850 body=579 status=ok
// SIG undefined FUN_145357850(void)

void FUN_145357850(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  if (((((*(longlong *)(param_2 + 8) == 0) && (*(int *)(param_2 + 0x10) == 0)) &&
       (*(int *)(param_2 + 0x18) == 0)) &&
      ((*(char *)(param_2 + 0x20) == -1 && (*(char *)(param_2 + 0x28) == -1)))) &&
     (*(longlong *)(param_2 + 0x30) == 0)) {
    plVar3 = (longlong *)(param_1 + 0x60);
    plVar4 = plVar5;
    if (*(char *)(param_1 + 0x68) == '\0') {
      return;
    }
    goto LAB_145357909;
  }
  plVar4 = (longlong *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x68) == '\0') {
    plVar4 = plVar5;
  }
  lVar2 = FUN_145357bb0(param_1 + 0x70);
  if (lVar2 == 0) {
    return;
  }
  plVar3 = plVar5;
  if (((*(int *)(param_2 + 0x10) == 0) && (*(int *)(param_2 + 0x18) == 0)) &&
     ((*(char *)(param_2 + 0x20) == -1 &&
      ((*(char *)(param_2 + 0x28) == -1 && (*(longlong *)(param_2 + 0x30) == 0)))))) {
    plVar3 = (longlong *)(lVar2 + 8);
    if (*(char *)(lVar2 + 0x10) != '\0') goto LAB_145357909;
  }
  else {
    if (*(char *)(lVar2 + 0x10) != '\0') {
      plVar4 = (longlong *)(lVar2 + 8);
    }
    lVar2 = FUN_14535ab00(lVar2 + 0x18);
    if (lVar2 != 0) {
      if ((((*(int *)(param_2 + 0x18) == 0) && (*(char *)(param_2 + 0x20) == -1)) &&
          (*(char *)(param_2 + 0x28) == -1)) && (*(longlong *)(param_2 + 0x30) == 0)) {
LAB_1453579b3:
        if (*(char *)(lVar2 + 0x10) != '\0') {
          plVar3 = (longlong *)(lVar2 + 8);
        }
        goto LAB_145357909;
      }
      if (*(char *)(lVar2 + 0x10) != '\0') {
        plVar4 = (longlong *)(lVar2 + 8);
      }
      lVar2 = FUN_14535b2e0(lVar2 + 0x18);
      if (lVar2 != 0) {
        if (((*(char *)(param_2 + 0x20) == -1) && (*(char *)(param_2 + 0x28) == -1)) &&
           (*(longlong *)(param_2 + 0x30) == 0)) {
          if (*(char *)(lVar2 + 0x10) != '\0') {
            plVar3 = (longlong *)(lVar2 + 8);
          }
          goto LAB_145357909;
        }
        if (*(char *)(lVar2 + 0x10) != '\0') {
          plVar4 = (longlong *)(lVar2 + 8);
        }
        lVar2 = FUN_14535ba70(lVar2 + 0x18);
        if (lVar2 != 0) {
          if ((*(char *)(param_2 + 0x28) == -1) && (*(longlong *)(param_2 + 0x30) == 0)) {
            if (*(char *)(lVar2 + 0x10) != '\0') {
              plVar3 = (longlong *)(lVar2 + 8);
            }
            goto LAB_145357909;
          }
          if (*(char *)(lVar2 + 0x10) != '\0') {
            plVar4 = (longlong *)(lVar2 + 8);
          }
          lVar2 = FUN_14535c160(lVar2 + 0x18);
          if (lVar2 != 0) {
            if (*(longlong *)(param_2 + 0x30) != 0) {
              if (*(char *)(lVar2 + 0x10) != '\0') {
                plVar4 = (longlong *)(lVar2 + 8);
              }
              lVar2 = FUN_14535c7a0(lVar2 + 0x18);
              plVar3 = (longlong *)(lVar2 + 8);
              if (lVar2 == 0) {
                plVar3 = plVar5;
              }
              goto LAB_145357909;
            }
            goto LAB_1453579b3;
          }
        }
      }
    }
  }
  plVar3 = plVar5;
LAB_145357909:
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
    if ((plVar4 == (longlong *)0x0) || (lVar2 = *plVar4 + 0x48, *plVar4 == 0)) {
      lVar2 = param_1 + 0x18;
    }
    FUN_145356630(*plVar3 + 0x48,lVar2);
    cVar1 = FUN_145357f30(param_1 + 0x58,param_2 + 8);
    if (cVar1 != '\0') {
      FUN_14507e270(DAT_14c791028,*(undefined4 *)(param_1 + 0x10),param_2 + 8,0);
      FUN_145359db0(param_2);
    }
  }
  return;
}



// FUNCTION 145357aa0 FUN_145357aa0 body=262 status=ok
// SIG undefined FUN_145357aa0(void)

undefined8 FUN_145357aa0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  __uint64 _Var5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var5 = (ulonglong)(iVar3 + uVar2) * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          puVar6 = (undefined8 *)((longlong)pvVar4 + 0x20);
          do {
            puVar1 = puVar6 + -4;
            if (puVar1 != (undefined8 *)0x0) {
              *puVar1 = 0;
              puVar6[-3] = 0;
              *(undefined1 *)(puVar6 + -2) = 0;
              puVar6[-1] = 0;
              *puVar6 = 0;
            }
            FUN_14535ad90(puVar1,(longlong)puVar6 + *param_1 + (-0x20 - (longlong)pvVar4));
            puVar6 = puVar6 + 5;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145357b8f;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_145357b8f:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145357bb0 FUN_145357bb0 body=162 status=ok
// SIG undefined FUN_145357bb0(void)

/* WARNING: Removing unreachable block (ram,0x000145357c2a) */

longlong FUN_145357bb0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = (uVar4 >> 1) + iVar5;
      uVar1 = *(ulonglong *)(*param_1 + (longlong)iVar3 * 0x28);
      if (uVar1 == param_2) {
        return *param_1 + (longlong)iVar3 * 0x28;
      }
      uVar2 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar4;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar4 = uVar2 >> 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 145357c60 FUN_145357c60 body=338 status=ok
// SIG undefined FUN_145357c60(void)

undefined8 * FUN_145357c60(longlong *param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar4 = (undefined8 *)FUN_145357dc0();
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined8 *)0x0) {
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_145357aa0(param_1), cVar3 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar4 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined1 *)(puVar4 + 2) = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      goto LAB_145357d8b;
    }
  }
  else {
    uVar2 = ((longlong)puVar4 - *param_1) / 0x28;
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_145357aa0(param_1), cVar3 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar5 = (uint)uVar2;
      lVar1 = (uVar2 & 0xffffffff) * 0x28;
      puVar4 = (undefined8 *)(*param_1 + lVar1);
      if (uVar5 < *(uint *)(param_1 + 1)) {
        memmove(puVar4 + 5,puVar4,(ulonglong)((*(uint *)(param_1 + 1) - uVar5) * 0x28));
      }
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      puVar4 = (undefined8 *)(*param_1 + lVar1);
LAB_145357d8b:
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *puVar4 = param_2;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145357dc0 FUN_145357dc0 body=142 status=ok
// SIG undefined FUN_145357dc0(void)

longlong FUN_145357dc0(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      lVar1 = (longlong)iVar3 * 0x28;
      uVar2 = *(ulonglong *)(lVar1 + *param_1);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return *param_1 + lVar1;
      }
      uVar4 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar2) {
        uVar4 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar4 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar6 * 0x28;
}



// FUNCTION 145357e50 FUN_145357e50 body=223 status=ok
// SIG undefined FUN_145357e50(void)

longlong FUN_145357e50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uStack_2c;
  uint uStack_24;
  undefined7 uStack_1f;
  undefined7 uStack_17;
  
  if ((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
     ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0))))
  goto LAB_145357ed0;
  lVar1 = FUN_145357bb0(param_1 + 0x18,*param_2);
  if (lVar1 == 0) {
    if (*param_2 == 0) goto LAB_145357ed0;
    *param_2 = 0;
    lVar1 = FUN_145357bb0(param_1 + 0x18,0);
    if (lVar1 == 0) goto LAB_145357ed0;
  }
  lVar1 = FUN_14535b050(lVar1,param_2 + 1);
  if (lVar1 != 0) {
    return lVar1;
  }
LAB_145357ed0:
  *param_2 = 0;
  param_2[1] = (ulonglong)uStack_2c << 0x20;
  param_2[2] = (ulonglong)uStack_24 << 0x20;
  param_2[3] = CONCAT71(uStack_1f,0xff);
  param_2[4] = CONCAT71(uStack_17,0xff);
  param_2[5] = 0;
  lVar1 = param_1 + 8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 145357f30 FUN_145357f30 body=474 status=ok
// SIG undefined FUN_145357f30(void)

undefined1 FUN_145357f30(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  
  if (((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
LAB_1453580f5:
    uVar2 = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x10) = 0;
    return uVar2;
  }
  lVar3 = FUN_145357bb0(param_1 + 0x18);
  if (lVar3 == 0) goto LAB_1453580f5;
  if ((((int)param_2[1] != 0) || ((int)param_2[2] != 0)) ||
     (((char)param_2[3] != -1 || (((char)param_2[4] != -1 || (param_2[5] != 0)))))) {
    lVar4 = FUN_14535ab00(lVar3 + 0x18,(int)param_2[1]);
    if (lVar4 != 0) {
      uVar2 = FUN_14535b790(lVar4,param_2 + 2);
      if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(lVar4 + 0x20) == 0)) {
        FUN_14535b600(lVar4);
        pvVar5 = (void *)FUN_14535ab00(lVar3 + 0x18,(int)param_2[1]);
        if (pvVar5 != (void *)0x0) {
          pvVar1 = (void *)(*(longlong *)(lVar3 + 0x18) +
                           (ulonglong)(*(int *)(lVar3 + 0x20) - 1) * 0x28);
          if (pvVar5 < pvVar1) {
            memmove(pvVar5,(void *)((longlong)pvVar5 + 0x28),
                    (ulonglong)(uint)((int)(((longlong)pvVar1 - (longlong)pvVar5) / 0x28) * 0x28));
          }
          *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
        }
      }
      goto LAB_145358064;
    }
  }
  uVar2 = *(undefined1 *)(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x10) = 0;
LAB_145358064:
  if ((*(char *)(lVar3 + 0x10) == '\0') && (*(int *)(lVar3 + 0x20) == 0)) {
    FUN_14535ae20(lVar3);
    pvVar5 = (void *)FUN_145357bb0(param_1 + 0x18,*param_2);
    if (pvVar5 != (void *)0x0) {
      pvVar1 = (void *)(*(longlong *)(param_1 + 0x18) +
                       (ulonglong)(*(int *)(param_1 + 0x20) - 1) * 0x28);
      if (pvVar5 < pvVar1) {
        memmove(pvVar5,(void *)((longlong)pvVar5 + 0x28),
                (ulonglong)(uint)((int)(((longlong)pvVar1 - (longlong)pvVar5) / 0x28) * 0x28));
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    }
  }
  return uVar2;
}



// FUNCTION 145358110 FUN_145358110 body=52 status=ok
// SIG undefined FUN_145358110(void)

undefined8 FUN_145358110(undefined8 param_1,ulonglong param_2)

{
  FUN_145356c40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 145358150 FUN_145358150 body=2501 status=ok
// SIG undefined FUN_145358150(void)

void FUN_145358150(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  float *pfVar3;
  float *pfVar4;
  byte *pbVar5;
  longlong lVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float local_res8 [2];
  float local_res10 [2];
  longlong local_res20;
  undefined8 uStack_e0;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined4 local_b8;
  float *local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined4 local_98;
  float *local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  undefined4 local_68;
  float *local_60;
  
  pbVar1 = *(byte **)(param_1 + 0x80);
  pfVar9 = (float *)0x0;
  local_res8[0] = DAT_14c738648;
  pfVar8 = pfVar9;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar9;
    do {
      uVar7 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar7 + (longlong)pbVar1) == 2) {
        pfVar8 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  pfVar3 = local_res8;
  if (pfVar8 != (float *)0x0) {
    pfVar3 = pfVar8;
  }
  *(float *)(param_2 + 0x18) = *pfVar3;
  pbVar1 = *(byte **)(param_1 + 0x80);
  local_res8[0] = DAT_14c73864c;
  pfVar8 = pfVar9;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar9;
    do {
      uVar7 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar7 + (longlong)pbVar1) == 3) {
        pfVar4 = local_res8;
        if ((float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
            (float *)0x0) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
        }
        local_res10[0] = DAT_14c738650;
        local_res8[0] = *pfVar4;
        goto LAB_14535822f;
      }
      pfVar3 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  local_res10[0] = DAT_14c738650;
  if (pbVar1 != (byte *)0x0) {
LAB_14535822f:
    pfVar3 = pfVar9;
    do {
      uVar7 = (int)pfVar3 + 1;
      if (pbVar1[uVar7] == 4) {
        pfVar8 = (float *)(((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar3 * 4 +
                          *(longlong *)(param_1 + 0x80));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  pfVar3 = local_res10;
  if (pfVar8 != (float *)0x0) {
    pfVar3 = pfVar8;
  }
  *(float *)(param_2 + 0x28) = *pfVar3;
  pbVar1 = *(byte **)(param_1 + 0x80);
  local_res20 = CONCAT44(local_res20._4_4_,DAT_14c738654);
  pfVar8 = pfVar9;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar9;
    do {
      uVar7 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar7 + (longlong)pbVar1) == 5) {
        local_res10[0] = DAT_14c738658;
        pbVar5 = (byte *)&local_res20;
        if (pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          pbVar5 = pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        }
        iVar13 = *(int *)pbVar5;
        goto LAB_1453582b7;
      }
      pfVar3 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  local_res10[0] = DAT_14c738658;
  iVar13 = DAT_14c738654;
  if (pbVar1 != (byte *)0x0) {
LAB_1453582b7:
    pfVar3 = pfVar9;
    do {
      uVar7 = (int)pfVar3 + 1;
      if (pbVar1[uVar7] == 6) {
        pfVar8 = (float *)(((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar3 * 4 +
                          *(longlong *)(param_1 + 0x80));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  pfVar3 = local_res10;
  if (pfVar8 != (float *)0x0) {
    pfVar3 = pfVar8;
  }
  *(float *)(param_2 + 0x2c) = *pfVar3;
  pbVar1 = *(byte **)(param_1 + 0x80);
  local_res10[0] = DAT_14c73865c;
  pfVar8 = pfVar9;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar9;
    do {
      uVar7 = (int)pfVar3 + 1;
      if (pbVar1[uVar7] == 7) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar3 * 4);
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  pfVar3 = local_res10;
  if (pfVar8 != (float *)0x0) {
    pfVar3 = pfVar8;
  }
  *(float *)(param_2 + 0x30) = *pfVar3;
  pbVar1 = *(byte **)(param_1 + 0x80);
  local_res10[0] = DAT_14c738660;
  pfVar8 = pfVar9;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar9;
    do {
      uVar7 = (int)pfVar3 + 1;
      if (pbVar1[uVar7] == 8) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar3 * 4);
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  local_c8[0] = 0;
  local_60 = (float *)(param_2 + 0x20);
  pfVar3 = local_res10;
  if (pfVar8 != (float *)0x0) {
    pfVar3 = pfVar8;
  }
  local_b8 = 1;
  local_a8 = 2;
  puVar10 = local_c8;
  local_98 = 3;
  local_c0 = param_2 + 0x18;
  local_b0 = local_res8;
  local_a0 = param_2 + 0x28;
  local_90 = local_res10;
  *(float *)(param_2 + 0x20) = *pfVar3;
  lVar6 = *(longlong *)(param_1 + 0x48);
  local_80 = param_2 + 0x2c;
  local_res10[0] = (float)iVar13;
  local_88 = 4;
  local_78 = 5;
  lVar12 = (ulonglong)*(uint *)(param_1 + 0x50) * 8;
  local_70 = param_2 + 0x30;
  local_68 = 6;
  local_res20 = lVar6;
  pfVar8 = pfVar9;
  do {
    FUN_14507ff20(g_pGameSyncMgr,&local_res20,lVar12 + lVar6,*puVar10,param_3 + 8,
                  *(undefined8 *)(puVar10 + 2));
    lVar6 = *(longlong *)(param_1 + 0x48);
    lVar12 = (ulonglong)*(uint *)(param_1 + 0x50) * 8;
    if (local_res20 == lVar6 + lVar12) break;
    uVar7 = (int)pfVar8 + 1;
    pfVar8 = (float *)(ulonglong)uVar7;
    puVar10 = puVar10 + 4;
  } while ((int)uVar7 < 7);
  *(int *)(param_2 + 0x24) = (int)local_res10[0];
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    pfVar8 = pfVar9;
    do {
      uVar7 = (int)pfVar8 + 1;
      if (pbVar1[uVar7] == 2) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8);
        if (pfVar8 != (float *)0x0) {
          fVar15 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar15 = (float)(uint)(DAT_14c791078 >> 0x21) * 4.656613e-10 * (pfVar8[1] - *pfVar8);
          }
          fVar15 = fVar15 + *pfVar8 + *(float *)(param_2 + 0x18);
          if (0.0 <= fVar15) {
            if (100.0 <= fVar15) {
              fVar15 = 100.0;
            }
          }
          else {
            fVar15 = 0.0;
          }
          *(float *)(param_2 + 0x18) = fVar15;
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) * 0.01;
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    pfVar8 = pfVar9;
    do {
      uVar7 = (int)pfVar8 + 1;
      if (pbVar1[uVar7] == 4) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8);
        if (pfVar8 != (float *)0x0) {
          fVar15 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar15 = (float)(uint)(DAT_14c791078 >> 0x21) * 4.656613e-10 * (pfVar8[1] - *pfVar8);
          }
          fVar15 = fVar15 + *pfVar8 + *(float *)(param_2 + 0x28);
          if (0.0 <= fVar15) {
            if (20000.0 <= fVar15) {
              fVar15 = 20000.0;
            }
          }
          else {
            fVar15 = 0.0;
          }
          *(float *)(param_2 + 0x28) = fVar15;
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    pfVar8 = pfVar9;
    do {
      uVar7 = (int)pfVar8 + 1;
      if (pbVar1[uVar7] == 7) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8);
        if (pfVar8 != (float *)0x0) {
          fVar15 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar15 = (float)(uint)(DAT_14c791078 >> 0x21) * 4.656613e-10 * (pfVar8[1] - *pfVar8);
          }
          fVar15 = fVar15 + *pfVar8 + *(float *)(param_2 + 0x30);
          if (0.0 <= fVar15) {
            if (100.0 <= fVar15) {
              fVar15 = 100.0;
            }
          }
          else {
            fVar15 = 0.0;
          }
          *(float *)(param_2 + 0x30) = fVar15;
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) * 0.01;
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    pfVar8 = pfVar9;
    do {
      uVar7 = (int)pfVar8 + 1;
      if (pbVar1[uVar7] == 6) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8);
        if (pfVar8 != (float *)0x0) {
          fVar15 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar15 = (float)(uint)(DAT_14c791078 >> 0x21) * 4.656613e-10 * (pfVar8[1] - *pfVar8);
          }
          fVar15 = fVar15 + *pfVar8 + *(float *)(param_2 + 0x2c);
          if (0.0 <= fVar15) {
            if (100.0 <= fVar15) {
              fVar15 = 100.0;
            }
          }
          else {
            fVar15 = 0.0;
          }
          *(float *)(param_2 + 0x2c) = fVar15;
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) * 0.01;
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    pfVar8 = pfVar9;
    do {
      uVar7 = (int)pfVar8 + 1;
      if (pbVar1[uVar7] == 3) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8);
        if (pfVar8 != (float *)0x0) {
          fVar15 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar15 = (float)(uint)(DAT_14c791078 >> 0x21) * 4.656613e-10 * (pfVar8[1] - *pfVar8);
          }
          local_res8[0] = fVar15 + *pfVar8 + local_res8[0];
          if (0.0 <= local_res8[0]) {
            if (3.4028235e+38 < local_res8[0]) {
              local_res8[0] = 3.4028235e+38;
            }
          }
          else {
            local_res8[0] = 0.0;
          }
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  if ((double)DAT_14c72f42c * (double)local_res8[0] <= 0.0) {
    uVar7 = 0xbfe00000;
  }
  else {
    uVar7 = 0x3fe00000;
  }
  *(int *)(param_2 + 0x1c) =
       (int)((double)DAT_14c72f42c * (double)local_res8[0] + (double)((ulonglong)uVar7 << 0x20));
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    do {
      uVar7 = (int)pfVar9 + 1;
      if (pbVar1[uVar7] == 8) {
        pfVar8 = (float *)(((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar9 * 8 +
                          *(longlong *)(param_1 + 0x88));
        if (pfVar8 != (float *)0x0) {
          fVar15 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar15 = (float)(uint)(DAT_14c791078 >> 0x21) * 4.656613e-10 * (pfVar8[1] - *pfVar8);
          }
          fVar14 = fVar15 + *pfVar8 + *(float *)(param_2 + 0x20);
          fVar15 = -180.0;
          if ((-180.0 <= fVar14) && (fVar15 = fVar14, 180.0 <= fVar14)) {
            fVar15 = 180.0;
          }
          *(float *)(param_2 + 0x20) = fVar15;
        }
        break;
      }
      pfVar9 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
  fVar15 = *(float *)(param_2 + 0x20);
  uVar11 = DAT_14c791078 >> 0x21;
  FUN_145359c40(param_2 + 0x38,DAT_14c72f42c,param_2 + 0x24);
  iVar13 = *(int *)(param_2 + 0x4c);
  plVar2 = (longlong *)(param_2 + 0x50);
  lVar12 = *plVar2;
  if (*(int *)(param_2 + 0x24) == 0) {
    fVar14 = 6.2831855;
  }
  else {
    fVar14 = 1.0;
  }
  fVar15 = fVar14 * fVar15 * 0.0027777778;
  uStack_e0._0_4_ = (undefined4)*(undefined8 *)(param_2 + 0x40);
  uStack_e0 = CONCAT44(fVar15,(undefined4)uStack_e0);
  if (iVar13 == 1) {
    fVar15 = fVar15 + 0.25;
    uStack_e0 = CONCAT44(fVar15,(undefined4)uStack_e0);
    lVar12 = *plVar2;
  }
  else if (iVar13 == 3) {
    fVar15 = fVar15 + 0.5;
    uStack_e0 = CONCAT44(fVar15,(undefined4)uStack_e0);
    lVar12 = *plVar2;
  }
  else if (iVar13 == 5) {
    lVar12 = uVar11 * 0x5851f42d4c957f2d + 1;
  }
  if (fVar15 < 0.0) {
    fVar15 = fVar15 + fVar14;
    uStack_e0 = CONCAT44(fVar15,(undefined4)uStack_e0);
  }
  if (fVar14 <= fVar15) {
    fVar15 = fVar15 - fVar14;
    uStack_e0 = CONCAT44(fVar15,(undefined4)uStack_e0);
  }
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x40) = uStack_e0;
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(int *)(param_2 + 0x4c) = iVar13;
  *(longlong *)(param_2 + 0x50) = lVar12;
  if (iVar13 == 0) {
    fVar14 = 6.2831855;
  }
  else {
    if (iVar13 == 5) goto LAB_145358ae8;
    fVar14 = 1.0;
  }
  fVar15 = fmodf(fVar15,fVar14);
  *(float *)(param_2 + 0x44) = fVar15;
LAB_145358ae8:
  *(undefined4 *)(param_2 + 8) = 0x7fffffff;
  return;
}



// FUNCTION 145358b50 FUN_145358b50 body=52 status=ok
// SIG undefined FUN_145358b50(void)

undefined8 FUN_145358b50(undefined8 param_1,ulonglong param_2)

{
  FUN_145356c40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 145358b90 FUN_145358b90 body=2364 status=ok
// SIG undefined FUN_145358b90(void)

void FUN_145358b90(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float fVar11;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  longlong local_f8 [2];
  undefined4 local_e8 [2];
  float *local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined4 local_c8;
  float *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  float *local_a0;
  undefined4 local_98;
  float *local_90;
  
  pbVar1 = *(byte **)(param_1 + 0x80);
  pfVar10 = (float *)0x0;
  local_res8[0] = DAT_14c738664;
  pfVar8 = pfVar10;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar10;
    do {
      uVar5 = (int)pfVar3 + 1;
      if (pbVar1[uVar5] == 9) {
        pfVar4 = local_res8;
        if ((float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
            (float *)0x0) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
        }
        local_res10[0] = DAT_14c738668;
        local_res8[0] = *pfVar4;
        goto LAB_145358c1d;
      }
      pfVar3 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  local_res10[0] = DAT_14c738668;
  if (pbVar1 != (byte *)0x0) {
LAB_145358c1d:
    pfVar3 = pfVar10;
    do {
      uVar5 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 10) {
        pfVar8 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  pfVar3 = local_res10;
  if (pfVar8 != (float *)0x0) {
    pfVar3 = pfVar8;
  }
  *(float *)(param_2 + 0x20) = *pfVar3;
  pbVar1 = *(byte **)(param_1 + 0x80);
  local_res10[0] = DAT_14c73866c;
  pfVar8 = pfVar10;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar10;
    do {
      uVar5 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0xb) {
        pfVar4 = local_res10;
        if ((float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
            (float *)0x0) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
        }
        local_res18[0] = DAT_14c738670;
        local_res10[0] = *pfVar4;
        goto LAB_145358caf;
      }
      pfVar3 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  local_res18[0] = DAT_14c738670;
  if (pbVar1 != (byte *)0x0) {
LAB_145358caf:
    pfVar3 = pfVar10;
    do {
      uVar5 = (int)pfVar3 + 1;
      if (pbVar1[uVar5] == 0xc) {
        pfVar8 = (float *)(((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar3 * 4 +
                          *(longlong *)(param_1 + 0x80));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  pfVar3 = local_res18;
  if (pfVar8 != (float *)0x0) {
    pfVar3 = pfVar8;
  }
  *(float *)(param_2 + 0x24) = *pfVar3;
  pbVar1 = *(byte **)(param_1 + 0x80);
  local_res18[0] = DAT_14c738674;
  pfVar8 = pfVar10;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar10;
    do {
      uVar5 = (int)pfVar3 + 1;
      if (pbVar1[uVar5] == 0xd) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar3 * 4);
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  pfVar3 = local_res18;
  if (pfVar8 != (float *)0x0) {
    pfVar3 = pfVar8;
  }
  local_res18[0] = DAT_14c738678;
  local_res20[0] = *pfVar3;
  pfVar8 = pfVar10;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar10;
    do {
      uVar5 = (int)pfVar3 + 1;
      if (pbVar1[uVar5] == 0xe) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar3 * 4);
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  local_e8[0] = 8;
  local_d8 = 9;
  pfVar3 = local_res18;
  if (pfVar8 != (float *)0x0) {
    pfVar3 = pfVar8;
  }
  local_c8 = 10;
  local_b8 = 0xb;
  puVar9 = local_e8;
  local_a8 = 0xc;
  local_98 = 0xd;
  local_res18[0] = *pfVar3;
  local_e0 = local_res8;
  local_d0 = param_2 + 0x20;
  local_c0 = local_res10;
  local_b0 = param_2 + 0x24;
  local_a0 = local_res20;
  local_90 = local_res18;
  lVar7 = (ulonglong)*(uint *)(param_1 + 0x50) * 8;
  pfVar8 = pfVar10;
  local_f8[0] = lVar6;
  do {
    FUN_14507ff20(g_pGameSyncMgr,local_f8,lVar7 + lVar6,*puVar9,param_3 + 8,
                  *(undefined8 *)(puVar9 + 2));
    lVar6 = *(longlong *)(param_1 + 0x48);
    lVar7 = (ulonglong)*(uint *)(param_1 + 0x50) * 8;
    if (local_f8[0] == lVar6 + lVar7) break;
    uVar5 = (int)pfVar8 + 1;
    pfVar8 = (float *)(ulonglong)uVar5;
    puVar9 = puVar9 + 4;
  } while ((int)uVar5 < 6);
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    pfVar8 = pfVar10;
    do {
      uVar5 = (int)pfVar8 + 1;
      if (pbVar1[uVar5] == 9) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8);
        if (pfVar8 != (float *)0x0) {
          fVar11 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar11 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                     (pfVar8[1] - *pfVar8);
          }
          local_res8[0] = fVar11 + *pfVar8 + local_res8[0];
          if (0.0 <= local_res8[0]) {
            if (3.4028235e+38 < local_res8[0]) {
              local_res8[0] = 3.4028235e+38;
            }
          }
          else {
            local_res8[0] = 0.0;
          }
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  if ((double)DAT_14c72f42c * (double)local_res8[0] <= 0.0) {
    lVar6 = 0xbfe00000;
  }
  else {
    lVar6 = 0x3fe00000;
  }
  *(int *)(param_2 + 0x1c) =
       (int)((double)(lVar6 << 0x20) + (double)DAT_14c72f42c * (double)local_res8[0]);
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    pfVar8 = pfVar10;
    do {
      uVar5 = (int)pfVar8 + 1;
      if (pbVar1[uVar5] == 0xb) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8);
        if (pfVar8 != (float *)0x0) {
          fVar11 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar11 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                     (pfVar8[1] - *pfVar8);
          }
          local_res10[0] = fVar11 + *pfVar8 + local_res10[0];
          if (0.0 <= local_res10[0]) {
            if (3.4028235e+38 < local_res10[0]) {
              local_res10[0] = 3.4028235e+38;
            }
          }
          else {
            local_res10[0] = 0.0;
          }
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  if ((double)DAT_14c72f42c * (double)local_res10[0] <= 0.0) {
    lVar6 = 0xbfe00000;
  }
  else {
    lVar6 = 0x3fe00000;
  }
  *(int *)(param_2 + 0x28) =
       (int)((double)DAT_14c72f42c * (double)local_res10[0] + (double)(lVar6 << 0x20));
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    pfVar8 = pfVar10;
    do {
      uVar5 = (int)pfVar8 + 1;
      if (pbVar1[uVar5] == 0xe) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8);
        if (pfVar8 != (float *)0x0) {
          fVar11 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar11 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                     (pfVar8[1] - *pfVar8);
          }
          local_res18[0] = fVar11 + *pfVar8 + local_res18[0];
          if (0.0 <= local_res18[0]) {
            if (3.4028235e+38 < local_res18[0]) {
              local_res18[0] = 3.4028235e+38;
            }
          }
          else {
            local_res18[0] = 0.0;
          }
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  if ((double)DAT_14c72f42c * (double)local_res18[0] <= 0.0) {
    lVar6 = 0xbfe00000;
  }
  else {
    lVar6 = 0x3fe00000;
  }
  *(int *)(param_2 + 0x2c) =
       (int)((double)DAT_14c72f42c * (double)local_res18[0] + (double)(lVar6 << 0x20));
  if (local_res20[0] < 0.0) {
    iVar2 = 0x7fffffff;
  }
  else {
    pbVar1 = *(byte **)(param_1 + 0x88);
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar10;
      do {
        uVar5 = (int)pfVar8 + 1;
        if (pbVar1[uVar5] == 0xd) {
          pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8
                            );
          if (pfVar8 != (float *)0x0) {
            fVar11 = 0.0;
            if (pfVar8[1] - *pfVar8 != 0.0) {
              DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
              fVar11 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                       (pfVar8[1] - *pfVar8);
            }
            local_res20[0] = fVar11 + *pfVar8 + local_res20[0];
            if (0.0 <= local_res20[0]) {
              if (3.4028235e+38 < local_res20[0]) {
                local_res20[0] = 3.4028235e+38;
              }
            }
            else {
              local_res20[0] = 0.0;
            }
          }
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    uVar5 = 0x3fe00000;
    if ((double)DAT_14c72f42c * (double)local_res20[0] <= 0.0) {
      uVar5 = 0xbfe00000;
    }
    iVar2 = (int)((double)DAT_14c72f42c * (double)local_res20[0] +
                 (double)((ulonglong)uVar5 << 0x20)) + *(int *)(param_2 + 0x28) +
            *(int *)(param_2 + 0x1c);
  }
  *(int *)(param_2 + 8) = iVar2;
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    pfVar8 = pfVar10;
    do {
      uVar5 = (int)pfVar8 + 1;
      if (pbVar1[uVar5] == 0xc) {
        pfVar8 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8);
        if (pfVar8 != (float *)0x0) {
          fVar11 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar11 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                     (pfVar8[1] - *pfVar8);
          }
          fVar11 = fVar11 + *pfVar8 + *(float *)(param_2 + 0x24);
          if (0.0 <= fVar11) {
            if (100.0 <= fVar11) {
              fVar11 = 100.0;
            }
          }
          else {
            fVar11 = 0.0;
          }
          *(float *)(param_2 + 0x24) = fVar11;
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  *(float *)(param_2 + 0x24) = *(float *)(param_2 + 0x24) * 0.01;
  pbVar1 = *(byte **)(param_1 + 0x88);
  if (pbVar1 != (byte *)0x0) {
    do {
      uVar5 = (int)pfVar10 + 1;
      if (pbVar1[uVar5] == 10) {
        pfVar8 = (float *)(((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar10 * 8 +
                          *(longlong *)(param_1 + 0x88));
        if (pfVar8 != (float *)0x0) {
          fVar11 = 0.0;
          if (pfVar8[1] - *pfVar8 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar11 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                     (pfVar8[1] - *pfVar8);
          }
          fVar11 = fVar11 + *pfVar8 + *(float *)(param_2 + 0x20);
          if (0.0 <= fVar11) {
            if (100.0 <= fVar11) {
              fVar11 = 100.0;
            }
          }
          else {
            fVar11 = 0.0;
          }
          *(float *)(param_2 + 0x20) = fVar11;
        }
        break;
      }
      pfVar10 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  *(float *)(param_2 + 0x20) = *(float *)(param_2 + 0x20) * 0.01;
  fVar11 = *(float *)(param_3 + 0xcc);
  if (0.0 <= fVar11) {
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    *(float *)(param_2 + 0x18) = fVar11;
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1453594e0 FUN_1453594e0 body=159 status=ok
// SIG undefined FUN_1453594e0(void)

bool FUN_1453594e0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 local_18 [6];
  
  pbVar3 = *(byte **)(param_1 + 0x80);
  pbVar6 = (byte *)0x0;
  local_18[0] = DAT_14c73867c;
  if (pbVar3 != (byte *)0x0) {
    pbVar4 = pbVar6;
    do {
      uVar5 = (int)pbVar4 + 1;
      if (((byte *)(ulonglong)uVar5)[(longlong)pbVar3] == 0xf) {
        pbVar6 = pbVar3 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc);
        break;
      }
      pbVar4 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar3);
  }
  pbVar3 = (byte *)local_18;
  if (pbVar6 != (byte *)0x0) {
    pbVar3 = pbVar6;
  }
  iVar2 = *(int *)pbVar3;
  cVar1 = *(char *)(param_2 + 8);
  if (cVar1 == '\0') {
    return iVar2 == 1;
  }
  if (iVar2 == 1) {
    if ((*(int *)(param_2 + 0x2c) != 3) && (cVar1 != -0x80)) {
      return true;
    }
  }
  else if (iVar2 == 2) {
    if (cVar1 == -0x80) {
      return true;
    }
    if ((cVar1 == -0x70) && (*(char *)(param_2 + 0xd) == '\0')) {
      return true;
    }
  }
  return false;
}



// FUNCTION 145359580 FUN_145359580 body=52 status=ok
// SIG undefined FUN_145359580(void)

undefined8 FUN_145359580(undefined8 param_1,ulonglong param_2)

{
  FUN_145356c40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1453595c0 FUN_1453595c0 body=1419 status=ok
// SIG undefined FUN_1453595c0(void)

void FUN_1453595c0(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  byte *pbVar2;
  int iVar3;
  float *pfVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  float fVar14;
  float local_res8 [2];
  float local_res10 [2];
  int local_88 [2];
  longlong local_80;
  undefined4 local_78 [2];
  float *local_70;
  undefined4 local_68;
  float *local_60;
  
  pbVar2 = *(byte **)(param_1 + 0x80);
  pfVar11 = (float *)0x0;
  local_res8[0] = DAT_14c738680;
  pfVar10 = pfVar11;
  if (pbVar2 != (byte *)0x0) {
    pfVar4 = pfVar11;
    do {
      uVar6 = (int)pfVar4 + 1;
      if (pbVar2[uVar6] == 0x10) {
        pfVar10 = (float *)(pbVar2 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc))
        ;
        break;
      }
      pfVar4 = (float *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar2);
  }
  uVar6 = 0x3fe00000;
  pfVar4 = local_res8;
  if (pfVar10 != (float *)0x0) {
    pfVar4 = pfVar10;
  }
  if ((float)DAT_14c72f42c * *pfVar4 <= 0.0) {
    fVar1 = -0.5;
  }
  else {
    fVar1 = 0.5;
  }
  *(int *)(param_2 + 0x18) = (int)(fVar1 + (float)DAT_14c72f42c * *pfVar4);
  pbVar2 = *(byte **)(param_1 + 0x80);
  local_88[0] = DAT_14c738684;
  pfVar10 = pfVar11;
  if (pbVar2 != (byte *)0x0) {
    pfVar4 = pfVar11;
    do {
      uVar8 = (int)pfVar4 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar8 + (longlong)pbVar2) == 0x11) {
        local_res8[0] = DAT_14c738644;
        pbVar5 = (byte *)local_88;
        if (pbVar2 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          pbVar5 = pbVar2 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
        }
        iVar13 = *(int *)pbVar5;
        goto LAB_1453596d3;
      }
      pfVar4 = (float *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar2);
  }
  local_res8[0] = DAT_14c738644;
  pbVar5 = (byte *)0x0;
  iVar13 = DAT_14c738684;
  if (pbVar2 != (byte *)0x0) {
LAB_1453596d3:
    pfVar4 = pfVar11;
    do {
      uVar8 = (int)pfVar4 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar8 + (longlong)pbVar2) == 1) {
        pbVar5 = *(byte **)(param_1 + 0x80);
        pfVar10 = (float *)(pbVar5 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc))
        ;
        goto LAB_1453596ff;
      }
      pfVar4 = (float *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar2);
    pbVar5 = *(byte **)(param_1 + 0x80);
  }
LAB_1453596ff:
  pfVar4 = local_res8;
  if (pfVar10 != (float *)0x0) {
    pfVar4 = pfVar10;
  }
  fVar1 = *pfVar4;
  local_res8[0] = DAT_14c738688;
  pfVar10 = pfVar11;
  if (pbVar5 != (byte *)0x0) {
    pfVar4 = pfVar11;
    do {
      uVar8 = (int)pfVar4 + 1;
      if (pbVar5[uVar8] == 0x12) {
        pfVar10 = (float *)(((ulonglong)(*pbVar5 + 4) & 0xfffffffc) + (longlong)pfVar4 * 4 +
                           *(longlong *)(param_1 + 0x80));
        break;
      }
      pfVar4 = (float *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar5);
  }
  pbVar2 = *(byte **)(param_1 + 0x80);
  pfVar4 = local_res8;
  if (pfVar10 != (float *)0x0) {
    pfVar4 = pfVar10;
  }
  local_res10[0] = DAT_14c73868c;
  local_res8[0] = *pfVar4;
  pfVar10 = pfVar11;
  if (pbVar2 != (byte *)0x0) {
    pfVar4 = pfVar11;
    do {
      uVar8 = (int)pfVar4 + 1;
      if (pbVar2[uVar8] == 0x13) {
        pfVar10 = (float *)(pbVar2 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc) + (longlong)pfVar4 * 4)
        ;
        break;
      }
      pfVar4 = (float *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar2);
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  local_78[0] = 0xe;
  local_68 = 0xf;
  puVar12 = local_78;
  pfVar4 = local_res10;
  if (pfVar10 != (float *)0x0) {
    pfVar4 = pfVar10;
  }
  local_80 = lVar7;
  local_res10[0] = *pfVar4;
  local_70 = local_res8;
  local_60 = local_res10;
  lVar9 = (ulonglong)*(uint *)(param_1 + 0x50) * 8;
  pfVar10 = pfVar11;
  do {
    FUN_14507ff20(g_pGameSyncMgr,&local_80,lVar9 + lVar7,*puVar12,param_3 + 8,
                  *(undefined8 *)(puVar12 + 2));
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar9 = (ulonglong)*(uint *)(param_1 + 0x50) * 8;
    if (local_80 == lVar7 + lVar9) break;
    uVar8 = (int)pfVar10 + 1;
    pfVar10 = (float *)(ulonglong)uVar8;
    puVar12 = puVar12 + 4;
  } while ((int)uVar8 < 2);
  pbVar2 = *(byte **)(param_1 + 0x88);
  if (pbVar2 != (byte *)0x0) {
    pfVar10 = pfVar11;
    do {
      uVar8 = (int)pfVar10 + 1;
      if (pbVar2[uVar8] == 0x12) {
        pfVar10 = (float *)(pbVar2 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc) + (longlong)pfVar10 * 8
                           );
        if (pfVar10 != (float *)0x0) {
          fVar14 = 0.0;
          if (pfVar10[1] - *pfVar10 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar14 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                     (pfVar10[1] - *pfVar10);
          }
          local_res8[0] = fVar14 + *pfVar10 + local_res8[0];
          if (0.25 <= local_res8[0]) {
            if (4.0 < local_res8[0]) {
              local_res8[0] = 4.0;
            }
          }
          else {
            local_res8[0] = 0.25;
          }
        }
        break;
      }
      pfVar10 = (float *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar2);
  }
  *(float *)(param_2 + 0x20) = local_res8[0];
  pbVar2 = *(byte **)(param_1 + 0x88);
  if (pbVar2 != (byte *)0x0) {
    pfVar10 = pfVar11;
    do {
      uVar8 = (int)pfVar10 + 1;
      if (pbVar2[uVar8] == 0x13) {
        pfVar10 = (float *)(pbVar2 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc) + (longlong)pfVar10 * 8
                           );
        if (pfVar10 != (float *)0x0) {
          fVar14 = 0.0;
          if (pfVar10[1] - *pfVar10 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar14 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                     (pfVar10[1] - *pfVar10);
          }
          local_res10[0] = fVar14 + *pfVar10 + local_res10[0];
          if (0.0 <= local_res10[0]) {
            if (4.0 < local_res10[0]) {
              local_res10[0] = 4.0;
            }
          }
          else {
            local_res10[0] = 0.0;
          }
        }
        break;
      }
      pfVar10 = (float *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar2);
  }
  if ((double)DAT_14c72f42c * (double)local_res10[0] <= 0.0) {
    uVar6 = 0xbfe00000;
  }
  *(int *)(param_2 + 0x24) =
       (int)((double)((ulonglong)uVar6 << 0x20) + (double)DAT_14c72f42c * (double)local_res10[0]);
  if (iVar13 == 0) {
    iVar13 = 0x7fffffff;
  }
  else {
    pbVar2 = *(byte **)(param_1 + 0x88);
    if (pbVar2 == (byte *)0x0) {
LAB_145359b0b:
      iVar13 = iVar13 * *(int *)(param_2 + 0x18);
    }
    else {
      do {
        uVar6 = (int)pfVar11 + 1;
        if (pbVar2[uVar6] == 0x11) {
          if (pbVar2 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc) + (longlong)pfVar11 * 8 ==
              (byte *)0x0) goto LAB_145359b0b;
          iVar3 = FUN_1450ee480();
          iVar13 = iVar13 + iVar3;
          if (0 < iVar13) {
            if (100 < iVar13) {
              iVar13 = 100;
            }
            goto LAB_145359b0b;
          }
          iVar13 = *(int *)(param_2 + 0x18);
          goto LAB_145359b15;
        }
        pfVar11 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar2);
      iVar13 = iVar13 * *(int *)(param_2 + 0x18);
    }
  }
LAB_145359b15:
  *(int *)(param_2 + 0x1c) = iVar13;
  iVar3 = 0x7fffffff;
  if (fVar1 != 0.0) {
    iVar3 = iVar13;
  }
  *(int *)(param_2 + 8) = iVar3;
  return;
}



// FUNCTION 145359b60 FUN_145359b60 body=159 status=ok
// SIG undefined FUN_145359b60(void)

bool FUN_145359b60(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 local_18 [6];
  
  pbVar3 = *(byte **)(param_1 + 0x80);
  pbVar6 = (byte *)0x0;
  local_18[0] = DAT_14c73867c;
  if (pbVar3 != (byte *)0x0) {
    pbVar4 = pbVar6;
    do {
      uVar5 = (int)pbVar4 + 1;
      if (((byte *)(ulonglong)uVar5)[(longlong)pbVar3] == 0xf) {
        pbVar6 = pbVar3 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc);
        break;
      }
      pbVar4 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar3);
  }
  pbVar3 = (byte *)local_18;
  if (pbVar6 != (byte *)0x0) {
    pbVar3 = pbVar6;
  }
  iVar2 = *(int *)pbVar3;
  cVar1 = *(char *)(param_2 + 8);
  if (cVar1 == '\0') {
    return iVar2 == 1;
  }
  if (iVar2 == 1) {
    if ((*(int *)(param_2 + 0x2c) != 3) && (cVar1 != -0x80)) {
      return true;
    }
  }
  else if (iVar2 == 2) {
    if (cVar1 == -0x80) {
      return true;
    }
    if ((cVar1 == -0x70) && (*(char *)(param_2 + 0xd) == '\0')) {
      return true;
    }
  }
  return false;
}



// FUNCTION 145359c00 FUN_145359c00 body=52 status=ok
// SIG undefined FUN_145359c00(void)

undefined8 FUN_145359c00(undefined8 param_1,ulonglong param_2)

{
  FUN_145356c40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 145359c40 FUN_145359c40 body=356 status=ok
// SIG undefined FUN_145359c40(void)

void FUN_145359c40(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  double dVar7;
  float fVar8;
  undefined8 extraout_XMM0_Qb;
  
  fVar6 = 0.0;
  fVar8 = (float)param_3[2];
  if (fVar8 == 0.0) {
    fVar8 = 1.0;
  }
  else {
    dVar7 = (double)param_2;
    dVar3 = (double)(float)param_3[1];
    if (dVar7 <= (double)(float)param_3[1]) {
      dVar3 = dVar7;
    }
    dVar3 = log((dVar7 * 0.5) / dVar3);
    dVar3 = exp(-(dVar3 * (double)fVar8));
    auVar4._0_8_ = cos(((dVar3 * dVar7 * 0.5) / dVar7) * 6.283185307179586);
    auVar4._8_8_ = extraout_XMM0_Qb;
    dVar7 = 2.0 - auVar4._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar7 * dVar7 - 1.0;
    auVar5 = sqrtpd(auVar4,auVar5);
    fVar6 = (float)(auVar5._0_8_ - dVar7);
    fVar8 = fVar6 + 1.0;
  }
  if ((float)param_2 <= (float)param_3[1]) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (float)param_3[1] / (float)param_2;
  }
  *(float *)(param_1 + 0x10) = fVar2;
  if (*param_3 == 0) {
    *(float *)(param_1 + 0x10) = fVar2 * 6.2831855;
  }
  *(float *)(param_1 + 4) = fVar8;
  *(float *)(param_1 + 8) = fVar6;
  iVar1 = *param_3;
  if (*(int *)(param_1 + 0x14) != iVar1) {
    if (*(int *)(param_1 + 0x14) == 0) {
      fVar8 = *(float *)(param_1 + 0xc) * 0.15915494;
    }
    else {
      if (iVar1 != 0) goto LAB_145359d96;
      fVar8 = *(float *)(param_1 + 0xc) * 6.2831855;
    }
    *(float *)(param_1 + 0xc) = fVar8;
    iVar1 = *param_3;
  }
LAB_145359d96:
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



// FUNCTION 145359db0 FUN_145359db0 body=60 status=ok
// SIG undefined FUN_145359db0(void)

undefined4 FUN_145359db0(longlong *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((longlong)param_1 + 0xbc);
  *piVar1 = *piVar1 + -1;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xbc);
  if (*piVar1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
    AK::MemoryMgr::Free(0,param_1);
  }
  return uVar2;
}



// FUNCTION 145359df0 FUN_145359df0 body=541 status=ok
// SIG undefined FUN_145359df0(void)

undefined8 FUN_145359df0(longlong *param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  char cVar9;
  void *pvVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  
  uVar4 = *(ushort *)*param_1;
  *param_1 = (longlong)((ushort *)*param_1 + 1);
  uVar15 = (uint)uVar4;
  if (uVar15 == 0) {
    return 1;
  }
  plVar1 = (longlong *)(param_3 + 0x48);
  uVar14 = 0;
  if (uVar15 <= *(uint *)(param_3 + 0x54)) goto LAB_145359ecc;
  uVar16 = *(uint *)(param_3 + 0x50);
  if ((void *)*plVar1 == (void *)0x0) {
    pvVar10 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar4 << 3);
    bVar8 = false;
    if (pvVar10 != (void *)0x0) {
      if (((void *)*plVar1 != (void *)0x0) && ((void *)*plVar1 != pvVar10)) {
        uVar13 = uVar14;
        if ((ulonglong)uVar16 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar10 + uVar13 * 8) = *(undefined8 *)(*plVar1 + uVar13 * 8);
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar16);
        }
        AK::MemoryMgr::Free(0,(void *)*plVar1);
      }
      goto LAB_145359ead;
    }
  }
  else {
    pvVar10 = AK::MemoryMgr::Realloc(0,(void *)*plVar1,(ulonglong)uVar4 << 3);
    if (pvVar10 == (void *)0x0) {
      bVar8 = false;
    }
    else {
LAB_145359ead:
      *plVar1 = (longlong)pvVar10;
      bVar8 = true;
      *(uint *)(param_3 + 0x54) = uVar15;
    }
  }
  if (!bVar8) {
    return 0x34;
  }
LAB_145359ecc:
  if (uVar4 != 0) {
    do {
      puVar7 = (undefined4 *)*param_1;
      uVar5 = *puVar7;
      *param_1 = (longlong)(puVar7 + 1);
      uVar2 = *(undefined1 *)(puVar7 + 1);
      *param_1 = (longlong)puVar7 + 5;
      cVar9 = *(char *)((longlong)puVar7 + 5);
      *param_1 = (longlong)puVar7 + 6;
      bVar3 = *(byte *)((longlong)puVar7 + 6);
      pbVar11 = (byte *)((longlong)puVar7 + 7);
      *param_1 = (longlong)pbVar11;
      uVar16 = bVar3 & 0x7f;
      while ((char)bVar3 < '\0') {
        bVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        *param_1 = (longlong)pbVar11;
        uVar16 = bVar3 & 0x7f | uVar16 << 7;
      }
      uVar6 = *(undefined4 *)pbVar11;
      *param_1 = (longlong)(pbVar11 + 4);
      bVar3 = pbVar11[4];
      *param_1 = (longlong)(pbVar11 + 5);
      uVar4 = *(ushort *)(pbVar11 + 5);
      *param_1 = (longlong)(pbVar11 + 7);
      if ((cVar9 == '\x06') && (cVar9 = '\x02', DAT_14c791034 == 1)) {
        cVar9 = '\x05';
      }
      uVar12 = FUN_145352770(plVar1,4,*(undefined4 *)(param_3 + 0x10),uVar5,uVar2,cVar9,uVar16,uVar6
                             ,bVar3,pbVar11 + 7,(uint)uVar4,local_res8);
      if ((int)uVar12 != 1) {
        return uVar12;
      }
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
      *param_1 = *param_1 + (ulonglong)uVar4 * 0xc;
      *param_2 = *param_2 + (uint)uVar4 * -0xc;
    } while (uVar16 < uVar15);
  }
  return 1;
}



// FUNCTION 14535a010 FUN_14535a010 body=2520 status=ok
// SIG undefined FUN_14535a010(void)

void FUN_14535a010(longlong param_1,undefined1 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res20;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_b0 [2];
  undefined4 local_a8 [2];
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  lVar4 = *param_3;
  local_a0 = 0xff;
  local_98 = 0xff;
  local_b8 = 0;
  local_b0[0] = 0;
  local_a8[0] = 0;
  local_90 = 0;
  plVar7 = param_3 + 1;
  if (lVar4 == 0) {
    local_50 = (longlong)*(int *)(param_1 + 0x20);
    if (0 < local_50) {
      local_68 = 0;
      do {
        local_b0[0] = 0;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + local_68 * 0x28);
        local_70 = *(longlong *)(param_1 + 0x18) + local_68 * 0x28;
        local_b8 = lVar4;
        if (((((((int)*plVar7 == 0) && ((int)param_3[2] == 0)) && ((char)param_3[3] == -1)) &&
             (((char)param_3[4] == -1 && (param_3[5] == 0)))) &&
            (*(char *)(local_70 + 0x10) != '\0')) && (lVar4 != 0)) {
          FUN_14535e8e0(*(undefined8 *)(local_70 + 8));
        }
        iVar1 = (int)*plVar7;
        if (iVar1 == 0) {
          local_58 = (longlong)*(int *)(local_70 + 0x20);
          if (0 < local_58) {
            local_78 = 0;
            do {
              lVar3 = *(longlong *)(local_70 + 0x18) + local_78 * 0x28;
              if ((((int)param_3[2] == 0) && ((char)param_3[3] == -1)) &&
                 (((char)param_3[4] == -1 &&
                  (((param_3[5] == 0 && (*(char *)(lVar3 + 0x10) != '\0')) && (lVar4 != 0)))))) {
                FUN_14535e8e0(*(undefined8 *)(lVar3 + 8));
              }
              if ((int)param_3[2] == 0) {
                local_60 = (longlong)*(int *)(lVar3 + 0x20);
                if (0 < local_60) {
                  local_c8 = 0;
                  do {
                    local_80 = *(longlong *)(lVar3 + 0x18) + local_c8 * 0x28;
                    if (((((char)param_3[3] == -1) && ((char)param_3[4] == -1)) && (param_3[5] == 0)
                        ) && ((*(char *)(local_80 + 0x10) != '\0' && (lVar4 != 0)))) {
                      FUN_14535e8e0();
                    }
                    if ((char)param_3[3] == -1) {
                      local_88 = (longlong)*(int *)(local_80 + 0x20);
                      if (0 < local_88) {
                        local_res20 = 0;
                        do {
                          lVar10 = *(longlong *)(local_80 + 0x18) + local_res20;
                          if (((((char)param_3[4] == -1) && (param_3[5] == 0)) &&
                              (*(char *)(lVar10 + 0x10) != '\0')) && (lVar4 != 0)) {
                            FUN_14535e8e0(*(undefined8 *)(lVar10 + 8));
                          }
                          if ((char)param_3[4] == -1) {
                            lVar9 = (longlong)*(int *)(lVar10 + 0x20);
                            if (0 < lVar9) {
                              lVar8 = 0;
                              do {
                                lVar2 = *(longlong *)(lVar10 + 0x18);
                                if ((*(char *)(lVar8 + 0x10 + lVar2) != '\0') && (lVar4 != 0)) {
                                  FUN_14535e8e0(*(undefined8 *)(lVar8 + 8 + lVar2));
                                }
                                lVar6 = lVar8 + lVar2;
                                if (param_3[5] == 0) {
                                  lVar5 = *(longlong *)(lVar6 + 0x18);
                                  if (lVar5 != (ulonglong)*(uint *)(lVar8 + 0x20 + lVar2) * 0x10 +
                                               lVar5) {
                                    do {
                                      if (lVar4 != 0) {
                                        FUN_14535e8e0(*(undefined8 *)(lVar5 + 8));
                                      }
                                      lVar5 = lVar5 + 0x10;
                                    } while (lVar5 != (ulonglong)*(uint *)(lVar6 + 0x20) * 0x10 +
                                                      *(longlong *)(lVar6 + 0x18));
                                  }
                                }
                                else {
                                  lVar2 = FUN_14535c7a0(lVar6 + 0x18);
                                  if ((lVar2 != 0) && (lVar4 != 0)) {
                                    FUN_14535e8e0(*(undefined8 *)(lVar2 + 8));
                                  }
                                }
                                lVar8 = lVar8 + 0x28;
                                local_90 = 0;
                                lVar9 = lVar9 + -1;
                              } while (lVar9 != 0);
                            }
                          }
                          else {
                            lVar10 = FUN_14535c160(lVar10 + 0x18);
                            if (lVar10 != 0) {
                              if ((*(char *)(lVar10 + 0x10) != '\0') && (lVar4 != 0)) {
                                FUN_14535e8e0(*(undefined8 *)(lVar10 + 8));
                              }
                              if (param_3[5] == 0) {
                                lVar9 = *(longlong *)(lVar10 + 0x18);
                                if (lVar9 != (ulonglong)*(uint *)(lVar10 + 0x20) * 0x10 + lVar9) {
                                  do {
                                    if (lVar4 != 0) {
                                      FUN_14535e8e0(*(undefined8 *)(lVar9 + 8));
                                    }
                                    lVar9 = lVar9 + 0x10;
                                  } while (lVar9 != (ulonglong)*(uint *)(lVar10 + 0x20) * 0x10 +
                                                    *(longlong *)(lVar10 + 0x18));
                                }
                              }
                              else {
                                lVar10 = FUN_14535c7a0(lVar10 + 0x18);
                                if ((lVar10 != 0) && (lVar4 != 0)) {
                                  FUN_14535e8e0(*(undefined8 *)(lVar10 + 8));
                                }
                              }
                              local_90 = 0;
                            }
                          }
                          local_res20 = local_res20 + 0x28;
                          local_88 = local_88 + -1;
                          local_98 = 0xff;
                        } while (local_88 != 0);
                        local_88 = 0;
                      }
                    }
                    else {
                      lVar10 = FUN_14535ba70(local_80 + 0x18);
                      if (lVar10 != 0) {
                        if ((((char)param_3[4] == -1) && (param_3[5] == 0)) &&
                           ((*(char *)(lVar10 + 0x10) != '\0' && (lVar4 != 0)))) {
                          FUN_14535e8e0(*(undefined8 *)(lVar10 + 8));
                        }
                        if ((char)param_3[4] == -1) {
                          lVar9 = (longlong)*(int *)(lVar10 + 0x20);
                          if (0 < lVar9) {
                            lVar8 = 0;
                            do {
                              lVar2 = *(longlong *)(lVar10 + 0x18) + lVar8;
                              if ((*(char *)(lVar2 + 0x10) != '\0') && (lVar4 != 0)) {
                                FUN_14535e8e0(*(undefined8 *)(lVar2 + 8));
                              }
                              if (param_3[5] == 0) {
                                lVar6 = *(longlong *)(lVar2 + 0x18);
                                if (lVar6 != (ulonglong)*(uint *)(lVar2 + 0x20) * 0x10 + lVar6) {
                                  do {
                                    if (lVar4 != 0) {
                                      FUN_14535e8e0(*(undefined8 *)(lVar6 + 8));
                                    }
                                    lVar6 = lVar6 + 0x10;
                                  } while (lVar6 != (ulonglong)*(uint *)(lVar2 + 0x20) * 0x10 +
                                                    *(longlong *)(lVar2 + 0x18));
                                }
                              }
                              else {
                                lVar2 = FUN_14535c7a0(lVar2 + 0x18);
                                if ((lVar2 != 0) && (lVar4 != 0)) {
                                  FUN_14535e8e0(*(undefined8 *)(lVar2 + 8));
                                }
                              }
                              lVar8 = lVar8 + 0x28;
                              local_90 = 0;
                              lVar9 = lVar9 + -1;
                            } while (lVar9 != 0);
                          }
                        }
                        else {
                          lVar10 = FUN_14535c160(lVar10 + 0x18);
                          if (lVar10 != 0) {
                            if ((*(char *)(lVar10 + 0x10) != '\0') && (lVar4 != 0)) {
                              FUN_14535e8e0(*(undefined8 *)(lVar10 + 8));
                            }
                            if (param_3[5] == 0) {
                              lVar9 = *(longlong *)(lVar10 + 0x18);
                              if (lVar9 != (ulonglong)*(uint *)(lVar10 + 0x20) * 0x10 + lVar9) {
                                do {
                                  if (lVar4 != 0) {
                                    FUN_14535e8e0(*(undefined8 *)(lVar9 + 8));
                                  }
                                  lVar9 = lVar9 + 0x10;
                                } while (lVar9 != (ulonglong)*(uint *)(lVar10 + 0x20) * 0x10 +
                                                  *(longlong *)(lVar10 + 0x18));
                              }
                            }
                            else {
                              lVar10 = FUN_14535c7a0(lVar10 + 0x18);
                              if ((lVar10 != 0) && (lVar4 != 0)) {
                                FUN_14535e8e0(*(undefined8 *)(lVar10 + 8));
                              }
                            }
                            local_90 = 0;
                          }
                        }
                        local_98 = 0xff;
                      }
                    }
                    local_c8 = local_c8 + 1;
                    local_a0 = 0xff;
                  } while (local_c8 < local_60);
                }
              }
              else {
                lVar3 = FUN_14535b2e0();
                if (lVar3 != 0) {
                  if ((((char)param_3[3] == -1) && ((char)param_3[4] == -1)) &&
                     ((param_3[5] == 0 && ((*(char *)(lVar3 + 0x10) != '\0' && (lVar4 != 0)))))) {
                    FUN_14535e8e0();
                  }
                  if ((char)param_3[3] == -1) {
                    local_c0 = (longlong)*(int *)(lVar3 + 0x20);
                    if (0 < local_c0) {
                      local_res20 = 0;
                      do {
                        lVar10 = *(longlong *)(lVar3 + 0x18) + local_res20;
                        if (((((char)param_3[4] == -1) && (param_3[5] == 0)) &&
                            (*(char *)(lVar10 + 0x10) != '\0')) && (lVar4 != 0)) {
                          FUN_14535e8e0(*(undefined8 *)(lVar10 + 8));
                        }
                        if ((char)param_3[4] == -1) {
                          lVar9 = (longlong)*(int *)(lVar10 + 0x20);
                          if (0 < lVar9) {
                            lVar8 = 0;
                            do {
                              lVar2 = *(longlong *)(lVar10 + 0x18) + lVar8;
                              if ((*(char *)(lVar2 + 0x10) != '\0') && (lVar4 != 0)) {
                                FUN_14535e8e0(*(undefined8 *)(lVar2 + 8));
                              }
                              if (param_3[5] == 0) {
                                lVar6 = *(longlong *)(lVar2 + 0x18);
                                if (lVar6 != (ulonglong)*(uint *)(lVar2 + 0x20) * 0x10 + lVar6) {
                                  do {
                                    if (lVar4 != 0) {
                                      FUN_14535e8e0(*(undefined8 *)(lVar6 + 8));
                                    }
                                    lVar6 = lVar6 + 0x10;
                                  } while (lVar6 != (ulonglong)*(uint *)(lVar2 + 0x20) * 0x10 +
                                                    *(longlong *)(lVar2 + 0x18));
                                }
                              }
                              else {
                                lVar2 = FUN_14535c7a0(lVar2 + 0x18);
                                if ((lVar2 != 0) && (lVar4 != 0)) {
                                  FUN_14535e8e0(*(undefined8 *)(lVar2 + 8));
                                }
                              }
                              lVar8 = lVar8 + 0x28;
                              local_90 = 0;
                              lVar9 = lVar9 + -1;
                            } while (lVar9 != 0);
                          }
                        }
                        else {
                          lVar10 = FUN_14535c160(lVar10 + 0x18);
                          if (lVar10 != 0) {
                            if ((*(char *)(lVar10 + 0x10) != '\0') && (lVar4 != 0)) {
                              FUN_14535e8e0(*(undefined8 *)(lVar10 + 8));
                            }
                            if (param_3[5] == 0) {
                              lVar9 = *(longlong *)(lVar10 + 0x18);
                              if (lVar9 != (ulonglong)*(uint *)(lVar10 + 0x20) * 0x10 + lVar9) {
                                do {
                                  if (lVar4 != 0) {
                                    FUN_14535e8e0(*(undefined8 *)(lVar9 + 8));
                                  }
                                  lVar9 = lVar9 + 0x10;
                                } while (lVar9 != (ulonglong)*(uint *)(lVar10 + 0x20) * 0x10 +
                                                  *(longlong *)(lVar10 + 0x18));
                              }
                            }
                            else {
                              lVar10 = FUN_14535c7a0(lVar10 + 0x18);
                              if ((lVar10 != 0) && (lVar4 != 0)) {
                                FUN_14535e8e0(*(undefined8 *)(lVar10 + 8));
                              }
                            }
                            local_90 = 0;
                          }
                        }
                        local_res20 = local_res20 + 0x28;
                        local_c0 = local_c0 + -1;
                        local_98 = 0xff;
                      } while (local_c0 != 0);
                    }
                  }
                  else {
                    lVar3 = FUN_14535ba70(lVar3 + 0x18);
                    if (lVar3 != 0) {
                      if (((((char)param_3[4] == -1) && (param_3[5] == 0)) &&
                          (*(char *)(lVar3 + 0x10) != '\0')) && (lVar4 != 0)) {
                        FUN_14535e8e0(*(undefined8 *)(lVar3 + 8));
                      }
                      if ((char)param_3[4] == -1) {
                        lVar10 = (longlong)*(int *)(lVar3 + 0x20);
                        if (0 < lVar10) {
                          lVar9 = 0;
                          do {
                            lVar8 = *(longlong *)(lVar3 + 0x18) + lVar9;
                            if ((*(char *)(lVar8 + 0x10) != '\0') && (lVar4 != 0)) {
                              FUN_14535e8e0(*(undefined8 *)(lVar8 + 8));
                            }
                            if (param_3[5] == 0) {
                              lVar2 = *(longlong *)(lVar8 + 0x18);
                              if (lVar2 != (ulonglong)*(uint *)(lVar8 + 0x20) * 0x10 + lVar2) {
                                do {
                                  if (lVar4 != 0) {
                                    FUN_14535e8e0(*(undefined8 *)(lVar2 + 8));
                                  }
                                  lVar2 = lVar2 + 0x10;
                                } while (lVar2 != (ulonglong)*(uint *)(lVar8 + 0x20) * 0x10 +
                                                  *(longlong *)(lVar8 + 0x18));
                              }
                            }
                            else {
                              lVar8 = FUN_14535c7a0(lVar8 + 0x18);
                              if ((lVar8 != 0) && (lVar4 != 0)) {
                                FUN_14535e8e0(*(undefined8 *)(lVar8 + 8));
                              }
                            }
                            lVar9 = lVar9 + 0x28;
                            local_90 = 0;
                            lVar10 = lVar10 + -1;
                          } while (lVar10 != 0);
                        }
                      }
                      else {
                        lVar3 = FUN_14535c160(lVar3 + 0x18);
                        if (lVar3 != 0) {
                          if ((*(char *)(lVar3 + 0x10) != '\0') && (lVar4 != 0)) {
                            FUN_14535e8e0(*(undefined8 *)(lVar3 + 8));
                          }
                          if (param_3[5] == 0) {
                            lVar10 = *(longlong *)(lVar3 + 0x18);
                            if (lVar10 != (ulonglong)*(uint *)(lVar3 + 0x20) * 0x10 + lVar10) {
                              do {
                                if (lVar4 != 0) {
                                  FUN_14535e8e0(*(undefined8 *)(lVar10 + 8));
                                }
                                lVar10 = lVar10 + 0x10;
                              } while (lVar10 != (ulonglong)*(uint *)(lVar3 + 0x20) * 0x10 +
                                                 *(longlong *)(lVar3 + 0x18));
                            }
                          }
                          else {
                            lVar3 = FUN_14535c7a0(lVar3 + 0x18);
                            if ((lVar3 != 0) && (lVar4 != 0)) {
                              FUN_14535e8e0(*(undefined8 *)(lVar3 + 8));
                            }
                          }
                          local_90 = 0;
                        }
                      }
                      local_98 = 0xff;
                    }
                  }
                  local_a0 = 0xff;
                }
              }
              local_78 = local_78 + 1;
              local_a8[0] = 0;
            } while (local_78 < local_58);
          }
        }
        else {
          lVar4 = FUN_14535ab00(local_70 + 0x18,iVar1);
          if (lVar4 != 0) {
            local_b0[0] = iVar1;
            FUN_14535cbd0(lVar4,param_2,param_3 + 2,&local_b8,local_a8);
          }
        }
        local_68 = local_68 + 1;
      } while (local_68 < local_50);
      return;
    }
  }
  else {
    lVar3 = FUN_145357bb0(param_1 + 0x18,lVar4);
    if (lVar3 != 0) {
      local_b8 = lVar4;
      FUN_14535c9a0(lVar3,param_2,plVar7,&local_b8,local_b0);
    }
  }
  return;
}



// FUNCTION 14535a9f0 FUN_14535a9f0 body=262 status=ok
// SIG undefined FUN_14535a9f0(void)

undefined8 FUN_14535a9f0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  __uint64 _Var5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var5 = (ulonglong)(iVar3 + uVar2) * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          puVar6 = (undefined8 *)((longlong)pvVar4 + 0x20);
          do {
            puVar1 = puVar6 + -4;
            if (puVar1 != (undefined8 *)0x0) {
              *(undefined4 *)puVar1 = 0;
              puVar6[-3] = 0;
              *(undefined1 *)(puVar6 + -2) = 0;
              puVar6[-1] = 0;
              *puVar6 = 0;
            }
            FUN_14535b570(puVar1,(longlong)puVar6 + *param_1 + (-0x20 - (longlong)pvVar4));
            puVar6 = puVar6 + 5;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14535aadf;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_14535aadf:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14535ab00 FUN_14535ab00 body=161 status=ok
// SIG undefined FUN_14535ab00(void)

/* WARNING: Removing unreachable block (ram,0x00014535ab79) */

longlong FUN_14535ab00(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = (uVar4 >> 1) + iVar5;
      uVar1 = *(uint *)(*param_1 + (longlong)iVar3 * 0x28);
      if (uVar1 == param_2) {
        return *param_1 + (longlong)iVar3 * 0x28;
      }
      uVar2 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar4;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar4 = uVar2 >> 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 14535abb0 FUN_14535abb0 body=336 status=ok
// SIG undefined FUN_14535abb0(void)

undefined4 * FUN_14535abb0(longlong *param_1,undefined4 param_2,char *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar4 = (undefined4 *)FUN_14535ad00();
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined4 *)0x0) {
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_14535a9f0(param_1), cVar3 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar4 = (undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar4 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      goto LAB_14535acd9;
    }
  }
  else {
    uVar2 = ((longlong)puVar4 - *param_1) / 0x28;
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_14535a9f0(param_1), cVar3 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar5 = (uint)uVar2;
      lVar1 = (uVar2 & 0xffffffff) * 0x28;
      puVar4 = (undefined4 *)(*param_1 + lVar1);
      if (uVar5 < *(uint *)(param_1 + 1)) {
        memmove(puVar4 + 10,puVar4,(ulonglong)((*(uint *)(param_1 + 1) - uVar5) * 0x28));
      }
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined1 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      puVar4 = (undefined4 *)(*param_1 + lVar1);
LAB_14535acd9:
      if (puVar4 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar4 = param_2;
      return puVar4;
    }
  }
  return (undefined4 *)0x0;
}



// FUNCTION 14535ad00 FUN_14535ad00 body=141 status=ok
// SIG undefined FUN_14535ad00(void)

longlong FUN_14535ad00(longlong *param_1,uint param_2,undefined1 *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      lVar1 = (longlong)iVar3 * 0x28;
      uVar2 = *(uint *)(lVar1 + *param_1);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return *param_1 + lVar1;
      }
      uVar4 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar2) {
        uVar4 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar4 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar6 * 0x28;
}



// FUNCTION 14535ad90 FUN_14535ad90 body=132 status=ok
// SIG undefined FUN_14535ad90(void)

undefined8 * FUN_14535ad90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  if ((void *)param_1[3] != (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[3] = 0;
  param_2[4] = 0;
  return param_1;
}



// FUNCTION 14535ae20 FUN_14535ae20 body=551 status=ok
// SIG undefined FUN_14535ae20(void)

void FUN_14535ae20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  lVar7 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar12 = lVar7 * 0x28;
    do {
      lVar5 = *(longlong *)(param_1 + 0x18) + lVar12;
      iVar1 = *(int *)(lVar5 + 0x20) + -1;
      lVar2 = (longlong)iVar1;
      if (-1 < iVar1) {
        lVar8 = lVar2 * 0x28;
        do {
          lVar11 = *(longlong *)(lVar5 + 0x18) + lVar8;
          iVar1 = *(int *)(lVar11 + 0x20) + -1;
          lVar13 = (longlong)iVar1;
          if (-1 < iVar1) {
            lVar10 = lVar13 * 0x28;
            do {
              lVar4 = *(longlong *)(lVar11 + 0x18) + lVar10;
              iVar1 = *(int *)(lVar4 + 0x20) + -1;
              lVar3 = (longlong)iVar1;
              if (-1 < iVar1) {
                lVar6 = lVar3 * 0x28;
                do {
                  lVar9 = *(longlong *)(lVar4 + 0x18) + lVar6;
                  *(undefined1 *)(lVar9 + 0x10) = 0;
                  if (*(void **)(lVar9 + 0x18) != (void *)0x0) {
                    *(undefined4 *)(lVar9 + 0x20) = 0;
                    AK::MemoryMgr::Free(0,*(void **)(lVar9 + 0x18));
                    *(undefined8 *)(lVar9 + 0x18) = 0;
                    *(undefined4 *)(lVar9 + 0x24) = 0;
                  }
                  lVar6 = lVar6 + -0x28;
                  lVar3 = lVar3 + -1;
                } while (-1 < lVar3);
              }
              if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
                *(undefined4 *)(lVar4 + 0x20) = 0;
                AK::MemoryMgr::Free(0,*(void **)(lVar4 + 0x18));
                *(undefined8 *)(lVar4 + 0x18) = 0;
                *(undefined4 *)(lVar4 + 0x24) = 0;
              }
              lVar10 = lVar10 + -0x28;
              *(undefined1 *)(lVar4 + 0x10) = 0;
              lVar13 = lVar13 + -1;
            } while (-1 < lVar13);
          }
          if (*(void **)(lVar11 + 0x18) != (void *)0x0) {
            *(undefined4 *)(lVar11 + 0x20) = 0;
            AK::MemoryMgr::Free(0,*(void **)(lVar11 + 0x18));
            *(undefined8 *)(lVar11 + 0x18) = 0;
            *(undefined4 *)(lVar11 + 0x24) = 0;
          }
          lVar2 = lVar2 + -1;
          *(undefined1 *)(lVar11 + 0x10) = 0;
          lVar8 = lVar8 + -0x28;
        } while (-1 < lVar2);
      }
      if (*(void **)(lVar5 + 0x18) != (void *)0x0) {
        *(undefined4 *)(lVar5 + 0x20) = 0;
        AK::MemoryMgr::Free(0,*(void **)(lVar5 + 0x18));
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined4 *)(lVar5 + 0x24) = 0;
      }
      lVar7 = lVar7 + -1;
      *(undefined1 *)(lVar5 + 0x10) = 0;
      lVar12 = lVar12 + -0x28;
    } while (-1 < lVar7);
  }
  if (*(void **)(param_1 + 0x18) == (void *)0x0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 14535b050 FUN_14535b050 body=378 status=ok
// SIG undefined FUN_14535b050(void)

longlong FUN_14535b050(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined7 uStack_37;
  longlong lStack_30;
  
  iVar1 = (int)*param_2;
  if ((((iVar1 == 0) && ((int)param_2[1] == 0)) && ((char)param_2[2] == -1)) &&
     (((char)param_2[3] == -1 && (param_2[4] == 0)))) goto LAB_14535b16a;
  lVar2 = FUN_14535ab00(param_1 + 0x18,iVar1);
  if (lVar2 == 0) {
    if (iVar1 == 0) goto LAB_14535b16a;
    *(int *)param_2 = 0;
    lVar2 = FUN_14535ab00(param_1 + 0x18,0);
    if (lVar2 == 0) goto LAB_14535b16a;
  }
  if ((((int)param_2[1] != 0) || ((char)param_2[2] != -1)) ||
     (((char)param_2[3] != -1 || (param_2[4] != 0)))) {
    lVar3 = FUN_14535b2e0(lVar2 + 0x18,(int)param_2[1]);
    if (lVar3 == 0) {
      if ((int)param_2[1] != 0) {
        *(int *)(param_2 + 1) = 0;
        lVar3 = FUN_14535b2e0(lVar2 + 0x18,0);
        if (lVar3 != 0) goto LAB_14535b11a;
      }
    }
    else {
LAB_14535b11a:
      lVar3 = FUN_14535bed0(lVar3,param_2 + 2);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  uStack_40 = CONCAT31(uStack_40._1_3_,0xff);
  lStack_30 = 0;
  param_2[1] = (ulonglong)uStack_44 << 0x20;
  param_2[2] = CONCAT44(uStack_3c,uStack_40);
  param_2[3] = CONCAT71(uStack_37,0xff);
  param_2[4] = 0;
  lVar3 = lVar2 + 8;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    return lVar3;
  }
LAB_14535b16a:
  lVar2 = param_1 + 8;
  lStack_30 = CONCAT71(lStack_30._1_7_,0xff);
  *param_2 = (ulonglong)uStack_44 << 0x20;
  param_2[1] = (ulonglong)uStack_3c << 0x20;
  param_2[2] = CONCAT71(uStack_37,0xff);
  param_2[3] = lStack_30;
  param_2[4] = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14535b1d0 FUN_14535b1d0 body=262 status=ok
// SIG undefined FUN_14535b1d0(void)

undefined8 FUN_14535b1d0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  __uint64 _Var5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var5 = (ulonglong)(iVar3 + uVar2) * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          puVar6 = (undefined8 *)((longlong)pvVar4 + 0x20);
          do {
            puVar1 = puVar6 + -4;
            if (puVar1 != (undefined8 *)0x0) {
              *(undefined4 *)puVar1 = 0;
              puVar6[-3] = 0;
              *(undefined1 *)(puVar6 + -2) = 0;
              puVar6[-1] = 0;
              *puVar6 = 0;
            }
            FUN_14535bd10(puVar1,(longlong)puVar6 + *param_1 + (-0x20 - (longlong)pvVar4));
            puVar6 = puVar6 + 5;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14535b2bf;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_14535b2bf:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14535b2e0 FUN_14535b2e0 body=161 status=ok
// SIG undefined FUN_14535b2e0(void)

/* WARNING: Removing unreachable block (ram,0x00014535b359) */

longlong FUN_14535b2e0(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = (uVar4 >> 1) + iVar5;
      uVar1 = *(uint *)(*param_1 + (longlong)iVar3 * 0x28);
      if (uVar1 == param_2) {
        return *param_1 + (longlong)iVar3 * 0x28;
      }
      uVar2 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar4;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar4 = uVar2 >> 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 14535b390 FUN_14535b390 body=336 status=ok
// SIG undefined FUN_14535b390(void)

undefined4 * FUN_14535b390(longlong *param_1,undefined4 param_2,char *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar4 = (undefined4 *)FUN_14535b4e0();
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined4 *)0x0) {
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_14535b1d0(param_1), cVar3 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar4 = (undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar4 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      goto LAB_14535b4b9;
    }
  }
  else {
    uVar2 = ((longlong)puVar4 - *param_1) / 0x28;
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_14535b1d0(param_1), cVar3 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar5 = (uint)uVar2;
      lVar1 = (uVar2 & 0xffffffff) * 0x28;
      puVar4 = (undefined4 *)(*param_1 + lVar1);
      if (uVar5 < *(uint *)(param_1 + 1)) {
        memmove(puVar4 + 10,puVar4,(ulonglong)((*(uint *)(param_1 + 1) - uVar5) * 0x28));
      }
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined1 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      puVar4 = (undefined4 *)(*param_1 + lVar1);
LAB_14535b4b9:
      if (puVar4 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar4 = param_2;
      return puVar4;
    }
  }
  return (undefined4 *)0x0;
}



// FUNCTION 14535b4e0 FUN_14535b4e0 body=141 status=ok
// SIG undefined FUN_14535b4e0(void)

longlong FUN_14535b4e0(longlong *param_1,uint param_2,undefined1 *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      lVar1 = (longlong)iVar3 * 0x28;
      uVar2 = *(uint *)(lVar1 + *param_1);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return *param_1 + lVar1;
      }
      uVar4 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar2) {
        uVar4 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar4 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar6 * 0x28;
}



// FUNCTION 14535b570 FUN_14535b570 body=130 status=ok
// SIG undefined FUN_14535b570(void)

undefined4 * FUN_14535b570(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    param_1[8] = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[9] = 0;
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return param_1;
}



// FUNCTION 14535b600 FUN_14535b600 body=393 status=ok
// SIG undefined FUN_14535b600(void)

void FUN_14535b600(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar6 = lVar2 * 0x28;
    do {
      lVar9 = *(longlong *)(param_1 + 0x18) + lVar6;
      iVar1 = *(int *)(lVar9 + 0x20) + -1;
      lVar10 = (longlong)iVar1;
      if (-1 < iVar1) {
        lVar8 = lVar10 * 0x28;
        do {
          lVar4 = *(longlong *)(lVar9 + 0x18) + lVar8;
          iVar1 = *(int *)(lVar4 + 0x20) + -1;
          lVar3 = (longlong)iVar1;
          if (-1 < iVar1) {
            lVar5 = lVar3 * 0x28;
            do {
              lVar7 = *(longlong *)(lVar4 + 0x18) + lVar5;
              *(undefined1 *)(lVar7 + 0x10) = 0;
              if (*(void **)(lVar7 + 0x18) != (void *)0x0) {
                *(undefined4 *)(lVar7 + 0x20) = 0;
                AK::MemoryMgr::Free(0,*(void **)(lVar7 + 0x18));
                *(undefined8 *)(lVar7 + 0x18) = 0;
                *(undefined4 *)(lVar7 + 0x24) = 0;
              }
              lVar5 = lVar5 + -0x28;
              lVar3 = lVar3 + -1;
            } while (-1 < lVar3);
          }
          if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
            *(undefined4 *)(lVar4 + 0x20) = 0;
            AK::MemoryMgr::Free(0,*(void **)(lVar4 + 0x18));
            *(undefined8 *)(lVar4 + 0x18) = 0;
            *(undefined4 *)(lVar4 + 0x24) = 0;
          }
          lVar8 = lVar8 + -0x28;
          *(undefined1 *)(lVar4 + 0x10) = 0;
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
      }
      if (*(void **)(lVar9 + 0x18) != (void *)0x0) {
        *(undefined4 *)(lVar9 + 0x20) = 0;
        AK::MemoryMgr::Free(0,*(void **)(lVar9 + 0x18));
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(undefined4 *)(lVar9 + 0x24) = 0;
      }
      lVar2 = lVar2 + -1;
      *(undefined1 *)(lVar9 + 0x10) = 0;
      lVar6 = lVar6 + -0x28;
    } while (-1 < lVar2);
  }
  if (*(void **)(param_1 + 0x18) == (void *)0x0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 14535b790 FUN_14535b790 body=450 status=ok
// SIG undefined FUN_14535b790(void)

undefined1 FUN_14535b790(longlong param_1,int *param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  
  if ((((*param_2 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(longlong *)(param_2 + 6) == 0)) {
LAB_14535b93d:
    uVar2 = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x10) = 0;
    return uVar2;
  }
  lVar3 = FUN_14535b2e0(param_1 + 0x18);
  if (lVar3 == 0) goto LAB_14535b93d;
  if ((((char)param_2[2] != -1) || ((char)param_2[4] != -1)) || (*(longlong *)(param_2 + 6) != 0)) {
    lVar4 = FUN_14535ba70(lVar3 + 0x18);
    if (lVar4 != 0) {
      uVar2 = FUN_14535c540(lVar4,param_2 + 4);
      if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(lVar4 + 0x20) == 0)) {
        FUN_14535c490(lVar4);
        pvVar5 = (void *)FUN_14535ba70(lVar3 + 0x18,(char)param_2[2]);
        if (pvVar5 != (void *)0x0) {
          pvVar1 = (void *)(*(longlong *)(lVar3 + 0x18) +
                           (ulonglong)(*(int *)(lVar3 + 0x20) - 1) * 0x28);
          if (pvVar5 < pvVar1) {
            memmove(pvVar5,(void *)((longlong)pvVar5 + 0x28),
                    (ulonglong)(uint)((int)(((longlong)pvVar1 - (longlong)pvVar5) / 0x28) * 0x28));
          }
          *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
        }
      }
      goto LAB_14535b8ac;
    }
  }
  uVar2 = *(undefined1 *)(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x10) = 0;
LAB_14535b8ac:
  if ((*(char *)(lVar3 + 0x10) == '\0') && (*(int *)(lVar3 + 0x20) == 0)) {
    FUN_14535bda0(lVar3);
    pvVar5 = (void *)FUN_14535b2e0(param_1 + 0x18,*param_2);
    if (pvVar5 != (void *)0x0) {
      pvVar1 = (void *)(*(longlong *)(param_1 + 0x18) +
                       (ulonglong)(*(int *)(param_1 + 0x20) - 1) * 0x28);
      if (pvVar5 < pvVar1) {
        memmove(pvVar5,(void *)((longlong)pvVar5 + 0x28),
                (ulonglong)(uint)((int)(((longlong)pvVar1 - (longlong)pvVar5) / 0x28) * 0x28));
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    }
  }
  return uVar2;
}



// FUNCTION 14535b960 FUN_14535b960 body=262 status=ok
// SIG undefined FUN_14535b960(void)

undefined8 FUN_14535b960(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  __uint64 _Var5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var5 = (ulonglong)(iVar3 + uVar2) * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          puVar6 = (undefined8 *)((longlong)pvVar4 + 0x20);
          do {
            puVar1 = puVar6 + -4;
            if (puVar1 != (undefined8 *)0x0) {
              *(undefined1 *)puVar1 = 0;
              puVar6[-3] = 0;
              *(undefined1 *)(puVar6 + -2) = 0;
              puVar6[-1] = 0;
              *puVar6 = 0;
            }
            FUN_14535c400(puVar1,(longlong)puVar6 + *param_1 + (-0x20 - (longlong)pvVar4));
            puVar6 = puVar6 + 5;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14535ba4f;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_14535ba4f:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14535ba70 FUN_14535ba70 body=162 status=ok
// SIG undefined FUN_14535ba70(void)

/* WARNING: Removing unreachable block (ram,0x00014535baea) */

longlong FUN_14535ba70(longlong *param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = (uVar4 >> 1) + iVar5;
      bVar1 = *(byte *)(*param_1 + (longlong)iVar3 * 0x28);
      if (bVar1 == param_2) {
        return *param_1 + (longlong)iVar3 * 0x28;
      }
      uVar2 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= bVar1) {
        uVar2 = uVar4;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar4 = uVar2 >> 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 14535bb20 FUN_14535bb20 body=339 status=ok
// SIG undefined FUN_14535bb20(void)

undefined1 * FUN_14535bb20(longlong *param_1,undefined1 param_2,char *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  puVar4 = (undefined1 *)FUN_14535bc80();
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined1 *)0x0) {
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_14535b960(param_1), cVar3 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar4 = (undefined1 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar4 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      puVar4[0x10] = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      goto LAB_14535bc4c;
    }
  }
  else {
    uVar2 = ((longlong)puVar4 - *param_1) / 0x28;
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_14535b960(param_1), cVar3 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar5 = (uint)uVar2;
      lVar1 = (uVar2 & 0xffffffff) * 0x28;
      puVar4 = (undefined1 *)(*param_1 + lVar1);
      if (uVar5 < *(uint *)(param_1 + 1)) {
        memmove(puVar4 + 0x28,puVar4,(ulonglong)((*(uint *)(param_1 + 1) - uVar5) * 0x28));
      }
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        puVar4[0x10] = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined8 *)(puVar4 + 0x20) = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      puVar4 = (undefined1 *)(*param_1 + lVar1);
LAB_14535bc4c:
      if (puVar4 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      *puVar4 = param_2;
      return puVar4;
    }
  }
  return (undefined1 *)0x0;
}



// FUNCTION 14535bc80 FUN_14535bc80 body=142 status=ok
// SIG undefined FUN_14535bc80(void)

longlong FUN_14535bc80(longlong *param_1,byte param_2,undefined1 *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      lVar1 = (longlong)iVar3 * 0x28;
      bVar2 = *(byte *)(lVar1 + *param_1);
      if (bVar2 == param_2) {
        *param_3 = 1;
        return *param_1 + lVar1;
      }
      uVar4 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= bVar2) {
        uVar4 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar4 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar6 * 0x28;
}



// FUNCTION 14535bd10 FUN_14535bd10 body=130 status=ok
// SIG undefined FUN_14535bd10(void)

undefined4 * FUN_14535bd10(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    param_1[8] = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[9] = 0;
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return param_1;
}



// FUNCTION 14535bda0 FUN_14535bda0 body=291 status=ok
// SIG undefined FUN_14535bda0(void)

void FUN_14535bda0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  lVar7 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar6 = lVar7 * 0x28;
    do {
      lVar3 = *(longlong *)(param_1 + 0x18) + lVar6;
      iVar1 = *(int *)(lVar3 + 0x20) + -1;
      lVar2 = (longlong)iVar1;
      if (-1 < iVar1) {
        lVar4 = lVar2 * 0x28;
        do {
          lVar5 = *(longlong *)(lVar3 + 0x18) + lVar4;
          *(undefined1 *)(lVar5 + 0x10) = 0;
          if (*(void **)(lVar5 + 0x18) != (void *)0x0) {
            *(undefined4 *)(lVar5 + 0x20) = 0;
            AK::MemoryMgr::Free(0,*(void **)(lVar5 + 0x18));
            *(undefined8 *)(lVar5 + 0x18) = 0;
            *(undefined4 *)(lVar5 + 0x24) = 0;
          }
          lVar4 = lVar4 + -0x28;
          lVar2 = lVar2 + -1;
        } while (-1 < lVar2);
      }
      if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
        *(undefined4 *)(lVar3 + 0x20) = 0;
        AK::MemoryMgr::Free(0,*(void **)(lVar3 + 0x18));
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined4 *)(lVar3 + 0x24) = 0;
      }
      lVar6 = lVar6 + -0x28;
      *(undefined1 *)(lVar3 + 0x10) = 0;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  if (*(void **)(param_1 + 0x18) == (void *)0x0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 14535bed0 FUN_14535bed0 body=372 status=ok
// SIG undefined FUN_14535bed0(void)

longlong FUN_14535bed0(longlong param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined7 uStack_47;
  undefined8 uStack_40;
  
  cVar1 = *param_2;
  if (((cVar1 == -1) && (param_2[8] == -1)) && (*(longlong *)(param_2 + 0x10) == 0))
  goto LAB_14535bff3;
  lVar2 = FUN_14535ba70(param_1 + 0x18,cVar1);
  if (lVar2 == 0) {
    if (cVar1 == -1) goto LAB_14535bff3;
    *param_2 = -1;
    lVar2 = FUN_14535ba70(param_1 + 0x18,0xff);
  }
  if (lVar2 == 0) goto LAB_14535bff3;
  cVar1 = param_2[8];
  if ((cVar1 != -1) || (*(longlong *)(param_2 + 0x10) != 0)) {
    lVar3 = FUN_14535c160(lVar2 + 0x18,cVar1);
    if (lVar3 == 0) {
      if (cVar1 == -1) goto LAB_14535bfc6;
      param_2[8] = -1;
      lVar3 = FUN_14535c160(lVar2 + 0x18,0xff);
    }
    if (lVar3 != 0) {
      if ((*(longlong *)(param_2 + 0x10) == 0) || (lVar4 = FUN_14535c7a0(lVar3 + 0x18), lVar4 == 0))
      {
        lVar4 = lVar3 + 8;
        param_2[0x10] = '\0';
        param_2[0x11] = '\0';
        param_2[0x12] = '\0';
        param_2[0x13] = '\0';
        param_2[0x14] = '\0';
        param_2[0x15] = '\0';
        param_2[0x16] = '\0';
        param_2[0x17] = '\0';
        if (*(char *)(lVar3 + 0x10) == '\0') {
          lVar4 = 0;
        }
      }
      else {
        lVar4 = lVar4 + 8;
      }
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
LAB_14535bfc6:
  uStack_40 = 0;
  *(ulonglong *)(param_2 + 8) = CONCAT71(uStack_47,0xff);
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  lVar3 = lVar2 + 8;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    return lVar3;
  }
LAB_14535bff3:
  uStack_40 = CONCAT71(uStack_40._1_7_,0xff);
  *(ulonglong *)param_2 = CONCAT71(uStack_47,0xff);
  *(undefined8 *)(param_2 + 8) = uStack_40;
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  lVar2 = param_1 + 8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14535c050 FUN_14535c050 body=262 status=ok
// SIG undefined FUN_14535c050(void)

undefined8 FUN_14535c050(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  __uint64 _Var5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var5 = (ulonglong)(iVar3 + uVar2) * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          puVar6 = (undefined8 *)((longlong)pvVar4 + 0x20);
          do {
            puVar1 = puVar6 + -4;
            if (puVar1 != (undefined8 *)0x0) {
              *(undefined1 *)puVar1 = 0;
              puVar6[-3] = 0;
              *(undefined1 *)(puVar6 + -2) = 0;
              puVar6[-1] = 0;
              *puVar6 = 0;
            }
            FUN_14535c840(puVar1,(longlong)puVar6 + *param_1 + (-0x20 - (longlong)pvVar4));
            puVar6 = puVar6 + 5;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14535c13f;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_14535c13f:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14535c160 FUN_14535c160 body=162 status=ok
// SIG undefined FUN_14535c160(void)

/* WARNING: Removing unreachable block (ram,0x00014535c1da) */

longlong FUN_14535c160(longlong *param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = (uVar4 >> 1) + iVar5;
      bVar1 = *(byte *)(*param_1 + (longlong)iVar3 * 0x28);
      if (bVar1 == param_2) {
        return *param_1 + (longlong)iVar3 * 0x28;
      }
      uVar2 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= bVar1) {
        uVar2 = uVar4;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar4 = uVar2 >> 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 14535c210 FUN_14535c210 body=339 status=ok
// SIG undefined FUN_14535c210(void)

undefined1 * FUN_14535c210(longlong *param_1,undefined1 param_2,char *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  puVar4 = (undefined1 *)FUN_14535c370();
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined1 *)0x0) {
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_14535c050(param_1), cVar3 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar4 = (undefined1 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar4 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      puVar4[0x10] = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      goto LAB_14535c33c;
    }
  }
  else {
    uVar2 = ((longlong)puVar4 - *param_1) / 0x28;
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_14535c050(param_1), cVar3 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar5 = (uint)uVar2;
      lVar1 = (uVar2 & 0xffffffff) * 0x28;
      puVar4 = (undefined1 *)(*param_1 + lVar1);
      if (uVar5 < *(uint *)(param_1 + 1)) {
        memmove(puVar4 + 0x28,puVar4,(ulonglong)((*(uint *)(param_1 + 1) - uVar5) * 0x28));
      }
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        puVar4[0x10] = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined8 *)(puVar4 + 0x20) = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      puVar4 = (undefined1 *)(*param_1 + lVar1);
LAB_14535c33c:
      if (puVar4 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      *puVar4 = param_2;
      return puVar4;
    }
  }
  return (undefined1 *)0x0;
}



// FUNCTION 14535c370 FUN_14535c370 body=142 status=ok
// SIG undefined FUN_14535c370(void)

longlong FUN_14535c370(longlong *param_1,byte param_2,undefined1 *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      lVar1 = (longlong)iVar3 * 0x28;
      bVar2 = *(byte *)(lVar1 + *param_1);
      if (bVar2 == param_2) {
        *param_3 = 1;
        return *param_1 + lVar1;
      }
      uVar4 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= bVar2) {
        uVar4 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar4 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar6 * 0x28;
}



// FUNCTION 14535c400 FUN_14535c400 body=131 status=ok
// SIG undefined FUN_14535c400(void)

undefined1 * FUN_14535c400(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return param_1;
}



// FUNCTION 14535c490 FUN_14535c490 body=170 status=ok
// SIG undefined FUN_14535c490(void)

void FUN_14535c490(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar3 = lVar2 * 0x28;
    do {
      lVar4 = *(longlong *)(param_1 + 0x18) + lVar3;
      *(undefined1 *)(lVar4 + 0x10) = 0;
      if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
        *(undefined4 *)(lVar4 + 0x20) = 0;
        AK::MemoryMgr::Free(0,*(void **)(lVar4 + 0x18));
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined4 *)(lVar4 + 0x24) = 0;
      }
      lVar3 = lVar3 + -0x28;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 14535c540 FUN_14535c540 body=387 status=ok
// SIG undefined FUN_14535c540(void)

undefined1 FUN_14535c540(longlong param_1,char *param_2)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 uVar4;
  
  if ((*param_2 != -1) || (*(longlong *)(param_2 + 8) != 0)) {
    lVar1 = FUN_14535c160();
    if (lVar1 != 0) {
      if (*(longlong *)(param_2 + 8) == 0) {
        uVar4 = *(undefined1 *)(lVar1 + 0x10);
        *(undefined1 *)(lVar1 + 0x10) = 0;
      }
      else {
        pvVar2 = (void *)FUN_14535c7a0();
        if (pvVar2 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          pvVar3 = (void *)((ulonglong)(*(int *)(lVar1 + 0x20) - 1) * 0x10 +
                           *(longlong *)(lVar1 + 0x18));
          if (pvVar2 < pvVar3) {
            memmove(pvVar2,(void *)((longlong)pvVar2 + 0x10),
                    (ulonglong)((int)pvVar3 - (int)pvVar2 & 0xfffffff0));
          }
          *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + -1;
          uVar4 = 1;
        }
        if ((*(int *)(lVar1 + 0x20) == 0) && (*(void **)(lVar1 + 0x18) != (void *)0x0)) {
          *(undefined4 *)(lVar1 + 0x20) = 0;
          AK::MemoryMgr::Free(0,*(void **)(lVar1 + 0x18));
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined4 *)(lVar1 + 0x24) = 0;
        }
      }
      if ((*(char *)(lVar1 + 0x10) == '\0') && (*(int *)(lVar1 + 0x20) == 0)) {
        *(undefined1 *)(lVar1 + 0x10) = 0;
        if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
          *(undefined4 *)(lVar1 + 0x20) = 0;
          AK::MemoryMgr::Free(0,*(void **)(lVar1 + 0x18));
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined4 *)(lVar1 + 0x24) = 0;
        }
        pvVar2 = (void *)FUN_14535c160(param_1 + 0x18,*param_2);
        if (pvVar2 != (void *)0x0) {
          pvVar3 = (void *)(*(longlong *)(param_1 + 0x18) +
                           (ulonglong)(*(int *)(param_1 + 0x20) - 1) * 0x28);
          if (pvVar2 < pvVar3) {
            memmove(pvVar2,(void *)((longlong)pvVar2 + 0x28),
                    (ulonglong)(uint)((int)(((longlong)pvVar3 - (longlong)pvVar2) / 0x28) * 0x28));
          }
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        }
      }
      return uVar4;
    }
  }
  uVar4 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  return uVar4;
}



// FUNCTION 14535c6d0 FUN_14535c6d0 body=205 status=ok
// SIG undefined FUN_14535c6d0(void)

undefined8 FUN_14535c6d0(longlong *param_1)

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
      goto LAB_14535c780;
    }
  }
  else {
    puVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
LAB_14535c780:
      *param_1 = (longlong)puVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14535c7a0 FUN_14535c7a0 body=156 status=ok
// SIG undefined FUN_14535c7a0(void)

/* WARNING: Removing unreachable block (ram,0x00014535c814) */

ulonglong * FUN_14535c7a0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      puVar4 = (ulonglong *)((longlong)iVar3 * 0x10 + *param_1);
      uVar1 = *puVar4;
      if (uVar1 == param_2) {
        return puVar4;
      }
      uVar2 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar2 >> 1;
    } while (uVar5 != 0);
  }
  return (ulonglong *)0x0;
}



// FUNCTION 14535c840 FUN_14535c840 body=131 status=ok
// SIG undefined FUN_14535c840(void)

void FUN_14535c840(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 14535c8d0 FUN_14535c8d0 body=202 status=ok
// SIG undefined FUN_14535c8d0(void)

void FUN_14535c8d0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [4];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar3 + (ulonglong)*(uint *)(param_1 + 1) * 2) {
    do {
      if (*(char *)(puVar3 + 1) != *(char *)((longlong)param_1 + 0x11)) {
        lVar2 = param_2[1];
        *(char *)(puVar3 + 1) = *(char *)((longlong)param_1 + 0x11);
        local_res8[0] = *(undefined4 *)((longlong)param_2 + 0x14);
        local_res18[0] = (undefined4)param_2[2];
        uStackX_24 = CONCAT31(uStackX_24._1_3_,4);
        local_res20 = *(undefined4 *)(*param_2 + 0x10);
        (*(code *)**(undefined8 **)*puVar3)
                  ((undefined8 *)*puVar3,CONCAT44(uStackX_24,local_res20),lVar2,local_res18,
                   local_res8);
      }
    } while (((*(byte *)(param_1 + 2) & 3) == 0) &&
            (puVar3 = puVar3 + 2,
            puVar3 != (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1)));
  }
  bVar1 = *(byte *)(param_1 + 2);
  if (((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) {
    local_38 = (undefined4)*param_2;
    uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_30 = (undefined4)param_2[1];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_28 = param_2[2];
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    FUN_14535c8d0(param_1,&local_38);
  }
  return;
}



// FUNCTION 14535c9a0 FUN_14535c9a0 body=545 status=ok
// SIG undefined FUN_14535c9a0(void)

void FUN_14535c9a0(longlong param_1,undefined1 param_2,int *param_3,longlong *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar3 = param_5;
  if ((((*param_3 == 0) && (param_3[2] == 0)) && ((char)param_3[4] == -1)) &&
     (((char)param_3[6] == -1 && (*(longlong *)(param_3 + 8) == 0)))) {
    puVar4 = (undefined8 *)(param_1 + 8);
    if (*(char *)(param_1 + 0x10) == '\0') {
      puVar4 = (undefined8 *)0x0;
    }
    if ((puVar4 != (undefined8 *)0x0) && (*param_4 != 0)) {
      FUN_14535e8e0(*puVar4);
    }
  }
  iVar1 = *param_3;
  if (iVar1 == 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x20);
    if (0 < lVar5) {
      param_5 = (int *)0x0;
      do {
        lVar8 = 0;
        piVar7 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)param_5);
        *piVar3 = *piVar7;
        if (((((param_3[2] == 0) && ((char)param_3[4] == -1)) && ((char)param_3[6] == -1)) &&
            ((*(longlong *)(param_3 + 8) == 0 && ((char)piVar7[4] != '\0')))) && (*param_4 != 0)) {
          FUN_14535e8e0(*(undefined8 *)(piVar7 + 2));
        }
        iVar1 = param_3[2];
        if (iVar1 == 0) {
          lVar6 = (longlong)piVar7[8];
          if (0 < lVar6) {
            do {
              lVar2 = *(longlong *)(piVar7 + 6);
              piVar3[2] = *(int *)(lVar2 + lVar8);
              FUN_14535cd10((int *)(lVar2 + lVar8),param_2,param_3 + 4,param_4,piVar3 + 4);
              lVar8 = lVar8 + 0x28;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
        }
        else {
          lVar8 = FUN_14535b2e0(piVar7 + 6,iVar1);
          if (lVar8 != 0) {
            piVar3[2] = iVar1;
            FUN_14535cd10(lVar8,param_2,param_3 + 4,param_4,piVar3 + 4);
          }
        }
        param_5 = (int *)((longlong)param_5 + 0x28);
        lVar5 = lVar5 + -1;
        piVar3[2] = 0;
      } while (lVar5 != 0);
      *piVar3 = 0;
      return;
    }
  }
  else {
    lVar5 = FUN_14535ab00(param_1 + 0x18,iVar1);
    if (lVar5 != 0) {
      *param_5 = iVar1;
      FUN_14535cbd0(lVar5,param_2,param_3 + 2,param_4,param_5 + 2);
      *param_5 = 0;
      return;
    }
  }
  *param_5 = 0;
  return;
}



// FUNCTION 14535cbd0 FUN_14535cbd0 body=316 status=ok
// SIG undefined FUN_14535cbd0(void)

void FUN_14535cbd0(longlong param_1,undefined1 param_2,int *param_3,longlong *param_4,int *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((*param_3 == 0) && ((char)param_3[2] == -1)) && ((char)param_3[4] == -1)) &&
     (*(longlong *)(param_3 + 6) == 0)) {
    puVar2 = (undefined8 *)(param_1 + 8);
    if (*(char *)(param_1 + 0x10) == '\0') {
      puVar2 = (undefined8 *)0x0;
    }
    if ((puVar2 != (undefined8 *)0x0) && (*param_4 != 0)) {
      FUN_14535e8e0(*puVar2);
    }
  }
  iVar1 = *param_3;
  if (iVar1 == 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x20);
    if (0 < lVar4) {
      lVar5 = 0;
      do {
        piVar3 = (int *)(*(longlong *)(param_1 + 0x18) + lVar5);
        *param_5 = *piVar3;
        FUN_14535cd10(piVar3,param_2,param_3 + 2,param_4,param_5 + 2);
        lVar5 = lVar5 + 0x28;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *param_5 = 0;
      return;
    }
  }
  else {
    lVar4 = FUN_14535b2e0(param_1 + 0x18,iVar1);
    if (lVar4 != 0) {
      *param_5 = iVar1;
      FUN_14535cd10(lVar4,param_2,param_3 + 2,param_4,param_5 + 2);
      *param_5 = 0;
      return;
    }
  }
  *param_5 = 0;
  return;
}



// FUNCTION 14535cd10 FUN_14535cd10 body=694 status=ok
// SIG undefined FUN_14535cd10(void)

void FUN_14535cd10(longlong param_1,undefined1 param_2,char *param_3,longlong *param_4,char *param_5
                  )

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  
  pcVar3 = param_5;
  if (((*param_3 == -1) && (param_3[8] == -1)) && (*(longlong *)(param_3 + 0x10) == 0)) {
    puVar5 = (undefined8 *)(param_1 + 8);
    if (*(char *)(param_1 + 0x10) == '\0') {
      puVar5 = (undefined8 *)0x0;
    }
    if ((puVar5 != (undefined8 *)0x0) && (*param_4 != 0)) {
      FUN_14535e8e0(*puVar5);
    }
  }
  cVar1 = *param_3;
  if (cVar1 == -1) {
    lVar6 = (longlong)*(int *)(param_1 + 0x20);
    if (0 < lVar6) {
      param_5 = (char *)0x0;
      do {
        pcVar7 = (char *)(*(longlong *)(param_1 + 0x18) + (longlong)param_5);
        *pcVar3 = *pcVar7;
        if (((param_3[8] == -1) && (*(longlong *)(param_3 + 0x10) == 0)) &&
           ((pcVar7[0x10] != '\0' && (*param_4 != 0)))) {
          FUN_14535e8e0(*(undefined8 *)(pcVar7 + 8));
        }
        lVar8 = 0;
        cVar1 = param_3[8];
        if (cVar1 == -1) {
          lVar9 = (longlong)*(int *)(pcVar7 + 0x20);
          if (0 < lVar9) {
            do {
              pcVar10 = (char *)(*(longlong *)(pcVar7 + 0x18) + lVar8);
              pcVar3[8] = *pcVar10;
              if ((pcVar10[0x10] != '\0') && (*param_4 != 0)) {
                FUN_14535e8e0(*(undefined8 *)(pcVar10 + 8));
              }
              lVar2 = *(longlong *)(param_3 + 0x10);
              if (lVar2 == 0) {
                puVar5 = *(undefined8 **)(pcVar10 + 0x18);
                if (puVar5 != puVar5 + (ulonglong)*(uint *)(pcVar10 + 0x20) * 2) {
                  do {
                    *(undefined8 *)(pcVar3 + 0x10) = *puVar5;
                    if (*param_4 != 0) {
                      FUN_14535e8e0(puVar5[1]);
                    }
                    puVar5 = puVar5 + 2;
                  } while (puVar5 != (undefined8 *)
                                     ((ulonglong)*(uint *)(pcVar10 + 0x20) * 0x10 +
                                     *(longlong *)(pcVar10 + 0x18)));
                }
              }
              else {
                lVar4 = FUN_14535c7a0(pcVar10 + 0x18,lVar2);
                if ((lVar4 != 0) && (*(longlong *)(pcVar3 + 0x10) = lVar2, *param_4 != 0)) {
                  FUN_14535e8e0(*(undefined8 *)(lVar4 + 8));
                }
              }
              lVar8 = lVar8 + 0x28;
              pcVar3[0x10] = '\0';
              pcVar3[0x11] = '\0';
              pcVar3[0x12] = '\0';
              pcVar3[0x13] = '\0';
              pcVar3[0x14] = '\0';
              pcVar3[0x15] = '\0';
              pcVar3[0x16] = '\0';
              pcVar3[0x17] = '\0';
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
        else {
          lVar8 = FUN_14535c160(pcVar7 + 0x18,cVar1);
          if (lVar8 != 0) {
            pcVar3[8] = cVar1;
            FUN_14535d1a0(lVar8,param_2,param_3 + 0x10,param_4,pcVar3 + 0x10);
          }
        }
        param_5 = (char *)((longlong)param_5 + 0x28);
        lVar6 = lVar6 + -1;
        pcVar3[8] = -1;
      } while (lVar6 != 0);
      *pcVar3 = -1;
      return;
    }
  }
  else {
    lVar6 = FUN_14535ba70(param_1 + 0x18,cVar1);
    if (lVar6 != 0) {
      *param_5 = cVar1;
      FUN_14535cfd0(lVar6,param_2,param_3 + 8,param_4,param_5 + 8);
      *param_5 = -1;
      return;
    }
  }
  *param_5 = -1;
  return;
}



// FUNCTION 14535cfd0 FUN_14535cfd0 body=463 status=ok
// SIG undefined FUN_14535cfd0(void)

void FUN_14535cfd0(longlong param_1,undefined1 param_2,char *param_3,longlong *param_4,char *param_5
                  )

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*param_3 == -1) && (*(longlong *)(param_3 + 8) == 0)) {
    puVar4 = (undefined8 *)(param_1 + 8);
    if (*(char *)(param_1 + 0x10) == '\0') {
      puVar4 = (undefined8 *)0x0;
    }
    if ((puVar4 != (undefined8 *)0x0) && (*param_4 != 0)) {
      FUN_14535e8e0(*puVar4);
    }
  }
  lVar7 = 0;
  cVar1 = *param_3;
  if (cVar1 == -1) {
    lVar6 = (longlong)*(int *)(param_1 + 0x20);
    if (lVar6 < 1) {
      *param_5 = -1;
    }
    else {
      do {
        pcVar5 = (char *)(*(longlong *)(param_1 + 0x18) + lVar7);
        *param_5 = *pcVar5;
        if ((pcVar5[0x10] != '\0') && (*param_4 != 0)) {
          FUN_14535e8e0(*(undefined8 *)(pcVar5 + 8));
        }
        lVar2 = *(longlong *)(param_3 + 8);
        if (lVar2 == 0) {
          puVar4 = *(undefined8 **)(pcVar5 + 0x18);
          if (puVar4 != puVar4 + (ulonglong)*(uint *)(pcVar5 + 0x20) * 2) {
            do {
              *(undefined8 *)(param_5 + 8) = *puVar4;
              if (*param_4 != 0) {
                FUN_14535e8e0(puVar4[1]);
              }
              puVar4 = puVar4 + 2;
            } while (puVar4 != (undefined8 *)
                               ((ulonglong)*(uint *)(pcVar5 + 0x20) * 0x10 +
                               *(longlong *)(pcVar5 + 0x18)));
          }
        }
        else {
          lVar3 = FUN_14535c7a0(pcVar5 + 0x18);
          if ((lVar3 != 0) && (*(longlong *)(param_5 + 8) = lVar2, *param_4 != 0)) {
            FUN_14535e8e0(*(undefined8 *)(lVar3 + 8));
          }
        }
        lVar7 = lVar7 + 0x28;
        param_5[8] = '\0';
        param_5[9] = '\0';
        param_5[10] = '\0';
        param_5[0xb] = '\0';
        param_5[0xc] = '\0';
        param_5[0xd] = '\0';
        param_5[0xe] = '\0';
        param_5[0xf] = '\0';
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *param_5 = -1;
    }
    return;
  }
  lVar7 = FUN_14535c160(param_1 + 0x18,cVar1);
  if (lVar7 == 0) {
    *param_5 = -1;
    return;
  }
  *param_5 = cVar1;
  FUN_14535d1a0(lVar7,param_2,param_3 + 8,param_4,param_5 + 8);
  *param_5 = -1;
  return;
}



// FUNCTION 14535d1a0 FUN_14535d1a0 body=224 status=ok
// SIG undefined FUN_14535d1a0(void)

void FUN_14535d1a0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x10) == '\0') {
    puVar3 = (undefined8 *)0x0;
  }
  if ((puVar3 != (undefined8 *)0x0) && (*param_4 != 0)) {
    FUN_14535e8e0(*puVar3);
  }
  lVar1 = *param_3;
  if (lVar1 == 0) {
    plVar4 = *(longlong **)(param_1 + 0x18);
    if (plVar4 != plVar4 + (ulonglong)*(uint *)(param_1 + 0x20) * 2) {
      do {
        *param_5 = *plVar4;
        if (*param_4 != 0) {
          FUN_14535e8e0(plVar4[1]);
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 != (longlong *)
                         ((ulonglong)*(uint *)(param_1 + 0x20) * 0x10 +
                         *(longlong *)(param_1 + 0x18)));
      *param_5 = 0;
      return;
    }
  }
  else {
    lVar2 = FUN_14535c7a0(param_1 + 0x18,lVar1);
    if (lVar2 != 0) {
      *param_5 = lVar1;
      if (*param_4 != 0) {
        FUN_14535e8e0(*(undefined8 *)(lVar2 + 8));
      }
      *param_5 = 0;
      return;
    }
  }
  *param_5 = 0;
  return;
}



// FUNCTION 14535d280 FUN_14535d280 body=3015 status=ok
// SIG undefined FUN_14535d280(void)

void FUN_14535d280(undefined8 *param_1,float *param_2,uint param_3,float param_4,float param_5,
                  float param_6)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float _X;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b0;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  pfVar1 = param_2 + param_3;
  fVar21 = *(float *)(param_1 + 2);
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  uVar9 = param_1[3];
  fVar22 = (param_4 - param_5) / (float)param_3;
  bVar2 = fVar21 != 0.0;
  if (fVar21 <= 1e-08) {
    fVar21 = 1e-08;
  }
  uStack_c0._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  uStack_c0._0_4_ = (float)uVar5;
  auVar10._0_4_ = (float)uStack_c0;
  local_c8._0_4_ = (float)uVar4;
  local_c8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fVar23 = local_c8._4_4_;
  _X = uStack_c0._4_4_;
  uStack_b0 = uVar9;
  local_c8 = uVar4;
  uStack_c0 = uVar5;
  switch(iVar3) {
  case 0:
    if (param_2 < pfVar1) {
      fVar23 = 1.0 / fVar21;
      do {
        auVar10._0_4_ = (1.5707964 - _X) * fVar23;
        iVar8 = (int)auVar10._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar10._0_4_)) {
          auVar10._4_4_ = auVar10._0_4_;
          auVar10._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar10);
          auVar10._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar10._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar7 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar7 = param_2 + (int)uVar6;
        }
        for (; param_2 < pfVar7; param_2 = param_2 + 1) {
          _X = _X + fVar21;
          param_5 = param_5 + fVar22;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          auVar10._0_4_ = _X * _X;
          *param_2 = ((((0.0041531627 - auVar10._0_4_ * 9.181827e-05) * auVar10._0_4_ - 0.08332414)
                       * auVar10._0_4_ + 0.4999983) * _X + 0.5) * param_5;
        }
        auVar11._0_4_ = (3.1415927 - _X) * fVar23;
        iVar8 = (int)auVar11._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar11._0_4_)) {
          auVar11._4_4_ = auVar11._0_4_;
          auVar11._8_8_ = 0;
          uVar6 = movmskps((int)pfVar7,auVar11);
          auVar11._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar11._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar7 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar7 = param_2 + (int)uVar6;
        }
        for (; param_2 < pfVar7; param_2 = param_2 + 1) {
          _X = _X + fVar21;
          param_5 = param_5 + fVar22;
          auVar11._0_4_ = 3.1415927 - _X;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          auVar10._0_4_ = auVar11._0_4_ * auVar11._0_4_;
          *param_2 = ((((0.0041531627 - auVar10._0_4_ * 9.181827e-05) * auVar10._0_4_ - 0.08332414)
                       * auVar10._0_4_ + 0.4999983) * auVar11._0_4_ + 0.5) * param_5;
        }
        auVar12._0_4_ = (4.712389 - _X) * fVar23;
        iVar8 = (int)auVar12._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar12._0_4_)) {
          auVar12._4_4_ = auVar12._0_4_;
          auVar12._8_8_ = 0;
          uVar6 = movmskps((int)pfVar7,auVar12);
          auVar12._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar12._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar7 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar7 = param_2 + (int)uVar6;
        }
        for (; param_2 < pfVar7; param_2 = param_2 + 1) {
          _X = _X + fVar21;
          param_5 = param_5 + fVar22;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          auVar11._0_4_ = _X - 3.1415927;
          auVar10._0_4_ = auVar11._0_4_ * auVar11._0_4_;
          *param_2 = (0.5 - (((0.0041531627 - auVar10._0_4_ * 9.181827e-05) * auVar10._0_4_ -
                             0.08332414) * auVar10._0_4_ + 0.4999983) * auVar11._0_4_) * param_5;
        }
        auVar13._0_4_ = (6.2831855 - _X) * fVar23;
        iVar8 = (int)auVar13._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar13._0_4_)) {
          auVar13._4_4_ = auVar13._0_4_;
          auVar13._8_8_ = 0;
          uVar6 = movmskps((int)pfVar7,auVar13);
          auVar13._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar13._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          register0x00000020 = (BADSPACEBASE *)(param_2 + (int)uVar6);
        }
        for (; param_2 < register0x00000020; param_2 = param_2 + 1) {
          _X = _X + fVar21;
          param_5 = param_5 + fVar22;
          auVar11._0_4_ = 6.2831855 - _X;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          auVar10._0_4_ = auVar11._0_4_ * auVar11._0_4_;
          *param_2 = (0.5 - (((0.0041531627 - auVar10._0_4_ * 9.181827e-05) * auVar10._0_4_ -
                             0.08332414) * auVar10._0_4_ + 0.4999983) * auVar11._0_4_) * param_5;
        }
        if (6.2831855 <= _X) {
          _X = _X + -6.2831855;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
        }
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
    break;
  case 1:
    if (param_2 < pfVar1) {
      auVar11._0_4_ = (float)local_c8;
      do {
        auVar14._0_4_ = (0.5 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar14._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar14._0_4_)) {
          auVar14._4_4_ = auVar14._0_4_;
          auVar14._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar14);
          auVar14._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar14._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar7 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar7 = param_2 + (int)uVar6;
        }
        if (param_2 < pfVar7) {
          do {
            _X = _X + fVar21;
            param_5 = param_5 + fVar22;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = (_X + _X) * fVar23 - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_ * param_5;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar7);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        auVar15._0_4_ = (1.0 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar15._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar15._0_4_)) {
          auVar15._4_4_ = auVar15._0_4_;
          auVar15._8_8_ = 0;
          uVar6 = movmskps((int)pfVar7,auVar15);
          auVar15._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar15._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          register0x00000020 = (BADSPACEBASE *)(param_2 + (int)uVar6);
        }
        if (param_2 < register0x00000020) {
          do {
            _X = _X + fVar21;
            param_5 = param_5 + fVar22;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = ((1.0 - _X) + (1.0 - _X)) * fVar23 - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_ * param_5;
            param_2 = param_2 + 1;
          } while (param_2 < register0x00000020);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        if (1.0 <= _X) {
          _X = _X + -1.0;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
        }
        uVar4 = local_c8;
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
    break;
  case 2:
    if (param_2 < pfVar1) {
      auVar11._0_4_ = (float)local_c8;
      do {
        auVar16._0_4_ = (param_6 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar16._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar16._0_4_)) {
          auVar16._4_4_ = auVar16._0_4_;
          auVar16._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar16);
          auVar16._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar16._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar7 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar7 = param_2 + (int)uVar6;
        }
        if (param_2 < pfVar7) {
          do {
            param_5 = param_5 + fVar22;
            _X = _X + fVar21;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = fVar23 * param_5 - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar7);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        auVar17._0_4_ = (1.0 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar17._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar17._0_4_)) {
          auVar17._4_4_ = auVar17._0_4_;
          auVar17._8_8_ = 0;
          uVar6 = movmskps((int)pfVar7,auVar17);
          auVar17._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar17._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          register0x00000020 = (BADSPACEBASE *)(param_2 + (int)uVar6);
        }
        if (param_2 < register0x00000020) {
          do {
            _X = _X + fVar21;
            param_5 = param_5 + fVar22;
            auVar11._0_4_ = -(auVar11._0_4_ * auVar10._0_4_);
            *param_2 = auVar11._0_4_;
            param_2 = param_2 + 1;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          } while (param_2 < register0x00000020);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        if (1.0 <= _X) {
          _X = _X + -1.0;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
        }
        uVar4 = local_c8;
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
    break;
  case 3:
    if (param_2 < pfVar1) {
      auVar11._0_4_ = (float)local_c8;
      do {
        auVar18._0_4_ = (1.0 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar18._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar18._0_4_)) {
          auVar18._4_4_ = auVar18._0_4_;
          auVar18._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar18);
          auVar18._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar18._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          register0x00000020 = (BADSPACEBASE *)(param_2 + (int)uVar6);
        }
        if (param_2 < register0x00000020) {
          do {
            _X = _X + fVar21;
            param_5 = param_5 + fVar22;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = _X * param_5 * fVar23 - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_;
            param_2 = param_2 + 1;
          } while (param_2 < register0x00000020);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        if (1.0 <= _X) {
          _X = _X + -1.0;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
        }
        uVar4 = local_c8;
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
    break;
  case 4:
    if (param_2 < pfVar1) {
      auVar11._0_4_ = (float)local_c8;
      do {
        auVar19._0_4_ = (1.0 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar19._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar19._0_4_)) {
          auVar19._4_4_ = auVar19._0_4_;
          auVar19._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar19);
          auVar19._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar19._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          register0x00000020 = (BADSPACEBASE *)(param_2 + (int)uVar6);
        }
        if (param_2 < register0x00000020) {
          do {
            _X = _X + fVar21;
            param_5 = param_5 + fVar22;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = (1.0 - _X) * param_5 * fVar23 - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_;
            param_2 = param_2 + 1;
          } while (param_2 < register0x00000020);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        if (1.0 <= _X) {
          _X = _X + -1.0;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
        }
        uVar4 = local_c8;
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
    break;
  case 5:
    if (param_2 < pfVar1) {
      auVar11._0_4_ = (float)local_c8;
      do {
        auVar20._0_4_ = (1.0 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar20._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar20._0_4_)) {
          auVar20._4_4_ = auVar20._0_4_;
          auVar20._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar20);
          auVar20._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar20._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)(longlong)(int)uVar6;
        pfVar7 = pfVar1;
        if (param_2 + (longlong)register0x00000020 < pfVar1) {
          pfVar7 = param_2 + (longlong)register0x00000020;
        }
        if (param_2 < pfVar7) {
          register0x00000020 = (BADSPACEBASE *)(uVar9 >> 0x21);
          do {
            param_5 = param_5 + fVar22;
            _X = _X + fVar21;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ =
                 (float)(longlong)register0x00000020 * 4.656613e-10 * param_5 * fVar23 -
                 auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar7);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        if (1.0 <= _X) {
          _X = _X + -1.0;
          uVar9 = uVar9 * 0x5851f42d4c957f2d + 1;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          uStack_b0 = uVar9;
        }
        uVar4 = local_c8;
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
  }
  uStack_c0 = uVar5;
  local_c8 = uVar4;
  if (bVar2) {
    *param_1 = local_c8;
    param_1[1] = uStack_c0;
    param_1[2] = CONCAT44(iVar3,fVar21);
    param_1[3] = uStack_b0;
    if (iVar3 == 0) {
      fVar21 = 6.2831855;
    }
    else {
      if (iVar3 == 5) {
        return;
      }
      fVar21 = 1.0;
    }
    fVar21 = fmodf(_X,fVar21);
    *(float *)((longlong)param_1 + 0xc) = fVar21;
  }
  return;
}



// FUNCTION 14535de60 FUN_14535de60 body=415 status=ok
// SIG undefined FUN_14535de60(void)

undefined8 *
FUN_14535de60(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uStackX_c;
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
  
  *(undefined1 *)(param_1 + 4) = 0xff;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_LAB_149d424c0;
  param_1[0xc] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x7fffffff;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = param_3;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xde) = 1;
  LOCK();
  *(int *)(param_1[0xd] + 0x14) = *(int *)(param_1[0xd] + 0x14) + 1;
  UNLOCK();
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = *(undefined4 *)(param_4 + 5);
  uStack_c = *(undefined4 *)((longlong)param_4 + 0x2c);
  FUN_145357730((undefined4 *)((longlong)param_1 + 0xc4),&local_38);
  if (*(int *)(param_1 + 8) == 0) {
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    param_1[3] = CONCAT44(uStack_24,local_28);
    param_1[4] = CONCAT44(uStack_1c,uStack_20);
    *(undefined4 *)(param_1 + 5) = local_18;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_14;
    *(undefined4 *)(param_1 + 6) = uStack_10;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_c;
  }
  lVar1 = param_1[0xd];
  puVar3 = *(undefined8 **)(lVar1 + 0x48);
  if (puVar3 != puVar3 + *(uint *)(lVar1 + 0x50)) {
    do {
      iVar2 = FUN_145352ee0(param_1 + 0x12,*puVar3);
      if (iVar2 == 1) {
        uStackX_c = CONCAT31(uStackX_c._1_3_,*(undefined1 *)((longlong)*puVar3 + 0xd));
        FUN_145353180(param_1,CONCAT44(uStackX_c,*(undefined4 *)*puVar3));
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)
                       (*(longlong *)(lVar1 + 0x48) + (ulonglong)*(uint *)(lVar1 + 0x50) * 8));
  }
  return param_1;
}



// FUNCTION 14535e000 FUN_14535e000 body=132 status=ok
// SIG undefined FUN_14535e000(void)

void FUN_14535e000(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149d424c0;
  plVar3 = (longlong *)param_1[0xd];
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*plVar3 + 0x18))();
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x12]);
    param_1[0x12] = 0;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
    *(undefined4 *)(param_1 + 10) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[9]);
    param_1[9] = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  FUN_1453533f0(param_1);
  return;
}



// FUNCTION 14535e090 FUN_14535e090 body=279 status=ok
// SIG undefined FUN_14535e090(void)

undefined8 * FUN_14535e090(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = AK::MemoryMgr::Malloc(0,0x140);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_14535de60(puVar1,param_2,param_3,param_4);
      *puVar1 = &PTR_LAB_149d42508;
      puVar1[0x23] = 0;
      puVar1[0x24] = 0;
      puVar1[0x25] = 0;
      puVar1[0x26] = 0;
      *(undefined1 *)(puVar1 + 0x27) = 0;
      return puVar1;
    }
  }
  else if (param_1 == 1) {
    puVar1 = AK::MemoryMgr::Malloc(0,0x110);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_14535de60(puVar1,param_2,param_3,param_4);
      *puVar1 = &PTR_LAB_149d42550;
      return puVar1;
    }
  }
  else {
    if (param_1 != 2) {
      return (undefined8 *)0x0;
    }
    puVar1 = AK::MemoryMgr::Malloc(0,0x110);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_14535de60(puVar1,param_2,param_3,param_4);
      *(undefined1 *)(puVar1 + 0x21) = 0;
      *puVar1 = &PTR_LAB_149d42598;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14535e1b0 FUN_14535e1b0 body=283 status=ok
// SIG undefined FUN_14535e1b0(void)

undefined8 FUN_14535e1b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  
  if ((*(longlong *)(param_1 + 0xa0) != 0) &&
     (*(longlong *)(param_1 + 0xa0) != *(longlong *)(param_2 + 0x18))) {
    *(undefined4 *)(param_1 + 0xc0) = 3;
    FUN_14535e360();
  }
  *(undefined4 *)(param_1 + 0xc0) = 1;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x28);
  iVar2 = *(int *)(param_1 + 0xc4);
  if (iVar2 == 2) {
    lVar4 = *(longlong *)(param_2 + 0x30);
    if (lVar4 != 0) {
      uVar3 = *(uint *)(param_1 + 0x78);
      if (*(uint *)(param_1 + 0x7c) <= uVar3) {
        cVar5 = FUN_14535eaa0(param_1 + 0x70);
        if (cVar5 == '\0') {
          return 1;
        }
        if (*(uint *)(param_1 + 0x7c) <= uVar3) {
          return 1;
        }
      }
      uVar3 = *(uint *)(param_1 + 0x78);
      *(uint *)(param_1 + 0x78) = uVar3 + 1;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = lVar4;
      }
    }
  }
  else if (iVar2 == 0) {
    FUN_14535ea20(param_1,param_3);
  }
  else if (iVar2 == 1) {
    FUN_14535ea20(param_1,param_3);
    if ((*(longlong *)(param_1 + 0xa0) == 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
      *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_2 + 0x18);
      FUN_1453a25a0();
    }
  }
  else if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return 1;
}



// FUNCTION 14535e2d0 FUN_14535e2d0 body=56 status=ok
// SIG undefined FUN_14535e2d0(void)

void FUN_14535e2d0(longlong param_1,int param_2)

{
  if ((1 < *(int *)(param_1 + 0xc0) - 3U) && (*(int *)(param_1 + 0xb4) == 0x7fffffff)) {
    *(undefined4 *)(param_1 + 0xc0) = 2;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb8) + param_2;
  }
  return;
}



// FUNCTION 14535e310 FUN_14535e310 body=77 status=ok
// SIG undefined FUN_14535e310(void)

void FUN_14535e310(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x28))();
  (**(code **)(*(longlong *)param_1[0xd] + 0x28))((longlong *)param_1[0xd],lVar1,param_1);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(lVar1 + 8);
  (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014535e359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}



// FUNCTION 14535e360 FUN_14535e360 body=332 status=ok
// SIG undefined FUN_14535e360(void)

void FUN_14535e360(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(int *)(param_1 + 0xc0) == 3) &&
     (cVar4 = FUN_1453577c0(*(undefined8 *)(param_1 + 0x68)), cVar4 != '\0')) {
    iVar2 = *(int *)(param_1 + 0xc4);
    if (iVar2 == 0) {
      if ((*(char *)(param_1 + 0xde) != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) {
        local_res8 = 0;
        local_resc = 4;
        FUN_1450eaa80(*(longlong *)(param_1 + 0x30),&local_res8,1);
      }
    }
    else if (iVar2 == 2) {
      if (*(uint *)(param_1 + 0x78) != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0x70);
        local_res8 = 0;
        local_resc = 4;
        if (puVar5 != puVar5 + *(uint *)(param_1 + 0x78)) {
          do {
            FUN_1450eaa80(*puVar5,&local_res8,1);
            puVar5 = puVar5 + 1;
          } while (puVar5 != (undefined8 *)
                             (*(longlong *)(param_1 + 0x70) +
                             (ulonglong)*(uint *)(param_1 + 0x78) * 8));
        }
      }
    }
    else if (iVar2 == 1) {
      FUN_14535e4b0(param_1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x88);
  while (iVar2 != 0) {
    lVar3 = *(longlong *)
             (*(longlong *)(param_1 + 0x80) + -8 + (ulonglong)*(uint *)(param_1 + 0x88) * 8);
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) - 1;
    LOCK();
    piVar1 = (int *)(lVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
    }
    iVar2 = *(int *)(param_1 + 0x88);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_1453a25b0();
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



// FUNCTION 14535e4b0 FUN_14535e4b0 body=404 status=ok
// SIG undefined FUN_14535e4b0(void)

void FUN_14535e4b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(uint *)(param_1 + 0x88) == 0) || (*(longlong *)(param_1 + 0xa0) == 0)) {
    puVar5 = *(undefined8 **)(param_1 + 0x80);
    if (puVar5 != puVar5 + *(uint *)(param_1 + 0x88)) {
      do {
        uVar2 = *puVar5;
        uVar3 = *(undefined8 *)(param_1 + 8);
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        FUN_145081890(DAT_14c790fd8,uVar2,uVar3,uVar1);
        FUN_1450d48f0(uVar2,uVar3,uVar1,0,4);
        puVar5 = puVar5 + 1;
      } while (puVar5 != (undefined8 *)
                         (*(longlong *)(param_1 + 0x80) + (ulonglong)*(uint *)(param_1 + 0x88) * 8))
      ;
    }
  }
  else {
    for (puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + 0x48);
        puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
      if ((*(longlong *)(puVar5[2] + 0x90) != 0) &&
         (cVar4 = FUN_14538e3c0(*(longlong *)(puVar5[2] + 0x90),param_1), cVar4 != '\0')) {
        local_res8 = 0;
        local_resc = 4;
        FUN_1450eaa80(puVar5[2],&local_res8,1);
      }
    }
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x70);
    if (plVar6 != (longlong *)0x0) {
      do {
        puVar5 = *(undefined8 **)(param_1 + 0x80);
        if (puVar5 != puVar5 + *(uint *)(param_1 + 0x88)) {
          do {
            cVar4 = FUN_145372a80(plVar6[2],param_1);
            if (cVar4 != '\0') {
              FUN_145081200(DAT_14c790fd8,plVar6[2],*puVar5,3);
            }
            puVar5 = puVar5 + 1;
          } while (puVar5 != (undefined8 *)
                             (*(longlong *)(param_1 + 0x80) +
                             (ulonglong)*(uint *)(param_1 + 0x88) * 8));
        }
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      return;
    }
  }
  return;
}



// FUNCTION 14535e650 FUN_14535e650 body=143 status=ok
// SIG undefined FUN_14535e650(void)

void FUN_14535e650(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0xbc)) {
    FUN_145357850(*(undefined8 *)(param_1 + 0x68),param_1);
  }
  FUN_14535e360(param_1);
  FUN_145353380();
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  *(undefined4 *)(param_1 + 0xc0) = 4;
  return;
}



// FUNCTION 14535e6e0 FUN_14535e6e0 body=429 status=ok
// SIG undefined FUN_14535e6e0(void)

void FUN_14535e6e0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  uint5 *puVar1;
  float fVar2;
  longlong lVar3;
  uint5 *puVar4;
  ulonglong uVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong local_res10;
  
  puVar4 = (uint5 *)param_1[0x12];
  fVar2 = *param_5;
  puVar1 = puVar4 + (ulonglong)*(uint *)(param_1 + 0x13) * 3;
  if (puVar4 != puVar1) {
    uVar5 = param_2 >> 0x20 & 0xff;
    while ((ulonglong)*puVar4 != (uVar5 << 0x20 | param_2 & 0xffffffff)) {
      puVar4 = puVar4 + 3;
      if (puVar4 == puVar1) {
        return;
      }
    }
    local_res10 = param_2;
    do {
      if ((ulonglong)*puVar4 != (uVar5 << 0x20 | param_2 & 0xffffffff)) {
        return;
      }
      lVar3 = *(longlong *)(puVar4 + 2);
      if (fVar2 == *(float *)(lVar3 + 0x30)) {
        fVar6 = *(float *)(lVar3 + 0x38);
LAB_14535e7d2:
        if (fVar6 == 3.4028235e+38) goto LAB_14535e7d7;
      }
      else {
        if (fVar2 == *(float *)(lVar3 + 0x34)) {
          fVar6 = *(float *)(lVar3 + 0x3c);
          goto LAB_14535e7d2;
        }
LAB_14535e7d7:
        if (*(longlong *)(lVar3 + 0x18) == 0) {
          uVar7 = 0;
        }
        else {
          local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)(lVar3 + 0x28));
          param_5._0_4_ = 0;
          FUN_1450737c0(lVar3 + 0x18,fVar2,&local_res10,&param_5);
          *(undefined4 *)(lVar3 + 0x28) = (undefined4)local_res10;
          uVar7 = param_5._0_4_;
        }
        *(float *)(lVar3 + 0x30 + (ulonglong)*(byte *)(lVar3 + 0x14) * 4) = fVar2;
        *(undefined4 *)(lVar3 + 0x38 + (ulonglong)*(byte *)(lVar3 + 0x14) * 4) = uVar7;
        *(byte *)(lVar3 + 0x14) = *(byte *)(lVar3 + 0x14) ^ 1;
      }
      (**(code **)(*param_1 + 0x18))(param_1,*(undefined4 *)(lVar3 + 8));
      puVar4 = puVar4 + 3;
    } while (puVar4 != (uint5 *)(param_1[0x12] + (ulonglong)*(uint *)(param_1 + 0x13) * 0x18));
  }
  return;
}



// FUNCTION 14535e8e0 FUN_14535e8e0 body=40 status=ok
// SIG undefined FUN_14535e8e0(void)

void FUN_14535e8e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 3;
  FUN_145353380();
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 14535e910 FUN_14535e910 body=262 status=ok
// SIG undefined FUN_14535e910(void)

void FUN_14535e910(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStackX_c;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (((*(longlong *)(param_1 + 0xa8) != 0) && (1 < *(int *)(param_1 + 0xc0) - 3U)) &&
     ((1 < *(int *)(param_1 + 0xc4) || (*(int *)(param_1 + 0xd0) != 0)))) {
    uVar2 = *(undefined4 *)(param_1 + 0xcc);
    uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xc);
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x10);
    *(char *)(param_1 + 0x59) = *(char *)(param_1 + 0x59) + '\x01';
    uStackX_c = CONCAT31(uStackX_c._1_3_,4);
    bVar1 = *(byte *)(param_1 + 0x58) + 4;
    local_48 = CONCAT44(uStackX_c,uVar4);
    *(byte *)(param_1 + 0x58) = (bVar1 ^ *(byte *)(param_1 + 0x58)) & 3 ^ bVar1;
    local_40 = param_1 + 8;
    local_38 = uVar2;
    local_34 = uVar3;
    FUN_14535f210(param_1 + 0x48,&local_48);
    *(byte *)(param_1 + 0x58) =
         ((*(byte *)(param_1 + 0x58) >> 2) - 1) * '\x04' | *(byte *)(param_1 + 0x58) & 3;
    FUN_145356fa0(*(undefined8 *)(param_1 + 0x68),param_1 + 8,uVar2,uVar3);
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
  }
  return;
}



// FUNCTION 14535ea20 FUN_14535ea20 body=128 status=ok
// SIG undefined FUN_14535ea20(void)

void FUN_14535ea20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x88);
    plVar1 = (longlong *)(param_1 + 0x80);
    plVar5 = (longlong *)*plVar1;
    plVar2 = plVar5 + uVar3;
    for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
      if (param_2 == *plVar5) {
        return;
      }
    }
    if ((uVar3 < *(uint *)(param_1 + 0x8c)) ||
       ((cVar4 = FUN_14535eb60(plVar1), cVar4 != '\0' && (uVar3 < *(uint *)(param_1 + 0x8c))))) {
      uVar3 = *(uint *)(param_1 + 0x88);
      *(uint *)(param_1 + 0x88) = uVar3 + 1;
      plVar1 = (longlong *)(*plVar1 + (ulonglong)uVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = param_2;
        LOCK();
        *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 14535eaa0 FUN_14535eaa0 body=186 status=ok
// SIG undefined FUN_14535eaa0(void)

undefined8 FUN_14535eaa0(longlong *param_1)

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
      goto LAB_14535eb3d;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_14535eb3d:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14535eb60 FUN_14535eb60 body=186 status=ok
// SIG undefined FUN_14535eb60(void)

undefined8 FUN_14535eb60(longlong *param_1)

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
      goto LAB_14535ebfd;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_14535ebfd:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14535ec20 FUN_14535ec20 body=52 status=ok
// SIG undefined FUN_14535ec20(void)

undefined8 FUN_14535ec20(undefined8 param_1,ulonglong param_2)

{
  FUN_14535e000();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14535ec60 FUN_14535ec60 body=261 status=ok
// SIG undefined FUN_14535ec60(void)

undefined8 FUN_14535ec60(longlong param_1,undefined4 param_2,float param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0xf8) = param_3 * 0.01;
    return 1;
  case 1:
    uVar1 = FUN_14535f1d0((double)param_3);
    *(undefined4 *)(param_1 + 0xfc) = uVar1;
    return 1;
  case 2:
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x138) = 1;
    *(int *)(param_1 + 0x104) = (int)(longlong)param_3;
    return 1;
  case 4:
    *(undefined1 *)(param_1 + 0x138) = 1;
    *(float *)(param_1 + 0x10c) = param_3 * 0.01;
    return 1;
  case 5:
    *(undefined1 *)(param_1 + 0x138) = 1;
    *(float *)(param_1 + 0x110) = param_3 * 0.01;
    return 1;
  default:
    return 0;
  }
  *(float *)(param_1 + 0x108) = param_3;
  *(undefined1 *)(param_1 + 0x138) = 1;
  if ((*(short *)(param_1 + 0xdc) < 1) ||
     (uVar2 = (uint)DAT_14c72f434, param_3 <= ((float)DAT_14c72f42c / (float)uVar2) * 0.25)) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0xd4) = uVar2;
  return 1;
}



// FUNCTION 14535edd0 FUN_14535edd0 body=84 status=ok
// SIG undefined FUN_14535edd0(void)

void FUN_14535edd0(longlong param_1)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(param_1 + 0xd4) == 0) {
    FUN_14535d280(param_1 + 0x118,param_1 + 200,1,*(undefined4 *)(param_1 + 0xf8),
                  *(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x110),local_res8);
  }
  return;
}



// FUNCTION 14535ee50 FUN_14535ee50 body=52 status=ok
// SIG undefined FUN_14535ee50(void)

undefined8 FUN_14535ee50(undefined8 param_1,ulonglong param_2)

{
  FUN_14535e000();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 14535ee90 FUN_14535ee90 body=240 status=ok
// SIG undefined FUN_14535ee90(void)

undefined8 FUN_14535ee90(longlong param_1,int param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_2 + -8) {
  case 0:
    uVar2 = FUN_14535f1d0((double)param_3);
    *(undefined4 *)(param_1 + 0xfc) = uVar2;
    FUN_14535efa0();
    return 1;
  case 1:
    *(float *)(param_1 + 0x100) = param_3 * 0.01;
    return 1;
  case 2:
    uVar2 = FUN_14535f1d0((double)param_3);
    *(undefined4 *)(param_1 + 0x108) = uVar2;
    FUN_14535efa0();
    return 1;
  case 3:
    *(float *)(param_1 + 0x104) = param_3 * 0.01;
    return 1;
  case 4:
    break;
  case 5:
    uVar2 = FUN_14535f1d0((double)param_3);
    *(undefined4 *)(param_1 + 0x10c) = uVar2;
    return 1;
  default:
    return 0;
  }
  if (param_3 < 0.0) {
    *(undefined4 *)(param_1 + 0xb4) = 0x7fffffff;
    return 0x7fffff01;
  }
  iVar1 = FUN_14535f1d0((double)param_3);
  *(int *)(param_1 + 0xb4) = iVar1 + *(int *)(param_1 + 0x108) + *(int *)(param_1 + 0xfc);
  return 1;
}



// FUNCTION 14535efa0 FUN_14535efa0 body=62 status=ok
// SIG undefined FUN_14535efa0(void)

void FUN_14535efa0(longlong param_1)

{
  uint uVar1;
  
  if (0 < *(short *)(param_1 + 0xdc)) {
    uVar1 = *(uint *)(param_1 + 0xfc);
    if (*(uint *)(param_1 + 0x108) <= *(uint *)(param_1 + 0xfc)) {
      uVar1 = *(uint *)(param_1 + 0x108);
    }
    if (uVar1 < (uint)DAT_14c72f434 * 2) {
      *(uint *)(param_1 + 0xd4) = (uint)DAT_14c72f434;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return;
}



// FUNCTION 14535f040 FUN_14535f040 body=52 status=ok
// SIG undefined FUN_14535f040(void)

undefined8 FUN_14535f040(undefined8 param_1,ulonglong param_2)

{
  FUN_14535e000();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14535f190 FUN_14535f190 body=52 status=ok
// SIG undefined FUN_14535f190(void)

undefined8 FUN_14535f190(undefined8 param_1,ulonglong param_2)

{
  FUN_14535e000();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14535f1d0 FUN_14535f1d0 body=61 status=ok
// SIG undefined FUN_14535f1d0(void)

int FUN_14535f1d0(double param_1)

{
  param_1 = (double)DAT_14c72f42c * param_1;
  if (0.0 < param_1) {
    return (int)(param_1 + 0.5);
  }
  return (int)(param_1 + -0.5);
}



// FUNCTION 14535f210 FUN_14535f210 body=183 status=ok
// SIG undefined FUN_14535f210(void)

void FUN_14535f210(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 2) {
    do {
      if (*(char *)(puVar2 + 1) != *(char *)((longlong)param_1 + 0x11)) {
        *(char *)(puVar2 + 1) = *(char *)((longlong)param_1 + 0x11);
        (**(code **)(*(longlong *)*puVar2 + 8))
                  ((longlong *)*puVar2,*param_2,param_2[1],param_2 + 2,(longlong)param_2 + 0x14);
      }
    } while (((*(byte *)(param_1 + 2) & 3) == 0) &&
            (puVar2 = puVar2 + 2,
            puVar2 != (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1)));
  }
  bVar1 = *(byte *)(param_1 + 2);
  if (((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) {
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    local_28 = *param_2;
    local_20 = param_2[1];
    local_18 = *(undefined4 *)(param_2 + 2);
    local_14 = *(undefined4 *)((longlong)param_2 + 0x14);
    FUN_14535f210(param_1,&local_28);
  }
  return;
}



// FUNCTION 14535f2d0 FUN_14535f2d0 body=659 status=ok
// SIG undefined FUN_14535f2d0(void)

void FUN_14535f2d0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  double dVar15;
  undefined8 extraout_XMM0_Qb;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 == 0) goto LAB_14535f4cb;
  uVar3 = *(undefined4 *)(lVar2 + 0x28);
  iVar1 = *(int *)(lVar2 + 0x2c);
  uVar4 = *(undefined4 *)(lVar2 + 0x30);
  uVar5 = *(undefined4 *)(lVar2 + 0x34);
  uVar6 = *(undefined4 *)(lVar2 + 0x1c);
  uVar7 = *(undefined4 *)(lVar2 + 0x20);
  fVar9 = *(float *)(lVar2 + 0x24);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(lVar2 + 0x18);
  *(undefined4 *)(param_1 + 0x11c) = uVar6;
  *(undefined4 *)(param_1 + 0x120) = uVar7;
  *(float *)(param_1 + 0x124) = fVar9;
  *(undefined4 *)(param_1 + 0x128) = uVar3;
  *(int *)(param_1 + 300) = iVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar4;
  *(undefined4 *)(param_1 + 0x134) = uVar5;
  if (iVar1 == 0) {
    fVar14 = 6.2831855;
LAB_14535f340:
    fVar9 = fmodf(fVar9,fVar14);
    *(float *)(param_1 + 0x124) = fVar9;
  }
  else if (iVar1 != 5) {
    fVar14 = 1.0;
    goto LAB_14535f340;
  }
  if (*(char *)(param_1 + 0x138) == '\0') goto LAB_14535f4cb;
  fVar14 = 0.0;
  fVar9 = *(float *)(param_1 + 0x10c);
  if (fVar9 == 0.0) {
    fVar9 = 1.0;
  }
  else {
    dVar15 = (double)DAT_14c72f42c;
    dVar11 = (double)*(float *)(param_1 + 0x108);
    if (dVar15 <= (double)*(float *)(param_1 + 0x108)) {
      dVar11 = dVar15;
    }
    dVar11 = log((dVar15 * 0.5) / dVar11);
    dVar11 = exp(-(dVar11 * (double)fVar9));
    auVar12._0_8_ = cos(((dVar11 * dVar15 * 0.5) / dVar15) * 6.283185307179586);
    auVar12._8_8_ = extraout_XMM0_Qb;
    dVar15 = 2.0 - auVar12._0_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar15 * dVar15 - 1.0;
    auVar13 = sqrtpd(auVar12,auVar13);
    fVar14 = (float)(auVar13._0_8_ - dVar15);
    fVar9 = fVar14 + 1.0;
  }
  if ((float)DAT_14c72f42c <= *(float *)(param_1 + 0x108)) {
    fVar10 = 1.0;
  }
  else {
    fVar10 = *(float *)(param_1 + 0x108) / (float)DAT_14c72f42c;
  }
  *(float *)(param_1 + 0x128) = fVar10;
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 == 0) {
    *(float *)(param_1 + 0x128) = fVar10 * 6.2831855;
  }
  *(float *)(param_1 + 0x11c) = fVar9;
  *(float *)(param_1 + 0x120) = fVar14;
  if (*(int *)(param_1 + 300) != iVar1) {
    if (*(int *)(param_1 + 300) == 0) {
      fVar9 = *(float *)(param_1 + 0x124) * 0.15915494;
    }
    else {
      if (iVar1 != 0) goto LAB_14535f4b2;
      fVar9 = *(float *)(param_1 + 0x124) * 6.2831855;
    }
    *(float *)(param_1 + 0x124) = fVar9;
  }
LAB_14535f4b2:
  *(int *)(param_1 + 300) = iVar1;
  *(undefined1 *)(param_1 + 0x138) = 0;
LAB_14535f4cb:
  param_2[6] = *(undefined4 *)(param_1 + 0xf8);
  param_2[7] = *(undefined4 *)(param_1 + 0xfc);
  param_2[8] = *(undefined4 *)(param_1 + 0x100);
  param_2[9] = *(undefined4 *)(param_1 + 0x104);
  param_2[10] = *(undefined4 *)(param_1 + 0x108);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x10c);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x110);
  uVar8 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_2 + 0x14) = uVar8;
  *param_2 = *(undefined4 *)(param_1 + 0xc0);
  param_2[3] = *(undefined4 *)(param_1 + 0xb8);
  param_2[2] = *(undefined4 *)(param_1 + 0xb4);
  param_2[1] = *(undefined4 *)(param_1 + 0xb0);
  param_2[4] = *(undefined4 *)(param_1 + 200);
  param_2[5] = *(undefined4 *)(param_1 + 0xd4);
  return;
}



// FUNCTION 14535f570 FUN_14535f570 body=248 status=ok
// SIG undefined FUN_14535f570(void)

undefined8
FUN_14535f570(longlong *param_1,uint param_2,undefined8 param_3,float param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar5 = (float)param_3;
  if (param_2 != 0) {
    pfVar1 = (float *)*param_1;
    fVar8 = param_4 * 4.0;
    fVar6 = fVar5 + 0.0;
    fVar7 = fVar5 + param_4;
    *pfVar1 = fVar6;
    pfVar1[1] = fVar7;
    pfVar1[2] = fVar5 + param_4 + param_4;
    pfVar1[3] = fVar5 + param_4 * 3.0;
    pfVar4 = pfVar1 + 4;
    pfVar2 = pfVar1;
    if (pfVar4 < pfVar1 + param_2) {
      do {
        pfVar3 = pfVar2;
        fVar6 = pfVar3[1];
        fVar7 = pfVar3[2];
        fVar9 = pfVar3[3];
        *pfVar4 = fVar8 + *pfVar3;
        pfVar4[1] = fVar8 + fVar6;
        pfVar4[2] = fVar8 + fVar7;
        pfVar4[3] = fVar8 + fVar9;
        pfVar4 = pfVar4 + 4;
        pfVar2 = pfVar3 + 4;
      } while (pfVar4 < pfVar1 + param_2);
      fVar6 = pfVar3[4];
      fVar7 = pfVar3[5];
    }
    *param_1 = *param_1 + (ulonglong)param_2 * 4;
    fVar6 = fVar6 + fVar8;
    fVar9 = 0.0;
    fVar10 = 0.0;
    if ((0.0 <= fVar6) && (fVar9 = fVar6, fVar10 = fVar7 + fVar8, 1.0 <= fVar6)) {
      fVar9 = 1.0;
    }
    fVar6 = fVar9;
    if (fVar9 <= fVar5) {
      fVar6 = fVar5;
    }
    if (fVar6 <= *param_5) {
      fVar6 = *param_5;
    }
    *param_5 = fVar6;
    return CONCAT44(fVar10,fVar9);
  }
  return param_3;
}



// FUNCTION 14535f670 FUN_14535f670 body=1338 status=ok
// SIG undefined FUN_14535f670(void)

void FUN_14535f670(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(uint *)(param_1 + 0x1c);
  uVar14 = *(uint *)(param_1 + 4) & 0xfffffffc;
  uVar11 = *(int *)(param_1 + 8) + uVar14;
  fVar16 = *(float *)(param_1 + 0x18);
  uVar9 = *(int *)(param_1 + 0xc) - param_2;
  uVar8 = *(uint *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar10 = uVar7 >> 1;
  if (0.0 < fVar16) {
    fVar15 = *(float *)(param_1 + 0x20);
    if ((fVar15 <= fVar16) || (fVar15 <= 0.0)) {
      iVar3 = (int)(longlong)(((fVar16 - fVar15) / (1.0 - fVar15)) * (float)uVar10) + uVar10;
    }
    else {
      iVar3 = (int)(longlong)((fVar16 / fVar15) * (float)uVar10);
    }
    uVar9 = uVar9 + iVar3;
    uVar11 = uVar11 + iVar3;
  }
  if (uVar9 != 0) {
    fVar16 = *(float *)(param_1 + 0x10);
  }
  if (uVar9 < uVar14) {
    fVar15 = *(float *)(param_3 + 0x10);
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    uVar4 = param_2;
    if (uVar14 - uVar9 < param_2) {
      uVar4 = uVar14 - uVar9;
    }
    uVar9 = uVar9 + uVar4;
    *(float *)(param_3 + 0x10) = fVar15;
    param_2 = param_2 - uVar4;
  }
  uVar4 = uVar11;
  if (uVar10 + uVar14 < uVar11) {
    uVar4 = uVar10 + uVar14;
  }
  fVar15 = fVar16;
  if (uVar9 < uVar4) {
    if (-0.0 < (float)uVar10) {
      fVar15 = *(float *)(param_1 + 0x20) / (float)uVar10;
    }
    else {
      fVar15 = 0.0;
    }
    uVar5 = uVar4 - uVar9;
    if (param_2 < uVar4 - uVar9) {
      uVar5 = param_2;
    }
    fVar15 = (float)uVar5 * fVar15 + fVar16;
    fVar19 = fVar15;
    if (fVar15 <= fVar16) {
      fVar19 = fVar16;
    }
    if (fVar19 <= *(float *)(param_3 + 0x10)) {
      fVar19 = *(float *)(param_3 + 0x10);
    }
    uVar9 = uVar9 + uVar5;
    *(float *)(param_3 + 0x10) = fVar19;
    param_2 = param_2 - uVar5;
  }
  uVar5 = uVar14 + uVar10 * 2;
  uVar2 = uVar11;
  if (uVar5 < uVar11) {
    uVar2 = uVar5;
  }
  fVar16 = fVar15;
  if (uVar9 < uVar2) {
    if (-0.0 < (float)uVar10) {
      fVar16 = (1.0 - *(float *)(param_1 + 0x20)) / (float)uVar10;
    }
    else {
      fVar16 = 0.0;
    }
    uVar5 = uVar2 - uVar9;
    if (param_2 < uVar2 - uVar9) {
      uVar5 = param_2;
    }
    fVar16 = (float)uVar5 * fVar16 + fVar15;
    fVar19 = fVar16;
    if (fVar16 <= fVar15) {
      fVar19 = fVar15;
    }
    if (fVar19 <= *(float *)(param_3 + 0x10)) {
      fVar19 = *(float *)(param_3 + 0x10);
    }
    uVar9 = uVar9 + uVar5;
    *(float *)(param_3 + 0x10) = fVar19;
    param_2 = param_2 - uVar5;
  }
  uVar6 = uVar2 + uVar8;
  uVar5 = uVar11;
  if (uVar6 < uVar11) {
    uVar5 = uVar6;
  }
  fVar15 = fVar16;
  if (uVar9 < uVar5) {
    if (-0.0 < (float)uVar8) {
      fVar15 = (*(float *)(param_1 + 0x24) - 1.0) / (float)uVar8;
    }
    else {
      fVar15 = 0.0;
    }
    uVar12 = uVar5 - uVar9;
    if (param_2 < uVar5 - uVar9) {
      uVar12 = param_2;
    }
    fVar15 = (float)uVar12 * fVar15 + fVar16;
    fVar19 = fVar15;
    if (fVar15 <= fVar16) {
      fVar19 = fVar16;
    }
    if (fVar19 <= *(float *)(param_3 + 0x10)) {
      fVar19 = *(float *)(param_3 + 0x10);
    }
    uVar9 = uVar9 + uVar12;
    *(float *)(param_3 + 0x10) = fVar19;
    param_2 = param_2 - uVar12;
  }
  fVar16 = *(float *)(param_1 + 0x24);
  uVar13 = 0;
  uVar12 = 0;
  fVar19 = fVar15;
  fVar18 = fVar16;
  if (uVar11 < uVar6) {
    fVar18 = 1.0;
    if (uVar7 >> 1 != 0) {
      fVar18 = (float)uVar10;
      if (-0.0 < fVar18) {
        fVar20 = *(float *)(param_1 + 0x20) / fVar18;
        fVar18 = (1.0 - *(float *)(param_1 + 0x20)) / fVar18;
      }
      else {
        fVar18 = 0.0;
        fVar20 = 0.0;
      }
      fVar18 = (float)(uVar2 - uVar4) * fVar18 + (float)(uVar4 - uVar14) * fVar20;
    }
    fVar20 = fVar18 - fVar16;
    if (0.0 < fVar20) {
      fVar18 = (float)uVar8;
      if (-0.0 < fVar18) {
        fVar21 = (fVar16 - 1.0) / fVar18;
        if (fVar21 != 0.0) {
          uVar12 = (uint)(longlong)-((fVar18 * fVar20) / (fVar16 - 1.0));
        }
      }
      else {
        fVar21 = 0.0;
        uVar12 = 0;
      }
      uVar6 = uVar6 - uVar11;
      uVar7 = uVar6;
      if (uVar12 <= uVar6) {
        uVar7 = uVar12;
      }
      uVar13 = uVar1;
      if ((uVar7 <= uVar1) && (uVar13 = uVar12, uVar6 < uVar12)) {
        uVar13 = uVar6;
      }
      uVar13 = uVar13 >> 1;
      if (-0.0 < (float)uVar1) {
        fVar16 = *(float *)(param_1 + 0x24);
        fVar17 = -(fVar16 / (float)uVar1);
      }
      else {
        fVar17 = 0.0;
      }
      fVar22 = (float)uVar13;
      fVar18 = fVar16 - fVar22 * fVar17;
      if (uVar9 < uVar13 + uVar5) {
        if (-0.0 < fVar22) {
          fVar22 = (fVar22 * fVar17 - (((float)uVar5 - (float)uVar2) * fVar21 + fVar20)) / fVar22;
        }
        else {
          fVar22 = 0.0;
        }
        uVar7 = (uVar13 + uVar5) - uVar9;
        if (param_2 < uVar7) {
          uVar7 = param_2;
        }
        fVar19 = (float)uVar7 * fVar22 + fVar15;
        fVar16 = fVar19;
        if (fVar19 <= fVar15) {
          fVar16 = fVar15;
        }
        if (fVar16 <= *(float *)(param_3 + 0x10)) {
          fVar16 = *(float *)(param_3 + 0x10);
        }
        uVar9 = uVar9 + uVar7;
        *(float *)(param_3 + 0x10) = fVar16;
        param_2 = param_2 - uVar7;
      }
    }
  }
  uVar8 = uVar11 - uVar9;
  uVar7 = param_2;
  if ((int)uVar8 <= (int)param_2) {
    uVar7 = uVar8;
  }
  if (-1 < (int)uVar7) {
    if ((int)param_2 < (int)uVar8) {
      uVar8 = param_2;
    }
    if (uVar8 != 0) {
      fVar19 = *(float *)(param_1 + 0x24);
      uVar9 = uVar9 + uVar8;
      param_2 = param_2 - uVar8;
      fVar16 = *(float *)(param_3 + 0x10);
      if (*(float *)(param_3 + 0x10) <= fVar19) {
        fVar16 = fVar19;
      }
      *(float *)(param_3 + 0x10) = fVar16;
    }
  }
  uVar11 = uVar11 + (uVar1 - uVar13);
  fVar16 = fVar19;
  if (uVar9 < uVar11) {
    fVar16 = (float)(uVar1 - uVar13);
    if (-0.0 < fVar16) {
      fVar16 = -(fVar18 / fVar16);
    }
    else {
      fVar16 = 0.0;
    }
    uVar7 = uVar11 - uVar9;
    if (param_2 < uVar11 - uVar9) {
      uVar7 = param_2;
    }
    fVar16 = (float)uVar7 * fVar16 + fVar19;
    fVar15 = fVar16;
    if (fVar16 <= fVar19) {
      fVar15 = fVar19;
    }
    if (fVar15 <= *(float *)(param_3 + 0x10)) {
      fVar15 = *(float *)(param_3 + 0x10);
    }
    uVar9 = uVar9 + uVar7;
    *(float *)(param_3 + 0x10) = fVar15;
    param_2 = param_2 - uVar7;
  }
  if ((param_2 != 0) && (uVar11 <= uVar9)) {
    fVar16 = *(float *)(param_3 + 0x10);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    *(float *)(param_3 + 0x10) = fVar16;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 8) = 3;
    return;
  }
  *(float *)(param_3 + 0xc) = fVar16;
  return;
}



// FUNCTION 14535fbb0 FUN_14535fbb0 body=1481 status=ok
// SIG undefined FUN_14535fbb0(void)

void FUN_14535fbb0(longlong param_1,uint param_2,longlong param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *local_a8 [13];
  
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  pfVar11 = (float *)(param_3 + 0x10);
  *pfVar11 = *(float *)(param_1 + 0x18);
  uVar3 = *(int *)(param_1 + 0x28) + 2U & 0xfffffffc;
  uVar14 = *(uint *)(param_1 + 4) & 0xfffffffc;
  fVar20 = *(float *)(param_1 + 0x18);
  uVar13 = (*(int *)(param_1 + 8) + 2U & 0xfffffffc) + uVar14;
  uVar10 = *(int *)(param_1 + 0xc) - param_2;
  uVar4 = *(int *)(param_1 + 0x2c) + 2U & 0xfffffffc;
  uVar12 = (*(uint *)(param_1 + 0x1c) >> 1) + 2 & 0xfffffffc;
  if (0.0 < fVar20) {
    fVar16 = *(float *)(param_1 + 0x20);
    if ((fVar16 <= fVar20) || (fVar16 <= 0.0)) {
      iVar5 = (int)(longlong)(((fVar20 - fVar16) / (1.0 - fVar16)) * (float)uVar12) + uVar12;
    }
    else {
      iVar5 = (int)(longlong)((fVar20 / fVar16) * (float)uVar12);
    }
    uVar6 = iVar5 + 2U & 0xfffffffc;
    uVar10 = uVar10 + uVar6;
    uVar13 = uVar13 + uVar6;
  }
  if (uVar10 != 0) {
    fVar20 = *(float *)(param_1 + 0x10);
  }
  local_a8[0] = param_4;
  if (uVar10 < uVar14) {
    uVar6 = param_2;
    if (uVar14 - uVar10 < param_2) {
      uVar6 = uVar14 - uVar10;
    }
    local_a8[0] = param_4 + uVar6;
    for (; param_4 < local_a8[0]; param_4 = param_4 + 4) {
      param_4[0] = 0.0;
      param_4[1] = 0.0;
      param_4[2] = 0.0;
      param_4[3] = 0.0;
    }
    fVar16 = *pfVar11;
    uVar10 = uVar10 + uVar6;
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    param_2 = param_2 - uVar6;
    *pfVar11 = fVar16;
  }
  uVar9 = (ulonglong)param_2;
  uVar6 = uVar13;
  if (uVar12 + uVar14 < uVar13) {
    uVar6 = uVar12 + uVar14;
  }
  if (uVar10 < uVar6) {
    if (-0.0 < (float)uVar12) {
      fVar20 = *(float *)(param_1 + 0x20) / (float)uVar12;
    }
    else {
      fVar20 = 0.0;
    }
    uVar7 = (ulonglong)(uVar6 - uVar10);
    if (param_2 < uVar6 - uVar10) {
      uVar7 = uVar9;
    }
    fVar20 = (float)FUN_14535f570(local_a8,uVar7,pfVar11,fVar20,pfVar11);
    uVar10 = uVar10 + (int)uVar7;
    uVar9 = (ulonglong)(param_2 - (int)uVar7);
  }
  uVar1 = uVar14 + uVar12 * 2;
  uVar2 = uVar13;
  if (uVar1 < uVar13) {
    uVar2 = uVar1;
  }
  if (uVar10 < uVar2) {
    if (-0.0 < (float)uVar12) {
      fVar16 = (1.0 - *(float *)(param_1 + 0x20)) / (float)uVar12;
    }
    else {
      fVar16 = 0.0;
    }
    uVar7 = (ulonglong)(uVar2 - uVar10);
    if ((uint)uVar9 < uVar2 - uVar10) {
      uVar7 = uVar9;
    }
    fVar20 = (float)FUN_14535f570(local_a8,uVar7,fVar20,fVar16,param_3 + 0x10);
    uVar10 = uVar10 + (int)uVar7;
    uVar9 = (ulonglong)((uint)uVar9 - (int)uVar7);
  }
  uVar15 = uVar2 + uVar3;
  uVar1 = uVar13;
  if (uVar15 < uVar13) {
    uVar1 = uVar15;
  }
  if (uVar10 < uVar1) {
    if (-0.0 < (float)uVar3) {
      fVar20 = (*(float *)(param_1 + 0x24) - 1.0) / (float)uVar3;
    }
    else {
      fVar20 = 0.0;
    }
    uVar7 = (ulonglong)(uVar1 - uVar10);
    if ((uint)uVar9 < uVar1 - uVar10) {
      uVar7 = uVar9;
    }
    fVar20 = (float)FUN_14535f570(local_a8,uVar7,uVar1,fVar20,param_3 + 0x10);
    uVar10 = uVar10 + (int)uVar7;
    uVar9 = (ulonglong)((uint)uVar9 - (int)uVar7);
  }
  fVar16 = *(float *)(param_1 + 0x24);
  uVar8 = 0;
  fVar18 = fVar16;
  if (uVar13 < uVar15) {
    fVar18 = 1.0;
    if (uVar12 != 0) {
      fVar18 = (float)uVar12;
      if (-0.0 < fVar18) {
        fVar21 = *(float *)(param_1 + 0x20) / fVar18;
        fVar18 = (1.0 - *(float *)(param_1 + 0x20)) / fVar18;
      }
      else {
        fVar18 = 0.0;
        fVar21 = 0.0;
      }
      fVar18 = (float)(uVar2 - uVar6) * fVar18 + (float)(uVar6 - uVar14) * fVar21;
    }
    fVar21 = fVar18 - fVar16;
    if (0.0 < fVar21) {
      if (-0.0 < (float)uVar3) {
        fVar19 = (fVar16 - 1.0) / (float)uVar3;
        if (fVar19 != 0.0) {
          uVar8 = (uint)(longlong)-(fVar21 / fVar19);
        }
      }
      else {
        fVar19 = 0.0;
      }
      uVar15 = uVar15 - uVar13;
      uVar3 = uVar15;
      if (uVar8 <= uVar15) {
        uVar3 = uVar8;
      }
      uVar12 = uVar4;
      if ((uVar3 <= uVar4) && (uVar12 = uVar8, uVar15 < uVar8)) {
        uVar12 = uVar15;
      }
      uVar8 = (uVar12 >> 1) + 2 & 0xfffffffc;
      if (-0.0 < (float)uVar4) {
        fVar17 = fVar16 / (float)uVar4;
      }
      else {
        fVar17 = -0.0;
      }
      fVar22 = (float)uVar8;
      fVar18 = fVar16 + fVar22 * fVar17;
      if (uVar10 < uVar8 + uVar1) {
        if (-0.0 < fVar22) {
          fVar20 = -((((float)uVar1 - (float)uVar2) * fVar19 + fVar21 + fVar22 * fVar17) / fVar22);
        }
        else {
          fVar20 = 0.0;
        }
        uVar3 = (uVar8 + uVar1) - uVar10;
        uVar7 = (ulonglong)uVar3;
        if ((uint)uVar9 < uVar3) {
          uVar7 = uVar9;
        }
        fVar20 = (float)FUN_14535f570(local_a8,uVar7,uVar1,fVar20,param_3 + 0x10);
        uVar10 = uVar10 + (int)uVar7;
        uVar9 = (ulonglong)((uint)uVar9 - (int)uVar7);
      }
    }
  }
  uVar12 = uVar13 - uVar10;
  uVar14 = (uint)uVar9;
  uVar3 = uVar14;
  if ((int)uVar12 <= (int)uVar14) {
    uVar3 = uVar12;
  }
  if (-1 < (int)uVar3) {
    uVar7 = (ulonglong)uVar12;
    if ((int)uVar14 < (int)uVar12) {
      uVar7 = uVar9;
    }
    iVar5 = (int)uVar7;
    if (iVar5 != 0) {
      fVar20 = *(float *)(param_1 + 0x24);
      for (pfVar11 = local_a8[0]; pfVar11 < local_a8[0] + uVar7; pfVar11 = pfVar11 + 4) {
        *pfVar11 = fVar20;
        pfVar11[1] = fVar20;
        pfVar11[2] = fVar20;
        pfVar11[3] = fVar20;
      }
      fVar16 = fVar20;
      if (fVar20 <= *(float *)(param_3 + 0x10)) {
        fVar16 = *(float *)(param_3 + 0x10);
      }
      uVar10 = uVar10 + iVar5;
      uVar9 = (ulonglong)(uVar14 - iVar5);
      local_a8[0] = local_a8[0] + uVar7;
      *(float *)(param_3 + 0x10) = fVar16;
    }
  }
  uVar3 = (uint)uVar9;
  uVar13 = (uVar4 - uVar8) + uVar13;
  if (uVar10 < uVar13) {
    fVar16 = (float)(uVar4 - uVar8);
    if (-0.0 < fVar16) {
      fVar16 = -(fVar18 / fVar16);
    }
    else {
      fVar16 = 0.0;
    }
    uVar7 = (ulonglong)(uVar13 - uVar10);
    if (uVar3 < uVar13 - uVar10) {
      uVar7 = uVar9;
    }
    fVar20 = (float)FUN_14535f570(local_a8,uVar7,fVar20,fVar16,param_3 + 0x10);
    uVar10 = uVar10 + (int)uVar7;
    uVar3 = uVar3 - (int)uVar7;
  }
  if ((uVar3 == 0) || (uVar10 < uVar13)) {
    *(float *)(param_3 + 0xc) = fVar20;
  }
  else {
    pfVar11 = local_a8[0] + uVar3;
    for (; local_a8[0] < pfVar11; local_a8[0] = local_a8[0] + 4) {
      local_a8[0][0] = 0.0;
      local_a8[0][1] = 0.0;
      local_a8[0][2] = 0.0;
      local_a8[0][3] = 0.0;
    }
    fVar20 = *(float *)(param_3 + 0x10);
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    *(float *)(param_3 + 0x10) = fVar20;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 8) = 3;
  }
  return;
}



// FUNCTION 145360180 FUN_145360180 body=3 status=ok
// SIG undefined FUN_145360180(void)

void FUN_145360180(void)

{
  return;
}



// FUNCTION 145360190 FUN_145360190 body=534 status=ok
// SIG undefined FUN_145360190(void)

void FUN_145360190(int *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar2 = *(longlong **)(param_1 + 4);
  while (plVar2 != (longlong *)0x0) {
    *(longlong *)(param_1 + 4) = plVar2[0xc];
    if (plVar2 == *(longlong **)(param_1 + 2)) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    *param_1 = *param_1 + -1;
    FUN_14535e8e0(plVar2);
    FUN_14535e650();
    piVar1 = (int *)((longlong)plVar2 + 0xbc);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
      AK::MemoryMgr::Free(0,plVar2);
    }
    plVar2 = *(longlong **)(param_1 + 4);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  puVar4 = *(undefined8 **)(param_1 + 10);
  while (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar3 = (undefined8 *)*puVar4;
    if ((void *)puVar4[6] != (void *)0x0) {
      AK::MemoryMgr::Free(0,(void *)puVar4[6]);
    }
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
    puVar4[6] = 0;
    if ((void *)puVar4[1] != (void *)0x0) {
      *(undefined4 *)(puVar4 + 2) = 0;
      AK::MemoryMgr::Free(0,(void *)puVar4[1]);
      puVar4[1] = 0;
      *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
    }
    if ((void *)puVar4[3] != (void *)0x0) {
      *(undefined4 *)(puVar4 + 4) = 0;
      AK::MemoryMgr::Free(0,(void *)puVar4[3]);
      puVar4[3] = 0;
      *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    }
    AK::MemoryMgr::Free(0,puVar4);
    puVar4 = puVar3;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  while (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar3 = (undefined8 *)*puVar4;
    if ((void *)puVar4[6] != (void *)0x0) {
      AK::MemoryMgr::Free(0,(void *)puVar4[6]);
    }
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
    puVar4[6] = 0;
    if ((void *)puVar4[1] != (void *)0x0) {
      *(undefined4 *)(puVar4 + 2) = 0;
      AK::MemoryMgr::Free(0,(void *)puVar4[1]);
      puVar4[1] = 0;
      *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
    }
    if ((void *)puVar4[3] != (void *)0x0) {
      *(undefined4 *)(puVar4 + 4) = 0;
      AK::MemoryMgr::Free(0,(void *)puVar4[3]);
      puVar4[3] = 0;
      *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    }
    AK::MemoryMgr::Free(0,puVar4);
    puVar4 = puVar3;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x16);
  while (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar3 = (undefined8 *)*puVar4;
    if ((void *)puVar4[6] != (void *)0x0) {
      AK::MemoryMgr::Free(0,(void *)puVar4[6]);
    }
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
    puVar4[6] = 0;
    if ((void *)puVar4[1] != (void *)0x0) {
      *(undefined4 *)(puVar4 + 2) = 0;
      AK::MemoryMgr::Free(0,(void *)puVar4[1]);
      puVar4[1] = 0;
      *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
    }
    if ((void *)puVar4[3] != (void *)0x0) {
      *(undefined4 *)(puVar4 + 4) = 0;
      AK::MemoryMgr::Free(0,(void *)puVar4[3]);
      puVar4[3] = 0;
      *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    }
    AK::MemoryMgr::Free(0,puVar4);
    puVar4 = puVar3;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  return;
}



// FUNCTION 1453603b0 FUN_1453603b0 body=2049 status=ok
// SIG undefined FUN_1453603b0(void)

int FUN_1453603b0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  void *pvVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int local_res18;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar18 = *(undefined8 **)(param_1 + 0x10);
  local_res18 = 1;
  for (; puVar18 != (undefined8 *)0x0; puVar18 = (undefined8 *)*puVar18) {
    *(undefined4 *)(puVar18 + 5) = 0;
    *(undefined4 *)(puVar18 + 2) = 0;
    *(undefined4 *)(puVar18 + 4) = 0;
  }
  for (puVar18 = *(undefined8 **)(param_1 + 10); puVar18 != (undefined8 *)0x0;
      puVar18 = (undefined8 *)*puVar18) {
    *(undefined4 *)(puVar18 + 5) = 0;
    *(undefined4 *)(puVar18 + 2) = 0;
    *(undefined4 *)(puVar18 + 4) = 0;
  }
  for (puVar18 = *(undefined8 **)(param_1 + 0x16); puVar18 != (undefined8 *)0x0;
      puVar18 = (undefined8 *)*puVar18) {
    *(undefined4 *)(puVar18 + 5) = 0;
    *(undefined4 *)(puVar18 + 2) = 0;
    *(undefined4 *)(puVar18 + 4) = 0;
  }
  plVar16 = *(longlong **)(param_1 + 4);
  local_68 = *(longlong **)(param_1 + 0x10);
  local_58 = *(longlong **)(param_1 + 10);
  local_48 = *(undefined8 *)(param_1 + 0x16);
  local_60 = 0;
  local_50 = 0;
  local_40 = 0;
  for (; plVar16 != (longlong *)0x0; plVar16 = (longlong *)plVar16[0xc]) {
    (**(code **)(*plVar16 + 0x20))(plVar16,param_2);
    if (1 < (int)plVar16[0x18] - 3U) {
      if (*(int *)((longlong)plVar16 + 0xc4) < 2) {
        if ((int)plVar16[0x1a] != 0) {
LAB_1453604bb:
          if ((int)plVar16[0x1b] < (int)plVar16[0x1a]) goto LAB_1453604c9;
        }
      }
      else {
        if (*(int *)((longlong)plVar16 + 0xc4) != 3) goto LAB_1453604bb;
LAB_1453604c9:
        iVar2 = *(int *)(plVar16[0xd] + 0x90);
        if (iVar2 == 0) {
          local_res18 = FUN_145360cc0(param_1,param_1 + 0xc,&local_68,plVar16);
        }
        else if (iVar2 == 1) {
          local_res18 = FUN_145361410(param_1,param_1 + 6,&local_58,plVar16);
        }
        else {
          if (iVar2 != 2) goto LAB_14536052f;
          local_res18 = FUN_145361870(param_1,param_1 + 0x12,&local_48,plVar16);
        }
        if (local_res18 != 1) break;
      }
    }
LAB_14536052f:
  }
  plVar15 = local_58;
  plVar14 = local_68;
  if ((local_68 != (longlong *)0x0) &&
     (*(uint *)(local_68 + 2) < *(uint *)((longlong)local_68 + 0x14) >> 1)) {
    plVar6 = (longlong *)*local_68;
    while (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 2) = 0;
      *(undefined4 *)(plVar6 + 4) = 0;
      if (plVar6 == *(longlong **)(param_1 + 0x10)) {
        *(longlong *)(param_1 + 0x10) = *plVar6;
      }
      else {
        *plVar14 = *plVar6;
      }
      if (plVar6 == *(longlong **)(param_1 + 0xe)) {
        *(longlong **)(param_1 + 0xe) = plVar14;
      }
      param_1[0xc] = param_1[0xc] + -1;
      plVar5 = (longlong *)*plVar14;
      if ((void *)plVar6[6] != (void *)0x0) {
        AK::MemoryMgr::Free(0,(void *)plVar6[6]);
      }
      *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
      plVar6[6] = 0;
      if ((void *)plVar6[1] != (void *)0x0) {
        *(undefined4 *)(plVar6 + 2) = 0;
        AK::MemoryMgr::Free(0,(void *)plVar6[1]);
        plVar6[1] = 0;
        *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
      }
      if ((void *)plVar6[3] != (void *)0x0) {
        *(undefined4 *)(plVar6 + 4) = 0;
        AK::MemoryMgr::Free(0,(void *)plVar6[3]);
        plVar6[3] = 0;
        *(undefined4 *)((longlong)plVar6 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(0,plVar6);
      plVar6 = plVar5;
    }
  }
  if (plVar15 != (longlong *)0x0) {
    if (*(uint *)(plVar15 + 2) < *(uint *)((longlong)plVar15 + 0x14) >> 1) {
      plVar14 = (longlong *)*plVar15;
      while (plVar14 != (longlong *)0x0) {
        *(undefined4 *)(plVar14 + 2) = 0;
        *(undefined4 *)(plVar14 + 4) = 0;
        if (plVar14 == *(longlong **)(param_1 + 10)) {
          *(longlong *)(param_1 + 10) = *plVar14;
        }
        else {
          *plVar15 = *plVar14;
        }
        if (plVar14 == *(longlong **)(param_1 + 8)) {
          *(longlong **)(param_1 + 8) = plVar15;
        }
        param_1[6] = param_1[6] + -1;
        plVar6 = (longlong *)*plVar15;
        if ((void *)plVar14[6] != (void *)0x0) {
          AK::MemoryMgr::Free(0,(void *)plVar14[6]);
        }
        *(undefined4 *)((longlong)plVar14 + 0x2c) = 0;
        plVar14[6] = 0;
        if ((void *)plVar14[1] != (void *)0x0) {
          *(undefined4 *)(plVar14 + 2) = 0;
          AK::MemoryMgr::Free(0,(void *)plVar14[1]);
          plVar14[1] = 0;
          *(undefined4 *)((longlong)plVar14 + 0x14) = 0;
        }
        if ((void *)plVar14[3] != (void *)0x0) {
          *(undefined4 *)(plVar14 + 4) = 0;
          AK::MemoryMgr::Free(0,(void *)plVar14[3]);
          plVar14[3] = 0;
          *(undefined4 *)((longlong)plVar14 + 0x24) = 0;
        }
        AK::MemoryMgr::Free(0,plVar14);
        plVar14 = plVar6;
      }
    }
    if ((plVar15 != (longlong *)0x0) &&
       (*(uint *)(plVar15 + 2) < *(uint *)((longlong)plVar15 + 0x14) >> 1)) {
      plVar14 = (longlong *)*plVar15;
      while (plVar14 != (longlong *)0x0) {
        *(undefined4 *)(plVar14 + 2) = 0;
        *(undefined4 *)(plVar14 + 4) = 0;
        if (plVar14 == *(longlong **)(param_1 + 0x16)) {
          *(longlong *)(param_1 + 0x16) = *plVar14;
        }
        else {
          *plVar15 = *plVar14;
        }
        if (plVar14 == *(longlong **)(param_1 + 0x14)) {
          *(longlong **)(param_1 + 0x14) = plVar15;
        }
        param_1[0x12] = param_1[0x12] + -1;
        plVar6 = (longlong *)*plVar15;
        if ((void *)plVar14[6] != (void *)0x0) {
          AK::MemoryMgr::Free(0,(void *)plVar14[6]);
        }
        *(undefined4 *)((longlong)plVar14 + 0x2c) = 0;
        plVar14[6] = 0;
        if ((void *)plVar14[1] != (void *)0x0) {
          *(undefined4 *)(plVar14 + 2) = 0;
          AK::MemoryMgr::Free(0,(void *)plVar14[1]);
          plVar14[1] = 0;
          *(undefined4 *)((longlong)plVar14 + 0x14) = 0;
        }
        if ((void *)plVar14[3] != (void *)0x0) {
          *(undefined4 *)(plVar14 + 4) = 0;
          AK::MemoryMgr::Free(0,(void *)plVar14[3]);
          plVar14[3] = 0;
          *(undefined4 *)((longlong)plVar14 + 0x24) = 0;
        }
        AK::MemoryMgr::Free(0,plVar14);
        plVar14 = plVar6;
      }
    }
  }
  puVar12 = *(undefined8 **)(param_1 + 0x10);
  puVar17 = *(undefined8 **)(param_1 + 10);
  puVar18 = *(undefined8 **)(param_1 + 0x16);
  for (plVar14 = *(longlong **)(param_1 + 4); plVar14 != plVar16; plVar14 = (longlong *)plVar14[0xc]
      ) {
    if ((int)plVar14[0x18] == 3 || (int)plVar14[0x18] == 4) {
LAB_1453607c6:
      plVar14[0x15] = 0;
    }
    else {
      if (*(int *)((longlong)plVar14 + 0xc4) < 2) {
        if ((int)plVar14[0x1a] != 0) goto LAB_1453608bc;
        goto LAB_1453607c6;
      }
      if (*(int *)((longlong)plVar14 + 0xc4) != 3) {
LAB_1453608bc:
        if ((int)plVar14[0x1a] <= (int)plVar14[0x1b]) goto LAB_1453607c6;
      }
      iVar2 = *(int *)(plVar14[0xd] + 0x90);
      if (iVar2 == 0) {
        uVar3 = *(uint *)(puVar12 + 4);
        uVar4 = *(uint *)((longlong)puVar12 + 0x24);
        if (uVar3 < uVar4) {
LAB_145360a22:
          if (*(uint *)((longlong)puVar12 + 0x24) <= uVar3) goto LAB_145360a63;
          uVar3 = *(uint *)(puVar12 + 4);
          *(uint *)(puVar12 + 4) = uVar3 + 1;
          puVar10 = (undefined8 *)((ulonglong)uVar3 * 0x38 + puVar12[3]);
          if (puVar10 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar10 + 1) = 0xffffffff;
            *puVar10 = 0;
            *(undefined8 *)((longlong)puVar10 + 0xc) = 0;
            puVar10[3] = 0;
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar10[6] = 0;
          }
        }
        else {
          iVar2 = (uVar4 >> 1) + uVar4;
          if (uVar4 == 0) {
            iVar2 = 1;
          }
          cVar8 = FUN_145362830(puVar12 + 3,iVar2);
          if (cVar8 != '\0') goto LAB_145360a22;
LAB_145360a63:
          puVar10 = (undefined8 *)0x0;
        }
        plVar14[0x15] = (longlong)puVar10;
        *(int *)(puVar12 + 5) = *(int *)(puVar12 + 5) + *(int *)((longlong)plVar14 + 0xd4);
        if (*(int *)(puVar12 + 2) == *(int *)(puVar12 + 4)) {
          puVar12 = (undefined8 *)*puVar12;
        }
      }
      else if (iVar2 == 1) {
        uVar3 = *(uint *)(puVar17 + 4);
        uVar4 = *(uint *)((longlong)puVar17 + 0x24);
        if (uVar3 < uVar4) {
LAB_14536099c:
          if (*(uint *)((longlong)puVar17 + 0x24) <= uVar3) goto LAB_1453609d1;
          puVar10 = (undefined8 *)(puVar17[3] + (ulonglong)*(uint *)(puVar17 + 4) * 0x18);
          *(uint *)(puVar17 + 4) = *(uint *)(puVar17 + 4) + 1;
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            *(undefined4 *)(puVar10 + 1) = 0xffffffff;
            *(undefined8 *)((longlong)puVar10 + 0xc) = 0;
          }
        }
        else {
          iVar2 = (uVar4 >> 1) + uVar4;
          if (uVar4 == 0) {
            iVar2 = 1;
          }
          cVar8 = FUN_1453622d0(puVar17 + 3,iVar2);
          if (cVar8 != '\0') goto LAB_14536099c;
LAB_1453609d1:
          puVar10 = (undefined8 *)0x0;
        }
        plVar14[0x15] = (longlong)puVar10;
        *(int *)(puVar17 + 5) = *(int *)(puVar17 + 5) + *(int *)((longlong)plVar14 + 0xd4);
        if (*(int *)(puVar17 + 2) == *(int *)(puVar17 + 4)) {
          puVar17 = (undefined8 *)*puVar17;
        }
      }
      else if (iVar2 == 2) {
        uVar3 = *(uint *)(puVar18 + 4);
        uVar4 = *(uint *)((longlong)puVar18 + 0x24);
        if (uVar3 < uVar4) {
LAB_145360915:
          if (*(uint *)((longlong)puVar18 + 0x24) <= uVar3) goto LAB_14536094a;
          puVar10 = (undefined8 *)(puVar18[3] + (ulonglong)*(uint *)(puVar18 + 4) * 0x18);
          *(uint *)(puVar18 + 4) = *(uint *)(puVar18 + 4) + 1;
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            *(undefined4 *)(puVar10 + 1) = 0xffffffff;
            *(undefined8 *)((longlong)puVar10 + 0xc) = 0;
          }
        }
        else {
          iVar2 = (uVar4 >> 1) + uVar4;
          if (uVar4 == 0) {
            iVar2 = 1;
          }
          cVar8 = FUN_145362c10(puVar18 + 3,iVar2);
          if (cVar8 != '\0') goto LAB_145360915;
LAB_14536094a:
          puVar10 = (undefined8 *)0x0;
        }
        plVar14[0x15] = (longlong)puVar10;
        *(int *)(puVar18 + 5) = *(int *)(puVar18 + 5) + *(int *)((longlong)plVar14 + 0xd4);
        if (*(int *)(puVar18 + 2) == *(int *)(puVar18 + 4)) {
          puVar18 = (undefined8 *)*puVar18;
        }
      }
    }
  }
  plVar16 = (longlong *)0x0;
  for (; plVar14 != (longlong *)0x0; plVar14 = (longlong *)plVar14[0xc]) {
    plVar14[0x15] = 0;
  }
  FUN_145361cb0(*(undefined8 *)(param_1 + 0x10),param_2);
  for (puVar18 = *(undefined8 **)(param_1 + 10); puVar18 != (undefined8 *)0x0;
      puVar18 = (undefined8 *)*puVar18) {
    if (*(uint *)((longlong)puVar18 + 0x2c) < *(uint *)(puVar18 + 5)) {
      if ((void *)puVar18[6] != (void *)0x0) {
        AK::MemoryMgr::Free(0,(void *)puVar18[6]);
      }
      *(undefined4 *)((longlong)puVar18 + 0x2c) = 0;
      puVar18[6] = 0;
      pvVar9 = AK::MemoryMgr::Malign(0,(ulonglong)*(uint *)(puVar18 + 5) << 2,0x10);
      puVar18[6] = pvVar9;
      if (pvVar9 == (void *)0x0) break;
      *(undefined4 *)((longlong)puVar18 + 0x2c) = *(undefined4 *)(puVar18 + 5);
    }
    lVar11 = puVar18[1];
    plVar14 = (longlong *)puVar18[3];
    lVar7 = puVar18[6];
    lVar13 = (ulonglong)*(uint *)(puVar18 + 2) * 0x30 + lVar11;
    for (; lVar11 != lVar13; lVar11 = lVar11 + 0x30) {
      *plVar14 = lVar7;
      if (*(int *)(lVar11 + 0x14) == 0) {
        FUN_14535f670();
      }
      else {
        FUN_14535fbb0(lVar11,param_2,plVar14,lVar7);
      }
      plVar14 = plVar14 + 3;
      lVar7 = lVar7 + (ulonglong)*(uint *)(lVar11 + 0x14) * 4;
    }
  }
  FUN_145361f80(*(undefined8 *)(param_1 + 0x16),param_2);
  for (lVar7 = *(longlong *)(param_1 + 4); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x60)) {
    FUN_14535e910(lVar7);
  }
  plVar14 = *(longlong **)(param_1 + 4);
  plVar15 = plVar16;
  plVar6 = plVar16;
  while (plVar5 = plVar14, plVar5 != (longlong *)0x0) {
    if (((int)plVar5[0x18] - 3U < 2) ||
       ((*(int *)((longlong)plVar5 + 0xc4) < 2 && ((int)plVar5[0x1a] == 0)))) {
      plVar14 = (longlong *)plVar5[0xc];
      if (plVar5 == *(longlong **)(param_1 + 4)) {
        *(longlong **)(param_1 + 4) = plVar14;
      }
      else {
        plVar6[0xc] = (longlong)plVar14;
      }
      if (plVar5 == *(longlong **)(param_1 + 2)) {
        *(longlong **)(param_1 + 2) = plVar6;
      }
      *param_1 = *param_1 + -1;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = plVar16;
      }
      plVar5[0xc] = (longlong)plVar15;
      plVar15 = plVar5;
    }
    else {
      plVar14 = (longlong *)plVar5[0xc];
      plVar6 = plVar5;
    }
  }
  while (plVar16 = plVar15, plVar16 != (longlong *)0x0) {
    plVar15 = (longlong *)plVar16[0xc];
    FUN_14535e650(plVar16);
    piVar1 = (int *)((longlong)plVar16 + 0xbc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16,0);
      AK::MemoryMgr::Free(0,plVar16);
    }
  }
  return local_res18;
}



// FUNCTION 145360bc0 FUN_145360bc0 body=47 status=ok
// SIG undefined FUN_145360bc0(void)

void FUN_145360bc0(int *param_1,longlong param_2)

{
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
  *(undefined8 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_1 + 4) == 0) {
    *param_1 = *param_1 + 1;
    *(longlong *)(param_1 + 4) = param_2;
    *(longlong *)(param_1 + 2) = param_2;
    return;
  }
  *(longlong *)(*(longlong *)(param_1 + 2) + 0x60) = param_2;
  *param_1 = *param_1 + 1;
  *(longlong *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 145360bf0 FUN_145360bf0 body=205 status=ok
// SIG undefined FUN_145360bf0(void)

void FUN_145360bf0(int *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  plVar2 = *(longlong **)(param_1 + 4);
  plVar5 = plVar6;
  plVar4 = plVar6;
  while (plVar3 = plVar2, plVar3 != (longlong *)0x0) {
    if (((int)plVar3[0x18] - 3U < 2) ||
       ((*(int *)((longlong)plVar3 + 0xc4) < 2 && ((int)plVar3[0x1a] == 0)))) {
      plVar2 = (longlong *)plVar3[0xc];
      if (plVar3 == *(longlong **)(param_1 + 4)) {
        *(longlong **)(param_1 + 4) = plVar2;
      }
      else {
        plVar4[0xc] = (longlong)plVar2;
      }
      if (plVar3 == *(longlong **)(param_1 + 2)) {
        *(longlong **)(param_1 + 2) = plVar4;
      }
      *param_1 = *param_1 + -1;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      plVar3[0xc] = (longlong)plVar5;
      plVar5 = plVar3;
    }
    else {
      plVar2 = (longlong *)plVar3[0xc];
      plVar4 = plVar3;
    }
  }
  while (plVar2 = plVar5, plVar2 != (longlong *)0x0) {
    plVar5 = (longlong *)plVar2[0xc];
    FUN_14535e650(plVar2);
    piVar1 = (int *)((longlong)plVar2 + 0xbc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
      AK::MemoryMgr::Free(0,plVar2);
    }
  }
  return;
}



// FUNCTION 145360cc0 FUN_145360cc0 body=1865 status=ok
// SIG undefined FUN_145360cc0(void)

undefined8 FUN_145360cc0(undefined8 param_1,int *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  
  puVar6 = (undefined8 *)*param_3;
  puVar12 = puVar6;
  if ((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == *(int *)((longlong)puVar6 + 0x14)))
  {
    param_3[1] = puVar6;
    puVar12 = (undefined8 *)*puVar6;
    *param_3 = puVar12;
  }
  uVar15 = 0;
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = AK::MemoryMgr::Malloc(0,0x38);
    if (puVar12 == (undefined8 *)0x0) {
      return 0x34;
    }
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[6] = 0;
    puVar12[5] = 0;
    if (*(uint *)((longlong)puVar12 + 0x14) < 0x10) {
      uVar17 = (ulonglong)*(uint *)(puVar12 + 2);
      pvVar13 = AK::MemoryMgr::Malign(0,0x580,0x10);
      bVar10 = false;
      if (pvVar13 != (void *)0x0) {
        if (((void *)puVar12[1] != (void *)0x0) && ((void *)puVar12[1] != pvVar13)) {
          uVar19 = uVar15;
          if (3 < uVar17) {
            puVar14 = (undefined8 *)((longlong)pvVar13 + 0x40);
            lVar20 = -0x40 - (longlong)pvVar13;
            lVar18 = (uVar17 - 4 >> 2) + 1;
            uVar19 = lVar18 * 4;
            do {
              if (puVar14 + -8 != (undefined8 *)0x0) {
                puVar14[-1] = 0;
                *puVar14 = 0;
                puVar14[1] = 0;
                puVar14[2] = 0;
              }
              lVar7 = puVar12[1];
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + lVar20);
              uVar9 = puVar1[1];
              puVar14[-8] = *puVar1;
              puVar14[-7] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x10 + lVar20);
              uVar9 = puVar1[1];
              puVar14[-6] = *puVar1;
              puVar14[-5] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x20 + lVar20);
              uVar9 = puVar1[1];
              puVar14[-4] = *puVar1;
              puVar14[-3] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x30 + lVar20);
              uVar9 = puVar1[1];
              puVar14[-2] = *puVar1;
              puVar14[-1] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x40 + lVar20);
              uVar9 = puVar1[1];
              *puVar14 = *puVar1;
              puVar14[1] = uVar9;
              puVar14[2] = *(undefined8 *)((longlong)puVar14 + lVar7 + 0x50 + lVar20);
              if (puVar14 + 3 != (undefined8 *)0x0) {
                puVar14[10] = 0;
                puVar14[0xb] = 0;
                puVar14[0xc] = 0;
                puVar14[0xd] = 0;
              }
              lVar7 = puVar12[1];
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x58 + lVar20);
              uVar9 = puVar1[1];
              puVar14[3] = *puVar1;
              puVar14[4] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x68 + lVar20);
              uVar9 = puVar1[1];
              puVar14[5] = *puVar1;
              puVar14[6] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x78 + lVar20);
              uVar9 = puVar1[1];
              puVar14[7] = *puVar1;
              puVar14[8] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x88 + lVar20);
              uVar9 = puVar1[1];
              puVar14[9] = *puVar1;
              puVar14[10] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x98 + lVar20);
              uVar9 = puVar1[1];
              puVar14[0xb] = *puVar1;
              puVar14[0xc] = uVar9;
              puVar14[0xd] = *(undefined8 *)((longlong)puVar14 + lVar7 + 0xa8 + lVar20);
              lVar7 = (0x70 - (longlong)pvVar13) + (longlong)puVar14;
              if (lVar7 + (longlong)pvVar13 != 0) {
                puVar14[0x15] = 0;
                puVar14[0x16] = 0;
                puVar14[0x17] = 0;
                puVar14[0x18] = 0;
              }
              lVar8 = puVar12[1];
              uVar9 = ((undefined8 *)(lVar8 + lVar7))[1];
              puVar14[0xe] = *(undefined8 *)(lVar8 + lVar7);
              puVar14[0xf] = uVar9;
              puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar7);
              uVar9 = puVar1[1];
              puVar14[0x10] = *puVar1;
              puVar14[0x11] = uVar9;
              puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar7);
              uVar9 = puVar1[1];
              puVar14[0x12] = *puVar1;
              puVar14[0x13] = uVar9;
              puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar7);
              uVar9 = puVar1[1];
              puVar14[0x14] = *puVar1;
              puVar14[0x15] = uVar9;
              puVar1 = (undefined8 *)(lVar8 + 0x40 + lVar7);
              uVar9 = puVar1[1];
              puVar14[0x16] = *puVar1;
              puVar14[0x17] = uVar9;
              lVar2 = (200 - (longlong)pvVar13) + (longlong)puVar14;
              puVar14[0x18] = *(undefined8 *)(lVar8 + 0x50 + lVar7);
              if (lVar2 + (longlong)pvVar13 != 0) {
                puVar14[0x20] = 0;
                puVar14[0x21] = 0;
                puVar14[0x22] = 0;
                puVar14[0x23] = 0;
              }
              lVar7 = puVar12[1];
              uVar9 = ((undefined8 *)(lVar7 + lVar2))[1];
              puVar14[0x19] = *(undefined8 *)(lVar7 + lVar2);
              puVar14[0x1a] = uVar9;
              puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar2);
              uVar9 = puVar1[1];
              puVar14[0x1b] = *puVar1;
              puVar14[0x1c] = uVar9;
              puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar2);
              uVar9 = puVar1[1];
              puVar14[0x1d] = *puVar1;
              puVar14[0x1e] = uVar9;
              puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar2);
              uVar9 = puVar1[1];
              puVar14[0x1f] = *puVar1;
              puVar14[0x20] = uVar9;
              puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar2);
              uVar9 = puVar1[1];
              puVar14[0x21] = *puVar1;
              puVar14[0x22] = uVar9;
              puVar14[0x23] = *(undefined8 *)(lVar7 + 0x50 + lVar2);
              puVar14 = puVar14 + 0x2c;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          if (uVar19 < uVar17) {
            lVar20 = -0x40 - (longlong)pvVar13;
            lVar18 = uVar17 - uVar19;
            puVar14 = (undefined8 *)(uVar19 * 0x58 + 0x40 + (longlong)pvVar13);
            do {
              if (puVar14 + -8 != (undefined8 *)0x0) {
                puVar14[-1] = 0;
                *puVar14 = 0;
                puVar14[1] = 0;
                puVar14[2] = 0;
              }
              lVar7 = puVar12[1];
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar20 + lVar7);
              uVar9 = puVar1[1];
              puVar14[-8] = *puVar1;
              puVar14[-7] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar20 + lVar7 + 0x10);
              uVar9 = puVar1[1];
              puVar14[-6] = *puVar1;
              puVar14[-5] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar20 + lVar7 + 0x20);
              uVar9 = puVar1[1];
              puVar14[-4] = *puVar1;
              puVar14[-3] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar20 + lVar7 + 0x30);
              uVar9 = puVar1[1];
              puVar14[-2] = *puVar1;
              puVar14[-1] = uVar9;
              puVar1 = (undefined8 *)((longlong)puVar14 + lVar20 + lVar7 + 0x40);
              uVar9 = puVar1[1];
              *puVar14 = *puVar1;
              puVar14[1] = uVar9;
              puVar14[2] = *(undefined8 *)((longlong)puVar14 + lVar20 + lVar7 + 0x50);
              lVar18 = lVar18 + -1;
              puVar14 = puVar14 + 0xb;
            } while (lVar18 != 0);
          }
          AK::MemoryMgr::Free(0,(void *)puVar12[1]);
        }
        puVar12[1] = pvVar13;
        bVar10 = true;
        *(undefined4 *)((longlong)puVar12 + 0x14) = 0x10;
      }
      if (!bVar10) goto LAB_1453612f8;
    }
    if (*(uint *)((longlong)puVar12 + 0x24) < 0x10) {
      uVar17 = (ulonglong)*(uint *)(puVar12 + 4);
      if ((void *)puVar12[3] == (void *)0x0) {
        pvVar13 = AK::MemoryMgr::Malign(0,0x380,0x10);
        bVar10 = false;
        if (pvVar13 != (void *)0x0) {
          if (((void *)puVar12[3] != (void *)0x0) && ((void *)puVar12[3] != pvVar13)) {
            uVar19 = uVar15;
            if (3 < uVar17) {
              puVar14 = (undefined8 *)((longlong)pvVar13 + 0x20);
              lVar20 = -0x20 - (longlong)pvVar13;
              lVar18 = (uVar17 - 4 >> 2) + 1;
              uVar19 = lVar18 * 4;
              do {
                puVar1 = puVar14 + -4;
                if (puVar1 != (undefined8 *)0x0) {
                  *puVar1 = 0;
                  *(undefined4 *)(puVar14 + -3) = 0xffffffff;
                  *(undefined8 *)((longlong)puVar14 + -0x14) = 0;
                  puVar14[-1] = 0;
                  *puVar14 = 0;
                  puVar14[1] = 0;
                  puVar14[2] = 0;
                }
                lVar7 = puVar12[3];
                puVar3 = (undefined8 *)((longlong)puVar14 + lVar7 + lVar20);
                uVar9 = puVar3[1];
                *puVar1 = *puVar3;
                puVar14[-3] = uVar9;
                puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x10 + lVar20);
                uVar9 = puVar1[1];
                puVar14[-2] = *puVar1;
                puVar14[-1] = uVar9;
                puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x20 + lVar20);
                uVar9 = puVar1[1];
                *puVar14 = *puVar1;
                puVar14[1] = uVar9;
                puVar14[2] = *(undefined8 *)((longlong)puVar14 + lVar7 + 0x30 + lVar20);
                puVar1 = puVar14 + 3;
                if (puVar1 != (undefined8 *)0x0) {
                  *puVar1 = 0;
                  *(undefined4 *)(puVar14 + 4) = 0xffffffff;
                  *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
                  puVar14[6] = 0;
                  puVar14[7] = 0;
                  puVar14[8] = 0;
                  puVar14[9] = 0;
                }
                lVar7 = puVar12[3];
                puVar3 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x38 + lVar20);
                uVar9 = puVar3[1];
                *puVar1 = *puVar3;
                puVar14[4] = uVar9;
                puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x48 + lVar20);
                uVar9 = puVar1[1];
                puVar14[5] = *puVar1;
                puVar14[6] = uVar9;
                puVar1 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x58 + lVar20);
                uVar9 = puVar1[1];
                puVar14[7] = *puVar1;
                puVar14[8] = uVar9;
                puVar14[9] = *(undefined8 *)((longlong)puVar14 + lVar7 + 0x68 + lVar20);
                lVar7 = (longlong)puVar14 + (0x50 - (longlong)pvVar13);
                if (lVar7 + (longlong)pvVar13 != 0) {
                  puVar14[10] = 0;
                  *(undefined4 *)(puVar14 + 0xb) = 0xffffffff;
                  *(undefined8 *)((longlong)puVar14 + 0x5c) = 0;
                  puVar14[0xd] = 0;
                  puVar14[0xe] = 0;
                  puVar14[0xf] = 0;
                  puVar14[0x10] = 0;
                }
                lVar8 = puVar12[3];
                uVar9 = ((undefined8 *)(lVar8 + lVar7))[1];
                puVar14[10] = *(undefined8 *)(lVar8 + lVar7);
                puVar14[0xb] = uVar9;
                puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar7);
                uVar9 = puVar1[1];
                puVar14[0xc] = *puVar1;
                puVar14[0xd] = uVar9;
                puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar7);
                uVar9 = puVar1[1];
                puVar14[0xe] = *puVar1;
                puVar14[0xf] = uVar9;
                lVar2 = (longlong)puVar14 + (0x88 - (longlong)pvVar13);
                puVar14[0x10] = *(undefined8 *)(lVar8 + 0x30 + lVar7);
                if (lVar2 + (longlong)pvVar13 != 0) {
                  puVar14[0x11] = 0;
                  *(undefined4 *)(puVar14 + 0x12) = 0xffffffff;
                  *(undefined8 *)((longlong)puVar14 + 0x94) = 0;
                  puVar14[0x14] = 0;
                  puVar14[0x15] = 0;
                  puVar14[0x16] = 0;
                  puVar14[0x17] = 0;
                }
                lVar7 = puVar12[3];
                uVar9 = ((undefined8 *)(lVar7 + lVar2))[1];
                puVar14[0x11] = *(undefined8 *)(lVar7 + lVar2);
                puVar14[0x12] = uVar9;
                puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar2);
                uVar9 = puVar1[1];
                puVar14[0x13] = *puVar1;
                puVar14[0x14] = uVar9;
                puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar2);
                uVar9 = puVar1[1];
                puVar14[0x15] = *puVar1;
                puVar14[0x16] = uVar9;
                puVar14[0x17] = *(undefined8 *)(lVar7 + 0x30 + lVar2);
                puVar14 = puVar14 + 0x1c;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
            if (uVar19 < uVar17) {
              lVar20 = -0x20 - (longlong)pvVar13;
              lVar18 = uVar17 - uVar19;
              puVar14 = (undefined8 *)(uVar19 * 0x38 + 0x20 + (longlong)pvVar13);
              do {
                puVar1 = puVar14 + -4;
                if (puVar1 != (undefined8 *)0x0) {
                  *puVar1 = 0;
                  *(undefined4 *)(puVar14 + -3) = 0xffffffff;
                  *(undefined8 *)((longlong)puVar14 + -0x14) = 0;
                  puVar14[-1] = 0;
                  *puVar14 = 0;
                  puVar14[1] = 0;
                  puVar14[2] = 0;
                }
                lVar7 = puVar12[3];
                puVar3 = (undefined8 *)((longlong)puVar14 + lVar20 + lVar7);
                uVar9 = puVar3[1];
                *puVar1 = *puVar3;
                puVar14[-3] = uVar9;
                puVar1 = (undefined8 *)((longlong)puVar14 + lVar20 + lVar7 + 0x10);
                uVar9 = puVar1[1];
                puVar14[-2] = *puVar1;
                puVar14[-1] = uVar9;
                puVar1 = (undefined8 *)((longlong)puVar14 + lVar20 + lVar7 + 0x20);
                uVar9 = puVar1[1];
                *puVar14 = *puVar1;
                puVar14[1] = uVar9;
                puVar14[2] = *(undefined8 *)((longlong)puVar14 + lVar20 + lVar7 + 0x30);
                lVar18 = lVar18 + -1;
                puVar14 = puVar14 + 7;
              } while (lVar18 != 0);
            }
            AK::MemoryMgr::Free(0,(void *)puVar12[3]);
          }
          goto LAB_1453612e7;
        }
      }
      else {
        pvVar13 = AK::MemoryMgr::ReallocAligned(0,(void *)puVar12[3],0x380,0x10);
        if (pvVar13 == (void *)0x0) {
          bVar10 = false;
        }
        else {
LAB_1453612e7:
          puVar12[3] = pvVar13;
          bVar10 = true;
          *(undefined4 *)((longlong)puVar12 + 0x24) = 0x10;
        }
      }
      if (!bVar10) {
LAB_1453612f8:
        if ((void *)puVar12[6] != (void *)0x0) {
          AK::MemoryMgr::Free(0,(void *)puVar12[6]);
        }
        *(undefined4 *)((longlong)puVar12 + 0x2c) = 0;
        puVar12[6] = 0;
        if ((void *)puVar12[1] != (void *)0x0) {
          *(undefined4 *)(puVar12 + 2) = 0;
          AK::MemoryMgr::Free(0,(void *)puVar12[1]);
          puVar12[1] = 0;
          *(undefined4 *)((longlong)puVar12 + 0x14) = 0;
        }
        if ((void *)puVar12[3] != (void *)0x0) {
          *(undefined4 *)(puVar12 + 4) = 0;
          AK::MemoryMgr::Free(0,(void *)puVar12[3]);
          puVar12[3] = 0;
          *(undefined4 *)((longlong)puVar12 + 0x24) = 0;
        }
        AK::MemoryMgr::Free(0,puVar12);
        return 0x34;
      }
    }
    *puVar12 = 0;
    if (*(longlong *)(param_2 + 4) == 0) {
      *(undefined8 **)(param_2 + 4) = puVar12;
    }
    else {
      **(undefined8 **)(param_2 + 2) = puVar12;
    }
    *param_2 = *param_2 + 1;
    *(undefined8 **)(param_2 + 2) = puVar12;
    *param_3 = puVar12;
    param_3[1] = puVar6;
  }
  uVar4 = *(uint *)(puVar12 + 2);
  uVar5 = *(uint *)((longlong)puVar12 + 0x14);
  if (uVar5 <= uVar4) {
    iVar16 = (uVar5 >> 1) + uVar5;
    if (uVar5 == 0) {
      iVar16 = 1;
    }
    cVar11 = FUN_1453624f0(puVar12 + 1,iVar16);
    if (cVar11 == '\0') goto LAB_1453613dd;
  }
  if (uVar4 < *(uint *)((longlong)puVar12 + 0x14)) {
    uVar4 = *(uint *)(puVar12 + 2);
    *(uint *)(puVar12 + 2) = uVar4 + 1;
    uVar15 = (ulonglong)uVar4 * 0x58 + puVar12[1];
    if (uVar15 != 0) {
      *(undefined8 *)(uVar15 + 0x38) = 0;
      *(undefined8 *)(uVar15 + 0x40) = 0;
      *(undefined8 *)(uVar15 + 0x48) = 0;
      *(undefined8 *)(uVar15 + 0x50) = 0;
    }
  }
LAB_1453613dd:
  FUN_14535f2d0(param_4,uVar15);
  return 1;
}



// FUNCTION 145361410 FUN_145361410 body=1109 status=ok
// SIG undefined FUN_145361410(void)

undefined8 FUN_145361410(undefined8 param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 *puVar21;
  
  puVar6 = (undefined8 *)*param_3;
  puVar12 = puVar6;
  if ((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == *(int *)((longlong)puVar6 + 0x14)))
  {
    param_3[1] = puVar6;
    puVar12 = (undefined8 *)*puVar6;
    *param_3 = puVar12;
  }
  puVar16 = (undefined4 *)0x0;
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = AK::MemoryMgr::Malloc(0,0x38);
    if (puVar12 == (undefined8 *)0x0) {
      return 0x34;
    }
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[6] = 0;
    puVar12[5] = 0;
    if (*(uint *)((longlong)puVar12 + 0x14) < 0x10) {
      uVar17 = (ulonglong)*(uint *)(puVar12 + 2);
      pvVar13 = AK::MemoryMgr::Malign(0,0x300,0x10);
      bVar10 = false;
      if (pvVar13 != (void *)0x0) {
        if (((void *)puVar12[1] != (void *)0x0) &&
           (puVar18 = puVar16, (void *)puVar12[1] != pvVar13)) {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            lVar19 = puVar12[1];
            puVar21 = puVar18 + 0xc;
            puVar14 = (undefined8 *)(lVar19 + -0x30 + (longlong)puVar21);
            uVar9 = puVar14[1];
            *(undefined8 *)((longlong)puVar18 + (longlong)pvVar13) = *puVar14;
            ((undefined8 *)((longlong)puVar18 + (longlong)pvVar13))[1] = uVar9;
            puVar14 = (undefined8 *)(lVar19 + -0x20 + (longlong)puVar21);
            uVar9 = puVar14[1];
            *(undefined8 *)((longlong)(puVar18 + 4) + (longlong)pvVar13) = *puVar14;
            ((undefined8 *)((longlong)(puVar18 + 4) + (longlong)pvVar13))[1] = uVar9;
            puVar14 = (undefined8 *)(lVar19 + -0x10 + (longlong)puVar21);
            uVar9 = puVar14[1];
            *(undefined8 *)((longlong)(puVar18 + 8) + (longlong)pvVar13) = *puVar14;
            ((undefined8 *)((longlong)(puVar18 + 8) + (longlong)pvVar13))[1] = uVar9;
            puVar18 = puVar21;
          }
          AK::MemoryMgr::Free(0,(void *)puVar12[1]);
        }
        puVar12[1] = pvVar13;
        bVar10 = true;
        *(undefined4 *)((longlong)puVar12 + 0x14) = 0x10;
      }
      if (!bVar10) goto LAB_14536170c;
    }
    if (*(uint *)((longlong)puVar12 + 0x24) < 0x10) {
      puVar18 = (undefined4 *)(ulonglong)*(uint *)(puVar12 + 4);
      if ((void *)puVar12[3] == (void *)0x0) {
        pvVar13 = AK::MemoryMgr::Malign(0,0x180,0x10);
        bVar10 = false;
        if (pvVar13 != (void *)0x0) {
          if (((void *)puVar12[3] != (void *)0x0) && ((void *)puVar12[3] != pvVar13)) {
            puVar21 = puVar16;
            if (&DAT_00000003 < puVar18) {
              puVar14 = (undefined8 *)((longlong)pvVar13 + 0xc);
              lVar19 = -(longlong)pvVar13;
              lVar20 = ((ulonglong)(puVar18 + -1) >> 2) + 1;
              puVar21 = (undefined4 *)(lVar20 * 4);
              do {
                puVar1 = (undefined8 *)((longlong)puVar14 + -0xc);
                if (puVar1 != (undefined8 *)0x0) {
                  *puVar1 = 0;
                  *(undefined4 *)((longlong)puVar14 + -4) = 0xffffffff;
                  *puVar14 = 0;
                }
                lVar7 = puVar12[3];
                puVar2 = (undefined8 *)((longlong)puVar14 + lVar7 + lVar19 + -0xc);
                uVar9 = puVar2[1];
                *puVar1 = *puVar2;
                *(undefined8 *)((longlong)puVar14 + -4) = uVar9;
                *(undefined8 *)((longlong)puVar14 + 4) =
                     *(undefined8 *)((longlong)puVar14 + lVar7 + 0x10 + lVar19 + -0xc);
                puVar1 = (undefined8 *)((longlong)puVar14 + 0xc);
                if (puVar1 != (undefined8 *)0x0) {
                  *puVar1 = 0;
                  *(undefined4 *)((longlong)puVar14 + 0x14) = 0xffffffff;
                  puVar14[3] = 0;
                }
                lVar7 = puVar12[3];
                puVar2 = (undefined8 *)((longlong)puVar14 + lVar7 + lVar19 + 0xc);
                uVar9 = puVar2[1];
                *puVar1 = *puVar2;
                *(undefined8 *)((longlong)puVar14 + 0x14) = uVar9;
                *(undefined8 *)((longlong)puVar14 + 0x1c) =
                     *(undefined8 *)((longlong)puVar14 + lVar7 + lVar19 + 0x1c);
                lVar7 = (0x24 - (longlong)pvVar13) + (longlong)puVar14;
                if ((longlong)pvVar13 + lVar7 != 0) {
                  *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
                  *(undefined4 *)((longlong)puVar14 + 0x2c) = 0xffffffff;
                  puVar14[6] = 0;
                }
                lVar8 = puVar12[3];
                puVar1 = (undefined8 *)(lVar7 + lVar8);
                uVar9 = puVar1[1];
                *(undefined8 *)((longlong)puVar14 + 0x24) = *puVar1;
                *(undefined8 *)((longlong)puVar14 + 0x2c) = uVar9;
                lVar3 = (longlong)puVar14 + (0x3c - (longlong)pvVar13);
                *(undefined8 *)((longlong)puVar14 + 0x34) = *(undefined8 *)(lVar7 + 0x10 + lVar8);
                if ((longlong)pvVar13 + lVar3 != 0) {
                  *(undefined8 *)((longlong)puVar14 + 0x3c) = 0;
                  *(undefined4 *)((longlong)puVar14 + 0x44) = 0xffffffff;
                  puVar14[9] = 0;
                }
                lVar7 = puVar12[3];
                puVar1 = (undefined8 *)(lVar3 + lVar7);
                uVar9 = puVar1[1];
                *(undefined8 *)((longlong)puVar14 + 0x3c) = *puVar1;
                *(undefined8 *)((longlong)puVar14 + 0x44) = uVar9;
                *(undefined8 *)((longlong)puVar14 + 0x4c) = *(undefined8 *)(lVar3 + 0x10 + lVar7);
                puVar14 = puVar14 + 0xc;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            if (puVar21 < puVar18) {
              lVar19 = (longlong)puVar18 - (longlong)puVar21;
              puVar14 = (undefined8 *)((longlong)pvVar13 + (longlong)puVar21 * 0x18);
              do {
                if (puVar14 != (undefined8 *)0x0) {
                  *puVar14 = 0;
                  *(undefined4 *)(puVar14 + 1) = 0xffffffff;
                  *(undefined8 *)((longlong)puVar14 + 0xc) = 0;
                }
                lVar20 = puVar12[3];
                puVar1 = (undefined8 *)((longlong)puVar14 + (lVar20 - (longlong)pvVar13));
                uVar9 = puVar1[1];
                *puVar14 = *puVar1;
                puVar14[1] = uVar9;
                puVar14[2] = *(undefined8 *)
                              ((longlong)puVar14 + lVar20 + (0x10 - (longlong)pvVar13));
                puVar14 = puVar14 + 3;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            AK::MemoryMgr::Free(0,(void *)puVar12[3]);
          }
          goto LAB_1453616fb;
        }
      }
      else {
        pvVar13 = AK::MemoryMgr::ReallocAligned(0,(void *)puVar12[3],0x180,0x10);
        if (pvVar13 == (void *)0x0) {
          bVar10 = false;
        }
        else {
LAB_1453616fb:
          puVar12[3] = pvVar13;
          bVar10 = true;
          *(undefined4 *)((longlong)puVar12 + 0x24) = 0x10;
        }
      }
      if (!bVar10) {
LAB_14536170c:
        if ((void *)puVar12[6] != (void *)0x0) {
          AK::MemoryMgr::Free(0,(void *)puVar12[6]);
        }
        *(undefined4 *)((longlong)puVar12 + 0x2c) = 0;
        puVar12[6] = 0;
        if ((void *)puVar12[1] != (void *)0x0) {
          *(undefined4 *)(puVar12 + 2) = 0;
          AK::MemoryMgr::Free(0,(void *)puVar12[1]);
          puVar12[1] = 0;
          *(undefined4 *)((longlong)puVar12 + 0x14) = 0;
        }
        if ((void *)puVar12[3] != (void *)0x0) {
          *(undefined4 *)(puVar12 + 4) = 0;
          AK::MemoryMgr::Free(0,(void *)puVar12[3]);
          puVar12[3] = 0;
          *(undefined4 *)((longlong)puVar12 + 0x24) = 0;
        }
        AK::MemoryMgr::Free(0,puVar12);
        return 0x34;
      }
    }
    *puVar12 = 0;
    if (*(longlong *)(param_2 + 4) == 0) {
      *(undefined8 **)(param_2 + 4) = puVar12;
    }
    else {
      **(undefined8 **)(param_2 + 2) = puVar12;
    }
    *param_2 = *param_2 + 1;
    *(undefined8 **)(param_2 + 2) = puVar12;
    *param_3 = puVar12;
    param_3[1] = puVar6;
  }
  uVar4 = *(uint *)(puVar12 + 2);
  uVar5 = *(uint *)((longlong)puVar12 + 0x14);
  if (uVar5 <= uVar4) {
    iVar15 = (uVar5 >> 1) + uVar5;
    if (uVar5 == 0) {
      iVar15 = 1;
    }
    cVar11 = FUN_1453621f0(puVar12 + 1,iVar15);
    if (cVar11 == '\0') goto LAB_1453617d3;
  }
  if (uVar4 < *(uint *)((longlong)puVar12 + 0x14)) {
    puVar16 = (undefined4 *)((ulonglong)*(uint *)(puVar12 + 2) * 0x30 + puVar12[1]);
    *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) + 1;
  }
LAB_1453617d3:
  puVar16[6] = *(undefined4 *)(param_4 + 0xf8);
  puVar16[7] = *(undefined4 *)(param_4 + 0xfc);
  puVar16[8] = *(undefined4 *)(param_4 + 0x100);
  puVar16[9] = *(undefined4 *)(param_4 + 0x104);
  puVar16[10] = *(undefined4 *)(param_4 + 0x108);
  puVar16[0xb] = *(undefined4 *)(param_4 + 0x10c);
  *puVar16 = *(undefined4 *)(param_4 + 0xc0);
  puVar16[3] = *(undefined4 *)(param_4 + 0xb8);
  puVar16[2] = *(undefined4 *)(param_4 + 0xb4);
  puVar16[1] = *(undefined4 *)(param_4 + 0xb0);
  puVar16[4] = *(undefined4 *)(param_4 + 200);
  puVar16[5] = *(undefined4 *)(param_4 + 0xd4);
  return 1;
}



// FUNCTION 145361870 FUN_145361870 body=1088 status=ok
// SIG undefined FUN_145361870(void)

undefined8 FUN_145361870(undefined8 param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  undefined4 *puVar20;
  longlong lVar21;
  
  puVar6 = (undefined8 *)*param_3;
  puVar12 = puVar6;
  if ((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == *(int *)((longlong)puVar6 + 0x14)))
  {
    param_3[1] = puVar6;
    puVar12 = (undefined8 *)*puVar6;
    *param_3 = puVar12;
  }
  puVar16 = (undefined4 *)0x0;
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = AK::MemoryMgr::Malloc(0,0x38);
    if (puVar12 == (undefined8 *)0x0) {
      return 0x34;
    }
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[6] = 0;
    puVar12[5] = 0;
    if (*(uint *)((longlong)puVar12 + 0x14) < 0x10) {
      uVar17 = (ulonglong)*(uint *)(puVar12 + 2);
      pvVar13 = AK::MemoryMgr::Malign(0,0x280,0x10);
      bVar10 = false;
      if (pvVar13 != (void *)0x0) {
        if (((void *)puVar12[1] != (void *)0x0) &&
           (puVar18 = puVar16, (void *)puVar12[1] != pvVar13)) {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            lVar19 = puVar12[1];
            puVar20 = puVar18 + 10;
            puVar14 = (undefined8 *)(lVar19 + -0x28 + (longlong)puVar20);
            uVar9 = puVar14[1];
            *(undefined8 *)((longlong)puVar18 + (longlong)pvVar13) = *puVar14;
            ((undefined8 *)((longlong)puVar18 + (longlong)pvVar13))[1] = uVar9;
            puVar14 = (undefined8 *)(lVar19 + -0x18 + (longlong)puVar20);
            uVar9 = puVar14[1];
            *(undefined8 *)((longlong)(puVar18 + 4) + (longlong)pvVar13) = *puVar14;
            ((undefined8 *)((longlong)(puVar18 + 4) + (longlong)pvVar13))[1] = uVar9;
            *(undefined8 *)((longlong)(puVar18 + 8) + (longlong)pvVar13) =
                 *(undefined8 *)(lVar19 + -8 + (longlong)puVar20);
            puVar18 = puVar20;
          }
          AK::MemoryMgr::Free(0,(void *)puVar12[1]);
        }
        puVar12[1] = pvVar13;
        bVar10 = true;
        *(undefined4 *)((longlong)puVar12 + 0x14) = 0x10;
      }
      if (!bVar10) goto LAB_145361b75;
    }
    if (*(uint *)((longlong)puVar12 + 0x24) < 0x10) {
      puVar18 = (undefined4 *)(ulonglong)*(uint *)(puVar12 + 4);
      if ((void *)puVar12[3] == (void *)0x0) {
        pvVar13 = AK::MemoryMgr::Malign(0,0x180,0x10);
        bVar10 = false;
        if (pvVar13 != (void *)0x0) {
          if (((void *)puVar12[3] != (void *)0x0) && ((void *)puVar12[3] != pvVar13)) {
            puVar20 = puVar16;
            if (&DAT_00000003 < puVar18) {
              puVar14 = (undefined8 *)((longlong)pvVar13 + 0xc);
              lVar21 = -0xc - (longlong)pvVar13;
              lVar19 = ((ulonglong)(puVar18 + -1) >> 2) + 1;
              puVar20 = (undefined4 *)(lVar19 * 4);
              do {
                puVar1 = (undefined8 *)((longlong)puVar14 + -0xc);
                if (puVar1 != (undefined8 *)0x0) {
                  *puVar1 = 0;
                  *(undefined4 *)((longlong)puVar14 + -4) = 0xffffffff;
                  *puVar14 = 0;
                }
                lVar7 = puVar12[3];
                puVar2 = (undefined8 *)((longlong)puVar14 + lVar7 + lVar21);
                uVar9 = puVar2[1];
                *puVar1 = *puVar2;
                *(undefined8 *)((longlong)puVar14 + -4) = uVar9;
                *(undefined8 *)((longlong)puVar14 + 4) =
                     *(undefined8 *)((longlong)puVar14 + lVar7 + 0x10 + lVar21);
                puVar1 = (undefined8 *)((longlong)puVar14 + 0xc);
                if (puVar1 != (undefined8 *)0x0) {
                  *puVar1 = 0;
                  *(undefined4 *)((longlong)puVar14 + 0x14) = 0xffffffff;
                  puVar14[3] = 0;
                }
                lVar7 = puVar12[3];
                puVar2 = (undefined8 *)((longlong)puVar14 + lVar7 + 0x18 + lVar21);
                uVar9 = puVar2[1];
                *puVar1 = *puVar2;
                *(undefined8 *)((longlong)puVar14 + 0x14) = uVar9;
                *(undefined8 *)((longlong)puVar14 + 0x1c) =
                     *(undefined8 *)((longlong)puVar14 + lVar7 + 0x28 + lVar21);
                lVar7 = (0x24 - (longlong)pvVar13) + (longlong)puVar14;
                if (lVar7 + (longlong)pvVar13 != 0) {
                  *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
                  *(undefined4 *)((longlong)puVar14 + 0x2c) = 0xffffffff;
                  puVar14[6] = 0;
                }
                lVar8 = puVar12[3];
                puVar1 = (undefined8 *)(lVar7 + lVar8);
                uVar9 = puVar1[1];
                *(undefined8 *)((longlong)puVar14 + 0x24) = *puVar1;
                *(undefined8 *)((longlong)puVar14 + 0x2c) = uVar9;
                lVar3 = (0x3c - (longlong)pvVar13) + (longlong)puVar14;
                *(undefined8 *)((longlong)puVar14 + 0x34) = *(undefined8 *)(lVar7 + 0x10 + lVar8);
                if (lVar3 + (longlong)pvVar13 != 0) {
                  *(undefined8 *)((longlong)puVar14 + 0x3c) = 0;
                  *(undefined4 *)((longlong)puVar14 + 0x44) = 0xffffffff;
                  puVar14[9] = 0;
                }
                lVar7 = puVar12[3];
                puVar1 = (undefined8 *)(lVar3 + lVar7);
                uVar9 = puVar1[1];
                *(undefined8 *)((longlong)puVar14 + 0x3c) = *puVar1;
                *(undefined8 *)((longlong)puVar14 + 0x44) = uVar9;
                *(undefined8 *)((longlong)puVar14 + 0x4c) = *(undefined8 *)(lVar3 + 0x10 + lVar7);
                puVar14 = puVar14 + 0xc;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            if (puVar20 < puVar18) {
              lVar19 = (longlong)puVar18 - (longlong)puVar20;
              puVar14 = (undefined8 *)((longlong)pvVar13 + (longlong)puVar20 * 0x18);
              do {
                if (puVar14 != (undefined8 *)0x0) {
                  *puVar14 = 0;
                  *(undefined4 *)(puVar14 + 1) = 0xffffffff;
                  *(undefined8 *)((longlong)puVar14 + 0xc) = 0;
                }
                lVar21 = puVar12[3];
                puVar1 = (undefined8 *)((longlong)puVar14 + (lVar21 - (longlong)pvVar13));
                uVar9 = puVar1[1];
                *puVar14 = *puVar1;
                puVar14[1] = uVar9;
                puVar14[2] = *(undefined8 *)
                              ((longlong)puVar14 + lVar21 + (0x10 - (longlong)pvVar13));
                puVar14 = puVar14 + 3;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            AK::MemoryMgr::Free(0,(void *)puVar12[3]);
          }
          goto LAB_145361b64;
        }
      }
      else {
        pvVar13 = AK::MemoryMgr::ReallocAligned(0,(void *)puVar12[3],0x180,0x10);
        if (pvVar13 == (void *)0x0) {
          bVar10 = false;
        }
        else {
LAB_145361b64:
          puVar12[3] = pvVar13;
          bVar10 = true;
          *(undefined4 *)((longlong)puVar12 + 0x24) = 0x10;
        }
      }
      if (!bVar10) {
LAB_145361b75:
        if ((void *)puVar12[6] != (void *)0x0) {
          AK::MemoryMgr::Free(0,(void *)puVar12[6]);
        }
        *(undefined4 *)((longlong)puVar12 + 0x2c) = 0;
        puVar12[6] = 0;
        if ((void *)puVar12[1] != (void *)0x0) {
          *(undefined4 *)(puVar12 + 2) = 0;
          AK::MemoryMgr::Free(0,(void *)puVar12[1]);
          puVar12[1] = 0;
          *(undefined4 *)((longlong)puVar12 + 0x14) = 0;
        }
        if ((void *)puVar12[3] != (void *)0x0) {
          *(undefined4 *)(puVar12 + 4) = 0;
          AK::MemoryMgr::Free(0,(void *)puVar12[3]);
          puVar12[3] = 0;
          *(undefined4 *)((longlong)puVar12 + 0x24) = 0;
        }
        AK::MemoryMgr::Free(0,puVar12);
        return 0x34;
      }
    }
    *puVar12 = 0;
    if (*(longlong *)(param_2 + 4) == 0) {
      *(undefined8 **)(param_2 + 4) = puVar12;
    }
    else {
      **(undefined8 **)(param_2 + 2) = puVar12;
    }
    *param_2 = *param_2 + 1;
    *(undefined8 **)(param_2 + 2) = puVar12;
    *param_3 = puVar12;
    param_3[1] = puVar6;
  }
  uVar4 = *(uint *)(puVar12 + 2);
  uVar5 = *(uint *)((longlong)puVar12 + 0x14);
  if (uVar5 <= uVar4) {
    iVar15 = (uVar5 >> 1) + uVar5;
    if (uVar5 == 0) {
      iVar15 = 1;
    }
    cVar11 = FUN_145362b30(puVar12 + 1,iVar15);
    if (cVar11 == '\0') goto LAB_145361c3c;
  }
  if (uVar4 < *(uint *)((longlong)puVar12 + 0x14)) {
    uVar4 = *(uint *)(puVar12 + 2);
    *(uint *)(puVar12 + 2) = uVar4 + 1;
    puVar16 = (undefined4 *)(puVar12[1] + (ulonglong)uVar4 * 0x28);
  }
LAB_145361c3c:
  puVar16[6] = *(undefined4 *)(param_4 + 0xf8);
  puVar16[7] = *(undefined4 *)(param_4 + 0xfc);
  puVar16[8] = *(undefined4 *)(param_4 + 0x100);
  *puVar16 = *(undefined4 *)(param_4 + 0xc0);
  puVar16[3] = *(undefined4 *)(param_4 + 0xb8);
  puVar16[2] = *(undefined4 *)(param_4 + 0xb4);
  puVar16[1] = *(undefined4 *)(param_4 + 0xb0);
  puVar16[4] = *(undefined4 *)(param_4 + 200);
  puVar16[5] = *(undefined4 *)(param_4 + 0xd4);
  return 1;
}



// FUNCTION 145361cb0 FUN_145361cb0 body=717 status=ok
// SIG undefined FUN_145361cb0(void)

undefined8 FUN_145361cb0(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *pvVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float _Y;
  undefined1 local_res8 [8];
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return 1;
    }
    if (*(uint *)((longlong)param_1 + 0x2c) < *(uint *)(param_1 + 5)) {
      if ((void *)param_1[6] != (void *)0x0) {
        AK::MemoryMgr::Free(0,(void *)param_1[6]);
      }
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      param_1[6] = 0;
      pvVar10 = AK::MemoryMgr::Malign(0,(ulonglong)*(uint *)(param_1 + 5) << 2,0x10);
      param_1[6] = pvVar10;
      if (pvVar10 == (void *)0x0) {
        return 2;
      }
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_1 + 5);
    }
    lVar11 = param_1[1];
    plVar14 = (longlong *)param_1[3];
    lVar15 = param_1[6];
    lVar13 = (ulonglong)*(uint *)(param_1 + 2) * 0x58 + lVar11;
    if (lVar11 != lVar13) {
      uVar12 = (ulonglong)(param_2 - 1);
      plVar16 = plVar14 + 3;
      do {
        *plVar14 = lVar15;
        *(undefined4 *)(plVar16 + -2) = 0xffffffff;
        uVar4 = *(undefined4 *)(lVar11 + 0x48);
        iVar5 = *(int *)(lVar11 + 0x4c);
        uVar6 = *(undefined4 *)(lVar11 + 0x50);
        uVar7 = *(undefined4 *)(lVar11 + 0x54);
        uVar8 = *(undefined4 *)(lVar11 + 0x3c);
        uVar9 = *(undefined4 *)(lVar11 + 0x40);
        fVar17 = *(float *)(lVar11 + 0x44);
        *(undefined4 *)plVar16 = *(undefined4 *)(lVar11 + 0x38);
        *(undefined4 *)((longlong)plVar16 + 4) = uVar8;
        *(undefined4 *)(plVar16 + 1) = uVar9;
        *(float *)((longlong)plVar16 + 0xc) = fVar17;
        *(undefined4 *)(plVar16 + 2) = uVar4;
        *(int *)((longlong)plVar16 + 0x14) = iVar5;
        *(undefined4 *)(plVar16 + 3) = uVar6;
        *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar7;
        if (iVar5 == 0) {
          fVar18 = 6.2831855;
LAB_145361db8:
          fVar17 = fmodf(fVar17,fVar18);
          *(float *)((longlong)plVar16 + 0xc) = fVar17;
        }
        else if (iVar5 != 5) {
          fVar18 = 1.0;
          goto LAB_145361db8;
        }
        fVar17 = *(float *)(lVar11 + 0x18);
        uVar2 = *(uint *)(lVar11 + 0xc);
        uVar3 = *(uint *)(lVar11 + 0x1c);
        fVar18 = fVar17;
        if (uVar2 - param_2 < uVar3) {
          fVar18 = ((float)(uVar2 - param_2) * fVar17) / (float)uVar3;
        }
        if (*(int *)(lVar11 + 0x14) == 0) {
          *plVar14 = 0;
          iVar5 = *(int *)((longlong)plVar16 + 0x14);
          fVar17 = (float)uVar12 * *(float *)(plVar16 + 2) + *(float *)((longlong)plVar16 + 0xc);
          *(int *)plVar16 = (int)*plVar16;
          *(undefined4 *)((longlong)plVar16 + 4) = *(undefined4 *)((longlong)plVar16 + 4);
          *(int *)(plVar16 + 1) = (int)plVar16[1];
          *(float *)((longlong)plVar16 + 0xc) = fVar17;
          *(float *)(plVar16 + 2) = *(float *)(plVar16 + 2);
          *(int *)((longlong)plVar16 + 0x14) = iVar5;
          *(int *)(plVar16 + 3) = (int)plVar16[3];
          *(undefined4 *)((longlong)plVar16 + 0x1c) = *(undefined4 *)((longlong)plVar16 + 0x1c);
          if (iVar5 == 0) {
            _Y = 6.2831855;
LAB_145361ec3:
            fVar17 = fmodf(fVar17,_Y);
            *(float *)((longlong)plVar16 + 0xc) = fVar17;
          }
          else if (iVar5 != 5) {
            _Y = 1.0;
            goto LAB_145361ec3;
          }
          FUN_14535d280(plVar16,(longlong)plVar16 + -0xc,1,fVar18,fVar18,
                        *(undefined4 *)(lVar11 + 0x30),local_res8);
          fVar17 = *(float *)((longlong)plVar16 + -0xc);
          uVar12 = (ulonglong)(param_2 - 1);
        }
        else {
          if (uVar2 < uVar3) {
            fVar17 = ((float)uVar2 * fVar17) / (float)uVar3;
          }
          FUN_14535d280(plVar16,lVar15,param_2,fVar17,fVar18,*(undefined4 *)(lVar11 + 0x30),
                        local_res8);
          *(undefined4 *)((longlong)plVar16 + -0xc) = *(undefined4 *)(lVar15 + uVar12 * 4);
        }
        *(float *)(plVar16 + -1) = fVar17;
        plVar14 = plVar14 + 7;
        puVar1 = (uint *)(lVar11 + 0x14);
        plVar16 = plVar16 + 7;
        lVar11 = lVar11 + 0x58;
        lVar15 = lVar15 + (ulonglong)*puVar1 * 4;
      } while (lVar11 != lVar13);
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 145361f80 FUN_145361f80 body=611 status=ok
// SIG undefined FUN_145361f80(void)

undefined8 FUN_145361f80(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  float *pfVar9;
  ulonglong *puVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return 1;
    }
    if (*(uint *)((longlong)param_1 + 0x2c) < *(uint *)(param_1 + 5)) {
      if ((void *)param_1[6] != (void *)0x0) {
        AK::MemoryMgr::Free(0,(void *)param_1[6]);
      }
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      param_1[6] = 0;
      pvVar6 = AK::MemoryMgr::Malign(0,(ulonglong)*(uint *)(param_1 + 5) << 2,0x10);
      param_1[6] = pvVar6;
      if (pvVar6 == (void *)0x0) {
        return 2;
      }
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_1 + 5);
    }
    lVar7 = param_1[1];
    puVar10 = (ulonglong *)param_1[3];
    pfVar9 = (float *)param_1[6];
    lVar2 = lVar7 + (ulonglong)*(uint *)(param_1 + 2) * 0x28;
    if (lVar7 != lVar2) {
      pfVar11 = (float *)(puVar10 + 2);
      do {
        *puVar10 = (ulonglong)pfVar9;
        iVar3 = *(int *)(lVar7 + 0x14);
        *pfVar11 = 0.0;
        pfVar11[-2] = -NAN;
        uVar8 = *(uint *)(lVar7 + 0xc);
        uVar4 = *(uint *)(lVar7 + 0x18);
        if (iVar3 == 0) {
          if ((uVar4 < uVar8) && (uVar8 < *(uint *)(lVar7 + 0x1c))) {
            uVar8 = uVar8 % uVar4;
          }
          fVar13 = (float)((double)(int)uVar4 * (1.0 / (double)DAT_14c72f42c));
          fVar12 = (float)((double)(int)uVar8 * (1.0 / (double)DAT_14c72f42c));
          if (fVar13 <= fVar12) {
            fVar12 = fVar13;
          }
          if (uVar8 < *(uint *)(lVar7 + 8)) {
            fVar13 = fVar12;
            if (fVar12 <= 0.0) {
              fVar13 = 0.0;
            }
            *pfVar11 = fVar13;
            fVar13 = fVar12;
          }
          else {
            pfVar11[-2] = 4.2039e-45;
            fVar12 = fVar13;
            if (fVar13 <= 0.0) {
              fVar12 = 0.0;
            }
            *pfVar11 = fVar12;
          }
        }
        else {
          if ((uVar4 < uVar8) && (uVar8 < *(uint *)(lVar7 + 0x1c))) {
            uVar8 = uVar8 % uVar4;
          }
          fVar13 = (float)((double)(int)uVar4 * (1.0 / (double)DAT_14c72f42c));
          fVar12 = (float)((double)(int)uVar8 * (1.0 / (double)DAT_14c72f42c));
          if (fVar13 <= fVar12) {
            fVar12 = fVar13;
          }
          pfVar5 = pfVar9;
          if (uVar8 < *(uint *)(lVar7 + 8)) {
            for (; pfVar5 < pfVar9 + param_2; pfVar5 = pfVar5 + 4) {
              *pfVar5 = fVar12;
              pfVar5[1] = fVar12;
              pfVar5[2] = fVar12;
              pfVar5[3] = fVar12;
            }
            fVar13 = fVar12;
            if (fVar12 <= *pfVar11) {
              fVar13 = *pfVar11;
            }
            *pfVar11 = fVar13;
            fVar13 = fVar12;
          }
          else {
            for (; pfVar5 < pfVar9 + param_2; pfVar5 = pfVar5 + 4) {
              *pfVar5 = fVar13;
              pfVar5[1] = fVar13;
              pfVar5[2] = fVar13;
              pfVar5[3] = fVar13;
            }
            fVar12 = fVar13;
            if (fVar13 <= *pfVar11) {
              fVar12 = *pfVar11;
            }
            *pfVar11 = fVar12;
            pfVar11[-2] = 4.2039e-45;
          }
        }
        pfVar11[-1] = fVar13;
        puVar10 = puVar10 + 3;
        puVar1 = (uint *)(lVar7 + 0x14);
        pfVar11 = pfVar11 + 6;
        lVar7 = lVar7 + 0x28;
        pfVar9 = pfVar9 + *puVar1;
      } while (lVar7 != lVar2);
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 1453621f0 FUN_1453621f0 body=210 status=ok
// SIG undefined FUN_1453621f0(void)

undefined8 FUN_1453621f0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  __uint64 _Var7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var7 = (ulonglong)uVar8 * 0x30;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malign(0,_Var7,0x10);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar5)) {
      if (uVar9 != 0) {
        lVar6 = 0;
        do {
          lVar3 = *param_1;
          uVar4 = ((undefined8 *)(lVar6 + lVar3))[1];
          *(undefined8 *)(lVar6 + (longlong)pvVar5) = *(undefined8 *)(lVar6 + lVar3);
          ((undefined8 *)(lVar6 + (longlong)pvVar5))[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)pvVar5);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x20 + (longlong)pvVar5);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          uVar9 = uVar9 - 1;
          lVar6 = lVar6 + 0x30;
        } while (uVar9 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar5 = AK::MemoryMgr::ReallocAligned(0,(void *)*param_1,_Var7,0x10);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  return 1;
}



// FUNCTION 1453622d0 FUN_1453622d0 body=541 status=ok
// SIG undefined FUN_1453622d0(void)

undefined8 FUN_1453622d0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  uVar14 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var9 = (ulonglong)uVar14 * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malign(0,_Var9,0x10);
    if (pvVar7 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
      uVar13 = 0;
      if (3 < uVar10) {
        puVar8 = (undefined8 *)((longlong)pvVar7 + 0xc);
        lVar11 = -(longlong)pvVar7;
        lVar12 = (uVar10 - 4 >> 2) + 1;
        uVar13 = lVar12 * 4;
        do {
          puVar1 = (undefined8 *)((longlong)puVar8 + -0xc);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = 0;
            *(undefined4 *)((longlong)puVar8 + -4) = 0xffffffff;
            *puVar8 = 0;
          }
          lVar4 = *param_1;
          puVar2 = (undefined8 *)((longlong)puVar8 + lVar4 + lVar11 + -0xc);
          uVar6 = puVar2[1];
          *puVar1 = *puVar2;
          *(undefined8 *)((longlong)puVar8 + -4) = uVar6;
          *(undefined8 *)((longlong)puVar8 + 4) =
               *(undefined8 *)((longlong)puVar8 + lVar4 + lVar11 + 4);
          puVar1 = (undefined8 *)((longlong)puVar8 + 0xc);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = 0;
            *(undefined4 *)((longlong)puVar8 + 0x14) = 0xffffffff;
            puVar8[3] = 0;
          }
          lVar4 = *param_1;
          puVar2 = (undefined8 *)((longlong)puVar8 + lVar4 + lVar11 + 0xc);
          uVar6 = puVar2[1];
          *puVar1 = *puVar2;
          *(undefined8 *)((longlong)puVar8 + 0x14) = uVar6;
          *(undefined8 *)((longlong)puVar8 + 0x1c) =
               *(undefined8 *)((longlong)puVar8 + lVar4 + lVar11 + 0x1c);
          lVar4 = (0x24 - (longlong)pvVar7) + (longlong)puVar8;
          if (lVar4 + (longlong)pvVar7 != 0) {
            *(undefined8 *)((longlong)puVar8 + 0x24) = 0;
            *(undefined4 *)((longlong)puVar8 + 0x2c) = 0xffffffff;
            puVar8[6] = 0;
          }
          lVar5 = *param_1;
          puVar1 = (undefined8 *)(lVar4 + lVar5);
          uVar6 = puVar1[1];
          *(undefined8 *)((longlong)puVar8 + 0x24) = *puVar1;
          *(undefined8 *)((longlong)puVar8 + 0x2c) = uVar6;
          lVar3 = (0x3c - (longlong)pvVar7) + (longlong)puVar8;
          *(undefined8 *)((longlong)puVar8 + 0x34) = *(undefined8 *)(lVar4 + 0x10 + lVar5);
          if (lVar3 + (longlong)pvVar7 != 0) {
            *(undefined8 *)((longlong)puVar8 + 0x3c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0x44) = 0xffffffff;
            puVar8[9] = 0;
          }
          lVar4 = *param_1;
          puVar1 = (undefined8 *)(lVar3 + lVar4);
          uVar6 = puVar1[1];
          *(undefined8 *)((longlong)puVar8 + 0x3c) = *puVar1;
          *(undefined8 *)((longlong)puVar8 + 0x44) = uVar6;
          *(undefined8 *)((longlong)puVar8 + 0x4c) = *(undefined8 *)(lVar3 + 0x10 + lVar4);
          puVar8 = puVar8 + 0xc;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if (uVar13 < uVar10) {
        lVar11 = uVar10 - uVar13;
        puVar8 = (undefined8 *)((longlong)pvVar7 + uVar13 * 0x18);
        do {
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = 0;
            *(undefined4 *)(puVar8 + 1) = 0xffffffff;
            *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
          }
          lVar12 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar8 + (lVar12 - (longlong)pvVar7));
          uVar6 = puVar1[1];
          *puVar8 = *puVar1;
          puVar8[1] = uVar6;
          puVar8[2] = *(undefined8 *)((longlong)puVar8 + lVar12 + (0x10 - (longlong)pvVar7));
          puVar8 = puVar8 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::ReallocAligned(0,(void *)*param_1,_Var9,0x10);
    if (pvVar7 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar7;
  *(uint *)((longlong)param_1 + 0xc) = uVar14;
  return 1;
}



// FUNCTION 1453624f0 FUN_1453624f0 body=819 status=ok
// SIG undefined FUN_1453624f0(void)

undefined8 FUN_1453624f0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  __uint64 _Var8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  uVar13 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var8 = (ulonglong)uVar13 * 0x58;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malign(0,_Var8,0x10);
    if (pvVar7 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
      uVar12 = 0;
      if (3 < uVar10) {
        puVar9 = (undefined8 *)((longlong)pvVar7 + 0x40);
        lVar5 = -(longlong)pvVar7;
        lVar11 = (uVar10 - 4 >> 2) + 1;
        uVar12 = lVar11 * 4;
        do {
          if (puVar9 + -8 != (undefined8 *)0x0) {
            puVar9[-1] = 0;
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
          }
          lVar3 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + -0x40);
          uVar6 = puVar1[1];
          puVar9[-8] = *puVar1;
          puVar9[-7] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + -0x30);
          uVar6 = puVar1[1];
          puVar9[-6] = *puVar1;
          puVar9[-5] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + -0x20);
          uVar6 = puVar1[1];
          puVar9[-4] = *puVar1;
          puVar9[-3] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + -0x10);
          uVar6 = puVar1[1];
          puVar9[-2] = *puVar1;
          puVar9[-1] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5);
          uVar6 = puVar1[1];
          *puVar9 = *puVar1;
          puVar9[1] = uVar6;
          puVar9[2] = *(undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + 0x10);
          if (puVar9 + 3 != (undefined8 *)0x0) {
            puVar9[10] = 0;
            puVar9[0xb] = 0;
            puVar9[0xc] = 0;
            puVar9[0xd] = 0;
          }
          lVar3 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + 0x18);
          uVar6 = puVar1[1];
          puVar9[3] = *puVar1;
          puVar9[4] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + 0x28);
          uVar6 = puVar1[1];
          puVar9[5] = *puVar1;
          puVar9[6] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + 0x38);
          uVar6 = puVar1[1];
          puVar9[7] = *puVar1;
          puVar9[8] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + 0x48);
          uVar6 = puVar1[1];
          puVar9[9] = *puVar1;
          puVar9[10] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + 0x58);
          uVar6 = puVar1[1];
          puVar9[0xb] = *puVar1;
          puVar9[0xc] = uVar6;
          puVar9[0xd] = *(undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + 0x68);
          lVar3 = (longlong)puVar9 + (0x70 - (longlong)pvVar7);
          if (lVar3 + (longlong)pvVar7 != 0) {
            puVar9[0x15] = 0;
            puVar9[0x16] = 0;
            puVar9[0x17] = 0;
            puVar9[0x18] = 0;
          }
          lVar4 = *param_1;
          uVar6 = ((undefined8 *)(lVar3 + lVar4))[1];
          puVar9[0xe] = *(undefined8 *)(lVar3 + lVar4);
          puVar9[0xf] = uVar6;
          puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
          uVar6 = puVar1[1];
          puVar9[0x10] = *puVar1;
          puVar9[0x11] = uVar6;
          puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar4);
          uVar6 = puVar1[1];
          puVar9[0x12] = *puVar1;
          puVar9[0x13] = uVar6;
          puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar4);
          uVar6 = puVar1[1];
          puVar9[0x14] = *puVar1;
          puVar9[0x15] = uVar6;
          puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar4);
          uVar6 = puVar1[1];
          puVar9[0x16] = *puVar1;
          puVar9[0x17] = uVar6;
          lVar2 = (longlong)puVar9 + (200 - (longlong)pvVar7);
          puVar9[0x18] = *(undefined8 *)(lVar3 + 0x50 + lVar4);
          if (lVar2 + (longlong)pvVar7 != 0) {
            puVar9[0x20] = 0;
            puVar9[0x21] = 0;
            puVar9[0x22] = 0;
            puVar9[0x23] = 0;
          }
          lVar3 = *param_1;
          uVar6 = ((undefined8 *)(lVar2 + lVar3))[1];
          puVar9[0x19] = *(undefined8 *)(lVar2 + lVar3);
          puVar9[0x1a] = uVar6;
          puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar3);
          uVar6 = puVar1[1];
          puVar9[0x1b] = *puVar1;
          puVar9[0x1c] = uVar6;
          puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar3);
          uVar6 = puVar1[1];
          puVar9[0x1d] = *puVar1;
          puVar9[0x1e] = uVar6;
          puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar3);
          uVar6 = puVar1[1];
          puVar9[0x1f] = *puVar1;
          puVar9[0x20] = uVar6;
          puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar3);
          uVar6 = puVar1[1];
          puVar9[0x21] = *puVar1;
          puVar9[0x22] = uVar6;
          puVar9[0x23] = *(undefined8 *)(lVar2 + 0x50 + lVar3);
          puVar9 = puVar9 + 0x2c;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (uVar12 < uVar10) {
        lVar5 = -(longlong)pvVar7;
        lVar11 = uVar10 - uVar12;
        puVar9 = (undefined8 *)(uVar12 * 0x58 + 0x40 + (longlong)pvVar7);
        do {
          if (puVar9 + -8 != (undefined8 *)0x0) {
            puVar9[-1] = 0;
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
          }
          lVar3 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + -0x40);
          uVar6 = puVar1[1];
          puVar9[-8] = *puVar1;
          puVar9[-7] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + -0x30);
          uVar6 = puVar1[1];
          puVar9[-6] = *puVar1;
          puVar9[-5] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + -0x20);
          uVar6 = puVar1[1];
          puVar9[-4] = *puVar1;
          puVar9[-3] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + -0x10);
          uVar6 = puVar1[1];
          puVar9[-2] = *puVar1;
          puVar9[-1] = uVar6;
          puVar1 = (undefined8 *)((longlong)puVar9 + lVar3 + lVar5);
          uVar6 = puVar1[1];
          *puVar9 = *puVar1;
          puVar9[1] = uVar6;
          puVar9[2] = *(undefined8 *)((longlong)puVar9 + lVar3 + lVar5 + 0x10);
          lVar11 = lVar11 + -1;
          puVar9 = puVar9 + 0xb;
        } while (lVar11 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::ReallocAligned(0,(void *)*param_1,_Var8,0x10);
    if (pvVar7 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar7;
  *(uint *)((longlong)param_1 + 0xc) = uVar13;
  return 1;
}



// FUNCTION 145362830 FUN_145362830 body=768 status=ok
// SIG undefined FUN_145362830(void)

undefined8 FUN_145362830(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  void *pvVar8;
  __uint64 _Var9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  uVar11 = (ulonglong)*(uint *)(param_1 + 1);
  uVar14 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var9 = (ulonglong)uVar14 * 0x38;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar8 = AK::MemoryMgr::Malign(0,_Var9,0x10);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar8)) {
      uVar13 = 0;
      if (3 < uVar11) {
        puVar10 = (undefined8 *)((longlong)pvVar8 + 0x20);
        lVar6 = -(longlong)pvVar8;
        lVar12 = (uVar11 - 4 >> 2) + 1;
        uVar13 = lVar12 * 4;
        do {
          puVar3 = puVar10 + -4;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            *(undefined4 *)(puVar10 + -3) = 0xffffffff;
            *(undefined8 *)((longlong)puVar10 + -0x14) = 0;
            puVar10[-1] = 0;
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
          }
          lVar4 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar10 + lVar4 + lVar6 + -0x20);
          uVar7 = puVar1[1];
          *puVar3 = *puVar1;
          puVar10[-3] = uVar7;
          puVar3 = (undefined8 *)((longlong)puVar10 + lVar4 + lVar6 + -0x10);
          uVar7 = puVar3[1];
          puVar10[-2] = *puVar3;
          puVar10[-1] = uVar7;
          puVar3 = (undefined8 *)((longlong)puVar10 + lVar4 + lVar6);
          uVar7 = puVar3[1];
          *puVar10 = *puVar3;
          puVar10[1] = uVar7;
          puVar10[2] = *(undefined8 *)((longlong)puVar10 + lVar4 + lVar6 + 0x10);
          puVar3 = puVar10 + 3;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            *(undefined4 *)(puVar10 + 4) = 0xffffffff;
            *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[8] = 0;
            puVar10[9] = 0;
          }
          lVar4 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar10 + lVar4 + lVar6 + 0x18);
          uVar7 = puVar1[1];
          *puVar3 = *puVar1;
          puVar10[4] = uVar7;
          puVar3 = (undefined8 *)((longlong)puVar10 + lVar4 + lVar6 + 0x28);
          uVar7 = puVar3[1];
          puVar10[5] = *puVar3;
          puVar10[6] = uVar7;
          puVar3 = (undefined8 *)((longlong)puVar10 + lVar4 + lVar6 + 0x38);
          uVar7 = puVar3[1];
          puVar10[7] = *puVar3;
          puVar10[8] = uVar7;
          puVar10[9] = *(undefined8 *)((longlong)puVar10 + lVar4 + lVar6 + 0x48);
          lVar4 = (longlong)puVar10 + (0x50 - (longlong)pvVar8);
          if (lVar4 + (longlong)pvVar8 != 0) {
            puVar10[10] = 0;
            *(undefined4 *)(puVar10 + 0xb) = 0xffffffff;
            *(undefined8 *)((longlong)puVar10 + 0x5c) = 0;
            puVar10[0xd] = 0;
            puVar10[0xe] = 0;
            puVar10[0xf] = 0;
            puVar10[0x10] = 0;
          }
          lVar5 = *param_1;
          uVar7 = ((undefined8 *)(lVar4 + lVar5))[1];
          puVar10[10] = *(undefined8 *)(lVar4 + lVar5);
          puVar10[0xb] = uVar7;
          puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5);
          uVar7 = puVar3[1];
          puVar10[0xc] = *puVar3;
          puVar10[0xd] = uVar7;
          puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5);
          uVar7 = puVar3[1];
          puVar10[0xe] = *puVar3;
          puVar10[0xf] = uVar7;
          lVar2 = (longlong)puVar10 + (0x88 - (longlong)pvVar8);
          puVar10[0x10] = *(undefined8 *)(lVar4 + 0x30 + lVar5);
          if (lVar2 + (longlong)pvVar8 != 0) {
            puVar10[0x11] = 0;
            *(undefined4 *)(puVar10 + 0x12) = 0xffffffff;
            *(undefined8 *)((longlong)puVar10 + 0x94) = 0;
            puVar10[0x14] = 0;
            puVar10[0x15] = 0;
            puVar10[0x16] = 0;
            puVar10[0x17] = 0;
          }
          lVar4 = *param_1;
          uVar7 = ((undefined8 *)(lVar2 + lVar4))[1];
          puVar10[0x11] = *(undefined8 *)(lVar2 + lVar4);
          puVar10[0x12] = uVar7;
          puVar3 = (undefined8 *)(lVar2 + 0x10 + lVar4);
          uVar7 = puVar3[1];
          puVar10[0x13] = *puVar3;
          puVar10[0x14] = uVar7;
          puVar3 = (undefined8 *)(lVar2 + 0x20 + lVar4);
          uVar7 = puVar3[1];
          puVar10[0x15] = *puVar3;
          puVar10[0x16] = uVar7;
          puVar10[0x17] = *(undefined8 *)(lVar2 + 0x30 + lVar4);
          puVar10 = puVar10 + 0x1c;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if (uVar13 < uVar11) {
        lVar6 = -(longlong)pvVar8;
        lVar12 = uVar11 - uVar13;
        puVar10 = (undefined8 *)(uVar13 * 0x38 + 0x20 + (longlong)pvVar8);
        do {
          puVar3 = puVar10 + -4;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            *(undefined4 *)(puVar10 + -3) = 0xffffffff;
            *(undefined8 *)((longlong)puVar10 + -0x14) = 0;
            puVar10[-1] = 0;
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
          }
          lVar4 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar10 + lVar4 + lVar6 + -0x20);
          uVar7 = puVar1[1];
          *puVar3 = *puVar1;
          puVar10[-3] = uVar7;
          puVar3 = (undefined8 *)((longlong)puVar10 + lVar4 + lVar6 + -0x10);
          uVar7 = puVar3[1];
          puVar10[-2] = *puVar3;
          puVar10[-1] = uVar7;
          puVar3 = (undefined8 *)((longlong)puVar10 + lVar4 + lVar6);
          uVar7 = puVar3[1];
          *puVar10 = *puVar3;
          puVar10[1] = uVar7;
          puVar10[2] = *(undefined8 *)((longlong)puVar10 + lVar4 + lVar6 + 0x10);
          lVar12 = lVar12 + -1;
          puVar10 = puVar10 + 7;
        } while (lVar12 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar8 = AK::MemoryMgr::ReallocAligned(0,(void *)*param_1,_Var9,0x10);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar8;
  *(uint *)((longlong)param_1 + 0xc) = uVar14;
  return 1;
}



// FUNCTION 145362b30 FUN_145362b30 body=212 status=ok
// SIG undefined FUN_145362b30(void)

undefined8 FUN_145362b30(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  __uint64 _Var7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var7 = (ulonglong)uVar8 * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malign(0,_Var7,0x10);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar5)) {
      if (uVar9 != 0) {
        lVar6 = 0;
        do {
          lVar3 = *param_1;
          uVar4 = ((undefined8 *)(lVar6 + lVar3))[1];
          *(undefined8 *)(lVar6 + (longlong)pvVar5) = *(undefined8 *)(lVar6 + lVar3);
          ((undefined8 *)(lVar6 + (longlong)pvVar5))[1] = uVar4;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)pvVar5);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          *(undefined8 *)(lVar6 + 0x20 + (longlong)pvVar5) = *(undefined8 *)(lVar6 + 0x20 + lVar3);
          uVar9 = uVar9 - 1;
          lVar6 = lVar6 + 0x28;
        } while (uVar9 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar5 = AK::MemoryMgr::ReallocAligned(0,(void *)*param_1,_Var7,0x10);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  return 1;
}



// FUNCTION 145362c10 FUN_145362c10 body=541 status=ok
// SIG undefined FUN_145362c10(void)

undefined8 FUN_145362c10(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  uVar14 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var9 = (ulonglong)uVar14 * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malign(0,_Var9,0x10);
    if (pvVar7 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
      uVar13 = 0;
      if (3 < uVar10) {
        puVar8 = (undefined8 *)((longlong)pvVar7 + 0xc);
        lVar11 = -(longlong)pvVar7;
        lVar12 = (uVar10 - 4 >> 2) + 1;
        uVar13 = lVar12 * 4;
        do {
          puVar1 = (undefined8 *)((longlong)puVar8 + -0xc);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = 0;
            *(undefined4 *)((longlong)puVar8 + -4) = 0xffffffff;
            *puVar8 = 0;
          }
          lVar4 = *param_1;
          puVar2 = (undefined8 *)((longlong)puVar8 + lVar4 + lVar11 + -0xc);
          uVar6 = puVar2[1];
          *puVar1 = *puVar2;
          *(undefined8 *)((longlong)puVar8 + -4) = uVar6;
          *(undefined8 *)((longlong)puVar8 + 4) =
               *(undefined8 *)((longlong)puVar8 + lVar4 + lVar11 + 4);
          puVar1 = (undefined8 *)((longlong)puVar8 + 0xc);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = 0;
            *(undefined4 *)((longlong)puVar8 + 0x14) = 0xffffffff;
            puVar8[3] = 0;
          }
          lVar4 = *param_1;
          puVar2 = (undefined8 *)((longlong)puVar8 + lVar4 + lVar11 + 0xc);
          uVar6 = puVar2[1];
          *puVar1 = *puVar2;
          *(undefined8 *)((longlong)puVar8 + 0x14) = uVar6;
          *(undefined8 *)((longlong)puVar8 + 0x1c) =
               *(undefined8 *)((longlong)puVar8 + lVar4 + lVar11 + 0x1c);
          lVar4 = (0x24 - (longlong)pvVar7) + (longlong)puVar8;
          if (lVar4 + (longlong)pvVar7 != 0) {
            *(undefined8 *)((longlong)puVar8 + 0x24) = 0;
            *(undefined4 *)((longlong)puVar8 + 0x2c) = 0xffffffff;
            puVar8[6] = 0;
          }
          lVar5 = *param_1;
          puVar1 = (undefined8 *)(lVar4 + lVar5);
          uVar6 = puVar1[1];
          *(undefined8 *)((longlong)puVar8 + 0x24) = *puVar1;
          *(undefined8 *)((longlong)puVar8 + 0x2c) = uVar6;
          lVar3 = (0x3c - (longlong)pvVar7) + (longlong)puVar8;
          *(undefined8 *)((longlong)puVar8 + 0x34) = *(undefined8 *)(lVar4 + 0x10 + lVar5);
          if (lVar3 + (longlong)pvVar7 != 0) {
            *(undefined8 *)((longlong)puVar8 + 0x3c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0x44) = 0xffffffff;
            puVar8[9] = 0;
          }
          lVar4 = *param_1;
          puVar1 = (undefined8 *)(lVar3 + lVar4);
          uVar6 = puVar1[1];
          *(undefined8 *)((longlong)puVar8 + 0x3c) = *puVar1;
          *(undefined8 *)((longlong)puVar8 + 0x44) = uVar6;
          *(undefined8 *)((longlong)puVar8 + 0x4c) = *(undefined8 *)(lVar3 + 0x10 + lVar4);
          puVar8 = puVar8 + 0xc;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if (uVar13 < uVar10) {
        lVar11 = uVar10 - uVar13;
        puVar8 = (undefined8 *)((longlong)pvVar7 + uVar13 * 0x18);
        do {
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = 0;
            *(undefined4 *)(puVar8 + 1) = 0xffffffff;
            *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
          }
          lVar12 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar8 + (lVar12 - (longlong)pvVar7));
          uVar6 = puVar1[1];
          *puVar8 = *puVar1;
          puVar8[1] = uVar6;
          puVar8[2] = *(undefined8 *)((longlong)puVar8 + lVar12 + (0x10 - (longlong)pvVar7));
          puVar8 = puVar8 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::ReallocAligned(0,(void *)*param_1,_Var9,0x10);
    if (pvVar7 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar7;
  *(uint *)((longlong)param_1 + 0xc) = uVar14;
  return 1;
}



// FUNCTION 145362e30 FUN_145362e30 body=248 status=ok
// SIG undefined FUN_145362e30(void)

bool FUN_145362e30(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar6 = (longlong *)0x0;
  if (param_2[5] == 0) {
    uVar1 = *(uint *)(param_2 + 1);
    if (uVar1 == 0) {
      if (*param_2 == 0) {
        return true;
      }
      plVar7 = (longlong *)(*param_2 + 0x68);
    }
    else {
      plVar7 = plVar6;
      if (*(uint *)(DAT_14c790fc0 + 1) != 0) {
        for (plVar3 = *(longlong **)
                       (*DAT_14c790fc0 +
                       ((ulonglong)uVar1 % (ulonglong)*(uint *)(DAT_14c790fc0 + 1)) * 8);
            (plVar7 = plVar6, plVar3 != (longlong *)0x0 &&
            (plVar7 = plVar3, *(uint *)((longlong)plVar3 + 0x4c) != uVar1));
            plVar3 = (longlong *)plVar3[0xd]) {
        }
      }
    }
  }
  else {
    plVar7 = (longlong *)(param_2[5] + 0x230);
  }
  if (plVar7 == (longlong *)0x0) {
    return true;
  }
  uVar1 = *(uint *)((longlong)plVar7 + 0xc);
  uVar2 = *(uint *)(plVar7 + 1);
  if (uVar1 <= uVar2) {
    iVar4 = (uVar1 >> 1) + uVar1;
    if (uVar1 == 0) {
      iVar4 = 1;
    }
    cVar5 = FUN_145362ff0(plVar7,iVar4);
    if (cVar5 == '\0') goto LAB_145362efb;
  }
  if (uVar2 < *(uint *)((longlong)plVar7 + 0xc)) {
    plVar6 = (longlong *)(*plVar7 + (ulonglong)*(uint *)(plVar7 + 1) * 8);
    *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) + 1;
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)plVar6 = 0;
      *(undefined1 *)((longlong)plVar6 + 4) = 8;
      *plVar6 = param_1;
    }
  }
LAB_145362efb:
  return plVar6 != (longlong *)0x0;
}



// FUNCTION 145362f30 FUN_145362f30 body=181 status=ok
// SIG undefined FUN_145362f30(void)

void FUN_145362f30(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      if ((*(char *)(*param_1 + 4 + uVar3 * 8) - 2U & 0xfd) == 0) {
        FUN_1450801b0(g_pGameSyncMgr,*(undefined8 *)(*param_1 + uVar3 * 8),param_2);
      }
      iVar1 = (int)param_1[1];
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < iVar1);
  }
  uVar3 = 0;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  do {
    if ((*(char *)(*param_1 + 4 + uVar3 * 8) - 2U & 0xfd) != 0) {
      FUN_1450801b0(g_pGameSyncMgr,*(undefined8 *)(*param_1 + uVar3 * 8),param_2);
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < (int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 145362ff0 FUN_145362ff0 body=189 status=ok
// SIG undefined FUN_145362ff0(void)

undefined8 FUN_145362ff0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar4 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
       (puVar1 = puVar2, (undefined8 *)*param_1 != puVar2)) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined4 *)puVar1 = 0;
          *(undefined1 *)((longlong)puVar1 + 4) = 8;
        }
        *puVar1 = *(undefined8 *)((longlong)puVar1 + (*param_1 - (longlong)puVar2));
        puVar1 = puVar1 + 1;
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    puVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)puVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar4;
  return 1;
}



// FUNCTION 1453630b0 FUN_1453630b0 body=112 status=ok
// SIG undefined FUN_1453630b0(void)

void FUN_1453630b0(undefined8 *param_1,undefined8 *param_2)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 145363120 FUN_145363120 body=119 status=ok
// SIG undefined FUN_145363120(void)

void FUN_145363120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  byte bVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *param_4;
  local_14 = *param_5;
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  bVar1 = *(byte *)(param_1 + 0x10) + 4;
  *(byte *)(param_1 + 0x10) = (bVar1 ^ *(byte *)(param_1 + 0x10)) & 3 ^ bVar1;
  local_28 = param_2;
  local_20 = param_3;
  FUN_14535f210(param_1,&local_28);
  *(byte *)(param_1 + 0x10) =
       ((*(byte *)(param_1 + 0x10) >> 2) - 1) * '\x04' | *(byte *)(param_1 + 0x10) & 3;
  return;
}



// FUNCTION 1453631a0 FUN_1453631a0 body=61 status=ok
// SIG undefined FUN_1453631a0(void)

void FUN_1453631a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1450b0bd0(DAT_14c791068,*(longlong *)(param_1 + 0x10),param_1);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1453631e0 FUN_1453631e0 body=477 status=ok
// SIG undefined FUN_1453631e0(void)

ulonglong FUN_1453631e0(longlong param_1,float param_2,float *param_3,int *param_4,int *param_5,
                       int param_6,undefined1 *param_7)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  int local_48 [2];
  longlong local_40 [2];
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  
  fVar7 = *param_3;
  if (param_6 == 2) {
    fVar6 = param_2;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      fVar6 = *(float *)(*(longlong *)(param_1 + 0x10) + 0xc);
    }
    fVar7 = fVar7 + fVar6;
  }
  local_48[1] = 4;
  local_48[0] = 0;
  iVar3 = 0;
  piVar5 = local_48;
  if (param_4 != (int *)0x0) {
    piVar5 = param_4;
  }
  iVar4 = 0;
  if (((param_5 != (int *)0x0) && (iVar1 = *param_5, iVar1 != 0)) &&
     (iVar4 = iVar3, param_2 != fVar7)) {
    if (iVar1 == 1) {
      if ((fVar7 <= param_2) || ((float)param_5[1] == 0.0)) {
        if ((float)param_5[2] == 0.0) goto LAB_1453632be;
        fVar6 = (param_2 - fVar7) / (float)param_5[2];
      }
      else {
        fVar6 = (fVar7 - param_2) / (float)param_5[1];
      }
    }
    else {
      if (iVar1 != 2) goto LAB_1453632be;
      if (fVar7 <= param_2) {
        fVar6 = (float)param_5[2];
      }
      else {
        fVar6 = (float)param_5[1];
      }
    }
    iVar4 = (int)(fVar6 * 1000.0);
  }
LAB_1453632be:
  local_28 = *piVar5;
  if (*piVar5 <= iVar4) {
    local_28 = iVar4;
  }
  if (0 < local_28) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      if (fVar7 != param_2) {
        if ((param_5 == (int *)0x0) || (*param_5 != 2)) {
          local_1a = 0;
        }
        else {
          local_1a = 1;
        }
        local_24 = piVar5[1];
        local_40[1] = 0x10000000;
        local_20 = 9;
        local_1c = 0;
        local_40[0] = param_1;
        local_30 = param_2;
        local_2c = fVar7;
        param_5 = (int *)FUN_1450b0a50(DAT_14c791068,local_40,0);
        *(longlong *)(param_1 + 0x10) = (longlong)param_5;
      }
    }
    else {
      param_5 = (int *)FUN_1450b0c80(DAT_14c791068,lVar2,0x10000000,fVar7,local_28,piVar5[1],0);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(param_1 + 0x28) = *param_7;
      *param_3 = fVar7;
      *param_7 = 0;
      return 1;
    }
  }
  return (ulonglong)param_5 & 0xffffffffffffff00;
}



// FUNCTION 1453633c0 FUN_1453633c0 body=153 status=ok
// SIG undefined FUN_1453633c0(void)

void FUN_1453633c0(longlong param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  cVar1 = '\0';
  if (param_4 != '\0') {
    cVar1 = *(char *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined1 *)(param_1 + 0x29) = 1;
  local_38 = *(undefined8 *)(param_1 + 0x18);
  local_30 = *(undefined4 *)(param_1 + 0x20);
  local_res20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_res18[0] = param_3;
  FUN_145364af0(*(undefined8 *)(param_1 + 8),&local_38,local_res18,local_res20,0,0,cVar1);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}



// FUNCTION 145363460 FUN_145363460 body=139 status=ok
// SIG undefined FUN_145363460(void)

undefined8 * FUN_145363460(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  FUN_1453630b0(param_1 + 1,param_2 + 1);
  bVar2 = (*(byte *)(param_1 + 3) ^ *(byte *)(param_2 + 3)) & 1 ^ *(byte *)(param_1 + 3);
  *(byte *)(param_1 + 3) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 3)) & 2 ^ bVar2;
  *(byte *)(param_1 + 3) = bVar2;
  *(byte *)(param_1 + 3) = (bVar2 ^ *(byte *)(param_2 + 3)) & 3 ^ *(byte *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1453634f0 FUN_1453634f0 body=127 status=ok
// SIG undefined FUN_1453634f0(void)

void FUN_1453634f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149d425e0;
    if (puVar1[2] != 0) {
      FUN_1450b0bd0(DAT_14c791068,puVar1[2],puVar1);
      puVar1[2] = 0;
    }
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[1] = 0;
    AK::MemoryMgr::Free(0x10,puVar1);
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(byte *)(param_1 + 3) = (*(byte *)(param_1 + 3) & 0xfc) != 0 | *(byte *)(param_1 + 3) & 0xfe;
  return;
}



// FUNCTION 145363570 FUN_145363570 body=562 status=ok
// SIG undefined FUN_145363570(void)

void FUN_145363570(longlong *param_1,float *param_2,float *param_3,longlong *param_4,char *param_5,
                  undefined1 *param_6)

{
  float *pfVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  float fVar12;
  float local_res20 [2];
  
  lVar6 = param_4[3];
  puVar3 = (undefined8 *)param_4[2];
  lVar4 = *param_4;
  lVar5 = param_4[1];
  if (puVar3 == (undefined8 *)0x0) {
    bVar11 = *(int *)(lVar4 + 0x10) != 0;
    if (*(int *)(lVar4 + 0x10) == 0) {
      if ((*param_1 != 0) && (*(char *)(*param_1 + 0x29) == '\0')) {
        FUN_1453631a0();
      }
      goto LAB_1453635f2;
    }
  }
  else if ((*(char *)(puVar3 + 1) == '\0') &&
          ((*(char *)((longlong)param_4 + 0x1c) != '\0' || (*(char *)((longlong)puVar3 + 9) != '\0')
           ))) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  puVar9 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)0x0;
  if (puVar9 == (undefined8 *)0x0) {
    puVar7 = AK::MemoryMgr::Malloc(0x10,0x30);
    puVar9 = puVar10;
    if (puVar7 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)param_4[1];
      *puVar7 = &PTR_FUN_149d425e0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7[1] = lVar4;
      puVar7[2] = 0;
      *(undefined2 *)(puVar7 + 5) = 0;
      puVar7[3] = *puVar9;
      *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar9 + 1);
      puVar9 = puVar7;
    }
    *param_1 = (longlong)puVar9;
    if (puVar9 == (undefined8 *)0x0) goto LAB_1453635f2;
  }
  if (*(char *)((longlong)puVar9 + 0x29) == '\0') {
    local_res20[0] = *param_3;
    puVar7 = (undefined8 *)(lVar4 + 0x10);
    if (!bVar11) {
      puVar7 = puVar10;
    }
    if (puVar3 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*puVar3;
    }
    cVar8 = FUN_1453631e0(puVar9,*param_2,local_res20,puVar10,puVar7,(int)param_4[3],param_5);
    *param_3 = local_res20[0];
    if (cVar8 != '\0') {
      *param_6 = 0;
      *param_3 = *param_2;
      *(float *)(param_1 + 4) = *param_2;
      return;
    }
    FUN_1453631a0(*param_1);
  }
LAB_1453635f2:
  pfVar1 = (float *)(param_1 + 4);
  if ((int)lVar6 == 2) {
    fVar12 = *param_2 + *param_3;
  }
  else {
    fVar12 = *param_3;
  }
  *pfVar1 = fVar12;
  if (fVar12 != *param_2) {
    *param_6 = 1;
    FUN_145363120(param_1 + 1,*(undefined8 *)(lVar4 + 8),lVar5,param_2,pfVar1);
  }
  *param_3 = *pfVar1;
  cVar8 = *param_5;
  bVar2 = *(byte *)(param_1 + 3);
  if (cVar8 == '\0') {
    if ((bVar2 & 2) != 0) {
      cVar8 = (bVar2 & 0xfc) == 0;
    }
  }
  else if ((bVar2 & 0xfc) != 0) {
    *(byte *)(param_1 + 3) = bVar2 | 2;
    cVar8 = '\0';
  }
  *param_5 = cVar8;
  return;
}



// FUNCTION 1453637b0 FUN_1453637b0 body=166 status=ok
// SIG undefined FUN_1453637b0(void)

undefined8 * FUN_1453637b0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149d425e0;
    if (puVar1[2] != 0) {
      FUN_1450b0bd0(DAT_14c791068,puVar1[2],puVar1);
      puVar1[2] = 0;
    }
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[1] = 0;
    AK::MemoryMgr::Free(0x10,puVar1);
    *param_1 = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[1]);
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 145363860 FUN_145363860 body=328 status=ok
// SIG undefined FUN_145363860(void)

undefined8 * FUN_145363860(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  puVar2 = AK::MemoryMgr::Malloc(0x10,0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)puVar2 + 0x2c) = 8;
    *puVar2 = &PTR_FUN_149d425e8;
    puVar2[4] = param_2;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = param_1;
    if ((void *)puVar2[1] != (void *)0x0) {
      AK::MemoryMgr::Free(0,(void *)puVar2[1]);
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 1;
    if ((param_3 != 0) && (param_4 != 0)) {
      *(undefined4 *)(puVar2 + 3) = 1;
      *(int *)(puVar2 + 2) = param_4 + 2;
      pvVar3 = AK::MemoryMgr::Malloc(0,(ulonglong)(uint)((param_4 + 2) * 0x14));
      puVar2[1] = pvVar3;
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)(puVar2 + 2) = 0;
      }
      else {
        FUN_1453521a0(puVar2 + 1,param_3,param_4,0);
        iVar1 = FUN_14507efd0(g_pGameSyncMgr,param_1,puVar2);
        if (iVar1 == 1) {
          return puVar2;
        }
      }
    }
    FUN_14507f1b0(g_pGameSyncMgr,puVar2[5],puVar2);
    if ((void *)puVar2[1] != (void *)0x0) {
      AK::MemoryMgr::Free(0,(void *)puVar2[1]);
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 1;
    AK::MemoryMgr::Free(0x10,puVar2);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1453639b0 FUN_1453639b0 body=77 status=ok
// SIG undefined FUN_1453639b0(void)

void FUN_1453639b0(void *param_1)

{
  FUN_14507f1b0(g_pGameSyncMgr,*(undefined8 *)((longlong)param_1 + 0x28),param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 1;
  AK::MemoryMgr::Free(0x10,param_1);
  return;
}



// FUNCTION 145363a00 FUN_145363a00 body=146 status=ok
// SIG undefined FUN_145363a00(void)

void FUN_145363a00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14 [3];
  
  local_14[0] = 0;
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x18);
    FUN_1450737c0(param_1 + 8,*param_5,&local_18,local_14);
    *(undefined4 *)(param_1 + 0x18) = local_18;
    uVar1 = local_14[0];
  }
  local_14[0] = uVar1;
  FUN_145364af0(*(undefined8 *)(param_1 + 0x20),param_3,local_14,local_res8,0,0,0);
  return;
}



// FUNCTION 145363aa0 FUN_145363aa0 body=164 status=ok
// SIG undefined FUN_145363aa0(void)

undefined4 * FUN_145363aa0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18;
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
  local_28 = *(undefined4 *)(param_3 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_20 = *(undefined4 *)(param_3 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_res8[0] = 0;
  local_18 = *(undefined4 *)(param_3 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_10 = *(undefined4 *)(param_3 + 5);
  uStack_c = *(undefined4 *)((longlong)param_3 + 0x2c);
  FUN_14507fa00(g_pGameSyncMgr,*(undefined8 *)(param_1 + 0x28),&local_38,local_res8,0);
  *param_2 = 0;
  local_res18 = local_res8[0];
  if (*(longlong *)(param_1 + 8) != 0) {
    local_res10[0] = *(undefined4 *)(param_1 + 0x18);
    FUN_1450737c0(param_1 + 8,local_res8[0],local_res10,param_2);
    *(undefined4 *)(param_1 + 0x18) = local_res10[0];
  }
  return param_2;
}



// FUNCTION 145363b50 FUN_145363b50 body=107 status=ok
// SIG undefined FUN_145363b50(void)

void FUN_145363b50(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_145365960();
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_145364080(param_1);
  return;
}



// FUNCTION 145363bc0 FUN_145363bc0 body=421 status=ok
// SIG undefined FUN_145363bc0(void)

longlong FUN_145363bc0(longlong *param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  ushort *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ushort *local_res8;
  
  lVar7 = 0;
  local_res8 = (ushort *)0x0;
  puVar4 = (ushort *)FUN_1453646c0(param_1 + 3,param_2,param_3,&local_res8);
  if (*param_3 == '\0') {
    lVar8 = 0;
    if (puVar4 == (ushort *)0x0) goto LAB_145363d24;
    uVar5 = (ulonglong)*(ushort *)(param_1 + 2);
    if (*(ushort *)(param_1 + 2) == 0xffff) {
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_145363c4d:
        uVar2 = *(uint *)(param_1 + 1);
        puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar2 * 0x28);
        *(uint *)(param_1 + 1) = uVar2 + 1;
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          *(undefined2 *)(puVar1 + 3) = 0;
          *(undefined4 *)(puVar1 + 4) = 0;
          uVar9 = (short)*(uint *)(param_1 + 1) - 1;
          uVar5 = (ulonglong)uVar9;
          if (uVar9 != 0xffff) goto LAB_145363d11;
        }
      }
      else {
        cVar3 = FUN_1453641e0(param_1);
        if ((cVar3 != '\0') && (uVar2 < *(uint *)((longlong)param_1 + 0xc))) goto LAB_145363c4d;
      }
      if (((((*param_2 != 0) || ((int)param_2[1] != 0)) || ((int)param_2[2] != 0)) ||
          (((char)param_2[3] != -1 || ((char)param_2[4] != -1)))) || (param_2[5] != 0)) {
        lVar6 = FUN_145364420(param_1 + 4);
        if (lVar6 != 0) {
          FUN_145365d10(lVar6,param_2 + 1);
          if ((*(char *)(lVar6 + 10) == '\0') && (lVar8 = lVar7, *(int *)(lVar6 + 0x18) == 0)) {
            FUN_145365960(lVar6);
            FUN_1453645e0(param_1 + 4,*param_2);
          }
          goto LAB_145363d24;
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
      lVar8 = lVar7;
      goto LAB_145363d24;
    }
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(*param_1 + 0x20 + uVar5 * 0x28);
    *(undefined2 *)(*param_1 + uVar5 * 0x28 + 0x20) = 0xffff;
LAB_145363d11:
    *puVar4 = (ushort)uVar5;
  }
  else {
    uVar5 = (ulonglong)*puVar4;
  }
  lVar8 = *param_1 + uVar5 * 0x28;
LAB_145363d24:
  if (local_res8 != (ushort *)0x0) {
    *param_4 = *param_1 + (ulonglong)*local_res8 * 0x28;
  }
  return lVar8;
}



// FUNCTION 145363d70 FUN_145363d70 body=515 status=ok
// SIG undefined FUN_145363d70(void)

ushort * FUN_145363d70(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)0x0;
  puVar2 = puVar4;
  puVar3 = puVar4;
  if (((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
    puVar2 = (ushort *)((longlong)param_1 + 0x1a);
    if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
      puVar2 = puVar4;
    }
  }
  else {
    puVar3 = (ushort *)((longlong)param_1 + 0x1a);
    if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
      puVar3 = puVar4;
    }
    lVar1 = FUN_145364420(param_1 + 4,*param_2);
    if (lVar1 == 0) goto LAB_145363f3f;
    if ((((int)param_2[1] == 0) && ((int)param_2[2] == 0)) &&
       (((char)param_2[3] == -1 && (((char)param_2[4] == -1 && (param_2[5] == 0)))))) {
      puVar2 = (ushort *)(lVar1 + 8);
      if (*(char *)(lVar1 + 10) == '\0') {
        puVar2 = puVar4;
      }
    }
    else {
      if (*(char *)(lVar1 + 10) != '\0') {
        puVar3 = (ushort *)(lVar1 + 8);
      }
      lVar1 = FUN_1453655d0(lVar1 + 0x10);
      if (lVar1 != 0) {
        if (((((int)param_2[2] == 0) && ((char)param_2[3] == -1)) && ((char)param_2[4] == -1)) &&
           (param_2[5] == 0)) {
          puVar2 = (ushort *)(lVar1 + 4);
          if (*(char *)(lVar1 + 6) == '\0') {
            puVar2 = puVar4;
          }
        }
        else {
          if (*(char *)(lVar1 + 6) != '\0') {
            puVar3 = (ushort *)(lVar1 + 4);
          }
          lVar1 = FUN_145365fb0(lVar1 + 8);
          if (lVar1 != 0) {
            if ((((char)param_2[3] == -1) && ((char)param_2[4] == -1)) && (param_2[5] == 0)) {
              puVar2 = (ushort *)(lVar1 + 4);
              if (*(char *)(lVar1 + 6) == '\0') {
                puVar2 = puVar4;
              }
            }
            else {
              if (*(char *)(lVar1 + 6) != '\0') {
                puVar3 = (ushort *)(lVar1 + 4);
              }
              lVar1 = FUN_145366760(lVar1 + 8);
              if (lVar1 != 0) {
                if (((char)param_2[4] == -1) && (param_2[5] == 0)) {
                  puVar2 = (ushort *)(lVar1 + 2);
                  if (*(char *)(lVar1 + 4) == '\0') {
                    puVar2 = puVar4;
                  }
                }
                else {
                  if (*(char *)(lVar1 + 4) != '\0') {
                    puVar3 = (ushort *)(lVar1 + 2);
                  }
                  lVar1 = FUN_145366eb0(lVar1 + 8);
                  if (lVar1 != 0) {
                    if (param_2[5] == 0) {
                      puVar2 = (ushort *)(lVar1 + 2);
                      if (*(char *)(lVar1 + 4) == '\0') {
                        puVar2 = puVar4;
                      }
                    }
                    else {
                      if (*(char *)(lVar1 + 4) != '\0') {
                        puVar3 = (ushort *)(lVar1 + 2);
                      }
                      lVar1 = FUN_145367540(lVar1 + 8);
                      puVar2 = (ushort *)(lVar1 + 8);
                      if (lVar1 == 0) {
                        puVar2 = puVar4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (puVar2 != (ushort *)0x0) {
    puVar4 = (ushort *)(*param_1 + (ulonglong)*puVar2 * 0x28);
  }
LAB_145363f3f:
  if (puVar3 != (ushort *)0x0) {
    *param_3 = *param_1 + (ulonglong)*puVar3 * 0x28;
  }
  return puVar4;
}



// FUNCTION 145363f80 FUN_145363f80 body=242 status=ok
// SIG undefined FUN_145363f80(void)

longlong FUN_145363f80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ushort *puVar2;
  uint uStack_2c;
  uint uStack_24;
  undefined7 uStack_1f;
  undefined7 uStack_17;
  
  if ((((*param_2 != 0) || ((int)param_2[1] != 0)) || ((int)param_2[2] != 0)) ||
     ((((char)param_2[3] != -1 || ((char)param_2[4] != -1)) || (param_2[5] != 0)))) {
    lVar1 = FUN_145364420(param_1 + 4,*param_2);
    if (lVar1 == 0) {
      if (*param_2 != 0) {
        *param_2 = 0;
        lVar1 = FUN_145364420(param_1 + 4,0);
        if (lVar1 != 0) goto LAB_145363fef;
      }
    }
    else {
LAB_145363fef:
      puVar2 = (ushort *)FUN_145365b90(lVar1,param_2 + 1);
      if (puVar2 != (ushort *)0x0) goto LAB_145364049;
    }
  }
  *param_2 = 0;
  param_2[1] = (ulonglong)uStack_2c << 0x20;
  param_2[2] = (ulonglong)uStack_24 << 0x20;
  param_2[3] = CONCAT71(uStack_1f,0xff);
  param_2[4] = CONCAT71(uStack_17,0xff);
  param_2[5] = 0;
  puVar2 = (ushort *)((longlong)param_1 + 0x1a);
  if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
    puVar2 = (ushort *)0x0;
  }
  if (puVar2 == (ushort *)0x0) {
    return 0;
  }
LAB_145364049:
  return *param_1 + (ulonglong)*puVar2 * 0x28;
}



// FUNCTION 145364080 FUN_145364080 body=351 status=ok
// SIG undefined FUN_145364080(void)

void FUN_145364080(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  uVar2 = (ulonglong)*(uint *)(param_1 + 1);
  puVar4 = puVar3;
  if (puVar3 != puVar3 + uVar2 * 5) {
    do {
      puVar3 = (undefined8 *)*puVar4;
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_149d425e0;
        if (puVar3[2] != 0) {
          FUN_1450b0bd0(DAT_14c791068,puVar3[2],puVar3);
          puVar3[2] = 0;
        }
        *(undefined1 *)(puVar3 + 5) = 0;
        puVar3[1] = 0;
        AK::MemoryMgr::Free(0x10,puVar3);
        *puVar4 = 0;
      }
      *(undefined4 *)(puVar4 + 2) = 0;
      *(byte *)(puVar4 + 3) = (*(byte *)(puVar4 + 3) & 0xfc) != 0 | *(byte *)(puVar4 + 3) & 0xfe;
      puVar4 = puVar4 + 5;
      uVar2 = (ulonglong)*(uint *)(param_1 + 1);
      puVar3 = (undefined8 *)*param_1;
    } while (puVar4 != puVar3 + uVar2 * 5);
  }
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3 != puVar3 + uVar2 * 5) {
      puVar4 = puVar3 + 1;
      do {
        puVar1 = (undefined8 *)puVar4[-1];
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = &PTR_FUN_149d425e0;
          if (puVar1[2] != 0) {
            FUN_1450b0bd0(DAT_14c791068,puVar1[2],puVar1);
            puVar1[2] = 0;
          }
          *(undefined1 *)(puVar1 + 5) = 0;
          puVar1[1] = 0;
          AK::MemoryMgr::Free(0x10,puVar1);
          puVar4[-1] = 0;
        }
        if ((void *)*puVar4 != (void *)0x0) {
          *(undefined4 *)(puVar4 + 1) = 0;
          AK::MemoryMgr::Free(0,(void *)*puVar4);
          *puVar4 = 0;
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        }
        puVar1 = puVar4 + 4;
        puVar4 = puVar4 + 5;
      } while (puVar1 != puVar3 + uVar2 * 5);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  *(undefined2 *)(param_1 + 2) = 0xffff;
  return;
}



// FUNCTION 1453641e0 FUN_1453641e0 body=293 status=ok
// SIG undefined FUN_1453641e0(void)

undefined8 FUN_1453641e0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  __uint64 _Var6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  iVar4 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar4 = 1;
  }
  _Var6 = (ulonglong)(iVar4 + uVar3) * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar5 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar5)) {
        if (uVar8 != 0) {
          lVar7 = (longlong)pvVar5 + 0x14;
          do {
            puVar1 = (undefined8 *)(lVar7 + -0x14);
            if (puVar1 != (undefined8 *)0x0) {
              *puVar1 = 0;
              *(undefined8 *)(lVar7 + -0xc) = 0;
              *(undefined8 *)(lVar7 + -4) = 0;
              *(undefined2 *)(lVar7 + 4) = 0;
              *(undefined4 *)(lVar7 + 0xc) = 0;
            }
            lVar2 = (-0x14 - (longlong)pvVar5) + lVar7;
            FUN_145363460(puVar1,*param_1 + lVar2);
            FUN_1453637b0(*param_1 + lVar2,0);
            lVar7 = lVar7 + 0x28;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1453642f1;
    }
  }
  else {
    pvVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar5 != (void *)0x0) {
LAB_1453642f1:
      *param_1 = (longlong)pvVar5;
      *(uint *)((longlong)param_1 + 0xc) = iVar4 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145364310 FUN_145364310 body=258 status=ok
// SIG undefined FUN_145364310(void)

undefined8 FUN_145364310(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  __uint64 _Var5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var5 = (ulonglong)(iVar3 + uVar2) << 5;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar6 = (longlong)pvVar4 + 0x1c;
          do {
            puVar1 = (undefined8 *)(lVar6 + -0x1c);
            if (puVar1 != (undefined8 *)0x0) {
              *puVar1 = 0;
              *(undefined1 *)(lVar6 + -0x12) = 0;
              *(undefined8 *)(lVar6 + -0xc) = 0;
              *(undefined8 *)(lVar6 + -4) = 0;
            }
            FUN_1453658d0(puVar1,(-0x1c - (longlong)pvVar4) + lVar6 + *param_1);
            lVar6 = lVar6 + 0x20;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1453643fb;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_1453643fb:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145364420 FUN_145364420 body=156 status=ok
// SIG undefined FUN_145364420(void)

/* WARNING: Removing unreachable block (ram,0x000145364494) */

ulonglong * FUN_145364420(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      puVar4 = (ulonglong *)((longlong)iVar3 * 0x20 + *param_1);
      uVar1 = *puVar4;
      if (uVar1 == param_2) {
        return puVar4;
      }
      uVar2 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar2 >> 1;
    } while (uVar5 != 0);
  }
  return (ulonglong *)0x0;
}



// FUNCTION 1453644c0 FUN_1453644c0 body=282 status=ok
// SIG undefined FUN_1453644c0(void)

undefined8 * FUN_1453644c0(longlong *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  puVar2 = (undefined8 *)FUN_145364630();
  if (*param_3 != '\0') {
    return puVar2;
  }
  uVar3 = *(uint *)(param_1 + 1);
  if (puVar2 == (undefined8 *)0x0) {
    if (((uVar3 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_145364310(param_1), cVar1 != '\0')) &&
       (uVar3 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar3 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar3 + 1;
      puVar2 = (undefined8 *)((ulonglong)uVar3 * 0x20 + *param_1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *(undefined1 *)((longlong)puVar2 + 10) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
      }
      goto LAB_1453645b3;
    }
  }
  else {
    uVar4 = (longlong)puVar2 - *param_1 >> 5;
    if (((uVar3 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_145364310(param_1), cVar1 != '\0')) &&
       (uVar3 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar3 = (uint)uVar4;
      lVar5 = (uVar4 & 0xffffffff) * 0x20;
      puVar2 = (undefined8 *)(*param_1 + lVar5);
      if (uVar3 < *(uint *)(param_1 + 1)) {
        memmove(puVar2 + 4,puVar2,(ulonglong)((*(uint *)(param_1 + 1) - uVar3) * 0x20));
      }
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *(undefined1 *)((longlong)puVar2 + 10) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      puVar2 = (undefined8 *)(*param_1 + lVar5);
LAB_1453645b3:
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *puVar2 = param_2;
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1453645e0 FUN_1453645e0 body=74 status=ok
// SIG undefined FUN_1453645e0(void)

undefined8 FUN_1453645e0(longlong *param_1)

{
  void *_Dst;
  void *pvVar1;
  
  _Dst = (void *)FUN_145364420();
  if (_Dst != (void *)0x0) {
    pvVar1 = (void *)((ulonglong)((int)param_1[1] - 1) * 0x20 + *param_1);
    if (_Dst < pvVar1) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x20),(ulonglong)((int)pvVar1 - (int)_Dst & 0xffffffe0)
             );
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return 1;
  }
  return 0;
}



// FUNCTION 145364630 FUN_145364630 body=130 status=ok
// SIG undefined FUN_145364630(void)

longlong FUN_145364630(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar2 = (uVar5 >> 1) + iVar6;
      lVar4 = (longlong)iVar2 * 0x20;
      uVar1 = *(ulonglong *)(lVar4 + *param_1);
      if (uVar1 == param_2) {
        *param_3 = 1;
        return *param_1 + lVar4;
      }
      uVar3 = uVar5 - 1;
      iVar2 = iVar2 + 1;
      if (param_2 <= uVar1) {
        uVar3 = uVar5;
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
      uVar5 = uVar3 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return (longlong)iVar6 * 0x20 + *param_1;
}



// FUNCTION 1453646c0 FUN_1453646c0 body=310 status=ok
// SIG undefined FUN_1453646c0(void)

undefined2 * FUN_1453646c0(longlong param_1,longlong *param_2,undefined1 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  
  plVar1 = param_2 + 1;
  if ((((*param_2 == 0) && ((int)*plVar1 == 0)) && ((int)param_2[2] == 0)) &&
     ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0)))) {
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined2 *)(param_1 + 2) = 0;
    }
    *param_3 = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)(param_1 + 4) = 1;
    return (undefined2 *)(param_1 + 2);
  }
  if ((param_4 != (longlong *)0x0) && (*(char *)(param_1 + 4) != '\0')) {
    *param_4 = param_1 + 2;
  }
  lVar2 = FUN_1453644c0(param_1 + 8,*param_2);
  if (lVar2 == 0) {
    return (undefined2 *)0x0;
  }
  if (((((int)*plVar1 == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
     (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
    puVar3 = (undefined2 *)(lVar2 + 8);
    if (*(char *)(lVar2 + 10) == '\0') {
      *puVar3 = 0;
    }
    *param_3 = *(undefined1 *)(lVar2 + 10);
    *(undefined1 *)(lVar2 + 10) = 1;
  }
  else {
    if ((param_4 != (longlong *)0x0) && (*(char *)(lVar2 + 10) != '\0')) {
      *param_4 = lVar2 + 8;
    }
    lVar2 = FUN_145365680(lVar2 + 0x10,(int)*plVar1,param_3);
    if (lVar2 == 0) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      puVar3 = (undefined2 *)FUN_1453664c0(lVar2,param_2 + 2,param_3,param_4);
    }
  }
  return puVar3;
}



// FUNCTION 145364800 FUN_145364800 body=183 status=ok
// SIG undefined FUN_145364800(void)

void FUN_145364800(longlong param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    FUN_14507f1b0(g_pGameSyncMgr,*(undefined8 *)((longlong)pvVar1 + 0x28),pvVar1);
    if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
      AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar1 + 8));
    }
    *(undefined8 *)((longlong)pvVar1 + 8) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
    *(undefined4 *)((longlong)pvVar1 + 0x18) = 1;
    AK::MemoryMgr::Free(0x10,pvVar1);
  }
  FUN_145363b50();
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FUN_145364080(param_1 + 0x28);
  return;
}



// FUNCTION 1453648c0 FUN_1453648c0 body=94 status=ok
// SIG undefined FUN_1453648c0(void)

undefined8 * FUN_1453648c0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0xffff;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 145364920 FUN_145364920 body=108 status=ok
// SIG undefined FUN_145364920(void)

void FUN_145364920(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *local_48;
  undefined1 local_40;
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
  
  puVar1 = (undefined8 *)(**(code **)*param_2)(param_2);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  local_28 = *(undefined4 *)(puVar1 + 2);
  uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_20 = *(undefined4 *)(puVar1 + 3);
  uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x1c);
  local_18 = *(undefined4 *)(puVar1 + 4);
  uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_10 = *(undefined4 *)(puVar1 + 5);
  uStack_c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  lVar2 = FUN_145363f80(param_1 + 0x28,&local_38);
  local_40 = 0;
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = param_1 + 0x58;
  }
  local_48 = param_2;
  FUN_145356760(lVar3,&local_48);
  return;
}



// FUNCTION 145364990 FUN_145364990 body=95 status=ok
// SIG undefined FUN_145364990(void)

void FUN_145364990(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
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
  
  puVar1 = (undefined8 *)(**(code **)*param_2)(param_2);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  local_28 = *(undefined4 *)(puVar1 + 2);
  uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_20 = *(undefined4 *)(puVar1 + 3);
  uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x1c);
  local_18 = *(undefined4 *)(puVar1 + 4);
  uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_10 = *(undefined4 *)(puVar1 + 5);
  uStack_c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  lVar2 = FUN_145363f80(param_1 + 0x28,&local_38);
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = param_1 + 0x58;
  }
  FUN_1453565b0(lVar3,param_2);
  return;
}



// FUNCTION 1453649f0 FUN_1453649f0 body=162 status=ok
// SIG undefined FUN_1453649f0(void)

void FUN_1453649f0(longlong param_1,int *param_2)

{
  byte bVar1;
  undefined8 local_58;
  undefined8 *local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined1 local_20;
  undefined8 local_18;
  
  local_48 = *(int *)(param_1 + 0x70);
  local_44 = *param_2;
  *(int *)(param_1 + 0x70) = local_44;
  if ((local_44 != local_48) && (*(int *)(param_1 + 0x60) != 0)) {
    local_58 = *(undefined8 *)(param_1 + 8);
    *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + '\x01';
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0xff;
    local_20 = 0xff;
    local_18 = 0;
    bVar1 = *(byte *)(param_1 + 0x68) + 4;
    local_50 = &local_40;
    *(byte *)(param_1 + 0x68) = (bVar1 ^ *(byte *)(param_1 + 0x68)) & 3 ^ bVar1;
    FUN_14535f210(param_1 + 0x58,&local_58);
    *(byte *)(param_1 + 0x68) =
         ((*(byte *)(param_1 + 0x68) >> 2) - 1) * '\x04' | *(byte *)(param_1 + 0x68) & 3;
  }
  return;
}



// FUNCTION 145364aa0 FUN_145364aa0 body=66 status=ok
// SIG undefined FUN_145364aa0(void)

longlong FUN_145364aa0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_145363f80(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x20);
    *param_3 = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  *param_3 = uVar1;
  return (ulonglong)(uint3)((uint)uVar1 >> 8) << 8;
}



// FUNCTION 145364af0 FUN_145364af0 body=557 status=ok
// SIG undefined FUN_145364af0(void)

undefined8
FUN_145364af0(longlong param_1,longlong *param_2,undefined4 *param_3,char *param_4,longlong *param_5
             ,undefined4 param_6,char param_7)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong local_res8;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_res8 = 0;
  lVar5 = FUN_145363bc0(param_1 + 0x28,param_2,param_4,&local_res8);
  uVar3 = local_res8;
  if ((lVar5 != 0) && (*param_4 == '\0')) {
    lVar7 = local_res8 + 8;
    *(undefined4 *)(lVar5 + 0x20) = 0;
    if (local_res8 == 0) {
      lVar7 = param_1 + 0x58;
    }
    local_68 = *param_2;
    uStack_60 = (longlong *)param_2[1];
    local_58 = (longlong *)param_2[2];
    uStack_50 = (undefined4)param_2[3];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_48 = (undefined4)param_2[4];
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_40 = (undefined4)param_2[5];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
    FUN_1453568f0(lVar7,lVar5 + 8,&local_68);
  }
  if (lVar5 == 0) {
LAB_145364cf9:
    uVar6 = 0x34;
  }
  else {
    if (*param_4 == '\0') {
      puVar8 = (undefined4 *)(uVar3 + 0x20);
      if (uVar3 == 0) {
        puVar8 = (undefined4 *)(param_1 + 0x70);
      }
    }
    else {
      puVar8 = (undefined4 *)(lVar5 + 0x20);
    }
    local_78 = *puVar8;
    uStack_50 = param_6;
    uStack_4c = CONCAT31(uStack_4c._1_3_,*param_4);
    local_res8 = local_res8 & 0xffffffffffffff00;
    local_58 = param_5;
    local_74 = local_78;
    local_68 = param_1;
    uStack_60 = param_2;
    FUN_145363570(lVar5,&local_78,param_3,&local_68,&param_7,&local_res8);
    if ((char)local_res8 != '\0') {
      uVar2 = *param_3;
      *(char *)(param_1 + 0x89) = *(char *)(param_1 + 0x89) + '\x01';
      bVar1 = *(byte *)(param_1 + 0x88) + 4;
      uStack_60 = (longlong *)CONCAT44(uVar2,local_74);
      *(byte *)(param_1 + 0x88) = (bVar1 ^ *(byte *)(param_1 + 0x88)) & 3 ^ bVar1;
      local_68 = param_1;
      local_58 = param_2;
      FUN_145367900(param_1 + 0x78,&local_68);
      *(byte *)(param_1 + 0x88) =
           ((*(byte *)(param_1 + 0x88) >> 2) - 1) * '\x04' | *(byte *)(param_1 + 0x88) & 3;
    }
    if (param_7 != '\0') {
      cVar4 = FUN_145365000(param_1,param_2,lVar5,uVar3,param_5);
      if (cVar4 != '\0') {
        FUN_1453652c0(param_1,param_2);
      }
    }
    if (*param_4 == '\0') {
      cVar4 = FUN_145362e30(*(undefined8 *)(param_1 + 8),param_2);
      if (cVar4 == '\0') {
        local_res8 = 0;
        lVar5 = FUN_145363d70(param_1 + 0x28,param_2,&local_res8);
        if (lVar5 != 0) {
          cVar4 = FUN_145365000(param_1,param_2,lVar5,local_res8,0);
          if (cVar4 != '\0') {
            cVar4 = FUN_145365320(param_1 + 0x40,param_1 + 0x28,param_2);
            if (((cVar4 != '\0') && (*(char *)(param_1 + 0x44) == '\0')) &&
               (*(int *)(param_1 + 0x50) == 0)) {
              FUN_145363b50(param_1 + 0x28);
            }
          }
        }
        goto LAB_145364cf9;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 145364d20 FUN_145364d20 body=164 status=ok
// SIG undefined FUN_145364d20(void)

undefined8 FUN_145364d20(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_18 [2];
  
  if (param_4 != '\0') {
    local_18[0] = 0;
    lVar2 = FUN_145363d70(param_1 + 0x28,param_2,local_18);
    if (lVar2 == 0) {
      return 2;
    }
    cVar1 = FUN_145365000(param_1,param_2,lVar2,local_18[0],param_3);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  cVar1 = FUN_145365320(param_1 + 0x40,param_1 + 0x28,param_2);
  if (cVar1 == '\0') {
    return 2;
  }
  if ((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x50) == 0)) {
    FUN_145363b50(param_1 + 0x28);
  }
  return 1;
}



// FUNCTION 145364dd0 FUN_145364dd0 body=106 status=ok
// SIG undefined FUN_145364dd0(void)

void FUN_145364dd0(longlong param_1,undefined8 param_2)

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
  FUN_145367c50(param_1 + 0x40,param_1 + 0x28,param_2,&local_38,&local_38);
  if ((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x50) == 0)) {
    FUN_145363b50(param_1 + 0x28);
  }
  return;
}



// FUNCTION 145364e40 FUN_145364e40 body=435 status=ok
// SIG undefined FUN_145364e40(void)

void FUN_145364e40(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong local_res8;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20;
  undefined8 local_a8;
  undefined8 *local_a0;
  int local_98;
  int local_94;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong *local_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (param_2 != lVar1) {
    *(longlong *)(param_1 + 0x20) = param_2;
    if (lVar1 == 0) {
      local_res8 = local_res8 & 0xffffffff00000000;
      FUN_14507fde0(g_pGameSyncMgr,*(undefined8 *)(param_2 + 0x28),&local_res8);
      local_res20 = (undefined4)local_res8;
      local_res18[0] = 0;
      if (*(longlong *)(param_2 + 8) != 0) {
        local_res10[0] = *(undefined4 *)(param_2 + 0x18);
        FUN_1450737c0(param_2 + 8,(undefined4)local_res8,local_res10,local_res18);
        *(undefined4 *)(param_2 + 0x18) = local_res10[0];
      }
      local_98 = *(int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = local_res18[0];
      if ((local_res18[0] != local_98) && (*(int *)(param_1 + 0x60) != 0)) {
        local_a8 = *(undefined8 *)(param_1 + 8);
        *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + '\x01';
        bVar2 = *(byte *)(param_1 + 0x68) + 4;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0xff;
        local_a0 = &local_58;
        local_38 = 0xff;
        *(byte *)(param_1 + 0x68) = (bVar2 ^ *(byte *)(param_1 + 0x68)) & 3 ^ bVar2;
        local_30 = 0;
        local_94 = local_res18[0];
        FUN_14535f210(param_1 + 0x58,&local_a8);
        *(byte *)(param_1 + 0x68) =
             ((*(byte *)(param_1 + 0x68) >> 2) - 1) * '\x04' | *(byte *)(param_1 + 0x68) & 3;
      }
    }
    local_78 = param_1 + 0x28;
    local_70 = &local_res8;
    local_a8 = 0;
    local_a0 = (undefined8 *)((ulonglong)local_a0 & 0xffffffff00000000);
    local_98 = 0;
    local_90 = 0xff;
    local_88 = 0xff;
    local_80 = 0;
    local_res8 = param_1;
    FUN_145367e70(param_1 + 0x40,&local_78,&local_a8,&local_a8);
    if (*(int *)(param_1 + 0x60) != 0) {
      *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + '\x01';
      bVar2 = *(byte *)(param_1 + 0x68) + 4;
      *(byte *)(param_1 + 0x68) = (bVar2 ^ *(byte *)(param_1 + 0x68)) & 3 ^ bVar2;
      local_68 = lVar1;
      local_60 = param_1;
      FUN_145367b00(param_1 + 0x58,&local_68);
      *(byte *)(param_1 + 0x68) =
           ((*(byte *)(param_1 + 0x68) >> 2) - 1) * '\x04' | *(byte *)(param_1 + 0x68) & 3;
    }
    if (lVar1 != 0) {
      FUN_1453639b0(lVar1);
    }
  }
  return;
}



// FUNCTION 145365000 FUN_145365000 body=703 status=ok
// SIG undefined FUN_145365000(void)

char FUN_145365000(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  char local_res18 [8];
  bool local_res20;
  int local_58;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  cVar3 = '\x01';
  local_res18[0] = '\x01';
  if (param_3 == (longlong *)0x0) {
    plVar7 = (longlong *)(param_4 + 0x20);
    if (param_4 == 0) {
      plVar7 = (longlong *)(param_1 + 0x70);
    }
  }
  else {
    plVar7 = param_3 + 4;
  }
  iVar2 = (int)*plVar7;
  plVar7 = (longlong *)(param_4 + 0x20);
  if (param_4 == 0) {
    plVar7 = (longlong *)(param_1 + 0x70);
  }
  iVar8 = (int)*plVar7;
  local_58 = iVar8;
  local_54 = iVar2;
  if (iVar8 == iVar2) goto LAB_145365294;
  if (param_5 == (longlong *)0x0) {
    local_res20 = *(int *)(param_1 + 0x10) != 0;
    if (local_res20) goto LAB_1453650b6;
    if ((*param_3 != 0) && (*(char *)(*param_3 + 0x29) == '\0')) {
      FUN_1453631a0();
    }
LAB_1453651a3:
    *(int *)(param_3 + 4) = iVar8;
    if (iVar8 != iVar2) {
      local_50 = *(longlong *)(param_1 + 8);
      *(char *)((longlong)param_3 + 0x19) = *(char *)((longlong)param_3 + 0x19) + '\x01';
      bVar1 = *(byte *)(param_3 + 3) + 4;
      local_40 = (undefined8 *)CONCAT44(iVar8,iVar2);
      *(byte *)(param_3 + 3) = (*(byte *)(param_3 + 3) ^ bVar1) & 3 ^ bVar1;
      local_48 = param_2;
      FUN_14535f210(param_3 + 1,&local_50);
      *(byte *)(param_3 + 3) =
           ((*(byte *)(param_3 + 3) >> 2) - 1) * '\x04' | *(byte *)(param_3 + 3) & 3;
    }
    iVar8 = (int)param_3[4];
    bVar1 = *(byte *)(param_3 + 3);
    if (cVar3 == '\0') {
      if ((bVar1 & 2) != 0) {
        cVar3 = (bVar1 & 0xfc) == 0;
      }
    }
    else if ((bVar1 & 0xfc) != 0) {
      *(byte *)(param_3 + 3) = bVar1 | 2;
      cVar3 = '\0';
    }
  }
  else {
    local_res20 = (char)param_5[1] == '\0';
LAB_1453650b6:
    puVar5 = (undefined8 *)*param_3;
    puVar9 = (undefined8 *)0x0;
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = AK::MemoryMgr::Malloc(0x10,0x30);
      puVar5 = puVar9;
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[3] = 0;
        *(undefined4 *)(puVar4 + 4) = 0;
        *puVar4 = &PTR_FUN_149d425e0;
        puVar4[2] = 0;
        *(undefined2 *)(puVar4 + 5) = 0;
        puVar4[1] = param_1;
        puVar4[3] = *param_2;
        *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_2 + 1);
        puVar5 = puVar4;
      }
      *param_3 = (longlong)puVar5;
      if (puVar5 == (undefined8 *)0x0) goto LAB_1453651a3;
    }
    if (*(char *)((longlong)puVar5 + 0x29) != '\0') goto LAB_1453651a3;
    puVar5 = (undefined8 *)(param_1 + 0x10);
    if (local_res20 == false) {
      puVar5 = puVar9;
    }
    if (param_5 != (longlong *)0x0) {
      puVar9 = (undefined8 *)*param_5;
    }
    cVar3 = FUN_1453631e0(local_58,local_54,&local_58,puVar9,puVar5,1,local_res18);
    iVar8 = local_58;
    if (cVar3 == '\0') {
      FUN_1453631a0(*param_3);
      cVar3 = local_res18[0];
      goto LAB_1453651a3;
    }
    *(int *)(param_3 + 4) = iVar2;
    cVar3 = local_res18[0];
    iVar8 = iVar2;
  }
  *(char *)(param_1 + 0x89) = *(char *)(param_1 + 0x89) + '\x01';
  bVar1 = *(byte *)(param_1 + 0x88) + 4;
  local_48 = (undefined8 *)CONCAT44(iVar8,iVar2);
  *(byte *)(param_1 + 0x88) = (*(byte *)(param_1 + 0x88) ^ bVar1) & 3 ^ bVar1;
  local_50 = param_1;
  local_40 = param_2;
  FUN_1453679c0(param_1 + 0x78,&local_50);
  *(byte *)(param_1 + 0x88) =
       ((*(byte *)(param_1 + 0x88) >> 2) - 1) * '\x04' | *(byte *)(param_1 + 0x88) & 3;
  if (cVar3 == '\0') {
    return '\0';
  }
LAB_145365294:
  lVar6 = param_4 + 8;
  if (param_4 == 0) {
    lVar6 = param_1 + 0x58;
  }
  FUN_145356630(param_3 + 1,lVar6);
  return cVar3;
}



// FUNCTION 1453652c0 FUN_1453652c0 body=86 status=ok
// SIG undefined FUN_1453652c0(void)

undefined8 FUN_1453652c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_145365320(param_1 + 0x40,param_1 + 0x28,param_2);
  if (cVar1 != '\0') {
    if ((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x50) == 0)) {
      FUN_145363b50(param_1 + 0x28);
    }
    return 1;
  }
  return 2;
}



// FUNCTION 145365320 FUN_145365320 body=415 status=ok
// SIG undefined FUN_145365320(void)

ushort * FUN_145365320(longlong param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if ((((((*param_3 != 0) || ((int)param_3[1] != 0)) || ((int)param_3[2] != 0)) ||
       (((char)param_3[3] != -1 || ((char)param_3[4] != -1)))) || (param_3[5] != 0)) &&
     (lVar3 = FUN_145364420(param_1 + 8), lVar3 != 0)) {
    if (((((int)param_3[1] == 0) && ((int)param_3[2] == 0)) &&
        (((char)param_3[3] == -1 && (((char)param_3[4] == -1 && (param_3[5] == 0)))))) ||
       (lVar4 = FUN_1453655d0(lVar3 + 0x10,(int)param_3[1]), lVar4 == 0)) {
      puVar6 = (ushort *)(lVar3 + 8);
      if (*(char *)(lVar3 + 10) == '\0') {
        puVar6 = (ushort *)0x0;
      }
      if (puVar6 == (ushort *)0x0) {
        bVar2 = 0;
      }
      else {
        uVar1 = *puVar6;
        lVar4 = *param_2 + (ulonglong)uVar1 * 0x28;
        FUN_1453634f0(lVar4);
        *(short *)(lVar4 + 0x20) = (short)param_2[2];
        *(ushort *)(param_2 + 2) = uVar1;
        bVar2 = *(byte *)(lVar3 + 10);
        *(undefined1 *)(lVar3 + 10) = 0;
      }
    }
    else {
      bVar2 = FUN_1453684b0(lVar4,param_2,param_3 + 2);
      if ((*(char *)(lVar4 + 6) == '\0') && (*(int *)(lVar4 + 0x10) == 0)) {
        FUN_145366330(lVar4);
        FUN_1453657d0(lVar3 + 0x10,(int)param_3[1]);
      }
    }
    if ((*(char *)(lVar3 + 10) == '\0') && (*(int *)(lVar3 + 0x18) == 0)) {
      FUN_145365960(lVar3);
      FUN_1453645e0(param_1 + 8,*param_3);
    }
    return (ushort *)(ulonglong)bVar2;
  }
  puVar5 = (ushort *)0x0;
  puVar6 = (ushort *)(param_1 + 2);
  if (*(char *)(param_1 + 4) == '\0') {
    puVar6 = puVar5;
  }
  if (puVar6 != (ushort *)0x0) {
    uVar1 = *puVar6;
    lVar3 = *param_2 + (ulonglong)uVar1 * 0x28;
    FUN_1453634f0(lVar3);
    *(short *)(lVar3 + 0x20) = (short)param_2[2];
    *(ushort *)(param_2 + 2) = uVar1;
    puVar5 = (ushort *)(ulonglong)*(byte *)(param_1 + 4);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return puVar5;
}



// FUNCTION 1453654c0 FUN_1453654c0 body=259 status=ok
// SIG undefined FUN_1453654c0(void)

undefined8 FUN_1453654c0(longlong *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  __uint64 _Var5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var5 = (ulonglong)(iVar3 + uVar2) * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar6 = (longlong)pvVar4 + 0x14;
          do {
            puVar1 = (undefined4 *)(lVar6 + -0x14);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0;
              *(undefined1 *)(lVar6 + -0xe) = 0;
              *(undefined8 *)(lVar6 + -0xc) = 0;
              *(undefined8 *)(lVar6 + -4) = 0;
            }
            FUN_1453662b0(puVar1,(-0x14 - (longlong)pvVar4) + lVar6 + *param_1);
            lVar6 = lVar6 + 0x18;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1453655ac;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_1453655ac:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1453655d0 FUN_1453655d0 body=161 status=ok
// SIG undefined FUN_1453655d0(void)

/* WARNING: Removing unreachable block (ram,0x000145365649) */

longlong FUN_1453655d0(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = (uVar4 >> 1) + iVar5;
      uVar1 = *(uint *)(*param_1 + (longlong)iVar3 * 0x18);
      if (uVar1 == param_2) {
        return *param_1 + (longlong)iVar3 * 0x18;
      }
      uVar2 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar4;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar4 = uVar2 >> 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 145365680 FUN_145365680 body=328 status=ok
// SIG undefined FUN_145365680(void)

undefined4 * FUN_145365680(longlong *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined4 *)FUN_145365840();
  if (*param_3 != '\0') {
    return puVar2;
  }
  uVar4 = *(uint *)(param_1 + 1);
  if (puVar2 == (undefined4 *)0x0) {
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_1453654c0(param_1), cVar1 != '\0')) &&
       (uVar4 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar2 = (undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar2 = 0;
      *(undefined1 *)((longlong)puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      goto LAB_1453657a1;
    }
  }
  else {
    lVar3 = ((longlong)puVar2 - *param_1) / 6 + ((longlong)puVar2 - *param_1 >> 0x3f);
    uVar5 = (lVar3 >> 2) - (lVar3 >> 0x3f);
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_1453654c0(param_1), cVar1 != '\0')) &&
       (uVar4 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar4 = (uint)uVar5;
      lVar3 = (uVar5 & 0xffffffff) * 0x18;
      puVar2 = (undefined4 *)(*param_1 + lVar3);
      if (uVar4 < *(uint *)(param_1 + 1)) {
        memmove(puVar2 + 6,puVar2,(ulonglong)((*(uint *)(param_1 + 1) - uVar4) * 0x18));
      }
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        *(undefined1 *)((longlong)puVar2 + 6) = 0;
        *(undefined8 *)(puVar2 + 2) = 0;
        *(undefined8 *)(puVar2 + 4) = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      puVar2 = (undefined4 *)(*param_1 + lVar3);
LAB_1453657a1:
      if (puVar2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar2 = param_2;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



// FUNCTION 1453657d0 FUN_1453657d0 body=110 status=ok
// SIG undefined FUN_1453657d0(void)

undefined8 FUN_1453657d0(longlong *param_1)

{
  void *pvVar1;
  void *_Dst;
  
  _Dst = (void *)FUN_1453655d0();
  if (_Dst != (void *)0x0) {
    pvVar1 = (void *)(*param_1 + (ulonglong)((int)param_1[1] - 1) * 0x18);
    if (_Dst < pvVar1) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x18),
              (ulonglong)(uint)((int)(((longlong)pvVar1 - (longlong)_Dst) / 0x18) * 0x18));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return 1;
  }
  return 0;
}



// FUNCTION 145365840 FUN_145365840 body=141 status=ok
// SIG undefined FUN_145365840(void)

longlong FUN_145365840(longlong *param_1,uint param_2,undefined1 *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      lVar1 = (longlong)iVar3 * 0x18;
      uVar2 = *(uint *)(lVar1 + *param_1);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return *param_1 + lVar1;
      }
      uVar4 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar2) {
        uVar4 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar4 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar6 * 0x18;
}



// FUNCTION 1453658d0 FUN_1453658d0 body=130 status=ok
// SIG undefined FUN_1453658d0(void)

undefined8 * FUN_1453658d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  if ((void *)param_1[2] != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[2]);
    param_1[2] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[2] = 0;
  param_2[3] = 0;
  return param_1;
}



// FUNCTION 145365960 FUN_145365960 body=551 status=ok
// SIG undefined FUN_145365960(void)

void FUN_145365960(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  lVar7 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar12 = lVar7 * 0x18;
    do {
      lVar5 = *(longlong *)(param_1 + 0x10) + lVar12;
      iVar1 = *(int *)(lVar5 + 0x10) + -1;
      lVar2 = (longlong)iVar1;
      if (-1 < iVar1) {
        lVar8 = lVar2 * 0x18;
        do {
          lVar11 = *(longlong *)(lVar5 + 8) + lVar8;
          iVar1 = *(int *)(lVar11 + 0x10) + -1;
          lVar13 = (longlong)iVar1;
          if (-1 < iVar1) {
            lVar10 = lVar13 * 0x18;
            do {
              lVar4 = *(longlong *)(lVar11 + 8) + lVar10;
              iVar1 = *(int *)(lVar4 + 0x10) + -1;
              lVar3 = (longlong)iVar1;
              if (-1 < iVar1) {
                lVar6 = lVar3 * 0x18;
                do {
                  lVar9 = *(longlong *)(lVar4 + 8) + lVar6;
                  *(undefined1 *)(lVar9 + 4) = 0;
                  if (*(void **)(lVar9 + 8) != (void *)0x0) {
                    *(undefined4 *)(lVar9 + 0x10) = 0;
                    AK::MemoryMgr::Free(0,*(void **)(lVar9 + 8));
                    *(undefined8 *)(lVar9 + 8) = 0;
                    *(undefined4 *)(lVar9 + 0x14) = 0;
                  }
                  lVar6 = lVar6 + -0x18;
                  lVar3 = lVar3 + -1;
                } while (-1 < lVar3);
              }
              if (*(void **)(lVar4 + 8) != (void *)0x0) {
                *(undefined4 *)(lVar4 + 0x10) = 0;
                AK::MemoryMgr::Free(0,*(void **)(lVar4 + 8));
                *(undefined8 *)(lVar4 + 8) = 0;
                *(undefined4 *)(lVar4 + 0x14) = 0;
              }
              lVar10 = lVar10 + -0x18;
              *(undefined1 *)(lVar4 + 4) = 0;
              lVar13 = lVar13 + -1;
            } while (-1 < lVar13);
          }
          if (*(void **)(lVar11 + 8) != (void *)0x0) {
            *(undefined4 *)(lVar11 + 0x10) = 0;
            AK::MemoryMgr::Free(0,*(void **)(lVar11 + 8));
            *(undefined8 *)(lVar11 + 8) = 0;
            *(undefined4 *)(lVar11 + 0x14) = 0;
          }
          lVar2 = lVar2 + -1;
          *(undefined1 *)(lVar11 + 6) = 0;
          lVar8 = lVar8 + -0x18;
        } while (-1 < lVar2);
      }
      if (*(void **)(lVar5 + 8) != (void *)0x0) {
        *(undefined4 *)(lVar5 + 0x10) = 0;
        AK::MemoryMgr::Free(0,*(void **)(lVar5 + 8));
        *(undefined8 *)(lVar5 + 8) = 0;
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      lVar7 = lVar7 + -1;
      *(undefined1 *)(lVar5 + 6) = 0;
      lVar12 = lVar12 + -0x18;
    } while (-1 < lVar7);
  }
  if (*(void **)(param_1 + 0x10) == (void *)0x0) {
    *(undefined1 *)(param_1 + 10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}



// FUNCTION 145365b90 FUN_145365b90 body=378 status=ok
// SIG undefined FUN_145365b90(void)

longlong FUN_145365b90(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined7 uStack_37;
  longlong lStack_30;
  
  iVar1 = (int)*param_2;
  if ((((iVar1 == 0) && ((int)param_2[1] == 0)) && ((char)param_2[2] == -1)) &&
     (((char)param_2[3] == -1 && (param_2[4] == 0)))) goto LAB_145365caa;
  lVar2 = FUN_1453655d0(param_1 + 0x10,iVar1);
  if (lVar2 == 0) {
    if (iVar1 == 0) goto LAB_145365caa;
    *(int *)param_2 = 0;
    lVar2 = FUN_1453655d0(param_1 + 0x10,0);
    if (lVar2 == 0) goto LAB_145365caa;
  }
  if ((((int)param_2[1] != 0) || ((char)param_2[2] != -1)) ||
     (((char)param_2[3] != -1 || (param_2[4] != 0)))) {
    lVar3 = FUN_145365fb0(lVar2 + 8,(int)param_2[1]);
    if (lVar3 == 0) {
      if ((int)param_2[1] != 0) {
        *(int *)(param_2 + 1) = 0;
        lVar3 = FUN_145365fb0(lVar2 + 8,0);
        if (lVar3 != 0) goto LAB_145365c5a;
      }
    }
    else {
LAB_145365c5a:
      lVar3 = FUN_145366c20(lVar3,param_2 + 2);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  uStack_40 = CONCAT31(uStack_40._1_3_,0xff);
  lStack_30 = 0;
  param_2[1] = (ulonglong)uStack_44 << 0x20;
  param_2[2] = CONCAT44(uStack_3c,uStack_40);
  param_2[3] = CONCAT71(uStack_37,0xff);
  param_2[4] = 0;
  lVar3 = lVar2 + 4;
  if (*(char *)(lVar2 + 6) == '\0') {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    return lVar3;
  }
LAB_145365caa:
  lVar2 = param_1 + 8;
  lStack_30 = CONCAT71(lStack_30._1_7_,0xff);
  *param_2 = (ulonglong)uStack_44 << 0x20;
  param_2[1] = (ulonglong)uStack_3c << 0x20;
  param_2[2] = CONCAT71(uStack_37,0xff);
  param_2[3] = lStack_30;
  param_2[4] = 0;
  if (*(char *)(param_1 + 10) == '\0') {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 145365d10 FUN_145365d10 body=396 status=ok
// SIG undefined FUN_145365d10(void)

undefined1 FUN_145365d10(longlong param_1,int *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((*param_2 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
LAB_145365e87:
    uVar1 = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)(param_1 + 10) = 0;
    return uVar1;
  }
  lVar2 = FUN_1453655d0(param_1 + 0x10);
  if (lVar2 == 0) goto LAB_145365e87;
  if (((param_2[2] != 0) || ((char)param_2[4] != -1)) ||
     (((char)param_2[6] != -1 || (*(longlong *)(param_2 + 8) != 0)))) {
    lVar3 = FUN_145365fb0(lVar2 + 8);
    if (lVar3 != 0) {
      if ((((char)param_2[4] == -1) && ((char)param_2[6] == -1)) &&
         (*(longlong *)(param_2 + 8) == 0)) {
LAB_145365e0f:
        uVar1 = *(undefined1 *)(lVar3 + 6);
        *(undefined1 *)(lVar3 + 6) = 0;
      }
      else {
        lVar4 = FUN_145366760(lVar3 + 8);
        if (lVar4 == 0) goto LAB_145365e0f;
        uVar1 = FUN_145367300(lVar4,param_2 + 6);
        if ((*(char *)(lVar4 + 4) == '\0') && (*(int *)(lVar4 + 0x10) == 0)) {
          FUN_145367250(lVar4);
          FUN_145366970(lVar3 + 8,(char)param_2[4]);
        }
      }
      if ((*(char *)(lVar3 + 6) == '\0') && (*(int *)(lVar3 + 0x10) == 0)) {
        FUN_145366af0(lVar3);
        FUN_1453661b0(lVar2 + 8,param_2[2]);
      }
      goto LAB_145365e4d;
    }
  }
  uVar1 = *(undefined1 *)(lVar2 + 6);
  *(undefined1 *)(lVar2 + 6) = 0;
LAB_145365e4d:
  if ((*(char *)(lVar2 + 6) == '\0') && (*(int *)(lVar2 + 0x10) == 0)) {
    FUN_145366330(lVar2);
    FUN_1453657d0(param_1 + 0x10,*param_2);
  }
  return uVar1;
}



// FUNCTION 145365ea0 FUN_145365ea0 body=259 status=ok
// SIG undefined FUN_145365ea0(void)

undefined8 FUN_145365ea0(longlong *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  __uint64 _Var5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var5 = (ulonglong)(iVar3 + uVar2) * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar6 = (longlong)pvVar4 + 0x14;
          do {
            puVar1 = (undefined4 *)(lVar6 + -0x14);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0;
              *(undefined1 *)(lVar6 + -0xe) = 0;
              *(undefined8 *)(lVar6 + -0xc) = 0;
              *(undefined8 *)(lVar6 + -4) = 0;
            }
            FUN_145366a70(puVar1,(-0x14 - (longlong)pvVar4) + lVar6 + *param_1);
            lVar6 = lVar6 + 0x18;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145365f8c;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_145365f8c:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145365fb0 FUN_145365fb0 body=161 status=ok
// SIG undefined FUN_145365fb0(void)

/* WARNING: Removing unreachable block (ram,0x000145366029) */

longlong FUN_145365fb0(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = (uVar4 >> 1) + iVar5;
      uVar1 = *(uint *)(*param_1 + (longlong)iVar3 * 0x18);
      if (uVar1 == param_2) {
        return *param_1 + (longlong)iVar3 * 0x18;
      }
      uVar2 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar4;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar4 = uVar2 >> 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 145366060 FUN_145366060 body=328 status=ok
// SIG undefined FUN_145366060(void)

undefined4 * FUN_145366060(longlong *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined4 *)FUN_145366220();
  if (*param_3 != '\0') {
    return puVar2;
  }
  uVar4 = *(uint *)(param_1 + 1);
  if (puVar2 == (undefined4 *)0x0) {
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_145365ea0(param_1), cVar1 != '\0')) &&
       (uVar4 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar2 = (undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar2 = 0;
      *(undefined1 *)((longlong)puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      goto LAB_145366181;
    }
  }
  else {
    lVar3 = ((longlong)puVar2 - *param_1) / 6 + ((longlong)puVar2 - *param_1 >> 0x3f);
    uVar5 = (lVar3 >> 2) - (lVar3 >> 0x3f);
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_145365ea0(param_1), cVar1 != '\0')) &&
       (uVar4 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar4 = (uint)uVar5;
      lVar3 = (uVar5 & 0xffffffff) * 0x18;
      puVar2 = (undefined4 *)(*param_1 + lVar3);
      if (uVar4 < *(uint *)(param_1 + 1)) {
        memmove(puVar2 + 6,puVar2,(ulonglong)((*(uint *)(param_1 + 1) - uVar4) * 0x18));
      }
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        *(undefined1 *)((longlong)puVar2 + 6) = 0;
        *(undefined8 *)(puVar2 + 2) = 0;
        *(undefined8 *)(puVar2 + 4) = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      puVar2 = (undefined4 *)(*param_1 + lVar3);
LAB_145366181:
      if (puVar2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar2 = param_2;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



// FUNCTION 1453661b0 FUN_1453661b0 body=110 status=ok
// SIG undefined FUN_1453661b0(void)

undefined8 FUN_1453661b0(longlong *param_1)

{
  void *pvVar1;
  void *_Dst;
  
  _Dst = (void *)FUN_145365fb0();
  if (_Dst != (void *)0x0) {
    pvVar1 = (void *)(*param_1 + (ulonglong)((int)param_1[1] - 1) * 0x18);
    if (_Dst < pvVar1) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x18),
              (ulonglong)(uint)((int)(((longlong)pvVar1 - (longlong)_Dst) / 0x18) * 0x18));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return 1;
  }
  return 0;
}



// FUNCTION 145366220 FUN_145366220 body=141 status=ok
// SIG undefined FUN_145366220(void)

longlong FUN_145366220(longlong *param_1,uint param_2,undefined1 *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      lVar1 = (longlong)iVar3 * 0x18;
      uVar2 = *(uint *)(lVar1 + *param_1);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return *param_1 + lVar1;
      }
      uVar4 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar2) {
        uVar4 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar4 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar6 * 0x18;
}



// FUNCTION 1453662b0 FUN_1453662b0 body=128 status=ok
// SIG undefined FUN_1453662b0(void)

undefined4 * FUN_1453662b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    param_1[4] = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[5] = 0;
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  return param_1;
}



// FUNCTION 145366330 FUN_145366330 body=393 status=ok
// SIG undefined FUN_145366330(void)

void FUN_145366330(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar6 = lVar2 * 0x18;
    do {
      lVar9 = *(longlong *)(param_1 + 8) + lVar6;
      iVar1 = *(int *)(lVar9 + 0x10) + -1;
      lVar10 = (longlong)iVar1;
      if (-1 < iVar1) {
        lVar8 = lVar10 * 0x18;
        do {
          lVar4 = *(longlong *)(lVar9 + 8) + lVar8;
          iVar1 = *(int *)(lVar4 + 0x10) + -1;
          lVar3 = (longlong)iVar1;
          if (-1 < iVar1) {
            lVar5 = lVar3 * 0x18;
            do {
              lVar7 = *(longlong *)(lVar4 + 8) + lVar5;
              *(undefined1 *)(lVar7 + 4) = 0;
              if (*(void **)(lVar7 + 8) != (void *)0x0) {
                *(undefined4 *)(lVar7 + 0x10) = 0;
                AK::MemoryMgr::Free(0,*(void **)(lVar7 + 8));
                *(undefined8 *)(lVar7 + 8) = 0;
                *(undefined4 *)(lVar7 + 0x14) = 0;
              }
              lVar5 = lVar5 + -0x18;
              lVar3 = lVar3 + -1;
            } while (-1 < lVar3);
          }
          if (*(void **)(lVar4 + 8) != (void *)0x0) {
            *(undefined4 *)(lVar4 + 0x10) = 0;
            AK::MemoryMgr::Free(0,*(void **)(lVar4 + 8));
            *(undefined8 *)(lVar4 + 8) = 0;
            *(undefined4 *)(lVar4 + 0x14) = 0;
          }
          lVar8 = lVar8 + -0x18;
          *(undefined1 *)(lVar4 + 4) = 0;
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
      }
      if (*(void **)(lVar9 + 8) != (void *)0x0) {
        *(undefined4 *)(lVar9 + 0x10) = 0;
        AK::MemoryMgr::Free(0,*(void **)(lVar9 + 8));
        *(undefined8 *)(lVar9 + 8) = 0;
        *(undefined4 *)(lVar9 + 0x14) = 0;
      }
      lVar2 = lVar2 + -1;
      *(undefined1 *)(lVar9 + 6) = 0;
      lVar6 = lVar6 + -0x18;
    } while (-1 < lVar2);
  }
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 1453664c0 FUN_1453664c0 body=397 status=ok
// SIG undefined FUN_1453664c0(void)

undefined2 * FUN_1453664c0(longlong param_1,int *param_2,undefined1 *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  if ((((*param_2 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(longlong *)(param_2 + 6) == 0)) {
    if (*(char *)(param_1 + 6) == '\0') {
      *(undefined2 *)(param_1 + 4) = 0;
    }
    *param_3 = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)(param_1 + 6) = 1;
    return (undefined2 *)(param_1 + 4);
  }
  if ((param_4 != (longlong *)0x0) && (*(char *)(param_1 + 6) != '\0')) {
    *param_4 = param_1 + 4;
  }
  lVar1 = FUN_145366060(param_1 + 8,*param_2);
  if (lVar1 == 0) {
    return (undefined2 *)0x0;
  }
  if ((((char)param_2[2] == -1) && ((char)param_2[4] == -1)) && (*(longlong *)(param_2 + 6) == 0)) {
    if (*(char *)(lVar1 + 6) == '\0') {
      *(undefined2 *)(lVar1 + 4) = 0;
    }
    *param_3 = *(undefined1 *)(lVar1 + 6);
    *(undefined1 *)(lVar1 + 6) = 1;
    return (undefined2 *)(lVar1 + 4);
  }
  if ((param_4 != (longlong *)0x0) && (*(char *)(lVar1 + 6) != '\0')) {
    *param_4 = lVar1 + 4;
  }
  lVar1 = FUN_145366810(lVar1 + 8,(char)param_2[2],param_3);
  if (lVar1 == 0) {
    return (undefined2 *)0x0;
  }
  if (((char)param_2[4] == -1) && (*(longlong *)(param_2 + 6) == 0)) {
    puVar2 = (undefined2 *)(lVar1 + 2);
    if (*(char *)(lVar1 + 4) == '\0') {
      *puVar2 = 0;
    }
    *param_3 = *(undefined1 *)(lVar1 + 4);
    *(undefined1 *)(lVar1 + 4) = 1;
  }
  else {
    if ((param_4 != (longlong *)0x0) && (*(char *)(lVar1 + 4) != '\0')) {
      *param_4 = lVar1 + 2;
    }
    lVar1 = FUN_145366f60(lVar1 + 8,(char)param_2[4],param_3);
    if (lVar1 == 0) {
      puVar2 = (undefined2 *)0x0;
    }
    else {
      puVar2 = (undefined2 *)FUN_145367790(lVar1,param_2 + 6,param_3,param_4);
    }
  }
  return puVar2;
}



// FUNCTION 145366650 FUN_145366650 body=259 status=ok
// SIG undefined FUN_145366650(void)

undefined8 FUN_145366650(longlong *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  __uint64 _Var5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var5 = (ulonglong)(iVar3 + uVar2) * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar6 = (longlong)pvVar4 + 0x14;
          do {
            puVar1 = (undefined1 *)(lVar6 + -0x14);
            if (puVar1 != (undefined1 *)0x0) {
              *puVar1 = 0;
              *(undefined1 *)(lVar6 + -0x10) = 0;
              *(undefined8 *)(lVar6 + -0xc) = 0;
              *(undefined8 *)(lVar6 + -4) = 0;
            }
            FUN_1453671c0(puVar1,(-0x14 - (longlong)pvVar4) + lVar6 + *param_1);
            lVar6 = lVar6 + 0x18;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14536673c;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_14536673c:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145366760 FUN_145366760 body=162 status=ok
// SIG undefined FUN_145366760(void)

/* WARNING: Removing unreachable block (ram,0x0001453667da) */

longlong FUN_145366760(longlong *param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = (uVar4 >> 1) + iVar5;
      bVar1 = *(byte *)(*param_1 + (longlong)iVar3 * 0x18);
      if (bVar1 == param_2) {
        return *param_1 + (longlong)iVar3 * 0x18;
      }
      uVar2 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= bVar1) {
        uVar2 = uVar4;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar4 = uVar2 >> 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 145366810 FUN_145366810 body=345 status=ok
// SIG undefined FUN_145366810(void)

undefined1 * FUN_145366810(longlong *param_1,undefined1 param_2,char *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined1 *)FUN_1453669e0();
  if (*param_3 != '\0') {
    return puVar2;
  }
  uVar4 = *(uint *)(param_1 + 1);
  if (puVar2 == (undefined1 *)0x0) {
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_145366650(param_1), cVar1 != '\0')) &&
       (uVar4 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar2 = (undefined1 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar2 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      *puVar2 = 0;
      puVar2[4] = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      goto LAB_145366942;
    }
  }
  else {
    lVar3 = ((longlong)puVar2 - *param_1) / 6 + ((longlong)puVar2 - *param_1 >> 0x3f);
    uVar5 = (lVar3 >> 2) - (lVar3 >> 0x3f);
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_145366650(param_1), cVar1 != '\0')) &&
       (uVar4 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar4 = (uint)uVar5;
      lVar3 = (uVar5 & 0xffffffff) * 0x18;
      puVar2 = (undefined1 *)(*param_1 + lVar3);
      if (uVar4 < *(uint *)(param_1 + 1)) {
        memmove(puVar2 + 0x18,puVar2,(ulonglong)((*(uint *)(param_1 + 1) - uVar4) * 0x18));
      }
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
        puVar2[4] = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        *(undefined8 *)(puVar2 + 0x10) = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      puVar2 = (undefined1 *)(*param_1 + lVar3);
LAB_145366942:
      if (puVar2 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      *puVar2 = param_2;
      return puVar2;
    }
  }
  return (undefined1 *)0x0;
}



// FUNCTION 145366970 FUN_145366970 body=110 status=ok
// SIG undefined FUN_145366970(void)

undefined8 FUN_145366970(longlong *param_1)

{
  void *pvVar1;
  void *_Dst;
  
  _Dst = (void *)FUN_145366760();
  if (_Dst != (void *)0x0) {
    pvVar1 = (void *)(*param_1 + (ulonglong)((int)param_1[1] - 1) * 0x18);
    if (_Dst < pvVar1) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x18),
              (ulonglong)(uint)((int)(((longlong)pvVar1 - (longlong)_Dst) / 0x18) * 0x18));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return 1;
  }
  return 0;
}



// FUNCTION 1453669e0 FUN_1453669e0 body=142 status=ok
// SIG undefined FUN_1453669e0(void)

longlong FUN_1453669e0(longlong *param_1,byte param_2,undefined1 *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      lVar1 = (longlong)iVar3 * 0x18;
      bVar2 = *(byte *)(lVar1 + *param_1);
      if (bVar2 == param_2) {
        *param_3 = 1;
        return *param_1 + lVar1;
      }
      uVar4 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= bVar2) {
        uVar4 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar4 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar6 * 0x18;
}


