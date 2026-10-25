// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425df110 FUN_1425df110 body=326 status=ok
// SIG undefined FUN_1425df110(void)

void FUN_1425df110(longlong param_1,undefined ***param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined ***pppuVar1;
  ushort uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined **local_80;
  ushort local_78;
  undefined *local_76;
  undefined **local_68;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x200;
    puVar4 = (undefined8 *)FUN_1424da030(0x2000);
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      *param_4 = 7;
      return;
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = *(ushort *)(param_2 + 1);
    pppuVar1 = param_2;
    if ((uVar2 & 0x11) == 0) {
      if ((uVar2 & 2) == 0) {
        ppuVar3 = param_2[3];
      }
      else {
        ppuVar3 = (undefined **)((longlong)param_2 + 10);
      }
    }
    else {
      ppuVar3 = (undefined **)0x0;
    }
  }
  else {
    pppuVar1 = &local_80;
    uVar5 = thunk_FUN_1424a7600(pppuVar1,param_2);
    FUN_14257efe0(uVar5,0);
    uVar2 = local_78;
    if ((local_78 & 0x11) == 0) {
      ppuVar3 = local_68;
      if ((local_78 & 2) != 0) {
        ppuVar3 = &local_76;
      }
    }
    else {
      ppuVar3 = (undefined **)0x0;
    }
  }
  if ((short)uVar2 < 0) {
    uVar6 = *(uint *)((longlong)pppuVar1 + 0xc);
  }
  else {
    uVar6 = (int)(short)uVar2 >> 5;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (0 < (int)uVar6) {
    uVar7 = 0;
    do {
      uVar5 = FUN_1425df290(param_1,uVar5,*(undefined2 *)((longlong)ppuVar3 + uVar7 * 2),param_4);
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
  }
  FUN_1425dedb0(uVar5,param_3,*(undefined8 *)(param_1 + 0x30),param_4);
  FUN_140859a90(&local_80);
  return;
}



// FUNCTION 1425df260 Unwind@1425df260 body=48 status=ok
// SIG undefined Unwind@1425df260(void)

void Unwind_1425df260(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425df290 FUN_1425df290 body=350 status=ok
// SIG undefined FUN_1425df290(void)

void * FUN_1425df290(longlong param_1,void *param_2,ushort param_3,int *param_4)

{
  ushort uVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  
  if (0 < *param_4) {
    return (void *)0x0;
  }
  if (*(ushort *)((longlong)param_2 + 10) == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x10);
    uVar1 = *(ushort *)((longlong)param_2 + 10);
    uVar7 = 0;
    do {
      uVar9 = uVar1;
      lVar4 = (ulonglong)uVar9 * 0x10;
      uVar1 = *(ushort *)(lVar6 + 8 + lVar4);
      if (uVar1 == param_3) {
        return (void *)(lVar6 + lVar4);
      }
      if (param_3 < uVar1) goto LAB_1425df300;
      uVar1 = *(ushort *)(lVar6 + 0xc + lVar4);
      uVar7 = uVar9;
    } while (uVar1 != 0);
  }
  uVar9 = 0;
LAB_1425df300:
  iVar3 = *(int *)(param_1 + 0x1c);
  pvVar2 = *(void **)(param_1 + 0x10);
  pvVar5 = pvVar2;
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    if (iVar3 != 0xffff) {
      iVar8 = 0xfc17;
      if (iVar3 < 0xfc17) {
        iVar8 = iVar3;
      }
      pvVar5 = (void *)FUN_1424da030((longlong)iVar8 * 0x10 + 16000);
      if (pvVar5 != (void *)0x0) {
        memcpy(pvVar5,*(void **)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0x1c) << 4);
        FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
        *(void **)(param_1 + 0x10) = pvVar5;
        *(int *)(param_1 + 0x18) = iVar8 + 1000;
        param_2 = (void *)((longlong)(int)((ulonglong)((longlong)param_2 - (longlong)pvVar2) >> 4) *
                           0x10 + (longlong)pvVar5);
        iVar3 = *(int *)(param_1 + 0x1c);
        goto LAB_1425df384;
      }
    }
    *param_4 = 7;
    pvVar5 = (void *)0x0;
  }
  else {
LAB_1425df384:
    lVar6 = (longlong)iVar3 * 0x10;
    *(undefined8 *)((longlong)pvVar5 + lVar6) = 0;
    ((undefined8 *)((longlong)pvVar5 + lVar6))[1] = 0;
    *(ushort *)((longlong)pvVar5 + lVar6 + 8) = param_3;
    *(ushort *)((longlong)pvVar5 + lVar6 + 0xc) = uVar9;
    if (uVar7 == 0) {
      *(undefined2 *)((longlong)param_2 + 10) = *(undefined2 *)(param_1 + 0x1c);
    }
    else {
      *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0xc + (ulonglong)uVar7 * 0x10) =
           *(undefined2 *)(param_1 + 0x1c);
    }
    pvVar5 = (void *)((longlong)pvVar5 + lVar6);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return pvVar5;
}



// FUNCTION 1425df3f0 FUN_1425df3f0 body=178 status=ok
// SIG undefined FUN_1425df3f0(void)

void FUN_1425df3f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 local_80 [64];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    if (0 < *(int *)(puVar3 + 1)) {
      iVar4 = 0;
      do {
        uVar1 = FUN_142516630(puVar3,iVar4);
        uVar2 = FUN_142516630(*(undefined8 *)(param_1 + 0x20),iVar4 + 1);
        FUN_1424a7060(local_80,1,uVar1,0xffffffff);
        FUN_1425df110(param_1,local_80,uVar2,param_2);
        FUN_140859a90(local_80);
        puVar3 = *(undefined8 **)(param_1 + 0x20);
        iVar4 = iVar4 + 2;
      } while (iVar4 < *(int *)(puVar3 + 1));
    }
    (**(code **)*puVar3)(puVar3,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1425df4b0 Unwind@1425df4b0 body=48 status=ok
// SIG undefined Unwind@1425df4b0(void)

void Unwind_1425df4b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425df4e0 FUN_1425df4e0 body=272 status=ok
// SIG undefined FUN_1425df4e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425df4e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c7fc010) {
    FUN_144b3d300(&DAT_14c7fc010);
    if (DAT_14c7fc010 == -1) {
      _DAT_14c7fc000 = 0;
      uRam000000014c7fc008 = 0;
      _DAT_14c7fbff0 = 0;
      uRam000000014c7fbff8 = 0;
      _DAT_14c7fbfe0 = 0;
      uRam000000014c7fbfe8 = 0;
      _DAT_14c7fbfd0 = 0;
      uRam000000014c7fbfd8 = 0;
      _DAT_14c7fbfc0 = 0;
      uRam000000014c7fbfc8 = 0;
      _Mtx_init_in_situ(&DAT_14c7fbfc0,2);
      atexit((_func_5014 *)&LAB_1425df620);
      _Init_thread_footer(&DAT_14c7fc010);
    }
  }
  FUN_142501320(&DAT_14c7fbfc0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1425df3f0(param_1,param_5);
  }
  FUN_142501400(&DAT_14c7fbfc0);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1425df630(param_1,*(longlong *)(param_1 + 0x10),param_2,param_3,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 1425df5f0 Unwind@1425df5f0 body=47 status=ok
// SIG undefined Unwind@1425df5f0(void)

void Unwind_1425df5f0(void)

{
  FUN_142501400(&DAT_14c7fbfc0);
  return;
}



// FUNCTION 1425df630 FUN_1425df630 body=540 status=ok
// SIG undefined FUN_1425df630(void)

void FUN_1425df630(longlong param_1,longlong *param_2,longlong param_3,int param_4,uint param_5,
                  undefined8 *param_6,int *param_7)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_88 [8];
  short local_80;
  undefined1 local_7e [2];
  uint local_7c;
  undefined1 *local_70;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*param_7 < 1) &&
     ((*param_2 == 0 ||
      ((cVar2 = (**(code **)*param_6)(param_6,param_5 - param_4,param_2), cVar2 != '\0' &&
       (*param_7 < 1)))))) {
    if (*(char *)(param_1 + 8) == '\0') {
      sVar1 = *(short *)(param_3 + 8);
      if (sVar1 < 0) {
        uVar3 = *(uint *)(param_3 + 0xc);
      }
      else {
        uVar3 = (int)sVar1 >> 5;
      }
      uVar6 = 0xffff;
      if (param_5 < uVar3) {
        if (((int)sVar1 & 2U) == 0) {
          lVar4 = *(longlong *)(param_3 + 0x18);
        }
        else {
          lVar4 = param_3 + 10;
        }
        uVar6 = *(ushort *)(lVar4 + (longlong)(int)param_5 * 2);
      }
      uVar7 = *(ushort *)((longlong)param_2 + 10);
      if (uVar7 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        do {
          lVar9 = (ulonglong)uVar7 * 0x10;
          uVar7 = *(ushort *)(lVar4 + 8 + lVar9);
          if (uVar7 == uVar6) {
            param_2 = (longlong *)(lVar4 + lVar9);
            iVar8 = 1;
            goto joined_r0x0001425df841;
          }
        } while ((uVar7 < uVar6) && (uVar7 = *(ushort *)(lVar4 + 0xc + lVar9), uVar7 != 0));
      }
    }
    else {
      uVar3 = FUN_1424a8030(param_3,param_5);
      iVar8 = 2 - (uint)(uVar3 < 0x10000);
      FUN_1424a6c30(local_88);
      FUN_14257efe0(local_88);
      if (-1 < local_80) {
        local_7c = (int)local_80 >> 5;
      }
      if (((int)local_80 & 2U) != 0) {
        local_70 = local_7e;
      }
      if (0 < (int)local_7c) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        uVar5 = 0;
        do {
          if (local_7c == 0) {
            uVar6 = 0xffff;
          }
          else {
            uVar6 = *(ushort *)(local_70 + uVar5 * 2);
          }
          uVar7 = *(ushort *)((longlong)param_2 + 10);
          if (uVar7 == 0) {
LAB_1425df78a:
            param_2 = (longlong *)0x0;
            break;
          }
          uVar5 = uVar5 + 1;
          while( true ) {
            lVar9 = (ulonglong)uVar7 * 0x10;
            uVar7 = *(ushort *)(lVar4 + 8 + lVar9);
            if (uVar7 == uVar6) break;
            if ((uVar6 <= uVar7) || (uVar7 = *(ushort *)(lVar4 + 0xc + lVar9), uVar7 == 0))
            goto LAB_1425df78a;
          }
          param_2 = (longlong *)(lVar9 + lVar4);
        } while (uVar5 != local_7c);
      }
      FUN_140859a90(local_88);
joined_r0x0001425df841:
      if (param_2 != (longlong *)0x0) {
        FUN_1425df630(param_1,param_2,param_3,param_4,iVar8 + param_5,param_6,param_7);
      }
    }
  }
  return;
}



// FUNCTION 1425df850 Unwind@1425df850 body=55 status=ok
// SIG undefined Unwind@1425df850(void)

void Unwind_1425df850(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 1425df890 FUN_1425df890 body=109 status=ok
// SIG undefined FUN_1425df890(void)

undefined8 * FUN_1425df890(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 < 1) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0xfb0);
    if (puVar1 == (undefined8 *)0x0) {
      *param_1 = 0;
      *param_2 = 7;
    }
    else {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *param_1 = puVar1;
      uVar2 = FUN_142501e10(FUN_142503190,&LAB_142503220,&LAB_142503220,param_2);
      param_1[1] = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 1425df900 FUN_1425df900 body=74 status=ok
// SIG undefined FUN_1425df900(void)

void FUN_1425df900(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1[1] != 0) {
    FUN_142502220();
    param_1[1] = 0;
  }
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1401773f0();
    *param_1 = puVar1;
  }
  return;
}



// FUNCTION 1425df950 FUN_1425df950 body=237 status=ok
// SIG undefined FUN_1425df950(void)

undefined * FUN_1425df950(longlong *param_1,wchar_t *param_2,int *param_3)

{
  int iVar1;
  size_t sVar2;
  longlong *plVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  
  if (*param_3 < 1) {
    puVar5 = (undefined *)FUN_142502620(param_1[1]);
    if (puVar5 == (undefined *)0x0) {
      sVar2 = wcslen(param_2);
      lVar6 = *param_1;
      iVar1 = *(int *)(lVar6 + 8);
      iVar4 = (int)sVar2;
      if (2000 - iVar1 <= iVar4) {
        if (1999 < iVar4) {
          *param_3 = 5;
          return &DAT_149c4b9c0;
        }
        plVar3 = (longlong *)thunk_FUN_1424da030(0xfb0);
        if (plVar3 == (longlong *)0x0) {
          *param_1 = 0;
          *param_3 = 7;
          return &DAT_149c4b9c0;
        }
        *(undefined4 *)(plVar3 + 1) = 0;
        *param_1 = (longlong)plVar3;
        *plVar3 = lVar6;
        lVar6 = *param_1;
        iVar1 = *(int *)(lVar6 + 8);
      }
      puVar5 = (undefined *)(lVar6 + (longlong)iVar1 * 2 + 0xc);
      FUN_1425046f0(puVar5,param_2);
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + iVar4 + 1;
      FUN_142502aa0(param_1[1],puVar5,puVar5,param_3);
    }
  }
  else {
    puVar5 = &DAT_149c4b9c0;
  }
  return puVar5;
}



// FUNCTION 1425dfa40 FUN_1425dfa40 body=8 status=ok
// SIG undefined FUN_1425dfa40(void)

undefined * FUN_1425dfa40(void)

{
  return &DAT_14c7fc014;
}



// FUNCTION 1425dfa50 FUN_1425dfa50 body=126 status=ok
// SIG undefined FUN_1425dfa50(void)

longlong FUN_1425dfa50(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (((*param_2 < 1) && (*(longlong *)(param_1 + 0x80) != 0)) &&
     (*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x78))) {
    lVar1 = param_1 + 8;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    uVar2 = FUN_142516630();
    FUN_1424a8e40(lVar1);
    if (*(short *)(param_1 + 0x10) < 0) {
      iVar3 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar3 = (int)*(short *)(param_1 + 0x10) >> 5;
    }
    FUN_1424a9130(lVar1,0,iVar3,uVar2,0,0xffffffff);
    return lVar1;
  }
  return 0;
}



// FUNCTION 1425dfad0 FUN_1425dfad0 body=8 status=ok
// SIG undefined FUN_1425dfad0(void)

void FUN_1425dfad0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 1425dfae0 FUN_1425dfae0 body=4 status=ok
// SIG undefined FUN_1425dfae0(void)

undefined4 FUN_1425dfae0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// FUNCTION 1425dfaf0 FUN_1425dfaf0 body=399 status=ok
// SIG undefined FUN_1425dfaf0(void)

undefined8 FUN_1425dfaf0(longlong param_1,int param_2,longlong *param_3,int *param_4)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_98 [64];
  longlong local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    uVar1 = 1;
    if (*param_3 != 0) {
      if (*(char *)((longlong)param_3 + 0xe) == '\0') {
        iVar6 = 1;
      }
      else {
        iVar6 = *(int *)(*param_3 + 8);
        if (iVar6 < 1) {
          return 1;
        }
      }
      iVar5 = 0;
      local_4c = param_2;
      do {
        puVar2 = (uint *)*param_3;
        if (*(char *)((longlong)param_3 + 0xe) != '\0') {
          puVar2 = (uint *)FUN_142516630(puVar2,iVar5);
        }
        if ((puVar2 != (uint *)0x0) && ((*puVar2 & *(uint *)(param_1 + 8)) != 0)) {
          if (*(longlong *)(param_1 + 0x10) == 0) {
            lVar3 = thunk_FUN_1424da030(0x10);
            if (lVar3 == 0) {
              *(undefined8 *)(param_1 + 0x10) = 0;
              *param_4 = 7;
              goto LAB_1425dfb70;
            }
            local_58 = lVar3;
            FUN_142529d80(lVar3);
            *(longlong *)(param_1 + 0x10) = local_58;
            iVar4 = *param_4;
          }
          else {
            iVar4 = *param_4;
          }
          if (iVar4 < 1) {
            uVar1 = *(undefined8 *)(param_1 + 0x10);
            if (*(longlong *)(puVar2 + 2) == 0) {
              FUN_1424a7000(local_98,*(undefined8 *)(puVar2 + 4),0xffffffff);
              iVar4 = local_4c;
              FUN_142529f30(uVar1,*puVar2,local_4c,local_98,param_4);
            }
            else {
              FUN_1424a7000(local_98,*(longlong *)(puVar2 + 2),0xffffffff);
              iVar4 = local_4c;
              FUN_142529da0(uVar1,*puVar2,local_4c,local_98,param_4);
            }
            FUN_140859a90(local_98);
            if ((*param_4 < 1) && (*(int *)(param_1 + 0xc) < iVar4)) {
              *(int *)(param_1 + 0xc) = iVar4;
            }
          }
        }
LAB_1425dfb70:
        iVar5 = iVar5 + 1;
      } while (iVar6 != iVar5);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1425dfc80 Unwind@1425dfc80 body=55 status=ok
// SIG undefined Unwind@1425dfc80(void)

void Unwind_1425dfc80(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1425dfcc0 Unwind@1425dfcc0 body=55 status=ok
// SIG undefined Unwind@1425dfcc0(void)

void Unwind_1425dfcc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425dfd00 Unwind@1425dfd00 body=55 status=ok
// SIG undefined Unwind@1425dfd00(void)

void Unwind_1425dfd00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425dfd40 FUN_1425dfd40 body=168 status=ok
// SIG undefined FUN_1425dfd40(void)

undefined8 *
FUN_1425dfd40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = icu_64::TimeZoneNamesImpl::vftable;
  puVar1 = param_1 + 1;
  FUN_1424a3ce0();
  *(undefined8 *)((longlong)param_1 + 0xf2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfa) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = icu_64::TextTrieMap::vftable;
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x27] = &LAB_1425dfe50;
  FUN_1425dfe60(param_1,param_2,param_3,param_4,puVar1,param_1 + 0x21,param_1,uVar2);
  return param_1;
}



// FUNCTION 1425dfdf0 Unwind@1425dfdf0 body=43 status=ok
// SIG undefined Unwind@1425dfdf0(void)

void Unwind_1425dfdf0(undefined8 param_1,longlong param_2)

{
  FUN_1425def00(*(undefined8 *)(param_2 + 0x28));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425dfe20 Unwind@1425dfe20 body=34 status=ok
// SIG undefined Unwind@1425dfe20(void)

void Unwind_1425dfe20(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425dfe60 FUN_1425dfe60 body=494 status=ok
// SIG undefined FUN_1425dfe60(void)

void FUN_1425dfe60(longlong *param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_80 [64];
  longlong *local_40;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  if (0 < *param_3) {
    return;
  }
  local_34[0] = 0;
  lVar1 = FUN_1424ebfe0("icudt64l-zone",*(undefined8 *)(param_2 + 0x28),local_34);
  param_1[0x1d] = lVar1;
  lVar1 = FUN_1424ec1c0(lVar1,"zoneStrings",lVar1,local_34);
  param_1[0x1d] = lVar1;
  if (0 < local_34[0]) {
    *param_3 = local_34[0];
LAB_1425dff1c:
    if (param_1[0x1d] != 0) {
      FUN_1424ea9f0();
      param_1[0x1d] = 0;
    }
    if (param_1[0x1f] != 0) {
      FUN_142502220();
      param_1[0x1f] = 0;
    }
    if (param_1[0x1e] != 0) {
      FUN_142502220();
      param_1[0x1e] = 0;
    }
    return;
  }
  lVar1 = FUN_142501e10(FUN_142503190,&LAB_142503220,0,param_3);
  param_1[0x1f] = lVar1;
  lVar1 = FUN_142501e10(FUN_142503190,&LAB_142503220,0,param_3);
  param_1[0x1e] = lVar1;
  if (0 < *param_3) goto LAB_1425dff1c;
  FUN_142502350(param_1[0x1f],FUN_1425e00c0);
  FUN_142502350(param_1[0x1e],FUN_1425e00c0);
  puVar2 = (undefined8 *)FUN_1424b77f0();
  lVar1 = FUN_14252a7c0(puVar2);
  if (lVar1 == 0) goto LAB_1425e003c;
  FUN_1424a6c90(local_80,lVar1);
  FUN_1425e0100(param_1,local_80,param_3);
  local_40 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1,local_80,param_3);
  if (*param_3 < 1) {
    while ((lVar1 = (**(code **)(*local_40 + 0x30))(local_40,param_3), lVar1 != 0 && (*param_3 < 1))
          ) {
      FUN_1425e0320(param_1,lVar1,param_3);
    }
LAB_1425e0025:
    (**(code **)*local_40)(local_40,1);
  }
  else if (local_40 != (longlong *)0x0) goto LAB_1425e0025;
  FUN_140859a90(local_80);
LAB_1425e003c:
  (**(code **)*puVar2)(puVar2,1);
  return;
}



// FUNCTION 1425e0060 Unwind@1425e0060 body=48 status=ok
// SIG undefined Unwind@1425e0060(void)

void Unwind_1425e0060(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x68))(*(undefined8 **)(param_2 + 0x68),1);
  return;
}



// FUNCTION 1425e0090 Unwind@1425e0090 body=43 status=ok
// SIG undefined Unwind@1425e0090(void)

void Unwind_1425e0090(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425e00c0 FUN_1425e00c0 body=59 status=ok
// SIG undefined FUN_1425e00c0(void)

void FUN_1425e00c0(char *param_1)

{
  if ((param_1 != "<empty>") && (param_1 != (char *)0x0)) {
    if (param_1[0x39] != '\0') {
      FUN_1424da110(*(undefined8 *)param_1);
    }
    FUN_1401773f0(param_1);
    return;
  }
  return;
}



// FUNCTION 1425e0100 FUN_1425e0100 body=495 status=ok
// SIG undefined FUN_1425e0100(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_1425e0100(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 local_178 [132];
  undefined **local_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    iVar1 = FUN_1424a8350(param_2,local_178,0x81,param_3);
    local_178[iVar1] = 0;
    lVar2 = FUN_142502620(*(undefined8 *)(param_1 + 0xf0),local_178);
    if (lVar2 != 0) {
      return lVar2;
    }
    local_70 = icu_64::ZNames::ZNamesLoader::vftable;
    local_68 = (undefined *)0x0;
    puStack_60 = (undefined *)0x0;
    local_58 = (undefined *)0x0;
    puStack_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    puStack_40 = (undefined *)0x0;
    local_38 = (undefined *)0x0;
    FUN_1425e1090(&local_70,*(undefined8 *)(param_1 + 0xe8),param_2,param_3);
    if (local_68 == &DAT_149c4ba38) {
      local_68 = (undefined *)0x0;
    }
    if (puStack_60 == &DAT_149c4ba38) {
      puStack_60 = (undefined *)0x0;
    }
    if (local_58 == &DAT_149c4ba38) {
      local_58 = (undefined *)0x0;
    }
    if (puStack_50 == &DAT_149c4ba38) {
      puStack_50 = (undefined *)0x0;
    }
    if (local_48 == &DAT_149c4ba38) {
      local_48 = (undefined *)0x0;
    }
    if (puStack_40 == &DAT_149c4ba38) {
      puStack_40 = (undefined *)0x0;
    }
    if (local_38 == &DAT_149c4ba38) {
      local_38 = (undefined *)0x0;
    }
    lVar2 = FUN_1425e1200(*(undefined8 *)(param_1 + 0xf0),&local_68,param_2,param_3);
    iVar1 = *param_3;
    thunk_FUN_1424b70d0(&local_70);
    if (iVar1 < 1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1425e02f0 Unwind@1425e02f0 body=46 status=ok
// SIG undefined Unwind@1425e02f0(void)

void Unwind_1425e02f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x128);
  return;
}



// FUNCTION 1425e0320 FUN_1425e0320 body=834 status=ok
// SIG undefined FUN_1425e0320(void)

char * FUN_1425e0320(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined2 local_2a8 [136];
  int local_198 [36];
  uint local_108;
  undefined1 local_104;
  undefined1 local_103 [131];
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (0 < *param_3) {
    return (char *)0x0;
  }
  FUN_1424a8350(param_2,local_2a8,0x81,param_3);
  if (*(short *)(param_2 + 8) < 0) {
    iVar3 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_2 + 8) >> 5;
  }
  local_2a8[iVar3] = 0;
  pcVar4 = (char *)FUN_142502620(*(undefined8 *)(param_1 + 0xf8),local_2a8);
  if (pcVar4 != (char *)0x0) goto LAB_1425e03a0;
  local_80 = icu_64::ZNames::ZNamesLoader::vftable;
  local_78 = (undefined *)0x0;
  uStack_70 = (undefined *)0x0;
  local_68 = (undefined *)0x0;
  puStack_60 = (undefined *)0x0;
  local_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  if (*param_3 < 1) {
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    uVar1 = *(ushort *)(param_2 + 8);
    if (uVar1 < 0x20) {
      local_108 = local_108 & 0xffffff00;
    }
    else {
      if ((short)uVar1 < 0) {
        iVar3 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar3 = (int)(short)uVar1 >> 5;
      }
      iVar3 = FUN_1424a83f0(param_2,0,iVar3,local_198,0x81,0);
      local_104 = 0x3a;
      local_108 = 0x6174656d;
      memcpy(local_103,local_198,(longlong)iVar3);
      local_103[iVar3] = 0;
    }
    local_198[0] = 0;
    local_58 = (undefined *)0x0;
    puStack_50 = (undefined *)0x0;
    local_68 = (undefined *)0x0;
    puStack_60 = (undefined *)0x0;
    local_78 = (undefined *)0x0;
    uStack_70 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    FUN_1424ec6e0(uVar2,&local_108,&local_80,local_198);
    if (local_198[0] < 1) {
      *param_3 = local_198[0];
    }
    if (local_78 == &DAT_149c4ba38) {
      local_78 = (undefined *)0x0;
    }
  }
  if (uStack_70 == &DAT_149c4ba38) {
    uStack_70 = (undefined *)0x0;
    if (local_68 == &DAT_149c4ba38) goto LAB_1425e054b;
LAB_1425e0508:
    if (puStack_60 != &DAT_149c4ba38) goto LAB_1425e0511;
LAB_1425e055f:
    puStack_60 = (undefined *)0x0;
    if (local_58 == &DAT_149c4ba38) goto LAB_1425e0573;
LAB_1425e051a:
    if (puStack_50 != &DAT_149c4ba38) goto LAB_1425e0523;
LAB_1425e0587:
    puStack_50 = (undefined *)0x0;
    if (local_48 == &DAT_149c4ba38) goto LAB_1425e059b;
LAB_1425e052c:
    iVar3 = *param_3;
  }
  else {
    if (local_68 != &DAT_149c4ba38) goto LAB_1425e0508;
LAB_1425e054b:
    local_68 = (undefined *)0x0;
    if (puStack_60 == &DAT_149c4ba38) goto LAB_1425e055f;
LAB_1425e0511:
    if (local_58 != &DAT_149c4ba38) goto LAB_1425e051a;
LAB_1425e0573:
    local_58 = (undefined *)0x0;
    if (puStack_50 == &DAT_149c4ba38) goto LAB_1425e0587;
LAB_1425e0523:
    if (local_48 != &DAT_149c4ba38) goto LAB_1425e052c;
LAB_1425e059b:
    local_48 = (undefined *)0x0;
    iVar3 = *param_3;
  }
  if (iVar3 < 1) {
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    uVar5 = FUN_14252c150(param_2);
    iVar3 = memcmp(&local_78,&DAT_149c4ba00,0x38);
    if (iVar3 == 0) {
      pcVar4 = "<empty>";
    }
    else {
      pcVar4 = (char *)thunk_FUN_1424da030(0x40);
      if (pcVar4 == (char *)0x0) {
        *param_3 = 7;
        goto LAB_1425e0651;
      }
      pcVar4[0x38] = '\0';
      *(undefined4 *)pcVar4 = (undefined4)local_78;
      *(undefined4 *)(pcVar4 + 4) = local_78._4_4_;
      *(undefined4 *)(pcVar4 + 8) = (undefined4)uStack_70;
      *(undefined4 *)(pcVar4 + 0xc) = uStack_70._4_4_;
      *(undefined **)(pcVar4 + 0x10) = local_68;
      *(undefined **)(pcVar4 + 0x18) = puStack_60;
      *(undefined **)(pcVar4 + 0x20) = local_58;
      *(undefined **)(pcVar4 + 0x28) = puStack_50;
      *(undefined **)(pcVar4 + 0x30) = local_48;
      pcVar4[0x39] = '\0';
    }
    FUN_142502aa0(uVar2,uVar5,pcVar4,param_3);
    iVar3 = *param_3;
    thunk_FUN_1424b70d0(&local_80);
    if (iVar3 < 1) {
LAB_1425e03a0:
      if (pcVar4 != "<empty>") {
        return pcVar4;
      }
      return (char *)0x0;
    }
  }
  else {
LAB_1425e0651:
    thunk_FUN_1424b70d0(&local_80);
  }
  return (char *)0x0;
}



// FUNCTION 1425e0670 Unwind@1425e0670 body=54 status=ok
// SIG undefined Unwind@1425e0670(void)

void Unwind_1425e0670(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 600);
  return;
}



// FUNCTION 1425e06b0 FUN_1425e06b0 body=136 status=ok
// SIG undefined FUN_1425e06b0(void)

void FUN_1425e06b0(undefined8 *param_1)

