// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145073d80 FUN_145073d80 body=92 status=ok
// SIG undefined FUN_145073d80(void)

void FUN_145073d80(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0xffffffffffffffff;
  *param_1 = &PTR_LAB_149c236a0;
  FUN_145073fe0(param_1,local_res8,1);
  if ((void *)param_1[0xb] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0xb]);
    param_1[0xb] = 0;
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  FUN_1453533f0(param_1);
  return;
}



// FUNCTION 145073de0 FUN_145073de0 body=27 status=ok
// SIG undefined FUN_145073de0(void)

void FUN_145073de0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x50) == 0) {
    *(undefined8 *)(param_1 + 0x50) = param_2;
    FUN_145074830(&DAT_14c79bdf8,param_1);
    return;
  }
  return;
}



// FUNCTION 145073e00 FUN_145073e00 body=71 status=ok
// SIG undefined FUN_145073e00(void)

void FUN_145073e00(longlong *param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  
  uVar1 = param_3 & 0xffffffff;
  if ((((int)param_3 == 5) && (param_1[10] != 0)) &&
     (param_3 = param_3 & 0xffffffff, *(int *)(param_1[10] + 0x20) != *(int *)(param_2 + 8))) {
    param_3 = 0x2b;
  }
  (**(code **)(*param_1 + 0x48))(param_5,param_2,param_3,uVar1,param_4,param_5);
  return;
}



// FUNCTION 145073e50 FUN_145073e50 body=48 status=ok
// SIG undefined FUN_145073e50(void)

void FUN_145073e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *param_5;
  local_c = *param_4;
  local_18 = param_1;
  FUN_145074b90(param_1 + 0x58,param_2,&local_18);
  return;
}



// FUNCTION 145073eb0 FUN_145073eb0 body=69 status=ok
// SIG undefined FUN_145073eb0(void)

void FUN_145073eb0(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (FUN_1450d8930(param_2,param_1), *(longlong *)(param_1 + 0x50) == 0)) {
    *(longlong *)(param_1 + 0x50) = param_2;
    FUN_145074830(&DAT_14c79bdf8,param_1);
  }
  return;
}



// FUNCTION 145073f00 FUN_145073f00 body=214 status=ok
// SIG undefined FUN_145073f00(void)

void FUN_145073f00(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  char local_res8 [8];
  
  iVar4 = (int)param_1[0xc] + -1;
  if (-1 < iVar4) {
    lVar3 = (longlong)iVar4 * 0x18;
    do {
      if (*(int *)(*(longlong *)(param_1[0xb] + 0x10 + lVar3) + 0x10) == 0) {
        uVar2 = *(undefined8 *)(param_1[0xb] + lVar3);
        local_res8[0] = '\x01';
        FUN_145353030(param_1 + 0xb,iVar4,local_res8);
        if (local_res8[0] == '\0') {
          FUN_1453532d0(param_1,uVar2);
        }
      }
      lVar3 = lVar3 + -0x18;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_res8);
  lVar3 = param_1[10];
  if ((lVar3 != 0) && (FUN_1450d8930(lVar3,param_1,uVar2,uVar1), param_1[10] == 0)) {
    param_1[10] = lVar3;
    FUN_145074830(&DAT_14c79bdf8,param_1);
  }
  return;
}



// FUNCTION 145073fe0 FUN_145073fe0 body=351 status=ok
// SIG undefined FUN_145073fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145073fe0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar9;
  ulonglong uVar8;
  
  uVar8 = *(ulonglong *)(param_1 + 0x50);
  if (uVar8 != 0) {
    if (DAT_14c79be00 != 0) {
      uVar1 = (uVar8 & 0xffffffff) % (ulonglong)DAT_14c79be00;
      plVar6 = *(longlong **)(DAT_14c79bdf8 + uVar1 * 8);
      plVar9 = (longlong *)0x0;
      if (plVar6 != (longlong *)0x0) {
        do {
          plVar5 = plVar6;
          plVar6 = plVar5;
          if ((int)plVar5[1] == (int)uVar8) break;
          plVar6 = (longlong *)*plVar5;
          plVar9 = plVar5;
        } while (plVar6 != (longlong *)0x0);
        if (plVar6 != (longlong *)0x0) {
          lVar3 = plVar6[3];
          lVar4 = 0;
          lVar2 = lVar3;
          if (lVar3 == 0) {
LAB_14507408b:
            if (lVar3 != 0) {
              if (lVar3 == plVar6[3]) {
                plVar6[3] = *(longlong *)(lVar3 + 0x48);
              }
              else {
                *(longlong *)(lVar4 + 0x48) = *(longlong *)(lVar3 + 0x48);
              }
            }
          }
          else {
            do {
              lVar3 = lVar2;
              if (lVar3 == param_1) goto LAB_14507408b;
              lVar2 = *(longlong *)(lVar3 + 0x48);
              lVar4 = lVar3;
            } while (*(longlong *)(lVar3 + 0x48) != 0);
          }
          if (plVar6[3] == 0) {
            lVar3 = *plVar6;
            uVar8 = uVar1;
            while ((lVar3 == 0 &&
                   (uVar7 = (int)uVar8 + 1, uVar8 = (ulonglong)uVar7, uVar7 < DAT_14c79be00))) {
              lVar3 = *(longlong *)(DAT_14c79bdf8 + uVar8 * 8);
            }
            if (plVar9 == (longlong *)0x0) {
              *(longlong *)(DAT_14c79bdf8 + uVar1 * 8) = *plVar6;
            }
            else {
              *plVar9 = *plVar6;
            }
            AK::MemoryMgr::Free(0,plVar6);
            _DAT_14c79be08 = _DAT_14c79be08 + -1;
            if (_DAT_14c79be08 == 0) {
              FUN_145074970(&DAT_14c79bdf8);
            }
          }
        }
      }
    }
    FUN_1450d8b50(*(undefined8 *)(param_1 + 0x50),param_1,param_2,param_3);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 145074140 FUN_145074140 body=100 status=ok
// SIG undefined FUN_145074140(void)

void FUN_145074140(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uStackX_14;
  
  if ((*(char *)((longlong)param_2 + 0xd) == '\x04') &&
     (((param_2[2] == 0 || (param_2[2] == 7)) && (cVar1 = FUN_14507dda0(*param_2), cVar1 != '\0'))))
  {
    return;
  }
  iVar2 = FUN_145352ee0(param_1 + 0x58,param_2);
  if (iVar2 == 1) {
    uStackX_14 = CONCAT31(uStackX_14._1_3_,*(undefined1 *)((longlong)param_2 + 0xd));
    FUN_145353180(param_1,CONCAT44(uStackX_14,*param_2));
  }
  return;
}



// FUNCTION 1450741b0 FUN_1450741b0 body=84 status=ok
// SIG undefined FUN_1450741b0(void)

void FUN_1450741b0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  char local_res8 [8];
  undefined4 uStackX_1c;
  
  local_res8[0] = '\x01';
  cVar1 = FUN_145352f50(param_1 + 0x58,param_2,local_res8);
  if ((cVar1 != '\0') && (local_res8[0] == '\0')) {
    uStackX_1c = CONCAT31(uStackX_1c._1_3_,*(undefined1 *)((longlong)param_2 + 0xd));
    FUN_1453532d0(param_1,CONCAT44(uStackX_1c,*param_2));
  }
  return;
}



// FUNCTION 145074210 FUN_145074210 body=186 status=ok
// SIG undefined FUN_145074210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145074210(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((uint)_DAT_14c79be00 != 0) {
    uVar6 = 0;
    plVar4 = (longlong *)*DAT_14c79bdf8;
    while (puVar2 = DAT_14c79bdf8, uVar3 = _DAT_14c79be00, plVar4 == (longlong *)0x0) {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      if ((uint)_DAT_14c79be00 <= uVar5) {
        return;
      }
      plVar4 = (longlong *)DAT_14c79bdf8[uVar6];
    }
    do {
      while( true ) {
        for (plVar1 = (longlong *)plVar4[3]; plVar1 != (longlong *)0x0;
            plVar1 = (longlong *)plVar1[9]) {
          (**(code **)(*plVar1 + 0x40))(plVar1);
          puVar2 = DAT_14c79bdf8;
          uVar3 = _DAT_14c79be00;
        }
        plVar4 = (longlong *)*plVar4;
        if (plVar4 != (longlong *)0x0) break;
        do {
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          if ((uint)uVar3 <= uVar5) goto LAB_1450742b1;
          plVar4 = (longlong *)puVar2[uVar6];
        } while (plVar4 == (longlong *)0x0);
      }
LAB_1450742b1:
    } while (plVar4 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 1450742d0 FUN_1450742d0 body=12 status=ok
// SIG undefined FUN_1450742d0(void)

void FUN_1450742d0(void)

{
  FUN_145074970(&DAT_14c79bdf8);
  return;
}



// FUNCTION 1450742e0 FUN_1450742e0 body=126 status=ok
// SIG undefined FUN_1450742e0(void)

undefined8 * FUN_1450742e0(undefined8 *param_1,uint param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0xffffffffffffffff;
  *param_1 = &PTR_LAB_149c236a0;
  FUN_145073fe0(param_1,&local_res8,1);
  if ((void *)param_1[0xb] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0xb]);
    param_1[0xb] = 0;
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  FUN_1453533f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 145074360 FUN_145074360 body=238 status=ok
// SIG undefined FUN_145074360(void)

undefined8 FUN_145074360(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  __uint64 _Var4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  iVar7 = (uVar1 >> 1) + uVar1;
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    iVar7 = 1;
  }
  _Var4 = (ulonglong)(iVar7 + uVar1) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    puVar3 = AK::MemoryMgr::Malloc(0,_Var4);
    if (puVar3 != (undefined8 *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (puVar2 = puVar3, (undefined8 *)*param_1 != puVar3)) {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
          }
          puVar5 = (undefined8 *)((longlong)puVar2 + (*param_1 - (longlong)puVar3));
          *puVar2 = *puVar5;
          puVar2[1] = puVar5[1];
          puVar2 = puVar2 + 2;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14507442b;
    }
  }
  else {
    puVar3 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var4);
    if (puVar3 != (undefined8 *)0x0) {
LAB_14507442b:
      *param_1 = (longlong)puVar3;
      *(uint *)((longlong)param_1 + 0xc) = iVar7 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145074450 FUN_145074450 body=110 status=ok
// SIG undefined FUN_145074450(void)

longlong * FUN_145074450(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar4 = (int)param_1[1];
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = (iVar4 + iVar5) / 2;
        lVar2 = *(longlong *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
        if (param_3 <= *(ulonglong *)(lVar2 + 8)) {
          iVar4 = iVar3;
        }
        iVar3 = iVar3 + 1;
        if (param_3 <= *(ulonglong *)(lVar2 + 8)) {
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
      } while (iVar5 < iVar4);
    }
    *param_2 = (longlong)iVar4 * 0x10 + lVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1450744c0 FUN_1450744c0 body=455 status=ok
// SIG undefined FUN_1450744c0(void)

ulonglong FUN_1450744c0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  
  lVar13 = *param_1;
  uVar11 = *(ulonglong *)(param_2[1] + 8);
  if (lVar13 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    iVar12 = (int)param_1[1];
    iVar8 = 0;
    if (0 < iVar12) {
      do {
        iVar5 = (iVar12 + iVar8) / 2;
        lVar1 = *(longlong *)(lVar13 + 8 + (longlong)iVar5 * 0x10);
        if (uVar11 <= *(ulonglong *)(lVar1 + 8)) {
          iVar12 = iVar5;
        }
        iVar5 = iVar5 + 1;
        if (uVar11 <= *(ulonglong *)(lVar1 + 8)) {
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
      } while (iVar5 < iVar12);
    }
    puVar10 = (undefined8 *)((longlong)iVar12 * 0x10 + lVar13);
  }
  uVar9 = *(uint *)(param_1 + 1);
  puVar7 = (undefined8 *)((ulonglong)uVar9 * 0x10 + lVar13);
  puVar6 = puVar10;
  if (puVar10 == puVar7) {
LAB_145074585:
    if (puVar10 == puVar7) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      if ((*(uint *)((longlong)param_1 + 0xc) <= uVar9) &&
         (cVar4 = FUN_145074360(param_1), cVar4 == '\0')) {
        return 0;
      }
      if (*(uint *)((longlong)param_1 + 0xc) <= uVar9) {
        return 0;
      }
      uVar9 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar9 + 1;
      puVar10 = (undefined8 *)((ulonglong)uVar9 * 0x10 + *param_1);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        puVar10[1] = 0;
        *puVar10 = uVar2;
        puVar10[1] = uVar3;
        return 1;
      }
      return 0;
    }
  }
  else {
    do {
      if (*(ulonglong *)(puVar6[1] + 8) != uVar11) goto LAB_145074585;
      if (puVar6[1] == param_2[1]) {
        *puVar6 = *param_2;
        return (ulonglong)puVar6 & 0xffffffffffffff00;
      }
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar7);
  }
  uVar11 = (longlong)puVar10 - lVar13 >> 4;
  if ((*(uint *)((longlong)param_1 + 0xc) <= uVar9) &&
     (cVar4 = FUN_145074360(param_1), cVar4 == '\0')) {
    return 0;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar9) {
    return 0;
  }
  uVar9 = (uint)uVar11;
  lVar13 = (uVar11 & 0xffffffff) * 0x10;
  puVar10 = (undefined8 *)(*param_1 + lVar13);
  if (uVar9 < *(uint *)(param_1 + 1)) {
    memmove(puVar10 + 2,puVar10,(ulonglong)((*(uint *)(param_1 + 1) - uVar9) * 0x10));
  }
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0;
    puVar10[1] = 0;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  puVar10 = (undefined8 *)(*param_1 + lVar13);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = *param_2;
    puVar10[1] = param_2[1];
    return 1;
  }
  return 0;
}



// FUNCTION 145074690 FUN_145074690 body=208 status=ok
// SIG undefined FUN_145074690(void)

undefined8 FUN_145074690(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  void *_Dst;
  int iVar6;
  int iVar7;
  
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(param_2 + 8);
  if (lVar1 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    iVar7 = (int)param_1[1];
    iVar6 = 0;
    if (0 < iVar7) {
      do {
        iVar4 = (iVar7 + iVar6) / 2;
        lVar3 = *(longlong *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
        if (uVar2 <= *(ulonglong *)(lVar3 + 8)) {
          iVar7 = iVar4;
        }
        iVar4 = iVar4 + 1;
        if (uVar2 <= *(ulonglong *)(lVar3 + 8)) {
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
      } while (iVar6 < iVar7);
    }
    _Dst = (void *)((longlong)iVar7 * 0x10 + lVar1);
  }
  while ((_Dst != (void *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + lVar1) &&
         (*(ulonglong *)(*(longlong *)((longlong)_Dst + 8) + 8) == uVar2))) {
    if (*(longlong *)((longlong)_Dst + 8) == param_2) {
      pvVar5 = (void *)((ulonglong)(*(uint *)(param_1 + 1) - 1) * 0x10 + lVar1);
      if (_Dst < pvVar5) {
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                (ulonglong)((int)pvVar5 - (int)_Dst & 0xfffffff0));
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      return 1;
    }
    _Dst = (void *)((longlong)_Dst + 0x10);
  }
  return 0;
}



// FUNCTION 145074760 FUN_145074760 body=63 status=ok
// SIG undefined FUN_145074760(void)

void FUN_145074760(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(ulonglong **)(param_1 + 0x58);
  if (puVar1 == (ulonglong *)0x0) {
    return;
  }
  uVar3 = 0;
  uVar2 = *puVar1;
  while (uVar2 != 0) {
    if ((uVar2 >> (uVar3 & 0x3f) & 1) != 0) {
      *puVar1 = uVar2 & ~(1L << (uVar3 & 0x3f));
    }
    puVar1 = *(ulonglong **)(param_1 + 0x58);
    uVar3 = (ulonglong)((int)uVar3 + 1);
    uVar2 = *puVar1;
  }
  FUN_1450d8830(param_1);
  return;
}



// FUNCTION 1450747a0 FUN_1450747a0 body=130 status=ok
// SIG undefined FUN_1450747a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450747a0(uint param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  
  if ((int)_DAT_14c79be00 != 0) {
    for (puVar2 = *(undefined8 **)
                   (DAT_14c79bdf8 + ((ulonglong)param_1 % (_DAT_14c79be00 & 0xffffffff)) * 8);
        puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      if (*(uint *)(puVar2 + 1) == param_1) {
        puVar2 = puVar2 + 2;
        goto LAB_1450747df;
      }
    }
    puVar2 = (undefined8 *)0x0;
LAB_1450747df:
    if (puVar2 != (undefined8 *)0x0) {
      for (lVar1 = puVar2[1]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x48)) {
        local_res10[0] = 0xffffffffffffffff;
        FUN_145073fe0(lVar1,local_res10,1);
      }
    }
  }
  return;
}



// FUNCTION 145074830 FUN_145074830 body=314 status=ok
// SIG undefined FUN_145074830(void)

ulonglong FUN_145074830(ulonglong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar1 = (uint)param_1[1];
  uVar2 = *(uint *)(param_2 + 0x50);
  if (uVar1 == 0) {
LAB_1450748a8:
    uVar5 = FUN_145074a10(param_1);
LAB_1450748b3:
    if ((uint)param_1[1] != 0) {
      uVar4 = (ulonglong)uVar2 % (ulonglong)(uint)param_1[1];
      for (puVar7 = *(undefined8 **)(*param_1 + uVar4 * 8); puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)*puVar7) {
        if (*(uint *)(puVar7 + 1) == uVar2) {
          puVar7 = puVar7 + 2;
          if (puVar7 != (undefined8 *)0x0) goto LAB_145074932;
          break;
        }
      }
      puVar6 = AK::MemoryMgr::Malloc(0,0x20);
      if (puVar6 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
        uVar5 = 0;
      }
      else {
        *puVar6 = *(undefined8 *)(*param_1 + uVar4 * 8);
        puVar7 = puVar6 + 2;
        *(uint *)(puVar6 + 1) = uVar2;
        if (puVar7 != (undefined8 *)0x0) {
          puVar6[3] = 0;
        }
        uVar5 = *param_1;
        *(undefined8 **)(uVar5 + uVar4 * 8) = puVar6;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      }
      if (puVar7 != (undefined8 *)0x0) goto LAB_145074932;
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    for (puVar7 = *(undefined8 **)(*param_1 + ((ulonglong)uVar2 % (ulonglong)uVar1) * 8);
        puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
      if (*(uint *)(puVar7 + 1) == uVar2) {
        puVar7 = puVar7 + 2;
        goto LAB_14507487f;
      }
    }
    puVar7 = (undefined8 *)0x0;
LAB_14507487f:
    if (puVar7 == (undefined8 *)0x0) {
      uVar5 = (ulonglong)(uint)param_1[2];
      if (0.9 < (float)uVar5 / (float)uVar1) goto LAB_1450748a8;
      goto LAB_1450748b3;
    }
LAB_145074932:
    lVar3 = puVar7[1];
    if (lVar3 == 0) {
      puVar7[1] = param_2;
      *(undefined8 *)(param_2 + 0x48) = 0;
      uVar5 = 1;
    }
    else {
      *(longlong *)(param_2 + 0x48) = lVar3;
      uVar5 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      puVar7[1] = param_2;
    }
  }
  return uVar5;
}



// FUNCTION 145074970 FUN_145074970 body=155 status=ok
// SIG undefined FUN_145074970(void)

void FUN_145074970(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if ((int)param_1[1] != 0) {
    do {
      lVar1 = uVar4 * 8;
      puVar3 = *(undefined8 **)(lVar1 + *param_1);
      while (puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar3;
        AK::MemoryMgr::Free(0,puVar3);
        puVar3 = puVar2;
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      *(undefined8 *)(lVar1 + *param_1) = 0;
    } while (uVar5 < *(uint *)(param_1 + 1));
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 145074a10 FUN_145074a10 body=378 status=ok
// SIG undefined FUN_145074a10(void)

undefined8 FUN_145074a10(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  uVar9 = 0;
  puVar12 = &DAT_149c23620;
  do {
    uVar1 = *puVar12;
    uVar10 = (ulonglong)uVar1;
    if (param_2 < uVar1) {
      if (uVar1 == 0) {
        return 2;
      }
      uVar9 = *(uint *)(param_1 + 1);
      uVar14 = (ulonglong)uVar9;
      puVar3 = (undefined8 *)*param_1;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      param_1[1] = 0;
      *param_1 = 0;
      pvVar7 = AK::MemoryMgr::Malloc(0,uVar10 * 8);
      pvVar4 = (void *)*param_1;
      if (pvVar7 == (void *)0x0) {
        if (pvVar4 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar4);
        }
        *param_1 = (longlong)puVar3;
        uVar8 = 2;
        *(uint *)(param_1 + 1) = uVar9;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      }
      else {
        if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar7)) {
          AK::MemoryMgr::Free(0,pvVar4);
        }
        *param_1 = (longlong)pvVar7;
        *(uint *)((longlong)param_1 + 0xc) = uVar1;
        uVar11 = uVar10;
        do {
          uVar1 = *(uint *)(param_1 + 1);
          if (uVar1 < uVar11) {
            *(uint *)(param_1 + 1) = uVar1 + 1;
            puVar13 = (undefined8 *)(*param_1 + (ulonglong)uVar1 * 8);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
              uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        puVar13 = puVar3;
        if (uVar9 != 0) {
          do {
            puVar6 = (undefined8 *)*puVar13;
            while (puVar6 != (undefined8 *)0x0) {
              uVar9 = *(uint *)(param_1 + 1);
              puVar5 = (undefined8 *)*puVar6;
              *puVar6 = *(undefined8 *)
                         (*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar9) * 8);
              *(undefined8 **)(*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar9) * 8)
                   = puVar6;
              puVar6 = puVar5;
            }
            uVar14 = uVar14 - 1;
            puVar13 = puVar13 + 1;
          } while (uVar14 != 0);
        }
        if (puVar3 != (undefined8 *)0x0) {
          AK::MemoryMgr::Free(0,puVar3);
        }
        uVar8 = 1;
      }
      return uVar8;
    }
    uVar9 = uVar9 + 1;
    puVar12 = puVar12 + 1;
  } while (uVar9 < 0x1b);
  return 2;
}



// FUNCTION 145074b90 FUN_145074b90 body=682 status=ok
// SIG undefined FUN_145074b90(void)

void FUN_145074b90(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  uint5 *puVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint5 *puVar5;
  float *pfVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_res20 [2];
  float local_88;
  undefined4 local_84;
  float local_80 [2];
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_70;
  
  puVar5 = (uint5 *)*param_1;
  puVar1 = puVar5 + (ulonglong)*(uint *)(param_1 + 1) * 3;
  if (puVar5 != puVar1) {
    uVar7 = param_2 >> 0x20 & 0xff;
    while ((ulonglong)*puVar5 != (uVar7 << 0x20 | param_2 & 0xffffffff)) {
      puVar5 = puVar5 + 3;
      if (puVar5 == puVar1) {
        return;
      }
    }
    do {
      if ((ulonglong)*puVar5 != (uVar7 << 0x20 | param_2 & 0xffffffff)) {
        return;
      }
      lVar4 = *(longlong *)(puVar5 + 2);
      fVar2 = *(float *)((longlong)param_3 + 0xc);
      local_74 = 2;
      local_70 = 0;
      local_78 = *(undefined4 *)(lVar4 + 4);
      uVar3 = *(undefined4 *)(lVar4 + 8);
      if (fVar2 == *(float *)(lVar4 + 0x30)) {
        fVar9 = *(float *)(lVar4 + 0x38);
LAB_145074cba:
        if (fVar9 == 3.4028235e+38) goto LAB_145074cc6;
      }
      else {
        if (fVar2 == *(float *)(lVar4 + 0x34)) {
          fVar9 = *(float *)(lVar4 + 0x3c);
          goto LAB_145074cba;
        }
LAB_145074cc6:
        if (*(longlong *)(lVar4 + 0x18) == 0) {
          fVar9 = 0.0;
        }
        else {
          local_res20[0] = *(undefined4 *)(lVar4 + 0x28);
          local_88 = 0.0;
          FUN_1450737c0(lVar4 + 0x18,fVar2,local_res20,&local_88);
          *(undefined4 *)(lVar4 + 0x28) = local_res20[0];
          fVar9 = local_88;
        }
        *(float *)(lVar4 + 0x30 + (ulonglong)*(byte *)(lVar4 + 0x14) * 4) = fVar2;
        *(float *)(lVar4 + 0x38 + (ulonglong)*(byte *)(lVar4 + 0x14) * 4) = fVar9;
        *(byte *)(lVar4 + 0x14) = *(byte *)(lVar4 + 0x14) ^ 1;
      }
      fVar2 = *(float *)(param_3 + 1);
      pfVar6 = (float *)(lVar4 + 0x38);
      if (((fVar2 != *(float *)(lVar4 + 0x30)) &&
          (pfVar6 = (float *)(lVar4 + 0x3c), fVar2 != *(float *)(lVar4 + 0x34))) ||
         (fVar8 = *pfVar6, fVar8 == 3.4028235e+38)) {
        if (*(longlong *)(lVar4 + 0x18) == 0) {
          fVar8 = 0.0;
        }
        else {
          local_84 = *(undefined4 *)(lVar4 + 0x28);
          local_80[0] = 0.0;
          FUN_1450737c0((longlong *)(lVar4 + 0x18),fVar2,&local_84,local_80);
          *(undefined4 *)(lVar4 + 0x28) = local_84;
          fVar8 = local_80[0];
        }
        *(float *)(lVar4 + 0x30 + (ulonglong)*(byte *)(lVar4 + 0x14) * 4) = fVar2;
        *(float *)(lVar4 + 0x38 + (ulonglong)*(byte *)(lVar4 + 0x14) * 4) = fVar8;
        *(byte *)(lVar4 + 0x14) = *(byte *)(lVar4 + 0x14) ^ 1;
      }
      (**(code **)(*(longlong *)*param_3 + 0x48))
                ((longlong *)*param_3,&local_78,uVar3,uVar3,fVar8,fVar8 - fVar9);
      puVar5 = puVar5 + 3;
    } while (puVar5 != (uint5 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18));
  }
  return;
}



// FUNCTION 145074e40 FUN_145074e40 body=238 status=ok
// SIG undefined FUN_145074e40(void)

void FUN_145074e40(int *param_1)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  do {
    while (iVar2 = *param_1, 0 < iVar2) {
      if (*param_1 != 0) {
        local_res8.QuadPart = 0;
        local_res10.QuadPart = 0;
        QueryPerformanceCounter(&local_res8);
        local_res8.QuadPart = local_res8.QuadPart + (longlong)(DAT_14c79c4d4 * 0.01);
        iVar2 = *param_1;
        while ((iVar2 != 0 &&
               (QueryPerformanceCounter(&local_res10), local_res10.QuadPart <= local_res8.QuadPart))
              ) {
          iVar2 = *param_1;
        }
        iVar2 = *param_1;
        while (iVar2 != 0) {
          Sleep(1);
          iVar2 = *param_1;
        }
      }
      LOCK();
      param_1[0xc] = param_1[0xc] + 1;
      UNLOCK();
      if (*param_1 != 0) {
        WaitForSingleObject(*(HANDLE *)(param_1 + 0xe),0xffffffff);
      }
      LOCK();
      param_1[0xc] = param_1[0xc] + -1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = iVar2 + -1;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
  DVar3 = GetCurrentThreadId();
  param_1[1] = DVar3;
  return;
}



// FUNCTION 145074f30 FUN_145074f30 body=170 status=ok
// SIG undefined FUN_145074f30(void)

undefined8 FUN_145074f30(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 145074fe0 FUN_145074fe0 body=143 status=ok
// SIG undefined FUN_145074fe0(void)

ulonglong FUN_145074fe0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar3 = (uint *)(param_1 + 0x48);
  uVar5 = 0;
  do {
    puVar3[2] = 0;
    if ((*puVar3 < 0xc) && (puVar3[1] < 0xb)) {
      uVar2 = FUN_145074f30(puVar3 + -2,0xb - puVar3[1]);
      if ((char)uVar2 == '\0') {
        return uVar2 & 0xffffffffffffff00;
      }
    }
    *puVar3 = 0xb;
    uVar2 = 0;
    do {
      uVar1 = (int)uVar2 + 1;
      *(undefined8 *)(*(longlong *)(puVar3 + -2) + uVar2 * 8) = 0;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *puVar3);
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    puVar3 = puVar3 + 0x16;
  } while (uVar4 < 0xe);
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}



// FUNCTION 145075070 FUN_145075070 body=178 status=ok
// SIG undefined FUN_145075070(void)

void FUN_145075070(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar4;
  
  iVar2 = *(int *)(param_1 + 0x4c8);
  while (iVar2 != 0) {
    if (*(uint *)(param_1 + 0x4c0) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x4b8);
      uVar4 = 0;
      while ((plVar5 == (longlong *)0x0 &&
             (uVar3 = (int)uVar4 + 1, uVar4 = (ulonglong)uVar3, uVar3 < *(uint *)(param_1 + 0x4c0)))
            ) {
        plVar5 = (longlong *)(*(undefined8 **)(param_1 + 0x4b8))[uVar4];
      }
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 0x18))();
    }
    iVar2 = *(int *)(param_1 + 0x4c8);
  }
  puVar6 = (undefined8 *)(param_1 + 0x40);
  lVar7 = 0xe;
  do {
    if ((void *)*puVar6 != (void *)0x0) {
      *(undefined4 *)(puVar6 + 1) = 0;
      AK::MemoryMgr::Free(0,(void *)*puVar6);
      *puVar6 = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    }
    puVar6 = puVar6 + 0xb;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



// FUNCTION 145075130 FUN_145075130 body=405 status=ok
// SIG undefined FUN_145075130(void)

void FUN_145075130(int *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  FUN_145074e40();
  if (param_1[0x12] != 0) {
    uVar5 = 0;
    plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x10);
    while (plVar7 == (longlong *)0x0) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if ((uint)param_1[0x12] <= uVar4) goto LAB_1450751f2;
      plVar7 = (longlong *)(*(undefined8 **)(param_1 + 0x10))[uVar5];
    }
    do {
      plVar8 = (longlong *)plVar7[1];
      if (plVar8 == (longlong *)0x0) {
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          if ((uint)param_1[0x12] <= uVar4) break;
          plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar5 * 8);
        } while (plVar8 == (longlong *)0x0);
      }
      plVar3 = plVar7 + 2;
      if (plVar7 == (longlong *)0x0) {
        plVar3 = (longlong *)&DAT_00000020;
      }
      if ((int)*plVar3 < 0) {
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)&DAT_00000010;
        }
        LOCK();
        piVar6 = (int *)((longlong)plVar7 + 0x14);
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      plVar7 = plVar8;
    } while (plVar8 != (longlong *)0x0);
  }
LAB_1450751f2:
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  if (*param_1 == 0) {
    param_1[1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar6 = param_1 + 0xdc;
  FUN_145074e40(piVar6);
  if (param_1[0xee] != 0) {
    uVar5 = 0;
    plVar7 = (longlong *)**(undefined8 **)(param_1 + 0xec);
    while (plVar7 == (longlong *)0x0) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if ((uint)param_1[0xee] <= uVar4) goto LAB_14507529a;
      plVar7 = (longlong *)(*(undefined8 **)(param_1 + 0xec))[uVar5];
    }
    do {
      plVar8 = (longlong *)plVar7[1];
      if (plVar8 == (longlong *)0x0) {
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          if ((uint)param_1[0xee] <= uVar4) break;
          plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xec) + uVar5 * 8);
        } while (plVar8 == (longlong *)0x0);
      }
      if ((int)plVar7[2] < 0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      plVar7 = plVar8;
    } while (plVar8 != (longlong *)0x0);
  }
LAB_14507529a:
  LOCK();
  *piVar6 = *piVar6 + 1;
  UNLOCK();
  if (*piVar6 == 0) {
    param_1[0xdd] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450752be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xde));
  return;
}



// FUNCTION 1450752d0 FUN_1450752d0 body=222 status=ok
// SIG undefined FUN_1450752d0(void)

void FUN_1450752d0(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  piVar2 = (int *)(param_1 + 0x2c0);
  FUN_145074e40(piVar2);
  if (*(uint *)(param_1 + 0x308) != 0) {
    uVar5 = 0;
    plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x300);
    while (plVar6 == (longlong *)0x0) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (*(uint *)(param_1 + 0x308) <= uVar4) goto LAB_145075392;
      plVar6 = (longlong *)(*(undefined8 **)(param_1 + 0x300))[uVar5];
    }
    do {
      plVar7 = (longlong *)plVar6[1];
      if (plVar7 == (longlong *)0x0) {
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          if (*(uint *)(param_1 + 0x308) <= uVar4) break;
          plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x300) + uVar5 * 8);
        } while (plVar7 == (longlong *)0x0);
      }
      FUN_1450b28b0(DAT_14c790fc0,*(undefined4 *)((longlong)plVar6 + 0x74));
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0x14);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      plVar6 = plVar7;
    } while (plVar7 != (longlong *)0x0);
  }
LAB_145075392:
  LOCK();
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (*piVar2 == 0) {
    *(undefined4 *)(param_1 + 0x2c4) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450753a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c8));
  return;
}



// FUNCTION 1450753b0 ReadBytesMem body=26 status=ok
// SIG undefined ReadBytesMem(ReadBytesMem * this)

/* public: __cdecl AK::ReadBytesMem::ReadBytesMem(void) __ptr64 */

ReadBytesMem * __thiscall AK::ReadBytesMem::ReadBytesMem(ReadBytesMem *this)

{
                    /* 0x50753b0  5  ??0ReadBytesMem@AK@@QEAA@XZ */
  *(undefined ***)this = &PTR_ReadBytes_149c23740;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}



// FUNCTION 1450753d0 ReadBytesMem body=29 status=ok
// SIG undefined ReadBytesMem(ReadBytesMem * this, void * param_1, int param_2)

/* public: __cdecl AK::ReadBytesMem::ReadBytesMem(void const * __ptr64,int) __ptr64 */

ReadBytesMem * __thiscall
AK::ReadBytesMem::ReadBytesMem(ReadBytesMem *this,void *param_1,int param_2)

{
                    /* 0x50753d0  4  ??0ReadBytesMem@AK@@QEAA@PEBXH@Z */
  *(int *)(this + 8) = param_2;
  *(undefined ***)this = &PTR_ReadBytes_149c23740;
  *(void **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}



// FUNCTION 1450753f0 ~ReadBytesMem body=11 status=ok
// SIG void ~ReadBytesMem(ReadBytesMem * this)

/* public: virtual __cdecl AK::ReadBytesMem::~ReadBytesMem(void) __ptr64 */

void __thiscall AK::ReadBytesMem::~ReadBytesMem(ReadBytesMem *this)

{
                    /* 0x50753f0  14  ??1ReadBytesMem@AK@@UEAA@XZ */
  *(undefined ***)this = &PTR_ReadBytes_149c23740;
  return;
}



// FUNCTION 145075400 ReadBytes body=123 status=ok
// SIG bool ReadBytes(ReadBytesMem * this, void * param_1, int param_2, int * param_3)

/* public: virtual bool __cdecl AK::ReadBytesMem::ReadBytes(void * __ptr64,int,int & __ptr64)
   __ptr64 */

bool __thiscall
AK::ReadBytesMem::ReadBytes(ReadBytesMem *this,void *param_1,int param_2,int *param_3)

{
  int iVar1;
  
                    /* 0x5075400  219  ?ReadBytes@ReadBytesMem@AK@@UEAA_NPEAXHAEAH@Z */
  if (*(longlong *)(this + 0x10) == 0) {
    return false;
  }
  iVar1 = *(int *)(this + 8) - *(int *)(this + 0x18);
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  memcpy(param_1,(void *)(*(longlong *)(this + 0x10) + (longlong)*(int *)(this + 0x18)),
         (longlong)iVar1);
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
  *param_3 = iVar1;
  return iVar1 == param_2;
}



// FUNCTION 145075480 Attach body=16 status=ok
// SIG void Attach(ReadBytesMem * this, void * param_1, int param_2)

/* public: void __cdecl AK::ReadBytesMem::Attach(void const * __ptr64,int) __ptr64 */

void __thiscall AK::ReadBytesMem::Attach(ReadBytesMem *this,void *param_1,int param_2)

{
                    /* 0x5075480  30  ?Attach@ReadBytesMem@AK@@QEAAXPEBXH@Z */
  *(int *)(this + 8) = param_2;
  *(void **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}



// FUNCTION 145075490 FUN_145075490 body=140 status=ok
// SIG undefined FUN_145075490(void)

undefined8 * FUN_145075490(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((param_2 & 2) != 0) {
    lVar2 = param_1[-1];
    puVar1 = param_1 + lVar2 * 4;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      puVar1[-4] = &PTR_ReadBytes_149c23740;
      puVar1 = puVar1 + -4;
    }
    if ((param_2 & 1) != 0) {
      thunk_FUN_1400020a8(param_1 + -1,param_1[-1] * 0x20 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR_ReadBytes_149c23740;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145075520 WriteBytesMem body=33 status=ok
// SIG undefined WriteBytesMem(WriteBytesMem * this)

/* public: __cdecl AK::WriteBytesMem::WriteBytesMem(void) __ptr64 */

WriteBytesMem * __thiscall AK::WriteBytesMem::WriteBytesMem(WriteBytesMem *this)

{
                    /* 0x5075520  10  ??0WriteBytesMem@AK@@QEAA@XZ */
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined ***)this = &PTR_WriteBytes_149c23750;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}



// FUNCTION 145075550 ~WriteBytesMem body=28 status=ok
// SIG void ~WriteBytesMem(WriteBytesMem * this)

/* public: virtual __cdecl AK::WriteBytesMem::~WriteBytesMem(void) __ptr64 */

void __thiscall AK::WriteBytesMem::~WriteBytesMem(WriteBytesMem *this)

{
                    /* 0x5075550  18  ??1WriteBytesMem@AK@@UEAA@XZ */
  *(undefined ***)this = &PTR_WriteBytes_149c23750;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    MemoryMgr::Free(*(int *)(this + 0x1c),*(void **)(this + 0x10));
    return;
  }
  return;
}



// FUNCTION 145075570 WriteBytes body=168 status=ok
// SIG bool WriteBytes(WriteBytesMem * this, void * param_1, int param_2, int * param_3)

/* public: virtual bool __cdecl AK::WriteBytesMem::WriteBytes(void const * __ptr64,int,int &
   __ptr64) __ptr64 */

bool __thiscall
AK::WriteBytesMem::WriteBytes(WriteBytesMem *this,void *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  
                    /* 0x5075570  363  ?WriteBytes@WriteBytesMem@AK@@UEAA_NPEBXHAEAH@Z */
  iVar1 = *(int *)(this + 0x18);
  iVar2 = *(int *)(this + 8);
  iVar5 = iVar1 + param_2;
  if (iVar2 < iVar5) {
    uVar3 = iVar5 + 0x3ff + (iVar5 + 0x3ff >> 0x1f & 0x3ffU) & 0xfffffc00;
    *(uint *)(this + 8) = uVar3;
    pvVar4 = MemoryMgr::Realloc(*(int *)(this + 0x1c),*(void **)(this + 0x10),(longlong)(int)uVar3);
    if (pvVar4 == (void *)0x0) {
      *(int *)(this + 8) = iVar2;
      return false;
    }
    *(void **)(this + 0x10) = pvVar4;
  }
  memcpy((void *)((longlong)iVar1 + *(longlong *)(this + 0x10)),param_1,(ulonglong)(uint)param_2);
  *(int *)(this + 0x18) = iVar5;
  *param_3 = param_2;
  return true;
}



// FUNCTION 145075620 Reserve body=96 status=ok
// SIG bool Reserve(WriteBytesMem * this, int param_1)

/* public: virtual bool __cdecl AK::WriteBytesMem::Reserve(int) __ptr64 */

bool __thiscall AK::WriteBytesMem::Reserve(WriteBytesMem *this,int param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  
                    /* 0x5075620  243  ?Reserve@WriteBytesMem@AK@@UEAA_NH@Z */
  iVar1 = *(int *)(this + 8);
  if (iVar1 < param_1) {
    uVar2 = param_1 + 0x3ff + (param_1 + 0x3ff >> 0x1f & 0x3ffU) & 0xfffffc00;
    *(uint *)(this + 8) = uVar2;
    pvVar3 = MemoryMgr::Realloc(*(int *)(this + 0x1c),*(void **)(this + 0x10),(longlong)(int)uVar2);
    if (pvVar3 == (void *)0x0) {
      *(int *)(this + 8) = iVar1;
      return false;
    }
    *(void **)(this + 0x10) = pvVar3;
  }
  return true;
}



// FUNCTION 145075680 Count body=4 status=ok
// SIG int Count(WriteBytesMem * this)

/* public: virtual int __cdecl AK::WriteBytesMem::Count(void)const __ptr64 */

int __thiscall AK::WriteBytesMem::Count(WriteBytesMem *this)

{
                    /* 0x5075680  47  ?Count@WriteBytesMem@AK@@UEBAHXZ */
  return *(int *)(this + 0x18);
}



// FUNCTION 145075690 SetCount body=4 status=ok
// SIG void SetCount(WriteBytesMem * this, int param_1)

/* public: virtual void __cdecl AK::WriteBytesMem::SetCount(int) __ptr64 */

void __thiscall AK::WriteBytesMem::SetCount(WriteBytesMem *this,int param_1)

{
                    /* 0x5075690  279  ?SetCount@WriteBytesMem@AK@@UEAAXH@Z */
  *(int *)(this + 0x18) = param_1;
  return;
}



// FUNCTION 1450756a0 Size body=4 status=ok
// SIG int Size(WriteBytesMem * this)

/* public: int __cdecl AK::WriteBytesMem::Size(void)const __ptr64 */

int __thiscall AK::WriteBytesMem::Size(WriteBytesMem *this)

{
                    /* 0x50756a0  323  ?Size@WriteBytesMem@AK@@QEBAHXZ */
  return *(int *)(this + 8);
}



// FUNCTION 1450756b0 Bytes body=5 status=ok
// SIG uchar * Bytes(WriteBytesMem * this)

/* public: virtual unsigned char * __ptr64 __cdecl AK::WriteBytesMem::Bytes(void)const __ptr64 */

uchar * __thiscall AK::WriteBytesMem::Bytes(WriteBytesMem *this)

{
                    /* 0x50756b0  34  ?Bytes@WriteBytesMem@AK@@UEBAPEAEXZ */
  return *(uchar **)(this + 0x10);
}



// FUNCTION 1450756c0 Detach body=17 status=ok
// SIG uchar * Detach(WriteBytesMem * this)

/* public: virtual unsigned char * __ptr64 __cdecl AK::WriteBytesMem::Detach(void) __ptr64 */

uchar * __thiscall AK::WriteBytesMem::Detach(WriteBytesMem *this)

{
  uchar *puVar1;
  
                    /* 0x50756c0  53  ?Detach@WriteBytesMem@AK@@UEAAPEAEXZ */
  puVar1 = *(uchar **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return puVar1;
}



// FUNCTION 1450756e0 Clear body=8 status=ok
// SIG void Clear(WriteBytesMem * this)

/* public: virtual void __cdecl AK::WriteBytesMem::Clear(void) __ptr64 */

void __thiscall AK::WriteBytesMem::Clear(WriteBytesMem *this)

{
                    /* 0x50756e0  41  ?Clear@WriteBytesMem@AK@@UEAAXXZ */
  *(undefined4 *)(this + 0x18) = 0;
  return;
}



// FUNCTION 1450756f0 SetMemPool body=59 status=ok
// SIG void SetMemPool(WriteBytesMem * this, int param_1)

/* public: void __cdecl AK::WriteBytesMem::SetMemPool(int) __ptr64 */

void __thiscall AK::WriteBytesMem::SetMemPool(WriteBytesMem *this,int param_1)

{
                    /* 0x50756f0  292  ?SetMemPool@WriteBytesMem@AK@@QEAAXH@Z */
  if ((*(int *)(this + 0x1c) != -1) && (*(void **)(this + 0x10) != (void *)0x0)) {
    MemoryMgr::Free(*(int *)(this + 0x1c),*(void **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(int *)(this + 0x1c) = param_1;
  return;
}



// FUNCTION 145075730 HasValidMemPool body=8 status=ok
// SIG bool HasValidMemPool(WriteBytesMem * this)

/* public: bool __cdecl AK::WriteBytesMem::HasValidMemPool(void) __ptr64 */

bool __thiscall AK::WriteBytesMem::HasValidMemPool(WriteBytesMem *this)

{
                    /* 0x5075730  138  ?HasValidMemPool@WriteBytesMem@AK@@QEAA_NXZ */
  return *(int *)(this + 0x1c) != -1;
}



// FUNCTION 145075740 FUN_145075740 body=210 status=ok
// SIG undefined FUN_145075740(void)

undefined8 * FUN_145075740(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((param_2 & 2) == 0) {
    *param_1 = &PTR_WriteBytes_149c23750;
    if ((void *)param_1[2] != (void *)0x0) {
      AK::MemoryMgr::Free(*(int *)((longlong)param_1 + 0x1c),(void *)param_1[2]);
    }
    if ((param_2 & 1) != 0) {
      thunk_FUN_1400020a8(param_1,0x20);
    }
    return param_1;
  }
  lVar3 = param_1[-1];
  puVar1 = param_1 + lVar3 * 4;
  while (puVar2 = puVar1, lVar3 != 0) {
    puVar1 = puVar2 + -4;
    lVar3 = lVar3 + -1;
    *puVar1 = &PTR_WriteBytes_149c23750;
    if ((void *)puVar2[-2] != (void *)0x0) {
      AK::MemoryMgr::Free(*(int *)((longlong)puVar2 + -4),(void *)puVar2[-2]);
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -1,param_1[-1] * 0x20 + 8);
  }
  return param_1 + -1;
}



// FUNCTION 145075820 WriteBytesBuffer body=24 status=ok
// SIG undefined WriteBytesBuffer(WriteBytesBuffer * this)

/* public: __cdecl AK::WriteBytesBuffer::WriteBytesBuffer(void) __ptr64 */

WriteBytesBuffer * __thiscall AK::WriteBytesBuffer::WriteBytesBuffer(WriteBytesBuffer *this)

{
                    /* 0x5075820  8  ??0WriteBytesBuffer@AK@@QEAA@XZ */
  *(undefined ***)this = &PTR_WriteBytes_149c23790;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}



// FUNCTION 145075840 ~WriteBytesBuffer body=11 status=ok
// SIG void ~WriteBytesBuffer(WriteBytesBuffer * this)

/* public: virtual __cdecl AK::WriteBytesBuffer::~WriteBytesBuffer(void) __ptr64 */

void __thiscall AK::WriteBytesBuffer::~WriteBytesBuffer(WriteBytesBuffer *this)

{
                    /* 0x5075840  16  ??1WriteBytesBuffer@AK@@UEAA@XZ */
  *(undefined ***)this = &PTR_WriteBytes_149c23790;
  return;
}



// FUNCTION 145075850 SetBuffer body=9 status=ok
// SIG void SetBuffer(WriteBytesBuffer * this, uchar * param_1, int param_2)

/* public: void __cdecl AK::WriteBytesBuffer::SetBuffer(unsigned char * __ptr64,int) __ptr64 */

void __thiscall AK::WriteBytesBuffer::SetBuffer(WriteBytesBuffer *this,uchar *param_1,int param_2)

{
                    /* 0x5075850  267  ?SetBuffer@WriteBytesBuffer@AK@@QEAAXPEAEH@Z */
  *(uchar **)(this + 8) = param_1;
  *(int *)(this + 0x10) = param_2;
  return;
}



// FUNCTION 145075860 WriteBytes body=91 status=ok
// SIG bool WriteBytes(WriteBytesBuffer * this, void * param_1, int param_2, int * param_3)

/* public: virtual bool __cdecl AK::WriteBytesBuffer::WriteBytes(void const * __ptr64,int,int &
   __ptr64) __ptr64 */

bool __thiscall
AK::WriteBytesBuffer::WriteBytes(WriteBytesBuffer *this,void *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
                    /* 0x5075860  361  ?WriteBytes@WriteBytesBuffer@AK@@UEAA_NPEBXHAEAH@Z */
  iVar2 = *(int *)(this + 0x14) + param_2;
  iVar1 = *(int *)(this + 0x10);
  if (iVar2 <= iVar1) {
    memcpy((void *)((longlong)*(int *)(this + 0x14) + *(longlong *)(this + 8)),param_1,
           (ulonglong)(uint)param_2);
    *(int *)(this + 0x14) = iVar2;
    *param_3 = param_2;
  }
  return iVar2 <= iVar1;
}



// FUNCTION 1450758c0 GetPos body=4 status=ok
// SIG int GetPos(WriteBytesBuffer * this)

/* public: int __cdecl AK::WriteBytesBuffer::GetPos(void)const __ptr64 */

int __thiscall AK::WriteBytesBuffer::GetPos(WriteBytesBuffer *this)

{
                    /* 0x50758c0  115  ?GetPos@WriteBytesBuffer@AK@@QEBAHXZ */
  return *(int *)(this + 0x14);
}



// FUNCTION 1450758d0 Clear body=8 status=ok
// SIG void Clear(WriteBytesBuffer * this)

/* public: void __cdecl AK::WriteBytesBuffer::Clear(void) __ptr64 */

void __thiscall AK::WriteBytesBuffer::Clear(WriteBytesBuffer *this)

{
                    /* 0x50758d0  39  ?Clear@WriteBytesBuffer@AK@@QEAAXXZ */
  *(undefined4 *)(this + 0x14) = 0;
  return;
}



// FUNCTION 1450758e0 FUN_1450758e0 body=141 status=ok
// SIG undefined FUN_1450758e0(void)

undefined8 * FUN_1450758e0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((param_2 & 2) != 0) {
    lVar2 = param_1[-1];
    puVar1 = param_1 + lVar2 * 3;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      puVar1[-3] = &PTR_WriteBytes_149c23790;
      puVar1 = puVar1 + -3;
    }
    if ((param_2 & 1) != 0) {
      thunk_FUN_1400020a8(param_1 + -1,param_1[-1] * 0x18 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR_WriteBytes_149c23790;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145075970 FUN_145075970 body=184 status=ok
// SIG undefined FUN_145075970(void)

undefined8 FUN_145075970(longlong *param_1)

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
      goto LAB_145075a0b;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_145075a0b:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145075a30 FUN_145075a30 body=220 status=ok
// SIG undefined FUN_145075a30(void)

void FUN_145075a30(undefined8 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  longlong *plVar3;
  ushort *puVar4;
  
  *param_1 = &PTR_FUN_149c237a0;
  puVar2 = (ushort *)param_1[4];
  if (puVar2 != (ushort *)0x0) {
    uVar1 = *puVar2;
    puVar4 = puVar2 + 1;
    if (puVar4 != puVar2 + (ulonglong)uVar1 + 1) {
      plVar3 = (longlong *)(((ulonglong)*puVar2 * 2 + 9 & 0xfffffff8) + 8 + (longlong)puVar2);
      do {
        if (*plVar3 != 0) {
          FUN_1450b0bd0(DAT_14c791068,*plVar3,param_1);
          *plVar3 = 0;
          (**(code **)(*(longlong *)param_1[3] + 0x10))();
        }
        puVar4 = puVar4 + 1;
        plVar3 = plVar3 + 2;
      } while (puVar4 != puVar2 + (ulonglong)uVar1 + 1);
    }
  }
  if ((void *)param_1[5] != (void *)0x0) {
    *(undefined4 *)(param_1 + 6) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[5]);
    param_1[5] = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[4]);
  }
  param_1[4] = 0;
  return;
}



// FUNCTION 145075b10 FUN_145075b10 body=200 status=ok
// SIG undefined FUN_145075b10(void)

undefined8 FUN_145075b10(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) * 0xc;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar5 = 0;
          do {
            lVar2 = *param_1;
            *(undefined8 *)(lVar5 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + lVar2);
            *(undefined4 *)(lVar5 + 8 + (longlong)pvVar4) = *(undefined4 *)(lVar5 + 8 + lVar2);
            uVar7 = uVar7 - 1;
            lVar5 = lVar5 + 0xc;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145075bbb;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_145075bbb:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145075be0 FUN_145075be0 body=66 status=ok
// SIG undefined FUN_145075be0(void)

int * FUN_145075be0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iStackX_14;
  
  piVar3 = (int *)*param_1;
  piVar1 = piVar3 + (ulonglong)*(uint *)(param_1 + 1) * 3;
  if (piVar3 != piVar1) {
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    do {
      if ((*piVar3 == (int)param_2) && (piVar3[1] == iStackX_14)) break;
      piVar3 = piVar3 + 3;
    } while (piVar3 != piVar1);
  }
  piVar2 = piVar3 + 2;
  if (piVar3 == piVar1) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



// FUNCTION 145075c30 FUN_145075c30 body=205 status=ok
// SIG undefined FUN_145075c30(void)

int * FUN_145075c30(longlong *param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  int iStackX_14;
  
  piVar5 = (int *)*param_1;
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  piVar1 = piVar5 + uVar8 * 3;
  if (piVar5 != piVar1) {
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    do {
      if ((*piVar5 == (int)param_2) && (piVar5[1] == iStackX_14)) break;
      piVar5 = piVar5 + 3;
    } while (piVar5 != piVar1);
  }
  piVar7 = (int *)0x0;
  piVar6 = piVar5 + 2;
  if (piVar5 == piVar1) {
    piVar6 = piVar7;
  }
  if (piVar6 == (int *)0x0) {
    if (((uVar8 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar4 = FUN_145075b10(param_1), cVar4 != '\0')) &&
       (piVar6 = piVar7, uVar8 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar3 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar3 + 1;
      puVar2 = (undefined8 *)(*param_1 + (ulonglong)uVar3 * 0xc);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = param_2;
        *(int *)(puVar2 + 1) = *param_3;
        piVar6 = (int *)(puVar2 + 1);
      }
    }
  }
  else {
    *piVar6 = *param_3;
  }
  return piVar6;
}



// FUNCTION 145075d00 FUN_145075d00 body=118 status=ok
// SIG undefined FUN_145075d00(void)

undefined8 * FUN_145075d00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 145075d80 FUN_145075d80 body=11 status=ok
// SIG undefined FUN_145075d80(void)

void FUN_145075d80(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145075d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 145075d90 FUN_145075d90 body=166 status=ok
// SIG undefined FUN_145075d90(void)

undefined8 FUN_145075d90(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar1 = AK::MemoryMgr::Malloc(0,0xc0);
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 8;
    uVar2 = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar1;
    do {
      puVar3 = puVar1;
      uVar2 = uVar2 + 1;
      *puVar3 = puVar3 + 3;
      puVar1 = puVar3 + 3;
    } while (uVar2 < *(uint *)(param_1 + 0x30));
    *puVar3 = 0;
    puVar1 = AK::MemoryMgr::Malloc(0,0x100);
    *(undefined8 **)(param_1 + 0x58) = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x60) = 8;
      uVar2 = 0;
      *(undefined8 **)(param_1 + 0x50) = puVar1;
      do {
        puVar3 = puVar1;
        uVar2 = uVar2 + 1;
        *puVar3 = puVar3 + 4;
        puVar1 = puVar3 + 4;
      } while (uVar2 < *(uint *)(param_1 + 0x60));
      *puVar3 = 0;
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 145075e40 FUN_145075e40 body=570 status=ok
// SIG undefined FUN_145075e40(void)

void FUN_145075e40(ulonglong *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar1 = (undefined8 *)*param_1;
  puVar6 = puVar1 + (ulonglong)(uint)param_1[1] * 2;
  puVar7 = puVar1;
  while (puVar1 != puVar6) {
    pvVar2 = (void *)puVar1[1];
    if (*(void **)((longlong)pvVar2 + 0x18) != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar2 + 0x20) = 0;
      AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar2 + 0x18));
      *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
      *(undefined4 *)((longlong)pvVar2 + 0x24) = 0;
    }
    *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
    AK::MemoryMgr::Free(2,pvVar2);
    puVar7 = (undefined8 *)*param_1;
    puVar6 = puVar7 + (ulonglong)(uint)param_1[1] * 2 + -2;
    if (puVar1 < puVar6) {
      uVar4 = puVar6[1];
      *puVar1 = *puVar6;
      puVar1[1] = uVar4;
      puVar7 = (undefined8 *)*param_1;
    }
    uVar5 = (int)param_1[1] - 1;
    *(uint *)(param_1 + 1) = uVar5;
    puVar6 = puVar7 + (ulonglong)uVar5 * 2;
  }
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,puVar7);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  while (puVar3 = (ulonglong *)param_1[2], puVar3 != (ulonglong *)0x0) {
    param_1[2] = *puVar3;
    if (puVar3 == (ulonglong *)param_1[3]) {
      param_1[3] = 0;
    }
    if ((puVar3 < (ulonglong *)param_1[5]) ||
       ((ulonglong *)param_1[5] + (ulonglong)(uint)param_1[6] * 3 <= puVar3)) {
      AK::MemoryMgr::Free(0,puVar3);
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
    }
    else {
      *puVar3 = param_1[4];
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
      param_1[4] = (ulonglong)puVar3;
    }
  }
  puVar1 = (undefined8 *)param_1[4];
  while (puVar7 = puVar1, puVar7 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar7;
    if ((puVar7 < (undefined8 *)param_1[5]) ||
       ((undefined8 *)param_1[5] + (ulonglong)(uint)param_1[6] * 3 <= puVar7)) {
      AK::MemoryMgr::Free(0,puVar7);
    }
  }
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[5]);
    param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  while (puVar3 = (ulonglong *)param_1[8], puVar3 != (ulonglong *)0x0) {
    param_1[8] = *puVar3;
    if (puVar3 == (ulonglong *)param_1[9]) {
      param_1[9] = 0;
    }
    if ((puVar3 < (ulonglong *)param_1[0xb]) ||
       ((ulonglong *)param_1[0xb] + (ulonglong)(uint)param_1[0xc] * 4 <= puVar3)) {
      AK::MemoryMgr::Free(0,puVar3);
      *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + -1;
    }
    else {
      *puVar3 = param_1[10];
      *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + -1;
      param_1[10] = (ulonglong)puVar3;
    }
  }
  puVar1 = (undefined8 *)param_1[10];
  while (puVar7 = puVar1, puVar7 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar7;
    if ((puVar7 < (undefined8 *)param_1[0xb]) ||
       ((undefined8 *)param_1[0xb] + (ulonglong)(uint)param_1[0xc] * 4 <= puVar7)) {
      AK::MemoryMgr::Free(0,puVar7);
    }
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_145077210(param_1,param_1 + 0x12);
  FUN_145077210(param_1,param_1 + 0x14);
  return;
}



// FUNCTION 145076080 FUN_145076080 body=356 status=ok
// SIG undefined FUN_145076080(void)

undefined8 FUN_145076080(longlong *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  ulonglong uVar8;
  
  piVar4 = (int *)*param_1;
  piVar7 = piVar4 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar4 != piVar7 && (*piVar4 != param_2)); piVar4 = piVar4 + 4) {
  }
  piVar5 = piVar4 + 2;
  if (piVar4 == piVar7) {
    piVar5 = (int *)0x0;
  }
  if (piVar5 == (int *)0x0) {
    puVar3 = AK::MemoryMgr::Malloc(2,0x28);
    if (puVar3 == (undefined4 *)0x0) {
      uVar6 = 2;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0x2ca33bdb;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      piVar4 = (int *)*param_1;
      uVar8 = (ulonglong)*(uint *)(param_1 + 1);
      piVar7 = piVar4 + uVar8 * 4;
      for (; (piVar4 != piVar7 && (*piVar4 != param_2)); piVar4 = piVar4 + 4) {
      }
      piVar5 = piVar4 + 2;
      if (piVar4 == piVar7) {
        piVar5 = (int *)0x0;
      }
      if (piVar5 == (int *)0x0) {
        if (((uVar8 < *(uint *)((longlong)param_1 + 0xc)) ||
            (cVar2 = FUN_145077150(), cVar2 != '\0')) &&
           (uVar8 < *(uint *)((longlong)param_1 + 0xc))) {
          uVar1 = *(uint *)(param_1 + 1);
          *(uint *)(param_1 + 1) = uVar1 + 1;
          piVar4 = (int *)((ulonglong)uVar1 * 0x10 + *param_1);
          if (piVar4 != (int *)0x0) {
            *piVar4 = param_2;
            *(undefined4 **)(piVar4 + 2) = puVar3;
            if (piVar4 + 2 != (int *)0x0) {
              return 1;
            }
          }
        }
        uVar6 = 2;
        if (*(void **)(puVar3 + 6) != (void *)0x0) {
          puVar3[8] = 0;
          AK::MemoryMgr::Free(0,*(void **)(puVar3 + 6));
          *(undefined8 *)(puVar3 + 6) = 0;
          puVar3[9] = 0;
        }
        *(undefined8 *)(puVar3 + 4) = 0;
        AK::MemoryMgr::Free(2,puVar3);
      }
      else {
        uVar6 = 1;
        *(undefined4 **)piVar5 = puVar3;
      }
    }
    return uVar6;
  }
  return 1;
}



// FUNCTION 1450761f0 FUN_1450761f0 body=96 status=ok
// SIG undefined FUN_1450761f0(void)

undefined8 FUN_1450761f0(undefined8 *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  
  piVar2 = (int *)*param_1;
  piVar3 = piVar2 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar2 != piVar3 && (*piVar2 != param_2)); piVar2 = piVar2 + 4) {
  }
  plVar4 = (longlong *)(piVar2 + 2);
  if (piVar2 == piVar3) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 == (longlong *)0x0) {
    return 0x14;
  }
  lVar1 = *plVar4;
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    *(longlong *)(param_3 + 8) = *(longlong *)(lVar1 + 0x10);
    *(longlong *)(lVar1 + 0x10) = param_3;
    return 1;
  }
  *(longlong *)(lVar1 + 0x10) = param_3;
  *(undefined8 *)(param_3 + 8) = 0;
  return 1;
}



// FUNCTION 145076250 FUN_145076250 body=125 status=ok
// SIG undefined FUN_145076250(void)

undefined8 FUN_145076250(undefined8 *param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  piVar3 = (int *)*param_1;
  piVar5 = piVar3 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar3 != piVar5 && (*piVar3 != param_2)); piVar3 = piVar3 + 4) {
  }
  plVar7 = (longlong *)(piVar3 + 2);
  if (piVar3 == piVar5) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) {
    return 0x14;
  }
  plVar1 = *(longlong **)(*plVar7 + 0x10);
  plVar2 = plVar1;
  plVar6 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    while (plVar4 = plVar2, plVar4 != param_3) {
      plVar2 = (longlong *)plVar4[1];
      plVar6 = plVar4;
      if ((longlong *)plVar4[1] == (longlong *)0x0) {
        return 1;
      }
    }
    if (plVar4 == plVar1) {
      *(longlong *)(*plVar7 + 0x10) = plVar4[1];
      return 1;
    }
    plVar6[1] = plVar4[1];
  }
  return 1;
}



// FUNCTION 1450762d0 FUN_1450762d0 body=243 status=ok
// SIG undefined FUN_1450762d0(void)

undefined8
FUN_1450762d0(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,char param_6)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  piVar1 = (int *)*param_1;
  piVar3 = piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar1 != piVar3 && (*piVar1 != param_2)); piVar1 = piVar1 + 4) {
  }
  plVar5 = (longlong *)(piVar1 + 2);
  if (piVar1 == piVar3) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 == (longlong *)0x0) {
    return 0x14;
  }
  lVar2 = FUN_145075c30(*plVar5 + 0x18,CONCAT44(param_4,param_3),&param_5);
  if (lVar2 == 0) {
    return 0x34;
  }
  if (param_6 == '\0') {
    return 1;
  }
  lVar2 = FUN_145075c30(*plVar5 + 0x18,CONCAT44(param_3,param_4),&param_5);
  uVar4 = 1;
  if (lVar2 == 0) {
    uVar4 = 0x34;
  }
  return uVar4;
}



// FUNCTION 1450763d0 FUN_1450763d0 body=67 status=ok
// SIG undefined FUN_1450763d0(void)

undefined8 FUN_1450763d0(undefined8 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar1 != piVar2 && (*piVar1 != param_2)); piVar1 = piVar1 + 4) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == piVar2) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    return 0x14;
  }
  **(undefined4 **)piVar3 = param_3;
  return 1;
}



// FUNCTION 145076420 FUN_145076420 body=80 status=ok
// SIG undefined FUN_145076420(void)

/* WARNING: Removing unreachable block (ram,0x00014507646a) */

undefined4 FUN_145076420(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar1 != piVar2 && (*piVar1 != param_2)); piVar1 = piVar1 + 4) {
  }
  plVar3 = (longlong *)(piVar1 + 2);
  if (piVar1 == piVar2) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    return *(undefined4 *)(*plVar3 + 4);
  }
  return 0;
}



// FUNCTION 145076470 FUN_145076470 body=72 status=ok
// SIG undefined FUN_145076470(void)

ulonglong FUN_145076470(undefined8 *param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  
  piVar2 = (int *)*param_1;
  piVar3 = piVar2 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar2 != piVar3 && (*piVar2 != param_2)); piVar2 = piVar2 + 4) {
  }
  plVar4 = (longlong *)(piVar2 + 2);
  if (piVar2 == piVar3) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 == (longlong *)0x0) {
    *param_3 = 0x2ca33bdb;
    return (ulonglong)piVar2 & 0xffffffffffffff00;
  }
  lVar1 = *plVar4;
  *param_3 = *(undefined4 *)(lVar1 + 4);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 1450764c0 FUN_1450764c0 body=213 status=ok
// SIG undefined FUN_1450764c0(void)

undefined8 FUN_1450764c0(longlong *param_1,char param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  puVar3 = (undefined8 *)*param_1;
  uVar6 = *(uint *)(param_1 + 1);
  puVar5 = puVar3;
  if (puVar3 != puVar3 + (ulonglong)uVar6 * 2) {
    do {
      pvVar1 = (void *)puVar5[1];
      if ((param_2 == '\0') || (*(longlong *)((longlong)pvVar1 + 0x10) == 0)) {
        if (*(void **)((longlong)pvVar1 + 0x18) != (void *)0x0) {
          *(undefined4 *)((longlong)pvVar1 + 0x20) = 0;
          AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar1 + 0x18));
          *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
          *(undefined4 *)((longlong)pvVar1 + 0x24) = 0;
        }
        *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
        AK::MemoryMgr::Free(2,pvVar1);
        puVar3 = (undefined8 *)*param_1;
        puVar4 = puVar3 + (ulonglong)*(uint *)(param_1 + 1) * 2 + -2;
        if (puVar5 < puVar4) {
          uVar2 = puVar4[1];
          *puVar5 = *puVar4;
          puVar5[1] = uVar2;
          puVar3 = (undefined8 *)*param_1;
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        uVar6 = *(uint *)(param_1 + 1);
      }
      else {
        puVar5 = puVar5 + 2;
      }
    } while (puVar5 != puVar3 + (ulonglong)uVar6 * 2);
  }
  return 1;
}



// FUNCTION 1450765a0 FUN_1450765a0 body=157 status=ok
// SIG undefined FUN_1450765a0(void)

undefined8 FUN_1450765a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(0,0x18);
    if (puVar2 == (undefined8 *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_14507661c;
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar2;
  }
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    *(undefined8 **)(param_1 + 0x10) = puVar2;
  }
  else {
    **(longlong **)(param_1 + 0x18) = (longlong)puVar2;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = *puVar2;
  *puVar2 = 0;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  lVar1 = *(longlong *)(param_1 + 0x18);
  plVar4 = (longlong *)(lVar1 + 8);
  *plVar4 = param_2;
  *(ulonglong *)(lVar1 + 0x10) = CONCAT44(uStack_c,param_3);
LAB_14507661c:
  uVar3 = 0x34;
  if (plVar4 != (longlong *)0x0) {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 145076640 FUN_145076640 body=216 status=ok
// SIG undefined FUN_145076640(void)

undefined8 FUN_145076640(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)0x0;
  while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
    if (puVar2[1] == param_2) {
      puVar1 = (undefined8 *)*puVar2;
      if (*(char *)(param_1 + 0x38) == '\0') {
        if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
          *(undefined8 **)(param_1 + 0x10) = puVar1;
        }
        else {
          *puVar3 = puVar1;
        }
        if (puVar2 == *(undefined8 **)(param_1 + 0x18)) {
          *(undefined8 **)(param_1 + 0x18) = puVar3;
        }
        if ((puVar2 < *(undefined8 **)(param_1 + 0x28)) ||
           (*(undefined8 **)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 3 <= puVar2))
        {
          AK::MemoryMgr::Free(0,puVar2);
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        }
        else {
          *puVar2 = *(undefined8 *)(param_1 + 0x20);
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
          *(undefined8 **)(param_1 + 0x20) = puVar2;
        }
      }
      else {
        puVar2[1] = 0;
        *(undefined1 *)(param_1 + 0x39) = 1;
        puVar3 = puVar2;
      }
    }
    else {
      puVar1 = (undefined8 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  return 1;
}



// FUNCTION 145076720 FUN_145076720 body=151 status=ok
// SIG undefined FUN_145076720(void)

undefined8 FUN_145076720(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uStack_1c;
  
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(0,0x20);
    if (puVar2 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
    *(undefined8 **)(param_1 + 0x40) = puVar2;
  }
  else {
    **(longlong **)(param_1 + 0x48) = (longlong)puVar2;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x48) = puVar2;
  *(undefined8 *)(param_1 + 0x50) = *puVar2;
  *puVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  *(undefined8 *)(lVar1 + 8) = param_2;
  *(ulonglong *)(lVar1 + 0x10) = (ulonglong)uStack_1c << 0x20;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  return 1;
}



// FUNCTION 1450767c0 FUN_1450767c0 body=163 status=ok
// SIG undefined FUN_1450767c0(void)

undefined8 FUN_1450767c0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  puVar3 = (undefined8 *)0x0;
  while (puVar2 = puVar3, puVar3 = puVar1, puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    if (puVar3[1] == param_2) {
      if (puVar3 == *(undefined8 **)(param_1 + 0x40)) {
        *(undefined8 **)(param_1 + 0x40) = puVar1;
      }
      else {
        *puVar2 = puVar1;
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x48)) {
        *(undefined8 **)(param_1 + 0x48) = puVar2;
      }
      if ((puVar3 < *(undefined8 **)(param_1 + 0x58)) ||
         (*(undefined8 **)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60) * 4 <= puVar3)) {
        AK::MemoryMgr::Free(0,puVar3);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        puVar3 = puVar2;
      }
      else {
        *puVar3 = *(undefined8 *)(param_1 + 0x50);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        *(undefined8 **)(param_1 + 0x50) = puVar3;
        puVar3 = puVar2;
      }
    }
  }
  return 1;
}



// FUNCTION 145076870 FUN_145076870 body=89 status=ok
// SIG undefined FUN_145076870(void)

void FUN_145076870(longlong param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (((*(int *)(puVar1 + 2) == 0) || (*(int *)(puVar1 + 2) == param_2)) &&
       ((param_3 == 0 || (puVar1[3] == param_3)))) {
      (*(code *)**(undefined8 **)puVar1[1])((undefined8 *)puVar1[1],param_2);
    }
  }
  return;
}



// FUNCTION 1450768d0 FUN_1450768d0 body=1449 status=ok
// SIG undefined FUN_1450768d0(void)

void FUN_1450768d0(undefined8 *param_1,int param_2,uint param_3,char param_4,char param_5)

{
  float *pfVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  uint *puVar8;
  longlong lVar9;
  short *psVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int *piVar17;
  float *pfVar18;
  int *piVar19;
  byte bVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong *plVar23;
  float fVar24;
  float fVar25;
  uint local_res8;
  uint uStackX_c;
  uint local_e8;
  uint local_e4;
  uint local_e0 [2];
  undefined8 local_d8;
  undefined8 *local_d0;
  uint *local_c8;
  longlong local_c0;
  ulonglong local_b8;
  float local_b0;
  float local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  byte local_9c;
  undefined2 local_9b;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  
  piVar7 = (int *)*param_1;
  piVar19 = piVar7 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar7 != piVar19 && (*piVar7 != param_2)); piVar7 = piVar7 + 4) {
  }
  piVar17 = (int *)0x0;
  piVar11 = piVar7 + 2;
  if (piVar7 == piVar19) {
    piVar11 = piVar17;
  }
  if (piVar11 != (int *)0x0) {
    puVar14 = *(uint **)piVar11;
    local_c8 = puVar14;
    if (param_5 == '\0') {
      uVar22 = puVar14[1];
      if (uVar22 != param_3) {
        puVar16 = (undefined8 *)param_1[2];
        *(undefined1 *)(param_1 + 7) = 1;
        for (; puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)*puVar16) {
          if ((*(int *)(puVar16 + 2) == param_2) &&
             (plVar23 = (longlong *)puVar16[1], plVar23 != (longlong *)0x0)) {
            local_c0 = 0;
            local_b8 = local_b8 & 0xffffffff00000000;
            local_b0 = 0.0;
            uVar13 = local_a8 >> 8;
            local_a8 = CONCAT31((int3)uVar13,0xff);
            uVar13 = (uint)local_a0 >> 8;
            local_a0 = CONCAT31((int3)uVar13,0xff);
            local_98 = 0;
            uVar21 = (ulonglong)local_d8 >> 0x28;
            local_d8._5_3_ = (undefined3)uVar21;
            local_d8._0_5_ = CONCAT14(3,param_2);
            local_res8 = param_3;
            local_e0[0] = uVar22;
            (**(code **)(*plVar23 + 8))(plVar23,local_d8,&local_c0,local_e0,&local_res8);
          }
        }
        if (*(char *)((longlong)param_1 + 0x39) != '\0') {
          piVar7 = (int *)param_1[2];
          piVar19 = piVar17;
          while (piVar11 = piVar19, piVar19 = piVar7, piVar19 != (int *)0x0) {
            piVar7 = *(int **)piVar19;
            if (*(longlong *)(piVar19 + 2) == 0) {
              if (piVar19 == (int *)param_1[2]) {
                param_1[2] = piVar7;
              }
              else {
                *(int **)piVar11 = piVar7;
              }
              if (piVar19 == (int *)param_1[3]) {
                param_1[3] = piVar11;
              }
              if ((piVar19 < (int *)param_1[5]) ||
                 ((int *)param_1[5] + (ulonglong)*(uint *)(param_1 + 6) * 6 <= piVar19)) {
                AK::MemoryMgr::Free(0,piVar19);
                *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
                piVar19 = piVar11;
              }
              else {
                *(undefined8 *)piVar19 = param_1[4];
                *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
                param_1[4] = piVar19;
                piVar19 = piVar11;
              }
            }
          }
          *(undefined1 *)((longlong)param_1 + 0x39) = 0;
        }
        *(undefined1 *)(param_1 + 7) = 0;
      }
      puVar14 = local_c8;
      if (((DAT_14c791000 != (code *)0x0) && (param_4 == '\0')) &&
         (cVar6 = (*DAT_14c791000)(param_2,param_3), cVar6 != '\0')) {
        return;
      }
    }
    local_res8 = puVar14[1];
    local_e4 = 0;
    uStackX_c = param_3;
    if (param_4 == '\0') {
      if (local_res8 == param_3) {
        return;
      }
      puVar8 = (uint *)FUN_145075be0(puVar14 + 6,CONCAT44(param_3,local_res8));
      if (puVar8 == (uint *)0x0) {
        local_e4 = *puVar14;
      }
      else {
        local_e4 = *puVar8;
      }
      piVar17 = (int *)(ulonglong)local_e4;
    }
    lVar15 = *(longlong *)(puVar14 + 4);
    if (lVar15 != 0) {
      local_90 = 0;
      do {
        plVar23 = *(longlong **)(lVar15 + 0x18);
        *(uint *)(lVar15 + 0x3c) = param_3;
        local_d8 = plVar23;
        lVar9 = FUN_1453537a0(lVar15);
        puVar16 = (undefined8 *)(lVar9 + 0x18);
        if (lVar9 == 0) {
          puVar16 = &local_90;
        }
        local_d0 = puVar16;
        local_88 = (longlong *)(**(code **)(*plVar23 + 0x30))(plVar23);
        if (local_88 != (longlong *)0x0) {
          uVar21 = 0;
          local_e8 = 0;
          if ((int)local_88[1] != 0) {
            do {
              lVar9 = *local_88;
              puVar3 = *(ushort **)(lVar15 + 0x20);
              uVar22 = (uint)uVar21;
              bVar20 = *(byte *)(lVar9 + 3 + uVar21 * 4);
              cVar6 = *(char *)(lVar9 + 2 + uVar21 * 4);
              uVar2 = *(ushort *)(lVar9 + uVar21 * 4);
              local_res8 = CONCAT31(local_res8._1_3_,bVar20) & 0xffffff01;
              uVar21 = (ulonglong)((uint7)CONCAT22(CONCAT11(bVar20,cVar6),uVar2) & 0x1ffffff);
              local_e0[0] = (uint)piVar17;
              if (cVar6 == '\x04') {
                local_e0[0] = 0;
              }
              if (puVar3 != (ushort *)0x0) {
                uVar12 = 0;
                do {
                  uVar13 = (int)uVar12 + 1;
                  if (puVar3[uVar13] == uVar2) {
                    pfVar18 = (float *)((longlong)puVar3 +
                                       uVar12 * 0x10 +
                                       ((ulonglong)((uint)*puVar3 * 2 + 9) & 0xfffffff8));
                    goto LAB_145076bb7;
                  }
                  uVar12 = (ulonglong)uVar13;
                } while (uVar13 < *puVar3);
              }
              pfVar18 = (float *)0x0;
LAB_145076bb7:
              if (cVar6 == '\x03') {
                fVar25 = 1.0;
              }
              else {
                fVar25 = 0.0;
              }
              puVar4 = (ushort *)*puVar16;
              fVar24 = fVar25;
              if (puVar4 != (ushort *)0x0) {
                uVar12 = 0;
                do {
                  uVar13 = (int)uVar12 + 1;
                  if (puVar4[uVar13] == uVar2) {
                    pfVar1 = (float *)((longlong)puVar4 +
                                      uVar12 * 4 + ((ulonglong)((uint)*puVar4 * 2 + 5) & 0xfffffffc)
                                      );
                    if (pfVar1 != (float *)0x0) {
                      fVar24 = *pfVar1;
                    }
                    break;
                  }
                  uVar12 = (ulonglong)uVar13;
                } while (uVar13 < *puVar4);
              }
              if (pfVar18 == (float *)0x0) {
LAB_145076c6c:
                if (fVar25 != fVar24) {
                  bVar20 = bVar20 & 1;
                  if (pfVar18 == (float *)0x0) {
                    if (puVar3 == (ushort *)0x0) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = (ulonglong)*puVar3;
                    }
                    iVar5 = (int)uVar12;
                    uVar22 = iVar5 * 2 + 0xb;
                    psVar10 = AK::MemoryMgr::Malloc
                                        (0,(ulonglong)((uVar22 & 0xfffffff8) + (iVar5 + 1) * 0x10));
                    if (psVar10 == (short *)0x0) {
                      pfVar18 = (float *)0x0;
                    }
                    else {
                      if (*(longlong *)(lVar15 + 0x20) != 0) {
                        memcpy(psVar10 + 1,(void *)(*(longlong *)(lVar15 + 0x20) + 2),uVar12 * 2);
                        memcpy((void *)(((ulonglong)uVar22 & 0xfffffff8) + (longlong)psVar10),
                               (void *)(((ulonglong)(iVar5 * 2 + 9) & 0xfffffff8) +
                                       *(longlong *)(lVar15 + 0x20)),uVar12 << 4);
                        AK::MemoryMgr::Free(0,*(void **)(lVar15 + 0x20));
                      }
                      psVar10[iVar5 + 1] = uVar2;
                      *psVar10 = (short)uVar12 + 1;
                      *(short **)(lVar15 + 0x20) = psVar10;
                      pfVar18 = (float *)((longlong)psVar10 +
                                         uVar12 * 0x10 + ((ulonglong)uVar22 & 0xfffffff8));
                      if (pfVar18 != (float *)0x0) {
                        *pfVar18 = 0.0;
                        pfVar18[2] = 0.0;
                        pfVar18[3] = 0.0;
                      }
                    }
                    plVar23 = local_d8;
                    bVar20 = (byte)local_res8;
                    uVar22 = local_e8;
                  }
                  if ((float)(int)local_e0[0] == 0.0) {
LAB_145076dcc:
                    FUN_145353b30(lVar15,uVar21,fVar24,1);
                  }
                  else {
                    local_a8 = local_e0[0];
                    local_a4 = 4;
                    local_a0 = 0xc;
                    local_9b = 1;
                    local_c0 = lVar15;
                    local_b8 = uVar21;
                    local_b0 = fVar25;
                    local_ac = fVar24;
                    local_9c = bVar20;
                    lVar9 = FUN_1450b0a50(DAT_14c791068,&local_c0,1);
                    if (pfVar18 == (float *)0x0) {
                      if (lVar9 != 0) {
LAB_145076de4:
                        FUN_1450b0bd0(DAT_14c791068,lVar9,lVar15);
                      }
                    }
                    else {
                      *(longlong *)(pfVar18 + 2) = lVar9;
                      if (lVar9 == 0) {
                        *pfVar18 = fVar24;
                        goto LAB_145076dcc;
                      }
                      cVar6 = (**(code **)(*plVar23 + 8))(plVar23);
                      if (cVar6 == '\0') {
                        FUN_145353b30(lVar15,uVar21,fVar24,1);
                        goto LAB_145076de4;
                      }
                    }
                  }
                }
              }
              else {
                if (*(longlong *)(pfVar18 + 2) == 0) {
                  fVar25 = *pfVar18;
                  goto LAB_145076c6c;
                }
                FUN_1450b0c80(DAT_14c791068,*(longlong *)(pfVar18 + 2),uVar21,fVar24,local_e0[0],4,0
                             );
              }
              local_e8 = uVar22 + 1;
              uVar21 = (ulonglong)local_e8;
              piVar17 = (int *)(ulonglong)local_e4;
              puVar16 = local_d0;
            } while (local_e8 < *(uint *)(local_88 + 1));
          }
        }
        lVar15 = *(longlong *)(lVar15 + 8);
        piVar17 = (int *)(ulonglong)local_e4;
      } while (lVar15 != 0);
    }
    local_c8[1] = param_3;
  }
  return;
}



// FUNCTION 145076e80 FUN_145076e80 body=193 status=ok
// SIG undefined FUN_145076e80(void)

longlong * FUN_145076e80(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  lVar1 = 0x90;
  if (param_3 != 1) {
    lVar1 = 0xa0;
  }
  puVar3 = (undefined8 *)(param_1 + lVar1);
  for (plVar2 = (longlong *)puVar3[1]; plVar2 != (longlong *)0x0; plVar2 = (longlong *)*plVar2) {
    if (param_2 == (int)plVar2[3]) goto LAB_145076f20;
  }
  plVar2 = AK::MemoryMgr::Malloc(2,0x30);
  if (plVar2 != (longlong *)0x0) {
    *(int *)(plVar2 + 3) = param_2;
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    if (puVar3[1] == 0) {
      puVar3[1] = plVar2;
      *puVar3 = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = puVar3[1];
      puVar3[1] = plVar2;
    }
  }
LAB_145076f20:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return plVar2;
}



// FUNCTION 145076f50 FUN_145076f50 body=512 status=ok
// SIG undefined FUN_145076f50(void)

int FUN_145076f50(longlong param_1,int param_2,int param_3,int param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  lVar7 = 0x90;
  if (param_2 != 1) {
    lVar7 = 0xa0;
  }
  puVar11 = (undefined8 *)(param_1 + lVar7);
  for (plVar8 = (longlong *)puVar11[1]; plVar8 != (longlong *)0x0; plVar8 = (longlong *)*plVar8) {
    if (param_3 == (int)plVar8[3]) goto LAB_145076ff3;
  }
  plVar8 = AK::MemoryMgr::Malloc(2,0x30);
  if (plVar8 != (longlong *)0x0) {
    *(int *)(plVar8 + 3) = param_3;
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    if (puVar11[1] == 0) {
      puVar11[1] = plVar8;
      *puVar11 = plVar8;
      *plVar8 = 0;
    }
    else {
      *plVar8 = puVar11[1];
      puVar11[1] = plVar8;
    }
  }
LAB_145076ff3:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (plVar8 == (longlong *)0x0) {
    if (param_5 != '\0') {
      return 0x34;
    }
  }
  else {
    piVar9 = (int *)plVar8[1];
    plVar1 = plVar8 + 1;
    uVar10 = (ulonglong)*(uint *)(plVar8 + 2);
    piVar2 = piVar9 + uVar10;
    for (; piVar9 != piVar2; piVar9 = piVar9 + 1) {
      if (*piVar9 == param_4) {
        if (param_5 != '\0') {
          return 1;
        }
        if (piVar9 < piVar2 + -1) {
          *piVar9 = piVar2[-1];
        }
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
        goto LAB_1450770a7;
      }
    }
    if (param_5 != '\0') {
      if (((uVar10 < *(uint *)((longlong)plVar8 + 0x14)) ||
          (cVar5 = FUN_145075970(plVar1), cVar5 != '\0')) &&
         (uVar10 < *(uint *)((longlong)plVar8 + 0x14))) {
        uVar3 = *(uint *)(plVar8 + 2);
        *(uint *)(plVar8 + 2) = uVar3 + 1;
        piVar2 = (int *)(*plVar1 + (ulonglong)uVar3 * 4);
        if (piVar2 != (int *)0x0) {
          *piVar2 = param_4;
        }
      }
LAB_1450770a7:
      puVar11 = (undefined8 *)plVar8[5];
      if (puVar11 == (undefined8 *)0x0) {
        return 1;
      }
      while (iVar6 = (**(code **)*puVar11)(puVar11,param_4,param_5), iVar6 == 1) {
        puVar11 = (undefined8 *)puVar11[1];
        if (puVar11 == (undefined8 *)0x0) {
          return 1;
        }
      }
      if (param_5 != '\0') {
        for (puVar4 = (undefined8 *)plVar8[5]; puVar11 != puVar4; puVar4 = (undefined8 *)puVar4[1])
        {
          (**(code **)*puVar4)(puVar4,param_4,0);
        }
      }
      piVar9 = (int *)*plVar1;
      piVar2 = piVar9 + *(uint *)(plVar8 + 2);
      if (piVar9 == piVar2) {
        return iVar6;
      }
      do {
        if (*piVar9 == param_4) {
          if (piVar9 < piVar2 + -1) {
            *piVar9 = piVar2[-1];
          }
          *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
          return iVar6;
        }
        piVar9 = piVar9 + 1;
      } while (piVar9 != piVar2);
      return iVar6;
    }
  }
  return 1;
}



// FUNCTION 145077150 FUN_145077150 body=190 status=ok
// SIG undefined FUN_145077150(void)

undefined8 FUN_145077150(longlong *param_1)

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
      goto LAB_1450771f1;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450771f1:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145077210 FUN_145077210 body=175 status=ok
// SIG undefined FUN_145077210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145077210(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    param_2[1] = 0;
    *param_2 = 0;
    return;
  }
  do {
    plVar1 = (longlong *)*plVar3;
    plVar2 = plVar1;
    if (plVar3 == (longlong *)param_2[1]) {
      param_2[1] = plVar1;
      plVar2 = (longlong *)_DAT_00000000;
    }
    _DAT_00000000 = (longlong)plVar2;
    if (plVar3 == (longlong *)*param_2) {
      *param_2 = 0;
    }
    plVar3[5] = 0;
    plVar3[4] = 0;
    if ((void *)plVar3[1] != (void *)0x0) {
      *(undefined4 *)(plVar3 + 2) = 0;
      AK::MemoryMgr::Free(0,(void *)plVar3[1]);
      plVar3[1] = 0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 0;
    }
    AK::MemoryMgr::Free(2,plVar3);
    plVar3 = plVar1;
  } while (plVar1 != (longlong *)0x0);
  param_2[1] = 0;
  *param_2 = 0;
  return;
}



// FUNCTION 1450772c0 FUN_1450772c0 body=262 status=ok
// SIG undefined FUN_1450772c0(void)

undefined8 FUN_1450772c0(void *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  uint uVar6;
  
  pvVar2 = *(void **)((longlong)param_1 + 0x10);
  uVar6 = *(int *)((longlong)param_1 + 0x1c) + param_2;
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  _Var4 = (ulonglong)uVar6 << 3;
  pvVar3 = param_1;
  if (pvVar2 == (void *)0x0) {
    if (8 < _Var4) {
      pvVar3 = AK::MemoryMgr::Malign(4,_Var4,0x10);
    }
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    if ((*(void **)((longlong)param_1 + 0x10) != (void *)0x0) &&
       (*(void **)((longlong)param_1 + 0x10) != pvVar3)) {
      uVar5 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar3 + uVar5 * 8) =
               *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10) + uVar5 * 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
      if (param_1 != *(void **)((longlong)param_1 + 0x10)) {
        AK::MemoryMgr::Free(4,*(void **)((longlong)param_1 + 0x10));
      }
    }
  }
  else {
    if (8 < _Var4) {
      if (param_1 == pvVar2) {
        pvVar3 = AK::MemoryMgr::Malign(4,_Var4,0x10);
        if (pvVar3 == (void *)0x0) {
          return 0;
        }
        memcpy(pvVar3,param_1,(ulonglong)(uVar1 * 8));
        goto LAB_1450773a8;
      }
      pvVar3 = AK::MemoryMgr::ReallocAligned(4,pvVar2,_Var4,0x10);
    }
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
  }
LAB_1450773a8:
  *(void **)((longlong)param_1 + 0x10) = pvVar3;
  *(uint *)((longlong)param_1 + 0x1c) = uVar6;
  return 1;
}



// FUNCTION 1450773d0 FUN_1450773d0 body=271 status=ok
// SIG undefined FUN_1450773d0(void)

undefined8 * FUN_1450773d0(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  void *_Src;
  
  puVar5 = (undefined8 *)FUN_1450774e0();
  if (*param_3 != '\0') {
    return puVar5;
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (puVar5 == (undefined8 *)0x0) {
    if (uVar2 <= uVar6) {
      if (uVar2 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = (uVar2 >> 1) + uVar2;
      }
      cVar3 = FUN_1450772c0(param_1,iVar4);
      if (cVar3 == '\0') {
        return (undefined8 *)0x0;
      }
    }
    if (uVar6 < *(uint *)(param_1 + 0x1c)) {
      uVar6 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar6 + 1;
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6 * 8);
      goto LAB_1450774b9;
    }
  }
  else {
    uVar7 = (longlong)puVar5 - *(longlong *)(param_1 + 0x10) >> 3;
    if (uVar2 <= uVar6) {
      iVar4 = (uVar2 >> 1) + uVar2;
      if (uVar2 == 0) {
        iVar4 = 1;
      }
      cVar3 = FUN_1450772c0(param_1,iVar4);
      if (cVar3 == '\0') {
        return (undefined8 *)0x0;
      }
    }
    if (uVar6 < *(uint *)(param_1 + 0x1c)) {
      uVar6 = (uint)uVar7;
      lVar1 = (uVar7 & 0xffffffff) * 8;
      _Src = (void *)(*(longlong *)(param_1 + 0x10) + lVar1);
      if (uVar6 < *(uint *)(param_1 + 0x18)) {
        memmove((void *)((longlong)_Src + 8),_Src,
                (ulonglong)((*(uint *)(param_1 + 0x18) - uVar6) * 8));
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar1);
LAB_1450774b9:
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = param_2;
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1450774e0 FUN_1450774e0 body=134 status=ok
// SIG undefined FUN_1450774e0(void)

longlong FUN_1450774e0(longlong param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar7 = 0;
  if (uVar6 != 0) {
    do {
      iVar4 = (uVar6 >> 1) + iVar7;
      lVar2 = (longlong)iVar4 * 8;
      uVar3 = *(ulonglong *)(lVar2 + *plVar1);
      if (uVar3 == param_2) {
        *param_3 = 1;
        return *plVar1 + lVar2;
      }
      uVar5 = uVar6 - 1;
      iVar4 = iVar4 + 1;
      if (param_2 <= uVar3) {
        uVar5 = uVar6;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      uVar6 = uVar5 >> 1;
    } while (uVar6 != 0);
  }
  *param_3 = 0;
  return *plVar1 + (longlong)iVar7 * 8;
}



// FUNCTION 145077570 FUN_145077570 body=125 status=ok
// SIG undefined FUN_145077570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145077570(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149c237a8;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c7913d0) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar2 = DAT_14c7913d0;
  }
  DAT_14c7913d0 = puVar2;
  if (param_1 == DAT_14c7913c8) {
    DAT_14c7913c8 = puVar1;
  }
  _DAT_14c7913c0 = _DAT_14c7913c0 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1450775f0 FUN_1450775f0 body=293 status=ok
// SIG undefined FUN_1450775f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450775f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149c237a8;
  param_1[3] = DAT_14c7913c8;
  param_1[2] = 0;
  puVar1 = param_1;
  if (DAT_14c7913d0 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_14c7913c8 + 0x10) = param_1;
    puVar1 = DAT_14c7913d0;
  }
  DAT_14c7913d0 = puVar1;
  _DAT_14c7913c0 = _DAT_14c7913c0 + 1;
  DAT_14c7913c8 = param_1;
  *param_1 = &PTR_FUN_149c237b8;
  *(undefined1 *)(param_1 + 7) = 0;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xff;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((longlong)param_1 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)((longlong)param_1 + 0x74);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((longlong)param_1 + 100);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 145077720 FUN_145077720 body=117 status=ok
// SIG undefined FUN_145077720(void)

undefined8 FUN_145077720(longlong param_1)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  if ((lVar1 != 0) && (*(short *)(lVar1 + 0x38) != 0)) {
    FUN_14507b200(param_1,*(undefined8 *)(lVar1 + 0x20));
    FUN_1450773d0(&DAT_14c79be10,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),local_res8);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar1 + 0x78);
    FUN_1450773d0(&DAT_14c79be10,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),local_res8);
  }
  return 1;
}



// FUNCTION 1450777a0 FUN_1450777a0 body=116 status=ok
// SIG undefined FUN_1450777a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450777a0(void)

{
  undefined8 *puVar1;
  
  if (DAT_14c79be20 != (undefined *)0x0) {
    DAT_14c79be28 = 0;
    if (DAT_14c79be20 != &DAT_14c79be10) {
      AK::MemoryMgr::Free(4,DAT_14c79be20);
    }
    DAT_14c79be20 = (undefined *)0x0;
    _DAT_14c79be2c = 0;
  }
  puVar1 = DAT_14c79c4e0;
  if (DAT_14c79c4e0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c79c4e0)(DAT_14c79c4e0,0);
    AK::MemoryMgr::Free(4,puVar1);
    DAT_14c79c4e0 = (undefined8 *)0x0;
  }
  return;
}



// FUNCTION 145077820 FUN_145077820 body=38 status=ok
// SIG undefined FUN_145077820(void)

undefined8 FUN_145077820(__uint64 param_1)

{
  CAkRegisteredObj *pCVar1;
  
  pCVar1 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
  if (pCVar1 != (CAkRegisteredObj *)0x0) {
    return *(undefined8 *)(pCVar1 + 0x20);
  }
  return 0;
}



// FUNCTION 145077850 FUN_145077850 body=1430 status=ok
// SIG undefined FUN_145077850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_145077850(__uint64 param_1,undefined1 param_2,uint param_3,void *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  CAkRegisteredObj *pCVar5;
  longlong *plVar6;
  void *_Dst;
  float *pfVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  pCVar5 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
  lVar8 = 0;
  uVar4 = 0;
  if ((pCVar5 == (CAkRegisteredObj *)0x0) ||
     (plVar6 = *(longlong **)(pCVar5 + 0x20), plVar6 == (longlong *)0x0)) {
    pCVar5 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
    if (pCVar5 == (CAkRegisteredObj *)0x0) {
      return 0x1f;
    }
    plVar6 = *(longlong **)(pCVar5 + 0x20);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = AK::MemoryMgr::Malloc(4,0xa0);
      if (plVar6 == (longlong *)0x0) {
        return 0x34;
      }
      plVar6[1] = 0;
      *plVar6 = (longlong)&PTR_FUN_149c237a8;
      plVar6[3] = (longlong)DAT_14c7913c8;
      plVar6[2] = 0;
      plVar2 = plVar6;
      if (DAT_14c7913d0 != (longlong *)0x0) {
        DAT_14c7913c8[2] = (longlong)plVar6;
        plVar2 = DAT_14c7913d0;
      }
      DAT_14c7913d0 = plVar2;
      _DAT_14c7913c0 = _DAT_14c7913c0 + 1;
      DAT_14c7913c8 = plVar6;
      *plVar6 = (longlong)&PTR_FUN_149c237b8;
      *(undefined1 *)(plVar6 + 7) = 0;
      *(uint *)(plVar6 + 7) = *(uint *)(plVar6 + 7) & 0xff;
      *(undefined4 *)(plVar6 + 0x12) = 0x3f800000;
      *(undefined1 *)((longlong)plVar6 + 0x94) = 1;
      plVar6[4] = 0;
      plVar6[5] = 0;
      plVar6[6] = 0;
      plVar6[0x13] = 0;
      *(undefined4 *)(plVar6 + 0xc) = 0;
      *(undefined4 *)((longlong)plVar6 + 100) = 0;
      *(undefined4 *)(plVar6 + 0xd) = 0x3f800000;
      *(undefined4 *)((longlong)plVar6 + 0x6c) = 0;
      *(undefined4 *)(plVar6 + 0xe) = 0x3f800000;
      *(undefined4 *)((longlong)plVar6 + 0x74) = 0;
      *(undefined4 *)(plVar6 + 0xf) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x7c) = 0;
      plVar6[0x10] = 0;
      plVar6[0x11] = 0;
      *(undefined4 *)(plVar6 + 9) = *(undefined4 *)((longlong)plVar6 + 0x6c);
      *(int *)((longlong)plVar6 + 0x4c) = (int)plVar6[0xe];
      *(undefined4 *)(plVar6 + 10) = *(undefined4 *)((longlong)plVar6 + 0x74);
      *(int *)((longlong)plVar6 + 0x54) = (int)plVar6[0xc];
      *(undefined4 *)(plVar6 + 0xb) = *(undefined4 *)((longlong)plVar6 + 100);
      *(int *)((longlong)plVar6 + 0x5c) = (int)plVar6[0xd];
      *(undefined4 *)((longlong)plVar6 + 0x3c) = 0x3f800000;
      *(undefined4 *)((longlong)plVar6 + 0x44) = 0;
      *(undefined4 *)(plVar6 + 8) = 0x80000000;
      *(longlong **)(pCVar5 + 0x20) = plVar6;
      plVar6[1] = (longlong)pCVar5;
      iVar3 = (**(code **)(*plVar6 + 8))(plVar6,*(undefined8 *)(pCVar5 + 0x58));
      if (iVar3 != 1) {
        (**(code **)*plVar6)(plVar6,0);
        AK::MemoryMgr::Free(4,plVar6);
        *(undefined8 *)(pCVar5 + 0x20) = 0;
        return 0x34;
      }
    }
  }
  *(undefined1 *)((longlong)plVar6 + 0x94) = param_2;
  if ((void *)plVar6[4] != (void *)0x0) {
    AK::MemoryMgr::Free(4,(void *)plVar6[4]);
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
  }
  if (param_4 != (void *)0x0) {
    uVar10 = param_3 & 0xff;
    if ((char)param_3 == '\0') {
      return 0x4e;
    }
    uVar11 = uVar10 + 7 >> 3;
    _Dst = AK::MemoryMgr::Malign(4,(ulonglong)(uVar11 * 0x40),0x10);
    plVar6[4] = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
      return 2;
    }
    *(uint *)(plVar6 + 7) = param_3;
    plVar6[5] = (longlong)_Dst;
    plVar6[6] = (ulonglong)(uVar11 << 5) + (longlong)_Dst;
    memcpy(_Dst,param_4,(ulonglong)uVar10 << 2);
    memcpy((void *)plVar6[6],(void *)plVar6[5],(ulonglong)uVar10 << 2);
    lVar1 = plVar6[6];
    if (uVar10 < 4) {
      if (uVar10 == 0) {
        return 1;
      }
    }
    else {
      pfVar7 = (float *)(lVar1 + 8);
      uVar4 = (uVar10 - 4 >> 2) + 1;
      uVar9 = (ulonglong)uVar4;
      lVar8 = (ulonglong)uVar4 * 4;
      uVar4 = uVar4 * 4;
      do {
        fVar12 = pfVar7[-2] * 0.05;
        if ((fVar12 < -37.0) || (37.0 < fVar12)) {
          fVar12 = 0.0;
        }
        else {
          uVar11 = (uint)(longlong)(fVar12 * 27866352.0 + 1.0653532e+09);
          fVar12 = (float)((uVar11 & 0x7fffff) + 0x3f800000);
          fVar12 = ((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                   (float)(uVar11 & 0xff800000);
        }
        fVar13 = pfVar7[-1] * 0.05;
        pfVar7[-2] = fVar12;
        if ((fVar13 < -37.0) || (37.0 < fVar13)) {
          fVar12 = 0.0;
        }
        else {
          uVar11 = (uint)(longlong)(fVar13 * 27866352.0 + 1.0653532e+09);
          fVar12 = (float)((uVar11 & 0x7fffff) + 0x3f800000);
          fVar12 = ((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                   (float)(uVar11 & 0xff800000);
        }
        fVar13 = *pfVar7 * 0.05;
        pfVar7[-1] = fVar12;
        if ((fVar13 < -37.0) || (37.0 < fVar13)) {
          fVar12 = 0.0;
        }
        else {
          uVar11 = (uint)(longlong)(fVar13 * 27866352.0 + 1.0653532e+09);
          fVar12 = (float)((uVar11 & 0x7fffff) + 0x3f800000);
          fVar12 = ((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                   (float)(uVar11 & 0xff800000);
        }
        fVar13 = pfVar7[1] * 0.05;
        *pfVar7 = fVar12;
        if ((fVar13 < -37.0) || (37.0 < fVar13)) {
          fVar12 = 0.0;
        }
        else {
          uVar11 = (uint)(longlong)(fVar13 * 27866352.0 + 1.0653532e+09);
          fVar12 = (float)((uVar11 & 0x7fffff) + 0x3f800000);
          fVar12 = ((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                   (float)(uVar11 & 0xff800000);
        }
        pfVar7[1] = fVar12;
        pfVar7 = pfVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      if (uVar10 <= uVar4) {
        return 1;
      }
    }
    pfVar7 = (float *)(lVar1 + lVar8 * 4);
    uVar9 = (ulonglong)(uVar10 - uVar4);
    do {
      fVar12 = *pfVar7 * 0.05;
      if ((fVar12 < -37.0) || (37.0 < fVar12)) {
        fVar12 = 0.0;
      }
      else {
        uVar4 = (uint)(longlong)(fVar12 * 27866352.0 + 1.0653532e+09);
        fVar12 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
        fVar12 = ((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                 (float)(uVar4 & 0xff800000);
      }
      *pfVar7 = fVar12;
      pfVar7 = pfVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return 1;
}



// FUNCTION 145077df0 FUN_145077df0 body=116 status=ok
// SIG undefined FUN_145077df0(void)

undefined8
FUN_145077df0(__uint64 param_1,undefined1 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  CAkRegisteredObj *pCVar2;
  
  pCVar2 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
  if ((pCVar2 != (CAkRegisteredObj *)0x0) && (lVar1 = *(longlong *)(pCVar2 + 0x20), lVar1 != 0)) {
    *param_2 = *(undefined1 *)(lVar1 + 0x94);
    *param_3 = *(undefined8 *)(lVar1 + 0x28);
    *param_4 = *(undefined4 *)(lVar1 + 0x38);
    return 1;
  }
  return 0x1f;
}



// FUNCTION 145077e70 FUN_145077e70 body=682 status=ok
// SIG undefined FUN_145077e70(void)

void FUN_145077e70(char param_1,uint param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_res20 [2];
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  puVar1 = (uint *)FUN_1453557d0(param_3,local_res20);
  if ((*puVar1 & 0xf00) == 0x300) {
    uVar4 = *(uint *)(param_4 + 0xb8);
    if ((uVar4 & 0xf00) == 0x300) {
      uVar4 = *(uint *)(param_4 + 0xc0);
    }
    FUN_145096cb0(param_2,uVar4,*(undefined8 *)(param_4 + 0xf8));
    return;
  }
  if (*(char *)(param_4 + 0x6c) == '\0') {
    if ((param_1 == '\0') && ((*(uint *)(param_3 + 0x198) >> 1 & 1) == 0)) {
      uVar4 = *(uint *)(param_4 + 0xb8);
      if ((uVar4 & 0xf00) == 0x300) {
        uVar4 = *(uint *)(param_4 + 0xc0);
      }
      uVar4 = ((uVar4 & 0xff) + 7 & 0xfffffff8) * (uint)*(byte *)(param_4 + 0xc0);
      if (uVar4 != 0) {
        memcpy(*(void **)(param_4 + 0xf8),*(void **)(param_4 + 0x100),(ulonglong)uVar4 << 2);
        return;
      }
    }
    else {
      uVar2 = FUN_1453557f0(param_3);
      lVar3 = FUN_1450a1a60(uVar2);
      if (lVar3 != 0) {
        uVar4 = *(uint *)(param_4 + 0xb8);
        if ((uVar4 & 0xf00) == 0x300) {
          uVar4 = *(uint *)(param_4 + 0xc0);
        }
        FUN_14507b570(param_4 + 0x58,param_2,uVar4,lVar3 + 200,*(undefined8 *)(param_4 + 0xf8));
        return;
      }
    }
  }
  else {
    uVar2 = FUN_1453557f0(param_3);
    lVar3 = FUN_1450a1a60(uVar2);
    if (lVar3 != 0) {
      uVar4 = param_2;
      if ((param_2 & 0xf00) == 0x100) {
        bVar5 = 0;
        uVar6 = param_2 >> 0xc & 0x637;
        for (uVar4 = uVar6; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
          bVar5 = bVar5 + 1;
        }
        uVar4 = uVar6 << 0xc | (uint)bVar5 | 0x100;
      }
      uVar6 = *(uint *)(param_4 + 0xb8);
      if ((uVar6 & 0xf00) == 0x300) {
        uVar6 = *(uint *)(param_4 + 0xc0);
      }
      local_res20[0] = param_2 & 0xff;
      uVar7 = (uVar6 & 0xff) + 7 >> 3;
      iVar8 = uVar7 * local_res20[0];
      memset(*(void **)(param_4 + 0xf8),0,(ulonglong)(uint)(iVar8 * 0x20));
      if ((char)uVar4 != '\0') {
        FUN_14507b5c0(param_4 + 0x58,param_4 + 0x28,1,param_2,CONCAT44(uVar9,uVar4),uVar6,iVar8 * 8,
                      lVar3 + 200,*(undefined8 *)(param_4 + 0xf8));
      }
      if (((param_2 >> 0xc & 8) != 0) && ((uVar6 & 0x8000) != 0)) {
        *(undefined4 *)
         (*(longlong *)(param_4 + 0xf8) +
         ((ulonglong)((local_res20[0] - 1) * uVar7 * 8) + (ulonglong)((uVar6 & 0xff) - 1)) * 4) =
             0x3f800000;
      }
    }
  }
  return;
}



// FUNCTION 145078120 FUN_145078120 body=4165 status=ok
// SIG undefined FUN_145078120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145078120(longlong param_1,uint param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5,char param_6,uint param_7,longlong param_8,longlong param_9)

{
  longlong lVar1;
  undefined1 *puVar2;
  float *pfVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  float *pfVar24;
  uint uVar25;
  ulonglong uVar26;
  byte bVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  float *pfVar31;
  void *pvVar32;
  int iVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  uint uVar37;
  void *pvVar38;
  uint uVar39;
  longlong lVar40;
  uint uVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  uint auStack_b8 [6];
  longlong local_a0 [3];
  uint local_88;
  int iStack_84;
  void *local_80;
  uint local_78;
  int iStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  undefined8 local_60;
  
  uVar39 = param_7 & 0xf00;
  uVar25 = param_7;
  if (uVar39 == 0x100) {
    bVar27 = 0;
    uVar30 = param_7 >> 0xc & 0x637;
    for (uVar25 = uVar30; uVar25 != 0; uVar25 = uVar25 & uVar25 - 1) {
      bVar27 = bVar27 + 1;
    }
    uVar25 = uVar30 << 0xc | (uint)bVar27 | 0x100;
  }
  uVar30 = *(uint *)(param_9 + 0xb8);
  if ((uVar30 & 0xf00) == 0x300) {
    uVar30 = *(uint *)(param_9 + 0xc0);
  }
  uStack_70 = param_7 & 0xff;
  uVar41 = uVar30 & 0xff;
  local_88 = uVar41 + 7 >> 3;
  iStack_74 = uStack_70 * local_88;
  local_68 = iStack_74 * 0x20;
  uVar19 = local_68 * param_2;
  iStack_84 = iStack_74 * 8;
  uVar22 = (ulonglong)uVar19 + 0xf;
  if (uVar22 <= uVar19) {
    uVar22 = 0xffffffffffffff0;
  }
  uStack_e0 = 0x145078214;
  lVar40 = -(uVar22 & 0xfffffffffffffff0);
  local_80 = (void *)((longlong)&local_88 + lVar40);
  local_78 = uVar39;
  uStack_6c = uVar30;
  *(undefined8 *)(auStack_d8 + lVar40 + -8) = 0x14507822a;
  memset((void *)((longlong)&local_88 + lVar40),0,(ulonglong)uVar19);
  pvVar38 = local_80;
  uVar21 = 0;
  uVar19 = uVar25 & 0xff;
  if ((char)uVar25 != '\0') {
    if (*(char *)(param_1 + 0x94) == '\0') {
      local_60 = CONCAT44(local_60._4_4_,uVar30) & 0xffffffff00000f00;
      pvVar32 = local_80;
      iVar33 = iStack_84;
      uVar25 = uVar30 & 0xf00;
      uVar37 = local_88;
      do {
        uVar17 = local_88;
        uVar39 = 0;
        pfVar24 = (float *)((longlong)pvVar32 + (ulonglong)(uVar21 * iVar33) * 4);
        if ((uVar25 & 0xfffffeff) == 0) {
          uVar39 = uVar30 - (uVar30 >> 0xf & 1);
          uVar22 = (ulonglong)(uVar39 & 0xff);
          fVar42 = (float)uVar22;
          pfVar31 = pfVar24;
          if ((char)uVar39 != '\0') {
            for (; uVar22 != 0; uVar22 = uVar22 - 1) {
              *pfVar31 = (1.0 / SQRT((float)uVar19)) / fVar42;
              pfVar31 = pfVar31 + 1;
            }
          }
          uVar39 = 1;
          pvVar32 = local_80;
          if (1 < uVar19) {
            do {
              if ((char)uVar30 != '\0') {
                *(undefined8 *)(auStack_d8 + lVar40 + -8) = 0x1450784ab;
                memcpy(pfVar24 + uVar17 * uVar39 * 8,pfVar24 + (uVar39 * 8 + -8) * uVar17,
                       (ulonglong)uVar41 << 2);
              }
              uVar39 = uVar39 + 1;
              pvVar32 = local_80;
              iVar33 = iStack_84;
              uVar37 = local_88;
            } while (uVar39 < uVar19);
          }
        }
        else if (uVar19 != 0) {
          do {
            iVar20 = uVar37 * uVar39;
            uVar39 = uVar39 + 1;
            pfVar24[(uint)(iVar20 * 8)] = 1.0 / SQRT((float)uVar19);
          } while (uVar39 < uVar19);
        }
        uVar21 = uVar21 + 1;
        pvVar38 = local_80;
        uVar39 = local_78;
        uVar25 = (uint)local_60;
      } while (uVar21 < param_2);
    }
    else if (*(char *)(param_9 + 0x6c) == '\0') {
      if (((param_6 == '\0') && ((*(uint *)(param_8 + 0x198) >> 1 & 1) == 0)) && (param_2 < 2)) {
        uVar25 = iStack_74 * 8;
        if (uVar25 != 0) {
          pvVar32 = *(void **)(param_9 + 0x100);
          *(undefined8 *)(auStack_d8 + lVar40 + -8) = 0x1450782c1;
          memcpy(pvVar38,pvVar32,(ulonglong)uVar25 << 2);
          goto LAB_1450784f8;
        }
        uVar25 = 0;
      }
      else {
        *(undefined8 *)(auStack_d8 + lVar40 + -8) = 0x1450782ce;
        uVar23 = FUN_1453557f0();
        *(undefined8 *)(auStack_d8 + lVar40 + -8) = 0x1450782d6;
        lVar35 = FUN_1450a1a60(uVar23);
        pvVar38 = local_80;
        *(longlong *)((longlong)local_a0 + lVar40 + 8) = lVar35 + 200;
        *(void **)((longlong)local_a0 + lVar40) = pvVar38;
        uVar9 = *(undefined1 *)(param_9 + 0x6d);
        uVar5 = *(undefined4 *)(param_9 + 0x58);
        uVar6 = *(undefined4 *)(param_9 + 100);
        uVar7 = *(undefined4 *)(param_9 + 0x60);
        *(uint *)((longlong)auStack_b8 + lVar40 + 0x10) = uVar30;
        *(uint *)((longlong)auStack_b8 + lVar40 + 8) = param_7;
        *(undefined1 *)((longlong)auStack_b8 + lVar40) = uVar9;
        *(undefined8 *)(auStack_d8 + lVar40 + -8) = 0x14507831a;
        FUN_145093d40(param_9,uVar7,uVar6,uVar5);
        uVar25 = iStack_74 * 8;
      }
      iVar33 = iStack_84;
      uVar19 = 1;
      if (1 < param_2) {
        do {
          if (uVar25 != 0) {
            *(undefined8 *)(auStack_d8 + lVar40 + -8) = 0x145078363;
            memcpy((void *)((longlong)pvVar38 + (ulonglong)(uVar19 * iVar33) * 4),pvVar38,
                   (ulonglong)uVar25 << 2);
          }
          uVar19 = uVar19 + 1;
          uVar39 = local_78;
        } while (uVar19 < param_2);
      }
    }
    else {
      *(undefined8 *)(auStack_d8 + lVar40 + -8) = 0x145078382;
      uVar23 = FUN_1453557f0();
      *(undefined8 *)(auStack_d8 + lVar40 + -8) = 0x14507838a;
      lVar35 = FUN_1450a1a60(uVar23);
      pvVar38 = local_80;
      if (lVar35 != 0) {
        *(void **)((longlong)local_a0 + lVar40 + 8) = local_80;
        *(longlong *)((longlong)local_a0 + lVar40) = lVar35 + 200;
        *(int *)((longlong)auStack_b8 + lVar40 + 0x10) = iStack_84;
        *(uint *)((longlong)auStack_b8 + lVar40 + 8) = uVar30;
        *(uint *)((longlong)auStack_b8 + lVar40) = uVar25;
        *(undefined8 *)(auStack_d8 + lVar40 + -8) = 0x1450783d1;
        FUN_14507b5c0(param_9 + 0x58,param_5,param_2,param_7);
      }
    }
  }
LAB_1450784f8:
  if (((param_7 & 0x8000) != 0) && ((uVar30 & 0x8000) != 0)) {
    uVar25 = 0;
    do {
      uVar19 = uVar25 + 1;
      *(undefined4 *)
       ((longlong)pvVar38 +
       ((ulonglong)(uVar25 * iStack_84) + (ulonglong)(uVar41 - 1) +
       (ulonglong)((uStack_70 - 1) * local_88 * 8)) * 4) = 0x3f800000;
      uVar25 = uVar19;
    } while (uVar19 < param_2);
  }
  puVar29 = auStack_d8 + lVar40;
  pvVar38 = local_80;
  uVar25 = uVar30;
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (puVar29 = auStack_d8 + lVar40, *(char *)(param_9 + 0x6c) != '\0')) &&
     ((puVar29 = auStack_d8 + lVar40, uVar39 == 0x100 &&
      (puVar29 = auStack_d8 + lVar40, (uVar30 & 0xf00) == 0x100)))) {
    local_60 = (ulonglong)(local_88 << 5);
    local_78 = 0;
    puVar28 = auStack_d8 + lVar40;
    pvVar32 = local_80;
    uVar39 = local_88;
    do {
      uVar19 = local_78;
      uVar26 = 0;
      uVar21 = local_78 * iStack_84;
      uVar22 = local_60 + 0xf;
      if (uVar22 <= local_60) {
        uVar22 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar28 + -8) = 0x1450785cd;
      lVar40 = -(uVar22 & 0xfffffffffffffff0);
      puVar29 = puVar28 + lVar40;
      uVar37 = 1;
      puVar4 = puVar28 + lVar40 + 0x50;
      if (uVar41 != 0) {
        uVar22 = uVar26;
        uVar34 = uVar26;
        do {
          uVar39 = *(uint *)(param_1 + 0x38) >> 0xc & uVar37;
          if ((uVar37 & uVar25 >> 0xc) == 0) {
            if (uVar39 != 0) {
              uVar22 = (ulonglong)((int)uVar22 + 1);
            }
          }
          else if (uVar39 == 0) {
            *(undefined4 *)(puVar4 + uVar34 * 4) = 0x3f800000;
            uVar34 = (ulonglong)((int)uVar34 + 1);
          }
          else {
            *(undefined4 *)(puVar4 + uVar34 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + uVar22 * 4);
            uVar22 = (ulonglong)((int)uVar22 + 1);
            uVar34 = (ulonglong)((int)uVar34 + 1);
          }
          uVar37 = uVar37 * 2;
          uVar39 = local_88;
          uVar19 = local_78;
        } while ((uint)uVar34 < uVar41);
      }
      pvVar38 = pvVar32;
      if (uStack_70 != 0) {
        do {
          uVar22 = 0;
          puVar2 = (undefined1 *)
                   ((longlong)pvVar32 +
                   (ulonglong)(uVar39 * (int)uVar26 * 8) * 4 + (ulonglong)uVar21 * 4);
          if (uVar41 != 0) {
            if ((1 < uVar41) &&
               ((puVar4 + (ulonglong)(uVar41 - 1) * 4 < puVar2 ||
                (puVar2 + (ulonglong)(uVar41 - 1) * 4 < puVar4)))) {
              if (0xf < uVar41) {
                uVar39 = 8;
                uVar34 = uVar22;
                do {
                  uVar25 = (int)uVar34 + 0x10;
                  uVar22 = (ulonglong)uVar25;
                  pfVar24 = (float *)(puVar2 + uVar34 * 4);
                  fVar42 = pfVar24[1];
                  fVar8 = pfVar24[2];
                  fVar11 = pfVar24[3];
                  pfVar31 = (float *)(puVar4 + uVar34 * 4);
                  fVar12 = pfVar31[1];
                  fVar13 = pfVar31[2];
                  fVar14 = pfVar31[3];
                  pfVar3 = (float *)(puVar2 + uVar34 * 4);
                  *pfVar3 = *pfVar31 * *pfVar24;
                  pfVar3[1] = fVar12 * fVar42;
                  pfVar3[2] = fVar13 * fVar8;
                  pfVar3[3] = fVar14 * fVar11;
                  uVar34 = (ulonglong)(uVar39 - 4);
                  pfVar24 = (float *)(puVar2 + uVar34 * 4);
                  fVar42 = pfVar24[1];
                  fVar8 = pfVar24[2];
                  fVar11 = pfVar24[3];
                  pfVar31 = (float *)(puVar4 + uVar34 * 4);
                  fVar12 = pfVar31[1];
                  fVar13 = pfVar31[2];
                  fVar14 = pfVar31[3];
                  pfVar3 = (float *)(puVar2 + uVar34 * 4);
                  *pfVar3 = *pfVar31 * *pfVar24;
                  pfVar3[1] = fVar12 * fVar42;
                  pfVar3[2] = fVar13 * fVar8;
                  pfVar3[3] = fVar14 * fVar11;
                  uVar34 = (ulonglong)uVar39;
                  pfVar24 = (float *)(puVar2 + uVar34 * 4);
                  fVar42 = pfVar24[1];
                  fVar8 = pfVar24[2];
                  fVar11 = pfVar24[3];
                  pfVar31 = (float *)(puVar4 + uVar34 * 4);
                  fVar12 = pfVar31[1];
                  fVar13 = pfVar31[2];
                  fVar14 = pfVar31[3];
                  pfVar3 = (float *)(puVar2 + uVar34 * 4);
                  *pfVar3 = *pfVar31 * *pfVar24;
                  pfVar3[1] = fVar12 * fVar42;
                  pfVar3[2] = fVar13 * fVar8;
                  pfVar3[3] = fVar14 * fVar11;
                  uVar34 = (ulonglong)(uVar39 + 4);
                  uVar39 = uVar39 + 0x10;
                  auVar44 = *(undefined1 (*) [16])(puVar2 + uVar34 * 4);
                  pfVar24 = (float *)(puVar4 + uVar34 * 4);
                  fVar42 = pfVar24[1];
                  fVar8 = pfVar24[2];
                  fVar11 = pfVar24[3];
                  pfVar31 = (float *)(puVar2 + uVar34 * 4);
                  *pfVar31 = *pfVar24 * auVar44._0_4_;
                  pfVar31[1] = fVar42 * auVar44._4_4_;
                  pfVar31[2] = fVar8 * auVar44._8_4_;
                  pfVar31[3] = fVar11 * auVar44._12_4_;
                  uVar34 = uVar22;
                } while (uVar25 < uVar41 - (uVar30 & 0xf));
                if ((uVar30 & 0xf) < 2) goto LAB_14507874e;
              }
              uVar34 = uVar22;
              do {
                uVar39 = (int)uVar34 + 2;
                uVar22 = (ulonglong)uVar39;
                *(ulonglong *)(puVar2 + uVar34 * 4) =
                     CONCAT44((float)((ulonglong)*(undefined8 *)(puVar4 + uVar34 * 4) >> 0x20) *
                              (float)((ulonglong)*(undefined8 *)(puVar2 + uVar34 * 4) >> 0x20),
                              (float)*(undefined8 *)(puVar4 + uVar34 * 4) *
                              (float)*(undefined8 *)(puVar2 + uVar34 * 4));
                uVar34 = uVar22;
              } while (uVar39 < (uVar30 & 0xfe));
            }
LAB_14507874e:
            uVar25 = (uint)uVar22;
            uVar39 = local_88;
            if (uVar25 < uVar41) {
              lVar35 = -(longlong)puVar2;
              if (3 < uVar41 - uVar25) {
                lVar1 = uVar22 + 1;
                uVar19 = ((uVar41 - uVar25) - 4 >> 2) + 1;
                uVar34 = (ulonglong)uVar19;
                uVar25 = uVar25 + uVar19 * 4;
                uVar22 = uVar22 + (ulonglong)uVar19 * 4;
                pfVar24 = (float *)(puVar2 + lVar1 * 4);
                do {
                  pfVar31 = pfVar24 + 4;
                  pfVar24[-1] = *(float *)(puVar4 + lVar35 + -4 + (longlong)pfVar24) * pfVar24[-1];
                  *pfVar24 = *(float *)(puVar4 + lVar35 + -0x10 + (longlong)pfVar31) * *pfVar24;
                  pfVar24[1] = *(float *)(puVar4 + lVar35 + -0xc + (longlong)pfVar31) * pfVar24[1];
                  pfVar24[2] = *(float *)(puVar4 + lVar35 + -8 + (longlong)pfVar31) * pfVar24[2];
                  uVar34 = uVar34 - 1;
                  pfVar24 = pfVar31;
                } while (uVar34 != 0);
                if (uVar41 <= uVar25) goto LAB_14507880d;
              }
              uVar34 = (ulonglong)(uVar41 - uVar25);
              pfVar24 = (float *)(puVar2 + uVar22 * 4);
              do {
                *pfVar24 = *(float *)(lVar35 + (longlong)puVar4 + (longlong)pfVar24) * *pfVar24;
                uVar34 = uVar34 - 1;
                pfVar24 = pfVar24 + 1;
              } while (uVar34 != 0);
            }
          }
LAB_14507880d:
          uVar37 = (int)uVar26 + 1;
          uVar26 = (ulonglong)uVar37;
          pvVar38 = local_80;
          uVar25 = uStack_6c;
          uVar19 = local_78;
        } while (uVar37 < uStack_70);
      }
      local_78 = uVar19 + 1;
      puVar28 = puVar28 + lVar40;
      pvVar32 = pvVar38;
    } while (uVar19 + 1 < param_2);
  }
  uVar22 = 0;
  uVar39 = 8;
  if (param_2 == 1) {
    pvVar32 = *(void **)(param_9 + 0xf8);
    fVar42 = *param_4;
    uVar25 = iStack_74 * 8;
    if (uVar25 != 0) {
      if ((0xf < uVar25) &&
         (((void *)((ulonglong)(uVar25 - 1) * 4 + (longlong)pvVar38) < pvVar32 ||
          ((void *)((longlong)pvVar32 + (ulonglong)(uVar25 - 1) * 4) < pvVar38)))) {
        do {
          pfVar31 = (float *)((longlong)pvVar38 + uVar22 * 4);
          fVar8 = pfVar31[1];
          fVar11 = pfVar31[2];
          fVar12 = pfVar31[3];
          pfVar24 = (float *)((longlong)pvVar32 + uVar22 * 4);
          *pfVar24 = *pfVar31 * fVar42;
          pfVar24[1] = fVar8 * fVar42;
          pfVar24[2] = fVar11 * fVar42;
          pfVar24[3] = fVar12 * fVar42;
          uVar19 = (int)uVar22 + 0x10;
          uVar22 = (ulonglong)uVar19;
          pfVar31 = (float *)((longlong)pvVar38 + (ulonglong)(uVar39 - 4) * 4);
          fVar8 = pfVar31[1];
          fVar11 = pfVar31[2];
          fVar12 = pfVar31[3];
          pfVar24 = (float *)((longlong)pvVar32 + (ulonglong)(uVar39 - 4) * 4);
          *pfVar24 = *pfVar31 * fVar42;
          pfVar24[1] = fVar8 * fVar42;
          pfVar24[2] = fVar11 * fVar42;
          pfVar24[3] = fVar12 * fVar42;
          pfVar31 = (float *)((longlong)pvVar38 + (ulonglong)uVar39 * 4);
          fVar8 = pfVar31[1];
          fVar11 = pfVar31[2];
          fVar12 = pfVar31[3];
          pfVar24 = (float *)((longlong)pvVar32 + (ulonglong)uVar39 * 4);
          *pfVar24 = *pfVar31 * fVar42;
          pfVar24[1] = fVar8 * fVar42;
          pfVar24[2] = fVar11 * fVar42;
          pfVar24[3] = fVar12 * fVar42;
          uVar30 = uVar39 + 4;
          uVar39 = uVar39 + 0x10;
          pfVar31 = (float *)((longlong)pvVar38 + (ulonglong)uVar30 * 4);
          fVar8 = pfVar31[1];
          fVar11 = pfVar31[2];
          fVar12 = pfVar31[3];
          pfVar24 = (float *)((longlong)pvVar32 + (ulonglong)uVar30 * 4);
          *pfVar24 = *pfVar31 * fVar42;
          pfVar24[1] = fVar8 * fVar42;
          pfVar24[2] = fVar11 * fVar42;
          pfVar24[3] = fVar12 * fVar42;
        } while (uVar19 < (uVar25 & 0xfffffff0));
      }
      uVar39 = (uint)uVar22;
      if (uVar39 < uVar25) {
        lVar40 = (longlong)pvVar38 - (longlong)pvVar32;
        uVar26 = uVar22;
        if (3 < uVar25 - uVar39) {
          lVar35 = uVar22 + 1;
          uVar30 = ((uVar25 - uVar39) - 4 >> 2) + 1;
          uVar34 = (ulonglong)uVar30;
          uVar39 = uVar39 + uVar30 * 4;
          uVar26 = (ulonglong)uVar39;
          uVar22 = uVar22 + (ulonglong)uVar30 * 4;
          pfVar24 = (float *)((longlong)pvVar32 + lVar35 * 4);
          do {
            pfVar24[-1] = fVar42 * *(float *)((longlong)pfVar24 + lVar40 + -4);
            *pfVar24 = fVar42 * *(float *)((longlong)pfVar24 + lVar40);
            pfVar24[1] = fVar42 * *(float *)((longlong)pfVar24 + lVar40 + 4);
            pfVar24[2] = fVar42 * *(float *)((longlong)pfVar24 + lVar40 + 8);
            uVar34 = uVar34 - 1;
            pfVar24 = pfVar24 + 4;
          } while (uVar34 != 0);
          if (uVar25 <= uVar39) {
            return;
          }
        }
        uVar26 = (ulonglong)(uVar25 - (int)uVar26);
        pfVar24 = (float *)((longlong)pvVar32 + uVar22 * 4);
        do {
          *pfVar24 = fVar42 * *(float *)((longlong)pfVar24 + lVar40);
          uVar26 = uVar26 - 1;
          pfVar24 = pfVar24 + 1;
        } while (uVar26 != 0);
      }
    }
  }
  else {
    uVar39 = *(uint *)(param_9 + 0xb8);
    if ((uVar39 & 0xf00) == 0x300) {
      uVar39 = *(uint *)(param_9 + 0xc0);
    }
    uVar39 = ((uVar39 & 0xff) + 7 & 0xfffffff8) * (uint)*(byte *)(param_9 + 0xc0);
    if (uVar39 != 0) {
      pvVar32 = *(void **)(param_9 + 0xf8);
      *(undefined8 *)(puVar29 + -8) = 0x145078a1a;
      memset(pvVar32,0,(ulonglong)uVar39 << 2);
    }
    uVar23 = *(undefined8 *)(*(longlong *)(param_8 + 0x150) + 8);
    *(undefined8 *)(puVar29 + -8) = 0x145078a31;
    cVar18 = FUN_1450e7c70(uVar23);
    iVar33 = iStack_84;
    if (cVar18 == '\x01') {
      uVar26 = (ulonglong)local_68 + 0xf;
      if (uVar26 <= local_68) {
        uVar26 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar29 + -8) = 0x145078a5e;
      puVar29 = puVar29 + (0x50 - (uVar26 & 0xfffffffffffffff0));
      uVar39 = iStack_74 * 8;
      uVar26 = uVar22;
      do {
        puVar28 = (undefined1 *)((ulonglong)(uint)((int)uVar26 * iStack_84) * 4 + (longlong)pvVar38)
        ;
        fVar42 = param_4[uVar26];
        if (uVar39 == 0) {
LAB_145078bf9:
          puVar28 = *(undefined1 **)(param_9 + 0xf8);
          if (uVar39 != 0) goto LAB_145078c0d;
        }
        else {
          uVar34 = uVar22;
          if ((0xf < uVar39) &&
             ((puVar28 + (ulonglong)(uVar39 - 1) * 4 < puVar29 ||
              (puVar29 + (ulonglong)(uVar39 - 1) * 4 < puVar28)))) {
            uVar25 = 8;
            uVar36 = uVar22;
            do {
              uVar19 = (int)uVar36 + 0x10;
              uVar34 = (ulonglong)uVar19;
              pfVar24 = (float *)(puVar28 + uVar36 * 4);
              fVar8 = pfVar24[1];
              fVar11 = pfVar24[2];
              fVar12 = pfVar24[3];
              pfVar31 = (float *)(puVar29 + uVar36 * 4);
              *pfVar31 = *pfVar24 * fVar42;
              pfVar31[1] = fVar8 * fVar42;
              pfVar31[2] = fVar11 * fVar42;
              pfVar31[3] = fVar12 * fVar42;
              pfVar24 = (float *)(puVar28 + (ulonglong)(uVar25 - 4) * 4);
              fVar8 = pfVar24[1];
              fVar11 = pfVar24[2];
              fVar12 = pfVar24[3];
              pfVar31 = (float *)(puVar29 + (ulonglong)(uVar25 - 4) * 4);
              *pfVar31 = *pfVar24 * fVar42;
              pfVar31[1] = fVar8 * fVar42;
              pfVar31[2] = fVar11 * fVar42;
              pfVar31[3] = fVar12 * fVar42;
              pfVar24 = (float *)(puVar28 + (ulonglong)uVar25 * 4);
              fVar8 = pfVar24[1];
              fVar11 = pfVar24[2];
              fVar12 = pfVar24[3];
              pfVar31 = (float *)(puVar29 + (ulonglong)uVar25 * 4);
              *pfVar31 = *pfVar24 * fVar42;
              pfVar31[1] = fVar8 * fVar42;
              pfVar31[2] = fVar11 * fVar42;
              pfVar31[3] = fVar12 * fVar42;
              uVar30 = uVar25 + 4;
              uVar25 = uVar25 + 0x10;
              pfVar24 = (float *)(puVar28 + (ulonglong)uVar30 * 4);
              auVar43._0_4_ = *pfVar24 * fVar42;
              auVar43._4_4_ = pfVar24[1] * fVar42;
              auVar43._8_4_ = pfVar24[2] * fVar42;
              auVar43._12_4_ = pfVar24[3] * fVar42;
              *(undefined1 (*) [16])(puVar29 + (ulonglong)uVar30 * 4) = auVar43;
              uVar36 = uVar34;
            } while (uVar19 < (uVar39 & 0xfffffff0));
          }
          uVar25 = (uint)uVar34;
          if (uVar39 <= uVar25) goto LAB_145078bf9;
          if (uVar39 - uVar25 < 4) {
LAB_145078bc8:
            uVar36 = (ulonglong)(uVar39 - uVar25);
            pfVar24 = (float *)(puVar29 + uVar34 * 4);
            do {
              *pfVar24 = fVar42 * *(float *)((longlong)pfVar24 +
                                            ((longlong)puVar28 - (longlong)puVar29));
              uVar36 = uVar36 - 1;
              pfVar24 = pfVar24 + 1;
            } while (uVar36 != 0);
            puVar28 = *(undefined1 **)(param_9 + 0xf8);
          }
          else {
            lVar40 = uVar34 + 1;
            uVar30 = ((uVar39 - uVar25) - 4 >> 2) + 1;
            uVar36 = (ulonglong)uVar30;
            uVar25 = uVar25 + uVar30 * 4;
            uVar34 = uVar34 + (ulonglong)uVar30 * 4;
            pfVar24 = (float *)(puVar29 + lVar40 * 4);
            do {
              pfVar31 = pfVar24 + 4;
              pfVar24[-1] = fVar42 * *(float *)(puVar28 + (-0x14 - (longlong)puVar29) +
                                               (longlong)pfVar31);
              *pfVar24 = fVar42 * *(float *)(puVar28 + (-0x10 - (longlong)puVar29) +
                                            (longlong)pfVar31);
              pfVar24[1] = fVar42 * *(float *)(puVar28 + (-0xc - (longlong)puVar29) +
                                              (longlong)pfVar31);
              pfVar24[2] = fVar42 * *(float *)(puVar28 + (-8 - (longlong)puVar29) +
                                              (longlong)pfVar31);
              uVar36 = uVar36 - 1;
              pfVar24 = pfVar31;
            } while (uVar36 != 0);
            if (uVar25 < uVar39) goto LAB_145078bc8;
            puVar28 = *(undefined1 **)(param_9 + 0xf8);
          }
LAB_145078c0d:
          uVar34 = uVar22;
          if ((uVar39 < 2) ||
             ((puVar28 <= puVar29 + (ulonglong)(uVar39 - 1) * 4 &&
              (puVar29 <= puVar28 + (ulonglong)(uVar39 - 1) * 4)))) {
LAB_145078cd2:
            uVar25 = (uint)uVar34;
            if (uVar25 < uVar39) {
              if (3 < uVar39 - uVar25) {
                pfVar24 = (float *)(puVar28 + (uVar34 + 1) * 4);
                lVar40 = (longlong)puVar29 - (longlong)puVar28;
                uVar30 = ((uVar39 - uVar25) - 4 >> 2) + 1;
                uVar36 = (ulonglong)uVar30;
                uVar25 = uVar25 + uVar30 * 4;
                uVar34 = uVar34 + (ulonglong)uVar30 * 4;
                do {
                  pfVar24[-1] = *(float *)(lVar40 + -4 + (longlong)pfVar24) + pfVar24[-1];
                  *pfVar24 = *(float *)(lVar40 + (longlong)pfVar24) + *pfVar24;
                  pfVar24[1] = *(float *)(lVar40 + 4 + (longlong)pfVar24) + pfVar24[1];
                  pfVar24[2] = *(float *)(lVar40 + 8 + (longlong)pfVar24) + pfVar24[2];
                  pfVar24 = pfVar24 + 4;
                  uVar36 = uVar36 - 1;
                } while (uVar36 != 0);
                if (uVar39 <= uVar25) goto LAB_145078d89;
              }
              pfVar24 = (float *)(puVar28 + uVar34 * 4);
              uVar34 = (ulonglong)(uVar39 - uVar25);
              do {
                *pfVar24 = *(float *)((longlong)pfVar24 + ((longlong)puVar29 - (longlong)puVar28)) +
                           *pfVar24;
                pfVar24 = pfVar24 + 1;
                uVar34 = uVar34 - 1;
              } while (uVar34 != 0);
            }
          }
          else {
            if (0xf < uVar39) {
              uVar25 = 8;
              uVar36 = uVar22;
              do {
                uVar30 = (int)uVar36 + 0x10;
                uVar34 = (ulonglong)uVar30;
                pfVar24 = (float *)(puVar28 + uVar36 * 4);
                fVar42 = pfVar24[1];
                fVar8 = pfVar24[2];
                fVar11 = pfVar24[3];
                pfVar31 = (float *)(puVar29 + uVar36 * 4);
                fVar12 = pfVar31[1];
                fVar13 = pfVar31[2];
                fVar14 = pfVar31[3];
                pfVar3 = (float *)(puVar28 + uVar36 * 4);
                *pfVar3 = *pfVar31 + *pfVar24;
                pfVar3[1] = fVar12 + fVar42;
                pfVar3[2] = fVar13 + fVar8;
                pfVar3[3] = fVar14 + fVar11;
                uVar36 = (ulonglong)(uVar25 - 4);
                pfVar24 = (float *)(puVar28 + uVar36 * 4);
                fVar42 = pfVar24[1];
                fVar8 = pfVar24[2];
                fVar11 = pfVar24[3];
                pfVar31 = (float *)(puVar29 + uVar36 * 4);
                fVar12 = pfVar31[1];
                fVar13 = pfVar31[2];
                fVar14 = pfVar31[3];
                pfVar3 = (float *)(puVar28 + uVar36 * 4);
                *pfVar3 = *pfVar31 + *pfVar24;
                pfVar3[1] = fVar12 + fVar42;
                pfVar3[2] = fVar13 + fVar8;
                pfVar3[3] = fVar14 + fVar11;
                uVar36 = (ulonglong)uVar25;
                pfVar24 = (float *)(puVar28 + uVar36 * 4);
                fVar42 = pfVar24[1];
                fVar8 = pfVar24[2];
                fVar11 = pfVar24[3];
                pfVar31 = (float *)(puVar29 + uVar36 * 4);
                fVar12 = pfVar31[1];
                fVar13 = pfVar31[2];
                fVar14 = pfVar31[3];
                pfVar3 = (float *)(puVar28 + uVar36 * 4);
                *pfVar3 = *pfVar31 + *pfVar24;
                pfVar3[1] = fVar12 + fVar42;
                pfVar3[2] = fVar13 + fVar8;
                pfVar3[3] = fVar14 + fVar11;
                uVar36 = (ulonglong)(uVar25 + 4);
                uVar25 = uVar25 + 0x10;
                auVar44 = *(undefined1 (*) [16])(puVar28 + uVar36 * 4);
                pfVar24 = (float *)(puVar29 + uVar36 * 4);
                fVar42 = pfVar24[1];
                fVar8 = pfVar24[2];
                fVar11 = pfVar24[3];
                pfVar31 = (float *)(puVar28 + uVar36 * 4);
                *pfVar31 = *pfVar24 + auVar44._0_4_;
                pfVar31[1] = fVar42 + auVar44._4_4_;
                pfVar31[2] = fVar8 + auVar44._8_4_;
                pfVar31[3] = fVar11 + auVar44._12_4_;
                uVar36 = uVar34;
              } while (uVar30 < uVar39 - (uVar39 & 0xf));
              if ((uVar39 & 0xf) < 2) goto LAB_145078cd2;
            }
            do {
              uVar25 = (int)uVar34 + 2;
              *(ulonglong *)(puVar28 + uVar34 * 4) =
                   CONCAT44((float)((ulonglong)*(undefined8 *)(puVar29 + uVar34 * 4) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)(puVar28 + uVar34 * 4) >> 0x20),
                            (float)*(undefined8 *)(puVar29 + uVar34 * 4) +
                            (float)*(undefined8 *)(puVar28 + uVar34 * 4));
              uVar34 = (ulonglong)uVar25;
            } while (uVar25 < uVar39);
          }
        }
LAB_145078d89:
        uVar25 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar25;
      } while (uVar25 < param_2);
    }
    else if ((uVar25 & 0xf00) == 0x200) {
      *(undefined8 *)(puVar29 + 0x30) = *(undefined8 *)(param_9 + 0xf8);
      *(uint *)(puVar29 + 0x28) = param_2;
      *(float **)(puVar29 + 0x20) = param_4;
      *(undefined8 *)(puVar29 + -8) = 0x145078de0;
      FUN_145095080(param_7,uVar25,pvVar38,iVar33);
    }
    else {
      uVar26 = (ulonglong)local_68 + 0xf;
      if (uVar26 <= local_68) {
        uVar26 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar29 + -8) = 0x145078e07;
      puVar29 = puVar29 + (0x50 - (uVar26 & 0xfffffffffffffff0));
      uVar39 = iStack_74 * 8;
      uVar26 = uVar22;
      do {
        puVar28 = (undefined1 *)((ulonglong)(uint)((int)uVar26 * iStack_84) * 4 + (longlong)pvVar38)
        ;
        fVar42 = param_4[uVar26];
        if (uVar39 == 0) {
LAB_145078f99:
          puVar28 = *(undefined1 **)(param_9 + 0xf8);
          if (uVar39 != 0) goto LAB_145078fad;
        }
        else {
          uVar34 = uVar22;
          if ((0xf < uVar39) &&
             ((puVar28 + (ulonglong)(uVar39 - 1) * 4 < puVar29 ||
              (puVar29 + (ulonglong)(uVar39 - 1) * 4 < puVar28)))) {
            uVar25 = 8;
            uVar36 = uVar22;
            do {
              uVar19 = (int)uVar36 + 0x10;
              uVar34 = (ulonglong)uVar19;
              pfVar24 = (float *)(puVar28 + uVar36 * 4);
              fVar8 = pfVar24[1];
              fVar11 = pfVar24[2];
              fVar12 = pfVar24[3];
              pfVar31 = (float *)(puVar29 + uVar36 * 4);
              *pfVar31 = *pfVar24 * fVar42;
              pfVar31[1] = fVar8 * fVar42;
              pfVar31[2] = fVar11 * fVar42;
              pfVar31[3] = fVar12 * fVar42;
              pfVar24 = (float *)(puVar28 + (ulonglong)(uVar25 - 4) * 4);
              fVar8 = pfVar24[1];
              fVar11 = pfVar24[2];
              fVar12 = pfVar24[3];
              pfVar31 = (float *)(puVar29 + (ulonglong)(uVar25 - 4) * 4);
              *pfVar31 = *pfVar24 * fVar42;
              pfVar31[1] = fVar8 * fVar42;
              pfVar31[2] = fVar11 * fVar42;
              pfVar31[3] = fVar12 * fVar42;
              pfVar24 = (float *)(puVar28 + (ulonglong)uVar25 * 4);
              fVar8 = pfVar24[1];
              fVar11 = pfVar24[2];
              fVar12 = pfVar24[3];
              pfVar31 = (float *)(puVar29 + (ulonglong)uVar25 * 4);
              *pfVar31 = *pfVar24 * fVar42;
              pfVar31[1] = fVar8 * fVar42;
              pfVar31[2] = fVar11 * fVar42;
              pfVar31[3] = fVar12 * fVar42;
              uVar30 = uVar25 + 4;
              uVar25 = uVar25 + 0x10;
              pfVar24 = (float *)(puVar28 + (ulonglong)uVar30 * 4);
              auVar44._0_4_ = *pfVar24 * fVar42;
              auVar44._4_4_ = pfVar24[1] * fVar42;
              auVar44._8_4_ = pfVar24[2] * fVar42;
              auVar44._12_4_ = pfVar24[3] * fVar42;
              *(undefined1 (*) [16])(puVar29 + (ulonglong)uVar30 * 4) = auVar44;
              uVar36 = uVar34;
            } while (uVar19 < (uVar39 & 0xfffffff0));
          }
          uVar25 = (uint)uVar34;
          if (uVar39 <= uVar25) goto LAB_145078f99;
          if (uVar39 - uVar25 < 4) {
LAB_145078f68:
            uVar36 = (ulonglong)(uVar39 - uVar25);
            pfVar24 = (float *)(puVar29 + uVar34 * 4);
            do {
              *pfVar24 = fVar42 * *(float *)((longlong)pfVar24 +
                                            ((longlong)puVar28 - (longlong)puVar29));
              uVar36 = uVar36 - 1;
              pfVar24 = pfVar24 + 1;
            } while (uVar36 != 0);
            puVar28 = *(undefined1 **)(param_9 + 0xf8);
          }
          else {
            lVar40 = uVar34 + 1;
            uVar30 = ((uVar39 - uVar25) - 4 >> 2) + 1;
            uVar36 = (ulonglong)uVar30;
            uVar25 = uVar25 + uVar30 * 4;
            uVar34 = uVar34 + (ulonglong)uVar30 * 4;
            pfVar24 = (float *)(puVar29 + lVar40 * 4);
            do {
              pfVar31 = pfVar24 + 4;
              pfVar24[-1] = fVar42 * *(float *)(puVar28 + (-0x14 - (longlong)puVar29) +
                                               (longlong)pfVar31);
              *pfVar24 = fVar42 * *(float *)(puVar28 + (-0x10 - (longlong)puVar29) +
                                            (longlong)pfVar31);
              pfVar24[1] = fVar42 * *(float *)(puVar28 + (-0xc - (longlong)puVar29) +
                                              (longlong)pfVar31);
              pfVar24[2] = fVar42 * *(float *)(puVar28 + (-8 - (longlong)puVar29) +
                                              (longlong)pfVar31);
              uVar36 = uVar36 - 1;
              pfVar24 = pfVar31;
            } while (uVar36 != 0);
            if (uVar25 < uVar39) goto LAB_145078f68;
            puVar28 = *(undefined1 **)(param_9 + 0xf8);
          }
LAB_145078fad:
          if ((uVar39 < 4) ||
             ((uVar34 = uVar22, puVar28 <= puVar29 + (ulonglong)(uVar39 - 1) * 4 &&
              (puVar29 <= puVar28 + (ulonglong)(uVar39 - 1) * 4)))) {
            uVar25 = 0;
            if (uVar39 != 0) {
              uVar34 = uVar22;
              if (3 < uVar39) {
                pfVar24 = (float *)(puVar28 + 4);
                lVar40 = (longlong)puVar29 - (longlong)puVar28;
                uVar30 = (uVar39 - 4 >> 2) + 1;
                uVar36 = (ulonglong)uVar30;
                uVar25 = uVar30 * 4;
                uVar34 = (ulonglong)uVar30 * 4;
                do {
                  fVar42 = pfVar24[-1];
                  fVar8 = *(float *)((longlong)pfVar24 + lVar40 + -4);
                  if (fVar42 * fVar42 <= fVar8 * fVar8) {
                    fVar42 = fVar8;
                  }
                  pfVar24[-1] = fVar42;
                  fVar42 = *pfVar24;
                  fVar8 = *(float *)(lVar40 + (longlong)pfVar24);
                  if (fVar42 * fVar42 <= fVar8 * fVar8) {
                    fVar42 = fVar8;
                  }
                  *pfVar24 = fVar42;
                  fVar42 = pfVar24[1];
                  fVar8 = *(float *)(lVar40 + 4 + (longlong)pfVar24);
                  if (fVar42 * fVar42 <= fVar8 * fVar8) {
                    fVar42 = fVar8;
                  }
                  pfVar24[1] = fVar42;
                  fVar42 = pfVar24[2];
                  fVar8 = *(float *)(lVar40 + 8 + (longlong)pfVar24);
                  if (fVar42 * fVar42 <= fVar8 * fVar8) {
                    fVar42 = fVar8;
                  }
                  pfVar24[2] = fVar42;
                  pfVar24 = pfVar24 + 4;
                  uVar36 = uVar36 - 1;
                } while (uVar36 != 0);
                if (uVar39 <= uVar25) goto LAB_145079136;
              }
              pfVar24 = (float *)(puVar28 + uVar34 * 4);
              uVar34 = (ulonglong)(uVar39 - uVar25);
              do {
                fVar42 = *pfVar24;
                fVar8 = *(float *)(((longlong)puVar29 - (longlong)puVar28) + (longlong)pfVar24);
                if (fVar42 * fVar42 <= fVar8 * fVar8) {
                  fVar42 = fVar8;
                }
                *pfVar24 = fVar42;
                pfVar24 = pfVar24 + 1;
                uVar34 = uVar34 - 1;
              } while (uVar34 != 0);
            }
          }
          else {
            do {
              uVar25 = (int)uVar34 + 4;
              pfVar24 = (float *)(puVar28 + uVar34 * 4);
              fVar42 = *pfVar24;
              fVar8 = pfVar24[1];
              fVar11 = pfVar24[2];
              fVar12 = pfVar24[3];
              pfVar24 = (float *)(puVar29 + uVar34 * 4);
              fVar13 = *pfVar24;
              fVar14 = pfVar24[1];
              fVar15 = pfVar24[2];
              fVar16 = pfVar24[3];
              uVar30 = -(uint)(fVar13 * fVar13 < fVar42 * fVar42);
              uVar19 = -(uint)(fVar14 * fVar14 < fVar8 * fVar8);
              uVar41 = -(uint)(fVar15 * fVar15 < fVar11 * fVar11);
              uVar21 = -(uint)(fVar16 * fVar16 < fVar12 * fVar12);
              auVar45._0_4_ = ~uVar30 & (uint)fVar13;
              auVar45._4_4_ = ~uVar19 & (uint)fVar14;
              auVar45._8_4_ = ~uVar41 & (uint)fVar15;
              auVar45._12_4_ = ~uVar21 & (uint)fVar16;
              auVar10._4_4_ = uVar19 & (uint)fVar8;
              auVar10._0_4_ = uVar30 & (uint)fVar42;
              auVar10._8_4_ = uVar41 & (uint)fVar11;
              auVar10._12_4_ = uVar21 & (uint)fVar12;
              *(undefined1 (*) [16])(puVar28 + uVar34 * 4) = auVar45 | auVar10;
              uVar34 = (ulonglong)uVar25;
            } while (uVar25 < uVar39);
          }
        }
LAB_145079136:
        uVar25 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar25;
      } while (uVar25 < param_2);
    }
  }
  return;
}



// FUNCTION 145079170 FUN_145079170 body=429 status=ok
// SIG undefined FUN_145079170(void)

void FUN_145079170(float param_1,undefined8 *param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  uint uVar11;
  float *pfVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  uVar10 = param_2[1];
  *(undefined8 *)(param_4 + 0x28) = *param_2;
  *(undefined8 *)(param_4 + 0x30) = uVar10;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_4 + 0x3c) = uVar4;
  *(undefined4 *)(param_4 + 0x40) = uVar5;
  *(undefined4 *)(param_4 + 0x44) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 5);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_4 + 0x48) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_4 + 0x4c) = uVar4;
  *(undefined4 *)(param_4 + 0x50) = uVar5;
  *(undefined4 *)(param_4 + 0x54) = uVar6;
  uVar14 = *(uint *)(param_4 + 0xb8);
  if ((uVar14 & 0xf00) == 0x300) {
    uVar14 = *(uint *)(param_4 + 0xc0);
  }
  FUN_145096cb0(param_3,uVar14);
  lVar3 = *(longlong *)(param_4 + 0xf8);
  uVar16 = 0;
  uVar14 = ((uVar14 & 0xff) + 7 & 0xfffffff8) * (param_3 & 0xff);
  if (uVar14 != 0) {
    if (0xf < uVar14) {
      uVar17 = 8;
      do {
        pfVar12 = (float *)(lVar3 + uVar16 * 4);
        fVar7 = pfVar12[1];
        fVar8 = pfVar12[2];
        fVar9 = pfVar12[3];
        pfVar2 = (float *)(lVar3 + uVar16 * 4);
        *pfVar2 = param_1 * *pfVar12;
        pfVar2[1] = param_1 * fVar7;
        pfVar2[2] = param_1 * fVar8;
        pfVar2[3] = param_1 * fVar9;
        uVar15 = (int)uVar16 + 0x10;
        uVar16 = (ulonglong)uVar15;
        pfVar12 = (float *)(lVar3 + (ulonglong)(uVar17 - 4) * 4);
        fVar7 = pfVar12[1];
        fVar8 = pfVar12[2];
        fVar9 = pfVar12[3];
        pfVar2 = (float *)(lVar3 + (ulonglong)(uVar17 - 4) * 4);
        *pfVar2 = *pfVar12 * param_1;
        pfVar2[1] = fVar7 * param_1;
        pfVar2[2] = fVar8 * param_1;
        pfVar2[3] = fVar9 * param_1;
        pfVar12 = (float *)(lVar3 + (ulonglong)uVar17 * 4);
        fVar7 = pfVar12[1];
        fVar8 = pfVar12[2];
        fVar9 = pfVar12[3];
        pfVar2 = (float *)(lVar3 + (ulonglong)uVar17 * 4);
        *pfVar2 = param_1 * *pfVar12;
        pfVar2[1] = param_1 * fVar7;
        pfVar2[2] = param_1 * fVar8;
        pfVar2[3] = param_1 * fVar9;
        uVar11 = uVar17 + 4;
        uVar17 = uVar17 + 0x10;
        pfVar12 = (float *)(lVar3 + (ulonglong)uVar11 * 4);
        fVar7 = pfVar12[1];
        fVar8 = pfVar12[2];
        fVar9 = pfVar12[3];
        pfVar2 = (float *)(lVar3 + (ulonglong)uVar11 * 4);
        *pfVar2 = *pfVar12 * param_1;
        pfVar2[1] = fVar7 * param_1;
        pfVar2[2] = fVar8 * param_1;
        pfVar2[3] = fVar9 * param_1;
      } while (uVar15 < (uVar14 & 0xfffffff0));
    }
    uVar17 = (uint)uVar16;
    if (uVar17 < uVar14) {
      uVar13 = uVar16;
      if (3 < uVar14 - uVar17) {
        lVar1 = uVar16 * 4;
        uVar11 = ((uVar14 - uVar17) - 4 >> 2) + 1;
        uVar18 = (ulonglong)uVar11;
        uVar17 = uVar17 + uVar11 * 4;
        uVar13 = (ulonglong)uVar17;
        uVar16 = uVar16 + (ulonglong)uVar11 * 4;
        pfVar12 = (float *)(lVar3 + 8 + lVar1);
        do {
          pfVar12[-2] = param_1 * pfVar12[-2];
          pfVar12[-1] = param_1 * pfVar12[-1];
          *pfVar12 = param_1 * *pfVar12;
          pfVar12[1] = param_1 * pfVar12[1];
          uVar18 = uVar18 - 1;
          pfVar12 = pfVar12 + 4;
        } while (uVar18 != 0);
        if (uVar14 <= uVar17) {
          return;
        }
      }
      uVar13 = (ulonglong)(uVar14 - (int)uVar13);
      pfVar12 = (float *)(lVar3 + uVar16 * 4);
      do {
        *pfVar12 = param_1 * *pfVar12;
        uVar13 = uVar13 - 1;
        pfVar12 = pfVar12 + 1;
      } while (uVar13 != 0);
    }
  }
  return;
}



// FUNCTION 145079320 thunk_FUN_14507c840 body=5 status=ok
// SIG undefined thunk_FUN_14507c840(void)

void thunk_FUN_14507c840(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 auStackX_20 [2];
  longlong *plStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  
  if ((*(byte *)(param_1 + 0x19c) & 0x40) == 0) {
    lVar6 = 0;
    cVar5 = FUN_1450e71a0();
LAB_14507caa3:
    plVar9 = (longlong *)0x0;
    plVar10 = plVar9;
    if (((cVar5 != '\0') && (*DAT_14c791038 != '\0')) && (*(longlong *)(DAT_14c791038 + 8) != 0)) {
      plVar10 = (longlong *)(DAT_14c791038 + 8);
    }
    plStack_130 = (longlong *)0x0;
    plStack_138 = (longlong *)0x0;
    plStack_148 = (longlong *)0x0;
    plVar11 = plVar9;
    plStack_140 = plVar10;
    if ((DAT_14c791038[3] == '\0') || (*(longlong *)(DAT_14c791038 + 0x50) == 0)) {
      lVar8 = *param_2;
      plStack_138 = (longlong *)0x0;
      plStack_130 = (longlong *)0x0;
      if (lVar6 != 0) goto LAB_14507cb15;
    }
    else {
      lVar8 = *param_2;
      plStack_148 = (longlong *)(DAT_14c791038 + 0x50);
      plVar9 = plStack_148;
    }
  }
  else {
    lVar6 = FUN_14507bcb0(param_1 + 0x188);
    plVar9 = (longlong *)0x0;
    plStack_140 = (longlong *)0x0;
    cVar5 = FUN_1450e71a0(param_1);
    if (lVar6 == 0) goto LAB_14507caa3;
    if ((*(byte *)(lVar6 + 0x1f8) == 0xff) ||
       (lVar8 = (ulonglong)*(byte *)(lVar6 + 0x1f8) + 2,
       plVar11 = (longlong *)(lVar6 + lVar8 * 0x18), *(longlong *)(lVar6 + lVar8 * 0x18) == 0)) {
      plVar11 = plVar9;
    }
    if ((*(byte *)(lVar6 + 0x1f9) == 0xff) ||
       (plStack_138 = (longlong *)(lVar6 + ((ulonglong)*(byte *)(lVar6 + 0x1f9) + 2) * 0x18),
       *plStack_138 == 0)) {
      plStack_138 = (longlong *)0x0;
    }
    if ((*(byte *)(lVar6 + 0x1fa) == 0xff) ||
       (plStack_130 = (longlong *)(lVar6 + ((ulonglong)*(byte *)(lVar6 + 0x1fa) + 2) * 0x18),
       *plStack_130 == 0)) {
      plStack_130 = (longlong *)0x0;
    }
    plVar10 = plVar9;
    if (cVar5 != '\0') {
      bVar3 = *(byte *)(lVar6 + 0x1ff);
      if (bVar3 == 0xfe) {
        if ((*DAT_14c791038 != '\0') &&
           (plVar10 = (longlong *)0x0, *(longlong *)(DAT_14c791038 + 8) != 0)) {
          plVar10 = (longlong *)(DAT_14c791038 + 8);
        }
      }
      else if ((bVar3 == 0xff) ||
              (plVar10 = (longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18),
              *(longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18) == 0)) {
        plVar10 = (longlong *)0x0;
      }
      bVar3 = *(byte *)(lVar6 + 0x205);
      plStack_140 = (longlong *)0x0;
      if (bVar3 == 0xfe) {
        if ((*DAT_14c791038 != '\0') && (*(longlong *)(DAT_14c791038 + 8) != 0)) {
          plStack_140 = (longlong *)(DAT_14c791038 + 8);
        }
      }
      else if ((bVar3 == 0xff) ||
              (plStack_140 = (longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18), *plStack_140 == 0)
              ) {
        plStack_140 = (longlong *)0x0;
      }
    }
    bVar3 = *(byte *)(lVar6 + 0x202);
    plStack_148 = (longlong *)0x0;
    if (bVar3 == 0xfe) {
      if ((DAT_14c791038[3] != '\0') && (*(longlong *)(DAT_14c791038 + 0x50) != 0)) {
        plStack_148 = (longlong *)(DAT_14c791038 + 0x50);
      }
    }
    else if ((bVar3 == 0xff) ||
            (plStack_148 = (longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18), *plStack_148 == 0))
    {
      plStack_148 = (longlong *)0x0;
    }
    bVar3 = *(byte *)(lVar6 + 0x208);
    if (bVar3 == 0xfe) {
      if ((DAT_14c791038[3] == '\0') ||
         (plVar9 = (longlong *)0x0, *(longlong *)(DAT_14c791038 + 0x50) == 0)) goto LAB_14507ca74;
      lVar8 = *param_2;
      plVar9 = (longlong *)(DAT_14c791038 + 0x50);
    }
    else {
      if ((bVar3 == 0xff) ||
         (plVar9 = (longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18),
         *(longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18) == 0)) {
        plVar9 = (longlong *)0x0;
      }
LAB_14507ca74:
      lVar8 = *param_2;
    }
LAB_14507cb15:
    bVar4 = true;
    if ((*(byte *)(lVar6 + 0x20b) & 1) != 0) goto LAB_14507cb80;
  }
  bVar4 = false;
LAB_14507cb80:
  do {
    uVar14 = 0x3f800000;
    if (lVar6 != 0) {
      if (plVar11 != (longlong *)0x0) {
        if (*plVar11 == 0) {
          uVar14 = 0;
        }
        else {
          auStackX_20[0] = (undefined4)plVar11[2];
          uStack_128 = 0;
          FUN_1450737c0(plVar11,*(undefined4 *)(lVar8 + 0x30),auStackX_20,&uStack_128);
          *(undefined4 *)(plVar11 + 2) = auStackX_20[0];
          uVar14 = uStack_128;
        }
      }
      *(undefined4 *)(lVar8 + 0x3c) = uVar14;
      if (plStack_138 == (longlong *)0x0) {
        uVar12 = 0x3f800000;
      }
      else {
        uVar12 = uVar14;
        if (plStack_138 != plVar11) {
          if (*plStack_138 == 0) {
            uVar12 = 0;
          }
          else {
            uStack_124 = (undefined4)plStack_138[2];
            uStack_120 = 0;
            FUN_1450737c0(plStack_138,*(undefined4 *)(lVar8 + 0x30),&uStack_124,&uStack_120);
            *(undefined4 *)(plStack_138 + 2) = uStack_124;
            uVar12 = uStack_120;
          }
        }
      }
      *(undefined4 *)(lVar8 + 0x40) = uVar12;
      if (plStack_130 == (longlong *)0x0) {
        uVar14 = 0x3f800000;
      }
      else if (plStack_130 != plVar11) {
        if (*plStack_130 == 0) {
          uVar14 = 0;
        }
        else {
          uStack_11c = (undefined4)plStack_130[2];
          uStack_118 = 0;
          FUN_1450737c0(plStack_130,*(undefined4 *)(lVar8 + 0x30),&uStack_11c,&uStack_118);
          *(undefined4 *)(plStack_130 + 2) = uStack_11c;
          uVar14 = uStack_118;
        }
      }
      *(undefined4 *)(lVar8 + 0x44) = uVar14;
      if (bVar4) {
        fVar13 = *(float *)(lVar8 + 0x34);
        fVar1 = *(float *)(lVar6 + 0x18);
        fVar2 = *(float *)(param_1 + 400);
        if (fVar1 < fVar13) {
          if (fVar13 < *(float *)(lVar6 + 0x1c)) {
            fVar13 = (fVar13 - fVar1) / (*(float *)(lVar6 + 0x1c) - fVar1);
          }
          else {
            fVar13 = 1.0;
          }
          *(float *)(lVar8 + 0x78) = fVar13;
          fVar13 = fVar13 * fVar2 * 0.05;
          if ((fVar13 < -37.0) || (37.0 < fVar13)) {
            fVar13 = 0.0;
          }
          else {
            uVar7 = (uint)(longlong)(fVar13 * 27866352.0 + 1.0653532e+09);
            fStack_f0 = (float)(uVar7 & 0xff800000);
            fStack_f4 = (float)((uVar7 & 0x7fffff) + 0x3f800000);
            fVar13 = ((fStack_f4 * 0.32518977 + 0.020805772) * fStack_f4 + 0.65304345) * fStack_f0;
          }
        }
        else {
          *(undefined4 *)(lVar8 + 0x78) = 0;
          fVar13 = 1.0;
        }
        *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
      }
    }
    fVar13 = *(float *)(lVar8 + 0x88);
    *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
    *(float *)(lVar8 + 0x40) = fVar13 * *(float *)(lVar8 + 0x40);
    *(float *)(lVar8 + 0x44) = fVar13 * *(float *)(lVar8 + 0x44);
    if ((plStack_148 != (longlong *)0x0) && (*(float *)(lVar8 + 0x48) != 0.0)) {
      if (*plStack_148 == 0) {
        fVar13 = 0.0;
      }
      else {
        uStack_114 = (undefined4)plStack_148[2];
        fStack_110 = 0.0;
        FUN_1450737c0(plStack_148,*(float *)(lVar8 + 0x48),&uStack_114,&fStack_110);
        *(undefined4 *)(plStack_148 + 2) = uStack_114;
        fVar13 = fStack_110;
      }
      *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
      *(float *)(lVar8 + 0x40) = fVar13 * *(float *)(lVar8 + 0x40);
      *(float *)(lVar8 + 0x44) = fVar13 * *(float *)(lVar8 + 0x44);
    }
    if ((plVar9 != (longlong *)0x0) && (*(float *)(lVar8 + 0x54) != 0.0)) {
      if (*plVar9 == 0) {
        fVar13 = 0.0;
      }
      else {
        uStack_10c = (undefined4)plVar9[2];
        fStack_108 = 0.0;
        FUN_1450737c0(plVar9,*(float *)(lVar8 + 0x54),&uStack_10c,&fStack_108);
        *(undefined4 *)(plVar9 + 2) = uStack_10c;
        fVar13 = fStack_108;
      }
      *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
      *(float *)(lVar8 + 0x40) = fVar13 * *(float *)(lVar8 + 0x40);
      *(float *)(lVar8 + 0x44) = fVar13 * *(float *)(lVar8 + 0x44);
    }
    if ((plVar10 != (longlong *)0x0) && (*(float *)(lVar8 + 0x4c) != 0.0)) {
      if (*plVar10 == 0) {
        fVar13 = 0.0;
      }
      else {
        uStack_104 = (undefined4)plVar10[2];
        fStack_100 = 0.0;
        FUN_1450737c0(plVar10,*(float *)(lVar8 + 0x4c),&uStack_104,&fStack_100);
        *(undefined4 *)(plVar10 + 2) = uStack_104;
        fVar13 = fStack_100;
      }
      *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
    }
    if ((plStack_140 != (longlong *)0x0) && (*(float *)(lVar8 + 0x50) != 0.0)) {
      if (*plStack_140 == 0) {
        fVar13 = 0.0;
      }
      else {
        uStack_fc = (undefined4)plStack_140[2];
        fStack_f8 = 0.0;
        FUN_1450737c0(plStack_140,*(float *)(lVar8 + 0x50),&uStack_fc,&fStack_f8);
        *(undefined4 *)(plStack_140 + 2) = uStack_fc;
        fVar13 = fStack_f8;
      }
      *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
    }
    lVar8 = lVar8 + 0x90;
  } while (lVar8 != (ulonglong)*(uint *)(param_2 + 1) * 0x90 + *param_2);
  return;
}



// FUNCTION 145079330 thunk_FUN_14507bde0 body=5 status=ok
// SIG undefined thunk_FUN_14507bde0(void)

void thunk_FUN_14507bde0(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStackX_20;
  float fStack_178;
  longlong *plStack_170;
  longlong *plStack_168;
  longlong *plStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  longlong *plStack_148;
  undefined4 uStack_140;
  float fStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  undefined4 uStack_130;
  float fStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  float fStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  longlong lStack_f0;
  
  if ((*(byte *)(param_1 + 0x19c) & 0x40) == 0) {
    cVar4 = FUN_1450e71a0();
  }
  else {
    lVar5 = FUN_14507bcb0(param_1 + 0x188);
    plVar8 = (longlong *)0x0;
    fStackX_20 = 0.0;
    fStack_178 = 0.0;
    plStack_160 = (longlong *)0x0;
    plStack_168 = (longlong *)0x0;
    plStack_158 = (longlong *)0x0;
    plStack_150 = (longlong *)0x0;
    cVar4 = FUN_1450e71a0(param_1);
    if (lVar5 != 0) {
      if ((*(byte *)(lVar5 + 0x1fb) == 0xff) ||
         (plStack_170 = (longlong *)(lVar5 + ((ulonglong)*(byte *)(lVar5 + 0x1fb) + 2) * 0x18),
         *plStack_170 == 0)) {
        plStack_170 = (longlong *)0x0;
      }
      if ((*(byte *)(lVar5 + 0x1fc) == 0xff) ||
         (lVar6 = (ulonglong)*(byte *)(lVar5 + 0x1fc) + 2,
         plVar7 = (longlong *)(lVar5 + lVar6 * 0x18), *(longlong *)(lVar5 + lVar6 * 0x18) == 0)) {
        plVar7 = plVar8;
      }
      if ((*(byte *)(lVar5 + 0x20b) & 1) != 0) {
        fStackX_20 = *(float *)(param_1 + 0x194);
        fStack_178 = *(float *)(param_1 + 0x198);
      }
      if (cVar4 != '\0') {
        bVar2 = *(byte *)(lVar5 + 0x200);
        plStack_160 = (longlong *)0x0;
        if (bVar2 == 0xfe) {
          if ((*(char *)(DAT_14c791038 + 1) != '\0') && (*(longlong *)(DAT_14c791038 + 0x20) != 0))
          {
            plStack_160 = (longlong *)(DAT_14c791038 + 0x20);
          }
        }
        else if ((bVar2 == 0xff) ||
                (plStack_160 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18),
                *plStack_160 == 0)) {
          plStack_160 = (longlong *)0x0;
        }
        bVar2 = *(byte *)(lVar5 + 0x201);
        plStack_168 = (longlong *)0x0;
        if (bVar2 == 0xfe) {
          if ((*(char *)(DAT_14c791038 + 2) != '\0') && (*(longlong *)(DAT_14c791038 + 0x38) != 0))
          {
            plStack_168 = (longlong *)(DAT_14c791038 + 0x38);
          }
        }
        else if ((bVar2 == 0xff) ||
                (plStack_168 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18),
                *plStack_168 == 0)) {
          plStack_168 = (longlong *)0x0;
        }
        bVar2 = *(byte *)(lVar5 + 0x206);
        plStack_158 = (longlong *)0x0;
        if (bVar2 == 0xfe) {
          if ((*(char *)(DAT_14c791038 + 1) != '\0') && (*(longlong *)(DAT_14c791038 + 0x20) != 0))
          {
            plStack_158 = (longlong *)(DAT_14c791038 + 0x20);
          }
        }
        else if ((bVar2 == 0xff) ||
                (plStack_158 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18),
                *plStack_158 == 0)) {
          plStack_158 = (longlong *)0x0;
        }
        bVar2 = *(byte *)(lVar5 + 0x207);
        plStack_150 = (longlong *)0x0;
        if (bVar2 == 0xfe) {
          if ((*(char *)(DAT_14c791038 + 2) != '\0') && (*(longlong *)(DAT_14c791038 + 0x38) != 0))
          {
            plStack_150 = (longlong *)(DAT_14c791038 + 0x38);
          }
        }
        else if ((bVar2 == 0xff) ||
                (plStack_150 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18),
                *plStack_150 == 0)) {
          plStack_150 = (longlong *)0x0;
        }
      }
      bVar2 = *(byte *)(lVar5 + 0x203);
      if (bVar2 == 0xfe) {
        plVar9 = plVar8;
        if ((*(char *)(DAT_14c791038 + 4) != '\0') &&
           (plVar9 = (longlong *)0x0, *(longlong *)(DAT_14c791038 + 0x68) != 0)) {
          plVar9 = (longlong *)(DAT_14c791038 + 0x68);
        }
      }
      else if ((bVar2 == 0xff) ||
              (plVar9 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18),
              *(longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18) == 0)) {
        plVar9 = (longlong *)0x0;
      }
      bVar2 = *(byte *)(lVar5 + 0x204);
      if (bVar2 == 0xfe) {
        plVar10 = plVar8;
        if ((*(char *)(DAT_14c791038 + 5) != '\0') &&
           (plVar10 = (longlong *)0x0, *(longlong *)(DAT_14c791038 + 0x80) != 0)) {
          plVar10 = (longlong *)(DAT_14c791038 + 0x80);
        }
      }
      else if ((bVar2 == 0xff) ||
              (plVar10 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18),
              *(longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18) == 0)) {
        plVar10 = (longlong *)0x0;
      }
      bVar2 = *(byte *)(lVar5 + 0x209);
      plStack_148 = (longlong *)0x0;
      if (bVar2 == 0xfe) {
        if ((*(char *)(DAT_14c791038 + 4) != '\0') && (*(longlong *)(DAT_14c791038 + 0x68) != 0)) {
          plStack_148 = (longlong *)(DAT_14c791038 + 0x68);
        }
      }
      else if ((bVar2 == 0xff) ||
              (plStack_148 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18), *plStack_148 == 0)
              ) {
        plStack_148 = (longlong *)0x0;
      }
      bVar2 = *(byte *)(lVar5 + 0x20a);
      if (bVar2 == 0xfe) {
        if ((*(char *)(DAT_14c791038 + 5) != '\0') &&
           (plVar8 = (longlong *)0x0, *(longlong *)(DAT_14c791038 + 0x80) != 0)) {
          plVar8 = (longlong *)(DAT_14c791038 + 0x80);
        }
      }
      else if ((bVar2 == 0xff) ||
              (plVar8 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18),
              *(longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18) == 0)) {
        plVar8 = (longlong *)0x0;
      }
      goto LAB_14507c282;
    }
  }
  plStack_160 = (longlong *)0x0;
  plStack_168 = (longlong *)0x0;
  plVar7 = (longlong *)0x0;
  if (cVar4 != '\0') {
    if ((*(char *)(DAT_14c791038 + 1) != '\0') && (*(longlong *)(DAT_14c791038 + 0x20) != 0)) {
      plStack_160 = (longlong *)(DAT_14c791038 + 0x20);
    }
    plStack_168 = (longlong *)0x0;
    if ((*(char *)(DAT_14c791038 + 2) != '\0') && (*(longlong *)(DAT_14c791038 + 0x38) != 0)) {
      plStack_168 = (longlong *)(DAT_14c791038 + 0x38);
    }
  }
  plVar9 = plVar7;
  if ((*(char *)(DAT_14c791038 + 4) != '\0') && (*(longlong *)(DAT_14c791038 + 0x68) != 0)) {
    plVar9 = (longlong *)(DAT_14c791038 + 0x68);
  }
  plStack_170 = (longlong *)0x0;
  fStack_178 = 0.0;
  fStackX_20 = 0.0;
  plVar8 = plVar7;
  plVar10 = plVar7;
  plStack_158 = plStack_160;
  plStack_150 = plStack_168;
  plStack_148 = plVar9;
  if ((*(char *)(DAT_14c791038 + 5) != '\0') && (*(longlong *)(DAT_14c791038 + 0x80) != 0)) {
    plVar8 = (longlong *)(DAT_14c791038 + 0x80);
    fStackX_20 = 0.0;
    fStack_178 = 0.0;
    plStack_170 = (longlong *)0x0;
    plVar10 = plVar8;
  }
LAB_14507c282:
  fVar18 = 0.0;
  fVar14 = 100.0;
  lStack_f0 = *(longlong *)(param_3 + 0x170);
  cVar4 = FUN_1450e7cb0(param_1);
  if (cVar4 != '\0') {
    fVar14 = 0.0;
  }
  lVar5 = *param_2;
  fVar16 = fVar14;
  do {
    fVar15 = fVar14;
    fVar17 = fVar16;
    if (lStack_f0 == *(longlong *)(lVar5 + 0x70)) {
      uVar1 = *(undefined4 *)(lVar5 + 0x30);
      fVar17 = 0.0;
      if (plStack_170 != (longlong *)0x0) {
        if (*plStack_170 == 0) {
          fVar17 = 0.0;
        }
        else {
          uStack_140 = (undefined4)plStack_170[2];
          fStack_13c = 0.0;
          FUN_1450737c0(plStack_170,uVar1,&uStack_140,&fStack_13c);
          *(undefined4 *)(plStack_170 + 2) = uStack_140;
          fVar17 = fStack_13c;
        }
      }
      fVar15 = 0.0;
      if (plVar7 != (longlong *)0x0) {
        if (*plVar7 == 0) {
          fVar15 = 0.0;
        }
        else {
          uStack_138 = (undefined4)plVar7[2];
          fStack_134 = 0.0;
          FUN_1450737c0(plVar7,uVar1,&uStack_138,&fStack_134);
          *(undefined4 *)(plVar7 + 2) = uStack_138;
          fVar15 = fStack_134;
        }
      }
      fVar12 = *(float *)(lVar5 + 0x78) * fStack_178;
      fVar13 = *(float *)(lVar5 + 0x78) * fStackX_20;
      if (fVar12 <= fVar15) {
        fVar12 = fVar15;
      }
      fVar15 = *(float *)(lVar5 + 0x48);
      if (fVar13 <= fVar17) {
        fVar13 = fVar17;
      }
      fVar11 = *(float *)(lVar5 + 0x54);
      fVar17 = fVar13;
      if ((plVar9 != (longlong *)0x0) && (fVar15 != 0.0)) {
        if (*plVar9 == 0) {
          fVar17 = 0.0;
        }
        else {
          uStack_130 = (undefined4)plVar9[2];
          fStack_12c = 0.0;
          FUN_1450737c0(plVar9,fVar15,&uStack_130,&fStack_12c);
          *(undefined4 *)(plVar9 + 2) = uStack_130;
          fVar17 = fStack_12c;
        }
        if (fVar17 <= fVar13) {
          fVar17 = fVar13;
        }
      }
      fVar13 = fVar12;
      if ((plVar10 != (longlong *)0x0) && (fVar15 != 0.0)) {
        if (*plVar10 == 0) {
          fVar13 = 0.0;
        }
        else {
          uStack_128 = (undefined4)plVar10[2];
          fStack_124 = 0.0;
          FUN_1450737c0(plVar10,fVar15,&uStack_128,&fStack_124);
          *(undefined4 *)(plVar10 + 2) = uStack_128;
          fVar13 = fStack_124;
        }
        if (fVar13 <= fVar12) {
          fVar13 = fVar12;
        }
      }
      fVar15 = fVar17;
      if ((plStack_148 != (longlong *)0x0) && (fVar11 != 0.0)) {
        if (*plStack_148 == 0) {
          fVar15 = 0.0;
        }
        else {
          uStack_120 = (undefined4)plStack_148[2];
          fStack_11c = 0.0;
          FUN_1450737c0(plStack_148,fVar11,&uStack_120,&fStack_11c);
          *(undefined4 *)(plStack_148 + 2) = uStack_120;
          fVar15 = fStack_11c;
        }
        if (fVar15 <= fVar17) {
          fVar15 = fVar17;
        }
      }
      fVar17 = fVar13;
      if ((plVar8 != (longlong *)0x0) && (fVar11 != 0.0)) {
        if (*plVar8 == 0) {
          fVar17 = 0.0;
        }
        else {
          uStack_118 = (undefined4)plVar8[2];
          fStack_114 = 0.0;
          FUN_1450737c0(plVar8,fVar11,&uStack_118,&fStack_114);
          *(undefined4 *)(plVar8 + 2) = uStack_118;
          fVar17 = fStack_114;
        }
        if (fVar17 <= fVar13) {
          fVar17 = fVar13;
        }
      }
      if (*(int *)(param_3 + 0x194) == 0) {
        fVar12 = *(float *)(lVar5 + 0x4c);
        fVar13 = fVar15;
        if ((plStack_160 != (longlong *)0x0) && (fVar12 != 0.0)) {
          if (*plStack_160 == 0) {
            fVar13 = 0.0;
          }
          else {
            uStack_110 = (undefined4)plStack_160[2];
            fStack_10c = 0.0;
            FUN_1450737c0(plStack_160,fVar12,&uStack_110,&fStack_10c);
            *(undefined4 *)(plStack_160 + 2) = uStack_110;
            fVar13 = fStack_10c;
          }
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
        }
        fVar11 = fVar17;
        if ((plStack_168 != (longlong *)0x0) && (fVar12 != 0.0)) {
          if (*plStack_168 == 0) {
            fVar11 = 0.0;
          }
          else {
            uStack_108 = (undefined4)plStack_168[2];
            fStack_104 = 0.0;
            FUN_1450737c0(plStack_168,fVar12,&uStack_108,&fStack_104);
            *(undefined4 *)(plStack_168 + 2) = uStack_108;
            fVar11 = fStack_104;
          }
          if (fVar11 <= fVar17) {
            fVar11 = fVar17;
          }
        }
        fVar12 = *(float *)(lVar5 + 0x50);
        fVar15 = fVar13;
        if ((plStack_158 != (longlong *)0x0) && (fVar12 != 0.0)) {
          if (*plStack_158 == 0) {
            fVar15 = 0.0;
          }
          else {
            uStack_100 = (undefined4)plStack_158[2];
            fStack_fc = 0.0;
            FUN_1450737c0(plStack_158,fVar12,&uStack_100,&fStack_fc);
            *(undefined4 *)(plStack_158 + 2) = uStack_100;
            fVar15 = fStack_fc;
          }
          if (fVar15 <= fVar13) {
            fVar15 = fVar13;
          }
        }
        fVar17 = fVar11;
        if ((plStack_150 != (longlong *)0x0) && (fVar12 != 0.0)) {
          if (*plStack_150 == 0) {
            fVar17 = 0.0;
          }
          else {
            uStack_f8 = (undefined4)plStack_150[2];
            fStack_f4 = 0.0;
            FUN_1450737c0(plStack_150,fVar12,&uStack_f8,&fStack_f4);
            *(undefined4 *)(plStack_150 + 2) = uStack_f8;
            fVar17 = fStack_f4;
          }
          if (fVar17 <= fVar11) {
            fVar17 = fVar11;
          }
        }
      }
      *(float *)(lVar5 + 0x7c) = fVar15;
      *(float *)(lVar5 + 0x80) = fVar17;
      if (cVar4 == '\0') {
        if (fVar14 <= fVar15) {
          fVar15 = fVar14;
        }
        if (fVar16 <= fVar17) {
          fVar17 = fVar16;
        }
      }
      else {
        iVar3 = *(int *)(param_3 + 0x194);
        if (iVar3 == 0) {
          fVar12 = *(float *)(lVar5 + 0x3c);
        }
        else if (iVar3 == 1) {
          fVar12 = *(float *)(lVar5 + 0x40);
        }
        else if (iVar3 == 2) {
          fVar12 = *(float *)(lVar5 + 0x44);
        }
        else {
          fVar12 = 1.0;
        }
        if (0.0 <= fVar15) {
          fVar13 = fVar15;
          if (100.0 <= fVar15) {
            fVar13 = 100.0;
          }
        }
        else {
          fVar13 = 0.0;
        }
        if (0.0 <= fVar17) {
          fVar11 = fVar17;
          if (100.0 <= fVar17) {
            fVar11 = 100.0;
          }
        }
        else {
          fVar11 = 0.0;
        }
        fVar11 = (0.0031678583 - fVar11 * 1.3191276e-10 * fVar11) * fVar11 + 0.98224795;
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
        fVar11 = fVar12 * (((fVar13 * 9.302722e-07 - 0.00017546544) * fVar13 - 0.0011517591) *
                           fVar13 + 0.9843052) * fVar11;
        fVar11 = fVar11 * fVar11;
        fVar18 = fVar18 + fVar11;
        fVar15 = fVar14 + fVar11 * fVar15;
        fVar17 = fVar16 + fVar11 * fVar17;
      }
    }
    lVar5 = lVar5 + 0x90;
    fVar14 = fVar15;
    fVar16 = fVar17;
  } while (lVar5 != (ulonglong)*(uint *)(param_2 + 1) * 0x90 + *param_2);
  if ((cVar4 != '\0') && (0.0 < fVar18)) {
    fVar17 = fVar17 * (1.0 / fVar18);
    fVar15 = fVar15 * (1.0 / fVar18);
  }
  *(float *)(param_3 + 0x180) = fVar15;
  *(float *)(param_3 + 0x184) = fVar17;
  return;
}



// FUNCTION 145079340 FUN_145079340 body=47 status=ok
// SIG undefined FUN_145079340(void)

void FUN_145079340(void)

{
  if (DAT_14c79be28 != 0) {
    FUN_1450ad350(g_pRegistryMgr,&DAT_14c79be10);
    DAT_14c79be28 = 0;
  }
  return;
}



// FUNCTION 145079370 FUN_145079370 body=70 status=ok
// SIG undefined FUN_145079370(void)

void FUN_145079370(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  for (lVar1 = DAT_14c7913d0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
    FUN_14507b200(lVar1,lVar1 + 0x60);
    FUN_1450773d0(&DAT_14c79be10,*(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x58),local_res8);
  }
  return;
}



// FUNCTION 1450793c0 FUN_1450793c0 body=51 status=ok
// SIG undefined FUN_1450793c0(void)

longlong FUN_1450793c0(__uint64 param_1)

{
  CAkRegisteredObj *pCVar1;
  longlong lVar2;
  
  pCVar1 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
  if (pCVar1 != (CAkRegisteredObj *)0x0) {
    lVar2 = 0;
    if (*(longlong *)(pCVar1 + 0x20) != 0) {
      lVar2 = *(longlong *)(pCVar1 + 0x20) + 0x3c;
    }
    return lVar2;
  }
  return 0;
}



// FUNCTION 145079400 FUN_145079400 body=174 status=ok
// SIG undefined FUN_145079400(void)

ulonglong FUN_145079400(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = 0;
  fVar5 = 1.0;
  if (DAT_14c72f440 < *(float *)(param_1 + 0x14)) {
    fVar5 = 1.0 / *(float *)(param_1 + 0x14);
  }
  lVar2 = *param_2;
  if (lVar2 != (ulonglong)*(uint *)(param_2 + 1) * 0x90 + lVar2) {
    do {
      if (*(longlong *)(param_1 + 0x170) == *(longlong *)(lVar2 + 0x70)) {
        *(longlong *)(param_3 + uVar3 * 8) = lVar2;
        iVar1 = *(int *)(param_1 + 0x194);
        if (iVar1 == 0) {
          fVar4 = *(float *)(lVar2 + 0x3c);
        }
        else if (iVar1 == 1) {
          fVar4 = *(float *)(lVar2 + 0x40);
        }
        else if (iVar1 == 2) {
          fVar4 = *(float *)(lVar2 + 0x44);
        }
        else {
          fVar4 = 1.0;
        }
        *(float *)(param_4 + uVar3 * 4) = fVar4 * fVar5;
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      lVar2 = lVar2 + 0x90;
    } while (lVar2 != (ulonglong)*(uint *)(param_2 + 1) * 0x90 + *param_2);
  }
  return uVar3;
}



// FUNCTION 1450794b0 FUN_1450794b0 body=1111 status=ok
// SIG undefined FUN_1450794b0(void)

void FUN_1450794b0(uint param_1,float param_2,float param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  uint uVar2;
  float *pfVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0.0 <= param_2) {
    if (100.0 <= param_2) {
      param_2 = 100.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  fVar11 = 1.0 / (((param_2 * 9.302722e-07 - 0.00017546544) * param_2 - 0.0011517591) * param_2 +
                 0.9843052);
  if (0.0 <= param_3) {
    if (100.0 <= param_3) {
      param_3 = 100.0;
    }
  }
  else {
    param_3 = 0.0;
  }
  lVar7 = 0;
  uVar6 = 0;
  fVar9 = (0.0031678583 - param_3 * 1.3191276e-10 * param_3) * param_3 + 0.98224795;
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  fVar9 = 1.0 / fVar9;
  if (param_1 < 4) {
    if (param_1 == 0) {
      return;
    }
  }
  else {
    plVar4 = (longlong *)(param_4 + 0x10);
    uVar2 = (param_1 - 4 >> 2) + 1;
    pfVar3 = (float *)(param_5 + 8);
    uVar5 = (ulonglong)uVar2;
    uVar6 = uVar2 * 4;
    lVar7 = (ulonglong)uVar2 * 4;
    do {
      fVar8 = *(float *)(plVar4[-2] + 0x7c);
      if (0.0 <= fVar8) {
        if (100.0 <= fVar8) {
          fVar8 = 100.0;
        }
      }
      else {
        fVar8 = 0.0;
      }
      fVar10 = *(float *)(plVar4[-2] + 0x80);
      if (0.0 <= fVar10) {
        if (100.0 <= fVar10) {
          fVar10 = 100.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      lVar1 = plVar4[-1];
      fVar10 = (0.0031678583 - fVar10 * 1.3191276e-10 * fVar10) * fVar10 + 0.98224795;
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      pfVar3[-2] = fVar10 * fVar9 *
                   (((fVar8 * 9.302722e-07 - 0.00017546544) * fVar8 - 0.0011517591) * fVar8 +
                   0.9843052) * fVar11 * pfVar3[-2];
      fVar8 = *(float *)(lVar1 + 0x7c);
      if (0.0 <= fVar8) {
        if (100.0 <= fVar8) {
          fVar8 = 100.0;
        }
      }
      else {
        fVar8 = 0.0;
      }
      fVar10 = *(float *)(lVar1 + 0x80);
      if (0.0 <= fVar10) {
        if (100.0 <= fVar10) {
          fVar10 = 100.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      lVar1 = *plVar4;
      fVar10 = (0.0031678583 - fVar10 * 1.3191276e-10 * fVar10) * fVar10 + 0.98224795;
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      pfVar3[-1] = fVar10 * fVar9 *
                   (((fVar8 * 9.302722e-07 - 0.00017546544) * fVar8 - 0.0011517591) * fVar8 +
                   0.9843052) * fVar11 * pfVar3[-1];
      fVar8 = *(float *)(lVar1 + 0x7c);
      if (0.0 <= fVar8) {
        if (100.0 <= fVar8) {
          fVar8 = 100.0;
        }
      }
      else {
        fVar8 = 0.0;
      }
      fVar10 = *(float *)(lVar1 + 0x80);
      if (0.0 <= fVar10) {
        if (100.0 <= fVar10) {
          fVar10 = 100.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      lVar1 = plVar4[1];
      fVar10 = (0.0031678583 - fVar10 * 1.3191276e-10 * fVar10) * fVar10 + 0.98224795;
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      *pfVar3 = fVar10 * fVar9 *
                (((fVar8 * 9.302722e-07 - 0.00017546544) * fVar8 - 0.0011517591) * fVar8 + 0.9843052
                ) * fVar11 * *pfVar3;
      fVar8 = *(float *)(lVar1 + 0x7c);
      if (0.0 <= fVar8) {
        if (100.0 <= fVar8) {
          fVar8 = 100.0;
        }
      }
      else {
        fVar8 = 0.0;
      }
      fVar10 = *(float *)(lVar1 + 0x80);
      if (0.0 <= fVar10) {
        if (100.0 <= fVar10) {
          fVar10 = 100.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      plVar4 = plVar4 + 4;
      fVar10 = (0.0031678583 - fVar10 * 1.3191276e-10 * fVar10) * fVar10 + 0.98224795;
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      pfVar3[1] = fVar10 * fVar9 *
                  (((fVar8 * 9.302722e-07 - 0.00017546544) * fVar8 - 0.0011517591) * fVar8 +
                  0.9843052) * fVar11 * pfVar3[1];
      pfVar3 = pfVar3 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    if (param_1 <= uVar6) {
      return;
    }
  }
  pfVar3 = (float *)(param_5 + lVar7 * 4);
  uVar5 = (ulonglong)(param_1 - uVar6);
  plVar4 = (longlong *)(param_4 + lVar7 * 8);
  do {
    fVar8 = *(float *)(*plVar4 + 0x7c);
    if (0.0 <= fVar8) {
      if (100.0 <= fVar8) {
        fVar8 = 100.0;
      }
    }
    else {
      fVar8 = 0.0;
    }
    fVar10 = *(float *)(*plVar4 + 0x80);
    if (0.0 <= fVar10) {
      if (100.0 <= fVar10) {
        fVar10 = 100.0;
      }
    }
    else {
      fVar10 = 0.0;
    }
    plVar4 = plVar4 + 1;
    fVar10 = (0.0031678583 - fVar10 * 1.3191276e-10 * fVar10) * fVar10 + 0.98224795;
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    *pfVar3 = fVar10 * fVar9 *
              (((fVar8 * 9.302722e-07 - 0.00017546544) * fVar8 - 0.0011517591) * fVar8 + 0.9843052)
              * fVar11 * *pfVar3;
    pfVar3 = pfVar3 + 1;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return;
}



// FUNCTION 145079910 FUN_145079910 body=2897 status=ok
// SIG undefined FUN_145079910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145079910(undefined8 *param_1,uint param_2,longlong param_3,char param_4,char param_5,
                  longlong param_6,longlong *param_7,longlong *param_8,longlong param_9)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
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
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 local_190;
  float local_18c;
  undefined4 local_188;
  float local_184 [3];
  undefined1 local_178 [8];
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  
  lVar12 = param_6;
  uVar15 = 0;
  if (*(char *)(param_6 + 0x94) == '\0') {
    do {
      puVar13 = (undefined8 *)(uVar15 * 0x30 + param_9);
      if (puVar13 != (undefined8 *)0x0) {
        *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
        *(undefined4 *)(puVar13 + 5) = 0x3f800000;
        *(undefined4 *)((longlong)puVar13 + 0x2c) = 0xffff;
        puVar13[3] = 0;
        *(undefined4 *)(puVar13 + 4) = 0;
        *puVar13 = 0;
        puVar13[1] = 0x3f800000;
        puVar13[2] = 0x3f800000;
      }
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
    } while (uVar14 < param_2);
    return;
  }
  local_1c4 = 0.0;
  do {
    uVar11 = param_1[1];
    fVar18 = (float)uVar15;
    puVar13 = (undefined8 *)(param_9 + uVar15 * 0x30);
    *puVar13 = *param_1;
    puVar13[1] = uVar11;
    uVar11 = param_1[3];
    puVar13 = (undefined8 *)(param_9 + 0x10 + uVar15 * 0x30);
    *puVar13 = param_1[2];
    puVar13[1] = uVar11;
    uVar11 = param_1[5];
    puVar13 = (undefined8 *)(param_9 + 0x20 + uVar15 * 0x30);
    *puVar13 = param_1[4];
    puVar13[1] = uVar11;
    fVar16 = _DAT_14c72e9c8;
    fVar21 = fRam000000014c72e9d4;
    fVar20 = fRam000000014c72e9d0;
    local_1c0 = fRam000000014c72e9c4;
    if (param_5 == '\0') {
      local_178._0_4_ = fRam000000014c72e9c0;
      fVar26 = 0.0;
      local_128._0_4_ = fRam000000014c72e9bc;
      fVar27 = 0.0;
      local_168._0_4_ = fRam000000014c72e9d4;
      fVar17 = 0.0;
      local_158._0_4_ = fRam000000014c72e9d0;
      local_148._0_4_ = fRam000000014c72e9cc;
      local_108._0_4_ = fRam000000014c72e9c4;
      param_6._0_4_ = DAT_14c72e9d8;
      local_118._0_4_ = _DAT_14c72e9c8;
      local_1c8 = fRam000000014c72e9cc;
      local_1b8 = _DAT_14c72e9b8;
    }
    else {
      pfVar10 = *(float **)(param_3 + uVar15 * 8);
      fVar18 = (float)(*(double *)(pfVar10 + 6) - *(double *)(lVar12 + 0x78));
      fVar25 = (float)(*(double *)(pfVar10 + 8) - *(double *)(lVar12 + 0x80));
      fVar23 = (float)(*(double *)(pfVar10 + 10) - *(double *)(lVar12 + 0x88));
      if (param_5 == '\x02') {
        fVar21 = pfVar10[4];
        fVar20 = pfVar10[5];
        fVar17 = pfVar10[3];
        fVar26 = pfVar10[1];
        fVar27 = *pfVar10;
        fVar24 = *(float *)(lVar12 + 0x40);
        fVar2 = *(float *)(lVar12 + 0x44);
        fVar3 = *(float *)(lVar12 + 0x4c);
        fVar4 = *(float *)(lVar12 + 0x50);
        fVar5 = *(float *)(lVar12 + 0x5c);
        fVar22 = pfVar10[2] * fVar21 - fVar26 * fVar20;
        fVar19 = fVar27 * fVar20 - fVar17 * pfVar10[2];
        fVar16 = fVar17 * fVar26 - fVar27 * fVar21;
        fVar6 = *(float *)(lVar12 + 0x3c);
        fVar7 = *(float *)(lVar12 + 0x48);
        local_1b8 = fVar24 * fVar19 + fVar6 * fVar22 + fVar2 * fVar16;
        local_f8 = ZEXT416((uint)local_1b8);
        fVar8 = *(float *)(lVar12 + 0x58);
        fStack_1b4 = fVar3 * fVar19 + fVar7 * fVar22 + fVar4 * fVar16;
        _local_128 = ZEXT416((uint)fStack_1b4);
        fVar9 = *(float *)(lVar12 + 0x54);
        fStack_1b0 = fVar8 * fVar19 + fVar9 * fVar22 + fVar5 * fVar16;
        _local_178 = ZEXT416((uint)fStack_1b0);
        local_1c0 = fVar6 * fVar17 + fVar24 * fVar21 + fVar2 * fVar20;
        fVar16 = fVar7 * fVar17 + fVar3 * fVar21 + fVar4 * fVar20;
        _local_108 = ZEXT416((uint)local_1c0);
        fStack_15c = 0.0;
        fVar22 = pfVar10[2];
        fVar19 = fVar8 * fVar21 + fVar9 * fVar17 + fVar5 * fVar20;
        _local_148 = ZEXT416((uint)fVar19);
        _local_118 = ZEXT416((uint)fVar16);
        fVar21 = fVar7 * fVar27 + fVar3 * fVar26 + fVar4 * fVar22;
        fVar20 = fVar6 * fVar27 + fVar24 * fVar26 + fVar2 * fVar22;
        local_158._4_4_ = 0.0;
        param_6._0_4_ = fVar8 * fVar26 + fVar9 * fVar27 + fVar5 * fVar22;
      }
      else {
        local_178._4_4_ = fRam000000014c72e9c0;
        local_178._0_4_ = fRam000000014c72e9c0;
        fStack_170 = fRam000000014c72e9c0;
        fStack_16c = fRam000000014c72e9c0;
        local_128._4_4_ = fRam000000014c72e9bc;
        local_128._0_4_ = fRam000000014c72e9bc;
        fStack_120 = fRam000000014c72e9bc;
        fStack_11c = fRam000000014c72e9bc;
        local_1b8 = _DAT_14c72e9b8;
        fStack_1b4 = fRam000000014c72e9bc;
        fStack_1b0 = fRam000000014c72e9c0;
        local_118._4_4_ = fRam000000014c72e9cc;
        local_118._0_4_ = _DAT_14c72e9c8;
        fStack_110 = fRam000000014c72e9d0;
        fStack_10c = fRam000000014c72e9d4;
        local_148._4_4_ = fRam000000014c72e9cc;
        local_148._0_4_ = fRam000000014c72e9cc;
        fStack_140 = fRam000000014c72e9cc;
        fStack_13c = fRam000000014c72e9cc;
        local_108._4_4_ = fRam000000014c72e9c4;
        local_108._0_4_ = fRam000000014c72e9c4;
        fStack_100 = fRam000000014c72e9c4;
        fStack_fc = fRam000000014c72e9c4;
        fVar19 = fRam000000014c72e9cc;
        fStack_15c = fRam000000014c72e9d4;
        local_158._4_4_ = fRam000000014c72e9d0;
        param_6._0_4_ = DAT_14c72e9d8;
      }
      local_158._0_4_ = fVar20;
      fStack_150 = (float)local_158._4_4_;
      fStack_14c = (float)local_158._4_4_;
      local_1c8 = pfVar10[0x16];
      local_168._4_4_ = fStack_15c;
      local_168._0_4_ = fVar21;
      fStack_160 = fStack_15c;
      fVar24 = 0.0;
      fVar17 = 1.0 / pfVar10[0x18];
      fVar26 = (fVar25 * *(float *)(lVar12 + 0x40) + fVar18 * *(float *)(lVar12 + 0x3c) +
               fVar23 * *(float *)(lVar12 + 0x44)) * fVar17;
      fVar27 = (fVar25 * *(float *)(lVar12 + 0x4c) + fVar18 * *(float *)(lVar12 + 0x48) +
               fVar23 * *(float *)(lVar12 + 0x50)) * fVar17;
      fVar17 = (fVar25 * *(float *)(lVar12 + 0x58) + fVar18 * *(float *)(lVar12 + 0x54) +
               fVar23 * *(float *)(lVar12 + 0x5c)) * fVar17;
      if ((param_7 != (longlong *)0x0) || (param_8 != (longlong *)0x0)) {
        fVar18 = SQRT(fVar27 * fVar27 + fVar26 * fVar26 + fVar17 * fVar17);
        if (param_7 != (longlong *)0x0) {
          if (*param_7 == 0) {
            local_1c8 = 0.0;
          }
          else {
            local_190 = (undefined4)param_7[2];
            local_18c = 0.0;
            FUN_1450737c0(param_7,fVar18,&local_190,&local_18c);
            _local_178 = ZEXT416((uint)fStack_1b0);
            _local_128 = ZEXT416((uint)fStack_1b4);
            local_1c8 = local_18c;
            *(undefined4 *)(param_7 + 2) = local_190;
            _local_168 = ZEXT416((uint)fVar21);
            _local_158 = ZEXT416((uint)fVar20);
            _local_148 = ZEXT416((uint)fVar19);
            _local_118 = ZEXT416((uint)fVar16);
            _local_108 = ZEXT416((uint)local_1c0);
          }
        }
        if ((param_8 != (longlong *)0x0) && (*param_8 != 0)) {
          local_188 = (undefined4)param_8[2];
          local_184[0] = 0.0;
          FUN_1450737c0(param_8,fVar18,&local_188,local_184);
          _local_178 = ZEXT416((uint)fStack_1b0);
          _local_128 = ZEXT416((uint)fStack_1b4);
          *(undefined4 *)(param_8 + 2) = local_188;
          _local_168 = ZEXT416((uint)fVar21);
          _local_158 = ZEXT416((uint)fVar20);
          _local_148 = ZEXT416((uint)fVar19);
          _local_118 = ZEXT416((uint)fVar16);
          _local_108 = ZEXT416((uint)local_1c0);
          fVar24 = local_184[0];
        }
      }
      fVar18 = pfVar10[0x21];
      fVar23 = pfVar10[0x17];
      if (local_1c8 <= pfVar10[0x17]) {
        fVar23 = local_1c8;
      }
      if (0.0001 < fVar18) {
        if (fVar18 <= SQRT(fVar27 * fVar27 + fVar26 * fVar26 + fVar17 * fVar17)) {
          fVar16 = acosf(fVar18 / pfVar10[0xc]);
          fVar23 = (1.5707964 - fVar16) * 31.830988;
          fVar16 = (float)local_118._0_4_;
          fVar19 = (float)local_148._0_4_;
        }
        else {
          fVar18 = 1.0 - pfVar10[0xc] / fVar18;
          fVar18 = fVar18 * fVar18 * 9.869605;
          fVar18 = ((fVar18 * 0.000484834 - 0.01961384) * fVar18 + 0.2476748) * fVar18 +
                   0.00069670216;
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          fVar23 = (fVar18 + 1.0) * 50.0;
        }
      }
      *(float *)(param_9 + 0x24 + uVar15 * 0x30) =
           fVar23 * *(float *)(param_9 + 0x24 + uVar15 * 0x30) * 0.01;
      *(float *)(param_9 + 0x28 + uVar15 * 0x30) =
           fVar24 * *(float *)(param_9 + 0x28 + uVar15 * 0x30) * 0.01;
      puVar1 = (uint *)(param_9 + 0x2c + uVar15 * 0x30);
      *puVar1 = *puVar1 & (uint)pfVar10[0x19];
      local_1c8 = fVar19;
      fVar18 = local_1c4;
    }
    local_1c4 = fVar16;
    if (param_4 != '\0') {
      fVar16 = *(float *)(param_9 + 0x10 + uVar15 * 0x30);
      fVar23 = *(float *)(param_9 + 0xc + uVar15 * 0x30);
      fVar25 = *(float *)(param_9 + 0x14 + uVar15 * 0x30);
      local_138 = *(float *)(param_9 + 0x20 + uVar15 * 0x30);
      fVar19 = *(float *)(param_9 + 4 + uVar15 * 0x30);
      fVar24 = *(float *)(param_9 + uVar15 * 0x30);
      fVar2 = *(float *)(param_9 + 8 + uVar15 * 0x30);
      fVar3 = *(float *)(param_9 + 0x1c + uVar15 * 0x30);
      fVar4 = *(float *)(param_9 + 0x18 + uVar15 * 0x30);
      local_1c0 = local_1b8 * fVar23 + local_1c0 * fVar16 + fVar20 * fVar25;
      local_1c8 = (float)local_178._0_4_ * fVar23 + (float)local_148._0_4_ * fVar16 +
                  (float)param_6 * fVar25;
      fVar20 = local_1b8 * fVar24 + (float)local_108._0_4_ * fVar19 + (float)local_158._0_4_ * fVar2
      ;
      fVar21 = (float)local_128._0_4_ * fVar24 + (float)local_118._0_4_ * fVar19 +
               (float)local_168._0_4_ * fVar2;
      fVar17 = fVar4 * (float)local_178._0_4_ + fVar3 * (float)local_148._0_4_ +
               local_138 * (float)param_6 + fVar17;
      fVar26 = local_138 * (float)local_158._0_4_ + fVar4 * local_1b8 +
               fVar3 * (float)local_108._0_4_ + fVar26;
      fVar27 = local_138 * (float)local_168._0_4_ + fVar4 * (float)local_128._0_4_ +
               fVar3 * (float)local_118._0_4_ + fVar27;
      param_6._0_4_ =
           (float)local_178._0_4_ * fVar24 + (float)local_148._0_4_ * fVar19 +
           (float)param_6 * fVar2;
      local_1c4 = (float)local_128._0_4_ * fVar23 + (float)local_118._0_4_ * fVar16 +
                  (float)local_168._0_4_ * fVar25;
      local_134 = fVar20;
      local_130 = fVar21;
    }
    *(float *)(param_9 + 0x18 + uVar15 * 0x30) = fVar26;
    uVar14 = (int)fVar18 + 1;
    *(float *)(param_9 + 0x1c + uVar15 * 0x30) = fVar27;
    *(float *)(param_9 + 0x20 + uVar15 * 0x30) = fVar17;
    *(ulonglong *)(param_9 + uVar15 * 0x30) = CONCAT44(fVar21,fVar20);
    *(ulonglong *)(param_9 + 0xc + uVar15 * 0x30) = CONCAT44(local_1c4,local_1c0);
    *(float *)(param_9 + 0x14 + uVar15 * 0x30) = local_1c8;
    *(float *)(param_9 + 8 + uVar15 * 0x30) = (float)param_6;
    uVar15 = (ulonglong)uVar14;
    local_1c4 = (float)uVar14;
  } while (uVar14 < param_2);
  return;
}



// FUNCTION 14507a470 FUN_14507a470 body=1248 status=ok
// SIG undefined FUN_14507a470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14507a470(uint param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  uint uVar11;
  float *pfVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong *plVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  float *pfVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  undefined8 auStack_100 [5];
  longlong alStack_d8 [2];
  longlong local_c8 [2];
  float *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  float *local_90;
  longlong local_88;
  
  uVar15 = (ulonglong)param_1;
  uVar13 = (ulonglong)param_1;
  uVar21 = uVar15 * 8 + 0xf;
  local_b0 = uVar15;
  if (uVar21 <= uVar15 * 8) {
    uVar21 = 0xffffffffffffff0;
  }
  auStack_100[0] = 0x14507a4db;
  lVar3 = -(uVar21 & 0xfffffffffffffff0);
  plVar17 = (longlong *)((longlong)local_c8 + lVar3);
  uVar21 = uVar15 * 0xc + 0xf;
  local_a8 = plVar17;
  if (uVar21 <= uVar15 * 0xc) {
    uVar21 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar3) = 0x14507a507;
  lVar4 = -(uVar21 & 0xfffffffffffffff0);
  uVar15 = uVar15 * 4;
  uVar21 = uVar15 + 0xf;
  local_c8[0] = (longlong)local_c8 + lVar4 + lVar3;
  if (uVar21 <= uVar15) {
    uVar21 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar4 + lVar3) = 0x14507a530;
  lVar5 = -(uVar21 & 0xfffffffffffffff0);
  uVar21 = uVar15 + 0xf;
  pfVar12 = (float *)((longlong)local_c8 + lVar5 + lVar4 + lVar3);
  local_b8 = pfVar12;
  if (uVar21 <= uVar15) {
    uVar21 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar5 + lVar4 + lVar3) = 0x14507a551;
  lVar6 = -(uVar21 & 0xfffffffffffffff0);
  uVar21 = uVar15 + 0xf;
  lVar24 = (longlong)local_c8 + lVar6 + lVar5 + lVar4 + lVar3;
  local_88 = lVar24;
  if (uVar21 <= uVar15) {
    uVar21 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5 + lVar4 + lVar3) = 0x14507a572;
  lVar7 = -(uVar21 & 0xfffffffffffffff0);
  uVar25 = 0;
  pfVar27 = (float *)((longlong)local_c8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3);
  local_90 = pfVar27;
  if (*(int *)(param_4 + 0x120) != 0) {
    do {
      bVar28 = false;
      if (*(char *)((ulonglong)uVar25 * 0x118 + 0x6c + *(longlong *)(param_4 + 0x118)) == '\0') {
        uVar25 = uVar25 + 1;
        bVar28 = uVar25 < *(uint *)(param_4 + 0x120);
      }
      else {
        lVar2 = *(longlong *)((ulonglong)uVar25 * 0x118 + *(longlong *)(param_4 + 0x118));
        if (param_1 == 0) {
          *(float **)((longlong)alStack_d8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = pfVar27;
          lVar2 = local_c8[0];
          *(undefined8 *)((longlong)auStack_100 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
               0x14507a92f;
          FUN_145098100(0,lVar2,pfVar12,lVar24);
          return;
        }
        lVar26 = param_2 - (longlong)plVar17;
        local_a0 = param_3 - (longlong)pfVar12;
        pfVar16 = (float *)(local_c8[0] + 8);
        lVar23 = lVar24 - (longlong)pfVar12;
        local_98 = (longlong)pfVar27 - (longlong)pfVar12;
        local_c8[1] = uVar13;
        do {
          lVar24 = local_98;
          uVar21 = 0;
          pfVar16[-2] = 0.0;
          pfVar16[-1] = 0.0;
          *pfVar16 = 0.0;
          *pfVar12 = 0.1;
          *(undefined4 *)((longlong)pfVar12 + lVar23) = 0x3dcccccd;
          *(undefined4 *)(lVar24 + (longlong)pfVar12) = 0x3f800000;
          *plVar17 = 0;
          lVar24 = local_a0;
          do {
            uVar14 = (uint)uVar21;
            plVar19 = (longlong *)(uVar21 * 0x118 + *(longlong *)(param_4 + 0x118));
            if ((*plVar19 == lVar2) &&
               ((int)plVar19[2] == *(int *)(*(longlong *)(lVar26 + (longlong)plVar17) + 0x68))) {
              *plVar17 = (longlong)plVar19;
              fVar29 = *(float *)((longlong)plVar19 + 0x4c);
              if (fVar29 <= 0.1) {
                fVar29 = 0.1;
              }
              *pfVar12 = fVar29;
              fVar29 = *(float *)(lVar24 + (longlong)pfVar12);
              if (fVar29 <= 0.1) {
                fVar29 = 0.1;
              }
              *(float *)((longlong)pfVar12 + lVar23) = fVar29;
              fVar29 = *(float *)(plVar19 + 8);
              fVar30 = fVar29 * fVar29 +
                       *(float *)((longlong)plVar19 + 0x44) * *(float *)((longlong)plVar19 + 0x44) +
                       *(float *)(plVar19 + 9) * *(float *)(plVar19 + 9);
              if (0.0 < fVar30) {
                fVar30 = 1.0 / SQRT(fVar30);
                pfVar16[-2] = fVar29 * fVar30;
                pfVar16[-1] = fVar30 * *(float *)((longlong)plVar19 + 0x44);
                *pfVar16 = fVar30 * *(float *)(plVar19 + 9);
              }
              break;
            }
            if (((!bVar28) && (*plVar19 != lVar2)) && (uVar25 < uVar14)) {
              bVar28 = true;
              uVar25 = uVar14;
            }
            uVar21 = (ulonglong)(uVar14 + 1);
          } while (uVar14 + 1 < *(uint *)(param_4 + 0x120));
          lVar24 = local_88;
          pfVar27 = local_90;
          pfVar1 = local_b8;
          lVar10 = local_c8[0];
          plVar17 = plVar17 + 1;
          pfVar12 = pfVar12 + 1;
          pfVar16 = pfVar16 + 3;
          local_c8[1] = local_c8[1] - 1;
        } while (local_c8[1] != 0);
        *(float **)((longlong)alStack_d8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = local_90;
        *(undefined8 *)((longlong)auStack_100 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0x14507a74c
        ;
        FUN_145098100(param_1,lVar10,pfVar1,lVar24);
        plVar19 = local_a8;
        uVar21 = local_b0;
        pfVar16 = pfVar27;
        do {
          lVar2 = *plVar19;
          if ((lVar2 != 0) && (lVar23 = *(longlong *)(lVar2 + 0xf8), lVar23 != 0)) {
            uVar14 = *(uint *)(lVar2 + 0xb8);
            if ((uVar14 & 0xf00) == 0x300) {
              uVar14 = *(uint *)(lVar2 + 0xc0);
            }
            fVar29 = *pfVar16;
            uVar14 = ((uVar14 & 0xff) + 7 & 0xfffffff8) * (uint)*(byte *)(lVar2 + 0xc0);
            uVar15 = 0;
            if (uVar14 != 0) {
              if (0xf < uVar14) {
                uVar22 = 8;
                do {
                  pfVar12 = (float *)(lVar23 + uVar15 * 4);
                  fVar30 = pfVar12[1];
                  fVar8 = pfVar12[2];
                  fVar9 = pfVar12[3];
                  pfVar1 = (float *)(lVar23 + uVar15 * 4);
                  *pfVar1 = *pfVar12 * fVar29;
                  pfVar1[1] = fVar30 * fVar29;
                  pfVar1[2] = fVar8 * fVar29;
                  pfVar1[3] = fVar9 * fVar29;
                  uVar18 = (int)uVar15 + 0x10;
                  uVar15 = (ulonglong)uVar18;
                  pfVar12 = (float *)(lVar23 + (ulonglong)(uVar22 - 4) * 4);
                  fVar30 = pfVar12[1];
                  fVar8 = pfVar12[2];
                  fVar9 = pfVar12[3];
                  pfVar1 = (float *)(lVar23 + (ulonglong)(uVar22 - 4) * 4);
                  *pfVar1 = *pfVar12 * fVar29;
                  pfVar1[1] = fVar30 * fVar29;
                  pfVar1[2] = fVar8 * fVar29;
                  pfVar1[3] = fVar9 * fVar29;
                  pfVar12 = (float *)(lVar23 + (ulonglong)uVar22 * 4);
                  fVar30 = pfVar12[1];
                  fVar8 = pfVar12[2];
                  fVar9 = pfVar12[3];
                  pfVar1 = (float *)(lVar23 + (ulonglong)uVar22 * 4);
                  *pfVar1 = *pfVar12 * fVar29;
                  pfVar1[1] = fVar30 * fVar29;
                  pfVar1[2] = fVar8 * fVar29;
                  pfVar1[3] = fVar9 * fVar29;
                  uVar11 = uVar22 + 4;
                  uVar22 = uVar22 + 0x10;
                  pfVar12 = (float *)(lVar23 + (ulonglong)uVar11 * 4);
                  fVar30 = pfVar12[1];
                  fVar8 = pfVar12[2];
                  fVar9 = pfVar12[3];
                  pfVar1 = (float *)(lVar23 + (ulonglong)uVar11 * 4);
                  *pfVar1 = fVar29 * *pfVar12;
                  pfVar1[1] = fVar29 * fVar30;
                  pfVar1[2] = fVar29 * fVar8;
                  pfVar1[3] = fVar29 * fVar9;
                } while (uVar18 < (uVar14 & 0xfffffff0));
              }
              uVar22 = (uint)uVar15;
              if (uVar22 < uVar14) {
                uVar13 = uVar15;
                if (3 < uVar14 - uVar22) {
                  lVar2 = uVar15 + 2;
                  uVar11 = ((uVar14 - uVar22) - 4 >> 2) + 1;
                  uVar20 = (ulonglong)uVar11;
                  uVar22 = uVar22 + uVar11 * 4;
                  uVar13 = (ulonglong)uVar22;
                  uVar15 = uVar15 + (ulonglong)uVar11 * 4;
                  pfVar12 = (float *)(lVar23 + lVar2 * 4);
                  do {
                    pfVar12[-2] = fVar29 * pfVar12[-2];
                    pfVar12[-1] = fVar29 * pfVar12[-1];
                    *pfVar12 = fVar29 * *pfVar12;
                    pfVar12[1] = fVar29 * pfVar12[1];
                    uVar20 = uVar20 - 1;
                    pfVar12 = pfVar12 + 4;
                  } while (uVar20 != 0);
                  if (uVar14 <= uVar22) goto LAB_14507a8d3;
                }
                uVar13 = (ulonglong)(uVar14 - (int)uVar13);
                pfVar12 = (float *)(lVar23 + uVar15 * 4);
                do {
                  *pfVar12 = fVar29 * *pfVar12;
                  uVar13 = uVar13 - 1;
                  pfVar12 = pfVar12 + 1;
                } while (uVar13 != 0);
              }
            }
          }
LAB_14507a8d3:
          plVar19 = plVar19 + 1;
          pfVar16 = pfVar16 + 1;
          uVar21 = uVar21 - 1;
          pfVar12 = local_b8;
          plVar17 = local_a8;
          uVar13 = local_b0;
        } while (uVar21 != 0);
      }
    } while (bVar28);
  }
  return;
}



// FUNCTION 14507a950 FUN_14507a950 body=50 status=ok
// SIG undefined FUN_14507a950(void)

undefined8 FUN_14507a950(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_14507b200();
  FUN_1450773d0(&DAT_14c79be10,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),local_res8);
  return 1;
}



// FUNCTION 14507a990 FUN_14507a990 body=283 status=ok
// SIG undefined FUN_14507a990(void)

void FUN_14507a990(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (param_2 != lVar1) {
    if (lVar1 != 0) {
      FUN_1450d2e20(*(undefined8 *)(lVar1 + 8));
      puVar2 = *(undefined8 **)(param_1 + 0x98);
      if ((*(uint *)(puVar2 + 0xc) < 2) && (*(char *)((longlong)puVar2 + 100) != '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      uVar5 = *(uint *)(puVar2 + 0xc) - 1;
      *(uint *)(puVar2 + 0xc) = uVar5;
      if ((uVar5 == 0) || (((bVar3 && (uVar5 < 2)) && (*(char *)((longlong)puVar2 + 100) != '\0'))))
      {
        FUN_1453550a0(puVar2);
      }
      if (*(int *)(puVar2 + 0xc) == 0) {
        (**(code **)*puVar2)(puVar2,0);
        AK::MemoryMgr::Free(4,puVar2);
      }
    }
    *(longlong *)(param_1 + 0x98) = param_2;
    if (param_2 != 0) {
      iVar4 = FUN_1450d2e00(*(undefined8 *)(param_2 + 8),
                            *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58));
      if (iVar4 == 1) {
        lVar1 = *(longlong *)(param_1 + 0x98);
        uVar5 = *(uint *)(lVar1 + 0x60);
        if ((uVar5 < 2) && (*(char *)(lVar1 + 100) != '\0')) {
          *(uint *)(lVar1 + 0x60) = uVar5 + 1;
          if ((1 < uVar5 + 1) || (*(char *)(lVar1 + 100) == '\0')) {
            FUN_145355090();
          }
        }
        else {
          *(uint *)(lVar1 + 0x60) = uVar5 + 1;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
    }
    FUN_1450773d0(&DAT_14c79be10,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),local_res8);
  }
  return;
}



// FUNCTION 14507aab0 FUN_14507aab0 body=181 status=ok
// SIG undefined FUN_14507aab0(void)

void FUN_14507aab0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1450d2e20(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 8));
    puVar1 = *(undefined8 **)(param_1 + 0x98);
    if ((*(uint *)(puVar1 + 0xc) < 2) && (*(char *)((longlong)puVar1 + 100) != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar3 = *(uint *)(puVar1 + 0xc) - 1;
    *(uint *)(puVar1 + 0xc) = uVar3;
    if ((uVar3 == 0) || (((bVar2 && (uVar3 < 2)) && (*(char *)((longlong)puVar1 + 100) != '\0')))) {
      FUN_1453550a0(puVar1);
    }
    if (*(int *)(puVar1 + 0xc) == 0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(4,puVar1);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    FUN_1450773d0(&DAT_14c79be10,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),local_res8);
  }
  return;
}



// FUNCTION 14507ab70 FUN_14507ab70 body=8 status=ok
// SIG undefined FUN_14507ab70(void)

undefined8 FUN_14507ab70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// FUNCTION 14507ab80 FUN_14507ab80 body=47 status=ok
// SIG undefined FUN_14507ab80(void)

undefined8 FUN_14507ab80(longlong param_1,undefined4 param_2)

{
  undefined1 local_res10 [24];
  
  *(undefined4 *)(param_1 + 0x90) = param_2;
  FUN_1450773d0(&DAT_14c79be10,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),local_res10);
  return 1;
}



// FUNCTION 14507abb0 FUN_14507abb0 body=714 status=ok
// SIG undefined FUN_14507abb0(void)

void FUN_14507abb0(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_3 = 0.0;
  *param_4 = 0.0;
  fVar1 = *(float *)(param_2 + 0x30);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    fVar2 = (float)(*(double *)(param_2 + 0x18) - *(double *)(param_1 + 0x78));
    fVar3 = (float)(*(double *)(param_2 + 0x20) - *(double *)(param_1 + 0x80));
    fVar1 = (float)(*(double *)(param_2 + 0x28) - *(double *)(param_1 + 0x88));
    fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  }
  if (fVar1 <= 0.0) {
    return;
  }
  fVar3 = (float)(*(double *)(param_2 + 0x18) - *(double *)(param_1 + 0x78));
  fVar5 = (float)(*(double *)(param_2 + 0x20) - *(double *)(param_1 + 0x80));
  fVar2 = (float)(*(double *)(param_2 + 0x28) - *(double *)(param_1 + 0x88));
  fVar4 = fVar5 * *(float *)(param_1 + 0x40) + fVar3 * *(float *)(param_1 + 0x3c) +
          fVar2 * *(float *)(param_1 + 0x44);
  fVar6 = fVar5 * *(float *)(param_1 + 0x58) + fVar3 * *(float *)(param_1 + 0x54) +
          fVar2 * *(float *)(param_1 + 0x5c);
  fVar2 = fVar5 * *(float *)(param_1 + 0x4c) + fVar3 * *(float *)(param_1 + 0x48) +
          fVar2 * *(float *)(param_1 + 0x50);
  if (fVar6 == 0.0) {
    if (fVar4 == 0.0) {
      *param_3 = 0.0;
      if (fVar2 == 0.0) {
        *param_4 = 0.0;
        return;
      }
      if (0.0 < fVar2) {
        *param_4 = 1.5707964;
        return;
      }
      *param_4 = -1.5707964;
      return;
    }
    if (fVar4 <= 0.0) {
      fVar3 = -1.5707964;
    }
    else {
      fVar3 = 1.5707964;
    }
    fVar2 = fVar2 / fVar1;
    *param_3 = fVar3;
    fVar1 = -1.0;
    if ((-1.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
      fVar1 = 1.0;
    }
    goto LAB_14507adfc;
  }
  fVar3 = fVar4 / fVar6;
  if (1.0 <= ABS(fVar3)) {
    fVar3 = 1.5707964 - fVar3 / (fVar3 * fVar3 + 0.28);
    if (fVar4 < 0.0) {
LAB_14507add7:
      fVar3 = fVar3 - 3.1415927;
    }
  }
  else {
    fVar3 = fVar3 / (fVar3 * 0.28 * fVar3 + 1.0);
    if (fVar6 < 0.0) {
      if (fVar4 < 0.0) goto LAB_14507add7;
      fVar3 = fVar3 + 3.1415927;
    }
  }
  fVar2 = fVar2 / fVar1;
  *param_3 = fVar3;
  fVar1 = -1.0;
  if ((-1.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
    fVar1 = 1.0;
  }
LAB_14507adfc:
  fVar2 = ABS(fVar1);
  fVar2 = (((((fVar2 * 84.31466 - 242.71996) * fVar2 + 262.81305) * fVar2 - 131.11235) * fVar2 +
           29.66154) * fVar2 - 1.4518384) * fVar2 + 0.0328437;
  if (fVar1 < 0.0) {
    fVar2 = -fVar2;
  }
  *param_4 = fVar2;
  return;
}



// FUNCTION 14507ae80 FUN_14507ae80 body=799 status=ok
// SIG undefined FUN_14507ae80(void)

float FUN_14507ae80(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double local_b8;
  
  fVar8 = (float)(*(double *)(param_3 + 6) - *(double *)(param_1 + 0x78));
  fVar7 = (float)(*(double *)(param_3 + 8) - *(double *)(param_1 + 0x80));
  fVar9 = (float)(*(double *)(param_3 + 10) - *(double *)(param_1 + 0x88));
  fVar10 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  fVar2 = fVar10;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 8);
    local_b8 = *(double *)(param_1 + 0x88);
    dVar4 = *(double *)(param_1 + 0x78);
    dVar5 = *(double *)(param_1 + 0x80);
    if (*(short *)(lVar1 + 0x38) != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x20);
      local_b8 = *(double *)(lVar1 + 0x28);
      dVar4 = *(double *)(lVar1 + 0x18);
      dVar5 = *(double *)(lVar1 + 0x20);
    }
    fVar2 = (float)(*(double *)(param_3 + 10) - local_b8);
    fVar3 = (float)(*(double *)(param_3 + 8) - dVar5);
    fVar6 = (float)(*(double *)(param_3 + 6) - dVar4);
    fVar2 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar2 * fVar2);
  }
  if (fVar10 <= 0.0) {
    param_3[0xd] = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar3 = -((fVar7 * param_3[1] + fVar8 * *param_3 + fVar9 * param_3[2]) / fVar10);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= -1.0) {
      fVar3 = -1.0;
    }
    fVar6 = ABS(fVar3);
    fVar6 = 1.5379527 -
            (((((fVar6 * 84.31466 - 242.71996) * fVar6 + 262.81305) * fVar6 - 131.11235) * fVar6 +
             29.66154) * fVar6 - 1.4518384) * fVar6;
    if (fVar3 < 0.0) {
      fVar6 = 3.1415927 - fVar6;
    }
    param_3[0xd] = fVar6;
    fVar10 = (fVar7 * *(float *)(param_1 + 100) + fVar8 * *(float *)(param_1 + 0x60) +
             fVar9 * *(float *)(param_1 + 0x68)) / fVar10;
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= -1.0) {
      fVar10 = -1.0;
    }
    fVar7 = ABS(fVar10);
    fVar7 = 1.5379527 -
            (((((fVar7 * 84.31466 - 242.71996) * fVar7 + 262.81305) * fVar7 - 131.11235) * fVar7 +
             29.66154) * fVar7 - 1.4518384) * fVar7;
    if (fVar10 < 0.0) {
      fVar7 = 3.1415927 - fVar7;
    }
  }
  param_3[0xe] = fVar7;
  fVar7 = *(float *)(param_1 + 0x90);
  if (*(longlong *)(*(longlong *)(param_2 + 8) + 0x58) !=
      *(longlong *)(*(longlong *)(param_1 + 8) + 0x58)) {
    fVar7 = fVar7 * *(float *)(param_2 + 0x78);
  }
  param_3[0x18] = fVar7;
  param_3[0xc] = fVar2 / fVar7;
  return fVar2 / fVar7;
}



// FUNCTION 14507b1a0 FUN_14507b1a0 body=96 status=ok
// SIG undefined FUN_14507b1a0(void)

float FUN_14507b1a0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0x30);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    fVar2 = (float)(*(double *)(param_2 + 0x18) - *(double *)(param_1 + 0x78));
    fVar3 = (float)(*(double *)(param_2 + 0x20) - *(double *)(param_1 + 0x80));
    fVar1 = (float)(*(double *)(param_2 + 0x28) - *(double *)(param_1 + 0x88));
    fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  }
  return fVar1 / *(float *)(param_2 + 0x60);
}



// FUNCTION 14507b200 FUN_14507b200 body=196 status=ok
// SIG undefined FUN_14507b200(void)

void FUN_14507b200(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x78) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x88) = uVar7;
  fVar1 = param_2[4];
  fVar2 = *param_2;
  fVar3 = param_2[3];
  fVar4 = param_2[2];
  fVar5 = param_2[1];
  fVar6 = param_2[5];
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x68);
  *(float *)(param_1 + 0x3c) = fVar4 * fVar1 - fVar5 * fVar6;
  *(float *)(param_1 + 0x44) = fVar3 * fVar5 - fVar2 * fVar1;
  *(float *)(param_1 + 0x40) = fVar2 * fVar6 - fVar3 * fVar4;
  return;
}



// FUNCTION 14507b2d0 FUN_14507b2d0 body=341 status=ok
// SIG undefined FUN_14507b2d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14507b2d0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 local_res10 [8];
  
  *param_1 = &PTR_FUN_149c237b8;
  if (param_1[0x13] != 0) {
    FUN_1450d2e20(*(undefined8 *)(param_1[0x13] + 8));
    puVar1 = (undefined8 *)param_1[0x13];
    if ((*(uint *)(puVar1 + 0xc) < 2) && (*(char *)((longlong)puVar1 + 100) != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar4 = *(uint *)(puVar1 + 0xc) - 1;
    *(uint *)(puVar1 + 0xc) = uVar4;
    if ((uVar4 == 0) || (((bVar2 && (uVar4 < 2)) && (*(char *)((longlong)puVar1 + 100) != '\0')))) {
      FUN_1453550a0(puVar1);
    }
    if (*(int *)(puVar1 + 0xc) == 0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(4,puVar1);
    }
    param_1[0x13] = 0;
    FUN_1450773d0(&DAT_14c79be10,*(undefined8 *)(param_1[1] + 0x58),local_res10);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(4,(void *)param_1[4]);
    param_1[4] = 0;
  }
  *param_1 = &PTR_FUN_149c237a8;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar3 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c7913d0) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar3 = DAT_14c7913d0;
  }
  DAT_14c7913d0 = puVar3;
  if (param_1 == DAT_14c7913c8) {
    DAT_14c7913c8 = puVar1;
  }
  _DAT_14c7913c0 = _DAT_14c7913c0 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14507b430 FUN_14507b430 body=306 status=ok
// SIG undefined FUN_14507b430(void)

void FUN_14507b430(int *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_40 = 0;
  if (*(int *)(param_2 + 0x148) == 1) {
    lVar1 = *(longlong *)(param_2 + 0x140);
    local_38 = *(uint *)(lVar1 + 0xc0);
    local_40 = *(undefined8 *)(lVar1 + 0xf8);
    local_34 = *(uint *)(lVar1 + 0xb8);
    if ((*(uint *)(lVar1 + 0xb8) & 0xf00) == 0x300) {
      local_34 = local_38;
    }
  }
  else {
    local_38 = 0x300;
    local_34 = 0x300;
  }
  local_30 = param_2 + 0xc;
  local_28 = param_2 + 0x14;
  local_20 = param_2;
  local_18 = FUN_145355800(param_2);
  if (local_18 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = local_18 + 0xa0;
  }
  local_50 = (**(code **)(**(longlong **)(param_2 + 0x150) + 8))();
  if (*param_1 == 0) {
    local_58 = 0;
    local_48 = 0;
    uVar2 = FUN_1450e71d0(*(undefined8 *)(*(longlong *)(param_2 + 0x150) + 8));
    FUN_1450b1a40(DAT_14c790fc8,uVar2,&local_58);
    return;
  }
  FUN_1450b3180(DAT_14c790fc0,*param_1,&local_58);
  return;
}



// FUNCTION 14507b570 FUN_14507b570 body=68 status=ok
// SIG undefined FUN_14507b570(void)

void FUN_14507b570(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_145093d40(param_1[1],param_1[2],param_1[3],*param_1,*(undefined1 *)((longlong)param_1 + 0x15),
                param_2,param_3,param_5,param_4);
  return;
}



// FUNCTION 14507b5c0 FUN_14507b5c0 body=1771 status=ok
// SIG undefined FUN_14507b5c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14507b5c0(undefined4 *param_1,longlong param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,uint param_7,undefined8 param_8,longlong param_9)

{
  ulonglong uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float *pfVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 auStack_130 [5];
  longlong local_108;
  uint local_100 [2];
  float local_f8 [2];
  uint local_f0 [2];
  undefined8 local_e8;
  float fStack_dc;
  float local_d8 [40];
  
  uVar15 = 0;
  if ((*(char *)((longlong)param_1 + 0x16) == '\0') || ((param_6 & 0xf00) != 0x100)) {
    do {
      local_e8 = param_8;
      local_f0[0] = param_6;
      lVar14 = uVar15 * 0x30 + param_2;
      local_108 = param_9 + (ulonglong)((int)uVar15 * param_7) * 4;
      local_f8[0] = *(float *)(lVar14 + 0x2c);
      local_100[0] = param_5;
      auStack_130[0] = 0x14507b8ec;
      FUN_145091a20(lVar14,*param_1,*(undefined4 *)(lVar14 + 0x24),*(undefined4 *)(lVar14 + 0x28));
      uVar22 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar22;
    } while (uVar22 < param_3);
  }
  else if ((param_6 & 0xff9c0000) == 0) {
    pfVar16 = (float *)(param_2 + 0x20);
    do {
      fVar26 = pfVar16[1];
      fVar23 = pfVar16[-1] * pfVar16[-1];
      fVar25 = pfVar16[-2] * pfVar16[-2] + fVar23 + *pfVar16 * *pfVar16;
      fVar24 = fVar26;
      if ((0.0 < fVar25) && (fVar24 = fVar23 / fVar25, fVar24 <= fVar26)) {
        fVar24 = fVar26;
      }
      local_e8 = param_8;
      local_f0[0] = param_6;
      local_108 = param_9 + (ulonglong)((int)uVar15 * param_7) * 4;
      local_f8[0] = pfVar16[3];
      local_100[0] = param_5;
      auStack_130[0] = 0x14507b707;
      FUN_145091a20(uVar15 * 0x30 + param_2,*param_1,fVar24,pfVar16[2]);
      uVar22 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar22;
      pfVar16 = pfVar16 + 0xc;
    } while (uVar22 < param_3);
  }
  else {
    do {
      lVar14 = uVar15 * 0x30 + param_2;
      fVar26 = *(float *)(lVar14 + 0x1c);
      fVar24 = *(float *)(lVar14 + 0x24);
      fVar23 = fVar24;
      if ((fVar26 < 0.0) &&
         (fVar25 = *(float *)(lVar14 + 0x18) * *(float *)(lVar14 + 0x18) + fVar26 * fVar26 +
                   *(float *)(lVar14 + 0x20) * *(float *)(lVar14 + 0x20), 0.0 < fVar25)) {
        fVar26 = (-1.0 / SQRT(fVar25)) * fVar26;
        fVar23 = ABS(fVar26);
        fVar25 = (((((fVar23 * 84.31466 - 242.71996) * fVar23 + 262.81305) * fVar23 - 131.11235) *
                   fVar23 + 29.66154) * fVar23 - 1.4518384) * fVar23 + 0.0328437;
        if (fVar26 < 0.0) {
          fVar25 = -fVar25;
        }
        fVar23 = fVar25 * 0.31830987;
        if (fVar25 * 0.31830987 <= fVar24) {
          fVar23 = fVar24;
        }
      }
      local_e8 = param_8;
      local_f0[0] = param_6;
      local_108 = param_9 + (ulonglong)((int)uVar15 * param_7) * 4;
      local_f8[0] = *(float *)(lVar14 + 0x2c);
      local_100[0] = param_5;
      auStack_130[0] = 0x14507b86e;
      FUN_145091a20(lVar14,*param_1,fVar23,*(undefined4 *)(lVar14 + 0x28));
      uVar22 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar22;
    } while (uVar22 < param_3);
  }
  if ((float)param_1[4] <= 1.0 && (float)param_1[4] != 1.0) {
    uVar15 = (ulonglong)param_7 * 4 + 0xf;
    if (uVar15 <= (ulonglong)param_7 * 4) {
      uVar15 = 0xffffffffffffff0;
    }
    auStack_130[0] = 0x14507b93c;
    uVar8 = *(undefined1 *)((longlong)param_1 + 0x15);
    lVar14 = -(uVar15 & 0xfffffffffffffff0);
    uVar4 = *param_1;
    uVar5 = param_1[3];
    uVar6 = param_1[2];
    uVar7 = param_1[1];
    uVar15 = (longlong)local_d8 + lVar14;
    *(undefined8 *)((longlong)&local_e8 + lVar14) = param_8;
    *(ulonglong *)((longlong)local_f0 + lVar14) = uVar15;
    *(uint *)((longlong)local_f8 + lVar14) = param_6;
    *(uint *)((longlong)local_100 + lVar14) = param_4;
    *(undefined1 *)((longlong)local_100 + lVar14 + -8) = uVar8;
    *(undefined8 *)((longlong)auStack_130 + lVar14) = 0x14507b97b;
    FUN_145093d40(uVar7,uVar6,uVar5,uVar4);
    fVar26 = 1.0 - (float)param_1[4];
    uVar21 = 0;
    uVar22 = ((param_6 & 0xff) + 7 & 0xfffffff8) * (param_4 & 0xff);
    do {
      fVar24 = (float)param_1[4];
      uVar17 = 0;
      uVar1 = param_9 + (ulonglong)(uVar21 * param_7) * 4;
      if (uVar22 == 0) {
LAB_14507bacc:
        if (uVar22 != 0) goto LAB_14507bad8;
      }
      else {
        if (0xf < uVar22) {
          uVar19 = 8;
          do {
            pfVar16 = (float *)(uVar1 + uVar17 * 4);
            fVar23 = pfVar16[1];
            fVar25 = pfVar16[2];
            fVar10 = pfVar16[3];
            iVar9 = (int)uVar19;
            pfVar2 = (float *)(uVar1 + uVar17 * 4);
            *pfVar2 = *pfVar16 * fVar24;
            pfVar2[1] = fVar23 * fVar24;
            pfVar2[2] = fVar25 * fVar24;
            pfVar2[3] = fVar10 * fVar24;
            uVar18 = (int)uVar17 + 0x10;
            uVar17 = (ulonglong)uVar18;
            pfVar16 = (float *)(uVar1 + (ulonglong)(iVar9 - 4) * 4);
            fVar23 = pfVar16[1];
            fVar25 = pfVar16[2];
            fVar10 = pfVar16[3];
            pfVar2 = (float *)(uVar1 + (ulonglong)(iVar9 - 4) * 4);
            *pfVar2 = *pfVar16 * fVar24;
            pfVar2[1] = fVar23 * fVar24;
            pfVar2[2] = fVar25 * fVar24;
            pfVar2[3] = fVar10 * fVar24;
            pfVar16 = (float *)(uVar1 + uVar19 * 4);
            fVar23 = pfVar16[1];
            fVar25 = pfVar16[2];
            fVar10 = pfVar16[3];
            pfVar2 = (float *)(uVar1 + uVar19 * 4);
            *pfVar2 = *pfVar16 * fVar24;
            pfVar2[1] = fVar23 * fVar24;
            pfVar2[2] = fVar25 * fVar24;
            pfVar2[3] = fVar10 * fVar24;
            uVar19 = (ulonglong)(iVar9 + 0x10);
            pfVar16 = (float *)(uVar1 + (ulonglong)(iVar9 + 4) * 4);
            fVar23 = pfVar16[1];
            fVar25 = pfVar16[2];
            fVar10 = pfVar16[3];
            pfVar2 = (float *)(uVar1 + (ulonglong)(iVar9 + 4) * 4);
            *pfVar2 = *pfVar16 * fVar24;
            pfVar2[1] = fVar23 * fVar24;
            pfVar2[2] = fVar25 * fVar24;
            pfVar2[3] = fVar10 * fVar24;
          } while (uVar18 < (uVar22 & 0xfffffff0));
        }
        uVar18 = (uint)uVar17;
        if (uVar22 <= uVar18) goto LAB_14507bacc;
        uVar19 = uVar17;
        if (uVar22 - uVar18 < 4) {
LAB_14507baa3:
          uVar19 = (ulonglong)(uVar22 - (int)uVar19);
          pfVar16 = (float *)(uVar1 + uVar17 * 4);
          do {
            *pfVar16 = fVar24 * *pfVar16;
            uVar19 = uVar19 - 1;
            pfVar16 = pfVar16 + 1;
          } while (uVar19 != 0);
        }
        else {
          lVar14 = uVar17 + 2;
          uVar13 = ((uVar22 - uVar18) - 4 >> 2) + 1;
          uVar20 = (ulonglong)uVar13;
          uVar18 = uVar18 + uVar13 * 4;
          uVar19 = (ulonglong)uVar18;
          uVar17 = uVar17 + (ulonglong)uVar13 * 4;
          pfVar16 = (float *)(uVar1 + lVar14 * 4);
          do {
            pfVar16[-2] = fVar24 * pfVar16[-2];
            pfVar16[-1] = fVar24 * pfVar16[-1];
            *pfVar16 = fVar24 * *pfVar16;
            pfVar16[1] = fVar24 * pfVar16[1];
            uVar20 = uVar20 - 1;
            pfVar16 = pfVar16 + 4;
          } while (uVar20 != 0);
          if (uVar18 < uVar22) goto LAB_14507baa3;
        }
LAB_14507bad8:
        uVar17 = 0;
        if (0xf < uVar22) {
          uVar17 = 0;
          if ((uVar15 + (ulonglong)(uVar22 - 1) * 4 < uVar1) ||
             (uVar1 + (ulonglong)(uVar22 - 1) * 4 < uVar15)) {
            uVar18 = 8;
            do {
              pfVar16 = (float *)(uVar1 + uVar17 * 4);
              fVar24 = pfVar16[1];
              fVar23 = pfVar16[2];
              fVar25 = pfVar16[3];
              uVar19 = (ulonglong)(uVar18 - 4);
              pfVar2 = (float *)(uVar15 + uVar17 * 4);
              fVar10 = pfVar2[1];
              fVar11 = pfVar2[2];
              fVar12 = pfVar2[3];
              pfVar3 = (float *)(uVar1 + uVar17 * 4);
              *pfVar3 = *pfVar2 * fVar26 + *pfVar16;
              pfVar3[1] = fVar10 * fVar26 + fVar24;
              pfVar3[2] = fVar11 * fVar26 + fVar23;
              pfVar3[3] = fVar12 * fVar26 + fVar25;
              uVar13 = (int)uVar17 + 0x10;
              uVar17 = (ulonglong)uVar13;
              pfVar16 = (float *)(uVar1 + uVar19 * 4);
              fVar24 = pfVar16[1];
              fVar23 = pfVar16[2];
              fVar25 = pfVar16[3];
              pfVar2 = (float *)(uVar15 + uVar19 * 4);
              fVar10 = pfVar2[1];
              fVar11 = pfVar2[2];
              fVar12 = pfVar2[3];
              pfVar3 = (float *)(uVar1 + uVar19 * 4);
              *pfVar3 = *pfVar2 * fVar26 + *pfVar16;
              pfVar3[1] = fVar10 * fVar26 + fVar24;
              pfVar3[2] = fVar11 * fVar26 + fVar23;
              pfVar3[3] = fVar12 * fVar26 + fVar25;
              uVar19 = (ulonglong)uVar18;
              pfVar16 = (float *)(uVar1 + uVar19 * 4);
              fVar24 = pfVar16[1];
              fVar23 = pfVar16[2];
              fVar25 = pfVar16[3];
              pfVar2 = (float *)(uVar15 + uVar19 * 4);
              fVar10 = pfVar2[1];
              fVar11 = pfVar2[2];
              fVar12 = pfVar2[3];
              pfVar3 = (float *)(uVar1 + uVar19 * 4);
              *pfVar3 = *pfVar2 * fVar26 + *pfVar16;
              pfVar3[1] = fVar10 * fVar26 + fVar24;
              pfVar3[2] = fVar11 * fVar26 + fVar23;
              pfVar3[3] = fVar12 * fVar26 + fVar25;
              uVar19 = (ulonglong)(uVar18 + 4);
              uVar18 = uVar18 + 0x10;
              pfVar16 = (float *)(uVar1 + uVar19 * 4);
              fVar24 = pfVar16[1];
              fVar23 = pfVar16[2];
              fVar25 = pfVar16[3];
              pfVar2 = (float *)(uVar15 + uVar19 * 4);
              fVar10 = pfVar2[1];
              fVar11 = pfVar2[2];
              fVar12 = pfVar2[3];
              pfVar3 = (float *)(uVar1 + uVar19 * 4);
              *pfVar3 = *pfVar2 * fVar26 + *pfVar16;
              pfVar3[1] = fVar10 * fVar26 + fVar24;
              pfVar3[2] = fVar11 * fVar26 + fVar23;
              pfVar3[3] = fVar12 * fVar26 + fVar25;
            } while (uVar13 < (uVar22 & 0xfffffff0));
          }
        }
        uVar18 = (uint)uVar17;
        if (uVar18 < uVar22) {
          uVar19 = uVar17;
          if (3 < uVar22 - uVar18) {
            pfVar16 = (float *)(uVar1 + (uVar17 + 1) * 4);
            lVar14 = -uVar1 + uVar15;
            uVar13 = ((uVar22 - uVar18) - 4 >> 2) + 1;
            uVar20 = (ulonglong)uVar13;
            uVar18 = uVar18 + uVar13 * 4;
            uVar19 = (ulonglong)uVar18;
            uVar17 = uVar17 + (ulonglong)uVar13 * 4;
            do {
              pfVar16[-1] = fVar26 * *(float *)(lVar14 + -4 + (longlong)pfVar16) + pfVar16[-1];
              *pfVar16 = fVar26 * *(float *)(lVar14 + (longlong)pfVar16) + *pfVar16;
              pfVar16[1] = fVar26 * *(float *)(lVar14 + 4 + (longlong)pfVar16) + pfVar16[1];
              pfVar16[2] = fVar26 * *(float *)(lVar14 + 8 + (longlong)pfVar16) + pfVar16[2];
              pfVar16 = pfVar16 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
            if (uVar22 <= uVar18) goto LAB_14507bc4b;
          }
          pfVar16 = (float *)(uVar1 + uVar17 * 4);
          uVar17 = (ulonglong)(uVar22 - (int)uVar19);
          do {
            *pfVar16 = fVar26 * *(float *)((longlong)pfVar16 + -uVar1 + uVar15) + *pfVar16;
            pfVar16 = pfVar16 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
LAB_14507bc4b:
      uVar21 = uVar21 + 1;
    } while (uVar21 < param_3);
  }
  return;
}



// FUNCTION 14507bcb0 FUN_14507bcb0 body=301 status=ok
// SIG undefined FUN_14507bcb0(void)

longlong FUN_14507bcb0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = DAT_14c791060;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if ((lVar4 == 0) && (uVar1 = *(uint *)(param_1 + 4), uVar1 != 0)) {
    do {
      while (iVar2 = *(int *)(lVar3 + 0x210), iVar2 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x218));
        if (*(int *)(lVar3 + 0x210) < 0) goto LAB_14507bd07;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x218));
      }
      LOCK();
      bVar5 = iVar2 == *(int *)(lVar3 + 0x210);
      if (bVar5) {
        *(int *)(lVar3 + 0x210) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar5);
LAB_14507bd07:
    if (*(uint *)(lVar3 + 600) == 0) {
      lVar4 = 0;
    }
    else {
      for (lVar4 = *(longlong *)
                    (*(longlong *)(lVar3 + 0x250) +
                    ((ulonglong)uVar1 % (ulonglong)*(uint *)(lVar3 + 600)) * 8); lVar4 != 0;
          lVar4 = *(longlong *)(lVar4 + 8)) {
        if (*(uint *)(lVar4 + 0x10) == uVar1) goto LAB_14507bd37;
      }
      lVar4 = 0;
LAB_14507bd37:
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar2 = *(int *)(lVar3 + 0x210);
    while (-1 < iVar2) {
      LOCK();
      bVar5 = iVar2 == *(int *)(lVar3 + 0x210);
      if (bVar5) {
        *(int *)(lVar3 + 0x210) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar5) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x240))) {
          SetEvent(*(HANDLE *)(lVar3 + 0x248));
        }
        goto LAB_14507bda4;
      }
      iVar2 = *(int *)(lVar3 + 0x210);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x218));
LAB_14507bda4:
    *(longlong *)(param_1 + 0x18) = lVar4;
  }
  return lVar4;
}



// FUNCTION 14507bde0 FUN_14507bde0 body=2651 status=ok
// SIG undefined FUN_14507bde0(void)

void FUN_14507bde0(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res20;
  float local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  undefined4 local_140;
  float local_13c;
  undefined4 local_138;
  float local_134;
  undefined4 local_130;
  float local_12c;
  undefined4 local_128;
  float local_124;
  undefined4 local_120;
  float local_11c;
  undefined4 local_118;
  float local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f4;
  longlong local_f0;
  
  if ((*(byte *)(param_1 + 0x19c) & 0x40) == 0) {
    cVar4 = FUN_1450e71a0();
  }
  else {
    lVar5 = FUN_14507bcb0(param_1 + 0x188);
    plVar8 = (longlong *)0x0;
    local_res20 = 0.0;
    local_178 = 0.0;
    local_160 = (longlong *)0x0;
    local_168 = (longlong *)0x0;
    local_158 = (longlong *)0x0;
    local_150 = (longlong *)0x0;
    cVar4 = FUN_1450e71a0(param_1);
    if (lVar5 != 0) {
      if ((*(byte *)(lVar5 + 0x1fb) == 0xff) ||
         (local_170 = (longlong *)(lVar5 + ((ulonglong)*(byte *)(lVar5 + 0x1fb) + 2) * 0x18),
         *local_170 == 0)) {
        local_170 = (longlong *)0x0;
      }
      if ((*(byte *)(lVar5 + 0x1fc) == 0xff) ||
         (lVar6 = (ulonglong)*(byte *)(lVar5 + 0x1fc) + 2,
         plVar7 = (longlong *)(lVar5 + lVar6 * 0x18), *(longlong *)(lVar5 + lVar6 * 0x18) == 0)) {
        plVar7 = plVar8;
      }
      if ((*(byte *)(lVar5 + 0x20b) & 1) != 0) {
        local_res20 = *(float *)(param_1 + 0x194);
        local_178 = *(float *)(param_1 + 0x198);
      }
      if (cVar4 != '\0') {
        bVar2 = *(byte *)(lVar5 + 0x200);
        local_160 = (longlong *)0x0;
        if (bVar2 == 0xfe) {
          if ((*(char *)(DAT_14c791038 + 1) != '\0') && (*(longlong *)(DAT_14c791038 + 0x20) != 0))
          {
            local_160 = (longlong *)(DAT_14c791038 + 0x20);
          }
        }
        else if ((bVar2 == 0xff) ||
                (local_160 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18), *local_160 == 0))
        {
          local_160 = (longlong *)0x0;
        }
        bVar2 = *(byte *)(lVar5 + 0x201);
        local_168 = (longlong *)0x0;
        if (bVar2 == 0xfe) {
          if ((*(char *)(DAT_14c791038 + 2) != '\0') && (*(longlong *)(DAT_14c791038 + 0x38) != 0))
          {
            local_168 = (longlong *)(DAT_14c791038 + 0x38);
          }
        }
        else if ((bVar2 == 0xff) ||
                (local_168 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18), *local_168 == 0))
        {
          local_168 = (longlong *)0x0;
        }
        bVar2 = *(byte *)(lVar5 + 0x206);
        local_158 = (longlong *)0x0;
        if (bVar2 == 0xfe) {
          if ((*(char *)(DAT_14c791038 + 1) != '\0') && (*(longlong *)(DAT_14c791038 + 0x20) != 0))
          {
            local_158 = (longlong *)(DAT_14c791038 + 0x20);
          }
        }
        else if ((bVar2 == 0xff) ||
                (local_158 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18), *local_158 == 0))
        {
          local_158 = (longlong *)0x0;
        }
        bVar2 = *(byte *)(lVar5 + 0x207);
        local_150 = (longlong *)0x0;
        if (bVar2 == 0xfe) {
          if ((*(char *)(DAT_14c791038 + 2) != '\0') && (*(longlong *)(DAT_14c791038 + 0x38) != 0))
          {
            local_150 = (longlong *)(DAT_14c791038 + 0x38);
          }
        }
        else if ((bVar2 == 0xff) ||
                (local_150 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18), *local_150 == 0))
        {
          local_150 = (longlong *)0x0;
        }
      }
      bVar2 = *(byte *)(lVar5 + 0x203);
      if (bVar2 == 0xfe) {
        plVar9 = plVar8;
        if ((*(char *)(DAT_14c791038 + 4) != '\0') &&
           (plVar9 = (longlong *)0x0, *(longlong *)(DAT_14c791038 + 0x68) != 0)) {
          plVar9 = (longlong *)(DAT_14c791038 + 0x68);
        }
      }
      else if ((bVar2 == 0xff) ||
              (plVar9 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18),
              *(longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18) == 0)) {
        plVar9 = (longlong *)0x0;
      }
      bVar2 = *(byte *)(lVar5 + 0x204);
      if (bVar2 == 0xfe) {
        plVar10 = plVar8;
        if ((*(char *)(DAT_14c791038 + 5) != '\0') &&
           (plVar10 = (longlong *)0x0, *(longlong *)(DAT_14c791038 + 0x80) != 0)) {
          plVar10 = (longlong *)(DAT_14c791038 + 0x80);
        }
      }
      else if ((bVar2 == 0xff) ||
              (plVar10 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18),
              *(longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18) == 0)) {
        plVar10 = (longlong *)0x0;
      }
      bVar2 = *(byte *)(lVar5 + 0x209);
      local_148 = (longlong *)0x0;
      if (bVar2 == 0xfe) {
        if ((*(char *)(DAT_14c791038 + 4) != '\0') && (*(longlong *)(DAT_14c791038 + 0x68) != 0)) {
          local_148 = (longlong *)(DAT_14c791038 + 0x68);
        }
      }
      else if ((bVar2 == 0xff) ||
              (local_148 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18), *local_148 == 0)) {
        local_148 = (longlong *)0x0;
      }
      bVar2 = *(byte *)(lVar5 + 0x20a);
      if (bVar2 == 0xfe) {
        if ((*(char *)(DAT_14c791038 + 5) != '\0') &&
           (plVar8 = (longlong *)0x0, *(longlong *)(DAT_14c791038 + 0x80) != 0)) {
          plVar8 = (longlong *)(DAT_14c791038 + 0x80);
        }
      }
      else if ((bVar2 == 0xff) ||
              (plVar8 = (longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18),
              *(longlong *)(lVar5 + ((ulonglong)bVar2 + 2) * 0x18) == 0)) {
        plVar8 = (longlong *)0x0;
      }
      goto LAB_14507c282;
    }
  }
  local_160 = (longlong *)0x0;
  local_168 = (longlong *)0x0;
  plVar7 = (longlong *)0x0;
  if (cVar4 != '\0') {
    if ((*(char *)(DAT_14c791038 + 1) != '\0') && (*(longlong *)(DAT_14c791038 + 0x20) != 0)) {
      local_160 = (longlong *)(DAT_14c791038 + 0x20);
    }
    local_168 = (longlong *)0x0;
    if ((*(char *)(DAT_14c791038 + 2) != '\0') && (*(longlong *)(DAT_14c791038 + 0x38) != 0)) {
      local_168 = (longlong *)(DAT_14c791038 + 0x38);
    }
  }
  plVar9 = plVar7;
  if ((*(char *)(DAT_14c791038 + 4) != '\0') && (*(longlong *)(DAT_14c791038 + 0x68) != 0)) {
    plVar9 = (longlong *)(DAT_14c791038 + 0x68);
  }
  local_170 = (longlong *)0x0;
  local_178 = 0.0;
  local_res20 = 0.0;
  plVar8 = plVar7;
  plVar10 = plVar7;
  local_158 = local_160;
  local_150 = local_168;
  local_148 = plVar9;
  if ((*(char *)(DAT_14c791038 + 5) != '\0') && (*(longlong *)(DAT_14c791038 + 0x80) != 0)) {
    plVar8 = (longlong *)(DAT_14c791038 + 0x80);
    local_res20 = 0.0;
    local_178 = 0.0;
    local_170 = (longlong *)0x0;
    plVar10 = plVar8;
  }
LAB_14507c282:
  fVar18 = 0.0;
  fVar14 = 100.0;
  local_f0 = *(longlong *)(param_3 + 0x170);
  cVar4 = FUN_1450e7cb0(param_1);
  if (cVar4 != '\0') {
    fVar14 = 0.0;
  }
  lVar5 = *param_2;
  fVar16 = fVar14;
  do {
    fVar15 = fVar14;
    fVar17 = fVar16;
    if (local_f0 == *(longlong *)(lVar5 + 0x70)) {
      uVar1 = *(undefined4 *)(lVar5 + 0x30);
      fVar17 = 0.0;
      if (local_170 != (longlong *)0x0) {
        if (*local_170 == 0) {
          fVar17 = 0.0;
        }
        else {
          local_140 = (undefined4)local_170[2];
          local_13c = 0.0;
          FUN_1450737c0(local_170,uVar1,&local_140,&local_13c);
          *(undefined4 *)(local_170 + 2) = local_140;
          fVar17 = local_13c;
        }
      }
      fVar15 = 0.0;
      if (plVar7 != (longlong *)0x0) {
        if (*plVar7 == 0) {
          fVar15 = 0.0;
        }
        else {
          local_138 = (undefined4)plVar7[2];
          local_134 = 0.0;
          FUN_1450737c0(plVar7,uVar1,&local_138,&local_134);
          *(undefined4 *)(plVar7 + 2) = local_138;
          fVar15 = local_134;
        }
      }
      fVar12 = *(float *)(lVar5 + 0x78) * local_178;
      fVar13 = *(float *)(lVar5 + 0x78) * local_res20;
      if (fVar12 <= fVar15) {
        fVar12 = fVar15;
      }
      fVar15 = *(float *)(lVar5 + 0x48);
      if (fVar13 <= fVar17) {
        fVar13 = fVar17;
      }
      fVar11 = *(float *)(lVar5 + 0x54);
      fVar17 = fVar13;
      if ((plVar9 != (longlong *)0x0) && (fVar15 != 0.0)) {
        if (*plVar9 == 0) {
          fVar17 = 0.0;
        }
        else {
          local_130 = (undefined4)plVar9[2];
          local_12c = 0.0;
          FUN_1450737c0(plVar9,fVar15,&local_130,&local_12c);
          *(undefined4 *)(plVar9 + 2) = local_130;
          fVar17 = local_12c;
        }
        if (fVar17 <= fVar13) {
          fVar17 = fVar13;
        }
      }
      fVar13 = fVar12;
      if ((plVar10 != (longlong *)0x0) && (fVar15 != 0.0)) {
        if (*plVar10 == 0) {
          fVar13 = 0.0;
        }
        else {
          local_128 = (undefined4)plVar10[2];
          local_124 = 0.0;
          FUN_1450737c0(plVar10,fVar15,&local_128,&local_124);
          *(undefined4 *)(plVar10 + 2) = local_128;
          fVar13 = local_124;
        }
        if (fVar13 <= fVar12) {
          fVar13 = fVar12;
        }
      }
      fVar15 = fVar17;
      if ((local_148 != (longlong *)0x0) && (fVar11 != 0.0)) {
        if (*local_148 == 0) {
          fVar15 = 0.0;
        }
        else {
          local_120 = (undefined4)local_148[2];
          local_11c = 0.0;
          FUN_1450737c0(local_148,fVar11,&local_120,&local_11c);
          *(undefined4 *)(local_148 + 2) = local_120;
          fVar15 = local_11c;
        }
        if (fVar15 <= fVar17) {
          fVar15 = fVar17;
        }
      }
      fVar17 = fVar13;
      if ((plVar8 != (longlong *)0x0) && (fVar11 != 0.0)) {
        if (*plVar8 == 0) {
          fVar17 = 0.0;
        }
        else {
          local_118 = (undefined4)plVar8[2];
          local_114 = 0.0;
          FUN_1450737c0(plVar8,fVar11,&local_118,&local_114);
          *(undefined4 *)(plVar8 + 2) = local_118;
          fVar17 = local_114;
        }
        if (fVar17 <= fVar13) {
          fVar17 = fVar13;
        }
      }
      if (*(int *)(param_3 + 0x194) == 0) {
        fVar12 = *(float *)(lVar5 + 0x4c);
        fVar13 = fVar15;
        if ((local_160 != (longlong *)0x0) && (fVar12 != 0.0)) {
          if (*local_160 == 0) {
            fVar13 = 0.0;
          }
          else {
            local_110 = (undefined4)local_160[2];
            local_10c = 0.0;
            FUN_1450737c0(local_160,fVar12,&local_110,&local_10c);
            *(undefined4 *)(local_160 + 2) = local_110;
            fVar13 = local_10c;
          }
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
        }
        fVar11 = fVar17;
        if ((local_168 != (longlong *)0x0) && (fVar12 != 0.0)) {
          if (*local_168 == 0) {
            fVar11 = 0.0;
          }
          else {
            local_108 = (undefined4)local_168[2];
            local_104 = 0.0;
            FUN_1450737c0(local_168,fVar12,&local_108,&local_104);
            *(undefined4 *)(local_168 + 2) = local_108;
            fVar11 = local_104;
          }
          if (fVar11 <= fVar17) {
            fVar11 = fVar17;
          }
        }
        fVar12 = *(float *)(lVar5 + 0x50);
        fVar15 = fVar13;
        if ((local_158 != (longlong *)0x0) && (fVar12 != 0.0)) {
          if (*local_158 == 0) {
            fVar15 = 0.0;
          }
          else {
            local_100 = (undefined4)local_158[2];
            local_fc = 0.0;
            FUN_1450737c0(local_158,fVar12,&local_100,&local_fc);
            *(undefined4 *)(local_158 + 2) = local_100;
            fVar15 = local_fc;
          }
          if (fVar15 <= fVar13) {
            fVar15 = fVar13;
          }
        }
        fVar17 = fVar11;
        if ((local_150 != (longlong *)0x0) && (fVar12 != 0.0)) {
          if (*local_150 == 0) {
            fVar17 = 0.0;
          }
          else {
            local_f8 = (undefined4)local_150[2];
            local_f4 = 0.0;
            FUN_1450737c0(local_150,fVar12,&local_f8,&local_f4);
            *(undefined4 *)(local_150 + 2) = local_f8;
            fVar17 = local_f4;
          }
          if (fVar17 <= fVar11) {
            fVar17 = fVar11;
          }
        }
      }
      *(float *)(lVar5 + 0x7c) = fVar15;
      *(float *)(lVar5 + 0x80) = fVar17;
      if (cVar4 == '\0') {
        if (fVar14 <= fVar15) {
          fVar15 = fVar14;
        }
        if (fVar16 <= fVar17) {
          fVar17 = fVar16;
        }
      }
      else {
        iVar3 = *(int *)(param_3 + 0x194);
        if (iVar3 == 0) {
          fVar12 = *(float *)(lVar5 + 0x3c);
        }
        else if (iVar3 == 1) {
          fVar12 = *(float *)(lVar5 + 0x40);
        }
        else if (iVar3 == 2) {
          fVar12 = *(float *)(lVar5 + 0x44);
        }
        else {
          fVar12 = 1.0;
        }
        if (0.0 <= fVar15) {
          fVar13 = fVar15;
          if (100.0 <= fVar15) {
            fVar13 = 100.0;
          }
        }
        else {
          fVar13 = 0.0;
        }
        if (0.0 <= fVar17) {
          fVar11 = fVar17;
          if (100.0 <= fVar17) {
            fVar11 = 100.0;
          }
        }
        else {
          fVar11 = 0.0;
        }
        fVar11 = (0.0031678583 - fVar11 * 1.3191276e-10 * fVar11) * fVar11 + 0.98224795;
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
        fVar11 = fVar12 * (((fVar13 * 9.302722e-07 - 0.00017546544) * fVar13 - 0.0011517591) *
                           fVar13 + 0.9843052) * fVar11;
        fVar11 = fVar11 * fVar11;
        fVar18 = fVar18 + fVar11;
        fVar15 = fVar14 + fVar11 * fVar15;
        fVar17 = fVar16 + fVar11 * fVar17;
      }
    }
    lVar5 = lVar5 + 0x90;
    fVar14 = fVar15;
    fVar16 = fVar17;
  } while (lVar5 != (ulonglong)*(uint *)(param_2 + 1) * 0x90 + *param_2);
  if ((cVar4 != '\0') && (0.0 < fVar18)) {
    fVar17 = fVar17 * (1.0 / fVar18);
    fVar15 = fVar15 * (1.0 / fVar18);
  }
  *(float *)(param_3 + 0x180) = fVar15;
  *(float *)(param_3 + 0x184) = fVar17;
  return;
}



// FUNCTION 14507c840 FUN_14507c840 body=1877 status=ok
// SIG undefined FUN_14507c840(void)

void FUN_14507c840(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 local_res20 [2];
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  
  if ((*(byte *)(param_1 + 0x19c) & 0x40) == 0) {
    lVar6 = 0;
    cVar5 = FUN_1450e71a0();
LAB_14507caa3:
    plVar9 = (longlong *)0x0;
    plVar10 = plVar9;
    if (((cVar5 != '\0') && (*DAT_14c791038 != '\0')) && (*(longlong *)(DAT_14c791038 + 8) != 0)) {
      plVar10 = (longlong *)(DAT_14c791038 + 8);
    }
    local_130 = (longlong *)0x0;
    local_138 = (longlong *)0x0;
    local_148 = (longlong *)0x0;
    plVar11 = plVar9;
    local_140 = plVar10;
    if ((DAT_14c791038[3] == '\0') || (*(longlong *)(DAT_14c791038 + 0x50) == 0)) {
      lVar8 = *param_2;
      local_138 = (longlong *)0x0;
      local_130 = (longlong *)0x0;
      if (lVar6 != 0) goto LAB_14507cb15;
    }
    else {
      lVar8 = *param_2;
      local_148 = (longlong *)(DAT_14c791038 + 0x50);
      plVar9 = local_148;
    }
  }
  else {
    lVar6 = FUN_14507bcb0(param_1 + 0x188);
    plVar9 = (longlong *)0x0;
    local_140 = (longlong *)0x0;
    cVar5 = FUN_1450e71a0(param_1);
    if (lVar6 == 0) goto LAB_14507caa3;
    if ((*(byte *)(lVar6 + 0x1f8) == 0xff) ||
       (lVar8 = (ulonglong)*(byte *)(lVar6 + 0x1f8) + 2,
       plVar11 = (longlong *)(lVar6 + lVar8 * 0x18), *(longlong *)(lVar6 + lVar8 * 0x18) == 0)) {
      plVar11 = plVar9;
    }
    if ((*(byte *)(lVar6 + 0x1f9) == 0xff) ||
       (local_138 = (longlong *)(lVar6 + ((ulonglong)*(byte *)(lVar6 + 0x1f9) + 2) * 0x18),
       *local_138 == 0)) {
      local_138 = (longlong *)0x0;
    }
    if ((*(byte *)(lVar6 + 0x1fa) == 0xff) ||
       (local_130 = (longlong *)(lVar6 + ((ulonglong)*(byte *)(lVar6 + 0x1fa) + 2) * 0x18),
       *local_130 == 0)) {
      local_130 = (longlong *)0x0;
    }
    plVar10 = plVar9;
    if (cVar5 != '\0') {
      bVar3 = *(byte *)(lVar6 + 0x1ff);
      if (bVar3 == 0xfe) {
        if ((*DAT_14c791038 != '\0') &&
           (plVar10 = (longlong *)0x0, *(longlong *)(DAT_14c791038 + 8) != 0)) {
          plVar10 = (longlong *)(DAT_14c791038 + 8);
        }
      }
      else if ((bVar3 == 0xff) ||
              (plVar10 = (longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18),
              *(longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18) == 0)) {
        plVar10 = (longlong *)0x0;
      }
      bVar3 = *(byte *)(lVar6 + 0x205);
      local_140 = (longlong *)0x0;
      if (bVar3 == 0xfe) {
        if ((*DAT_14c791038 != '\0') && (*(longlong *)(DAT_14c791038 + 8) != 0)) {
          local_140 = (longlong *)(DAT_14c791038 + 8);
        }
      }
      else if ((bVar3 == 0xff) ||
              (local_140 = (longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18), *local_140 == 0)) {
        local_140 = (longlong *)0x0;
      }
    }
    bVar3 = *(byte *)(lVar6 + 0x202);
    local_148 = (longlong *)0x0;
    if (bVar3 == 0xfe) {
      if ((DAT_14c791038[3] != '\0') && (*(longlong *)(DAT_14c791038 + 0x50) != 0)) {
        local_148 = (longlong *)(DAT_14c791038 + 0x50);
      }
    }
    else if ((bVar3 == 0xff) ||
            (local_148 = (longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18), *local_148 == 0)) {
      local_148 = (longlong *)0x0;
    }
    bVar3 = *(byte *)(lVar6 + 0x208);
    if (bVar3 == 0xfe) {
      if ((DAT_14c791038[3] == '\0') ||
         (plVar9 = (longlong *)0x0, *(longlong *)(DAT_14c791038 + 0x50) == 0)) goto LAB_14507ca74;
      lVar8 = *param_2;
      plVar9 = (longlong *)(DAT_14c791038 + 0x50);
    }
    else {
      if ((bVar3 == 0xff) ||
         (plVar9 = (longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18),
         *(longlong *)(lVar6 + ((ulonglong)bVar3 + 2) * 0x18) == 0)) {
        plVar9 = (longlong *)0x0;
      }
LAB_14507ca74:
      lVar8 = *param_2;
    }
LAB_14507cb15:
    bVar4 = true;
    if ((*(byte *)(lVar6 + 0x20b) & 1) != 0) goto LAB_14507cb80;
  }
  bVar4 = false;
LAB_14507cb80:
  do {
    uVar14 = 0x3f800000;
    if (lVar6 != 0) {
      if (plVar11 != (longlong *)0x0) {
        if (*plVar11 == 0) {
          uVar14 = 0;
        }
        else {
          local_res20[0] = (undefined4)plVar11[2];
          local_128 = 0;
          FUN_1450737c0(plVar11,*(undefined4 *)(lVar8 + 0x30),local_res20,&local_128);
          *(undefined4 *)(plVar11 + 2) = local_res20[0];
          uVar14 = local_128;
        }
      }
      *(undefined4 *)(lVar8 + 0x3c) = uVar14;
      if (local_138 == (longlong *)0x0) {
        uVar12 = 0x3f800000;
      }
      else {
        uVar12 = uVar14;
        if (local_138 != plVar11) {
          if (*local_138 == 0) {
            uVar12 = 0;
          }
          else {
            local_124 = (undefined4)local_138[2];
            local_120 = 0;
            FUN_1450737c0(local_138,*(undefined4 *)(lVar8 + 0x30),&local_124,&local_120);
            *(undefined4 *)(local_138 + 2) = local_124;
            uVar12 = local_120;
          }
        }
      }
      *(undefined4 *)(lVar8 + 0x40) = uVar12;
      if (local_130 == (longlong *)0x0) {
        uVar14 = 0x3f800000;
      }
      else if (local_130 != plVar11) {
        if (*local_130 == 0) {
          uVar14 = 0;
        }
        else {
          local_11c = (undefined4)local_130[2];
          local_118 = 0;
          FUN_1450737c0(local_130,*(undefined4 *)(lVar8 + 0x30),&local_11c,&local_118);
          *(undefined4 *)(local_130 + 2) = local_11c;
          uVar14 = local_118;
        }
      }
      *(undefined4 *)(lVar8 + 0x44) = uVar14;
      if (bVar4) {
        fVar13 = *(float *)(lVar8 + 0x34);
        fVar1 = *(float *)(lVar6 + 0x18);
        fVar2 = *(float *)(param_1 + 400);
        if (fVar1 < fVar13) {
          if (fVar13 < *(float *)(lVar6 + 0x1c)) {
            fVar13 = (fVar13 - fVar1) / (*(float *)(lVar6 + 0x1c) - fVar1);
          }
          else {
            fVar13 = 1.0;
          }
          *(float *)(lVar8 + 0x78) = fVar13;
          fVar13 = fVar13 * fVar2 * 0.05;
          if ((fVar13 < -37.0) || (37.0 < fVar13)) {
            fVar13 = 0.0;
          }
          else {
            uVar7 = (uint)(longlong)(fVar13 * 27866352.0 + 1.0653532e+09);
            local_f0 = (float)(uVar7 & 0xff800000);
            local_f4 = (float)((uVar7 & 0x7fffff) + 0x3f800000);
            fVar13 = ((local_f4 * 0.32518977 + 0.020805772) * local_f4 + 0.65304345) * local_f0;
          }
        }
        else {
          *(undefined4 *)(lVar8 + 0x78) = 0;
          fVar13 = 1.0;
        }
        *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
      }
    }
    fVar13 = *(float *)(lVar8 + 0x88);
    *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
    *(float *)(lVar8 + 0x40) = fVar13 * *(float *)(lVar8 + 0x40);
    *(float *)(lVar8 + 0x44) = fVar13 * *(float *)(lVar8 + 0x44);
    if ((local_148 != (longlong *)0x0) && (*(float *)(lVar8 + 0x48) != 0.0)) {
      if (*local_148 == 0) {
        fVar13 = 0.0;
      }
      else {
        local_114 = (undefined4)local_148[2];
        local_110 = 0.0;
        FUN_1450737c0(local_148,*(float *)(lVar8 + 0x48),&local_114,&local_110);
        *(undefined4 *)(local_148 + 2) = local_114;
        fVar13 = local_110;
      }
      *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
      *(float *)(lVar8 + 0x40) = fVar13 * *(float *)(lVar8 + 0x40);
      *(float *)(lVar8 + 0x44) = fVar13 * *(float *)(lVar8 + 0x44);
    }
    if ((plVar9 != (longlong *)0x0) && (*(float *)(lVar8 + 0x54) != 0.0)) {
      if (*plVar9 == 0) {
        fVar13 = 0.0;
      }
      else {
        local_10c = (undefined4)plVar9[2];
        local_108 = 0.0;
        FUN_1450737c0(plVar9,*(float *)(lVar8 + 0x54),&local_10c,&local_108);
        *(undefined4 *)(plVar9 + 2) = local_10c;
        fVar13 = local_108;
      }
      *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
      *(float *)(lVar8 + 0x40) = fVar13 * *(float *)(lVar8 + 0x40);
      *(float *)(lVar8 + 0x44) = fVar13 * *(float *)(lVar8 + 0x44);
    }
    if ((plVar10 != (longlong *)0x0) && (*(float *)(lVar8 + 0x4c) != 0.0)) {
      if (*plVar10 == 0) {
        fVar13 = 0.0;
      }
      else {
        local_104 = (undefined4)plVar10[2];
        local_100 = 0.0;
        FUN_1450737c0(plVar10,*(float *)(lVar8 + 0x4c),&local_104,&local_100);
        *(undefined4 *)(plVar10 + 2) = local_104;
        fVar13 = local_100;
      }
      *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
    }
    if ((local_140 != (longlong *)0x0) && (*(float *)(lVar8 + 0x50) != 0.0)) {
      if (*local_140 == 0) {
        fVar13 = 0.0;
      }
      else {
        local_fc = (undefined4)local_140[2];
        local_f8 = 0.0;
        FUN_1450737c0(local_140,*(float *)(lVar8 + 0x50),&local_fc,&local_f8);
        *(undefined4 *)(local_140 + 2) = local_fc;
        fVar13 = local_f8;
      }
      *(float *)(lVar8 + 0x3c) = fVar13 * *(float *)(lVar8 + 0x3c);
    }
    lVar8 = lVar8 + 0x90;
  } while (lVar8 != (ulonglong)*(uint *)(param_2 + 1) * 0x90 + *param_2);
  return;
}



// FUNCTION 14507cfa0 FUN_14507cfa0 body=1524 status=ok
// SIG undefined FUN_14507cfa0(void)

void FUN_14507cfa0(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  fVar10 = 0.0;
  uVar1 = *(undefined8 *)(*param_1 + 0xc);
  uVar2 = *(undefined8 *)(*param_1 + 0x18);
  fVar5 = (float)((ulonglong)uVar1 >> 0x20);
  fVar6 = (float)((ulonglong)uVar2 >> 0x20);
  if (iVar3 == 0) {
LAB_14507d2a0:
    if (iVar3 == 0) goto LAB_14507d437;
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        if (iVar3 != 4) goto LAB_14507d437;
        goto LAB_14507d2de;
      }
      goto LAB_14507d2ec;
    }
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        if ((fVar5 < -37.0) || (37.0 < fVar5)) {
          fVar5 = 0.0;
        }
        else {
          uVar4 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
          fVar5 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
          fVar5 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) *
                  (float)(uVar4 & 0xff800000);
        }
      }
      else {
        if (iVar3 != 4) goto LAB_14507d2a0;
        fVar5 = fVar5 * 0.05;
        if ((fVar5 < -37.0) || (37.0 < fVar5)) {
          fVar5 = 0.0;
        }
        else {
          uVar4 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
          fVar5 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
          fVar5 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) *
                  (float)(uVar4 & 0xff800000);
        }
LAB_14507d2de:
        fVar6 = fVar6 * 0.05;
      }
LAB_14507d2ec:
      if ((fVar6 < -37.0) || (37.0 < fVar6)) {
        fVar6 = 0.0;
      }
      else {
        uVar4 = (uint)(longlong)(fVar6 * 27866352.0 + 1.0653532e+09);
        fVar6 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                (float)(uVar4 & 0xff800000);
      }
      goto LAB_14507d437;
    }
    if (0.0 <= fVar5) {
      fVar8 = -1.0;
    }
    else {
      fVar8 = 1.0;
    }
    if (-1.0 <= fVar5) {
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
    }
    else {
      fVar5 = -1.0;
    }
    fVar9 = fVar8 * fVar5 + 1.0;
    fVar5 = (float)(((uint)fVar9 & 0x7fffff) + 0x3f800000);
    fVar7 = fVar5 + 1.0;
    fVar5 = ((((fVar5 * fVar5 * fVar5 - 1.0) * 1.1581186) / (fVar7 * fVar7 * fVar7)) * 20.0 +
            ((float)((uint)fVar9 >> 0x17 & 0xff) - 127.0) * 6.0206003) * fVar8;
  }
  if (0.0 <= fVar6) {
    fVar8 = -1.0;
  }
  else {
    fVar8 = 1.0;
  }
  fVar9 = -1.0;
  if ((-1.0 <= fVar6) && (fVar9 = fVar6, 1.0 <= fVar6)) {
    fVar9 = 1.0;
  }
  fVar9 = fVar8 * fVar9 + 1.0;
  fVar6 = (float)(((uint)fVar9 & 0x7fffff) + 0x3f800000);
  fVar7 = fVar6 + 1.0;
  fVar6 = ((((fVar6 * fVar6 * fVar6 - 1.0) * 1.1581186) / (fVar7 * fVar7 * fVar7)) * 20.0 +
          ((float)((uint)fVar9 >> 0x17 & 0xff) - 127.0) * 6.0206003) * fVar8;
LAB_14507d437:
  fVar5 = fVar5 * 0.05;
  if ((fVar5 < -37.0) || (37.0 < fVar5)) {
    fVar5 = 0.0;
  }
  else {
    uVar4 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
    fVar5 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
    fVar5 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) * (float)(uVar4 & 0xff800000);
  }
  fVar6 = fVar6 * 0.05;
  if ((-37.0 <= fVar6) && (fVar6 <= 37.0)) {
    uVar4 = (uint)(longlong)(fVar6 * 27866352.0 + 1.0653532e+09);
    fVar6 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
    fVar10 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) * (float)(uVar4 & 0xff800000)
    ;
  }
  fVar6 = (float)uVar1;
  fVar8 = 1.0 / ((float)uVar2 - fVar6);
  fVar9 = fVar8 * fVar6 * (fVar5 - fVar10) + fVar5;
  *param_3 = fVar9;
  *param_2 = ((1.0 - fVar6) * fVar8 * (fVar10 - fVar5) + fVar5) - fVar9;
  return;
}



// FUNCTION 14507d5a0 FUN_14507d5a0 body=170 status=ok
// SIG undefined FUN_14507d5a0(void)

undefined8 FUN_14507d5a0(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 14507d650 FUN_14507d650 body=3 status=ok
// SIG undefined FUN_14507d650(void)

void FUN_14507d650(void)

{
  return;
}



// FUNCTION 14507d660 FUN_14507d660 body=110 status=ok
// SIG undefined FUN_14507d660(void)

undefined8 FUN_14507d660(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(0,0x60);
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
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *param_1 = puVar1;
    return 1;
  }
  *param_1 = 0;
  return 0x34;
}



// FUNCTION 14507d6d0 FUN_14507d6d0 body=71 status=ok
// SIG undefined FUN_14507d6d0(void)

void FUN_14507d6d0(longlong *param_1)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    FUN_145360190();
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      FUN_145360180();
      AK::MemoryMgr::Free(0,pvVar1);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14507d720 FUN_14507d720 body=13 status=ok
// SIG undefined FUN_14507d720(void)

void FUN_14507d720(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    plVar3 = *(longlong **)(piVar2 + 4);
    while (plVar3 != (longlong *)0x0) {
      *(longlong *)(piVar2 + 4) = plVar3[0xc];
      if (plVar3 == *(longlong **)(piVar2 + 2)) {
        piVar2[2] = 0;
        piVar2[3] = 0;
      }
      *piVar2 = *piVar2 + -1;
      FUN_14535e8e0(plVar3);
      FUN_14535e650();
      piVar1 = (int *)((longlong)plVar3 + 0xbc);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
        AK::MemoryMgr::Free(0,plVar3);
      }
      plVar3 = *(longlong **)(piVar2 + 4);
    }
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    *piVar2 = 0;
    puVar5 = *(undefined8 **)(piVar2 + 10);
    while (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      puVar4 = (undefined8 *)*puVar5;
      if ((void *)puVar5[6] != (void *)0x0) {
        AK::MemoryMgr::Free(0,(void *)puVar5[6]);
      }
      *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
      puVar5[6] = 0;
      if ((void *)puVar5[1] != (void *)0x0) {
        *(undefined4 *)(puVar5 + 2) = 0;
        AK::MemoryMgr::Free(0,(void *)puVar5[1]);
        puVar5[1] = 0;
        *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
      }
      if ((void *)puVar5[3] != (void *)0x0) {
        *(undefined4 *)(puVar5 + 4) = 0;
        AK::MemoryMgr::Free(0,(void *)puVar5[3]);
        puVar5[3] = 0;
        *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(0,puVar5);
      puVar5 = puVar4;
    }
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[6] = 0;
    puVar5 = *(undefined8 **)(piVar2 + 0x10);
    while (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      puVar4 = (undefined8 *)*puVar5;
      if ((void *)puVar5[6] != (void *)0x0) {
        AK::MemoryMgr::Free(0,(void *)puVar5[6]);
      }
      *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
      puVar5[6] = 0;
      if ((void *)puVar5[1] != (void *)0x0) {
        *(undefined4 *)(puVar5 + 2) = 0;
        AK::MemoryMgr::Free(0,(void *)puVar5[1]);
        puVar5[1] = 0;
        *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
      }
      if ((void *)puVar5[3] != (void *)0x0) {
        *(undefined4 *)(puVar5 + 4) = 0;
        AK::MemoryMgr::Free(0,(void *)puVar5[3]);
        puVar5[3] = 0;
        *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(0,puVar5);
      puVar5 = puVar4;
    }
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0xc] = 0;
    puVar5 = *(undefined8 **)(piVar2 + 0x16);
    while (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      puVar4 = (undefined8 *)*puVar5;
      if ((void *)puVar5[6] != (void *)0x0) {
        AK::MemoryMgr::Free(0,(void *)puVar5[6]);
      }
      *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
      puVar5[6] = 0;
      if ((void *)puVar5[1] != (void *)0x0) {
        *(undefined4 *)(puVar5 + 2) = 0;
        AK::MemoryMgr::Free(0,(void *)puVar5[1]);
        puVar5[1] = 0;
        *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
      }
      if ((void *)puVar5[3] != (void *)0x0) {
        *(undefined4 *)(puVar5 + 4) = 0;
        AK::MemoryMgr::Free(0,(void *)puVar5[3]);
        puVar5[3] = 0;
        *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(0,puVar5);
      puVar5 = puVar4;
    }
    piVar2[0x16] = 0;
    piVar2[0x17] = 0;
    piVar2[0x14] = 0;
    piVar2[0x15] = 0;
    piVar2[0x12] = 0;
    return;
  }
  return;
}



// FUNCTION 14507d730 FUN_14507d730 body=15 status=ok
// SIG undefined FUN_14507d730(void)

void FUN_14507d730(undefined8 *param_1)

{
  FUN_1453603b0(*param_1,DAT_14c72f434);
  return;
}



// FUNCTION 14507d740 FUN_14507d740 body=8 status=ok
// SIG undefined FUN_14507d740(void)

void FUN_14507d740(undefined8 *param_1)

{
  FUN_145360bf0(*param_1);
  return;
}



// FUNCTION 14507d750 FUN_14507d750 body=221 status=ok
// SIG undefined FUN_14507d750(void)

void FUN_14507d750(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar3 = *(undefined8 **)(param_2 + 0x140);
  puVar1 = puVar3 + (ulonglong)*(uint *)(param_2 + 0x148) * 5;
  for (; puVar3 != puVar1; puVar3 = puVar3 + 5) {
    plVar4 = (longlong *)puVar3[3];
    plVar2 = plVar4 + *(uint *)(puVar3 + 4);
    for (; plVar4 != plVar2; plVar4 = plVar4 + 1) {
      local_48 = *puVar3;
      local_38 = *(undefined4 *)(puVar3 + 2);
      local_40 = 0;
      FUN_14507d830(param_1,&local_48,*plVar4 + 0x48,param_3,param_4);
      FUN_14507e280(param_1,*plVar4,puVar3,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 14507d830 FUN_14507d830 body=496 status=ok
// SIG undefined FUN_14507d830(void)

void FUN_14507d830(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar5 = (undefined8 *)*param_3;
  if (puVar5 != puVar5 + *(uint *)(param_3 + 1)) {
    do {
      lVar4 = DAT_14c791060;
      if (*(char *)((longlong)*puVar5 + 0xd) == '\x04') {
        uVar2 = *(uint *)*puVar5;
        do {
          while (iVar3 = *(int *)(lVar4 + 0x268), iVar3 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x270));
            if (*(int *)(lVar4 + 0x268) < 0) goto LAB_14507d8ad;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x270));
          }
          LOCK();
          bVar7 = iVar3 == *(int *)(lVar4 + 0x268);
          if (bVar7) {
            *(int *)(lVar4 + 0x268) = iVar3 + 1;
          }
          UNLOCK();
        } while (!bVar7);
LAB_14507d8ad:
        if (*(uint *)(lVar4 + 0x2b0) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          for (plVar6 = *(longlong **)
                         (*(longlong *)(lVar4 + 0x2a8) +
                         ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar4 + 0x2b0)) * 8);
              plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[1]) {
            if (*(uint *)(plVar6 + 2) == uVar2) goto LAB_14507d8e0;
          }
          plVar6 = (longlong *)0x0;
LAB_14507d8e0:
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar6 + 0x14) = *(int *)((longlong)plVar6 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar3 = *(int *)(lVar4 + 0x268);
        while (-1 < iVar3) {
          LOCK();
          bVar7 = iVar3 == *(int *)(lVar4 + 0x268);
          if (bVar7) {
            *(int *)(lVar4 + 0x268) = iVar3 + -1;
          }
          UNLOCK();
          if (bVar7) {
            if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar4 + 0x298))) {
              SetEvent(*(HANDLE *)(lVar4 + 0x2a0));
            }
            goto LAB_14507d948;
          }
          iVar3 = *(int *)(lVar4 + 0x268);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x270));
LAB_14507d948:
        if (plVar6 != (longlong *)0x0) {
          local_48 = *param_2;
          local_38 = *(undefined4 *)(param_2 + 2);
          local_40 = 0;
          FUN_14507d830(param_1,&local_48,plVar6 + 9,param_4,param_5);
          FUN_14507e280(param_1,plVar6,param_2,param_4,param_5);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0x14);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined8 *)(*param_3 + (ulonglong)*(uint *)(param_3 + 1) * 8));
  }
  return;
}



// FUNCTION 14507da20 FUN_14507da20 body=409 status=ok
// SIG undefined FUN_14507da20(void)

ulonglong FUN_14507da20(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                       undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong extraout_RAX;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar4 = DAT_14c791060;
  do {
    while (iVar3 = *(int *)(lVar4 + 0x268), iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x270));
      if (*(int *)(lVar4 + 0x268) < 0) goto LAB_14507da69;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x270));
    }
    LOCK();
    bVar8 = iVar3 == *(int *)(lVar4 + 0x268);
    if (bVar8) {
      *(int *)(lVar4 + 0x268) = iVar3 + 1;
    }
    UNLOCK();
  } while (!bVar8);
LAB_14507da69:
  if (*(uint *)(lVar4 + 0x2b0) == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    for (plVar7 = *(longlong **)
                   (*(longlong *)(lVar4 + 0x2a8) +
                   ((ulonglong)param_3 % (ulonglong)*(uint *)(lVar4 + 0x2b0)) * 8);
        plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]) {
      if (*(uint *)(plVar7 + 2) == param_3) goto LAB_14507daa0;
    }
    plVar7 = (longlong *)0x0;
LAB_14507daa0:
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  uVar5 = *(uint *)(lVar4 + 0x268);
  do {
    if ((int)uVar5 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x270));
      uVar6 = extraout_RAX;
LAB_14507db08:
      if (plVar7 != (longlong *)0x0) {
        local_38 = *param_2;
        local_28 = *(undefined4 *)(param_2 + 2);
        local_30 = 0;
        FUN_14507d830(param_1,&local_38,plVar7 + 9,param_4,param_5);
        FUN_14507e280(param_1,plVar7,param_2,param_4,param_5);
        LOCK();
        puVar1 = (uint *)((longlong)plVar7 + 0x14);
        uVar5 = *puVar1;
        uVar6 = (ulonglong)uVar5;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar5 == 1) {
          uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      return uVar6;
    }
    LOCK();
    uVar2 = *(uint *)(lVar4 + 0x268);
    bVar8 = uVar5 == uVar2;
    if (bVar8) {
      *(uint *)(lVar4 + 0x268) = uVar5 - 1;
      uVar2 = uVar5;
    }
    uVar6 = (ulonglong)uVar2;
    UNLOCK();
    if (bVar8) {
      if ((uVar5 - 1 == 0) &&
         (uVar6 = (ulonglong)*(uint *)(lVar4 + 0x298), 0 < (int)*(uint *)(lVar4 + 0x298))) {
        uVar5 = SetEvent(*(HANDLE *)(lVar4 + 0x2a0));
        uVar6 = (ulonglong)uVar5;
      }
      goto LAB_14507db08;
    }
    uVar5 = *(uint *)(lVar4 + 0x268);
  } while( true );
}



// FUNCTION 14507dbc0 FUN_14507dbc0 body=465 status=ok
// SIG undefined FUN_14507dbc0(void)

void FUN_14507dbc0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  
  puVar7 = (undefined8 *)*param_1;
  if (puVar7 != puVar7 + *(uint *)(param_1 + 1)) {
    do {
      lVar5 = DAT_14c791060;
      if (*(char *)((longlong)*puVar7 + 0xd) == '\x04') {
        uVar3 = *(uint *)*puVar7;
        do {
          while (iVar4 = *(int *)(lVar5 + 0x268), iVar4 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x270));
            if (*(int *)(lVar5 + 0x268) < 0) goto LAB_14507dc37;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x270));
          }
          LOCK();
          bVar9 = iVar4 == *(int *)(lVar5 + 0x268);
          if (bVar9) {
            *(int *)(lVar5 + 0x268) = iVar4 + 1;
          }
          UNLOCK();
        } while (!bVar9);
LAB_14507dc37:
        if (*(uint *)(lVar5 + 0x2b0) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          for (plVar8 = *(longlong **)
                         (*(longlong *)(lVar5 + 0x2a8) +
                         ((ulonglong)uVar3 % (ulonglong)*(uint *)(lVar5 + 0x2b0)) * 8);
              plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[1]) {
            if (*(uint *)(plVar8 + 2) == uVar3) goto LAB_14507dc67;
          }
          plVar8 = (longlong *)0x0;
LAB_14507dc67:
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar4 = *(int *)(lVar5 + 0x268);
        while (-1 < iVar4) {
          LOCK();
          bVar9 = iVar4 == *(int *)(lVar5 + 0x268);
          if (bVar9) {
            *(int *)(lVar5 + 0x268) = iVar4 + -1;
          }
          UNLOCK();
          if (bVar9) {
            if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar5 + 0x298))) {
              SetEvent(*(HANDLE *)(lVar5 + 0x2a0));
            }
            goto LAB_14507dccc;
          }
          iVar4 = *(int *)(lVar5 + 0x268);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x270));
LAB_14507dccc:
        if (plVar8 != (longlong *)0x0) {
          uVar3 = *(uint *)(param_2 + 0x20);
          if (((uVar3 < *(uint *)(param_2 + 0x24)) ||
              (cVar6 = FUN_14507d5a0(param_2 + 0x18), cVar6 != '\0')) &&
             (uVar3 < *(uint *)(param_2 + 0x24))) {
            uVar3 = *(uint *)(param_2 + 0x20);
            *(uint *)(param_2 + 0x20) = uVar3 + 1;
            puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x18) + (ulonglong)uVar3 * 8);
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = plVar8;
              LOCK();
              *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
              UNLOCK();
            }
          }
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0x14);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 0x18))(plVar8);
          }
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8));
  }
  return;
}



// FUNCTION 14507dda0 FUN_14507dda0 body=317 status=ok
// SIG undefined FUN_14507dda0(void)

ulonglong FUN_14507dda0(uint param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  BOOL BVar7;
  ulonglong uVar8;
  ulonglong extraout_RAX;
  undefined4 extraout_var;
  longlong *plVar9;
  bool bVar10;
  
  lVar6 = DAT_14c791060;
  do {
    while (iVar4 = *(int *)(lVar6 + 0x268), iVar4 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x270));
      if (*(int *)(lVar6 + 0x268) < 0) goto LAB_14507ddd7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x270));
    }
    LOCK();
    bVar10 = iVar4 == *(int *)(lVar6 + 0x268);
    if (bVar10) {
      *(int *)(lVar6 + 0x268) = iVar4 + 1;
    }
    UNLOCK();
  } while (!bVar10);
LAB_14507ddd7:
  if (*(uint *)(lVar6 + 0x2b0) == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(lVar6 + 0x2a8) +
                   ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar6 + 0x2b0)) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == param_1) goto LAB_14507de07;
    }
    plVar9 = (longlong *)0x0;
LAB_14507de07:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  uVar5 = *(uint *)(lVar6 + 0x268);
  do {
    if ((int)uVar5 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x270));
      uVar8 = extraout_RAX;
LAB_14507de74:
      if (plVar9 == (longlong *)0x0) {
        return uVar8 & 0xffffffffffffff00;
      }
      bVar3 = *(byte *)((longlong)plVar9 + 0x94);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      return (ulonglong)(bVar3 & 1);
    }
    LOCK();
    uVar2 = *(uint *)(lVar6 + 0x268);
    bVar10 = uVar5 == uVar2;
    if (bVar10) {
      *(uint *)(lVar6 + 0x268) = uVar5 - 1;
      uVar2 = uVar5;
    }
    uVar8 = (ulonglong)uVar2;
    UNLOCK();
    if (bVar10) {
      if ((uVar5 - 1 == 0) &&
         (uVar8 = (ulonglong)*(uint *)(lVar6 + 0x298), 0 < (int)*(uint *)(lVar6 + 0x298))) {
        BVar7 = SetEvent(*(HANDLE *)(lVar6 + 0x2a0));
        uVar8 = CONCAT44(extraout_var,BVar7);
      }
      goto LAB_14507de74;
    }
    uVar5 = *(uint *)(lVar6 + 0x268);
  } while( true );
}



// FUNCTION 14507dee0 FUN_14507dee0 body=594 status=ok
// SIG undefined FUN_14507dee0(void)

void FUN_14507dee0(longlong *param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  
  plVar10 = (longlong *)*param_1;
  if (plVar10 != plVar10 + *(uint *)(param_1 + 1)) {
    do {
      lVar8 = DAT_14c791060;
      puVar6 = (uint *)*plVar10;
      if (((*(char *)((longlong)puVar6 + 0xd) == '\x04') && (*puVar6 == param_2)) &&
         ((uVar4 = puVar6[2], uVar4 == 0 || (uVar4 == 7)))) {
        do {
          while (iVar5 = *(int *)(lVar8 + 0x268), iVar5 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x270));
            if (*(int *)(lVar8 + 0x268) < 0) goto LAB_14507df67;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x270));
          }
          LOCK();
          bVar12 = iVar5 == *(int *)(lVar8 + 0x268);
          if (bVar12) {
            *(int *)(lVar8 + 0x268) = iVar5 + 1;
          }
          UNLOCK();
        } while (!bVar12);
LAB_14507df67:
        plVar11 = (longlong *)0x0;
        if (*(uint *)(lVar8 + 0x2b0) != 0) {
          for (plVar7 = *(longlong **)
                         (*(longlong *)(lVar8 + 0x2a8) +
                         ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar8 + 0x2b0)) * 8);
              (plVar11 = (longlong *)0x0, plVar7 != (longlong *)0x0 &&
              (plVar11 = plVar7, *(uint *)(plVar7 + 2) != param_2)); plVar7 = (longlong *)plVar7[1])
          {
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar5 = *(int *)(lVar8 + 0x268);
        while (-1 < iVar5) {
          LOCK();
          bVar12 = iVar5 == *(int *)(lVar8 + 0x268);
          if (bVar12) {
            *(int *)(lVar8 + 0x268) = iVar5 + -1;
          }
          UNLOCK();
          if (bVar12) {
            if ((iVar5 + -1 == 0) && (0 < *(int *)(lVar8 + 0x298))) {
              SetEvent(*(HANDLE *)(lVar8 + 0x2a0));
            }
            goto LAB_14507e008;
          }
          iVar5 = *(int *)(lVar8 + 0x268);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x270));
LAB_14507e008:
        if (plVar11 != (longlong *)0x0) {
          bVar3 = *(byte *)((longlong)plVar11 + 0x94);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0x14);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
          if ((bVar3 & 1) != 0) {
            local_38 = 0;
            uStack_34 = 0x3f800000;
            local_30 = uVar4;
            FUN_14507cfa0(*plVar10 + 0x18,&uStack_34,&local_38);
            uVar4 = *(uint *)(param_3 + 1);
            if (((uVar4 < *(uint *)((longlong)param_3 + 0xc)) ||
                (cVar9 = FUN_14507e370(param_3), cVar9 != '\0')) &&
               (uVar4 < *(uint *)((longlong)param_3 + 0xc))) {
              puVar2 = (undefined8 *)(*param_3 + (ulonglong)*(uint *)(param_3 + 1) * 0xc);
              *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
              if (puVar2 != (undefined8 *)0x0) {
                *(undefined4 *)((longlong)puVar2 + 4) = 0x3f800000;
                *(undefined4 *)(puVar2 + 1) = 0x3c;
                *puVar2 = CONCAT44(uStack_34,local_38);
                *(uint *)(puVar2 + 1) = local_30;
              }
            }
          }
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != (longlong *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8));
  }
  return;
}



// FUNCTION 14507e140 FUN_14507e140 body=302 status=ok
// SIG undefined FUN_14507e140(void)

ulonglong FUN_14507e140(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong extraout_RAX;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = DAT_14c791060;
  do {
    while (iVar3 = *(int *)(lVar4 + 0x268), iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x270));
      if (*(int *)(lVar4 + 0x268) < 0) goto LAB_14507e177;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x270));
    }
    LOCK();
    bVar8 = iVar3 == *(int *)(lVar4 + 0x268);
    if (bVar8) {
      *(int *)(lVar4 + 0x268) = iVar3 + 1;
    }
    UNLOCK();
  } while (!bVar8);
LAB_14507e177:
  if (*(uint *)(lVar4 + 0x2b0) == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    for (plVar7 = *(longlong **)
                   (*(longlong *)(lVar4 + 0x2a8) +
                   ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar4 + 0x2b0)) * 8);
        plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]) {
      if (*(uint *)(plVar7 + 2) == param_2) goto LAB_14507e1a7;
    }
    plVar7 = (longlong *)0x0;
LAB_14507e1a7:
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  uVar5 = *(uint *)(lVar4 + 0x268);
  do {
    if ((int)uVar5 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x270));
      uVar6 = extraout_RAX;
LAB_14507e214:
      if (plVar7 != (longlong *)0x0) {
        FUN_145357840(plVar7,param_3);
        LOCK();
        puVar1 = (uint *)((longlong)plVar7 + 0x14);
        uVar5 = *puVar1;
        uVar6 = (ulonglong)uVar5;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar5 == 1) {
          uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      return uVar6;
    }
    LOCK();
    uVar2 = *(uint *)(lVar4 + 0x268);
    bVar8 = uVar5 == uVar2;
    if (bVar8) {
      *(uint *)(lVar4 + 0x268) = uVar5 - 1;
      uVar2 = uVar5;
    }
    uVar6 = (ulonglong)uVar2;
    UNLOCK();
    if (bVar8) {
      if ((uVar5 - 1 == 0) &&
         (uVar6 = (ulonglong)*(uint *)(lVar4 + 0x298), 0 < (int)*(uint *)(lVar4 + 0x298))) {
        uVar5 = SetEvent(*(HANDLE *)(lVar4 + 0x2a0));
        uVar6 = (ulonglong)uVar5;
      }
      goto LAB_14507e214;
    }
    uVar5 = *(uint *)(lVar4 + 0x268);
  } while( true );
}



// FUNCTION 14507e270 FUN_14507e270 body=3 status=ok
// SIG undefined FUN_14507e270(void)

void FUN_14507e270(void)

{
  return;
}



// FUNCTION 14507e280 FUN_14507e280 body=240 status=ok
// SIG undefined FUN_14507e280(void)

void FUN_14507e280(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char local_28 [8];
  longlong *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28[0] = '\0';
  local_28[1] = 0;
  local_20 = (longlong *)0x0;
  FUN_145357050(param_2,param_3,param_4,param_5,&local_20,local_28,local_28 + 1);
  if ((local_28[0] != '\0') && (local_20 != (longlong *)0x0)) {
    local_18 = *(undefined4 *)(param_2 + 0x10);
    uStack_14 = CONCAT31(uStack_14._1_3_,4);
    cVar3 = FUN_145362e30(CONCAT44(uStack_14,local_18),local_20 + 1);
    if (cVar3 != '\0') {
      FUN_145360bc0(*param_1,local_20);
      return;
    }
    *(int *)((longlong)local_20 + 0xbc) = *(int *)((longlong)local_20 + 0xbc) + 1;
    FUN_14535e8e0(local_20);
    FUN_14535e650(local_20);
    plVar2 = local_20;
    piVar1 = (int *)((longlong)local_20 + 0xbc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))(local_20,0);
      AK::MemoryMgr::Free(0,plVar2);
    }
  }
  return;
}



// FUNCTION 14507e370 FUN_14507e370 body=532 status=ok
// SIG undefined FUN_14507e370(void)

undefined8 FUN_14507e370(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  undefined4 *puVar5;
  __uint64 _Var6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  uVar12 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var6 = (ulonglong)uVar12 * 0xc;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
      uVar11 = 0;
      if (3 < uVar8) {
        puVar5 = (undefined4 *)((longlong)pvVar4 + 8);
        lVar9 = -(longlong)pvVar4;
        lVar10 = (uVar8 - 4 >> 2) + 1;
        uVar11 = lVar10 * 4;
        do {
          puVar7 = (undefined8 *)(puVar5 + -2);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined4 *)puVar7 = 0;
            puVar5[-1] = 0x3f800000;
            *puVar5 = 0x3c;
          }
          lVar2 = *param_1;
          *puVar7 = *(undefined8 *)((longlong)puVar5 + lVar2 + lVar9 + -8);
          *puVar5 = *(undefined4 *)((longlong)puVar5 + lVar2 + lVar9);
          puVar7 = (undefined8 *)(puVar5 + 1);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined4 *)puVar7 = 0;
            puVar5[2] = 0x3f800000;
            puVar5[3] = 0x3c;
          }
          lVar2 = *param_1;
          *puVar7 = *(undefined8 *)((longlong)puVar5 + lVar2 + lVar9 + 4);
          puVar5[3] = *(undefined4 *)((longlong)puVar5 + lVar2 + lVar9 + 0xc);
          lVar2 = (longlong)puVar5 + (0x10 - (longlong)pvVar4);
          if ((longlong)pvVar4 + lVar2 != 0) {
            puVar5[4] = 0;
            puVar5[5] = 0x3f800000;
            puVar5[6] = 0x3c;
          }
          lVar3 = *param_1;
          *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(lVar2 + lVar3);
          lVar1 = (longlong)puVar5 + (0x1c - (longlong)pvVar4);
          puVar5[6] = *(undefined4 *)(lVar2 + 8 + lVar3);
          if (lVar1 + (longlong)pvVar4 != 0) {
            puVar5[7] = 0;
            puVar5[8] = 0x3f800000;
            puVar5[9] = 0x3c;
          }
          lVar2 = *param_1;
          *(undefined8 *)(puVar5 + 7) = *(undefined8 *)(lVar1 + lVar2);
          puVar5[9] = *(undefined4 *)(lVar1 + 8 + lVar2);
          puVar5 = puVar5 + 0xc;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (uVar11 < uVar8) {
        lVar9 = uVar8 - uVar11;
        puVar7 = (undefined8 *)((longlong)pvVar4 + uVar11 * 0xc);
        do {
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined4 *)puVar7 = 0;
            *(undefined4 *)((longlong)puVar7 + 4) = 0x3f800000;
            *(undefined4 *)(puVar7 + 1) = 0x3c;
          }
          lVar10 = *param_1;
          *puVar7 = *(undefined8 *)((longlong)puVar7 + (lVar10 - (longlong)pvVar4));
          *(undefined4 *)(puVar7 + 1) =
               *(undefined4 *)((longlong)puVar7 + lVar10 + (8 - (longlong)pvVar4));
          puVar7 = (undefined8 *)((longlong)puVar7 + 0xc);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar4;
  *(uint *)((longlong)param_1 + 0xc) = uVar12;
  return 1;
}



// FUNCTION 14507e590 FUN_14507e590 body=184 status=ok
// SIG undefined FUN_14507e590(void)

undefined8 FUN_14507e590(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined7 uStack_f;
  
  plVar4 = (longlong *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  plVar5 = plVar4 + (ulonglong)uVar2 * 2;
  for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
    if (*plVar4 == param_2) {
      return 1;
    }
  }
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x11);
  if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) || (cVar3 = FUN_14507e6d0(), cVar3 != '\0')) &&
     (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    plVar4 = (longlong *)((ulonglong)uVar2 * 0x10 + *param_1);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      *(undefined1 *)(plVar4 + 1) = 0;
      *plVar4 = param_2;
      plVar4[1] = CONCAT71(uStack_f,uVar1);
      *(byte *)(param_1 + 2) = (*(byte *)(param_1 + 2) & 0xfc) != 0 | *(byte *)(param_1 + 2) & 0xfe;
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 14507e650 FUN_14507e650 body=125 status=ok
// SIG undefined FUN_14507e650(void)

undefined8 FUN_14507e650(longlong *param_1,longlong param_2)

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



// FUNCTION 14507e6d0 FUN_14507e6d0 body=205 status=ok
// SIG undefined FUN_14507e6d0(void)

undefined8 FUN_14507e6d0(longlong *param_1)

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
      goto LAB_14507e780;
    }
  }
  else {
    puVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
LAB_14507e780:
      *param_1 = (longlong)puVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14507e7a0 FUN_14507e7a0 body=240 status=ok
// SIG undefined FUN_14507e7a0(void)

undefined8 FUN_14507e7a0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  cVar2 = FUN_145080330(param_1,0x301);
  if (((cVar2 != '\0') && (cVar2 = FUN_145080330(param_1 + 0x18,0x35), cVar2 != '\0')) &&
     (cVar2 = FUN_145080330(param_1 + 0x30), cVar2 != '\0')) {
    local_res8 = 0x83;
    uStackX_c = CONCAT31(uStackX_c._1_3_,1);
    uVar3 = (CONCAT44(uStackX_c,0x83) & 0xff00000000) >> 0x20;
    uVar1 = *(uint *)(param_1 + 8 + uVar3 * 0x18);
    if (uVar1 != 0) {
      for (puVar4 = *(undefined8 **)
                     (*(longlong *)(param_1 + uVar3 * 0x18) + (0x83U % (ulonglong)uVar1) * 8);
          puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
        if (*(int *)(puVar4 + 1) == 0x83) goto LAB_14507e848;
      }
      puVar4 = (undefined8 *)0x0;
LAB_14507e848:
      if (puVar4 != (undefined8 *)0x0) goto LAB_14507e85d;
    }
    puVar4 = (undefined8 *)FUN_145080240(param_1,CONCAT44(uStackX_c,0x83));
    if (puVar4 != (undefined8 *)0x0) {
LAB_14507e85d:
      local_res8 = 0x42800000;
      FUN_1453649f0(puVar4,&local_res8);
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 14507e890 FUN_14507e890 body=866 status=ok
// SIG undefined FUN_14507e890(void)

/* WARNING: Removing unreachable block (ram,0x00014507ea66) */
/* WARNING: Removing unreachable block (ram,0x00014507e964) */
/* WARNING: Removing unreachable block (ram,0x00014507eb66) */

void FUN_14507e890(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uStack_50;
  
  plVar4 = param_1 + 10;
  lVar6 = 10;
  uVar9 = 0;
  do {
    if ((void *)*plVar4 != (void *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 0;
      AK::MemoryMgr::Free(0,(void *)*plVar4);
      *plVar4 = 0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
    }
    plVar4 = plVar4 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (*(uint *)(param_1 + 1) != 0) {
    plVar4 = *(longlong **)*param_1;
    uVar3 = uVar9;
    while (plVar4 == (longlong *)0x0) {
      uVar8 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar8;
      if (*(uint *)(param_1 + 1) <= uVar8) goto LAB_14507e9c2;
      plVar4 = (longlong *)((undefined8 *)*param_1)[uVar3];
    }
    do {
      plVar5 = (longlong *)*plVar4;
      uStack_50 = (uint)uVar3;
      plVar7 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        uVar2 = uVar3;
        do {
          uStack_50 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uStack_50;
          if (*(uint *)(param_1 + 1) <= uStack_50) break;
          plVar7 = *(longlong **)(*param_1 + uVar2 * 8);
        } while (plVar7 == (longlong *)0x0);
      }
      *(longlong **)(*param_1 + uVar3 * 8) = plVar5;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      if (plVar4 != (longlong *)0x0) {
        FUN_145364800(plVar4);
        AK::MemoryMgr::Free(0x10,plVar4);
      }
      if (plVar7 == (longlong *)0x0) break;
      uVar3 = (ulonglong)uStack_50;
      plVar4 = plVar7;
    } while( true );
  }
LAB_14507e9c2:
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  if (*(uint *)(param_1 + 4) != 0) {
    puVar1 = (undefined8 *)param_1[3];
    plVar4 = (longlong *)*puVar1;
    uVar3 = uVar9;
    while (plVar4 == (longlong *)0x0) {
      uVar8 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar8;
      if (*(uint *)(param_1 + 4) <= uVar8) goto LAB_14507eabd;
      plVar4 = (longlong *)puVar1[uVar3];
    }
    do {
      plVar5 = (longlong *)*plVar4;
      uStack_50 = (uint)uVar3;
      if (plVar5 == (longlong *)0x0) {
        uVar2 = uVar3;
        do {
          uStack_50 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uStack_50;
          if (*(uint *)(param_1 + 4) <= uStack_50) break;
          plVar5 = *(longlong **)(param_1[3] + uVar2 * 8);
        } while (plVar5 == (longlong *)0x0);
      }
      *(longlong *)(param_1[3] + uVar3 * 8) = *plVar4;
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      if (plVar4 != (longlong *)0x0) {
        FUN_145364800(plVar4);
        AK::MemoryMgr::Free(0x10,plVar4);
      }
      if (plVar5 == (longlong *)0x0) break;
      uVar3 = (ulonglong)uStack_50;
      plVar4 = plVar5;
    } while( true );
  }
LAB_14507eabd:
  if ((void *)param_1[3] != (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  if (*(uint *)(param_1 + 7) == 0) {
LAB_14507ebbd:
    if ((void *)param_1[6] != (void *)0x0) {
      *(undefined4 *)(param_1 + 7) = 0;
      AK::MemoryMgr::Free(0,(void *)param_1[6]);
      param_1[6] = 0;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    return;
  }
  puVar1 = (undefined8 *)param_1[6];
  plVar4 = (longlong *)*puVar1;
  while (plVar4 == (longlong *)0x0) {
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    if (*(uint *)(param_1 + 7) <= uVar8) goto LAB_14507ebbd;
    plVar4 = (longlong *)puVar1[uVar9];
  }
  do {
    plVar5 = (longlong *)*plVar4;
    uStack_50 = (uint)uVar9;
    if (plVar5 == (longlong *)0x0) {
      uVar3 = uVar9;
      do {
        uStack_50 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uStack_50;
        if (*(uint *)(param_1 + 7) <= uStack_50) break;
        plVar5 = *(longlong **)(param_1[6] + uVar3 * 8);
      } while (plVar5 == (longlong *)0x0);
    }
    *(longlong *)(param_1[6] + uVar9 * 8) = *plVar4;
    *(int *)(param_1 + 8) = (int)param_1[8] + -1;
    if (plVar4 != (longlong *)0x0) {
      FUN_145364800(plVar4);
      AK::MemoryMgr::Free(0x10,plVar4);
    }
    if (plVar5 == (longlong *)0x0) goto LAB_14507ebbd;
    uVar9 = (ulonglong)uStack_50;
    plVar4 = plVar5;
  } while( true );
}



// FUNCTION 14507ec00 FUN_14507ec00 body=180 status=ok
// SIG undefined FUN_14507ec00(void)

undefined8 FUN_14507ec00(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = param_2 >> 0x20 & 0xff;
  if ((int)uVar4 == 3) {
    uVar3 = FUN_1450765a0(DAT_14c790ff8,param_3,param_2 & 0xffffffff);
    return uVar3;
  }
  if ((int)uVar4 == 4) {
    uVar3 = FUN_14507ecc0(param_1,param_2 & 0xffffffff);
    return uVar3;
  }
  uVar1 = *(uint *)(param_1 + 8 + uVar4 * 0x18);
  if (uVar1 != 0) {
    for (puVar2 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar4 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if (*(int *)(puVar2 + 1) == (int)param_2) goto LAB_14507ec60;
    }
    puVar2 = (undefined8 *)0x0;
LAB_14507ec60:
    if (puVar2 != (undefined8 *)0x0) goto LAB_14507ec75;
  }
  puVar2 = (undefined8 *)FUN_145080240(param_1,param_2);
  if (puVar2 == (undefined8 *)0x0) {
    return 0xf;
  }
LAB_14507ec75:
  uVar3 = FUN_145364920(puVar2,param_3);
  return uVar3;
}



// FUNCTION 14507ecc0 FUN_14507ecc0 body=313 status=ok
// SIG undefined FUN_14507ecc0(void)

ulonglong FUN_14507ecc0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar3 = DAT_14c791060;
  do {
    while (iVar2 = *(int *)(lVar3 + 0x268), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
      if (*(int *)(lVar3 + 0x268) < 0) goto LAB_14507ecf7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar3 + 0x268);
    if (bVar6) {
      *(int *)(lVar3 + 0x268) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_14507ecf7:
  if (*(uint *)(lVar3 + 0x2b0) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(lVar3 + 0x2a8) +
                   ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar3 + 0x2b0)) * 8);
        plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_2) goto LAB_14507ed27;
    }
    plVar5 = (longlong *)0x0;
LAB_14507ed27:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x268);
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
LAB_14507ed94:
      if (plVar5 == (longlong *)0x0) {
        uVar4 = 0xf;
      }
      else {
        uVar4 = FUN_145356ea0(plVar5,param_3);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
          uVar4 = uVar4 & 0xffffffff;
        }
      }
      return uVar4;
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar3 + 0x268);
    if (bVar6) {
      *(int *)(lVar3 + 0x268) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x298))) {
        SetEvent(*(HANDLE *)(lVar3 + 0x2a0));
      }
      goto LAB_14507ed94;
    }
    iVar2 = *(int *)(lVar3 + 0x268);
  } while( true );
}



// FUNCTION 14507ee00 FUN_14507ee00 body=129 status=ok
// SIG undefined FUN_14507ee00(void)

undefined8 FUN_14507ee00(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar4 = param_2 >> 0x20 & 0xff;
  if ((int)uVar4 == 3) {
    uVar2 = FUN_145076640(DAT_14c790ff8,param_3);
    return uVar2;
  }
  if ((int)uVar4 == 4) {
    uVar2 = FUN_14507ee90(param_1,param_2 & 0xffffffff,param_3);
    return uVar2;
  }
  uVar1 = *(uint *)(param_1 + 8 + uVar4 * 0x18);
  if (uVar1 != 0) {
    for (puVar3 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar4 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      if (*(int *)(puVar3 + 1) == (int)param_2) goto LAB_14507ee54;
    }
    puVar3 = (undefined8 *)0x0;
LAB_14507ee54:
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = FUN_145364990(puVar3,param_3);
      return uVar2;
    }
  }
  return 0xf;
}



// FUNCTION 14507ee90 FUN_14507ee90 body=313 status=ok
// SIG undefined FUN_14507ee90(void)

ulonglong FUN_14507ee90(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar3 = DAT_14c791060;
  do {
    while (iVar2 = *(int *)(lVar3 + 0x268), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
      if (*(int *)(lVar3 + 0x268) < 0) goto LAB_14507eec7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar3 + 0x268);
    if (bVar6) {
      *(int *)(lVar3 + 0x268) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_14507eec7:
  if (*(uint *)(lVar3 + 0x2b0) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(lVar3 + 0x2a8) +
                   ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar3 + 0x2b0)) * 8);
        plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_2) goto LAB_14507eef7;
    }
    plVar5 = (longlong *)0x0;
LAB_14507eef7:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x268);
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
LAB_14507ef64:
      if (plVar5 == (longlong *)0x0) {
        uVar4 = 0xf;
      }
      else {
        uVar4 = FUN_145356f20(plVar5,param_3);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
          uVar4 = uVar4 & 0xffffffff;
        }
      }
      return uVar4;
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar3 + 0x268);
    if (bVar6) {
      *(int *)(lVar3 + 0x268) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x298))) {
        SetEvent(*(HANDLE *)(lVar3 + 0x2a0));
      }
      goto LAB_14507ef64;
    }
    iVar2 = *(int *)(lVar3 + 0x268);
  } while( true );
}



// FUNCTION 14507efd0 FUN_14507efd0 body=474 status=ok
// SIG undefined FUN_14507efd0(void)

ulonglong FUN_14507efd0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar3 = DAT_14c791060;
  if ((char)(param_2 >> 0x20) == '\x04') {
    do {
      while (iVar2 = *(int *)(lVar3 + 0x268), iVar2 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
        if (*(int *)(lVar3 + 0x268) < 0) goto LAB_14507f097;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
      }
      LOCK();
      bVar8 = iVar2 == *(int *)(lVar3 + 0x268);
      if (bVar8) {
        *(int *)(lVar3 + 0x268) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar8);
LAB_14507f097:
    if (*(uint *)(lVar3 + 0x2b0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      for (plVar7 = *(longlong **)
                     (*(longlong *)(lVar3 + 0x2a8) +
                     ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(lVar3 + 0x2b0)) * 8);
          plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]) {
        if ((int)plVar7[2] == (int)param_2) goto LAB_14507f0c7;
      }
      plVar7 = (longlong *)0x0;
LAB_14507f0c7:
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar2 = *(int *)(lVar3 + 0x268);
    do {
      if (iVar2 < 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
LAB_14507f134:
        if (plVar7 == (longlong *)0x0) {
          uVar6 = 0xf;
        }
        else {
          uVar4 = FUN_14507e590(plVar7 + 6,param_3);
          uVar6 = (ulonglong)uVar4;
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
            return uVar6;
          }
        }
        return uVar6;
      }
      LOCK();
      bVar8 = iVar2 == *(int *)(lVar3 + 0x268);
      if (bVar8) {
        *(int *)(lVar3 + 0x268) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar8) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x298))) {
          SetEvent(*(HANDLE *)(lVar3 + 0x2a0));
        }
        goto LAB_14507f134;
      }
      iVar2 = *(int *)(lVar3 + 0x268);
    } while( true );
  }
  uVar6 = param_2 >> 0x20 & 0xff;
  uVar4 = *(uint *)(param_1 + 8 + uVar6 * 0x18);
  if (uVar4 != 0) {
    for (puVar5 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar6 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar4) * 8); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)*puVar5) {
      if (*(int *)(puVar5 + 1) == (int)param_2) goto LAB_14507f027;
    }
    puVar5 = (undefined8 *)0x0;
LAB_14507f027:
    if (puVar5 != (undefined8 *)0x0) goto LAB_14507f03c;
  }
  puVar5 = (undefined8 *)FUN_145080240(param_1,param_2);
  if (puVar5 == (undefined8 *)0x0) {
    return 0xf;
  }
LAB_14507f03c:
  uVar6 = FUN_14507e590(puVar5 + 0xf,param_3);
  return uVar6;
}



// FUNCTION 14507f1b0 FUN_14507f1b0 body=442 status=ok
// SIG undefined FUN_14507f1b0(void)

ulonglong FUN_14507f1b0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar3 = DAT_14c791060;
  if ((char)(param_2 >> 0x20) == '\x04') {
    do {
      while (iVar2 = *(int *)(lVar3 + 0x268), iVar2 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
        if (*(int *)(lVar3 + 0x268) < 0) goto LAB_14507f25c;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
      }
      LOCK();
      bVar8 = iVar2 == *(int *)(lVar3 + 0x268);
      if (bVar8) {
        *(int *)(lVar3 + 0x268) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar8);
LAB_14507f25c:
    if (*(uint *)(lVar3 + 0x2b0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      for (plVar7 = *(longlong **)
                     (*(longlong *)(lVar3 + 0x2a8) +
                     ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(lVar3 + 0x2b0)) * 8);
          plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]) {
        if ((int)plVar7[2] == (int)param_2) goto LAB_14507f290;
      }
      plVar7 = (longlong *)0x0;
LAB_14507f290:
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar2 = *(int *)(lVar3 + 0x268);
    do {
      if (iVar2 < 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x270));
LAB_14507f2f4:
        if (plVar7 == (longlong *)0x0) {
          uVar5 = 0xf;
        }
        else {
          uVar4 = FUN_14507e650(plVar7 + 6,param_3);
          uVar5 = (ulonglong)uVar4;
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
            return uVar5;
          }
        }
        return uVar5;
      }
      LOCK();
      bVar8 = iVar2 == *(int *)(lVar3 + 0x268);
      if (bVar8) {
        *(int *)(lVar3 + 0x268) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar8) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x298))) {
          SetEvent(*(HANDLE *)(lVar3 + 0x2a0));
        }
        goto LAB_14507f2f4;
      }
      iVar2 = *(int *)(lVar3 + 0x268);
    } while( true );
  }
  uVar5 = param_2 >> 0x20 & 0xff;
  uVar4 = *(uint *)(param_1 + 8 + uVar5 * 0x18);
  if (uVar4 != 0) {
    for (puVar6 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar5 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar4) * 8); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      if (*(int *)(puVar6 + 1) == (int)param_2) goto LAB_14507f204;
    }
    puVar6 = (undefined8 *)0x0;
LAB_14507f204:
    if (puVar6 != (undefined8 *)0x0) {
      uVar5 = FUN_14507e650(puVar6 + 0xf,param_3);
      return uVar5;
    }
  }
  return 0xf;
}



// FUNCTION 14507f370 FUN_14507f370 body=205 status=ok
// SIG undefined FUN_14507f370(void)

undefined8
FUN_14507f370(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined4 local_res10 [4];
  undefined4 local_res20;
  
  uVar2 = param_2 >> 0x20 & 0xff;
  uVar1 = *(uint *)(param_1 + 8 + uVar2 * 0x18);
  local_res20 = param_4;
  if (uVar1 != 0) {
    for (puVar3 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar2 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      if (*(int *)(puVar3 + 1) == (int)param_2) goto LAB_14507f3c4;
    }
    puVar3 = (undefined8 *)0x0;
LAB_14507f3c4:
    if (puVar3 != (undefined8 *)0x0) goto LAB_14507f3dc;
  }
  puVar3 = (undefined8 *)FUN_145080240(param_4,param_2);
  if (puVar3 == (undefined8 *)0x0) {
    return 0x34;
  }
LAB_14507f3dc:
  if (puVar3[4] == 0) {
    local_res8[0] = 0;
    local_res10[0] = local_res20;
    uVar4 = FUN_145364af0(puVar3,param_3,local_res10,local_res8,param_5,param_6,param_7);
    return uVar4;
  }
  return 2;
}



// FUNCTION 14507f440 FUN_14507f440 body=288 status=ok
// SIG undefined FUN_14507f440(void)

void FUN_14507f440(longlong param_1,int param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined8 local_28;
  undefined2 local_20;
  
  local_28 = 0;
  plVar6 = (longlong *)(((longlong)param_2 + 5) * 0x10 + param_1);
  local_20 = 0;
  puVar5 = (ulonglong *)*plVar6;
  local_res10[0] = param_4;
  if (puVar5 != puVar5 + *(uint *)(plVar6 + 1)) {
    do {
      uVar2 = *puVar5;
      uVar3 = uVar2 >> 0x20 & 0xff;
      uVar1 = *(uint *)(param_1 + 8 + uVar3 * 0x18);
      if (uVar1 == 0) {
LAB_14507f4e4:
        puVar4 = (undefined8 *)FUN_145080240(param_1);
        if (puVar4 != (undefined8 *)0x0) goto LAB_14507f4f4;
      }
      else {
        for (puVar4 = *(undefined8 **)
                       (*(longlong *)(param_1 + uVar3 * 0x18) +
                       ((uVar2 & 0xffffffff) % (ulonglong)uVar1) * 8); puVar4 != (undefined8 *)0x0;
            puVar4 = (undefined8 *)*puVar4) {
          if (*(int *)(puVar4 + 1) == (int)uVar2) goto LAB_14507f4df;
        }
        puVar4 = (undefined8 *)0x0;
LAB_14507f4df:
        if (puVar4 == (undefined8 *)0x0) goto LAB_14507f4e4;
LAB_14507f4f4:
        if (puVar4[4] == 0) {
          local_res10[0] = local_res10[0] & 0xffffff00;
          local_res8[0] = param_4;
          FUN_145364af0(puVar4,param_3,local_res8,local_res10,&local_28,1,0);
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != (ulonglong *)(*plVar6 + (ulonglong)*(uint *)(plVar6 + 1) * 8));
  }
  return;
}



// FUNCTION 14507f560 FUN_14507f560 body=493 status=ok
// SIG undefined FUN_14507f560(void)

void FUN_14507f560(longlong param_1,ulonglong param_2,int param_3)

{
  uint5 *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint5 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  
  uVar5 = param_2 >> 0x20 & 0xff;
  uVar3 = *(uint *)(param_1 + 8 + uVar5 * 0x18);
  if (uVar3 != 0) {
    for (puVar6 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar5 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar3) * 8); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      if (*(int *)(puVar6 + 1) == (int)param_2) goto LAB_14507f5bf;
    }
    puVar6 = (undefined8 *)0x0;
LAB_14507f5bf:
    if (puVar6 != (undefined8 *)0x0) goto LAB_14507f5d5;
  }
  puVar6 = (undefined8 *)FUN_145080240(param_1,param_2);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
LAB_14507f5d5:
  plVar8 = (longlong *)(param_1 + 0x70);
  uVar5 = param_2 >> 0x20 & 0xff;
  lVar9 = 3;
  *(int *)((longlong)puVar6 + 0x1c) = param_3;
  do {
    puVar7 = (uint5 *)plVar8[-2];
    puVar1 = puVar7 + *(uint *)(plVar8 + -1);
    if (puVar7 != puVar1) {
      do {
        if ((ulonglong)*puVar7 == (uVar5 << 0x20 | param_2 & 0xffffffff)) {
          if (puVar7 < puVar1 + -1) {
            *(undefined8 *)puVar7 = *(undefined8 *)(puVar1 + -1);
          }
          *(int *)(plVar8 + -1) = (int)plVar8[-1] + -1;
          break;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar1);
    }
    puVar7 = (uint5 *)*plVar8;
    puVar1 = puVar7 + *(uint *)(plVar8 + 1);
    if (puVar7 != puVar1) {
      do {
        if ((ulonglong)*puVar7 == (uVar5 << 0x20 | param_2 & 0xffffffff)) {
          if (puVar7 < puVar1 + -1) {
            *(undefined8 *)puVar7 = *(undefined8 *)(puVar1 + -1);
          }
          *(int *)(plVar8 + 1) = (int)plVar8[1] + -1;
          break;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar1);
    }
    puVar7 = (uint5 *)plVar8[2];
    puVar1 = puVar7 + *(uint *)(plVar8 + 3);
    if (puVar7 != puVar1) {
      do {
        if ((ulonglong)*puVar7 == (uVar5 << 0x20 | param_2 & 0xffffffff)) {
          if (puVar7 < puVar1 + -1) {
            *(undefined8 *)puVar7 = *(undefined8 *)(puVar1 + -1);
          }
          *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
          break;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar1);
    }
    plVar8 = plVar8 + 6;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      if (param_3 != 0) {
        plVar8 = (longlong *)(((longlong)param_3 + 5) * 0x10 + param_1);
        uVar3 = *(uint *)(plVar8 + 1);
        if ((uVar3 < *(uint *)((longlong)plVar8 + 0xc)) ||
           ((cVar4 = FUN_1450805e0(plVar8), cVar4 != '\0' &&
            (uVar3 < *(uint *)((longlong)plVar8 + 0xc))))) {
          puVar2 = (ulonglong *)(*plVar8 + (ulonglong)*(uint *)(plVar8 + 1) * 8);
          *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) + 1;
          if (puVar2 != (ulonglong *)0x0) {
            *(undefined4 *)puVar2 = 0;
            *(undefined1 *)((longlong)puVar2 + 4) = 8;
            *puVar2 = param_2;
          }
        }
      }
      return;
    }
  } while( true );
}



// FUNCTION 14507f750 FUN_14507f750 body=492 status=ok
// SIG undefined FUN_14507f750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14507f750(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4,uint param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 auStack_30 [5];
  
  uVar4 = (ulonglong)param_5 * 0xc + 0xf;
  if (uVar4 <= (ulonglong)param_5 * 0xc) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_30[0] = 0x14507f795;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  uVar8 = 0;
  puVar1 = &stack0xfffffffffffffff8 + lVar2;
  if (param_5 < 4) {
    if (param_5 != 0) {
      lVar9 = 0;
      param_4 = param_4 - (longlong)puVar1;
      goto LAB_14507f845;
    }
  }
  else {
    param_4 = param_4 - (longlong)puVar1;
    puVar7 = (undefined4 *)(&stack0xfffffffffffffffc + lVar2);
    uVar3 = (param_5 - 4 >> 2) + 1;
    uVar4 = (ulonglong)uVar3;
    uVar8 = uVar3 * 4;
    lVar9 = (ulonglong)uVar3 * 4;
    do {
      puVar7[-1] = *(undefined4 *)(param_4 + -4 + (longlong)puVar7);
      *puVar7 = *(undefined4 *)(param_4 + (longlong)puVar7);
      puVar7[1] = 9;
      puVar7[2] = *(undefined4 *)(param_4 + 8 + (longlong)puVar7);
      puVar7[3] = *(undefined4 *)(param_4 + 0xc + (longlong)puVar7);
      puVar7[4] = 9;
      puVar7[5] = *(undefined4 *)(param_4 + 0x14 + (longlong)puVar7);
      puVar7[6] = *(undefined4 *)(param_4 + 0x18 + (longlong)puVar7);
      puVar7[7] = 9;
      puVar7[8] = *(undefined4 *)(param_4 + 0x20 + (longlong)puVar7);
      puVar7[9] = *(undefined4 *)(param_4 + 0x24 + (longlong)puVar7);
      puVar7[10] = 9;
      puVar7 = puVar7 + 0xc;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (uVar8 < param_5) {
LAB_14507f845:
      uVar4 = (ulonglong)(param_5 - uVar8);
      puVar7 = (undefined4 *)(puVar1 + (lVar9 * 3 + 1) * 4);
      do {
        puVar7[-1] = *(undefined4 *)((longlong)puVar7 + param_4 + -4);
        *puVar7 = *(undefined4 *)(param_4 + (longlong)puVar7);
        puVar7[1] = 9;
        puVar7 = puVar7 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  if (((((char)((ulonglong)param_2 >> 0x20) == '\b') || ((int)param_2 == 0)) ||
      ((char)(param_3 >> 0x20) == '\b')) || ((int)param_3 == 0)) {
    return 0x1f;
  }
  uVar4 = param_3 >> 0x20 & 0xff;
  if (*(uint *)(g_pGameSyncMgr + uVar4 * 0x18 + 8) != 0) {
    for (puVar5 = *(undefined8 **)
                   (*(longlong *)(g_pGameSyncMgr + uVar4 * 0x18) +
                   ((param_3 & 0xffffffff) % (ulonglong)*(uint *)(g_pGameSyncMgr + uVar4 * 0x18 + 8)
                   ) * 8); puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
      if (*(int *)(puVar5 + 1) == (int)param_3) goto LAB_14507f8e0;
    }
    puVar5 = (undefined8 *)0x0;
LAB_14507f8e0:
    if (puVar5 != (undefined8 *)0x0) goto LAB_14507f8f8;
  }
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x14507f8f0;
  puVar5 = (undefined8 *)FUN_145080240(g_pGameSyncMgr,param_3);
  if (puVar5 == (undefined8 *)0x0) {
    return 0x34;
  }
LAB_14507f8f8:
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x14507f909;
  uVar6 = FUN_145363860(param_2,puVar5,puVar1,param_5);
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x14507f914;
  FUN_145364e40(puVar5,uVar6);
  return 1;
}



// FUNCTION 14507f940 FUN_14507f940 body=192 status=ok
// SIG undefined FUN_14507f940(void)

undefined8
FUN_14507f940(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (0 < *(short *)(param_1 + 0x48)) {
    return 2;
  }
  uVar2 = param_2 >> 0x20 & 0xff;
  uVar1 = *(uint *)(param_1 + 8 + uVar2 * 0x18);
  if (uVar1 != 0) {
    for (puVar4 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar2 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      if (*(int *)(puVar4 + 1) == (int)param_2) goto LAB_14507f9b8;
    }
    puVar4 = (undefined8 *)0x0;
LAB_14507f9b8:
    if (puVar4 != (undefined8 *)0x0) {
      *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 1;
      uVar3 = FUN_145364d20(puVar4,param_3,param_4,param_5);
      *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + -1;
      return uVar3;
    }
  }
  return 0xf;
}



// FUNCTION 14507fa00 FUN_14507fa00 body=415 status=ok
// SIG undefined FUN_14507fa00(void)

ulonglong FUN_14507fa00(longlong param_1,ulonglong param_2,longlong *param_3,undefined4 *param_4,
                       longlong *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 local_res10 [2];
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((char)(param_2 >> 0x20) == '\x04') {
    uVar6 = FUN_14507fba0();
    return uVar6;
  }
  uVar6 = param_2 >> 0x20 & 0xff;
  uVar1 = *(uint *)(param_1 + 8 + uVar6 * 0x18);
  if (uVar1 != 0) {
    for (puVar2 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar6 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8);
        (puVar7 = (undefined8 *)0x0, puVar2 != (undefined8 *)0x0 &&
        (puVar7 = puVar2, *(int *)(puVar2 + 1) != (int)param_2)); puVar2 = (undefined8 *)*puVar2) {
    }
    if (puVar7 != (undefined8 *)0x0) {
      if ((*(int *)((longlong)puVar7 + 0x1c) != 0) || (puVar7[4] != 0)) {
        if (puVar7[4] != 0) {
          FUN_14507fa00(param_1,*(undefined8 *)(puVar7[4] + 0x28),param_3,param_4,param_5);
          lVar3 = puVar7[4];
          local_54 = *param_4;
          local_58 = 0;
          uVar8 = 0;
          if (*(longlong *)(lVar3 + 8) != 0) {
            local_res10[0] = *(undefined4 *)(lVar3 + 0x18);
            FUN_1450737c0(lVar3 + 8,local_54,local_res10,&local_58);
            *(undefined4 *)(lVar3 + 0x18) = local_res10[0];
            uVar8 = local_58;
          }
          *param_4 = uVar8;
          return 1;
        }
        if (*param_3 == 0) {
          return 0xf;
        }
        FUN_1450d24c0();
      }
      if (param_5 == (longlong *)0x0) {
        local_50 = *param_3;
        lStack_48 = param_3[1];
        param_5 = &local_50;
        local_40 = param_3[2];
        lStack_38 = param_3[3];
        local_30 = (undefined4)param_3[4];
        uStack_2c = *(undefined4 *)((longlong)param_3 + 0x24);
        uStack_28 = (undefined4)param_3[5];
        uStack_24 = *(undefined4 *)((longlong)param_3 + 0x2c);
      }
      else if (param_5 != param_3) {
        lVar3 = param_3[1];
        *param_5 = *param_3;
        param_5[1] = lVar3;
        lVar3 = param_3[3];
        param_5[2] = param_3[2];
        param_5[3] = lVar3;
        uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
        lVar3 = param_3[5];
        uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
        *(int *)(param_5 + 4) = (int)param_3[4];
        *(undefined4 *)((longlong)param_5 + 0x24) = uVar8;
        *(int *)(param_5 + 5) = (int)lVar3;
        *(undefined4 *)((longlong)param_5 + 0x2c) = uVar4;
      }
      bVar5 = FUN_145364aa0(puVar7,param_5,param_4);
      return (ulonglong)((bVar5 ^ 1) * 2 + 1);
    }
  }
  return 0xf;
}



// FUNCTION 14507fba0 FUN_14507fba0 body=426 status=ok
// SIG undefined FUN_14507fba0(void)

int FUN_14507fba0(undefined8 param_1,uint param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar7 = DAT_14c791060;
  do {
    while (iVar9 = *(int *)(lVar7 + 0x268), iVar9 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x270));
      if (*(int *)(lVar7 + 0x268) < 0) goto LAB_14507fbe7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x270));
    }
    LOCK();
    bVar11 = iVar9 == *(int *)(lVar7 + 0x268);
    if (bVar11) {
      *(int *)(lVar7 + 0x268) = iVar9 + 1;
    }
    UNLOCK();
  } while (!bVar11);
LAB_14507fbe7:
  if (*(uint *)(lVar7 + 0x2b0) == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    for (plVar10 = *(longlong **)
                    (*(longlong *)(lVar7 + 0x2a8) +
                    ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar7 + 0x2b0)) * 8);
        plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[1]) {
      if (*(uint *)(plVar10 + 2) == param_2) goto LAB_14507fc17;
    }
    plVar10 = (longlong *)0x0;
LAB_14507fc17:
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0x14) = *(int *)((longlong)plVar10 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar9 = *(int *)(lVar7 + 0x268);
  do {
    if (iVar9 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x270));
LAB_14507fc84:
      if (plVar10 == (longlong *)0x0) {
        iVar9 = 0xf;
      }
      else {
        if (param_5 == (undefined8 *)0x0) {
          local_48 = *param_3;
          uStack_40 = param_3[1];
          param_5 = &local_48;
          local_38 = param_3[2];
          uStack_30 = param_3[3];
          local_28 = *(undefined4 *)(param_3 + 4);
          uStack_24 = *(undefined4 *)((longlong)param_3 + 0x24);
          uStack_20 = *(undefined4 *)(param_3 + 5);
          uStack_1c = *(undefined4 *)((longlong)param_3 + 0x2c);
        }
        else if (param_5 != param_3) {
          uVar6 = param_3[1];
          *param_5 = *param_3;
          param_5[1] = uVar6;
          uVar6 = param_3[3];
          param_5[2] = param_3[2];
          param_5[3] = uVar6;
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x24);
          uVar4 = *(undefined4 *)(param_3 + 5);
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_3 + 4);
          *(undefined4 *)((longlong)param_5 + 0x24) = uVar3;
          *(undefined4 *)(param_5 + 5) = uVar4;
          *(undefined4 *)((longlong)param_5 + 0x2c) = uVar5;
        }
        bVar8 = FUN_145357010(plVar10,param_5,param_4);
        iVar9 = (bVar8 ^ 1) * 2 + 1;
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      return iVar9;
    }
    LOCK();
    bVar11 = iVar9 == *(int *)(lVar7 + 0x268);
    if (bVar11) {
      *(int *)(lVar7 + 0x268) = iVar9 + -1;
    }
    UNLOCK();
    if (bVar11) {
      if ((iVar9 + -1 == 0) && (0 < *(int *)(lVar7 + 0x298))) {
        SetEvent(*(HANDLE *)(lVar7 + 0x2a0));
      }
      goto LAB_14507fc84;
    }
    iVar9 = *(int *)(lVar7 + 0x268);
  } while( true );
}



// FUNCTION 14507fd50 FUN_14507fd50 body=135 status=ok
// SIG undefined FUN_14507fd50(void)

undefined8 FUN_14507fd50(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [4];
  undefined4 local_res18;
  
  uVar2 = param_2 >> 0x20 & 0xff;
  uVar1 = *(uint *)(param_1 + 8 + uVar2 * 0x18);
  local_res18 = param_3;
  if (uVar1 != 0) {
    for (puVar3 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar2 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      if (*(int *)(puVar3 + 1) == (int)param_2) goto LAB_14507fda0;
    }
    puVar3 = (undefined8 *)0x0;
LAB_14507fda0:
    if (puVar3 != (undefined8 *)0x0) goto LAB_14507fdb8;
  }
  puVar3 = (undefined8 *)FUN_145080240(param_3,param_2);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
LAB_14507fdb8:
  local_res8[0] = local_res18;
  FUN_1453649f0(puVar3,local_res8);
  return 1;
}



// FUNCTION 14507fde0 FUN_14507fde0 body=95 status=ok
// SIG undefined FUN_14507fde0(void)

undefined8 FUN_14507fde0(longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar2 = param_2 >> 0x20 & 0xff;
  uVar1 = *(uint *)(param_1 + 8 + uVar2 * 0x18);
  if (uVar1 != 0) {
    for (puVar3 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar2 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      if (*(int *)(puVar3 + 1) == (int)param_2) goto LAB_14507fe21;
    }
    puVar3 = (undefined8 *)0x0;
LAB_14507fe21:
    if (puVar3 != (undefined8 *)0x0) {
      *param_3 = *(undefined4 *)(puVar3 + 0xe);
      return 1;
    }
  }
  *param_3 = 0;
  return 0xf;
}



// FUNCTION 14507fe40 FUN_14507fe40 body=94 status=ok
// SIG undefined FUN_14507fe40(void)

ulonglong FUN_14507fe40(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint local_res18 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  
  local_res20 = (undefined4)param_3;
  if ((char)(param_3 >> 0x20) == '\x03') {
    uVar2 = FUN_145076420(DAT_14c790ff8,param_3 & 0xffffffff);
    return uVar2;
  }
  uStackX_24 = CONCAT31(uStackX_24._1_3_,2);
  uVar2 = 0;
  iVar1 = FUN_14507fa00(param_1,CONCAT44(uStackX_24,local_res20),param_2,local_res18,0);
  if (iVar1 == 1) {
    uVar2 = (ulonglong)local_res18[0];
  }
  return uVar2;
}



// FUNCTION 14507fea0 FUN_14507fea0 body=127 status=ok
// SIG undefined FUN_14507fea0(void)

undefined8 FUN_14507fea0(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar2 = param_2 >> 0x20 & 0xff;
  uVar1 = *(uint *)(param_1 + 8 + uVar2 * 0x18);
  if (uVar1 != 0) {
    for (puVar3 = *(undefined8 **)
                   (*(longlong *)(param_1 + uVar2 * 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      if (*(int *)(puVar3 + 1) == (int)param_2) goto LAB_14507fef0;
    }
    puVar3 = (undefined8 *)0x0;
LAB_14507fef0:
    if (puVar3 != (undefined8 *)0x0) goto LAB_14507ff02;
  }
  puVar3 = (undefined8 *)FUN_145080240(param_1,param_2);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
LAB_14507ff02:
  puVar3[2] = *param_3;
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_3 + 1);
  return 1;
}



// FUNCTION 14507ff20 FUN_14507ff20 body=399 status=ok
// SIG undefined FUN_14507ff20(void)

void FUN_14507ff20(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4,
                  undefined8 param_5,float *param_6)

{
  undefined4 *puVar1;
  float fVar2;
  longlong *plVar3;
  float fVar4;
  float local_res10 [2];
  undefined4 local_res18 [4];
  float local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  
  if (((longlong *)*param_2 != param_3) && (*(int *)(*(longlong *)*param_2 + 8) == param_4)) {
    *param_6 = 0.0;
    do {
      local_res10[0] = 0.0;
      puVar1 = *(undefined4 **)*param_2;
      local_64 = *puVar1;
      uStack_60 = CONCAT31(uStack_60._1_3_,*(undefined1 *)((longlong)puVar1 + 0xd));
      FUN_14507fa00(param_1,CONCAT44(uStack_60,local_64),param_5,local_res10,0);
      fVar2 = local_res10[0];
      if (local_res10[0] == (float)puVar1[0xc]) {
        fVar4 = (float)puVar1[0xe];
LAB_14507fff1:
        if (fVar4 == 3.4028235e+38) goto LAB_14507fff6;
      }
      else {
        if (local_res10[0] == (float)puVar1[0xd]) {
          fVar4 = (float)puVar1[0xf];
          goto LAB_14507fff1;
        }
LAB_14507fff6:
        if (*(longlong *)(puVar1 + 6) == 0) {
          fVar4 = 0.0;
        }
        else {
          local_res18[0] = puVar1[10];
          local_68 = 0.0;
          FUN_1450737c0(puVar1 + 6,local_res10[0],local_res18,&local_68);
          puVar1[10] = local_res18[0];
          fVar4 = local_68;
        }
        puVar1[(ulonglong)*(byte *)(puVar1 + 5) + 0xc] = fVar2;
        puVar1[(ulonglong)*(byte *)(puVar1 + 5) + 0xe] = fVar4;
        *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) ^ 1;
      }
      *param_6 = fVar4 + *param_6;
      plVar3 = (longlong *)(*param_2 + 8);
      *param_2 = (longlong)plVar3;
    } while ((plVar3 != param_3) && (*(int *)(*plVar3 + 8) == param_4));
  }
  return;
}



// FUNCTION 1450800b0 FUN_1450800b0 body=241 status=ok
// SIG undefined FUN_1450800b0(void)

float FUN_1450800b0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float local_res10 [4];
  undefined4 local_res20;
  undefined4 uStackX_24;
  float local_38 [12];
  
  local_res20 = *param_2;
  uStackX_24 = CONCAT31(uStackX_24._1_3_,*(undefined1 *)((longlong)param_2 + 0xd));
  local_res10[0] = 0.0;
  FUN_14507fa00(param_1,CONCAT44(uStackX_24,local_res20),param_3,local_res10,0);
  fVar1 = local_res10[0];
  if (local_res10[0] == (float)param_2[0xc]) {
    fVar2 = (float)param_2[0xe];
  }
  else {
    if (local_res10[0] != (float)param_2[0xd]) goto LAB_145080124;
    fVar2 = (float)param_2[0xf];
  }
  if (fVar2 != 3.4028235e+38) {
    return fVar2;
  }
LAB_145080124:
  local_38[0] = 0.0;
  if (*(longlong *)(param_2 + 6) != 0) {
    local_res20 = param_2[10];
    local_38[0] = 0.0;
    FUN_1450737c0(param_2 + 6,local_res10[0],&local_res20,local_38);
    param_2[10] = local_res20;
  }
  param_2[(ulonglong)*(byte *)(param_2 + 5) + 0xc] = fVar1;
  param_2[(ulonglong)*(byte *)(param_2 + 5) + 0xe] = local_38[0];
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) ^ 1;
  return local_38[0];
}



// FUNCTION 1450801b0 FUN_1450801b0 body=142 status=ok
// SIG undefined FUN_1450801b0(void)

ulonglong FUN_1450801b0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  if ((char)(param_2 >> 0x20) == '\x04') {
    uVar3 = FUN_14507e140(DAT_14c791028);
    return uVar3;
  }
  if (0 < *(short *)(param_1 + 0x48)) {
    return param_2 >> 0x20;
  }
  uVar3 = param_2 >> 0x20 & 0xff;
  *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 1;
  uVar2 = *(uint *)(param_1 + 8 + uVar3 * 0x18);
  if (uVar2 != 0) {
    lVar1 = uVar3 * 0x18;
    uVar3 = (param_2 & 0xffffffff) / (ulonglong)uVar2;
    for (puVar4 = *(undefined8 **)
                   (*(longlong *)(param_1 + lVar1) + ((param_2 & 0xffffffff) % (ulonglong)uVar2) * 8
                   ); puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
      if (*(int *)(puVar4 + 1) == (int)param_2) goto LAB_145080210;
    }
    puVar4 = (undefined8 *)0x0;
LAB_145080210:
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = FUN_145364dd0(puVar4,param_3);
    }
  }
  *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + -1;
  return uVar3;
}



// FUNCTION 145080240 FUN_145080240 body=240 status=ok
// SIG undefined FUN_145080240(void)

undefined8 * FUN_145080240(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x0;
  bVar3 = (byte)((ulonglong)param_2 >> 0x20);
  if ((bVar3 != 8) && ((int)param_2 != 0)) {
    pvVar4 = AK::MemoryMgr::Malloc(0x10,0x90);
    if (pvVar4 != (void *)0x0) {
      puVar5 = (undefined8 *)FUN_1453648c0(pvVar4,param_2);
      if (puVar5 != (undefined8 *)0x0) {
        plVar1 = (longlong *)(param_1 + (ulonglong)bVar3 * 0x18);
        if ((*(uint *)(plVar1 + 1) == 0) ||
           (0.9 < (float)*(uint *)(plVar1 + 2) / (float)*(uint *)(plVar1 + 1))) {
          FUN_1450803b0(plVar1);
        }
        if (*(uint *)(plVar1 + 1) == 0) {
          FUN_145364800(puVar5);
          AK::MemoryMgr::Free(0x10,puVar5);
          return (undefined8 *)0x0;
        }
        uVar2 = (ulonglong)*(uint *)(puVar5 + 1) % (ulonglong)*(uint *)(plVar1 + 1);
        *puVar5 = *(undefined8 *)(*plVar1 + uVar2 * 8);
        *(undefined8 **)(*plVar1 + uVar2 * 8) = puVar5;
        *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      }
    }
  }
  return puVar5;
}



// FUNCTION 145080330 FUN_145080330 body=114 status=ok
// SIG undefined FUN_145080330(void)

undefined8 FUN_145080330(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((*(uint *)(param_1 + 1) <= param_2) && (*(uint *)((longlong)param_1 + 0xc) < param_2)) {
    uVar2 = FUN_145080530(param_1,param_2 - *(uint *)((longlong)param_1 + 0xc));
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  uVar3 = uVar4;
  if (param_2 != 0) {
    do {
      uVar1 = (int)uVar3 + 1;
      uVar4 = (ulonglong)uVar1;
      *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
      uVar3 = uVar4;
    } while (uVar1 < *(uint *)(param_1 + 1));
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 1450803b0 FUN_1450803b0 body=377 status=ok
// SIG undefined FUN_1450803b0(void)

undefined8 FUN_1450803b0(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  
  uVar10 = 0;
  puVar13 = &DAT_149c23840;
  do {
    uVar1 = *puVar13;
    uVar11 = (ulonglong)uVar1;
    if (param_2 < uVar1) {
      if (uVar1 == 0) {
        return 2;
      }
      uVar10 = *(uint *)(param_1 + 1);
      uVar15 = (ulonglong)uVar10;
      puVar4 = (undefined8 *)*param_1;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      param_1[1] = 0;
      *param_1 = 0;
      pvVar8 = AK::MemoryMgr::Malloc(0,uVar11 * 8);
      pvVar5 = (void *)*param_1;
      if (pvVar8 == (void *)0x0) {
        if (pvVar5 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar5);
        }
        *param_1 = (longlong)puVar4;
        uVar9 = 2;
        *(uint *)(param_1 + 1) = uVar10;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      }
      else {
        if ((pvVar5 != (void *)0x0) && (pvVar5 != pvVar8)) {
          AK::MemoryMgr::Free(0,pvVar5);
        }
        *param_1 = (longlong)pvVar8;
        *(uint *)((longlong)param_1 + 0xc) = uVar1;
        uVar12 = uVar11;
        do {
          uVar3 = *(uint *)(param_1 + 1);
          if (uVar3 < (uint)uVar12) {
            *(uint *)(param_1 + 1) = uVar3 + 1;
            puVar14 = (undefined8 *)(*param_1 + (ulonglong)uVar3 * 8);
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = 0;
              uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        puVar14 = puVar4;
        if (uVar10 != 0) {
          do {
            puVar7 = (undefined8 *)*puVar14;
            while (puVar7 != (undefined8 *)0x0) {
              puVar6 = (undefined8 *)*puVar7;
              *puVar7 = *(undefined8 *)
                         (*param_1 + ((ulonglong)*(uint *)(puVar7 + 1) % (ulonglong)uVar1) * 8);
              *(undefined8 **)(*param_1 + ((ulonglong)*(uint *)(puVar7 + 1) % (ulonglong)uVar1) * 8)
                   = puVar7;
              puVar7 = puVar6;
            }
            uVar15 = uVar15 - 1;
            puVar14 = puVar14 + 1;
          } while (uVar15 != 0);
        }
        if (puVar4 != (undefined8 *)0x0) {
          AK::MemoryMgr::Free(0,puVar4);
        }
        uVar9 = 1;
      }
      return uVar9;
    }
    uVar10 = uVar10 + 1;
    puVar13 = puVar13 + 1;
  } while (uVar10 < 0x1b);
  return 2;
}



// FUNCTION 145080530 FUN_145080530 body=170 status=ok
// SIG undefined FUN_145080530(void)

undefined8 FUN_145080530(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1450805e0 FUN_1450805e0 body=205 status=ok
// SIG undefined FUN_1450805e0(void)

undefined8 FUN_1450805e0(longlong *param_1)

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
      goto LAB_145080690;
    }
  }
  else {
    puVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (puVar4 != (undefined8 *)0x0) {
LAB_145080690:
      *param_1 = (longlong)puVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450806b0 FUN_1450806b0 body=140 status=ok
// SIG undefined FUN_1450806b0(void)

void FUN_1450806b0(int *param_1)

{
  int iVar1;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if (*param_1 != 0) {
    local_res8.QuadPart = 0;
    local_res10[0].QuadPart = 0;
    QueryPerformanceCounter(&local_res8);
    local_res8.QuadPart = local_res8.QuadPart + (longlong)(DAT_14c79c4d4 * 0.01);
    iVar1 = *param_1;
    while ((iVar1 != 0 &&
           (QueryPerformanceCounter(local_res10), local_res10[0].QuadPart <= local_res8.QuadPart)))
    {
      iVar1 = *param_1;
    }
    iVar1 = *param_1;
    while (iVar1 != 0) {
      Sleep(1);
      iVar1 = *param_1;
    }
  }
  return;
}



// FUNCTION 145080740 FUN_145080740 body=86 status=ok
// SIG undefined FUN_145080740(void)

undefined8 * FUN_145080740(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_2;
  do {
    while (iVar2 = *param_2, iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 2));
      if (*param_2 < 0) {
        return param_1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 2));
    }
    LOCK();
    iVar1 = *param_2;
    if (iVar2 == iVar1) {
      *param_2 = iVar2 + 1;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
  return param_1;
}



// FUNCTION 1450807a0 FUN_1450807a0 body=106 status=ok
// SIG undefined FUN_1450807a0(void)

undefined8 * FUN_1450807a0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  
  *param_1 = &PTR_FUN_149c23928;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[8] = param_2;
  *(undefined4 *)(param_1 + 7) = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x60);
    if ((uVar1 < 2) && (*(char *)(param_2 + 100) != '\0')) {
      *(uint *)(param_2 + 0x60) = uVar1 + 1;
      if ((1 < uVar1 + 1) || (*(char *)(param_2 + 100) == '\0')) {
        FUN_145355090(param_2);
        return param_1;
      }
    }
    else {
      *(uint *)(param_2 + 0x60) = uVar1 + 1;
    }
  }
  return param_1;
}



// FUNCTION 145080810 FUN_145080810 body=137 status=ok
// SIG undefined FUN_145080810(void)

void FUN_145080810(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)param_1[8];
  *param_1 = &PTR_FUN_149c23928;
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar1 + 0xc) < 2) && (*(char *)((longlong)puVar1 + 100) != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar3 = *(uint *)(puVar1 + 0xc) - 1;
    *(uint *)(puVar1 + 0xc) = uVar3;
    if ((uVar3 == 0) || (((bVar2 && (uVar3 < 2)) && (*(char *)((longlong)puVar1 + 100) != '\0')))) {
      FUN_1453550a0(puVar1);
    }
    if (*(int *)(puVar1 + 0xc) == 0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(4,puVar1);
    }
  }
  if (*(longlong *)((longlong)param_1 + 0x1c) != 0) {
    FUN_144d4a460();
  }
  return;
}



// FUNCTION 1450808a0 FUN_1450808a0 body=22 status=ok
// SIG undefined FUN_1450808a0(void)

undefined8 FUN_1450808a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x58);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1450808c0 FUN_1450808c0 body=386 status=ok
// SIG undefined FUN_1450808c0(void)

void FUN_1450808c0(longlong param_1,int param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(short *)(lVar1 + 0x34) == 0x503) {
    if ((param_2 - 0x1000000U & 0xfeffffff) == 0) {
      if ((param_4 != '\0') && (*(undefined8 *)(lVar1 + 0x40) = 0, param_2 == 0x2000000)) {
        FUN_145082f40(DAT_14c790fd8);
        return;
      }
    }
    else if (((param_2 + 0xfc000000U & 0xfbffffff) == 0) && (param_4 != '\0')) {
      *(undefined8 *)(lVar1 + 0x48) = 0;
      lVar5 = DAT_14c790fd8;
      if (param_2 == 0x4000000) {
        puVar7 = *(undefined8 **)(DAT_14c790fd8 + 0x38);
        puVar4 = (undefined8 *)0x0;
        while (puVar6 = puVar7, puVar6 != (undefined8 *)0x0) {
          lVar2 = puVar6[2];
          lVar3 = *(longlong *)(lVar2 + 8);
          if (lVar2 == param_1) {
            iVar8 = 0;
            if (*(short *)(lVar3 + 0x34) == 0x503) {
              iVar8 = *(int *)(lVar3 + 0xe8) + -1;
              *(undefined4 *)(lVar3 + 0xe8) = 0;
            }
            FUN_145083510(lVar5,*(undefined4 *)(lVar3 + 0x30),lVar2,iVar8);
            if (puVar6 == *(undefined8 **)(lVar5 + 0x38)) {
              *(undefined8 *)(lVar5 + 0x38) = *puVar6;
            }
            else {
              *puVar4 = *puVar6;
            }
            if (puVar6 == *(undefined8 **)(lVar5 + 0x40)) {
              *(undefined8 **)(lVar5 + 0x40) = puVar4;
            }
            *puVar6 = *(undefined8 *)(lVar5 + 0x48);
            *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + -1;
            *(undefined8 **)(lVar5 + 0x48) = puVar6;
            goto LAB_145080a05;
          }
          puVar4 = puVar6;
          puVar7 = (undefined8 *)*puVar6;
        }
        for (puVar4 = *(undefined8 **)(DAT_14c790fd8 + 0x60); puVar4 != (undefined8 *)0x0;
            puVar4 = (undefined8 *)*puVar4) {
          lVar5 = puVar4[2];
          if (lVar5 == param_1) {
            if (*(short *)(*(longlong *)(lVar5 + 8) + 0x34) == 0x503) {
              *(int *)(lVar5 + 0x34) =
                   *(int *)(lVar5 + 0x34) + *(int *)(*(longlong *)(lVar5 + 8) + 0xe8);
            }
            else {
              *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
            }
            break;
          }
        }
      }
LAB_145080a05:
      *(undefined4 *)(lVar1 + 0xe8) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 145080a50 FUN_145080a50 body=52 status=ok
// SIG undefined FUN_145080a50(void)

undefined8 FUN_145080a50(undefined8 param_1,ulonglong param_2)

{
  FUN_145080810();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 145080a90 FUN_145080a90 body=165 status=ok
// SIG undefined FUN_145080a90(void)

longlong FUN_145080a90(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_1450735a0(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  return param_1;
}



// FUNCTION 145080b40 FUN_145080b40 body=65 status=ok
// SIG undefined FUN_145080b40(void)

void FUN_145080b40(longlong param_1)

{
  if (*(void **)(param_1 + 0xc0) != (void *)0x0) {
    *(undefined4 *)(param_1 + 200) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  return;
}



// FUNCTION 145080b90 FUN_145080b90 body=270 status=ok
// SIG undefined FUN_145080b90(void)

undefined4 FUN_145080b90(longlong param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar7 = DAT_14c79108c;
  uVar6 = (ulonglong)DAT_14c79108c;
  pvVar1 = AK::MemoryMgr::Malloc(0x10,uVar6);
  *(void **)(param_1 + 0x20) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    uVar5 = 2;
  }
  else {
    LOCK();
    *(void **)(param_1 + 0x10) = pvVar1;
    UNLOCK();
    LOCK();
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    UNLOCK();
    *(uint *)(param_1 + 0x30) = uVar7;
    *(ulonglong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + uVar6;
    puVar2 = AK::MemoryMgr::Malloc(0,0x300);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x58) = 0x20;
      *(undefined8 **)(param_1 + 0x48) = puVar2;
      uVar7 = uVar4;
      do {
        puVar3 = puVar2;
        uVar7 = uVar7 + 1;
        *puVar3 = puVar3 + 3;
        puVar2 = puVar3 + 3;
      } while (uVar7 < *(uint *)(param_1 + 0x58));
      *puVar3 = 0;
      puVar2 = AK::MemoryMgr::Malloc(0,0x300);
      *(undefined8 **)(param_1 + 0x78) = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(param_1 + 0x80) = 0x20;
        *(undefined8 **)(param_1 + 0x70) = puVar2;
        do {
          puVar3 = puVar2;
          uVar4 = uVar4 + 1;
          *puVar3 = puVar3 + 3;
          puVar2 = puVar3 + 3;
        } while (uVar4 < *(uint *)(param_1 + 0x80));
        *puVar3 = 0;
        uVar5 = 1;
        goto LAB_145080c7f;
      }
    }
    uVar5 = 0x34;
  }
LAB_145080c7f:
  QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0xa0));
  return uVar5;
}



// FUNCTION 145080ca0 FUN_145080ca0 body=544 status=ok
// SIG undefined FUN_145080ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145080ca0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_c8 [20];
  undefined4 local_78 [20];
  
  FUN_145083290();
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  while (puVar6 != (undefined8 *)0x0) {
    plVar3 = (longlong *)puVar6[2];
    local_c8[0] = 0;
    if (*(short *)(plVar3[1] + 0x34) == 0x403) {
LAB_145080d12:
      (**(code **)(*(longlong *)plVar3[1] + 0x50))((longlong *)plVar3[1],local_c8);
    }
    else if (*(short *)(plVar3[1] + 0x34) == 0x503) {
      FUN_1453726c0();
      goto LAB_145080d12;
    }
    FUN_1450b28b0(DAT_14c790fc0,(int)plVar3[6]);
    puVar4 = (undefined8 *)*puVar6;
    puVar7 = puVar4;
    if (puVar6 == *(undefined8 **)(param_1 + 0x60)) {
      *(undefined8 **)(param_1 + 0x60) = puVar4;
      puVar7 = (undefined8 *)_DAT_00000000;
    }
    _DAT_00000000 = puVar7;
    if (puVar6 == *(undefined8 **)(param_1 + 0x68)) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *puVar6 = *(undefined8 *)(param_1 + 0x70);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    plVar5 = (longlong *)plVar3[1];
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 0x18))();
    }
    (**(code **)(*plVar3 + 8))(plVar3,0);
    AK::MemoryMgr::Free(0,plVar3);
    puVar6 = puVar4;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  do {
    if (puVar6 == (undefined8 *)0x0) {
      if (*(void **)(param_1 + 0x20) != (void *)0x0) {
        AK::MemoryMgr::Free(0x10,*(void **)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      FUN_145084d30(param_1 + 0x38);
      FUN_145084d30(param_1 + 0x60);
      return;
    }
    plVar3 = (longlong *)puVar6[2];
    local_78[0] = 0;
    if (*(short *)(plVar3[1] + 0x34) == 0x403) {
LAB_145080de2:
      (**(code **)(*(longlong *)plVar3[1] + 0x50))((longlong *)plVar3[1],local_78);
    }
    else if (*(short *)(plVar3[1] + 0x34) == 0x503) {
      FUN_1453726c0();
      goto LAB_145080de2;
    }
    FUN_1450b28b0(DAT_14c790fc0,(int)plVar3[6]);
    puVar4 = (undefined8 *)*puVar6;
    puVar7 = puVar4;
    if (puVar6 == *(undefined8 **)(param_1 + 0x38)) {
      *(undefined8 **)(param_1 + 0x38) = puVar4;
      puVar7 = (undefined8 *)_DAT_00000000;
    }
    _DAT_00000000 = puVar7;
    if (puVar6 == *(undefined8 **)(param_1 + 0x40)) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    *puVar6 = *(undefined8 *)(param_1 + 0x48);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    *(undefined8 **)(param_1 + 0x48) = puVar6;
    plVar5 = (longlong *)plVar3[1];
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 0x18))();
    }
    (**(code **)(*plVar3 + 8))(plVar3,0);
    AK::MemoryMgr::Free(0,plVar3);
    puVar6 = puVar4;
  } while( true );
}



// FUNCTION 145080ec0 FUN_145080ec0 body=103 status=ok
// SIG undefined FUN_145080ec0(void)

undefined4 FUN_145080ec0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_res10 [24];
  
  FUN_1450a2090(1,0);
  uVar1 = 1;
  FUN_1450719c0(local_res10);
  if (DAT_14c7910e5 == '\0') {
    FUN_1450aae90();
  }
  else {
    uVar1 = FUN_1450735c0(param_1 + 0x90);
  }
  FUN_1450719f0(local_res10);
  FUN_145081150(param_1,0,0);
  return uVar1;
}



// FUNCTION 145080f30 FUN_145080f30 body=26 status=ok
// SIG undefined FUN_145080f30(void)

void FUN_145080f30(longlong param_1)

{
  if (DAT_14c7910e5 != '\0') {
    FUN_1450736d0(param_1 + 0x90);
    return;
  }
  FUN_1450aaed0();
  return;
}



// FUNCTION 145080f50 FUN_145080f50 body=506 status=ok
// SIG undefined FUN_145080f50(void)

short * FUN_145080f50(longlong param_1,short param_2,uint param_3)

{
  int *piVar1;
  short *psVar2;
  short *psVar3;
  ulonglong uVar4;
  bool bVar5;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  
  local_res18[0] = param_3;
  psVar3 = (short *)FUN_145084b00(param_1,local_res18);
  do {
    if (psVar3 != (short *)0x0) {
LAB_145081118:
      *psVar3 = (short)local_res18[0];
      psVar3[1] = param_2;
      return psVar3;
    }
    if (*(uint *)(param_1 + 0x30) < local_res18[0]) {
      return (short *)0x0;
    }
    FUN_1450719c0(local_res20);
    piVar1 = (int *)(param_1 + 0xb4);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_res18[0] = local_res18[0] + 3 & 0xfffffffc;
    do {
      while( true ) {
        psVar3 = *(short **)(param_1 + 0x18);
        uVar4 = (ulonglong)(local_res18[0] + 4);
        psVar2 = *(short **)(param_1 + 0x10);
        if (psVar2 <= psVar3) break;
        if ((ulonglong)((longlong)psVar2 - (longlong)psVar3) <= uVar4) goto LAB_145081042;
LAB_145080fd8:
        LOCK();
        bVar5 = psVar3 == *(short **)(param_1 + 0x18);
        if (bVar5) {
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)local_res18[0] + (longlong)psVar3;
        }
        UNLOCK();
        if (bVar5) goto LAB_145081039;
      }
      if (uVar4 < (ulonglong)(*(longlong *)(param_1 + 0x28) - (longlong)psVar3)) goto LAB_145080fd8;
      if ((ulonglong)((longlong)psVar2 - *(longlong *)(param_1 + 0x20)) <= uVar4)
      goto LAB_145081042;
      LOCK();
      bVar5 = psVar3 == *(short **)(param_1 + 0x18);
      if (bVar5) {
        *(ulonglong *)(param_1 + 0x18) = (ulonglong)local_res18[0] + *(longlong *)(param_1 + 0x20);
      }
      UNLOCK();
    } while (!bVar5);
    if (psVar3 + 2 <= *(short **)(param_1 + 0x28)) {
      psVar3[1] = 0x40;
      *psVar3 = *(short *)(param_1 + 0x28) - (short)psVar3;
    }
    psVar3 = *(short **)(param_1 + 0x20);
LAB_145081039:
    if (psVar3 != (short *)0x0) {
      FUN_1450719f0(local_res20);
      goto LAB_145081118;
    }
LAB_145081042:
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    FUN_1450806b0(piVar1);
    LOCK();
    UNLOCK();
    FUN_145084ee0(param_1,1,local_28);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_res18[0] = local_res18[0] + 3 & 0xfffffffc;
    do {
      while( true ) {
        psVar3 = *(short **)(param_1 + 0x18);
        uVar4 = (ulonglong)(local_res18[0] + 4);
        psVar2 = *(short **)(param_1 + 0x10);
        if (psVar2 <= psVar3) break;
        if ((ulonglong)((longlong)psVar2 - (longlong)psVar3) <= uVar4) {
LAB_145081100:
          psVar3 = (short *)0x0;
          goto LAB_145081102;
        }
LAB_145081098:
        LOCK();
        bVar5 = psVar3 == *(short **)(param_1 + 0x18);
        if (bVar5) {
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)local_res18[0] + (longlong)psVar3;
        }
        UNLOCK();
        if (bVar5) goto LAB_1450810f9;
      }
      if (uVar4 < (ulonglong)(*(longlong *)(param_1 + 0x28) - (longlong)psVar3)) goto LAB_145081098;
      if ((ulonglong)((longlong)psVar2 - *(longlong *)(param_1 + 0x20)) <= uVar4)
      goto LAB_145081100;
      LOCK();
      bVar5 = psVar3 == *(short **)(param_1 + 0x18);
      if (bVar5) {
        *(ulonglong *)(param_1 + 0x18) = (ulonglong)local_res18[0] + *(longlong *)(param_1 + 0x20);
      }
      UNLOCK();
    } while (!bVar5);
    if (psVar3 + 2 <= *(short **)(param_1 + 0x28)) {
      psVar3[1] = 0x40;
      *psVar3 = *(short *)(param_1 + 0x28) - (short)psVar3;
    }
    psVar3 = *(short **)(param_1 + 0x20);
LAB_1450810f9:
    if (psVar3 == (short *)0x0) {
LAB_145081102:
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    FUN_1450719f0(local_res20);
  } while( true );
}



// FUNCTION 145081150 FUN_145081150 body=173 status=ok
// SIG undefined FUN_145081150(void)

undefined8 FUN_145081150(longlong param_1,char param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != lVar2) {
    FUN_145080f50(param_1,0,4);
    LOCK();
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
    UNLOCK();
    FUN_1450806b0();
    LOCK();
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    UNLOCK();
  }
  if ((DAT_14c790ff5 == '\0') && ((DAT_14c7910e5 != '\0' || (param_2 == '\0')))) {
    if (lVar1 != lVar2) {
      FUN_145073730(param_1 + 0x90);
    }
  }
  else {
    FUN_145083dd0(param_1,param_3);
  }
  return 1;
}



// FUNCTION 145081200 FUN_145081200 body=615 status=ok
// SIG undefined FUN_145081200(void)

undefined8 FUN_145081200(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined4 local_c8 [20];
  undefined4 local_78 [20];
  
  if (1 < param_4 - 2U) {
    return 1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  puVar7 = (undefined8 *)0x0;
  while (puVar6 = puVar4, puVar6 != (undefined8 *)0x0) {
    plVar3 = (longlong *)puVar6[2];
    if ((plVar3[1] == param_2) &&
       ((param_4 != 2 || (cVar8 = FUN_145372790(plVar3[1],param_3,plVar3[8],plVar3), cVar8 != '\0'))
       )) {
      local_c8[0] = 0;
      if (*(short *)(plVar3[1] + 0x34) == 0x403) {
LAB_1450812a2:
        (**(code **)(*(longlong *)plVar3[1] + 0x50))((longlong *)plVar3[1],local_c8);
      }
      else if (*(short *)(plVar3[1] + 0x34) == 0x503) {
        FUN_1453726c0();
        goto LAB_1450812a2;
      }
      FUN_1450b28b0(DAT_14c790fc0,(int)plVar3[6]);
      puVar4 = (undefined8 *)*puVar6;
      if (puVar6 == *(undefined8 **)(param_1 + 0x38)) {
        *(undefined8 **)(param_1 + 0x38) = puVar4;
      }
      else {
        *puVar7 = puVar4;
      }
      if (puVar6 == *(undefined8 **)(param_1 + 0x40)) {
        *(undefined8 **)(param_1 + 0x40) = puVar7;
      }
      *puVar6 = *(undefined8 *)(param_1 + 0x48);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      *(undefined8 **)(param_1 + 0x48) = puVar6;
      plVar5 = (longlong *)plVar3[1];
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 0x18))();
      }
      (**(code **)(*plVar3 + 8))(plVar3,0);
      AK::MemoryMgr::Free(0,plVar3);
    }
    else {
      puVar4 = (undefined8 *)*puVar6;
      puVar7 = puVar6;
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  puVar7 = (undefined8 *)0x0;
  do {
    while( true ) {
      puVar6 = puVar4;
      if (puVar6 == (undefined8 *)0x0) {
        return 1;
      }
      plVar3 = (longlong *)puVar6[2];
      if ((plVar3[1] == param_2) &&
         (cVar8 = FUN_145372790(plVar3[1],param_3,plVar3[8],plVar3), cVar8 != '\0')) break;
      puVar4 = (undefined8 *)*puVar6;
      puVar7 = puVar6;
    }
    local_78[0] = 0;
    if (*(short *)(plVar3[1] + 0x34) == 0x403) {
LAB_14508138d:
      (**(code **)(*(longlong *)plVar3[1] + 0x50))((longlong *)plVar3[1],local_78);
    }
    else if (*(short *)(plVar3[1] + 0x34) == 0x503) {
      FUN_1453726c0();
      goto LAB_14508138d;
    }
    FUN_1450b28b0(DAT_14c790fc0,(int)plVar3[6]);
    puVar4 = (undefined8 *)*puVar6;
    if (puVar6 == *(undefined8 **)(param_1 + 0x60)) {
      *(undefined8 **)(param_1 + 0x60) = puVar4;
    }
    else {
      *puVar7 = puVar4;
    }
    if (puVar6 == *(undefined8 **)(param_1 + 0x68)) {
      *(undefined8 **)(param_1 + 0x68) = puVar7;
    }
    *puVar6 = *(undefined8 *)(param_1 + 0x70);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    plVar5 = (longlong *)plVar3[1];
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 0x18))();
    }
    (**(code **)(*plVar3 + 8))(plVar3,0);
    AK::MemoryMgr::Free(0,plVar3);
  } while( true );
}



// FUNCTION 145081470 FUN_145081470 body=1046 status=ok
// SIG undefined FUN_145081470(void)

undefined8 FUN_145081470(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 local_c8 [20];
  undefined4 local_78 [20];
  
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar8 = (undefined8 *)0x0;
joined_r0x0001450814b4:
  do {
    puVar7 = puVar5;
    if (puVar7 == (undefined8 *)0x0) break;
    plVar4 = (longlong *)puVar7[2];
    lVar11 = plVar4[1];
    if (((param_3 == 0) || (param_3 == plVar4[8])) &&
       ((param_4 == 0 || (param_4 == (int)plVar4[6])))) {
      if (param_2 != 0) {
        bVar6 = false;
        if ((lVar11 == 0) || (lVar10 = FUN_145369e40(lVar11), lVar10 == 0)) goto LAB_1450815cc;
        if (param_2 == lVar10) {
LAB_145081570:
          bVar6 = true;
        }
        else {
          lVar13 = *(longlong *)(lVar10 + 0x78);
          if (*(char *)(param_2 + 0xd4) < '\0') {
            lVar12 = *(longlong *)(lVar10 + 0x80);
            while (lVar12 == 0) {
              if (lVar13 == 0) goto LAB_145081573;
              plVar2 = (longlong *)(lVar13 + 0x80);
              lVar13 = *(longlong *)(lVar13 + 0x78);
              lVar12 = *plVar2;
            }
            do {
              if (param_2 == lVar12) goto LAB_145081570;
              lVar12 = *(longlong *)(lVar12 + 0x80);
            } while (lVar12 != 0);
          }
          else {
            for (; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x78)) {
              if (param_2 == lVar13) goto LAB_145081570;
            }
          }
        }
LAB_145081573:
        LOCK();
        piVar1 = (int *)(lVar10 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))();
        }
        if (!bVar6) {
          puVar5 = (undefined8 *)*puVar7;
          puVar8 = puVar7;
          goto joined_r0x0001450814b4;
        }
      }
      if ((*(short *)(lVar11 + 0x34) == 0x403) ||
         ((*(short *)(lVar11 + 0x34) == 0x503 &&
          (cVar9 = FUN_145372790(plVar4[1],param_2,plVar4[8],plVar4), cVar9 != '\0')))) {
        local_c8[0] = 0;
        if (*(short *)(plVar4[1] + 0x34) == 0x403) {
LAB_1450815fb:
          (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_c8);
        }
        else if (*(short *)(plVar4[1] + 0x34) == 0x503) {
          FUN_1453726c0();
          goto LAB_1450815fb;
        }
        FUN_1450b28b0(DAT_14c790fc0,(int)plVar4[6]);
        puVar5 = (undefined8 *)*puVar7;
        if (puVar7 == *(undefined8 **)(param_1 + 0x38)) {
          *(undefined8 **)(param_1 + 0x38) = puVar5;
        }
        else {
          *puVar8 = puVar5;
        }
        if (puVar7 == *(undefined8 **)(param_1 + 0x40)) {
          *(undefined8 **)(param_1 + 0x40) = puVar8;
        }
        *puVar7 = *(undefined8 *)(param_1 + 0x48);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        *(undefined8 **)(param_1 + 0x48) = puVar7;
        plVar2 = (longlong *)plVar4[1];
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0x14);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 0x18))();
        }
        (**(code **)(*plVar4 + 8))(plVar4,0);
        AK::MemoryMgr::Free(0,plVar4);
        goto joined_r0x0001450814b4;
      }
    }
LAB_1450815cc:
    puVar5 = (undefined8 *)*puVar7;
    puVar8 = puVar7;
  } while( true );
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  puVar8 = (undefined8 *)0x0;
joined_r0x00014508169a:
  do {
    puVar7 = puVar5;
    if (puVar7 == (undefined8 *)0x0) {
      return 1;
    }
    plVar4 = (longlong *)puVar7[2];
    if ((((param_3 == 0) || (param_3 == plVar4[8])) &&
        ((param_4 == 0 || (param_4 == (int)plVar4[6])))) && (*(short *)(plVar4[1] + 0x34) == 0x503))
    {
      if (param_2 == 0) {
LAB_145081785:
        cVar9 = FUN_145372790(plVar4[1],param_2,plVar4[8],plVar4);
        if (cVar9 != '\0') {
          local_78[0] = 0;
          if (*(short *)(plVar4[1] + 0x34) == 0x403) {
LAB_1450817c5:
            (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_78);
          }
          else if (*(short *)(plVar4[1] + 0x34) == 0x503) {
            FUN_1453726c0();
            goto LAB_1450817c5;
          }
          FUN_1450b28b0(DAT_14c790fc0,(int)plVar4[6]);
          puVar5 = (undefined8 *)*puVar7;
          if (puVar7 == *(undefined8 **)(param_1 + 0x60)) {
            *(undefined8 **)(param_1 + 0x60) = puVar5;
          }
          else {
            *puVar8 = puVar5;
          }
          if (puVar7 == *(undefined8 **)(param_1 + 0x68)) {
            *(undefined8 **)(param_1 + 0x68) = puVar8;
          }
          *puVar7 = *(undefined8 *)(param_1 + 0x70);
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
          *(undefined8 **)(param_1 + 0x70) = puVar7;
          plVar2 = (longlong *)plVar4[1];
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0x14);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar2 + 0x18))();
          }
          (**(code **)(*plVar4 + 8))(plVar4,0);
          AK::MemoryMgr::Free(0,plVar4);
          goto joined_r0x00014508169a;
        }
      }
      else {
        bVar6 = false;
        lVar11 = FUN_145369e40();
        if (lVar11 != 0) {
          if (param_2 == lVar11) {
LAB_145081760:
            bVar6 = true;
          }
          else {
            lVar10 = *(longlong *)(lVar11 + 0x78);
            if (*(char *)(param_2 + 0xd4) < '\0') {
              lVar13 = *(longlong *)(lVar11 + 0x80);
              while (lVar13 == 0) {
                if (lVar10 == 0) goto LAB_145081763;
                plVar2 = (longlong *)(lVar10 + 0x80);
                lVar10 = *(longlong *)(lVar10 + 0x78);
                lVar13 = *plVar2;
              }
              do {
                if (param_2 == lVar13) goto LAB_145081760;
                lVar13 = *(longlong *)(lVar13 + 0x80);
              } while (lVar13 != 0);
            }
            else {
              for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x78)) {
                if (param_2 == lVar10) goto LAB_145081760;
              }
            }
          }
LAB_145081763:
          LOCK();
          piVar1 = (int *)(lVar11 + 0x24);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)(lVar11 + 0x10) + 0x18))();
          }
          if (bVar6) goto LAB_145081785;
        }
      }
    }
    puVar5 = (undefined8 *)*puVar7;
    puVar8 = puVar7;
  } while( true );
}



// FUNCTION 145081890 FUN_145081890 body=949 status=ok
// SIG undefined FUN_145081890(void)

undefined8 FUN_145081890(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_c8 [20];
  undefined4 local_78 [20];
  
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  puVar9 = (undefined8 *)0x0;
joined_r0x0001450818d0:
  do {
    puVar8 = puVar6;
    if (puVar8 == (undefined8 *)0x0) break;
    plVar4 = (longlong *)puVar8[2];
    if ((((param_3 == 0) || (param_3 == plVar4[8])) &&
        ((param_4 == 0 || (param_4 == (int)plVar4[6])))) && (*(short *)(plVar4[1] + 0x34) != 0x1820)
       ) {
      if (param_2 == 0) {
LAB_1450819b9:
        local_c8[0] = 0;
        if (*(short *)(plVar4[1] + 0x34) == 0x403) {
LAB_1450819de:
          (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_c8);
        }
        else if (*(short *)(plVar4[1] + 0x34) == 0x503) {
          FUN_1453726c0();
          goto LAB_1450819de;
        }
        FUN_1450b28b0(DAT_14c790fc0,(int)plVar4[6]);
        puVar6 = (undefined8 *)*puVar8;
        if (puVar8 == *(undefined8 **)(param_1 + 0x38)) {
          *(undefined8 **)(param_1 + 0x38) = puVar6;
        }
        else {
          *puVar9 = puVar6;
        }
        if (puVar8 == *(undefined8 **)(param_1 + 0x40)) {
          *(undefined8 **)(param_1 + 0x40) = puVar9;
        }
        *puVar8 = *(undefined8 *)(param_1 + 0x48);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        *(undefined8 **)(param_1 + 0x48) = puVar8;
        plVar2 = (longlong *)plVar4[1];
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0x14);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 0x18))();
        }
        (**(code **)(*plVar4 + 8))(plVar4,0);
        AK::MemoryMgr::Free(0,plVar4);
        goto joined_r0x0001450818d0;
      }
      bVar7 = false;
      lVar10 = FUN_145369e40();
      if (lVar10 != 0) {
        if (param_2 == lVar10) {
LAB_145081990:
          bVar7 = true;
        }
        else {
          lVar5 = *(longlong *)(lVar10 + 0x78);
          if (*(char *)(param_2 + 0xd4) < '\0') {
            lVar11 = *(longlong *)(lVar10 + 0x80);
            while (lVar11 == 0) {
              if (lVar5 == 0) goto LAB_145081992;
              plVar2 = (longlong *)(lVar5 + 0x80);
              lVar5 = *(longlong *)(lVar5 + 0x78);
              lVar11 = *plVar2;
            }
            do {
              if (param_2 == lVar11) goto LAB_145081990;
              lVar11 = *(longlong *)(lVar11 + 0x80);
            } while (lVar11 != 0);
          }
          else {
            for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x78)) {
              if (param_2 == lVar5) goto LAB_145081990;
            }
          }
        }
LAB_145081992:
        LOCK();
        piVar1 = (int *)(lVar10 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))();
        }
        if (bVar7) goto LAB_1450819b9;
      }
    }
    puVar6 = (undefined8 *)*puVar8;
    puVar9 = puVar8;
  } while( true );
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  puVar9 = (undefined8 *)0x0;
joined_r0x000145081a7e:
  do {
    puVar8 = puVar6;
    if (puVar8 == (undefined8 *)0x0) {
      return 1;
    }
    plVar4 = (longlong *)puVar8[2];
    if (((param_3 == 0) || (param_3 == plVar4[8])) &&
       (((param_4 == 0 || (param_4 == (int)plVar4[6])) && (*(short *)(plVar4[1] + 0x34) != 0x1820)))
       ) {
      if (param_2 == 0) {
LAB_145081b63:
        local_78[0] = 0;
        if (*(short *)(plVar4[1] + 0x34) == 0x403) {
LAB_145081b8c:
          (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_78);
        }
        else if (*(short *)(plVar4[1] + 0x34) == 0x503) {
          FUN_1453726c0();
          goto LAB_145081b8c;
        }
        FUN_1450b28b0(DAT_14c790fc0,(int)plVar4[6]);
        puVar6 = (undefined8 *)*puVar8;
        if (puVar8 == *(undefined8 **)(param_1 + 0x60)) {
          *(undefined8 **)(param_1 + 0x60) = puVar6;
        }
        else {
          *puVar9 = puVar6;
        }
        if (puVar8 == *(undefined8 **)(param_1 + 0x68)) {
          *(undefined8 **)(param_1 + 0x68) = puVar9;
        }
        *puVar8 = *(undefined8 *)(param_1 + 0x70);
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        *(undefined8 **)(param_1 + 0x70) = puVar8;
        plVar2 = (longlong *)plVar4[1];
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0x14);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 0x18))();
        }
        (**(code **)(*plVar4 + 8))(plVar4,0);
        AK::MemoryMgr::Free(0,plVar4);
        goto joined_r0x000145081a7e;
      }
      bVar7 = false;
      lVar10 = FUN_145369e40();
      if (lVar10 != 0) {
        if (param_2 == lVar10) {
LAB_145081b40:
          bVar7 = true;
        }
        else {
          lVar5 = *(longlong *)(lVar10 + 0x78);
          if (*(char *)(param_2 + 0xd4) < '\0') {
            lVar11 = *(longlong *)(lVar10 + 0x80);
            while (lVar11 == 0) {
              if (lVar5 == 0) goto LAB_145081b42;
              plVar2 = (longlong *)(lVar5 + 0x80);
              lVar5 = *(longlong *)(lVar5 + 0x78);
              lVar11 = *plVar2;
            }
            do {
              if (param_2 == lVar11) goto LAB_145081b40;
              lVar11 = *(longlong *)(lVar11 + 0x80);
            } while (lVar11 != 0);
          }
          else {
            for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x78)) {
              if (param_2 == lVar5) goto LAB_145081b40;
            }
          }
        }
LAB_145081b42:
        LOCK();
        piVar1 = (int *)(lVar10 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))();
        }
        if (bVar7) goto LAB_145081b63;
      }
    }
    puVar6 = (undefined8 *)*puVar8;
    puVar9 = puVar8;
  } while( true );
}



// FUNCTION 145081c50 FUN_145081c50 body=627 status=ok
// SIG undefined FUN_145081c50(void)

undefined8 FUN_145081c50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  undefined4 local_c8 [20];
  undefined4 local_78 [20];
  
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar8 = (undefined8 *)0x0;
  while (puVar7 = puVar5, puVar7 != (undefined8 *)0x0) {
    plVar4 = (longlong *)puVar7[2];
    if ((((param_2 == 0) || (param_2 == plVar4[8])) &&
        ((param_4 == 0 || (param_4 == (int)plVar4[6])))) &&
       ((cVar9 = FUN_145087ce0(param_1,plVar4[1],param_3), cVar9 == '\0' &&
        (sVar3 = *(short *)(plVar4[1] + 0x34), sVar3 != 0x1820)))) {
      local_c8[0] = 0;
      if (sVar3 == 0x403) {
LAB_145081cfb:
        (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_c8);
      }
      else if (sVar3 == 0x503) {
        FUN_1453726c0();
        goto LAB_145081cfb;
      }
      FUN_1450b28b0(DAT_14c790fc0,(int)plVar4[6]);
      puVar5 = (undefined8 *)*puVar7;
      if (puVar7 == *(undefined8 **)(param_1 + 0x38)) {
        *(undefined8 **)(param_1 + 0x38) = puVar5;
      }
      else {
        *puVar8 = puVar5;
      }
      if (puVar7 == *(undefined8 **)(param_1 + 0x40)) {
        *(undefined8 **)(param_1 + 0x40) = puVar8;
      }
      *puVar7 = *(undefined8 *)(param_1 + 0x48);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      *(undefined8 **)(param_1 + 0x48) = puVar7;
      plVar6 = (longlong *)plVar4[1];
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 0x18))();
      }
      (**(code **)(*plVar4 + 8))(plVar4,0);
      AK::MemoryMgr::Free(0,plVar4);
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar8 = puVar7;
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  puVar8 = (undefined8 *)0x0;
  do {
    while( true ) {
      puVar7 = puVar5;
      if (puVar7 == (undefined8 *)0x0) {
        return 1;
      }
      plVar4 = (longlong *)puVar7[2];
      if ((((param_2 == 0) || (param_2 == plVar4[8])) &&
          ((param_4 == 0 || (param_4 == (int)plVar4[6])))) &&
         ((cVar9 = FUN_145087ce0(param_1,plVar4[1],param_3), cVar9 == '\0' &&
          (sVar3 = *(short *)(plVar4[1] + 0x34), sVar3 != 0x1820)))) break;
      puVar5 = (undefined8 *)*puVar7;
      puVar8 = puVar7;
    }
    local_78[0] = 0;
    if (sVar3 == 0x403) {
LAB_145081e0b:
      (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_78);
    }
    else if (sVar3 == 0x503) {
      FUN_1453726c0();
      goto LAB_145081e0b;
    }
    FUN_1450b28b0(DAT_14c790fc0,(int)plVar4[6]);
    puVar5 = (undefined8 *)*puVar7;
    if (puVar7 == *(undefined8 **)(param_1 + 0x60)) {
      *(undefined8 **)(param_1 + 0x60) = puVar5;
    }
    else {
      *puVar8 = puVar5;
    }
    if (puVar7 == *(undefined8 **)(param_1 + 0x68)) {
      *(undefined8 **)(param_1 + 0x68) = puVar8;
    }
    *puVar7 = *(undefined8 *)(param_1 + 0x70);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    plVar6 = (longlong *)plVar4[1];
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 0x18))();
    }
    (**(code **)(*plVar4 + 8))(plVar4,0);
    AK::MemoryMgr::Free(0,plVar4);
  } while( true );
}



// FUNCTION 145081ed0 FUN_145081ed0 body=767 status=ok
// SIG undefined FUN_145081ed0(void)

void FUN_145081ed0(longlong param_1,longlong param_2,longlong param_3,char param_4,int param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ushort uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  for (puVar5 = *(undefined8 **)(param_1 + 0x60); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    lVar6 = puVar5[2];
    uVar4 = *(ushort *)(*(longlong *)(lVar6 + 8) + 0x34);
    if (((((uVar4 & 0xff00) != 0x300) || (param_4 != '\0')) &&
        ((param_3 == 0 || (param_3 == *(longlong *)(lVar6 + 0x40))))) &&
       (((param_5 == 0 || (param_5 == *(int *)(lVar6 + 0x30))) && (uVar4 != 0x1820)))) {
      if (param_2 == 0) {
LAB_145082019:
        *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + 1;
      }
      else {
        bVar7 = false;
        lVar10 = FUN_145369e40();
        if (lVar10 != 0) {
          if (param_2 == lVar10) {
LAB_145081ff8:
            bVar7 = true;
          }
          else {
            lVar11 = *(longlong *)(lVar10 + 0x78);
            if (*(char *)(param_2 + 0xd4) < '\0') {
              lVar12 = *(longlong *)(lVar10 + 0x80);
              while (lVar12 == 0) {
                if (lVar11 == 0) goto LAB_145081ffb;
                plVar2 = (longlong *)(lVar11 + 0x80);
                lVar11 = *(longlong *)(lVar11 + 0x78);
                lVar12 = *plVar2;
              }
              do {
                if (param_2 == lVar12) goto LAB_145081ff8;
                lVar12 = *(longlong *)(lVar12 + 0x80);
              } while (lVar12 != 0);
            }
            else {
              for (; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x78)) {
                if (param_2 == lVar11) goto LAB_145081ff8;
              }
            }
          }
LAB_145081ffb:
          LOCK();
          piVar1 = (int *)(lVar10 + 0x24);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))();
          }
          if (bVar7) goto LAB_145082019;
        }
      }
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar9 = (undefined8 *)0x0;
joined_r0x00014508204f:
  do {
    puVar8 = puVar5;
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    lVar6 = puVar8[2];
    lVar10 = *(longlong *)(lVar6 + 8);
    if (((((*(ushort *)(lVar10 + 0x34) & 0xff00) != 0x300) || (param_4 != '\0')) &&
        ((param_3 == 0 || (param_3 == *(longlong *)(lVar6 + 0x40))))) &&
       (((param_5 == 0 || (param_5 == *(int *)(lVar6 + 0x30))) &&
        (*(ushort *)(lVar10 + 0x34) != 0x1820)))) {
      if (param_2 == 0) {
LAB_145082151:
        FUN_145083510(param_1,*(undefined4 *)(lVar10 + 0x30),lVar6,0);
        puVar5 = (undefined8 *)*puVar8;
        if (puVar8 == *(undefined8 **)(param_1 + 0x38)) {
          *(undefined8 **)(param_1 + 0x38) = puVar5;
        }
        else {
          *puVar9 = puVar5;
        }
        if (puVar8 == *(undefined8 **)(param_1 + 0x40)) {
          *(undefined8 **)(param_1 + 0x40) = puVar9;
        }
        *puVar8 = *(undefined8 *)(param_1 + 0x48);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        *(undefined8 **)(param_1 + 0x48) = puVar8;
        goto joined_r0x00014508204f;
      }
      bVar7 = false;
      lVar11 = FUN_145369e40(lVar10);
      if (lVar11 != 0) {
        if (param_2 == lVar11) {
LAB_145082130:
          bVar7 = true;
        }
        else {
          lVar12 = *(longlong *)(lVar11 + 0x78);
          if (*(char *)(param_2 + 0xd4) < '\0') {
            lVar13 = *(longlong *)(lVar11 + 0x80);
            while (lVar13 == 0) {
              if (lVar12 == 0) goto LAB_145082133;
              plVar2 = (longlong *)(lVar12 + 0x80);
              lVar12 = *(longlong *)(lVar12 + 0x78);
              lVar13 = *plVar2;
            }
            do {
              if (param_2 == lVar13) goto LAB_145082130;
              lVar13 = *(longlong *)(lVar13 + 0x80);
            } while (lVar13 != 0);
          }
          else {
            for (; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x78)) {
              if (param_2 == lVar12) goto LAB_145082130;
            }
          }
        }
LAB_145082133:
        LOCK();
        piVar1 = (int *)(lVar11 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)(lVar11 + 0x10) + 0x18))();
        }
        if (bVar7) goto LAB_145082151;
      }
    }
    puVar5 = (undefined8 *)*puVar8;
    puVar9 = puVar8;
  } while( true );
}



// FUNCTION 1450821d0 FUN_1450821d0 body=173 status=ok
// SIG undefined FUN_1450821d0(void)

void FUN_1450821d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  for (puVar2 = *(undefined8 **)(param_1 + 0x60); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    if (*(longlong *)(puVar2[2] + 8) == param_2) {
      piVar1 = (int *)(puVar2[2] + 0x34);
      *piVar1 = *piVar1 + 1;
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  puVar5 = (undefined8 *)0x0;
  while (puVar4 = puVar2, puVar4 != (undefined8 *)0x0) {
    lVar3 = *(longlong *)(puVar4[2] + 8);
    if (lVar3 == param_2) {
      FUN_145083510(param_1,*(undefined4 *)(lVar3 + 0x30),puVar4[2],0);
      puVar2 = (undefined8 *)*puVar4;
      if (puVar4 == *(undefined8 **)(param_1 + 0x38)) {
        *(undefined8 **)(param_1 + 0x38) = puVar2;
      }
      else {
        *puVar5 = puVar2;
      }
      if (puVar4 == *(undefined8 **)(param_1 + 0x40)) {
        *(undefined8 **)(param_1 + 0x40) = puVar5;
      }
      *puVar4 = *(undefined8 *)(param_1 + 0x48);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      *(undefined8 **)(param_1 + 0x48) = puVar4;
    }
    else {
      puVar2 = (undefined8 *)*puVar4;
      puVar5 = puVar4;
    }
  }
  return;
}



// FUNCTION 145082280 FUN_145082280 body=216 status=ok
// SIG undefined FUN_145082280(void)

void FUN_145082280(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x60); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    lVar2 = puVar1[2];
    if ((*(int *)(lVar2 + 0x30) == param_2) &&
       (*(short *)(*(longlong *)(lVar2 + 8) + 0x34) != 0x1820)) {
      *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar4 = (undefined8 *)0x0;
  while (puVar3 = puVar1, puVar3 != (undefined8 *)0x0) {
    lVar2 = puVar3[2];
    if ((*(int *)(lVar2 + 0x30) == param_2) &&
       (*(short *)(*(longlong *)(lVar2 + 8) + 0x34) != 0x1820)) {
      FUN_145083510(param_1,*(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x30),lVar2,0);
      puVar1 = (undefined8 *)*puVar3;
      if (puVar3 == *(undefined8 **)(param_1 + 0x38)) {
        *(undefined8 **)(param_1 + 0x38) = puVar1;
      }
      else {
        *puVar4 = puVar1;
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x40)) {
        *(undefined8 **)(param_1 + 0x40) = puVar4;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x48);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      *(undefined8 **)(param_1 + 0x48) = puVar3;
    }
    else {
      puVar1 = (undefined8 *)*puVar3;
      puVar4 = puVar3;
    }
  }
  return;
}



// FUNCTION 145082360 FUN_145082360 body=659 status=ok
// SIG undefined FUN_145082360(void)

void FUN_145082360(longlong param_1,longlong param_2,longlong param_3,char param_4,int param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  puVar8 = (undefined8 *)0x0;
joined_r0x000145082392:
  puVar7 = puVar5;
  if (puVar7 != (undefined8 *)0x0) {
    lVar10 = puVar7[2];
    if (((param_3 == 0) || (param_3 == *(longlong *)(lVar10 + 0x40))) &&
       ((param_5 == 0 || (param_5 == *(int *)(lVar10 + 0x30))))) {
      if (param_2 == 0) {
LAB_145082471:
        if ((param_4 == '\0') && (*(int *)(lVar10 + 0x34) != 0)) {
          *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + -1;
          puVar5 = (undefined8 *)*puVar7;
          puVar8 = puVar7;
        }
        else {
          FUN_1450835d0(param_1,lVar10);
          puVar5 = (undefined8 *)*puVar7;
          if (puVar7 == *(undefined8 **)(param_1 + 0x60)) {
            *(undefined8 **)(param_1 + 0x60) = puVar5;
          }
          else {
            *puVar8 = puVar5;
          }
          if (puVar7 == *(undefined8 **)(param_1 + 0x68)) {
            *(undefined8 **)(param_1 + 0x68) = puVar8;
          }
          *puVar7 = *(undefined8 *)(param_1 + 0x70);
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
          *(undefined8 **)(param_1 + 0x70) = puVar7;
        }
        goto joined_r0x000145082392;
      }
      bVar6 = false;
      if ((*(longlong *)(lVar10 + 8) != 0) && (lVar9 = FUN_145369e40(), lVar9 != 0)) {
        if (param_2 == lVar9) {
LAB_145082448:
          bVar6 = true;
        }
        else {
          lVar4 = *(longlong *)(lVar9 + 0x78);
          if (*(char *)(param_2 + 0xd4) < '\0') {
            lVar11 = *(longlong *)(lVar9 + 0x80);
            while (lVar11 == 0) {
              if (lVar4 == 0) goto LAB_14508244b;
              plVar2 = (longlong *)(lVar4 + 0x80);
              lVar4 = *(longlong *)(lVar4 + 0x78);
              lVar11 = *plVar2;
            }
            do {
              if (param_2 == lVar11) goto LAB_145082448;
              lVar11 = *(longlong *)(lVar11 + 0x80);
            } while (lVar11 != 0);
          }
          else {
            for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x78)) {
              if (param_2 == lVar4) goto LAB_145082448;
            }
          }
        }
LAB_14508244b:
        LOCK();
        piVar1 = (int *)(lVar9 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)(lVar9 + 0x10) + 0x18))();
        }
        if (bVar6) goto LAB_145082471;
      }
    }
    puVar5 = (undefined8 *)*puVar7;
    puVar8 = puVar7;
    goto joined_r0x000145082392;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  do {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    lVar10 = puVar5[2];
    lVar9 = *(longlong *)(lVar10 + 8);
    if (((param_3 == 0) || (param_3 == *(longlong *)(lVar10 + 0x40))) &&
       ((param_5 == 0 || (param_5 == *(int *)(lVar10 + 0x30))))) {
      if (param_2 == 0) {
LAB_1450825c1:
        if (*(short *)(lVar9 + 0x34) == 0x503) {
          FUN_145372740(lVar9);
        }
      }
      else {
        bVar6 = false;
        if ((lVar9 != 0) && (lVar10 = FUN_145369e40(lVar9), lVar10 != 0)) {
          if (param_2 == lVar10) {
LAB_1450825a0:
            bVar6 = true;
          }
          else {
            lVar4 = *(longlong *)(lVar10 + 0x78);
            if (*(char *)(param_2 + 0xd4) < '\0') {
              lVar11 = *(longlong *)(lVar10 + 0x80);
              while (lVar11 == 0) {
                if (lVar4 == 0) goto LAB_1450825a3;
                plVar2 = (longlong *)(lVar4 + 0x80);
                lVar4 = *(longlong *)(lVar4 + 0x78);
                lVar11 = *plVar2;
              }
              do {
                if (param_2 == lVar11) goto LAB_1450825a0;
                lVar11 = *(longlong *)(lVar11 + 0x80);
              } while (lVar11 != 0);
            }
            else {
              for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x78)) {
                if (param_2 == lVar4) goto LAB_1450825a0;
              }
            }
          }
LAB_1450825a3:
          LOCK();
          piVar1 = (int *)(lVar10 + 0x24);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))();
          }
          if (bVar6) goto LAB_1450825c1;
        }
      }
    }
    puVar5 = (undefined8 *)*puVar5;
  } while( true );
}



// FUNCTION 145082600 FUN_145082600 body=303 status=ok
// SIG undefined FUN_145082600(void)

void FUN_145082600(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  puVar4 = (undefined8 *)0x0;
  do {
    puVar7 = puVar6;
    if (puVar7 == (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x38);
      while (puVar6 != (undefined8 *)0x0) {
        lVar3 = *(longlong *)(puVar6[2] + 8);
        lVar5 = FUN_145369e40(lVar3);
        if ((lVar3 == param_2) && (*(short *)(lVar3 + 0x34) == 0x503)) {
          FUN_145372740(lVar3);
        }
        puVar6 = (undefined8 *)*puVar6;
        if (lVar5 != 0) {
          LOCK();
          piVar1 = (int *)(lVar5 + 0x24);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))();
          }
        }
      }
      return;
    }
    lVar3 = puVar7[2];
    lVar5 = FUN_145369e40(*(undefined8 *)(lVar3 + 8));
    if (*(longlong *)(lVar3 + 8) == param_2) {
      if (*(int *)(lVar3 + 0x34) != 0) {
        *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
        goto LAB_14508268f;
      }
      FUN_1450835d0(param_1,lVar3);
      puVar6 = (undefined8 *)*puVar7;
      if (puVar7 == *(undefined8 **)(param_1 + 0x60)) {
        *(undefined8 **)(param_1 + 0x60) = puVar6;
      }
      else {
        *puVar4 = puVar6;
      }
      if (puVar7 == *(undefined8 **)(param_1 + 0x68)) {
        *(undefined8 **)(param_1 + 0x68) = puVar4;
      }
      *puVar7 = *(undefined8 *)(param_1 + 0x70);
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      puVar7 = puVar4;
    }
    else {
LAB_14508268f:
      puVar6 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))();
      }
    }
  } while( true );
}



// FUNCTION 145082730 FUN_145082730 body=150 status=ok
// SIG undefined FUN_145082730(void)

void FUN_145082730(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  puVar4 = (undefined8 *)0x0;
joined_r0x000145082752:
  do {
    puVar3 = puVar2;
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    lVar1 = puVar3[2];
    if (*(int *)(lVar1 + 0x30) == param_2) {
      if (*(int *)(lVar1 + 0x34) == 0) {
        FUN_1450835d0(param_1,lVar1);
        puVar2 = (undefined8 *)*puVar3;
        if (puVar3 == *(undefined8 **)(param_1 + 0x60)) {
          *(undefined8 **)(param_1 + 0x60) = puVar2;
        }
        else {
          *puVar4 = puVar2;
        }
        if (puVar3 == *(undefined8 **)(param_1 + 0x68)) {
          *(undefined8 **)(param_1 + 0x68) = puVar4;
        }
        *puVar3 = *(undefined8 *)(param_1 + 0x70);
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        *(undefined8 **)(param_1 + 0x70) = puVar3;
        goto joined_r0x000145082752;
      }
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
    }
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = puVar3;
  } while( true );
}



// FUNCTION 1450827d0 FUN_1450827d0 body=389 status=ok
// SIG undefined FUN_1450827d0(void)

void FUN_1450827d0(longlong param_1,longlong param_2,undefined8 param_3,char param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x60); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    lVar2 = puVar1[2];
    lVar3 = *(longlong *)(lVar2 + 8);
    if (((((*(ushort *)(lVar3 + 0x34) & 0xff00) != 0x300) || (param_4 != '\0')) &&
        ((param_2 == 0 || (param_2 == *(longlong *)(lVar2 + 0x40))))) &&
       ((((param_5 == 0 || (param_5 == *(int *)(lVar2 + 0x30))) &&
         (cVar6 = FUN_145087ce0(param_1,lVar3,param_3), cVar6 == '\0')) &&
        (*(short *)(lVar3 + 0x34) != 0x1820)))) {
      *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar5 = (undefined8 *)0x0;
  while (puVar4 = puVar1, puVar4 != (undefined8 *)0x0) {
    lVar2 = puVar4[2];
    lVar3 = *(longlong *)(lVar2 + 8);
    if ((((((*(ushort *)(lVar3 + 0x34) & 0xff00) == 0x300) && (param_4 == '\0')) ||
         ((param_2 != 0 && (param_2 != *(longlong *)(lVar2 + 0x40))))) ||
        (((param_5 != 0 && (param_5 != *(int *)(lVar2 + 0x30))) ||
         (cVar6 = FUN_145087ce0(param_1,lVar3,param_3), cVar6 != '\0')))) ||
       (*(short *)(lVar3 + 0x34) == 0x1820)) {
      puVar1 = (undefined8 *)*puVar4;
      puVar5 = puVar4;
    }
    else {
      FUN_145083510(param_1,*(undefined4 *)(lVar3 + 0x30),lVar2,0);
      puVar1 = (undefined8 *)*puVar4;
      if (puVar4 == *(undefined8 **)(param_1 + 0x38)) {
        *(undefined8 **)(param_1 + 0x38) = puVar1;
      }
      else {
        *puVar5 = puVar1;
      }
      if (puVar4 == *(undefined8 **)(param_1 + 0x40)) {
        *(undefined8 **)(param_1 + 0x40) = puVar5;
      }
      *puVar4 = *(undefined8 *)(param_1 + 0x48);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      *(undefined8 **)(param_1 + 0x48) = puVar4;
    }
  }
  return;
}



// FUNCTION 145082960 FUN_145082960 body=334 status=ok
// SIG undefined FUN_145082960(void)

void FUN_145082960(longlong param_1,longlong param_2,undefined8 param_3,char param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  puVar6 = (undefined8 *)0x0;
  lVar1 = DAT_14c790fd8;
  do {
    while( true ) {
      puVar5 = puVar2;
      DAT_14c790fd8 = lVar1;
      if (puVar5 == (undefined8 *)0x0) {
        for (puVar2 = *(undefined8 **)(lVar1 + 0x38); puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          lVar3 = puVar2[2];
          lVar4 = *(longlong *)(lVar3 + 8);
          if ((((param_2 == 0) || (param_2 == *(longlong *)(lVar3 + 0x40))) &&
              ((param_5 == 0 || (param_5 == *(int *)(lVar3 + 0x30))))) &&
             ((cVar7 = FUN_145087ce0(lVar1,lVar4,param_3), cVar7 == '\0' &&
              (*(short *)(lVar4 + 0x34) == 0x503)))) {
            FUN_145372740(lVar4);
          }
        }
        return;
      }
      lVar1 = puVar5[2];
      if ((((param_2 == 0) || (param_2 == *(longlong *)(lVar1 + 0x40))) &&
          ((param_5 == 0 || (param_5 == *(int *)(lVar1 + 0x30))))) &&
         (cVar7 = FUN_145087ce0(param_1,*(undefined8 *)(lVar1 + 8),param_3), cVar7 == '\0')) break;
LAB_1450829e6:
      puVar2 = (undefined8 *)*puVar5;
      puVar6 = puVar5;
      lVar1 = DAT_14c790fd8;
    }
    if ((param_4 == '\0') && (*(int *)(lVar1 + 0x34) != 0)) {
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
      goto LAB_1450829e6;
    }
    FUN_1450835d0(param_1,lVar1);
    puVar2 = (undefined8 *)*puVar5;
    if (puVar5 == *(undefined8 **)(param_1 + 0x60)) {
      *(undefined8 **)(param_1 + 0x60) = puVar2;
    }
    else {
      *puVar6 = puVar2;
    }
    if (puVar5 == *(undefined8 **)(param_1 + 0x68)) {
      *(undefined8 **)(param_1 + 0x68) = puVar6;
    }
    *puVar5 = *(undefined8 *)(param_1 + 0x70);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    lVar1 = DAT_14c790fd8;
  } while( true );
}



// FUNCTION 145082ab0 FUN_145082ab0 body=456 status=ok
// SIG undefined FUN_145082ab0(void)

void FUN_145082ab0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_78 [20];
  
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  puVar9 = (undefined8 *)0x0;
joined_r0x000145082ad1:
  do {
    puVar8 = puVar6;
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    plVar4 = (longlong *)puVar8[2];
    if (((*(short *)(plVar4[1] + 0x34) != 0x1820) && (bVar7 = false, param_2 != 0)) &&
       (lVar10 = FUN_145369e40(), lVar10 != 0)) {
      if (param_2 == lVar10) {
LAB_145082b80:
        bVar7 = true;
      }
      else {
        lVar5 = *(longlong *)(lVar10 + 0x78);
        if (*(char *)(param_2 + 0xd4) < '\0') {
          lVar11 = *(longlong *)(lVar10 + 0x80);
          while (lVar11 == 0) {
            if (lVar5 == 0) goto LAB_145082b82;
            plVar2 = (longlong *)(lVar5 + 0x80);
            lVar5 = *(longlong *)(lVar5 + 0x78);
            lVar11 = *plVar2;
          }
          do {
            if (param_2 == lVar11) goto LAB_145082b80;
            lVar11 = *(longlong *)(lVar11 + 0x80);
          } while (lVar11 != 0);
        }
        else {
          for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x78)) {
            if (param_2 == lVar5) goto LAB_145082b80;
          }
        }
      }
LAB_145082b82:
      LOCK();
      piVar1 = (int *)(lVar10 + 0x24);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))();
      }
      if (bVar7) {
        local_78[0] = 0;
        if (*(short *)(plVar4[1] + 0x34) == 0x403) {
LAB_145082bc9:
          (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_78);
        }
        else if (*(short *)(plVar4[1] + 0x34) == 0x503) {
          FUN_1453726c0();
          goto LAB_145082bc9;
        }
        FUN_1450b28b0(DAT_14c790fc0,(int)plVar4[6]);
        puVar6 = (undefined8 *)*puVar8;
        if (puVar8 == *(undefined8 **)(param_1 + 0x38)) {
          *(undefined8 **)(param_1 + 0x38) = puVar6;
        }
        else {
          *puVar9 = puVar6;
        }
        if (puVar8 == *(undefined8 **)(param_1 + 0x40)) {
          *(undefined8 **)(param_1 + 0x40) = puVar9;
        }
        *puVar8 = *(undefined8 *)(param_1 + 0x48);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        *(undefined8 **)(param_1 + 0x48) = puVar8;
        plVar2 = (longlong *)plVar4[1];
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0x14);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 0x18))();
        }
        (**(code **)(*plVar4 + 8))(plVar4,0);
        AK::MemoryMgr::Free(0,plVar4);
        goto joined_r0x000145082ad1;
      }
    }
    puVar6 = (undefined8 *)*puVar8;
    puVar9 = puVar8;
  } while( true );
}



// FUNCTION 145082c80 FUN_145082c80 body=457 status=ok
// SIG undefined FUN_145082c80(void)

void FUN_145082c80(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_78 [20];
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  puVar9 = (undefined8 *)0x0;
joined_r0x000145082ca1:
  do {
    puVar8 = puVar6;
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    plVar4 = (longlong *)puVar8[2];
    bVar7 = false;
    if (((param_2 != 0) && (plVar4[1] != 0)) && (lVar10 = FUN_145369e40(), lVar10 != 0)) {
      if (param_2 == lVar10) {
LAB_145082d50:
        bVar7 = true;
      }
      else {
        lVar5 = *(longlong *)(lVar10 + 0x78);
        if (*(char *)(param_2 + 0xd4) < '\0') {
          lVar11 = *(longlong *)(lVar10 + 0x80);
          while (lVar11 == 0) {
            if (lVar5 == 0) goto LAB_145082d53;
            plVar2 = (longlong *)(lVar5 + 0x80);
            lVar5 = *(longlong *)(lVar5 + 0x78);
            lVar11 = *plVar2;
          }
          do {
            if (param_2 == lVar11) goto LAB_145082d50;
            lVar11 = *(longlong *)(lVar11 + 0x80);
          } while (lVar11 != 0);
        }
        else {
          for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x78)) {
            if (param_2 == lVar5) goto LAB_145082d50;
          }
        }
      }
LAB_145082d53:
      LOCK();
      piVar1 = (int *)(lVar10 + 0x24);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))();
      }
      if (bVar7) {
        local_78[0] = 0;
        if (*(short *)(plVar4[1] + 0x34) == 0x403) {
LAB_145082d97:
          (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_78);
        }
        else if (*(short *)(plVar4[1] + 0x34) == 0x503) {
          FUN_1453726c0();
          goto LAB_145082d97;
        }
        FUN_1450b28b0(DAT_14c790fc0,(int)plVar4[6]);
        puVar6 = (undefined8 *)*puVar8;
        if (puVar8 == *(undefined8 **)(param_1 + 0x60)) {
          *(undefined8 **)(param_1 + 0x60) = puVar6;
        }
        else {
          *puVar9 = puVar6;
        }
        if (puVar8 == *(undefined8 **)(param_1 + 0x68)) {
          *(undefined8 **)(param_1 + 0x68) = puVar9;
        }
        *puVar8 = *(undefined8 *)(param_1 + 0x70);
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        *(undefined8 **)(param_1 + 0x70) = puVar8;
        plVar2 = (longlong *)plVar4[1];
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0x14);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 0x18))();
        }
        (**(code **)(*plVar4 + 8))(plVar4,0);
        AK::MemoryMgr::Free(0,plVar4);
        goto joined_r0x000145082ca1;
      }
    }
    puVar6 = (undefined8 *)*puVar8;
    puVar9 = puVar8;
  } while( true );
}



// FUNCTION 145082e50 FUN_145082e50 body=240 status=ok
// SIG undefined FUN_145082e50(void)

undefined8 FUN_145082e50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (param_2 != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x38);
    puVar3 = (undefined8 *)0x0;
    while (puVar4 = puVar5, puVar4 != (undefined8 *)0x0) {
      lVar1 = puVar4[2];
      lVar2 = *(longlong *)(lVar1 + 8);
      if (lVar1 == param_2) {
        iVar6 = 0;
        if (*(short *)(lVar2 + 0x34) == 0x503) {
          iVar6 = *(int *)(lVar2 + 0xe8) + -1;
          *(undefined4 *)(lVar2 + 0xe8) = 0;
        }
        FUN_145083510(param_1,*(undefined4 *)(lVar2 + 0x30),lVar1,iVar6);
        if (puVar4 == *(undefined8 **)(param_1 + 0x38)) {
          *(undefined8 *)(param_1 + 0x38) = *puVar4;
        }
        else {
          *puVar3 = *puVar4;
        }
        if (puVar4 == *(undefined8 **)(param_1 + 0x40)) {
          *(undefined8 **)(param_1 + 0x40) = puVar3;
        }
        *puVar4 = *(undefined8 *)(param_1 + 0x48);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        *(undefined8 **)(param_1 + 0x48) = puVar4;
        return 1;
      }
      puVar3 = puVar4;
      puVar5 = (undefined8 *)*puVar4;
    }
    for (puVar3 = *(undefined8 **)(param_1 + 0x60); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      lVar1 = puVar3[2];
      if (lVar1 == param_2) {
        if (*(short *)(*(longlong *)(lVar1 + 8) + 0x34) == 0x503) {
          *(int *)(lVar1 + 0x34) =
               *(int *)(lVar1 + 0x34) + *(int *)(*(longlong *)(lVar1 + 8) + 0xe8);
          return 1;
        }
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
        return 1;
      }
    }
  }
  return 1;
}



// FUNCTION 145082f40 FUN_145082f40 body=498 status=ok
// SIG undefined FUN_145082f40(void)

undefined8 FUN_145082f40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 local_b8 [20];
  undefined4 local_68 [20];
  
  if (param_2 != (longlong *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    puVar5 = (undefined8 *)0x0;
    while (puVar4 = puVar6, puVar4 != (undefined8 *)0x0) {
      if (param_2 == (longlong *)puVar4[2]) {
        local_b8[0] = 0;
        if (*(short *)(param_2[1] + 0x34) == 0x403) {
LAB_145082fca:
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_b8);
        }
        else if (*(short *)(param_2[1] + 0x34) == 0x503) {
          FUN_1453726c0();
          goto LAB_145082fca;
        }
        FUN_1450b28b0(DAT_14c790fc0,(int)param_2[6]);
        if (puVar4 == *(undefined8 **)(param_1 + 0x60)) {
          *(undefined8 *)(param_1 + 0x60) = *puVar4;
        }
        else {
          *puVar5 = *puVar4;
        }
        if (puVar4 == *(undefined8 **)(param_1 + 0x68)) {
          *(undefined8 **)(param_1 + 0x68) = puVar5;
        }
        *puVar4 = *(undefined8 *)(param_1 + 0x70);
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        *(undefined8 **)(param_1 + 0x70) = puVar4;
        plVar3 = (longlong *)param_2[1];
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 0x18))();
        }
        (**(code **)(*param_2 + 8))(param_2,0);
        AK::MemoryMgr::Free(0,param_2);
        break;
      }
      puVar5 = puVar4;
      puVar6 = (undefined8 *)*puVar4;
    }
    puVar6 = *(undefined8 **)(param_1 + 0x38);
    puVar5 = (undefined8 *)0x0;
    while (puVar4 = puVar6, puVar4 != (undefined8 *)0x0) {
      if (param_2 == (longlong *)puVar4[2]) {
        local_68[0] = 0;
        if (*(short *)(param_2[1] + 0x34) != 0x403) {
          if (*(short *)(param_2[1] + 0x34) != 0x503) goto LAB_145083099;
          FUN_1453726c0();
        }
        (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_68);
LAB_145083099:
        FUN_1450b28b0(DAT_14c790fc0,(int)param_2[6]);
        if (puVar4 == *(undefined8 **)(param_1 + 0x38)) {
          *(undefined8 *)(param_1 + 0x38) = *puVar4;
        }
        else {
          *puVar5 = *puVar4;
        }
        if (puVar4 == *(undefined8 **)(param_1 + 0x40)) {
          *(undefined8 **)(param_1 + 0x40) = puVar5;
        }
        *puVar4 = *(undefined8 *)(param_1 + 0x48);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        *(undefined8 **)(param_1 + 0x48) = puVar4;
        plVar3 = (longlong *)param_2[1];
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 0x18))();
        }
        (**(code **)(*param_2 + 8))(param_2,0);
        AK::MemoryMgr::Free(0,param_2);
        return 1;
      }
      puVar5 = puVar4;
      puVar6 = (undefined8 *)*puVar4;
    }
  }
  return 1;
}



// FUNCTION 145083140 FUN_145083140 body=334 status=ok
// SIG undefined FUN_145083140(void)

/* WARNING: Removing unreachable block (ram,0x0001450831a1) */

undefined1 FUN_145083140(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined4 local_58 [20];
  
  uVar7 = 0;
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  if (puVar6 == (undefined8 *)0x0) {
    return 0;
  }
  do {
    if (*(uint *)(param_1 + 0x88) < *(uint *)(puVar6 + 1)) {
      return uVar7;
    }
    plVar3 = (longlong *)puVar6[2];
    *(undefined8 *)(param_1 + 0x38) = *puVar6;
    if (puVar6 == *(undefined8 **)(param_1 + 0x40)) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    *puVar6 = *(undefined8 *)(param_1 + 0x48);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    *(undefined8 **)(param_1 + 0x48) = puVar6;
    local_58[0] = 0;
    if ((*(short *)(plVar3[1] + 0x34) == 0x403) ||
       ((*(short *)(plVar3[1] + 0x34) == 0x503 && (cVar5 = FUN_1453726c0(), cVar5 != '\0')))) {
      (**(code **)(*(longlong *)plVar3[1] + 0x50))((longlong *)plVar3[1],local_58);
    }
    (**(code **)(*(longlong *)plVar3[1] + 0x38))((longlong *)plVar3[1],plVar3);
    if ((int)plVar3[6] != 0) {
      FUN_1450b28b0(DAT_14c790fc0);
    }
    plVar4 = (longlong *)plVar3[1];
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 0x18))();
    }
    (**(code **)(*plVar3 + 8))(plVar3,0);
    AK::MemoryMgr::Free(0,plVar3);
    DAT_14c7fdcb8 = DAT_14c7fdcb8 + 1;
    uVar7 = 1;
    puVar6 = *(undefined8 **)(param_1 + 0x38);
  } while (puVar6 != (undefined8 *)0x0);
  return 1;
}



// FUNCTION 145083290 FUN_145083290 body=518 status=ok
// SIG undefined FUN_145083290(void)

void FUN_145083290(longlong param_1)

{
  int iVar1;
  ushort *puVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong *plVar5;
  int *piVar6;
  ushort *puVar7;
  void *pvVar8;
  ushort *puVar9;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  puVar2 = *(ushort **)(param_1 + 0x18);
  if (puVar7 != puVar2) {
    do {
      puVar9 = (ushort *)0x0;
      if (puVar7 != puVar2) {
        puVar9 = puVar7;
      }
      switch(puVar9[1]) {
      case 1:
        FUN_1450b28b0(DAT_14c790fc0,*(undefined4 *)(puVar9 + 6));
        plVar5 = *(longlong **)(puVar9 + 0x14);
        LOCK();
        piVar4 = (int *)((longlong)plVar5 + 0x14);
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plVar5 + 0x18))();
        }
        if (*(longlong *)(puVar9 + 10) != 0) {
          FUN_144d4a460();
        }
        break;
      case 0x12:
        if (*(void **)(puVar9 + 6) != (void *)0x0) {
          AK::MemoryMgr::Free(0,*(void **)(puVar9 + 6));
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
        }
        break;
      case 0x19:
        if (*(int *)(puVar9 + 6) == 3) {
          FUN_1450b28b0(DAT_14c790fc0,*(undefined4 *)(*(longlong *)(puVar9 + 2) + 0x74));
          plVar5 = *(longlong **)(puVar9 + 2);
          LOCK();
          piVar4 = (int *)((longlong)plVar5 + 0x14);
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        plVar5 = *(longlong **)(puVar9 + 2);
        goto LAB_14508338b;
      case 0x23:
        FUN_1450b28b0(DAT_14c790fc0,*(undefined4 *)(puVar9 + 0xc));
      case 0x22:
      case 0x28:
        plVar5 = *(longlong **)(puVar9 + 6);
LAB_14508338b:
        LOCK();
        piVar4 = (int *)((longlong)plVar5 + 0x14);
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plVar5 + 0x18))();
        }
        break;
      case 0x24:
        plVar5 = *(longlong **)(puVar9 + 6);
        if (plVar5 != (longlong *)0x0) goto LAB_14508338b;
        break;
      case 0x2b:
        AK::MemoryMgr::Free(0,*(void **)(puVar9 + 2));
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        break;
      case 0x32:
        pvVar8 = *(void **)(puVar9 + 2);
        goto LAB_14508346a;
      case 0x3a:
        piVar4 = *(int **)(param_1 + 0xc0);
        piVar6 = piVar4 + (ulonglong)*(uint *)(param_1 + 200) * 8;
        for (; (piVar4 != piVar6 && (*piVar4 != *(int *)(puVar9 + 2))); piVar4 = piVar4 + 8) {
        }
        puVar7 = (ushort *)(piVar4 + 2);
        if (piVar4 == piVar6) {
          puVar7 = (ushort *)0x0;
        }
        if (puVar7 != (ushort *)0x0) {
          (**(code **)(puVar7 + 4))(puVar9 + 4,*puVar9 - 4);
        }
        break;
      case 0x3e:
        pvVar8 = *(void **)(puVar9 + 10);
LAB_14508346a:
        if (pvVar8 != (void *)0x0) {
          AK::MemoryMgr::Free(0,pvVar8);
        }
        break;
      case 0x40:
        uVar3 = ((ulonglong)(*(int *)(param_1 + 0x30) + 3) & 0xfffffffc) + (longlong)puVar7;
        goto LAB_14508333f;
      }
      uVar3 = ((ulonglong)*puVar9 + 3 & 0xfffffffc) + *(longlong *)(param_1 + 0x10);
LAB_14508333f:
      if (*(ulonglong *)(param_1 + 0x28) <= uVar3) {
        uVar3 = *(ulonglong *)(param_1 + 0x20);
      }
      LOCK();
      *(ulonglong *)(param_1 + 0x10) = uVar3;
      UNLOCK();
      puVar2 = *(ushort **)(param_1 + 0x18);
      puVar7 = *(ushort **)(param_1 + 0x10);
    } while (puVar7 != puVar2);
  }
  return;
}



// FUNCTION 145083510 FUN_145083510 body=189 status=ok
// SIG undefined FUN_145083510(void)

void FUN_145083510(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_res18 [2];
  undefined4 local_58 [20];
  
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((longlong)param_3 + 0x34) = param_4;
  local_res18[0] = param_3;
  iVar3 = FUN_145084df0(param_1 + 0x60,param_2,local_res18);
  if (iVar3 == 1) {
    return;
  }
  local_58[0] = 0;
  if (*(short *)(param_3[1] + 0x34) != 0x403) {
    if (*(short *)(param_3[1] + 0x34) != 0x503) goto LAB_14508357d;
    FUN_1453726c0();
  }
  (**(code **)(*(longlong *)param_3[1] + 0x50))((longlong *)param_3[1],local_58);
LAB_14508357d:
  FUN_1450b28b0(DAT_14c790fc0,(int)param_3[6]);
  plVar2 = (longlong *)param_3[1];
  LOCK();
  piVar1 = (int *)((longlong)plVar2 + 0x14);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)(*plVar2 + 0x18))();
  }
  plVar2 = local_res18[0];
  (**(code **)(*local_res18[0] + 8))(local_res18[0],0);
  AK::MemoryMgr::Free(0,plVar2);
  return;
}



// FUNCTION 1450835d0 FUN_1450835d0 body=190 status=ok
// SIG undefined FUN_1450835d0(void)

void FUN_1450835d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_res10 [3];
  undefined4 local_58 [20];
  
  *(int *)(param_2 + 2) = (int)param_2[2] + (*(int *)(param_1 + 0x88) - (int)param_2[3]);
  local_res10[0] = param_2;
  iVar3 = FUN_145084df0(param_1 + 0x38,(int)param_2[2],local_res10);
  if (iVar3 == 1) {
    return;
  }
  local_58[0] = 0;
  if (*(short *)(param_2[1] + 0x34) != 0x403) {
    if (*(short *)(param_2[1] + 0x34) != 0x503) goto LAB_14508363e;
    FUN_1453726c0();
  }
  (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_58);
LAB_14508363e:
  FUN_1450b28b0(DAT_14c790fc0,(int)param_2[6]);
  plVar2 = (longlong *)param_2[1];
  LOCK();
  piVar1 = (int *)((longlong)plVar2 + 0x14);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)(*plVar2 + 0x18))();
  }
  plVar2 = local_res10[0];
  (**(code **)(*local_res10[0] + 8))(local_res10[0],0);
  AK::MemoryMgr::Free(0,plVar2);
  return;
}



// FUNCTION 145083690 FUN_145083690 body=510 status=ok
// SIG undefined FUN_145083690(void)

void FUN_145083690(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_c8 [20];
  undefined4 local_78 [20];
  
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  puVar7 = (undefined8 *)0x0;
  while (puVar6 = puVar4, puVar6 != (undefined8 *)0x0) {
    plVar3 = (longlong *)puVar6[2];
    if ((int)plVar3[6] == param_2) {
      local_c8[0] = 0;
      if (*(short *)(plVar3[1] + 0x34) == 0x403) {
LAB_14508370b:
        (**(code **)(*(longlong *)plVar3[1] + 0x50))((longlong *)plVar3[1],local_c8);
      }
      else if (*(short *)(plVar3[1] + 0x34) == 0x503) {
        FUN_1453726c0();
        goto LAB_14508370b;
      }
      FUN_1450b28b0(DAT_14c790fc0,(int)plVar3[6]);
      puVar4 = (undefined8 *)*puVar6;
      if (puVar6 == *(undefined8 **)(param_1 + 0x38)) {
        *(undefined8 **)(param_1 + 0x38) = puVar4;
      }
      else {
        *puVar7 = puVar4;
      }
      if (puVar6 == *(undefined8 **)(param_1 + 0x40)) {
        *(undefined8 **)(param_1 + 0x40) = puVar7;
      }
      *puVar6 = *(undefined8 *)(param_1 + 0x48);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      *(undefined8 **)(param_1 + 0x48) = puVar6;
      plVar5 = (longlong *)plVar3[1];
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 0x18))();
      }
      (**(code **)(*plVar3 + 8))(plVar3,0);
      AK::MemoryMgr::Free(0,plVar3);
    }
    else {
      puVar4 = (undefined8 *)*puVar6;
      puVar7 = puVar6;
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  puVar7 = (undefined8 *)0x0;
  do {
    while( true ) {
      puVar6 = puVar4;
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      plVar3 = (longlong *)puVar6[2];
      if ((int)plVar3[6] == param_2) break;
      puVar4 = (undefined8 *)*puVar6;
      puVar7 = puVar6;
    }
    local_78[0] = 0;
    if (*(short *)(plVar3[1] + 0x34) == 0x403) {
LAB_1450837db:
      (**(code **)(*(longlong *)plVar3[1] + 0x50))((longlong *)plVar3[1],local_78);
    }
    else if (*(short *)(plVar3[1] + 0x34) == 0x503) {
      FUN_1453726c0();
      goto LAB_1450837db;
    }
    FUN_1450b28b0(DAT_14c790fc0,(int)plVar3[6]);
    puVar4 = (undefined8 *)*puVar6;
    if (puVar6 == *(undefined8 **)(param_1 + 0x60)) {
      *(undefined8 **)(param_1 + 0x60) = puVar4;
    }
    else {
      *puVar7 = puVar4;
    }
    if (puVar6 == *(undefined8 **)(param_1 + 0x68)) {
      *(undefined8 **)(param_1 + 0x68) = puVar7;
    }
    *puVar6 = *(undefined8 *)(param_1 + 0x70);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    plVar5 = (longlong *)plVar3[1];
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 0x18))();
    }
    (**(code **)(*plVar3 + 8))(plVar3,0);
    AK::MemoryMgr::Free(0,plVar3);
  } while( true );
}



// FUNCTION 145083890 FUN_145083890 body=147 status=ok
// SIG undefined FUN_145083890(void)

void FUN_145083890(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x38); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (*(short *)(*(longlong *)(puVar1[2] + 8) + 0x34) == 0x503) {
      FUN_145372700(*(longlong *)(puVar1[2] + 8),param_2);
    }
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x60); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (*(short *)(*(longlong *)(puVar1[2] + 8) + 0x34) == 0x503) {
      FUN_145372700(*(longlong *)(puVar1[2] + 8),param_2);
    }
  }
  return;
}



// FUNCTION 145083930 FUN_145083930 body=395 status=ok
// SIG undefined FUN_145083930(void)

void FUN_145083930(longlong param_1,longlong *param_2,int param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *local_res10 [3];
  undefined4 local_68 [20];
  
  local_res10[0] = param_2;
  FUN_1450b2830(DAT_14c790fc0);
  LOCK();
  *(int *)(param_2[1] + 0x14) = *(int *)(param_2[1] + 0x14) + 1;
  UNLOCK();
  iVar4 = FUN_145369a40(param_2[1]);
  uVar7 = param_3 + iVar4;
  uVar5 = uVar7 / DAT_14c72f434;
  *(undefined4 *)(local_res10[0] + 2) = *(undefined4 *)(param_1 + 0x88);
  *(uint *)((longlong)local_res10[0] + 0x14) = uVar7 - DAT_14c72f434 * uVar5;
  if (uVar5 == 0) {
LAB_1450839e2:
    if (param_4 == '\0') {
      FUN_1450879d0(param_1,local_res10[0]);
      return;
    }
  }
  else if (*(short *)(param_2[1] + 0x34) == 0x503) {
    uVar6 = DAT_14c791094;
    if (uVar5 < DAT_14c791094) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 - uVar6;
    *(uint *)((longlong)local_res10[0] + 0x14) = uVar7 - DAT_14c72f434 * uVar5;
    if (uVar5 == 0) goto LAB_1450839e2;
  }
  *(uint *)(local_res10[0] + 2) = (int)local_res10[0][2] + uVar5;
  iVar4 = FUN_145084df0(param_1 + 0x38,(int)local_res10[0][2],local_res10);
  if (iVar4 == 1) {
    local_68[0] = 0;
    if (*(short *)(param_2[1] + 0x34) == 0x403) {
LAB_145083a47:
      (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_68);
      return;
    }
    if (*(short *)(param_2[1] + 0x34) == 0x503) {
      cVar3 = FUN_1453726c0();
      if (cVar3 != '\0') goto LAB_145083a47;
    }
  }
  else {
    FUN_1450b28b0(DAT_14c790fc0,(int)param_2[6]);
    plVar2 = (longlong *)param_2[1];
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0x14);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar2 + 0x18))();
    }
    plVar2 = local_res10[0];
    (**(code **)(*local_res10[0] + 8))(local_res10[0],0);
    AK::MemoryMgr::Free(0,plVar2);
  }
  return;
}



// FUNCTION 145083ac0 FUN_145083ac0 body=566 status=ok
// SIG undefined FUN_145083ac0(void)

undefined8 FUN_145083ac0(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 local_c8 [20];
  undefined4 local_78 [20];
  
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar8 = (undefined8 *)0x0;
  while (puVar7 = puVar5, puVar7 != (undefined8 *)0x0) {
    plVar4 = (longlong *)puVar7[2];
    if ((*(int *)(plVar4[1] + 0x10) == param_2) && ((param_3 == 0 || ((int)plVar4[6] == param_3))))
    {
      local_c8[0] = 0;
      sVar3 = *(short *)(plVar4[1] + 0x34);
      if (sVar3 == 0x403) {
LAB_145083b4d:
        (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_c8);
      }
      else if (sVar3 == 0x503) {
        FUN_1453726c0();
        goto LAB_145083b4d;
      }
      FUN_1450b28b0(DAT_14c790fc0,(int)plVar4[6]);
      puVar5 = (undefined8 *)*puVar7;
      if (puVar7 == *(undefined8 **)(param_1 + 0x38)) {
        *(undefined8 **)(param_1 + 0x38) = puVar5;
      }
      else {
        *puVar8 = puVar5;
      }
      if (puVar7 == *(undefined8 **)(param_1 + 0x40)) {
        *(undefined8 **)(param_1 + 0x40) = puVar8;
      }
      *puVar7 = *(undefined8 *)(param_1 + 0x48);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      *(undefined8 **)(param_1 + 0x48) = puVar7;
      plVar6 = (longlong *)plVar4[1];
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 0x18))();
      }
      (**(code **)(*plVar4 + 8))(plVar4,0);
      AK::MemoryMgr::Free(0,plVar4);
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
      puVar8 = puVar7;
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  puVar8 = (undefined8 *)0x0;
  do {
    while( true ) {
      puVar7 = puVar5;
      if (puVar7 == (undefined8 *)0x0) {
        return 1;
      }
      plVar4 = (longlong *)puVar7[2];
      if ((*(int *)(plVar4[1] + 0x10) == param_2) && ((param_3 == 0 || ((int)plVar4[6] == param_3)))
         ) break;
      puVar5 = (undefined8 *)*puVar7;
      puVar8 = puVar7;
    }
    local_78[0] = 0;
    sVar3 = *(short *)(plVar4[1] + 0x34);
    if (sVar3 == 0x403) {
LAB_145083c3d:
      (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_78);
    }
    else if (sVar3 == 0x503) {
      FUN_1453726c0();
      goto LAB_145083c3d;
    }
    FUN_1450b28b0(DAT_14c790fc0,(int)plVar4[6]);
    puVar5 = (undefined8 *)*puVar7;
    if (puVar7 == *(undefined8 **)(param_1 + 0x60)) {
      *(undefined8 **)(param_1 + 0x60) = puVar5;
    }
    else {
      *puVar8 = puVar5;
    }
    if (puVar7 == *(undefined8 **)(param_1 + 0x68)) {
      *(undefined8 **)(param_1 + 0x68) = puVar8;
    }
    *puVar7 = *(undefined8 *)(param_1 + 0x70);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    plVar6 = (longlong *)plVar4[1];
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 0x18))();
    }
    (**(code **)(*plVar4 + 8))(plVar4,0);
    AK::MemoryMgr::Free(0,plVar4);
  } while( true );
}



// FUNCTION 145083d00 FUN_145083d00 body=105 status=ok
// SIG undefined FUN_145083d00(void)

void FUN_145083d00(longlong param_1,byte param_2,byte param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_145080f50(DAT_14c790fd8,0x38,0xc);
  *(ushort *)(lVar1 + 8) = (ushort)param_2;
  *(ushort *)(lVar1 + 10) = (ushort)param_3;
  *(undefined4 *)(lVar1 + 4) = param_4;
  LOCK();
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  UNLOCK();
  FUN_145081150(param_1,0,0);
  return;
}



// FUNCTION 145083d70 FUN_145083d70 body=62 status=ok
// SIG undefined FUN_145083d70(void)

void FUN_145083d70(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x39,0x14);
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 4) = *param_2;
  *(undefined8 *)(lVar2 + 0xc) = uVar1;
  LOCK();
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  UNLOCK();
  return;
}



// FUNCTION 145083db0 FUN_145083db0 body=17 status=ok
// SIG undefined FUN_145083db0(void)

void FUN_145083db0(undefined8 param_1)

{
  if (DAT_14c790ff5 == '\0') {
    FUN_145083dd0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 145083dd0 FUN_145083dd0 body=588 status=ok
// SIG undefined FUN_145083dd0(void)

void FUN_145083dd0(undefined8 *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined1 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [32];
  
  FUN_145072510();
  lVar1 = FUN_145071a20(local_50);
  local_res8 = 0xffffffffffffffff;
  FUN_145072680(&local_c0,&local_res8,0x10,8,"CAkAudioMgr::PerformPrologue",0,1);
  if (local_c0 != (undefined8 *)0x0) {
    local_c0[1] = param_1;
    *local_c0 = &PTR_FUN_149c23a88;
  }
  local_b8 = local_res8;
  local_res8 = 0xffffffffffffffff;
  FUN_145071ba0(local_90,&local_b8,1,*(undefined8 *)(lVar1 + 8));
  uStack_d0 = CONCAT31(uStack_d0._1_3_,param_2);
  local_res18 = 0xffffffffffffffff;
  local_d8 = param_1;
  FUN_145072680(&local_b0,&local_res18,0x18,8,"CAkAudioMgr::BeginPerform",0,1);
  if (local_b0 != (undefined8 *)0x0) {
    *local_b0 = &PTR_FUN_149c23a98;
    *(undefined4 *)(local_b0 + 1) = (undefined4)local_d8;
    *(undefined4 *)((longlong)local_b0 + 0xc) = local_d8._4_4_;
    *(undefined4 *)(local_b0 + 2) = uStack_d0;
    *(uint *)((longlong)local_b0 + 0x14) = CONCAT13(uStack_c9,CONCAT21(uStack_cb,uStack_cc));
  }
  local_a8 = local_res18;
  local_res18 = 0xffffffffffffffff;
  FUN_145071ba0(local_80,&local_a8,1,local_88);
  local_res20 = 0xffffffffffffffff;
  FUN_145072680(&local_a0,&local_res20,0x10,8,"CAkAudioMgr::EndPerform",0,1);
  if (local_a0 != (undefined8 *)0x0) {
    *local_a0 = &PTR_FUN_149c23aa8;
    *(undefined1 *)(local_a0 + 1) = local_res10;
  }
  local_98 = local_res20;
  local_res20 = 0xffffffffffffffff;
  FUN_145071ba0(local_70,&local_98,1,local_78);
  local_c8 = 0xffffffffffffffff;
  FUN_145072680(&local_d8,&local_c8,0x10,8,"CAkAudioMgr::PerformEpilogue",0,1);
  if (local_d8 != (undefined8 *)0x0) {
    local_d8[1] = param_1;
    *local_d8 = &PTR_FUN_149c23ab8;
  }
  local_d8 = (undefined8 *)local_c8;
  local_c8 = 0xffffffffffffffff;
  FUN_145071ba0(local_60,&local_d8,1,local_68);
  FUN_145072280(local_60);
  FUN_145072270();
  FUN_145072520();
  return;
}



// FUNCTION 145084020 FUN_145084020 body=1170 status=ok
// SIG undefined FUN_145084020(void)

void FUN_145084020(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined4 local_58 [2];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined2 local_39;
  longlong *local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x20);
  lVar9 = DAT_14c791060;
  do {
    if (lVar6 == 0) {
      DAT_14c791060 = lVar9;
      return;
    }
    DAT_14c791060 = lVar9;
    if (*(short *)(lVar6 + 0x34) == 0x403) {
      plVar12 = (longlong *)FUN_145369e40(lVar6);
      if (plVar12 == (longlong *)0x0) goto LAB_145084253;
      iVar3 = *(int *)(param_3 + 0x14);
      uVar5 = *(undefined4 *)(param_3 + 0x20);
      local_40 = *(undefined4 *)(param_3 + 0x1c);
      local_44 = *(undefined4 *)(param_3 + 0x18);
      local_39 = 0;
      local_3c = 0;
      local_3a = 0;
      local_50 = param_4;
      local_48 = uVar5;
      local_30 = plVar12;
      if (iVar3 == 0) {
        FUN_145081890(DAT_14c790fd8,plVar12,param_4,uVar5);
        local_58[0] = 0;
LAB_145084454:
        (**(code **)(*plVar12 + 0x80))(plVar12,local_58);
        if (param_4 == 0) {
          uVar13 = 0xffffffffffffffff;
        }
        else {
          uVar13 = *(undefined8 *)(param_4 + 0x58);
        }
        FUN_1450cb2e0(DAT_14c79c4b0,local_58[0],(int)plVar12[4],uVar13,uVar5);
      }
      else {
        if (iVar3 == 1) {
          FUN_145081ed0(DAT_14c790fd8,plVar12,param_4,1,uVar5);
          local_58[0] = 1;
          goto LAB_145084454;
        }
        if (iVar3 == 2) {
          FUN_145082360(DAT_14c790fd8,plVar12,param_4,0,uVar5);
          local_58[0] = 2;
          goto LAB_145084454;
        }
        if (iVar3 == 3) {
          FUN_145081470(DAT_14c790fd8,plVar12,param_4);
          local_58[0] = 3;
LAB_1450843db:
          (**(code **)(*plVar12 + 0x80))(plVar12,local_58);
        }
        else if (iVar3 == 4) {
          local_58[0] = 5;
          goto LAB_1450843db;
        }
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0x24);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(plVar12[2] + 0x18))();
      }
    }
    else {
      if (*(short *)(lVar6 + 0x34) == 0x2103) {
        uVar2 = *(uint *)(lVar6 + 0x30);
        do {
          while (iVar3 = *(int *)(lVar9 + 0x108), iVar3 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x110));
            if (*(int *)(lVar9 + 0x108) < 0) goto LAB_145084099;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x110));
          }
          LOCK();
          bVar14 = iVar3 == *(int *)(lVar9 + 0x108);
          if (bVar14) {
            *(int *)(lVar9 + 0x108) = iVar3 + 1;
          }
          UNLOCK();
        } while (!bVar14);
LAB_145084099:
        if (*(uint *)(lVar9 + 0x150) == 0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          for (plVar12 = *(longlong **)
                          (*(longlong *)(lVar9 + 0x148) +
                          ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar9 + 0x150)) * 8);
              plVar12 != (longlong *)0x0; plVar12 = (longlong *)plVar12[1]) {
            if (*(uint *)(plVar12 + 2) == uVar2) goto LAB_1450840d0;
          }
          plVar12 = (longlong *)0x0;
LAB_1450840d0:
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar12 + 0x14) = *(int *)((longlong)plVar12 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar3 = *(int *)(lVar9 + 0x108);
        while (-1 < iVar3) {
          LOCK();
          bVar14 = iVar3 == *(int *)(lVar9 + 0x108);
          if (bVar14) {
            *(int *)(lVar9 + 0x108) = iVar3 + -1;
          }
          UNLOCK();
          if (bVar14) {
            if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar9 + 0x138))) {
              SetEvent(*(HANDLE *)(lVar9 + 0x140));
            }
            goto LAB_145084134;
          }
          iVar3 = *(int *)(lVar9 + 0x108);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x110));
LAB_145084134:
        if (plVar12 != (longlong *)0x0) {
          FUN_145084020(param_1,plVar12,param_3);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0x14);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
        }
      }
      lVar9 = DAT_14c790fd8;
      iVar3 = *(int *)(param_3 + 0x14);
      if (iVar3 == 0) {
LAB_145084181:
        FUN_145083ac0(DAT_14c790fd8,*(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(param_3 + 0x20));
      }
      else if (iVar3 == 1) {
        iVar3 = *(int *)(param_3 + 0x20);
        iVar4 = *(int *)(lVar6 + 0x10);
        for (puVar8 = *(undefined8 **)(DAT_14c790fd8 + 0x60); puVar8 != (undefined8 *)0x0;
            puVar8 = (undefined8 *)*puVar8) {
          lVar7 = puVar8[2];
          if ((iVar4 == *(int *)(*(longlong *)(lVar7 + 8) + 0x10)) &&
             ((iVar3 == 0 || (*(int *)(lVar7 + 0x30) == iVar3)))) {
            *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
          }
        }
        puVar8 = *(undefined8 **)(lVar9 + 0x38);
        puVar11 = (undefined8 *)0x0;
        while (puVar10 = puVar8, puVar10 != (undefined8 *)0x0) {
          lVar7 = *(longlong *)(puVar10[2] + 8);
          if ((iVar4 == *(int *)(lVar7 + 0x10)) &&
             ((iVar3 == 0 || (*(int *)(puVar10[2] + 0x30) == iVar3)))) {
            FUN_145083510(lVar9,*(undefined4 *)(lVar7 + 0x30));
            puVar8 = (undefined8 *)*puVar10;
            if (puVar10 == *(undefined8 **)(lVar9 + 0x38)) {
              *(undefined8 **)(lVar9 + 0x38) = puVar8;
            }
            else {
              *puVar11 = puVar8;
            }
            if (puVar10 == *(undefined8 **)(lVar9 + 0x40)) {
              *(undefined8 **)(lVar9 + 0x40) = puVar11;
            }
            *puVar10 = *(undefined8 *)(lVar9 + 0x48);
            *(int *)(lVar9 + 0x5c) = *(int *)(lVar9 + 0x5c) + -1;
            *(undefined8 **)(lVar9 + 0x48) = puVar10;
          }
          else {
            puVar8 = (undefined8 *)*puVar10;
            puVar11 = puVar10;
          }
        }
      }
      else {
        if (iVar3 == 2) {
          iVar3 = *(int *)(param_3 + 0x20);
          iVar4 = *(int *)(lVar6 + 0x10);
          puVar8 = *(undefined8 **)(DAT_14c790fd8 + 0x60);
          puVar11 = (undefined8 *)0x0;
joined_r0x0001450841d2:
          do {
            puVar10 = puVar8;
            if (puVar10 == (undefined8 *)0x0) goto LAB_145084253;
            lVar7 = puVar10[2];
            if ((*(int *)(*(longlong *)(lVar7 + 8) + 0x10) == iVar4) &&
               ((iVar3 == 0 || (*(int *)(lVar7 + 0x30) == iVar3)))) {
              if (*(int *)(lVar7 + 0x34) == 0) {
                FUN_1450835d0(lVar9,lVar7);
                puVar8 = (undefined8 *)*puVar10;
                if (puVar10 == *(undefined8 **)(lVar9 + 0x60)) {
                  *(undefined8 **)(lVar9 + 0x60) = puVar8;
                }
                else {
                  *puVar11 = puVar8;
                }
                if (puVar10 == *(undefined8 **)(lVar9 + 0x68)) {
                  *(undefined8 **)(lVar9 + 0x68) = puVar11;
                }
                *puVar10 = *(undefined8 *)(lVar9 + 0x70);
                *(int *)(lVar9 + 0x84) = *(int *)(lVar9 + 0x84) + -1;
                *(undefined8 **)(lVar9 + 0x70) = puVar10;
                goto joined_r0x0001450841d2;
              }
              *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + -1;
            }
            puVar8 = (undefined8 *)*puVar10;
            puVar11 = puVar10;
          } while( true );
        }
        if (iVar3 == 3) goto LAB_145084181;
      }
    }
LAB_145084253:
    lVar6 = *(longlong *)(lVar6 + 0x18);
    lVar9 = DAT_14c791060;
  } while( true );
}



// FUNCTION 1450844c0 FUN_1450844c0 body=536 status=ok
// SIG undefined FUN_1450844c0(void)

void FUN_1450844c0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  lVar6 = DAT_14c791060;
  do {
    if (lVar3 == 0) {
      DAT_14c791060 = lVar6;
      return;
    }
    DAT_14c791060 = lVar6;
    if (*(short *)(lVar3 + 0x34) == 0x403) {
      plVar5 = (longlong *)FUN_145369e40(lVar3);
      if (plVar5 != (longlong *)0x0) {
        iVar4 = (**(code **)(*plVar5 + 0x70))(plVar5);
        if (((iVar4 - 2U < 4) && (param_4 != 0)) && (DAT_14c79c4b0 != 0)) {
          FUN_1450cb3e0(DAT_14c79c4b0,(int)plVar5[4],*(undefined8 *)(param_4 + 0x58),
                        *(undefined4 *)(param_3 + 0x14),param_3 + 0x1c,
                        *(undefined2 *)(param_3 + 0x1a),*(short *)(param_3 + 0x18) != 0);
        }
        plVar7 = plVar5 + 2;
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0x24);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          lVar6 = *plVar7;
LAB_1450846a0:
          (**(code **)(lVar6 + 0x18))(plVar7);
        }
      }
    }
    else if (*(short *)(lVar3 + 0x34) == 0x2103) {
      uVar2 = *(uint *)(lVar3 + 0x30);
      do {
        while (iVar4 = *(int *)(lVar6 + 0x108), iVar4 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x110));
          if (*(int *)(lVar6 + 0x108) < 0) goto LAB_145084538;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x110));
        }
        LOCK();
        bVar8 = iVar4 == *(int *)(lVar6 + 0x108);
        if (bVar8) {
          *(int *)(lVar6 + 0x108) = iVar4 + 1;
        }
        UNLOCK();
      } while (!bVar8);
LAB_145084538:
      if (*(uint *)(lVar6 + 0x150) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        for (plVar7 = *(longlong **)
                       (*(longlong *)(lVar6 + 0x148) +
                       ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar6 + 0x150)) * 8);
            plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]) {
          if (*(uint *)(plVar7 + 2) == uVar2) goto LAB_145084568;
        }
        plVar7 = (longlong *)0x0;
LAB_145084568:
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar4 = *(int *)(lVar6 + 0x108);
      while (-1 < iVar4) {
        LOCK();
        bVar8 = iVar4 == *(int *)(lVar6 + 0x108);
        if (bVar8) {
          *(int *)(lVar6 + 0x108) = iVar4 + -1;
        }
        UNLOCK();
        if (bVar8) {
          if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar6 + 0x138))) {
            SetEvent(*(HANDLE *)(lVar6 + 0x140));
          }
          goto LAB_1450845d4;
        }
        iVar4 = *(int *)(lVar6 + 0x108);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x110));
LAB_1450845d4:
      if (plVar7 != (longlong *)0x0) {
        FUN_1450844c0(param_1,plVar7,param_3,param_4);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0x14);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          lVar6 = *plVar7;
          goto LAB_1450846a0;
        }
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x18);
    lVar6 = DAT_14c791060;
  } while( true );
}



// FUNCTION 1450846e0 FUN_1450846e0 body=581 status=ok
// SIG undefined FUN_1450846e0(void)

void FUN_1450846e0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  
  if (param_2 == 0) {
    if (DAT_14c79c4b0 != 0) {
      if (param_4 == 0) {
        FUN_1450cb5b0(DAT_14c79c4b0,0,0xffffffffffffffff,*(undefined4 *)(param_3 + 0x14));
        return;
      }
      FUN_1450cb5b0(DAT_14c79c4b0,0,*(undefined8 *)(param_4 + 0x58),*(undefined4 *)(param_3 + 0x14))
      ;
      return;
    }
  }
  else {
    lVar5 = DAT_14c791060;
    for (lVar4 = *(longlong *)(param_2 + 0x20); DAT_14c791060 = lVar5, lVar4 != 0;
        lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (*(short *)(lVar4 + 0x34) == 0x403) {
        lVar5 = FUN_145369e40(lVar4);
        if (lVar5 != 0) {
          if (DAT_14c79c4b0 != 0) {
            if (param_4 == 0) {
              uVar7 = 0xffffffffffffffff;
            }
            else {
              uVar7 = *(undefined8 *)(param_4 + 0x58);
            }
            FUN_1450cb5b0(DAT_14c79c4b0,*(undefined4 *)(lVar5 + 0x20),uVar7,
                          *(undefined4 *)(param_3 + 0x14));
          }
          plVar6 = (longlong *)(lVar5 + 0x10);
          LOCK();
          piVar1 = (int *)(lVar5 + 0x24);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            lVar5 = *plVar6;
LAB_1450848ea:
            (**(code **)(lVar5 + 0x18))(plVar6);
          }
        }
      }
      else if (*(short *)(lVar4 + 0x34) == 0x2103) {
        uVar2 = *(uint *)(lVar4 + 0x30);
        do {
          while (iVar3 = *(int *)(lVar5 + 0x108), iVar3 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x110));
            if (*(int *)(lVar5 + 0x108) < 0) goto LAB_1450847b7;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x110));
          }
          LOCK();
          bVar8 = iVar3 == *(int *)(lVar5 + 0x108);
          if (bVar8) {
            *(int *)(lVar5 + 0x108) = iVar3 + 1;
          }
          UNLOCK();
        } while (!bVar8);
LAB_1450847b7:
        if (*(uint *)(lVar5 + 0x150) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          for (plVar6 = *(longlong **)
                         (*(longlong *)(lVar5 + 0x148) +
                         ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar5 + 0x150)) * 8);
              plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[1]) {
            if (*(uint *)(plVar6 + 2) == uVar2) goto LAB_1450847e7;
          }
          plVar6 = (longlong *)0x0;
LAB_1450847e7:
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar6 + 0x14) = *(int *)((longlong)plVar6 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar3 = *(int *)(lVar5 + 0x108);
        while (-1 < iVar3) {
          LOCK();
          bVar8 = iVar3 == *(int *)(lVar5 + 0x108);
          if (bVar8) {
            *(int *)(lVar5 + 0x108) = iVar3 + -1;
          }
          UNLOCK();
          if (bVar8) {
            if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar5 + 0x138))) {
              SetEvent(*(HANDLE *)(lVar5 + 0x140));
            }
            goto LAB_145084854;
          }
          iVar3 = *(int *)(lVar5 + 0x108);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x110));
LAB_145084854:
        if (plVar6 != (longlong *)0x0) {
          FUN_1450846e0(param_1,plVar6,param_3,param_4);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0x14);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            lVar5 = *plVar6;
            goto LAB_1450848ea;
          }
        }
      }
      lVar5 = DAT_14c791060;
    }
  }
  return;
}



// FUNCTION 145084930 FUN_145084930 body=38 status=ok
// SIG undefined FUN_145084930(void)

void FUN_145084930(undefined8 param_1)

{
  if (DAT_14c791018 != (code *)0x0) {
    (*DAT_14c791018)(param_1,1);
  }
  FUN_1450c67b0(param_1);
  return;
}



// FUNCTION 145084960 FUN_145084960 body=416 status=ok
// SIG undefined FUN_145084960(void)

undefined8 FUN_145084960(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [16];
  
  lVar1 = FUN_145071a20(local_38);
  local_res8 = 0xffffffffffffffff;
  FUN_145072680(&local_res20,&local_res8,0x10,8,"CAkAudioMgr::BeginPerformIteration",0,1);
  if (local_res20 != (undefined8 *)0x0) {
    local_res20[1] = param_1;
    *local_res20 = &PTR_FUN_149c23ac8;
  }
  local_78 = local_res8;
  local_res8 = 0xffffffffffffffff;
  FUN_145071ba0(local_58,&local_78,1,*(undefined8 *)(lVar1 + 8));
  local_res10 = 0xffffffffffffffff;
  FUN_145072680(&local_70,&local_res10,0x10,8,"CAkAudioMgr::ProcessMsgQueue",0,1);
  if (local_70 != (undefined8 *)0x0) {
    local_70[1] = param_1;
    *local_70 = &PTR_FUN_149c23ad8;
  }
  local_68 = local_res10;
  local_res10 = 0xffffffffffffffff;
  FUN_145071ba0(local_48,&local_68,1,local_50);
  local_res18 = (undefined8 *)0xffffffffffffffff;
  FUN_145072680(&local_60,&local_res18,0x10,8,"CAkAudioMgr::ProcessPlayCmds",0,1);
  if (local_60 != (undefined8 *)0x0) {
    local_60[1] = param_1;
    *local_60 = &PTR_FUN_149c23ae8;
  }
  local_60 = local_res18;
  local_res18 = (undefined8 *)0xffffffffffffffff;
  FUN_145071ba0(param_2,&local_60,1,local_40);
  return param_2;
}



// FUNCTION 145084b00 FUN_145084b00 body=192 status=ok
// SIG undefined FUN_145084b00(void)

short * FUN_145084b00(longlong param_1,uint *param_2)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  bool bVar4;
  
  LOCK();
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  UNLOCK();
  *param_2 = *param_2 + 3 & 0xfffffffc;
  do {
    while( true ) {
      while( true ) {
        psVar3 = *(short **)(param_1 + 0x18);
        psVar2 = *(short **)(param_1 + 0x10);
        if (psVar2 <= psVar3) break;
        if ((ulonglong)((longlong)psVar2 - (longlong)psVar3) <= (ulonglong)(*param_2 + 4))
        goto LAB_145084bb4;
        LOCK();
        bVar4 = psVar3 == *(short **)(param_1 + 0x18);
        if (bVar4) {
          *(ulonglong *)(param_1 + 0x18) = (longlong)psVar3 + (ulonglong)*param_2;
        }
        UNLOCK();
        if (bVar4) goto LAB_145084ba9;
      }
      uVar1 = *param_2;
      if ((ulonglong)(uVar1 + 4) < (ulonglong)(*(longlong *)(param_1 + 0x28) - (longlong)psVar3))
      break;
      if ((ulonglong)((longlong)psVar2 - *(longlong *)(param_1 + 0x20)) <= (ulonglong)(uVar1 + 4))
      goto LAB_145084bb4;
      LOCK();
      bVar4 = psVar3 == *(short **)(param_1 + 0x18);
      if (bVar4) {
        *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar1 + *(longlong *)(param_1 + 0x20);
      }
      UNLOCK();
      if (bVar4) {
        if (psVar3 + 2 <= *(short **)(param_1 + 0x28)) {
          psVar3[1] = 0x40;
          *psVar3 = *(short *)(param_1 + 0x28) - (short)psVar3;
        }
        psVar3 = *(short **)(param_1 + 0x20);
        goto LAB_145084ba9;
      }
    }
    LOCK();
    bVar4 = psVar3 == *(short **)(param_1 + 0x18);
    if (bVar4) {
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar1 + (longlong)psVar3;
    }
    UNLOCK();
  } while (!bVar4);
LAB_145084ba9:
  if (psVar3 != (short *)0x0) {
    return psVar3;
  }
LAB_145084bb4:
  LOCK();
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  UNLOCK();
  return (short *)0x0;
}



// FUNCTION 145084bc0 FUN_145084bc0 body=364 status=ok
// SIG undefined FUN_145084bc0(void)

ulonglong FUN_145084bc0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = thunk_FUN_1450a18d0();
  uVar2 = (uint)(200 / (longlong)DAT_14c72f428);
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = (ulonglong)uVar2;
  if (DAT_14c790ff5 != '\0') {
    fVar5 = 0.0;
    if (0.0 < DAT_14c791030) {
      fVar5 = ((float)DAT_14c72f42c * DAT_14c791030) / (float)DAT_14c72f434 +
              *(float *)(param_1 + 0xb8);
      uVar3 = (ulonglong)fVar5;
      fVar5 = fVar5 - (float)(uVar3 & 0xffffffff);
    }
    *(float *)(param_1 + 0xb8) = fVar5;
    return uVar3 & 0xffffffff;
  }
  if (DAT_14c79bf64 == '\0') {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    return uVar3;
  }
  if ((DAT_14c79bf68 == 2) && (DAT_14c72f2c0 == '\0')) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    return 1;
  }
  if (*(longlong *)(param_1 + 0xa8) < *(longlong *)(param_1 + 0xa0)) {
    return 0;
  }
  fVar5 = ((float)(*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0)) / DAT_14c79c4d4) *
          ((float)DAT_14c72f42c / (float)DAT_14c72f434) * 0.001 + *(float *)(param_1 + 0xb8);
  uVar3 = (ulonglong)fVar5;
  if ((uint)uVar3 != 0) {
    *(float *)(param_1 + 0xb8) = fVar5 - (float)(uVar3 & 0xffffffff);
  }
  uVar4 = uVar3 & 0xffffffff;
  if ((uint)DAT_14c79c018 < (uint)uVar3) {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 145084d30 FUN_145084d30 body=186 status=ok
// SIG undefined FUN_145084d30(void)

void FUN_145084d30(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  while (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0) {
    *param_1 = *plVar1;
    if (plVar1 == (longlong *)param_1[1]) {
      param_1[1] = 0;
    }
    *plVar1 = param_1[2];
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    param_1[2] = (longlong)plVar1;
  }
  puVar2 = (undefined8 *)param_1[2];
  while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    if ((puVar3 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 3 <= puVar3)) {
      AK::MemoryMgr::Free(0,puVar3);
    }
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
    param_1[3] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 145084df0 FUN_145084df0 body=236 status=ok
// SIG undefined FUN_145084df0(void)

undefined4 FUN_145084df0(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)param_1[2];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = AK::MemoryMgr::Malloc(0,0x18);
    if (plVar2 == (longlong *)0x0) {
      return 2;
    }
    *plVar2 = param_1[2];
    param_1[2] = (longlong)plVar2;
  }
  *(uint *)(plVar2 + 1) = param_2;
  *(undefined8 *)(param_1[2] + 0x10) = *param_3;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
    param_1[1] = (longlong)plVar2;
    param_1[2] = *plVar2;
    *plVar2 = 0;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    *param_1 = param_1[1];
    return 1;
  }
  plVar2 = (longlong *)0x0;
  plVar3 = (longlong *)*param_1;
  do {
    plVar4 = plVar3;
    if (param_2 < *(uint *)(plVar3 + 1)) break;
    plVar4 = (longlong *)*plVar3;
    plVar2 = plVar3;
    plVar3 = plVar4;
  } while (plVar4 != (longlong *)0x0);
  puVar1 = (undefined8 *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
    param_1[1] = (longlong)puVar1;
  }
  if (plVar2 == (longlong *)0x0) {
    *param_1 = (longlong)puVar1;
  }
  else {
    *plVar2 = (longlong)puVar1;
  }
  param_1[2] = *(longlong *)param_1[2];
  *puVar1 = plVar4;
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  return 1;
}



// FUNCTION 145084ee0 FUN_145084ee0 body=10289 status=ok
// SIG undefined FUN_145084ee0(void)

ulonglong FUN_145084ee0(longlong param_1,char param_2,undefined1 *param_3)

{
  int iVar1;
  CAkRegisteredObj CVar2;
  undefined4 uVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  void *pvVar14;
  undefined8 *puVar15;
  CAkRegisteredObj *pCVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  longlong lVar19;
  int *piVar20;
  CAkRegisteredObj *pCVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int *piVar24;
  undefined7 uVar26;
  undefined1 *puVar25;
  ushort uVar27;
  CAkRegisteredObj *pCVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 *puVar31;
  CAkRegisteredObj *pCVar32;
  undefined4 uVar33;
  CAkRegisteredObj *pCVar34;
  bool bVar35;
  CAkRegisteredObj **in_stack_fffffffffffffaf8;
  uint7 uVar36;
  uint in_stack_fffffffffffffb08;
  uint3 uVar37;
  undefined1 local_4e8;
  undefined1 local_4e7;
  undefined1 local_4e6;
  undefined1 local_4e5;
  undefined1 local_4e4 [2];
  ushort local_4e2;
  int *local_4e0;
  int *local_4d8;
  uint local_4d0;
  int local_4cc;
  undefined4 local_4c8 [2];
  undefined8 local_4c0;
  undefined8 local_4b8;
  uint7 local_4b0;
  undefined1 uStack_4a9;
  undefined1 local_4a8;
  undefined8 local_4a0;
  uint local_498;
  CAkRegisteredObj *local_490;
  int *local_488;
  int *local_480;
  undefined4 local_478;
  uint uStack_474;
  undefined4 local_470;
  uint uStack_46c;
  undefined4 local_468;
  uint uStack_464;
  undefined4 local_460;
  uint uStack_45c;
  int local_458;
  undefined4 uStack_454;
  undefined4 local_450;
  uint uStack_44c;
  undefined4 local_448;
  uint uStack_444;
  undefined4 local_440;
  uint uStack_43c;
  undefined4 local_438;
  uint uStack_434;
  CAkRegisteredObj *local_430;
  CAkRegisteredObj local_428;
  undefined1 local_427;
  longlong *local_420 [2];
  CAkRegisteredObj *local_410;
  CAkRegisteredObj local_408;
  undefined1 local_407;
  undefined1 local_3f8 [16];
  undefined1 *local_3e8;
  ulonglong local_3e0;
  undefined1 local_3d8 [16];
  undefined1 *local_3c8;
  ulonglong local_3c0;
  undefined1 local_3b8 [16];
  undefined1 *local_3a8;
  ulonglong local_3a0;
  undefined4 local_398 [2];
  undefined8 local_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined2 local_37c;
  undefined1 local_37a;
  undefined2 local_379;
  undefined8 local_370;
  undefined4 local_368 [2];
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined2 local_34c;
  undefined1 local_34a;
  undefined2 local_349;
  undefined8 local_340;
  undefined4 local_338;
  longlong local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined2 local_31c;
  undefined1 local_31a;
  undefined2 local_319;
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  byte local_2fc;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined **local_2d8 [3];
  longlong local_2bc;
  undefined8 local_2b4;
  undefined8 local_2ac;
  undefined4 local_2a0;
  undefined8 *local_298;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_278;
  undefined1 local_270;
  undefined1 local_268;
  undefined8 local_260;
  CAkRegisteredObj *local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined1 local_240;
  undefined1 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined1 local_208;
  undefined8 local_200;
  CAkRegisteredObj *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  CAkRegisteredObj *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined1 local_180;
  undefined1 local_178;
  undefined8 local_170;
  CAkRegisteredObj *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined8 local_110;
  CAkRegisteredObj *local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined **local_d8 [3];
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a0;
  CAkRegisteredObj *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_54;
  
  *param_3 = 0;
  LOCK();
  UNLOCK();
  local_498 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
  if ((int)local_498 < 0) {
    local_498 = local_498 + *(int *)(param_1 + 0x30);
  }
  uVar23 = 0;
  if (local_498 != 0) {
    if (param_2 == '\0') {
      uVar23 = (ulonglong)*(uint *)(param_1 + 0x8c);
      if (*(uint *)(param_1 + 0x8c) != 0) {
LAB_145084f56:
        local_4cc = *(int *)(param_1 + 0x8c);
        bVar35 = false;
        local_498 = local_498 >> 1;
        bVar7 = false;
        local_4d0 = 0;
        do {
          uVar10 = uStack_43c;
          uVar9 = uStack_44c;
          uVar8 = uStack_464;
          uVar12 = uStack_474;
          uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffaf8 >> 0x20);
          pCVar16 = (CAkRegisteredObj *)0x0;
          while( true ) {
            piVar20 = DAT_14c791060;
            pCVar21 = *(CAkRegisteredObj **)(param_1 + 0x10);
            pCVar32 = *(CAkRegisteredObj **)(param_1 + 0x28);
            pCVar34 = pCVar16;
            if (pCVar21 != *(CAkRegisteredObj **)(param_1 + 0x18)) {
              pCVar34 = pCVar21;
            }
            local_4e2 = *(ushort *)pCVar34;
            if (pCVar21 + 4 <= pCVar32) break;
            if (pCVar21 + ((ulonglong)(*(int *)(param_1 + 0x30) + 3) & 0xfffffffc) < pCVar32) {
              LOCK();
              *(CAkRegisteredObj **)(param_1 + 0x10) =
                   pCVar21 + ((ulonglong)(*(int *)(param_1 + 0x30) + 3) & 0xfffffffc);
              UNLOCK();
            }
            else {
              LOCK();
              *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
              UNLOCK();
            }
          }
          uVar27 = *(ushort *)(pCVar34 + 2);
          if (0x41 < uVar27) goto switchD_14508500a_caseD_4;
          uVar26 = (undefined7)((ulonglong)pCVar32 >> 8);
          uVar37 = (uint3)(in_stack_fffffffffffffb08 >> 8);
          uVar36 = (uint7)((ulonglong)in_stack_fffffffffffffaf8 >> 8);
          local_490 = pCVar34;
          switch(uVar27) {
          case 0:
            uVar23 = (ulonglong)*(uint *)(param_1 + 0x8c);
            if (*(uint *)(param_1 + 0x8c) == 0) goto LAB_1450876dd;
            local_4cc = local_4cc + -1;
            LOCK();
            piVar20 = (int *)(param_1 + 0x8c);
            iVar13 = *piVar20;
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            if ((iVar13 == 1) || (local_4cc == 0)) {
              bVar7 = true;
              bVar35 = true;
            }
            else {
              bVar7 = false;
              bVar35 = false;
            }
            break;
          case 1:
            pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4));
            uVar33 = *(undefined4 *)(pCVar34 + 0x10);
            uVar3 = *(undefined4 *)(pCVar34 + 0xc);
            for (lVar19 = *(longlong *)(*(longlong *)(pCVar34 + 0x28) + 0x20); lVar19 != 0;
                lVar19 = *(longlong *)(lVar19 + 0x18)) {
              if ((*(byte *)(lVar19 + 0x34) & 1) == 0) {
                puVar15 = AK::MemoryMgr::Malloc(0,0x48);
                if (puVar15 != (undefined8 *)0x0) {
                  *(undefined8 *)((longlong)puVar15 + 0x2c) = 0;
                  *(undefined8 *)((longlong)puVar15 + 0x24) = 0;
                  *(undefined8 *)((longlong)puVar15 + 0x1c) = 0;
                  *puVar15 = &PTR_FUN_149c23928;
                  *(undefined4 *)(puVar15 + 7) = 0;
                  puVar15[8] = 0;
                  goto LAB_145085104;
                }
              }
              else if ((((pCVar16 != (CAkRegisteredObj *)0x0) && (*(longlong *)(pCVar16 + 8) != 0))
                       && (pvVar14 = AK::MemoryMgr::Malloc(0,0x48), pvVar14 != (void *)0x0)) &&
                      (puVar15 = (undefined8 *)FUN_1450807a0(pvVar14,pCVar16),
                      puVar15 != (undefined8 *)0x0)) {
LAB_145085104:
                *(undefined4 *)(puVar15 + 7) = uVar33;
                puVar15[1] = lVar19;
                *(undefined4 *)(puVar15 + 6) = uVar3;
                *(undefined8 *)((longlong)puVar15 + 0x24) = *(undefined8 *)(pCVar34 + 0x1c);
                *(undefined4 *)((longlong)puVar15 + 0x2c) = *(undefined4 *)(pCVar34 + 0x24);
                piVar20 = *(int **)(pCVar34 + 0x14);
                if (*(longlong *)((longlong)puVar15 + 0x1c) != 0) {
                  FUN_144d4a460();
                }
                if (piVar20 != (int *)0x0) {
                  *piVar20 = *piVar20 + 1;
                }
                *(int **)((longlong)puVar15 + 0x1c) = piVar20;
                FUN_145083930(DAT_14c790fd8,puVar15,0,0);
              }
            }
            FUN_1450b28b0(DAT_14c790fc0,*(undefined4 *)(pCVar34 + 0xc));
            plVar17 = *(longlong **)(pCVar34 + 0x28);
            LOCK();
            piVar20 = (int *)((longlong)plVar17 + 0x14);
            iVar13 = *piVar20;
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar17 + 0x18))();
            }
            bVar35 = bVar7;
            if (*(longlong *)(pCVar34 + 0x14) != 0) {
              FUN_144d4a460();
            }
            break;
          case 2:
            if (*(__uint64 *)(pCVar34 + 4) == 0xffffffffffffffff) {
              local_478 = *(undefined4 *)(pCVar34 + 0xc);
              in_stack_fffffffffffffb08 = (uint)uVar37 << 8;
              uStack_474 = uStack_474 & 0xffffff00;
              local_288 = 0;
              local_280 = 0;
              local_278 = 0;
              local_270 = 0xff;
              local_268 = 0xff;
              local_260 = 0;
              in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)0x0;
              FUN_14507f370(g_pGameSyncMgr,CONCAT44(uVar12,local_478) & 0xffffff00ffffffff,
                            &local_288,*(undefined4 *)(pCVar34 + 0x10),0,1,in_stack_fffffffffffffb08
                           );
              bVar35 = bVar7;
            }
            else {
              pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4));
              uVar12 = uStack_46c;
              bVar35 = bVar7;
              if (pCVar16 != (CAkRegisteredObj *)0x0) {
                local_250 = *(undefined4 *)(pCVar34 + 0x14);
                local_470 = *(undefined4 *)(pCVar34 + 0xc);
                in_stack_fffffffffffffb08 = in_stack_fffffffffffffb08 & 0xffffff00;
                uStack_46c = uStack_46c & 0xffffff00;
                local_248 = 0;
                local_240 = 0xff;
                local_238 = 0xff;
                local_230 = 0;
                in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)0x0;
                local_258 = pCVar16;
                FUN_14507f370(g_pGameSyncMgr,CONCAT44(uVar12,local_470) & 0xffffff00ffffffff,
                              &local_258,*(undefined4 *)(pCVar34 + 0x10),0,1,
                              in_stack_fffffffffffffb08);
              }
            }
            break;
          case 3:
            local_410 = pCVar34 + 0x18;
            local_408 = pCVar34[0x20];
            local_407 = 1;
            if (*(__uint64 *)(pCVar34 + 4) == 0xffffffffffffffff) {
              local_468 = *(undefined4 *)(pCVar34 + 0xc);
              in_stack_fffffffffffffaf8 = &local_410;
              in_stack_fffffffffffffb08 = (uint)uVar37 << 8;
              uStack_464 = uStack_464 & 0xffffff00;
              local_228 = 0;
              local_220 = 0;
              local_218 = 0;
              local_210 = 0xff;
              local_208 = 0xff;
              local_200 = 0;
              FUN_14507f370(g_pGameSyncMgr,CONCAT44(uVar8,local_468) & 0xffffff00ffffffff,&local_228
                            ,*(undefined4 *)(pCVar34 + 0x10),in_stack_fffffffffffffaf8,1,
                            in_stack_fffffffffffffb08);
              bVar35 = bVar7;
            }
            else {
              pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4));
              uVar12 = uStack_45c;
              bVar35 = bVar7;
              if (pCVar16 != (CAkRegisteredObj *)0x0) {
                local_1f0 = *(undefined4 *)(pCVar34 + 0x14);
                local_460 = *(undefined4 *)(pCVar34 + 0xc);
                in_stack_fffffffffffffaf8 = &local_410;
                in_stack_fffffffffffffb08 = in_stack_fffffffffffffb08 & 0xffffff00;
                uStack_45c = uStack_45c & 0xffffff00;
                local_1e8 = 0;
                local_1e0 = 0xff;
                local_1d8 = 0xff;
                local_1d0 = 0;
                local_1f8 = pCVar16;
                FUN_14507f370(g_pGameSyncMgr,CONCAT44(uVar12,local_460) & 0xffffff00ffffffff,
                              &local_1f8,*(undefined4 *)(pCVar34 + 0x10),in_stack_fffffffffffffaf8,1
                              ,in_stack_fffffffffffffb08);
              }
            }
            break;
          case 5:
            if (*(__uint64 *)(pCVar34 + 4) == 0xffffffffffffffff) {
              local_190 = *(undefined4 *)(pCVar34 + 0x10);
              local_450 = *(undefined4 *)(pCVar34 + 0xc);
              uStack_44c = uStack_44c & 0xffffff00;
              local_188 = 0;
              local_180 = 0xff;
              local_178 = 0xff;
              local_170 = 0;
              local_198 = 0;
              in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)CONCAT71(uVar36,1);
              FUN_14507f940(g_pGameSyncMgr,CONCAT44(uVar9,local_450) & 0xffffff00ffffffff,&local_198
                            ,0,in_stack_fffffffffffffaf8);
              bVar35 = bVar7;
            }
            else {
              pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4));
              uVar12 = uStack_444;
              bVar35 = bVar7;
              if (pCVar16 != (CAkRegisteredObj *)0x0) {
                local_160 = *(undefined4 *)(pCVar34 + 0x10);
                local_448 = *(undefined4 *)(pCVar34 + 0xc);
                uStack_444 = uStack_444 & 0xffffff00;
                local_158 = 0;
                local_150 = 0xff;
                local_148 = 0xff;
                local_140 = 0;
                in_stack_fffffffffffffaf8 =
                     (CAkRegisteredObj **)
                     CONCAT71((int7)((ulonglong)in_stack_fffffffffffffaf8 >> 8),1);
                local_168 = pCVar16;
                FUN_14507f940(g_pGameSyncMgr,CONCAT44(uVar12,local_448) & 0xffffff00ffffffff,
                              &local_168,0,in_stack_fffffffffffffaf8);
              }
            }
            break;
          case 6:
            local_430 = pCVar34 + 0x14;
            local_428 = pCVar34[0x1c];
            local_427 = 1;
            if (*(__uint64 *)(pCVar34 + 4) == 0xffffffffffffffff) {
              local_130 = *(undefined4 *)(pCVar34 + 0x10);
              local_440 = *(undefined4 *)(pCVar34 + 0xc);
              uStack_43c = uStack_43c & 0xffffff00;
              local_128 = 0;
              local_120 = 0xff;
              local_118 = 0xff;
              local_110 = 0;
              local_138 = 0;
              in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)CONCAT71(uVar36,1);
              FUN_14507f940(g_pGameSyncMgr,CONCAT44(uVar10,local_440) & 0xffffff00ffffffff,
                            &local_138,&local_430,in_stack_fffffffffffffaf8);
              bVar35 = bVar7;
            }
            else {
              pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4));
              uVar12 = uStack_434;
              bVar35 = bVar7;
              if (pCVar16 != (CAkRegisteredObj *)0x0) {
                local_100 = *(undefined4 *)(pCVar34 + 0x10);
                local_438 = *(undefined4 *)(pCVar34 + 0xc);
                uStack_434 = uStack_434 & 0xffffff00;
                local_f8 = 0;
                local_f0 = 0xff;
                local_e8 = 0xff;
                local_e0 = 0;
                in_stack_fffffffffffffaf8 =
                     (CAkRegisteredObj **)
                     CONCAT71((int7)((ulonglong)in_stack_fffffffffffffaf8 >> 8),1);
                local_108 = pCVar16;
                FUN_14507f940(g_pGameSyncMgr,CONCAT44(uVar12,local_438) & 0xffffff00ffffffff,
                              &local_108,&local_430,in_stack_fffffffffffffaf8);
              }
            }
            break;
          case 7:
            in_stack_fffffffffffffaf8 =
                 (CAkRegisteredObj **)CONCAT71(uVar36,*(ushort *)(pCVar34 + 0xe) != 0);
            FUN_1450768d0(DAT_14c790ff8,*(undefined4 *)(pCVar34 + 4),*(undefined4 *)(pCVar34 + 8),
                          *(ushort *)(pCVar34 + 0xc) != 0,in_stack_fffffffffffffaf8);
            bVar35 = bVar7;
            break;
          case 8:
            pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4));
            bVar35 = bVar7;
            if (pCVar16 != (CAkRegisteredObj *)0x0) {
              local_458 = *(int *)(pCVar34 + 0xc);
              local_1c0 = 0;
              local_1b8 = 0;
              local_1b0 = 0xff;
              local_1a8 = 0xff;
              local_1a0 = 0;
              uStack_454 = CONCAT31(uStack_454._1_3_,2);
              local_1c8 = pCVar16;
              if (local_458 != 0) {
                in_stack_fffffffffffffb08 = in_stack_fffffffffffffb08 & 0xffffff00;
                in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)0x0;
                FUN_14507f370(g_pGameSyncMgr,CONCAT44(uStack_454,local_458),&local_1c8,
                              *(undefined4 *)(pCVar34 + 0x10),0,1,in_stack_fffffffffffffb08);
              }
            }
            break;
          case 10:
            if (*(__uint64 *)(pCVar34 + 4) == 0xffffffffffffffff) {
              pCVar16 = (CAkRegisteredObj *)0x0;
            }
            else {
              pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4));
              bVar35 = bVar7;
              if (pCVar16 == (CAkRegisteredObj *)0x0) break;
            }
            FUN_145076870(DAT_14c790ff8,*(undefined4 *)(pCVar34 + 0xc),pCVar16);
            bVar35 = bVar7;
            break;
          case 0xb:
            FUN_1450ac040(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),pCVar34 + 0xc);
            bVar35 = bVar7;
            break;
          case 0xc:
            if (*(longlong *)(pCVar34 + 4) == -1) {
              FUN_1450ad3e0(g_pRegistryMgr,0);
              bVar35 = bVar7;
            }
            else {
              FUN_1450ac340(g_pRegistryMgr);
              bVar35 = bVar7;
            }
            break;
          case 0xd:
            local_88 = *(undefined8 *)(pCVar34 + 0xc);
            uStack_80 = *(undefined8 *)(pCVar34 + 0x14);
            CVar2 = pCVar34[0x3c];
            uVar33 = 1;
            local_78 = *(undefined8 *)(pCVar34 + 0x1c);
            uStack_70 = *(undefined8 *)(pCVar34 + 0x24);
            pCVar16 = (CAkRegisteredObj *)&local_88;
            local_68 = *(undefined4 *)(pCVar34 + 0x2c);
            uStack_64 = *(undefined4 *)(pCVar34 + 0x30);
            uStack_60 = *(undefined4 *)(pCVar34 + 0x34);
            uStack_5c = *(undefined4 *)(pCVar34 + 0x38);
            local_58 = 0x3ff3f;
            local_54 = 0x3f800000;
            in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)((ulonglong)uVar36 << 8);
            goto LAB_145085e21;
          case 0xe:
            local_3e8 = (undefined1 *)0x0;
            local_3e0 = 0;
            if (*(int *)(pCVar34 + 0x10) != 0) {
              FUN_1450772c0(local_3f8);
            }
            uVar23 = 0;
            if (*(int *)(pCVar34 + 0x10) != 0) {
              do {
                FUN_1450773d0(local_3f8,*(undefined8 *)(pCVar34 + uVar23 * 8 + 0x14),&local_4e6);
                uVar27 = (short)uVar23 + 1;
                uVar23 = (ulonglong)uVar27;
              } while ((uint)uVar27 < *(uint *)(pCVar34 + 0x10));
            }
            FUN_1450ac800(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),local_3f8,
                          *(undefined4 *)(pCVar34 + 0xc));
            bVar35 = bVar7;
            if (local_3e8 != (undefined1 *)0x0) {
              local_3e0 = local_3e0 & 0xffffffff00000000;
              puVar18 = local_3f8;
              puVar25 = local_3e8;
LAB_145085ef0:
              bVar35 = bVar7;
              if (puVar18 != puVar25) {
                AK::MemoryMgr::Free(4,puVar25);
              }
            }
            break;
          case 0x10:
            local_3c8 = (undefined1 *)0x0;
            local_3c0 = 0;
            if (*(int *)(pCVar34 + 8) != 0) {
              FUN_1450772c0(local_3d8);
            }
            uVar23 = 0;
            if (*(int *)(pCVar34 + 8) != 0) {
              do {
                FUN_1450773d0(local_3d8,*(undefined8 *)(pCVar34 + uVar23 * 8 + 0xc),&local_4e5);
                uVar27 = (short)uVar23 + 1;
                uVar23 = (ulonglong)uVar27;
              } while ((uint)uVar27 < *(uint *)(pCVar34 + 8));
            }
            FUN_1450ac910(g_pRegistryMgr,local_3d8,*(undefined4 *)(pCVar34 + 4));
            bVar35 = bVar7;
            if (local_3c8 != (undefined1 *)0x0) {
              local_3c0 = local_3c0 & 0xffffffff00000000;
              puVar18 = local_3d8;
              puVar25 = local_3c8;
              goto LAB_145085ef0;
            }
            break;
          case 0x11:
            FUN_1450acae0(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4));
            bVar35 = bVar7;
            break;
          case 0x12:
            if (*(ushort *)(pCVar34 + 0x1a) != 0) {
              pCVar16 = *(CAkRegisteredObj **)(pCVar34 + 0xc);
            }
            FUN_145077850(*(undefined8 *)(pCVar34 + 4),
                          CONCAT71(uVar26,*(ushort *)(pCVar34 + 0x18) != 0),
                          *(undefined4 *)(pCVar34 + 0x14),pCVar16);
            bVar35 = bVar7;
            if (*(void **)(pCVar34 + 0xc) != (void *)0x0) {
              AK::MemoryMgr::Free(0,*(void **)(pCVar34 + 0xc));
              *(undefined8 *)(pCVar34 + 0xc) = 0;
            }
            break;
          case 0x13:
            FUN_1450acb80(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),pCVar34 + 0x10,
                          *(undefined4 *)(pCVar34 + 0xc));
            bVar35 = bVar7;
            break;
          case 0x14:
            FUN_1450accc0(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),*(undefined8 *)(pCVar34 + 0xc)
                          ,*(undefined4 *)(pCVar34 + 0x14));
            bVar35 = bVar7;
            break;
          case 0x15:
            in_stack_fffffffffffffaf8 =
                 (CAkRegisteredObj **)CONCAT44(uVar33,*(undefined4 *)(pCVar34 + 0x18));
            FUN_1450ace70(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),*(undefined8 *)(pCVar34 + 0xc)
                          ,*(undefined4 *)(pCVar34 + 0x14),in_stack_fffffffffffffaf8);
            bVar35 = bVar7;
            break;
          case 0x16:
            in_stack_fffffffffffffaf8 =
                 (CAkRegisteredObj **)CONCAT44(uVar33,*(undefined4 *)(pCVar34 + 0x14));
            FUN_1450acf50(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),*(undefined8 *)(pCVar34 + 0xc)
                          ,pCVar34 + 0x18,in_stack_fffffffffffffaf8);
            bVar35 = bVar7;
            break;
          case 0x17:
            lVar19 = FUN_1450a19c0(*(undefined8 *)(pCVar34 + 4));
            bVar35 = bVar7;
            if (lVar19 != 0) {
              *(undefined4 *)(lVar19 + 0x4dc) = *(undefined4 *)(pCVar34 + 0xc);
            }
            break;
          case 0x18:
            pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4));
            bVar35 = bVar7;
            if (pCVar16 != (CAkRegisteredObj *)0x0) {
              FUN_1450ae190(*(undefined8 *)(pCVar34 + 0x28),pCVar16);
            }
            break;
          case 0x19:
            switch(*(undefined4 *)(pCVar34 + 0xc)) {
            case 0:
              FUN_1450ae290(*(undefined8 *)(pCVar34 + 4),*(undefined4 *)(pCVar34 + 0x10),
                            *(undefined4 *)(pCVar34 + 0x14));
              bVar35 = bVar7;
              break;
            case 1:
              FUN_1450ae4b0(*(undefined8 *)(pCVar34 + 4),*(undefined4 *)(pCVar34 + 0x10),
                            *(undefined4 *)(pCVar34 + 0x14));
              bVar35 = bVar7;
              break;
            case 2:
              FUN_1450ae760(*(undefined8 *)(pCVar34 + 4),*(undefined4 *)(pCVar34 + 0x10),
                            *(undefined4 *)(pCVar34 + 0x14));
              bVar35 = bVar7;
              break;
            case 3:
              *(undefined1 *)(*(longlong *)(pCVar34 + 4) + 0x78) = 1;
              FUN_1450b28b0(DAT_14c790fc0,*(undefined4 *)(*(longlong *)(pCVar34 + 4) + 0x74));
              plVar17 = *(longlong **)(pCVar34 + 4);
              LOCK();
              piVar20 = (int *)((longlong)plVar17 + 0x14);
              iVar13 = *piVar20;
              *piVar20 = *piVar20 + -1;
              UNLOCK();
              bVar35 = bVar7;
              if (iVar13 == 1) {
                (**(code **)(*plVar17 + 0x18))();
              }
              break;
            case 4:
              FUN_1450ae460(*(undefined8 *)(pCVar34 + 4),*(undefined4 *)(pCVar34 + 0x10),
                            *(undefined4 *)(pCVar34 + 0x14));
              bVar35 = bVar7;
              break;
            case 5:
              FUN_1450ae480(*(undefined8 *)(pCVar34 + 4));
              bVar35 = bVar7;
              break;
            case 6:
              FUN_1450aecf0(*(undefined8 *)(pCVar34 + 4));
              bVar35 = bVar7;
            }
            plVar17 = *(longlong **)(pCVar34 + 4);
            LOCK();
            piVar20 = (int *)((longlong)plVar17 + 0x14);
            iVar13 = *piVar20;
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar17 + 0x18))();
              bVar35 = bVar7;
            }
            break;
          case 0x1a:
            uVar5 = *(undefined8 *)(pCVar34 + 4);
            if (DAT_14c791010 != (code *)0x0) {
              (*DAT_14c791010)(uVar5);
            }
            FUN_1450c6550(uVar5);
            FUN_1450b63a0(uVar5,0);
            bVar35 = bVar7;
            break;
          case 0x1b:
            uVar5 = *(undefined8 *)(pCVar34 + 4);
            if (DAT_14c791018 != (code *)0x0) {
              (*DAT_14c791018)(uVar5,0);
            }
            FUN_1450c65e0(uVar5);
            bVar35 = bVar7;
            break;
          case 0x1c:
            _Var4 = *(__uint64 *)(pCVar34 + 4);
            plVar17 = (longlong *)FUN_145370cf0((_Var4 != 0xffffffffffffffff) + 0x104);
            bVar35 = bVar7;
            if (plVar17 != (longlong *)0x0) {
              if (_Var4 == 0xffffffffffffffff) {
                local_2d8[0] = &PTR_FUN_149c23928;
                local_2ac = 0;
                local_2b4 = 0;
                local_2bc = 0;
                local_2a0 = 0;
                local_298 = (undefined8 *)0x0;
                (**(code **)(*plVar17 + 0x38))(plVar17,local_2d8);
                puVar15 = local_298;
                local_2d8[0] = &PTR_FUN_149c23928;
                if (local_298 != (undefined8 *)0x0) {
                  if ((*(uint *)(local_298 + 0xc) < 2) &&
                     (*(char *)((longlong)local_298 + 100) != '\0')) {
                    bVar35 = false;
                  }
                  else {
                    bVar35 = true;
                  }
                  uVar12 = *(uint *)(local_298 + 0xc) - 1;
                  *(uint *)(local_298 + 0xc) = uVar12;
                  if ((uVar12 == 0) ||
                     (((bVar35 && (uVar12 < 2)) && (*(char *)((longlong)local_298 + 100) != '\0'))))
                  {
                    FUN_1453550a0(local_298);
                  }
                  if (*(int *)(puVar15 + 0xc) == 0) {
                    (**(code **)*puVar15)(puVar15,0);
                    AK::MemoryMgr::Free(4,puVar15);
                  }
                }
                if (local_2bc != 0) {
                  FUN_144d4a460();
                }
              }
              else {
                pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,_Var4);
                if (pCVar16 != (CAkRegisteredObj *)0x0) {
                  local_d8[0] = &PTR_FUN_149c23928;
                  local_ac = 0;
                  local_b4 = 0;
                  local_bc = 0;
                  local_a0 = 0;
                  uVar12 = *(uint *)(pCVar16 + 0x60);
                  local_98 = pCVar16;
                  if ((uVar12 < 2) && (pCVar16[100] != (CAkRegisteredObj)0x0)) {
                    *(uint *)(pCVar16 + 0x60) = uVar12 + 1;
                    if ((1 < uVar12 + 1) || (pCVar16[100] == (CAkRegisteredObj)0x0)) {
                      FUN_145355090();
                    }
                  }
                  else {
                    *(uint *)(pCVar16 + 0x60) = uVar12 + 1;
                  }
                  (**(code **)(*plVar17 + 0x38))(plVar17,local_d8);
                  FUN_145080810(local_d8);
                }
              }
              LOCK();
              piVar20 = (int *)((longlong)plVar17 + 0x14);
              iVar13 = *piVar20;
              *piVar20 = *piVar20 + -1;
              UNLOCK();
              bVar35 = bVar7;
              if (iVar13 == 1) {
                (**(code **)(*plVar17 + 0x18))(plVar17);
              }
            }
            break;
          case 0x1d:
            local_3a8 = (undefined1 *)0x0;
            local_3a0 = 0;
            if (*(int *)(pCVar34 + 0x18) != 0) {
              FUN_1450772c0(local_3b8);
            }
            uVar23 = 0;
            if (*(int *)(pCVar34 + 0x18) != 0) {
              do {
                FUN_1450773d0(local_3b8,*(undefined8 *)(pCVar34 + uVar23 * 8 + 0x1c),local_4e4);
                uVar27 = (short)uVar23 + 1;
                uVar23 = (ulonglong)uVar27;
              } while ((uint)uVar27 < *(uint *)(pCVar34 + 0x18));
            }
            FUN_1450a1420(pCVar34 + 4,local_3b8);
            bVar35 = bVar7;
            if (local_3a8 != (undefined1 *)0x0) {
              local_3a0 = local_3a0 & 0xffffffff00000000;
              puVar18 = local_3b8;
              puVar25 = local_3a8;
              goto LAB_145085ef0;
            }
            break;
          case 0x1e:
            FUN_1450a1510(*(undefined8 *)(pCVar34 + 4),CONCAT71(uVar26,1));
            bVar35 = bVar7;
            break;
          case 0x1f:
            iVar13 = FUN_1450a1630(pCVar34 + 4,*(undefined8 *)(pCVar34 + 0x14));
            goto LAB_145086946;
          case 0x20:
            uVar12 = *(uint *)(pCVar34 + 4);
            do {
              while (iVar13 = piVar20[0x16], iVar13 < 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
                if (piVar20[0x16] < 0) goto LAB_1450872d1;
                LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
              }
              LOCK();
              bVar35 = iVar13 == piVar20[0x16];
              if (bVar35) {
                piVar20[0x16] = iVar13 + 1;
              }
              UNLOCK();
            } while (!bVar35);
LAB_1450872d1:
            if (piVar20[0x28] == 0) {
              lVar19 = 0;
            }
            else {
              for (lVar19 = *(longlong *)
                             (*(longlong *)(piVar20 + 0x26) +
                             ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x28]) * 8); lVar19 != 0;
                  lVar19 = *(longlong *)(lVar19 + 8)) {
                if (*(uint *)(lVar19 + 0x10) == uVar12) goto LAB_145087303;
              }
              lVar19 = 0;
LAB_145087303:
              if (lVar19 != 0) {
                LOCK();
                *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
                UNLOCK();
              }
            }
            iVar13 = piVar20[0x16];
            while (-1 < iVar13) {
              LOCK();
              bVar35 = iVar13 == piVar20[0x16];
              if (bVar35) {
                piVar20[0x16] = iVar13 + -1;
              }
              UNLOCK();
              if (bVar35) {
                if ((iVar13 + -1 == 0) && (0 < piVar20[0x22])) {
                  SetEvent(*(HANDLE *)(piVar20 + 0x24));
                }
                goto LAB_14508735b;
              }
              iVar13 = piVar20[0x16];
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
LAB_14508735b:
            lVar30 = lVar19 + -0x10;
            if (lVar19 == 0) {
              lVar30 = 0;
            }
            bVar35 = bVar7;
            if (lVar30 != 0) {
              FUN_14508e680(lVar30,*(undefined4 *)(pCVar34 + 8));
              plVar17 = (longlong *)(lVar30 + 0x10);
              goto LAB_145085716;
            }
            break;
          case 0x21:
            FUN_145083690(param_1,*(undefined4 *)(pCVar34 + 4));
            local_350 = *(undefined4 *)(pCVar34 + 0xc);
            local_358 = *(undefined4 *)(pCVar34 + 4);
            local_354 = *(undefined4 *)(pCVar34 + 8);
            local_349 = 0;
            local_340 = 0;
            local_34c = 0;
            local_34a = 0;
            local_368[0] = 0;
            local_360 = 0;
            FUN_14508d2a0(local_368);
            in_stack_fffffffffffffaf8 =
                 (CAkRegisteredObj **)CONCAT44(uVar33,*(undefined4 *)(pCVar34 + 4));
            FUN_1450cb2e0(DAT_14c79c4b0,0,0,0xffffffffffffffff,in_stack_fffffffffffffaf8);
            bVar35 = bVar7;
            break;
          case 0x22:
            in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)PTR_s_ExecuteActionOnEvent_14c72eaf0;
            lVar19 = FUN_1450ac5c0(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),
                                   *(undefined4 *)(pCVar34 + 0x24),*(undefined4 *)(pCVar34 + 0x14),
                                   PTR_s_ExecuteActionOnEvent_14c72eaf0);
            if ((lVar19 != 0) || (*(longlong *)(pCVar34 + 4) == -1)) {
              FUN_145084020(param_1,*(undefined8 *)(pCVar34 + 0xc),pCVar34 + 4,lVar19);
            }
            goto LAB_145085712;
          case 0x23:
            if (*(longlong *)(pCVar34 + 0xc) != 0) {
              pCVar16 = (CAkRegisteredObj *)
                        (ulonglong)*(uint *)(*(longlong *)(pCVar34 + 0xc) + 0x10);
            }
            in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)PTR_s_PostMIDIOnEvent_14c72eaf8;
            lVar19 = FUN_1450ac5c0(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),
                                   *(undefined4 *)(pCVar34 + 0x18),pCVar16,
                                   PTR_s_PostMIDIOnEvent_14c72eaf8);
            if ((lVar19 != 0) || (*(longlong *)(pCVar34 + 4) == -1)) {
              FUN_1450844c0(param_1,*(undefined8 *)(pCVar34 + 0xc),pCVar34 + 4,lVar19);
            }
            FUN_1450b28b0(DAT_14c790fc0,*(undefined4 *)(pCVar34 + 0x18));
LAB_145085712:
            plVar17 = *(longlong **)(pCVar34 + 0xc);
LAB_145085716:
            LOCK();
            piVar20 = (int *)((longlong)plVar17 + 0x14);
            iVar13 = *piVar20;
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            bVar35 = bVar7;
            if (iVar13 == 1) {
              (**(code **)(*plVar17 + 0x18))();
            }
            break;
          case 0x24:
            if (*(longlong *)(pCVar34 + 0xc) != 0) {
              pCVar16 = (CAkRegisteredObj *)
                        (ulonglong)*(uint *)(*(longlong *)(pCVar34 + 0xc) + 0x10);
            }
            in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)PTR_s_StopMIDIOnEvent_14c72eb00;
            lVar19 = FUN_1450ac5c0(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),
                                   *(undefined4 *)(pCVar34 + 0x18),pCVar16,
                                   PTR_s_StopMIDIOnEvent_14c72eb00);
            if ((lVar19 != 0) || (*(longlong *)(pCVar34 + 4) == -1)) {
              FUN_1450846e0(param_1,*(undefined8 *)(pCVar34 + 0xc),pCVar34 + 4,lVar19);
            }
            plVar17 = *(longlong **)(pCVar34 + 0xc);
            bVar35 = bVar7;
            if (plVar17 != (longlong *)0x0) goto LAB_145085716;
            break;
          case 0x25:
            if ((*(__uint64 *)(pCVar34 + 4) == 0xffffffffffffffff) ||
               (pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4)),
               bVar35 = bVar7, pCVar16 != (CAkRegisteredObj *)0x0)) {
              if (*(ushort *)(pCVar34 + 0x1a) == 0) {
                FUN_1450caaa0(*(undefined8 *)(pCVar34 + 0xc),pCVar16);
              }
              else {
                FUN_1450ca830(*(undefined8 *)(pCVar34 + 0xc),pCVar16,pCVar34[0x18],pCVar34[0x19]);
              }
              goto LAB_145085712;
            }
            break;
          case 0x26:
            FUN_1450acde0(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),*(undefined4 *)(pCVar34 + 0xc)
                         );
            bVar35 = bVar7;
            break;
          case 0x27:
            CVar2 = pCVar34[0x10];
            pCVar16 = pCVar34 + 0x14;
            uVar33 = *(undefined4 *)(pCVar34 + 0xc);
            in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)CONCAT71(uVar36,pCVar34[0x11]);
LAB_145085e21:
            FUN_1450ac620(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),pCVar16,uVar33,
                          in_stack_fffffffffffffaf8,CVar2);
            bVar35 = bVar7;
            break;
          case 0x28:
            in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)PTR_s_SeekOnEvent_14c72eb20;
            lVar19 = FUN_1450ac5c0(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),
                                   *(undefined4 *)(pCVar34 + 0x24),*(undefined4 *)(pCVar34 + 0x14),
                                   PTR_s_SeekOnEvent_14c72eb20);
            if ((lVar19 != 0) || (*(longlong *)(pCVar34 + 4) == -1)) {
              piVar20 = DAT_14c791060;
              for (lVar30 = *(longlong *)(*(longlong *)(pCVar34 + 0xc) + 0x20);
                  DAT_14c791060 = piVar20, lVar30 != 0; lVar30 = *(longlong *)(lVar30 + 0x18)) {
                if (*(short *)(lVar30 + 0x34) == 0x403) {
                  uVar12 = *(uint *)(lVar30 + 0x30);
                  do {
                    while (iVar13 = *piVar20, iVar13 < 0) {
                      EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                      if (*piVar20 < 0) goto LAB_1450858c4;
                      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                    }
                    LOCK();
                    iVar1 = *piVar20;
                    if (iVar13 == iVar1) {
                      *piVar20 = iVar13 + 1;
                    }
                    UNLOCK();
                  } while (iVar13 != iVar1);
LAB_1450858c4:
                  if (piVar20[0x12] == 0) {
                    lVar29 = 0;
                  }
                  else {
                    for (lVar29 = *(longlong *)
                                   (*(longlong *)(piVar20 + 0x10) +
                                   ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x12]) * 8);
                        lVar29 != 0; lVar29 = *(longlong *)(lVar29 + 8)) {
                      if (*(uint *)(lVar29 + 0x10) == uVar12) goto LAB_1450858f3;
                    }
                    lVar29 = 0;
LAB_1450858f3:
                    if (lVar29 != 0) {
                      LOCK();
                      *(int *)(lVar29 + 0x14) = *(int *)(lVar29 + 0x14) + 1;
                      UNLOCK();
                    }
                  }
                  iVar13 = *piVar20;
                  while (-1 < iVar13) {
                    LOCK();
                    iVar1 = *piVar20;
                    if (iVar13 == iVar1) {
                      *piVar20 = iVar13 + -1;
                    }
                    UNLOCK();
                    if (iVar13 == iVar1) {
                      if ((iVar13 + -1 == 0) && (0 < piVar20[0xc])) {
                        SetEvent(*(HANDLE *)(piVar20 + 0xe));
                      }
                      goto LAB_14508594d;
                    }
                    iVar13 = *piVar20;
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
LAB_14508594d:
                  plVar17 = (longlong *)(lVar29 + -0x10);
                  if (lVar29 == 0) {
                    plVar17 = (longlong *)0x0;
                  }
                  if (plVar17 != (longlong *)0x0) {
                    local_328 = *(undefined4 *)(pCVar34 + 0x1c);
                    local_319 = 0;
                    local_310 = 0;
                    local_308 = 0;
                    local_2fc = ((byte)pCVar34[0x22] & 1) * '\x02' | (byte)pCVar34[0x20] & 1 |
                                local_2fc & 0xfc;
                    local_31c = 0;
                    local_300 = *(undefined4 *)(pCVar34 + 0x18);
                    local_31a = 0;
                    local_320 = 4;
                    local_324 = 0;
                    local_338 = 4;
                    local_330 = lVar19;
                    (**(code **)(*plVar17 + 0x80))(plVar17);
                    LOCK();
                    piVar20 = (int *)((longlong)plVar17 + 0x24);
                    iVar13 = *piVar20;
                    *piVar20 = *piVar20 + -1;
                    UNLOCK();
                    if (iVar13 == 1) {
                      (**(code **)(plVar17[2] + 0x18))();
                    }
                  }
                }
                piVar20 = DAT_14c791060;
              }
            }
            plVar17 = *(longlong **)(pCVar34 + 0xc);
LAB_1450852f0:
            LOCK();
            piVar20 = (int *)((longlong)plVar17 + 0x14);
            iVar13 = *piVar20;
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            bVar35 = bVar7;
            if (iVar13 == 1) {
              (**(code **)(*plVar17 + 0x18))();
            }
            break;
          case 0x29:
            uVar33 = *(undefined4 *)(pCVar34 + 0xc);
            iVar13 = (*(int *)(pCVar34 + 0x28) * 0x1000 + *(int *)(pCVar34 + 0x2c)) * 0x10;
            uVar12 = iVar13 + 2U | 0x80000000;
            if (*(int *)(pCVar34 + 0x30) == 0) {
              pCVar16 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4));
              piVar20 = DAT_14c791060;
              bVar35 = bVar7;
              if (pCVar16 != (CAkRegisteredObj *)0x0) {
                do {
                  while (iVar1 = piVar20[0xdc], iVar1 < 0) {
                    EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0xde));
                    if (piVar20[0xdc] < 0) goto LAB_145085377;
                    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0xde));
                  }
                  LOCK();
                  bVar35 = iVar1 == piVar20[0xdc];
                  if (bVar35) {
                    piVar20[0xdc] = iVar1 + 1;
                  }
                  UNLOCK();
                } while (!bVar35);
LAB_145085377:
                if (piVar20[0xee] == 0) {
                  plVar17 = (longlong *)0x0;
                }
                else {
                  for (plVar17 = *(longlong **)
                                  (*(longlong *)(piVar20 + 0xec) +
                                  ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0xee]) * 8);
                      plVar17 != (longlong *)0x0; plVar17 = (longlong *)plVar17[1]) {
                    if (*(uint *)(plVar17 + 2) == uVar12) goto LAB_1450853ab;
                  }
                  plVar17 = (longlong *)0x0;
LAB_1450853ab:
                  if (plVar17 != (longlong *)0x0) {
                    LOCK();
                    *(int *)((longlong)plVar17 + 0x14) = *(int *)((longlong)plVar17 + 0x14) + 1;
                    UNLOCK();
                  }
                }
                iVar1 = piVar20[0xdc];
                while (-1 < iVar1) {
                  LOCK();
                  bVar35 = iVar1 == piVar20[0xdc];
                  if (bVar35) {
                    piVar20[0xdc] = iVar1 + -1;
                  }
                  UNLOCK();
                  if (bVar35) {
                    if ((iVar1 + -1 == 0) && (0 < piVar20[0xe8])) {
                      SetEvent(*(HANDLE *)(piVar20 + 0xea));
                    }
                    goto LAB_145085418;
                  }
                  iVar1 = piVar20[0xdc];
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0xde));
LAB_145085418:
                piVar20 = DAT_14c791060;
                if (plVar17 == (longlong *)0x0) {
                  FUN_144d41d30(&local_488);
                  plVar17 = (longlong *)FUN_14536aee0();
                  if (plVar17 != (longlong *)0x0) {
                    *(uint *)(plVar17 + 2) = uVar12;
                    cVar11 = FUN_144d41e40(piVar20 + 0xec,plVar17,&local_4e8);
                    if (cVar11 == '\0') {
                      *(undefined4 *)(plVar17 + 2) = 0;
                      LOCK();
                      piVar20 = (int *)((longlong)plVar17 + 0x14);
                      iVar1 = *piVar20;
                      *piVar20 = *piVar20 + -1;
                      UNLOCK();
                      if (iVar1 == 1) {
                        (**(code **)(*plVar17 + 0x18))(plVar17);
                      }
                      plVar17 = (longlong *)0x0;
                    }
                  }
                  LOCK();
                  *local_488 = *local_488 + 1;
                  UNLOCK();
                  if (*local_488 == 0) {
                    local_488[1] = 0;
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)(local_488 + 2));
                  piVar20 = DAT_14c791060;
                  if (plVar17 != (longlong *)0x0) {
                    FUN_14536a6b0(plVar17,iVar13 + 2,0,0);
                    piVar20 = DAT_14c791060;
                  }
                }
                else {
                  LOCK();
                  piVar20 = (int *)((longlong)plVar17 + 0x14);
                  iVar13 = *piVar20;
                  *piVar20 = *piVar20 + -1;
                  UNLOCK();
                  piVar20 = DAT_14c791060;
                  if (iVar13 == 1) {
                    (**(code **)(*plVar17 + 0x18))(plVar17);
                    piVar20 = DAT_14c791060;
                  }
                }
                do {
                  while (iVar13 = *piVar20, iVar13 < 0) {
                    EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                    if (*piVar20 < 0) goto LAB_14508550f;
                    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                  }
                  LOCK();
                  iVar1 = *piVar20;
                  if (iVar13 == iVar1) {
                    *piVar20 = iVar13 + 1;
                  }
                  UNLOCK();
                } while (iVar13 != iVar1);
LAB_14508550f:
                if (piVar20[0x12] == 0) {
                  lVar19 = 0;
                }
                else {
                  for (lVar19 = *(longlong *)
                                 (*(longlong *)(piVar20 + 0x10) +
                                 ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x12]) * 8);
                      lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 8)) {
                    if (*(uint *)(lVar19 + 0x10) == uVar12) goto LAB_145085545;
                  }
                  lVar19 = 0;
LAB_145085545:
                  if (lVar19 != 0) {
                    LOCK();
                    *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
                    UNLOCK();
                  }
                }
                iVar13 = *piVar20;
                while (-1 < iVar13) {
                  LOCK();
                  iVar1 = *piVar20;
                  if (iVar13 == iVar1) {
                    *piVar20 = iVar13 + -1;
                  }
                  UNLOCK();
                  if (iVar13 == iVar1) {
                    if ((iVar13 + -1 == 0) && (0 < piVar20[0xc])) {
                      SetEvent(*(HANDLE *)(piVar20 + 0xe));
                    }
                    goto LAB_14508559d;
                  }
                  iVar13 = *piVar20;
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
LAB_14508559d:
                piVar20 = DAT_14c791060;
                lVar30 = lVar19 + -0x10;
                if (lVar19 == 0) {
                  lVar30 = 0;
                }
                if (lVar30 == 0) {
                  if (plVar17 != (longlong *)0x0) {
                    FUN_144d41d30(&local_480,DAT_14c791060);
                    lVar30 = FUN_1453703d0();
                    lVar19 = lVar30;
                    if (lVar30 != 0) {
                      *(uint *)(lVar30 + 0x20) = uVar12;
                      cVar11 = FUN_144d41e40(piVar20 + 0x10,lVar30 + 0x10,&local_4e7);
                      if (cVar11 == '\0') {
                        *(undefined4 *)(lVar30 + 0x20) = 0;
                        LOCK();
                        piVar20 = (int *)(lVar30 + 0x24);
                        iVar13 = *piVar20;
                        *piVar20 = *piVar20 + -1;
                        UNLOCK();
                        lVar19 = 0;
                        if (iVar13 == 1) {
                          (**(code **)(*(longlong *)(lVar30 + 0x10) + 0x18))(lVar30 + 0x10);
                        }
                      }
                    }
                    LOCK();
                    *local_480 = *local_480 + 1;
                    UNLOCK();
                    if (*local_480 == 0) {
                      local_480[1] = 0;
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)(local_480 + 2));
                    if (lVar19 != 0) {
                      FUN_14536d350(lVar19 + 0xf0,(int)plVar17[2]);
                    }
                  }
                }
                else {
                  LOCK();
                  piVar20 = (int *)(lVar30 + 0x24);
                  iVar13 = *piVar20;
                  *piVar20 = *piVar20 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*(longlong *)(lVar30 + 0x10) + 0x18))();
                  }
                }
                local_2f0 = 0;
                local_2e8 = 0;
                local_2f8 = 0;
                local_2e4 = uVar33;
                FUN_145087a30(param_1,uVar12,pCVar16,&local_2f8);
                bVar35 = bVar7;
              }
            }
            else if (*(int *)(pCVar34 + 0x30) == 1) {
              do {
                while (iVar13 = *piVar20, iVar13 < 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                  if (*piVar20 < 0) goto LAB_1450851f6;
                  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                }
                LOCK();
                iVar1 = *piVar20;
                if (iVar13 == iVar1) {
                  *piVar20 = iVar13 + 1;
                }
                UNLOCK();
              } while (iVar13 != iVar1);
LAB_1450851f6:
              if (piVar20[0x12] == 0) {
                lVar19 = 0;
              }
              else {
                for (lVar19 = *(longlong *)
                               (*(longlong *)(piVar20 + 0x10) +
                               ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x12]) * 8);
                    lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 8)) {
                  if (*(uint *)(lVar19 + 0x10) == uVar12) goto LAB_145085226;
                }
                lVar19 = 0;
LAB_145085226:
                if (lVar19 != 0) {
                  LOCK();
                  *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
                  UNLOCK();
                }
              }
              iVar13 = *piVar20;
              while (-1 < iVar13) {
                LOCK();
                iVar1 = *piVar20;
                if (iVar13 == iVar1) {
                  *piVar20 = iVar13 + -1;
                }
                UNLOCK();
                if (iVar13 == iVar1) {
                  if ((iVar13 + -1 == 0) && (0 < piVar20[0xc])) {
                    SetEvent(*(HANDLE *)(piVar20 + 0xe));
                  }
                  goto LAB_14508527d;
                }
                iVar13 = *piVar20;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
LAB_14508527d:
              plVar17 = (longlong *)(lVar19 + -0x10);
              if (lVar19 == 0) {
                plVar17 = (longlong *)0x0;
              }
              bVar35 = bVar7;
              if (plVar17 != (longlong *)0x0) {
                local_388 = *(undefined4 *)(pCVar34 + 0xc);
                local_379 = 0;
                local_370 = 0;
                local_37c = 0;
                local_37a = 0;
                local_380 = 4;
                local_390 = 0;
                local_384 = 0;
                local_398[0] = 0;
                (**(code **)(*plVar17 + 0x80))(plVar17,local_398);
                plVar17 = plVar17 + 2;
                goto LAB_1450852f0;
              }
            }
            break;
          case 0x2a:
            if (*(longlong *)(pCVar34 + 4) == 0) {
              FUN_1450a1f10();
              bVar35 = bVar7;
            }
            else {
              FUN_1450a1da0();
              AK::MemoryMgr::Free(0,*(void **)(pCVar34 + 4));
              bVar35 = bVar7;
            }
            break;
          case 0x2b:
            FUN_1450a1ff0();
            AK::MemoryMgr::Free(0,*(void **)(pCVar34 + 4));
            bVar35 = bVar7;
            break;
          case 0x2c:
            uVar12 = *(uint *)(pCVar34 + 4);
            if (*(int *)(pCVar34 + 0x10) == 0) {
              do {
                while (iVar13 = *piVar20, iVar13 < 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                  if (*piVar20 < 0) goto LAB_14508698f;
                  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                }
                LOCK();
                iVar1 = *piVar20;
                if (iVar13 == iVar1) {
                  *piVar20 = iVar13 + 1;
                }
                UNLOCK();
              } while (iVar13 != iVar1);
LAB_14508698f:
              if (piVar20[0x12] == 0) {
                lVar30 = 0;
              }
              else {
                for (lVar30 = *(longlong *)
                               (*(longlong *)(piVar20 + 0x10) +
                               ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x12]) * 8);
                    lVar30 != 0; lVar30 = *(longlong *)(lVar30 + 8)) {
                  if (*(uint *)(lVar30 + 0x10) == uVar12) goto LAB_1450869c2;
                }
                lVar30 = 0;
LAB_1450869c2:
                if (lVar30 != 0) {
                  LOCK();
                  *(int *)(lVar30 + 0x14) = *(int *)(lVar30 + 0x14) + 1;
                  UNLOCK();
                }
              }
              iVar13 = *piVar20;
              while (-1 < iVar13) {
                LOCK();
                iVar1 = *piVar20;
                if (iVar13 == iVar1) {
                  *piVar20 = iVar13 + -1;
                }
                UNLOCK();
                if (iVar13 == iVar1) {
                  if ((iVar13 + -1 != 0) || (piVar20[0xc] < 1)) goto LAB_145086a10;
                  SetEvent(*(HANDLE *)(piVar20 + 0xe));
                  lVar19 = lVar30 + -0x10;
                  if (lVar30 == 0) {
                    lVar19 = 0;
                  }
                  goto LAB_145086ae8;
                }
                iVar13 = *piVar20;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
LAB_145086a10:
              lVar19 = lVar30 + -0x10;
              if (lVar30 == 0) {
                lVar19 = 0;
              }
            }
            else {
              do {
                while (iVar13 = piVar20[0x16], iVar13 < 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
                  if (piVar20[0x16] < 0) goto LAB_145086a56;
                  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
                }
                LOCK();
                bVar35 = iVar13 == piVar20[0x16];
                if (bVar35) {
                  piVar20[0x16] = iVar13 + 1;
                }
                UNLOCK();
              } while (!bVar35);
LAB_145086a56:
              if (piVar20[0x28] == 0) {
                lVar19 = 0;
              }
              else {
                for (lVar19 = *(longlong *)
                               (*(longlong *)(piVar20 + 0x26) +
                               ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x28]) * 8);
                    lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 8)) {
                  if (*(uint *)(lVar19 + 0x10) == uVar12) goto LAB_145086a88;
                }
                lVar19 = 0;
LAB_145086a88:
                if (lVar19 != 0) {
                  LOCK();
                  *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
                  UNLOCK();
                }
              }
              iVar13 = piVar20[0x16];
              while (-1 < iVar13) {
                LOCK();
                bVar35 = iVar13 == piVar20[0x16];
                if (bVar35) {
                  piVar20[0x16] = iVar13 + -1;
                }
                UNLOCK();
                if (bVar35) {
                  if ((iVar13 + -1 == 0) && (0 < piVar20[0x22])) {
                    SetEvent(*(HANDLE *)(piVar20 + 0x24));
                  }
                  goto LAB_145086adb;
                }
                iVar13 = piVar20[0x16];
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
LAB_145086adb:
              bVar35 = bVar7;
              if (lVar19 == 0) break;
              lVar19 = lVar19 + -0x10;
            }
LAB_145086ae8:
            bVar35 = bVar7;
            if (lVar19 != 0) {
              in_stack_fffffffffffffaf8 =
                   (CAkRegisteredObj **)
                   CONCAT44((int)((ulonglong)in_stack_fffffffffffffaf8 >> 0x20),2);
              FUN_1450d65c0(lVar19,*(undefined4 *)(pCVar34 + 8),*(undefined4 *)(pCVar34 + 0xc),1,
                            in_stack_fffffffffffffaf8);
              plVar17 = (longlong *)(lVar19 + 0x10);
              goto LAB_145085716;
            }
            break;
          case 0x2d:
            uVar12 = *(uint *)(pCVar34 + 4);
            if (*(int *)(pCVar34 + 0x10) == 0) {
              do {
                while (iVar13 = *piVar20, iVar13 < 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                  if (*piVar20 < 0) goto LAB_145086b57;
                  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                }
                LOCK();
                iVar1 = *piVar20;
                if (iVar13 == iVar1) {
                  *piVar20 = iVar13 + 1;
                }
                UNLOCK();
              } while (iVar13 != iVar1);
LAB_145086b57:
              if (piVar20[0x12] == 0) {
                lVar19 = 0;
              }
              else {
                for (lVar19 = *(longlong *)
                               (*(longlong *)(piVar20 + 0x10) +
                               ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x12]) * 8);
                    lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 8)) {
                  if (*(uint *)(lVar19 + 0x10) == uVar12) goto LAB_145086b83;
                }
                lVar19 = 0;
LAB_145086b83:
                if (lVar19 != 0) {
                  LOCK();
                  *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
                  UNLOCK();
                }
              }
              iVar13 = *piVar20;
              while (-1 < iVar13) {
                LOCK();
                iVar1 = *piVar20;
                if (iVar13 == iVar1) {
                  *piVar20 = iVar13 + -1;
                }
                UNLOCK();
                if (iVar13 == iVar1) {
                  if ((iVar13 + -1 != 0) || (piVar20[0xc] < 1)) goto LAB_145086bd9;
                  SetEvent(*(HANDLE *)(piVar20 + 0xe));
                  plVar17 = (longlong *)(lVar19 + -0x10);
                  if (lVar19 == 0) {
                    plVar17 = (longlong *)0x0;
                  }
                  goto LAB_145086cbc;
                }
                iVar13 = *piVar20;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
LAB_145086bd9:
              plVar17 = (longlong *)(lVar19 + -0x10);
              if (lVar19 == 0) {
                plVar17 = (longlong *)0x0;
              }
            }
            else {
              do {
                while (iVar13 = piVar20[0x16], iVar13 < 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
                  if (piVar20[0x16] < 0) goto LAB_145086c21;
                  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
                }
                LOCK();
                bVar35 = iVar13 == piVar20[0x16];
                if (bVar35) {
                  piVar20[0x16] = iVar13 + 1;
                }
                UNLOCK();
              } while (!bVar35);
LAB_145086c21:
              if (piVar20[0x28] == 0) {
                lVar19 = 0;
              }
              else {
                for (lVar19 = *(longlong *)
                               (*(longlong *)(piVar20 + 0x26) +
                               ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x28]) * 8);
                    lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 8)) {
                  if (*(uint *)(lVar19 + 0x10) == uVar12) goto LAB_145086c53;
                }
                lVar19 = 0;
LAB_145086c53:
                if (lVar19 != 0) {
                  LOCK();
                  *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
                  UNLOCK();
                }
              }
              iVar13 = piVar20[0x16];
              while (-1 < iVar13) {
                LOCK();
                bVar35 = iVar13 == piVar20[0x16];
                if (bVar35) {
                  piVar20[0x16] = iVar13 + -1;
                }
                UNLOCK();
                if (bVar35) {
                  if ((iVar13 + -1 == 0) && (0 < piVar20[0x22])) {
                    SetEvent(*(HANDLE *)(piVar20 + 0x24));
                  }
                  goto LAB_145086caf;
                }
                iVar13 = piVar20[0x16];
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
LAB_145086caf:
              bVar35 = bVar7;
              if (lVar19 == 0) break;
              plVar17 = (longlong *)(lVar19 + -0x10);
            }
LAB_145086cbc:
            bVar35 = bVar7;
            if (plVar17 != (longlong *)0x0) {
              in_stack_fffffffffffffaf8 =
                   (CAkRegisteredObj **)
                   CONCAT44((int)((ulonglong)in_stack_fffffffffffffaf8 >> 0x20),2);
              FUN_1450d65c0(plVar17,*(undefined4 *)(pCVar34 + 8),*(undefined4 *)(pCVar34 + 0xc),1,
                            in_stack_fffffffffffffaf8);
              local_420[0] = (longlong *)0x0;
              (**(code **)(*plVar17 + 0x1b0))(plVar17,*(undefined4 *)(pCVar34 + 8),local_420,0);
              local_420[0][6] = (ulonglong)*(uint *)(pCVar34 + 0x14);
              LOCK();
              piVar20 = (int *)((longlong)plVar17 + 0x24);
              iVar13 = *piVar20;
              *piVar20 = *piVar20 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(plVar17[2] + 0x18))();
              }
              if (local_420[0] != (longlong *)0x0) {
                LOCK();
                piVar20 = (int *)((longlong)local_420[0] + 0x14);
                iVar13 = *piVar20;
                *piVar20 = *piVar20 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*local_420[0] + 0x18))();
                }
                local_420[0] = (longlong *)0x0;
              }
            }
            break;
          case 0x2e:
            lVar19 = FUN_1450a19c0(*(undefined8 *)(pCVar34 + 4));
            bVar35 = bVar7;
            if (lVar19 != 0) {
              *(undefined4 *)(lVar19 + 0x18 + (ulonglong)*(uint *)(pCVar34 + 0xc) * 4) =
                   *(undefined4 *)(pCVar34 + 0x10);
              FUN_14509f2f0(lVar19);
            }
            break;
          case 0x2f:
            uVar12 = *(uint *)(pCVar34 + 4);
            if (*(int *)(pCVar34 + 0x10) == 0) {
              do {
                while (iVar13 = *piVar20, iVar13 < 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                  if (*piVar20 < 0) goto LAB_145086dd3;
                  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
                }
                LOCK();
                iVar1 = *piVar20;
                if (iVar13 == iVar1) {
                  *piVar20 = iVar13 + 1;
                }
                UNLOCK();
              } while (iVar13 != iVar1);
LAB_145086dd3:
              if (piVar20[0x12] == 0) {
                lVar19 = 0;
              }
              else {
                for (lVar19 = *(longlong *)
                               (*(longlong *)(piVar20 + 0x10) +
                               ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x12]) * 8);
                    lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 8)) {
                  if (*(uint *)(lVar19 + 0x10) == uVar12) goto LAB_145086e02;
                }
                lVar19 = 0;
LAB_145086e02:
                if (lVar19 != 0) {
                  LOCK();
                  *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
                  UNLOCK();
                }
              }
              iVar13 = *piVar20;
              while (-1 < iVar13) {
                LOCK();
                iVar1 = *piVar20;
                if (iVar13 == iVar1) {
                  *piVar20 = iVar13 + -1;
                }
                UNLOCK();
                if (iVar13 == iVar1) {
                  if ((iVar13 + -1 != 0) || (piVar20[0xc] < 1)) goto LAB_145086e50;
                  SetEvent(*(HANDLE *)(piVar20 + 0xe));
                  plVar17 = (longlong *)(lVar19 + -0x10);
                  if (lVar19 == 0) {
                    plVar17 = (longlong *)0x0;
                  }
                  goto LAB_145086f28;
                }
                iVar13 = *piVar20;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 2));
LAB_145086e50:
              plVar17 = (longlong *)(lVar19 + -0x10);
              if (lVar19 == 0) {
                plVar17 = (longlong *)0x0;
              }
            }
            else {
              do {
                while (iVar13 = piVar20[0x16], iVar13 < 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
                  if (piVar20[0x16] < 0) goto LAB_145086e96;
                  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
                }
                LOCK();
                bVar35 = iVar13 == piVar20[0x16];
                if (bVar35) {
                  piVar20[0x16] = iVar13 + 1;
                }
                UNLOCK();
              } while (!bVar35);
LAB_145086e96:
              if (piVar20[0x28] == 0) {
                lVar19 = 0;
              }
              else {
                for (lVar19 = *(longlong *)
                               (*(longlong *)(piVar20 + 0x26) +
                               ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x28]) * 8);
                    lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 8)) {
                  if (*(uint *)(lVar19 + 0x10) == uVar12) goto LAB_145086ec8;
                }
                lVar19 = 0;
LAB_145086ec8:
                if (lVar19 != 0) {
                  LOCK();
                  *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
                  UNLOCK();
                }
              }
              iVar13 = piVar20[0x16];
              while (-1 < iVar13) {
                LOCK();
                bVar35 = iVar13 == piVar20[0x16];
                if (bVar35) {
                  piVar20[0x16] = iVar13 + -1;
                }
                UNLOCK();
                if (bVar35) {
                  if ((iVar13 + -1 == 0) && (0 < piVar20[0x22])) {
                    SetEvent(*(HANDLE *)(piVar20 + 0x24));
                  }
                  goto LAB_145086f1b;
                }
                iVar13 = piVar20[0x16];
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
LAB_145086f1b:
              bVar35 = bVar7;
              if (lVar19 == 0) break;
              plVar17 = (longlong *)(lVar19 + -0x10);
            }
LAB_145086f28:
            bVar35 = bVar7;
            if (plVar17 != (longlong *)0x0) {
              iVar13 = (**(code **)(*plVar17 + 0x70))(plVar17);
              if ((iVar13 == 0) || (iVar13 == 10)) {
                (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined4 *)(pCVar34 + 0xc),1,2);
              }
              plVar17 = plVar17 + 2;
              goto LAB_145085716;
            }
            break;
          case 0x30:
            uVar12 = *(uint *)(pCVar34 + 4);
            do {
              while (iVar13 = piVar20[0x16], iVar13 < 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
                if (piVar20[0x16] < 0) goto LAB_145086fa1;
                LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
              }
              LOCK();
              bVar35 = iVar13 == piVar20[0x16];
              if (bVar35) {
                piVar20[0x16] = iVar13 + 1;
              }
              UNLOCK();
            } while (!bVar35);
LAB_145086fa1:
            if (piVar20[0x28] == 0) {
              lVar19 = 0;
            }
            else {
              for (lVar19 = *(longlong *)
                             (*(longlong *)(piVar20 + 0x26) +
                             ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x28]) * 8); lVar19 != 0;
                  lVar19 = *(longlong *)(lVar19 + 8)) {
                if (*(uint *)(lVar19 + 0x10) == uVar12) goto LAB_145086fd5;
              }
              lVar19 = 0;
LAB_145086fd5:
              if (lVar19 != 0) {
                LOCK();
                *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
                UNLOCK();
              }
            }
            iVar13 = piVar20[0x16];
            while (-1 < iVar13) {
              LOCK();
              bVar35 = iVar13 == piVar20[0x16];
              if (bVar35) {
                piVar20[0x16] = iVar13 + -1;
              }
              UNLOCK();
              if (bVar35) {
                if ((iVar13 + -1 == 0) && (0 < piVar20[0x22])) {
                  SetEvent(*(HANDLE *)(piVar20 + 0x24));
                }
                goto LAB_14508702b;
              }
              iVar13 = piVar20[0x16];
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar20 + 0x18));
LAB_14508702b:
            lVar30 = lVar19 + -0x10;
            if (lVar19 == 0) {
              lVar30 = 0;
            }
            bVar35 = bVar7;
            if (lVar30 != 0) {
              uVar33 = *(undefined4 *)(pCVar34 + 8);
              cVar11 = FUN_14508d290(lVar30);
              if (cVar11 == '\0') {
                FUN_14508d520(lVar30,uVar33);
              }
              LOCK();
              piVar20 = (int *)(lVar30 + 0x24);
              iVar13 = *piVar20;
              *piVar20 = *piVar20 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*(longlong *)(lVar30 + 0x10) + 0x18))();
              }
            }
            break;
          case 0x31:
            FUN_1450a4b90(*(undefined8 *)(pCVar34 + 4),pCVar34[0xc]);
            bVar35 = bVar7;
            break;
          case 0x32:
            lVar19 = FUN_1450a19c0();
            if (lVar19 != 0) {
              FUN_1450a0090(lVar19,*(undefined8 *)(pCVar34 + 4),*(undefined4 *)(pCVar34 + 0xc),
                            *(undefined4 *)(pCVar34 + 0x10));
            }
            AK::MemoryMgr::Free(0,*(void **)(pCVar34 + 4));
            bVar35 = bVar7;
            break;
          case 0x35:
            FUN_144d4a4c0(*(undefined4 *)(pCVar34 + 4));
            bVar35 = bVar7;
            break;
          case 0x36:
            if (*(ushort *)(pCVar34 + 4) == 0) {
              FUN_14508f980();
              bVar35 = bVar7;
            }
            else {
              FUN_14508f8c0();
              bVar35 = bVar7;
            }
            break;
          case 0x37:
            in_stack_fffffffffffffb08 = *(uint *)(pCVar34 + 0x24);
            in_stack_fffffffffffffaf8 =
                 (CAkRegisteredObj **)CONCAT44(uVar33,*(undefined4 *)(pCVar34 + 0x18));
            FUN_145372ad0(*(undefined4 *)(pCVar34 + 4),*(undefined8 *)(pCVar34 + 8),pCVar34[0x10],
                          *(undefined4 *)(pCVar34 + 0x14),in_stack_fffffffffffffaf8,
                          *(undefined8 *)(pCVar34 + 0x1c),in_stack_fffffffffffffb08,1);
            bVar35 = bVar7;
            break;
          case 0x38:
            iVar13 = FUN_1450a2160(CONCAT71((int7)((ulonglong)
                                                   (IMAGE_DOS_HEADER_140000000.e_magic +
                                                   (&switchD_14508500a::switchdataD_145087714)
                                                   [uVar27]) >> 8),*(ushort *)(pCVar34 + 8) != 0),
                                   CONCAT71(uVar26,*(ushort *)(pCVar34 + 10) != 0),
                                   *(undefined4 *)(pCVar34 + 4));
            *param_3 = iVar13 == 1;
            bVar35 = bVar7;
            break;
          case 0x39:
            iVar13 = FUN_1450a1330(pCVar34 + 4);
LAB_145086946:
            if (iVar13 == 1) {
              QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0xa0));
            }
            *param_3 = 1;
            bVar35 = bVar7;
            break;
          case 0x3a:
            piVar20 = *(int **)(param_1 + 0xc0);
            piVar24 = piVar20 + (ulonglong)*(uint *)(param_1 + 200) * 8;
            for (; (piVar20 != piVar24 && (*piVar20 != *(int *)(pCVar34 + 4)));
                piVar20 = piVar20 + 8) {
            }
            pCVar21 = (CAkRegisteredObj *)(piVar20 + 2);
            if (piVar20 ==
                (int *)((ulonglong)*(uint *)(param_1 + 200) * 0x20 + *(longlong *)(param_1 + 0xc0)))
            {
              pCVar21 = pCVar16;
            }
            bVar35 = bVar7;
            if (pCVar21 != (CAkRegisteredObj *)0x0) {
              (**(code **)pCVar21)(pCVar34 + 8,*(ushort *)pCVar34 - 4);
            }
            break;
          case 0x3b:
            iVar13 = *(int *)(pCVar34 + 4);
            local_4c0 = 0;
            local_4b8 = 0;
            _local_4b0 = 4;
            local_4a8 = 0;
            local_4a0 = 0;
            if (iVar13 == 0) {
              local_4c8[0] = 0;
              FUN_145083690(param_1,*(undefined4 *)(pCVar34 + 8));
            }
            else if (iVar13 == 1) {
              puVar15 = *(undefined8 **)(param_1 + 0x60);
              iVar13 = *(int *)(pCVar34 + 8);
              local_4c8[0] = 1;
              for (; puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15) {
                lVar19 = puVar15[2];
                if ((*(int *)(lVar19 + 0x30) == iVar13) &&
                   (*(short *)(*(longlong *)(lVar19 + 8) + 0x34) != 0x1820)) {
                  *(int *)(lVar19 + 0x34) = *(int *)(lVar19 + 0x34) + 1;
                }
              }
              puVar15 = *(undefined8 **)(param_1 + 0x38);
              puVar6 = (undefined8 *)0x0;
              while (puVar31 = puVar15, puVar31 != (undefined8 *)0x0) {
                lVar19 = puVar31[2];
                if ((*(int *)(lVar19 + 0x30) == iVar13) &&
                   (*(short *)(*(longlong *)(lVar19 + 8) + 0x34) != 0x1820)) {
                  FUN_145083510(param_1,*(undefined4 *)(*(longlong *)(lVar19 + 8) + 0x30),lVar19,0);
                  puVar15 = (undefined8 *)*puVar31;
                  if (puVar31 == *(undefined8 **)(param_1 + 0x38)) {
                    *(undefined8 **)(param_1 + 0x38) = puVar15;
                  }
                  else {
                    *puVar6 = puVar15;
                  }
                  if (puVar31 == *(undefined8 **)(param_1 + 0x40)) {
                    *(undefined8 **)(param_1 + 0x40) = puVar6;
                  }
                  *puVar31 = *(undefined8 *)(param_1 + 0x48);
                  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
                  *(undefined8 **)(param_1 + 0x48) = puVar31;
                  puVar31 = puVar6;
                }
                else {
                  puVar15 = (undefined8 *)*puVar31;
                }
                uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffaf8 >> 0x20);
                puVar6 = puVar31;
              }
            }
            else if (iVar13 == 2) {
              iVar13 = *(int *)(pCVar34 + 8);
              local_4c8[0] = 2;
              puVar15 = *(undefined8 **)(param_1 + 0x60);
              puVar6 = (undefined8 *)0x0;
              while (puVar31 = puVar15,
                    uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffaf8 >> 0x20),
                    puVar31 != (undefined8 *)0x0) {
                lVar19 = puVar31[2];
                if (*(int *)(lVar19 + 0x30) == iVar13) {
                  if (*(int *)(lVar19 + 0x34) != 0) {
                    *(int *)(lVar19 + 0x34) = *(int *)(lVar19 + 0x34) + -1;
                    goto LAB_14508670a;
                  }
                  FUN_1450835d0(param_1,lVar19);
                  puVar15 = (undefined8 *)*puVar31;
                  if (puVar31 == *(undefined8 **)(param_1 + 0x60)) {
                    *(undefined8 **)(param_1 + 0x60) = puVar15;
                  }
                  else {
                    *puVar6 = puVar15;
                  }
                  if (puVar31 == *(undefined8 **)(param_1 + 0x68)) {
                    *(undefined8 **)(param_1 + 0x68) = puVar6;
                  }
                  *puVar31 = *(undefined8 *)(param_1 + 0x70);
                  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
                  *(undefined8 **)(param_1 + 0x70) = puVar31;
                }
                else {
LAB_14508670a:
                  puVar15 = (undefined8 *)*puVar31;
                  puVar6 = puVar31;
                }
              }
            }
            else if (iVar13 == 3) {
              local_4c8[0] = 3;
              FUN_145083690(param_1,*(undefined4 *)(pCVar34 + 8));
            }
            else if (iVar13 == 4) {
              local_4c8[0] = 5;
            }
            local_4b8 = *(undefined8 *)(pCVar34 + 8);
            local_4b0 = (uint7)*(uint *)(pCVar34 + 0x10);
            local_4c0 = 0;
            FUN_14508d2a0(local_4c8);
            in_stack_fffffffffffffaf8 = (CAkRegisteredObj **)CONCAT44(uVar33,(undefined4)local_4b8);
            FUN_1450cb2e0(DAT_14c79c4b0,local_4c8[0],0,0xffffffffffffffff,in_stack_fffffffffffffaf8)
            ;
            bVar35 = bVar7;
            break;
          case 0x3c:
            FUN_1450aea40(*(undefined8 *)(pCVar34 + 4),pCVar34 + 4);
            plVar17 = *(longlong **)(pCVar34 + 4);
            goto LAB_145085716;
          case 0x3d:
            if (*(ushort *)(pCVar34 + 4) == 0) {
              DAT_14c791030 = *(undefined4 *)(pCVar34 + 8);
            }
            else {
              DAT_14c790ff5 = *(ushort *)(pCVar34 + 6) != 0;
            }
            break;
          case 0x3e:
            if (((pCVar34[0x11] != (CAkRegisteredObj)0x0) && (*(longlong *)(pCVar34 + 0x14) != 0))
               && (((pCVar21 = pCVar16, *(__uint64 *)(pCVar34 + 4) != 0xffffffffffffffff &&
                    (pCVar21 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*(__uint64 *)(pCVar34 + 4)),
                    pCVar21 != (CAkRegisteredObj *)0x0)) || (*(longlong *)(pCVar34 + 4) == -1)))) {
              piVar20 = DAT_14c791060;
              uVar12 = *(uint *)(pCVar34 + 0xc);
              if (pCVar34[0x10] == (CAkRegisteredObj)0x0) {
                FUN_145080740(&local_4d8);
                if (piVar20[0x12] != 0) {
                  for (pCVar32 = *(CAkRegisteredObj **)
                                  (*(longlong *)(piVar20 + 0x10) +
                                  ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x12]) * 8);
                      (pCVar28 = pCVar16, pCVar32 != (CAkRegisteredObj *)0x0 &&
                      (pCVar28 = pCVar32, *(uint *)(pCVar32 + 0x10) != uVar12));
                      pCVar32 = *(CAkRegisteredObj **)(pCVar32 + 8)) {
                  }
                  pCVar16 = pCVar28;
                  if (pCVar28 != (CAkRegisteredObj *)0x0) {
                    LOCK();
                    *(int *)(pCVar28 + 0x14) = *(int *)(pCVar28 + 0x14) + 1;
                    UNLOCK();
                  }
                }
                iVar13 = *local_4d8;
                while (-1 < iVar13) {
                  LOCK();
                  iVar1 = *local_4d8;
                  if (iVar13 == iVar1) {
                    *local_4d8 = iVar13 + -1;
                  }
                  UNLOCK();
                  if (iVar13 == iVar1) {
                    if ((iVar13 + -1 == 0) && (0 < local_4d8[0xc])) {
                      SetEvent(*(HANDLE *)(local_4d8 + 0xe));
                    }
                    goto LAB_145087550;
                  }
                  iVar13 = *local_4d8;
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)(local_4d8 + 2));
LAB_145087550:
                if (pCVar16 == (CAkRegisteredObj *)0x0) goto LAB_1450875eb;
                pCVar32 = pCVar16 + -0x10;
              }
              else {
                FUN_145080740(&local_4e0);
                pCVar28 = pCVar16;
                if (piVar20[0x28] != 0) {
                  for (pCVar32 = *(CAkRegisteredObj **)
                                  (*(longlong *)(piVar20 + 0x26) +
                                  ((ulonglong)uVar12 % (ulonglong)(uint)piVar20[0x28]) * 8);
                      (pCVar28 = pCVar16, pCVar32 != (CAkRegisteredObj *)0x0 &&
                      (pCVar28 = pCVar32, *(uint *)(pCVar32 + 0x10) != uVar12));
                      pCVar32 = *(CAkRegisteredObj **)(pCVar32 + 8)) {
                  }
                  if (pCVar28 != (CAkRegisteredObj *)0x0) {
                    LOCK();
                    *(int *)(pCVar28 + 0x14) = *(int *)(pCVar28 + 0x14) + 1;
                    UNLOCK();
                  }
                }
                iVar13 = *local_4e0;
                while (-1 < iVar13) {
                  LOCK();
                  iVar1 = *local_4e0;
                  if (iVar13 == iVar1) {
                    *local_4e0 = iVar13 + -1;
                  }
                  UNLOCK();
                  if (iVar13 == iVar1) {
                    if ((iVar13 + -1 != 0) || (local_4e0[0xc] < 1)) goto LAB_14508748c;
                    SetEvent(*(HANDLE *)(local_4e0 + 0xe));
                    pCVar32 = pCVar28 + -0x10;
                    if (pCVar28 == (CAkRegisteredObj *)0x0) {
                      pCVar32 = pCVar16;
                    }
                    goto LAB_14508755d;
                  }
                  iVar13 = *local_4e0;
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)(local_4e0 + 2));
LAB_14508748c:
                pCVar32 = pCVar28 + -0x10;
                if (pCVar28 == (CAkRegisteredObj *)0x0) {
                  pCVar32 = pCVar16;
                }
              }
LAB_14508755d:
              if (pCVar32 != (CAkRegisteredObj *)0x0) {
                CVar2 = pCVar34[0x11];
                lVar19 = *(longlong *)(pCVar34 + 0x14);
                uVar27 = 0;
                if (CVar2 != (CAkRegisteredObj)0x0) {
                  do {
                    in_stack_fffffffffffffb08 = 0;
                    in_stack_fffffffffffffaf8 =
                         (CAkRegisteredObj **)
                         CONCAT44((int)((ulonglong)in_stack_fffffffffffffaf8 >> 0x20),
                                  *(undefined4 *)(lVar19 + (ulonglong)uVar27 * 4));
                    (**(code **)(*(longlong *)pCVar32 + 0x158))
                              (pCVar32,*(undefined1 *)
                                        (lVar19 + (ulonglong)(byte)CVar2 * 4 + (ulonglong)uVar27),
                               pCVar21,1,in_stack_fffffffffffffaf8,4,0);
                    uVar27 = uVar27 + 1;
                  } while (uVar27 < (byte)pCVar34[0x11]);
                }
                LOCK();
                pCVar16 = pCVar32 + 0x24;
                iVar13 = *(int *)pCVar16;
                *(int *)pCVar16 = *(int *)pCVar16 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*(longlong *)(pCVar32 + 0x10) + 0x18))();
                }
              }
            }
LAB_1450875eb:
            bVar35 = bVar7;
            if (*(void **)(pCVar34 + 0x14) != (void *)0x0) {
              AK::MemoryMgr::Free(0,*(void **)(pCVar34 + 0x14));
            }
            break;
          case 0x3f:
            FUN_1450ac700(g_pRegistryMgr,*(undefined8 *)(pCVar34 + 4),*(undefined8 *)(pCVar34 + 0xc)
                         );
            bVar35 = bVar7;
          }
switchD_14508500a_caseD_4:
          uVar22 = ((ulonglong)(local_4e2 + 3) & 0xfffffffc) + *(longlong *)(param_1 + 0x10);
          if (*(ulonglong *)(param_1 + 0x28) <= uVar22) {
            uVar22 = *(ulonglong *)(param_1 + 0x20);
          }
          LOCK();
          uVar23 = *(ulonglong *)(param_1 + 0x10);
          *(ulonglong *)(param_1 + 0x10) = uVar22;
          UNLOCK();
          if (param_2 != '\0') {
            local_4d0 = local_4d0 + local_4e2;
            uVar23 = CONCAT71((int7)(uVar23 >> 8),local_498 <= local_4d0);
            bVar35 = (bool)(bVar35 | local_498 <= local_4d0);
            bVar7 = bVar35;
          }
          DAT_14c7fdcb8 = DAT_14c7fdcb8 + 1;
        } while (!bVar35);
LAB_1450876dd:
        return CONCAT71((int7)(uVar23 >> 8),1);
      }
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x30) >> 1;
      uVar23 = (ulonglong)uVar12;
      if (uVar12 < local_498) goto LAB_145084f56;
    }
  }
  return uVar23 & 0xffffffffffffff00;
}



// FUNCTION 145087840 FUN_145087840 body=395 status=ok
// SIG undefined FUN_145087840(void)

void FUN_145087840(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 param_7,undefined1 param_8)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  do {
    if (lVar2 == 0) {
      return;
    }
    if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
      puVar4 = AK::MemoryMgr::Malloc(0,0x48);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
        *puVar4 = &PTR_FUN_149c23928;
        *(undefined4 *)(puVar4 + 7) = 0;
        puVar4[8] = 0;
        goto LAB_145087947;
      }
    }
    else if (((param_2 != 0) && (*(longlong *)(param_2 + 8) != 0)) &&
            (puVar4 = AK::MemoryMgr::Malloc(0,0x48), puVar4 != (undefined8 *)0x0)) {
      *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *puVar4 = &PTR_FUN_149c23928;
      *(undefined4 *)(puVar4 + 7) = 0;
      puVar4[8] = param_2;
      uVar1 = *(uint *)(param_2 + 0x60);
      if ((uVar1 < 2) && (*(char *)(param_2 + 100) != '\0')) {
        *(uint *)(param_2 + 0x60) = uVar1 + 1;
        if ((1 < uVar1 + 1) || (*(char *)(param_2 + 100) == '\0')) {
          FUN_145355090(param_2);
        }
      }
      else {
        *(uint *)(param_2 + 0x60) = uVar1 + 1;
      }
LAB_145087947:
      *(undefined4 *)(puVar4 + 7) = param_5;
      puVar4[1] = lVar2;
      *(undefined4 *)(puVar4 + 6) = param_4;
      *(undefined8 *)((longlong)puVar4 + 0x24) = param_6[1];
      *(undefined4 *)((longlong)puVar4 + 0x2c) = *(undefined4 *)(param_6 + 2);
      piVar3 = (int *)*param_6;
      if (*(longlong *)((longlong)puVar4 + 0x1c) != 0) {
        FUN_144d4a460();
      }
      if (piVar3 != (int *)0x0) {
        *piVar3 = *piVar3 + 1;
      }
      *(int **)((longlong)puVar4 + 0x1c) = piVar3;
      FUN_145083930(DAT_14c790fd8,puVar4,param_7,param_8);
    }
    lVar2 = *(longlong *)(lVar2 + 0x18);
  } while( true );
}



// FUNCTION 1450879d0 FUN_1450879d0 body=89 status=ok
// SIG undefined FUN_1450879d0(void)

void FUN_1450879d0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  (**(code **)(*(longlong *)param_2[1] + 0x38))();
  if ((int)param_2[6] != 0) {
    FUN_1450b28b0(DAT_14c790fc0);
  }
  plVar3 = (longlong *)param_2[1];
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*plVar3 + 0x18))();
  }
  (**(code **)(*param_2 + 8))(param_2,0);
  AK::MemoryMgr::Free(0,param_2);
  return;
}



// FUNCTION 145087a30 FUN_145087a30 body=679 status=ok
// SIG undefined FUN_145087a30(void)

ulonglong FUN_145087a30(undefined8 param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong extraout_RAX;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  byte local_res20 [8];
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_348 [2];
  longlong *local_340;
  undefined8 local_338;
  undefined4 *local_330;
  int *local_328;
  longlong local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  ulonglong local_2b8;
  undefined2 local_2b0 [2];
  char local_2ab;
  undefined8 local_2a0;
  undefined1 local_298 [600];
  undefined4 local_40;
  byte local_3c;
  byte local_38;
  
  puVar3 = DAT_14c791060;
  do {
    while (uVar7 = *puVar3, (int)uVar7 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 2));
      if ((int)*puVar3 < 0) goto LAB_145087a70;
      LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 2));
    }
    LOCK();
    uVar1 = *puVar3;
    if (uVar7 == uVar1) {
      *puVar3 = uVar7 + 1;
    }
    UNLOCK();
  } while (uVar7 != uVar1);
LAB_145087a70:
  plVar10 = (longlong *)0x0;
  plVar11 = plVar10;
  if (puVar3[0x12] != 0) {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(puVar3 + 0x10) +
                   ((ulonglong)param_2 % (ulonglong)puVar3[0x12]) * 8);
        (plVar11 = plVar10, plVar9 != (longlong *)0x0 &&
        (plVar11 = plVar9, *(uint *)(plVar9 + 2) != param_2)); plVar9 = (longlong *)plVar9[1]) {
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
      UNLOCK();
    }
  }
  uVar7 = *puVar3;
  while (-1 < (int)uVar7) {
    LOCK();
    uVar1 = *puVar3;
    bVar12 = uVar7 == uVar1;
    if (bVar12) {
      *puVar3 = uVar7 - 1;
      uVar1 = uVar7;
    }
    uVar8 = (ulonglong)uVar1;
    UNLOCK();
    if (bVar12) {
      if ((uVar7 - 1 == 0) && (uVar8 = (ulonglong)puVar3[0xc], 0 < (int)puVar3[0xc])) {
        uVar7 = SetEvent(*(HANDLE *)(puVar3 + 0xe));
        uVar8 = (ulonglong)uVar7;
      }
      goto LAB_145087aef;
    }
    uVar7 = *puVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 2));
  uVar8 = extraout_RAX;
LAB_145087aef:
  plVar9 = plVar11 + -2;
  if (plVar11 == (longlong *)0x0) {
    plVar9 = plVar10;
  }
  if (plVar9 == (longlong *)0x0) goto LAB_145087c8c;
  local_358 = 0;
  local_354 = 4;
  local_340 = (longlong *)0x0;
  local_318 = 0;
  local_320 = 0;
  local_328 = (int *)0x0;
  local_2cc = 0;
  local_2b8 = 0;
  local_2b0[0] = 0xff00;
  local_2a0 = 0;
  FUN_144d51920(local_298);
  local_3c = local_3c & 0xfe;
  local_38 = local_38 & 0xf3 | 3;
  piVar2 = (int *)*param_4;
  local_340 = plVar9 + 2;
  local_320 = param_4[1];
  local_318 = param_4[2];
  local_40 = 0;
  local_310 = 0;
  local_348[0] = 0;
  if (local_328 != (int *)0x0) {
    FUN_144d4a460();
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  local_330 = &local_358;
  bVar4 = local_38 | 2;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = local_2b8 & 0xffffffff00000000;
  local_338 = param_3;
  local_328 = piVar2;
  if (((char)local_2b0[0] == -0x70) && (local_2ab != '\0')) {
    local_res20[0] = local_38 & 1;
    local_38 = bVar4;
    uVar5 = FUN_1450e98e0(local_348);
    iVar6 = FUN_14536f6c0(plVar9,local_2b0,uVar5,local_res20,param_3,local_318._4_4_);
    if (iVar6 == 1) {
      bVar4 = local_res20[0] & 1 | local_38 & 0xfe;
      goto LAB_145087c38;
    }
  }
  else {
LAB_145087c38:
    local_38 = bVar4;
    iVar6 = FUN_14536f160(plVar9,local_348);
    if (iVar6 == 1) {
      (**(code **)(*plVar9 + 0x250))(plVar9,local_348);
    }
  }
  LOCK();
  piVar2 = (int *)((longlong)plVar9 + 0x24);
  iVar6 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    (**(code **)(plVar9[2] + 0x18))();
  }
  uVar8 = FUN_144d51aa0(local_298);
  if (local_328 != (int *)0x0) {
    uVar8 = FUN_144d4a460();
  }
LAB_145087c8c:
  if (*param_4 != 0) {
    uVar8 = FUN_144d4a460();
  }
  return uVar8;
}



// FUNCTION 145087ce0 FUN_145087ce0 body=335 status=ok
// SIG undefined FUN_145087ce0(void)

undefined8 FUN_145087ce0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_3 != (undefined8 *)0x0) {
    bVar3 = false;
    lVar6 = 0;
    if ((*(int *)(param_2 + 0x30) != 0) && (lVar4 = FUN_145369e40(param_2), lVar4 != 0)) {
      piVar2 = (int *)*param_3;
      lVar7 = lVar4;
      do {
        if (piVar2 != piVar2 + (ulonglong)*(uint *)(param_3 + 1) * 2) {
          piVar5 = piVar2;
          do {
            if ((*(int *)(lVar7 + 0x20) == *piVar5) &&
               (*(byte *)(lVar7 + 0xd4) >> 7 == *(byte *)(piVar5 + 1))) goto LAB_145087e12;
            piVar5 = piVar5 + 2;
          } while (piVar5 != piVar2 + (ulonglong)*(uint *)(param_3 + 1) * 2);
        }
        if ((!bVar3) && (lVar6 = *(longlong *)(lVar7 + 0x80), lVar6 != 0)) {
          bVar3 = true;
        }
        lVar7 = *(longlong *)(lVar7 + 0x78);
      } while (lVar7 != 0);
      for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x80)) {
        if (piVar2 != piVar2 + (ulonglong)*(uint *)(param_3 + 1) * 2) {
          piVar5 = piVar2;
          do {
            if ((*(int *)(lVar6 + 0x20) == *piVar5) &&
               (*(byte *)(lVar6 + 0xd4) >> 7 == *(byte *)(piVar5 + 1))) {
LAB_145087e12:
              LOCK();
              piVar2 = (int *)(lVar4 + 0x24);
              iVar1 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar1 == 1) {
                (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
              }
              return 1;
            }
            piVar5 = piVar5 + 2;
          } while (piVar5 != piVar2 + (ulonglong)*(uint *)(param_3 + 1) * 2);
        }
      }
      LOCK();
      piVar2 = (int *)(lVar4 + 0x24);
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
      }
    }
  }
  return 0;
}



// FUNCTION 145087e30 FUN_145087e30 body=14 status=ok
// SIG undefined FUN_145087e30(void)

void FUN_145087e30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145087e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0xa0));
  return;
}



// FUNCTION 145087e40 FUN_145087e40 body=6 status=ok
// SIG undefined FUN_145087e40(void)

undefined8 FUN_145087e40(void)

{
  return 0x14;
}



// FUNCTION 145087e50 FUN_145087e50 body=6 status=ok
// SIG undefined FUN_145087e50(void)

undefined8 FUN_145087e50(void)

{
  return 0x18;
}



// FUNCTION 145087e60 FUN_145087e60 body=6 status=ok
// SIG undefined FUN_145087e60(void)

undefined8 FUN_145087e60(void)

{
  return 0x20;
}



// FUNCTION 145087e70 FUN_145087e70 body=6 status=ok
// SIG undefined FUN_145087e70(void)

undefined8 FUN_145087e70(void)

{
  return 0x34;
}



// FUNCTION 145087e80 FUN_145087e80 body=6 status=ok
// SIG undefined FUN_145087e80(void)

undefined8 FUN_145087e80(void)

{
  return 0x18;
}



// FUNCTION 145087e90 FUN_145087e90 body=6 status=ok
// SIG undefined FUN_145087e90(void)

undefined8 FUN_145087e90(void)

{
  return 0x24;
}



// FUNCTION 145087ea0 FUN_145087ea0 body=6 status=ok
// SIG undefined FUN_145087ea0(void)

undefined8 FUN_145087ea0(void)

{
  return 0x10;
}



// FUNCTION 145087eb0 FUN_145087eb0 body=6 status=ok
// SIG undefined FUN_145087eb0(void)

undefined8 FUN_145087eb0(void)

{
  return 0x14;
}



// FUNCTION 145087ec0 FUN_145087ec0 body=6 status=ok
// SIG undefined FUN_145087ec0(void)

undefined8 FUN_145087ec0(void)

{
  return 0x10;
}



// FUNCTION 145087ed0 FUN_145087ed0 body=6 status=ok
// SIG undefined FUN_145087ed0(void)

undefined8 FUN_145087ed0(void)

{
  return 0x10;
}



// FUNCTION 145087ee0 FUN_145087ee0 body=6 status=ok
// SIG undefined FUN_145087ee0(void)

undefined8 FUN_145087ee0(void)

{
  return 0xc;
}



// FUNCTION 145087ef0 FUN_145087ef0 body=6 status=ok
// SIG undefined FUN_145087ef0(void)

undefined8 FUN_145087ef0(void)

{
  return 0x40;
}



// FUNCTION 145087f00 FUN_145087f00 body=6 status=ok
// SIG undefined FUN_145087f00(void)

undefined8 FUN_145087f00(void)

{
  return 0xc;
}



// FUNCTION 145087f10 FUN_145087f10 body=6 status=ok
// SIG undefined FUN_145087f10(void)

undefined8 FUN_145087f10(void)

{
  return 0x1c;
}



// FUNCTION 145087f20 FUN_145087f20 body=6 status=ok
// SIG undefined FUN_145087f20(void)

undefined8 FUN_145087f20(void)

{
  return 0x20;
}



// FUNCTION 145087f30 FUN_145087f30 body=6 status=ok
// SIG undefined FUN_145087f30(void)

undefined8 FUN_145087f30(void)

{
  return 0x18;
}



// FUNCTION 145087f40 FUN_145087f40 body=6 status=ok
// SIG undefined FUN_145087f40(void)

undefined8 FUN_145087f40(void)

{
  return 0x1c;
}



// FUNCTION 145087f50 FUN_145087f50 body=6 status=ok
// SIG undefined FUN_145087f50(void)

undefined8 FUN_145087f50(void)

{
  return 0x14;
}



// FUNCTION 145087f60 FUN_145087f60 body=6 status=ok
// SIG undefined FUN_145087f60(void)

undefined8 FUN_145087f60(void)

{
  return 0x20;
}



// FUNCTION 145087f70 FUN_145087f70 body=6 status=ok
// SIG undefined FUN_145087f70(void)

undefined8 FUN_145087f70(void)

{
  return 0x10;
}



// FUNCTION 145087f80 FUN_145087f80 body=6 status=ok
// SIG undefined FUN_145087f80(void)

undefined8 FUN_145087f80(void)

{
  return 0x30;
}



// FUNCTION 145087f90 FUN_145087f90 body=6 status=ok
// SIG undefined FUN_145087f90(void)

undefined8 FUN_145087f90(void)

{
  return 0x18;
}



// FUNCTION 145087fa0 FUN_145087fa0 body=6 status=ok
// SIG undefined FUN_145087fa0(void)

undefined8 FUN_145087fa0(void)

{
  return 0x14;
}



// FUNCTION 145087fb0 FUN_145087fb0 body=6 status=ok
// SIG undefined FUN_145087fb0(void)

undefined8 FUN_145087fb0(void)

{
  return 0xc;
}



// FUNCTION 145087fc0 FUN_145087fc0 body=6 status=ok
// SIG undefined FUN_145087fc0(void)

undefined8 FUN_145087fc0(void)

{
  return 0xc;
}


