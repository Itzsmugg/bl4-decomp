// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145366a70 FUN_145366a70 body=128 status=ok
// SIG undefined FUN_145366a70(void)

undefined4 * FUN_145366a70(undefined4 *param_1,undefined4 *param_2)

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



// FUNCTION 145366af0 FUN_145366af0 body=291 status=ok
// SIG undefined FUN_145366af0(void)

void FUN_145366af0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  lVar7 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar6 = lVar7 * 0x18;
    do {
      lVar3 = *(longlong *)(param_1 + 8) + lVar6;
      iVar1 = *(int *)(lVar3 + 0x10) + -1;
      lVar2 = (longlong)iVar1;
      if (-1 < iVar1) {
        lVar4 = lVar2 * 0x18;
        do {
          lVar5 = *(longlong *)(lVar3 + 8) + lVar4;
          *(undefined1 *)(lVar5 + 4) = 0;
          if (*(void **)(lVar5 + 8) != (void *)0x0) {
            *(undefined4 *)(lVar5 + 0x10) = 0;
            AK::MemoryMgr::Free(0,*(void **)(lVar5 + 8));
            *(undefined8 *)(lVar5 + 8) = 0;
            *(undefined4 *)(lVar5 + 0x14) = 0;
          }
          lVar4 = lVar4 + -0x18;
          lVar2 = lVar2 + -1;
        } while (-1 < lVar2);
      }
      if (*(void **)(lVar3 + 8) != (void *)0x0) {
        *(undefined4 *)(lVar3 + 0x10) = 0;
        AK::MemoryMgr::Free(0,*(void **)(lVar3 + 8));
        *(undefined8 *)(lVar3 + 8) = 0;
        *(undefined4 *)(lVar3 + 0x14) = 0;
      }
      lVar6 = lVar6 + -0x18;
      *(undefined1 *)(lVar3 + 4) = 0;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
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



// FUNCTION 145366c20 FUN_145366c20 body=372 status=ok
// SIG undefined FUN_145366c20(void)

longlong FUN_145366c20(longlong param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined7 uStack_47;
  undefined8 uStack_40;
  
  cVar1 = *param_2;
  if (((cVar1 == -1) && (param_2[8] == -1)) && (*(longlong *)(param_2 + 0x10) == 0))
  goto LAB_145366d43;
  lVar2 = FUN_145366760(param_1 + 8,cVar1);
  if (lVar2 == 0) {
    if (cVar1 == -1) goto LAB_145366d43;
    *param_2 = -1;
    lVar2 = FUN_145366760(param_1 + 8,0xff);
  }
  if (lVar2 == 0) goto LAB_145366d43;
  cVar1 = param_2[8];
  if ((cVar1 != -1) || (*(longlong *)(param_2 + 0x10) != 0)) {
    lVar3 = FUN_145366eb0(lVar2 + 8,cVar1);
    if (lVar3 == 0) {
      if (cVar1 == -1) goto LAB_145366d16;
      param_2[8] = -1;
      lVar3 = FUN_145366eb0(lVar2 + 8,0xff);
    }
    if (lVar3 != 0) {
      if ((*(longlong *)(param_2 + 0x10) == 0) || (lVar4 = FUN_145367540(lVar3 + 8), lVar4 == 0)) {
        lVar4 = lVar3 + 2;
        param_2[0x10] = '\0';
        param_2[0x11] = '\0';
        param_2[0x12] = '\0';
        param_2[0x13] = '\0';
        param_2[0x14] = '\0';
        param_2[0x15] = '\0';
        param_2[0x16] = '\0';
        param_2[0x17] = '\0';
        if (*(char *)(lVar3 + 4) == '\0') {
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
LAB_145366d16:
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
  lVar3 = lVar2 + 2;
  if (*(char *)(lVar2 + 4) == '\0') {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    return lVar3;
  }
LAB_145366d43:
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
  lVar2 = param_1 + 4;
  if (*(char *)(param_1 + 6) == '\0') {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 145366da0 FUN_145366da0 body=259 status=ok
// SIG undefined FUN_145366da0(void)

undefined8 FUN_145366da0(longlong *param_1)

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
            FUN_1453676c0(puVar1,(-0x14 - (longlong)pvVar4) + lVar6 + *param_1);
            lVar6 = lVar6 + 0x18;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145366e8c;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_145366e8c:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145366eb0 FUN_145366eb0 body=162 status=ok
// SIG undefined FUN_145366eb0(void)

/* WARNING: Removing unreachable block (ram,0x000145366f2a) */

longlong FUN_145366eb0(longlong *param_1,byte param_2)

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



// FUNCTION 145366f60 FUN_145366f60 body=345 status=ok
// SIG undefined FUN_145366f60(void)

undefined1 * FUN_145366f60(longlong *param_1,undefined1 param_2,char *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined1 *)FUN_145367130();
  if (*param_3 != '\0') {
    return puVar2;
  }
  uVar4 = *(uint *)(param_1 + 1);
  if (puVar2 == (undefined1 *)0x0) {
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_145366da0(param_1), cVar1 != '\0')) &&
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
      goto LAB_145367092;
    }
  }
  else {
    lVar3 = ((longlong)puVar2 - *param_1) / 6 + ((longlong)puVar2 - *param_1 >> 0x3f);
    uVar5 = (lVar3 >> 2) - (lVar3 >> 0x3f);
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_145366da0(param_1), cVar1 != '\0')) &&
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
LAB_145367092:
      if (puVar2 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      *puVar2 = param_2;
      return puVar2;
    }
  }
  return (undefined1 *)0x0;
}



// FUNCTION 1453670c0 FUN_1453670c0 body=110 status=ok
// SIG undefined FUN_1453670c0(void)

undefined8 FUN_1453670c0(longlong *param_1)

{
  void *pvVar1;
  void *_Dst;
  
  _Dst = (void *)FUN_145366eb0();
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



// FUNCTION 145367130 FUN_145367130 body=142 status=ok
// SIG undefined FUN_145367130(void)

longlong FUN_145367130(longlong *param_1,byte param_2,undefined1 *param_3)

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



// FUNCTION 1453671c0 FUN_1453671c0 body=129 status=ok
// SIG undefined FUN_1453671c0(void)

undefined1 * FUN_1453671c0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return param_1;
}



// FUNCTION 145367250 FUN_145367250 body=170 status=ok
// SIG undefined FUN_145367250(void)

void FUN_145367250(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar3 = lVar2 * 0x18;
    do {
      lVar4 = *(longlong *)(param_1 + 8) + lVar3;
      *(undefined1 *)(lVar4 + 4) = 0;
      if (*(void **)(lVar4 + 8) != (void *)0x0) {
        *(undefined4 *)(lVar4 + 0x10) = 0;
        AK::MemoryMgr::Free(0,*(void **)(lVar4 + 8));
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined4 *)(lVar4 + 0x14) = 0;
      }
      lVar3 = lVar3 + -0x18;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 145367300 FUN_145367300 body=296 status=ok
// SIG undefined FUN_145367300(void)

undefined1 FUN_145367300(longlong param_1,char *param_2)

{
  longlong lVar1;
  void *_Dst;
  void *pvVar2;
  undefined1 uVar3;
  
  if ((*param_2 != -1) || (*(longlong *)(param_2 + 8) != 0)) {
    lVar1 = FUN_145366eb0();
    if (lVar1 != 0) {
      if (*(longlong *)(param_2 + 8) == 0) {
        uVar3 = *(undefined1 *)(lVar1 + 4);
        *(undefined1 *)(lVar1 + 4) = 0;
      }
      else {
        _Dst = (void *)FUN_145367540();
        if (_Dst == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          pvVar2 = (void *)((ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10 +
                           *(longlong *)(lVar1 + 8));
          if (_Dst < pvVar2) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                    (ulonglong)((int)pvVar2 - (int)_Dst & 0xfffffff0));
          }
          *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
          uVar3 = 1;
        }
        if ((*(int *)(lVar1 + 0x10) == 0) && (*(void **)(lVar1 + 8) != (void *)0x0)) {
          *(undefined4 *)(lVar1 + 0x10) = 0;
          AK::MemoryMgr::Free(0,*(void **)(lVar1 + 8));
          *(undefined8 *)(lVar1 + 8) = 0;
          *(undefined4 *)(lVar1 + 0x14) = 0;
        }
      }
      if ((*(char *)(lVar1 + 4) == '\0') && (*(int *)(lVar1 + 0x10) == 0)) {
        *(undefined1 *)(lVar1 + 4) = 0;
        if (*(void **)(lVar1 + 8) != (void *)0x0) {
          *(undefined4 *)(lVar1 + 0x10) = 0;
          AK::MemoryMgr::Free(0,*(void **)(lVar1 + 8));
          *(undefined8 *)(lVar1 + 8) = 0;
          *(undefined4 *)(lVar1 + 0x14) = 0;
        }
        FUN_1453670c0(param_1 + 8,*param_2);
      }
      return uVar3;
    }
  }
  uVar3 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  return uVar3;
}



// FUNCTION 145367430 FUN_145367430 body=51 status=ok
// SIG undefined FUN_145367430(void)

void FUN_145367430(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 145367470 FUN_145367470 body=201 status=ok
// SIG undefined FUN_145367470(void)

undefined8 FUN_145367470(longlong *param_1)

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
          }
          puVar1 = (undefined8 *)((longlong)puVar5 + (*param_1 - (longlong)puVar6));
          uVar4 = puVar1[1];
          *puVar5 = *puVar1;
          puVar5[1] = uVar4;
          puVar5 = puVar5 + 2;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14536751c;
    }
  }
  else {
    puVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
LAB_14536751c:
      *param_1 = (longlong)puVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145367540 FUN_145367540 body=156 status=ok
// SIG undefined FUN_145367540(void)

/* WARNING: Removing unreachable block (ram,0x0001453675b4) */

ulonglong * FUN_145367540(longlong *param_1,ulonglong param_2)

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



// FUNCTION 1453675e0 FUN_1453675e0 body=74 status=ok
// SIG undefined FUN_1453675e0(void)

undefined8 FUN_1453675e0(longlong *param_1)

{
  void *_Dst;
  void *pvVar1;
  
  _Dst = (void *)FUN_145367540();
  if (_Dst != (void *)0x0) {
    pvVar1 = (void *)((ulonglong)((int)param_1[1] - 1) * 0x10 + *param_1);
    if (_Dst < pvVar1) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(ulonglong)((int)pvVar1 - (int)_Dst & 0xfffffff0)
             );
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return 1;
  }
  return 0;
}



// FUNCTION 145367630 FUN_145367630 body=130 status=ok
// SIG undefined FUN_145367630(void)

longlong FUN_145367630(longlong *param_1,ulonglong param_2,undefined1 *param_3)

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
      lVar4 = (longlong)iVar2 * 0x10;
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
  return (longlong)iVar6 * 0x10 + *param_1;
}



// FUNCTION 1453676c0 FUN_1453676c0 body=129 status=ok
// SIG undefined FUN_1453676c0(void)

void FUN_1453676c0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 145367750 FUN_145367750 body=57 status=ok
// SIG undefined FUN_145367750(void)

void FUN_145367750(longlong param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 145367790 FUN_145367790 body=366 status=ok
// SIG undefined FUN_145367790(void)

longlong * FUN_145367790(longlong param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *_Src;
  longlong *plVar8;
  longlong lVar9;
  
  if (*param_2 == 0) {
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined2 *)(param_1 + 2) = 0;
    }
    *param_3 = *(char *)(param_1 + 4);
    *(undefined1 *)(param_1 + 4) = 1;
    return (longlong *)(param_1 + 2);
  }
  if ((param_4 != (longlong *)0x0) && (*(char *)(param_1 + 4) != '\0')) {
    *param_4 = param_1 + 2;
  }
  lVar2 = *param_2;
  plVar5 = (longlong *)(param_1 + 8);
  plVar4 = (longlong *)FUN_145367630(plVar5,lVar2);
  plVar8 = (longlong *)0x0;
  if (*param_3 == '\0') {
    puVar1 = (uint *)(param_1 + 0x10);
    uVar6 = *puVar1;
    if (plVar4 == (longlong *)0x0) {
      if (((*(uint *)(param_1 + 0x14) <= uVar6) &&
          (cVar3 = FUN_145367470(plVar5), plVar4 = plVar8, cVar3 == '\0')) ||
         (plVar4 = plVar8, *(uint *)(param_1 + 0x14) <= uVar6)) goto LAB_1453678b5;
      uVar6 = *puVar1;
      *puVar1 = uVar6 + 1;
      plVar4 = (longlong *)((ulonglong)uVar6 * 0x10 + *plVar5);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = 0;
      }
    }
    else {
      uVar7 = (longlong)plVar4 - *plVar5 >> 4;
      if (((*(uint *)(param_1 + 0x14) <= uVar6) &&
          (cVar3 = FUN_145367470(plVar5), plVar4 = plVar8, cVar3 == '\0')) ||
         (plVar4 = plVar8, *(uint *)(param_1 + 0x14) <= uVar6)) goto LAB_1453678b5;
      uVar6 = (uint)uVar7;
      lVar9 = (uVar7 & 0xffffffff) * 0x10;
      _Src = (undefined8 *)(*plVar5 + lVar9);
      if (uVar6 < *puVar1) {
        memmove(_Src + 2,_Src,(ulonglong)((*puVar1 - uVar6) * 0x10));
      }
      if (_Src != (undefined8 *)0x0) {
        *_Src = 0;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      plVar4 = (longlong *)(*plVar5 + lVar9);
    }
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = lVar2;
    }
  }
LAB_1453678b5:
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  return plVar5;
}



// FUNCTION 145367900 FUN_145367900 body=186 status=ok
// SIG undefined FUN_145367900(void)

void FUN_145367900(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 2) {
    do {
      if (*(char *)(puVar2 + 1) != *(char *)((longlong)param_1 + 0x11)) {
        *(char *)(puVar2 + 1) = *(char *)((longlong)param_1 + 0x11);
        (*(code *)**(undefined8 **)*puVar2)
                  ((undefined8 *)*puVar2,*(undefined8 *)(*param_2 + 8),param_2[2],param_2 + 1,
                   (longlong)param_2 + 0xc);
      }
    } while (((*(byte *)(param_1 + 2) & 3) == 0) &&
            (puVar2 = puVar2 + 2,
            puVar2 != (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1)));
  }
  bVar1 = *(byte *)(param_1 + 2);
  if (((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) {
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    local_28 = *param_2;
    local_20 = (undefined4)param_2[1];
    local_1c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_18 = param_2[2];
    FUN_145367900(param_1,&local_28);
  }
  return;
}



// FUNCTION 1453679c0 FUN_1453679c0 body=186 status=ok
// SIG undefined FUN_1453679c0(void)

void FUN_1453679c0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 2) {
    do {
      if (*(char *)(puVar2 + 1) != *(char *)((longlong)param_1 + 0x11)) {
        *(char *)(puVar2 + 1) = *(char *)((longlong)param_1 + 0x11);
        (*(code *)**(undefined8 **)*puVar2)
                  ((undefined8 *)*puVar2,*(undefined8 *)(*param_2 + 8),param_2[2],param_2 + 1,
                   (longlong)param_2 + 0xc);
      }
    } while (((*(byte *)(param_1 + 2) & 3) == 0) &&
            (puVar2 = puVar2 + 2,
            puVar2 != (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1)));
  }
  bVar1 = *(byte *)(param_1 + 2);
  if (((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) {
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    local_28 = *param_2;
    local_20 = (undefined4)param_2[1];
    local_1c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_18 = param_2[2];
    FUN_1453679c0(param_1,&local_28);
  }
  return;
}



// FUNCTION 145367a80 FUN_145367a80 body=119 status=ok
// SIG undefined FUN_145367a80(void)

void FUN_145367a80(undefined8 *param_1,ushort *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  
  plVar1 = (longlong *)param_1[1];
  lVar2 = *(longlong *)(*plVar1 + 0x20);
  if (lVar2 == 0) {
    local_res10[0] = *(undefined4 *)(*(longlong *)*param_1 + (ulonglong)*param_2 * 0x28 + 0x20);
  }
  else {
    puVar3 = (undefined4 *)FUN_145363aa0(lVar2,local_res8,param_3);
    local_res10[0] = *puVar3;
  }
  FUN_145364af0(*plVar1,param_3,local_res10,local_res8,0,0,0);
  return;
}



// FUNCTION 145367b00 FUN_145367b00 body=326 status=ok
// SIG undefined FUN_145367b00(void)

void FUN_145367b00(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar6 = (undefined8 *)*param_1;
  if (puVar6 != puVar6 + (ulonglong)*(uint *)(param_1 + 1) * 2) {
    do {
      if (*(char *)(puVar6 + 1) != *(char *)((longlong)param_1 + 0x11)) {
        plVar2 = (longlong *)*puVar6;
        *(char *)(puVar6 + 1) = *(char *)((longlong)param_1 + 0x11);
        uVar4 = (**(code **)*plVar2)(plVar2);
        if (*param_2 == 0) {
          local_res8[0] = *(int *)(param_2[1] + 0x70);
        }
        else {
          piVar5 = (int *)FUN_145363aa0(*param_2,local_res20,uVar4);
          local_res8[0] = *piVar5;
        }
        lVar3 = param_2[1];
        if (*(longlong *)(lVar3 + 0x20) == 0) {
          local_res18[0] = *(int *)(lVar3 + 0x70);
        }
        else {
          piVar5 = (int *)FUN_145363aa0(*(longlong *)(lVar3 + 0x20),local_48,uVar4);
          local_res18[0] = *piVar5;
        }
        if (local_res8[0] != local_res18[0]) {
          (**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)(lVar3 + 8),uVar4,local_res8,local_res18)
          ;
        }
      }
    } while (((*(byte *)(param_1 + 2) & 3) == 0) &&
            (puVar6 = puVar6 + 2,
            puVar6 != (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1)));
  }
  bVar1 = *(byte *)(param_1 + 2);
  if (((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) {
    local_38 = (undefined4)*param_2;
    uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_30 = (undefined4)param_2[1];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    FUN_145367b00(param_1,&local_38);
  }
  return;
}



// FUNCTION 145367c50 FUN_145367c50 body=533 status=ok
// SIG undefined FUN_145367c50(void)

undefined8
FUN_145367c50(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  void *_Dst;
  ushort *puVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar7 = *param_3;
  if (lVar7 == 0) {
    uVar8 = *(uint *)(param_1 + 0x10);
    uVar5 = uVar8 - 1;
    if (-1 < (int)uVar5) {
      lVar7 = (longlong)(int)uVar5 << 5;
      do {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 8) + lVar7);
        *param_5 = *plVar6;
        cVar2 = FUN_1453680e0(plVar6,param_2,param_3 + 1,param_4,param_5 + 1);
        if (cVar2 != '\0') {
          FUN_145365960(plVar6);
          _Dst = (void *)((ulonglong)uVar5 * 0x20 + *(longlong *)(param_1 + 8));
          if (uVar8 < *(uint *)(param_1 + 0x10)) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x20),
                    (ulonglong)((*(uint *)(param_1 + 0x10) - uVar5) * 0x20 - 0x20));
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        }
        uVar8 = uVar8 - 1;
        lVar7 = lVar7 + -0x20;
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
    }
  }
  else {
    lVar3 = FUN_145364420(param_1 + 8,lVar7);
    if (lVar3 != 0) {
      *param_5 = lVar7;
      cVar2 = FUN_1453680e0(lVar3,param_2,param_3 + 1,param_4,param_5 + 1);
      if (cVar2 != '\0') {
        FUN_145365960(lVar3);
        FUN_1453645e0(param_1 + 8,*param_3);
      }
    }
  }
  *param_5 = 0;
  if (((((*param_3 == 0) && ((int)param_3[1] == 0)) && ((int)param_3[2] == 0)) &&
      (((char)param_3[3] == -1 && ((char)param_3[4] == -1)))) && (param_3[5] == 0)) {
    puVar4 = (ushort *)(param_1 + 2);
    if (*(char *)(param_1 + 4) == '\0') {
      puVar4 = (ushort *)0x0;
    }
    if ((puVar4 != (ushort *)0x0) && (*param_4 != 0)) {
      uVar1 = *puVar4;
      lVar7 = *param_2;
      FUN_1453634f0();
      *(short *)(lVar7 + (ulonglong)uVar1 * 0x28 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar1;
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (*(void **)(param_1 + 8) != (void *)0x0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x10) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145367e70 FUN_145367e70 body=622 status=ok
// SIG undefined FUN_145367e70(void)

void FUN_145367e70(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined1 local_res20 [8];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar4 = param_1 + 2;
  if (*(char *)(param_1 + 4) == '\0') {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    FUN_145367a80(param_2);
  }
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (puVar6 != puVar6 + (ulonglong)*(uint *)(param_1 + 0x10) * 4) {
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    puVar7 = (uint *)(puVar6 + 3);
    do {
      *param_4 = *puVar6;
      local_78 = puVar6;
      if (*(char *)((longlong)puVar7 + -0xe) != '\0') {
        plVar1 = (longlong *)CONCAT44(uStack_5c,uStack_60);
        lVar4 = *(longlong *)(*plVar1 + 0x20);
        if (lVar4 == 0) {
          local_84 = *(undefined4 *)
                      (*(longlong *)CONCAT44(uStack_64,local_68) +
                       (ulonglong)(ushort)puVar7[-4] * 0x28 + 0x20);
        }
        else {
          puVar2 = (undefined4 *)FUN_145363aa0(lVar4,local_80,param_3);
          local_84 = *puVar2;
        }
        FUN_145364af0(*plVar1,param_3,&local_84,local_res20,0,0,0);
      }
      puVar2 = *(undefined4 **)(puVar7 + -2);
      if (puVar2 != puVar2 + (ulonglong)*puVar7 * 6) {
        puVar5 = puVar2 + 4;
        local_58 = *param_2;
        uStack_54 = param_2[1];
        uStack_50 = param_2[2];
        uStack_4c = param_2[3];
        do {
          *(undefined4 *)(param_4 + 1) = *puVar2;
          if (*(char *)((longlong)puVar5 + -10) != '\0') {
            plVar1 = (longlong *)CONCAT44(uStack_4c,uStack_50);
            lVar4 = *(longlong *)(*plVar1 + 0x20);
            if (lVar4 == 0) {
              local_84 = *(undefined4 *)
                          (*(longlong *)CONCAT44(uStack_54,local_58) +
                           (ulonglong)(ushort)puVar5[-3] * 0x28 + 0x20);
            }
            else {
              puVar3 = (undefined4 *)FUN_145363aa0(lVar4,local_7c,param_3);
              local_84 = *puVar3;
            }
            FUN_145364af0(*plVar1,param_3,&local_84,local_88,0,0,0);
          }
          puVar3 = *(undefined4 **)(puVar5 + -2);
          if (puVar3 != puVar3 + (ulonglong)*puVar5 * 6) {
            do {
              local_48 = *param_2;
              uStack_44 = param_2[1];
              uStack_40 = param_2[2];
              uStack_3c = param_2[3];
              *(undefined4 *)(param_4 + 2) = *puVar3;
              FUN_145368df0(puVar3,&local_48,param_3,param_4 + 3);
              puVar3 = puVar3 + 6;
            } while (puVar3 != (undefined4 *)
                               (*(longlong *)(puVar5 + -2) + (ulonglong)*puVar5 * 0x18));
          }
          *(undefined4 *)(param_4 + 2) = 0;
          puVar2 = puVar2 + 6;
          puVar5 = puVar5 + 6;
          puVar6 = local_78;
        } while (puVar2 != (undefined4 *)(*(longlong *)(puVar7 + -2) + (ulonglong)*puVar7 * 0x18));
      }
      puVar6 = puVar6 + 4;
      *(undefined4 *)(param_4 + 1) = 0;
      puVar7 = puVar7 + 8;
    } while (puVar6 != (undefined8 *)
                       ((ulonglong)*(uint *)(param_1 + 0x10) * 0x20 + *(longlong *)(param_1 + 8)));
  }
  *param_4 = 0;
  return;
}



// FUNCTION 1453680e0 FUN_1453680e0 body=969 status=ok
// SIG undefined FUN_1453680e0(void)

undefined8
FUN_1453680e0(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,int *param_5)

{
  ushort uVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ushort *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  
  iVar5 = *param_3;
  if (iVar5 == 0) {
    uVar13 = *(uint *)(param_1 + 0x18);
    uVar11 = uVar13 - 1;
    if (-1 < (int)uVar11) {
      lVar17 = (longlong)(int)uVar11 * 0x18;
      do {
        piVar6 = (int *)(*(longlong *)(param_1 + 0x10) + lVar17);
        *param_5 = *piVar6;
        cVar4 = FUN_145368630(piVar6,param_2,param_3 + 2,param_4,param_5 + 2);
        if (cVar4 != '\0') {
          lVar8 = (longlong)(piVar6[4] + -1);
          if (-1 < piVar6[4] + -1) {
            lVar16 = lVar8 * 0x18;
            do {
              lVar12 = *(longlong *)(piVar6 + 2) + lVar16;
              iVar5 = *(int *)(lVar12 + 0x10) + -1;
              lVar18 = (longlong)iVar5;
              if (-1 < iVar5) {
                lVar14 = lVar18 * 0x18;
                do {
                  lVar15 = *(longlong *)(lVar12 + 8) + lVar14;
                  iVar5 = *(int *)(lVar15 + 0x10) + -1;
                  lVar9 = (longlong)iVar5;
                  if (-1 < iVar5) {
                    lVar7 = lVar9 * 0x18;
                    do {
                      lVar2 = *(longlong *)(lVar15 + 8);
                      *(undefined1 *)(lVar2 + 4 + lVar7) = 0;
                      pvVar3 = *(void **)(lVar2 + 8 + lVar7);
                      if (pvVar3 != (void *)0x0) {
                        *(undefined4 *)(lVar2 + 0x10 + lVar7) = 0;
                        AK::MemoryMgr::Free(0,pvVar3);
                        *(undefined8 *)(lVar2 + 8 + lVar7) = 0;
                        *(undefined4 *)(lVar2 + 0x14 + lVar7) = 0;
                      }
                      lVar7 = lVar7 + -0x18;
                      lVar9 = lVar9 + -1;
                    } while (-1 < lVar9);
                  }
                  if (*(void **)(lVar15 + 8) != (void *)0x0) {
                    *(undefined4 *)(lVar15 + 0x10) = 0;
                    AK::MemoryMgr::Free(0,*(void **)(lVar15 + 8));
                    *(undefined8 *)(lVar15 + 8) = 0;
                    *(undefined4 *)(lVar15 + 0x14) = 0;
                  }
                  lVar14 = lVar14 + -0x18;
                  *(undefined1 *)(lVar15 + 4) = 0;
                  lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
              }
              if (*(void **)(lVar12 + 8) != (void *)0x0) {
                *(undefined4 *)(lVar12 + 0x10) = 0;
                AK::MemoryMgr::Free(0,*(void **)(lVar12 + 8));
                *(undefined8 *)(lVar12 + 8) = 0;
                *(undefined4 *)(lVar12 + 0x14) = 0;
              }
              lVar8 = lVar8 + -1;
              *(undefined1 *)(lVar12 + 6) = 0;
              lVar16 = lVar16 + -0x18;
            } while (-1 < lVar8);
          }
          if (*(void **)(piVar6 + 2) != (void *)0x0) {
            piVar6[4] = 0;
            AK::MemoryMgr::Free(0,*(void **)(piVar6 + 2));
            piVar6[2] = 0;
            piVar6[3] = 0;
            piVar6[5] = 0;
          }
          *(undefined1 *)((longlong)piVar6 + 6) = 0;
          pvVar3 = (void *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar11 * 0x18);
          if (uVar13 < *(uint *)(param_1 + 0x18)) {
            memmove(pvVar3,(void *)((longlong)pvVar3 + 0x18),
                    (ulonglong)((*(uint *)(param_1 + 0x18) - uVar11) * 0x18 - 0x18));
          }
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        }
        uVar11 = uVar11 - 1;
        uVar13 = uVar13 - 1;
        lVar17 = lVar17 + -0x18;
      } while (-1 < (int)uVar11);
    }
  }
  else {
    lVar17 = FUN_1453655d0(param_1 + 0x10,iVar5);
    if (lVar17 != 0) {
      *param_5 = iVar5;
      cVar4 = FUN_145368630(lVar17,param_2,param_3 + 2,param_4,param_5 + 2);
      if (cVar4 != '\0') {
        FUN_145366330(lVar17);
        FUN_1453657d0(param_1 + 0x10,*param_3);
      }
    }
  }
  *param_5 = 0;
  if ((((*param_3 == 0) && (param_3[2] == 0)) && ((char)param_3[4] == -1)) &&
     (((char)param_3[6] == -1 && (*(longlong *)(param_3 + 8) == 0)))) {
    puVar10 = (ushort *)(param_1 + 8);
    if (*(char *)(param_1 + 10) == '\0') {
      puVar10 = (ushort *)0x0;
    }
    if ((puVar10 != (ushort *)0x0) && (*param_4 != 0)) {
      uVar1 = *puVar10;
      lVar17 = *param_2;
      FUN_1453634f0();
      *(short *)(lVar17 + (ulonglong)uVar1 * 0x28 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar1;
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if ((*(char *)(param_1 + 10) == '\0') && (*(int *)(param_1 + 0x18) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1453684b0 FUN_1453684b0 body=379 status=ok
// SIG undefined FUN_1453684b0(void)

ushort * FUN_1453684b0(longlong param_1,longlong *param_2,int *param_3)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if (((((*param_3 != 0) || ((char)param_3[2] != -1)) || ((char)param_3[4] != -1)) ||
      (*(longlong *)(param_3 + 6) != 0)) && (lVar3 = FUN_145365fb0(param_1 + 8), lVar3 != 0)) {
    if (((((char)param_3[2] == -1) && ((char)param_3[4] == -1)) && (*(longlong *)(param_3 + 6) == 0)
        ) || (lVar4 = FUN_145366760(lVar3 + 8), lVar4 == 0)) {
      puVar6 = (ushort *)(lVar3 + 4);
      if (*(char *)(lVar3 + 6) == '\0') {
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
        bVar2 = *(byte *)(lVar3 + 6);
        *(undefined1 *)(lVar3 + 6) = 0;
      }
    }
    else {
      bVar2 = FUN_145368c80(lVar4,param_2,param_3 + 4);
      if ((*(char *)(lVar4 + 4) == '\0') && (*(int *)(lVar4 + 0x10) == 0)) {
        FUN_145367250(lVar4);
        FUN_145366970(lVar3 + 8,(char)param_3[2]);
      }
    }
    if ((*(char *)(lVar3 + 6) == '\0') && (*(int *)(lVar3 + 0x10) == 0)) {
      FUN_145366af0(lVar3);
      FUN_1453661b0(param_1 + 8,*param_3);
    }
    return (ushort *)(ulonglong)bVar2;
  }
  puVar5 = (ushort *)0x0;
  puVar6 = (ushort *)(param_1 + 4);
  if (*(char *)(param_1 + 6) == '\0') {
    puVar6 = puVar5;
  }
  if (puVar6 != (ushort *)0x0) {
    uVar1 = *puVar6;
    lVar3 = *param_2 + (ulonglong)uVar1 * 0x28;
    FUN_1453634f0(lVar3);
    *(short *)(lVar3 + 0x20) = (short)param_2[2];
    *(ushort *)(param_2 + 2) = uVar1;
    puVar5 = (ushort *)(ulonglong)*(byte *)(param_1 + 6);
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return puVar5;
}



// FUNCTION 145368630 FUN_145368630 body=835 status=ok
// SIG undefined FUN_145368630(void)

undefined8
FUN_145368630(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,int *param_5)

{
  ushort uVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  iVar5 = *param_3;
  if (iVar5 == 0) {
    uVar11 = *(uint *)(param_1 + 0x10);
    uVar7 = uVar11 - 1;
    if (-1 < (int)uVar7) {
      lVar14 = (longlong)(int)uVar7 * 0x18;
      do {
        piVar10 = (int *)(*(longlong *)(param_1 + 8) + lVar14);
        *param_5 = *piVar10;
        cVar4 = FUN_145368980(piVar10,param_2,param_3 + 2,param_4,param_5 + 2);
        if (cVar4 != '\0') {
          lVar15 = (longlong)(piVar10[4] + -1);
          if (-1 < piVar10[4] + -1) {
            lVar12 = lVar15 * 0x18;
            do {
              lVar13 = *(longlong *)(piVar10 + 2) + lVar12;
              iVar5 = *(int *)(lVar13 + 0x10) + -1;
              lVar8 = (longlong)iVar5;
              if (-1 < iVar5) {
                lVar6 = lVar8 * 0x18;
                do {
                  lVar2 = *(longlong *)(lVar13 + 8);
                  *(undefined1 *)(lVar2 + 4 + lVar6) = 0;
                  pvVar3 = *(void **)(lVar2 + 8 + lVar6);
                  if (pvVar3 != (void *)0x0) {
                    *(undefined4 *)(lVar2 + 0x10 + lVar6) = 0;
                    AK::MemoryMgr::Free(0,pvVar3);
                    *(undefined8 *)(lVar2 + 8 + lVar6) = 0;
                    *(undefined4 *)(lVar2 + 0x14 + lVar6) = 0;
                  }
                  lVar6 = lVar6 + -0x18;
                  lVar8 = lVar8 + -1;
                } while (-1 < lVar8);
              }
              if (*(void **)(lVar13 + 8) != (void *)0x0) {
                *(undefined4 *)(lVar13 + 0x10) = 0;
                AK::MemoryMgr::Free(0,*(void **)(lVar13 + 8));
                *(undefined8 *)(lVar13 + 8) = 0;
                *(undefined4 *)(lVar13 + 0x14) = 0;
              }
              lVar12 = lVar12 + -0x18;
              *(undefined1 *)(lVar13 + 4) = 0;
              lVar15 = lVar15 + -1;
            } while (-1 < lVar15);
          }
          if (*(void **)(piVar10 + 2) != (void *)0x0) {
            piVar10[4] = 0;
            AK::MemoryMgr::Free(0,*(void **)(piVar10 + 2));
            piVar10[2] = 0;
            piVar10[3] = 0;
            piVar10[5] = 0;
          }
          *(undefined1 *)((longlong)piVar10 + 6) = 0;
          pvVar3 = (void *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7 * 0x18);
          if (uVar11 < *(uint *)(param_1 + 0x10)) {
            memmove(pvVar3,(void *)((longlong)pvVar3 + 0x18),
                    (ulonglong)((*(uint *)(param_1 + 0x10) - uVar7) * 0x18 - 0x18));
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        }
        uVar7 = uVar7 - 1;
        uVar11 = uVar11 - 1;
        lVar14 = lVar14 + -0x18;
      } while (-1 < (int)uVar7);
    }
  }
  else {
    lVar14 = FUN_145365fb0(param_1 + 8,iVar5);
    if (lVar14 != 0) {
      *param_5 = iVar5;
      cVar4 = FUN_145368980(lVar14,param_2,param_3 + 2,param_4,param_5 + 2);
      if (cVar4 != '\0') {
        FUN_145366af0(lVar14);
        FUN_1453661b0(param_1 + 8,*param_3);
      }
    }
  }
  *param_5 = 0;
  if ((((*param_3 == 0) && ((char)param_3[2] == -1)) && ((char)param_3[4] == -1)) &&
     (*(longlong *)(param_3 + 6) == 0)) {
    puVar9 = (ushort *)(param_1 + 4);
    if (*(char *)(param_1 + 6) == '\0') {
      puVar9 = (ushort *)0x0;
    }
    if ((puVar9 != (ushort *)0x0) && (*param_4 != 0)) {
      uVar1 = *puVar9;
      lVar14 = *param_2;
      FUN_1453634f0();
      *(short *)(lVar14 + (ulonglong)uVar1 * 0x28 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar1;
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (*(void **)(param_1 + 8) != (void *)0x0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((*(char *)(param_1 + 6) == '\0') && (*(int *)(param_1 + 0x10) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145368980 FUN_145368980 body=760 status=ok
// SIG undefined FUN_145368980(void)

undefined8
FUN_145368980(longlong param_1,longlong *param_2,char *param_3,longlong *param_4,char *param_5)

{
  void *_Dst;
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  cVar2 = *param_3;
  if (cVar2 == -1) {
    uVar9 = *(uint *)(param_1 + 0x10);
    uVar8 = uVar9 - 1;
    if (-1 < (int)uVar8) {
      lVar5 = (longlong)(int)uVar8 * 0x18;
      do {
        pcVar7 = (char *)(*(longlong *)(param_1 + 8) + lVar5);
        *param_5 = *pcVar7;
        cVar2 = FUN_1453690e0(pcVar7,param_2,param_3 + 8,param_4,param_5 + 8);
        if (cVar2 != '\0') {
          lVar3 = (longlong)(*(int *)(pcVar7 + 0x10) + -1);
          if (-1 < *(int *)(pcVar7 + 0x10) + -1) {
            lVar10 = lVar3 * 0x18;
            do {
              lVar6 = *(longlong *)(pcVar7 + 8) + lVar10;
              *(undefined1 *)(lVar6 + 4) = 0;
              if (*(void **)(lVar6 + 8) != (void *)0x0) {
                *(undefined4 *)(lVar6 + 0x10) = 0;
                AK::MemoryMgr::Free(0,*(void **)(lVar6 + 8));
                *(undefined8 *)(lVar6 + 8) = 0;
                *(undefined4 *)(lVar6 + 0x14) = 0;
              }
              lVar10 = lVar10 + -0x18;
              lVar3 = lVar3 + -1;
            } while (-1 < lVar3);
          }
          if (*(void **)(pcVar7 + 8) != (void *)0x0) {
            pcVar7[0x10] = '\0';
            pcVar7[0x11] = '\0';
            pcVar7[0x12] = '\0';
            pcVar7[0x13] = '\0';
            AK::MemoryMgr::Free(0,*(void **)(pcVar7 + 8));
            pcVar7[8] = '\0';
            pcVar7[9] = '\0';
            pcVar7[10] = '\0';
            pcVar7[0xb] = '\0';
            pcVar7[0xc] = '\0';
            pcVar7[0xd] = '\0';
            pcVar7[0xe] = '\0';
            pcVar7[0xf] = '\0';
            pcVar7[0x14] = '\0';
            pcVar7[0x15] = '\0';
            pcVar7[0x16] = '\0';
            pcVar7[0x17] = '\0';
          }
          pcVar7[4] = '\0';
          _Dst = (void *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar8 * 0x18);
          if (uVar9 < *(uint *)(param_1 + 0x10)) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x18),
                    (ulonglong)((*(uint *)(param_1 + 0x10) - uVar8) * 0x18 - 0x18));
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        }
        uVar9 = uVar9 - 1;
        lVar5 = lVar5 + -0x18;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
  }
  else {
    lVar5 = FUN_145366760(param_1 + 8,cVar2);
    if (lVar5 != 0) {
      *param_5 = cVar2;
      cVar2 = FUN_1453690e0(lVar5,param_2,param_3 + 8,param_4,param_5 + 8);
      if (cVar2 != '\0') {
        FUN_145367250(lVar5);
        FUN_145366970(param_1 + 8,*param_3);
      }
    }
  }
  *param_5 = -1;
  if (((*param_3 == -1) && (param_3[8] == -1)) && (*(longlong *)(param_3 + 0x10) == 0)) {
    puVar4 = (ushort *)(param_1 + 4);
    if (*(char *)(param_1 + 6) == '\0') {
      puVar4 = (ushort *)0x0;
    }
    if ((puVar4 != (ushort *)0x0) && (*param_4 != 0)) {
      uVar1 = *puVar4;
      lVar5 = *param_2;
      FUN_1453634f0();
      *(short *)(lVar5 + (ulonglong)uVar1 * 0x28 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar1;
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (*(void **)(param_1 + 8) != (void *)0x0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((*(char *)(param_1 + 6) == '\0') && (*(int *)(param_1 + 0x10) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145368c80 FUN_145368c80 body=368 status=ok
// SIG undefined FUN_145368c80(void)

ushort * FUN_145368c80(longlong param_1,longlong *param_2,char *param_3)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if (((*param_3 == -1) && (*(longlong *)(param_3 + 8) == 0)) ||
     (lVar3 = FUN_145366eb0(param_1 + 8), lVar3 == 0)) {
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
  if (*(longlong *)(param_3 + 8) == 0) {
    puVar6 = (ushort *)(lVar3 + 2);
    if (*(char *)(lVar3 + 4) == '\0') {
      puVar6 = (ushort *)0x0;
    }
    if (puVar6 != (ushort *)0x0) {
      uVar1 = *puVar6;
      lVar4 = *param_2 + (ulonglong)uVar1 * 0x28;
      FUN_1453634f0(lVar4);
      *(short *)(lVar4 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar1;
      bVar2 = *(byte *)(lVar3 + 4);
      *(undefined1 *)(lVar3 + 4) = 0;
      goto LAB_145368d6e;
    }
  }
  else {
    lVar4 = FUN_145367540(lVar3 + 8);
    if (lVar4 != 0) {
      uVar1 = *(ushort *)(lVar4 + 8);
      lVar4 = *param_2 + (ulonglong)uVar1 * 0x28;
      FUN_1453634f0(lVar4);
      *(short *)(lVar4 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar1;
      bVar2 = FUN_1453675e0(lVar3 + 8,*(undefined8 *)(param_3 + 8));
      if (*(int *)(lVar3 + 0x10) == 0) {
        FUN_145367430(lVar3 + 8);
      }
      goto LAB_145368d6e;
    }
  }
  bVar2 = 0;
LAB_145368d6e:
  if ((*(char *)(lVar3 + 4) == '\0') && (*(int *)(lVar3 + 0x10) == 0)) {
    FUN_145367750(lVar3);
    FUN_1453670c0(param_1 + 8,*param_3);
  }
  return (ushort *)(ulonglong)bVar2;
}



// FUNCTION 145368df0 FUN_145368df0 body=740 status=ok
// SIG undefined FUN_145368df0(void)

void FUN_145368df0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined1 local_res20 [8];
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83 [3];
  undefined1 *local_80;
  uint *local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar4 = param_1 + 4;
  if (*(char *)(param_1 + 6) == '\0') {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    FUN_145367a80(param_2);
  }
  puVar7 = *(undefined1 **)(param_1 + 8);
  if (puVar7 != puVar7 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18) {
    local_58 = *(undefined4 *)param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    puVar9 = (uint *)(puVar7 + 0x10);
    do {
      *param_4 = *puVar7;
      local_80 = puVar7;
      local_78 = puVar9;
      if ((char)puVar9[-3] != '\0') {
        plVar1 = (longlong *)CONCAT44(uStack_4c,uStack_50);
        lVar4 = *(longlong *)(*plVar1 + 0x20);
        if (lVar4 == 0) {
          local_88 = *(undefined4 *)
                      (*(longlong *)CONCAT44(uStack_54,local_58) +
                       (ulonglong)*(ushort *)((longlong)puVar9 + -0xe) * 0x28 + 0x20);
        }
        else {
          puVar3 = (undefined4 *)FUN_145363aa0(lVar4,local_70,param_3);
          local_88 = *puVar3;
        }
        FUN_145364af0(*plVar1,param_3,&local_88,local_res20,0,0,0);
      }
      puVar8 = *(undefined1 **)(puVar9 + -2);
      if (puVar8 != puVar8 + (ulonglong)*puVar9 * 0x18) {
        local_48 = *(undefined4 *)param_2;
        uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
        plVar2 = (longlong *)*param_2;
        uStack_40 = *(undefined4 *)(param_2 + 1);
        uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
        plVar1 = (longlong *)param_2[1];
        puVar6 = (uint *)(puVar8 + 0x10);
        do {
          param_4[8] = *puVar8;
          if ((char)puVar6[-3] != '\0') {
            if (*(longlong *)(*plVar1 + 0x20) == 0) {
              local_88 = *(undefined4 *)
                          (*plVar2 + (ulonglong)*(ushort *)((longlong)puVar6 + -0xe) * 0x28 + 0x20);
            }
            else {
              puVar3 = (undefined4 *)FUN_145363aa0(*(longlong *)(*plVar1 + 0x20),local_6c);
              local_88 = *puVar3;
            }
            FUN_145364af0(*plVar1,param_3,&local_88,&local_84,0,0,0);
          }
          puVar5 = *(undefined8 **)(puVar6 + -2);
          if (puVar5 != puVar5 + (ulonglong)*puVar6 * 2) {
            do {
              *(undefined8 *)(param_4 + 0x10) = *puVar5;
              if (*(longlong *)(*plVar1 + 0x20) == 0) {
                local_88 = *(undefined4 *)
                            (*plVar2 + (ulonglong)*(ushort *)(puVar5 + 1) * 0x28 + 0x20);
              }
              else {
                puVar3 = (undefined4 *)FUN_145363aa0(*(longlong *)(*plVar1 + 0x20),local_68,param_3)
                ;
                local_88 = *puVar3;
              }
              FUN_145364af0(*plVar1,param_3,&local_88,local_83,0,0,0);
              puVar5 = puVar5 + 2;
              puVar9 = local_78;
            } while (puVar5 != (undefined8 *)
                               ((ulonglong)*puVar6 * 0x10 + *(longlong *)(puVar6 + -2)));
          }
          puVar8 = puVar8 + 0x18;
          *(undefined8 *)(param_4 + 0x10) = 0;
          puVar6 = puVar6 + 6;
          puVar7 = local_80;
        } while (puVar8 != (undefined1 *)(*(longlong *)(puVar9 + -2) + (ulonglong)*puVar9 * 0x18));
      }
      puVar7 = puVar7 + 0x18;
      param_4[8] = 0xff;
      puVar9 = puVar9 + 6;
    } while (puVar7 != (undefined1 *)
                       (*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18));
  }
  *param_4 = 0xff;
  return;
}



// FUNCTION 1453690e0 FUN_1453690e0 body=565 status=ok
// SIG undefined FUN_1453690e0(void)

undefined8
FUN_1453690e0(longlong param_1,longlong *param_2,char *param_3,longlong *param_4,char *param_5)

{
  void *_Dst;
  ushort uVar1;
  char cVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  
  cVar2 = *param_3;
  if (cVar2 == -1) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar5 = uVar3 - 1;
    if (-1 < (int)uVar5) {
      lVar7 = (longlong)(int)uVar5 * 0x18;
      do {
        pcVar6 = (char *)(*(longlong *)(param_1 + 8) + lVar7);
        *param_5 = *pcVar6;
        cVar2 = FUN_145369320(pcVar6,param_2,param_3 + 8,param_4,param_5 + 8);
        if (cVar2 != '\0') {
          pcVar6[4] = '\0';
          if (*(void **)(pcVar6 + 8) != (void *)0x0) {
            pcVar6[0x10] = '\0';
            pcVar6[0x11] = '\0';
            pcVar6[0x12] = '\0';
            pcVar6[0x13] = '\0';
            AK::MemoryMgr::Free(0,*(void **)(pcVar6 + 8));
            pcVar6[8] = '\0';
            pcVar6[9] = '\0';
            pcVar6[10] = '\0';
            pcVar6[0xb] = '\0';
            pcVar6[0xc] = '\0';
            pcVar6[0xd] = '\0';
            pcVar6[0xe] = '\0';
            pcVar6[0xf] = '\0';
            pcVar6[0x14] = '\0';
            pcVar6[0x15] = '\0';
            pcVar6[0x16] = '\0';
            pcVar6[0x17] = '\0';
          }
          _Dst = (void *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 0x18);
          if (uVar3 < *(uint *)(param_1 + 0x10)) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x18),
                    (ulonglong)((*(uint *)(param_1 + 0x10) - uVar5) * 0x18 - 0x18));
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        }
        uVar3 = uVar3 - 1;
        lVar7 = lVar7 + -0x18;
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
    }
  }
  else {
    lVar7 = FUN_145366eb0(param_1 + 8,cVar2);
    if (lVar7 != 0) {
      *param_5 = cVar2;
      cVar2 = FUN_145369320(lVar7,param_2,param_3 + 8,param_4,param_5 + 8);
      if (cVar2 != '\0') {
        FUN_145367750(lVar7);
        FUN_1453670c0(param_1 + 8,*param_3);
      }
    }
  }
  *param_5 = -1;
  if ((*param_3 == -1) && (*(longlong *)(param_3 + 8) == 0)) {
    puVar4 = (ushort *)(param_1 + 2);
    if (*(char *)(param_1 + 4) == '\0') {
      puVar4 = (ushort *)0x0;
    }
    if ((puVar4 != (ushort *)0x0) && (*param_4 != 0)) {
      uVar1 = *puVar4;
      lVar7 = *param_2;
      FUN_1453634f0();
      *(short *)(lVar7 + (ulonglong)uVar1 * 0x28 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar1;
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (*(void **)(param_1 + 8) != (void *)0x0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x10) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145369320 FUN_145369320 body=489 status=ok
// SIG undefined FUN_145369320(void)

undefined8
FUN_145369320(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  ushort uVar1;
  longlong lVar2;
  void *_Dst;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar3 = (ushort *)(param_1 + 2);
  if (*(char *)(param_1 + 4) == '\0') {
    puVar3 = (ushort *)0x0;
  }
  if ((puVar3 != (ushort *)0x0) && (*param_4 != 0)) {
    uVar1 = *puVar3;
    lVar6 = *param_2;
    FUN_1453634f0();
    *(short *)(lVar6 + (ulonglong)uVar1 * 0x28 + 0x20) = (short)param_2[2];
    *(ushort *)(param_2 + 2) = uVar1;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  lVar6 = *param_3;
  if (lVar6 == 0) {
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar5 = uVar4 - 1;
    if (-1 < (int)uVar5) {
      lVar6 = (longlong)(int)uVar5 << 4;
      do {
        lVar2 = *(longlong *)(param_1 + 8);
        *param_5 = *(longlong *)(lVar2 + lVar6);
        if (*param_4 != 0) {
          uVar1 = *(ushort *)(lVar2 + 8 + lVar6);
          lVar2 = *param_2 + (ulonglong)uVar1 * 0x28;
          FUN_1453634f0(lVar2);
          *(short *)(lVar2 + 0x20) = (short)param_2[2];
          *(ushort *)(param_2 + 2) = uVar1;
          _Dst = (void *)((ulonglong)uVar5 * 0x10 + *(longlong *)(param_1 + 8));
          if (uVar4 < *(uint *)(param_1 + 0x10)) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                    (ulonglong)((*(uint *)(param_1 + 0x10) - uVar5) * 0x10 - 0x10));
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        }
        uVar4 = uVar4 - 1;
        lVar6 = lVar6 + -0x10;
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
    }
    if ((*(int *)(param_1 + 0x10) == 0) && (*(void **)(param_1 + 8) != (void *)0x0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  else {
    lVar2 = FUN_145367540(param_1 + 8,lVar6);
    if ((lVar2 != 0) && (*param_5 = lVar6, *param_4 != 0)) {
      uVar1 = *(ushort *)(lVar2 + 8);
      lVar6 = *param_2 + (ulonglong)uVar1 * 0x28;
      FUN_1453634f0(lVar6);
      *(short *)(lVar6 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar1;
      FUN_1453675e0(param_1 + 8,*param_3);
    }
  }
  *param_5 = 0;
  if ((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x10) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145369520 FUN_145369520 body=426 status=ok
// SIG undefined FUN_145369520(void)

undefined8 FUN_145369520(uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xff00;
  if (uVar2 < 0x1201) {
    if (uVar2 == 0x1200) {
      uVar1 = FUN_14553d840();
      return uVar1;
    }
    if (uVar2 < 0xa01) {
      if (uVar2 == 0xa00) {
LAB_1453695df:
        uVar1 = FUN_14553d410(param_1,0);
        return uVar1;
      }
      if (uVar2 < 0x601) {
        if (uVar2 == 0x600) {
LAB_1453695ad:
          uVar1 = FUN_14553d110();
          return uVar1;
        }
        if (uVar2 == 0x100) {
          uVar1 = FUN_145370cf0();
          return uVar1;
        }
        if (uVar2 == 0x200) {
          uVar1 = FUN_14553cb60();
          return uVar1;
        }
        if (uVar2 == 0x300) {
          uVar1 = FUN_14553cd70();
          return uVar1;
        }
        if (uVar2 == 0x400) {
          uVar1 = FUN_14553c6a0();
          return uVar1;
        }
      }
      else {
        if (uVar2 == 0x700) goto LAB_1453695ad;
        if ((uVar2 - 0x800 & 0xfffffeff) == 0) {
          uVar1 = FUN_14553d410(param_1,2);
          return uVar1;
        }
      }
    }
    else if (uVar2 < 0xe01) {
      if (uVar2 == 0xe00) {
LAB_145369604:
        uVar1 = FUN_14553d410(param_1,3);
        return uVar1;
      }
      if (uVar2 == 0xb00) goto LAB_1453695df;
      if ((uVar2 - 0xc00 & 0xfffffeff) == 0) {
        uVar1 = FUN_14553d410(param_1,5);
        return uVar1;
      }
    }
    else {
      if (uVar2 == 0xf00) goto LAB_145369604;
      if ((uVar2 - 0x1000 & 0xfffffeff) == 0) {
        uVar1 = FUN_14553dfc0();
        return uVar1;
      }
    }
  }
  else if (uVar2 < 0x1e01) {
    if (uVar2 == 0x1e00) {
      uVar1 = FUN_14553e900();
      return uVar1;
    }
    if (uVar2 < 0x1a01) {
      if (uVar2 == 0x1a00) {
LAB_145369668:
        uVar1 = FUN_14553e0f0();
        return uVar1;
      }
      if ((uVar2 - 0x1300 & 0xfffffeff) == 0) {
        uVar1 = FUN_14553db10();
        return uVar1;
      }
      if (uVar2 == 0x1900) {
        uVar1 = FUN_14553d980();
        return uVar1;
      }
    }
    else {
      if (uVar2 == 0x1b00) goto LAB_145369668;
      if (uVar2 == 0x1c00) {
        uVar1 = FUN_14553cf80();
        return uVar1;
      }
      if (uVar2 == 0x1d00) {
        uVar1 = FUN_14553e800();
        return uVar1;
      }
    }
  }
  else if (uVar2 < 0x2201) {
    if (uVar2 == 0x2200) {
      uVar1 = FUN_14553eff0();
      return uVar1;
    }
    if (uVar2 == 0x1f00) {
      uVar1 = FUN_14553ec40();
      return uVar1;
    }
    if (uVar2 == 0x2000) {
LAB_1453696c0:
      uVar1 = FUN_14553d410(param_1,4);
      return uVar1;
    }
    if (uVar2 == 0x2100) {
      uVar1 = FUN_14553ed90();
      return uVar1;
    }
  }
  else {
    if (uVar2 == 0x3000) goto LAB_1453696c0;
    if ((uVar2 - 0x3100 & 0xfffffeff) == 0) {
      uVar1 = FUN_14553f110();
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1453696d0 FUN_1453696d0 body=69 status=ok
// SIG undefined FUN_1453696d0(void)

undefined8 * FUN_1453696d0(undefined8 *param_1,undefined2 param_2)

{
  FUN_1453734e0();
  *(undefined2 *)((longlong)param_1 + 0x34) = param_2;
  *param_1 = &PTR_FUN_149d425f0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 4;
  return param_1;
}



// FUNCTION 145369740 FUN_145369740 body=282 status=ok
// SIG undefined FUN_145369740(void)

ulonglong FUN_145369740(longlong param_1,int param_2,float param_3,float param_4,float param_5)

{
  byte *pbVar1;
  float *pfVar2;
  ulonglong uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float local_res10 [2];
  
  uVar7 = (ulonglong)param_2;
  pfVar6 = (float *)0x0;
  uVar8 = 1;
  pbVar1 = *(byte **)(param_1 + 0x20);
  local_res10[0] = *(float *)(&DAT_14c72f470 + uVar7 * 4);
  pfVar5 = pfVar6;
  if (pbVar1 != (byte *)0x0) {
    pfVar2 = pfVar6;
    do {
      uVar4 = (int)pfVar2 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar4 + (longlong)pbVar1) == (byte)param_2) {
        pfVar5 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar2 = (float *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  pfVar2 = local_res10;
  if (pfVar5 != (float *)0x0) {
    pfVar2 = pfVar5;
  }
  if (*pfVar2 != param_3) {
    local_res10[0] = param_3;
    uVar3 = FUN_14536a040(param_1 + 0x20,uVar7 & 0xff,param_3);
    uVar8 = uVar3 & 0xffffffff;
    if ((int)uVar3 != 1) {
      return uVar3;
    }
  }
  if ((param_4 == 0.0) && (param_5 == 0.0)) {
    pbVar1 = *(byte **)(param_1 + 0x28);
    if (pbVar1 != (byte *)0x0) {
      do {
        uVar4 = (int)pfVar6 + 1;
        if (pbVar1[uVar4] == (byte)param_2) {
          if (pbVar1 + (longlong)pfVar6 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0
             ) {
            return uVar8;
          }
          goto LAB_14536982a;
        }
        pfVar6 = (float *)(ulonglong)uVar4;
      } while (uVar4 < *pbVar1);
    }
  }
  else {
LAB_14536982a:
    uVar8 = FUN_14536a170(param_1 + 0x28,uVar7 & 0xff,CONCAT44(param_5,param_4));
  }
  return uVar8;
}



// FUNCTION 145369860 FUN_145369860 body=285 status=ok
// SIG undefined FUN_145369860(void)

ulonglong FUN_145369860(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_38 [4];
  
  uVar7 = (ulonglong)param_2;
  pbVar6 = (byte *)0x0;
  uVar8 = 1;
  pbVar1 = *(byte **)(param_1 + 0x20);
  local_38[0] = *(undefined4 *)(&DAT_14c72f470 + uVar7 * 4);
  pbVar5 = pbVar6;
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = pbVar6;
    do {
      uVar4 = (int)pbVar3 + 1;
      if (((byte *)(ulonglong)uVar4)[(longlong)pbVar1] == (byte)param_2) {
        pbVar5 = pbVar1 + (longlong)pbVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar3 = (byte *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  pbVar1 = (byte *)local_38;
  if (pbVar5 != (byte *)0x0) {
    pbVar1 = pbVar5;
  }
  if (*(int *)pbVar1 != param_3) {
    uVar2 = FUN_14536a040(param_1 + 0x20,uVar7 & 0xff,param_3);
    uVar8 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 1) {
      return uVar2;
    }
  }
  if ((param_4 == 0) && (param_5 == 0)) {
    pbVar1 = *(byte **)(param_1 + 0x28);
    if (pbVar1 != (byte *)0x0) {
      do {
        uVar4 = (int)pbVar6 + 1;
        if (pbVar1[uVar4] == (byte)param_2) {
          if (pbVar1 + (longlong)pbVar6 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0
             ) {
            return uVar8;
          }
          goto LAB_14536994a;
        }
        pbVar6 = (byte *)(ulonglong)uVar4;
      } while (uVar4 < *pbVar1);
    }
  }
  else {
LAB_14536994a:
    uVar8 = FUN_14536a170(param_1 + 0x28,uVar7 & 0xff,CONCAT44(param_5,param_4));
  }
  return uVar8;
}



// FUNCTION 145369980 FUN_145369980 body=186 status=ok
// SIG undefined FUN_145369980(void)

int FUN_145369980(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 local_res8 [2];
  
  pbVar2 = *(byte **)(param_1 + 0x20);
  pbVar6 = (byte *)0x0;
  local_res8[0] = DAT_14c72f4b0;
  pbVar7 = pbVar6;
  if (pbVar2 != (byte *)0x0) {
    pbVar4 = pbVar6;
    do {
      uVar5 = (int)pbVar4 + 1;
      if (pbVar2[uVar5] == 0x10) {
        pbVar7 = pbVar2 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
        break;
      }
      pbVar4 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x28);
  pbVar4 = (byte *)local_res8;
  if (pbVar7 != (byte *)0x0) {
    pbVar4 = pbVar7;
  }
  iVar1 = *(int *)pbVar4;
  if (pbVar2 != (byte *)0x0) {
    do {
      uVar5 = (int)pbVar6 + 1;
      if (((byte *)(ulonglong)uVar5)[(longlong)pbVar2] == 0x10) {
        if (pbVar2 + (longlong)pbVar6 * 8 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc) == (byte *)0x0)
        {
          return iVar1;
        }
        iVar3 = FUN_1450ee480();
        return iVar3 + iVar1;
      }
      pbVar6 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar2);
  }
  return iVar1;
}



// FUNCTION 145369a40 FUN_145369a40 body=186 status=ok
// SIG undefined FUN_145369a40(void)

int FUN_145369a40(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 local_res8 [2];
  
  pbVar2 = *(byte **)(param_1 + 0x20);
  pbVar6 = (byte *)0x0;
  local_res8[0] = DAT_14c72f4ac;
  pbVar7 = pbVar6;
  if (pbVar2 != (byte *)0x0) {
    pbVar4 = pbVar6;
    do {
      uVar5 = (int)pbVar4 + 1;
      if (pbVar2[uVar5] == 0xf) {
        pbVar7 = pbVar2 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
        break;
      }
      pbVar4 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x28);
  pbVar4 = (byte *)local_res8;
  if (pbVar7 != (byte *)0x0) {
    pbVar4 = pbVar7;
  }
  iVar1 = *(int *)pbVar4;
  if (pbVar2 != (byte *)0x0) {
    do {
      uVar5 = (int)pbVar6 + 1;
      if (((byte *)(ulonglong)uVar5)[(longlong)pbVar2] == 0xf) {
        if (pbVar2 + (longlong)pbVar6 * 8 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc) == (byte *)0x0)
        {
          return iVar1;
        }
        iVar3 = FUN_1450ee480();
        return iVar3 + iVar1;
      }
      pbVar6 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar2);
  }
  return iVar1;
}



// FUNCTION 145369b00 FUN_145369b00 body=789 status=ok
// SIG undefined FUN_145369b00(void)

undefined4 FUN_145369b00(longlong *param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uStackX_c;
  byte *local_res10;
  undefined4 local_res18 [2];
  
  if (*(short *)((longlong)param_1 + 0x34) != *(short *)(param_2 + 4)) {
    return 1;
  }
  local_res10 = (byte *)(param_2 + 0xb);
  uStackX_c = CONCAT31(uStackX_c._1_3_,*(char *)(param_2 + 10) != '\0');
  local_res18[0] = param_3;
  (**(code **)(*param_1 + 0x20))(param_1,CONCAT44(uStackX_c,*(undefined4 *)(param_2 + 6)));
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  pvVar5 = (void *)0x0;
  param_1[4] = 0;
  pvVar3 = pvVar5;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
    pvVar3 = (void *)param_1[4];
  }
  param_1[5] = 0;
  bVar1 = *local_res10;
  uVar4 = (ulonglong)bVar1;
  local_res10 = local_res10 + 1;
  if (bVar1 == 0) {
    if (pvVar3 != (void *)0x0) {
      AK::MemoryMgr::Free(1,pvVar3);
      param_1[4] = 0;
    }
  }
  else {
    uVar7 = bVar1 + 4 & 0xfffffffc;
    pbVar2 = AK::MemoryMgr::Realloc(1,pvVar3,(ulonglong)(uVar7 + (uint)bVar1 * 4));
    if (pbVar2 == (byte *)0x0) {
      uVar6 = 0x34;
      goto LAB_145369cf3;
    }
    *pbVar2 = bVar1;
    memcpy(pbVar2 + 1,local_res10,uVar4);
    local_res10 = local_res10 + uVar4;
    memcpy(pbVar2 + uVar7,local_res10,uVar4 * 4);
    local_res10 = local_res10 + uVar4 * 4;
    param_1[4] = (longlong)pbVar2;
  }
  bVar1 = *local_res10;
  uVar4 = (ulonglong)bVar1;
  local_res10 = local_res10 + 1;
  pvVar3 = (void *)param_1[5];
  if (bVar1 == 0) {
    if (pvVar3 != (void *)0x0) {
      AK::MemoryMgr::Free(1,pvVar3);
      param_1[5] = 0;
    }
  }
  else {
    uVar7 = bVar1 + 4 & 0xfffffffc;
    pbVar2 = AK::MemoryMgr::Realloc(1,pvVar3,(ulonglong)(uVar7 + (uint)bVar1 * 8));
    if (pbVar2 == (byte *)0x0) {
      uVar6 = 0x34;
      goto LAB_145369cf3;
    }
    *pbVar2 = bVar1;
    memcpy(pbVar2 + 1,local_res10,uVar4);
    local_res10 = local_res10 + uVar4;
    memcpy(pbVar2 + uVar7,local_res10,uVar4 * 8);
    local_res10 = local_res10 + uVar4 * 8;
    param_1[5] = (longlong)pbVar2;
  }
  uVar6 = (**(code **)(*param_1 + 0x40))(param_1,&local_res10,local_res18);
LAB_145369cf3:
  pbVar2 = (byte *)param_1[4];
  if (pbVar2 != (byte *)0x0) {
    pvVar3 = pvVar5;
    do {
      uVar7 = (int)pvVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar7 + (longlong)pbVar2) == 0xf) {
        pbVar2 = pbVar2 + (longlong)pvVar3 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
        if (pbVar2 != (byte *)0x0) {
          *(int *)pbVar2 =
               (int)((longlong)((longlong)*(int *)pbVar2 * (ulonglong)DAT_14c72f42c) / 1000);
        }
        break;
      }
      pvVar3 = (void *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar2);
  }
  pbVar2 = (byte *)param_1[5];
  if (pbVar2 != (byte *)0x0) {
    while (uVar7 = (int)pvVar5 + 1, pbVar2[uVar7] != 0xf) {
      pvVar5 = (void *)(ulonglong)uVar7;
      if (*pbVar2 <= uVar7) {
        return uVar6;
      }
    }
    pbVar2 = pbVar2 + (longlong)pvVar5 * 8 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
    if (pbVar2 != (byte *)0x0) {
      *(int *)pbVar2 = (int)((longlong)((longlong)*(int *)pbVar2 * (ulonglong)DAT_14c72f42c) / 1000)
      ;
      *(int *)(pbVar2 + 4) =
           (int)((longlong)((longlong)*(int *)(pbVar2 + 4) * (ulonglong)DAT_14c72f42c) / 1000);
    }
  }
  return uVar6;
}



// FUNCTION 145369e40 FUN_145369e40 body=412 status=ok
// SIG undefined FUN_145369e40(void)

longlong FUN_145369e40(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  piVar4 = DAT_14c791060;
  uVar2 = *(uint *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x36) & 0x40) == 0) {
    do {
      while (iVar3 = *piVar4, iVar3 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
        if (*piVar4 < 0) goto LAB_145369e77;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
      }
      LOCK();
      iVar1 = *piVar4;
      if (iVar3 == iVar1) {
        *piVar4 = iVar3 + 1;
      }
      UNLOCK();
    } while (iVar3 != iVar1);
LAB_145369e77:
    lVar6 = 0;
    if (piVar4[0x12] != 0) {
      for (lVar5 = *(longlong *)
                    (*(longlong *)(piVar4 + 0x10) +
                    ((ulonglong)uVar2 % (ulonglong)(uint)piVar4[0x12]) * 8);
          (lVar7 = lVar6, lVar5 != 0 && (lVar7 = lVar5, *(uint *)(lVar5 + 0x10) != uVar2));
          lVar5 = *(longlong *)(lVar5 + 8)) {
      }
      lVar6 = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar3 = *piVar4;
    while (-1 < iVar3) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar3 == iVar1) {
        *piVar4 = iVar3 + -1;
      }
      UNLOCK();
      if (iVar3 == iVar1) {
        if ((iVar3 + -1 == 0) && (0 < piVar4[0xc])) {
          SetEvent(*(HANDLE *)(piVar4 + 0xe));
        }
        goto LAB_145369fa1;
      }
      iVar3 = *piVar4;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar4 + 2);
  }
  else {
    do {
      while (iVar3 = piVar4[0x16], iVar3 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 0x18));
        if (piVar4[0x16] < 0) goto LAB_145369f21;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 0x18));
      }
      LOCK();
      bVar8 = iVar3 == piVar4[0x16];
      if (bVar8) {
        piVar4[0x16] = iVar3 + 1;
      }
      UNLOCK();
    } while (!bVar8);
LAB_145369f21:
    lVar6 = 0;
    if (piVar4[0x28] != 0) {
      for (lVar5 = *(longlong *)
                    (*(longlong *)(piVar4 + 0x26) +
                    ((ulonglong)uVar2 % (ulonglong)(uint)piVar4[0x28]) * 8);
          (lVar7 = lVar6, lVar5 != 0 && (lVar7 = lVar5, *(uint *)(lVar5 + 0x10) != uVar2));
          lVar5 = *(longlong *)(lVar5 + 8)) {
      }
      lVar6 = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar3 = piVar4[0x16];
    while (-1 < iVar3) {
      LOCK();
      bVar8 = iVar3 == piVar4[0x16];
      if (bVar8) {
        piVar4[0x16] = iVar3 + -1;
      }
      UNLOCK();
      if (bVar8) {
        if ((iVar3 + -1 == 0) && (0 < piVar4[0x22])) {
          SetEvent(*(HANDLE *)(piVar4 + 0x24));
        }
        goto LAB_145369fa1;
      }
      iVar3 = piVar4[0x16];
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar4 + 0x18);
  }
  LeaveCriticalSection(lpCriticalSection);
LAB_145369fa1:
  lVar5 = lVar6 + -0x10;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145369fe0 FUN_145369fe0 body=15 status=ok
// SIG undefined FUN_145369fe0(void)

void FUN_145369fe0(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) & 0x7f | param_2 << 7;
  return;
}



// FUNCTION 145369ff0 FUN_145369ff0 body=8 status=ok
// SIG undefined FUN_145369ff0(void)

byte FUN_145369ff0(longlong param_1)

{
  return *(byte *)(param_1 + 0x36) >> 7;
}



// FUNCTION 14536a010 FUN_14536a010 body=39 status=ok
// SIG undefined FUN_14536a010(void)

void FUN_14536a010(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(1,param_1);
  }
  return;
}



// FUNCTION 14536a040 FUN_14536a040 body=304 status=ok
// SIG undefined FUN_14536a040(void)

undefined8 FUN_14536a040(longlong *param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  size_t _Size;
  size_t sVar6;
  
  pbVar1 = (byte *)*param_1;
  _Size = 0;
  if (pbVar1 != (byte *)0x0) {
    sVar6 = _Size;
    do {
      uVar4 = (int)sVar6 + 1;
      if (pbVar1[uVar4] == param_2) {
        pbVar5 = pbVar1 + sVar6 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        if (pbVar5 != (byte *)0x0) goto LAB_14536a14a;
        if (pbVar1 == (byte *)0x0) goto LAB_14536a0b7;
        break;
      }
      sVar6 = (size_t)uVar4;
    } while (uVar4 < *pbVar1);
    _Size = (size_t)*pbVar1;
  }
LAB_14536a0b7:
  iVar2 = (int)_Size;
  uVar4 = iVar2 + 5;
  pcVar3 = AK::MemoryMgr::Malloc(1,(ulonglong)((uVar4 & 0xfffffffc) + 4 + iVar2 * 4));
  if (pcVar3 != (char *)0x0) {
    if (*param_1 != 0) {
      memcpy(pcVar3 + 1,(void *)(*param_1 + 1),_Size);
      memcpy(pcVar3 + ((ulonglong)uVar4 & 0xfffffffc),
             (void *)(((ulonglong)(iVar2 + 4) & 0xfffffffc) + *param_1),_Size * 4);
      AK::MemoryMgr::Free(1,(void *)*param_1);
    }
    pcVar3[iVar2 + 1] = param_2;
    *pcVar3 = (char)_Size + '\x01';
    *param_1 = (longlong)pcVar3;
    pbVar5 = (byte *)(pcVar3 + _Size * 4 + ((ulonglong)uVar4 & 0xfffffffc));
    if (pbVar5 != (byte *)0x0) {
LAB_14536a14a:
      *(undefined4 *)pbVar5 = param_3;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 14536a170 FUN_14536a170 body=305 status=ok
// SIG undefined FUN_14536a170(void)

undefined8 FUN_14536a170(longlong *param_1,byte param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  size_t _Size;
  size_t sVar6;
  
  pbVar1 = (byte *)*param_1;
  _Size = 0;
  if (pbVar1 != (byte *)0x0) {
    sVar6 = _Size;
    do {
      uVar4 = (int)sVar6 + 1;
      if (pbVar1[uVar4] == param_2) {
        pbVar5 = pbVar1 + sVar6 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        if (pbVar5 != (byte *)0x0) goto LAB_14536a27a;
        if (pbVar1 == (byte *)0x0) goto LAB_14536a1e7;
        break;
      }
      sVar6 = (size_t)uVar4;
    } while (uVar4 < *pbVar1);
    _Size = (size_t)*pbVar1;
  }
LAB_14536a1e7:
  iVar2 = (int)_Size;
  uVar4 = iVar2 + 5;
  pcVar3 = AK::MemoryMgr::Malloc(1,(ulonglong)((uVar4 & 0xfffffffc) + 8 + iVar2 * 8));
  if (pcVar3 != (char *)0x0) {
    if (*param_1 != 0) {
      memcpy(pcVar3 + 1,(void *)(*param_1 + 1),_Size);
      memcpy(pcVar3 + ((ulonglong)uVar4 & 0xfffffffc),
             (void *)(((ulonglong)(iVar2 + 4) & 0xfffffffc) + *param_1),_Size * 8);
      AK::MemoryMgr::Free(1,(void *)*param_1);
    }
    pcVar3[iVar2 + 1] = param_2;
    *pcVar3 = (char)_Size + '\x01';
    *param_1 = (longlong)pcVar3;
    pbVar5 = (byte *)(pcVar3 + _Size * 8 + ((ulonglong)uVar4 & 0xfffffffc));
    if (pbVar5 != (byte *)0x0) {
LAB_14536a27a:
      *(undefined8 *)pbVar5 = param_3;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 14536a2b0 FUN_14536a2b0 body=110 status=ok
// SIG undefined FUN_14536a2b0(void)

longlong FUN_14536a2b0(longlong param_1,uint param_2)

{
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    AK::MemoryMgr::Free(1,*(void **)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    AK::MemoryMgr::Free(1,*(void **)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14536a380 FUN_14536a380 body=52 status=ok
// SIG undefined FUN_14536a380(void)

undefined8 FUN_14536a380(undefined8 param_1,ulonglong param_2)

{
  FUN_145373500();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14536a3c0 FUN_14536a3c0 body=739 status=ok
// SIG undefined FUN_14536a3c0(void)

ulonglong FUN_14536a3c0(longlong param_1,longlong *param_2,int *param_3)

{
  ushort *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  undefined8 local_res10;
  
  *param_2 = *param_2 + 4;
  lVar14 = 0;
  piVar5 = (int *)*param_2;
  iVar13 = *piVar5;
  *param_2 = (longlong)(piVar5 + 1);
  uVar12 = piVar5[1];
  uVar17 = (ulonglong)uVar12;
  *param_2 = (longlong)(piVar5 + 2);
  if (iVar13 == -1) {
    *param_2 = *param_2 + uVar17;
    *param_3 = *param_3 - uVar12;
  }
  else {
    local_res10 = (longlong *)0x0;
    iVar9 = FUN_145088ff0(&PTR_PTR_14c72f448,iVar13,&local_res10);
    if ((iVar9 == 1) && (local_res10 != (longlong *)0x0)) {
      uVar10 = (**(code **)(*local_res10 + 0x18))(local_res10,&PTR_PTR_14c72f448,piVar5 + 2,uVar17);
      plVar7 = local_res10;
      if (uVar10 != 1) {
        (**(code **)(*local_res10 + 0x20))(local_res10,&PTR_PTR_14c72f448);
        *param_2 = *param_2 + uVar17;
        *param_3 = *param_3 - uVar12;
        return (ulonglong)uVar10;
      }
      plVar6 = *(longlong **)(param_1 + 0x40);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,&PTR_PTR_14c72f448);
      }
      *(int *)(param_1 + 0x38) = iVar13;
      *(longlong **)(param_1 + 0x40) = plVar7;
      *param_2 = *param_2 + uVar17;
      *param_3 = *param_3 - uVar12;
    }
    else {
      *(int *)(param_1 + 0x38) = iVar13;
      *param_2 = *param_2 + uVar17;
      *param_3 = *param_3 - uVar12;
    }
  }
  bVar3 = *(byte *)*param_2;
  *param_2 = (longlong)((byte *)*param_2 + 1);
  uVar12 = (uint)bVar3;
  uVar17 = (ulonglong)uVar12;
  if (bVar3 != 0) {
    if (((*(uint *)(param_1 + 0x50) <= uVar12) && (*(uint *)(param_1 + 0x54) < uVar12)) &&
       (cVar8 = FUN_1450f27b0(param_1 + 0x48,uVar12 - *(uint *)(param_1 + 0x54)), cVar8 == '\0')) {
      return 0x34;
    }
    *(uint *)(param_1 + 0x50) = uVar12;
    if (uVar12 != 0) {
      do {
        *param_2 = *param_2 + 1;
        uVar4 = *(undefined4 *)*param_2;
        *param_2 = (longlong)((undefined4 *)*param_2 + 1);
        *(undefined4 *)(lVar14 + *(longlong *)(param_1 + 0x48)) = uVar4;
        uVar17 = uVar17 - 1;
        lVar14 = lVar14 + 4;
      } while (uVar17 != 0);
    }
  }
  uVar17 = FUN_14536ce90(param_2,param_3,param_1);
  if (((int)uVar17 == 1) &&
     (uVar17 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x68))(param_1 + 0x18,param_2,param_3),
     (int)uVar17 == 1)) {
    uVar16 = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
    uVar12 = (uint)uVar16;
    uVar15 = (ulonglong)uVar12;
    if (uVar12 != 0) {
      if ((*(uint *)(param_1 + 0x74) < uVar12) &&
         (cVar8 = FUN_14536a940(param_1 + 0x68,(uint)uVar16 - *(uint *)(param_1 + 0x74)),
         cVar8 == '\0')) {
        return 0x34;
      }
      uVar17 = 1;
      if (uVar12 != 0) {
        do {
          bVar3 = *(byte *)*param_2;
          pbVar18 = (byte *)*param_2 + 1;
          *param_2 = (longlong)pbVar18;
          uVar16 = bVar3 & 0x7f;
          while ((char)bVar3 < '\0') {
            bVar3 = *pbVar18;
            pbVar18 = pbVar18 + 1;
            *param_2 = (longlong)pbVar18;
            uVar16 = bVar3 & 0x7f | uVar16 << 7;
          }
          bVar3 = *pbVar18;
          *param_2 = (longlong)(pbVar18 + 1);
          uVar4 = *(undefined4 *)(pbVar18 + 1);
          *param_2 = (longlong)(pbVar18 + 5);
          puVar11 = *(ushort **)(param_1 + 0x68);
          uVar12 = *(uint *)(param_1 + 0x70);
          puVar1 = puVar11 + (ulonglong)uVar12 * 4;
          for (; puVar11 != puVar1; puVar11 = puVar11 + 4) {
            if (*puVar11 == uVar16) {
              *(undefined4 *)(puVar11 + 2) = uVar4;
              *(byte *)(puVar11 + 1) = bVar3;
              goto LAB_14536a670;
            }
          }
          uVar10 = *(uint *)(param_1 + 0x74);
          local_res10 = (longlong *)CONCAT44(uVar4,(undefined4)local_res10);
          local_res10._0_3_ = CONCAT12(bVar3,uVar16);
          if (uVar12 < uVar10) {
LAB_14536a64a:
            if (uVar12 < *(uint *)(param_1 + 0x74)) {
              puVar2 = (undefined8 *)
                       (*(longlong *)(param_1 + 0x68) + (ulonglong)*(uint *)(param_1 + 0x70) * 8);
              *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) + 1;
              if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = local_res10;
              }
            }
          }
          else {
            iVar13 = (uVar10 >> 1) + uVar10;
            if (uVar10 == 0) {
              iVar13 = 1;
            }
            cVar8 = FUN_14536a940(param_1 + 0x68,iVar13);
            if (cVar8 != '\0') goto LAB_14536a64a;
          }
LAB_14536a670:
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
  }
  return uVar17;
}



// FUNCTION 14536a6b0 FUN_14536a6b0 body=181 status=ok
// SIG undefined FUN_14536a6b0(void)

int FUN_14536a6b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18 [2];
  
  local_18[0] = (longlong *)0x0;
  iVar3 = FUN_145088ff0(&PTR_PTR_14c72f448,param_2,local_18);
  if ((iVar3 == 1) && (local_18[0] != (longlong *)0x0)) {
    iVar3 = (**(code **)(*local_18[0] + 0x18))(local_18[0],&PTR_PTR_14c72f448,param_3,param_4);
    plVar2 = local_18[0];
    if (iVar3 != 1) {
      (**(code **)(*local_18[0] + 0x20))(local_18[0],&PTR_PTR_14c72f448);
      return iVar3;
    }
    plVar1 = *(longlong **)(param_1 + 0x40);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,&PTR_PTR_14c72f448);
    }
    *(longlong **)(param_1 + 0x40) = plVar2;
  }
  *(int *)(param_1 + 0x38) = (int)param_2;
  return 1;
}



// FUNCTION 14536a770 FUN_14536a770 body=456 status=ok
// SIG undefined FUN_14536a770(void)

undefined8
FUN_14536a770(longlong param_1,undefined4 param_2,undefined1 param_3,char param_4,uint param_5,
             undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  short *psVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  char cVar7;
  undefined8 uVar8;
  short *psVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *local_res8;
  undefined1 uStack_35;
  undefined4 uStack_34;
  
  local_res8 = (undefined4 *)0x0;
  uVar8 = FUN_145352770(param_1 + 0x58,3,*(undefined4 *)(param_1 + 0x10),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,param_9,&local_res8);
  if ((int)uVar8 != 1) {
    return uVar8;
  }
  if (local_res8 != (undefined4 *)0x0) {
    puVar6 = local_res8;
    for (lVar5 = *(longlong *)(param_1 + 0xa8); local_res8 = puVar6, lVar5 != 0;
        lVar5 = *(longlong *)(lVar5 + 0x70)) {
      FUN_145352ee0(lVar5 + 0x78,puVar6);
      uStack_35 = (undefined1)((uint)*puVar6 >> 0x18);
      uVar3 = (uint)uStack_34 >> 8;
      uStack_34 = CONCAT31((int3)uVar3,*(undefined1 *)((longlong)puVar6 + 0xd));
      FUN_145353180(lVar5 + 8,CONCAT44(uStack_34,*puVar6));
      puVar6 = local_res8;
    }
  }
  psVar9 = *(short **)(param_1 + 0x68);
  psVar1 = psVar9 + (ulonglong)*(uint *)(param_1 + 0x70) * 4;
  for (; psVar9 != psVar1; psVar9 = psVar9 + 4) {
    if (*psVar9 == (short)param_5) {
      *(char *)(psVar9 + 1) = param_4;
      break;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x70);
  if ((psVar9 == (short *)(*(longlong *)(param_1 + 0x68) + (ulonglong)uVar3 * 8)) &&
     (param_4 != '\0')) {
    if (param_4 == '\x03') {
      uVar11 = 0x3f800000;
    }
    else {
      uVar11 = 0;
    }
    uVar4 = *(uint *)(param_1 + 0x74);
    if (uVar4 <= uVar3) {
      iVar10 = (uVar4 >> 1) + uVar4;
      if (uVar4 == 0) {
        iVar10 = 1;
      }
      cVar7 = FUN_14536a940(param_1 + 0x68,iVar10);
      if (cVar7 == '\0') goto LAB_14536a90a;
    }
    if (uVar3 < *(uint *)(param_1 + 0x74)) {
      puVar2 = (undefined8 *)
               (*(longlong *)(param_1 + 0x68) + (ulonglong)*(uint *)(param_1 + 0x70) * 8);
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) + 1;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = CONCAT44(uVar11,CONCAT13(uStack_35,CONCAT12(param_4,(short)param_5)));
      }
    }
  }
LAB_14536a90a:
  FUN_14536ac60(param_1,param_5 & 0xffff);
  return 1;
}



// FUNCTION 14536a940 FUN_14536a940 body=453 status=ok
// SIG undefined FUN_14536a940(void)

undefined8 FUN_14536a940(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  __uint64 _Var3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  uVar9 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var3 = (ulonglong)uVar9 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar8 = 0;
      if (3 < uVar6) {
        puVar4 = (undefined4 *)((longlong)pvVar2 + 4);
        lVar7 = (uVar6 - 4 >> 2) + 1;
        uVar8 = lVar7 * 4;
        do {
          puVar5 = (undefined8 *)(puVar4 + -1);
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined2 *)puVar5 = 0;
            *(undefined1 *)((longlong)puVar4 + -2) = 0;
            *puVar4 = 0;
          }
          *puVar5 = *(undefined8 *)((longlong)puVar4 + *param_1 + -(longlong)pvVar2 + -4);
          puVar5 = (undefined8 *)(puVar4 + 1);
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined2 *)puVar5 = 0;
            *(undefined1 *)((longlong)puVar4 + 6) = 0;
            puVar4[2] = 0;
          }
          *puVar5 = *(undefined8 *)((longlong)puVar4 + *param_1 + -(longlong)pvVar2 + 4);
          lVar1 = (longlong)puVar4 + (0xc - (longlong)pvVar2);
          if ((longlong)pvVar2 + lVar1 != 0) {
            *(undefined2 *)(puVar4 + 3) = 0;
            *(undefined1 *)((longlong)puVar4 + 0xe) = 0;
            puVar4[4] = 0;
          }
          *(undefined8 *)(puVar4 + 3) = *(undefined8 *)(lVar1 + *param_1);
          lVar1 = (longlong)puVar4 + (0x14 - (longlong)pvVar2);
          if (lVar1 + (longlong)pvVar2 != 0) {
            *(undefined2 *)(puVar4 + 5) = 0;
            *(undefined1 *)((longlong)puVar4 + 0x16) = 0;
            puVar4[6] = 0;
          }
          *(undefined8 *)(puVar4 + 5) = *(undefined8 *)(lVar1 + *param_1);
          puVar4 = puVar4 + 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (uVar8 < uVar6) {
        puVar5 = (undefined8 *)((longlong)pvVar2 + uVar8 * 8);
        lVar7 = uVar6 - uVar8;
        do {
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined2 *)puVar5 = 0;
            *(undefined1 *)((longlong)puVar5 + 2) = 0;
            *(undefined4 *)((longlong)puVar5 + 4) = 0;
          }
          *puVar5 = *(undefined8 *)((longlong)puVar5 + (*param_1 - (longlong)pvVar2));
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
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
  *(uint *)((longlong)param_1 + 0xc) = uVar9;
  return 1;
}



// FUNCTION 14536ab10 FUN_14536ab10 body=134 status=ok
// SIG undefined FUN_14536ab10(void)

undefined8 * FUN_14536ab10(undefined8 *param_1)

{
  FUN_1453734e0();
  *param_1 = &PTR_FUN_149d42640;
  FUN_14553fa10(param_1 + 3);
  param_1[6] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = &PTR_FUN_149d42660;
  param_1[8] = 0;
  param_1[3] = &PTR_LAB_149d42690;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 14536aba0 FUN_14536aba0 body=185 status=ok
// SIG undefined FUN_14536aba0(void)

void FUN_14536aba0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149d42660;
  param_1[3] = &PTR_LAB_149d42690;
  FUN_1453526b0();
  if ((void *)param_1[0xd] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0xd]);
    param_1[0xd] = 0;
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
    *(undefined4 *)(param_1 + 10) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[9]);
    param_1[9] = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  plVar1 = (longlong *)param_1[8];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&PTR_PTR_14c72f448);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  FUN_1453525f0(param_1 + 0xb);
  FUN_14553fa40(param_1 + 3);
  FUN_145373500(param_1);
  return;
}



// FUNCTION 14536ac60 FUN_14536ac60 body=243 status=ok
// SIG undefined FUN_14536ac60(void)

void FUN_14536ac60(longlong param_1,short param_2)

{
  short *psVar1;
  longlong lVar2;
  short *psVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  do {
    if (lVar2 == 0) {
      return;
    }
    pvVar6 = *(void **)(lVar2 + 0x60);
    uVar4 = *(uint *)(lVar2 + 0x68);
    _Dst = pvVar6;
    if (pvVar6 != (void *)((ulonglong)uVar4 * 0x10 + (longlong)pvVar6)) {
      do {
        if (*(short *)((longlong)_Dst + 8) == param_2) {
          pvVar5 = (void *)((ulonglong)(uVar4 - 1) * 0x10 + (longlong)pvVar6);
          if (_Dst < pvVar5) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                    (ulonglong)((int)pvVar5 - (int)_Dst & 0xfffffff0));
            pvVar6 = *(void **)(lVar2 + 0x60);
          }
          *(int *)(lVar2 + 0x68) = *(int *)(lVar2 + 0x68) + -1;
          uVar4 = *(uint *)(lVar2 + 0x68);
        }
        else {
          _Dst = (void *)((longlong)_Dst + 0x10);
        }
      } while (_Dst != (void *)((ulonglong)uVar4 * 0x10 + (longlong)pvVar6));
    }
    psVar3 = *(short **)(*(longlong *)(lVar2 + 0x58) + 0x68);
    psVar1 = psVar3 + (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x58) + 0x70) * 4;
    for (; psVar3 != psVar1; psVar3 = psVar3 + 4) {
      if (*psVar3 == param_2) {
        FUN_14536c430(lVar2,param_2,*(undefined4 *)(psVar3 + 2));
        break;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x70);
  } while( true );
}



// FUNCTION 14536ad60 FUN_14536ad60 body=135 status=ok
// SIG undefined FUN_14536ad60(void)

void FUN_14536ad60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  
  for (lVar1 = *(longlong *)(param_1 + 0xa8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x70)) {
    lVar2 = *(longlong *)(lVar1 + 0x58);
    *(undefined4 *)(lVar1 + 0x68) = 0;
    if ((lVar2 != 0) &&
       (puVar3 = *(undefined2 **)(lVar2 + 0x68),
       puVar3 != puVar3 + (ulonglong)*(uint *)(lVar2 + 0x70) * 4)) {
      do {
        if (*(char *)(puVar3 + 1) != '\0') {
          FUN_14536c430(lVar1,*puVar3,*(undefined4 *)(puVar3 + 2));
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (undefined2 *)
                         (*(longlong *)(*(longlong *)(lVar1 + 0x58) + 0x68) +
                         (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x58) + 0x70) * 8));
    }
  }
  return;
}



// FUNCTION 14536adf0 FUN_14536adf0 body=52 status=ok
// SIG undefined FUN_14536adf0(void)

undefined8 FUN_14536adf0(undefined8 param_1,ulonglong param_2)

{
  FUN_14536aba0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14536ae30 FUN_14536ae30 body=73 status=ok
// SIG undefined FUN_14536ae30(void)

undefined8 * FUN_14536ae30(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(2,0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14536ab10(puVar1);
    *puVar1 = &PTR_FUN_149d42710;
    puVar1[3] = &PTR_LAB_149d42740;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14536ae90 FUN_14536ae90 body=73 status=ok
// SIG undefined FUN_14536ae90(void)

undefined8 * FUN_14536ae90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d42710;
  param_1[3] = &PTR_LAB_149d42740;
  FUN_14536aba0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14536aee0 FUN_14536aee0 body=73 status=ok
// SIG undefined FUN_14536aee0(void)

undefined8 * FUN_14536aee0(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(2,0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14536ab10(puVar1);
    *puVar1 = &PTR_FUN_149d427c0;
    puVar1[3] = &PTR_LAB_149d427f0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14536af50 FUN_14536af50 body=73 status=ok
// SIG undefined FUN_14536af50(void)

undefined8 * FUN_14536af50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d427c0;
  param_1[3] = &PTR_LAB_149d427f0;
  FUN_14536aba0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14536afa0 FUN_14536afa0 body=127 status=ok
// SIG undefined FUN_14536afa0(void)

undefined8 * FUN_14536afa0(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(2,0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14536ab10(puVar1);
    *puVar1 = &PTR_FUN_149d42870;
    puVar1[3] = &PTR_LAB_149d428a8;
    puVar1[0x16] = &PTR_LAB_149d42928;
    puVar1[0x18] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x17] = puVar1 + 0x16;
    puVar1[0x19] = puVar1 + 0x17;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14536b020 FUN_14536b020 body=93 status=ok
// SIG undefined FUN_14536b020(void)

int FUN_14536b020(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_14536a3c0();
  if (iVar1 == 1) {
    iVar1 = FUN_1453738f0(param_1 + 0x17,param_2,param_3);
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  return iVar1;
}



// FUNCTION 14536b100 FUN_14536b100 body=70 status=ok
// SIG undefined FUN_14536b100(void)

undefined8 * FUN_14536b100(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1453741b0(param_1 + 200,param_3,0);
  if (lVar1 != 0) {
    FUN_145373680(lVar1,param_2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14536b150 FUN_14536b150 body=36 status=ok
// SIG undefined FUN_14536b150(void)

undefined4 FUN_14536b150(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1453741b0(param_1 + 200,param_2,0);
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 14536b180 FUN_14536b180 body=41 status=ok
// SIG undefined FUN_14536b180(void)

undefined1 FUN_14536b180(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0xd0) + 0x20);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0x24);
  }
  return 0;
}



// FUNCTION 14536b1b0 FUN_14536b1b0 body=220 status=ok
// SIG undefined FUN_14536b1b0(void)

void FUN_14536b1b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = (ulonglong)param_2;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xc0);
    if ((lVar1 == 0) || (lVar1 + 4 == 0)) {
      cVar2 = '\0';
      iVar4 = 0;
    }
    else {
      cVar2 = *(char *)(lVar1 + 9 + uVar3 * 8);
      iVar4 = *(int *)(uVar3 * 8 + lVar1 + 4);
    }
    lVar1 = FUN_145373f10(param_1 + 200,0,0);
    if ((lVar1 != 0) &&
       ((*(int *)(uVar3 * 8 + 0x24 + lVar1) != iVar4 ||
        (*(char *)(uVar3 * 8 + 0x29 + lVar1) != cVar2)))) {
      FUN_145374250(param_1 + 200,uVar3,iVar4,cVar2);
      (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x10))(param_1 + 0xb0);
      (**(code **)(*(longlong *)(param_1 + 0xb0) + 8))(param_1 + 0xb0,param_2);
    }
  }
  return;
}



// FUNCTION 14536b290 FUN_14536b290 body=156 status=ok
// SIG undefined FUN_14536b290(void)

void FUN_14536b290(longlong param_1,uint param_2,int param_3,char param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2;
  lVar1 = FUN_145373f10(param_1 + 200,0,0);
  if ((lVar1 != 0) &&
     ((*(int *)(lVar1 + 0x24 + uVar2 * 8) != param_3 ||
      (*(char *)(lVar1 + 0x29 + uVar2 * 8) != param_4)))) {
    FUN_145374250(param_1 + 200,uVar2,param_3,param_4);
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x10))(param_1 + 0xb0);
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 8))(param_1 + 0xb0,param_2);
  }
  return;
}



// FUNCTION 14536b340 FUN_14536b340 body=114 status=ok
// SIG undefined FUN_14536b340(void)

undefined8 * FUN_14536b340(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d42870;
  param_1[3] = &PTR_LAB_149d428a8;
  param_1[0x16] = &PTR_LAB_149d42928;
  FUN_145373e20(param_1 + 0x19);
  FUN_1453738c0(param_1 + 0x17);
  FUN_14536aba0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14536b3c0 FUN_14536b3c0 body=468 status=ok
// SIG undefined FUN_14536b3c0(void)

undefined8 FUN_14536b3c0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  __uint64 _Var6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  uVar11 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var6 = (ulonglong)uVar11 << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar5)) {
      uVar10 = 0;
      if (3 < uVar8) {
        puVar7 = (undefined8 *)((longlong)pvVar5 + 8);
        lVar9 = (uVar8 - 4 >> 2) + 1;
        uVar10 = lVar9 * 4;
        do {
          puVar3 = puVar7 + -1;
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined4 *)puVar3 = 0;
            *(undefined4 *)((longlong)puVar7 + -4) = 0;
            *(undefined2 *)puVar7 = 0;
            *(undefined4 *)((longlong)puVar7 + 4) = 0;
          }
          puVar1 = (undefined8 *)((longlong)puVar7 + *param_1 + -(longlong)pvVar5 + -8);
          uVar4 = puVar1[1];
          *puVar3 = *puVar1;
          *puVar7 = uVar4;
          puVar3 = puVar7 + 1;
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined4 *)puVar3 = 0;
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            *(undefined2 *)(puVar7 + 2) = 0;
            *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
          }
          puVar1 = (undefined8 *)((longlong)puVar7 + *param_1 + -(longlong)pvVar5 + 8);
          uVar4 = puVar1[1];
          *puVar3 = *puVar1;
          puVar7[2] = uVar4;
          lVar2 = (0x18 - (longlong)pvVar5) + (longlong)puVar7;
          if (lVar2 + (longlong)pvVar5 != 0) {
            puVar7[3] = 0;
            *(undefined2 *)(puVar7 + 4) = 0;
            *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
          }
          puVar3 = (undefined8 *)(lVar2 + *param_1);
          uVar4 = puVar3[1];
          lVar2 = (0x28 - (longlong)pvVar5) + (longlong)puVar7;
          puVar7[3] = *puVar3;
          puVar7[4] = uVar4;
          if (lVar2 + (longlong)pvVar5 != 0) {
            puVar7[5] = 0;
            *(undefined2 *)(puVar7 + 6) = 0;
            *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
          }
          puVar3 = (undefined8 *)(lVar2 + *param_1);
          uVar4 = puVar3[1];
          puVar7[5] = *puVar3;
          puVar7[6] = uVar4;
          puVar7 = puVar7 + 8;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (uVar10 < uVar8) {
        puVar7 = (undefined8 *)(uVar10 * 0x10 + (longlong)pvVar5);
        lVar9 = uVar8 - uVar10;
        do {
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
            *(undefined2 *)(puVar7 + 1) = 0;
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          }
          puVar3 = (undefined8 *)((longlong)puVar7 + (*param_1 - (longlong)pvVar5));
          uVar4 = puVar3[1];
          *puVar7 = *puVar3;
          puVar7[1] = uVar4;
          puVar7 = puVar7 + 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar11;
  return 1;
}



// FUNCTION 14536b5a0 FUN_14536b5a0 body=314 status=ok
// SIG undefined FUN_14536b5a0(void)

undefined1 FUN_14536b5a0(longlong *param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  uVar4 = (ulonglong)param_2;
  if (param_2 < *(uint *)(param_1 + 1)) {
    *(uint *)(param_1 + 1) = param_2;
    return 1;
  }
  if (*(uint *)((longlong)param_1 + 0xc) < param_2) {
    cVar1 = FUN_14536b3c0(param_1,param_2 - *(uint *)((longlong)param_1 + 0xc));
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (uVar5 < uVar4) {
    if (3 < uVar4 - uVar5) {
      lVar3 = uVar5 << 4;
      lVar6 = ((uVar4 - uVar5) - 4 >> 2) + 1;
      uVar5 = uVar5 + lVar6 * 4;
      do {
        puVar2 = (undefined8 *)(*param_1 + lVar3);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined2 *)(puVar2 + 1) = 0;
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        puVar2 = (undefined8 *)(*param_1 + 0x10 + lVar3);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined2 *)(puVar2 + 1) = 0;
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        puVar2 = (undefined8 *)(*param_1 + 0x20 + lVar3);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined2 *)(puVar2 + 1) = 0;
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        puVar2 = (undefined8 *)(*param_1 + 0x30 + lVar3);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined2 *)(puVar2 + 1) = 0;
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        lVar3 = lVar3 + 0x40;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (uVar4 <= uVar5) goto LAB_14536b6c5;
    }
    lVar3 = uVar5 << 4;
    lVar6 = uVar4 - uVar5;
    do {
      puVar2 = (undefined8 *)(*param_1 + lVar3);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *(undefined2 *)(puVar2 + 1) = 0;
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      lVar3 = lVar3 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
LAB_14536b6c5:
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}



// FUNCTION 14536b6e0 FUN_14536b6e0 body=312 status=ok
// SIG undefined FUN_14536b6e0(void)

void FUN_14536b6e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uStack_2c;
  uint uStack_24;
  undefined7 uStack_1f;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_145353380(param_1 + 8);
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_18 = CONCAT31(local_18._1_3_,0xff);
  if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(ulonglong *)(param_1 + 0x18) = (ulonglong)uStack_2c << 0x20;
    *(ulonglong *)(param_1 + 0x20) = (ulonglong)uStack_24 << 0x20;
    *(ulonglong *)(param_1 + 0x28) = CONCAT71(uStack_1f,0xff);
    *(undefined4 *)(param_1 + 0x30) = local_18;
    *(undefined4 *)(param_1 + 0x34) = uStack_14;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_14536c160(param_1);
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,&PTR_PTR_14c72f458);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (plVar3 != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar3 + 0xf));
    lVar6 = plVar3[0x15];
    lVar5 = 0;
    while (lVar4 = lVar6, lVar4 != 0) {
      if (lVar4 == param_1) {
        if (lVar4 == plVar3[0x15]) {
          plVar3[0x15] = *(longlong *)(lVar4 + 0x70);
        }
        else {
          *(longlong *)(lVar5 + 0x70) = *(longlong *)(lVar4 + 0x70);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(plVar3 + 0xf));
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 0x18))();
        }
        goto LAB_14536b7ab;
      }
      lVar5 = lVar4;
      lVar6 = *(longlong *)(lVar4 + 0x70);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar3 + 0xf));
LAB_14536b7ab:
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}



// FUNCTION 14536b820 FUN_14536b820 body=4 status=ok
// SIG undefined FUN_14536b820(void)

undefined8 FUN_14536b820(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 14536b830 FUN_14536b830 body=32 status=ok
// SIG undefined FUN_14536b830(void)

void FUN_14536b830(void)

{
  FUN_14536be60();
  return;
}



// FUNCTION 14536b850 FUN_14536b850 body=34 status=ok
// SIG undefined FUN_14536b850(void)

void FUN_14536b850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  FUN_14536be60(param_1,param_2,0,param_3,param_4,param_5);
  return;
}



// FUNCTION 14536b880 FUN_14536b880 body=183 status=ok
// SIG undefined FUN_14536b880(void)

void FUN_14536b880(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar4 = param_2[1];
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar2 = *(undefined4 *)(param_2 + 3);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar2 = *(undefined4 *)(param_2 + 5);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
  }
  FUN_14536b940();
  if (*(longlong *)(param_1 + 0x58) != 0) {
    local_48 = 2;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_40 = *param_2;
    local_58 = 0;
    uStack_50 = 0;
    local_38 = 0xff00;
    local_14 = 1;
    FUN_14507d830(DAT_14c791028,&local_58,*(longlong *)(param_1 + 0x58) + 0x58,&local_40,param_3);
  }
  return;
}



// FUNCTION 14536b940 FUN_14536b940 body=168 status=ok
// SIG undefined FUN_14536b940(void)

void FUN_14536b940(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 != puVar2 + (ulonglong)*(uint *)(param_1 + 0x80) * 3) {
    do {
      FUN_145353180(param_1 + 8,*puVar2);
      uVar3 = FUN_1450800b0(g_pGameSyncMgr,puVar2[2],param_1 + 0x10);
      lVar1 = puVar2[2];
      FUN_14536bc90(param_1,1,*(undefined4 *)(lVar1 + 4),*(undefined4 *)(lVar1 + 8),
                    *(undefined1 *)(lVar1 + 0xc),uVar3);
      puVar2 = puVar2 + 3;
    } while (puVar2 != (undefined8 *)
                       (*(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18)
            );
  }
  return;
}



// FUNCTION 14536b9f0 FUN_14536b9f0 body=181 status=ok
// SIG undefined FUN_14536b9f0(void)

void FUN_14536b9f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  (**(code **)(*param_1 + 0x20))();
  param_1[10] = param_2[10];
  lVar1 = param_2[0xb];
  param_1[0xb] = lVar1;
  if ((int)param_1[9] == 0) {
    lVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar4;
    lVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
    lVar4 = param_2[7];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
    *(int *)(param_1 + 7) = (int)lVar4;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  }
  if (lVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x78));
    if (*(longlong *)(lVar1 + 0xa8) == 0) {
      *(longlong **)(lVar1 + 0xa8) = param_1;
      param_1[0xe] = 0;
    }
    else {
      param_1[0xe] = *(longlong *)(lVar1 + 0xa8);
      *(longlong **)(lVar1 + 0xa8) = param_1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x78));
    LOCK();
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    UNLOCK();
  }
  param_2[10] = 0;
                    /* WARNING: Could not recover jumptable at 0x00014536baa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 14536bac0 FUN_14536bac0 body=458 status=ok
// SIG undefined FUN_14536bac0(void)

void FUN_14536bac0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  uint5 *puVar1;
  float fVar2;
  longlong lVar3;
  uint5 *puVar4;
  ulonglong uVar5;
  float fVar6;
  ulonglong local_res10;
  
  puVar4 = *(uint5 **)(param_1 + 0x70);
  fVar2 = *param_5;
  puVar1 = puVar4 + (ulonglong)*(uint *)(param_1 + 0x78) * 3;
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
LAB_14536bbb2:
        if (fVar6 == 3.4028235e+38) goto LAB_14536bbb7;
      }
      else {
        if (fVar2 == *(float *)(lVar3 + 0x34)) {
          fVar6 = *(float *)(lVar3 + 0x3c);
          goto LAB_14536bbb2;
        }
LAB_14536bbb7:
        if (*(longlong *)(lVar3 + 0x18) == 0) {
          fVar6 = 0.0;
        }
        else {
          local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)(lVar3 + 0x28));
          param_5._0_4_ = 0.0;
          FUN_1450737c0(lVar3 + 0x18,fVar2,&local_res10,&param_5);
          *(undefined4 *)(lVar3 + 0x28) = (undefined4)local_res10;
          fVar6 = param_5._0_4_;
        }
        *(float *)(lVar3 + 0x30 + (ulonglong)*(byte *)(lVar3 + 0x14) * 4) = fVar2;
        *(float *)(lVar3 + 0x38 + (ulonglong)*(byte *)(lVar3 + 0x14) * 4) = fVar6;
        *(byte *)(lVar3 + 0x14) = *(byte *)(lVar3 + 0x14) ^ 1;
      }
      FUN_14536bc90(param_1 + -8,1,*(undefined4 *)(lVar3 + 4),*(undefined4 *)(lVar3 + 8),
                    *(undefined1 *)(lVar3 + 0xc),fVar6);
      puVar4 = puVar4 + 3;
    } while (puVar4 != (uint5 *)(*(longlong *)(param_1 + 0x70) +
                                (ulonglong)*(uint *)(param_1 + 0x78) * 0x18));
  }
  return;
}



// FUNCTION 14536bc90 FUN_14536bc90 body=462 status=ok
// SIG undefined FUN_14536bc90(void)

void FUN_14536bc90(longlong param_1,int param_2,int param_3,uint param_4,char param_5,float param_6)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  float local_res8 [2];
  undefined2 uStack_1e;
  
  fVar4 = param_6;
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if (param_5 == '\x01') {
    (**(code **)(*plVar2 + 8))(plVar2,param_4 & 0xffff,&param_6,4);
    return;
  }
  if (param_5 == '\x03') {
    fVar11 = 1.0;
  }
  else {
    fVar11 = 0.0;
  }
  piVar8 = *(int **)(param_1 + 0x60);
  uVar9 = *(uint *)(param_1 + 0x68);
  piVar6 = piVar8 + (ulonglong)uVar9 * 4;
  piVar10 = piVar8;
  local_res8[0] = fVar11;
  if (piVar8 != piVar6) {
    do {
      if (*(ushort *)(piVar10 + 2) == param_4) {
        if ((*piVar10 == param_2) && (piVar10[1] == param_3)) {
          piVar10[3] = (int)param_6;
          piVar8 = *(int **)(param_1 + 0x60);
          piVar6 = piVar10;
          fVar11 = local_res8[0];
        }
        if ((param_5 != '\x04') || (*piVar10 != 0)) {
          if (param_5 == '\x03') {
            fVar11 = fVar11 * (float)piVar10[3];
            local_res8[0] = fVar11;
          }
          else {
            fVar11 = fVar11 + (float)piVar10[3];
            local_res8[0] = fVar11;
          }
        }
      }
      uVar9 = *(uint *)(param_1 + 0x68);
      piVar10 = piVar10 + 4;
    } while (piVar10 != piVar8 + (ulonglong)uVar9 * 4);
  }
  if (piVar6 == piVar8 + (ulonglong)uVar9 * 4) {
    uVar1 = *(uint *)(param_1 + 0x6c);
    if (uVar1 <= uVar9) {
      iVar3 = (uVar1 >> 1) + uVar1;
      if (uVar1 == 0) {
        iVar3 = 1;
      }
      cVar5 = FUN_14536b3c0(param_1 + 0x60,iVar3);
      if (cVar5 == '\0') goto LAB_14536be2d;
    }
    if (uVar9 < *(uint *)(param_1 + 0x6c)) {
      uVar9 = *(uint *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = uVar9 + 1;
      puVar7 = (undefined8 *)((ulonglong)uVar9 * 0x10 + *(longlong *)(param_1 + 0x60));
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = CONCAT44(param_3,param_2);
        puVar7[1] = CONCAT44(fVar4,CONCAT22(uStack_1e,(short)param_4));
        if (param_5 == '\x03') {
          local_res8[0] = local_res8[0] * param_6;
        }
        else {
          local_res8[0] = local_res8[0] + param_6;
        }
      }
    }
  }
LAB_14536be2d:
  (**(code **)(**(longlong **)(param_1 + 0x50) + 8))
            (*(longlong **)(param_1 + 0x50),param_4 & 0xffff,local_res8,4);
  return;
}



// FUNCTION 14536be60 FUN_14536be60 body=765 status=ok
// SIG undefined FUN_14536be60(void)

longlong FUN_14536be60(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,char param_6)

{
  undefined2 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar12;
  ulonglong uVar13;
  longlong local_68 [2];
  undefined4 local_58;
  longlong local_50;
  undefined2 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong uVar11;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar2 = *(longlong **)(param_2 + 0x40);
  if (plVar2 == (longlong *)0x0) goto LAB_14536c141;
  lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,&PTR_PTR_14c72f458);
  param_1[0xb] = param_2;
  param_1[10] = lVar6;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x78));
  uVar13 = 0;
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    *(longlong **)(param_2 + 0xa8) = param_1;
    param_1[0xe] = 0;
  }
  else {
    param_1[0xe] = *(longlong *)(param_2 + 0xa8);
    *(longlong **)(param_2 + 0xa8) = param_1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x78));
  LOCK();
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  UNLOCK();
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_145352dd0(param_1 + 0xf,param_1[0xb] + 0x58);
  lVar6 = param_1[0xb];
  *(undefined4 *)(param_1 + 0xd) = 0;
  plVar7 = *(longlong **)(lVar6 + 0x58);
  plVar2 = plVar7 + *(uint *)(lVar6 + 0x60);
  iVar12 = *(int *)(lVar6 + 0x70);
  for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
    iVar9 = iVar12 + 1;
    if (*(char *)(*plVar7 + 0xc) == '\x01') {
      iVar9 = iVar12;
    }
    iVar12 = iVar9;
  }
  lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x18) + 0x30))(lVar6 + 0x18);
  lVar8 = (**(code **)(*(longlong *)(param_1[0xb] + 0x18) + 0x78))();
  if ((lVar6 != 0) && (lVar8 != 0)) {
    uVar11 = uVar13;
    for (lVar8 = *(longlong *)(lVar8 + 8); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x10)) {
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    }
    iVar12 = iVar12 + uVar10 * *(int *)(lVar6 + 8);
  }
  if (((iVar12 != 0) && (cVar5 = FUN_14536b5a0(param_1 + 0xc,iVar12), cVar5 == '\0')) ||
     (param_1[10] == 0)) {
    (**(code **)(*param_1 + 0x20))(param_1);
    goto LAB_14536c141;
  }
  lVar6 = param_1[0xb];
  if (*(int *)(lVar6 + 0x70) != 0) {
    do {
      uVar10 = (int)uVar13 + 1;
      puVar1 = (undefined2 *)(*(longlong *)(lVar6 + 0x68) + uVar13 * 8);
      lVar6 = uVar13 * 0x10 + param_1[0xc];
      *(undefined2 *)(lVar6 + 8) = *puVar1;
      *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(puVar1 + 2);
      lVar6 = param_1[0xb];
      uVar13 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(lVar6 + 0x70));
  }
  if (param_3 == (longlong *)0x0) {
    if (param_6 != '\0') {
      if ((int)param_1[9] == 0) {
        lVar6 = param_4[1];
        param_1[2] = *param_4;
        param_1[3] = lVar6;
        lVar6 = param_4[3];
        param_1[4] = param_4[2];
        param_1[5] = lVar6;
        uVar3 = *(undefined4 *)((longlong)param_4 + 0x24);
        lVar6 = param_4[5];
        uVar4 = *(undefined4 *)((longlong)param_4 + 0x2c);
        *(int *)(param_1 + 6) = (int)param_4[4];
        *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
        *(int *)(param_1 + 7) = (int)lVar6;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
      }
      FUN_14536b940(param_1);
      lVar6 = param_1[0xb];
      if (lVar6 != 0) {
        local_50 = *param_4;
        local_68[0] = 0;
        local_68[1] = 0;
        local_58 = 2;
        local_48 = 0xff00;
        local_38 = 0;
        local_30 = 0;
        local_24 = 1;
        local_20 = 0;
        goto LAB_14536c0fd;
      }
    }
  }
  else {
    if ((int)param_1[9] == 0) {
      lVar6 = param_3[2];
      param_1[2] = param_3[1];
      param_1[3] = lVar6;
      lVar6 = param_3[4];
      param_1[4] = param_3[3];
      param_1[5] = lVar6;
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
      lVar6 = param_3[6];
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x34);
      *(int *)(param_1 + 6) = (int)param_3[5];
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
      *(int *)(param_1 + 7) = (int)lVar6;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
    }
    FUN_14536b940(param_1);
    if (param_1[0xb] != 0) {
      local_68[0] = param_3[0x3a];
      local_68[1] = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0xff00;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_24 = 1;
      local_20 = 0;
      (**(code **)(*param_3 + 0x60))(param_3,&local_50,1);
      lVar6 = param_1[0xb];
      param_5 = param_3 + 0xf;
LAB_14536c0fd:
      local_28 = 0;
      FUN_14507d830(DAT_14c791028,local_68,lVar6 + 0x58,&local_50,param_5);
    }
  }
  FUN_14536c8a0(param_1);
LAB_14536c141:
  return param_1[10];
}



// FUNCTION 14536c160 FUN_14536c160 body=705 status=ok
// SIG undefined FUN_14536c160(void)

void FUN_14536c160(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  float fVar12;
  char local_res10 [16];
  float local_res20 [2];
  longlong *local_98;
  ushort *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort uStack_80;
  undefined2 uStack_7e;
  float fStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  float fStack_6c;
  
  lVar6 = *(longlong *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((lVar6 != 0) &&
     (puVar11 = *(ushort **)(lVar6 + 0x68),
     puVar11 != puVar11 + (ulonglong)*(uint *)(lVar6 + 0x70) * 4)) {
    do {
      if ((char)puVar11[1] != '\0') {
        uVar3 = *puVar11;
        fVar2 = *(float *)(puVar11 + 2);
        local_res10[0] = '\0';
        local_res20[0] = fVar2;
        local_90 = puVar11;
        FUN_14536c690(param_1,uVar3,local_res20,local_res10);
        cVar9 = local_res10[0];
        if (*(longlong *)(param_1 + 0x58) != 0) {
          FUN_145352940(*(longlong *)(param_1 + 0x58) + 0x58,&local_98,uVar3);
          plVar1 = (longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x58) +
                   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x58) + 0x60) * 8);
          if ((local_98 != plVar1) && (*(uint *)(*local_98 + 8) == (uint)uVar3)) {
            if ((*(char *)(*local_98 + 0xc) == '\x01') && (local_res20[0] = 1.0, cVar9 != '\x03')) {
              local_res20[0] = 0.0;
            }
            do {
              fVar12 = (float)FUN_1450800b0(g_pGameSyncMgr,*local_98,param_1 + 0x10);
              uVar4 = *(uint *)(param_1 + 0x68);
              local_88 = 1;
              uStack_84 = *(undefined4 *)(*local_98 + 4);
              uVar5 = *(uint *)(param_1 + 0x6c);
              uStack_80 = uVar3;
              fStack_7c = fVar12;
              if (uVar4 < uVar5) {
LAB_14536c2c1:
                if (uVar4 < *(uint *)(param_1 + 0x6c)) {
                  uVar4 = *(uint *)(param_1 + 0x68);
                  *(uint *)(param_1 + 0x68) = uVar4 + 1;
                  puVar10 = (undefined8 *)((ulonglong)uVar4 * 0x10 + *(longlong *)(param_1 + 0x60));
                  if (puVar10 != (undefined8 *)0x0) {
                    *puVar10 = CONCAT44(uStack_84,local_88);
                    puVar10[1] = CONCAT44(fStack_7c,CONCAT22(uStack_7e,uStack_80));
                    if (cVar9 == '\x03') {
                      local_res20[0] = local_res20[0] * fVar12;
                    }
                    else {
                      local_res20[0] = local_res20[0] + fVar12;
                    }
                  }
                }
              }
              else {
                iVar7 = (uVar5 >> 1) + uVar5;
                if (uVar5 == 0) {
                  iVar7 = 1;
                }
                cVar8 = FUN_14536b3c0(param_1 + 0x60,iVar7);
                if (cVar8 != '\0') goto LAB_14536c2c1;
              }
              local_98 = local_98 + 1;
              puVar11 = local_90;
            } while ((local_98 != plVar1) && (*(uint *)(*local_98 + 8) == (uint)uVar3));
          }
        }
        if (cVar9 == '\x04') {
          local_res20[0] = local_res20[0] - fVar2;
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x68);
          uVar5 = *(uint *)(param_1 + 0x6c);
          local_78 = 0;
          uStack_70 = CONCAT22(uStack_70._2_2_,uVar3);
          fStack_6c = fVar2;
          if (uVar5 <= uVar4) {
            iVar7 = (uVar5 >> 1) + uVar5;
            if (uVar5 == 0) {
              iVar7 = 1;
            }
            cVar9 = FUN_14536b3c0(param_1 + 0x60,iVar7);
            if (cVar9 == '\0') goto LAB_14536c3a8;
          }
          if (uVar4 < *(uint *)(param_1 + 0x6c)) {
            uVar4 = *(uint *)(param_1 + 0x68);
            *(uint *)(param_1 + 0x68) = uVar4 + 1;
            puVar10 = (undefined8 *)((ulonglong)uVar4 * 0x10 + *(longlong *)(param_1 + 0x60));
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0;
              *(undefined4 *)puVar10 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar10 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar10 + 1) = uStack_70;
              *(float *)((longlong)puVar10 + 0xc) = fStack_6c;
            }
          }
        }
LAB_14536c3a8:
        plVar1 = *(longlong **)(param_1 + 0x50);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,uVar3,local_res20,4);
        }
      }
      puVar11 = puVar11 + 4;
    } while (puVar11 !=
             (ushort *)
             (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x68) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x58) + 0x70) * 8));
  }
  return;
}



// FUNCTION 14536c430 FUN_14536c430 body=604 status=ok
// SIG undefined FUN_14536c430(void)

void FUN_14536c430(longlong param_1,ushort param_2,float param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  char local_res18 [8];
  float local_res20 [2];
  longlong *local_78;
  undefined8 local_70;
  ushort uStack_68;
  undefined2 uStack_66;
  float fStack_64;
  
  local_res18[0] = '\0';
  local_res20[0] = param_3;
  FUN_14536c690(param_1,param_2,local_res20,local_res18);
  cVar5 = local_res18[0];
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_145352940(*(longlong *)(param_1 + 0x58) + 0x58,&local_78,param_2);
    plVar1 = (longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x58) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x58) + 0x60) * 8);
    if ((local_78 != plVar1) && (*(uint *)(*local_78 + 8) == (uint)param_2)) {
      if ((*(char *)(*local_78 + 0xc) == '\x01') && (local_res20[0] = 1.0, cVar5 != '\x03')) {
        local_res20[0] = 0.0;
      }
      do {
        fVar8 = (float)FUN_1450800b0(g_pGameSyncMgr,*local_78,param_1 + 0x10);
        uVar2 = *(uint *)(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0x6c);
        local_70 = CONCAT44(*(undefined4 *)(*local_78 + 4),1);
        uStack_68 = param_2;
        fStack_64 = fVar8;
        if (uVar2 < uVar3) {
LAB_14536c559:
          if (uVar2 < *(uint *)(param_1 + 0x6c)) {
            uVar2 = *(uint *)(param_1 + 0x68);
            *(uint *)(param_1 + 0x68) = uVar2 + 1;
            puVar7 = (undefined8 *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x60));
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = local_70;
              puVar7[1] = CONCAT44(fStack_64,CONCAT22(uStack_66,uStack_68));
              if (cVar5 == '\x03') {
                local_res20[0] = local_res20[0] * fVar8;
              }
              else {
                local_res20[0] = local_res20[0] + fVar8;
              }
            }
          }
        }
        else {
          iVar6 = (uVar3 >> 1) + uVar3;
          if (uVar3 == 0) {
            iVar6 = 1;
          }
          cVar4 = FUN_14536b3c0((longlong *)(param_1 + 0x60),iVar6);
          if (cVar4 != '\0') goto LAB_14536c559;
        }
        local_78 = local_78 + 1;
      } while ((local_78 != plVar1) && (*(uint *)(*local_78 + 8) == (uint)param_2));
    }
  }
  if (cVar5 == '\x04') {
    local_res20[0] = local_res20[0] - param_3;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0x6c);
    local_70 = 0;
    uStack_68 = param_2;
    fStack_64 = param_3;
    if (uVar3 <= uVar2) {
      iVar6 = (uVar3 >> 1) + uVar3;
      if (uVar3 == 0) {
        iVar6 = 1;
      }
      cVar5 = FUN_14536b3c0(param_1 + 0x60,iVar6);
      if (cVar5 == '\0') goto LAB_14536c645;
    }
    if (uVar2 < *(uint *)(param_1 + 0x6c)) {
      uVar2 = *(uint *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = uVar2 + 1;
      puVar7 = (undefined8 *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x60));
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        *(undefined4 *)puVar7 = (undefined4)local_70;
        *(undefined4 *)((longlong)puVar7 + 4) = local_70._4_4_;
        *(uint *)(puVar7 + 1) = CONCAT22(uStack_66,uStack_68);
        *(float *)((longlong)puVar7 + 0xc) = fStack_64;
      }
    }
  }
LAB_14536c645:
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_2,local_res20,4);
  }
  return;
}



// FUNCTION 14536c690 FUN_14536c690 body=521 status=ok
// SIG undefined FUN_14536c690(void)

void FUN_14536c690(longlong param_1,ushort param_2,float *param_3,char *param_4)

{
  longlong lVar1;
  ushort *puVar2;
  bool bVar3;
  ushort uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  ushort *puVar11;
  float fVar12;
  
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18) + 0x30))()
  ;
  if (puVar6 != (undefined8 *)0x0) {
    puVar11 = (ushort *)*puVar6;
    puVar2 = puVar11 + (ulonglong)*(uint *)(puVar6 + 1) * 2;
    if (puVar11 != puVar2) {
      while (*puVar11 != param_2) {
        puVar11 = puVar11 + 2;
        if (puVar11 == puVar2) {
          return;
        }
      }
      lVar1 = *(longlong *)(param_1 + 0x58);
      uVar4 = puVar11[1];
      lVar7 = (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x78))();
      bVar3 = false;
      if ((char)uVar4 == '\x03') {
        if (lVar7 != 0) {
          bVar3 = false;
          for (lVar7 = *(longlong *)(lVar7 + 8); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x10)) {
            puVar2 = *(ushort **)(lVar7 + 0x20);
            if (puVar2 != (ushort *)0x0) {
              uVar8 = 0;
              do {
                uVar9 = uVar8 + 1;
                if (puVar2[uVar9] == param_2) {
                  pfVar10 = (float *)(((ulonglong)((uint)*puVar2 * 2 + 9) & 0xfffffff8) +
                                      (ulonglong)uVar8 * 0x10 + (longlong)puVar2);
                  if ((pfVar10 != (float *)0x0) && (*(char *)(lVar1 + 0x20) != '\0')) {
                    fVar12 = *pfVar10;
                    goto LAB_14536c778;
                  }
                  break;
                }
                uVar8 = uVar9;
              } while (uVar9 < *puVar2);
            }
            fVar12 = 1.0;
LAB_14536c778:
            cVar5 = FUN_14536cce0(param_1,param_2,*(undefined4 *)(lVar7 + 0x38),fVar12);
            if (cVar5 != '\0') {
              bVar3 = true;
              *param_3 = fVar12 * *param_3;
            }
          }
        }
      }
      else if (lVar7 != 0) {
        bVar3 = false;
        for (lVar7 = *(longlong *)(lVar7 + 8); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x10)) {
          puVar2 = *(ushort **)(lVar7 + 0x20);
          if (puVar2 != (ushort *)0x0) {
            uVar8 = 0;
            do {
              uVar9 = uVar8 + 1;
              if (puVar2[uVar9] == param_2) {
                pfVar10 = (float *)(((ulonglong)((uint)*puVar2 * 2 + 9) & 0xfffffff8) +
                                    (ulonglong)uVar8 * 0x10 + (longlong)puVar2);
                if ((pfVar10 != (float *)0x0) && (*(char *)(lVar1 + 0x20) != '\0')) {
                  fVar12 = *pfVar10;
                  goto LAB_14536c80a;
                }
                break;
              }
              uVar8 = uVar9;
            } while (uVar9 < *puVar2);
          }
          fVar12 = 0.0;
LAB_14536c80a:
          cVar5 = FUN_14536cce0(param_1,param_2,*(undefined4 *)(lVar7 + 0x38),fVar12);
          if (cVar5 != '\0') {
            bVar3 = true;
            *param_3 = fVar12 + *param_3;
          }
        }
      }
      if (bVar3) {
        *param_4 = (char)uVar4;
      }
    }
  }
  return;
}



// FUNCTION 14536c8a0 FUN_14536c8a0 body=656 status=ok
// SIG undefined FUN_14536c8a0(void)

void FUN_14536c8a0(longlong param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  short *psVar13;
  int *piVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float local_res8 [2];
  
  plVar9 = (longlong *)(**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18) + 0x30))();
  if (plVar9 != (longlong *)0x0) {
    psVar13 = (short *)*plVar9;
    uVar3 = *(uint *)(param_1 + 0x68);
    if (psVar13 != psVar13 + (ulonglong)*(uint *)(plVar9 + 1) * 2) {
      do {
        cVar1 = (char)psVar13[1];
        bVar6 = false;
        bVar5 = false;
        sVar2 = *psVar13;
        if (cVar1 == '\x03') {
          local_res8[0] = 1.0;
          fVar16 = 1.0;
          fVar17 = 1.0;
        }
        else {
          fVar16 = 0.0;
          fVar17 = 0.0;
          local_res8[0] = 0.0;
        }
        if (uVar3 != 0) {
          lVar4 = *(longlong *)(param_1 + 0x60);
          bVar5 = bVar6;
          if (cVar1 == '\x03') {
            lVar10 = 0;
            uVar11 = (ulonglong)uVar3;
            do {
              if (*(short *)(lVar10 + 8 + lVar4) == sVar2) {
                fVar16 = fVar16 * *(float *)(lVar10 + 0xc + lVar4);
                local_res8[0] = fVar16;
                if (*(int *)(lVar10 + lVar4) == 0) {
                  fVar17 = *(float *)(lVar10 + 0xc + lVar4);
                }
                else {
                  bVar5 = true;
                }
              }
              lVar10 = lVar10 + 0x10;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          else {
            uVar15 = 0;
            if (uVar3 < 4) {
              lVar10 = 0;
            }
            else {
              lVar12 = 0;
              uVar8 = (uVar3 - 4 >> 2) + 1;
              uVar11 = (ulonglong)uVar8;
              uVar15 = uVar8 * 4;
              lVar10 = (ulonglong)uVar8 * 4;
              do {
                if (*(short *)(lVar12 + 8 + lVar4) == sVar2) {
                  fVar16 = fVar16 + *(float *)(lVar12 + 0xc + lVar4);
                  local_res8[0] = fVar16;
                  if (*(int *)(lVar12 + lVar4) == 0) {
                    fVar17 = *(float *)(lVar12 + 0xc + lVar4);
                  }
                  else {
                    bVar5 = true;
                  }
                }
                if (*(short *)(lVar12 + 0x18 + lVar4) == sVar2) {
                  fVar16 = fVar16 + *(float *)(lVar12 + 0x1c + lVar4);
                  local_res8[0] = fVar16;
                  if (*(int *)(lVar12 + 0x10 + lVar4) == 0) {
                    fVar17 = *(float *)(lVar12 + 0x1c + lVar4);
                  }
                  else {
                    bVar5 = true;
                  }
                }
                if (*(short *)(lVar4 + 0x28 + lVar12) == sVar2) {
                  fVar16 = fVar16 + *(float *)(lVar4 + 0x2c + lVar12);
                  local_res8[0] = fVar16;
                  if (*(int *)(lVar4 + 0x20 + lVar12) == 0) {
                    fVar17 = *(float *)(lVar4 + 0x2c + lVar12);
                  }
                  else {
                    bVar5 = true;
                  }
                }
                if (*(short *)(lVar4 + 0x38 + lVar12) == sVar2) {
                  fVar16 = fVar16 + *(float *)(lVar4 + 0x3c + lVar12);
                  local_res8[0] = fVar16;
                  if (*(int *)(lVar4 + 0x30 + lVar12) == 0) {
                    fVar17 = *(float *)(lVar4 + 0x3c + lVar12);
                  }
                  else {
                    bVar5 = true;
                  }
                }
                lVar12 = lVar12 + 0x40;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
              if (uVar3 <= uVar15) goto LAB_14536ca96;
            }
            piVar14 = (int *)(lVar10 * 0x10 + lVar4);
            uVar11 = (ulonglong)(uVar3 - uVar15);
            do {
              if ((short)piVar14[2] == sVar2) {
                fVar16 = fVar16 + (float)piVar14[3];
                local_res8[0] = fVar16;
                if (*piVar14 == 0) {
                  fVar17 = (float)piVar14[3];
                }
                else {
                  bVar5 = true;
                }
              }
              piVar14 = piVar14 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
LAB_14536ca96:
        cVar7 = FUN_14536cb30(param_1,sVar2,cVar1,local_res8);
        if ((bVar5) || (bVar5 = false, cVar7 != '\0')) {
          bVar5 = true;
        }
        if ((cVar1 == '\x04') && (bVar5)) {
          local_res8[0] = local_res8[0] - fVar17;
        }
        (**(code **)(**(longlong **)(param_1 + 0x50) + 8))
                  (*(longlong **)(param_1 + 0x50),sVar2,local_res8,4);
        psVar13 = psVar13 + 2;
      } while (psVar13 != (short *)(*plVar9 + (ulonglong)*(uint *)(plVar9 + 1) * 4));
    }
  }
  return;
}



// FUNCTION 14536cb30 FUN_14536cb30 body=430 status=ok
// SIG undefined FUN_14536cb30(void)

undefined8 FUN_14536cb30(longlong param_1,ushort param_2,char param_3,float *param_4)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  undefined8 uVar8;
  float fVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (param_3 == '\x03') {
    lVar4 = (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x78))();
    uVar8 = 0;
    if (lVar4 != 0) {
      for (lVar4 = *(longlong *)(lVar4 + 8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x10)) {
        puVar2 = *(ushort **)(lVar4 + 0x20);
        if (puVar2 != (ushort *)0x0) {
          uVar5 = 0;
          do {
            uVar6 = uVar5 + 1;
            if (puVar2[uVar6] == param_2) {
              pfVar7 = (float *)(((ulonglong)((uint)*puVar2 * 2 + 9) & 0xfffffff8) +
                                 (ulonglong)uVar5 * 0x10 + (longlong)puVar2);
              if ((pfVar7 != (float *)0x0) && (*(char *)(lVar1 + 0x20) != '\0')) {
                fVar9 = *pfVar7;
                goto LAB_14536cbc4;
              }
              break;
            }
            uVar5 = uVar6;
          } while (uVar6 < *puVar2);
        }
        fVar9 = 1.0;
LAB_14536cbc4:
        cVar3 = FUN_14536cce0(param_1,param_2,*(undefined4 *)(lVar4 + 0x38),fVar9);
        if (cVar3 != '\0') {
          uVar8 = 1;
          *param_4 = fVar9 * *param_4;
        }
      }
    }
  }
  else {
    lVar4 = (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x78))();
    uVar8 = 0;
    if (lVar4 != 0) {
      for (lVar4 = *(longlong *)(lVar4 + 8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x10)) {
        puVar2 = *(ushort **)(lVar4 + 0x20);
        if (puVar2 != (ushort *)0x0) {
          uVar5 = 0;
          do {
            uVar6 = uVar5 + 1;
            if (puVar2[uVar6] == param_2) {
              pfVar7 = (float *)(((ulonglong)((uint)*puVar2 * 2 + 9) & 0xfffffff8) +
                                 (ulonglong)uVar5 * 0x10 + (longlong)puVar2);
              if ((pfVar7 != (float *)0x0) && (*(char *)(lVar1 + 0x20) != '\0')) {
                fVar9 = *pfVar7;
                goto LAB_14536cc64;
              }
              break;
            }
            uVar5 = uVar6;
          } while (uVar6 < *puVar2);
        }
        fVar9 = 0.0;
LAB_14536cc64:
        cVar3 = FUN_14536cce0(param_1,param_2,*(undefined4 *)(lVar4 + 0x38),fVar9);
        if (cVar3 != '\0') {
          uVar8 = 1;
          *param_4 = fVar9 + *param_4;
        }
      }
    }
  }
  return uVar8;
}



// FUNCTION 14536cce0 FUN_14536cce0 body=165 status=ok
// SIG undefined FUN_14536cce0(void)

undefined8 FUN_14536cce0(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined2 uStack_e;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  uVar2 = *(uint *)(param_1 + 0x6c);
  if (uVar2 <= uVar1) {
    iVar3 = (uVar2 >> 1) + uVar2;
    if (uVar2 == 0) {
      iVar3 = 1;
    }
    cVar4 = FUN_14536b3c0((longlong *)(param_1 + 0x60),iVar3);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  if (uVar1 < *(uint *)(param_1 + 0x6c)) {
    uVar1 = *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = uVar1 + 1;
    puVar5 = (undefined8 *)((ulonglong)uVar1 * 0x10 + *(longlong *)(param_1 + 0x60));
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      *(undefined2 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = CONCAT44(param_3,2);
      puVar5[1] = CONCAT44(param_4,CONCAT22(uStack_e,param_2));
      return CONCAT71((int7)((ulonglong)puVar5 >> 8),puVar5 != (undefined8 *)0x0);
    }
  }
  return 0;
}



// FUNCTION 14536cd90 FUN_14536cd90 body=58 status=ok
// SIG undefined FUN_14536cd90(void)

void FUN_14536cd90(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_14c72f458);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  FUN_14536b6e0(param_1);
  return;
}



// FUNCTION 14536cdd0 FUN_14536cdd0 body=54 status=ok
// SIG undefined FUN_14536cdd0(void)

void FUN_14536cdd0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  FUN_14536b9f0();
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}



// FUNCTION 14536ce10 FUN_14536ce10 body=58 status=ok
// SIG undefined FUN_14536ce10(void)

void FUN_14536ce10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_14c72f458);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  FUN_14536b6e0(param_1);
  return;
}



// FUNCTION 14536ce50 FUN_14536ce50 body=54 status=ok
// SIG undefined FUN_14536ce50(void)

void FUN_14536ce50(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  FUN_14536b9f0();
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}



// FUNCTION 14536ce90 FUN_14536ce90 body=515 status=ok
// SIG undefined FUN_14536ce90(void)

undefined8 FUN_14536ce90(longlong *param_1,int *param_2,longlong param_3)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  char cVar8;
  void *pvVar9;
  byte *pbVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar3 = *(ushort *)*param_1;
  *param_1 = (longlong)((ushort *)*param_1 + 1);
  uVar14 = (uint)uVar3;
  if (uVar14 == 0) {
    return 1;
  }
  uVar13 = 0;
  if (uVar14 <= *(uint *)(param_3 + 100)) goto LAB_14536cf6f;
  uVar15 = *(uint *)(param_3 + 0x60);
  if (*(void **)(param_3 + 0x58) == (void *)0x0) {
    pvVar9 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar3 << 3);
    bVar7 = false;
    if (pvVar9 != (void *)0x0) {
      if ((*(void **)(param_3 + 0x58) != (void *)0x0) && (*(void **)(param_3 + 0x58) != pvVar9)) {
        uVar12 = uVar13;
        if ((ulonglong)uVar15 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar9 + uVar12 * 8) =
                 *(undefined8 *)(*(longlong *)(param_3 + 0x58) + uVar12 * 8);
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar15);
        }
        AK::MemoryMgr::Free(0,*(void **)(param_3 + 0x58));
      }
      goto LAB_14536cf4f;
    }
  }
  else {
    pvVar9 = AK::MemoryMgr::Realloc(0,*(void **)(param_3 + 0x58),(ulonglong)uVar3 << 3);
    if (pvVar9 == (void *)0x0) {
      bVar7 = false;
    }
    else {
LAB_14536cf4f:
      *(void **)(param_3 + 0x58) = pvVar9;
      bVar7 = true;
      *(uint *)(param_3 + 100) = uVar14;
    }
  }
  if (!bVar7) {
    return 0x34;
  }
LAB_14536cf6f:
  if (uVar3 != 0) {
    do {
      puVar6 = (undefined4 *)*param_1;
      uVar4 = *puVar6;
      *param_1 = (longlong)(puVar6 + 1);
      uVar1 = *(undefined1 *)(puVar6 + 1);
      *param_1 = (longlong)puVar6 + 5;
      cVar8 = *(char *)((longlong)puVar6 + 5);
      *param_1 = (longlong)puVar6 + 6;
      bVar2 = *(byte *)((longlong)puVar6 + 6);
      pbVar10 = (byte *)((longlong)puVar6 + 7);
      *param_1 = (longlong)pbVar10;
      uVar15 = bVar2 & 0x7f;
      while ((char)bVar2 < '\0') {
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        *param_1 = (longlong)pbVar10;
        uVar15 = bVar2 & 0x7f | uVar15 << 7;
      }
      uVar5 = *(undefined4 *)pbVar10;
      *param_1 = (longlong)(pbVar10 + 4);
      bVar2 = pbVar10[4];
      *param_1 = (longlong)(pbVar10 + 5);
      uVar3 = *(ushort *)(pbVar10 + 5);
      *param_1 = (longlong)(pbVar10 + 7);
      if ((cVar8 == '\x06') && (cVar8 = '\x02', DAT_14c791034 == 1)) {
        cVar8 = '\x05';
      }
      uVar11 = FUN_14536a770(param_3,uVar4,uVar1,cVar8,uVar15,uVar5,bVar2,pbVar10 + 7,(uint)uVar3);
      if ((int)uVar11 != 1) {
        return uVar11;
      }
      uVar15 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar15;
      *param_1 = *param_1 + (ulonglong)uVar3 * 0xc;
      *param_2 = *param_2 + (uint)uVar3 * -0xc;
    } while (uVar15 < uVar14);
  }
  return 1;
}



// FUNCTION 14536d0d0 FUN_14536d0d0 body=40 status=ok
// SIG undefined FUN_14536d0d0(void)

undefined4 * FUN_14536d0d0(undefined4 *param_1)

{
  param_1[3] = param_1[3] & 0xfffff800;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0xffffffff;
  param_1[1] = 0xffffffff;
  return param_1;
}



// FUNCTION 14536d100 FUN_14536d100 body=65 status=ok
// SIG undefined FUN_14536d100(void)

void FUN_14536d100(undefined4 *param_1)

{
  if ((((byte)param_1[3] & 0x7c) == 4) && (*(void **)(param_1 + 4) != (void *)0x0)) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 4));
  }
  param_1[1] = 0xffffffff;
  param_1[3] = param_1[3] & 0xfffff800;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 14536d150 FUN_14536d150 body=303 status=ok
// SIG undefined FUN_14536d150(void)

void FUN_14536d150(undefined4 *param_1,undefined4 param_2,undefined4 param_3,wchar_t *param_4,
                  undefined4 param_5,byte param_6,byte param_7)

{
  rsize_t _SizeInWords;
  wchar_t *_Dst;
  longlong lVar1;
  ulonglong _MaxCount;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((((byte)param_1[3] & 0x7c) == 4) && (*(void **)(param_1 + 4) != (void *)0x0)) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 4));
  }
  param_1[1] = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[3] = param_1[3] & 0xfffff800;
  param_1[6] = param_3;
  if (param_4 != (wchar_t *)0x0) {
    _MaxCount = 0xffffffffffffffff;
    do {
      uVar3 = _MaxCount;
      _MaxCount = uVar3 + 1;
    } while (param_4[_MaxCount] != L'\0');
    _SizeInWords = uVar3 + 2;
    _Dst = AK::MemoryMgr::Malloc(0,_SizeInWords * 2);
    *(wchar_t **)(param_1 + 4) = _Dst;
    if (_Dst != (wchar_t *)0x0) {
      lVar1 = -1;
      do {
        lVar2 = lVar1;
        lVar1 = lVar2 + 1;
      } while (param_4[lVar1] != L'\0');
      if (lVar2 + 2U <= _MaxCount) {
        lVar1 = -1;
        do {
          lVar2 = lVar1;
          lVar1 = lVar2 + 1;
        } while (param_4[lVar1] != L'\0');
        _MaxCount = lVar2 + 2;
      }
      wcsncpy_s(_Dst,_SizeInWords,param_4,_MaxCount);
      _Dst[_MaxCount] = L'\0';
    }
  }
  param_1[3] = param_1[3] & 0xfffff884;
  param_1[1] = param_5;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = param_1[3] | ((uint)param_6 * 2 | (uint)param_7) << 8 | 0x84;
  return;
}



// FUNCTION 14536d280 FUN_14536d280 body=88 status=ok
// SIG undefined FUN_14536d280(void)

void FUN_14536d280(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((((byte)*(undefined4 *)((longlong)param_1 + 0xc) & 0x7c) == 4) &&
     ((void *)param_1[2] != (void *)0x0)) {
    AK::MemoryMgr::Free(0,(void *)param_1[2]);
  }
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 3) = param_2;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 0x80;
  param_1[2] = 0;
  return;
}



// FUNCTION 14536d2e0 FUN_14536d2e0 body=97 status=ok
// SIG undefined FUN_14536d2e0(void)

void FUN_14536d2e0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((((byte)*(undefined4 *)((longlong)param_1 + 0xc) & 0x7c) == 4) &&
     ((void *)param_1[2] != (void *)0x0)) {
    AK::MemoryMgr::Free(0,(void *)param_1[2]);
  }
  uVar1 = *param_4;
  uVar2 = param_4[1];
  *(undefined4 *)(param_1 + 3) = param_2;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 0x80;
  param_1[2] = param_3;
  return;
}



// FUNCTION 14536d350 FUN_14536d350 body=87 status=ok
// SIG undefined FUN_14536d350(void)

void FUN_14536d350(undefined4 *param_1,undefined4 param_2)

{
  if ((((byte)param_1[3] & 0x7c) == 4) && (*(void **)(param_1 + 4) != (void *)0x0)) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 4));
  }
  param_1[3] = param_1[3] & 0xfffff808;
  param_1[3] = param_1[3] | 8;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[6] = 0xffffffff;
  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  return;
}



// FUNCTION 14536d3b0 FUN_14536d3b0 body=98 status=ok
// SIG undefined FUN_14536d3b0(void)

void FUN_14536d3b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = AK::MemoryMgr::Malloc(0,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar2 + 4) = 0;
    *(uint *)((longlong)puVar2 + 0xc) = *(uint *)((longlong)puVar2 + 0xc) & 0xfffff800;
    puVar2[2] = 0;
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)(puVar2 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 4) = 0xffffffff;
    uVar1 = param_1[1];
    *puVar2 = *param_1;
    puVar2[1] = uVar1;
    uVar1 = param_1[3];
    puVar2[2] = param_1[2];
    puVar2[3] = uVar1;
    puVar2[4] = param_1[4];
    return;
  }
  return;
}



// FUNCTION 14536d420 FUN_14536d420 body=46 status=ok
// SIG undefined FUN_14536d420(void)

void FUN_14536d420(undefined4 *param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 4) == 0) {
    FUN_1450b7ac0(DAT_14c790fe0,*param_1,param_2);
    return;
  }
  *param_2 = 0;
  param_2[1] = *(undefined8 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 2) = param_1[2];
  return;
}



// FUNCTION 14536d450 FUN_14536d450 body=55 status=ok
// SIG undefined FUN_14536d450(void)

void FUN_14536d450(undefined4 *param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    if (*(longlong *)(param_1 + 4) == 0) {
      FUN_1450b7c10(DAT_14c790fe0,*param_1,param_2);
    }
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14536d490 FUN_14536d490 body=37 status=ok
// SIG undefined FUN_14536d490(void)

undefined8 FUN_14536d490(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) == 0)) {
    *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x20) + '\x01';
    uVar1 = FUN_1450b8760(DAT_14c790fe0,param_1);
    return uVar1;
  }
  return 1;
}



// FUNCTION 14536d4c0 FUN_14536d4c0 body=41 status=ok
// SIG undefined FUN_14536d4c0(void)

void FUN_14536d4c0(undefined4 *param_1)

{
  if (((*(char *)(param_1 + 8) != '\0') && (param_1[2] != 0)) && (*(longlong *)(param_1 + 4) == 0))
  {
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -1;
    FUN_1450b87d0(DAT_14c790fe0,*param_1);
    return;
  }
  return;
}



// FUNCTION 14536d4f0 FUN_14536d4f0 body=61 status=ok
// SIG undefined FUN_14536d4f0(void)

int FUN_14536d4f0(double param_1)

{
  param_1 = (double)DAT_14c72f42c * param_1;
  if (0.0 < param_1) {
    return (int)(param_1 + 0.5);
  }
  return (int)(param_1 + -0.5);
}



// FUNCTION 14536d530 FUN_14536d530 body=173 status=ok
// SIG undefined FUN_14536d530(void)

void FUN_14536d530(longlong param_1,longlong param_2)

{
  byte *_Dst;
  byte *pbVar1;
  uint uVar2;
  
  _Dst = *(byte **)(param_1 + 0x68);
  uVar2 = *(uint *)(param_1 + 0x70);
  pbVar1 = _Dst;
  if (_Dst != _Dst + (ulonglong)uVar2 * 0x10) {
    do {
      if ((*(ulonglong *)(param_2 + (ulonglong)(*_Dst >> 6) * 8) >> (*_Dst & 0x3f) & 1) == 0) {
        _Dst = _Dst + 0x10;
      }
      else {
        if (_Dst < pbVar1 + (ulonglong)(uVar2 - 1) * 0x10) {
          memmove(_Dst,_Dst + 0x10,
                  (ulonglong)
                  ((int)(pbVar1 + (ulonglong)(uVar2 - 1) * 0x10) - (int)_Dst & 0xfffffff0));
          pbVar1 = *(byte **)(param_1 + 0x68);
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
        uVar2 = *(uint *)(param_1 + 0x70);
      }
    } while (_Dst != pbVar1 + (ulonglong)uVar2 * 0x10);
  }
  return;
}



// FUNCTION 14536d5e0 FUN_14536d5e0 body=96 status=ok
// SIG undefined FUN_14536d5e0(void)

undefined8 * FUN_14536d5e0(undefined8 *param_1)

{
  FUN_1450d4420();
  *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 199;
  *param_1 = &PTR_FUN_149d42940;
  param_1[1] = &PTR_FUN_149d42ba8;
  param_1[2] = &PTR_LAB_149d42bb0;
  param_1[5] = &PTR_LAB_149d42bd8;
  *(byte *)((longlong)param_1 + 0xe9) = *(byte *)((longlong)param_1 + 0xe9) & 0x80;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 14536d640 FUN_14536d640 body=185 status=ok
// SIG undefined FUN_14536d640(void)

void FUN_14536d640(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149d42940;
  param_1[1] = &PTR_FUN_149d42ba8;
  param_1[2] = &PTR_LAB_149d42bb0;
  param_1[5] = &PTR_LAB_149d42bd8;
  FUN_1450d7ac0();
  puVar1 = (undefined8 *)param_1[0x1c];
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      AK::MemoryMgr::Free(0,(void *)*puVar1);
      *puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    if ((void *)param_1[0x1c] != (void *)0x0) {
      AK::MemoryMgr::Free(2,(void *)param_1[0x1c]);
    }
    param_1[0x1c] = 0;
  }
  if ((void *)param_1[0x1b] != (void *)0x0) {
    AK::MemoryMgr::Free(2,(void *)param_1[0x1b]);
  }
  param_1[0x1b] = 0;
  FUN_1450d4570(param_1);
  return;
}



// FUNCTION 14536d700 FUN_14536d700 body=175 status=ok
// SIG undefined FUN_14536d700(void)

void FUN_14536d700(longlong param_1,ulonglong param_2,undefined8 param_3,float param_4,float param_5
                  )

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 in_R9;
  
  FUN_1450d61c0(param_1,param_2,param_3,in_R9,param_5);
  if ((param_4 == 0.0) && (param_5 == 0.0)) {
    pbVar1 = *(byte **)(param_1 + 0xd8);
    if (pbVar1 != (byte *)0x0) {
      uVar2 = 0;
      do {
        uVar3 = (int)uVar2 + 1;
        if (pbVar1[uVar3] == (byte)param_2) {
          if (pbVar1 + uVar2 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0) {
            return;
          }
          goto LAB_14536d77a;
        }
        uVar2 = (ulonglong)uVar3;
      } while (uVar3 < *pbVar1);
    }
  }
  else {
LAB_14536d77a:
    FUN_14536ff40(param_1 + 0xd8,param_2 & 0xff,CONCAT44(param_5,param_4));
  }
  return;
}



// FUNCTION 14536d7b0 FUN_14536d7b0 body=158 status=ok
// SIG undefined FUN_14536d7b0(void)

void FUN_14536d7b0(longlong param_1,byte param_2,undefined8 param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  
  FUN_1450d64c0();
  if ((param_4 == 0) && (param_5 == 0)) {
    pbVar1 = *(byte **)(param_1 + 0xd8);
    if (pbVar1 != (byte *)0x0) {
      uVar2 = 0;
      do {
        uVar3 = (int)uVar2 + 1;
        if (pbVar1[uVar3] == param_2) {
          if (pbVar1 + uVar2 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0) {
            return;
          }
          goto LAB_14536d81d;
        }
        uVar2 = (ulonglong)uVar3;
      } while (uVar3 < *pbVar1);
    }
  }
  else {
LAB_14536d81d:
    FUN_14536ff40(param_1 + 0xd8,param_2,CONCAT44(param_5,param_4));
  }
  return;
}



// FUNCTION 14536d850 FUN_14536d850 body=99 status=ok
// SIG undefined FUN_14536d850(void)

void FUN_14536d850(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_1450d8400(param_1,param_3);
  if (lVar1 != 0) {
    FUN_1450d5ad0(param_1,lVar1,param_2,param_5,param_4,param_6,param_7);
  }
  return;
}



// FUNCTION 14536d8c0 FUN_14536d8c0 body=71 status=ok
// SIG undefined FUN_14536d8c0(void)

void FUN_14536d8c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1450d8400();
  if (lVar1 != 0) {
    FUN_1450d5d40(param_1,lVar1,0,param_3,param_4);
  }
  return;
}



// FUNCTION 14536d910 FUN_14536d910 body=73 status=ok
// SIG undefined FUN_14536d910(void)

void FUN_14536d910(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x170))(param_1,0,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014536d952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 600))(param_1,param_2,param_3);
  return;
}



// FUNCTION 14536d960 FUN_14536d960 body=230 status=ok
// SIG undefined FUN_14536d960(void)

void FUN_14536d960(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)param_1[0x19];
  if ((plVar1 != (longlong *)0x0) &&
     (lVar5 = *plVar1, lVar5 != (ulonglong)*(uint *)(plVar1 + 1) * 0x10 + lVar5)) {
    do {
      pbVar2 = *(byte **)(*(longlong *)(lVar5 + 8) + 0x18);
      if (pbVar2 != (byte *)0x0) {
        uVar3 = 0;
        do {
          uVar4 = (int)uVar3 + 1;
          if (pbVar2[uVar4] == 0xb) {
            if (((float *)(pbVar2 + ((ulonglong)(*pbVar2 + 8) & 0xfffffff8) + uVar3 * 0x10) !=
                 (float *)0x0) &&
               (*(float *)(pbVar2 + ((ulonglong)(*pbVar2 + 8) & 0xfffffff8) + uVar3 * 0x10) != 1.0))
            {
              (**(code **)(*param_1 + 0x170))
                        (param_1,*(undefined8 *)(*(longlong *)(lVar5 + 8) + 0x10),param_2,param_3);
            }
            break;
          }
          uVar3 = (ulonglong)uVar4;
        } while (uVar4 < *pbVar2);
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != (ulonglong)*(uint *)(plVar1 + 1) * 0x10 + *plVar1);
  }
  return;
}



// FUNCTION 14536da50 FUN_14536da50 body=2343 status=ok
// SIG undefined FUN_14536da50(void)

undefined8
FUN_14536da50(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             float *param_5,longlong param_6,char param_7,longlong *param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined2 uVar5;
  byte *pbVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  float *pfVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 local_res10 [2];
  ulonglong local_38;
  undefined8 uStack_30;
  
  if ((*(byte *)(param_2 + 0xc3) & 2) == 0) {
    if (((*(uint *)(param_1 + 0x98) & 0x1f000) == 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
      bVar11 = 0;
    }
    else {
      uVar5 = FUN_1450d84c0(param_1,*param_4);
      *(undefined2 *)(param_2 + 0xc0) = uVar5;
      bVar11 = 2;
    }
    *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) & 0xfd;
    *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | bVar11;
  }
  bVar11 = *(byte *)(param_2 + 0xc2);
  if (((bVar11 & 0x40) == 0) &&
     (((*(byte *)(param_1 + 0xe9) & 0x10) != 0 || (*(longlong *)(param_1 + 0x78) == 0)))) {
    bVar11 = (*(byte *)(param_1 + 0xe9) ^ bVar11) & 0x20 ^ bVar11 | 0x40;
    *(byte *)(param_2 + 0xc2) = bVar11;
  }
  uVar9 = *(ulonglong *)(param_2 + 0x90);
  pbVar14 = (byte *)0x0;
  if ((((uVar9 >> 0x21 & 1) != 0) && (-1 < (char)bVar11)) &&
     (((*(uint *)(param_1 + 0x98) >> 0x14 & 1) != 0 || (*(longlong *)(param_1 + 0x78) == 0)))) {
    *(ulonglong *)(param_2 + 0x90) = uVar9 & 0xfffffffdffffffff;
    if ((*(ulonglong **)(param_1 + 0x58) == (ulonglong *)0x0) ||
       ((**(ulonglong **)(param_1 + 0x58) & 0x2000000000) == 0)) {
      pbVar6 = *(byte **)(param_1 + 0x90);
      local_res10[0] = 0x41400000;
      pbVar13 = pbVar14;
      if (pbVar6 != (byte *)0x0) {
        pbVar12 = pbVar14;
        do {
          uVar8 = (int)pbVar12 + 1;
          if (pbVar6[uVar8] == 0x21) {
            pbVar13 = pbVar6 + ((ulonglong)(*pbVar6 + 4) & 0xfffffffc) + (longlong)pbVar12 * 4;
            break;
          }
          pbVar12 = (byte *)(ulonglong)uVar8;
        } while (uVar8 < *pbVar6);
      }
      pbVar6 = (byte *)local_res10;
      if (pbVar13 != (byte *)0x0) {
        pbVar6 = pbVar13;
      }
      uVar17 = *(undefined4 *)pbVar6;
      local_res10[0] = uVar17;
    }
    else {
      uVar17 = FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0x25,param_4);
    }
    *(undefined4 *)(param_2 + 0x38) = uVar17;
    *(byte *)(param_2 + 0xc3) =
         (*(byte *)(param_1 + 0xe9) >> 6 ^ *(byte *)(param_2 + 0xc3)) & 1 ^
         *(byte *)(param_2 + 0xc3);
    bVar11 = *(byte *)(param_2 + 0xc2) | 0x80;
    *(byte *)(param_2 + 0xc2) = bVar11;
    uVar9 = *(ulonglong *)(param_2 + 0x90);
  }
  if ((bVar11 & 4) == 0) {
    if ((*(ulonglong *)(param_1 + 0x98) & 0x7f83c00000) == 0) {
      if (*(longlong *)(param_1 + 0x78) != 0) goto LAB_14536dd05;
      uVar9 = *(ulonglong *)(param_2 + 0x90);
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x3c) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
    *(undefined8 *)(param_2 + 0x54) = 0;
    if (*(longlong *)(param_1 + 0x88) == 0) {
      if ((*(ulonglong *)(param_1 + 0x98) & 0x7f83c00000) != 0) {
        *(undefined8 *)(param_2 + 0x7c) = 0;
        *(undefined8 *)(param_2 + 0x84) = 0;
      }
    }
    else {
      *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | 0xf;
      *(ulonglong *)(param_2 + 0x90) = uVar9 | 0xf000000000780000;
      *(undefined4 *)(param_2 + 0x7c) = **(undefined4 **)(param_1 + 0x88);
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 4);
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8);
      *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xc);
      uVar9 = *(ulonglong *)(param_2 + 0x90);
    }
    bVar11 = *(byte *)(param_2 + 0xc2) | 4;
    *(byte *)(param_2 + 0xc2) = bVar11;
  }
LAB_14536dd05:
  if (((bVar11 & 2) == 0) &&
     (((*(ulonglong *)(param_1 + 0x98) & 0x18000200000) != 0 || (*(longlong *)(param_1 + 0x78) == 0)
      ))) {
    bVar11 = bVar11 | 2;
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(byte *)(param_2 + 0xc2) = bVar11;
    *(byte *)(param_2 + 0xc2) = (bVar11 ^ *(byte *)(param_1 + 0xd5)) & 1 ^ bVar11;
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | 0x30;
    *(ulonglong *)(param_2 + 0x90) = uVar9 | 0x800000;
  }
  bVar11 = *(byte *)(param_2 + 0xc2);
  if (((bVar11 & 8) == 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
    if (param_7 == '\0') {
      local_38 = 0;
      uStack_30 = 0;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      if ((DAT_14c791034 == 1) && ((*(uint *)(param_2 + 0xa0) >> 0x18 & 1) != 0)) {
        uVar9 = 0x1000000;
        local_38 = 0x1000000;
      }
      else {
        uVar9 = 0;
      }
      *(undefined4 *)(param_2 + 0x34) = 0;
      if ((DAT_14c791034 == 1) && ((*(uint *)(param_2 + 0xa0) >> 0x1a & 1) != 0)) {
        uVar9 = uVar9 | 0x4000000;
        local_38 = uVar9;
      }
      *(undefined4 *)(param_2 + 0x30) = 0;
      if ((DAT_14c791034 == 1) && ((*(uint *)(param_2 + 0xa0) >> 0x19 & 1) != 0)) {
        local_38 = uVar9 | 0x2000000;
      }
      if (local_38 != 0) {
        FUN_14536d530(param_2,&local_38);
      }
    }
    *(ulonglong *)(param_2 + 0x90) = *(ulonglong *)(param_2 + 0x90) | 0x7000000;
    bVar11 = *(byte *)(param_2 + 0xc2) | 8;
    *(byte *)(param_2 + 0xc2) = bVar11;
  }
  if (((bVar11 & 0x10) == 0) &&
     (((*(uint *)(param_1 + 0x98) >> 0x1e & 1) != 0 || (*(longlong *)(param_1 + 0x78) == 0)))) {
    *(undefined4 *)(param_2 + 100) = 0;
    *(byte *)(param_2 + 0xc2) = bVar11 | 0x10;
    uVar17 = *(undefined4 *)(param_1 + 0xa0);
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | 0x100;
    *(undefined4 *)(param_2 + 0x8c) = uVar17;
  }
  FUN_1450d98b0(param_1,param_2,param_4);
  FUN_1450d8410(param_1,param_2,param_3,param_4);
  *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) & 0xfffffffffffffec0;
  *(ulonglong *)(param_2 + 0x90) = *(ulonglong *)(param_2 + 0x90) & 0xffffffff807ffff;
  if ((param_5 != (float *)0x0) && (pbVar6 = *(byte **)(param_1 + 0xd8), pbVar6 != (byte *)0x0)) {
    pbVar13 = pbVar14;
    do {
      uVar8 = (int)pbVar13 + 1;
      fVar19 = 0.0;
      if (pbVar6[uVar8] == 0) {
        pfVar15 = (float *)(pbVar6 + ((ulonglong)(*pbVar6 + 4) & 0xfffffffc) + (longlong)pbVar13 * 8
                           );
        if (pfVar15 != (float *)0x0) {
          fVar18 = 0.0;
          if (pfVar15[1] - *pfVar15 != 0.0) {
            DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
            fVar18 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                     (pfVar15[1] - *pfVar15);
          }
          *param_5 = fVar18 + *pfVar15 + *param_5;
        }
        break;
      }
      pbVar13 = (byte *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar6);
    pbVar6 = *(byte **)(param_1 + 0xd8);
    if (pbVar6 != (byte *)0x0) {
      pbVar13 = pbVar14;
      do {
        uVar8 = (int)pbVar13 + 1;
        if (pbVar6[uVar8] == 6) {
          pfVar15 = (float *)(pbVar6 + ((ulonglong)(*pbVar6 + 4) & 0xfffffffc) +
                                       (longlong)pbVar13 * 8);
          if (pfVar15 != (float *)0x0) {
            fVar18 = 0.0;
            if (pfVar15[1] - *pfVar15 != 0.0) {
              DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
              fVar18 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                       (pfVar15[1] - *pfVar15);
            }
            param_5[1] = fVar18 + *pfVar15 + param_5[1];
          }
          break;
        }
        pbVar13 = (byte *)(ulonglong)uVar8;
      } while (uVar8 < *pbVar6);
    }
    pbVar6 = *(byte **)(param_1 + 0xd8);
    if (pbVar6 != (byte *)0x0) {
      pbVar13 = pbVar14;
      do {
        uVar8 = (int)pbVar13 + 1;
        if (pbVar6[uVar8] == 2) {
          pfVar15 = (float *)(pbVar6 + ((ulonglong)(*pbVar6 + 4) & 0xfffffffc) +
                                       (longlong)pbVar13 * 8);
          if (pfVar15 != (float *)0x0) {
            fVar18 = 0.0;
            if (pfVar15[1] - *pfVar15 != 0.0) {
              DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
              fVar18 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                       (pfVar15[1] - *pfVar15);
            }
            param_5[2] = fVar18 + *pfVar15 + param_5[2];
          }
          break;
        }
        pbVar13 = (byte *)(ulonglong)uVar8;
      } while (uVar8 < *pbVar6);
    }
    pbVar6 = *(byte **)(param_1 + 0xd8);
    if (pbVar6 != (byte *)0x0) {
      pbVar13 = pbVar14;
      do {
        uVar8 = (int)pbVar13 + 1;
        if (pbVar6[uVar8] == 3) {
          pfVar15 = (float *)(pbVar6 + ((ulonglong)(*pbVar6 + 4) & 0xfffffffc) +
                                       (longlong)pbVar13 * 8);
          if (pfVar15 != (float *)0x0) {
            fVar18 = 0.0;
            if (pfVar15[1] - *pfVar15 != 0.0) {
              DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
              fVar18 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                       (pfVar15[1] - *pfVar15);
            }
            param_5[3] = fVar18 + *pfVar15 + param_5[3];
          }
          break;
        }
        pbVar13 = (byte *)(ulonglong)uVar8;
      } while (uVar8 < *pbVar6);
    }
    pbVar6 = *(byte **)(param_1 + 0xd8);
    if (pbVar6 != (byte *)0x0) {
      do {
        uVar8 = (int)pbVar14 + 1;
        if (pbVar6[uVar8] == 4) {
          pfVar15 = (float *)(pbVar6 + ((ulonglong)(*pbVar6 + 4) & 0xfffffffc) +
                                       (longlong)pbVar14 * 8);
          if (pfVar15 != (float *)0x0) {
            if (pfVar15[1] - *pfVar15 != 0.0) {
              DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
              fVar19 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                       (pfVar15[1] - *pfVar15);
            }
            param_5[4] = fVar19 + *pfVar15 + param_5[4];
          }
          break;
        }
        pbVar14 = (byte *)(ulonglong)uVar8;
      } while (uVar8 < *pbVar6);
    }
  }
  if (((param_6 != 0) && (*(longlong *)(param_1 + 0x58) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x58) + 0x20) != '\0')) {
    uVar8 = *(uint *)(param_6 + 0x148);
    uVar2 = *(uint *)(param_6 + 0x14c);
    if (uVar2 <= uVar8) {
      iVar3 = (uVar2 >> 1) + uVar2;
      if (uVar2 == 0) {
        iVar3 = 1;
      }
      cVar4 = FUN_145089fb0(param_6,iVar3);
      if (cVar4 == '\0') {
        return 0x34;
      }
    }
    if (*(uint *)(param_6 + 0x14c) <= uVar8) {
      return 0x34;
    }
    plVar10 = (longlong *)
              (*(longlong *)(param_6 + 0x140) + (ulonglong)*(uint *)(param_6 + 0x148) * 0x28);
    *(uint *)(param_6 + 0x148) = *(uint *)(param_6 + 0x148) + 1;
    if (plVar10 == (longlong *)0x0) {
      return 0x34;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(undefined4 *)(plVar10 + 2) = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    lVar7 = param_1 + 8;
    if (param_1 == 0) {
      lVar7 = 0;
    }
    plVar10[1] = lVar7;
    *plVar10 = param_1;
    FUN_14507dbc0(param_1 + 0x48,plVar10);
  }
  if ((param_7 == '\0') || (*(longlong *)(param_1 + 0x80) == 0)) {
    plVar10 = *(longlong **)(param_1 + 0x78);
    if ((plVar10 == (longlong *)0x0) || (param_8 == plVar10)) goto LAB_14536e30d;
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0x78);
    if ((plVar10 != (longlong *)0x0) && (param_8 != plVar10)) {
      (**(code **)(*plVar10 + 0x140))(plVar10,param_2,param_3,param_4,param_5,param_6,0,param_8);
    }
    plVar10 = *(longlong **)(param_1 + 0x80);
    param_7 = '\0';
  }
  (**(code **)(*plVar10 + 0x140))(plVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_14536e30d:
  plVar10 = *(longlong **)(param_1 + 0xe0);
  if (plVar10 != (longlong *)0x0) {
    puVar16 = (undefined8 *)*plVar10;
    puVar1 = puVar16 + *(uint *)(plVar10 + 1);
    for (; puVar16 != puVar1; puVar16 = puVar16 + 1) {
      FUN_145541ed0(*puVar16,param_1,param_2,param_3,param_4,param_6);
    }
  }
  return 1;
}



// FUNCTION 14536e380 FUN_14536e380 body=1027 status=ok
// SIG undefined FUN_14536e380(void)

int FUN_14536e380(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  float fVar13;
  undefined2 local_res10 [4];
  undefined1 local_res18 [8];
  longlong *local_res20;
  
  lVar2 = *(longlong *)(param_2 + 0x88);
  iVar8 = 2;
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) != 0)) {
    uVar12 = *(uint *)(param_2 + 0x38);
    while (uVar12 != 0) {
      while( true ) {
        uVar12 = uVar12 - 1;
        if (uVar12 < 0x20) break;
        *(uint *)(param_2 + 0x38) = uVar12;
      }
      if ((*(uint *)(param_2 + 0x7c) >> ((ulonglong)uVar12 & 0x3f) & 1) != 0) break;
      *(uint *)(param_2 + 0x38) = uVar12;
    }
    local_res10[0] = 0;
    iVar5 = *(int *)(*(longlong *)(lVar2 + 0x18) + 8);
    plVar11 = local_res20;
    while (local_res20 = plVar11, iVar5 != 0) {
      local_res20 = *(longlong **)(lVar2 + 0x18);
      uVar9 = (ulonglong)*(uint *)(local_res20 + 1);
      lVar2 = *local_res20;
      if (*(longlong *)(lVar2 + -0x10 + uVar9 * 0x28) == 0) {
        local_res20 = plVar11;
        lVar10 = FUN_1450c38a0(*(undefined8 *)(lVar2 + -0x28 + uVar9 * 0x28),
                               *(undefined8 *)(param_2 + 0x10),local_res10,local_res18,
                               lVar2 + (uVar9 * 5 + -4) * 8,lVar2 + (uVar9 * 5 + -3) * 8);
        if (lVar10 != 0) {
          *(undefined2 *)(param_2 + 0x3c + (ulonglong)(*(int *)(param_2 + 0x38) - 1) * 2) =
               local_res10[0];
          iVar7 = *(int *)(lVar10 + 0x20);
          LOCK();
          piVar1 = (int *)(lVar10 + 0x24);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))();
          }
          iVar5 = FUN_1450c2a70(*(undefined8 *)(lVar2 + -0x28 + uVar9 * 0x28));
          fVar13 = (float)FUN_1450c2a80(*(undefined8 *)(lVar2 + -0x28 + uVar9 * 0x28));
          if ((iVar7 != 0) &&
             (plVar11 = (longlong *)FUN_145370170(*(undefined8 *)(param_2 + 0x88),param_2,iVar7),
             plVar11 != (longlong *)0x0)) {
            uVar6 = FUN_14536f650(param_1);
            FUN_145372980(plVar11,uVar6,*(undefined8 *)(param_2 + 0xa8),param_2 + 0x98);
            FUN_145372a70(plVar11,*(longlong *)(param_2 + 0x88) + 0x28);
            iVar8 = (uint)DAT_14c72f434 * 10;
            iVar7 = iVar8;
            if ((iVar5 - 3U & 0xfffffffd) == 0) {
              fVar13 = (float)DAT_14c72f42c * fVar13 * 0.001;
              if (fVar13 <= 0.0) {
                fVar3 = -0.5;
              }
              else {
                fVar3 = 0.5;
              }
              iVar7 = (int)(fVar3 + fVar13);
              if (iVar7 < iVar8) {
                iVar7 = iVar8;
              }
            }
            iVar8 = FUN_145370250(*(undefined8 *)(param_2 + 0x88),param_2,iVar7,plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0x14);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
          }
          break;
        }
        uVar12 = *(int *)(param_2 + 0x38) - 1;
        *(uint *)(param_2 + 0x38) = uVar12;
        while (uVar12 != 0) {
          while( true ) {
            uVar12 = uVar12 - 1;
            if (uVar12 < 0x20) break;
            *(uint *)(param_2 + 0x38) = uVar12;
          }
          if ((*(uint *)(param_2 + 0x7c) >> ((ulonglong)uVar12 & 0x3f) & 1) != 0) break;
          *(uint *)(param_2 + 0x38) = uVar12;
        }
        plVar11 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_14538eb00(*plVar11 + ((ulonglong)*(uint *)(plVar11 + 1) * 5 + -5) * 8);
        *(int *)(plVar11 + 1) = (int)plVar11[1] + -1;
      }
      else {
        FUN_14538ec90();
        FUN_14553fee0(*(undefined8 *)(lVar2 + -0x10 + uVar9 * 0x28),
                      *(undefined8 *)(lVar2 + -8 + uVar9 * 0x28),&local_res20);
        plVar11 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_14538eb00(*plVar11 + ((ulonglong)*(uint *)(plVar11 + 1) * 5 + -5) * 8);
        plVar4 = local_res20;
        *(int *)(plVar11 + 1) = (int)plVar11[1] + -1;
        lVar2 = *(longlong *)(param_2 + 0x88);
        if (local_res20 != (longlong *)0x0) {
          FUN_14538ec90(local_res20);
        }
        lVar10 = *(longlong *)(lVar2 + 0x18);
        *(longlong **)(lVar2 + 0x18) = plVar4;
        if (lVar10 != 0) {
          FUN_14538eca0();
        }
        if (*(longlong *)(*(longlong *)(param_2 + 0x88) + 0x18) == 0) {
          iVar8 = 3;
          if (local_res20 != (longlong *)0x0) {
            FUN_14538eca0();
          }
          break;
        }
        if (local_res20 != (longlong *)0x0) {
          FUN_14538eca0();
        }
      }
      lVar2 = *(longlong *)(param_2 + 0x88);
      plVar11 = local_res20;
      iVar5 = *(int *)(*(longlong *)(lVar2 + 0x18) + 8);
    }
    if (*(longlong *)(*(longlong *)(param_2 + 0x88) + 0x18) == 0) {
      if (iVar8 == 3) {
        return 1;
      }
    }
    else if (iVar8 != 1) {
      if (iVar8 == 3) {
        return 1;
      }
      *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18) = 0;
      FUN_14538eca0();
    }
  }
  return iVar8;
}



// FUNCTION 14536e790 FUN_14536e790 body=88 status=ok
// SIG undefined FUN_14536e790(void)

void FUN_14536e790(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = param_1[0xf];
  while( true ) {
    if (lVar1 == 0) {
      (**(code **)(*param_1 + 0x90))(param_1,param_2);
      return;
    }
    cVar2 = FUN_1450d5200(lVar1,*(undefined8 *)(param_2 + 0x30));
    if (cVar2 != '\0') break;
    lVar1 = *(longlong *)(lVar1 + 0x78);
  }
  return;
}



// FUNCTION 14536e7f0 FUN_14536e7f0 body=378 status=ok
// SIG undefined FUN_14536e7f0(void)

int FUN_14536e7f0(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  iVar9 = 1;
  cVar1 = *(char *)*param_2;
  *param_2 = (char *)*param_2 + 1;
  if (param_4 == '\0') {
    if (cVar1 == '\0') {
      uVar10 = *(ulonglong *)(param_1 + 0x98) & 0xfffffffffffe0fff;
    }
    else {
      uVar10 = *(ulonglong *)(param_1 + 0x98) | 0x1f000;
    }
    *(ulonglong *)(param_1 + 0x98) = uVar10;
  }
  pbVar7 = (byte *)*param_2;
  bVar2 = *pbVar7;
  *param_2 = pbVar7 + 1;
  if (bVar2 == 0) {
    return 1;
  }
  bVar3 = pbVar7[1];
  uVar11 = 0;
  *param_2 = pbVar7 + 2;
  if (bVar2 != 0) {
    do {
      puVar8 = (undefined1 *)*param_2;
      uVar4 = *puVar8;
      *param_2 = puVar8 + 1;
      iVar6 = *(int *)(puVar8 + 1);
      *param_2 = puVar8 + 5;
      cVar1 = puVar8[5];
      *param_2 = puVar8 + 6;
      cVar5 = puVar8[6];
      *param_2 = puVar8 + 7;
      FUN_145373c00(param_1 + 0xa8,uVar4,cVar5 != '\0');
      if ((((cVar5 == '\0') && (iVar6 != 0)) && (param_4 == '\0')) &&
         (iVar9 = FUN_1450d65c0(param_1,uVar4,iVar6,cVar1 != '\0',0), iVar9 != 1))
      goto LAB_14536e928;
      uVar11 = uVar11 + 1;
    } while (uVar11 < bVar2);
  }
  if (param_4 == '\0') {
LAB_14536e928:
    FUN_1450d68a0(param_1,bVar3,0xffffffff);
  }
  return iVar9;
}



// FUNCTION 14536e970 FUN_14536e970 body=279 status=ok
// SIG undefined FUN_14536e970(void)

ulonglong FUN_14536e970(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  cVar1 = *(char *)*param_2;
  *param_2 = (char *)*param_2 + 1;
  uVar6 = *(ulonglong *)(param_1 + 0x98) | 0x40000000000;
  if (cVar1 == '\0') {
    uVar6 = *(ulonglong *)(param_1 + 0x98) & 0xfffffbffffffffff;
  }
  *(ulonglong *)(param_1 + 0x98) = uVar6;
  bVar2 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  if (bVar2 != 0) {
    uVar6 = FUN_1450d6640(param_1,(uint)bVar2,0);
    if (((int)uVar6 == 1) && (uVar8 = 0, uVar7 = uVar6 & 0xffffffff, bVar2 != 0)) {
      do {
        uVar6 = uVar7;
        puVar5 = (undefined1 *)*param_2;
        uVar3 = *puVar5;
        *param_2 = puVar5 + 1;
        iVar4 = *(int *)(puVar5 + 1);
        *param_2 = puVar5 + 5;
        cVar1 = puVar5[5];
        *param_2 = puVar5 + 6;
        if (iVar4 != 0) {
          uVar7 = FUN_1450d66e0(param_1,uVar3,iVar4,cVar1 != '\0',0);
          uVar6 = uVar7 & 0xffffffff;
          if ((int)uVar7 != 1) {
            return uVar7;
          }
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar6;
      } while (uVar8 < bVar2);
    }
    return uVar6;
  }
  return 1;
}



// FUNCTION 14536ea90 FUN_14536ea90 body=290 status=ok
// SIG undefined FUN_14536ea90(void)

longlong FUN_14536ea90(longlong param_1,ulonglong param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined2 uVar5;
  longlong lVar6;
  longlong *local_res8;
  
  if (((*(uint *)(param_1 + 0x98) & 0x1f000) == 0) &&
     (*(longlong **)(param_1 + 0x78) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014536ead2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x1b0))();
    return lVar6;
  }
  lVar6 = FUN_1453741b0(param_1 + 0xb8,param_2,param_4);
  uVar5 = 0;
  if (lVar6 == 0) {
    local_res8 = (longlong *)0x0;
  }
  else {
    FUN_145373680(lVar6,&local_res8);
    plVar4 = local_res8;
    if (local_res8 != (longlong *)0x0) {
      plVar3 = (longlong *)*param_3;
      local_res8 = (longlong *)0x0;
      *param_3 = (longlong)plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      uVar5 = FUN_1450d7ab0(param_1,param_2 & 0xffffffff,param_4);
      goto LAB_14536eb7d;
    }
  }
  plVar4 = (longlong *)*param_3;
  *param_3 = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
LAB_14536eb7d:
  *(undefined2 *)(param_3 + 1) = uVar5;
  if (local_res8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_res8 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_res8 + 0x18))();
    }
  }
  return param_1;
}



// FUNCTION 14536ebc0 FUN_14536ebc0 body=173 status=ok
// SIG undefined FUN_14536ebc0(void)

void FUN_14536ebc0(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *local_res8;
  
  if (((*(uint *)(param_1 + 0x98) & 0x1f000) == 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x78), plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014536ebfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x1b8))(plVar3,param_2,(ulonglong)param_3);
    return;
  }
  *param_4 = 0xffffffff;
  lVar4 = FUN_1453741b0(param_1 + 0xb8);
  if (lVar4 != 0) {
    FUN_145373680(lVar4,&local_res8);
    if (local_res8 != (longlong *)0x0) {
      if (param_3 < *(uint *)(local_res8 + 10)) {
        uVar5 = *(undefined4 *)(local_res8[9] + (ulonglong)param_3 * 4);
      }
      else {
        uVar5 = 0;
      }
      *param_4 = uVar5;
      LOCK();
      piVar1 = (int *)((longlong)local_res8 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_res8 + 0x18))(local_res8);
      }
    }
  }
  return;
}



// FUNCTION 14536ec70 FUN_14536ec70 body=389 status=ok
// SIG undefined FUN_14536ec70(void)

int FUN_14536ec70(longlong param_1,longlong param_2,char param_3,char param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 1;
  if (((param_3 == '\0') ||
      (iVar3 = FUN_1450da210(param_1,*(byte *)(param_2 + 0x24) & 1,*(undefined8 *)(param_2 + 0x10)),
      iVar3 == 1)) && (*(char *)(param_2 + 0x28) == '\0')) {
    if ((*(longlong *)(param_1 + 0x70) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xd8) & 1) != 0)) {
      if (param_4 == '\0') {
        iVar3 = FUN_1450da4a0(param_1,param_2,param_3);
      }
    }
    else {
      iVar3 = FUN_1450da670(param_1,param_2,param_3);
    }
    *(byte *)(param_2 + 0x28) = *(byte *)(param_1 + 0xd6) >> 2 & 1;
  }
  uVar2 = *(ushort *)(param_2 + 0x24);
  uVar1 = *(undefined1 *)(param_2 + 0x28);
  *(longlong *)(param_2 + 0x10) = param_1;
  iVar5 = iVar3;
  if (((uVar2 & 1) != 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
    *(undefined1 *)(param_2 + 0x28) = 0;
    *(ushort *)(param_2 + 0x24) = uVar2 & 0xfffe;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x108))
                      (*(longlong **)(param_1 + 0x80),param_2,param_3,param_4);
    if ((iVar4 != 1) && ((iVar5 = iVar4, iVar4 == 0x50 && (iVar5 = iVar3, iVar3 == 1)))) {
      iVar5 = 0x50;
    }
  }
  iVar3 = iVar5;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    *(undefined1 *)(param_2 + 0x28) = uVar1;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x108))
                      (*(longlong **)(param_1 + 0x78),param_2,param_3,param_4);
    if (((iVar4 != 1) && (iVar3 = iVar4, iVar4 == 0x50)) && (iVar3 = iVar5, iVar5 == 1)) {
      iVar3 = 0x50;
    }
  }
  return iVar3;
}



// FUNCTION 14536ee00 FUN_14536ee00 body=177 status=ok
// SIG undefined FUN_14536ee00(void)

void FUN_14536ee00(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  FUN_1450da300(param_1,*(byte *)((longlong)param_2 + 0x24) & 1,param_2[2]);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xd8) & 1) == 0) {
      FUN_1450da9e0(param_1,*param_2);
    }
    else {
      FUN_1450da620();
    }
  }
  uVar1 = *(undefined1 *)(param_2 + 5);
  param_2[2] = param_1;
  if (((*(ushort *)((longlong)param_2 + 0x24) & 1) != 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
    *(undefined1 *)(param_2 + 5) = 0;
    *(ushort *)((longlong)param_2 + 0x24) = *(ushort *)((longlong)param_2 + 0x24) & 0xfffe;
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x110))(*(longlong **)(param_1 + 0x80),param_2);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    *(undefined1 *)(param_2 + 5) = uVar1;
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x110))(*(longlong **)(param_1 + 0x78),param_2);
  }
  return;
}



// FUNCTION 14536ef40 FUN_14536ef40 body=78 status=ok
// SIG undefined FUN_14536ef40(void)

char FUN_14536ef40(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  do {
    if (param_1 == 0) {
      return '\0';
    }
    cVar2 = param_2 == param_1;
    if (((!(bool)cVar2) && (!bVar1)) && (*(longlong *)(param_1 + 0x80) != 0)) {
      cVar2 = FUN_14508d150(*(longlong *)(param_1 + 0x80),param_2);
      bVar1 = true;
    }
    param_1 = *(longlong *)(param_1 + 0x78);
  } while (cVar2 == '\0');
  return cVar2;
}



// FUNCTION 14536ef90 FUN_14536ef90 body=63 status=ok
// SIG undefined FUN_14536ef90(void)

byte FUN_14536ef90(longlong param_1,uint *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_1 + 0xd4);
  while (((bVar1 & 4) == 0 && (lVar2 = *(longlong *)(param_1 + 0x78), lVar2 != 0))) {
    bVar1 = *(byte *)(lVar2 + 0xd4);
    param_1 = lVar2;
  }
  *param_2 = *(byte *)(param_1 + 0xe8) >> 3 & 7;
  return *(byte *)(param_1 + 0xe9) & 0xf;
}



// FUNCTION 14536efd0 FUN_14536efd0 body=230 status=ok
// SIG undefined FUN_14536efd0(void)

undefined8 FUN_14536efd0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  plVar5 = (longlong *)param_1[0x1c];
  if ((longlong *)param_1[0x1c] == (longlong *)0x0) {
    plVar5 = AK::MemoryMgr::Malloc(2,0x10);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar6 = plVar5;
    }
    param_1[0x1c] = (longlong)plVar6;
    plVar5 = plVar6;
  }
  if ((plVar5 != (longlong *)0x0) &&
     ((uVar2 = *(uint *)(plVar5 + 1), uVar2 < *(uint *)((longlong)plVar5 + 0xc) ||
      ((cVar4 = FUN_1453700b0(plVar5), cVar4 != '\0' && (uVar2 < *(uint *)((longlong)plVar5 + 0xc)))
      )))) {
    uVar2 = *(uint *)(plVar5 + 1);
    *(uint *)(plVar5 + 1) = uVar2 + 1;
    puVar1 = (undefined8 *)(*plVar5 + (ulonglong)uVar2 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_2;
      (**(code **)(*param_1 + 0x180))(param_1,0,0);
      return 1;
    }
  }
  pvVar3 = (void *)param_1[0x1c];
  if ((pvVar3 != (void *)0x0) && (*(int *)((longlong)pvVar3 + 8) == 0)) {
    AK::MemoryMgr::Free(2,pvVar3);
    param_1[0x1c] = 0;
  }
  return 0x34;
}



// FUNCTION 14536f0c0 FUN_14536f0c0 body=146 status=ok
// SIG undefined FUN_14536f0c0(void)

undefined8 FUN_14536f0c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Dst;
  
  plVar1 = (longlong *)param_1[0x1c];
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)*plVar1;
    for (_Dst = plVar2; _Dst != plVar2 + *(uint *)(plVar1 + 1); _Dst = _Dst + 1) {
      if (*_Dst == param_2) {
        if (_Dst < plVar2 + (*(uint *)(plVar1 + 1) - 1)) {
          memmove(_Dst,_Dst + 1,
                  (ulonglong)((int)(plVar2 + (*(uint *)(plVar1 + 1) - 1)) - (int)_Dst & 0xfffffff8))
          ;
        }
        *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
        (**(code **)(*param_1 + 0x180))(param_1,0,0);
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 14536f160 FUN_14536f160 body=640 status=ok
// SIG undefined FUN_14536f160(void)

int FUN_14536f160(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res10 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  
  if ((*(byte *)(param_2 + 0x310) & 4) != 0) {
    return 1;
  }
  iVar4 = 1;
  if ((*(byte *)(param_2 + 0x30c) & 1) == 0) {
    local_88 = *(undefined8 *)(param_2 + 0x10);
    pbVar1 = *(byte **)(param_1 + 0x90);
    pfVar8 = (float *)0x0;
    local_80 = *(undefined4 *)(param_2 + 0x34);
    local_res10[0] = DAT_14c72f55c;
    local_78 = 0;
    local_70 = 0xff;
    local_68 = 0xff;
    local_60 = 0;
    pfVar7 = pfVar8;
    if (pbVar1 != (byte *)0x0) {
      pfVar5 = pfVar8;
      do {
        uVar6 = (int)pfVar5 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 0x3b) {
          pfVar7 = (float *)(pbVar1 + (longlong)pfVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar5 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    fVar11 = 0.0;
    pfVar5 = local_res10;
    if (pfVar7 != (float *)0x0) {
      pfVar5 = pfVar7;
    }
    fVar10 = *pfVar5;
    local_res10[0] = fVar10;
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28,6);
    if (cVar2 != '\0') {
      fVar11 = (float)FUN_1450c0e90(param_1 + 0x28,6);
    }
    if ((*(ulonglong **)(param_1 + 0x58) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x58) >> 6 & 1) != 0)) {
      fVar9 = (float)FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,6,&local_88);
      fVar11 = fVar11 + fVar9;
    }
    pfVar7 = *(float **)(param_1 + 0xd8);
    fVar10 = fVar10 + fVar11;
    if (pfVar7 != (float *)0x0) {
      do {
        uVar6 = (int)pfVar8 + 1;
        if (*(char *)((ulonglong)uVar6 + (longlong)pfVar7) == ';') {
          pfVar7 = (float *)((longlong)pfVar7 +
                            (longlong)pfVar8 * 8 + ((ulonglong)(*(byte *)pfVar7 + 4) & 0xfffffffc));
          if (pfVar7 != (float *)0x0) {
            fVar11 = 0.0;
            if (pfVar7[1] - *pfVar7 != 0.0) {
              DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
              fVar11 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
                       (pfVar7[1] - *pfVar7);
            }
            fVar10 = fVar10 + fVar11 + *pfVar7;
          }
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *(byte *)pfVar7);
    }
    if (0.0 < fVar10) {
      if (*(int *)(param_2 + 0x90) == 0) {
        iVar4 = FUN_14536f3e0(param_1,pfVar7,param_2);
        if (iVar4 == 1) {
          return 3;
        }
      }
      else {
        iVar3 = FUN_14536d4f0((double)fVar10);
        *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + iVar3;
      }
    }
  }
  else {
    *(byte *)(param_2 + 0x30c) = *(byte *)(param_2 + 0x30c) & 0xfe;
  }
  return iVar4;
}



// FUNCTION 14536f3e0 FUN_14536f3e0 body=465 status=ok
// SIG undefined FUN_14536f3e0(void)

undefined4 FUN_14536f3e0(longlong param_1,float param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar6 = *(undefined8 **)(param_3 + 0x22);
  uVar8 = 0x34;
  uVar7 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    lVar4 = FUN_14538ec50();
    bVar9 = lStack_50 != 0;
    lStack_50 = lVar4;
    if (bVar9) {
      FUN_14538eca0();
    }
    if (lStack_50 == 0) {
      uVar8 = 2;
      goto LAB_14536f56e;
    }
    puVar6 = &local_68;
  }
  plVar5 = (longlong *)FUN_145370170(puVar6,param_3,*(undefined4 *)(param_1 + 0x20));
  if (plVar5 != (longlong *)0x0) {
    lVar4 = *(longlong *)(param_3 + 0xc2);
    plVar5[0x19] = lVar4;
    *(byte *)((longlong)plVar5 + 0xcc) = (byte)((ulonglong)lVar4 >> 0x20) | 1;
    *(undefined4 *)(plVar5 + 0x1a) = *param_3;
    iVar3 = FUN_14536f5c0(param_1);
    if (iVar3 == 2) {
      uVar7 = 1;
    }
    else {
      cVar2 = FUN_1450dab50(param_1);
      if (cVar2 != '\0') {
        uVar7 = 2;
      }
    }
    FUN_145372980(plVar5,uVar7,*(undefined8 *)(param_3 + 0x2a),param_3 + 0x26);
    if (*(longlong *)(param_3 + 0x22) != 0) {
      FUN_145372a70(plVar5,*(longlong *)(param_3 + 0x22) + 0x28);
    }
    if ((double)DAT_14c72f42c * (double)param_2 <= 0.0) {
      uVar10 = 0xbfe00000;
    }
    else {
      uVar10 = 0x3fe00000;
    }
    uVar8 = FUN_145370250(puVar6,param_3,
                          (int)((double)((ulonglong)uVar10 << 0x20) +
                               (double)DAT_14c72f42c * (double)param_2),plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0x14);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
LAB_14536f56e:
  FUN_14538dec0(&local_40);
  if (lStack_50 != 0) {
    FUN_14538eca0();
  }
  return uVar8;
}



// FUNCTION 14536f5c0 FUN_14536f5c0 body=136 status=ok
// SIG undefined FUN_14536f5c0(void)

/* WARNING: Removing unreachable block (ram,0x00014536f61f) */

undefined4 FUN_14536f5c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  while ((lVar1 = lVar2, lVar1 != 0 && ((*(byte *)(param_1 + 0xd5) & 0x20) == 0))) {
    lVar2 = *(longlong *)(lVar1 + 0x78);
    param_1 = lVar1;
  }
  pbVar3 = *(byte **)(param_1 + 0x90);
  pbVar4 = (byte *)0x0;
  local_res8[0] = (int)DAT_14c72f528;
  if (pbVar3 != (byte *)0x0) {
    while( true ) {
      uVar5 = (int)pbVar4 + 1;
      if (((byte *)(ulonglong)uVar5)[(longlong)pbVar3] == 0x2e) break;
      pbVar4 = (byte *)(ulonglong)uVar5;
      if (*pbVar3 <= uVar5) {
        return (int)DAT_14c72f528;
      }
    }
    pbVar4 = pbVar3 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc);
  }
  pbVar3 = (byte *)local_res8;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = pbVar4;
  }
  return *(undefined4 *)pbVar3;
}



// FUNCTION 14536f650 FUN_14536f650 body=70 status=ok
// SIG undefined FUN_14536f650(void)

undefined4 FUN_14536f650(undefined8 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_14536f5c0();
  if (iVar3 == 2) {
    return 1;
  }
  cVar2 = FUN_1450dab50(param_1);
  uVar1 = 0;
  if (cVar2 != '\0') {
    uVar1 = 2;
  }
  return uVar1;
}



// FUNCTION 14536f6a0 FUN_14536f6a0 body=24 status=ok
// SIG undefined FUN_14536f6a0(void)

bool FUN_14536f6a0(void)

{
  int iVar1;
  
  iVar1 = FUN_14536f5c0();
  return iVar1 == 1;
}



// FUNCTION 14536f6c0 FUN_14536f6c0 body=1247 status=ok
// SIG undefined FUN_14536f6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14536f6c0(longlong param_1,char *param_2,undefined8 param_3,char *param_4,undefined8 param_5,
             undefined4 param_6)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  uint local_res8 [2];
  uint local_a8 [2];
  uint local_a0 [2];
  uint local_98 [2];
  uint local_90 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  char local_70;
  char local_68;
  undefined8 local_60;
  
  pbVar1 = *(byte **)(param_1 + 0x90);
  puVar8 = (uint *)0x0;
  local_res8[0] = (uint)DAT_14c72f544;
  puVar7 = puVar8;
  if (pbVar1 != (byte *)0x0) {
    puVar5 = puVar8;
    do {
      uVar6 = (int)puVar5 + 1;
      if (pbVar1[uVar6] == 0x35) {
        puVar7 = (uint *)(pbVar1 + (longlong)puVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      puVar5 = (uint *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
  }
  puVar5 = local_res8;
  if (puVar7 != (uint *)0x0) {
    puVar5 = puVar7;
  }
  if ((*puVar5 >> ((byte)param_2[1] & 0x1f) & 1) != 0) {
    if (*param_4 != '\0') {
      if ((*(longlong *)(param_1 + 0x78) != 0) &&
         (uVar3 = FUN_14536f6c0(*(longlong *)(param_1 + 0x78),param_2,param_3,param_4,param_5,
                                param_6), (int)uVar3 != 1)) {
        return uVar3;
      }
      *param_4 = '\0';
    }
    if (((*param_2 + 0x80U & 0xcf) == 0) && (*param_2 != -0x50)) {
      local_68 = param_2[4];
    }
    else {
      local_68 = -1;
    }
    pbVar1 = *(byte **)(param_1 + 0x90);
    local_res8[0] = DAT_14c72f528._4_4_;
    local_60 = 0;
    local_88 = param_5;
    local_80 = param_6;
    local_78 = (int)param_3;
    local_70 = param_2[1];
    puVar7 = puVar8;
    if (pbVar1 != (byte *)0x0) {
      puVar5 = puVar8;
      do {
        uVar6 = (int)puVar5 + 1;
        if (pbVar1[uVar6] == 0x2f) {
          puVar7 = (uint *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)puVar5 * 4)
          ;
          break;
        }
        puVar5 = (uint *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    fVar12 = 0.0;
    puVar5 = local_res8;
    if (puVar7 != (uint *)0x0) {
      puVar5 = puVar7;
    }
    uVar6 = *puVar5;
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28,0xb);
    if (cVar2 != '\0') {
      fVar12 = (float)FUN_1450c0e90(param_1 + 0x28,0xb);
    }
    if ((*(ulonglong **)(param_1 + 0x58) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x58) >> 0xb & 1) != 0)) {
      fVar11 = (float)FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0xb,&local_88);
      fVar12 = fVar12 + fVar11;
    }
    if (fVar12 <= 0.0) {
      fVar12 = fVar12 - 0.5;
    }
    else {
      fVar12 = fVar12 + 0.5;
    }
    iVar9 = (int)fVar12 + (byte)param_2[4] + uVar6;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else if (0x7f < iVar9) {
      iVar9 = 0x7f;
    }
    pbVar1 = *(byte **)(param_1 + 0x90);
    local_a8[0] = DAT_14c72f530._4_4_;
    puVar7 = puVar8;
    if (pbVar1 != (byte *)0x0) {
      puVar5 = puVar8;
      do {
        uVar6 = (int)puVar5 + 1;
        if (pbVar1[uVar6] == 0x31) {
          puVar7 = (uint *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)puVar5 * 4)
          ;
          break;
        }
        puVar5 = (uint *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    puVar5 = local_a8;
    if (puVar7 != (uint *)0x0) {
      puVar5 = puVar7;
    }
    local_a0[0] = (uint)DAT_14c72f538;
    puVar7 = puVar8;
    if (pbVar1 != (byte *)0x0) {
      puVar4 = puVar8;
      do {
        uVar6 = (int)puVar4 + 1;
        if (pbVar1[uVar6] == 0x32) {
          puVar7 = (uint *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)puVar4 * 4)
          ;
          break;
        }
        puVar4 = (uint *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    puVar4 = local_a0;
    if (puVar7 != (uint *)0x0) {
      puVar4 = puVar7;
    }
    if ((iVar9 <= (int)*puVar4) && ((int)*puVar5 <= iVar9)) {
      local_res8[0] = (uint)DAT_14c72f530;
      puVar7 = puVar8;
      if (pbVar1 != (byte *)0x0) {
        puVar5 = puVar8;
        do {
          uVar6 = (int)puVar5 + 1;
          if (pbVar1[uVar6] == 0x30) {
            puVar7 = (uint *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) +
                                       (longlong)puVar5 * 4);
            break;
          }
          puVar5 = (uint *)(ulonglong)uVar6;
        } while (uVar6 < *pbVar1);
      }
      fVar12 = 0.0;
      puVar5 = local_res8;
      if (puVar7 != (uint *)0x0) {
        puVar5 = puVar7;
      }
      uVar6 = *puVar5;
      cVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28,0xc);
      if (cVar2 != '\0') {
        fVar12 = (float)FUN_1450c0e90(param_1 + 0x28,0xc);
      }
      if ((*(ulonglong **)(param_1 + 0x58) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x58) >> 0xc & 1) != 0)) {
        fVar11 = (float)FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0xc,&local_88);
        fVar12 = fVar12 + fVar11;
      }
      if (fVar12 <= 0.0) {
        fVar12 = fVar12 - 0.5;
      }
      else {
        fVar12 = fVar12 + 0.5;
      }
      iVar10 = (int)fVar12 + (byte)param_2[5] + uVar6;
      if (iVar10 < 1) {
        iVar10 = 1;
      }
      else if (0x7f < iVar10) {
        iVar10 = 0x7f;
      }
      pbVar1 = *(byte **)(param_1 + 0x90);
      local_98[0] = DAT_14c72f538._4_4_;
      puVar7 = puVar8;
      if (pbVar1 != (byte *)0x0) {
        puVar5 = puVar8;
        do {
          uVar6 = (int)puVar5 + 1;
          if (pbVar1[uVar6] == 0x33) {
            puVar7 = (uint *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) +
                                       (longlong)puVar5 * 4);
            break;
          }
          puVar5 = (uint *)(ulonglong)uVar6;
        } while (uVar6 < *pbVar1);
      }
      puVar5 = local_98;
      if (puVar7 != (uint *)0x0) {
        puVar5 = puVar7;
      }
      local_90[0] = _DAT_14c72f540;
      if (pbVar1 != (byte *)0x0) {
        puVar7 = puVar8;
        do {
          uVar6 = (int)puVar7 + 1;
          if (pbVar1[uVar6] == 0x34) {
            puVar8 = (uint *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) +
                                       (longlong)puVar7 * 4);
            break;
          }
          puVar7 = (uint *)(ulonglong)uVar6;
        } while (uVar6 < *pbVar1);
      }
      puVar7 = local_90;
      if (puVar8 != (uint *)0x0) {
        puVar7 = puVar8;
      }
      if ((iVar10 <= (int)*puVar7) && ((int)*puVar5 <= iVar10)) {
        param_2[4] = (char)iVar9;
        param_2[5] = (char)iVar10;
        return 1;
      }
    }
  }
  return 0x52;
}



// FUNCTION 14536fba0 FUN_14536fba0 body=108 status=ok
// SIG undefined FUN_14536fba0(void)

void FUN_14536fba0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  FUN_1450d5680();
  plVar2 = *(longlong **)(param_1 + 0xe0);
  if (plVar2 != (longlong *)0x0) {
    puVar3 = (undefined8 *)*plVar2;
    puVar1 = puVar3 + *(uint *)(plVar2 + 1);
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      FUN_145541e20(*puVar3,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 14536fc10 FUN_14536fc10 body=7 status=ok
// SIG undefined FUN_14536fc10(void)

void FUN_14536fc10(void)

{
  DAT_14c7fdcb8 = DAT_14c7fdcb8 + 1;
  return;
}



// FUNCTION 14536fc20 FUN_14536fc20 body=341 status=ok
// SIG undefined FUN_14536fc20(void)

undefined8 FUN_14536fc20(longlong param_1,longlong *param_2)

{
  size_t sVar1;
  byte bVar2;
  void *pvVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint uVar6;
  
  bVar2 = *(byte *)*param_2;
  *param_2 = (longlong)((byte *)*param_2 + 1);
  pvVar3 = *(void **)(param_1 + 0x90);
  if (bVar2 == 0) {
    if (pvVar3 != (void *)0x0) {
      AK::MemoryMgr::Free(0,pvVar3);
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
LAB_14536fcc6:
    bVar2 = *(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
    pvVar3 = *(void **)(param_1 + 0xd8);
    if (bVar2 == 0) {
      if (pvVar3 != (void *)0x0) {
        AK::MemoryMgr::Free(2,pvVar3);
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
    }
    else {
      uVar6 = bVar2 + 4 & 0xfffffffc;
      pbVar4 = AK::MemoryMgr::Realloc(2,pvVar3,(ulonglong)(uVar6 + (uint)bVar2 * 8));
      if (pbVar4 == (byte *)0x0) goto LAB_14536fd34;
      *pbVar4 = bVar2;
      memcpy(pbVar4 + 1,(void *)*param_2,(ulonglong)bVar2);
      *param_2 = *param_2 + (ulonglong)bVar2;
      sVar1 = (ulonglong)bVar2 * 8;
      memcpy(pbVar4 + uVar6,(void *)*param_2,sVar1);
      *param_2 = *param_2 + sVar1;
      *(byte **)(param_1 + 0xd8) = pbVar4;
    }
    uVar5 = 1;
  }
  else {
    uVar6 = bVar2 + 4 & 0xfffffffc;
    pbVar4 = AK::MemoryMgr::Realloc(0,pvVar3,(ulonglong)(uVar6 + (uint)bVar2 * 4));
    if (pbVar4 != (byte *)0x0) {
      *pbVar4 = bVar2;
      memcpy(pbVar4 + 1,(void *)*param_2,(ulonglong)bVar2);
      *param_2 = *param_2 + (ulonglong)bVar2;
      sVar1 = (ulonglong)bVar2 * 4;
      memcpy(pbVar4 + uVar6,(void *)*param_2,sVar1);
      *param_2 = *param_2 + sVar1;
      *(byte **)(param_1 + 0x90) = pbVar4;
      goto LAB_14536fcc6;
    }
LAB_14536fd34:
    uVar5 = 2;
  }
  return uVar5;
}



// FUNCTION 14536fd80 FUN_14536fd80 body=438 status=ok
// SIG undefined FUN_14536fd80(void)

undefined8 FUN_14536fd80(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  
  pbVar6 = (byte *)*param_2;
  bVar1 = *pbVar6;
  *param_2 = pbVar6 + 1;
  bVar2 = pbVar6[1];
  *param_2 = pbVar6 + 2;
  *(byte *)((longlong)param_1 + 0xd4) =
       (bVar1 << 2 ^ *(byte *)((longlong)param_1 + 0xd4)) & 0x10 ^
       *(byte *)((longlong)param_1 + 0xd4);
  uVar5 = *(ushort *)*param_2;
  *param_2 = (ushort *)*param_2 + 1;
  *(ushort *)((longlong)param_1 + 0xd2) =
       (*(ushort *)((longlong)param_1 + 0xd2) ^ uVar5) & 0x3ff ^
       *(ushort *)((longlong)param_1 + 0xd2);
  puVar7 = (undefined1 *)*param_2;
  uVar3 = *puVar7;
  *param_2 = puVar7 + 1;
  bVar4 = puVar7[1];
  *param_2 = puVar7 + 2;
  bVar10 = bVar4 << 3;
  bVar9 = (bVar10 ^ *(byte *)((longlong)param_1 + 0xe9)) & 0x10 ^
          *(byte *)((longlong)param_1 + 0xe9);
  bVar9 = (bVar9 ^ bVar10) & 0x20 ^ bVar9;
  *(byte *)((longlong)param_1 + 0xe9) = (bVar9 ^ bVar10) & 0x40 ^ bVar9;
  bVar9 = (bVar2 << 3 ^ *(byte *)(param_1 + 0x1d)) & 0x38 ^ *(byte *)(param_1 + 0x1d);
  *(byte *)(param_1 + 0x1d) = (bVar9 ^ bVar2) & 7 ^ bVar9;
  FUN_1450d5e40(param_1,bVar1 & 1);
  FUN_1450d5ee0(param_1,bVar1 >> 1 & 1);
  (**(code **)(*param_1 + 0x260))(param_1,uVar3);
  FUN_1450d4a70(param_1);
  *(byte *)((longlong)param_1 + 0xd6) =
       (bVar1 >> 1 ^ *(byte *)((longlong)param_1 + 0xd6)) & 4 ^ *(byte *)((longlong)param_1 + 0xd6);
  FUN_1450d5f60(param_1,bVar1 >> 4 & 1);
  if ((bVar4 & 1) == 0) {
    uVar8 = param_1[0x13] & 0xffffffffffefffff;
  }
  else {
    uVar8 = param_1[0x13] | 0x100000;
  }
  param_1[0x13] = uVar8;
  (**(code **)(*param_1 + 0x180))(param_1,0,0);
  return 1;
}



// FUNCTION 14536ff40 FUN_14536ff40 body=294 status=ok
// SIG undefined FUN_14536ff40(void)

undefined8 FUN_14536ff40(longlong *param_1,byte param_2,undefined8 param_3)

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
        pbVar5 = pbVar1 + sVar3 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        if (pbVar5 != (byte *)0x0) goto LAB_14537003f;
        if (pbVar1 == (byte *)0x0) goto LAB_14536ffac;
        break;
      }
      sVar3 = (ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
    _Size = (size_t)*pbVar1;
  }
LAB_14536ffac:
  iVar2 = (int)_Size;
  uVar6 = iVar2 + 5;
  pcVar4 = AK::MemoryMgr::Malloc(2,(ulonglong)((uVar6 & 0xfffffffc) + 8 + iVar2 * 8));
  if (pcVar4 != (char *)0x0) {
    if (*param_1 != 0) {
      memcpy(pcVar4 + 1,(void *)(*param_1 + 1),_Size);
      memcpy(pcVar4 + ((ulonglong)uVar6 & 0xfffffffc),
             (void *)(((ulonglong)(iVar2 + 4) & 0xfffffffc) + *param_1),_Size * 8);
      AK::MemoryMgr::Free(2,(void *)*param_1);
    }
    pcVar4[iVar2 + 1] = param_2;
    *pcVar4 = (char)_Size + '\x01';
    *param_1 = (longlong)pcVar4;
    pbVar5 = (byte *)(pcVar4 + _Size * 8 + ((ulonglong)uVar6 & 0xfffffffc));
    if (pbVar5 != (byte *)0x0) {
LAB_14537003f:
      *(undefined8 *)pbVar5 = param_3;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 145370070 FUN_145370070 body=52 status=ok
// SIG undefined FUN_145370070(void)

undefined8 FUN_145370070(undefined8 param_1,ulonglong param_2)

{
  FUN_14536d640();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1453700b0 FUN_1453700b0 body=186 status=ok
// SIG undefined FUN_1453700b0(void)

undefined8 FUN_1453700b0(longlong *param_1)

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
      goto LAB_14537014d;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_14537014d:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145370170 FUN_145370170 body=224 status=ok
// SIG undefined FUN_145370170(void)

longlong * FUN_145370170(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uStackX_c;
  
  plVar1 = (longlong *)FUN_145371c90(0x503,param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 0x1d) = *(undefined4 *)(param_1 + 0x20);
    FUN_145372610(plVar1,param_2 + 0x38);
    (**(code **)(*plVar1 + 0x20))(plVar1,CONCAT44(uStackX_c,param_3) & 0xffffff00ffffffff);
    FUN_145372660(plVar1,*(undefined8 *)(param_2 + 8));
    FUN_145369fe0(plVar1,*(byte *)(param_2 + 0x310) >> 2 & 1);
    FUN_145372720(plVar1,*(undefined4 *)(param_2 + 0x90));
    FUN_1453726d0(plVar1,*(byte *)(param_2 + 0x310) >> 1 & 1);
    FUN_145372650(plVar1,*(undefined4 *)(param_2 + 0x80));
    if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
      plVar1[0x1f] = **(longlong **)(param_2 + 0x18);
    }
  }
  return plVar1;
}



// FUNCTION 145370250 FUN_145370250 body=355 status=ok
// SIG undefined FUN_145370250(void)

int FUN_145370250(undefined8 *param_1,longlong param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = AK::MemoryMgr::Malloc(0,0x48);
  if (pvVar3 == (void *)0x0) {
    return 0x34;
  }
  plVar4 = (longlong *)FUN_1450807a0(pvVar3,*(undefined8 *)(param_2 + 0x10));
  if (plVar4 != (longlong *)0x0) {
    iVar2 = FUN_145372380(param_4,*param_1,plVar4);
    if ((iVar2 == 1) && (iVar2 = FUN_1453723f0(param_4,param_1[1],plVar4), iVar2 == 1)) {
      FUN_145372460(param_4,param_1[2]);
      iVar2 = (**(code **)(*param_4 + 0x28))(param_4,0xf,*(int *)(param_2 + 0x84) + param_3,0,0);
      if (iVar2 == 1) {
        plVar4[1] = (longlong)param_4;
        *(undefined4 *)(plVar4 + 6) = *(undefined4 *)(param_2 + 0x34);
        *(undefined8 *)((longlong)plVar4 + 0x24) = *(undefined8 *)(param_2 + 0x28);
        *(undefined4 *)((longlong)plVar4 + 0x2c) = *(undefined4 *)(param_2 + 0x30);
        piVar1 = *(int **)(param_2 + 0x20);
        if (*(longlong *)((longlong)plVar4 + 0x1c) != 0) {
          FUN_144d4a460();
        }
        if (piVar1 != (int *)0x0) {
          *piVar1 = *piVar1 + 1;
        }
        *(int **)((longlong)plVar4 + 0x1c) = piVar1;
        FUN_145083930(DAT_14c790fd8,plVar4,0,0);
        return 1;
      }
      (**(code **)(*plVar4 + 8))(plVar4,0);
      AK::MemoryMgr::Free(0,plVar4);
      return iVar2;
    }
    (**(code **)(*plVar4 + 8))(plVar4,0);
    AK::MemoryMgr::Free(0,plVar4);
  }
  return 0x34;
}



// FUNCTION 1453703d0 FUN_1453703d0 body=168 status=ok
// SIG undefined FUN_1453703d0(void)

longlong * FUN_1453703d0(void)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = AK::MemoryMgr::Malloc(2,0x118);
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  FUN_1450ee3a0(plVar3);
  *plVar3 = (longlong)&PTR_FUN_149d42c58;
  plVar3[1] = (longlong)&PTR_FUN_149d42ec0;
  plVar3[2] = (longlong)&PTR_LAB_149d42ec8;
  plVar3[5] = (longlong)&PTR_LAB_149d42ef0;
  FUN_14536d0d0(plVar3 + 0x1e);
  if (*(code **)(*plVar3 + 0x70) != FUN_145370480) {
    iVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
      goto LAB_145370457;
    }
  }
  bVar1 = 0;
LAB_145370457:
  *(byte *)((longlong)plVar3 + 0xd4) = *(byte *)((longlong)plVar3 + 0xd4) & 0x7f | bVar1;
  return plVar3;
}



// FUNCTION 145370480 FUN_145370480 body=6 status=ok
// SIG undefined FUN_145370480(void)

undefined8 FUN_145370480(void)

{
  return 3;
}



// FUNCTION 145370490 FUN_145370490 body=55 status=ok
// SIG undefined FUN_145370490(void)

void FUN_145370490(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1453704d0();
  if (iVar1 == 1) {
    FUN_1450c5dc0(param_1,param_1 + 0xf0,param_2);
  }
  return;
}



// FUNCTION 1453704d0 FUN_1453704d0 body=595 status=ok
// SIG undefined FUN_1453704d0(void)

undefined4 FUN_1453704d0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined4 uStackX_14;
  undefined6 uStack_4e;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  if (*(char *)(param_2 + 0x98) == '\0') {
    return 1;
  }
  if ((*(char *)(param_2 + 0x98) == -0x70) && (*(char *)(param_2 + 0x9d) != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    return 1;
  }
  uVar4 = FUN_14536f650();
  uVar1 = *(undefined1 *)(param_2 + 0x99);
  if (((*(char *)(param_2 + 0x98) + 0x80U & 0xcf) == 0) && (*(char *)(param_2 + 0x98) != -0x50)) {
    uVar7 = *(undefined1 *)(param_2 + 0x9c);
  }
  else {
    uVar7 = 0xff;
  }
  lVar2 = *(longlong *)(param_2 + 0xa8);
  puVar6 = *(undefined8 **)(lVar2 + 0x30);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = AK::MemoryMgr::Malloc(0,0x20);
    if (puVar6 == (undefined8 *)0x0) goto LAB_1453705d8;
    if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
      puVar6[2] = 0;
      *(undefined2 *)(puVar6 + 3) = 0xffff;
    }
    *puVar6 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 **)(lVar2 + 0x30) = puVar6;
  }
  if (*(undefined8 **)(lVar2 + 0x28) == (undefined8 *)0x0) {
    *(undefined8 **)(lVar2 + 0x20) = puVar6;
  }
  else {
    **(undefined8 **)(lVar2 + 0x28) = puVar6;
  }
  puVar6 = *(undefined8 **)(lVar2 + 0x30);
  *(undefined8 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = *puVar6;
  *puVar6 = 0;
  *(int *)(lVar2 + 0x44) = *(int *)(lVar2 + 0x44) + 1;
  lVar2 = *(longlong *)(lVar2 + 0x28);
  if ((undefined4 *)(lVar2 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(lVar2 + 8) = uVar4;
    *(longlong *)(lVar2 + 0x10) = param_1;
    *(ulonglong *)(lVar2 + 0x18) = CONCAT62(uStack_4e,CONCAT11(uVar1,uVar7));
    LOCK();
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    UNLOCK();
  }
LAB_1453705d8:
  uVar1 = *(undefined1 *)(param_2 + 0x99);
  if (((*(char *)(param_2 + 0x98) + 0x80U & 0xcf) == 0) && (*(char *)(param_2 + 0x98) != -0x50)) {
    uVar7 = *(undefined1 *)(param_2 + 0x9c);
  }
  else {
    uVar7 = 0xff;
  }
  local_38 = FUN_1450e98e0(param_2);
  local_48 = *(undefined8 *)(param_2 + 0x10);
  uStackX_14 = CONCAT31(uStackX_14._1_3_,1);
  local_20 = 0;
  local_40 = 0;
  local_30 = uVar1;
  local_28 = uVar7;
  FUN_14507f370(g_pGameSyncMgr,CONCAT44(uStackX_14,0x85),&local_48);
  uStackX_14 = CONCAT31(uStackX_14._1_3_,1);
  powf(2.0,((float)*(byte *)(param_2 + 0x9c) - 69.0) * 0.083333336);
  FUN_14507f370(g_pGameSyncMgr,CONCAT44(uStackX_14,0x84),&local_48);
  iVar5 = FUN_14536f6a0(param_1);
  uVar4 = 1;
  if (iVar5 != 1) {
    uVar4 = 0x52;
  }
  return uVar4;
}



// FUNCTION 145370740 FUN_145370740 body=65 status=ok
// SIG undefined FUN_145370740(void)

void FUN_145370740(longlong param_1,int *param_2)

{
  if (((*param_2 == 0) && (*(char *)((longlong)param_2 + 0x1f) != '\0')) &&
     (*(char *)((longlong)param_2 + 0x1d) != '\0')) {
    FUN_145354bf0(param_1 + 0x28,0);
  }
  FUN_145370a70(param_1,param_2);
  return;
}



// FUNCTION 145370790 FUN_145370790 body=84 status=ok
// SIG undefined FUN_145370790(void)

void FUN_145370790(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(char *)((longlong)param_2 + 0x1f) == '\0') || (*(char *)((longlong)param_2 + 0x1d) == '\0')
     ) goto LAB_1453707cb;
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_1453707c4:
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_1453707cb;
      goto LAB_1453707c4;
    }
    uVar2 = 1;
  }
  FUN_145354bf0(param_1 + 0x28,uVar2);
LAB_1453707cb:
  FUN_145370a70(param_1,param_2);
  return;
}



// FUNCTION 145370810 FUN_145370810 body=205 status=ok
// SIG undefined FUN_145370810(void)

undefined8
FUN_145370810(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res10;
  undefined4 local_res18 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar2 = (**(code **)(*param_1 + 0x70))();
  if (iVar2 != 3) {
    lVar1 = param_1[4];
    uVar3 = (**(code **)(*param_1 + 0x70))(param_1);
    FUN_1450b8920(DAT_14c790fe0,(int)lVar1,3,uVar3);
    return 0x5b;
  }
  local_res10 = local_res10 + 4;
  uVar4 = FUN_1450b6c70(&local_res10,local_res18,local_38);
  if ((int)uVar4 == 1) {
    if (local_20 == 0) {
      local_48 = local_30;
      uStack_44 = uStack_2c;
      uStack_40 = uStack_28;
      uStack_3c = uStack_24;
      FUN_14536d280(param_1 + 0x1e,local_34,&local_48);
    }
    else {
      FUN_14536d350(param_1 + 0x1e,local_30);
    }
    uVar4 = FUN_1450d7ad0(param_1,&local_res10,local_res18,param_5);
  }
  return uVar4;
}



// FUNCTION 145370910 FUN_145370910 body=156 status=ok
// SIG undefined FUN_145370910(void)

void FUN_145370910(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  
  if (((byte)*(undefined4 *)(param_1 + 0xfc) & 0x7c) == 4) {
    if (param_5 == '\0') {
      uVar2 = *(uint *)(param_3 + 1);
      if ((*(uint *)((longlong)param_3 + 0xc) <= uVar2) &&
         (cVar3 = FUN_145370c10(param_3), cVar3 == '\0')) {
        return;
      }
      if (*(uint *)((longlong)param_3 + 0xc) <= uVar2) {
        return;
      }
      uVar2 = *(uint *)(param_3 + 1);
      *(uint *)(param_3 + 1) = uVar2 + 1;
      lVar4 = *param_3;
    }
    else {
      uVar2 = *(uint *)(param_2 + 1);
      if ((*(uint *)((longlong)param_2 + 0xc) <= uVar2) &&
         (cVar3 = FUN_145370c10(param_2), cVar3 == '\0')) {
        return;
      }
      if (*(uint *)((longlong)param_2 + 0xc) <= uVar2) {
        return;
      }
      uVar2 = *(uint *)(param_2 + 1);
      *(uint *)(param_2 + 1) = uVar2 + 1;
      lVar4 = *param_2;
    }
    plVar1 = (longlong *)(lVar4 + (ulonglong)uVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = param_1 + 0xf0;
    }
  }
  return;
}



// FUNCTION 1453709b0 FUN_1453709b0 body=177 status=ok
// SIG undefined FUN_1453709b0(void)

ulonglong FUN_1453709b0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_res20 [2];
  
  uVar2 = FUN_14536da50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar3 = uVar2;
  if (*(char *)(param_4 + 0x18) != -1) {
    local_res20[0] = 0;
    cVar1 = FUN_1450daab0(param_1,local_res20);
    uVar3 = uVar2 & 0xffffffff;
    if (cVar1 != '\0') {
      *(float *)(param_2 + 4) =
           ((float)*(byte *)(param_4 + 0x20) - (float)local_res20[0]) * 100.0 +
           *(float *)(param_2 + 4);
    }
  }
  return uVar3;
}



// FUNCTION 145370a70 FUN_145370a70 body=304 status=ok
// SIG undefined FUN_145370a70(void)

void FUN_145370a70(longlong param_1,int *param_2)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if ((lVar2 != 0) && (0 < *(short *)(lVar2 + 0xd0))) {
    if (*param_2 != 4) {
      FUN_1450edc20();
      return;
    }
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) {
      lVar2 = *(longlong *)(lVar2 + 0x18);
      iVar3 = 0;
      if (-1 < param_2[0xe]) {
        iVar3 = param_2[0xe];
      }
      for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x70)) {
        if (((*(longlong *)(param_2 + 2) == 0) ||
            (*(longlong *)(param_2 + 2) == *(longlong *)(lVar2 + 8))) &&
           ((param_2[4] == 0 || (param_2[4] == *(int *)(lVar2 + 0x268))))) {
          (**(code **)(*(longlong *)(lVar2 + -0x18) + 0x30))
                    (lVar2 + -0x18,iVar3,*(byte *)(param_2 + 0xf) >> 1 & 1);
        }
      }
      return;
    }
    fVar1 = (float)param_2[0xe];
    fVar4 = 0.0;
    if ((0.0 <= fVar1) && (fVar4 = fVar1, 1.0 <= fVar1)) {
      fVar4 = 1.0;
    }
    for (lVar2 = *(longlong *)(lVar2 + 0x18); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x70)) {
      if (((*(longlong *)(param_2 + 2) == 0) ||
          (*(longlong *)(param_2 + 2) == *(longlong *)(lVar2 + 8))) &&
         ((param_2[4] == 0 || (param_2[4] == *(int *)(lVar2 + 0x268))))) {
        (**(code **)(*(longlong *)(lVar2 + -0x18) + 0x40))
                  (lVar2 + -0x18,fVar4,*(byte *)(param_2 + 0xf) >> 1 & 1);
      }
    }
  }
  return;
}



// FUNCTION 145370ba0 FUN_145370ba0 body=110 status=ok
// SIG undefined FUN_145370ba0(void)

undefined8 * FUN_145370ba0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d42c58;
  param_1[1] = &PTR_FUN_149d42ec0;
  param_1[2] = &PTR_LAB_149d42ec8;
  param_1[5] = &PTR_LAB_149d42ef0;
  FUN_14536d100(param_1 + 0x1e);
  FUN_1450ee3f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 145370c10 FUN_145370c10 body=186 status=ok
// SIG undefined FUN_145370c10(void)

undefined8 FUN_145370c10(longlong *param_1)

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
      goto LAB_145370cad;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_145370cad:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145370cf0 FUN_145370cf0 body=82 status=ok
// SIG undefined FUN_145370cf0(void)

undefined8 * FUN_145370cf0(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1455431a0(puVar1,param_1);
    *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) & 0xfc;
    *puVar1 = &PTR_FUN_149d42f80;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145370d50 FUN_145370d50 body=391 status=ok
// SIG undefined FUN_145370d50(void)

undefined4 FUN_145370d50(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  sVar3 = *(short *)((longlong)param_1 + 0x34);
  lVar4 = *(longlong *)(param_2 + 0x40);
  if ((sVar3 == 0x102) || (sVar3 == 0x103)) {
    lVar6 = FUN_145369e40();
    if (lVar6 == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = FUN_1455431e0(param_1,0,lVar4,*(undefined4 *)(param_2 + 0x38));
      FUN_145081890(DAT_14c790fd8,lVar6,lVar4,*(undefined4 *)(param_2 + 0x38));
      LOCK();
      piVar1 = (int *)(lVar6 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))();
      }
    }
  }
  else {
    if ((sVar3 == 0x104) || (sVar3 == 0x105)) {
      if ((int)param_1[8] == 0) {
        uStack_40 = 0;
        local_68 = 0;
        uStack_50 = *(byte *)((longlong)param_1 + 0x36) & 0x1f;
        iStack_4c = (uint)(lVar4 == 0) << 8;
        local_58 = *(undefined4 *)(param_2 + 0x38);
        local_48 = local_48 & 0xffffff00;
        lStack_60 = lVar4;
        uStack_54 = FUN_145369980(param_1);
        (**(code **)(*param_1 + 0x68))(param_1,&local_68);
        local_38 = CONCAT44(uStack_64,local_68);
        lStack_30 = lStack_60;
        local_28 = local_58;
        uStack_24 = uStack_54;
        uStack_20 = uStack_50;
        iStack_1c = iStack_4c;
        local_18 = local_48;
        uStack_14 = uStack_44;
        uStack_10 = (undefined4)uStack_40;
        uStack_c = uStack_40._4_4_;
        FUN_145543360(param_1,&local_38);
        FUN_1450c6670(&local_68,0);
      }
      else {
        FUN_1455432b0(param_1,0,lVar4,*(undefined4 *)(param_2 + 0x38));
      }
      FUN_145081c50(DAT_14c790fd8,lVar4,param_1 + 7,*(undefined4 *)(param_2 + 0x38));
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 145370f40 FUN_145370f40 body=62 status=ok
// SIG undefined FUN_145370f40(void)

undefined8 * FUN_145370f40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d42f80;
  FUN_1455431d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 145370f80 FUN_145370f80 body=120 status=ok
// SIG undefined FUN_145370f80(void)

undefined8 FUN_145370f80(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  DAT_14c7fdcb8 = 0;
  DAT_14c7fdce8 = AK::MemoryMgr::Malloc(5,0x3000);
  if (DAT_14c7fdce8 == (undefined8 *)0x0) {
    return 0x34;
  }
  DAT_14c7fdcf0 = 0x200;
  uVar3 = 0;
  puVar1 = DAT_14c7fdce8;
  DAT_14c7fdce0 = DAT_14c7fdce8;
  do {
    puVar2 = puVar1;
    uVar3 = uVar3 + 1;
    *puVar2 = puVar2 + 3;
    puVar1 = puVar2 + 3;
  } while (uVar3 < DAT_14c7fdcf0);
  *puVar2 = 0;
  return 1;
}



// FUNCTION 145371000 FUN_145371000 body=279 status=ok
// SIG undefined FUN_145371000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145371000(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  DAT_14c7fdcc8 = 0;
  DAT_14c7fdcc0 = 0;
  while (puVar3 = DAT_14c7fdcd0, DAT_14c7fdcd0 != (undefined8 *)0x0) {
    if (DAT_14c7fdcd0 == DAT_14c7fdcd8) {
      DAT_14c7fdcd8 = (undefined8 *)0x0;
    }
    if ((DAT_14c7fdcd0 < DAT_14c7fdce8) ||
       (DAT_14c7fdce8 + (ulonglong)DAT_14c7fdcf0 * 3 <= DAT_14c7fdcd0)) {
      DAT_14c7fdcd0 = (undefined8 *)*DAT_14c7fdcd0;
      AK::MemoryMgr::Free(5,puVar3);
      _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
    }
    else {
      puVar2 = (undefined8 *)*DAT_14c7fdcd0;
      *DAT_14c7fdcd0 = DAT_14c7fdce0;
      DAT_14c7fdcd0 = puVar2;
      _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
      DAT_14c7fdce0 = puVar3;
    }
  }
  DAT_14c7fdcd0 = (undefined8 *)0x0;
  puVar3 = DAT_14c7fdce0;
  puVar2 = DAT_14c7fdce8;
  while (puVar1 = puVar3, puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar1;
    if ((puVar1 < puVar2) || (puVar2 + (ulonglong)DAT_14c7fdcf0 * 3 <= puVar1)) {
      AK::MemoryMgr::Free(5,puVar1);
      puVar2 = DAT_14c7fdce8;
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    AK::MemoryMgr::Free(5,puVar2);
    DAT_14c7fdce8 = (undefined8 *)0x0;
  }
  DAT_14c7fdcf0 = 0;
  DAT_14c7fdcd0 = (undefined8 *)0x0;
  DAT_14c7fdcd8 = (undefined8 *)0x0;
  DAT_14c7fdce0 = (undefined8 *)0x0;
  return;
}



// FUNCTION 145371120 FUN_145371120 body=437 status=ok
// SIG undefined FUN_145371120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145371120(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)0x0;
  puVar3 = DAT_14c7fdcd0;
  if (DAT_14c7fdcd0 == (undefined8 *)0x0) {
    DAT_14c7fdcbc = 0;
    return;
  }
  do {
    lVar1 = puVar3[1];
    puVar6 = puVar3;
    if ((*(longlong *)(lVar1 + 0x2a8) == 0) && (*(byte *)((longlong)puVar3 + 0x14) < 2)) {
      if (((*(byte *)(lVar1 + 0x314) & 0x10) == 0) || (*(int *)(lVar1 + 0x388) != -1)) {
        iVar2 = FUN_1450a5500();
        puVar4 = (undefined8 *)*puVar3;
        if (iVar2 != 1) {
          puVar6 = puVar4;
          if (puVar3 != DAT_14c7fdcd0) {
            *puVar5 = puVar4;
            puVar6 = DAT_14c7fdcd0;
          }
          DAT_14c7fdcd0 = puVar6;
          if (puVar3 == DAT_14c7fdcd8) {
            DAT_14c7fdcd8 = puVar5;
          }
          if ((puVar3 < DAT_14c7fdce8) || (DAT_14c7fdce8 + (ulonglong)DAT_14c7fdcf0 * 3 <= puVar3))
          {
            AK::MemoryMgr::Free(5,puVar3);
            _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
            puVar6 = puVar5;
          }
          else {
            *puVar3 = DAT_14c7fdce0;
            _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
            puVar6 = puVar5;
            DAT_14c7fdce0 = puVar3;
          }
        }
      }
      else {
        puVar4 = (undefined8 *)*puVar3;
        puVar6 = puVar4;
        if (puVar3 != DAT_14c7fdcd0) {
          *puVar5 = puVar4;
          puVar6 = DAT_14c7fdcd0;
        }
        DAT_14c7fdcd0 = puVar6;
        if (puVar3 == DAT_14c7fdcd8) {
          DAT_14c7fdcd8 = puVar5;
        }
        if ((puVar3 < DAT_14c7fdce8) || (DAT_14c7fdce8 + (ulonglong)DAT_14c7fdcf0 * 3 <= puVar3)) {
          AK::MemoryMgr::Free(5,puVar3);
        }
        else {
          *puVar3 = DAT_14c7fdce0;
          DAT_14c7fdce0 = puVar3;
        }
        _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
        FUN_1450eb2f0(lVar1,1);
        puVar6 = puVar5;
      }
    }
    else {
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3 = puVar4;
    puVar5 = puVar6;
  } while (puVar4 != (undefined8 *)0x0);
  DAT_14c7fdcbc = 0;
  return;
}



// FUNCTION 1453712e0 FUN_1453712e0 body=444 status=ok
// SIG undefined FUN_1453712e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453712e0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (DAT_14c7fdcbc != '\0') {
    puVar5 = (undefined8 *)0x0;
    puVar2 = DAT_14c7fdcd0;
    while (puVar4 = puVar2, puVar3 = puVar5, puVar4 != (undefined8 *)0x0) {
      lVar1 = puVar4[1];
      puVar5 = puVar4;
      if ((*(longlong *)(lVar1 + 0x2a8) == 0) && (*(byte *)((longlong)puVar4 + 0x14) < 2)) {
        if (((*(byte *)(lVar1 + 0x314) & 0x10) == 0) || (*(int *)(lVar1 + 0x388) != -1)) {
          iVar6 = FUN_1450a5500();
          puVar2 = (undefined8 *)*puVar4;
          if (iVar6 != 1) {
            puVar5 = puVar2;
            if (puVar4 != DAT_14c7fdcd0) {
              *puVar3 = puVar2;
              puVar5 = DAT_14c7fdcd0;
            }
            DAT_14c7fdcd0 = puVar5;
            if (puVar4 == DAT_14c7fdcd8) {
              DAT_14c7fdcd8 = puVar3;
            }
            if ((puVar4 < DAT_14c7fdce8) || (DAT_14c7fdce8 + (ulonglong)DAT_14c7fdcf0 * 3 <= puVar4)
               ) {
              AK::MemoryMgr::Free(5,puVar4);
              _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
              puVar5 = puVar3;
            }
            else {
              *puVar4 = DAT_14c7fdce0;
              _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
              puVar5 = puVar3;
              DAT_14c7fdce0 = puVar4;
            }
          }
        }
        else {
          puVar2 = (undefined8 *)*puVar4;
          puVar5 = puVar2;
          if (puVar4 != DAT_14c7fdcd0) {
            *puVar3 = puVar2;
            puVar5 = DAT_14c7fdcd0;
          }
          DAT_14c7fdcd0 = puVar5;
          if (puVar4 == DAT_14c7fdcd8) {
            DAT_14c7fdcd8 = puVar3;
          }
          if ((puVar4 < DAT_14c7fdce8) || (DAT_14c7fdce8 + (ulonglong)DAT_14c7fdcf0 * 3 <= puVar4))
          {
            AK::MemoryMgr::Free(5,puVar4);
          }
          else {
            *puVar4 = DAT_14c7fdce0;
            DAT_14c7fdce0 = puVar4;
          }
          _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
          FUN_1450eb2f0(lVar1,1);
          puVar5 = puVar3;
        }
      }
      else {
        puVar2 = (undefined8 *)*puVar4;
      }
    }
    DAT_14c7fdcbc = '\0';
  }
  FUN_145371910();
  return;
}



// FUNCTION 1453714a0 FUN_1453714a0 body=579 status=ok
// SIG undefined FUN_1453714a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453714a0(uint param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  int *piVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  
  puVar12 = (undefined8 *)0x0;
  if (DAT_14c7fdcc8 != (undefined8 *)0x0) {
    puVar10 = DAT_14c7fdcc8;
    puVar13 = puVar12;
    do {
      lVar1 = puVar10[1];
      pbVar6 = (byte *)(lVar1 + 0x2fc);
      if (lVar1 == 0) {
        pbVar6 = &DAT_00000314;
      }
      if ((*pbVar6 & 0x10) == 0) {
LAB_14537163f:
        if ((*pbVar6 & 0x40) == 0) {
          pfVar9 = (float *)(lVar1 + 0x2a4);
          if (lVar1 == 0) {
            pfVar9 = (float *)&DAT_000002bc;
          }
          if ((float)param_1 * *pfVar9 <= 0.0) {
            fVar14 = -0.5;
          }
          else {
            fVar14 = 0.5;
          }
          piVar7 = (int *)(lVar1 + 800);
          if (lVar1 == 0) {
            piVar7 = (int *)&DAT_00000338;
          }
          if (-1 < *piVar7) {
            *piVar7 = *piVar7 - (int)(fVar14 + (float)param_1 * *pfVar9);
          }
        }
        puVar11 = (undefined8 *)puVar10[0xe];
        puVar13 = puVar10;
      }
      else {
        piVar7 = (int *)(lVar1 + 0x370);
        if (lVar1 == 0) {
          piVar7 = (int *)&DAT_00000388;
        }
        puVar5 = puVar12;
        puVar11 = DAT_14c7fdcd0;
        puVar4 = DAT_14c7fdcd0;
        if (*piVar7 != -1) goto LAB_14537163f;
        while (puVar3 = puVar11, puVar2 = puVar5, puVar3 != (undefined8 *)0x0) {
          puVar11 = (undefined8 *)*puVar3;
          puVar8 = (undefined8 *)(puVar3[1] + 0x18);
          if (puVar3[1] == 0) {
            puVar8 = puVar12;
          }
          puVar5 = puVar3;
          if (puVar8 == (undefined8 *)puVar10[1]) {
            puVar5 = puVar11;
            if (puVar3 != puVar4) {
              *puVar2 = puVar11;
              puVar5 = DAT_14c7fdcd0;
            }
            DAT_14c7fdcd0 = puVar5;
            if (puVar3 == DAT_14c7fdcd8) {
              DAT_14c7fdcd8 = puVar2;
            }
            puVar5 = puVar2;
            if ((puVar3 < DAT_14c7fdce8) || (DAT_14c7fdce8 + (ulonglong)DAT_14c7fdcf0 * 3 <= puVar3)
               ) {
              AK::MemoryMgr::Free(5,puVar3);
              _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
              puVar4 = DAT_14c7fdcd0;
            }
            else {
              *puVar3 = DAT_14c7fdce0;
              _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
              puVar4 = DAT_14c7fdcd0;
              DAT_14c7fdce0 = puVar3;
            }
          }
        }
        puVar11 = (undefined8 *)puVar10[0xe];
        puVar4 = puVar11;
        if (puVar10 != DAT_14c7fdcc8) {
          puVar13[0xe] = puVar11;
          puVar4 = DAT_14c7fdcc8;
        }
        DAT_14c7fdcc8 = puVar4;
        if (puVar10 == DAT_14c7fdcc0) {
          DAT_14c7fdcc0 = puVar13;
        }
        FUN_1450a4b50(puVar10,0);
      }
      puVar10 = puVar11;
    } while (puVar11 != (undefined8 *)0x0);
  }
  return;
}



// FUNCTION 1453716f0 FUN_1453716f0 body=113 status=ok
// SIG undefined FUN_1453716f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453716f0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_14c7fdcc8;
  lVar3 = _DAT_00000070;
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x70);
    _DAT_00000070 = *(longlong *)(lVar2 + 0x70);
    if (lVar2 == DAT_14c7fdcc8) {
      _DAT_00000070 = lVar3;
      DAT_14c7fdcc8 = *(longlong *)(lVar2 + 0x70);
    }
    if (lVar2 == DAT_14c7fdcc0) {
      DAT_14c7fdcc0 = 0;
    }
    FUN_1450a4b50(lVar2,0);
    lVar2 = lVar1;
    lVar3 = _DAT_00000070;
  }
  _DAT_00000070 = lVar3;
  return;
}



// FUNCTION 145371770 FUN_145371770 body=203 status=ok
// SIG undefined FUN_145371770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145371770(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x0;
  puVar1 = DAT_14c7fdcd0;
  puVar4 = DAT_14c7fdcd0;
  while (puVar3 = puVar1, puVar2 = puVar5, puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    puVar5 = puVar3;
    if (puVar3[1] == param_1) {
      puVar5 = puVar1;
      if (puVar3 != puVar4) {
        *puVar2 = puVar1;
        puVar5 = DAT_14c7fdcd0;
      }
      DAT_14c7fdcd0 = puVar5;
      if (puVar3 == DAT_14c7fdcd8) {
        DAT_14c7fdcd8 = puVar2;
      }
      puVar5 = puVar2;
      if ((puVar3 < DAT_14c7fdce8) || (DAT_14c7fdce8 + (ulonglong)DAT_14c7fdcf0 * 3 <= puVar3)) {
        AK::MemoryMgr::Free(5,puVar3);
        _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
        puVar4 = DAT_14c7fdcd0;
      }
      else {
        *puVar3 = DAT_14c7fdce0;
        _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
        puVar4 = DAT_14c7fdcd0;
        DAT_14c7fdce0 = puVar3;
      }
    }
  }
  return;
}



// FUNCTION 145371840 FUN_145371840 body=204 status=ok
// SIG undefined FUN_145371840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145371840(uint param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (DAT_14c7fdce0 == (undefined8 *)0x0) {
    puVar3 = AK::MemoryMgr::Malloc(5,0x18);
    if (puVar3 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar3 = DAT_14c7fdce0;
    DAT_14c7fdce0 = puVar3;
  }
  puVar3 = DAT_14c7fdce0;
  if (DAT_14c7fdcd8 != (undefined8 *)0x0) {
    *DAT_14c7fdcd8 = DAT_14c7fdce0;
    puVar3 = DAT_14c7fdcd0;
  }
  DAT_14c7fdcd0 = puVar3;
  DAT_14c7fdcd8 = DAT_14c7fdce0;
  uVar2 = *DAT_14c7fdce0;
  *DAT_14c7fdce0 = 0;
  DAT_14c7fdce0 = (undefined8 *)uVar2;
  puVar3 = DAT_14c7fdcd8;
  _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + 1;
  if (DAT_14c7fdcd8 + 1 == (undefined8 *)0x0) {
    return 2;
  }
  DAT_14c7fdcd8[1] = param_2;
  uVar1 = DAT_14c7fdcb8;
  *(char *)((longlong)puVar3 + 0x14) = (char)param_1;
  *(uint *)((longlong)puVar3 + 0x14) = *(uint *)((longlong)puVar3 + 0x14) & 0xfffffeff;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  if (param_1 < 2) {
    DAT_14c7fdcbc = 1;
  }
  return 1;
}



// FUNCTION 145371910 FUN_145371910 body=862 status=ok
// SIG undefined FUN_145371910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145371910(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
LAB_145371940:
  uStack_50 = (longlong *)0x0;
  plVar2 = DAT_14c7fdcd0;
LAB_145371953:
  local_58 = plVar2;
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  do {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    lVar6 = local_58[2];
    bVar4 = false;
    plVar2 = (longlong *)CONCAT44(uStack_34,local_38);
    plVar8 = (longlong *)CONCAT44(uStack_2c,uStack_30);
    do {
      plVar7 = plVar2;
      if ((int)lVar6 != (int)plVar7[2]) break;
      if ((((*(uint *)((longlong)plVar7 + 0x14) >> 8 & 1) == 0) &&
          ((byte)*(uint *)((longlong)plVar7 + 0x14) < 2)) &&
         ((lVar1 = plVar7[1], (*(byte *)(lVar1 + 0x314) & 0x10) == 0 ||
          (*(int *)(lVar1 + 0x388) != -1)))) {
        if ((*(longlong *)(lVar1 + 0x2a8) == 0) || (iVar5 = FUN_1450a5730(), iVar5 == 2)) {
          plVar2 = (longlong *)*plVar7;
          if (plVar7 != DAT_14c7fdcd0) {
            *plVar8 = *plVar7;
            plVar2 = DAT_14c7fdcd0;
          }
          DAT_14c7fdcd0 = plVar2;
          if (plVar7 == DAT_14c7fdcd8) {
            DAT_14c7fdcd8 = plVar8;
          }
          if ((plVar7 < DAT_14c7fdce8) || (DAT_14c7fdce8 + (ulonglong)DAT_14c7fdcf0 * 3 <= plVar7))
          {
            AK::MemoryMgr::Free(5,plVar7);
            _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
          }
          else {
            *plVar7 = (longlong)DAT_14c7fdce0;
            _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
            DAT_14c7fdce0 = plVar7;
          }
          goto LAB_145371940;
        }
        if (iVar5 == 0x3f) {
          bVar4 = true;
        }
        else {
          *(uint *)((longlong)plVar7 + 0x14) = *(uint *)((longlong)plVar7 + 0x14) | 0x100;
        }
      }
      plVar2 = (longlong *)*plVar7;
      plVar8 = plVar7;
    } while ((longlong *)*plVar7 != (longlong *)0x0);
    if (bVar4) break;
    lVar6 = 0;
    uStack_30 = SUB84(uStack_50,0);
    uStack_2c = (undefined4)((ulonglong)uStack_50 >> 0x20);
    if ((*(uint *)((longlong)local_58 + 0x14) >> 8 & 1) == 0) {
      if (((byte)*(uint *)((longlong)local_58 + 0x14) < 2) ||
         (lVar6 = FUN_1450a5690(local_58 + 1), lVar6 != 0)) goto LAB_145371acd;
      plVar2 = (longlong *)*local_58;
      plVar8 = plVar2;
      if (local_58 != DAT_14c7fdcd0) {
        *uStack_50 = (longlong)plVar2;
        plVar8 = DAT_14c7fdcd0;
      }
      DAT_14c7fdcd0 = plVar8;
      if (local_58 == DAT_14c7fdcd8) {
        DAT_14c7fdcd8 = uStack_50;
      }
      local_38 = SUB84(plVar2,0);
      uStack_34 = (undefined4)((ulonglong)plVar2 >> 0x20);
      if ((local_58 < DAT_14c7fdce8) || (DAT_14c7fdce8 + (ulonglong)DAT_14c7fdcf0 * 3 <= local_58))
      {
        AK::MemoryMgr::Free(5,local_58);
      }
      else {
        *local_58 = (longlong)DAT_14c7fdce0;
        DAT_14c7fdce0 = local_58;
      }
    }
    else {
      lVar6 = *(longlong *)(local_58[1] + 0x2a8);
LAB_145371acd:
      if ((*(uint *)((longlong)local_58 + 0x14) >> 8 & 1) == 0) goto LAB_145371bc4;
      switch(*(uint *)((longlong)local_58 + 0x14) & 0xff) {
      case 0:
        FUN_1450cc9b0(lVar6);
        break;
      case 1:
        FUN_1450cc9b0(lVar6);
      case 2:
        FUN_1450cca50(lVar6);
        break;
      case 3:
        FUN_1450ccab0(lVar6);
        break;
      case 4:
        FUN_1450ccb40(lVar6,local_58[1]);
        break;
      case 5:
        FUN_1450ccc00(lVar6);
      }
      plVar2 = (longlong *)*local_58;
      plVar8 = plVar2;
      if (local_58 != DAT_14c7fdcd0) {
        *uStack_50 = (longlong)plVar2;
        plVar8 = DAT_14c7fdcd0;
      }
      DAT_14c7fdcd0 = plVar8;
      if (local_58 == DAT_14c7fdcd8) {
        DAT_14c7fdcd8 = uStack_50;
      }
      if ((local_58 < DAT_14c7fdce8) || (DAT_14c7fdce8 + (ulonglong)DAT_14c7fdcf0 * 3 <= local_58))
      {
        AK::MemoryMgr::Free(5,local_58);
      }
      else {
        *local_58 = (longlong)DAT_14c7fdce0;
        DAT_14c7fdce0 = local_58;
      }
      local_28 = SUB84(plVar2,0);
      uStack_24 = (undefined4)((ulonglong)plVar2 >> 0x20);
      local_38 = local_28;
      uStack_34 = uStack_24;
    }
    _DAT_14c7fdcf4 = _DAT_14c7fdcf4 + -1;
    auVar3._4_4_ = uStack_34;
    auVar3._0_4_ = local_38;
    auVar3._8_4_ = uStack_30;
    auVar3._12_4_ = uStack_2c;
    local_58 = (longlong *)CONCAT44(uStack_34,local_38);
    uStack_50 = auVar3._8_8_;
  } while( true );
  while (local_58 = plVar2, (int)lVar6 == (int)plVar2[2]) {
    uStack_50 = local_58;
    plVar2 = (longlong *)*uStack_50;
    if (plVar2 == (longlong *)0x0) break;
  }
  goto LAB_145371953;
LAB_145371bc4:
  plVar2 = (longlong *)*local_58;
  uStack_50 = local_58;
  goto LAB_145371953;
}



// FUNCTION 145371c90 FUN_145371c90 body=281 status=ok
// SIG undefined FUN_145371c90(void)

undefined8 * FUN_145371c90(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = AK::MemoryMgr::Malloc(1,0x128);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14553c700(puVar2,param_1);
    *puVar2 = &PTR_FUN_149d42ff0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    lVar1 = *param_2;
    puVar2[0xc] = lVar1;
    if (lVar1 != 0) {
      FUN_14538ec90();
    }
    *(byte *)((longlong)puVar2 + 0xcc) = *(byte *)((longlong)puVar2 + 0xcc) & 0xfe;
    *(undefined4 *)((longlong)puVar2 + 0xac) = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xc4) = 1;
    *(undefined1 *)((longlong)puVar2 + 0xc6) = 0;
    *(undefined4 *)(puVar2 + 0x19) = 0;
    *(undefined4 *)(puVar2 + 0x1a) = 1;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *(undefined4 *)(puVar2 + 0x1d) = 0;
    puVar2[0x1e] = 0;
    *(undefined4 *)(puVar2 + 0x1f) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xfc) = 4;
    *(undefined2 *)(puVar2 + 0x20) = 0xff00;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    puVar2[0x24] = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145371db0 FUN_145371db0 body=457 status=ok
// SIG undefined FUN_145371db0(void)

void FUN_145371db0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  
  *param_1 = &PTR_FUN_149d42ff0;
  if ((param_1[8] != 0) && (param_1[0x1b] != 0)) {
    FUN_1450b0bd0(DAT_14c791068);
  }
  param_1[8] = 0;
  if ((param_1[9] != 0) && (param_1[0x1b] != 0)) {
    FUN_1450b0bd0(DAT_14c791068);
  }
  param_1[9] = 0;
  if (param_1[10] != 0) {
    FUN_1450b42a0(DAT_14c790fd0);
  }
  lVar2 = param_1[0x1e];
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0x24);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))();
    }
    param_1[0x1e] = 0;
  }
  if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
    if ((*(char *)((longlong)param_1 + 0xc6) == '\0') &&
       (iVar5 = (**(code **)(*(longlong *)param_1[0x1c] + 8))(), iVar5 != 0xc)) {
      plVar6 = (longlong *)(param_1[0x1c] + -0x10);
      if (param_1[0x1c] == 0) {
        plVar6 = (longlong *)0x0;
      }
      (**(code **)(*plVar6 + 0x120))(plVar6,1);
    }
    plVar6 = (longlong *)param_1[0x1c];
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0x14);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar2 = param_1[0x22];
  if (lVar2 != 0) {
    plVar6 = *(longlong **)(lVar2 + 0x70);
    plVar4 = (longlong *)0x0;
    do {
      plVar3 = plVar4;
      plVar4 = plVar6;
      if (plVar4 == (longlong *)0x0) goto LAB_145371f16;
      plVar6 = (longlong *)*plVar4;
    } while ((undefined8 *)plVar4[2] != param_1);
    if (plVar4 == *(longlong **)(lVar2 + 0x70)) {
      *(longlong **)(lVar2 + 0x70) = plVar6;
    }
    else {
      *plVar3 = (longlong)plVar6;
    }
    if (plVar4 == *(longlong **)(lVar2 + 0x78)) {
      *(longlong **)(lVar2 + 0x78) = plVar3;
    }
    *plVar4 = *(longlong *)(lVar2 + 0x80);
    *(int *)(lVar2 + 0x94) = *(int *)(lVar2 + 0x94) + -1;
    *(longlong **)(lVar2 + 0x80) = plVar4;
LAB_145371f16:
    if (((*(undefined8 **)(lVar2 + 0x18) != (undefined8 *)0x0) && (*(int *)(lVar2 + 0x6c) == 0)) &&
       (*(int *)(lVar2 + 0x94) == 0)) {
      (**(code **)**(undefined8 **)(lVar2 + 0x18))();
    }
    FUN_1453a25b0(param_1[0x22]);
    param_1[0x22] = 0;
  }
  FUN_14538dec0(param_1 + 0x23);
  if (param_1[0xc] != 0) {
    FUN_14538eca0();
    param_1[0xc] = 0;
  }
  FUN_14553c730(param_1);
  return;
}



// FUNCTION 145371f80 FUN_145371f80 body=1014 status=ok
// SIG undefined FUN_145371f80(void)

int FUN_145371f80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  byte bVar9;
  longlong *plVar10;
  byte local_res8 [8];
  undefined8 local_res18;
  undefined8 local_398;
  undefined8 local_390;
  longlong *local_388;
  longlong *local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_358 [2];
  undefined8 local_350;
  undefined8 local_348;
  undefined8 *local_340;
  int *local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [600];
  undefined8 local_50;
  byte local_48;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    local_res18 = *(undefined8 *)(param_1 + 0xf8);
  }
  else {
    uVar5 = 4;
    if ((*(byte *)(lVar2 + 1000) & 0xf) == 2) {
      uVar5 = 1;
    }
    local_res18 = CONCAT44(uVar5,*(undefined4 *)(param_1 + 0xb8));
    FUN_1450eaa80(lVar2,&local_res18,1);
  }
  iVar6 = 0xf;
  plVar8 = (longlong *)FUN_145369e40(param_1);
  if (plVar8 == (longlong *)0x0) goto LAB_14537231e;
  local_398 = *(undefined8 *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x60);
  local_390 = *(undefined8 *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x50);
  local_378 = *(undefined4 *)(param_1 + 0xe8);
  local_380 = (longlong *)0x0;
  local_370 = 0;
  local_368 = 0;
  plVar10 = (longlong *)0x0;
  local_388 = plVar1;
  if (lVar2 != 0) {
    FUN_14538ec90(lVar2);
    plVar10 = local_380;
  }
  local_380 = (longlong *)lVar2;
  if (plVar10 != (longlong *)0x0) {
    FUN_14538eca0();
  }
  local_320 = *(undefined8 *)(param_1 + 0x68);
  uStack_318 = *(undefined8 *)(param_1 + 0x70);
  local_350 = 0;
  local_310 = *(undefined8 *)(param_1 + 0x78);
  uStack_308 = *(undefined8 *)(param_1 + 0x80);
  local_328 = 0;
  local_330 = 0;
  local_300 = *(undefined8 *)(param_1 + 0x88);
  uStack_2f8 = *(undefined8 *)(param_1 + 0x90);
  local_338 = (int *)0x0;
  local_2c8 = 0;
  local_2f0 = *(undefined4 *)(param_1 + 0x98);
  uStack_2ec = *(undefined4 *)(param_1 + 0x9c);
  uStack_2e8 = *(undefined4 *)(param_1 + 0xa0);
  uStack_2e4 = *(undefined4 *)(param_1 + 0xa4);
  local_2c0 = CONCAT62(local_2c0._2_6_,0xff00);
  local_2b0 = 0;
  local_2e0 = *(undefined8 *)(param_1 + 0xa8);
  FUN_144d51920(local_2a8);
  piVar3 = *(int **)(param_2 + 0x1c);
  local_48 = local_48 & 0xf3 | 3;
  local_50 = *(undefined8 *)(param_1 + 200);
  local_358[0] = *(undefined4 *)(param_1 + 0xd0);
  local_350 = *(undefined8 *)(param_1 + 0xe0);
  local_348 = *(undefined8 *)(param_2 + 0x40);
  local_330 = *(undefined8 *)(param_2 + 0x24);
  local_328 = *(undefined8 *)(param_2 + 0x2c);
  if (local_338 != (int *)0x0) {
    FUN_144d4a460();
  }
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  local_2d8 = *(undefined4 *)(param_1 + 0xbc);
  local_2c0 = *(undefined8 *)(param_1 + 0x100);
  local_2d4 = *(undefined4 *)(param_2 + 0x14);
  local_48 = (*(byte *)(param_1 + 0xc5) & 1) * '\x02' | local_48 & 0xfd;
  local_2c8 = CONCAT44(local_2c8._4_4_,*(undefined4 *)(param_1 + 0xc0));
  local_2b8 = *(undefined4 *)(param_1 + 0x108);
  local_2b0 = *(undefined8 *)(param_1 + 0x110);
  local_2d0 = &local_398;
  local_340 = &local_res18;
  local_338 = piVar3;
  cVar4 = FUN_145369ff0(*(undefined8 *)(param_2 + 8));
  bVar9 = local_48 & 0xfb | cVar4 << 2;
  if (((char)local_2c0 == -0x70) && (local_2c0._5_1_ != '\0')) {
    local_res8[0] = local_48 & 1;
    local_48 = bVar9;
    uVar5 = FUN_1450e98e0(local_358);
    iVar6 = FUN_14536f6c0(plVar8,&local_2c0,uVar5,local_res8,local_348,local_328._4_4_);
    if (iVar6 == 1) {
      bVar9 = local_res8[0] & 1 | local_48 & 0xfe;
      goto LAB_145372240;
    }
  }
  else {
LAB_145372240:
    local_48 = bVar9;
    iVar6 = FUN_14536f160(plVar8,local_358);
    if (iVar6 == 3) {
      iVar6 = 1;
    }
    else if (iVar6 == 1) {
      iVar6 = (**(code **)(*plVar8 + 0x250))(plVar8,local_358);
    }
  }
  DAT_14c7fdcb8 = DAT_14c7fdcb8 + 1;
  lVar2 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar2 != 0) {
    FUN_14538eca0();
  }
  if (*plVar1 != 0) {
    FUN_1450b42a0(DAT_14c790fd0);
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xf0);
  if (lVar2 != 0) {
    LOCK();
    piVar3 = (int *)(lVar2 + 0x24);
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  LOCK();
  piVar3 = (int *)((longlong)plVar8 + 0x24);
  iVar7 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar7 == 1) {
    (**(code **)(plVar8[2] + 0x18))();
  }
  FUN_144d51aa0(local_2a8);
  if (local_338 != (int *)0x0) {
    FUN_144d4a460();
  }
  FUN_14538dec0(&local_370);
  if (local_380 != (longlong *)0x0) {
    FUN_14538eca0();
  }
LAB_14537231e:
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 8))();
  if (iVar7 != 0xc) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0xe0) + -0x10);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      plVar8 = (longlong *)0x0;
    }
    (**(code **)(*plVar8 + 0x120))(plVar8,1);
    *(undefined1 *)(param_1 + 0xc6) = 1;
  }
  return iVar6;
}



// FUNCTION 145372380 FUN_145372380 body=109 status=ok
// SIG undefined FUN_145372380(void)

undefined8 FUN_145372380(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0xd8) = param_3;
  if ((*(longlong *)(param_1 + 0x40) != 0) && (param_3 != 0)) {
    FUN_1450b0bd0(DAT_14c791068);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((param_2 != 0) &&
     (uVar1 = FUN_1450b0b30(DAT_14c791068,param_2,*(undefined8 *)(param_1 + 0xd8)), (int)uVar1 != 1)
     ) {
    return uVar1;
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  return 1;
}



// FUNCTION 1453723f0 FUN_1453723f0 body=109 status=ok
// SIG undefined FUN_1453723f0(void)

undefined8 FUN_1453723f0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0xd8) = param_3;
  if ((*(longlong *)(param_1 + 0x48) != 0) && (param_3 != 0)) {
    FUN_1450b0bd0(DAT_14c791068);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((param_2 != 0) &&
     (uVar1 = FUN_1450b0b30(DAT_14c791068,param_2,*(undefined8 *)(param_1 + 0xd8)), (int)uVar1 != 1)
     ) {
    return uVar1;
  }
  *(longlong *)(param_1 + 0x48) = param_2;
  return 1;
}



// FUNCTION 145372460 FUN_145372460 body=376 status=ok
// SIG undefined FUN_145372460(void)

void FUN_145372460(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = *(longlong *)(param_1 + 0xf0);
  lVar8 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (((param_2 != (longlong *)0x0) && (*param_2 != 0)) &&
     (iVar5 = FUN_1450b4240(DAT_14c790fd0), iVar5 == 1)) {
    *(longlong *)(param_1 + 0x50) = *param_2;
    uVar3 = *(uint *)(param_2 + 1);
    *(uint *)(param_1 + 0x58) = uVar3;
    piVar1 = DAT_14c791060;
    do {
      while (iVar5 = *piVar1, iVar5 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        if (*piVar1 < 0) goto LAB_1453724ef;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar5 == iVar2) {
        *piVar1 = iVar5 + 1;
      }
      UNLOCK();
    } while (iVar5 != iVar2);
LAB_1453724ef:
    lVar7 = lVar8;
    if (piVar1[0x12] != 0) {
      for (lVar6 = *(longlong *)
                    (*(longlong *)(piVar1 + 0x10) +
                    ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
          (lVar7 = lVar8, lVar6 != 0 && (lVar7 = lVar6, *(uint *)(lVar6 + 0x10) != uVar3));
          lVar6 = *(longlong *)(lVar6 + 8)) {
      }
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar5 = *piVar1;
    while (-1 < iVar5) {
      LOCK();
      iVar2 = *piVar1;
      if (iVar5 == iVar2) {
        *piVar1 = iVar5 + -1;
      }
      UNLOCK();
      if (iVar5 == iVar2) {
        if ((iVar5 + -1 == 0) && (0 < piVar1[0xc])) {
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
        }
        goto LAB_14537256a;
      }
      iVar5 = *piVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_14537256a:
    lVar6 = lVar7 + -0x10;
    if (lVar7 == 0) {
      lVar6 = lVar8;
    }
    *(longlong *)(param_1 + 0xf0) = lVar6;
  }
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0x24);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001453725b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
      return;
    }
  }
  return;
}



// FUNCTION 145372610 FUN_145372610 body=56 status=ok
// SIG undefined FUN_145372610(void)

void FUN_145372610(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x78) = param_2[2];
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x88) = param_2[4];
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x98) = param_2[6];
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0x44);
  return;
}



// FUNCTION 145372650 FUN_145372650 body=7 status=ok
// SIG undefined FUN_145372650(void)

void FUN_145372650(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  return;
}



// FUNCTION 145372660 FUN_145372660 body=85 status=ok
// SIG undefined FUN_145372660(void)

void FUN_145372660(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *(longlong *)(param_1 + 0xe0) = param_2;
  LOCK();
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  UNLOCK();
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 8))();
  if (iVar1 != 0xc) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0xe0) + -0x10);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      plVar2 = (longlong *)0x0;
    }
    (**(code **)(*plVar2 + 0x118))(plVar2,1);
    *(undefined1 *)(param_1 + 0xc6) = 0;
  }
  return;
}



// FUNCTION 1453726c0 FUN_1453726c0 body=8 status=ok
// SIG undefined FUN_1453726c0(void)

undefined1 FUN_1453726c0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xc4);
}



// FUNCTION 1453726d0 FUN_1453726d0 body=7 status=ok
// SIG undefined FUN_1453726d0(void)

void FUN_1453726d0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc5) = param_2;
  return;
}



// FUNCTION 1453726e0 FUN_1453726e0 body=22 status=ok
// SIG undefined FUN_1453726e0(void)

void FUN_1453726e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  return;
}



// FUNCTION 145372700 FUN_145372700 body=21 status=ok
// SIG undefined FUN_145372700(void)

void FUN_145372700(longlong param_1,longlong param_2)

{
  if (param_2 == *(longlong *)(param_1 + 0xb0)) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 145372720 FUN_145372720 body=7 status=ok
// SIG undefined FUN_145372720(void)

void FUN_145372720(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 145372730 FUN_145372730 body=11 status=ok
// SIG undefined FUN_145372730(void)

void FUN_145372730(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xbc) = 1;
  return;
}



// FUNCTION 145372740 FUN_145372740 body=74 status=ok
// SIG undefined FUN_145372740(void)

void FUN_145372740(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    cVar1 = FUN_14538f630();
    if (cVar1 != '\0') {
      if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0xd8) != 0)) {
        FUN_1450b0bd0(DAT_14c791068);
      }
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}



// FUNCTION 145372790 FUN_145372790 body=484 status=ok
// SIG undefined FUN_145372790(void)

undefined8 FUN_145372790(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 local_res8 [4];
  undefined1 local_28 [8];
  longlong local_20;
  
  plVar3 = *(longlong **)(param_1 + 0x60);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = (int)plVar3[1];
    while (iVar2 != 0) {
      lVar7 = *plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 0x28;
      lVar4 = *(longlong *)(*plVar3 + -0x10 + (ulonglong)*(uint *)(plVar3 + 1) * 0x28);
      if (lVar4 == 0) {
        cVar5 = FUN_14536ef40(*(undefined8 *)(lVar7 + -0x28),param_2,0);
        if (cVar5 == '\0') {
          lVar7 = FUN_1450c38a0(*(undefined8 *)(lVar7 + -0x28),param_3,local_res8,local_28,
                                lVar7 + -0x20,lVar7 + -0x18);
          if (lVar7 != 0) {
            *(undefined2 *)(param_1 + 0x6c + (ulonglong)(*(int *)(param_1 + 0x68) - 1) * 2) =
                 local_res8[0];
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar7 + 0x20);
            LOCK();
            piVar1 = (int *)(lVar7 + 0x24);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))();
            }
            return 0;
          }
          break;
        }
        uVar6 = *(int *)(param_1 + 0x68) - 1;
        *(uint *)(param_1 + 0x68) = uVar6;
        while (uVar6 != 0) {
          while( true ) {
            uVar6 = uVar6 - 1;
            if (uVar6 < 0x20) break;
            *(uint *)(param_1 + 0x68) = uVar6;
          }
          if ((*(uint *)(param_1 + 0xac) >> ((ulonglong)uVar6 & 0x3f) & 1) != 0) break;
          *(uint *)(param_1 + 0x68) = uVar6;
        }
        plVar3 = *(longlong **)(param_1 + 0x60);
        FUN_14538eb00(*plVar3 + ((ulonglong)*(uint *)(plVar3 + 1) * 5 + -5) * 8);
        *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
      }
      else {
        local_20 = 0;
        FUN_14553fee0(lVar4,*(undefined8 *)(lVar7 + -8),&local_20);
        plVar3 = *(longlong **)(param_1 + 0x60);
        FUN_14538eb00(*plVar3 + ((ulonglong)*(uint *)(plVar3 + 1) * 5 + -5) * 8);
        lVar7 = local_20;
        *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
        if (local_20 == 0) {
          lVar7 = *(longlong *)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x60) = 0;
          if (lVar7 == 0) {
            return 1;
          }
          FUN_14538eca0();
          lVar7 = local_20;
          goto LAB_1453728d6;
        }
        FUN_14538ec90(local_20);
        lVar4 = *(longlong *)(param_1 + 0x60);
        *(longlong *)(param_1 + 0x60) = lVar7;
        if (lVar4 != 0) {
          FUN_14538eca0();
        }
        if (local_20 != 0) {
          FUN_14538eca0();
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x60);
      iVar2 = (int)plVar3[1];
    }
    lVar7 = *(longlong *)(param_1 + 0x60);
    if (*(int *)(lVar7 + 8) == 0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
LAB_1453728d6:
      if (lVar7 != 0) {
        FUN_14538eca0();
      }
    }
  }
  return 1;
}



// FUNCTION 145372980 FUN_145372980 body=202 status=ok
// SIG undefined FUN_145372980(void)

void FUN_145372980(longlong param_1,undefined4 param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  *(undefined8 *)(param_1 + 0x100) = *param_4;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_4 + 1);
  *(longlong *)(param_1 + 0x110) = param_3;
  if (param_3 != 0) {
    FUN_1453a25a0();
    lVar1 = *(longlong *)(param_1 + 0x110);
    puVar2 = *(undefined8 **)(lVar1 + 0x80);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = AK::MemoryMgr::Malloc(0,0x18);
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      *puVar2 = *(undefined8 *)(lVar1 + 0x80);
      *(undefined8 **)(lVar1 + 0x80) = puVar2;
    }
    if (*(longlong **)(lVar1 + 0x78) == (longlong *)0x0) {
      *(undefined8 **)(lVar1 + 0x70) = puVar2;
    }
    else {
      **(longlong **)(lVar1 + 0x78) = (longlong)puVar2;
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x80);
    *(undefined8 **)(lVar1 + 0x78) = puVar2;
    *(undefined8 *)(lVar1 + 0x80) = *puVar2;
    *puVar2 = 0;
    *(int *)(lVar1 + 0x94) = *(int *)(lVar1 + 0x94) + 1;
    lVar1 = *(longlong *)(lVar1 + 0x78);
    puVar3 = (undefined4 *)(lVar1 + 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = param_2;
      *(longlong *)(lVar1 + 0x10) = param_1;
    }
  }
  return;
}



// FUNCTION 145372a50 FUN_145372a50 body=29 status=ok
// SIG undefined FUN_145372a50(void)

void FUN_145372a50(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14538e810(*param_2,1,param_1 + 0x118);
    return;
  }
  return;
}



// FUNCTION 145372a70 FUN_145372a70 body=12 status=ok
// SIG undefined FUN_145372a70(void)

void FUN_145372a70(longlong param_1)

{
  FUN_14538df00(param_1 + 0x118);
  return;
}



// FUNCTION 145372a80 FUN_145372a80 body=12 status=ok
// SIG undefined FUN_145372a80(void)

void FUN_145372a80(longlong param_1)

{
  FUN_14538dff0(param_1 + 0x118);
  return;
}



// FUNCTION 145372a90 FUN_145372a90 body=52 status=ok
// SIG undefined FUN_145372a90(void)

undefined8 FUN_145372a90(undefined8 param_1,ulonglong param_2)

{
  FUN_145371db0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 145372ad0 FUN_145372ad0 body=669 status=ok
// SIG undefined FUN_145372ad0(void)

undefined8
FUN_145372ad0(int param_1,longlong param_2,byte param_3,int param_4,int param_5,void *param_6,
             int param_7,char param_8)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uStack_34;
  undefined4 uStack_24;
  
  uVar6 = DAT_14c7fdd00;
  uVar7 = (ulonglong)DAT_14c7fdd00;
  iVar5 = (param_5 * 0x1000 + param_4) * 0x10 + (uint)param_3;
  piVar3 = DAT_14c7fdcf8 + uVar7 * 10;
  for (piVar2 = DAT_14c7fdcf8;
      (piVar2 != DAT_14c7fdcf8 + uVar7 * 10 &&
      (((*piVar2 != param_1 || (piVar2[4] != iVar5)) || (*(longlong *)(piVar2 + 2) != param_2))));
      piVar2 = piVar2 + 10) {
  }
  piVar4 = piVar2 + 6;
  if (piVar2 == piVar3) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 != (int *)0x0) {
    if ((char)piVar4[3] != '\0') {
      AK::MemoryMgr::Free(5,*(void **)piVar4);
      uVar7 = (ulonglong)DAT_14c7fdd00;
    }
    if (param_6 == (void *)0x0) {
      for (piVar3 = DAT_14c7fdcf8;
          (piVar3 != DAT_14c7fdcf8 + uVar7 * 10 &&
          (((*piVar3 != param_1 || (piVar3[4] != iVar5)) || (*(longlong *)(piVar3 + 2) != param_2)))
          ); piVar3 = piVar3 + 10) {
      }
      if (piVar3 != DAT_14c7fdcf8 + uVar7 * 10) {
        uVar6 = (uint)uVar7;
        if (piVar3 < DAT_14c7fdcf8 + (ulonglong)((uint)uVar7 - 1) * 10) {
          memmove(piVar3,piVar3 + 10,
                  (ulonglong)
                  (uint)((int)(((longlong)(DAT_14c7fdcf8 + (ulonglong)((uint)uVar7 - 1) * 10) -
                               (longlong)piVar3) / 0x28) * 0x28));
          uVar6 = DAT_14c7fdd00;
        }
        DAT_14c7fdd00 = uVar6 - 1;
        return 1;
      }
    }
    else {
      *(void **)piVar4 = param_6;
      piVar4[2] = param_7;
      *(char *)(piVar4 + 3) = param_8;
    }
    return 1;
  }
  piVar2 = DAT_14c7fdcf8;
  if (param_6 != (void *)0x0) {
    for (; (piVar2 != piVar3 &&
           (((*piVar2 != param_1 || (piVar2[4] != iVar5)) || (*(longlong *)(piVar2 + 2) != param_2))
           )); piVar2 = piVar2 + 10) {
    }
    piVar4 = piVar2 + 6;
    if (piVar2 == piVar3) {
      piVar4 = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      if (DAT_14c7fdd04 <= DAT_14c7fdd00) {
        cVar1 = FUN_145372ec0(&DAT_14c7fdcf8);
        if (cVar1 == '\0') goto LAB_145372d13;
        uVar7 = (ulonglong)DAT_14c7fdd00;
      }
      if (DAT_14c7fdd04 <= uVar6) {
LAB_145372d13:
        if (param_8 != '\0') {
          AK::MemoryMgr::Free(5,param_6);
        }
        return 0x34;
      }
      DAT_14c7fdd00 = (int)uVar7 + 1;
      piVar3 = DAT_14c7fdcf8 + uVar7 * 10;
      if (piVar3 == (int *)0x0) goto LAB_145372d13;
      piVar4 = piVar3 + 6;
      *piVar3 = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      *(ulonglong *)piVar3 = CONCAT44(uStack_34,param_1);
      *(longlong *)(piVar3 + 2) = param_2;
      *(ulonglong *)(piVar3 + 4) = CONCAT44(uStack_24,iVar5);
      if (piVar4 == (int *)0x0) goto LAB_145372d13;
    }
    piVar4[2] = param_7;
    *(char *)(piVar4 + 3) = param_8;
    *(void **)piVar4 = param_6;
  }
  return 1;
}



// FUNCTION 145372d70 FUN_145372d70 body=183 status=ok
// SIG undefined FUN_145372d70(void)

void FUN_145372d70(int param_1,longlong param_2,int param_3,undefined8 *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  
  while( true ) {
    for (piVar1 = DAT_14c7fdcf8;
        (piVar1 != DAT_14c7fdcf8 + (ulonglong)DAT_14c7fdd00 * 10 &&
        (((*piVar1 != param_1 || (piVar1[4] != param_3)) || (*(longlong *)(piVar1 + 2) != param_2)))
        ); piVar1 = piVar1 + 10) {
    }
    piVar2 = piVar1 + 6;
    if (piVar1 == DAT_14c7fdcf8 + (ulonglong)DAT_14c7fdd00 * 10) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) break;
    if (param_2 == -1) {
      *param_4 = 0;
      *param_5 = 0;
      return;
    }
    param_2 = -1;
  }
  *param_4 = *(undefined8 *)piVar2;
  *param_5 = piVar2[2];
  return;
}



// FUNCTION 145372e30 FUN_145372e30 body=137 status=ok
// SIG undefined FUN_145372e30(void)

void FUN_145372e30(void)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)DAT_14c7fdd00;
  pvVar1 = DAT_14c7fdcf8;
  pvVar2 = DAT_14c7fdcf8;
  if (DAT_14c7fdcf8 != (void *)((longlong)DAT_14c7fdcf8 + uVar3 * 0x28)) {
    do {
      if ((*(char *)((longlong)pvVar1 + 0x24) != '\0') &&
         (*(void **)((longlong)pvVar1 + 0x18) != (void *)0x0)) {
        AK::MemoryMgr::Free(5,*(void **)((longlong)pvVar1 + 0x18));
        uVar3 = (ulonglong)DAT_14c7fdd00;
        pvVar2 = DAT_14c7fdcf8;
      }
      pvVar1 = (void *)((longlong)pvVar1 + 0x28);
    } while (pvVar1 != (void *)((longlong)pvVar2 + uVar3 * 0x28));
  }
  if (pvVar2 != (void *)0x0) {
    DAT_14c7fdd00 = 0;
    AK::MemoryMgr::Free(0,pvVar2);
    DAT_14c7fdcf8 = (void *)0x0;
    DAT_14c7fdd04 = 0;
  }
  return;
}



// FUNCTION 145372ec0 FUN_145372ec0 body=233 status=ok
// SIG undefined FUN_145372ec0(void)

undefined8 FUN_145372ec0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  __uint64 _Var8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  iVar4 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar4 = 1;
  }
  _Var8 = (ulonglong)(iVar4 + uVar2) * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    puVar7 = AK::MemoryMgr::Malloc(0,_Var8);
    if (puVar7 != (undefined8 *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (puVar6 = puVar7, (undefined8 *)*param_1 != puVar7)) {
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)puVar6 = 0;
            puVar6[1] = 0;
            *(undefined4 *)(puVar6 + 2) = 0;
          }
          lVar3 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar6 + (lVar3 - (longlong)puVar7));
          uVar5 = puVar1[1];
          *puVar6 = *puVar1;
          puVar6[1] = uVar5;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar3 + (0x10 - (longlong)puVar7));
          uVar5 = puVar1[1];
          puVar6[2] = *puVar1;
          puVar6[3] = uVar5;
          puVar6[4] = *(undefined8 *)((longlong)puVar6 + lVar3 + (0x20 - (longlong)puVar7));
          puVar6 = puVar6 + 5;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145372f8c;
    }
  }
  else {
    puVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var8);
    if (puVar7 != (undefined8 *)0x0) {
LAB_145372f8c:
      *param_1 = (longlong)puVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar4 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145372fb0 FUN_145372fb0 body=32 status=ok
// SIG undefined FUN_145372fb0(void)

undefined8 * FUN_145372fb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d43048;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 145372fd0 FUN_145372fd0 body=269 status=ok
// SIG undefined FUN_145372fd0(void)

undefined8 *
FUN_145372fd0(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  
  psVar4 = *(short **)(param_3 + 8);
  if (*psVar4 != -2) {
    *param_2 = 0x60;
    return param_2;
  }
  uVar1 = psVar4[7];
  uVar2 = psVar4[6];
  uVar3 = *(undefined4 *)(psVar4 + 10);
  *param_4 = *(undefined4 *)(psVar4 + 2);
  param_4[1] = uVar3;
  param_4[2] = ((uVar2 & 0x3ff) << 6 ^ (((uint)uVar1 ^ param_4[2]) & 0x3f ^ param_4[2]) & 0xffff003f
               ) & 0xfff8ffff;
  param_4[4] = *(undefined4 *)(psVar4 + 2);
  param_4[5] = *(uint *)(param_3 + 0x10) / (uint)(ushort)psVar4[6];
  if (*(int *)(param_3 + 0x1c) == 0) {
    param_4[8] = *(undefined4 *)(param_3 + 0x14);
    iVar5 = *(int *)(param_3 + 0x14) + *(int *)(param_3 + 0x10);
  }
  else {
    uVar1 = psVar4[6];
    param_4[8] = (uint)uVar1 * *(int *)(param_3 + 0x18) + *(int *)(param_3 + 0x14);
    iVar5 = (*(int *)(param_3 + 0x1c) + 1) * (uint)uVar1 + *(int *)(param_3 + 0x14);
  }
  param_4[9] = iVar5;
  uVar1 = psVar4[6];
  iVar5 = *(int *)(psVar4 + 2);
  *param_2 = 1;
  param_4[7] = (float)((uint)uVar1 * iVar5) * 0.001;
  param_4[6] = (uint)(ushort)psVar4[6];
  *(short *)(param_1 + 0x18) = psVar4[6];
  return param_2;
}



// FUNCTION 1453730e0 FUN_1453730e0 body=76 status=ok
// SIG undefined FUN_1453730e0(void)

void FUN_1453730e0(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 145373150 FUN_145373150 body=504 status=ok
// SIG undefined FUN_145373150(void)

int * FUN_145373150(longlong param_1,int *param_2,longlong param_3,uint param_4,undefined8 *param_5)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined2 uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  ushort local_res18;
  
  uVar7 = (undefined2)param_4;
  if (*(int *)(param_3 + 0x20) == 0) {
    iVar2 = FUN_1453afcc0(param_3);
    if (iVar2 != 0x2d) {
      *param_2 = iVar2;
      param_2[1] = 0;
      return param_2;
    }
    param_4 = param_4 & 0xffff;
  }
  uVar1 = *(ushort *)(param_1 + 0x18);
  uVar9 = *(uint *)(param_3 + 0x20) / (uint)uVar1;
  if ((*(uint *)(param_3 + 0x20) == 0) && ((*(byte *)(param_3 + 0x42) & 1) != 0)) {
LAB_145373294:
    param_2[0] = 2;
    param_2[1] = 0;
  }
  else {
    if ((param_4 & 0xffff) < uVar9) {
      uVar9 = param_4 & 0xffff;
    }
    uVar4 = (uint)*(byte *)(param_5 + 1);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      pvVar3 = AK::MemoryMgr::Malloc(5,(ulonglong)((param_4 & 0xffff) * uVar4 * 2));
      *(void **)(param_1 + 0x20) = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_145373294;
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar10 = (uint)uVar1;
    if (uVar5 == 0) {
      if (*(void **)(param_1 + 8) != (void *)0x0) {
        AK::MemoryMgr::Free(5,*(void **)(param_1 + 8));
        *(undefined8 *)(param_1 + 8) = 0;
      }
      pvVar3 = *(void **)(param_3 + 0x18);
      iVar2 = (uVar9 & 0xffff) * uVar10;
      *(int *)(param_1 + 0x14) = iVar2;
      uVar5 = *(int *)(param_3 + 0x20) - iVar2;
      if ((uVar5 < uVar10) && (uVar5 != 0)) {
        _Dst = AK::MemoryMgr::Malloc(5,(ulonglong)uVar1);
        *(void **)(param_1 + 8) = _Dst;
        if (_Dst == (void *)0x0) goto LAB_145373294;
        local_res18 = (ushort)uVar5;
        *(uint *)(param_1 + 0x10) = uVar5 & 0xffff;
        memcpy(_Dst,(void *)((ulonglong)*(uint *)(param_1 + 0x14) + *(longlong *)(param_3 + 0x18)),
               (ulonglong)local_res18);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10);
      }
    }
    else {
      uVar10 = uVar10 - uVar5;
      if (*(uint *)(param_3 + 0x20) < uVar10) goto LAB_145373294;
      memcpy((void *)((ulonglong)uVar5 + *(longlong *)(param_1 + 8)),*(void **)(param_3 + 0x18),
             (ulonglong)uVar10);
      pvVar3 = *(void **)(param_1 + 8);
      uVar9 = 1;
      *(uint *)(param_1 + 0x14) = uVar10 & 0xffff;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    sVar8 = (short)uVar9;
    if (uVar4 != 0) {
      uVar6 = (ulonglong)uVar4;
      do {
        memcpy(*(void **)(param_1 + 0x20),pvVar3,(ulonglong)((uVar9 & 0xffff) * uVar4 * 2));
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *param_5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined2 *)(param_5 + 2) = uVar7;
    *(short *)((longlong)param_5 + 0x12) = sVar8;
    *(short *)(param_5 + 3) = sVar8;
    *param_2 = (sVar8 == 0) + 0x2d;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1453733d0 FUN_1453733d0 body=99 status=ok
// SIG undefined FUN_1453733d0(void)

undefined8 * FUN_1453733d0(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 145373440 FUN_145373440 body=76 status=ok
// SIG undefined FUN_145373440(void)

void FUN_145373440(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1453734b0 FUN_1453734b0 body=43 status=ok
// SIG undefined FUN_1453734b0(void)

undefined8 * FUN_1453734b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c29fe8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1453734e0 FUN_1453734e0 body=28 status=ok
// SIG undefined FUN_1453734e0(void)

undefined8 * FUN_1453734e0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149d430b0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  return param_1;
}



// FUNCTION 145373500 FUN_145373500 body=11 status=ok
// SIG undefined FUN_145373500(void)

void FUN_145373500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d430b0;
  return;
}



// FUNCTION 145373520 FUN_145373520 body=39 status=ok
// SIG undefined FUN_145373520(void)

void FUN_145373520(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(2,param_1);
  }
  return;
}



// FUNCTION 145373550 FUN_145373550 body=255 status=ok
// SIG undefined FUN_145373550(void)

undefined8 FUN_145373550(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  
  lVar7 = (param_2 & 0xffffffff) * 0x58;
  piVar6 = (int *)(DAT_14c791060 + lVar7);
  FUN_145074e40(piVar6);
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar6[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar6 + 2));
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 != 0) {
    lVar7 = DAT_14c791060 + lVar7;
    if (*(uint *)(lVar7 + 0x48) != 0) {
      plVar1 = (longlong *)
               (*(longlong *)(lVar7 + 0x40) +
               ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar7 + 0x48)) * 8);
      lVar5 = *plVar1;
      lVar4 = 0;
      while (lVar3 = lVar5, lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x10) == uVar2) {
          if (lVar4 == 0) {
            *plVar1 = *(longlong *)(lVar3 + 8);
          }
          else {
            *(longlong *)(lVar4 + 8) = *(longlong *)(lVar3 + 8);
          }
          *(int *)(lVar7 + 0x50) = *(int *)(lVar7 + 0x50) + -1;
          break;
        }
        lVar4 = lVar3;
        lVar5 = *(longlong *)(lVar3 + 8);
      }
    }
  }
  LOCK();
  *piVar6 = *piVar6 + 1;
  UNLOCK();
  if (*piVar6 == 0) {
    piVar6[1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar6 + 2));
  FUN_1450719c0(local_res10);
  (**(code **)(*param_1 + 0x10))(param_1);
  FUN_1450719f0(local_res10);
  return 0;
}



// FUNCTION 145373650 FUN_145373650 body=43 status=ok
// SIG undefined FUN_145373650(void)

undefined8 * FUN_145373650(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d430b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145373680 FUN_145373680 body=562 status=ok
// SIG undefined FUN_145373680(void)

longlong * FUN_145373680(uint *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar6;
  bool bVar7;
  
  *param_2 = 0;
  lVar5 = DAT_14c791060;
  uVar2 = *param_1;
  if (uVar2 == 0) {
    return param_2;
  }
  if (*(char *)((longlong)param_1 + 5) == '\0') {
    do {
      while (iVar3 = *(int *)(lVar5 + 0x370), iVar3 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x378));
        if (*(int *)(lVar5 + 0x370) < 0) goto LAB_1453737b7;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x378));
      }
      LOCK();
      bVar7 = iVar3 == *(int *)(lVar5 + 0x370);
      if (bVar7) {
        *(int *)(lVar5 + 0x370) = iVar3 + 1;
      }
      UNLOCK();
    } while (!bVar7);
LAB_1453737b7:
    if (*(uint *)(lVar5 + 0x3b8) == 0) {
      lVar6 = 0;
    }
    else {
      for (lVar6 = *(longlong *)
                    (*(longlong *)(lVar5 + 0x3b0) +
                    ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar5 + 0x3b8)) * 8); lVar6 != 0;
          lVar6 = *(longlong *)(lVar6 + 8)) {
        if (*(uint *)(lVar6 + 0x10) == uVar2) goto LAB_1453737e7;
      }
      lVar6 = 0;
LAB_1453737e7:
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar3 = *(int *)(lVar5 + 0x370);
    while (-1 < iVar3) {
      LOCK();
      bVar7 = iVar3 == *(int *)(lVar5 + 0x370);
      if (bVar7) {
        *(int *)(lVar5 + 0x370) = iVar3 + -1;
      }
      UNLOCK();
      if (bVar7) {
        if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar5 + 0x3a0))) {
          SetEvent(*(HANDLE *)(lVar5 + 0x3a8));
        }
        goto LAB_145373854;
      }
      iVar3 = *(int *)(lVar5 + 0x370);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x378);
  }
  else {
    do {
      while (iVar3 = *(int *)(lVar5 + 0x3c8), iVar3 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x3d0));
        if (*(int *)(lVar5 + 0x3c8) < 0) goto LAB_1453736d7;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x3d0));
      }
      LOCK();
      bVar7 = iVar3 == *(int *)(lVar5 + 0x3c8);
      if (bVar7) {
        *(int *)(lVar5 + 0x3c8) = iVar3 + 1;
      }
      UNLOCK();
    } while (!bVar7);
LAB_1453736d7:
    if (*(uint *)(lVar5 + 0x410) == 0) {
      lVar6 = 0;
    }
    else {
      for (lVar6 = *(longlong *)
                    (*(longlong *)(lVar5 + 0x408) +
                    ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar5 + 0x410)) * 8); lVar6 != 0;
          lVar6 = *(longlong *)(lVar6 + 8)) {
        if (*(uint *)(lVar6 + 0x10) == uVar2) goto LAB_145373707;
      }
      lVar6 = 0;
LAB_145373707:
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar3 = *(int *)(lVar5 + 0x3c8);
    while (-1 < iVar3) {
      LOCK();
      bVar7 = iVar3 == *(int *)(lVar5 + 0x3c8);
      if (bVar7) {
        *(int *)(lVar5 + 0x3c8) = iVar3 + -1;
      }
      UNLOCK();
      if (bVar7) {
        if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar5 + 0x3f8))) {
          SetEvent(*(HANDLE *)(lVar5 + 0x400));
        }
        goto LAB_145373854;
      }
      iVar3 = *(int *)(lVar5 + 0x3c8);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x3d0);
  }
  LeaveCriticalSection(lpCriticalSection);
LAB_145373854:
  plVar4 = (longlong *)*param_2;
  *param_2 = lVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0x14);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  return param_2;
}



// FUNCTION 1453738c0 FUN_1453738c0 body=42 status=ok
// SIG undefined FUN_1453738c0(void)

void FUN_1453738c0(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    AK::MemoryMgr::Free(2,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1453738f0 FUN_1453738f0 body=572 status=ok
// SIG undefined FUN_1453738f0(void)

undefined4 FUN_1453738f0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  bool bVar14;
  
  uVar10 = 1;
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  if (bVar1 == 0) {
    return 1;
  }
  plVar13 = param_1 + 1;
  if (*plVar13 == 0) {
    puVar8 = AK::MemoryMgr::Malloc(2,0x28);
    if (puVar8 == (undefined8 *)0x0) {
      *plVar13 = 0;
      return 0x34;
    }
    *puVar8 = 0;
    *(undefined2 *)(puVar8 + 1) = 0;
    *(undefined2 *)(puVar8 + 2) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *(undefined2 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
    *(undefined2 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
    *plVar13 = (longlong)puVar8;
  }
  plVar13 = param_1 + 1;
  uVar12 = 0;
  cVar2 = *(char *)*param_2;
  *param_2 = (char *)*param_2 + 1;
  if (bVar1 != 0) {
    do {
      pbVar6 = (byte *)*param_2;
      bVar3 = *pbVar6;
      uVar11 = (ulonglong)bVar3;
      *param_2 = pbVar6 + 1;
      iVar5 = *(int *)(pbVar6 + 1);
      *param_2 = pbVar6 + 5;
      bVar4 = pbVar6[5];
      *param_2 = pbVar6 + 7;
      if (iVar5 != 0) {
        bVar14 = bVar4 != 0;
        if (3 < bVar3) {
          uVar10 = 0x1f;
          break;
        }
        piVar9 = (int *)*plVar13;
        if (piVar9 == (int *)0x0) {
          piVar9 = AK::MemoryMgr::Malloc(2,0x28);
          if (piVar9 == (int *)0x0) {
            *plVar13 = 0;
            uVar10 = 0x34;
            break;
          }
          piVar9[0] = 0;
          piVar9[1] = 0;
          *(undefined2 *)(piVar9 + 2) = 0;
          *(undefined2 *)(piVar9 + 4) = 0;
          piVar9[3] = 0;
          *(undefined2 *)(piVar9 + 6) = 0;
          piVar9[5] = 0;
          *(undefined2 *)(piVar9 + 8) = 0;
          piVar9[7] = 0;
          *(undefined1 *)(piVar9 + 9) = 0;
          *plVar13 = (longlong)piVar9;
        }
        if (*piVar9 < 1) {
          *piVar9 = 0;
          lVar7 = *plVar13;
          if (((bool)*(char *)(lVar7 + 9 + uVar11 * 8) != bVar14) ||
             (*(int *)(lVar7 + 4 + uVar11 * 8) != iVar5)) {
            *(bool *)(lVar7 + 9 + uVar11 * 8) = bVar14;
            *(int *)(lVar7 + 4 + uVar11 * 8) = iVar5;
            (**(code **)(*(longlong *)*param_1 + 0x10))();
            (**(code **)(*(longlong *)*param_1 + 8))();
          }
        }
      }
      uVar10 = 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 < bVar1);
  }
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)0x0) {
    if (cVar2 == '\0') {
      return uVar10;
    }
    puVar8 = AK::MemoryMgr::Malloc(2,0x28);
    if (puVar8 == (undefined8 *)0x0) {
      param_1[1] = 0;
      return uVar10;
    }
    *puVar8 = 0;
    *(undefined2 *)(puVar8 + 1) = 0;
    *(undefined2 *)(puVar8 + 2) = 0;
    *(undefined2 *)(puVar8 + 3) = 0;
    *(undefined2 *)(puVar8 + 4) = 0;
    *(undefined2 *)(puVar8 + 1) = 0;
    *(undefined2 *)(puVar8 + 2) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *(undefined2 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
    *(undefined2 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
    param_1[1] = puVar8;
  }
  *(char *)((longlong)puVar8 + 0x24) = cVar2;
  return uVar10;
}



// FUNCTION 145373b30 FUN_145373b30 body=199 status=ok
// SIG undefined FUN_145373b30(void)

undefined8 FUN_145373b30(undefined8 *param_1,uint param_2,int param_3,char param_4,int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  if (param_2 < 4) {
    piVar3 = (int *)param_1[1];
    if (piVar3 == (int *)0x0) {
      piVar3 = AK::MemoryMgr::Malloc(2,0x28);
      if (piVar3 == (int *)0x0) {
        param_1[1] = 0;
        return 0x34;
      }
      piVar3[0] = 0;
      piVar3[1] = 0;
      *(undefined2 *)(piVar3 + 2) = 0;
      *(undefined2 *)(piVar3 + 4) = 0;
      piVar3[3] = 0;
      *(undefined2 *)(piVar3 + 6) = 0;
      piVar3[5] = 0;
      *(undefined2 *)(piVar3 + 8) = 0;
      piVar3[7] = 0;
      *(undefined1 *)(piVar3 + 9) = 0;
      param_1[1] = piVar3;
    }
    if (*piVar3 <= param_5) {
      *piVar3 = param_5;
      lVar1 = param_1[1];
      if ((*(char *)(lVar1 + 9 + uVar4 * 8) != param_4) ||
         (*(int *)(lVar1 + 4 + uVar4 * 8) != param_3)) {
        *(char *)(lVar1 + 9 + uVar4 * 8) = param_4;
        *(int *)(lVar1 + 4 + uVar4 * 8) = param_3;
        (**(code **)(*(longlong *)*param_1 + 0x10))();
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,uVar4);
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0x1f;
  }
  return uVar2;
}



// FUNCTION 145373c00 FUN_145373c00 body=194 status=ok
// SIG undefined FUN_145373c00(void)

undefined8 FUN_145373c00(undefined8 *param_1,uint param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = (ulonglong)param_2;
  if (puVar3 == (undefined8 *)0x0) {
    if (param_3 == '\0') {
      return 1;
    }
    puVar3 = AK::MemoryMgr::Malloc(2,0x28);
    if (puVar3 == (undefined8 *)0x0) {
      param_1[1] = 0;
      return 0x34;
    }
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 1) = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 3) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x24) = 0;
    param_1[1] = puVar3;
  }
  lVar1 = uVar4 * 8;
  *(char *)(puVar3 + uVar4 + 1) = param_3;
  lVar2 = param_1[1];
  if ((param_3 != '\0') && (*(int *)(lVar1 + 4 + lVar2) != 0)) {
    *(undefined1 *)(lVar1 + 9 + lVar2) = 0;
    *(undefined4 *)(lVar1 + 4 + lVar2) = 0;
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,uVar4);
  }
  return 1;
}



// FUNCTION 145373cd0 FUN_145373cd0 body=165 status=ok
// SIG undefined FUN_145373cd0(void)

undefined8 FUN_145373cd0(longlong param_1,int param_2,byte param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
    puVar1 = AK::MemoryMgr::Malloc(2,0x28);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return 0x34;
    }
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  *(byte *)((longlong)puVar1 + 0x24) =
       ~param_3 & *(byte *)((longlong)puVar1 + 0x24) | param_3 & (byte)param_2;
  return 1;
}



// FUNCTION 145373d80 FUN_145373d80 body=135 status=ok
// SIG undefined FUN_145373d80(void)

undefined8 *
FUN_145373d80(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
             ulonglong param_5)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_149d430d0;
  param_1[2] = param_5;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  if (param_4 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x24) = *param_4;
    *(undefined8 *)((longlong)param_1 + 0x2c) = param_4[1];
    *(undefined8 *)((longlong)param_1 + 0x34) = param_4[2];
    *(undefined8 *)((longlong)param_1 + 0x3c) = param_4[3];
    return param_1;
  }
  param_5 = param_5 & 0xffff000000000000;
  *(ulonglong *)((longlong)param_1 + 0x24) = param_5;
  *(ulonglong *)((longlong)param_1 + 0x2c) = param_5;
  *(ulonglong *)((longlong)param_1 + 0x34) = param_5;
  *(ulonglong *)((longlong)param_1 + 0x3c) = param_5;
  return param_1;
}



// FUNCTION 145373e20 FUN_145373e20 body=225 status=ok
// SIG undefined FUN_145373e20(void)

void FUN_145373e20(longlong param_1)

{
  longlong *plVar1;
  void *pvVar2;
  void *pvVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    pvVar3 = (void *)*plVar1;
    pvVar2 = pvVar3;
    if (pvVar3 != (void *)((ulonglong)*(uint *)(plVar1 + 1) * 0x10 + (longlong)pvVar3)) {
      do {
        pvVar3 = *(void **)((longlong)pvVar2 + 8);
        if (pvVar3 != (void *)0x0) {
          FUN_14539f690(pvVar3);
          AK::MemoryMgr::Free(4,pvVar3);
        }
        plVar1 = *(longlong **)(param_1 + 0x10);
        pvVar2 = (void *)((longlong)pvVar2 + 0x10);
        pvVar3 = (void *)*plVar1;
      } while (pvVar2 != (void *)((ulonglong)*(uint *)(plVar1 + 1) * 0x10 + (longlong)pvVar3));
    }
    if (pvVar3 != (void *)0x0) {
      *(undefined4 *)(plVar1 + 1) = 0;
      AK::MemoryMgr::Free(0,pvVar3);
      *plVar1 = 0;
      *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
    }
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      AK::MemoryMgr::Free(4,*(void **)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar3 != (void *)0x0) {
    FUN_14539f690(pvVar3);
    AK::MemoryMgr::Free(4,pvVar3);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 145373f10 FUN_145373f10 body=668 status=ok
// SIG undefined FUN_145373f10(void)

void * FUN_145373f10(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  if (param_2 == 0) {
    pvVar5 = (void *)FUN_145374680(param_1,param_3);
    return pvVar5;
  }
  plVar6 = (longlong *)param_1[2];
  plVar13 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = AK::MemoryMgr::Malloc(4,0x10);
    if (plVar6 == (longlong *)0x0) {
      param_1[2] = 0;
      return (void *)0x0;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    param_1[2] = (longlong)plVar6;
  }
  plVar7 = (longlong *)*plVar6;
  plVar6 = plVar7 + (ulonglong)*(uint *)(plVar6 + 1) * 2;
  for (; (plVar7 != plVar6 && (*plVar7 != param_2)); plVar7 = plVar7 + 2) {
  }
  plVar12 = plVar7 + 1;
  if (plVar7 == plVar6) {
    plVar12 = plVar13;
  }
  if (plVar12 != (longlong *)0x0) {
    return (void *)*plVar12;
  }
  lVar2 = *(longlong *)(*param_1 + 8);
  if (lVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined1 *)(lVar2 + 0x24);
  }
  pvVar5 = AK::MemoryMgr::Malloc(4,0x48);
  if (pvVar5 == (void *)0x0) {
    return (void *)0x0;
  }
  plVar6 = (longlong *)(lVar2 + 4);
  if (lVar2 == 0) {
    plVar6 = plVar13;
  }
  pvVar5 = (void *)FUN_145373d80(pvVar5,param_3,uVar11,plVar6,param_2);
  if (pvVar5 == (void *)0x0) {
    return (void *)0x0;
  }
  plVar6 = (longlong *)param_1[2];
  plVar7 = (longlong *)*plVar6;
  uVar10 = (ulonglong)*(uint *)(plVar6 + 1);
  plVar12 = plVar7 + uVar10 * 2;
  for (; (plVar7 != plVar12 && (*plVar7 != param_2)); plVar7 = plVar7 + 2) {
  }
  plVar8 = plVar7 + 1;
  if (plVar7 == plVar12) {
    plVar8 = plVar13;
  }
  if (plVar8 == (longlong *)0x0) {
    if (((*(uint *)((longlong)plVar6 + 0xc) <= uVar10) &&
        (cVar3 = FUN_145374a80(plVar6), cVar3 == '\0')) ||
       (*(uint *)((longlong)plVar6 + 0xc) <= uVar10)) goto LAB_145374173;
    uVar1 = *(uint *)(plVar6 + 1);
    *(uint *)(plVar6 + 1) = uVar1 + 1;
    plVar6 = (longlong *)((ulonglong)uVar1 * 0x10 + *plVar6);
    if (plVar6 == (longlong *)0x0) goto LAB_145374173;
    *plVar6 = param_2;
    plVar6[1] = (longlong)pvVar5;
    if (plVar6 + 1 == (longlong *)0x0) goto LAB_145374173;
  }
  else {
    *plVar8 = (longlong)pvVar5;
  }
  if (param_3 == 0) {
    return pvVar5;
  }
  plVar6 = *(longlong **)(param_2 + 0x28);
  if (plVar6 == (longlong *)0x0) {
    pvVar9 = AK::MemoryMgr::Malloc(4,0x48);
    if ((pvVar9 != (void *)0x0) &&
       (plVar6 = (longlong *)FUN_1450d25b0(pvVar9), plVar6 != (longlong *)0x0)) {
      *(longlong **)(param_2 + 0x28) = plVar6;
      plVar6[1] = param_2;
      iVar4 = (**(code **)(*plVar6 + 8))(plVar6,*(undefined8 *)(param_2 + 0x58));
      if (iVar4 == 1) goto LAB_145374112;
      (**(code **)*plVar6)(plVar6,0);
      AK::MemoryMgr::Free(4,plVar6);
      *(undefined8 *)(param_2 + 0x28) = 0;
    }
  }
  else {
LAB_145374112:
    iVar4 = FUN_1450d2960(plVar6,param_3);
    if (iVar4 == 1) {
      return pvVar5;
    }
  }
  plVar6 = (longlong *)param_1[2];
  plVar13 = (longlong *)*plVar6;
  for (plVar7 = plVar13; plVar7 != plVar13 + (ulonglong)*(uint *)(plVar6 + 1) * 2;
      plVar7 = plVar7 + 2) {
    if (*plVar7 == param_2) {
      if (plVar7 < plVar13 + (ulonglong)(*(uint *)(plVar6 + 1) - 1) * 2) {
        memmove(plVar7,plVar7 + 2,
                (ulonglong)
                ((int)(plVar13 + (ulonglong)(*(uint *)(plVar6 + 1) - 1) * 2) - (int)plVar7 &
                0xfffffff0));
      }
      *(int *)(plVar6 + 1) = (int)plVar6[1] + -1;
      break;
    }
  }
LAB_145374173:
  FUN_14539f690(pvVar5);
  AK::MemoryMgr::Free(4,pvVar5);
  return (void *)0x0;
}



// FUNCTION 1453741b0 FUN_1453741b0 body=147 status=ok
// SIG undefined FUN_1453741b0(void)

longlong FUN_1453741b0(longlong *param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    plVar1 = (longlong *)*plVar4;
    plVar4 = plVar1 + (ulonglong)*(uint *)(plVar4 + 1) * 2;
    for (; plVar1 != plVar4; plVar1 = plVar1 + 2) {
      if (*plVar1 == param_3) {
        if (plVar1 + 1 != (longlong *)0x0) {
          return plVar1[1] + uVar5 * 8 + 0x24;
        }
        break;
      }
    }
  }
  if (param_1[1] == 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 4;
    if (*(longlong *)(*param_1 + 8) == 0) {
      lVar3 = 0;
    }
    lVar2 = lVar3 + uVar5 * 8;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    return lVar2;
  }
  return uVar5 * 8 + 0x24 + param_1[1];
}



// FUNCTION 145374250 FUN_145374250 body=118 status=ok
// SIG undefined FUN_145374250(void)

void FUN_145374250(longlong param_1,ulonglong param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 != 0) && (uVar3 = param_2 & 0xffffffff, *(char *)(lVar2 + 0x28 + uVar3 * 8) == '\0')) {
    *(undefined4 *)(lVar2 + 0x24 + uVar3 * 8) = param_3;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29 + uVar3 * 8) = param_4;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) &&
     (lVar2 = *plVar1, lVar2 != (ulonglong)*(uint *)(plVar1 + 1) * 0x10 + lVar2)) {
    param_2 = param_2 & 0xffffffff;
    do {
      if (*(char *)(*(longlong *)(lVar2 + 8) + 0x28 + param_2 * 8) == '\0') {
        *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x24 + param_2 * 8) = param_3;
        *(undefined1 *)(*(longlong *)(lVar2 + 8) + 0x29 + param_2 * 8) = param_4;
      }
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x10) + 1) * 0x10 +
                      **(longlong **)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1453742d0 FUN_1453742d0 body=413 status=ok
// SIG undefined FUN_1453742d0(void)

uint FUN_1453742d0(longlong *param_1,uint param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  uVar6 = param_2 + 0x1d;
  if (((param_4 != 0) && (*(longlong *)(*param_1 + 8) != 0)) &&
     (*(int *)(*(longlong *)(*param_1 + 8) + 4 + (ulonglong)param_2 * 8) != 0)) {
    if (((*(ulonglong **)(param_4 + 0x58) == (ulonglong *)0x0) ||
        ((**(ulonglong **)(param_4 + 0x58) >> ((ulonglong)uVar6 & 0x3f) & 1) == 0)) &&
       (cVar2 = (**(code **)(*(longlong *)(param_4 + 0x28) + 0x18))(param_4 + 0x28,uVar6),
       cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar5 = (longlong *)(param_4 + 0x28);
    if (bVar1) {
      local_50 = 0;
      local_48 = 0;
      local_30 = 0;
      fVar8 = 0.0;
      local_40 = 0xff;
      local_38 = 0xff;
      local_58 = param_3;
      cVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,uVar6);
      if (cVar2 != '\0') {
        fVar8 = (float)FUN_1450c0e90(plVar5,uVar6);
      }
      if ((*(ulonglong **)(param_4 + 0x58) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_4 + 0x58) >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) {
        fVar7 = (float)FUN_1450a4f20(g_pGameSyncMgr,param_4 + 0x48,uVar6,&local_58);
        fVar8 = fVar8 + fVar7;
      }
      return (int)fVar8;
    }
  }
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar5;
    plVar5 = plVar4 + (ulonglong)*(uint *)(plVar5 + 1) * 2;
    for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
      if (*plVar4 == param_3) {
        if (plVar4 + 1 != (longlong *)0x0) {
          return (uint)(*(byte *)(plVar4[1] + 0x20) >> ((byte)param_2 & 0x1f) & 1);
        }
        break;
      }
    }
  }
  if (param_1[1] == 0) {
    bVar3 = 0;
    if (*(longlong *)(*param_1 + 8) != 0) {
      bVar3 = *(byte *)(*(longlong *)(*param_1 + 8) + 0x24);
    }
  }
  else {
    bVar3 = *(byte *)(param_1[1] + 0x20);
  }
  return (uint)(bVar3 >> ((byte)param_2 & 0x1f) & 1);
}



// FUNCTION 145374470 FUN_145374470 body=395 status=ok
// SIG undefined FUN_145374470(void)

uint FUN_145374470(longlong *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  if (param_3 != 0) {
    if (((*(ulonglong **)(param_3 + 0x58) == (ulonglong *)0x0) ||
        ((**(ulonglong **)(param_3 + 0x58) & 0x200000000) == 0)) &&
       (cVar2 = (**(code **)(*(longlong *)(param_3 + 0x28) + 0x18))(param_3 + 0x28,0x21),
       cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar5 = (longlong *)(param_3 + 0x28);
    if (bVar1) {
      local_40 = 0;
      local_38 = 0;
      local_20 = 0;
      fVar7 = 0.0;
      local_30 = 0xff;
      local_28 = 0xff;
      local_48 = param_2;
      cVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,0x21);
      if (cVar2 != '\0') {
        fVar7 = (float)FUN_1450c0e90(plVar5,0x21);
      }
      if ((*(ulonglong **)(param_3 + 0x58) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_3 + 0x58) & 0x200000000) != 0)) {
        fVar6 = (float)FUN_1450a4f20(g_pGameSyncMgr,param_3 + 0x48,0x21,&local_48);
        fVar7 = fVar7 + fVar6;
      }
      return (int)fVar7;
    }
  }
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar5;
    plVar5 = plVar4 + (ulonglong)*(uint *)(plVar5 + 1) * 2;
    for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
      if (*plVar4 == param_2) {
        if (plVar4 + 1 != (longlong *)0x0) {
          return (uint)(*(byte *)(plVar4[1] + 0x20) >> 4 & 1);
        }
        break;
      }
    }
  }
  if (param_1[1] == 0) {
    if ((*(longlong *)(*param_1 + 8) == 0) ||
       ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x24) & 0x10) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = (uint)(*(byte *)(param_1[1] + 0x20) >> 4 & 1);
  }
  return uVar3;
}



// FUNCTION 145374600 FUN_145374600 body=126 status=ok
// SIG undefined FUN_145374600(void)

void FUN_145374600(longlong param_1,byte param_2,byte param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x20) = ~param_3 & *(byte *)(lVar2 + 0x20) | param_2 & param_3;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) &&
     (lVar2 = *plVar1, lVar2 != (ulonglong)*(uint *)(plVar1 + 1) * 0x10 + lVar2)) {
    do {
      plVar1 = (longlong *)(lVar2 + 8);
      lVar2 = lVar2 + 0x10;
      *(byte *)(*plVar1 + 0x20) = ~param_3 & *(byte *)(*plVar1 + 0x20) | param_2 & param_3;
    } while (lVar2 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x10) + 1) * 0x10 +
                      **(longlong **)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 145374680 FUN_145374680 body=1009 status=ok
// SIG undefined FUN_145374680(void)

longlong * FUN_145374680(longlong *param_1,longlong *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  ushort uStackX_e;
  
  if (param_2 != (longlong *)0x0) {
    FUN_1450ad2a0(g_pRegistryMgr);
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    return (longlong *)param_1[1];
  }
  if ((param_2 == (longlong *)0x0) ||
     ((iVar5 = (**(code **)(*param_2 + 0x70))(param_2), iVar5 != 0 &&
      (iVar5 = (**(code **)(*param_2 + 0x70))(param_2), iVar5 != 10)))) {
    lVar13 = *(longlong *)(*param_1 + 8);
    if (lVar13 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined1 *)(lVar13 + 0x24);
    }
    puVar12 = (undefined8 *)(lVar13 + 4);
    if (lVar13 == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    plVar7 = AK::MemoryMgr::Malloc(4,0x48);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7[1] = (longlong)param_2;
      *plVar7 = (longlong)&PTR_FUN_149d430d0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      *(undefined1 *)(plVar7 + 4) = uVar9;
      *(undefined4 *)((longlong)plVar7 + 0x24) = 0;
      *(undefined2 *)(plVar7 + 5) = 0;
      *(undefined4 *)((longlong)plVar7 + 0x2c) = 0;
      *(undefined2 *)(plVar7 + 6) = 0;
      *(undefined4 *)((longlong)plVar7 + 0x34) = 0;
      *(undefined2 *)(plVar7 + 7) = 0;
      *(undefined4 *)((longlong)plVar7 + 0x3c) = 0;
      *(undefined2 *)(plVar7 + 8) = 0;
      if (puVar12 == (undefined8 *)0x0) {
        lVar13 = (ulonglong)uStackX_e << 0x30;
        *(longlong *)((longlong)plVar7 + 0x24) = lVar13;
        *(longlong *)((longlong)plVar7 + 0x2c) = lVar13;
        *(longlong *)((longlong)plVar7 + 0x34) = lVar13;
        *(longlong *)((longlong)plVar7 + 0x3c) = lVar13;
      }
      else {
        *(undefined8 *)((longlong)plVar7 + 0x24) = *puVar12;
        *(undefined8 *)((longlong)plVar7 + 0x2c) = puVar12[1];
        *(undefined8 *)((longlong)plVar7 + 0x34) = puVar12[2];
        *(undefined8 *)((longlong)plVar7 + 0x3c) = puVar12[3];
      }
    }
    param_1[1] = (longlong)plVar7;
    return plVar7;
  }
  sVar1 = FUN_1453742d0(param_1,0,0,param_2);
  plVar7 = (longlong *)param_1[2];
  plVar8 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)*plVar7;
    plVar7 = plVar6 + (ulonglong)*(uint *)(plVar7 + 1) * 2;
    for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
      if (*plVar6 == 0) {
        if (plVar6 + 1 != (longlong *)0x0) {
          plVar7 = (longlong *)(plVar6[1] + 0x24);
          bVar15 = plVar7 == (longlong *)0x0;
          goto LAB_145374762;
        }
        break;
      }
    }
  }
  if (param_1[1] == 0) {
    plVar7 = (longlong *)(*(longlong *)(*param_1 + 8) + 4);
    if (*(longlong *)(*param_1 + 8) == 0) {
      plVar7 = plVar8;
    }
    bVar15 = plVar7 == (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)(param_1[1] + 0x24);
    bVar15 = plVar7 == (longlong *)0x0;
  }
LAB_145374762:
  if (bVar15) {
    lVar13 = (ulonglong)uStackX_e << 0x30;
  }
  else {
    lVar13 = *plVar7;
  }
  sVar2 = FUN_1453742d0(param_1,1,0,param_2);
  plVar7 = (longlong *)param_1[2];
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)*plVar7;
    plVar7 = plVar6 + (ulonglong)*(uint *)(plVar7 + 1) * 2;
    for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
      if (*plVar6 == 0) {
        if (plVar6 + 1 != (longlong *)0x0) {
          plVar7 = (longlong *)(plVar6[1] + 0x2c);
          goto LAB_1453747fb;
        }
        break;
      }
    }
  }
  if (param_1[1] == 0) {
    plVar7 = (longlong *)(*(longlong *)(*param_1 + 8) + 4);
    if (*(longlong *)(*param_1 + 8) == 0) {
      plVar7 = plVar8;
    }
    if (plVar7 != (longlong *)0x0) {
      plVar7 = plVar7 + 1;
      goto LAB_1453747fb;
    }
LAB_145374805:
    lVar14 = (ulonglong)uStackX_e << 0x30;
  }
  else {
    plVar7 = (longlong *)(param_1[1] + 0x2c);
LAB_1453747fb:
    if (plVar7 == (longlong *)0x0) goto LAB_145374805;
    lVar14 = *plVar7;
  }
  sVar3 = FUN_1453742d0(param_1,2,0,param_2);
  plVar7 = (longlong *)param_1[2];
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)*plVar7;
    plVar7 = plVar6 + (ulonglong)*(uint *)(plVar7 + 1) * 2;
    for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
      if (*plVar6 == 0) {
        if (plVar6 + 1 != (longlong *)0x0) {
          plVar7 = (longlong *)(plVar6[1] + 0x34);
          goto LAB_145374897;
        }
        break;
      }
    }
  }
  if (param_1[1] == 0) {
    plVar7 = (longlong *)(*(longlong *)(*param_1 + 8) + 4);
    if (*(longlong *)(*param_1 + 8) == 0) {
      plVar7 = plVar8;
    }
    if (plVar7 != (longlong *)0x0) {
      plVar7 = plVar7 + 2;
      goto LAB_145374897;
    }
LAB_1453748a1:
    lVar10 = (ulonglong)uStackX_e << 0x30;
  }
  else {
    plVar7 = (longlong *)(param_1[1] + 0x34);
LAB_145374897:
    if (plVar7 == (longlong *)0x0) goto LAB_1453748a1;
    lVar10 = *plVar7;
  }
  sVar4 = FUN_1453742d0(param_1,3,0,param_2);
  plVar7 = (longlong *)param_1[2];
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)*plVar7;
    plVar7 = plVar6 + (ulonglong)*(uint *)(plVar7 + 1) * 2;
    for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
      if (*plVar6 == 0) {
        if (plVar6 + 1 != (longlong *)0x0) {
          plVar7 = (longlong *)(plVar6[1] + 0x3c);
          goto LAB_14537492e;
        }
        break;
      }
    }
  }
  if (param_1[1] == 0) {
    plVar7 = (longlong *)(*(longlong *)(*param_1 + 8) + 4);
    if (*(longlong *)(*param_1 + 8) == 0) {
      plVar7 = plVar8;
    }
    if (plVar7 != (longlong *)0x0) {
      plVar7 = plVar7 + 3;
      goto LAB_14537492e;
    }
  }
  else {
    plVar7 = (longlong *)(param_1[1] + 0x3c);
LAB_14537492e:
    if (plVar7 != (longlong *)0x0) {
      lVar11 = *plVar7;
      goto LAB_145374946;
    }
  }
  lVar11 = (ulonglong)uStackX_e << 0x30;
LAB_145374946:
  plVar7 = AK::MemoryMgr::Malloc(4,0x48);
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = (longlong)param_2;
    *plVar7 = (longlong)&PTR_FUN_149d430d0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(byte *)(plVar7 + 4) =
         sVar1 != 0 | -(sVar2 != 0) & 2U | -(sVar3 != 0) & 4U | -(sVar4 != 0) & 8U;
    *(longlong *)((longlong)plVar7 + 0x24) = lVar13;
    *(longlong *)((longlong)plVar7 + 0x2c) = lVar14;
    *(longlong *)((longlong)plVar7 + 0x34) = lVar10;
    *(longlong *)((longlong)plVar7 + 0x3c) = lVar11;
    plVar8 = plVar7;
  }
  param_1[1] = (longlong)plVar8;
  return plVar8;
}



// FUNCTION 145374a80 FUN_145374a80 body=190 status=ok
// SIG undefined FUN_145374a80(void)

undefined8 FUN_145374a80(longlong *param_1)

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
      goto LAB_145374b21;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_145374b21:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145374b40 FUN_145374b40 body=15 status=ok
// SIG undefined FUN_145374b40(void)

void FUN_145374b40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c26978;
  FUN_145373500();
  return;
}



// FUNCTION 145374b50 FUN_145374b50 body=108 status=ok
// SIG undefined FUN_145374b50(void)

void FUN_145374b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(0,0x390);
  if (pvVar1 != (void *)0x0) {
    FUN_1450e9aa0(pvVar1,param_4,param_2,param_3,param_5,0);
    return;
  }
  return;
}



// FUNCTION 145374bc0 FUN_145374bc0 body=41 status=ok
// SIG undefined FUN_145374bc0(void)

undefined8 * FUN_145374bc0(undefined8 *param_1)

{
  FUN_145353c20();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149d430d8;
  return param_1;
}



// FUNCTION 145374bf0 FUN_145374bf0 body=141 status=ok
// SIG undefined FUN_145374bf0(void)

void FUN_145374bf0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_149d430d8;
  if (param_1[2] != 0) {
    if (*(longlong *)(param_1[2] + 8) != 0) {
      FUN_145353c50();
      FUN_145354610(param_1,0);
    }
    pvVar1 = (void *)param_1[2];
    if (pvVar1 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar1 + 8) = 0;
      if (*(void **)((longlong)pvVar1 + 0x18) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar1 + 0x20) = 0;
        AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar1 + 0x18));
        *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
        *(undefined4 *)((longlong)pvVar1 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(2,pvVar1);
    }
    param_1[2] = 0;
  }
  FUN_145353c40(param_1);
  return;
}



// FUNCTION 145374c80 FUN_145374c80 body=126 status=ok
// SIG undefined FUN_145374c80(void)

void FUN_145374c80(longlong param_1,uint param_2,uint *param_3,char param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_145353dc0();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0;
    if (param_2 != 0) {
      uVar2 = (ulonglong)param_2;
      do {
        uVar1 = *param_3;
        param_3 = param_3 + 2;
        *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10) =
             *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10) | 1L << ((ulonglong)uVar1 & 0x3f);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (param_4 != '\0') {
      FUN_145354910(param_1);
    }
  }
  return;
}



// FUNCTION 145374d20 FUN_145374d20 body=93 status=ok
// SIG undefined FUN_145374d20(void)

ulonglong FUN_145374d20(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_145354cc0();
  uVar4 = uVar2 & 0xffffffff;
  if (((int)uVar2 == 1) && (uVar2 = uVar4, *(longlong *)(param_1 + 0x10) != 0)) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0;
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar4 = 0;
    if (*(int *)(lVar1 + 0x20) != 0) {
      do {
        uVar3 = (int)uVar4 + 1;
        *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10) =
             *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10) |
             1L << ((ulonglong)*(ushort *)(*(longlong *)(lVar1 + 0x18) + uVar4 * 4) & 0x3f);
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(lVar1 + 0x20));
    }
  }
  return uVar2;
}



// FUNCTION 145374d80 FUN_145374d80 body=93 status=ok
// SIG undefined FUN_145374d80(void)

undefined1 FUN_145374d80(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + -0x28);
  if (param_1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  uVar1 = (**(code **)(*plVar2 + 0x118))(plVar2,1);
  plVar2 = (longlong *)(param_1 + -0x28);
  if (param_1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  FUN_1450dabb0(plVar2);
  return uVar1;
}



// FUNCTION 145374de0 FUN_145374de0 body=76 status=ok
// SIG undefined FUN_145374de0(void)

void FUN_145374de0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + -0x28);
  if (param_1 == 0) {
    plVar1 = (longlong *)0x0;
  }
  (**(code **)(*plVar1 + 0x120))(plVar1,1);
  plVar1 = (longlong *)(param_1 + -0x28);
  if (param_1 == 0) {
    plVar1 = (longlong *)0x0;
  }
  FUN_1450dabf0(plVar1);
  return;
}



// FUNCTION 145374e30 FUN_145374e30 body=103 status=ok
// SIG undefined FUN_145374e30(void)

bool FUN_145374e30(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    pvVar1 = AK::MemoryMgr::Malloc(2,0x28);
    if (pvVar1 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar1 + 8) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
      *(void **)(param_1 + 0x10) = pvVar1;
      lVar2 = param_1 + -0x28;
      if (param_1 == 0) {
        lVar2 = 0;
      }
      lVar2 = FUN_1450d9090(lVar2);
      return lVar2 != 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    bVar3 = true;
  }
  return !bVar3;
}



// FUNCTION 145374ea0 FUN_145374ea0 body=344 status=ok
// SIG undefined FUN_145374ea0(void)

void FUN_145374ea0(longlong *param_1,undefined2 param_2,undefined8 param_3,undefined4 param_4,
                  float param_5,float param_6,char param_7)

{
  longlong lVar1;
  longlong *plVar2;
  byte *pbVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined4 local_48;
  undefined1 local_44;
  byte local_43;
  undefined4 local_40;
  
  plVar2 = param_1 + 6;
  if (param_1 == (longlong *)0x0) {
    plVar2 = (longlong *)&DAT_00000058;
  }
  lVar1 = *plVar2;
  if ((((lVar1 != 0) && (plVar2 = (longlong *)(lVar1 + 0x10), plVar2 != (longlong *)0x0)) &&
      (uVar5 = 1L << ((byte)param_2 & 0x3f), (*(ulonglong *)(param_1[2] + 0x10) & uVar5) != 0)) &&
     (puVar4 = (ulonglong *)*plVar2, puVar4 != puVar4 + (ulonglong)*(uint *)(lVar1 + 0x18) * 2)) {
    do {
      if ((*puVar4 & uVar5) != 0) {
        pbVar3 = (byte *)((longlong)param_1 + 0xac);
        local_44 = 3;
        if (param_1 == (longlong *)0x0) {
          pbVar3 = &DAT_000000d4;
        }
        local_43 = *pbVar3 >> 7;
        local_40 = (undefined4)param_1[-1];
        local_48 = param_4;
        (**(code **)(*(longlong *)puVar4[1] + 0x18))
                  ((longlong *)puVar4[1],&local_48,param_2,param_6,param_6 - param_5);
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != (ulonglong *)((ulonglong)*(uint *)(lVar1 + 0x18) * 0x10 + *plVar2));
  }
  if (param_7 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145374fee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 145375000 FUN_145375000 body=29 status=ok
// SIG undefined FUN_145375000(void)

void FUN_145375000(longlong *param_1)

{
  FUN_145074210();
                    /* WARNING: Could not recover jumptable at 0x000145375019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 145375050 FUN_145375050 body=176 status=ok
// SIG undefined FUN_145375050(void)

undefined8 * FUN_145375050(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_149d430d8;
  if (param_1[2] != 0) {
    if (*(longlong *)(param_1[2] + 8) != 0) {
      FUN_145353c50();
      FUN_145354610(param_1,0);
    }
    pvVar1 = (void *)param_1[2];
    if (pvVar1 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar1 + 8) = 0;
      if (*(void **)((longlong)pvVar1 + 0x18) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar1 + 0x20) = 0;
        AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar1 + 0x18));
        *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
        *(undefined4 *)((longlong)pvVar1 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(2,pvVar1);
    }
    param_1[2] = 0;
  }
  FUN_145353c40(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145375100 FUN_145375100 body=63 status=ok
// SIG undefined FUN_145375100(void)

undefined8 FUN_145375100(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_145369e40();
  if (lVar3 != 0) {
    FUN_14508d170(lVar3);
    LOCK();
    piVar1 = (int *)(lVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
    }
  }
  return 1;
}



// FUNCTION 145375140 FUN_145375140 body=33 status=ok
// SIG undefined FUN_145375140(void)

undefined8 * FUN_145375140(undefined8 *param_1)

{
  FUN_1453696d0();
  *param_1 = &PTR_FUN_149d43158;
  return param_1;
}



// FUNCTION 145375170 FUN_145375170 body=120 status=ok
// SIG undefined FUN_145375170(void)

undefined8 * FUN_145375170(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149d43158;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1453751f0 FUN_1453751f0 body=52 status=ok
// SIG undefined FUN_1453751f0(void)

undefined8 FUN_1453751f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1450b0bd0(DAT_14c791068,*(longlong *)(param_1 + 0x10),param_1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return 1;
}



// FUNCTION 145375230 FUN_145375230 body=22 status=ok
// SIG undefined FUN_145375230(void)

undefined8 FUN_145375230(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return 1;
}



// FUNCTION 145375250 FUN_145375250 body=222 status=ok
// SIG undefined FUN_145375250(void)

void FUN_145375250(longlong param_1,ulonglong param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  
  fVar2 = (float)FUN_14508d4d0(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x18) = param_3;
  fVar3 = (float)FUN_14508d4d0(*(undefined8 *)(param_1 + 8),param_2 & 0xffffffff);
  if (param_4 != '\0') {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    FUN_14508d4c0(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  if (fVar3 - fVar2 != 0.0) {
    plVar1 = *(longlong **)(param_1 + 8);
    local_48 = (undefined4)plVar1[4];
    local_44 = 5;
    local_40 = 0;
    (**(code **)(*plVar1 + 0x220))
              (plVar1,*(undefined4 *)(&DAT_149c27da0 + param_2 * 4),&local_48,fVar3,fVar3 - fVar2);
  }
  return;
}



// FUNCTION 145375330 FUN_145375330 body=28 status=ok
// SIG undefined FUN_145375330(void)

undefined4 * FUN_145375330(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 145375350 FUN_145375350 body=3 status=ok
// SIG undefined FUN_145375350(void)

void FUN_145375350(void)

{
  return;
}



// FUNCTION 145375360 FUN_145375360 body=242 status=ok
// SIG undefined FUN_145375360(void)

undefined8 FUN_145375360(uint *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = (param_3 + 1U) * 2;
  *param_1 = param_3 + 1U;
  if (param_1[5] < uVar1) {
    FUN_1453769e0(param_1 + 2,uVar1 - param_1[5]);
  }
  if (param_1[9] < *param_1 * 2) {
    FUN_1453769e0(param_1 + 6,*param_1 * 2 - param_1[9]);
  }
  lVar2 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)*param_1 * 0xc,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkVBAP.cpp"
                     ,0x12f);
  *(longlong *)(param_1 + 10) = lVar2;
  if (lVar2 == 0) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      param_1[4] = 0;
      AK::MemoryMgr::Free(5,*(void **)(param_1 + 2));
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[5] = 0;
    }
    if (*(void **)(param_1 + 6) != (void *)0x0) {
      param_1[8] = 0;
      AK::MemoryMgr::Free(5,*(void **)(param_1 + 6));
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[9] = 0;
    }
    if (*(longlong *)(param_1 + 10) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 0x34;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 145375460 FUN_145375460 body=117 status=ok
// SIG undefined FUN_145375460(void)

void FUN_145375460(longlong param_1,longlong *param_2)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1453754e0 FUN_1453754e0 body=978 status=ok
// SIG undefined FUN_1453754e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1453754e0(uint *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 auStack_110 [4];
  float fStack_ec;
  undefined8 local_e8;
  
  uVar9 = (ulonglong)*param_1 * 8;
  uVar6 = uVar9 + 0xf;
  if (uVar6 <= uVar9) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_110[0] = 0x145375564;
  lVar4 = -(uVar6 & 0xfffffffffffffff0);
  uVar6 = uVar9 + 0xf;
  lVar3 = (longlong)&local_e8 + lVar4;
  if (uVar6 <= uVar9) {
    uVar6 = 0xffffffffffffff0;
  }
  local_e8 = lVar3;
  *(undefined8 *)((longlong)auStack_110 + lVar4) = 0x145375585;
  lVar5 = -(uVar6 & 0xfffffffffffffff0);
  lVar1 = (longlong)&local_e8 + lVar5 + lVar4;
  lVar10 = lVar3;
  if (param_3 != 0) {
    pfVar8 = (float *)((longlong)&local_e8 + lVar5 + lVar4 + 4);
    lVar7 = 0;
    uVar6 = (ulonglong)param_3;
    do {
      fVar12 = *(float *)(lVar7 + 4 + param_2);
      fVar13 = *(float *)(lVar7 + 8 + param_2);
      if (fVar12 <= 3.1415927) {
        if (fVar12 < -3.1415927) {
          fVar12 = fVar12 + 6.2831855;
        }
      }
      else {
        fVar12 = fVar12 + -6.2831855;
      }
      if (fVar13 <= 1.5707964) {
        if (fVar13 < -1.5707964) {
          fVar13 = fVar13 + 3.1415927;
        }
      }
      else {
        fVar13 = fVar13 + -3.1415927;
      }
      lVar10 = *(longlong *)(param_1 + 10);
      *(undefined8 *)((longlong)auStack_110 + lVar5 + lVar4) = 0x145375644;
      uVar11 = FUN_145376cc3(fVar13,fVar12);
      fVar14 = (float)((ulonglong)uVar11 >> 0x20);
      *(int *)(lVar7 + 8 + lVar10) = (int)uVar11;
      *(float *)(lVar7 + lVar10) = extraout_XMM0_Dd * fVar14;
      *(float *)(lVar7 + 4 + lVar10) = extraout_XMM0_Dc * fVar14;
      *(float *)((lVar3 - lVar1) + (longlong)pfVar8) = fVar13;
      *(float *)((lVar3 - lVar1) + -4 + (longlong)pfVar8) = fVar12;
      lVar10 = *(longlong *)(param_1 + 10);
      fVar12 = *(float *)(lVar7 + 8 + lVar10);
      fVar15 = -*(float *)(lVar7 + lVar10);
      fVar14 = -*(float *)(lVar7 + 4 + lVar10);
      *(undefined8 *)((longlong)auStack_110 + lVar5 + lVar4) = 0x1453756af;
      fVar13 = atan2f(fVar12,fVar15);
      pfVar8[-1] = fVar13;
      *(undefined8 *)((longlong)auStack_110 + lVar5 + lVar4) = 0x1453756e7;
      fVar12 = asinf(fVar14 / SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar14 * fVar14));
      *pfVar8 = fVar12;
      if (fVar13 <= 3.1415927) {
        if (fVar13 < -3.1415927) {
          fVar13 = fVar13 + 6.2831855;
          goto LAB_145375703;
        }
      }
      else {
        fVar13 = fVar13 - 6.2831855;
LAB_145375703:
        pfVar8[-1] = fVar13;
      }
      if (fVar12 <= 1.5707964) {
        if (fVar12 < -1.5707964) {
          fVar12 = fVar12 + 3.1415927;
          goto LAB_145375721;
        }
      }
      else {
        fVar12 = fVar12 - 3.1415927;
LAB_145375721:
        *pfVar8 = fVar12;
      }
      lVar7 = lVar7 + 0xc;
      pfVar8 = pfVar8 + 2;
      uVar6 = uVar6 - 1;
      lVar10 = local_e8;
    } while (uVar6 != 0);
  }
  uVar6 = (ulonglong)(*param_1 - 1);
  lVar3 = *(longlong *)(param_1 + 10);
  *(undefined4 *)(lVar3 + uVar6 * 0xc) = 0xb33bbd2e;
  *(undefined4 *)(lVar3 + 4 + uVar6 * 0xc) = 0x80000000;
  *(undefined4 *)(lVar3 + 8 + uVar6 * 0xc) = 0xbf800000;
  uVar2 = *param_1;
  *(undefined4 *)(lVar10 + (ulonglong)(uVar2 - 1) * 8) = 0;
  *(undefined4 *)(lVar10 + 4 + (ulonglong)(uVar2 - 1) * 8) = 0xbfc90fdb;
  uVar6 = (ulonglong)(*param_1 - 1);
  uVar9 = (ulonglong)(*param_1 - 1);
  lVar3 = *(longlong *)(param_1 + 10);
  fVar12 = *(float *)(lVar3 + 8 + uVar6 * 0xc);
  fVar15 = -*(float *)(lVar3 + uVar6 * 0xc);
  fVar14 = -*(float *)(lVar3 + 4 + uVar6 * 0xc);
  *(undefined8 *)((longlong)auStack_110 + lVar5 + lVar4) = 0x1453757b9;
  fVar13 = atan2f(fVar12,fVar15);
  *(float *)(lVar1 + uVar9 * 8) = fVar13;
  *(undefined8 *)((longlong)auStack_110 + lVar5 + lVar4) = 0x1453757f1;
  fVar12 = asinf(fVar14 / SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar14 * fVar14));
  *(float *)((longlong)&local_e8 + uVar9 * 8 + lVar5 + lVar4 + 4) = fVar12;
  if (fVar13 <= 3.1415927) {
    if (fVar13 < -3.1415927) {
      fVar13 = fVar13 + 6.2831855;
      goto LAB_145375810;
    }
  }
  else {
    fVar13 = fVar13 - 6.2831855;
LAB_145375810:
    *(float *)(lVar1 + uVar9 * 8) = fVar13;
  }
  if (fVar12 <= 1.5707964) {
    if (-1.5707964 <= fVar12) goto LAB_145375835;
    fVar12 = fVar12 + 3.1415927;
  }
  else {
    fVar12 = fVar12 - 3.1415927;
  }
  *(float *)((longlong)&local_e8 + uVar9 * 8 + lVar5 + lVar4 + 4) = fVar12;
LAB_145375835:
  *(undefined8 *)((longlong)auStack_110 + lVar5 + lVar4) = 0x14537584a;
  FUN_145375e10(param_1,lVar10,param_1 + 2,param_1 + 6);
  *(undefined8 *)((longlong)auStack_110 + lVar5 + lVar4) = 0x14537585f;
  FUN_145375e10(param_1,lVar1,param_1 + 2,param_1 + 6);
  return;
}



// FUNCTION 1453758c0 FUN_1453758c0 body=528 status=ok
// SIG undefined FUN_1453758c0(void)

void FUN_1453758c0(longlong param_1,float param_2,float param_3,uint param_4,void *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_78;
  float local_74;
  float local_70;
  
  fVar2 = -4.712389;
  if (param_3 <= 1.5707964) {
    fVar1 = 1.5707964;
  }
  else {
    fVar1 = -4.712389;
  }
  fVar1 = fVar1 + param_3;
  fVar1 = fVar1 * 1.2732395 - ABS(fVar1) * fVar1 * 0.4052847;
  fVar1 = (ABS(fVar1) * fVar1 - fVar1) * 0.225 + fVar1;
  if (param_2 <= 1.5707964) {
    fVar2 = 1.5707964;
  }
  fVar2 = fVar2 + param_2;
  fVar2 = fVar2 * 1.2732395 - ABS(fVar2) * fVar2 * 0.4052847;
  fVar3 = ((ABS(fVar2) * fVar2 - fVar2) * 0.225 + fVar2) * fVar1;
  fVar2 = param_2 * 1.2732395 - ABS(param_2) * param_2 * 0.4052847;
  fVar1 = ((ABS(fVar2) * fVar2 - fVar2) * 0.225 + fVar2) * fVar1;
  fVar2 = param_3 * 1.2732395 - ABS(param_3) * param_3 * 0.4052847;
  if (param_4 != 0) {
    memset(param_5,0,(ulonglong)param_4 << 2);
  }
  if (param_3 <= 0.0) {
    FUN_145376700(param_1 + 0x18,CONCAT44(fVar1,fVar3),param_5);
  }
  else {
    local_78 = fVar3;
    local_74 = fVar1;
    local_70 = (ABS(fVar2) * fVar2 - fVar2) * 0.225 + fVar2;
    FUN_145376810(param_1 + 8,&local_78);
  }
  FUN_145375bd0((ulonglong)param_4,param_5);
  return;
}



// FUNCTION 145375ad0 FUN_145375ad0 body=251 status=ok
// SIG undefined FUN_145375ad0(void)

void FUN_145375ad0(longlong param_1,float param_2,float param_3,float param_4,uint param_5,
                  void *param_6)

{
  float local_48;
  float local_44;
  float local_40;
  
  if (param_5 != 0) {
    memset(param_6,0,(ulonglong)param_5 << 2);
  }
  local_40 = 0.0;
  if (param_4 <= 0.0) {
    FUN_145376700(param_1 + 0x18,CONCAT44(param_3,param_2),param_6);
  }
  else {
    local_48 = SQRT(param_2 * param_2 + param_3 * param_3 + param_4 * param_4);
    if (local_48 == 0.0) {
      local_44 = 0.0;
      local_48 = 0.0;
    }
    else {
      local_48 = 1.0 / local_48;
      local_40 = local_48 * param_4;
      local_44 = local_48 * param_3;
      local_48 = local_48 * param_2;
    }
    FUN_145376810(param_1 + 8,&local_48,param_6);
  }
  return;
}



// FUNCTION 145375bd0 FUN_145375bd0 body=571 status=ok
// SIG undefined FUN_145375bd0(void)

void FUN_145375bd0(uint param_1,undefined1 (*param_2) [16])

{
  longlong lVar1;
  float *pfVar2;
  undefined1 *puVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar10 = 0;
  auVar14 = ZEXT816(0);
  if (param_1 == 0) {
    return;
  }
  uVar8 = uVar10;
  if (7 < param_1) {
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    do {
      iVar6 = (int)uVar8;
      pfVar5 = (float *)(*param_2 + uVar8 * 4);
      uVar7 = iVar6 + 8;
      uVar8 = (ulonglong)uVar7;
      fVar15 = fVar15 + *pfVar5;
      fVar16 = fVar16 + pfVar5[1];
      fVar17 = fVar17 + pfVar5[2];
      fVar18 = fVar18 + pfVar5[3];
      pfVar5 = (float *)(*param_2 + (ulonglong)(iVar6 + 4) * 4);
      auVar12._0_4_ = auVar14._0_4_ + *pfVar5;
      auVar12._4_4_ = auVar14._4_4_ + pfVar5[1];
      auVar12._8_4_ = auVar14._8_4_ + pfVar5[2];
      auVar12._12_4_ = auVar14._12_4_ + pfVar5[3];
      auVar14 = auVar12;
    } while (uVar7 < (param_1 & 0xfffffff8));
    fVar17 = fVar17 + auVar12._8_4_;
    fVar18 = fVar18 + auVar12._12_4_;
    auVar13._0_4_ = fVar17 + fVar15 + auVar12._0_4_;
    auVar13._4_4_ = fVar18 + fVar16 + auVar12._4_4_;
    auVar13._8_4_ = fVar17 + fVar17;
    auVar13._12_4_ = fVar18 + fVar18;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = auVar13._0_4_ + auVar13._4_4_;
  }
  uVar7 = (uint)uVar8;
  if (uVar7 < param_1) {
    if (3 < param_1 - uVar7) {
      pfVar5 = (float *)(*param_2 + uVar8 * 4 + 8);
      uVar4 = ((param_1 - uVar7) - 4 >> 2) + 1;
      uVar11 = (ulonglong)uVar4;
      uVar7 = uVar7 + uVar4 * 4;
      uVar8 = uVar8 + (ulonglong)uVar4 * 4;
      do {
        auVar14._0_4_ = auVar14._0_4_ + pfVar5[-2] + pfVar5[-1] + *pfVar5 + pfVar5[1];
        pfVar5 = pfVar5 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      if (param_1 <= uVar7) goto LAB_145375cc2;
    }
    pfVar5 = (float *)(*param_2 + uVar8 * 4);
    uVar8 = (ulonglong)(param_1 - uVar7);
    do {
      auVar14._0_4_ = auVar14._0_4_ + *pfVar5;
      pfVar5 = pfVar5 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
LAB_145375cc2:
  if (auVar14._0_4_ <= 0.0) {
    return;
  }
  fVar15 = 1.0 / auVar14._0_4_;
  if (0xf < param_1) {
    uVar7 = 8;
    do {
      pfVar5 = (float *)(*param_2 + uVar10 * 4);
      fVar16 = pfVar5[1];
      fVar17 = pfVar5[2];
      fVar18 = pfVar5[3];
      pfVar2 = (float *)(*param_2 + uVar10 * 4);
      *pfVar2 = *pfVar5 * fVar15;
      pfVar2[1] = fVar16 * fVar15;
      pfVar2[2] = fVar17 * fVar15;
      pfVar2[3] = fVar18 * fVar15;
      uVar9 = (int)uVar10 + 0x10;
      uVar10 = (ulonglong)uVar9;
      pfVar5 = (float *)(*param_2 + (ulonglong)(uVar7 - 4) * 4);
      fVar16 = pfVar5[1];
      fVar17 = pfVar5[2];
      fVar18 = pfVar5[3];
      pfVar2 = (float *)(*param_2 + (ulonglong)(uVar7 - 4) * 4);
      *pfVar2 = *pfVar5 * fVar15;
      pfVar2[1] = fVar16 * fVar15;
      pfVar2[2] = fVar17 * fVar15;
      pfVar2[3] = fVar18 * fVar15;
      pfVar5 = (float *)(*param_2 + (ulonglong)uVar7 * 4);
      fVar16 = pfVar5[1];
      fVar17 = pfVar5[2];
      fVar18 = pfVar5[3];
      pfVar2 = (float *)(*param_2 + (ulonglong)uVar7 * 4);
      *pfVar2 = *pfVar5 * fVar15;
      pfVar2[1] = fVar16 * fVar15;
      pfVar2[2] = fVar17 * fVar15;
      pfVar2[3] = fVar18 * fVar15;
      uVar4 = uVar7 + 4;
      uVar7 = uVar7 + 0x10;
      pfVar5 = (float *)(*param_2 + (ulonglong)uVar4 * 4);
      fVar16 = pfVar5[1];
      fVar17 = pfVar5[2];
      fVar18 = pfVar5[3];
      pfVar2 = (float *)(*param_2 + (ulonglong)uVar4 * 4);
      *pfVar2 = *pfVar5 * fVar15;
      pfVar2[1] = fVar16 * fVar15;
      pfVar2[2] = fVar17 * fVar15;
      pfVar2[3] = fVar18 * fVar15;
    } while (uVar9 < (param_1 & 0xfffffff0));
  }
  uVar7 = (uint)uVar10;
  if (uVar7 < param_1) {
    uVar8 = uVar10;
    if (3 < param_1 - uVar7) {
      lVar1 = uVar10 * 4;
      uVar4 = ((param_1 - uVar7) - 4 >> 2) + 1;
      uVar11 = (ulonglong)uVar4;
      uVar7 = uVar7 + uVar4 * 4;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + (ulonglong)uVar4 * 4;
      pfVar5 = (float *)(*param_2 + lVar1 + 8);
      do {
        pfVar5[-2] = fVar15 * pfVar5[-2];
        pfVar5[-1] = fVar15 * pfVar5[-1];
        auVar14 = ZEXT416((uint)(fVar15 * pfVar5[1]));
        *pfVar5 = fVar15 * *pfVar5;
        pfVar5[1] = fVar15 * pfVar5[1];
        uVar11 = uVar11 - 1;
        pfVar5 = pfVar5 + 4;
      } while (uVar11 != 0);
      if (param_1 <= uVar7) goto LAB_145375dd4;
    }
    uVar8 = (ulonglong)(param_1 - (int)uVar8);
    pfVar5 = (float *)(*param_2 + uVar10 * 4);
    do {
      *pfVar5 = fVar15 * *pfVar5;
      uVar8 = uVar8 - 1;
      pfVar5 = pfVar5 + 1;
    } while (uVar8 != 0);
  }
LAB_145375dd4:
  puVar3 = *param_2;
  for (; param_2 < (undefined1 (*) [16])(puVar3 + ((ulonglong)(param_1 + 7) & 0xfffffff8) * 4);
      param_2 = param_2 + 1) {
    auVar14 = sqrtps(auVar14,*param_2);
    *param_2 = auVar14;
  }
  return;
}



// FUNCTION 145375e10 FUN_145375e10 body=1634 status=ok
// SIG undefined FUN_145375e10(void)

void FUN_145375e10(uint *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong uVar16;
  
  uVar20 = *param_1;
  uVar14 = 0;
  if (uVar20 != 2) {
    do {
      uVar6 = (uint)uVar14;
      uVar15 = uVar6 + 1;
      if (uVar15 < uVar20 - 1) {
        do {
          uVar16 = (ulonglong)uVar15;
          uVar17 = uVar15 + 1;
          if (uVar17 < uVar20) {
            do {
              uVar12 = (ulonglong)uVar17;
              uVar20 = uVar20 - 1;
              if (((uVar6 == uVar20) || (uVar15 == uVar20)) || (uVar17 == uVar20)) {
                bVar8 = true;
              }
              else {
                bVar8 = false;
              }
              plVar13 = param_4;
              if (!bVar8) {
                plVar13 = param_3;
              }
              cVar10 = FUN_145376480(param_1,param_2,uVar14,uVar16,uVar17);
              if (cVar10 == '\0') {
                puVar19 = (uint *)*plVar13;
                bVar9 = false;
                uVar20 = *(uint *)(plVar13 + 1);
                puVar18 = puVar19 + (ulonglong)uVar20 * 0x10;
                if (puVar19 != puVar18) {
                  do {
                    if (bVar9) goto LAB_1453763a8;
                    if (((uVar6 == *puVar19) && (uVar15 == puVar19[1])) && (uVar17 == puVar19[2])) {
                      bVar9 = true;
                    }
                    puVar19 = puVar19 + 0x10;
                  } while (puVar19 != puVar18);
                  if (bVar9) goto LAB_1453763a8;
                }
                uVar4 = *(uint *)((longlong)plVar13 + 0xc);
                if (uVar20 < uVar4) {
LAB_145375f98:
                  if (*(uint *)((longlong)plVar13 + 0xc) <= uVar20) goto LAB_145375fc5;
                  uVar20 = *(uint *)(plVar13 + 1);
                  *(uint *)(plVar13 + 1) = uVar20 + 1;
                  puVar19 = (uint *)((ulonglong)uVar20 * 0x40 + *plVar13);
                  if (puVar19 != (uint *)0x0) {
                    puVar19[3] = 0;
                    puVar19[4] = 0;
                    puVar19[5] = 0;
                  }
                }
                else {
                  iVar7 = (uVar4 >> 1) + uVar4;
                  if (uVar4 == 0) {
                    iVar7 = 1;
                  }
                  cVar10 = FUN_1453769e0(plVar13,iVar7);
                  if (cVar10 != '\0') goto LAB_145375f98;
LAB_145375fc5:
                  puVar19 = (uint *)0x0;
                }
                if (bVar8) {
                  puVar19[0] = 0;
                  puVar19[1] = 0;
                  puVar19[2] = 0;
                  puVar19[3] = 0;
                  puVar19[4] = 0;
                  puVar19[5] = 0;
                  puVar19[6] = 0;
                  puVar19[7] = 0;
                  puVar19[8] = 0;
                  puVar19[9] = 0;
                  puVar19[10] = 0;
                  puVar19[0xb] = 0;
                  puVar19[0xc] = 0;
                  puVar19[0xd] = 0;
                  puVar19[0xe] = 0;
                  puVar19[0xf] = 0;
                  uVar12 = uVar16;
                  if (uVar6 != *param_1 - 1) {
                    uVar12 = uVar14;
                  }
                  *puVar19 = (uint)uVar12;
                  uVar11 = uVar16;
                  if (uVar17 != *param_1 - 1) {
                    uVar11 = (ulonglong)uVar17;
                  }
                  puVar19[1] = (uint)uVar11;
                  lVar5 = *(longlong *)(param_1 + 10);
                  fVar27 = *(float *)(lVar5 + uVar12 * 0xc);
                  fVar25 = *(float *)(lVar5 + uVar11 * 0xc);
                  fVar23 = *(float *)(lVar5 + 4 + uVar11 * 0xc);
                  fVar26 = *(float *)(lVar5 + 4 + uVar12 * 0xc);
                  fVar22 = fVar27 * fVar23 - fVar25 * fVar26;
                  if ((1e-38 <= fVar22) || (fVar22 <= -1e-38)) {
                    fVar21 = 1.0 / fVar22;
                    puVar19[7] = (uint)(fVar23 / fVar22);
                    puVar19[8] = (uint)-(fVar25 * fVar21);
                    puVar19[9] = 0;
                    puVar19[10] = (uint)-(fVar21 * fVar26);
                    puVar19[0xb] = (uint)(fVar27 * fVar21);
                    puVar19[0xc] = 0;
                    puVar19[0xd] = 0;
                    puVar19[0xe] = 0;
                    puVar19[0xf] = 0;
                  }
                  else {
                    *(int *)(plVar13 + 1) = (int)plVar13[1] + -1;
                  }
                }
                else {
                  lVar5 = *(longlong *)(param_1 + 10);
                  fVar27 = *(float *)(lVar5 + 8 + uVar16 * 0xc);
                  fVar25 = *(float *)(lVar5 + uVar16 * 0xc);
                  fVar23 = *(float *)(lVar5 + 4 + uVar16 * 0xc);
                  fVar26 = *(float *)(lVar5 + 4 + uVar14 * 0xc);
                  fVar22 = *(float *)(lVar5 + uVar14 * 0xc);
                  fVar21 = *(float *)(lVar5 + 8 + uVar14 * 0xc);
                  fVar1 = *(float *)(lVar5 + uVar12 * 0xc);
                  fVar2 = *(float *)(lVar5 + 8 + uVar12 * 0xc);
                  fVar3 = *(float *)(lVar5 + 4 + uVar12 * 0xc);
                  fVar24 = (fVar22 * fVar23 * fVar2 + fVar26 * fVar27 * fVar1 +
                           fVar25 * fVar21 * fVar3) -
                           (fVar25 * fVar26 * fVar2 + fVar21 * fVar23 * fVar1 +
                           fVar22 * fVar27 * fVar3);
                  if ((1e-38 <= fVar24) || (fVar24 <= -1e-38)) {
                    *puVar19 = uVar6;
                    puVar19[1] = uVar15;
                    puVar19[2] = uVar17;
                    fVar24 = 1.0 / fVar24;
                    puVar19[7] = (uint)((fVar2 * fVar23 - fVar3 * fVar27) * fVar24);
                    puVar19[8] = (uint)((fVar3 * fVar21 - fVar2 * fVar26) * fVar24);
                    puVar19[9] = (uint)((fVar26 * fVar27 - fVar21 * fVar23) * fVar24);
                    puVar19[10] = (uint)((fVar1 * fVar27 - fVar25 * fVar2) * fVar24);
                    puVar19[0xb] = (uint)((fVar2 * fVar22 - fVar21 * fVar1) * fVar24);
                    puVar19[0xc] = (uint)((fVar25 * fVar21 - fVar22 * fVar27) * fVar24);
                    puVar19[0xd] = (uint)((fVar3 * fVar25 - fVar23 * fVar1) * fVar24);
                    puVar19[0xe] = (uint)((fVar1 * fVar26 - fVar3 * fVar22) * fVar24);
                    puVar19[0xf] = (uint)((fVar22 * fVar23 - fVar25 * fVar26) * fVar24);
                    fVar22 = (*(float *)(lVar5 + 4 + uVar16 * 0xc) +
                              *(float *)(lVar5 + 4 + uVar14 * 0xc) +
                             *(float *)(lVar5 + 4 + uVar12 * 0xc)) * 0.33333334;
                    fVar26 = (*(float *)(lVar5 + 8 + uVar14 * 0xc) +
                              *(float *)(lVar5 + 8 + uVar16 * 0xc) +
                             *(float *)(lVar5 + 8 + uVar12 * 0xc)) * 0.33333334;
                    puVar19[3] = (uint)((*(float *)(lVar5 + uVar16 * 0xc) +
                                         *(float *)(lVar5 + uVar14 * 0xc) +
                                        *(float *)(lVar5 + uVar12 * 0xc)) * 0.33333334);
                    puVar19[4] = (uint)fVar22;
                    puVar19[5] = (uint)fVar26;
                    fVar27 = (float)puVar19[3];
                    fVar25 = fVar27 * *(float *)(lVar5 + uVar12 * 0xc) +
                             fVar22 * *(float *)(lVar5 + 4 + uVar12 * 0xc) +
                             fVar26 * *(float *)(lVar5 + 8 + uVar12 * 0xc);
                    fVar23 = fVar27 * *(float *)(lVar5 + uVar16 * 0xc) +
                             fVar22 * *(float *)(lVar5 + 4 + uVar16 * 0xc) +
                             fVar26 * *(float *)(lVar5 + 8 + uVar16 * 0xc);
                    fVar27 = fVar22 * *(float *)(lVar5 + 4 + uVar14 * 0xc) +
                             fVar27 * *(float *)(lVar5 + uVar14 * 0xc) +
                             fVar26 * *(float *)(lVar5 + 8 + uVar14 * 0xc);
                    if (fVar23 <= fVar25) {
                      fVar25 = fVar23;
                    }
                    if (fVar27 <= fVar25) {
                      fVar25 = fVar27;
                    }
                    puVar19[6] = (uint)fVar25;
                  }
                  else {
                    *(int *)(plVar13 + 1) = (int)plVar13[1] + -1;
                  }
                }
              }
LAB_1453763a8:
              uVar20 = *param_1;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar20);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar20 - 1);
      }
      uVar14 = (ulonglong)(uVar6 + 1);
    } while (uVar6 + 1 < uVar20 - 2);
  }
  return;
}



// FUNCTION 145376480 FUN_145376480 body=633 status=ok
// SIG undefined FUN_145376480(void)

bool FUN_145376480(uint *param_1,float *param_2,uint param_3,uint param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = param_2[(longlong)(int)param_3 * 2 + 1];
  fVar2 = param_2[(longlong)(int)param_3 * 2];
  fVar12 = (param_2[(longlong)(int)param_5 * 2 + 1] - fVar1) *
           (param_2[(longlong)(int)param_4 * 2] - fVar2) -
           (param_2[(longlong)(int)param_4 * 2 + 1] - fVar1) *
           (param_2[(longlong)(int)param_5 * 2] - fVar2);
  if (fVar12 == 0.0) {
    bVar9 = true;
  }
  else {
    uVar8 = param_4;
    if (0.0 <= fVar12) {
      uVar8 = param_5;
      param_5 = param_4;
    }
    bVar9 = false;
    uVar10 = 0;
    if (*param_1 != 0) {
      pfVar11 = param_2;
      do {
        if (bVar9 != false) {
          return bVar9;
        }
        if (((uVar10 != param_3) && (uVar10 != param_5)) && (uVar10 != uVar8)) {
          fVar12 = *pfVar11;
          fVar3 = pfVar11[1];
          fVar4 = param_2[(longlong)(int)param_5 * 2];
          fVar5 = param_2[(longlong)(int)uVar8 * 2];
          fVar14 = fVar3 * fVar3;
          fVar13 = fVar12 * fVar12;
          fVar6 = param_2[(longlong)(int)param_5 * 2 + 1];
          fVar15 = ((fVar2 * fVar2 - fVar13) + fVar1 * fVar1) - fVar14;
          fVar7 = param_2[(longlong)(int)uVar8 * 2 + 1];
          fVar16 = ((fVar4 * fVar4 - fVar13) + fVar6 * fVar6) - fVar14;
          fVar14 = ((fVar5 * fVar5 - fVar13) + fVar7 * fVar7) - fVar14;
          bVar9 = 0.01 < (fVar16 * (fVar1 - fVar3) * (fVar5 - fVar12) +
                          (fVar6 - fVar3) * (fVar2 - fVar12) * fVar14 +
                         (fVar4 - fVar12) * fVar15 * (fVar7 - fVar3)) -
                         ((fVar6 - fVar3) * fVar15 * (fVar5 - fVar12) +
                          (fVar4 - fVar12) * (fVar1 - fVar3) * fVar14 +
                         fVar16 * (fVar2 - fVar12) * (fVar7 - fVar3));
        }
        uVar10 = uVar10 + 1;
        pfVar11 = pfVar11 + 2;
      } while (uVar10 < *param_1);
    }
  }
  return bVar9;
}



// FUNCTION 145376700 FUN_145376700 body=266 status=ok
// SIG undefined FUN_145376700(void)

void FUN_145376700(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint *puVar3;
  uint *puVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float local_res8;
  float fStackX_c;
  
  auVar6._0_12_ = ZEXT812(0x7fffffff);
  auVar6._12_4_ = 0;
  local_res8 = (float)param_2;
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  if ((ABS(local_res8) < 0.000345267) && (ABS(fStackX_c) < 0.000345267)) {
    local_res8 = 1.0;
    fStackX_c = 0.0;
  }
  puVar3 = (uint *)*param_1;
  puVar4 = puVar3 + (ulonglong)*(uint *)(param_1 + 1) * 0x10;
  for (; puVar3 != puVar4; puVar3 = puVar3 + 0x10) {
    uVar1 = puVar3[1];
    fVar8 = fStackX_c * (float)puVar3[8] + local_res8 * (float)puVar3[7];
    fVar7 = fStackX_c * (float)puVar3[0xb] + local_res8 * (float)puVar3[10];
    if ((-1e-05 <= fVar8) && (-1e-05 <= fVar7)) {
      fVar5 = fVar7 * fVar7 + fVar8 * fVar8;
      if (1.1920929e-07 <= fVar5) {
        auVar2._4_4_ = fVar5;
        auVar2._0_4_ = fVar5;
        auVar2._8_4_ = fVar5;
        auVar2._12_4_ = fVar5;
        auVar6 = rcpps(auVar6,auVar2);
        *(float *)(param_3 + (ulonglong)*puVar3 * 4) =
             fVar8 * fVar8 * auVar6._0_4_ + *(float *)(param_3 + (ulonglong)*puVar3 * 4);
        *(float *)(param_3 + (ulonglong)uVar1 * 4) =
             fVar7 * fVar7 * auVar6._0_4_ + *(float *)(param_3 + (ulonglong)uVar1 * 4);
      }
    }
  }
  return;
}



// FUNCTION 145376810 FUN_145376810 body=450 status=ok
// SIG undefined FUN_145376810(void)

void FUN_145376810(undefined8 *param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  
  puVar4 = (uint *)*param_1;
  puVar5 = puVar4 + (ulonglong)*(uint *)(param_1 + 1) * 0x10;
  if (puVar4 != puVar5) {
    pfVar6 = (float *)(puVar4 + 5);
    fVar1 = param_2[2];
    fVar2 = *param_2;
    fVar3 = param_2[1];
    do {
      if (pfVar6[1] <= fVar2 * pfVar6[-2] + fVar3 * pfVar6[-1] + fVar1 * *pfVar6) {
        fVar9 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
        local_78 = (float)*(undefined8 *)param_2;
        fVar10 = fVar9 * pfVar6[5] + local_78 * pfVar6[2] + fVar1 * pfVar6[8];
        fVar11 = fVar9 * pfVar6[6] + local_78 * pfVar6[3] + fVar1 * pfVar6[9];
        fVar9 = fVar9 * pfVar6[7] + local_78 * pfVar6[4] + fVar1 * pfVar6[10];
        if (((-1e-05 <= fVar10) && (-1e-05 <= fVar11)) && (-1e-05 <= fVar9)) {
          fVar7 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
          if (1e-38 <= fVar7) {
            auVar8._4_4_ = fVar7;
            auVar8._0_4_ = fVar7;
            auVar8._8_4_ = fVar7;
            auVar8._12_4_ = fVar7;
            auVar8 = rcpps(ZEXT416((uint)(fVar1 * pfVar6[9])),auVar8);
            fVar7 = auVar8._0_4_;
            *(float *)(param_3 + (ulonglong)*puVar4 * 4) =
                 fVar10 * fVar10 * fVar7 + *(float *)(param_3 + (ulonglong)*puVar4 * 4);
            *(float *)(param_3 + (ulonglong)(uint)pfVar6[-4] * 4) =
                 fVar7 * fVar11 * fVar11 + *(float *)(param_3 + (ulonglong)(uint)pfVar6[-4] * 4);
            *(float *)(param_3 + (ulonglong)(uint)pfVar6[-3] * 4) =
                 fVar7 * fVar9 * fVar9 + *(float *)(param_3 + (ulonglong)(uint)pfVar6[-3] * 4);
          }
        }
      }
      puVar4 = puVar4 + 0x10;
      pfVar6 = pfVar6 + 0x10;
    } while (puVar4 != puVar5);
  }
  return;
}



// FUNCTION 1453769e0 FUN_1453769e0 body=631 status=ok
// SIG undefined FUN_1453769e0(void)

undefined8 FUN_1453769e0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  __uint64 _Var7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  uVar12 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var7 = (ulonglong)uVar12 << 6;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malloc(5,_Var7);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar5)) {
      uVar11 = 0;
      if (3 < uVar8) {
        puVar6 = (undefined4 *)((longlong)pvVar5 + 0x14);
        lVar9 = -(longlong)pvVar5;
        lVar13 = lVar9 + -0x14;
        lVar10 = (uVar8 - 4 >> 2) + 1;
        uVar11 = lVar10 * 4;
        do {
          if ((undefined8 *)(puVar6 + -5) != (undefined8 *)0x0) {
            *(undefined8 *)(puVar6 + -2) = 0;
            *puVar6 = 0;
          }
          lVar2 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar13);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + -5) = *puVar1;
          *(undefined8 *)(puVar6 + -3) = uVar4;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + 0x10 + lVar13);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + -1) = *puVar1;
          *(undefined8 *)(puVar6 + 1) = uVar4;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + 0x20 + lVar13);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 3) = *puVar1;
          *(undefined8 *)(puVar6 + 5) = uVar4;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + 0x30 + lVar13);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 7) = *puVar1;
          *(undefined8 *)(puVar6 + 9) = uVar4;
          if ((undefined8 *)(puVar6 + 0xb) != (undefined8 *)0x0) {
            *(undefined8 *)(puVar6 + 0xe) = 0;
            puVar6[0x10] = 0;
          }
          lVar2 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar9 + 0x2c);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 0xb) = *puVar1;
          *(undefined8 *)(puVar6 + 0xd) = uVar4;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar9 + 0x3c);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 0xf) = *puVar1;
          *(undefined8 *)(puVar6 + 0x11) = uVar4;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar9 + 0x4c);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 0x13) = *puVar1;
          *(undefined8 *)(puVar6 + 0x15) = uVar4;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar9 + 0x5c);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 0x17) = *puVar1;
          *(undefined8 *)(puVar6 + 0x19) = uVar4;
          lVar2 = (longlong)puVar6 + (0x6c - (longlong)pvVar5);
          if ((longlong)pvVar5 + lVar2 != 0) {
            *(undefined8 *)(puVar6 + 0x1e) = 0;
            puVar6[0x20] = 0;
          }
          lVar3 = *param_1;
          uVar4 = ((undefined8 *)(lVar2 + lVar3))[1];
          *(undefined8 *)(puVar6 + 0x1b) = *(undefined8 *)(lVar2 + lVar3);
          *(undefined8 *)(puVar6 + 0x1d) = uVar4;
          puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar3);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 0x1f) = *puVar1;
          *(undefined8 *)(puVar6 + 0x21) = uVar4;
          puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar3);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 0x23) = *puVar1;
          *(undefined8 *)(puVar6 + 0x25) = uVar4;
          puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar3);
          uVar4 = puVar1[1];
          lVar2 = (longlong)puVar6 + (0xac - (longlong)pvVar5);
          *(undefined8 *)(puVar6 + 0x27) = *puVar1;
          *(undefined8 *)(puVar6 + 0x29) = uVar4;
          if ((longlong)pvVar5 + lVar2 != 0) {
            *(undefined8 *)(puVar6 + 0x2e) = 0;
            puVar6[0x30] = 0;
          }
          lVar3 = *param_1;
          uVar4 = ((undefined8 *)(lVar2 + lVar3))[1];
          *(undefined8 *)(puVar6 + 0x2b) = *(undefined8 *)(lVar2 + lVar3);
          *(undefined8 *)(puVar6 + 0x2d) = uVar4;
          puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar3);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 0x2f) = *puVar1;
          *(undefined8 *)(puVar6 + 0x31) = uVar4;
          puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar3);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 0x33) = *puVar1;
          *(undefined8 *)(puVar6 + 0x35) = uVar4;
          puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar3);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 0x37) = *puVar1;
          *(undefined8 *)(puVar6 + 0x39) = uVar4;
          puVar6 = puVar6 + 0x40;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (uVar11 < uVar8) {
        lVar10 = -0x14 - (longlong)pvVar5;
        lVar9 = uVar8 - uVar11;
        puVar6 = (undefined4 *)(uVar11 * 0x40 + 0x14 + (longlong)pvVar5);
        do {
          if ((undefined8 *)(puVar6 + -5) != (undefined8 *)0x0) {
            *(undefined8 *)(puVar6 + -2) = 0;
            *puVar6 = 0;
          }
          lVar13 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar10 + lVar13);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + -5) = *puVar1;
          *(undefined8 *)(puVar6 + -3) = uVar4;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar10 + lVar13 + 0x10);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + -1) = *puVar1;
          *(undefined8 *)(puVar6 + 1) = uVar4;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar10 + lVar13 + 0x20);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 3) = *puVar1;
          *(undefined8 *)(puVar6 + 5) = uVar4;
          puVar1 = (undefined8 *)((longlong)puVar6 + lVar10 + lVar13 + 0x30);
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + 7) = *puVar1;
          *(undefined8 *)(puVar6 + 9) = uVar4;
          lVar9 = lVar9 + -1;
          puVar6 = puVar6 + 0x10;
        } while (lVar9 != 0);
      }
      AK::MemoryMgr::Free(5,(void *)*param_1);
    }
  }
  else {
    pvVar5 = AK::MemoryMgr::Realloc(5,(void *)*param_1,_Var7);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar12;
  return 1;
}