{
  *param_1 = icu_64::TimeZoneNamesImpl::vftable;
  if (param_1[0x1d] != 0) {
    FUN_1424ea9f0();
    param_1[0x1d] = 0;
  }
  if (param_1[0x1f] != 0) {
    FUN_142502220();
    param_1[0x1f] = 0;
  }
  if (param_1[0x1e] != 0) {
    FUN_142502220();
    param_1[0x1e] = 0;
  }
  FUN_1425def00(param_1 + 0x21);
  FUN_1414b3f60(param_1 + 1);
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425e0740 FUN_1425e0740 body=7 status=ok
// SIG undefined FUN_1425e0740(void)

bool FUN_1425e0740(longlong param_1,longlong param_2)

{
  return param_1 == param_2;
}



// FUNCTION 1425e0750 FUN_1425e0750 body=206 status=ok
// SIG undefined FUN_1425e0750(void)

undefined8 * FUN_1425e0750(longlong param_1)

{
  undefined4 local_2c;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_2c = 0;
  local_28 = (undefined8 *)thunk_FUN_1424da030(0x140);
  if (local_28 != (undefined8 *)0x0) {
    *local_28 = icu_64::TimeZoneNamesImpl::vftable;
    FUN_1424a3ce0(local_28 + 1,param_1 + 8);
    *(undefined8 *)((longlong)local_28 + 0xf2) = 0;
    *(undefined8 *)((longlong)local_28 + 0xfa) = 0;
    local_28[0x1d] = 0;
    local_28[0x1e] = 0;
    local_28[0x21] = icu_64::TextTrieMap::vftable;
    *(undefined1 *)(local_28 + 0x22) = 1;
    local_28[0x23] = 0;
    local_28[0x24] = 0;
    local_28[0x25] = 0;
    *(undefined1 *)(local_28 + 0x26) = 1;
    local_28[0x27] = &LAB_1425dfe50;
    FUN_1425dfe60(local_28,param_1 + 8,&local_2c);
  }
  return local_28;
}



// FUNCTION 1425e0820 Unwind@1425e0820 body=43 status=ok
// SIG undefined Unwind@1425e0820(void)

void Unwind_1425e0820(undefined8 param_1,longlong param_2)

{
  FUN_1425def00(*(undefined8 *)(param_2 + 0x30));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e0850 Unwind@1425e0850 body=45 status=ok
// SIG undefined Unwind@1425e0850(void)

void Unwind_1425e0850(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1425e0880 FUN_1425e0880 body=8 status=ok
// SIG undefined FUN_1425e0880(void)

void FUN_1425e0880(undefined8 param_1,undefined8 param_2)

{
  FUN_1425e0890(param_2);
  return;
}



// FUNCTION 1425e0890 FUN_1425e0890 body=174 status=ok
// SIG undefined FUN_1425e0890(void)

undefined8 * FUN_1425e0890(int *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 < 1) {
    lVar1 = FUN_14252bd70();
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x90);
    if (lVar1 == 0) {
      if (puVar2 != (undefined8 *)0x0) {
        FUN_14250a770(puVar2);
        *puVar2 = icu_64::MetaZoneIDsEnumeration::vftable;
        puVar2[0xf] = 0;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0;
        return puVar2;
      }
    }
    else if (puVar2 != (undefined8 *)0x0) {
      FUN_14250a770(puVar2);
      *puVar2 = icu_64::MetaZoneIDsEnumeration::vftable;
      *(undefined4 *)((longlong)puVar2 + 0x7c) = 0;
      puVar2[0x10] = lVar1;
      puVar2[0x11] = 0;
      *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(lVar1 + 8);
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425e0940 Unwind@1425e0940 body=32 status=ok
// SIG undefined Unwind@1425e0940(void)

void Unwind_1425e0940(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e0960 Unwind@1425e0960 body=32 status=ok
// SIG undefined Unwind@1425e0960(void)

void Unwind_1425e0960(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e0980 FUN_1425e0980 body=11 status=ok
// SIG undefined FUN_1425e0980(void)

void FUN_1425e0980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1425e0990(param_2,param_3);
  return;
}



// FUNCTION 1425e0990 FUN_1425e0990 body=392 status=ok
// SIG undefined FUN_1425e0990(void)

undefined8 * FUN_1425e0990(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (*param_2 < 1) {
    lVar3 = FUN_14252b0b0();
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)thunk_FUN_1424da030(0x90);
      if (puVar4 != (undefined8 *)0x0) {
        FUN_14250a770(puVar4);
        *puVar4 = icu_64::MetaZoneIDsEnumeration::vftable;
        puVar4[0xf] = 0;
        puVar4[0x10] = 0;
        puVar4[0x11] = 0;
        return puVar4;
      }
    }
    else {
      puVar4 = (undefined8 *)thunk_FUN_1424da030(0x28);
      if (puVar4 == (undefined8 *)0x0) {
        *param_2 = 7;
      }
      else {
        FUN_142515f20(puVar4,0,&LAB_142503220,param_2);
        iVar6 = 0;
        if (0 < *param_2) {
          return (undefined8 *)0x0;
        }
        do {
          if (*(int *)(lVar3 + 8) <= iVar6) {
            puVar5 = (undefined8 *)thunk_FUN_1424da030(0x90);
            if (puVar5 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            FUN_14250a770(puVar5);
            *puVar5 = icu_64::MetaZoneIDsEnumeration::vftable;
            puVar5[0xf] = 0;
            puVar5[0x10] = puVar4;
            puVar5[0x11] = puVar4;
            if (puVar4 != (undefined8 *)0x0) {
              *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)(puVar4 + 1);
              return puVar5;
            }
            return puVar5;
          }
          puVar5 = (undefined8 *)FUN_142516630(lVar3,iVar6);
          uVar1 = *puVar5;
          iVar2 = FUN_142516b20(puVar4,uVar1,0);
          if (iVar2 < 0) {
            FUN_1425163e0(puVar4,uVar1);
          }
          iVar6 = iVar6 + 1;
        } while (*param_2 < 1);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425e0b20 Unwind@1425e0b20 body=44 status=ok
// SIG undefined Unwind@1425e0b20(void)

void Unwind_1425e0b20(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e0b50 Unwind@1425e0b50 body=44 status=ok
// SIG undefined Unwind@1425e0b50(void)

void Unwind_1425e0b50(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e0b80 Unwind@1425e0b80 body=44 status=ok
// SIG undefined Unwind@1425e0b80(void)

void Unwind_1425e0b80(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425e0bb0 FUN_1425e0bb0 body=31 status=ok
// SIG undefined FUN_1425e0bb0(void)

undefined8
FUN_1425e0bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_14252b000(param_2,param_3,param_4);
  return param_4;
}



// FUNCTION 1425e0bd0 FUN_1425e0bd0 body=86 status=ok
// SIG undefined FUN_1425e0bd0(void)

undefined8
FUN_1425e0bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_68 [64];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1424a7220(local_68,param_3,0xffffffff,0);
  FUN_14252bb60(param_2,local_68,param_4);
  FUN_140859a90(local_68);
  return param_4;
}



// FUNCTION 1425e0c30 Unwind@1425e0c30 body=36 status=ok
// SIG undefined Unwind@1425e0c30(void)

void Unwind_1425e0c30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425e0c60 FUN_1425e0c60 body=311 status=ok
// SIG undefined FUN_1425e0c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1425e0c60(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  FUN_1424a7130(param_4);
  if (0x1f < *(ushort *)(param_2 + 8)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c7fc0d0) {
      FUN_144b3d300(&DAT_14c7fc0d0);
      if (DAT_14c7fc0d0 == -1) {
        _DAT_14c7fc0c0 = 0;
        uRam000000014c7fc0c8 = 0;
        _DAT_14c7fc0b0 = 0;
        uRam000000014c7fc0b8 = 0;
        _DAT_14c7fc0a0 = 0;
        uRam000000014c7fc0a8 = 0;
        _DAT_14c7fc090 = 0;
        uRam000000014c7fc098 = 0;
        _DAT_14c7fc080 = 0;
        uRam000000014c7fc088 = 0;
        _Mtx_init_in_situ(&DAT_14c7fc080,2);
        atexit((_func_5014 *)&LAB_1425e3990);
        _Init_thread_footer(&DAT_14c7fc0d0);
      }
    }
    FUN_142501320(&DAT_14c7fc080);
    local_34[0] = 0;
    lVar3 = FUN_1425e0320(param_1,param_2,local_34);
    iVar1 = local_34[0];
    FUN_142501400(&DAT_14c7fc080);
    if ((lVar3 != 0) && (iVar1 < 1)) {
      uVar2 = FUN_1425e39a0(param_3);
      if ((-1 < (int)uVar2) && (lVar3 = *(longlong *)(lVar3 + (ulonglong)uVar2 * 8), lVar3 != 0)) {
        FUN_1424a8f10(param_4,1,lVar3,0xffffffff);
      }
    }
  }
  return param_4;
}



// FUNCTION 1425e0da0 Unwind@1425e0da0 body=43 status=ok
// SIG undefined Unwind@1425e0da0(void)

void Unwind_1425e0da0(void)

{
  FUN_142501400(&DAT_14c7fc080);
  return;
}



// FUNCTION 1425e0dd0 FUN_1425e0dd0 body=311 status=ok
// SIG undefined FUN_1425e0dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1425e0dd0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  FUN_1424a7130(param_4);
  if (0x1f < *(ushort *)(param_2 + 8)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c7fc0d0) {
      FUN_144b3d300(&DAT_14c7fc0d0);
      if (DAT_14c7fc0d0 == -1) {
        _DAT_14c7fc0c0 = 0;
        uRam000000014c7fc0c8 = 0;
        _DAT_14c7fc0b0 = 0;
        uRam000000014c7fc0b8 = 0;
        _DAT_14c7fc0a0 = 0;
        uRam000000014c7fc0a8 = 0;
        _DAT_14c7fc090 = 0;
        uRam000000014c7fc098 = 0;
        _DAT_14c7fc080 = 0;
        uRam000000014c7fc088 = 0;
        _Mtx_init_in_situ(&DAT_14c7fc080,2);
        atexit((_func_5014 *)&LAB_1425e3990);
        _Init_thread_footer(&DAT_14c7fc0d0);
      }
    }
    FUN_142501320(&DAT_14c7fc080);
    local_34[0] = 0;
    lVar3 = FUN_1425e0100(param_1,param_2,local_34);
    iVar1 = local_34[0];
    FUN_142501400(&DAT_14c7fc080);
    if ((lVar3 != 0) && (iVar1 < 1)) {
      uVar2 = FUN_1425e39a0(param_3);
      if ((-1 < (int)uVar2) && (lVar3 = *(longlong *)(lVar3 + (ulonglong)uVar2 * 8), lVar3 != 0)) {
        FUN_1424a8f10(param_4,1,lVar3,0xffffffff);
      }
    }
  }
  return param_4;
}



// FUNCTION 1425e0f10 Unwind@1425e0f10 body=43 status=ok
// SIG undefined Unwind@1425e0f10(void)

void Unwind_1425e0f10(void)

{
  FUN_142501400(&DAT_14c7fc080);
  return;
}



// FUNCTION 1425e0f40 FUN_1425e0f40 body=273 status=ok
// SIG undefined FUN_1425e0f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1425e0f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  FUN_1424a7130(param_3);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c7fc0d0) {
    FUN_144b3d300(&DAT_14c7fc0d0);
    if (DAT_14c7fc0d0 == -1) {
      _DAT_14c7fc0c0 = 0;
      uRam000000014c7fc0c8 = 0;
      _DAT_14c7fc0b0 = 0;
      uRam000000014c7fc0b8 = 0;
      _DAT_14c7fc0a0 = 0;
      uRam000000014c7fc0a8 = 0;
      _DAT_14c7fc090 = 0;
      uRam000000014c7fc098 = 0;
      _DAT_14c7fc080 = 0;
      uRam000000014c7fc088 = 0;
      _Mtx_init_in_situ(&DAT_14c7fc080,2);
      atexit((_func_5014 *)&LAB_1425e3990);
      _Init_thread_footer(&DAT_14c7fc0d0);
    }
  }
  FUN_142501320(&DAT_14c7fc080);
  local_2c[0] = 0;
  plVar2 = (longlong *)FUN_1425e0100(param_1,param_2,local_2c);
  iVar1 = local_2c[0];
  FUN_142501400(&DAT_14c7fc080);
  if (((plVar2 != (longlong *)0x0) && (iVar1 < 1)) && (*plVar2 != 0)) {
    FUN_1424a8f10(param_3,1,*plVar2,0xffffffff);
  }
  return param_3;
}



// FUNCTION 1425e1060 Unwind@1425e1060 body=39 status=ok
// SIG undefined Unwind@1425e1060(void)

void Unwind_1425e1060(void)

{
  FUN_142501400(&DAT_14c7fc080);
  return;
}



// FUNCTION 1425e1090 FUN_1425e1090 body=271 status=ok
// SIG undefined FUN_1425e1090(void)

void FUN_1425e1090(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_118 [144];
  undefined1 local_88 [8];
  short local_80;
  undefined1 local_7e [2];
  uint local_7c;
  undefined1 *local_70;
  int local_44 [3];
  
  local_44[1] = -2;
  local_44[2] = -1;
  FUN_1424a6be0(local_88,param_3);
  uVar3 = 0;
  while( true ) {
    uVar1 = local_7c;
    if (-1 < local_80) {
      uVar1 = (int)local_80 >> 5;
    }
    if ((int)uVar1 <= (int)uVar3) break;
    if (uVar3 < uVar1) {
      puVar2 = local_7e;
      if (((int)local_80 & 2U) == 0) {
        puVar2 = local_70;
      }
      if (*(short *)(puVar2 + (ulonglong)uVar3 * 2) == 0x2f) {
        FUN_1424a9010(local_88,uVar3,CONCAT62((uint6)(ushort)(uVar1 >> 0x10),0x3a));
      }
    }
    uVar3 = uVar3 + 1;
  }
  FUN_1424a83f0(local_88,0,uVar1,local_118,0x81,0);
  local_44[0] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1424ec6e0(param_2,local_118,param_1,local_44);
  if (local_44[0] < 1) {
    *param_4 = local_44[0];
  }
  FUN_140859a90(local_88);
  return;
}



// FUNCTION 1425e11c0 Unwind@1425e11c0 body=51 status=ok
// SIG undefined Unwind@1425e11c0(void)

void Unwind_1425e11c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xc0);
  return;
}



// FUNCTION 1425e1200 FUN_1425e1200 body=357 status=ok
// SIG undefined FUN_1425e1200(void)

undefined8 * FUN_1425e1200(undefined8 param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  void *_Src;
  void *_Dst;
  undefined8 uVar12;
  undefined8 *puVar13;
  size_t _Size;
  undefined **local_88;
  short local_80;
  int local_7c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return (undefined8 *)0x0;
  }
  if (*param_2 != 0) {
    _Dst = (void *)0x0;
    goto LAB_1425e12d0;
  }
  local_88 = &PTR_FUN_149e18960;
  local_80 = 2;
  FUN_1425e24e0(param_3,&local_88);
  if (local_80 < 0) {
    if (local_7c < 1) goto LAB_1425e1272;
LAB_1425e127e:
    _Src = (void *)FUN_1424a8e50(&local_88);
    if (-1 < local_80) {
      local_7c = (int)local_80 >> 5;
    }
    _Size = (size_t)(local_7c * 2 + 2);
    _Dst = (void *)FUN_1424da030(_Size);
    if (_Dst == (void *)0x0) {
      *param_4 = 7;
      FUN_140859a90(&local_88);
      return (undefined8 *)0x0;
    }
    memcpy(_Dst,_Src,_Size);
  }
  else {
    if (0 < local_80 >> 5) goto LAB_1425e127e;
LAB_1425e1272:
    _Dst = (void *)0x0;
  }
  FUN_140859a90(&local_88);
LAB_1425e12d0:
  uVar12 = thunk_FUN_1424b8590(param_3);
  puVar13 = (undefined8 *)thunk_FUN_1424da030(0x40);
  if (puVar13 == (undefined8 *)0x0) {
    *param_4 = 7;
    puVar13 = (undefined8 *)0x0;
  }
  else {
    *(undefined1 *)(puVar13 + 7) = 0;
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    lVar7 = param_2[1];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar8 = param_2[2];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar9 = param_2[3];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar10 = param_2[4];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
    lVar11 = param_2[5];
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(int *)puVar13 = (int)*param_2;
    *(undefined4 *)((longlong)puVar13 + 4) = uVar1;
    *(int *)(puVar13 + 1) = (int)lVar7;
    *(undefined4 *)((longlong)puVar13 + 0xc) = uVar2;
    *(int *)(puVar13 + 2) = (int)lVar8;
    *(undefined4 *)((longlong)puVar13 + 0x14) = uVar3;
    *(int *)(puVar13 + 3) = (int)lVar9;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar4;
    *(int *)(puVar13 + 4) = (int)lVar10;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar5;
    *(int *)(puVar13 + 5) = (int)lVar11;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar6;
    puVar13[6] = param_2[6];
    if (_Dst != (void *)0x0) {
      *puVar13 = _Dst;
    }
    *(bool *)((longlong)puVar13 + 0x39) = _Dst != (void *)0x0;
    FUN_142502aa0(param_1,uVar12,puVar13,param_4);
  }
  return puVar13;
}



// FUNCTION 1425e1370 Unwind@1425e1370 body=52 status=ok
// SIG undefined Unwind@1425e1370(void)

void Unwind_1425e1370(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425e13b0 FUN_1425e13b0 body=613 status=ok
// SIG undefined FUN_1425e13b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1425e13b0(longlong param_1,longlong param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined **local_58;
  undefined4 local_50;
  int local_4c;
  undefined8 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = icu_64::ZNameSearchHandler::vftable;
  local_4c = 0;
  local_48 = (undefined8 *)0x0;
  local_50 = param_4;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c7fc0d0) {
    FUN_144b3d300(&DAT_14c7fc0d0);
    if (DAT_14c7fc0d0 == -1) {
      _DAT_14c7fc0c0 = 0;
      uRam000000014c7fc0c8 = 0;
      _DAT_14c7fc0b0 = 0;
      uRam000000014c7fc0b8 = 0;
      _DAT_14c7fc0a0 = 0;
      uRam000000014c7fc0a8 = 0;
      _DAT_14c7fc090 = 0;
      uRam000000014c7fc098 = 0;
      _DAT_14c7fc080 = 0;
      uRam000000014c7fc088 = 0;
      _Mtx_init_in_situ(&DAT_14c7fc080,2);
      atexit((_func_5014 *)&LAB_1425e3990);
      _Init_thread_footer(&DAT_14c7fc0d0);
    }
  }
  FUN_142501320(&DAT_14c7fc080);
  FUN_1425df4e0(param_1 + 0x108,param_2,param_3,&local_58,param_5);
  puVar2 = local_48;
  iVar1 = local_4c;
  if (*param_5 < 1) {
    local_48 = (undefined8 *)0x0;
    local_4c = 0;
    if (puVar2 != (undefined8 *)0x0) {
      if (*(short *)(param_2 + 8) < 0) {
        iVar3 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar3 = (int)*(short *)(param_2 + 8) >> 5;
      }
      if ((iVar1 == iVar3 - param_3) || (*(char *)(param_1 + 0x100) != '\0')) goto LAB_1425e144e;
      (**(code **)*puVar2)(puVar2,1);
      if (0 < *param_5) goto LAB_1425e144b;
    }
    FUN_1425e1720(param_1,param_5);
    FUN_1425df4e0(param_1 + 0x108,param_2,param_3,&local_58,param_5);
    puVar2 = local_48;
    iVar1 = local_4c;
    if (*param_5 < 1) {
      local_48 = (undefined8 *)0x0;
      local_4c = 0;
      if (puVar2 != (undefined8 *)0x0) {
        if (*(short *)(param_2 + 8) < 0) {
          iVar3 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar3 = (int)*(short *)(param_2 + 8) >> 5;
        }
        if ((iVar1 == iVar3 - param_3) || (*(char *)(param_1 + 0x100) != '\0')) goto LAB_1425e144e;
        (**(code **)*puVar2)(puVar2,1);
        if (0 < *param_5) goto LAB_1425e144b;
      }
      FUN_1425e19a0(param_1,param_5);
      FUN_1425e1720(param_1,param_5);
      *(undefined1 *)(param_1 + 0x100) = 1;
      if (*param_5 < 1) {
        puVar2 = (undefined8 *)FUN_1425e1680(param_1,&local_58,param_2,param_3,param_5);
        goto LAB_1425e144e;
      }
    }
  }
LAB_1425e144b:
  puVar2 = (undefined8 *)0x0;
LAB_1425e144e:
  FUN_142501400(&DAT_14c7fc080);
  local_58 = icu_64::ZNameSearchHandler::vftable;
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  return puVar2;
}



// FUNCTION 1425e1620 Unwind@1425e1620 body=81 status=ok
// SIG undefined Unwind@1425e1620(void)

void Unwind_1425e1620(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  FUN_142501400(&DAT_14c7fc080);
  *(undefined ***)(param_2 + 0x30) = icu_64::ZNameSearchHandler::vftable;
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1425e1680 FUN_1425e1680 body=154 status=ok
// SIG undefined FUN_1425e1680(void)

undefined8 *
FUN_1425e1680(longlong param_1,longlong param_2,longlong param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  FUN_1425df4e0(param_1 + 0x108,param_3,param_4,param_2,param_5);
  if (*param_5 < 1) {
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    iVar1 = *(int *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      if (*(short *)(param_3 + 8) < 0) {
        iVar3 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar3 = (int)*(short *)(param_3 + 8) >> 5;
      }
      if (iVar1 == iVar3 - param_4) {
        return puVar2;
      }
      if (*(char *)(param_1 + 0x100) != '\0') {
        return puVar2;
      }
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425e1720 FUN_1425e1720 body=611 status=ok
// SIG undefined FUN_1425e1720(void)

void FUN_1425e1720(longlong param_1,int *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 < 1) {
    local_4c = 0xffffffff;
    lVar6 = FUN_1425022e0(*(undefined8 *)(param_1 + 0xf8),&local_4c);
    local_58 = param_1;
    if (lVar6 != 0) {
      lVar1 = param_1 + 0x108;
      do {
        pcVar2 = *(char **)(lVar6 + 8);
        if (pcVar2 != "<empty>") {
          if (0 < *param_2) goto LAB_1425e1976;
          if (pcVar2[0x38] == '\0') {
            uVar3 = *(undefined8 *)(lVar6 + 0x10);
            pcVar2[0x38] = '\x01';
            lVar6 = 0;
            uVar9 = 0;
LAB_1425e17fc:
            lVar4 = *(longlong *)(pcVar2 + uVar9 * 8);
            if (lVar4 != 0) {
              puVar7 = (undefined4 *)FUN_1424da030();
              if (puVar7 == (undefined4 *)0x0) goto LAB_1425e1970;
              *(undefined8 *)(puVar7 + 4) = uVar3;
              *(undefined8 *)(puVar7 + 2) = 0;
              uVar8 = 0;
              if ((uint)uVar9 < 7) {
                uVar8 = *(undefined4 *)((longlong)&DAT_149c4ba48 + (lVar6 >> 0x1e));
              }
              *puVar7 = uVar8;
              FUN_1425df020(lVar1,lVar4,puVar7,param_2);
              iVar5 = *param_2;
              if ((5 < uVar9) || (0 < iVar5)) goto LAB_1425e1796;
LAB_1425e17f6:
              uVar9 = uVar9 + 1;
              lVar6 = lVar6 + 0x100000000;
              goto LAB_1425e17fc;
            }
            if (uVar9 < 6) goto LAB_1425e17f6;
            iVar5 = *param_2;
LAB_1425e1796:
            param_1 = local_58;
            if (0 < iVar5) goto LAB_1425e1976;
          }
        }
        lVar6 = FUN_1425022e0(*(undefined8 *)(param_1 + 0xf8),&local_4c);
      } while (lVar6 != 0);
    }
    local_4c = 0xffffffff;
    lVar6 = FUN_1425022e0(*(undefined8 *)(param_1 + 0xf0),&local_4c);
    if (lVar6 != 0) {
      lVar1 = param_1 + 0x108;
      do {
        pcVar2 = *(char **)(lVar6 + 8);
        if (pcVar2 != "<empty>") {
          if (0 < *param_2) break;
          if (pcVar2[0x38] == '\0') {
            uVar3 = *(undefined8 *)(lVar6 + 0x10);
            pcVar2[0x38] = '\x01';
            lVar6 = 0;
            uVar9 = 0;
LAB_1425e190c:
            lVar4 = *(longlong *)(pcVar2 + uVar9 * 8);
            if (lVar4 != 0) {
              puVar7 = (undefined4 *)FUN_1424da030();
              if (puVar7 == (undefined4 *)0x0) goto LAB_1425e1970;
              *(undefined8 *)(puVar7 + 4) = 0;
              *(undefined8 *)(puVar7 + 2) = uVar3;
              uVar8 = 0;
              if ((uint)uVar9 < 7) {
                uVar8 = *(undefined4 *)((longlong)&DAT_149c4ba48 + (lVar6 >> 0x1e));
              }
              *puVar7 = uVar8;
              FUN_1425df020(lVar1,lVar4,puVar7,param_2);
              iVar5 = *param_2;
              if ((5 < uVar9) || (0 < iVar5)) goto LAB_1425e18a7;
LAB_1425e1906:
              uVar9 = uVar9 + 1;
              lVar6 = lVar6 + 0x100000000;
              goto LAB_1425e190c;
            }
            if (uVar9 < 6) goto LAB_1425e1906;
            iVar5 = *param_2;
LAB_1425e18a7:
            param_1 = local_58;
            if (0 < iVar5) break;
          }
        }
        lVar6 = FUN_1425022e0(*(undefined8 *)(param_1 + 0xf0),&local_4c);
      } while (lVar6 != 0);
    }
  }
LAB_1425e1976:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
LAB_1425e1970:
  *param_2 = 7;
  goto LAB_1425e1976;
}



// FUNCTION 1425e19a0 FUN_1425e19a0 body=432 status=ok
// SIG undefined FUN_1425e19a0(void)

void FUN_1425e19a0(longlong *param_1,int *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_a0 [64];
  undefined **local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(char *)((longlong)param_1 + 0x101) != '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x101) = 1;
  local_60 = icu_64::TimeZoneNamesImpl::ZoneStringsLoader::vftable;
  local_58 = param_1;
  uVar1 = FUN_142501e10(FUN_1425031c0,FUN_142503270,0,param_2);
  local_50 = uVar1;
  if (*param_2 < 1) {
    FUN_142502340(uVar1,FUN_1424da110);
    FUN_142502350(uVar1,&LAB_1425e3cb0);
  }
  FUN_1425e2170(&local_60,param_2);
  if (*param_2 < 1) {
    plVar2 = (longlong *)thunk_FUN_1424b7c40(1,0,0,param_2);
    if (*param_2 < 1) {
      while ((lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2), lVar3 != 0 && (*param_2 < 1)))
      {
        FUN_1424a6be0(local_a0,lVar3);
        uVar1 = FUN_1424a8e50(local_a0);
        lVar4 = FUN_142502620(param_1[0x1e],uVar1);
        if (lVar4 == 0) {
          FUN_1425e0100(param_1,lVar3,param_2);
          local_48 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1,lVar3,param_2);
          if (*param_2 < 1) {
            while ((lVar3 = (**(code **)(*local_48 + 0x30))(local_48,param_2), lVar3 != 0 &&
                   (*param_2 < 1))) {
              FUN_1425e0320(param_1,lVar3,param_2);
            }
          }
          else if (local_48 == (longlong *)0x0) goto LAB_1425e1aae;
          (**(code **)*local_48)(local_48,1);
        }
LAB_1425e1aae:
        FUN_140859a90(local_a0);
      }
    }
    else if (plVar2 == (longlong *)0x0) goto LAB_1425e1a6a;
    (**(code **)*plVar2)(plVar2,1);
  }
LAB_1425e1a6a:
  local_60 = icu_64::TimeZoneNamesImpl::ZoneStringsLoader::vftable;
  FUN_142502220(local_50);
  thunk_FUN_1424b70d0(&local_60);
  return;
}



// FUNCTION 1425e1b60 Unwind@1425e1b60 body=51 status=ok
// SIG undefined Unwind@1425e1b60(void)

void Unwind_1425e1b60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425e1ba0 Unwind@1425e1ba0 body=56 status=ok
// SIG undefined Unwind@1425e1ba0(void)

void Unwind_1425e1ba0(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x80))(*(undefined8 **)(param_2 + 0x80),1);
  return;
}



// FUNCTION 1425e1be0 Unwind@1425e1be0 body=51 status=ok
// SIG undefined Unwind@1425e1be0(void)

void Unwind_1425e1be0(undefined8 param_1,longlong param_2)

{
  FUN_1425e1c20(param_2 + 0x68);
  return;
}



// FUNCTION 1425e1c20 FUN_1425e1c20 body=40 status=ok
// SIG undefined FUN_1425e1c20(void)

void FUN_1425e1c20(undefined8 *param_1)

{
  *param_1 = icu_64::TimeZoneNamesImpl::ZoneStringsLoader::vftable;
  FUN_142502220(param_1[2]);
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425e1c50 FUN_1425e1c50 body=219 status=ok
// SIG undefined FUN_1425e1c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425e1c50(undefined8 param_1,int *param_2)

{
  if (0 < *param_2) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c7fc0d0) {
    FUN_144b3d300(&DAT_14c7fc0d0);
    if (DAT_14c7fc0d0 == -1) {
      _DAT_14c7fc0c0 = 0;
      uRam000000014c7fc0c8 = 0;
      _DAT_14c7fc0b0 = 0;
      uRam000000014c7fc0b8 = 0;
      _DAT_14c7fc0a0 = 0;
      uRam000000014c7fc0a8 = 0;
      _DAT_14c7fc090 = 0;
      uRam000000014c7fc098 = 0;
      _DAT_14c7fc080 = 0;
      uRam000000014c7fc088 = 0;
      _Mtx_init_in_situ(&DAT_14c7fc080,2);
      atexit((_func_5014 *)&LAB_1425e3990);
      _Init_thread_footer(&DAT_14c7fc0d0);
    }
  }
  FUN_142501320(&DAT_14c7fc080);
  FUN_1425e19a0(param_1,param_2);
  FUN_142501400(&DAT_14c7fc080);
  return;
}



// FUNCTION 1425e1d30 Unwind@1425e1d30 body=37 status=ok
// SIG undefined Unwind@1425e1d30(void)

void Unwind_1425e1d30(void)

{
  FUN_142501400(&DAT_14c7fc080);
  return;
}



// FUNCTION 1425e1d60 FUN_1425e1d60 body=791 status=ok
// SIG undefined FUN_1425e1d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425e1d60(longlong *param_1,longlong param_2,longlong param_3,int param_4,
                  undefined4 param_5,longlong param_6,int *param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined **local_c8;
  ushort local_c0;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if ((*param_7 < 1) && (0x1f < *(ushort *)(param_2 + 8))) {
    local_78 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c7fc0d0) && (FUN_144b3d300(&DAT_14c7fc0d0), DAT_14c7fc0d0 == -1)) {
      _DAT_14c7fc0c0 = 0;
      uRam000000014c7fc0c8 = 0;
      _DAT_14c7fc0b0 = 0;
      uRam000000014c7fc0b8 = 0;
      _DAT_14c7fc0a0 = 0;
      uRam000000014c7fc0a8 = 0;
      _DAT_14c7fc090 = 0;
      uRam000000014c7fc098 = 0;
      _DAT_14c7fc080 = 0;
      uRam000000014c7fc088 = 0;
      _Mtx_init_in_situ(&DAT_14c7fc080,2);
      atexit((_func_5014 *)&LAB_1425e3990);
      _Init_thread_footer(&DAT_14c7fc0d0);
    }
    FUN_142501320(&DAT_14c7fc080);
    local_88 = FUN_1425e0100(local_78,param_2,param_7);
    iVar1 = *param_7;
    FUN_142501400(&DAT_14c7fc080);
    if (iVar1 < 1) {
      pcVar7 = (char *)0x0;
      uVar5 = 0;
      local_80 = param_2;
      if (0 < param_4) {
        do {
          while( true ) {
            uVar8 = (ulonglong)uVar5;
            uVar2 = *(undefined4 *)(param_3 + uVar8 * 4);
            uVar3 = FUN_1425e39a0(uVar2);
            if (((int)uVar3 < 0) ||
               (lVar6 = *(longlong *)(local_88 + (ulonglong)uVar3 * 8), lVar6 == 0)) break;
LAB_1425e1f6a:
            FUN_1424a8f10(uVar8 * 0x40 + param_6,1,lVar6,0xffffffff);
            uVar5 = uVar5 + 1;
            if (param_4 <= (int)uVar5) {
              return;
            }
          }
          if (pcVar7 == (char *)0x0) {
            local_c8 = &PTR_FUN_149e18960;
            local_c0 = 2;
            (**(code **)(*local_78 + 0x30))(local_78,param_2,param_5,&local_c8);
            pcVar7 = "<empty>";
            if (0x1f < local_c0) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c7fc0d0) &&
                 (FUN_144b3d300(&DAT_14c7fc0d0), DAT_14c7fc0d0 == -1)) {
                _DAT_14c7fc0c0 = 0;
                uRam000000014c7fc0c8 = 0;
                _DAT_14c7fc0b0 = 0;
                uRam000000014c7fc0b8 = 0;
                _DAT_14c7fc0a0 = 0;
                uRam000000014c7fc0a8 = 0;
                _DAT_14c7fc090 = 0;
                uRam000000014c7fc098 = 0;
                _DAT_14c7fc080 = 0;
                uRam000000014c7fc088 = 0;
                _Mtx_init_in_situ(&DAT_14c7fc080,2);
                atexit((_func_5014 *)&LAB_1425e3990);
                _Init_thread_footer(&DAT_14c7fc0d0);
              }
              FUN_142501320(&DAT_14c7fc080);
              pcVar4 = (char *)FUN_1425e0320(local_78,&local_c8,param_7);
              pcVar7 = "<empty>";
              if (pcVar4 != (char *)0x0) {
                pcVar7 = pcVar4;
              }
              iVar1 = *param_7;
              FUN_142501400(&DAT_14c7fc080);
              param_2 = local_80;
              if (0 < iVar1) {
                FUN_140859a90(&local_c8);
                return;
              }
            }
            FUN_140859a90(&local_c8);
          }
          if (((pcVar7 != "<empty>") && (uVar3 = FUN_1425e39a0(uVar2), -1 < (int)uVar3)) &&
             (lVar6 = *(longlong *)(pcVar7 + (ulonglong)uVar3 * 8), lVar6 != 0)) goto LAB_1425e1f6a;
          FUN_1424a7130(uVar8 * 0x40 + param_6);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < param_4);
      }
    }
  }
  return;
}



// FUNCTION 1425e2080 Unwind@1425e2080 body=77 status=ok
// SIG undefined Unwind@1425e2080(void)

void Unwind_1425e2080(void)

{
  FUN_142501400(&DAT_14c7fc080);
  return;
}



// FUNCTION 1425e20d0 Unwind@1425e20d0 body=77 status=ok
// SIG undefined Unwind@1425e20d0(void)

void Unwind_1425e20d0(void)

{
  FUN_142501400(&DAT_14c7fc080);
  return;
}



// FUNCTION 1425e2120 Unwind@1425e2120 body=74 status=ok
// SIG undefined Unwind@1425e2120(void)

void Unwind_1425e2120(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425e2170 FUN_1425e2170 body=739 status=ok
// SIG undefined FUN_1425e2170(void)

void FUN_1425e2170(longlong param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int *_Str;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  size_t sVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined1 local_90 [68];
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1424ec6e0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xe8),&DAT_149e02088,param_1,param_2);
  if (*param_2 < 1) {
    local_4c = 0xffffffff;
    lVar12 = FUN_1425022e0(*(undefined8 *)(param_1 + 0x10),&local_4c);
    if (lVar12 != 0) {
      do {
        pcVar2 = *(char **)(lVar12 + 8);
        if (pcVar2 != "<dummy>") {
          _Str = *(int **)(lVar12 + 0x10);
          sVar13 = strlen((char *)_Str);
          if ((sVar13 < 5) || ((char)_Str[1] != ':' || *_Str != 0x6174656d)) {
            FUN_1425e3cd0(param_1,local_90,_Str);
            pcVar1 = pcVar2 + 8;
            if (*(undefined **)(pcVar2 + 8) == &DAT_149c4ba38) {
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              pcVar1[4] = '\0';
              pcVar1[5] = '\0';
              pcVar1[6] = '\0';
              pcVar1[7] = '\0';
              if (*(undefined **)(pcVar2 + 0x10) != &DAT_149c4ba38) goto LAB_1425e227f;
LAB_1425e22b0:
              pcVar2[0x10] = '\0';
              pcVar2[0x11] = '\0';
              pcVar2[0x12] = '\0';
              pcVar2[0x13] = '\0';
              pcVar2[0x14] = '\0';
              pcVar2[0x15] = '\0';
              pcVar2[0x16] = '\0';
              pcVar2[0x17] = '\0';
              if (*(undefined **)(pcVar2 + 0x18) != &DAT_149c4ba38) goto LAB_1425e2285;
LAB_1425e22be:
              pcVar2[0x18] = '\0';
              pcVar2[0x19] = '\0';
              pcVar2[0x1a] = '\0';
              pcVar2[0x1b] = '\0';
              pcVar2[0x1c] = '\0';
              pcVar2[0x1d] = '\0';
              pcVar2[0x1e] = '\0';
              pcVar2[0x1f] = '\0';
              if (*(undefined **)(pcVar2 + 0x20) != &DAT_149c4ba38) goto LAB_1425e228b;
LAB_1425e22cc:
              pcVar2[0x20] = '\0';
              pcVar2[0x21] = '\0';
              pcVar2[0x22] = '\0';
              pcVar2[0x23] = '\0';
              pcVar2[0x24] = '\0';
              pcVar2[0x25] = '\0';
              pcVar2[0x26] = '\0';
              pcVar2[0x27] = '\0';
              if (*(undefined **)(pcVar2 + 0x28) != &DAT_149c4ba38) goto LAB_1425e2291;
LAB_1425e22da:
              pcVar2[0x28] = '\0';
              pcVar2[0x29] = '\0';
              pcVar2[0x2a] = '\0';
              pcVar2[0x2b] = '\0';
              pcVar2[0x2c] = '\0';
              pcVar2[0x2d] = '\0';
              pcVar2[0x2e] = '\0';
              pcVar2[0x2f] = '\0';
              if (*(undefined **)(pcVar2 + 0x30) != &DAT_149c4ba38) goto LAB_1425e2297;
LAB_1425e22e8:
              pcVar2[0x30] = '\0';
              pcVar2[0x31] = '\0';
              pcVar2[0x32] = '\0';
              pcVar2[0x33] = '\0';
              pcVar2[0x34] = '\0';
              pcVar2[0x35] = '\0';
              pcVar2[0x36] = '\0';
              pcVar2[0x37] = '\0';
              if (*(undefined **)(pcVar2 + 0x38) == &DAT_149c4ba38) {
LAB_1425e22fa:
                pcVar2[0x38] = '\0';
                pcVar2[0x39] = '\0';
                pcVar2[0x3a] = '\0';
                pcVar2[0x3b] = '\0';
                pcVar2[0x3c] = '\0';
                pcVar2[0x3d] = '\0';
                pcVar2[0x3e] = '\0';
                pcVar2[0x3f] = '\0';
              }
            }
            else {
              if (*(undefined **)(pcVar2 + 0x10) == &DAT_149c4ba38) goto LAB_1425e22b0;
LAB_1425e227f:
              if (*(undefined **)(pcVar2 + 0x18) == &DAT_149c4ba38) goto LAB_1425e22be;
LAB_1425e2285:
              if (*(undefined **)(pcVar2 + 0x20) == &DAT_149c4ba38) goto LAB_1425e22cc;
LAB_1425e228b:
              if (*(undefined **)(pcVar2 + 0x28) == &DAT_149c4ba38) goto LAB_1425e22da;
LAB_1425e2291:
              if (*(undefined **)(pcVar2 + 0x30) == &DAT_149c4ba38) goto LAB_1425e22e8;
LAB_1425e2297:
              if (*(undefined **)(pcVar2 + 0x38) == &DAT_149c4ba38) goto LAB_1425e22fa;
            }
            FUN_1425e1200(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf0),pcVar1,local_90);
          }
          else {
            sVar13 = strlen((char *)_Str);
            FUN_1424a7220(local_90,(longlong)_Str + 5,(int)sVar13 + -5,0);
            pcVar1 = pcVar2 + 8;
            if (*(undefined **)(pcVar2 + 8) == &DAT_149c4ba38) {
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              pcVar1[4] = '\0';
              pcVar1[5] = '\0';
              pcVar1[6] = '\0';
              pcVar1[7] = '\0';
              if (*(undefined **)(pcVar2 + 0x10) != &DAT_149c4ba38) goto LAB_1425e2335;
LAB_1425e236c:
              pcVar2[0x10] = '\0';
              pcVar2[0x11] = '\0';
              pcVar2[0x12] = '\0';
              pcVar2[0x13] = '\0';
              pcVar2[0x14] = '\0';
              pcVar2[0x15] = '\0';
              pcVar2[0x16] = '\0';
              pcVar2[0x17] = '\0';
              if (*(undefined **)(pcVar2 + 0x18) != &DAT_149c4ba38) goto LAB_1425e233b;
LAB_1425e237a:
              pcVar2[0x18] = '\0';
              pcVar2[0x19] = '\0';
              pcVar2[0x1a] = '\0';
              pcVar2[0x1b] = '\0';
              pcVar2[0x1c] = '\0';
              pcVar2[0x1d] = '\0';
              pcVar2[0x1e] = '\0';
              pcVar2[0x1f] = '\0';
              if (*(undefined **)(pcVar2 + 0x20) != &DAT_149c4ba38) goto LAB_1425e2341;
LAB_1425e2388:
              pcVar2[0x20] = '\0';
              pcVar2[0x21] = '\0';
              pcVar2[0x22] = '\0';
              pcVar2[0x23] = '\0';
              pcVar2[0x24] = '\0';
              pcVar2[0x25] = '\0';
              pcVar2[0x26] = '\0';
              pcVar2[0x27] = '\0';
              if (*(undefined **)(pcVar2 + 0x28) != &DAT_149c4ba38) goto LAB_1425e2347;
LAB_1425e2396:
              pcVar2[0x28] = '\0';
              pcVar2[0x29] = '\0';
              pcVar2[0x2a] = '\0';
              pcVar2[0x2b] = '\0';
              pcVar2[0x2c] = '\0';
              pcVar2[0x2d] = '\0';
              pcVar2[0x2e] = '\0';
              pcVar2[0x2f] = '\0';
              if (*(undefined **)(pcVar2 + 0x30) != &DAT_149c4ba38) goto LAB_1425e234d;
LAB_1425e23a4:
              pcVar2[0x30] = '\0';
              pcVar2[0x31] = '\0';
              pcVar2[0x32] = '\0';
              pcVar2[0x33] = '\0';
              pcVar2[0x34] = '\0';
              pcVar2[0x35] = '\0';
              pcVar2[0x36] = '\0';
              pcVar2[0x37] = '\0';
              if (*(undefined **)(pcVar2 + 0x38) != &DAT_149c4ba38) goto LAB_1425e2353;
LAB_1425e23b2:
              pcVar2[0x38] = '\0';
              pcVar2[0x39] = '\0';
              pcVar2[0x3a] = '\0';
              pcVar2[0x3b] = '\0';
              pcVar2[0x3c] = '\0';
              pcVar2[0x3d] = '\0';
              pcVar2[0x3e] = '\0';
              pcVar2[0x3f] = '\0';
              iVar11 = *param_2;
            }
            else {
              if (*(undefined **)(pcVar2 + 0x10) == &DAT_149c4ba38) goto LAB_1425e236c;
LAB_1425e2335:
              if (*(undefined **)(pcVar2 + 0x18) == &DAT_149c4ba38) goto LAB_1425e237a;
LAB_1425e233b:
              if (*(undefined **)(pcVar2 + 0x20) == &DAT_149c4ba38) goto LAB_1425e2388;
LAB_1425e2341:
              if (*(undefined **)(pcVar2 + 0x28) == &DAT_149c4ba38) goto LAB_1425e2396;
LAB_1425e2347:
              if (*(undefined **)(pcVar2 + 0x30) == &DAT_149c4ba38) goto LAB_1425e23a4;
LAB_1425e234d:
              if (*(undefined **)(pcVar2 + 0x38) == &DAT_149c4ba38) goto LAB_1425e23b2;
LAB_1425e2353:
              iVar11 = *param_2;
            }
            if (iVar11 < 1) {
              uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf8);
              uVar14 = FUN_14252c150(local_90);
              iVar11 = memcmp(pcVar1,&DAT_149c4ba00,0x38);
              if (iVar11 != 0) {
                puVar15 = (undefined4 *)thunk_FUN_1424da030(0x40);
                if (puVar15 == (undefined4 *)0x0) {
                  *param_2 = 7;
                  goto LAB_1425e2206;
                }
                *(undefined1 *)(puVar15 + 0xe) = 0;
                uVar4 = *(undefined4 *)(pcVar2 + 0xc);
                uVar5 = *(undefined4 *)(pcVar2 + 0x10);
                uVar6 = *(undefined4 *)(pcVar2 + 0x14);
                uVar7 = *(undefined8 *)(pcVar2 + 0x18);
                uVar8 = *(undefined8 *)(pcVar2 + 0x20);
                uVar9 = *(undefined8 *)(pcVar2 + 0x28);
                uVar10 = *(undefined8 *)(pcVar2 + 0x30);
                *puVar15 = *(undefined4 *)pcVar1;
                puVar15[1] = uVar4;
                puVar15[2] = uVar5;
                puVar15[3] = uVar6;
                *(undefined8 *)(puVar15 + 4) = uVar7;
                *(undefined8 *)(puVar15 + 6) = uVar8;
                *(undefined8 *)(puVar15 + 8) = uVar9;
                *(undefined8 *)(puVar15 + 10) = uVar10;
                *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(pcVar2 + 0x38);
                *(undefined1 *)((longlong)puVar15 + 0x39) = 0;
              }
              FUN_142502aa0(uVar3,uVar14);
            }
          }
LAB_1425e2206:
          FUN_140859a90(local_90);
          if (0 < *param_2) {
            return;
          }
        }
        lVar12 = FUN_1425022e0(*(undefined8 *)(param_1 + 0x10),&local_4c);
      } while (lVar12 != 0);
    }
  }
  return;
}



// FUNCTION 1425e2460 Unwind@1425e2460 body=52 status=ok
// SIG undefined Unwind@1425e2460(void)

void Unwind_1425e2460(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425e24a0 Unwind@1425e24a0 body=52 status=ok
// SIG undefined Unwind@1425e24a0(void)

void Unwind_1425e24a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425e24e0 FUN_1425e24e0 body=374 status=ok
// SIG undefined FUN_1425e24e0(void)

undefined8 FUN_1425e24e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_c0 [64];
  undefined1 local_80 [72];
  wchar_t *local_38;
  wchar_t *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (0x1f < *(ushort *)(param_1 + 8)) {
    cVar1 = FUN_1424a7e30(param_1,0,4,L"Etc/",0,4);
    local_38 = L"Etc/";
    if (cVar1 != '\0') {
      cVar1 = FUN_1424a7e30(param_1,0,8,L"SystemV/Riyadh8",0,8);
      local_28 = L"SystemV/Riyadh8";
      if (cVar1 != '\0') {
        if (*(short *)(param_1 + 8) < 0) {
          uVar2 = *(uint *)(param_1 + 0xc);
        }
        else {
          uVar2 = (int)*(short *)(param_1 + 8) >> 5;
        }
        uVar4 = (int)uVar2 >> 0x1f & uVar2;
        iVar3 = FUN_1424a8860(param_1,L"Riyadh8",0,7,uVar4,uVar2 - uVar4);
        if (iVar3 < 1) {
          if (*(short *)(param_1 + 8) < 0) {
            iVar3 = *(int *)(param_1 + 0xc);
          }
          else {
            iVar3 = (int)*(short *)(param_1 + 8) >> 5;
          }
          iVar3 = FUN_1424a8ab0(param_1,0x2f,0,iVar3);
          if (0 < iVar3) {
            if (*(short *)(param_1 + 8) < 0) {
              iVar5 = *(int *)(param_1 + 0xc);
            }
            else {
              iVar5 = (int)*(short *)(param_1 + 8) >> 5;
            }
            if (iVar3 + 1 < iVar5) {
              FUN_1424bce50(param_2,param_1,iVar3 + 1);
              FUN_1424a6c10(local_c0,0x20);
              FUN_1424a6c10(local_80,0x5f);
              FUN_1424bcf60(param_2,local_80,local_c0);
              FUN_140859a90(local_80);
              FUN_140859a90(local_c0);
              return param_2;
            }
          }
        }
      }
    }
  }
  FUN_1424a7130(param_2);
  return param_2;
}



// FUNCTION 1425e2660 Unwind@1425e2660 body=37 status=ok
// SIG undefined Unwind@1425e2660(void)

void Unwind_1425e2660(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1425e2690 Unwind@1425e2690 body=37 status=ok
// SIG undefined Unwind@1425e2690(void)

void Unwind_1425e2690(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425e26c0 Unwind@1425e26c0 body=38 status=ok
// SIG undefined Unwind@1425e26c0(void)

void Unwind_1425e26c0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0xb8) = L"Etc/";
  return;
}



// FUNCTION 1425e26f0 Unwind@1425e26f0 body=38 status=ok
// SIG undefined Unwind@1425e26f0(void)

void Unwind_1425e26f0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 200) = L"SystemV/Riyadh8";
  return;
}



// FUNCTION 1425e2720 FUN_1425e2720 body=643 status=ok
// SIG undefined FUN_1425e2720(void)

void FUN_1425e2720(longlong param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *_Dst;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) goto LAB_1425e298f;
  local_4c = 0;
  local_50 = 0;
  uVar3 = FUN_1424ecc30(param_1,param_2,0,&local_4c);
  if ((0 < local_4c) || (puVar4 = (undefined8 *)FUN_1424da030(0x10), puVar4 == (undefined8 *)0x0))
  goto LAB_1425e298f;
  local_4c = 0;
  uVar5 = FUN_1424ecf00(uVar3,&DAT_14bd49fa8,&local_50,&local_4c);
  bVar1 = local_4c < 1;
  bVar10 = local_50 != 0;
  uVar6 = 0;
  if (bVar10 && bVar1) {
    uVar6 = uVar5;
  }
  *puVar4 = uVar6;
  local_4c = 0;
  uVar6 = FUN_1424ecf00(uVar3,&DAT_14996c1e7,&local_50,&local_4c);
  if ((local_4c < 1) && (local_50 != 0)) {
    puVar4[1] = uVar6;
LAB_1425e2827:
    uVar2 = 0;
    uVar6 = FUN_1424ecc30(uVar3,"parseRegions",0,&local_4c);
    bVar1 = true;
    if (local_4c < 1) {
      uVar2 = FUN_1424eaf70(uVar6);
      if ((int)uVar2 < 1) goto LAB_1425e2852;
      _Dst = (undefined8 *)FUN_1424da030((ulonglong)uVar2 * 8);
      if (_Dst == (undefined8 *)0x0) goto LAB_1425e2852;
      uVar9 = 0;
      memset(_Dst,0,(ulonglong)uVar2 * 8);
      do {
        local_4c = 0;
        uVar5 = FUN_1424ebec0(uVar6,uVar9 & 0xffffffff,&local_50,&local_4c);
        if (0 < local_4c) {
LAB_1425e29b0:
          bVar1 = false;
          goto LAB_1425e2854;
        }
        lVar8 = FUN_1424da030((longlong)local_50 + 1);
        _Dst[uVar9] = lVar8;
        if (lVar8 == 0) goto LAB_1425e29b0;
        FUN_14250ae10(uVar5,lVar8,local_50);
        *(undefined1 *)(_Dst[uVar9] + (longlong)local_50) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar2 != (uint)uVar9);
      bVar1 = true;
    }
    else {
LAB_1425e2852:
      _Dst = (undefined8 *)0x0;
    }
LAB_1425e2854:
    FUN_1424ea9f0(uVar6);
    FUN_1424ea9f0(uVar3);
    if (bVar1) {
      puVar7 = (undefined8 *)thunk_FUN_1424da030(0x20);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = icu_64::TZDBNames::vftable;
        puVar7[1] = puVar4;
        puVar7[2] = _Dst;
        *(uint *)(puVar7 + 3) = uVar2;
      }
      goto LAB_1425e298f;
    }
    FUN_1424da110(puVar4);
    if (_Dst == (undefined8 *)0x0) goto LAB_1425e298f;
    if (0 < (int)uVar2) {
      lVar8 = 0;
      do {
        FUN_1424da110(_Dst[lVar8]);
        lVar8 = lVar8 + 1;
      } while (uVar2 != (uint)lVar8);
    }
  }
  else {
    puVar4[1] = 0;
    _Dst = puVar4;
    if (bVar10 && bVar1) goto LAB_1425e2827;
  }
  FUN_1424da110(_Dst);
LAB_1425e298f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1425e29c0 FUN_1425e29c0 body=604 status=ok
// SIG undefined FUN_1425e29c0(void)

ulonglong FUN_1425e29c0(longlong param_1,int param_2,longlong *param_3,int *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  char *_Str1;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  bool bVar12;
  undefined1 local_c0 [64];
  ulonglong local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong local_68;
  int *local_60;
  int local_54;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    uVar8 = 0;
    goto LAB_1425e29eb;
  }
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*param_3 == 0) goto LAB_1425e29eb;
  if (*(char *)((longlong)param_3 + 0xe) == '\0') {
    local_50 = CONCAT44(local_50._4_4_,1);
  }
  else {
    iVar11 = *(int *)(*param_3 + 8);
    local_50 = CONCAT44(local_50._4_4_,iVar11);
    if (iVar11 < 1) goto LAB_1425e29eb;
  }
  puVar9 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  iVar11 = 0;
  uVar8 = local_50 & 0xffffffff;
  local_78 = param_3;
  local_68 = param_1;
  local_60 = param_4;
  local_54 = param_2;
  do {
    puVar6 = (undefined8 *)*param_3;
    if (*(char *)((longlong)param_3 + 0xe) != '\0') {
      puVar6 = (undefined8 *)FUN_142516630(puVar6,iVar11);
    }
    if ((puVar6 != (undefined8 *)0x0) && ((*(uint *)(puVar6 + 1) & *(uint *)(param_1 + 8)) != 0)) {
      puVar2 = (undefined8 *)puVar6[2];
      if (puVar2 == (undefined8 *)0x0) {
        bVar12 = local_70 == (undefined8 *)0x0;
        if (bVar12) {
          local_70 = puVar6;
        }
      }
      else {
        uVar1 = *(uint *)(puVar6 + 3);
        if (0 < (int)uVar1) {
          _Str1 = *(char **)(param_1 + 0x18);
          iVar5 = strcmp(_Str1,(char *)*puVar2);
          if (iVar5 == 0) {
            bVar12 = true;
            puVar10 = puVar6;
          }
          else {
            uVar8 = 1;
            local_80 = (ulonglong)uVar1;
            do {
              uVar7 = uVar8;
              puVar10 = puVar9;
              if (uVar1 == uVar7) break;
              iVar5 = strcmp(_Str1,(char *)puVar2[uVar7]);
              uVar8 = uVar7 + 1;
              puVar10 = puVar6;
            } while (iVar5 != 0);
            bVar12 = uVar7 < local_80;
            param_3 = local_78;
          }
          uVar8 = local_50 & 0xffffffff;
          puVar9 = puVar6;
          if (puVar10 != (undefined8 *)0x0) {
            puVar9 = puVar10;
          }
          param_1 = local_68;
          if (!bVar12) goto LAB_1425e2a61;
          break;
        }
        bVar12 = puVar9 == (undefined8 *)0x0;
      }
      if (bVar12) {
        puVar9 = puVar6;
      }
      uVar8 = local_50 & 0xffffffff;
    }
LAB_1425e2a61:
    iVar11 = iVar11 + 1;
    puVar10 = puVar9;
  } while (iVar11 != (int)uVar8);
  piVar4 = local_60;
  uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  if (puVar10 == (undefined8 *)0x0) goto LAB_1425e29eb;
  iVar11 = *(int *)(puVar10 + 1);
  if (*(char *)((longlong)puVar10 + 0xc) == '\0') {
    if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_1425e2b7f;
LAB_1425e2b67:
    iVar5 = *local_60;
  }
  else {
    if (((iVar11 == 0x20) || (iVar11 == 0x10)) && ((~*(uint *)(param_1 + 8) & 0x30) == 0)) {
      iVar11 = 8;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_1425e2b67;
LAB_1425e2b7f:
    local_50 = thunk_FUN_1424da030(0x10);
    if (local_50 == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *piVar4 = 7;
      goto LAB_1425e29eb;
    }
    FUN_142529d80(local_50);
    *(ulonglong *)(param_1 + 0x10) = local_50;
    iVar5 = *piVar4;
  }
  if (iVar5 < 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    FUN_1424a7000(local_c0,*puVar10,0xffffffff);
    iVar5 = local_54;
    FUN_142529f30(uVar3,iVar11,local_54,local_c0,piVar4);
    FUN_140859a90(local_c0);
    if ((*piVar4 < 1) && (*(int *)(param_1 + 0xc) < iVar5)) {
      *(int *)(param_1 + 0xc) = iVar5;
    }
  }
LAB_1425e29eb:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1425e2c20 Unwind@1425e2c20 body=55 status=ok
// SIG undefined Unwind@1425e2c20(void)

void Unwind_1425e2c20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425e2c60 Unwind@1425e2c60 body=55 status=ok
// SIG undefined Unwind@1425e2c60(void)

void Unwind_1425e2c60(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x98));
  return;
}



// FUNCTION 1425e2ca0 FUN_1425e2ca0 body=188 status=ok
// SIG undefined FUN_1425e2ca0(void)

undefined8 * FUN_1425e2ca0(undefined8 *param_1)

{
  char *_Str;
  undefined8 *puVar1;
  int iVar2;
  size_t sVar3;
  undefined1 local_d8 [160];
  undefined8 *local_38;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  *param_1 = icu_64::TZDBTimeZoneNames::vftable;
  local_38 = param_1;
  FUN_1424a3ce0(param_1 + 1);
  puVar1 = local_38;
  _Str = (char *)((longlong)local_38 + 0x22);
  sVar3 = strlen(_Str);
  if ((int)sVar3 == 0) {
    local_2c[0] = 0;
    FUN_1424d43b0(puVar1[6],local_d8,0x9d,local_2c);
    iVar2 = FUN_1424e8d90(local_d8,puVar1 + 0x1d,4,local_2c);
    if ((local_2c[0] < 1) && (iVar2 < 4)) {
      return puVar1;
    }
  }
  else if ((int)sVar3 < 4) {
    strcpy((char *)(puVar1 + 0x1d),_Str);
    return puVar1;
  }
  *(undefined4 *)(puVar1 + 0x1d) = 0x313030;
  return puVar1;
}



// FUNCTION 1425e2d60 Unwind@1425e2d60 body=39 status=ok
// SIG undefined Unwind@1425e2d60(void)

void Unwind_1425e2d60(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 1425e2d90 FUN_1425e2d90 body=7 status=ok
// SIG undefined FUN_1425e2d90(void)

bool FUN_1425e2d90(longlong param_1,longlong param_2)

{
  return param_1 == param_2;
}



// FUNCTION 1425e2da0 FUN_1425e2da0 body=68 status=ok
// SIG undefined FUN_1425e2da0(void)

longlong FUN_1425e2da0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0xf0);
  if (lVar1 != 0) {
    FUN_1425e2ca0(lVar1,param_1 + 8);
  }
  return lVar1;
}



// FUNCTION 1425e2df0 Unwind@1425e2df0 body=32 status=ok
// SIG undefined Unwind@1425e2df0(void)

void Unwind_1425e2df0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e2e10 FUN_1425e2e10 body=8 status=ok
// SIG undefined FUN_1425e2e10(void)

void FUN_1425e2e10(undefined8 param_1,undefined8 param_2)

{
  FUN_1425e0890(param_2);
  return;
}



// FUNCTION 1425e2e20 FUN_1425e2e20 body=11 status=ok
// SIG undefined FUN_1425e2e20(void)

void FUN_1425e2e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1425e0990(param_2,param_3);
  return;
}



// FUNCTION 1425e2e30 FUN_1425e2e30 body=31 status=ok
// SIG undefined FUN_1425e2e30(void)

undefined8
FUN_1425e2e30(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_14252b000(param_2,param_3,param_4);
  return param_4;
}



// FUNCTION 1425e2e50 FUN_1425e2e50 body=86 status=ok
// SIG undefined FUN_1425e2e50(void)

undefined8
FUN_1425e2e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_68 [64];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1424a7220(local_68,param_3,0xffffffff,0);
  FUN_14252bb60(param_2,local_68,param_4);
  FUN_140859a90(local_68);
  return param_4;
}



// FUNCTION 1425e2eb0 Unwind@1425e2eb0 body=36 status=ok
// SIG undefined Unwind@1425e2eb0(void)

void Unwind_1425e2eb0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425e2ee0 FUN_1425e2ee0 body=139 status=ok
// SIG undefined FUN_1425e2ee0(void)

void FUN_1425e2ee0(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1424a7130(param_4);
  if (0x1f < *(ushort *)(param_2 + 8)) {
    local_24 = 0;
    lVar1 = FUN_1425e2f80(param_2,&local_24);
    if (((lVar1 != 0) && (local_24 < 1)) &&
       (plVar2 = *(longlong **)(lVar1 + 8), plVar2 != (longlong *)0x0)) {
      if (param_3 != 0x10) {
        if (param_3 != 0x20) goto LAB_1425e2f5e;
        plVar2 = plVar2 + 1;
      }
      if (*plVar2 != 0) {
        FUN_1424a8f10(param_4,1,*plVar2,0xffffffff);
      }
    }
  }
LAB_1425e2f5e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425e2f80 FUN_1425e2f80 body=770 status=ok
// SIG undefined FUN_1425e2f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425e2f80(longlong param_1,int *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 local_260;
  uint local_258;
  undefined1 local_254;
  undefined1 local_253 [139];
  undefined2 local_1c8 [136];
  undefined1 local_b8 [136];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (0 < *param_2) goto LAB_1425e2fa8;
  if ((DAT_14c7fc0dc == 2) || (cVar2 = FUN_142501800(&DAT_14c7fc0dc), cVar2 == '\0')) {
    if (0 < DAT_14c7fc0e0) {
      *param_2 = DAT_14c7fc0e0;
      goto LAB_1425e2fa8;
    }
  }
  else {
    DAT_14c7fc078 = FUN_142501e10(FUN_142503190,&LAB_142503220,0,param_2);
    iVar3 = *param_2;
    if (iVar3 < 1) {
      FUN_142502350(DAT_14c7fc078,&LAB_1425e3e20);
      FUN_14251f960(0xe,FUN_1425e3dc0);
      iVar3 = *param_2;
    }
    else {
      DAT_14c7fc078 = 0;
    }
    DAT_14c7fc0e0 = iVar3;
    FUN_1425019c0(&DAT_14c7fc0dc);
  }
  if (0 < *param_2) goto LAB_1425e2fa8;
  FUN_1424a8350(param_1,local_1c8,0x81,param_2);
  if (*(short *)(param_1 + 8) < 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_1 + 8) >> 5;
  }
  local_1c8[iVar3] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c7fc070) && (FUN_144b3d300(&DAT_14c7fc070), DAT_14c7fc070 == -1)) {
    _DAT_14c7fc060 = 0;
    uRam000000014c7fc068 = 0;
    _DAT_14c7fc050 = 0;
    uRam000000014c7fc058 = 0;
    _DAT_14c7fc040 = 0;
    uRam000000014c7fc048 = 0;
    _DAT_14c7fc030 = 0;
    uRam000000014c7fc038 = 0;
    _DAT_14c7fc020 = 0;
    uRam000000014c7fc028 = 0;
    _Mtx_init_in_situ(&DAT_14c7fc020,2);
    atexit((_func_5014 *)&LAB_1425e3670);
    _Init_thread_footer(&DAT_14c7fc070);
  }
  FUN_142501320(&DAT_14c7fc020);
  lVar4 = FUN_142502620(DAT_14c7fc078,local_1c8);
  if (lVar4 == 0) {
    uVar5 = FUN_1424edad0("icudt64l-zone","tzdbNames",param_2);
    uVar5 = FUN_1424ecc30(uVar5,"zoneStrings",uVar5,param_2);
    if (*param_2 < 1) {
      uVar1 = *(ushort *)(param_1 + 8);
      if (uVar1 < 0x20) {
        local_258 = local_258 & 0xffffff00;
      }
      else {
        if ((short)uVar1 < 0) {
          iVar3 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar3 = (int)(short)uVar1 >> 5;
        }
        local_260 = 0;
        local_268 = 0x81;
        iVar3 = FUN_1424a83f0(param_1,0,iVar3,local_b8);
        local_258 = 0x6174656d;
        local_254 = 0x3a;
        memcpy(local_253,local_b8,(longlong)iVar3);
        local_253[iVar3] = 0;
      }
      pcVar6 = (char *)FUN_1425e2720(uVar5,&local_258);
      lVar4 = FUN_14252c150(param_1);
      if (lVar4 == 0) {
        if (pcVar6 != (char *)0x0) goto LAB_1425e31fe;
      }
      else {
        pcVar7 = "<empty>";
        if (pcVar6 != (char *)0x0) {
          pcVar7 = pcVar6;
        }
        FUN_142502aa0(DAT_14c7fc078,lVar4,pcVar7,param_2);
        if ((pcVar6 != (char *)0x0) && (0 < *param_2)) {
LAB_1425e31fe:
          (*(code *)**(undefined8 **)pcVar6)(pcVar6,1);
        }
      }
    }
    FUN_1424ea9f0(uVar5);
  }
  FUN_142501400(&DAT_14c7fc020);
LAB_1425e2fa8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_288);
}



// FUNCTION 1425e32a0 FUN_1425e32a0 body=25 status=ok
// SIG undefined FUN_1425e32a0(void)

undefined8 FUN_1425e32a0(void)

{
  undefined8 in_R9;
  
  FUN_1424a7130(in_R9);
  return in_R9;
}



// FUNCTION 1425e32c0 FUN_1425e32c0 body=861 status=ok
// SIG undefined FUN_1425e32c0(void)

undefined8 *
FUN_1425e32c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int *param_5
             )

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined **local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return (undefined8 *)0x0;
  }
  if ((DAT_14c7fc0d4 == 2) || (cVar2 = FUN_142501800(&DAT_14c7fc0d4), cVar2 == '\0')) {
    if (0 < DAT_14c7fc0d8) {
      *param_5 = DAT_14c7fc0d8;
      return (undefined8 *)0x0;
    }
    goto LAB_1425e3589;
  }
  if (*param_5 < 1) {
    DAT_14c7fc018 = (undefined8 *)thunk_FUN_1424da030(0x38);
    if (DAT_14c7fc018 == (undefined8 *)0x0) {
      DAT_14c7fc018 = (undefined8 *)0x0;
      *param_5 = 7;
    }
    else {
      *DAT_14c7fc018 = icu_64::TextTrieMap::vftable;
      *(undefined1 *)(DAT_14c7fc018 + 1) = 1;
      DAT_14c7fc018[2] = 0;
      DAT_14c7fc018[3] = 0;
      DAT_14c7fc018[4] = 0;
      *(undefined1 *)(DAT_14c7fc018 + 5) = 1;
      DAT_14c7fc018[6] = &LAB_1425e3db0;
      plVar3 = (longlong *)FUN_1425e0890(param_5);
      if (*param_5 < 1) {
        lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,param_5);
        if ((lVar4 != 0) && (plVar1 = plVar3, *param_5 < 1)) {
          while (local_60 = plVar1, lVar5 = FUN_1425e2f80(lVar4), *param_5 < 1) {
            if (lVar5 != 0) {
              plVar3 = *(longlong **)(lVar5 + 8);
              if (plVar3 == (longlong *)0x0) {
                lVar9 = 0;
                lVar8 = 0;
              }
              else {
                lVar9 = *plVar3;
                lVar8 = plVar3[1];
              }
              if (lVar9 != 0 || lVar8 != 0) {
                local_58 = *(longlong *)(lVar5 + 0x10);
                local_50 = 0;
                if (local_58 != 0) {
                  local_50 = *(undefined4 *)(lVar5 + 0x18);
                }
                if ((lVar9 != 0) && (lVar8 != 0)) {
                  uVar6 = FUN_142504390(lVar9);
                  local_4c = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),(int)uVar6 == 0);
                  uVar6 = FUN_14252c150(lVar4);
LAB_1425e349f:
                  puVar7 = (undefined8 *)FUN_1424da030(0x20);
                  if (puVar7 != (undefined8 *)0x0) {
                    *puVar7 = uVar6;
                    *(undefined4 *)(puVar7 + 1) = 0x10;
                    *(char *)((longlong)puVar7 + 0xc) = (char)local_4c;
                    puVar7[2] = local_58;
                    *(undefined4 *)(puVar7 + 3) = local_50;
                    FUN_1425df020(DAT_14c7fc018,lVar9,puVar7,param_5);
                    goto LAB_1425e34e5;
                  }
LAB_1425e360e:
                  *param_5 = 7;
                  plVar3 = local_60;
                  break;
                }
                uVar6 = FUN_14252c150(lVar4);
                local_4c = 0;
                if (lVar9 != 0) goto LAB_1425e349f;
LAB_1425e34e5:
                if ((lVar8 != 0) && (*param_5 < 1)) {
                  puVar7 = (undefined8 *)FUN_1424da030(0x20);
                  if (puVar7 == (undefined8 *)0x0) goto LAB_1425e360e;
                  *puVar7 = uVar6;
                  *(undefined4 *)(puVar7 + 1) = 0x20;
                  *(char *)((longlong)puVar7 + 0xc) = (char)local_4c;
                  puVar7[2] = local_58;
                  *(undefined4 *)(puVar7 + 3) = local_50;
                  FUN_1425df020(DAT_14c7fc018,lVar8,puVar7,param_5);
                }
              }
            }
            plVar3 = local_60;
            lVar4 = (**(code **)(*local_60 + 0x30))(local_60,param_5);
            if ((lVar4 == 0) || (plVar1 = local_60, 0 < *param_5)) break;
          }
        }
LAB_1425e337d:
        (**(code **)*plVar3)(plVar3,1);
        if (*param_5 < 1) {
          FUN_14251f960(0xe,FUN_1425e3dc0);
          goto LAB_1425e3575;
        }
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_1425e337d;
      if (DAT_14c7fc018 != (undefined8 *)0x0) {
        (**(code **)*DAT_14c7fc018)(DAT_14c7fc018,1);
      }
      DAT_14c7fc018 = (undefined8 *)0x0;
    }
  }
LAB_1425e3575:
  DAT_14c7fc0d8 = *param_5;
  FUN_1425019c0(&DAT_14c7fc0d4);
LAB_1425e3589:
  if (*param_5 < 1) {
    local_68 = param_1 + 0xe8;
    local_80 = icu_64::TZDBNameSearchHandler::vftable;
    local_74 = 0;
    local_70 = (undefined8 *)0x0;
    local_78 = param_4;
    FUN_1425df4e0(DAT_14c7fc018,param_2,param_3,&local_80,param_5);
    if (*param_5 < 1) {
      return local_70;
    }
    local_80 = icu_64::TZDBNameSearchHandler::vftable;
    if (local_70 != (undefined8 *)0x0) {
      (**(code **)*local_70)(local_70,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425e3620 Unwind@1425e3620 body=73 status=ok
// SIG undefined Unwind@1425e3620(void)

void Unwind_1425e3620(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_2 + 0x38) = icu_64::TZDBNameSearchHandler::vftable;
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1425e3680 FUN_1425e3680 body=38 status=ok
// SIG undefined FUN_1425e3680(void)

undefined8 FUN_1425e3680(undefined8 param_1,int param_2)

{
  FUN_1425def00();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e36b0 FUN_1425e36b0 body=73 status=ok
// SIG undefined FUN_1425e36b0(void)

undefined8 * FUN_1425e36b0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::MetaZoneIDsEnumeration::vftable;
  puVar1 = (undefined8 *)param_1[0x11];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14250a7a0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e3700 FUN_1425e3700 body=62 status=ok
// SIG undefined FUN_1425e3700(void)

undefined8 * FUN_1425e3700(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::ZNameSearchHandler::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e3740 FUN_1425e3740 body=38 status=ok
// SIG undefined FUN_1425e3740(void)

undefined8 FUN_1425e3740(undefined8 param_1,int param_2)

{
  FUN_1425e06b0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e3770 FUN_1425e3770 body=60 status=ok
// SIG undefined FUN_1425e3770(void)

undefined8 * FUN_1425e3770(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::TimeZoneNamesImpl::ZoneStringsLoader::vftable;
  FUN_142502220(param_1[2]);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e37b0 FUN_1425e37b0 body=199 status=ok
// SIG undefined FUN_1425e37b0(void)

void FUN_1425e37b0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined1 local_70 [40];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_70,param_5);
  if ((*param_5 < 1) && (cVar1 = FUN_14258c4f0(local_70,0,&local_48,param_3), cVar1 != '\0')) {
    iVar3 = 1;
    do {
      iVar2 = (**(code **)(*param_3 + 0x10))(param_3);
      if (iVar2 == 2) {
        local_78 = param_5;
        FUN_1425e3e40(param_1,local_48,param_3,param_4);
      }
      if (0 < *param_5) break;
      cVar1 = FUN_14258c4f0(local_70,iVar3,&local_48,param_3);
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 1425e3890 FUN_1425e3890 body=119 status=ok
// SIG undefined FUN_1425e3890(void)

undefined8 * FUN_1425e3890(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = icu_64::TZDBNames::vftable;
  if (param_1[1] != 0) {
    FUN_1424da110();
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    if (0 < *(int *)(param_1 + 3)) {
      lVar2 = 0;
      do {
        FUN_1424da110(*(undefined8 *)(lVar1 + lVar2 * 8));
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < *(int *)(param_1 + 3));
      lVar1 = param_1[2];
    }
    FUN_1424da110(lVar1);
  }
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e3910 FUN_1425e3910 body=62 status=ok
// SIG undefined FUN_1425e3910(void)

undefined8 * FUN_1425e3910(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::TZDBNameSearchHandler::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e3950 FUN_1425e3950 body=60 status=ok
// SIG undefined FUN_1425e3950(void)

undefined8 * FUN_1425e3950(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::TZDBTimeZoneNames::vftable;
  FUN_1414b3f60(param_1 + 1);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e39a0 FUN_1425e39a0 body=60 status=ok
// SIG undefined FUN_1425e39a0(void)

undefined4 FUN_1425e39a0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 2:
    return param_1;
  default:
    return 0xffffffff;
  case 4:
    return 3;
  case 8:
    return 4;
  case 0x10:
    return 5;
  case 0x20:
    return 6;
  case 0x40:
    return 0;
  }
}



// FUNCTION 1425e39e0 FUN_1425e39e0 body=38 status=ok
// SIG undefined FUN_1425e39e0(void)

undefined8 FUN_1425e39e0(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e3a10 FUN_1425e3a10 body=650 status=ok
// SIG undefined FUN_1425e3a10(void)

void FUN_1425e3a10(longlong param_1,char *param_2,longlong *param_3,undefined8 param_4,int *param_5)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  char *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_80,param_5);
  if ((*param_5 < 1) && (cVar1 = FUN_14258c4f0(local_80,0,&local_58,param_3), cVar1 != '\0')) {
    iVar5 = 1;
    do {
      cVar2 = (**(code **)(*param_3 + 0x58))(param_3);
      cVar1 = *local_58;
      if (cVar2 == '\0') {
        if (((cVar1 != '\0') && (cVar2 = local_58[1], cVar2 != '\0')) && (local_58[2] == '\0')) {
          if (cVar1 == 's') {
            if (cVar2 == 'd') {
              lVar6 = 6;
              lVar3 = *(longlong *)(param_1 + 0x38);
            }
            else if (cVar2 == 'g') {
              lVar6 = 4;
              lVar3 = *(longlong *)(param_1 + 0x28);
            }
            else {
              if (cVar2 != 's') goto LAB_1425e3ac0;
              lVar6 = 5;
              lVar3 = *(longlong *)(param_1 + 0x30);
            }
          }
          else if (cVar1 == 'l') {
            if (cVar2 == 'd') {
              lVar6 = 3;
              lVar3 = *(longlong *)(param_1 + 0x20);
            }
            else if (cVar2 == 'g') {
              lVar6 = 1;
              lVar3 = *(longlong *)(param_1 + 0x10);
            }
            else {
              if (cVar2 != 's') goto LAB_1425e3ac0;
              lVar6 = 2;
              lVar3 = *(longlong *)(param_1 + 0x18);
            }
          }
          else {
            if ((cVar1 != 'e') || (cVar2 != 'c')) goto LAB_1425e3ac0;
            lVar6 = 0;
            lVar3 = *(longlong *)(param_1 + 8);
          }
          if (lVar3 == 0) {
            uVar4 = (**(code **)(*param_3 + 0x18))(param_3,local_4c,param_5);
            *(undefined8 *)(param_1 + 8 + lVar6 * 8) = uVar4;
          }
        }
      }
      else if (((cVar1 != '\0') && (cVar2 = local_58[1], cVar2 != '\0')) && (local_58[2] == '\0')) {
        if (cVar1 == 's') {
          if (cVar2 == 'd') {
            lVar3 = 6;
          }
          else if (cVar2 == 'g') {
            lVar3 = 4;
          }
          else {
            if (cVar2 != 's') goto LAB_1425e3ac0;
            lVar3 = 5;
          }
        }
        else if (cVar1 == 'l') {
          if (cVar2 == 'd') {
            lVar3 = 3;
          }
          else if (cVar2 == 'g') {
            lVar3 = 1;
          }
          else {
            if (cVar2 != 's') goto LAB_1425e3ac0;
            lVar3 = 2;
          }
        }
        else {
          if ((cVar1 != 'e') || (cVar2 != 'c')) goto LAB_1425e3ac0;
          lVar3 = 0;
        }
        if (*(longlong *)(param_1 + 8 + lVar3 * 8) == 0) {
          *(undefined **)(param_1 + 8 + lVar3 * 8) = &DAT_149c4ba38;
        }
      }
LAB_1425e3ac0:
      cVar1 = FUN_14258c4f0(local_80,iVar5,&local_58,param_3);
      iVar5 = iVar5 + 1;
    } while (cVar1 != '\0');
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1425e3cd0 FUN_1425e3cd0 body=171 status=ok
// SIG undefined FUN_1425e3cd0(void)

longlong FUN_1425e3cd0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  FUN_1424a7220(param_2,param_3,0xffffffff,0);
  uVar2 = (uint)*(short *)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar1 = (int)uVar2 >> 5;
  if (*(short *)(param_2 + 8) < 0) {
    uVar1 = uVar3;
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      if (uVar5 < uVar1) {
        lVar4 = param_2 + 10;
        if ((uVar2 & 2) == 0) {
          lVar4 = *(longlong *)(param_2 + 0x18);
        }
        if (*(short *)(lVar4 + uVar5 * 2) == 0x3a) {
          FUN_1424a9010(param_2,uVar5 & 0xffffffff,0x2f);
          uVar2 = (uint)*(ushort *)(param_2 + 8);
          uVar3 = *(uint *)(param_2 + 0xc);
        }
      }
      uVar5 = uVar5 + 1;
      uVar1 = (int)(short)uVar2 >> 5;
      if ((short)uVar2 < 0) {
        uVar1 = uVar3;
      }
    } while ((longlong)uVar5 < (longlong)(int)uVar1);
  }
  return param_2;
}



// FUNCTION 1425e3d80 Unwind@1425e3d80 body=36 status=ok
// SIG undefined Unwind@1425e3d80(void)

void Unwind_1425e3d80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e3dc0 FUN_1425e3dc0 body=90 status=ok
// SIG undefined FUN_1425e3dc0(void)

undefined8 FUN_1425e3dc0(void)

{
  if (DAT_14c7fc078 != 0) {
    FUN_142502220();
    DAT_14c7fc078 = 0;
  }
  LOCK();
  DAT_14c7fc0dc = 0;
  UNLOCK();
  if (DAT_14c7fc018 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c7fc018)(DAT_14c7fc018,1);
    DAT_14c7fc018 = (undefined8 *)0x0;
  }
  LOCK();
  DAT_14c7fc0d4 = 0;
  UNLOCK();
  return 1;
}



// FUNCTION 1425e3e40 FUN_1425e3e40 body=536 status=ok
// SIG undefined FUN_1425e3e40(void)

void FUN_1425e3e40(longlong param_1,int *param_2,undefined8 param_3,uint param_4,int *param_5)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 uVar5;
  size_t _Size;
  undefined1 local_98 [64];
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return;
  }
  pcVar1 = (char *)FUN_142502620(*(undefined8 *)(param_1 + 0x10));
  if ((longlong *)pcVar1 == (longlong *)0x0) {
    sVar2 = strlen((char *)param_2);
    if ((sVar2 < 5) || ((char)param_2[1] != ':' || *param_2 != 0x6174656d)) {
      FUN_1425e3cd0(param_1,local_98,param_2);
      uVar3 = FUN_1424a8e50(local_98);
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf0);
    }
    else {
      FUN_1424a7220(local_98,(longlong)param_2 + 5,(int)sVar2 + -5,0);
      uVar3 = FUN_1424a8e50(local_98);
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf8);
    }
    lVar4 = FUN_142502620(uVar5,uVar3);
    if (lVar4 == 0) {
      pcVar1 = (char *)thunk_FUN_1424da030(0x40);
      if ((longlong *)pcVar1 == (longlong *)0x0) {
        *param_5 = 7;
        FUN_140859a90(local_98);
        return;
      }
      *(undefined ***)pcVar1 = icu_64::ZNames::ZNamesLoader::vftable;
      *(longlong *)((longlong)pcVar1 + 8) = 0;
      *(longlong *)((longlong)pcVar1 + 0x10) = 0;
      *(longlong *)((longlong)pcVar1 + 0x18) = 0;
      *(longlong *)((longlong)pcVar1 + 0x20) = 0;
      *(longlong *)((longlong)pcVar1 + 0x28) = 0;
      *(longlong *)((longlong)pcVar1 + 0x30) = 0;
      *(longlong *)((longlong)pcVar1 + 0x38) = 0;
    }
    else {
      pcVar1 = "<dummy>";
    }
    local_58 = param_3;
    local_49 = (byte)param_4;
    FUN_140859a90(local_98);
    sVar2 = strlen((char *)param_2);
    _Size = (longlong)((sVar2 << 0x20) + 0x100000000) >> 0x20;
    _Dst = (void *)FUN_1424da030(_Size);
    if (_Dst == (void *)0x0) {
      *param_5 = 7;
    }
    else {
      memcpy(_Dst,param_2,_Size);
      *(undefined1 *)((longlong)_Dst + ((longlong)(sVar2 << 0x20) >> 0x20)) = 0;
      if (*param_5 < 1) {
        FUN_142502aa0(*(undefined8 *)(param_1 + 0x10),_Dst,pcVar1,param_5);
        param_4 = (uint)local_49;
        param_3 = local_58;
        if (0 < *param_5) {
          return;
        }
        goto LAB_1425e3e9e;
      }
    }
    if (pcVar1 != "<dummy>") {
      (*(code *)**(undefined8 **)pcVar1)(pcVar1,1);
    }
  }
  else {
LAB_1425e3e9e:
    if (pcVar1 != "<dummy>") {
      (**(code **)(*(longlong *)pcVar1 + 0x10))(pcVar1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 1425e4060 Unwind@1425e4060 body=55 status=ok
// SIG undefined Unwind@1425e4060(void)

void Unwind_1425e4060(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425e40a0 Unwind@1425e40a0 body=55 status=ok
// SIG undefined Unwind@1425e40a0(void)

void Unwind_1425e40a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425e40e0 FUN_1425e40e0 body=8 status=ok
// SIG undefined FUN_1425e40e0(void)

undefined * FUN_1425e40e0(void)

{
  return &DAT_14c7fc0e4;
}



// FUNCTION 1425e40f0 FUN_1425e40f0 body=109 status=ok
// SIG undefined FUN_1425e40f0(void)

undefined8 * FUN_1425e40f0(undefined8 *param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  char cVar1;
  
  *param_1 = icu_64::Measure::vftable;
  FUN_14252cd50(param_1 + 1);
  param_1[0xf] = param_3;
  if (*param_4 < 1) {
    cVar1 = FUN_14252d150(param_1 + 1);
    if ((param_3 == 0) || (cVar1 == '\0')) {
      *param_4 = 1;
    }
  }
  return param_1;
}



// FUNCTION 1425e4160 Unwind@1425e4160 body=36 status=ok
// SIG undefined Unwind@1425e4160(void)

void Unwind_1425e4160(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425e4190 Unwind@1425e4190 body=36 status=ok
// SIG undefined Unwind@1425e4190(void)

void Unwind_1425e4190(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e41c0 FUN_1425e41c0 body=111 status=ok
// SIG undefined FUN_1425e41c0(void)

undefined8 * FUN_1425e41c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = icu_64::Measure::vftable;
  FUN_14252c810(param_1 + 1);
  param_1[0xf] = 0;
  if (param_1 != param_2) {
    FUN_14252ce00(param_1 + 1,param_2 + 1);
    uVar1 = (**(code **)(*(longlong *)param_2[0xf] + 0x10))();
    param_1[0xf] = uVar1;
  }
  return param_1;
}



// FUNCTION 1425e4230 Unwind@1425e4230 body=34 status=ok
// SIG undefined Unwind@1425e4230(void)

void Unwind_1425e4230(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e4260 Unwind@1425e4260 body=34 status=ok
// SIG undefined Unwind@1425e4260(void)

void Unwind_1425e4260(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425e4290 FUN_1425e4290 body=129 status=ok
// SIG undefined FUN_1425e4290(void)

undefined8 * FUN_1425e4290(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::Measure::vftable;
    FUN_14252c810(puVar1 + 1);
    puVar1[0xf] = 0;
    if (puVar1 != param_1) {
      FUN_14252ce00(puVar1 + 1,param_1 + 1);
      uVar2 = (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
      puVar1[0xf] = uVar2;
    }
  }
  return puVar1;
}



// FUNCTION 1425e4320 Unwind@1425e4320 body=34 status=ok
// SIG undefined Unwind@1425e4320(void)

void Unwind_1425e4320(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e4350 Unwind@1425e4350 body=45 status=ok
// SIG undefined Unwind@1425e4350(void)

void Unwind_1425e4350(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1425e4380 FUN_1425e4380 body=59 status=ok
// SIG undefined FUN_1425e4380(void)

void FUN_1425e4380(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::Measure::vftable;
  puVar1 = (undefined8 *)param_1[0xf];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14252d110(param_1 + 1);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425e43c0 FUN_1425e43c0 body=79 status=ok
// SIG undefined FUN_1425e43c0(void)

undefined8 * FUN_1425e43c0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::Measure::vftable;
  puVar1 = (undefined8 *)param_1[0xf];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14252d110(param_1 + 1);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e4410 FUN_1425e4410 body=201 status=ok
// SIG undefined FUN_1425e4410(void)

void FUN_1425e4410(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  
  if (*param_3 < 1) {
    *param_1 = (longlong)param_2;
    if ((*param_2 == 0xb1a0) && ((char)param_2[1] == '\x05')) {
      *(undefined1 *)(param_1 + 0x11) = 0;
      if (param_2[5] != 0) {
        param_1[1] = (ulonglong)(uint)param_2[4] + (longlong)param_2;
      }
      if (param_2[7] != 0) {
        param_1[2] = (ulonglong)(uint)param_2[6] + (longlong)param_2;
      }
      lVar1 = FUN_14257f7c0(0,(ulonglong)(uint)param_2[8] + (longlong)param_2,param_2[9],0,param_3);
      param_1[6] = lVar1;
      if (*param_3 < 1) {
        lVar1 = (ulonglong)*(uint *)(*param_1 + 0x28) + (longlong)param_2;
        param_1[3] = lVar1;
        FUN_1424a8f10(param_1 + 9,1,lVar1,0xffffffff);
        param_1[4] = (ulonglong)*(uint *)(*param_1 + 0x30) + (longlong)param_2;
        *(uint *)(param_1 + 5) = (uint)param_2[0xd] >> 2;
        LOCK();
        *(undefined4 *)(param_1 + 7) = 1;
        UNLOCK();
      }
    }
    else {
      *param_3 = 3;
    }
  }
  return;
}



// FUNCTION 1425e44e0 FUN_1425e44e0 body=200 status=ok
// SIG undefined FUN_1425e44e0(void)

undefined8 * FUN_1425e44e0(undefined8 *param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  ushort *puVar1;
  
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 10) = 2;
  param_1[6] = 0;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  LOCK();
  *(undefined4 *)(param_1 + 7) = 0;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x11) = 1;
  if (*param_3 < 1) {
    puVar1 = *(ushort **)(param_2 + 8);
    if ((((((ulonglong)*puVar1 < 0x14) || ((char)puVar1[4] != '\0')) ||
         (*(char *)((longlong)puVar1 + 9) != '\0')) ||
        (((char)puVar1[6] != 'B' || (*(char *)((longlong)puVar1 + 0xd) != 'r')))) ||
       (((char)puVar1[7] != 'k' ||
        ((*(char *)((longlong)puVar1 + 0xf) != ' ' || ((char)puVar1[8] != '\x05')))))) {
      *param_3 = 3;
    }
    else {
      FUN_1425e4410(param_1,(longlong)puVar1 + (ulonglong)*puVar1,param_3,param_4,param_1 + 9,
                    0xfffffffffffffffe);
      param_1[8] = param_2;
    }
  }
  return param_1;
}



// FUNCTION 1425e45b0 Unwind@1425e45b0 body=34 status=ok
// SIG undefined Unwind@1425e45b0(void)

void Unwind_1425e45b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425e45e0 FUN_1425e45e0 body=48 status=ok
// SIG undefined FUN_1425e45e0(void)

bool FUN_1425e45e0(undefined8 *param_1,undefined8 *param_2)

{
  void *_Buf1;
  void *_Buf2;
  int iVar1;
  bool bVar2;
  
  _Buf1 = (void *)*param_1;
  _Buf2 = (void *)*param_2;
  if (_Buf1 == _Buf2) {
    bVar2 = true;
  }
  else if (*(uint *)((longlong)_Buf1 + 8) == *(uint *)((longlong)_Buf2 + 8)) {
    iVar1 = memcmp(_Buf1,_Buf2,(ulonglong)*(uint *)((longlong)_Buf1 + 8));
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 1425e4620 FUN_1425e4620 body=92 status=ok
// SIG undefined FUN_1425e4620(void)

void FUN_1425e4620(undefined8 *param_1)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(param_1 + 7);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_14257f940(param_1[6]);
    param_1[6] = 0;
    if (param_1[8] == 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        FUN_1424da110(*param_1);
      }
    }
    else {
      FUN_142532330();
    }
    FUN_140859a90(param_1 + 9);
    FUN_1401773f0(param_1);
    return;
  }
  return;
}



// FUNCTION 1425e4680 FUN_1425e4680 body=8 status=ok
// SIG undefined FUN_1425e4680(void)

longlong FUN_1425e4680(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1425e4690 FUN_1425e4690 body=5 status=ok
// SIG undefined FUN_1425e4690(void)

longlong FUN_1425e4690(longlong param_1)

{
  return param_1 + 0x48;
}



// FUNCTION 1425e46a0 FUN_1425e46a0 body=46 status=ok
// SIG undefined FUN_1425e46a0(void)

undefined8 * FUN_1425e46a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  FUN_142517d10(param_1 + 1,param_3);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  return param_1;
}



// FUNCTION 1425e46d0 FUN_1425e46d0 body=9 status=ok
// SIG undefined FUN_1425e46d0(void)

void FUN_1425e46d0(longlong param_1)

{
  FUN_142517df0(param_1 + 8);
  return;
}



// FUNCTION 1425e46e0 FUN_1425e46e0 body=23 status=ok
// SIG undefined FUN_1425e46e0(void)

void FUN_1425e46e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1425182b0(param_1 + 8);
  return;
}



// FUNCTION 1425e4700 FUN_1425e4700 body=189 status=ok
// SIG undefined FUN_1425e4700(void)

undefined8 FUN_1425e4700(longlong param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((*(int *)(param_1 + 0x2c) < param_2) && (param_2 <= *(int *)(param_1 + 0x30))) {
    if (*(int *)(param_1 + 0x30) == param_2) {
      uVar2 = *(int *)(param_1 + 0x10) - 1;
      *(uint *)(param_1 + 0x28) = uVar2;
      if ((int)uVar2 < 1) goto LAB_1425e472c;
LAB_1425e473b:
      uVar5 = *(uint *)(param_1 + 0x10);
      if (((int)uVar5 <= (int)uVar2) ||
         (*(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 4) != param_2))
      goto LAB_1425e476a;
      *(uint *)(param_1 + 0x28) = uVar2 - 1;
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 - 1) * 4);
      *param_3 = iVar4;
      uVar1 = *(undefined4 *)(param_1 + 0x34 + (ulonglong)(iVar4 != *(int *)(param_1 + 0x2c)) * 4);
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x28);
      if (0 < (int)uVar2) goto LAB_1425e473b;
LAB_1425e472c:
      if (uVar2 == 0) goto LAB_1425e4710;
      uVar5 = *(uint *)(param_1 + 0x10);
LAB_1425e476a:
      uVar2 = uVar5;
      do {
        uVar6 = uVar2 - 1;
        *(uint *)(param_1 + 0x28) = uVar6;
        if ((int)uVar2 < 1) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        iVar4 = 0;
        if ((0 < (int)uVar5) && ((int)uVar2 <= (int)uVar5)) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar6 * 4);
        }
        uVar2 = uVar6;
      } while (param_2 <= iVar4);
      *param_3 = iVar4;
      uVar1 = *(undefined4 *)(param_1 + 0x34 + (ulonglong)(iVar4 != *(int *)(param_1 + 0x2c)) * 4);
    }
    *param_4 = uVar1;
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  else {
LAB_1425e4710:
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1425e47d0 FUN_1425e47d0 body=864 status=ok
// SIG undefined FUN_1425e47d0(void)

void FUN_1425e47d0(longlong *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ushort *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined4 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 - param_2 < 2) goto LAB_1425e4b23;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  local_60 = param_1 + 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  FUN_1425182b0();
  *(undefined4 *)((longlong)param_1 + 0x34) = param_4;
  *(undefined4 *)(param_1 + 7) = param_5;
  local_4c = 0;
  lVar3 = *param_1;
  lVar1 = lVar3 + 0x148;
  FUN_14250e700(lVar1,(longlong)param_2);
  uVar5 = FUN_14250e920(lVar1);
  uVar14 = (ulonglong)uVar5;
  plVar10 = *(longlong **)(*(longlong *)(*param_1 + 0x1d8) + 0x30);
  lVar8 = *plVar10;
  if (uVar5 < 0xd800) {
    uVar2 = *(ushort *)(lVar8 + (ulonglong)(uVar5 >> 5) * 2);
  }
  else {
    if (uVar5 < 0x10000) {
      uVar13 = (uVar5 >> 5) + 0x140;
      if (0xdbff < uVar5) {
        uVar13 = uVar5 >> 5;
      }
      uVar11 = (ulonglong)uVar13;
    }
    else {
      if (0x10ffff < uVar5) {
        iVar12 = (int)plVar10[3] + 0x80;
        goto LAB_1425e48e3;
      }
      if (*(int *)((longlong)plVar10 + 0x2c) <= (int)uVar5) {
        iVar12 = (int)plVar10[6];
        goto LAB_1425e48e3;
      }
      uVar11 = (ulonglong)(uVar5 >> 5 & 0x3f) +
               (ulonglong)*(ushort *)(lVar8 + 0x1040 + (ulonglong)(uVar5 >> 0xb) * 2);
    }
    uVar2 = *(ushort *)(lVar8 + uVar11 * 2);
  }
  iVar12 = (uVar5 & 0x1f) + (uint)uVar2 * 4;
LAB_1425e48e3:
  local_58 = (undefined4 *)((longlong)param_1 + 0x2c);
  puVar9 = (ushort *)(lVar8 + (longlong)iVar12 * 2);
  iVar12 = 0;
  do {
    uVar2 = *puVar9;
    if (*(int *)(lVar3 + 0x164) < *(int *)(lVar3 + 0x170)) {
      iVar6 = (**(code **)(*(longlong *)(lVar3 + 0x180) + 0x40))(lVar1);
      if (param_3 <= iVar6) goto LAB_1425e49a8;
LAB_1425e494b:
      if ((uVar2 & 0x4000) != 0) goto LAB_1425e49a8;
      FUN_14250e570(lVar1);
      uVar5 = FUN_14250e920(lVar1);
      uVar14 = (ulonglong)uVar5;
      plVar10 = *(longlong **)(*(longlong *)(*param_1 + 0x1d8) + 0x30);
      lVar8 = *plVar10;
      if (0xd7ff < uVar5) goto joined_r0x0001425e4a10;
LAB_1425e4900:
      uVar2 = *(ushort *)(lVar8 + (uVar14 >> 5) * 2);
LAB_1425e490a:
      iVar6 = ((uint)uVar14 & 0x1f) + (uint)uVar2 * 4;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x170) + (int)*(undefined8 *)(lVar3 + 0x168);
      if (iVar6 < param_3) goto LAB_1425e494b;
LAB_1425e49a8:
      if (param_3 <= iVar6) break;
      plVar10 = (longlong *)FUN_142531c90(*param_1,uVar14);
      if (plVar10 != (longlong *)0x0) {
        local_68 = local_60;
        iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,lVar1,param_2,param_3);
        iVar12 = iVar12 + iVar6;
      }
      uVar5 = FUN_14250e920(lVar1);
      uVar14 = (ulonglong)uVar5;
      plVar10 = *(longlong **)(*(longlong *)(*param_1 + 0x1d8) + 0x30);
      lVar8 = *plVar10;
      if (uVar5 < 0xd800) goto LAB_1425e4900;
joined_r0x0001425e4a10:
      uVar13 = (uint)uVar14;
      if (uVar5 < 0x10000) {
        uVar11 = (ulonglong)((int)(uVar14 >> 5) + 0x140);
        if (0xdbff < uVar13) {
          uVar11 = uVar14 >> 5;
        }
LAB_1425e4a60:
        uVar2 = *(ushort *)(lVar8 + uVar11 * 2);
        goto LAB_1425e490a;
      }
      if (uVar13 < 0x110000) {
        if ((int)uVar13 < *(int *)((longlong)plVar10 + 0x2c)) {
          uVar11 = (ulonglong)((uint)(uVar14 >> 5) & 0x3f) +
                   (ulonglong)*(ushort *)(lVar8 + 0x1040 + (uVar14 >> 0xb) * 2);
          goto LAB_1425e4a60;
        }
        iVar6 = (int)plVar10[6];
      }
      else {
        iVar6 = (int)plVar10[3] + 0x80;
      }
    }
    puVar9 = (ushort *)(lVar8 + (longlong)iVar6 * 2);
  } while( true );
  if (iVar12 < 1) goto LAB_1425e4b23;
  iVar12 = (int)param_1[2];
  if (iVar12 < 1) {
    if (param_2 < 0) goto LAB_1425e4a8b;
  }
  else if (param_2 < *(int *)param_1[4]) {
LAB_1425e4a8b:
    FUN_142518160(local_60,param_2,0,&local_4c);
    iVar12 = (int)param_1[2];
  }
  if (iVar12 < 1) {
    if (0 < param_3) goto LAB_1425e4ac4;
  }
  else if (*(int *)(param_1[4] + (ulonglong)(iVar12 - 1) * 4) < param_3) {
LAB_1425e4ac4:
    if ((iVar12 < -1) || (*(int *)((longlong)param_1 + 0x14) <= iVar12)) {
      cVar4 = FUN_1425182c0(local_60,iVar12 + 1,&local_4c);
      iVar12 = (int)param_1[2];
      if (cVar4 == '\0') goto LAB_1425e4af8;
    }
    *(int *)(param_1[4] + (longlong)iVar12 * 4) = param_3;
    iVar12 = (int)param_1[2] + 1;
    *(int *)(param_1 + 2) = iVar12;
  }
LAB_1425e4af8:
  *(undefined4 *)(param_1 + 5) = 0;
  if (iVar12 < 1) {
    *local_58 = 0;
    uVar7 = 0;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)param_1[4];
    uVar7 = ((undefined4 *)param_1[4])[iVar12 - 1];
  }
  *(undefined4 *)(param_1 + 6) = uVar7;
LAB_1425e4b23:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 1425e4b50 FUN_1425e4b50 body=69 status=ok
// SIG undefined FUN_1425e4b50(void)

undefined8 * FUN_1425e4b50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = icu_64::RuleBasedBreakIterator::BreakCache::vftable;
  param_1[1] = param_2;
  FUN_142517d10(param_1 + 100,param_3);
  *(undefined2 *)(param_1 + 0x44) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 1425e4ba0 FUN_1425e4ba0 body=30 status=ok
// SIG undefined FUN_1425e4ba0(void)

void FUN_1425e4ba0(longlong param_1,undefined4 param_2,undefined2 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined2 *)(param_1 + 0x220) = param_3;
  return;
}



// FUNCTION 1425e4bc0 FUN_1425e4bc0 body=50 status=ok
// SIG undefined FUN_1425e4bc0(void)

undefined4 FUN_1425e4bc0(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e0) = *(undefined4 *)(param_1 + 0x18);
  *(uint *)(*(longlong *)(param_1 + 8) + 0x1e4) =
       (uint)*(ushort *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x1c) * 2);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x278) = 0;
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 1425e4c00 FUN_1425e4c00 body=322 status=ok
// SIG undefined FUN_1425e4c00(void)

void FUN_1425e4c00(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  if (0 < *param_3) {
    return;
  }
  if (*(int *)(param_1 + 0x18) != param_2) {
    uVar6 = *(uint *)(param_1 + 0x10);
    uVar7 = (ulonglong)(int)uVar6;
    iVar1 = *(int *)(param_1 + 0x20 + uVar7 * 4);
    if (iVar1 <= param_2) {
      uVar10 = *(uint *)(param_1 + 0x14);
      uVar8 = (ulonglong)(int)uVar10;
      iVar2 = *(int *)(param_1 + 0x20 + uVar8 * 4);
      if (param_2 <= iVar2) {
        if (iVar1 == param_2) {
          puVar9 = (undefined4 *)(param_1 + uVar7 * 4 + 0x20);
          *(uint *)(param_1 + 0x1c) = uVar6;
        }
        else if (iVar2 == param_2) {
          puVar9 = (undefined4 *)(param_1 + uVar8 * 4 + 0x20);
          *(uint *)(param_1 + 0x1c) = uVar10;
        }
        else {
          if (uVar6 != uVar10) {
            do {
              uVar6 = (uint)uVar7;
              uVar10 = (int)((uint)((int)uVar8 < (int)uVar6) * 0x80 + uVar6 + (int)uVar8) / 2;
              uVar7 = (ulonglong)(uVar10 & 0x7f);
              if (*(int *)(param_1 + 0x20 + uVar7 * 4) <= param_2) {
                uVar7 = uVar8 & 0xffffffff;
                uVar6 = uVar10 + 1 & 0x7f;
              }
              uVar8 = uVar7;
              uVar7 = (ulonglong)uVar6;
            } while (uVar6 != (uint)uVar8);
          }
          uVar6 = uVar6 - 1 & 0x7f;
          *(uint *)(param_1 + 0x1c) = uVar6;
          puVar9 = (undefined4 *)(param_1 + (ulonglong)uVar6 * 4 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x18) = *puVar9;
        goto LAB_1425e4cd7;
      }
    }
    cVar4 = FUN_1425e4e10(param_1);
    if (cVar4 == '\0') {
      return;
    }
  }
LAB_1425e4cd7:
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x278) = 0;
  if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x14)) {
    bVar5 = FUN_1425e5300(param_1);
    *(byte *)(*(longlong *)(param_1 + 8) + 0x278) = bVar5 ^ 1;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e0) = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    uVar6 = *(int *)(param_1 + 0x1c) + 1U & 0x7f;
    *(uint *)(param_1 + 0x1c) = uVar6;
    uVar3 = *(undefined4 *)(param_1 + 0x20 + (ulonglong)uVar6 * 4);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e0) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  *(uint *)(*(longlong *)(param_1 + 8) + 0x1e4) =
       (uint)*(ushort *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x1c) * 2);
  return;
}



// FUNCTION 1425e4d50 FUN_1425e4d50 body=176 status=ok
// SIG undefined FUN_1425e4d50(void)

undefined8 FUN_1425e4d50(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar4 = (ulonglong)(int)uVar9;
  iVar1 = *(int *)(param_1 + 0x20 + uVar4 * 4);
  if (iVar1 <= param_2) {
    uVar10 = *(uint *)(param_1 + 0x14);
    uVar7 = (ulonglong)(int)uVar10;
    iVar2 = *(int *)(param_1 + 0x20 + uVar7 * 4);
    if (param_2 <= iVar2) {
      if (iVar1 == param_2) {
        puVar5 = (undefined4 *)(param_1 + uVar4 * 4 + 0x20);
        *(uint *)(param_1 + 0x1c) = uVar9;
      }
      else if (iVar2 == param_2) {
        puVar5 = (undefined4 *)(param_1 + uVar7 * 4 + 0x20);
        *(uint *)(param_1 + 0x1c) = uVar10;
      }
      else {
        if (uVar9 != uVar10) {
          do {
            uVar9 = (uint)uVar4;
            uVar6 = (uint)uVar7;
            uVar8 = (int)((uint)((int)uVar6 < (int)uVar9) * 0x80 + uVar6 + uVar9) / 2;
            uVar10 = uVar8 & 0x7f;
            if (*(int *)(param_1 + 0x20 + (ulonglong)uVar10 * 4) <= param_2) {
              uVar10 = uVar6;
              uVar9 = uVar8 + 1 & 0x7f;
            }
            uVar7 = (ulonglong)uVar10;
            uVar4 = (ulonglong)uVar9;
          } while (uVar9 != uVar10);
        }
        uVar9 = uVar9 - 1 & 0x7f;
        *(uint *)(param_1 + 0x1c) = uVar9;
        puVar5 = (undefined4 *)(param_1 + (ulonglong)uVar9 * 4 + 0x20);
      }
      uVar3 = *puVar5;
      *(undefined4 *)(param_1 + 0x18) = uVar3;
      return CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1425e4e10 FUN_1425e4e10 body=672 status=ok
// SIG undefined FUN_1425e4e10(void)

ulonglong FUN_1425e4e10(longlong param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 unaff_RBP;
  undefined7 uVar9;
  int iVar10;
  
  if (*param_3 < 1) {
    iVar10 = *(int *)(param_1 + 0x20 + (longlong)*(int *)(param_1 + 0x10) * 4);
    if ((param_2 < iVar10 + -0xf) ||
       (iVar6 = *(int *)(param_1 + 0x20 + (longlong)*(int *)(param_1 + 0x14) * 4),
       iVar6 + 0xf < param_2)) {
      iVar10 = 0;
      uVar4 = 0;
      if (0x14 < param_2) {
        uVar5 = FUN_142531910(*(undefined8 *)(param_1 + 8),param_2);
        if ((int)uVar5 < 1) {
          iVar10 = 0;
          uVar4 = 0;
        }
        else {
          *(uint *)(*(longlong *)(param_1 + 8) + 0x1e0) = uVar5;
          iVar10 = FUN_1425313a0(*(undefined8 *)(param_1 + 8));
          if (iVar10 <= (int)(uVar5 + 4)) {
            FUN_14250e700(*(longlong *)(param_1 + 8) + 0x148,(longlong)iVar10);
            uVar8 = FUN_14250e7a0(*(longlong *)(param_1 + 8) + 0x148);
            if (uVar8 == uVar5) {
              iVar10 = FUN_1425313a0(*(undefined8 *)(param_1 + 8));
            }
          }
          uVar4 = *(undefined2 *)(*(longlong *)(param_1 + 8) + 0x1e4);
        }
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 0x18) = iVar10;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(int *)(param_1 + 0x20) = iVar10;
      *(undefined2 *)(param_1 + 0x220) = uVar4;
      iVar6 = iVar10;
    }
    uVar9 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if (iVar6 < param_2) {
      while( true ) {
        iVar10 = *(int *)(param_1 + 0x14);
        if (param_2 <= *(int *)(param_1 + 0x20 + (longlong)iVar10 * 4)) break;
        cVar2 = FUN_1425e5300(param_1);
        if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      *(int *)(param_1 + 0x1c) = iVar10;
      iVar10 = *(int *)(param_1 + 0x20 + (longlong)iVar10 * 4);
      *(int *)(param_1 + 0x18) = iVar10;
      uVar8 = CONCAT71(uVar9,1);
      while (param_2 < iVar10) {
        if (*param_3 < 1) {
          uVar5 = *(uint *)(param_1 + 0x1c);
          if (uVar5 == *(uint *)(param_1 + 0x10)) {
            FUN_1425e5560(param_1,param_3);
            uVar7 = *(uint *)(param_1 + 0x1c);
          }
          else {
            uVar7 = uVar5 - 1 & 0x7f;
            *(uint *)(param_1 + 0x1c) = uVar7;
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x20 + (ulonglong)uVar7 * 4)
            ;
          }
          *(bool *)(*(longlong *)(param_1 + 8) + 0x278) = uVar7 == uVar5;
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e0) = *(undefined4 *)(param_1 + 0x18);
          *(uint *)(*(longlong *)(param_1 + 8) + 0x1e4) =
               (uint)*(ushort *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x1c) * 2);
          iVar10 = *(int *)(param_1 + 0x18);
        }
      }
    }
    else {
      uVar8 = CONCAT71(uVar9,1);
      if (param_2 < iVar10) {
        do {
          FUN_1425e5560(param_1,param_3);
          iVar10 = *(int *)(param_1 + 0x10);
        } while (param_2 < *(int *)(param_1 + 0x20 + (longlong)iVar10 * 4));
        *(int *)(param_1 + 0x1c) = iVar10;
        iVar10 = *(int *)(param_1 + 0x20 + (longlong)iVar10 * 4);
        *(int *)(param_1 + 0x18) = iVar10;
        while (iVar10 < param_2) {
          if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x14)) {
            bVar3 = FUN_1425e5300(param_1);
            *(byte *)(*(longlong *)(param_1 + 8) + 0x278) = bVar3 ^ 1;
            *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e0) = *(undefined4 *)(param_1 + 0x18);
          }
          else {
            uVar5 = *(int *)(param_1 + 0x1c) + 1U & 0x7f;
            *(uint *)(param_1 + 0x1c) = uVar5;
            uVar1 = *(undefined4 *)(param_1 + 0x20 + (ulonglong)uVar5 * 4);
            *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e0) = uVar1;
            *(undefined4 *)(param_1 + 0x18) = uVar1;
          }
          *(uint *)(*(longlong *)(param_1 + 8) + 0x1e4) =
               (uint)*(ushort *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x1c) * 2);
          iVar10 = *(int *)(param_1 + 0x18);
        }
        if ((param_2 < iVar10) && (*param_3 < 1)) {
          uVar5 = *(uint *)(param_1 + 0x1c);
          if (uVar5 == *(uint *)(param_1 + 0x10)) {
            FUN_1425e5560(param_1,param_3);
            uVar7 = *(uint *)(param_1 + 0x1c);
          }
          else {
            uVar7 = uVar5 - 1 & 0x7f;
            *(uint *)(param_1 + 0x1c) = uVar7;
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x20 + (ulonglong)uVar7 * 4)
            ;
          }
          *(bool *)(*(longlong *)(param_1 + 8) + 0x278) = uVar7 == uVar5;
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e0) = *(undefined4 *)(param_1 + 0x18);
          *(uint *)(*(longlong *)(param_1 + 8) + 0x1e4) =
               (uint)*(ushort *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x1c) * 2);
        }
      }
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1425e50c0 FUN_1425e50c0 body=381 status=ok
// SIG undefined FUN_1425e50c0(void)

void FUN_1425e50c0(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  
  if (0 < *param_3) {
    return;
  }
  if (*(int *)(param_1 + 0x18) == param_2) goto LAB_1425e511c;
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar5 = (ulonglong)(int)uVar9;
  iVar1 = *(int *)(param_1 + 0x20 + uVar5 * 4);
  if (param_2 < iVar1) {
LAB_1425e50fc:
    cVar3 = FUN_1425e4e10(param_1,param_2,param_3);
    if (cVar3 == '\0') {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x14);
    uVar7 = (ulonglong)(int)uVar4;
    iVar2 = *(int *)(param_1 + 0x20 + uVar7 * 4);
    if (iVar2 < param_2) goto LAB_1425e50fc;
    if (iVar1 == param_2) {
      piVar10 = (int *)(param_1 + uVar5 * 4 + 0x20);
      *(uint *)(param_1 + 0x1c) = uVar9;
    }
    else if (iVar2 == param_2) {
      piVar10 = (int *)(param_1 + uVar7 * 4 + 0x20);
      *(uint *)(param_1 + 0x1c) = uVar4;
    }
    else {
      if (uVar9 != uVar4) {
        do {
          uVar9 = (uint)uVar5;
          uVar6 = (uint)uVar7;
          uVar8 = (int)((uint)((int)uVar6 < (int)uVar9) * 0x80 + uVar9 + uVar6) / 2;
          uVar4 = uVar8 & 0x7f;
          if (*(int *)(param_1 + 0x20 + (ulonglong)uVar4 * 4) <= param_2) {
            uVar4 = uVar6;
            uVar9 = uVar8 + 1 & 0x7f;
          }
          uVar7 = (ulonglong)uVar4;
          uVar5 = (ulonglong)uVar9;
        } while (uVar9 != uVar4);
      }
      uVar9 = uVar9 - 1 & 0x7f;
      *(uint *)(param_1 + 0x1c) = uVar9;
      piVar10 = (int *)(param_1 + (ulonglong)uVar9 * 4 + 0x20);
    }
    iVar1 = *piVar10;
    *(int *)(param_1 + 0x18) = iVar1;
  }
  if (iVar1 != param_2) {
    *(int *)(*(longlong *)(param_1 + 8) + 0x1e0) = iVar1;
    *(uint *)(*(longlong *)(param_1 + 8) + 0x1e4) =
         (uint)*(ushort *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x1c) * 2);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x278) = 0;
    return;
  }
LAB_1425e511c:
  if (*param_3 < 1) {
    uVar9 = *(uint *)(param_1 + 0x1c);
    if (uVar9 == *(uint *)(param_1 + 0x10)) {
      FUN_1425e5560(param_1,param_3);
      uVar4 = *(uint *)(param_1 + 0x1c);
    }
    else {
      uVar4 = uVar9 - 1 & 0x7f;
      *(uint *)(param_1 + 0x1c) = uVar4;
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x20 + (ulonglong)uVar4 * 4);
    }
    *(bool *)(*(longlong *)(param_1 + 8) + 0x278) = uVar4 == uVar9;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e0) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(*(longlong *)(param_1 + 8) + 0x1e4) =
         (uint)*(ushort *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x1c) * 2);
  }
  return;
}



// FUNCTION 1425e5240 FUN_1425e5240 body=106 status=ok
// SIG undefined FUN_1425e5240(void)

void FUN_1425e5240(longlong param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_2 < 1) {
    uVar1 = *(uint *)(param_1 + 0x1c);
    if (uVar1 == *(uint *)(param_1 + 0x10)) {
      FUN_1425e5560(param_1);
      uVar2 = *(uint *)(param_1 + 0x1c);
    }
    else {
      uVar2 = uVar1 - 1 & 0x7f;
      *(uint *)(param_1 + 0x1c) = uVar2;
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x20 + (ulonglong)uVar2 * 4);
    }
    *(bool *)(*(longlong *)(param_1 + 8) + 0x278) = uVar2 == uVar1;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e0) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(*(longlong *)(param_1 + 8) + 0x1e4) =
         (uint)*(ushort *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x1c) * 2);
  }
  return;
}



// FUNCTION 1425e52b0 FUN_1425e52b0 body=66 status=ok
// SIG undefined FUN_1425e52b0(void)

void FUN_1425e52b0(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_1425e5300();
  *(byte *)(*(longlong *)(param_1 + 8) + 0x278) = bVar1 ^ 1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e0) = *(undefined4 *)(param_1 + 0x18);
  *(uint *)(*(longlong *)(param_1 + 8) + 0x1e4) =
       (uint)*(ushort *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x1c) * 2);
  return;
}



// FUNCTION 1425e5300 FUN_1425e5300 body=587 status=ok
// SIG undefined FUN_1425e5300(void)

undefined8 FUN_1425e5300(longlong param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  iVar7 = *(int *)(param_1 + 0x20 + (longlong)*(int *)(param_1 + 0x14) * 4);
  uVar1 = *(undefined2 *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x14) * 2);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1f0);
  if ((iVar7 < *(int *)(lVar5 + 0x30)) && (*(int *)(lVar5 + 0x2c) <= iVar7)) {
    uVar6 = *(uint *)(lVar5 + 0x10);
    uVar3 = *(uint *)(lVar5 + 0x28);
    if (((int)uVar3 < 0) ||
       (((int)uVar6 <= (int)uVar3 ||
        (lVar8 = *(longlong *)(lVar5 + 0x20), *(int *)(lVar8 + (ulonglong)uVar3 * 4) != iVar7)))) {
      *(undefined4 *)(lVar5 + 0x28) = 0;
      if (0 < (int)uVar6) {
        uVar9 = 0;
        do {
          iVar4 = *(int *)(*(longlong *)(lVar5 + 0x20) + uVar9 * 4);
          if (iVar7 < iVar4) goto LAB_1425e5365;
          uVar9 = uVar9 + 1;
          *(int *)(lVar5 + 0x28) = (int)uVar9;
        } while (uVar6 != uVar9);
      }
      goto LAB_1425e5518;
    }
    uVar3 = uVar3 + 1;
    *(uint *)(lVar5 + 0x28) = uVar3;
    if ((int)uVar6 <= (int)uVar3) goto LAB_1425e53a8;
LAB_1425e535f:
    iVar4 = *(int *)(lVar8 + (ulonglong)uVar3 * 4);
LAB_1425e5365:
    uVar2 = *(undefined4 *)(lVar5 + 0x38);
    uVar6 = *(int *)(param_1 + 0x14) + 1U & 0x7f;
    if (uVar6 == *(uint *)(param_1 + 0x10)) {
      *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x14) + 7U & 0x7f;
    }
    *(int *)(param_1 + 0x20 + (ulonglong)uVar6 * 4) = iVar4;
    *(short *)(param_1 + 0x220 + (ulonglong)uVar6 * 2) = (short)uVar2;
    *(uint *)(param_1 + 0x14) = uVar6;
    *(uint *)(param_1 + 0x1c) = uVar6;
    *(int *)(param_1 + 0x18) = iVar4;
  }
  else {
LAB_1425e53a8:
    *(undefined4 *)(lVar5 + 0x28) = 0xffffffff;
    *(int *)(*(longlong *)(param_1 + 8) + 0x1e0) = iVar7;
    iVar4 = FUN_1425313a0(*(undefined8 *)(param_1 + 8));
    if (iVar4 == -1) {
      return 0;
    }
    lVar5 = *(longlong *)(param_1 + 8);
    uVar2 = *(undefined4 *)(lVar5 + 0x1e4);
    if (*(int *)(lVar5 + 0x208) != 0) {
      FUN_1425e47d0(*(undefined8 *)(lVar5 + 0x1f0),iVar7,iVar4,uVar1,uVar2);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1f0);
      if ((iVar7 < *(int *)(lVar5 + 0x30)) && (*(int *)(lVar5 + 0x2c) <= iVar7)) {
        uVar6 = *(uint *)(lVar5 + 0x10);
        uVar3 = *(uint *)(lVar5 + 0x28);
        if (((int)uVar3 < 0) ||
           (((int)uVar6 <= (int)uVar3 ||
            (lVar8 = *(longlong *)(lVar5 + 0x20), *(int *)(lVar8 + (ulonglong)uVar3 * 4) != iVar7)))
           ) {
          *(undefined4 *)(lVar5 + 0x28) = 0;
          if (0 < (int)uVar6) {
            uVar9 = 0;
            do {
              iVar4 = *(int *)(*(longlong *)(lVar5 + 0x20) + uVar9 * 4);
              if (iVar7 < iVar4) goto LAB_1425e5365;
              uVar9 = uVar9 + 1;
              *(int *)(lVar5 + 0x28) = (int)uVar9;
            } while (uVar6 != uVar9);
          }
LAB_1425e5518:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar3 = uVar3 + 1;
        *(uint *)(lVar5 + 0x28) = uVar3;
        if ((int)uVar3 < (int)uVar6) goto LAB_1425e535f;
      }
      *(undefined4 *)(lVar5 + 0x28) = 0xffffffff;
    }
    uVar6 = *(int *)(param_1 + 0x14) + 1U & 0x7f;
    if (uVar6 == *(uint *)(param_1 + 0x10)) {
      *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x14) + 7U & 0x7f;
    }
    *(int *)(param_1 + 0x20 + (ulonglong)uVar6 * 4) = iVar4;
    *(short *)(param_1 + 0x220 + (ulonglong)uVar6 * 2) = (short)uVar2;
    *(uint *)(param_1 + 0x14) = uVar6;
    *(uint *)(param_1 + 0x1c) = uVar6;
    *(int *)(param_1 + 0x18) = iVar4;
    lVar5 = *(longlong *)(param_1 + 8);
    iVar7 = 6;
    do {
      iVar4 = FUN_1425313a0(lVar5);
      if (iVar4 == -1) {
        return 1;
      }
      lVar5 = *(longlong *)(param_1 + 8);
      if (*(int *)(lVar5 + 0x208) != 0) {
        return 1;
      }
      uVar2 = *(undefined4 *)(lVar5 + 0x1e4);
      uVar6 = *(int *)(param_1 + 0x14) + 1U & 0x7f;
      if (uVar6 == *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x14) + 7U & 0x7f;
      }
      *(int *)(param_1 + 0x20 + (ulonglong)uVar6 * 4) = iVar4;
      *(short *)(param_1 + 0x220 + (ulonglong)uVar6 * 2) = (short)uVar2;
      *(uint *)(param_1 + 0x14) = uVar6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 1;
}



// FUNCTION 1425e5560 FUN_1425e5560 body=1501 status=ok
// SIG undefined FUN_1425e5560(void)

void FUN_1425e5560(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68;
  int local_64;
  longlong local_60;
  int *local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((0 < *param_2) ||
     (iVar8 = *(int *)(param_1 + 0x20 + (longlong)*(int *)(param_1 + 0x10) * 4), iVar8 == 0))
  goto LAB_1425e5586;
  local_4c = 0;
  local_50 = 0;
  cVar4 = FUN_1425e4700(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1f0),iVar8,&local_4c,
                        &local_50);
  iVar5 = iVar8;
  piVar3 = param_2;
  if (cVar4 != '\0') {
    uVar12 = *(int *)(param_1 + 0x10) - 1U & 0x7f;
    if (uVar12 == *(uint *)(param_1 + 0x14)) {
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 0x7eU & 0x7f;
    }
    *(int *)(param_1 + 0x20 + (ulonglong)uVar12 * 4) = local_4c;
    *(short *)(param_1 + 0x220 + (ulonglong)uVar12 * 2) = (short)local_50;
    *(uint *)(param_1 + 0x10) = uVar12;
    *(uint *)(param_1 + 0x1c) = uVar12;
    *(int *)(param_1 + 0x18) = local_4c;
    goto LAB_1425e5586;
  }
  do {
    while (local_58 = piVar3, iVar6 = 0, iVar5 < 0x1f) {
      iVar5 = 0;
LAB_1425e5643:
      uVar20 = 0;
      piVar3 = local_58;
      if (0 < iVar8) goto LAB_1425e56d6;
    }
    iVar5 = FUN_142531910(*(undefined8 *)(param_1 + 8),iVar5 + -0x1e);
    if (iVar5 + 1U < 2) goto LAB_1425e5643;
    *(int *)(*(longlong *)(param_1 + 8) + 0x1e0) = iVar5;
    iVar6 = FUN_1425313a0(*(undefined8 *)(param_1 + 8));
    if (iVar6 <= iVar5 + 4) {
      FUN_14250e700(*(longlong *)(param_1 + 8) + 0x148,(longlong)iVar6);
      lVar9 = FUN_14250e7a0(*(longlong *)(param_1 + 8) + 0x148);
      param_2 = local_58;
      if (lVar9 == iVar5) {
        iVar6 = FUN_1425313a0(*(undefined8 *)(param_1 + 8));
      }
    }
    uVar20 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1e4);
    piVar3 = local_58;
  } while (iVar8 <= iVar6);
LAB_1425e56d6:
  local_60 = param_1 + 800;
  FUN_1425182b0();
  iVar5 = *(int *)(param_1 + 0x328);
  if ((iVar5 < -1) || (*(int *)(param_1 + 0x32c) <= iVar5)) {
    cVar4 = FUN_1425182c0(local_60,iVar5 + 1,param_2);
    iVar5 = *(int *)(param_1 + 0x328);
    if (cVar4 != '\0') goto LAB_1425e5713;
  }
  else {
LAB_1425e5713:
    *(int *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar5 * 4) = iVar6;
    iVar5 = *(int *)(param_1 + 0x328) + 1;
    *(int *)(param_1 + 0x328) = iVar5;
  }
  if ((iVar5 < -1) || (*(int *)(param_1 + 0x32c) <= iVar5)) {
    cVar4 = FUN_1425182c0(local_60,iVar5 + 1,param_2);
    iVar5 = local_4c;
    uVar16 = local_50;
    if (cVar4 != '\0') {
      iVar5 = *(int *)(param_1 + 0x328);
      goto LAB_1425e5754;
    }
  }
  else {
LAB_1425e5754:
    *(undefined4 *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar5 * 4) = uVar20;
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    iVar5 = local_4c;
    uVar16 = local_50;
  }
  do {
    *(int *)(*(longlong *)(param_1 + 8) + 0x1e0) = iVar6;
    local_68 = uVar16;
    local_64 = iVar5;
    iVar7 = FUN_1425313a0();
    iVar5 = local_64;
    uVar16 = local_68;
    if (iVar7 == -1) break;
    lVar9 = *(longlong *)(param_1 + 8);
    uVar21 = *(undefined4 *)(lVar9 + 0x1e4);
    if (*(int *)(lVar9 + 0x208) == 0) {
LAB_1425e599c:
      uVar20 = uVar21;
      iVar6 = iVar7;
      if (iVar7 < iVar8) {
        iVar13 = *(int *)(param_1 + 0x328);
        if ((iVar13 < -1) || (*(int *)(param_1 + 0x32c) <= iVar13)) {
          cVar4 = FUN_1425182c0(local_60,iVar13 + 1,local_58);
          iVar13 = *(int *)(param_1 + 0x328);
          if (cVar4 != '\0') goto LAB_1425e59d3;
        }
        else {
LAB_1425e59d3:
          *(int *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar13 * 4) = iVar7;
          iVar13 = *(int *)(param_1 + 0x328) + 1;
          *(int *)(param_1 + 0x328) = iVar13;
        }
        if ((iVar13 < -1) || (*(int *)(param_1 + 0x32c) <= iVar13)) {
          cVar4 = FUN_1425182c0(local_60,iVar13 + 1,local_58);
          if (cVar4 == '\0') goto LAB_1425e57a1;
          iVar13 = *(int *)(param_1 + 0x328);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar13 * 4) = uVar21;
        *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
      }
    }
    else {
      local_78 = uVar21;
      FUN_1425e47d0(*(undefined8 *)(lVar9 + 0x1f0),iVar6,iVar7,uVar20);
      piVar3 = local_58;
      lVar2 = local_60;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1f0);
      puVar10 = (uint *)(lVar9 + 0x28);
      iVar5 = iVar7;
      if ((*(int *)(lVar9 + 0x30) <= iVar6) || (iVar6 < *(int *)(lVar9 + 0x2c))) {
        *puVar10 = 0xffffffff;
        uVar16 = uVar21;
        goto LAB_1425e599c;
      }
      bVar11 = true;
      do {
        uVar12 = *(uint *)(lVar9 + 0x10);
        uVar17 = *(uint *)(lVar9 + 0x28);
        if ((((int)uVar17 < 0) || ((int)uVar12 <= (int)uVar17)) ||
           (lVar1 = *(longlong *)(lVar9 + 0x20), *(int *)(lVar1 + (ulonglong)uVar17 * 4) != iVar6))
        {
          *puVar10 = 0;
          if ((int)uVar12 < 1) {
LAB_1425e5b5a:
            local_4c = local_64;
            local_50 = local_68;
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar1 = *(longlong *)(lVar9 + 0x20);
          uVar19 = 0;
          while (iVar5 = *(int *)(lVar1 + uVar19 * 4), iVar5 <= iVar6) {
            uVar19 = uVar19 + 1;
            *puVar10 = (uint)uVar19;
            if (uVar12 == uVar19) goto LAB_1425e5b5a;
          }
        }
        else {
          uVar17 = uVar17 + 1;
          *puVar10 = uVar17;
          if ((int)uVar12 <= (int)uVar17) {
            *puVar10 = 0xffffffff;
            uVar20 = uVar21;
            uVar16 = uVar21;
            iVar6 = iVar5;
            iVar7 = iVar5;
            if (bVar11) goto LAB_1425e599c;
            goto LAB_1425e57a1;
          }
          iVar5 = *(int *)(lVar1 + (ulonglong)uVar17 * 4);
        }
        uVar20 = *(undefined4 *)(lVar9 + 0x38);
        uVar16 = uVar20;
        iVar6 = iVar5;
        if (iVar8 <= iVar5) goto LAB_1425e57a1;
        iVar7 = *(int *)(param_1 + 0x328);
        if ((iVar7 < -1) || (*(int *)(param_1 + 0x32c) <= iVar7)) {
          cVar4 = FUN_1425182c0(lVar2,iVar7 + 1,piVar3);
          iVar7 = *(int *)(param_1 + 0x328);
          if (cVar4 != '\0') goto LAB_1425e58b4;
        }
        else {
LAB_1425e58b4:
          *(int *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar7 * 4) = iVar5;
          iVar7 = *(int *)(param_1 + 0x328) + 1;
          *(int *)(param_1 + 0x328) = iVar7;
        }
        if ((iVar7 < -1) || (*(int *)(param_1 + 0x32c) <= iVar7)) {
          cVar4 = FUN_1425182c0(lVar2,iVar7 + 1,piVar3);
          if (cVar4 != '\0') {
            iVar7 = *(int *)(param_1 + 0x328);
            goto LAB_1425e58f4;
          }
        }
        else {
LAB_1425e58f4:
          *(undefined4 *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar7 * 4) = uVar20;
          *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
        }
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1f0);
        puVar10 = (uint *)(lVar9 + 0x28);
      } while ((iVar5 < *(int *)(lVar9 + 0x30)) &&
              (bVar11 = false, uVar21 = uVar20, *(int *)(lVar9 + 0x2c) <= iVar5));
      *puVar10 = 0xffffffff;
    }
LAB_1425e57a1:
  } while (iVar6 < iVar8);
  uVar12 = *(uint *)(param_1 + 0x328);
  uVar19 = (ulonglong)uVar12;
  uVar15 = 0;
  local_50 = uVar16;
  local_4c = iVar5;
  if (uVar12 == 0) goto LAB_1425e5586;
  if ((int)uVar12 < 1) {
LAB_1425e5a85:
    uVar20 = 0;
  }
  else {
    uVar17 = uVar12 - 1;
    *(uint *)(param_1 + 0x328) = uVar17;
    uVar15 = (undefined2)*(undefined4 *)(*(longlong *)(param_1 + 0x338) + (ulonglong)uVar17 * 4);
    if (uVar17 == 0) {
      uVar19 = 0;
      goto LAB_1425e5a85;
    }
    uVar19 = (ulonglong)(uVar12 - 2);
    *(uint *)(param_1 + 0x328) = uVar12 - 2;
    uVar20 = *(undefined4 *)(*(longlong *)(param_1 + 0x338) + uVar19 * 4);
  }
  uVar12 = *(int *)(param_1 + 0x10) - 1U & 0x7f;
  if (uVar12 == *(uint *)(param_1 + 0x14)) {
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 0x7eU & 0x7f;
  }
  *(undefined4 *)(param_1 + 0x20 + (ulonglong)uVar12 * 4) = uVar20;
  *(undefined2 *)(param_1 + 0x220 + (ulonglong)uVar12 * 2) = uVar15;
  *(uint *)(param_1 + 0x10) = uVar12;
  *(uint *)(param_1 + 0x1c) = uVar12;
  *(undefined4 *)(param_1 + 0x18) = uVar20;
  if ((int)uVar19 != 0) {
    uVar12 = *(uint *)(param_1 + 0x14);
    lVar9 = *(longlong *)(param_1 + 0x338);
    uVar17 = *(uint *)(param_1 + 0x1c);
    uVar18 = *(uint *)(param_1 + 0x10);
    do {
      uVar15 = 0;
      iVar8 = (int)uVar19;
      if (iVar8 < 1) {
LAB_1425e5b06:
        uVar20 = 0;
      }
      else {
        uVar14 = iVar8 - 1;
        *(uint *)(param_1 + 0x328) = uVar14;
        uVar15 = (undefined2)*(undefined4 *)(lVar9 + (ulonglong)uVar14 * 4);
        if (uVar14 == 0) {
          uVar19 = 0;
          goto LAB_1425e5b06;
        }
        uVar19 = (ulonglong)(iVar8 - 2U);
        *(uint *)(param_1 + 0x328) = iVar8 - 2U;
        uVar20 = *(undefined4 *)(lVar9 + uVar19 * 4);
      }
      uVar14 = uVar18 - 1 & 0x7f;
      if (uVar14 == uVar12) {
        if (uVar17 == uVar12) break;
        uVar12 = uVar18 + 0x7e & 0x7f;
        *(uint *)(param_1 + 0x14) = uVar12;
      }
      *(undefined4 *)(param_1 + 0x20 + (ulonglong)uVar14 * 4) = uVar20;
      *(undefined2 *)(param_1 + 0x220 + (ulonglong)uVar14 * 2) = uVar15;
      *(uint *)(param_1 + 0x10) = uVar14;
      uVar18 = uVar14;
    } while ((int)uVar19 != 0);
  }
LAB_1425e5586:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1425e5b80 FUN_1425e5b80 body=55 status=ok
// SIG undefined FUN_1425e5b80(void)

undefined8 * FUN_1425e5b80(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::RuleBasedBreakIterator::BreakCache::vftable;
  FUN_142517df0(param_1 + 100);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e5bc0 FUN_1425e5bc0 body=14 status=ok
// SIG undefined FUN_1425e5bc0(void)

void FUN_1425e5bc0(undefined8 *param_1)

{
  *param_1 = icu_64::LanguageBreakEngine::vftable;
  return;
}



// FUNCTION 1425e5bd0 FUN_1425e5bd0 body=1 status=ok
// SIG undefined FUN_1425e5bd0(void)

void FUN_1425e5bd0(void)

{
  return;
}



// FUNCTION 1425e5be0 FUN_1425e5be0 body=22 status=ok
// SIG undefined FUN_1425e5be0(void)

void FUN_1425e5be0(undefined8 *param_1)

{
  *param_1 = icu_64::UnhandledEngine::vftable;
  param_1[1] = 0;
  return;
}



// FUNCTION 1425e5c00 FUN_1425e5c00 body=32 status=ok
// SIG undefined FUN_1425e5c00(void)

bool FUN_1425e5c00(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    bVar2 = false;
  }
  else {
    cVar1 = FUN_142512880();
    bVar2 = cVar1 != '\0';
  }
  return bVar2;
}



// FUNCTION 1425e5c20 FUN_1425e5c20 body=90 status=ok
// SIG undefined FUN_1425e5c20(void)

undefined8 FUN_1425e5c20(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  while( true ) {
    uVar2 = FUN_14250e920(param_2);
    iVar3 = FUN_14250e6e0(param_2);
    if (param_4 <= iVar3) {
      return 0;
    }
    cVar1 = FUN_142512880(*(undefined8 *)(param_1 + 8),uVar2);
    if (cVar1 == '\0') break;
    FUN_14250e570(param_2);
  }
  return 0;
}



// FUNCTION 1425e5c80 FUN_1425e5c80 body=138 status=ok
// SIG undefined FUN_1425e5c80(void)

void FUN_1425e5c80(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_1424da030(200);
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    FUN_142511900(lVar3);
    *(longlong *)(param_1 + 8) = lVar3;
  }
  cVar1 = FUN_142512880(lVar3,param_2);
  if (cVar1 == '\0') {
    local_24 = 0;
    uVar2 = FUN_142516e50(param_2,0x100a);
    FUN_1425c6e50(*(undefined8 *)(param_1 + 8),0x100a,uVar2,&local_24);
  }
  return;
}



// FUNCTION 1425e5d10 Unwind@1425e5d10 body=34 status=ok
// SIG undefined Unwind@1425e5d10(void)

void Unwind_1425e5d10(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e5d40 FUN_1425e5d40 body=22 status=ok
// SIG undefined FUN_1425e5d40(void)

void FUN_1425e5d40(undefined8 *param_1)

{
  *param_1 = icu_64::ICULanguageBreakFactory::vftable;
  param_1[1] = 0;
  return;
}



// FUNCTION 1425e5d60 FUN_1425e5d60 body=402 status=ok
// SIG undefined FUN_1425e5d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1425e5d60(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  local_34[0] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c7fc138) && (FUN_144b3d300(&DAT_14c7fc138), DAT_14c7fc138 == -1)) {
    _DAT_14c7fc128 = 0;
    uRam000000014c7fc130 = 0;
    _DAT_14c7fc118 = 0;
    uRam000000014c7fc120 = 0;
    _DAT_14c7fc108 = 0;
    uRam000000014c7fc110 = 0;
    _DAT_14c7fc0f8 = 0;
    uRam000000014c7fc100 = 0;
    _DAT_14c7fc0e8 = 0;
    uRam000000014c7fc0f0 = 0;
    _Mtx_init_in_situ(&DAT_14c7fc0e8,2);
    atexit((_func_5014 *)&LAB_1425e5f60);
    _Init_thread_footer(&DAT_14c7fc138);
  }
  FUN_142501320(&DAT_14c7fc0e8);
  if (param_1[1] == 0) {
    puVar3 = (undefined8 *)thunk_FUN_1424da030(0x28);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1425d7070(puVar3,&LAB_1425e5f70,0,local_34);
      if (local_34[0] < 1) {
        param_1[1] = (longlong)puVar3;
LAB_1425e5e44:
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,param_2);
        if (plVar2 != (longlong *)0x0) {
          FUN_1425163e0(param_1[1],plVar2,local_34);
          goto LAB_1425e5e6b;
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    plVar2 = (longlong *)0x0;
  }
  else {
    iVar4 = *(int *)(param_1[1] + 8);
    do {
      if (iVar4 < 1) goto LAB_1425e5e44;
      iVar4 = iVar4 + -1;
      plVar2 = (longlong *)FUN_142516630(param_1[1],iVar4);
    } while ((plVar2 == (longlong *)0x0) ||
            (cVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_2), cVar1 == '\0'));
  }
LAB_1425e5e6b:
  FUN_142501400(&DAT_14c7fc0e8);
  return plVar2;
}



// FUNCTION 1425e5f00 Unwind@1425e5f00 body=40 status=ok
// SIG undefined Unwind@1425e5f00(void)

void Unwind_1425e5f00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e5f30 Unwind@1425e5f30 body=43 status=ok
// SIG undefined Unwind@1425e5f30(void)

void Unwind_1425e5f30(void)

{
  FUN_142501400(&DAT_14c7fc0e8);
  return;
}



// FUNCTION 1425e5f90 FUN_1425e5f90 body=383 status=ok
// SIG undefined FUN_1425e5f90(void)

undefined8 * FUN_1425e5f90(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  int local_24 [3];
  
  local_24[1] = -2;
  local_24[2] = -1;
  local_24[0] = 0;
  uVar1 = FUN_1424d92a0(param_2,local_24);
  if (0 < local_24[0]) {
    return (undefined8 *)0x0;
  }
  local_30 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,uVar1);
  if (local_30 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  switch(uVar1) {
  case 0x11:
  case 0x14:
  case 0x16:
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x400);
    if (puVar2 == (undefined8 *)0x0) goto switchD_1425e5ff8_caseD_13;
    FUN_1426af470(puVar2,local_30,1,local_24);
    local_30 = puVar2;
    break;
  case 0x12:
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x400);
    if (puVar2 == (undefined8 *)0x0) goto switchD_1425e5ff8_caseD_13;
    FUN_1426af470(puVar2,local_30,0,local_24);
    local_30 = puVar2;
    break;
  default:
    goto switchD_1425e5ff8_caseD_13;
  case 0x17:
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x3f8);
    if (puVar2 == (undefined8 *)0x0) goto switchD_1425e5ff8_caseD_13;
    FUN_1426aeb90(puVar2,local_30,local_24);
    local_30 = puVar2;
    break;
  case 0x18:
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x3f8);
    if (puVar2 == (undefined8 *)0x0) goto switchD_1425e5ff8_caseD_13;
    FUN_1426ad9b0(puVar2,local_30,local_24);
    local_30 = puVar2;
    break;
  case 0x1c:
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x3f8);
    if (puVar2 == (undefined8 *)0x0) goto switchD_1425e5ff8_caseD_13;
    FUN_1426ae2c0(puVar2,local_30,local_24);
    local_30 = puVar2;
    break;
  case 0x26:
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x4c0);
    if (puVar2 == (undefined8 *)0x0) goto switchD_1425e5ff8_caseD_13;
    FUN_1426aceb0(puVar2,local_30,local_24);
    local_30 = puVar2;
  }
  if (local_24[0] < 1) {
    return local_30;
  }
switchD_1425e5ff8_caseD_13:
  (**(code **)*local_30)(local_30,1);
  return (undefined8 *)0x0;
}



// FUNCTION 1425e6110 Unwind@1425e6110 body=34 status=ok
// SIG undefined Unwind@1425e6110(void)

void Unwind_1425e6110(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e6140 Unwind@1425e6140 body=34 status=ok
// SIG undefined Unwind@1425e6140(void)

void Unwind_1425e6140(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e6170 Unwind@1425e6170 body=34 status=ok
// SIG undefined Unwind@1425e6170(void)

void Unwind_1425e6170(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e61a0 Unwind@1425e61a0 body=34 status=ok
// SIG undefined Unwind@1425e61a0(void)

void Unwind_1425e61a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e61d0 Unwind@1425e61d0 body=34 status=ok
// SIG undefined Unwind@1425e61d0(void)

void Unwind_1425e61d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e6200 Unwind@1425e6200 body=34 status=ok
// SIG undefined Unwind@1425e6200(void)

void Unwind_1425e6200(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e6230 FUN_1425e6230 body=583 status=ok
// SIG undefined FUN_1425e6230(void)

undefined8 * FUN_1425e6230(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 local_100 [64];
  longlong local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_48;
  uint local_40;
  int local_3c [3];
  
  local_3c[1] = -2;
  local_3c[2] = -1;
  local_3c[0] = 0;
  uVar3 = FUN_1424ebfe0("icudt64l-brkitr",&DAT_149e02088,local_3c);
  uVar3 = FUN_1424ec1c0(uVar3,"dictionaries",uVar3,local_3c);
  local_40 = 0;
  uVar4 = FUN_142563590(param_2);
  lVar5 = FUN_1424ec010(uVar3,uVar4,&local_40,local_3c);
  if (0 < local_3c[0]) {
    FUN_1424ea9f0(uVar3);
    return (undefined8 *)0x0;
  }
  local_c0 = (longlong)&local_b4 + 1;
  local_b8 = 0x28;
  local_b4 = 0;
  local_88 = 0;
  local_80 = (longlong)&local_74 + 1;
  local_78 = 0x28;
  local_74 = 0;
  local_48 = 0;
  lVar6 = FUN_142504300(lVar5,0x2e,local_40);
  uVar10 = (ulonglong)local_40;
  if (lVar6 != 0) {
    uVar10 = (ulonglong)(lVar6 - lVar5) >> 1;
    uVar9 = (uint)uVar10;
    FUN_1424a7060(local_100,0,lVar6 + 2,local_40 + ~uVar9);
    FUN_142503780(&local_80,local_100,local_3c);
    FUN_140859a90(local_100);
    uVar10 = uVar10 & 0xffffffff;
    local_40 = uVar9;
  }
  FUN_1424a7060(local_100,0,lVar5,uVar10);
  FUN_142503780(&local_c0,local_100,local_3c);
  FUN_140859a90(local_100);
  FUN_1424ea9f0(uVar3);
  uVar3 = FUN_1424e4780("icudt64l-brkitr",local_80,local_c0,local_3c);
  if (local_3c[0] < 1) {
    piVar7 = (int *)FUN_142532380(uVar3);
    iVar1 = *piVar7;
    if ((piVar7[4] & 7U) == 0) {
      iVar2 = piVar7[5];
      puVar8 = (undefined8 *)thunk_FUN_1424da030(0x20);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = icu_64::BytesDictionaryMatcher::vftable;
        puVar8[1] = (longlong)piVar7 + (longlong)iVar1;
        *(int *)(puVar8 + 2) = iVar2;
        puVar8[3] = uVar3;
        goto LAB_1425e6446;
      }
    }
    else if (((piVar7[4] & 7U) == 1) &&
            (puVar8 = (undefined8 *)thunk_FUN_1424da030(0x18), puVar8 != (undefined8 *)0x0)) {
      *puVar8 = icu_64::UCharsDictionaryMatcher::vftable;
      puVar8[1] = (longlong)piVar7 + (longlong)iVar1;
      puVar8[2] = uVar3;
      goto LAB_1425e6446;
    }
    FUN_142532330(uVar3);
  }
  else if (lVar5 != 0) {
    local_3c[0] = 0;
  }
  puVar8 = (undefined8 *)0x0;
LAB_1425e6446:
  if ((char)local_74 != '\0') {
    FUN_1424da110(local_80);
  }
  if ((char)local_b4 != '\0') {
    FUN_1424da110(local_c0);
  }
  return puVar8;
}



// FUNCTION 1425e6480 Unwind@1425e6480 body=47 status=ok
// SIG undefined Unwind@1425e6480(void)

void Unwind_1425e6480(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425e64b0 Unwind@1425e64b0 body=68 status=ok
// SIG undefined Unwind@1425e64b0(void)

void Unwind_1425e64b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0xa8));
  }
  if (*(char *)(param_2 + 0x74) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



// FUNCTION 1425e6500 Unwind@1425e6500 body=47 status=ok
// SIG undefined Unwind@1425e6500(void)

void Unwind_1425e6500(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425e6530 FUN_1425e6530 body=2 status=ok
// SIG undefined FUN_1425e6530(void)

void FUN_1425e6530(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1425e6540 FUN_1425e6540 body=78 status=ok
// SIG undefined FUN_1425e6540(void)

undefined8 * FUN_1425e6540(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = icu_64::UnhandledEngine::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e6590 FUN_1425e6590 body=62 status=ok
// SIG undefined FUN_1425e6590(void)

undefined8 * FUN_1425e6590(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::ICULanguageBreakFactory::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e65d0 FUN_1425e65d0 body=38 status=ok
// SIG undefined FUN_1425e65d0(void)

undefined8 FUN_1425e65d0(undefined8 param_1,int param_2)

{
  FUN_1426b0f70();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e6600 FUN_1425e6600 body=38 status=ok
// SIG undefined FUN_1425e6600(void)

undefined8 FUN_1425e6600(undefined8 param_1,int param_2)

{
  FUN_1426b0d00();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e6630 FUN_1425e6630 body=117 status=ok
// SIG undefined FUN_1425e6630(void)

undefined8 *
FUN_1425e6630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  FUN_142536da0(param_1,param_5);
  *param_1 = icu_64::SimpleLocaleKeyFactory::vftable;
  param_1[10] = param_2;
  param_1[0xb] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x13) = param_4;
  FUN_1425374d0(param_3);
  return param_1;
}



// FUNCTION 1425e66b0 Unwind@1425e66b0 body=49 status=ok
// SIG undefined Unwind@1425e66b0(void)

void Unwind_1425e66b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_142536dd0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425e66f0 FUN_1425e66f0 body=248 status=ok
// SIG undefined FUN_1425e66f0(void)

undefined8 FUN_1425e66f0(longlong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined **local_70;
  ushort local_68;
  int local_64;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if ((*param_4 < 1) &&
     ((iVar5 = *(int *)(param_1 + 0x98), iVar5 == -1 ||
      (iVar3 = (**(code **)(*param_2 + 0x48))(param_2), iVar5 == iVar3)))) {
    local_70 = &PTR_FUN_149e18960;
    local_68 = 2;
    (**(code **)(*param_2 + 0x20))(param_2,&local_70);
    uVar1 = *(ushort *)(param_1 + 0x60);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar5 = *(int *)(param_1 + 100);
      }
      else {
        iVar5 = (int)(short)uVar1 >> 5;
      }
      if (-1 < (short)local_68) {
        local_64 = (int)(short)local_68 >> 5;
      }
      if ((((local_68 & 1) == 0) && (iVar5 == local_64)) &&
         (cVar2 = FUN_1412ae090(param_1 + 0x58,&local_70), cVar2 != '\0')) {
LAB_1425e67bc:
        uVar4 = (**(code **)(*param_3 + 0x68))(param_3,*(undefined8 *)(param_1 + 0x50));
        FUN_140859a90(&local_70);
        return uVar4;
      }
    }
    else if ((local_68 & 1) != 0) goto LAB_1425e67bc;
    FUN_140859a90(&local_70);
  }
  return 0;
}



// FUNCTION 1425e67f0 Unwind@1425e67f0 body=40 status=ok
// SIG undefined Unwind@1425e67f0(void)

void Unwind_1425e67f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425e6820 FUN_1425e6820 body=132 status=ok
// SIG undefined FUN_1425e6820(void)

void FUN_1425e6820(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong lVar1;
  
  if (0 < *param_3) {
    return;
  }
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    lVar1 = thunk_FUN_1424da030(0x40);
    if (lVar1 != 0) {
      FUN_1424a6be0(lVar1,param_1 + 0x58);
    }
    FUN_142502aa0(*param_2,lVar1,param_1,param_3);
    return;
  }
  thunk_FUN_142502da0(*param_2,param_1 + 0x58);
  return;
}



// FUNCTION 1425e68b0 Unwind@1425e68b0 body=36 status=ok
// SIG undefined Unwind@1425e68b0(void)

void Unwind_1425e68b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425e68e0 FUN_1425e68e0 body=8 status=ok
// SIG undefined FUN_1425e68e0(void)

undefined * FUN_1425e68e0(void)

{
  return &DAT_14c7fc13c;
}



// FUNCTION 1425e68f0 FUN_1425e68f0 body=87 status=ok
// SIG undefined FUN_1425e68f0(void)

undefined8 * FUN_1425e68f0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::SimpleLocaleKeyFactory::vftable;
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[10] = 0;
  FUN_140859a90(param_1 + 0xb);
  FUN_142536dd0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e6950 FUN_1425e6950 body=14 status=ok
// SIG undefined FUN_1425e6950(void)

void FUN_1425e6950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1425e6960(param_1,param_2,0xffffffff,param_3);
  return;
}



// FUNCTION 1425e6960 FUN_1425e6960 body=133 status=ok
// SIG undefined FUN_1425e6960(void)

longlong FUN_1425e6960(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  undefined **local_70;
  undefined2 local_68;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = 0;
  if ((param_1 != 0) && (*param_4 < 1)) {
    local_70 = &PTR_FUN_149e18960;
    local_68 = 2;
    FUN_1425371d0(param_1,&local_70);
    local_30 = thunk_FUN_1424da030(0x110);
    if (local_30 != 0) {
      FUN_1425e6a50(local_30,param_1,&local_70,param_2,param_3);
    }
    FUN_140859a90(&local_70);
  }
  return local_30;
}



// FUNCTION 1425e69f0 Unwind@1425e69f0 body=36 status=ok
// SIG undefined Unwind@1425e69f0(void)

void Unwind_1425e69f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1425e6a20 Unwind@1425e6a20 body=36 status=ok
// SIG undefined Unwind@1425e6a20(void)

void Unwind_1425e6a20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425e6a50 FUN_1425e6a50 body=294 status=ok
// SIG undefined FUN_1425e6a50(void)

undefined8 *
FUN_1425e6a50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  FUN_142534b90();
  *param_1 = icu_64::LocaleKey::vftable;
  *(undefined4 *)(param_1 + 9) = param_5;
  puVar1 = param_1 + 10;
  FUN_1424a6be0(puVar1,param_3);
  param_1[0x12] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x13) = 2;
  param_1[0x1a] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1b) = 2;
  FUN_1424a7130();
  sVar2 = *(short *)(param_1 + 0xb);
  if (sVar2 < 0) {
    iVar6 = *(int *)((longlong)param_1 + 0x5c);
  }
  else {
    iVar6 = (int)sVar2 >> 5;
  }
  if ((param_4 != 0) && (iVar6 != 0)) {
    uVar3 = *(ushort *)(param_4 + 8);
    if (((int)sVar2 & 1U) == 0) {
      if ((short)uVar3 < 0) {
        iVar5 = *(int *)(param_4 + 0xc);
      }
      else {
        iVar5 = (int)(short)uVar3 >> 5;
      }
      if ((((uVar3 & 1) == 0) && (iVar6 == iVar5)) &&
         (cVar4 = FUN_1412ae090(puVar1,param_4), cVar4 != '\0')) goto LAB_1425e6b5a;
    }
    else if ((uVar3 & 1) != 0) goto LAB_1425e6b5a;
    FUN_1424a7c80(param_1 + 0x12,param_4);
  }
LAB_1425e6b5a:
  FUN_1424a7c80(param_1 + 0x1a,puVar1);
  return param_1;
}



// FUNCTION 1425e6b80 Unwind@1425e6b80 body=58 status=ok
// SIG undefined Unwind@1425e6b80(void)

void Unwind_1425e6b80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425e6bc0 Unwind@1425e6bc0 body=40 status=ok
// SIG undefined Unwind@1425e6bc0(void)

void Unwind_1425e6bc0(undefined8 param_1,longlong param_2)

{
  FUN_142534bf0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1425e6bf0 FUN_1425e6bf0 body=145 status=ok
// SIG undefined FUN_1425e6bf0(void)

undefined8 FUN_1425e6bf0(longlong param_1,undefined8 param_2)

{
  undefined1 local_e8 [128];
  undefined1 local_68 [8];
  short local_60;
  int local_5c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x48) != -1) {
    FUN_1425647e0(local_e8,0x40,*(int *)(param_1 + 0x48),10,0);
    FUN_1424a6c90(local_68,local_e8);
    if (-1 < local_60) {
      local_5c = (int)local_60 >> 5;
    }
    FUN_1424a9690(param_2,local_68,0,local_5c);
    FUN_140859a90(local_68);
  }
  return param_2;
}



// FUNCTION 1425e6c90 Unwind@1425e6c90 body=39 status=ok
// SIG undefined Unwind@1425e6c90(void)

void Unwind_1425e6c90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 1425e6cc0 FUN_1425e6cc0 body=4 status=ok
// SIG undefined FUN_1425e6cc0(void)

undefined4 FUN_1425e6cc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// FUNCTION 1425e6cd0 FUN_1425e6cd0 body=39 status=ok
// SIG undefined FUN_1425e6cd0(void)

void FUN_1425e6cd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x58) < 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
  }
  else {
    iVar1 = (int)*(short *)(param_1 + 0x58) >> 5;
  }
  FUN_1424a9690(param_2,param_1 + 0x50,0,iVar1);
  return;
}



// FUNCTION 1425e6d00 FUN_1425e6d00 body=68 status=ok
// SIG undefined FUN_1425e6d00(void)

undefined8 FUN_1425e6d00(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xd8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(param_1 + 0xdc);
    }
    else {
      iVar2 = (int)(short)uVar1 >> 5;
    }
    FUN_1424a9690(param_2,param_1 + 0xd0,0,iVar2);
  }
  return param_2;
}



// FUNCTION 1425e6d50 FUN_1425e6d50 body=151 status=ok
// SIG undefined FUN_1425e6d50(void)

void FUN_1425e6d50(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    local_22 = 0x2f;
    uVar1 = FUN_1424a6cf0(uVar1,&local_22,0,1);
    if ((short)param_1[0x1b] < 0) {
      iVar2 = *(int *)((longlong)param_1 + 0xdc);
    }
    else {
      iVar2 = (int)(short)param_1[0x1b] >> 5;
    }
    FUN_1424a9690(uVar1,param_1 + 0x1a,0,iVar2);
  }
  else {
    FUN_1424a7130(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425e6e00 FUN_1425e6e00 body=9 status=ok
// SIG undefined FUN_1425e6e00(void)

void FUN_1425e6e00(longlong param_1)

{
  FUN_142537360(param_1 + 0x50);
  return;
}



// FUNCTION 1425e6e10 FUN_1425e6e10 body=12 status=ok
// SIG undefined FUN_1425e6e10(void)

void FUN_1425e6e10(longlong param_1)

{
  FUN_142537360(param_1 + 0xd0);
  return;
}



// FUNCTION 1425e6e20 FUN_1425e6e20 body=234 status=ok
// SIG undefined FUN_1425e6e20(void)

undefined8 FUN_1425e6e20(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(ushort *)(param_1 + 0xd8);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  lVar1 = param_1 + 0xd0;
  if ((short)uVar2 < 0) {
    iVar3 = *(int *)(param_1 + 0xdc);
  }
  else {
    iVar3 = (int)(short)uVar2 >> 5;
  }
  iVar3 = FUN_1424a8ab0(lVar1,0x5f,0,iVar3);
  if (iVar3 == -1) {
    if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
      FUN_1424a7c80(lVar1,param_1 + 0x90);
      FUN_1424a7130(param_1 + 0x90);
      return 1;
    }
    uVar4 = (uint)*(short *)(param_1 + 0xd8);
    if (*(short *)(param_1 + 0xd8) < 0) {
      iVar3 = *(int *)(param_1 + 0xdc);
    }
    else {
      iVar3 = (int)uVar4 >> 5;
    }
    if (iVar3 < 1) {
      FUN_1424a7130(lVar1);
      return 0;
    }
  }
  else {
    if (0 < iVar3) {
      FUN_1424a9130(lVar1,iVar3,0x7fffffff,0,0,0);
      return 1;
    }
    uVar4 = (uint)*(ushort *)(param_1 + 0xd8);
  }
  uVar2 = 2;
  if ((uVar4 & 1) == 0) {
    uVar2 = (ushort)uVar4 & 0x1f;
  }
  *(ushort *)(param_1 + 0xd8) = uVar2;
  return 1;
}



// FUNCTION 1425e6f10 FUN_1425e6f10 body=244 status=ok
// SIG undefined FUN_1425e6f10(void)

ulonglong FUN_1425e6f10(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_60 [8];
  short local_58;
  undefined1 local_56 [2];
  uint local_54;
  undefined1 *local_48;
  undefined8 local_20;
  undefined7 uVar6;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424a6be0(local_60);
  FUN_142534d70(local_60);
  uVar3 = local_54;
  if (-1 < local_58) {
    uVar3 = (int)local_58 >> 5;
  }
  uVar1 = *(ushort *)(param_1 + 0x58);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(param_1 + 0x5c);
    }
    else {
      iVar2 = (int)(short)uVar1 >> 5;
    }
    if (0 < iVar2) {
      if ((uVar1 & 2) == 0) {
        lVar4 = *(longlong *)(param_1 + 0x68);
      }
      else {
        lVar4 = param_1 + 0x5a;
      }
      iVar2 = FUN_1424a8860(local_60,lVar4,0,iVar2,0,uVar3);
      if (iVar2 == 0) {
        if (-1 < local_58) {
          local_54 = (int)local_58 >> 5;
        }
        if (*(short *)(param_1 + 0x58) < 0) {
          uVar3 = *(uint *)(param_1 + 0x5c);
        }
        else {
          uVar3 = (int)*(short *)(param_1 + 0x58) >> 5;
        }
        uVar6 = (undefined7)((ulonglong)param_1 >> 8);
        uVar5 = CONCAT71(uVar6,1);
        if (local_54 == uVar3) goto LAB_1425e6fa5;
        if (uVar3 < local_54) {
          if (((int)local_58 & 2U) != 0) {
            local_48 = local_56;
          }
          uVar5 = CONCAT71(uVar6,*(short *)(local_48 + (longlong)(int)uVar3 * 2) == 0x5f);
          goto LAB_1425e6fa5;
        }
      }
    }
  }
  uVar5 = 0;
LAB_1425e6fa5:
  FUN_140859a90(local_60);
  return uVar5 & 0xffffffff;
}



// FUNCTION 1425e7010 Unwind@1425e7010 body=37 status=ok
// SIG undefined Unwind@1425e7010(void)

void Unwind_1425e7010(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425e7040 FUN_1425e7040 body=8 status=ok
// SIG undefined FUN_1425e7040(void)

undefined * FUN_1425e7040(void)

{
  return &DAT_14c7fc140;
}



// FUNCTION 1425e7050 FUN_1425e7050 body=84 status=ok
// SIG undefined FUN_1425e7050(void)

undefined8 * FUN_1425e7050(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::LocaleKey::vftable;
  FUN_140859a90(param_1 + 0x1a);
  FUN_140859a90(param_1 + 0x12);
  FUN_140859a90(param_1 + 10);
  FUN_142534bf0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e70b0 FUN_1425e70b0 body=8 status=ok
// SIG undefined FUN_1425e70b0(void)

undefined * FUN_1425e70b0(void)

{
  return &DAT_14c7fc148;
}



// FUNCTION 1425e70c0 FUN_1425e70c0 body=57 status=ok
// SIG undefined FUN_1425e70c0(void)

undefined8 *
FUN_1425e70c0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = icu_64::ResourceBundle::vftable;
  param_1[2] = 0;
  uVar1 = FUN_1424ebfe0(param_2,*(undefined8 *)(param_3 + 0x28),param_4);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 1425e7100 FUN_1425e7100 body=84 status=ok
// SIG undefined FUN_1425e7100(void)

undefined8 * FUN_1425e7100(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::ResourceBundle::vftable;
  if (param_1[1] != 0) {
    FUN_1424ea9f0();
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e7160 FUN_1425e7160 body=8 status=ok
// SIG undefined FUN_1425e7160(void)

void FUN_1425e7160(undefined8 *param_1)

{
  FUN_1424da110(*param_1);
  return;
}



// FUNCTION 1425e7170 FUN_1425e7170 body=41 status=ok
// SIG undefined FUN_1425e7170(void)

ushort FUN_1425e7170(longlong param_1)

{
  ushort uVar1;
  
  if (*(ushort **)(param_1 + 0x10) == (ushort *)0x0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x18) < 0) && (uVar1 = **(ushort **)(param_1 + 0x10), 0x3f < uVar1)) {
    return uVar1 >> 0xf ^ 3;
  }
  return 1;
}



// FUNCTION 1425e71a0 FUN_1425e71a0 body=404 status=ok
// SIG undefined FUN_1425e71a0(void)

ulonglong FUN_1425e71a0(longlong param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  
  if ((int)param_2 < 0x10000) {
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    puVar1 = *(ushort **)(param_1 + 8);
    puVar5 = puVar1 + 1;
    uVar2 = *puVar1;
    uVar4 = (uint)uVar2;
    if (uVar2 < 0x30) {
LAB_1425e71cd:
      uVar3 = FUN_1425e7470(param_1,puVar5,uVar4,param_2);
      return uVar3;
    }
    if (0x3f < uVar2) {
      if ((short)uVar2 < 0) goto LAB_1425e7307;
      uVar6 = uVar2 & 0x3f;
      if (0x403f < uVar4) {
        if (uVar4 < 0x7fc0) {
          puVar5 = puVar1 + 2;
        }
        else {
          puVar5 = puVar1 + 3;
        }
      }
      uVar4 = uVar6;
      if (uVar6 < 0x30) goto LAB_1425e71cd;
    }
    if (*puVar5 == param_2) {
      *(uint *)(param_1 + 0x18) = uVar4 - 0x31;
      *(ushort **)(param_1 + 0x10) = puVar5 + 1;
      if (0x30 < uVar4) {
        return 1;
      }
      uVar2 = puVar5[1];
      if (uVar2 < 0x40) {
        return 1;
      }
      return (ulonglong)(uVar2 >> 0xf ^ 3);
    }
LAB_1425e7307:
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar6 = (param_2 >> 10) + 0xd7c0;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    puVar1 = *(ushort **)(param_1 + 8);
    puVar5 = puVar1 + 1;
    uVar2 = *puVar1;
    uVar4 = (uint)uVar2;
    if (uVar2 < 0x30) {
LAB_1425e7204:
      uVar2 = FUN_1425e7470(param_1,puVar5,uVar4,uVar6 & 0xffff);
    }
    else {
      if (0x3f < uVar2) {
        if ((short)uVar2 < 0) goto LAB_1425e7307;
        uVar7 = uVar2 & 0x3f;
        if (0x403f < uVar4) {
          if (uVar4 < 0x7fc0) {
            puVar5 = puVar1 + 2;
          }
          else {
            puVar5 = puVar1 + 3;
          }
        }
        uVar4 = uVar7;
        if (uVar7 < 0x30) goto LAB_1425e7204;
      }
      if (*puVar5 != (ushort)uVar6) goto LAB_1425e7307;
      *(uint *)(param_1 + 0x18) = uVar4 - 0x31;
      *(ushort **)(param_1 + 0x10) = puVar5 + 1;
      if ((0x30 < uVar4) || (uVar2 = puVar5[1], uVar2 < 0x40)) goto LAB_1425e7318;
      uVar2 = uVar2 >> 0xf ^ 3;
    }
    if ((uVar2 & 1) != 0) {
LAB_1425e7318:
      uVar3 = FUN_1425e7340(param_1,param_2 & 0x3ff | 0xdc00);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1425e7340 FUN_1425e7340 body=201 status=ok
// SIG undefined FUN_1425e7340(void)

ulonglong FUN_1425e7340(longlong param_1,uint param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  if (puVar4 == (ushort *)0x0) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  puVar3 = puVar4 + 1;
  uVar1 = *puVar4;
  uVar7 = (uint)uVar1;
  if (iVar5 < 0) {
    if (uVar1 < 0x30) {
      uVar2 = FUN_1425e7470(param_1,puVar3,uVar1);
      return uVar2;
    }
    if (uVar1 < 0x40) {
      uVar6 = (uint)uVar1;
    }
    else {
      if ((short)uVar1 < 0) goto LAB_1425e7400;
      uVar6 = uVar1 & 0x3f;
      if (0x403f < uVar7) {
        if (uVar7 < 0x7fc0) {
          puVar3 = puVar4 + 2;
        }
        else {
          puVar3 = puVar4 + 3;
        }
      }
      if (uVar6 < 0x30) {
        if ((uVar1 & 0x3f) == 0) {
          uVar6 = (uint)*puVar3;
          puVar3 = puVar3 + 1;
        }
        uVar7 = uVar6 + 1;
        if (4 < uVar6) {
          do {
            if ((int)param_2 < (int)(uint)*puVar3) {
              uVar1 = puVar3[1];
              uVar6 = (uint)uVar1;
              if (uVar1 < 0xfc00) {
                puVar4 = puVar3 + 2;
              }
              else if (uVar1 == 0xffff) {
                uVar6 = CONCAT22(puVar3[2],puVar3[3]);
                puVar4 = puVar3 + 4;
              }
              else {
                puVar4 = puVar3 + 3;
                uVar6 = (uint)uVar1 * 0x10000 + (uint)puVar3[2] + 0x4000000;
              }
              puVar3 = puVar4 + (int)uVar6;
              uVar7 = uVar7 >> 1;
            }
            else {
              uVar7 = uVar7 - (uVar7 >> 1);
              if (puVar3[1] < 0xfc00) {
                puVar3 = puVar3 + 2;
              }
              else if (puVar3[1] == 0xffff) {
                puVar3 = puVar3 + 4;
              }
              else {
                puVar3 = puVar3 + 3;
              }
            }
          } while (5 < (int)uVar7);
        }
        iVar5 = uVar7 + 1;
        do {
          if (*puVar3 == param_2) {
            uVar1 = puVar3[1];
            uVar7 = (uint)uVar1;
            if (-1 < (short)uVar1) {
              if (uVar1 < 0x4000) {
                puVar4 = puVar3 + 2;
              }
              else if (uVar1 < 0x7fff) {
                puVar4 = puVar3 + 3;
                uVar7 = (uint)uVar1 * 0x10000 + (uint)puVar3[2] + 0xc0000000;
              }
              else {
                uVar7 = CONCAT22(puVar3[2],puVar3[3]);
                puVar4 = puVar3 + 4;
              }
              uVar2 = 1;
              if (0x3f < puVar4[(int)uVar7]) {
                uVar2 = (ulonglong)(puVar4[(int)uVar7] >> 0xf ^ 3);
              }
              *(ushort **)(param_1 + 0x10) = puVar4 + (int)uVar7;
              return uVar2;
            }
            *(ushort **)(param_1 + 0x10) = puVar3 + 1;
            return 2;
          }
          if ((puVar3[1] & 0x7fff) < 0x4000) {
            puVar3 = puVar3 + 2;
          }
          else if ((puVar3[1] & 0x7fff) == 0x7fff) {
            puVar3 = puVar3 + 4;
          }
          else {
            puVar3 = puVar3 + 3;
          }
          iVar5 = iVar5 + -1;
        } while (2 < iVar5);
        if (*puVar3 == param_2) {
          *(ushort **)(param_1 + 0x10) = puVar3 + 1;
          uVar2 = 1;
          if (0x3f < puVar3[1]) {
            return (ulonglong)(puVar3[1] >> 0xf ^ 3);
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x10) = 0;
          uVar2 = 0;
        }
        return uVar2;
      }
    }
    if (*puVar3 != param_2) goto LAB_1425e7400;
    puVar3 = puVar3 + 1;
    bVar8 = uVar6 < 0x31;
    iVar5 = uVar6 - 0x31;
  }
  else {
    if (uVar7 != param_2) {
LAB_1425e7400:
      *(undefined8 *)(param_1 + 0x10) = 0;
      return 0;
    }
    bVar8 = iVar5 == 0;
    iVar5 = iVar5 + -1;
  }
  *(int *)(param_1 + 0x18) = iVar5;
  *(ushort **)(param_1 + 0x10) = puVar3;
  if ((bVar8) && (0x3f < *puVar3)) {
    return (ulonglong)(*puVar3 >> 0xf ^ 3);
  }
  return 1;
}



// FUNCTION 1425e7410 FUN_1425e7410 body=81 status=ok
// SIG undefined FUN_1425e7410(void)

undefined8 FUN_1425e7410(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (0xffff < (int)param_2) {
    uVar1 = FUN_1425e7340(param_1,(param_2 >> 10) + 0xd7c0 & 0xffff);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    param_2 = param_2 & 0x3ff | 0xdc00;
  }
  uVar2 = FUN_1425e7340(param_1,param_2);
  return uVar2;
}



// FUNCTION 1425e7470 FUN_1425e7470 body=430 status=ok
// SIG undefined FUN_1425e7470(void)

ushort FUN_1425e7470(longlong param_1,ushort *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ushort *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_3 == 0) {
    param_3 = (uint)*param_2;
    param_2 = param_2 + 1;
  }
  uVar5 = param_3 + 1;
  uVar6 = (ulonglong)uVar5;
  if (4 < (int)param_3) {
    do {
      uVar3 = uVar6 >> 1;
      if ((int)param_4 < (int)(uint)*param_2) {
        uVar1 = param_2[1];
        uVar5 = (uint)uVar1;
        if (uVar1 < 0xfc00) {
          puVar4 = param_2 + 2;
        }
        else if (uVar1 == 0xffff) {
          uVar5 = CONCAT22(param_2[2],param_2[3]);
          puVar4 = param_2 + 4;
        }
        else {
          puVar4 = param_2 + 3;
          uVar5 = (uint)uVar1 * 0x10000 + (uint)param_2[2] + 0x4000000;
        }
        param_2 = puVar4 + (int)uVar5;
      }
      else {
        uVar3 = (ulonglong)(uint)((int)uVar6 - (int)uVar3);
        if (param_2[1] < 0xfc00) {
          param_2 = param_2 + 2;
        }
        else if (param_2[1] == 0xffff) {
          param_2 = param_2 + 4;
        }
        else {
          param_2 = param_2 + 3;
        }
      }
      uVar5 = (uint)uVar3;
      uVar6 = uVar3;
    } while (5 < (int)uVar5);
  }
  iVar2 = uVar5 + 1;
  do {
    if (*param_2 == param_4) {
      uVar1 = param_2[1];
      uVar5 = (uint)uVar1;
      if ((short)uVar1 < 0) {
        *(ushort **)(param_1 + 0x10) = param_2 + 1;
        return 2;
      }
      if (uVar1 < 0x4000) {
        puVar4 = param_2 + 2;
      }
      else if (uVar1 < 0x7fff) {
        puVar4 = param_2 + 3;
        uVar5 = (uint)uVar1 * 0x10000 + (uint)param_2[2] + 0xc0000000;
      }
      else {
        uVar5 = CONCAT22(param_2[2],param_2[3]);
        puVar4 = param_2 + 4;
      }
      uVar1 = 1;
      if (0x3f < puVar4[(int)uVar5]) {
        uVar1 = puVar4[(int)uVar5] >> 0xf ^ 3;
      }
      *(ushort **)(param_1 + 0x10) = puVar4 + (int)uVar5;
      return uVar1;
    }
    if ((param_2[1] & 0x7fff) < 0x4000) {
      param_2 = param_2 + 2;
    }
    else if ((param_2[1] & 0x7fff) == 0x7fff) {
      param_2 = param_2 + 4;
    }
    else {
      param_2 = param_2 + 3;
    }
    iVar2 = iVar2 + -1;
  } while (2 < iVar2);
  if (*param_2 == param_4) {
    *(ushort **)(param_1 + 0x10) = param_2 + 1;
    uVar1 = 1;
    if (0x3f < param_2[1]) {
      return param_2[1] >> 0xf ^ 3;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1425e7630 FUN_1425e7630 body=153 status=ok
// SIG undefined FUN_1425e7630(void)

ulonglong FUN_1425e7630(longlong param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  
  puVar4 = param_2 + 1;
  uVar1 = *param_2;
  uVar7 = (uint)uVar1;
  if (uVar1 < 0x30) {
    uVar3 = FUN_1425e7470(param_1,puVar4,uVar7);
    return uVar3;
  }
  if (0x3f < uVar1) {
    if ((short)uVar1 < 0) goto LAB_1425e76be;
    uVar6 = uVar1 & 0x3f;
    if (0x403f < uVar7) {
      if (uVar7 < 0x7fc0) {
        puVar4 = param_2 + 2;
      }
      else {
        puVar4 = param_2 + 3;
      }
    }
    uVar7 = uVar6;
    if (uVar6 < 0x30) {
      if ((uVar1 & 0x3f) == 0) {
        uVar6 = (uint)*puVar4;
        puVar4 = puVar4 + 1;
      }
      uVar7 = uVar6 + 1;
      if (4 < uVar6) {
        do {
          if ((int)param_3 < (int)(uint)*puVar4) {
            uVar1 = puVar4[1];
            uVar6 = (uint)uVar1;
            if (uVar1 < 0xfc00) {
              puVar5 = puVar4 + 2;
            }
            else if (uVar1 == 0xffff) {
              uVar6 = CONCAT22(puVar4[2],puVar4[3]);
              puVar5 = puVar4 + 4;
            }
            else {
              puVar5 = puVar4 + 3;
              uVar6 = (uint)uVar1 * 0x10000 + (uint)puVar4[2] + 0x4000000;
            }
            puVar4 = puVar5 + (int)uVar6;
            uVar7 = uVar7 >> 1;
          }
          else {
            uVar7 = uVar7 - (uVar7 >> 1);
            if (puVar4[1] < 0xfc00) {
              puVar4 = puVar4 + 2;
            }
            else if (puVar4[1] == 0xffff) {
              puVar4 = puVar4 + 4;
            }
            else {
              puVar4 = puVar4 + 3;
            }
          }
        } while (5 < (int)uVar7);
      }
      iVar2 = uVar7 + 1;
      do {
        if (*puVar4 == param_3) {
          uVar1 = puVar4[1];
          uVar7 = (uint)uVar1;
          if (-1 < (short)uVar1) {
            if (uVar1 < 0x4000) {
              puVar5 = puVar4 + 2;
            }
            else if (uVar1 < 0x7fff) {
              puVar5 = puVar4 + 3;
              uVar7 = (uint)uVar1 * 0x10000 + (uint)puVar4[2] + 0xc0000000;
            }
            else {
              uVar7 = CONCAT22(puVar4[2],puVar4[3]);
              puVar5 = puVar4 + 4;
            }
            uVar3 = 1;
            if (0x3f < puVar5[(int)uVar7]) {
              uVar3 = (ulonglong)(puVar5[(int)uVar7] >> 0xf ^ 3);
            }
            *(ushort **)(param_1 + 0x10) = puVar5 + (int)uVar7;
            return uVar3;
          }
          *(ushort **)(param_1 + 0x10) = puVar4 + 1;
          return 2;
        }
        if ((puVar4[1] & 0x7fff) < 0x4000) {
          puVar4 = puVar4 + 2;
        }
        else if ((puVar4[1] & 0x7fff) == 0x7fff) {
          puVar4 = puVar4 + 4;
        }
        else {
          puVar4 = puVar4 + 3;
        }
        iVar2 = iVar2 + -1;
      } while (2 < iVar2);
      if (*puVar4 == param_3) {
        *(ushort **)(param_1 + 0x10) = puVar4 + 1;
        uVar3 = 1;
        if (0x3f < puVar4[1]) {
          return (ulonglong)(puVar4[1] >> 0xf ^ 3);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = 0;
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  if (*puVar4 == param_3) {
    *(uint *)(param_1 + 0x18) = uVar7 - 0x31;
    *(ushort **)(param_1 + 0x10) = puVar4 + 1;
    if (0x30 < uVar7) {
      return 1;
    }
    uVar1 = puVar4[1];
    if (uVar1 < 0x40) {
      return 1;
    }
    return (ulonglong)(uVar1 >> 0xf ^ 3);
  }
LAB_1425e76be:
  *(undefined8 *)(param_1 + 0x10) = 0;
  return 0;
}



// FUNCTION 1425e76d0 FUN_1425e76d0 body=505 status=ok
// SIG undefined FUN_1425e76d0(void)

ulonglong FUN_1425e76d0(longlong param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  if (param_3 < 0) {
    if (*param_2 != 0) goto LAB_1425e76f1;
  }
  else if (param_3 != 0) {
LAB_1425e76f1:
    puVar7 = *(ushort **)(param_1 + 0x10);
    if (puVar7 == (ushort *)0x0) {
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x18);
joined_r0x0001425e7707:
    if (param_3 < 0) {
      uVar5 = *param_2;
      if (uVar5 != 0) {
        iVar2 = -1;
        if (iVar8 < -1) {
          iVar2 = iVar8;
        }
        while (param_2 = param_2 + 1, -1 < iVar8) {
          if (uVar5 != *puVar7) goto LAB_1425e7888;
          puVar7 = puVar7 + 1;
          iVar8 = iVar8 + -1;
          uVar5 = *param_2;
          if (uVar5 == 0) goto LAB_1425e78a7;
        }
        goto LAB_1425e77b7;
      }
    }
    else if (param_3 != 0) {
      iVar2 = -1;
      if (iVar8 < -1) {
        iVar2 = iVar8;
      }
      iVar9 = 1 - param_3;
      lVar11 = 0;
      iVar12 = iVar8;
      while (uVar5 = *(ushort *)((longlong)param_2 + lVar11), -1 < iVar12) {
        if (uVar5 != *(ushort *)((longlong)puVar7 + lVar11)) goto LAB_1425e7888;
        iVar12 = iVar12 + -1;
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 2;
        if (iVar9 == 1) {
          iVar8 = iVar8 - param_3;
          puVar7 = (ushort *)((longlong)puVar7 + lVar11);
          goto LAB_1425e78a7;
        }
      }
      param_3 = -iVar9;
      param_2 = (ushort *)((longlong)param_2 + lVar11 + 2);
      puVar7 = (ushort *)((longlong)puVar7 + lVar11);
LAB_1425e77b7:
      *(int *)(param_1 + 0x18) = iVar2;
      while( true ) {
        puVar6 = puVar7 + 1;
        uVar3 = *puVar7 & 0x3f;
        uVar1 = (uint)*puVar7;
        while (uVar10 = uVar1, 0x2f < uVar10) {
          if (uVar10 < 0x40) {
            if (uVar5 != *puVar6) goto LAB_1425e7888;
            puVar7 = puVar6 + 1;
            iVar8 = uVar10 - 0x31;
            goto joined_r0x0001425e7707;
          }
          if (0x7fff < uVar10) goto LAB_1425e7888;
          uVar1 = uVar3;
          if (0x403f < uVar10) {
            if (uVar10 < 0x7fc0) {
              puVar6 = puVar6 + 1;
            }
            else {
              puVar6 = puVar6 + 2;
            }
          }
        }
        uVar4 = FUN_1425e7470(param_1,puVar6,uVar10,uVar5);
        if ((int)uVar4 == 0) {
          return 0;
        }
        if (param_3 < 0) {
          uVar5 = *param_2;
          if (uVar5 == 0) {
            return uVar4;
          }
        }
        else {
          if (param_3 == 0) {
            return uVar4;
          }
          uVar5 = *param_2;
          param_3 = param_3 + -1;
        }
        if ((int)uVar4 == 2) break;
        param_2 = param_2 + 1;
        puVar7 = *(ushort **)(param_1 + 0x10);
      }
LAB_1425e7888:
      *(undefined8 *)(param_1 + 0x10) = 0;
      return 0;
    }
LAB_1425e78a7:
    *(int *)(param_1 + 0x18) = iVar8;
    *(ushort **)(param_1 + 0x10) = puVar7;
    if (-1 < iVar8) {
      return 1;
    }
    uVar5 = *puVar7;
    goto joined_r0x0001425e78bf;
  }
  if (*(ushort **)(param_1 + 0x10) == (ushort *)0x0) {
    return 0;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    return 1;
  }
  uVar5 = **(ushort **)(param_1 + 0x10);
joined_r0x0001425e78bf:
  if (uVar5 < 0x40) {
    return 1;
  }
  return (ulonglong)(uVar5 >> 0xf ^ 3);
}



// FUNCTION 1425e78d0 FUN_1425e78d0 body=313 status=ok
// SIG undefined FUN_1425e78d0(void)

int FUN_1425e78d0(uint *param_1,int *param_2,longlong param_3)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined1 local_a0 [8];
  ushort local_98;
  int local_94;
  undefined1 local_60 [8];
  ushort local_58;
  undefined1 local_56 [2];
  uint local_54;
  undefined1 *local_48;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar5 = *param_1;
  sVar1 = *(short *)(param_3 + 8);
  if (sVar1 < 0) {
    uVar4 = *(uint *)(param_3 + 0xc);
  }
  else {
    uVar4 = (int)sVar1 >> 5;
  }
  uVar6 = 0xffff;
  if (uVar5 < uVar4) {
    if (((int)sVar1 & 2U) == 0) {
      lVar3 = *(longlong *)(param_3 + 0x18);
    }
    else {
      lVar3 = param_3 + 10;
    }
    uVar6 = *(undefined2 *)(lVar3 + (longlong)(int)uVar5 * 2);
  }
  FUN_1424a84d0(param_3,local_a0,uVar5 + 1,uVar6);
  FUN_1424a84d0(param_3,local_60,*param_2 + 1);
  if ((local_58 & 1) == 0) {
    if (-1 < (short)local_98) {
      local_94 = (int)(short)local_98 >> 5;
    }
    if (-1 < (short)local_58) {
      local_54 = (int)(short)local_58 >> 5;
    }
    uVar5 = local_54;
    if ((int)local_54 < 1) {
      uVar5 = 0;
    }
    if ((local_58 & 2) != 0) {
      local_48 = local_56;
    }
    cVar2 = FUN_1424a7e30(local_a0,0,local_94,local_48,(int)local_54 >> 0x1f & local_54,uVar5);
  }
  else {
    cVar2 = (local_98 & 1) == 0;
  }
  FUN_140859a90(local_60);
  FUN_140859a90(local_a0);
  return (int)cVar2;
}



// FUNCTION 1425e7a10 Unwind@1425e7a10 body=37 status=ok
// SIG undefined Unwind@1425e7a10(void)

void Unwind_1425e7a10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1425e7a40 Unwind@1425e7a40 body=37 status=ok
// SIG undefined Unwind@1425e7a40(void)

void Unwind_1425e7a40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425e7a70 FUN_1425e7a70 body=87 status=ok
// SIG undefined FUN_1425e7a70(void)

undefined8 FUN_1425e7a70(uint *param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined2 uVar5;
  
  uVar2 = *param_1;
  sVar1 = *(short *)(param_3 + 8);
  if (sVar1 < 0) {
    uVar4 = *(uint *)(param_3 + 0xc);
  }
  else {
    uVar4 = (int)sVar1 >> 5;
  }
  uVar5 = 0xffff;
  if (uVar2 < uVar4) {
    if (((int)sVar1 & 2U) == 0) {
      lVar3 = *(longlong *)(param_3 + 0x18);
    }
    else {
      lVar3 = param_3 + 10;
    }
    uVar5 = *(undefined2 *)(lVar3 + (longlong)(int)uVar2 * 2);
  }
  FUN_1424a84d0(param_3,param_2,uVar2 + 1,uVar5);
  return param_2;
}



// FUNCTION 1425e7ad0 FUN_1425e7ad0 body=60 status=ok
// SIG undefined FUN_1425e7ad0(void)

undefined8 * FUN_1425e7ad0(undefined8 *param_1)

{
  FUN_1426b1250();
  *param_1 = icu_64::UCharsTrieBuilder::vftable;
  param_1[2] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 3) = 2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1425e7b10 FUN_1425e7b10 body=63 status=ok
// SIG undefined FUN_1425e7b10(void)

void FUN_1425e7b10(undefined8 *param_1)

{
  *param_1 = icu_64::UCharsTrieBuilder::vftable;
  if (param_1[10] != 0) {
    FUN_1424b70c0();
  }
  FUN_1424da110(param_1[0xc]);
  FUN_140859a90(param_1 + 2);
  FUN_1426b1270(param_1);
  return;
}



// FUNCTION 1425e7b50 FUN_1425e7b50 body=376 status=ok
// SIG undefined FUN_1425e7b50(void)

void FUN_1425e7b50(longlong param_1,longlong param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [38];
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *param_4) goto LAB_1425e7b89;
  iVar4 = 0x1e;
  if (*(int *)(param_1 + 0x6c) < 1) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == *(int *)(param_1 + 0x58)) {
      iVar4 = 0x400;
      if (iVar1 != 0) {
        iVar4 = iVar1 * 4;
      }
      lVar3 = -1;
      if (-1 < iVar4) {
        lVar3 = (longlong)iVar4 * 8;
      }
      _Dst = (void *)thunk_FUN_1424da030(lVar3);
      if (_Dst == (void *)0x0) {
        iVar4 = 7;
        goto LAB_1425e7b87;
      }
      if (0 < (int)*(uint *)(param_1 + 0x5c)) {
        memcpy(_Dst,*(void **)(param_1 + 0x50),(ulonglong)*(uint *)(param_1 + 0x5c) << 3);
      }
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_1424b70c0();
      }
      *(void **)(param_1 + 0x50) = _Dst;
      *(int *)(param_1 + 0x58) = iVar4;
      iVar1 = *(int *)(param_1 + 0x5c);
    }
    else {
      _Dst = *(void **)(param_1 + 0x50);
    }
    *(int *)(param_1 + 0x5c) = iVar1 + 1;
    if (0 < *param_4) goto LAB_1425e7b89;
    if (*(short *)(param_2 + 8) < 0) {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar2 = (int)*(short *)(param_2 + 8) >> 5;
    }
    iVar4 = 8;
    if (iVar2 < 0x10000) {
      if (*(short *)(param_1 + 0x18) < 0) {
        iVar4 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar4 = (int)*(short *)(param_1 + 0x18) >> 5;
      }
      *(int *)((longlong)_Dst + (longlong)iVar1 * 8) = iVar4;
      local_42 = (undefined2)iVar2;
      FUN_1424a6cf0(param_1 + 0x10,&local_42,0,1);
      *(undefined4 *)((longlong)_Dst + (longlong)iVar1 * 8 + 4) = param_3;
      if (*(short *)(param_2 + 8) < 0) {
        iVar4 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar4 = (int)*(short *)(param_2 + 8) >> 5;
      }
      FUN_1424a9690(param_1 + 0x10,param_2,0,iVar4);
      if ((0 < *param_4) || (iVar4 = 7, (*(byte *)(param_1 + 0x18) & 1) == 0)) goto LAB_1425e7b89;
    }
  }
LAB_1425e7b87:
  *param_4 = iVar4;
LAB_1425e7b89:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
}



// FUNCTION 1425e7ce0 FUN_1425e7ce0 body=108 status=ok
// SIG undefined FUN_1425e7ce0(void)

longlong * FUN_1425e7ce0(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_1425e7d50();
  if (*param_3 < 1) {
    plVar2 = (longlong *)thunk_FUN_1424da030(0x20);
    if (plVar2 != (longlong *)0x0) {
      lVar1 = *(longlong *)(param_1 + 0x60) +
              ((longlong)*(int *)(param_1 + 0x68) - (longlong)*(int *)(param_1 + 0x6c)) * 2;
      *plVar2 = *(longlong *)(param_1 + 0x60);
      plVar2[1] = lVar1;
      plVar2[2] = lVar1;
      *(undefined4 *)(plVar2 + 3) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      return plVar2;
    }
    *param_3 = 7;
  }
  return (longlong *)0x0;
}



// FUNCTION 1425e7d50 FUN_1425e7d50 body=590 status=ok
// SIG undefined FUN_1425e7d50(void)

void FUN_1425e7d50(longlong param_1,undefined4 param_2,int *param_3)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined2 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 local_d0 [8];
  ushort local_c8;
  int local_c4;
  undefined1 local_90 [8];
  ushort local_88;
  int local_84;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_3) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x60) != 0) && (0 < *(int *)(param_1 + 0x6c))) {
    return;
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      *param_3 = 8;
      return;
    }
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) goto LAB_1425e7f53;
    lVar5 = param_1 + 0x10;
    FUN_14258cce0(*(undefined8 *)(param_1 + 0x50),*(int *)(param_1 + 0x5c),8,&LAB_1425e8070,lVar5,0,
                  param_3);
    if (0 < *param_3) {
      return;
    }
    FUN_1425e7a70(*(undefined8 *)(param_1 + 0x50),local_d0,lVar5);
    local_50 = param_1 + 0x1a;
    uVar10 = 1;
    if (1 < *(int *)(param_1 + 0x5c)) {
      do {
        sVar1 = *(short *)(param_1 + 0x18);
        if (sVar1 < 0) {
          uVar9 = *(uint *)(param_1 + 0x1c);
        }
        else {
          uVar9 = (int)sVar1 >> 5;
        }
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x50) + uVar10 * 8);
        uVar8 = 0xffff;
        if (uVar2 < uVar9) {
          lVar7 = local_50;
          if (((int)sVar1 & 2U) == 0) {
            lVar7 = *(longlong *)(param_1 + 0x28);
          }
          uVar8 = *(undefined2 *)(lVar7 + (longlong)(int)uVar2 * 2);
        }
        FUN_1424a84d0(lVar5,local_90,uVar2 + 1,uVar8);
        if ((local_c8 & 1) == 0) {
          iVar4 = local_c4;
          if (-1 < (short)local_c8) {
            iVar4 = (int)(short)local_c8 >> 5;
          }
          iVar6 = local_84;
          if (-1 < (short)local_88) {
            iVar6 = (int)(short)local_88 >> 5;
          }
          if (((((int)(short)local_88 & 1U) == 0) && (iVar4 == iVar6)) &&
             (cVar3 = FUN_1412ae090(local_d0,local_90), cVar3 != '\0')) {
LAB_1425e7f84:
            *param_3 = 1;
            FUN_140859a90(local_90);
            FUN_140859a90(local_d0);
            return;
          }
        }
        else if ((local_88 & 1) != 0) goto LAB_1425e7f84;
        thunk_FUN_1424a7600(local_d0,local_90);
        FUN_140859a90(local_90);
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0x5c));
    }
    FUN_140859a90(local_d0);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(short *)(param_1 + 0x18) < 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  else {
    iVar4 = (int)*(short *)(param_1 + 0x18) >> 5;
  }
  iVar6 = 0x400;
  if (0x400 < iVar4) {
    iVar6 = iVar4;
  }
  if (*(int *)(param_1 + 0x68) < iVar6) {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x60));
    lVar5 = FUN_1424da030(iVar6 * 2);
    *(longlong *)(param_1 + 0x60) = lVar5;
    if (lVar5 == 0) {
      *param_3 = 7;
      *(undefined4 *)(param_1 + 0x68) = 0;
      return;
    }
    *(int *)(param_1 + 0x68) = iVar6;
  }
  FUN_1426b12c0(param_1,param_2,*(undefined4 *)(param_1 + 0x5c),param_3);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    return;
  }
LAB_1425e7f53:
  *param_3 = 7;
  return;
}



// FUNCTION 1425e7fa0 Unwind@1425e7fa0 body=55 status=ok
// SIG undefined Unwind@1425e7fa0(void)

void Unwind_1425e7fa0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1425e7fe0 Unwind@1425e7fe0 body=55 status=ok
// SIG undefined Unwind@1425e7fe0(void)

void Unwind_1425e7fe0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425e8020 FUN_1425e8020 body=68 status=ok
// SIG undefined FUN_1425e8020(void)

undefined8 FUN_1425e8020(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  FUN_1425e7d50(param_1,param_2,param_4);
  if (*param_4 < 1) {
    FUN_1424a8f10(param_3,0,
                  ((longlong)*(int *)(param_1 + 0x68) - (longlong)*(int *)(param_1 + 0x6c)) * 2 +
                  *(longlong *)(param_1 + 0x60));
  }
  return param_3;
}



// FUNCTION 1425e8090 FUN_1425e8090 body=66 status=ok
// SIG undefined FUN_1425e8090(void)

undefined2 FUN_1425e8090(longlong param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 8);
  sVar1 = *(short *)(param_1 + 0x18);
  if (sVar1 < 0) {
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar4 = (int)sVar1 >> 5;
  }
  uVar3 = 0xffff;
  if (uVar2 < uVar4) {
    if (((int)sVar1 & 2U) == 0) {
      param_1 = *(longlong *)(param_1 + 0x28);
    }
    else {
      param_1 = param_1 + 0x1a;
    }
    uVar3 = *(undefined2 *)(param_1 + (longlong)(int)uVar2 * 2);
  }
  return uVar3;
}



// FUNCTION 1425e80e0 FUN_1425e80e0 body=73 status=ok
// SIG undefined FUN_1425e80e0(void)

ulonglong FUN_1425e80e0(longlong param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 8);
  uVar4 = param_3 + iVar2 + 1;
  sVar1 = *(short *)(param_1 + 0x18);
  if (sVar1 < 0) {
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar5 = (int)sVar1 >> 5;
  }
  uVar3 = CONCAT62((uint6)(ushort)((uint)iVar2 >> 0x10),0xffff);
  if (uVar4 < uVar5) {
    if (((int)sVar1 & 2U) == 0) {
      param_1 = *(longlong *)(param_1 + 0x28);
    }
    else {
      param_1 = param_1 + 0x1a;
    }
    uVar3 = (ulonglong)*(ushort *)(param_1 + (longlong)(int)uVar4 * 2);
  }
  return uVar3;
}



// FUNCTION 1425e8130 FUN_1425e8130 body=12 status=ok
// SIG undefined FUN_1425e8130(void)

undefined4 FUN_1425e8130(longlong param_1,int param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 4 + (longlong)param_2 * 8);
}



// FUNCTION 1425e8140 FUN_1425e8140 body=199 status=ok
// SIG undefined FUN_1425e8140(void)

uint FUN_1425e8140(longlong param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  short sVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 8);
  uVar1 = *(ushort *)(param_1 + 0x18);
  if ((short)uVar1 < 0) {
    uVar8 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar8 = (int)(short)uVar1 >> 5;
  }
  if (uVar2 < uVar8) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    lVar4 = param_1 + 0x1a;
    if ((uVar1 & 2) == 0) {
      lVar4 = lVar9;
    }
    uVar6 = (uint)*(ushort *)(lVar4 + (longlong)(int)uVar2 * 2);
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x28);
    uVar6 = 0xffff;
  }
  lVar4 = param_1 + 0x1a;
  if ((uVar1 & 2) == 0) {
    lVar4 = lVar9;
  }
  lVar9 = (longlong)(int)param_4;
  uVar3 = param_4 + 1;
  if ((int)(param_4 + 1) < (int)uVar6) {
    uVar3 = uVar6;
  }
  do {
    lVar9 = lVar9 + 1;
    if ((longlong)(ulonglong)uVar6 <= lVar9) {
      return uVar3;
    }
    uVar10 = uVar2 + 2 + param_4;
    sVar5 = -1;
    sVar7 = -1;
    if (uVar10 < uVar8) {
      sVar7 = *(short *)(lVar4 + (longlong)(int)uVar10 * 2);
    }
    uVar10 = *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)param_3 * 8) + param_4 + 2;
    if (uVar10 < uVar8) {
      sVar5 = *(short *)(lVar4 + (longlong)(int)uVar10 * 2);
    }
    param_4 = param_4 + 1;
  } while (sVar7 == sVar5);
  return param_4;
}



// FUNCTION 1425e8210 FUN_1425e8210 body=136 status=ok
// SIG undefined FUN_1425e8210(void)

int FUN_1425e8210(longlong param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  short sVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar1 = *(ushort *)(param_1 + 0x18);
  if ((short)uVar1 < 0) {
    uVar7 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar7 = (int)(short)uVar1 >> 5;
  }
  if ((uVar1 & 2) == 0) {
    lVar8 = *(longlong *)(param_1 + 0x28);
  }
  else {
    lVar8 = param_1 + 0x1a;
  }
  iVar2 = 0;
  do {
    lVar5 = (longlong)param_2;
    uVar4 = *(int *)(*(longlong *)(param_1 + 0x50) + lVar5 * 8) + param_4 + 1;
    sVar6 = -1;
    if (uVar4 < uVar7) {
      sVar6 = *(short *)(lVar8 + (longlong)(int)uVar4 * 2);
    }
    do {
      lVar5 = lVar5 + 1;
      if (param_3 <= lVar5) {
        return iVar2 + 1;
      }
      uVar4 = *(int *)(*(longlong *)(param_1 + 0x50) + lVar5 * 8) + param_4 + 1;
      sVar3 = -1;
      if (uVar4 < uVar7) {
        sVar3 = *(short *)(lVar8 + (longlong)(int)uVar4 * 2);
      }
      param_2 = param_2 + 1;
    } while (sVar6 == sVar3);
    iVar2 = iVar2 + 1;
  } while( true );
}



// FUNCTION 1425e82b0 FUN_1425e82b0 body=139 status=ok
// SIG undefined FUN_1425e82b0(void)

void FUN_1425e82b0(longlong param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  short sVar6;
  int *piVar7;
  
  sVar6 = *(short *)(param_1 + 0x18);
  if (sVar6 < 0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar3 = (int)sVar6 >> 5;
  }
  if (((int)sVar6 & 2U) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  else {
    lVar2 = param_1 + 0x1a;
  }
  do {
    uVar5 = *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 8) + param_3 + 1;
    sVar6 = -1;
    if (uVar5 < uVar3) {
      sVar6 = *(short *)(lVar2 + (longlong)(int)uVar5 * 2);
    }
    piVar7 = (int *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)param_2 * 8);
    do {
      uVar5 = *piVar7 + param_3 + 1;
      sVar4 = -1;
      if (uVar5 < uVar3) {
        sVar4 = *(short *)(lVar2 + (longlong)(int)uVar5 * 2);
      }
      param_2 = param_2 + 1;
      piVar7 = piVar7 + 2;
    } while (sVar6 == sVar4);
    bVar1 = 1 < param_4;
    param_4 = param_4 + -1;
  } while (bVar1);
  return;
}



// FUNCTION 1425e8350 FUN_1425e8350 body=96 status=ok
// SIG undefined FUN_1425e8350(void)

int FUN_1425e8350(longlong param_1,int param_2,int param_3,short param_4)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *(ushort *)(param_1 + 0x18);
  if ((short)uVar1 < 0) {
    uVar6 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar6 = (int)(short)uVar1 >> 5;
  }
  if ((uVar1 & 2) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  else {
    lVar7 = param_1 + 0x1a;
  }
  iVar2 = param_2 + -1;
  piVar4 = (int *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x50));
  do {
    uVar5 = *piVar4 + param_3 + 1;
    sVar3 = -1;
    if (uVar5 < uVar6) {
      sVar3 = *(short *)(lVar7 + (longlong)(int)uVar5 * 2);
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 2;
  } while (sVar3 == param_4);
  return iVar2;
}



// FUNCTION 1425e83c0 FUN_1425e83c0 body=63 status=ok
// SIG undefined FUN_1425e83c0(void)

bool FUN_1425e83c0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == param_2) {
    bVar3 = true;
  }
  else {
    cVar1 = FUN_1426b2330();
    if (cVar1 == '\0') {
      bVar3 = false;
    }
    else {
      iVar2 = FUN_1425048b0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                            *(undefined4 *)(param_1 + 0x18));
      bVar3 = iVar2 == 0;
    }
  }
  return bVar3;
}



// FUNCTION 1425e8400 FUN_1425e8400 body=87 status=ok
// SIG undefined FUN_1425e8400(void)

void FUN_1425e8400(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
  FUN_1425e8460(param_2,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18));
  iVar1 = (**(code **)(*param_2 + 0x58))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x88))
                    (param_2,*(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                     iVar1 + *(int *)(param_1 + 0x18) + -1);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}



// FUNCTION 1425e8460 FUN_1425e8460 body=213 status=ok
// SIG undefined FUN_1425e8460(void)

undefined4 FUN_1425e8460(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x6c) + param_3;
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 < iVar2) {
      do {
        iVar3 = iVar4;
        iVar4 = iVar3 * 2;
      } while (iVar4 <= iVar2);
      lVar1 = FUN_1424da030((longlong)(iVar3 << 2));
      if (lVar1 == 0) {
        FUN_1424da110(*(undefined8 *)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        goto LAB_1425e8525;
      }
      FUN_142504850(lVar1 + (longlong)(iVar4 - *(int *)(param_1 + 0x6c)) * 2,
                    ((longlong)*(int *)(param_1 + 0x68) - (longlong)*(int *)(param_1 + 0x6c)) * 2 +
                    *(longlong *)(param_1 + 0x60));
      FUN_1424da110(*(undefined8 *)(param_1 + 0x60));
      *(longlong *)(param_1 + 0x60) = lVar1;
      *(int *)(param_1 + 0x68) = iVar4;
    }
    *(int *)(param_1 + 0x6c) = iVar2;
    FUN_142504850(lVar1 + (longlong)(iVar4 - iVar2) * 2,param_2,param_3);
  }
LAB_1425e8525:
  return *(undefined4 *)(param_1 + 0x6c);
}



// FUNCTION 1425e8540 FUN_1425e8540 body=320 status=ok
// SIG undefined FUN_1425e8540(void)

undefined8 * FUN_1425e8540(longlong param_1,int param_2,int param_3,int param_4,longlong param_5)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 uVar8;
  int iVar9;
  undefined1 local_80 [8];
  ushort local_78;
  undefined1 local_76 [14];
  undefined1 *local_68;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  puVar4 = (undefined8 *)thunk_FUN_1424da030(0x30);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 8);
    sVar1 = *(short *)(param_1 + 0x18);
    if (sVar1 < 0) {
      uVar5 = *(uint *)(param_1 + 0x1c);
    }
    else {
      uVar5 = (int)sVar1 >> 5;
    }
    uVar8 = 0xffff;
    if (uVar2 < uVar5) {
      if (((int)sVar1 & 2U) == 0) {
        lVar7 = *(longlong *)(param_1 + 0x28);
      }
      else {
        lVar7 = param_1 + 0x1a;
      }
      uVar8 = *(undefined2 *)(lVar7 + (longlong)(int)uVar2 * 2);
    }
    local_40 = puVar4;
    FUN_1424a84d0(param_1 + 0x10,local_80,uVar2 + 1,uVar8);
    puVar4 = local_40;
    iVar6 = 0;
    if ((local_78 & 0x11) == 0) {
      if ((local_78 & 2) != 0) {
        local_68 = local_76;
      }
    }
    else {
      local_68 = (undefined1 *)0x0;
    }
    if (param_5 != 0) {
      iVar6 = *(int *)(param_5 + 8);
    }
    iVar9 = iVar6 + param_4 * 0x25 + 0x11cccbbb;
    *(int *)(local_40 + 1) = iVar9;
    *(undefined4 *)((longlong)local_40 + 0xc) = 0;
    *(undefined1 *)(local_40 + 2) = 0;
    *(undefined4 *)((longlong)local_40 + 0x14) = 0;
    *(int *)(local_40 + 3) = param_4;
    local_40[4] = param_5;
    *local_40 = icu_64::UCharsTrieBuilder::UCTLinearMatchNode::vftable;
    local_40[5] = local_68 + (longlong)param_3 * 2;
    iVar3 = FUN_142504d40(local_68 + (longlong)param_3 * 2,param_4);
    *(int *)(puVar4 + 1) = iVar3 + param_4 * 0x25 + iVar6 + iVar9 * 0x24 + 0x11cccbbb;
    FUN_140859a90(local_80);
  }
  return puVar4;
}



// FUNCTION 1425e8680 Unwind@1425e8680 body=44 status=ok
// SIG undefined Unwind@1425e8680(void)

void Unwind_1425e8680(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1425e86b0 FUN_1425e86b0 body=184 status=ok
// SIG undefined FUN_1425e86b0(void)

undefined4 FUN_1425e86b0(longlong param_1,undefined2 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x6c) + 1;
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 <= *(int *)(param_1 + 0x6c)) {
      do {
        iVar3 = iVar4;
        iVar4 = iVar3 * 2;
      } while (iVar4 <= iVar1);
      lVar2 = FUN_1424da030((longlong)(iVar3 << 2));
      if (lVar2 == 0) {
        FUN_1424da110(*(undefined8 *)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        goto LAB_1425e875a;
      }
      FUN_142504850(lVar2 + (longlong)(iVar4 - *(int *)(param_1 + 0x6c)) * 2,
                    ((longlong)*(int *)(param_1 + 0x68) - (longlong)*(int *)(param_1 + 0x6c)) * 2 +
                    *(longlong *)(param_1 + 0x60));
      FUN_1424da110(*(undefined8 *)(param_1 + 0x60));
      *(longlong *)(param_1 + 0x60) = lVar2;
      *(int *)(param_1 + 0x68) = iVar4;
    }
    *(int *)(param_1 + 0x6c) = iVar1;
    *(undefined2 *)(lVar2 + (longlong)(iVar4 - iVar1) * 2) = param_2;
  }
LAB_1425e875a:
  return *(undefined4 *)(param_1 + 0x6c);
}



// FUNCTION 1425e8770 FUN_1425e8770 body=165 status=ok
// SIG undefined FUN_1425e8770(void)

undefined4 FUN_1425e8770(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined1 local_58 [8];
  ushort local_50;
  undefined1 local_4e [14];
  undefined1 *local_40;
  
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 8);
  sVar1 = *(short *)(param_1 + 0x18);
  if (sVar1 < 0) {
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar5 = (int)sVar1 >> 5;
  }
  uVar6 = 0xffff;
  if (uVar2 < uVar5) {
    if (((int)sVar1 & 2U) == 0) {
      lVar4 = *(longlong *)(param_1 + 0x28);
    }
    else {
      lVar4 = param_1 + 0x1a;
    }
    uVar6 = *(undefined2 *)(lVar4 + (longlong)(int)uVar2 * 2);
  }
  FUN_1424a84d0(param_1 + 0x10,local_58,uVar2 + 1,uVar6);
  if ((local_50 & 0x11) == 0) {
    if ((local_50 & 2) != 0) {
      local_40 = local_4e;
    }
  }
  else {
    local_40 = (undefined1 *)0x0;
  }
  uVar3 = FUN_1425e8460(param_1,local_40 + (longlong)param_3 * 2,param_4);
  FUN_140859a90(local_58);
  return uVar3;
}



// FUNCTION 1425e8820 FUN_1425e8820 body=160 status=ok
// SIG undefined FUN_1425e8820(void)

void FUN_1425e8820(undefined8 param_1,undefined8 param_2,short param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [34];
  ushort local_26;
  short local_24;
  short local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((uint)param_2 < 0x4000) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  sVar1 = (short)((ulonglong)param_2 >> 0x10);
  local_24 = (short)param_2;
  if ((uint)param_2 < 0x3fff0000) {
    local_26 = sVar1 + 0x4000;
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
    local_26 = 0x7fff;
    local_22 = local_24;
    local_24 = sVar1;
  }
  local_26 = local_26 | param_3 << 0xf;
  FUN_1425e8460(param_1,&local_26,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425e88e0 FUN_1425e88e0 body=175 status=ok
// SIG undefined FUN_1425e88e0(void)

void FUN_1425e88e0(undefined8 param_1,char param_2,uint param_3,ushort param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [34];
  ushort local_26;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != '\0') {
    if (param_3 < 0xfe0000) {
      if (param_3 < 0x100) {
        local_26 = (short)param_3 * 0x40 + 0x40;
        uVar1 = 1;
      }
      else {
        local_24 = CONCAT22(local_24._2_2_,(short)param_3);
        local_26 = ((ushort)(param_3 >> 10) & 0x7fc0) + 0x4040;
        uVar1 = 2;
      }
    }
    else {
      local_24 = param_3 >> 0x10 | param_3 << 0x10;
      uVar1 = 3;
      local_26 = 0x7fc0;
    }
    local_26 = local_26 | param_4;
    FUN_1425e8460(param_1,&local_26,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425e89b0 FUN_1425e89b0 body=143 status=ok
// SIG undefined FUN_1425e89b0(void)

void FUN_1425e89b0(longlong param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [34];
  short local_26 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *(int *)(param_1 + 0x6c) - param_2;
  if ((int)uVar2 < 0xfc00) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  sVar1 = (short)(uVar2 >> 0x10);
  if (uVar2 < 0x3ff0000) {
    local_26[0] = sVar1 + -0x400;
    lVar3 = 1;
  }
  else {
    lVar3 = 2;
    local_26[0] = -1;
    local_26[1] = sVar1;
  }
  local_26[lVar3] = (short)uVar2;
  FUN_1425e8460(param_1,local_26,(int)lVar3 + 1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425e8a60 FUN_1425e8a60 body=83 status=ok
// SIG undefined FUN_1425e8a60(void)

undefined8 * FUN_1425e8a60(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::UCharsTrieBuilder::vftable;
  if (param_1[10] != 0) {
    FUN_1424b70c0();
  }
  FUN_1424da110(param_1[0xc]);
  FUN_140859a90(param_1 + 2);
  FUN_1426b1270(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}


