// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14255e380 Unwind@14255e380 body=48 status=ok
// SIG undefined Unwind@14255e380(void)

void Unwind_14255e380(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14255e3b0 FUN_14255e3b0 body=107 status=ok
// SIG undefined FUN_14255e3b0(void)

longlong FUN_14255e3b0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  iVar2 = FUN_142537cd0(lVar1);
  lVar3 = lVar1;
  if (1 < iVar2) {
    lVar3 = thunk_FUN_1424da030(0x358);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_142612c50(lVar3,lVar1);
      FUN_142537ca0(lVar1);
      *param_1 = lVar3;
      FUN_142537c90(lVar3);
    }
  }
  return lVar3;
}



// FUNCTION 14255e420 Unwind@14255e420 body=34 status=ok
// SIG undefined Unwind@14255e420(void)

void Unwind_14255e420(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14255e450 FUN_14255e450 body=393 status=ok
// SIG undefined FUN_14255e450(void)

longlong FUN_14255e450(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  if (0 < *param_3) {
    return param_1;
  }
  if (param_2 == 0xffffffff) {
    lVar7 = *(longlong *)(param_1 + 0x10);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (lVar7 == lVar5) {
      *(byte *)(param_1 + 0x109) = *(byte *)(param_1 + 0x109) & 0xfe;
      return param_1;
    }
    uVar6 = 0xffffffff;
  }
  else {
    if ((param_2 & 0xfffffffc) != 0x1000) {
      *param_3 = 1;
      return param_1;
    }
    uVar6 = param_2 - 0x1000;
    lVar7 = *(longlong *)(param_1 + 0x10);
    if (uVar6 == (*(uint *)(lVar7 + 0x18) >> 4 & 7)) {
      *(byte *)(param_1 + 0x109) = *(byte *)(param_1 + 0x109) | 1;
      return param_1;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
  }
  iVar1 = FUN_142537cd0(lVar7);
  lVar3 = lVar7;
  if (1 < iVar1) {
    lVar3 = thunk_FUN_1424da030(0x358);
    if (lVar3 == 0) {
      *param_3 = 7;
      return param_1;
    }
    FUN_142612c50(lVar3,lVar7);
    FUN_142537ca0(lVar7);
    *(longlong *)(param_1 + 0x10) = lVar3;
    FUN_142537c90(lVar3);
  }
  uVar4 = param_2;
  if (param_2 == 0xffffffff) {
    uVar4 = *(uint *)(lVar5 + 0x18) >> 4 & 7 | 0x1000;
  }
  uVar2 = FUN_142563c10(*(undefined8 *)(param_1 + 8),uVar4);
  FUN_142613a10(lVar3,uVar6,*(undefined4 *)(lVar5 + 0x18),param_3);
  if (*param_3 < 1) {
    *(undefined4 *)(lVar3 + 0x1c) = uVar2;
    uVar2 = FUN_142615670(*(undefined8 *)(param_1 + 8),lVar3,lVar3 + 0x54,0x180);
    *(undefined4 *)(lVar3 + 0x50) = uVar2;
    if (param_2 == 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 0x108) & 0xfffffeff;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x108) | 0x100;
    }
    *(uint *)(param_1 + 0x108) = uVar6;
  }
  return param_1;
}



// FUNCTION 14255e5e0 Unwind@14255e5e0 body=52 status=ok
// SIG undefined Unwind@14255e5e0(void)

void Unwind_14255e5e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14255e620 FUN_14255e620 body=19 status=ok
// SIG undefined FUN_14255e620(void)

uint FUN_14255e620(longlong param_1)

{
  return *(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) >> 4 & 7 | 0x1000;
}



// FUNCTION 14255e640 FUN_14255e640 body=8 status=ok
// SIG undefined FUN_14255e640(void)

undefined4 FUN_14255e640(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1c);
}



// FUNCTION 14255e650 FUN_14255e650 body=603 status=ok
// SIG undefined FUN_14255e650(void)

undefined4 FUN_14255e650(longlong *param_1,wchar_t *param_2,int param_3,int *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  size_t sVar3;
  undefined **local_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined4 local_230;
  undefined1 *local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined1 local_218 [320];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  byte local_c4;
  wchar_t *local_c0;
  wchar_t *local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  wchar_t *local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined2 local_78;
  undefined1 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    if ((param_2 != (wchar_t *)0x0) || (param_3 == 0)) {
      if (param_3 < 0) {
        sVar3 = wcslen(param_2);
        param_3 = (int)sVar3;
      }
      if (param_3 != 0) {
        local_c4 = *(byte *)(param_1[2] + 0x18) >> 1 & 1;
        local_b0 = param_2 + param_3;
        local_c0 = param_2;
        local_b8 = param_2;
        if ((*(byte *)(param_1[2] + 0x18) & 1) == 0) {
          local_238 = (undefined8 *)param_1[1];
          local_240 = *local_238;
          local_230 = 0;
          local_228 = local_218;
          local_220 = 0x28;
          local_21c = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_c8 = 0xffffffff;
          local_248 = icu_64::UTF16CollationIterator::vftable;
          uVar1 = FUN_14255e910(&local_248,param_4);
          lVar2 = FUN_14255e910(&local_248,param_4);
          thunk_FUN_1426191b0(&local_248);
        }
        else {
          local_238 = (undefined8 *)param_1[1];
          local_240 = *local_238;
          local_230 = 0;
          local_228 = local_218;
          local_220 = 0x28;
          local_21c = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_c8 = 0xffffffff;
          local_248 = icu_64::FCDUTF16CollationIterator::vftable;
          local_98 = 0;
          local_88 = local_238[6];
          local_80 = &PTR_FUN_149e18960;
          local_78 = 2;
          local_40 = 1;
          local_a8 = param_2;
          local_a0 = param_2;
          local_90 = local_b0;
          uVar1 = FUN_14255e910(&local_248,param_4);
          lVar2 = FUN_14255e910(&local_248,param_4);
          FUN_142618370(&local_248);
        }
        if ((uVar1 != 0x101000100) && (lVar2 == 0x101000100)) {
          (**(code **)(*param_1 + 0xd0))(param_1,uVar1 >> 0x20,param_4);
          return *(undefined4 *)(param_1[2] + 0x1c);
        }
        *param_4 = 0x15;
        return 0;
      }
    }
    *param_4 = 1;
  }
  return 0;
}



// FUNCTION 14255e8b0 Unwind@14255e8b0 body=47 status=ok
// SIG undefined Unwind@14255e8b0(void)

void Unwind_14255e8b0(undefined8 param_1,longlong param_2)

{
  FUN_142618370(param_2 + 0x20);
  return;
}



// FUNCTION 14255e8e0 Unwind@14255e8e0 body=47 status=ok
// SIG undefined Unwind@14255e8e0(void)

void Unwind_14255e8e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1426191b0(param_2 + 0x20);
  return;
}



// FUNCTION 14255e910 FUN_14255e910 body=537 status=ok
// SIG undefined FUN_14255e910(void)

void FUN_14255e910(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar4 = (int)param_1[3];
  if ((int)param_1[0x2e] < iVar4) {
    *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + 1;
    goto LAB_14255eb13;
  }
  if (0x27 < iVar4) {
    cVar3 = FUN_1426190f0(param_1 + 3,1,param_2);
    if (cVar3 == '\0') goto LAB_14255eb13;
    iVar4 = (int)param_1[3];
  }
  *(int *)(param_1 + 3) = iVar4 + 1;
  uVar5 = (**(code **)(*param_1 + 0x38))(param_1,&local_24,param_2);
  uVar7 = uVar5 & 0xff;
  if (uVar7 < 0xc0) {
    uVar10 = CONCAT44(uVar5,uVar5 << 0x10);
    uVar8 = (ulonglong)(uVar7 << 8);
LAB_14255e9ae:
    uVar8 = uVar8 | uVar10 & 0xffff0000ff000000;
LAB_14255e9b1:
    lVar9 = param_1[0x2e];
    *(int *)(param_1 + 0x2e) = (int)lVar9 + 1;
    *(ulonglong *)(param_1[4] + (longlong)(int)lVar9 * 8) = uVar8;
  }
  else {
    if (uVar7 == 0xc0) {
      if ((int)local_24 < 0) {
        uVar8 = 0x101000100;
        goto LAB_14255e9b1;
      }
      plVar6 = *(longlong **)(param_1[2] + 0x20);
      plVar2 = (longlong *)*plVar6;
      if (local_24 < 0xd800) {
        uVar1 = *(ushort *)(*plVar2 + (ulonglong)(local_24 >> 5) * 2);
LAB_14255ea92:
        iVar4 = (local_24 & 0x1f) + (uint)uVar1 * 4;
      }
      else {
        if (local_24 < 0x10000) {
          lVar9 = *plVar2;
          uVar8 = 0x140;
          if (0xdbff < local_24) {
            uVar8 = 0;
          }
          uVar10 = (ulonglong)(local_24 >> 5);
LAB_14255ea8a:
          uVar1 = *(ushort *)(lVar9 + (uVar8 + uVar10) * 2);
          goto LAB_14255ea92;
        }
        iVar4 = 0x80;
        if (local_24 < 0x110000) {
          if ((int)local_24 < *(int *)((longlong)plVar2 + 0x2c)) {
            lVar9 = *plVar2;
            uVar10 = (ulonglong)*(ushort *)(lVar9 + 0x1040 + (ulonglong)(local_24 >> 0xb) * 2);
            uVar8 = (ulonglong)(local_24 >> 5 & 0x3f);
            goto LAB_14255ea8a;
          }
          iVar4 = (int)plVar2[6];
        }
      }
      uVar5 = *(uint *)(plVar2[2] + (longlong)iVar4 * 4);
      uVar7 = uVar5 & 0xff;
      if ((uVar5 & 0xff) < 0xc0) {
        uVar10 = CONCAT44(uVar5,uVar5 << 0x10);
        uVar8 = (ulonglong)(byte)uVar5 << 8;
        goto LAB_14255e9ae;
      }
    }
    else {
      plVar6 = (longlong *)param_1[2];
    }
    if (uVar7 == 0xc1) {
      lVar9 = param_1[0x2e];
      *(int *)(param_1 + 0x2e) = (int)lVar9 + 1;
      *(ulonglong *)(param_1[4] + (longlong)(int)lVar9 * 8) =
           (ulonglong)(uVar5 - 0xc1) << 0x20 | 0x5000500;
    }
    else {
      local_38 = param_2;
      FUN_142619500(param_1,plVar6,local_24,uVar5);
    }
  }
LAB_14255eb13:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14255eb40 FUN_14255eb40 body=69 status=ok
// SIG undefined FUN_14255eb40(void)

void FUN_14255eb40(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x18);
    }
    else {
      lVar3 = param_2 + 10;
    }
  }
  else {
    lVar3 = 0;
  }
  iVar2 = (int)(short)uVar1 >> 5;
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x00014255eb82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1,lVar3,iVar2,param_3);
  return;
}



// FUNCTION 14255eb90 FUN_14255eb90 body=311 status=ok
// SIG undefined FUN_14255eb90(void)

void FUN_14255eb90(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (*param_3 < 1) {
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x1c) != param_2) {
      iVar3 = FUN_142563c60(*(undefined8 *)(param_1 + 8),param_2);
      if (iVar3 - 0x1004U < 0xfffffffc) {
        *param_3 = 1;
        return;
      }
      param_2 = FUN_142563c10(*(undefined8 *)(param_1 + 8),iVar3);
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (param_2 != *(int *)(lVar1 + 0x1c)) {
        iVar4 = FUN_142537cd0(lVar1);
        lVar6 = lVar1;
        if (1 < iVar4) {
          lVar6 = thunk_FUN_1424da030(0x358);
          if (lVar6 == 0) {
            *param_3 = 7;
            return;
          }
          FUN_142612c50(lVar6,lVar1);
          FUN_142537ca0(lVar1);
          *(longlong *)(param_1 + 0x10) = lVar6;
          FUN_142537c90(lVar6);
        }
        FUN_142613a10(lVar6,iVar3 + -0x1000,
                      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x18),
                      param_3);
        if (0 < *param_3) {
          return;
        }
        *(int *)(lVar6 + 0x1c) = param_2;
        uVar5 = FUN_142615670(*(undefined8 *)(param_1 + 8),lVar6,lVar6 + 0x54,0x180);
        *(undefined4 *)(lVar6 + 0x50) = uVar5;
      }
    }
    if (param_2 == *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x1c)) {
      uVar2 = *(uint *)(param_1 + 0x108) & 0xfffffeff;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x108) | 0x100;
    }
    *(uint *)(param_1 + 0x108) = uVar2;
  }
  return;
}



// FUNCTION 14255ecd0 Unwind@14255ecd0 body=44 status=ok
// SIG undefined Unwind@14255ecd0(void)

void Unwind_14255ecd0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14255ed00 FUN_14255ed00 body=94 status=ok
// SIG undefined FUN_14255ed00(void)

int FUN_14255ed00(longlong param_1,void *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*param_4 < 1) {
    if ((param_3 < 0) || ((param_2 == (void *)0x0 && (param_3 != 0)))) {
      *param_4 = 1;
    }
    else {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x48);
      if ((longlong)iVar1 != 0) {
        iVar2 = iVar1;
        if (param_3 < iVar1) {
          *param_4 = 0xf;
        }
        else {
          memcpy(param_2,*(void **)(*(longlong *)(param_1 + 0x10) + 0x40),(longlong)iVar1 << 2);
        }
      }
    }
  }
  return iVar2;
}



// FUNCTION 14255ed60 FUN_14255ed60 body=361 status=ok
// SIG undefined FUN_14255ed60(void)

void FUN_14255ed60(longlong param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *param_4) {
    return;
  }
  if (((int)param_3 < 0) || ((param_2 == (int *)0x0 && (param_3 != 0)))) {
    *param_4 = 1;
    return;
  }
  if (param_3 == 1) {
    param_3 = (uint)(*param_2 != 0x67);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((param_3 == *(uint *)(lVar4 + 0x48)) &&
     (iVar1 = memcmp(param_2,*(void **)(lVar4 + 0x40),(longlong)(int)(param_3 * 4)), iVar1 == 0)) {
    return;
  }
  if ((param_3 == 1) && (*param_2 == -1)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (lVar4 == lVar3) {
      return;
    }
    lVar4 = FUN_14255e3b0((longlong *)(param_1 + 0x10));
    if (lVar4 != 0) {
      FUN_142612ce0(lVar4,lVar3,param_4);
      uVar2 = FUN_142615670(*(undefined8 *)(param_1 + 8),lVar4,lVar4 + 0x54,0x180);
      *(undefined4 *)(lVar4 + 0x50) = uVar2;
      return;
    }
LAB_14255eebe:
    *param_4 = 7;
  }
  else {
    iVar1 = FUN_142537cd0(lVar4);
    lVar3 = lVar4;
    if (1 < iVar1) {
      lVar3 = thunk_FUN_1424da030(0x358);
      if (lVar3 == 0) goto LAB_14255eebe;
      FUN_142612c50(lVar3,lVar4);
      FUN_142537ca0(lVar4);
      *(longlong *)(param_1 + 0x10) = lVar3;
      FUN_142537c90(lVar3);
    }
    FUN_142613160(lVar3,*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
    uVar2 = FUN_142615670(*(undefined8 *)(param_1 + 8),lVar3,lVar3 + 0x54,0x180);
    *(undefined4 *)(lVar3 + 0x50) = uVar2;
  }
  return;
}



// FUNCTION 14255eed0 Unwind@14255eed0 body=48 status=ok
// SIG undefined Unwind@14255eed0(void)

void Unwind_14255eed0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14255ef00 FUN_14255ef00 body=160 status=ok
// SIG undefined FUN_14255ef00(void)

undefined8 FUN_14255ef00(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_4 < 1) {
    uVar1 = *(ushort *)(param_3 + 8);
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar4 = (int)(short)uVar1 >> 5;
    }
    if ((uVar1 & 0x11) == 0) {
      if ((uVar1 & 2) == 0) {
        param_3 = *(longlong *)(param_3 + 0x18);
      }
      else {
        param_3 = param_3 + 10;
      }
    }
    else {
      param_3 = 0;
    }
    uVar1 = *(ushort *)(param_2 + 8);
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar3 = (int)(short)uVar1 >> 5;
    }
    if ((uVar1 & 0x11) == 0) {
      if ((uVar1 & 2) == 0) {
        param_2 = *(longlong *)(param_2 + 0x18);
      }
      else {
        param_2 = param_2 + 10;
      }
    }
    else {
      param_2 = 0;
    }
    uVar2 = FUN_14255efa0(param_1,param_2,iVar3,param_3,iVar4,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14255efa0 FUN_14255efa0 body=1806 status=ok
// SIG undefined FUN_14255efa0(void)

int FUN_14255efa0(longlong param_1,short *param_2,uint param_3,short *param_4,uint param_5,
                 int *param_6)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  short *psVar9;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  undefined **local_488;
  undefined8 local_480;
  undefined8 *local_478;
  undefined8 local_470;
  short *local_468;
  short *local_460;
  short local_458 [160];
  undefined4 local_318;
  undefined8 local_310;
  undefined4 local_308;
  byte local_304;
  short *local_300;
  short *local_2f8;
  short *local_2f0;
  short *local_2e8;
  short *local_2e0;
  undefined8 local_2d8;
  short *local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined2 local_2b8;
  undefined1 local_280;
  undefined **local_278;
  undefined8 local_270;
  undefined8 *local_268;
  undefined8 local_260;
  short *local_258;
  short *local_250;
  short local_248 [160];
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  byte local_f4;
  short *local_f0;
  short *local_e8;
  short *local_e0;
  short *local_d8;
  short *local_d0;
  undefined8 local_c8;
  short *local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined2 local_a8;
  undefined1 local_70;
  longlong *local_68;
  short *local_60;
  short *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((param_2 == param_4) && (param_3 == param_5)) {
    return 0;
  }
  local_50 = param_1;
  if ((int)param_3 < 0) {
    sVar1 = *param_2;
    if (sVar1 == *param_4) {
      uVar4 = 0;
      do {
        if (sVar1 == 0) {
          return 0;
        }
        uVar8 = uVar4 + 1;
        sVar1 = param_2[uVar4 + 1];
        lVar10 = uVar4 + 1;
        uVar4 = uVar8;
      } while (sVar1 == param_4[lVar10]);
      local_58 = (short *)0x0;
      local_60 = (short *)0x0;
      goto LAB_14255f0c8;
    }
    local_68 = (longlong *)(param_1 + 0x10);
    bVar11 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x18) >> 1 & 1;
    local_60 = (short *)0x0;
    local_58 = (short *)0x0;
    uVar12 = 0;
  }
  else {
    local_60 = param_2 + param_3;
    local_58 = param_4 + (int)param_5;
    if (param_3 != 0) {
      uVar8 = 0;
      do {
        if (param_5 == uVar8) {
          uVar8 = (ulonglong)param_5;
          goto LAB_14255f0c8;
        }
        if (param_2[uVar8] != param_4[uVar8]) goto LAB_14255f0c8;
        uVar8 = uVar8 + 1;
      } while (param_3 != uVar8);
    }
    uVar8 = (ulonglong)param_3;
    if (param_3 == param_5) {
      return 0;
    }
LAB_14255f0c8:
    local_68 = (longlong *)(param_1 + 0x10);
    bVar11 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x18) >> 1 & 1;
    uVar7 = (uint)uVar8;
    uVar12 = 0;
    if ((uVar7 != 0) &&
       (((uVar7 != param_3 &&
         (cVar3 = FUN_142560610(*(undefined8 *)(param_1 + 8),param_2[uVar8 & 0xffffffff],bVar11),
         cVar3 != '\0')) ||
        ((uVar12 = param_5, uVar7 != param_5 &&
         (cVar3 = FUN_142560610(*(undefined8 *)(local_50 + 8),param_4[uVar8 & 0xffffffff],bVar11),
         uVar12 = uVar7, cVar3 != '\0')))))) {
      uVar8 = uVar8 & 0xffffffff;
      psVar9 = param_2 + (uVar7 - 1);
      do {
        if ((int)uVar8 < 2) {
          uVar12 = 0;
          break;
        }
        cVar3 = FUN_142560610(*(undefined8 *)(local_50 + 8),*psVar9,bVar11);
        uVar12 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar12;
        psVar9 = psVar9 + -1;
      } while (cVar3 != '\0');
    }
  }
  lVar10 = *local_68;
  if (((-1 < *(int *)(lVar10 + 0x50)) &&
      ((iVar6 = param_3 - uVar12, iVar6 == 0 || ((ushort)param_2[(int)uVar12] < 0x180)))) &&
     ((iVar13 = param_5 - uVar12, iVar13 == 0 || ((ushort)param_4[(int)uVar12] < 0x180)))) {
    if ((int)param_3 < 0) {
      uVar5 = *(undefined8 *)(*(longlong *)(local_50 + 8) + 0x58);
      iVar13 = -1;
      iVar6 = -1;
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(local_50 + 8) + 0x58);
    }
    iVar6 = FUN_142615980(uVar5,lVar10 + 0x54,*(int *)(lVar10 + 0x50),param_2 + (int)uVar12,iVar6,
                          param_4 + (int)uVar12,iVar13);
    psVar9 = local_60;
    psVar2 = local_58;
    if (iVar6 != -2) goto joined_r0x00014255f576;
    lVar10 = *local_68;
  }
  psVar9 = local_60;
  local_2f8 = param_2 + (int)uVar12;
  local_304 = bVar11;
  local_300 = param_2;
  local_f4 = bVar11;
  local_f0 = param_4;
  local_e0 = local_58;
  if ((*(byte *)(lVar10 + 0x18) & 1) == 0) {
    local_478 = *(undefined8 **)(local_50 + 8);
    local_480 = *local_478;
    local_470 = (ulonglong)local_470._4_4_ << 0x20;
    local_468 = local_458;
    local_460 = (short *)CONCAT35(local_460._5_3_,0x28);
    local_318 = 0;
    local_310 = 0;
    local_308 = 0xffffffff;
    local_488 = icu_64::UTF16CollationIterator::vftable;
    local_2f0 = local_60;
    local_e8 = param_4 + (int)uVar12;
    local_270 = *local_478;
    local_260 = (ulonglong)local_260._4_4_ << 0x20;
    local_258 = local_248;
    local_250 = (short *)CONCAT35(local_250._5_3_,0x28);
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0xffffffff;
    local_278 = icu_64::UTF16CollationIterator::vftable;
    local_268 = local_478;
    iVar6 = FUN_14261c140(&local_488,&local_278);
    thunk_FUN_1426191b0(&local_278);
    thunk_FUN_1426191b0(&local_488);
    psVar2 = local_58;
  }
  else {
    local_478 = *(undefined8 **)(local_50 + 8);
    local_480 = *local_478;
    local_470 = (ulonglong)local_470._4_4_ << 0x20;
    local_468 = local_458;
    local_460 = (short *)CONCAT35(local_460._5_3_,0x28);
    local_318 = 0;
    local_310 = 0;
    local_308 = 0xffffffff;
    local_2f0 = local_60;
    local_488 = icu_64::FCDUTF16CollationIterator::vftable;
    local_2d8 = 0;
    local_2d0 = local_60;
    local_2c8 = local_478[6];
    local_2c0 = &PTR_FUN_149e18960;
    local_2b8 = 2;
    local_280 = 1;
    local_e8 = param_4 + (int)uVar12;
    local_270 = *local_478;
    local_260 = (ulonglong)local_260._4_4_ << 0x20;
    local_258 = local_248;
    local_250 = (short *)CONCAT35(local_250._5_3_,0x28);
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0xffffffff;
    local_278 = icu_64::FCDUTF16CollationIterator::vftable;
    local_c8 = 0;
    local_b8 = local_478[6];
    local_b0 = &PTR_FUN_149e18960;
    local_a8 = 2;
    local_70 = 1;
    local_2e8 = param_2;
    local_2e0 = local_2f8;
    local_268 = local_478;
    local_d8 = param_4;
    local_d0 = local_e8;
    local_c0 = local_58;
    iVar6 = FUN_14261c140(&local_488,&local_278);
    FUN_142618370(&local_278);
    FUN_142618370(&local_488);
    psVar2 = local_58;
  }
joined_r0x00014255f576:
  if (iVar6 != 0) {
    return iVar6;
  }
  if ((int)*(uint *)(*local_68 + 0x18) < 0xf000) {
    return 0;
  }
  if (*param_6 < 1) {
    uVar5 = *(undefined8 *)(*(longlong *)(local_50 + 8) + 0x30);
    local_58 = psVar2;
    if ((*(uint *)(*local_68 + 0x18) & 1) == 0) {
      local_470 = 0xffffffff;
      local_488 = icu_64::_anon_FC038A82::UTF16NFDIterator::vftable;
      local_260 = 0xffffffff;
      local_278 = icu_64::_anon_FC038A82::UTF16NFDIterator::vftable;
      local_468 = param_2 + (int)uVar12;
      local_460 = psVar9;
      local_258 = param_4 + (int)uVar12;
      local_250 = psVar2;
      iVar6 = FUN_1425606f0(uVar5,&local_488,&local_278);
      FUN_1424b70d0(&local_278);
    }
    else {
      FUN_142560970(&local_488,uVar5,param_2 + (int)uVar12,psVar9);
      FUN_142560970(&local_278,uVar5,param_4 + (int)uVar12,psVar2);
      iVar6 = FUN_1425606f0(uVar5,&local_488,&local_278);
      local_278 = icu_64::_anon_FC038A82::FCDUTF16NFDIterator::vftable;
      FUN_140859a90(local_248);
      FUN_1424b70d0(&local_278);
      local_488 = icu_64::_anon_FC038A82::FCDUTF16NFDIterator::vftable;
      FUN_140859a90(local_458);
    }
    FUN_1424b70d0(&local_488);
    return iVar6;
  }
  return 0;
}



// FUNCTION 14255f6b0 Unwind@14255f6b0 body=84 status=ok
// SIG undefined Unwind@14255f6b0(void)

void Unwind_14255f6b0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x250) = icu_64::_anon_FC038A82::FCDUTF16NFDIterator::vftable;
  FUN_140859a90(param_2 + 0x280);
  FUN_1424b70d0(param_2 + 0x250);
  return;
}



// FUNCTION 14255f710 Unwind@14255f710 body=67 status=ok
// SIG undefined Unwind@14255f710(void)

void Unwind_14255f710(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(param_2 + 0x250);
  FUN_1424b70d0(param_2 + 0x40);
  return;
}



// FUNCTION 14255f760 Unwind@14255f760 body=75 status=ok
// SIG undefined Unwind@14255f760(void)

void Unwind_14255f760(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x40) = icu_64::_anon_FC038A82::FCDUTF16NFDIterator::vftable;
  FUN_140859a90(param_2 + 0x70);
  FUN_1424b70d0(param_2 + 0x40);
  return;
}



// FUNCTION 14255f7b0 Unwind@14255f7b0 body=67 status=ok
// SIG undefined Unwind@14255f7b0(void)

void Unwind_14255f7b0(undefined8 param_1,longlong param_2)

{
  FUN_142618370(param_2 + 0x250);
  FUN_142618370(param_2 + 0x40);
  return;
}



// FUNCTION 14255f800 Unwind@14255f800 body=67 status=ok
// SIG undefined Unwind@14255f800(void)

void Unwind_14255f800(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1426191b0(param_2 + 0x250);
  thunk_FUN_1426191b0(param_2 + 0x40);
  return;
}



// FUNCTION 14255f850 FUN_14255f850 body=190 status=ok
// SIG undefined FUN_14255f850(void)

undefined8
FUN_14255f850(undefined8 param_1,longlong param_2,longlong param_3,int param_4,int *param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_4 != 0) && (*param_5 < 1)) {
    if (-1 < param_4) {
      uVar1 = *(ushort *)(param_2 + 8);
      if ((short)uVar1 < 0) {
        iVar5 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar5 = (int)(short)uVar1 >> 5;
      }
      uVar2 = *(ushort *)(param_3 + 8);
      if ((short)uVar2 < 0) {
        iVar4 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar4 = (int)(short)uVar2 >> 5;
      }
      if (param_4 <= iVar5) {
        iVar5 = param_4;
      }
      if (iVar4 < param_4) {
        param_4 = iVar4;
      }
      if (((int)(short)uVar2 & 0x11U) == 0) {
        if ((uVar2 & 2) == 0) {
          param_3 = *(longlong *)(param_3 + 0x18);
        }
        else {
          param_3 = param_3 + 10;
        }
      }
      else {
        param_3 = 0;
      }
      if ((uVar1 & 0x11) == 0) {
        if ((uVar1 & 2) == 0) {
          param_2 = *(longlong *)(param_2 + 0x18);
        }
        else {
          param_2 = param_2 + 10;
        }
      }
      else {
        param_2 = 0;
      }
      uVar3 = FUN_14255efa0(param_1,param_2,iVar5,param_3,param_4,param_5);
      return uVar3;
    }
    *param_5 = 1;
  }
  return 0;
}



// FUNCTION 14255f910 FUN_14255f910 body=153 status=ok
// SIG undefined FUN_14255f910(void)

undefined8
FUN_14255f910(undefined8 param_1,wchar_t *param_2,int param_3,wchar_t *param_4,int param_5,
             int *param_6)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (*param_6 < 1) {
    if (((param_2 != (wchar_t *)0x0) || (param_3 == 0)) &&
       ((param_4 != (wchar_t *)0x0 || (param_5 == 0)))) {
      if (param_3 < 0) {
        if (-1 < param_5) {
          sVar1 = wcslen(param_2);
          param_3 = (int)sVar1;
        }
      }
      else if (param_5 < 0) {
        sVar1 = wcslen(param_4);
        param_5 = (int)sVar1;
      }
      uVar2 = FUN_14255efa0(param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar2;
    }
    *param_6 = 1;
  }
  return 0;
}



// FUNCTION 14255f9b0 FUN_14255f9b0 body=84 status=ok
// SIG undefined FUN_14255f9b0(void)

undefined8 FUN_14255f9b0(undefined8 param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  undefined8 uVar1;
  
  if (*param_4 < 1) {
    if (((*param_2 != 0) || ((int)param_2[1] == 0)) && ((*param_3 != 0 || ((int)param_3[1] == 0))))
    {
      uVar1 = FUN_14255fa10();
      return uVar1;
    }
    *param_4 = 1;
  }
  return 0;
}



// FUNCTION 14255fa10 FUN_14255fa10 body=2545 status=ok
// SIG undefined FUN_14255fa10(void)

int FUN_14255fa10(longlong param_1,char *param_2,uint param_3,char *param_4,uint param_5,
                 int *param_6)

{
  byte *pbVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  byte bVar17;
  undefined **local_470;
  undefined8 local_468;
  undefined8 *local_460;
  undefined8 local_458;
  longlong **local_450;
  longlong local_448;
  longlong *local_440;
  undefined4 local_438;
  undefined1 *local_430;
  undefined4 local_428;
  undefined1 local_424;
  undefined1 local_420 [288];
  undefined4 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  byte local_2ec;
  char *local_2e8;
  uint local_2e0;
  uint local_2dc;
  longlong local_2d8;
  undefined4 local_2d0;
  undefined1 local_2cc;
  longlong **local_2c8;
  undefined **local_2c0;
  undefined8 local_2b8;
  longlong local_2a8;
  undefined **local_2a0;
  undefined2 local_298;
  undefined **local_260;
  undefined8 local_258;
  undefined8 *local_250;
  undefined8 local_248;
  longlong **local_240;
  longlong local_238;
  longlong *local_230;
  undefined4 local_228;
  undefined1 *local_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined1 local_210 [288];
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  byte local_dc;
  char *local_d8;
  uint local_d0;
  uint local_cc;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  longlong **local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  longlong local_98;
  undefined **local_90;
  undefined2 local_88;
  uint local_4c [3];
  
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  if ((param_2 == param_4) && (param_3 == param_5)) {
    return 0;
  }
  local_4c[0] = 0;
  if ((int)param_3 < 0) {
    cVar3 = *param_2;
    if (cVar3 == *param_4) {
      uVar5 = 0;
      do {
        if (cVar3 == '\0') {
          return 0;
        }
        uVar9 = uVar5 + 1;
        local_4c[0] = (uint)uVar9;
        cVar3 = param_2[uVar5 + 1];
        lVar6 = uVar5 + 1;
        uVar5 = uVar9;
      } while (cVar3 == param_4[lVar6]);
LAB_14255fae1:
      uVar4 = (uint)uVar9;
      goto LAB_14255fb17;
    }
    bVar17 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x18) >> 1 & 1;
  }
  else {
    if (param_3 == 0) {
LAB_14255fae6:
      uVar9 = (ulonglong)param_3;
      uVar4 = param_3;
      if (param_3 == param_5) {
        return 0;
      }
    }
    else {
      uVar4 = param_5;
      if (param_5 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          if (param_2[uVar9] != param_4[uVar9]) goto LAB_14255fae1;
          uVar5 = uVar9 + 1;
          local_4c[0] = (uint)uVar5;
          if (param_3 - 1 == (int)uVar9) goto LAB_14255fae6;
          uVar9 = uVar5;
        } while ((longlong)(int)param_5 != uVar5);
        uVar9 = uVar5 & 0xffffffff;
      }
    }
LAB_14255fb17:
    uVar15 = (uint)uVar9;
    if ((0 < (int)uVar4) &&
       (((uVar4 != param_3 && (param_2[uVar4] < -0x40)) ||
        ((uVar4 != param_5 && (param_4[uVar4] < -0x40)))))) {
      uVar5 = uVar9 & 0xffffffff;
      uVar4 = 1;
      if ((int)uVar15 < 1) {
        uVar4 = uVar15;
      }
      do {
        uVar5 = uVar5 - 1;
        uVar15 = uVar4 - 1;
        local_4c[0] = uVar4 - 1;
        if ((int)uVar9 < 2) break;
        uVar15 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar15;
        local_4c[0] = uVar15;
      } while (param_2[uVar5 & 0xffffffff] < -0x40);
    }
    bVar17 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x18) >> 1 & 1;
    if (0 < (int)uVar15) {
      if (uVar15 == param_3) {
LAB_14255fc97:
        if (uVar15 != param_5) {
          uVar5 = (ulonglong)uVar15;
          bVar12 = param_4[uVar5];
          uVar15 = (uint)bVar12;
          uVar4 = (uint)bVar12;
          if ((char)bVar12 < '\0') {
            uVar9 = uVar5 + 1;
            uVar15 = 0xfffd;
            if ((uint)uVar9 != param_5) {
              if (bVar12 < 0xe0) {
                if (0xc1 < bVar12) {
                  uVar4 = uVar4 & 0x1f;
LAB_14255fd2b:
                  if ((byte)((byte)param_4[uVar9 & 0xffffffff] ^ 0x80) < 0x40) {
                    uVar15 = uVar4 << 6 | (byte)param_4[uVar9 & 0xffffffff] ^ 0x80;
                  }
                }
              }
              else if (bVar12 < 0xf0) {
                uVar4 = uVar4 & 0xf;
                if (((byte)(&DAT_14bd49f86)[uVar4] >> ((byte)param_4[uVar9] >> 5) & 1) != 0) {
                  bVar12 = param_4[uVar9] & 0x3f;
LAB_14255fd05:
                  uVar8 = (int)uVar9 + 1;
                  uVar9 = (ulonglong)uVar8;
                  if (uVar8 != param_5) {
                    uVar4 = (uint)bVar12 | uVar4 << 6;
                    goto LAB_14255fd2b;
                  }
                }
              }
              else if (bVar12 < 0xf5) {
                pbVar1 = (byte *)(param_4 + uVar9);
                if (((((uint)(int)(char)(&DAT_14bd49f97)[*pbVar1 >> 4] >> (uVar4 - 0xf0 & 0x1f) & 1)
                      != 0) && (uVar9 = uVar5 + 2, (uint)uVar9 != param_5)) &&
                   (bVar12 = param_4[uVar9] + 0x80, bVar12 < 0x40)) {
                  uVar4 = *pbVar1 & 0x3f | (uVar4 - 0xf0) * 0x40;
                  goto LAB_14255fd05;
                }
              }
            }
          }
          cVar3 = FUN_142560610(*(undefined8 *)(param_1 + 8),uVar15,bVar17);
          if (cVar3 != '\0') goto LAB_14255fdad;
        }
      }
      else {
        uVar5 = (ulonglong)uVar15;
        bVar12 = param_2[uVar5];
        uVar8 = (uint)bVar12;
        uVar4 = (uint)bVar12;
        if ((char)bVar12 < '\0') {
          uVar9 = uVar5 + 1;
          uVar8 = 0xfffd;
          if ((uint)uVar9 != param_3) {
            if (bVar12 < 0xe0) {
              if (0xc1 < bVar12) {
                uVar4 = uVar4 & 0x1f;
LAB_14255fc15:
                if ((byte)((byte)param_2[uVar9 & 0xffffffff] ^ 0x80) < 0x40) {
                  uVar8 = uVar4 << 6 | (byte)param_2[uVar9 & 0xffffffff] ^ 0x80;
                }
              }
            }
            else if (bVar12 < 0xf0) {
              uVar4 = uVar4 & 0xf;
              if (((byte)(&DAT_14bd49f86)[uVar4] >> ((byte)param_2[uVar9] >> 5) & 1) != 0) {
                bVar12 = param_2[uVar9] & 0x3f;
LAB_14255fbf3:
                uVar7 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar7;
                if (uVar7 != param_3) {
                  uVar4 = (uint)bVar12 | uVar4 << 6;
                  goto LAB_14255fc15;
                }
              }
            }
            else if (bVar12 < 0xf5) {
              pbVar1 = (byte *)(param_2 + uVar9);
              if (((((uint)(int)(char)(&DAT_14bd49f97)[*pbVar1 >> 4] >> (uVar4 - 0xf0 & 0x1f) & 1)
                    != 0) && (uVar9 = uVar5 + 2, (uint)uVar9 != param_3)) &&
                 (bVar12 = param_2[uVar9] + 0x80, bVar12 < 0x40)) {
                uVar4 = *pbVar1 & 0x3f | (uVar4 - 0xf0) * 0x40;
                goto LAB_14255fbf3;
              }
            }
          }
        }
        cVar3 = FUN_142560610(*(undefined8 *)(param_1 + 8),uVar8,bVar17);
        if (cVar3 == '\0') goto LAB_14255fc97;
LAB_14255fdad:
        do {
          lVar6 = (longlong)(int)local_4c[0];
          local_4c[0] = local_4c[0] - 1;
          bVar12 = param_2[lVar6 + -1];
          uVar4 = (uint)bVar12;
          if ((char)bVar12 < '\0') {
            uVar4 = FUN_142580f00(param_2,0,local_4c,bVar12,0xfd);
          }
          if ((int)local_4c[0] < 1) break;
          cVar3 = FUN_142560610(*(undefined8 *)(param_1 + 8),uVar4,bVar17);
        } while (cVar3 != '\0');
      }
    }
  }
  plVar16 = (longlong *)(param_1 + 0x10);
  lVar6 = *plVar16;
  if (-1 < *(int *)(lVar6 + 0x50)) {
    lVar13 = (longlong)(int)local_4c[0];
    iVar11 = param_3 - local_4c[0];
    if (((iVar11 == 0) || ((byte)param_2[lVar13] < 0xc6)) &&
       ((iVar14 = param_5 - local_4c[0], iVar14 == 0 || ((byte)param_4[lVar13] < 0xc6)))) {
      if ((int)param_3 < 0) {
        uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58);
        iVar14 = -1;
        iVar11 = -1;
      }
      else {
        uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58);
      }
      iVar11 = FUN_142616ca0(uVar10,lVar6 + 0x54,*(int *)(lVar6 + 0x50),param_2 + lVar13,iVar11,
                             param_4 + lVar13,iVar14);
      if (iVar11 != -2) goto LAB_14256016f;
      lVar6 = *plVar16;
    }
  }
  local_2ec = bVar17;
  local_2e8 = param_2;
  local_2dc = param_3;
  local_dc = bVar17;
  local_d8 = param_4;
  if ((*(byte *)(lVar6 + 0x18) & 1) == 0) {
    local_460 = *(undefined8 **)(param_1 + 8);
    local_468 = *local_460;
    local_458 = (ulonglong)local_458._4_4_ << 0x20;
    local_450 = &local_440;
    local_448 = CONCAT35(local_448._5_3_,0x28);
    local_300 = 0;
    local_2f8 = 0;
    local_2f0 = 0xffffffff;
    local_470 = icu_64::UTF8CollationIterator::vftable;
    local_2e0 = local_4c[0];
    local_258 = *local_460;
    local_248 = (ulonglong)local_248._4_4_ << 0x20;
    local_240 = &local_230;
    local_238 = CONCAT35(local_238._5_3_,0x28);
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0xffffffff;
    local_260 = icu_64::UTF8CollationIterator::vftable;
    local_d0 = local_4c[0];
    local_cc = param_5;
    local_250 = local_460;
    iVar11 = FUN_14261c140(&local_470,&local_260,lVar6,param_6);
    thunk_FUN_1426191b0(&local_260);
    thunk_FUN_1426191b0(&local_470);
  }
  else {
    local_460 = *(undefined8 **)(param_1 + 8);
    local_468 = *local_460;
    local_458 = (ulonglong)local_458._4_4_ << 0x20;
    local_450 = &local_440;
    local_448 = CONCAT35(local_448._5_3_,0x28);
    local_300 = 0;
    local_2f8 = 0;
    local_2f0 = 0xffffffff;
    local_2e0 = local_4c[0];
    local_470 = icu_64::FCDUTF8CollationIterator::vftable;
    local_2d8 = (ulonglong)local_4c[0] << 0x20;
    local_2c8 = (longlong **)local_460[6];
    local_2c0 = &PTR_FUN_149e18960;
    local_2b8 = CONCAT62(local_2b8._2_6_,2);
    local_258 = *local_460;
    local_248 = (ulonglong)local_248._4_4_ << 0x20;
    local_240 = &local_230;
    local_238 = CONCAT35(local_238._5_3_,0x28);
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0xffffffff;
    local_d0 = local_4c[0];
    local_cc = param_5;
    local_260 = icu_64::FCDUTF8CollationIterator::vftable;
    local_c8 = (ulonglong)local_4c[0] << 0x20;
    local_b8 = (longlong **)local_460[6];
    local_b0 = &PTR_FUN_149e18960;
    local_a8 = CONCAT62(local_a8._2_6_,2);
    local_250 = local_460;
    iVar11 = FUN_14261c140(&local_470,&local_260,lVar6,param_6);
    FUN_14261cf00(&local_260);
    FUN_14261cf00(&local_470);
  }
LAB_14256016f:
  if (iVar11 == 0) {
    iVar11 = 0;
    if ((0xefff < (int)*(uint *)(*plVar16 + 0x18)) && (*param_6 < 1)) {
      plVar2 = *(longlong **)(param_1 + 8);
      uVar4 = 0;
      if (0 < (int)param_3) {
        uVar4 = local_4c[0];
      }
      if ((*(uint *)(*plVar16 + 0x18) & 1) == 0) {
        local_458 = 0xffffffff;
        local_470 = icu_64::_anon_FC038A82::UTF8NFDIterator::vftable;
        local_448 = (ulonglong)(param_3 - uVar4) << 0x20;
        local_248 = 0xffffffff;
        local_260 = icu_64::_anon_FC038A82::UTF8NFDIterator::vftable;
        local_238 = (ulonglong)(param_5 - uVar4) << 0x20;
        local_450 = (longlong **)(param_2 + (int)local_4c[0]);
        local_240 = (longlong **)(param_4 + (int)local_4c[0]);
        iVar11 = FUN_1425606f0(plVar2[6],&local_470,&local_260);
        FUN_1424b70d0(&local_260);
      }
      else {
        local_458 = 0xffffffff;
        local_470 = icu_64::_anon_FC038A82::FCDUTF8NFDIterator::vftable;
        local_448 = *plVar2;
        local_438 = 0;
        local_430 = local_420;
        local_428 = 0x28;
        local_424 = 0;
        local_2e0 = 0;
        local_2d8 = 0;
        local_2d0 = 0xffffffff;
        local_2cc = 0;
        local_2c0 = (undefined **)((ulonglong)(param_3 - uVar4) << 0x20);
        local_450 = (longlong **)icu_64::FCDUTF8CollationIterator::vftable;
        local_2b8 = 0;
        local_2a8 = plVar2[6];
        local_2a0 = &PTR_FUN_149e18960;
        local_298 = 2;
        local_248 = 0xffffffff;
        local_260 = icu_64::_anon_FC038A82::FCDUTF8NFDIterator::vftable;
        local_238 = *plVar2;
        local_228 = 0;
        local_220 = local_210;
        local_218 = 0x28;
        local_214 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0xffffffff;
        local_bc = 0;
        local_b0 = (undefined **)((ulonglong)(param_5 - uVar4) << 0x20);
        local_240 = (longlong **)icu_64::FCDUTF8CollationIterator::vftable;
        local_a8 = 0;
        local_98 = plVar2[6];
        local_90 = &PTR_FUN_149e18960;
        local_88 = 2;
        local_440 = plVar2;
        local_2c8 = (longlong **)(param_2 + (int)local_4c[0]);
        local_230 = plVar2;
        local_b8 = (longlong **)(param_4 + (int)local_4c[0]);
        iVar11 = FUN_1425606f0(plVar2[6],&local_470,&local_260);
        local_260 = icu_64::_anon_FC038A82::FCDUTF8NFDIterator::vftable;
        FUN_14261cf00(&local_240);
        FUN_1424b70d0(&local_260);
        local_470 = icu_64::_anon_FC038A82::FCDUTF8NFDIterator::vftable;
        FUN_14261cf00(&local_450);
      }
      FUN_1424b70d0(&local_470);
    }
  }
  return iVar11;
}



// FUNCTION 142560410 Unwind@142560410 body=67 status=ok
// SIG undefined Unwind@142560410(void)

void Unwind_142560410(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1426191b0(param_2 + 0x248);
  thunk_FUN_1426191b0(param_2 + 0x38);
  return;
}



// FUNCTION 142560460 Unwind@142560460 body=67 status=ok
// SIG undefined Unwind@142560460(void)

void Unwind_142560460(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(param_2 + 0x248);
  FUN_1424b70d0(param_2 + 0x38);
  return;
}



// FUNCTION 1425604b0 Unwind@1425604b0 body=106 status=ok
// SIG undefined Unwind@1425604b0(void)

void Unwind_1425604b0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x248) = icu_64::_anon_FC038A82::FCDUTF8NFDIterator::vftable;
  FUN_14261cf00(param_2 + 0x268);
  FUN_1424b70d0(param_2 + 0x248);
  *(undefined ***)(param_2 + 0x38) = icu_64::_anon_FC038A82::FCDUTF8NFDIterator::vftable;
  FUN_14261cf00(param_2 + 0x58);
  FUN_1424b70d0(param_2 + 0x38);
  return;
}



// FUNCTION 142560520 Unwind@142560520 body=67 status=ok
// SIG undefined Unwind@142560520(void)

void Unwind_142560520(undefined8 param_1,longlong param_2)

{
  FUN_14261cf00(param_2 + 0x248);
  FUN_14261cf00(param_2 + 0x38);
  return;
}



// FUNCTION 142560570 FUN_142560570 body=160 status=ok
// SIG undefined FUN_142560570(void)

undefined8
FUN_142560570(undefined8 param_1,char *param_2,uint param_3,char *param_4,int param_5,int *param_6)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  if (*param_6 < 1) {
    sVar2 = (size_t)param_3;
    if (((param_2 != (char *)0x0) || (param_3 == 0)) && ((param_4 != (char *)0x0 || (param_5 == 0)))
       ) {
      if ((int)param_3 < 0) {
        if (-1 < param_5) {
          sVar2 = strlen(param_2);
        }
      }
      else if (param_5 < 0) {
        sVar1 = strlen(param_4);
        param_5 = (int)sVar1;
      }
      uVar3 = FUN_14255fa10(param_1,param_2,sVar2 & 0xffffffff,param_4,param_5,param_6);
      return uVar3;
    }
    *param_6 = 1;
  }
  return 0;
}



// FUNCTION 142560610 FUN_142560610 body=220 status=ok
// SIG undefined FUN_142560610(void)

bool FUN_142560610(longlong *param_1,ulonglong param_2,char param_3)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  cVar2 = FUN_142512880(param_1[10]);
  if (cVar2 != '\0') {
    return true;
  }
  if (param_3 == '\0') {
    return false;
  }
  uVar6 = (uint)param_2;
  if ((int)uVar6 < 0x660) {
    return uVar6 - 0x30 < 10;
  }
  param_1 = (longlong *)*param_1;
  if (uVar6 < 0xd800) {
    uVar1 = *(ushort *)(*param_1 + ((param_2 & 0xffffffff) >> 5) * 2);
  }
  else {
    if (uVar6 < 0x10000) {
      uVar5 = param_2 >> 5 & 0x7ffffff;
      uVar7 = (ulonglong)((int)uVar5 + 0x140);
      if (0xdbff < uVar6) {
        uVar7 = uVar5;
      }
      lVar3 = *param_1;
    }
    else {
      iVar4 = 0x80;
      if (0x10ffff < uVar6) goto LAB_1425606ce;
      if (*(int *)((longlong)param_1 + 0x2c) <= (int)uVar6) {
        iVar4 = (int)param_1[6];
        goto LAB_1425606ce;
      }
      lVar3 = *param_1;
      uVar7 = (ulonglong)((uint)(param_2 >> 5) & 0x3f) +
              (ulonglong)*(ushort *)(lVar3 + 0x1040 + (param_2 >> 0xb & 0x1fffff) * 2);
    }
    uVar1 = *(ushort *)(lVar3 + uVar7 * 2);
  }
  iVar4 = (uVar6 & 0x1f) + (uint)uVar1 * 4;
LAB_1425606ce:
  return (*(uint *)(param_1[2] + (longlong)iVar4 * 4) & 0xcf) == 0xca;
}



// FUNCTION 1425606f0 FUN_1425606f0 body=602 status=ok
// SIG undefined FUN_1425606f0(void)

undefined8 FUN_1425606f0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  
  do {
    uVar5 = *(uint *)(param_2 + 3);
    if ((int)uVar5 < 0) {
LAB_14256074f:
      uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    }
    else {
      if (uVar5 == *(uint *)((longlong)param_2 + 0x1c)) {
        *(undefined4 *)(param_2 + 3) = 0xffffffff;
        goto LAB_14256074f;
      }
      *(uint *)(param_2 + 3) = uVar5 + 1;
      uVar1 = *(ushort *)(param_2[1] + (ulonglong)uVar5 * 2);
      uVar2 = (uint)uVar1;
      if ((uVar1 & 0xfc00) == 0xd800) {
        *(uint *)(param_2 + 3) = uVar5 + 2;
        uVar2 = (uint)uVar1 * 0x400 + (uint)*(ushort *)(param_2[1] + 2 + (ulonglong)uVar5 * 2) +
                0xfca02400;
      }
    }
    uVar5 = *(uint *)(param_3 + 3);
    if ((int)uVar5 < 0) {
LAB_142560771:
      uVar3 = (**(code **)(*param_3 + 0x10))(param_3);
    }
    else {
      if (uVar5 == *(uint *)((longlong)param_3 + 0x1c)) {
        *(undefined4 *)(param_3 + 3) = 0xffffffff;
        goto LAB_142560771;
      }
      *(uint *)(param_3 + 3) = uVar5 + 1;
      uVar1 = *(ushort *)(param_3[1] + (ulonglong)uVar5 * 2);
      uVar3 = (uint)uVar1;
      if ((uVar1 & 0xfc00) == 0xd800) {
        *(uint *)(param_3 + 3) = uVar5 + 2;
        uVar3 = (uint)uVar1 * 0x400 + (uint)*(ushort *)(param_3[1] + 2 + (ulonglong)uVar5 * 2) +
                0xfca02400;
      }
    }
    if (uVar2 == uVar3) {
      if ((int)uVar2 < 0) {
        return 0;
      }
    }
    else {
      uVar5 = 0xfffffffe;
      if (((-1 < (int)uVar2) && (uVar5 = 0xffffffff, uVar2 != 0xfffe)) &&
         (uVar5 = uVar2, (int)param_2[3] < 0)) {
        puVar4 = (ushort *)
                 FUN_1425d1f70(param_1,uVar2,param_2 + 2,(uint *)((longlong)param_2 + 0x1c));
        param_2[1] = (longlong)puVar4;
        if (puVar4 != (ushort *)0x0) {
          *(undefined4 *)(param_2 + 3) = 1;
          uVar1 = *puVar4;
          uVar5 = (uint)uVar1;
          if ((uVar1 & 0xfc00) == 0xd800) {
            *(undefined4 *)(param_2 + 3) = 2;
            uVar5 = (uint)uVar1 * 0x400 + (uint)puVar4[1] + 0xfca02400;
          }
        }
      }
      uVar2 = 0xfffffffe;
      if (((-1 < (int)uVar3) && (uVar2 = 0xffffffff, uVar3 != 0xfffe)) &&
         (uVar2 = uVar3, (int)param_3[3] < 0)) {
        puVar4 = (ushort *)
                 FUN_1425d1f70(param_1,uVar3,param_3 + 2,(uint *)((longlong)param_3 + 0x1c));
        param_3[1] = (longlong)puVar4;
        if (puVar4 != (ushort *)0x0) {
          *(undefined4 *)(param_3 + 3) = 1;
          uVar1 = *puVar4;
          uVar2 = (uint)uVar1;
          if ((uVar1 & 0xfc00) == 0xd800) {
            *(undefined4 *)(param_3 + 3) = 2;
            uVar2 = (uint)uVar1 * 0x400 + (uint)puVar4[1] + 0xfca02400;
          }
        }
      }
      if ((int)uVar5 < (int)uVar2) {
        return 0xffffffff;
      }
      if ((int)uVar2 < (int)uVar5) {
        return 1;
      }
    }
  } while( true );
}



// FUNCTION 142560970 FUN_142560970 body=441 status=ok
// SIG undefined FUN_142560970(void)

void FUN_142560970(undefined8 *param_1,undefined8 param_2,longlong param_3,short *param_4)

{
  ushort uVar1;
  char cVar2;
  short *psVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined8 local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 local_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined8 *local_48;
  undefined8 *local_40;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = icu_64::_anon_FC038A82::FCDUTF16NFDIterator::vftable;
  local_48 = param_1 + 6;
  param_1[6] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 7) = 2;
  local_34[0] = 0;
  piVar6 = local_34;
  local_40 = param_1;
  psVar3 = (short *)FUN_1425d5de0(param_2,param_3,param_4,0,piVar6);
  if (local_34[0] < 1) {
    if ((psVar3 == param_4) || ((param_4 == (short *)0x0 && (*psVar3 == 0)))) {
      local_40[4] = param_3;
    }
    else {
      FUN_1424a8e40(local_48);
      if (*(short *)(local_40 + 7) < 0) {
        iVar5 = *(int *)((longlong)local_40 + 0x3c);
      }
      else {
        iVar5 = (int)*(short *)(local_40 + 7) >> 5;
      }
      FUN_1424a9130(local_48,0,iVar5,param_3,(ulonglong)piVar6 & 0xffffffff00000000,
                    (int)((ulonglong)((longlong)psVar3 - param_3) >> 1));
      local_80 = local_48;
      local_78 = 0;
      uStack_70 = 0;
      uStack_6b = 0;
      local_68 = 0;
      uStack_63 = 0;
      uStack_60 = 0;
      if (*(short *)(local_40 + 7) < 0) {
        iVar5 = *(int *)((longlong)local_40 + 0x3c);
      }
      else {
        iVar5 = (int)*(short *)(local_40 + 7) >> 5;
      }
      local_88 = param_2;
      cVar2 = FUN_1425cfe40(&local_88,iVar5,local_34);
      if (cVar2 != '\0') {
        FUN_1425d5de0(param_2,psVar3,param_4,&local_88,local_34);
      }
      if (local_78 != 0) {
        FUN_1408550d0(local_80,(ulonglong)(CONCAT35(uStack_63,local_68) - local_78) >> 1);
      }
      if (0 < local_34[0]) {
        return;
      }
      uVar1 = *(ushort *)(local_40 + 7);
      if ((uVar1 & 0x11) == 0) {
        if ((uVar1 & 2) == 0) {
          lVar4 = local_40[9];
        }
        else {
          lVar4 = (longlong)local_40 + 0x3a;
        }
      }
      else {
        lVar4 = 0;
      }
      local_40[4] = lVar4;
      if ((short)uVar1 < 0) {
        iVar5 = *(int *)((longlong)local_40 + 0x3c);
      }
      else {
        iVar5 = (int)(short)uVar1 >> 5;
      }
      psVar3 = (short *)(lVar4 + (longlong)iVar5 * 2);
    }
    local_40[5] = psVar3;
  }
  return;
}



// FUNCTION 142560b30 Unwind@142560b30 body=52 status=ok
// SIG undefined Unwind@142560b30(void)

void Unwind_142560b30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x70));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 142560b70 Unwind@142560b70 body=27 status=ok
// SIG undefined Unwind@142560b70(void)

void Unwind_142560b70(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142560b90 Unwind@142560b90 body=43 status=ok
// SIG undefined Unwind@142560b90(void)

void Unwind_142560b90(undefined8 param_1,longlong param_2)

{
  FUN_142517840(param_2 + 0x30);
  return;
}



// FUNCTION 142560bc0 FUN_142560bc0 body=1578 status=ok
// SIG undefined FUN_142560bc0(void)

int FUN_142560bc0(longlong param_1,undefined8 **param_2,undefined8 **param_3,int *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  longlong lVar10;
  undefined **local_468;
  undefined8 local_460;
  undefined8 *local_458;
  undefined8 local_450;
  undefined8 **local_448;
  undefined8 local_440;
  undefined8 *local_438;
  undefined4 local_430;
  undefined1 *local_428;
  undefined4 local_420;
  undefined1 local_41c;
  undefined1 local_418 [288];
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  byte local_2e4;
  undefined8 **local_2e0;
  undefined4 local_2d8;
  int local_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 **local_2c0;
  undefined4 local_2b8;
  int local_2b4;
  undefined8 local_2a8;
  undefined **local_2a0;
  undefined2 local_298;
  undefined **local_260;
  undefined8 local_258;
  undefined8 *local_250;
  undefined8 local_248;
  undefined8 **local_240;
  undefined8 local_238;
  undefined8 *local_230;
  undefined4 local_228;
  undefined1 *local_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined1 local_210 [288];
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  byte local_dc;
  undefined8 **local_d8;
  undefined4 local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 **local_b8;
  undefined4 local_b0;
  int local_ac;
  undefined8 local_a0;
  undefined **local_98;
  undefined2 local_90;
  int *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar5 = 0;
  if ((param_2 != param_3) && (*param_4 < 1)) {
    bVar9 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x18);
    local_58 = param_4;
    local_50 = param_1;
    iVar5 = (*(code *)param_2[9])(param_2);
    iVar6 = (*(code *)param_3[9])(param_3);
    if (iVar5 == iVar6) {
      iVar8 = 0;
      do {
        if (iVar5 < 0) {
          return 0;
        }
        iVar8 = iVar8 + 1;
        iVar5 = (*(code *)param_2[9])(param_2);
        iVar6 = (*(code *)param_3[9])(param_3);
      } while (iVar5 == iVar6);
    }
    else {
      iVar8 = 0;
    }
    if (-1 < iVar5) {
      (*(code *)param_2[10])(param_2);
    }
    if (-1 < iVar6) {
      (*(code *)param_3[10])(param_3);
    }
    bVar9 = bVar9 >> 1 & 1;
    if (iVar8 == 0) {
      iVar8 = 0;
      lVar10 = local_50;
    }
    else if ((iVar5 < 0) ||
            (cVar4 = FUN_142560610(*(undefined8 *)(local_50 + 8),iVar5,bVar9), lVar10 = local_50,
            cVar4 == '\0')) {
      lVar10 = local_50;
      if (-1 < iVar6) {
        cVar4 = FUN_142560610(*(undefined8 *)(local_50 + 8),iVar6,bVar9);
        lVar10 = local_50;
        goto joined_r0x000142560ccb;
      }
    }
    else {
      do {
        uVar7 = (*(code *)param_2[10])(param_2);
        (*(code *)param_3[10])(param_3);
        if (iVar8 < 2) {
          iVar8 = 0;
          break;
        }
        iVar8 = iVar8 + -1;
        cVar4 = FUN_142560610(*(undefined8 *)(lVar10 + 8),uVar7,bVar9);
joined_r0x000142560ccb:
      } while (cVar4 != '\0');
    }
    piVar3 = local_58;
    lVar1 = *(longlong *)(lVar10 + 0x10);
    local_2e4 = bVar9;
    local_2e0 = param_2;
    local_dc = bVar9;
    local_d8 = param_3;
    if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
      local_458 = *(undefined8 **)(lVar10 + 8);
      local_460 = *local_458;
      local_450 = (ulonglong)local_450._4_4_ << 0x20;
      local_448 = &local_438;
      local_440 = CONCAT35(local_440._5_3_,0x28);
      local_2f8 = 0;
      local_2f0 = 0;
      local_2e8 = 0xffffffff;
      local_468 = icu_64::UIterCollationIterator::vftable;
      local_258 = *local_458;
      local_248 = (ulonglong)local_248._4_4_ << 0x20;
      local_240 = &local_230;
      local_238 = CONCAT35(local_238._5_3_,0x28);
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0xffffffff;
      local_260 = icu_64::UIterCollationIterator::vftable;
      local_250 = local_458;
      iVar5 = FUN_14261c140(&local_468,&local_260,lVar1,local_58);
      thunk_FUN_1426191b0(&local_260);
      thunk_FUN_1426191b0(&local_468);
    }
    else {
      local_458 = *(undefined8 **)(lVar10 + 8);
      local_460 = *local_458;
      local_450 = (ulonglong)local_450._4_4_ << 0x20;
      local_448 = &local_438;
      local_440 = CONCAT35(local_440._5_3_,0x28);
      local_2f8 = 0;
      local_2f0 = 0;
      local_2e8 = 0xffffffff;
      local_468 = icu_64::FCDUIterCollationIterator::vftable;
      local_2d8 = 0;
      local_2c8 = local_458[6];
      local_2c0 = (undefined8 **)&PTR_FUN_149e18960;
      local_2b8 = CONCAT22(local_2b8._2_2_,2);
      local_258 = *local_458;
      local_248 = (ulonglong)local_248._4_4_ << 0x20;
      local_240 = &local_230;
      local_238 = CONCAT35(local_238._5_3_,0x28);
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0xffffffff;
      local_260 = icu_64::FCDUIterCollationIterator::vftable;
      local_d0 = 0;
      local_c0 = local_458[6];
      local_b8 = (undefined8 **)&PTR_FUN_149e18960;
      local_b0 = CONCAT22(local_b0._2_2_,2);
      local_2d4 = iVar8;
      local_250 = local_458;
      local_cc = iVar8;
      iVar5 = FUN_14261c140(&local_468,&local_260,lVar1,local_58);
      FUN_14261e820(&local_260);
      FUN_14261e820(&local_468);
    }
    if (((iVar5 == 0) && (iVar5 = 0, 0xefff < *(int *)(*(longlong *)(lVar10 + 0x10) + 0x18))) &&
       (*piVar3 < 1)) {
      (*(code *)param_2[5])(param_2,iVar8,3);
      (*(code *)param_3[5])(param_3,iVar8,3);
      puVar2 = *(undefined8 **)(lVar10 + 8);
      if ((*(byte *)(*(longlong *)(lVar10 + 0x10) + 0x18) & 1) == 0) {
        local_450 = 0xffffffff;
        local_468 = icu_64::_anon_FC038A82::UIterNFDIterator::vftable;
        local_248 = 0xffffffff;
        local_260 = icu_64::_anon_FC038A82::UIterNFDIterator::vftable;
        local_448 = param_2;
        local_240 = param_3;
        iVar5 = FUN_1425606f0(puVar2[6],&local_468,&local_260);
        FUN_1424b70d0(&local_260);
      }
      else {
        local_450 = 0xffffffff;
        local_468 = icu_64::_anon_FC038A82::FCDUIterNFDIterator::vftable;
        local_440 = *puVar2;
        local_430 = 0;
        local_428 = local_418;
        local_420 = 0x28;
        local_41c = 0;
        local_2d8 = 0;
        local_2d0 = 0;
        local_2c8 = CONCAT35(local_2c8._5_3_,0xffffffff);
        local_448 = (undefined8 **)icu_64::FCDUIterCollationIterator::vftable;
        local_2b8 = 0;
        local_2a8 = puVar2[6];
        local_2a0 = &PTR_FUN_149e18960;
        local_298 = 2;
        local_248 = 0xffffffff;
        local_260 = icu_64::_anon_FC038A82::FCDUIterNFDIterator::vftable;
        local_238 = *puVar2;
        local_228 = 0;
        local_220 = local_210;
        local_218 = 0x28;
        local_214 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = CONCAT35(local_c0._5_3_,0xffffffff);
        local_240 = (undefined8 **)icu_64::FCDUIterCollationIterator::vftable;
        local_b0 = 0;
        local_a0 = puVar2[6];
        local_98 = &PTR_FUN_149e18960;
        local_90 = 2;
        local_438 = puVar2;
        local_2c0 = param_2;
        local_2b4 = iVar8;
        local_230 = puVar2;
        local_b8 = param_3;
        local_ac = iVar8;
        iVar5 = FUN_1425606f0(puVar2[6],&local_468,&local_260);
        local_260 = icu_64::_anon_FC038A82::FCDUIterNFDIterator::vftable;
        FUN_14261e820(&local_240);
        FUN_1424b70d0(&local_260);
        local_468 = icu_64::_anon_FC038A82::FCDUIterNFDIterator::vftable;
        FUN_14261e820(&local_448);
      }
      FUN_1424b70d0(&local_468);
    }
  }
  return iVar5;
}



// FUNCTION 1425611f0 Unwind@1425611f0 body=106 status=ok
// SIG undefined Unwind@1425611f0(void)

void Unwind_1425611f0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x228) = icu_64::_anon_FC038A82::FCDUIterNFDIterator::vftable;
  FUN_14261e820(param_2 + 0x248);
  FUN_1424b70d0(param_2 + 0x228);
  *(undefined ***)(param_2 + 0x20) = icu_64::_anon_FC038A82::FCDUIterNFDIterator::vftable;
  FUN_14261e820(param_2 + 0x40);
  FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 142561260 Unwind@142561260 body=67 status=ok
// SIG undefined Unwind@142561260(void)

void Unwind_142561260(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(param_2 + 0x228);
  FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 1425612b0 Unwind@1425612b0 body=67 status=ok
// SIG undefined Unwind@1425612b0(void)

void Unwind_1425612b0(undefined8 param_1,longlong param_2)

{
  FUN_14261e820(param_2 + 0x228);
  FUN_14261e820(param_2 + 0x20);
  return;
}



// FUNCTION 142561300 Unwind@142561300 body=67 status=ok
// SIG undefined Unwind@142561300(void)

void Unwind_142561300(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1426191b0(param_2 + 0x228);
  thunk_FUN_1426191b0(param_2 + 0x20);
  return;
}



// FUNCTION 142561350 FUN_142561350 body=82 status=ok
// SIG undefined FUN_142561350(void)

void FUN_142561350(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x18);
    }
    else {
      lVar3 = param_2 + 10;
    }
  }
  else {
    lVar3 = 0;
  }
  iVar2 = (int)(short)uVar1 >> 5;
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  (**(code **)(*param_1 + 0x68))(param_1,lVar3,iVar2,param_3,param_4);
  return;
}



// FUNCTION 1425613b0 FUN_1425613b0 body=235 status=ok
// SIG undefined FUN_1425613b0(void)

longlong FUN_1425613b0(undefined8 param_1,longlong param_2,int param_3,longlong param_4,int *param_5
                      )

{
  longlong lVar1;
  undefined **local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_4c;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    if ((param_2 != 0) || (param_3 == 0)) {
      FUN_142612c30(param_4);
      if (*(int *)(param_4 + 8) < 0) {
        local_50 = *(undefined4 *)(param_4 + 0x18);
        local_58 = *(longlong *)(param_4 + 0x10);
      }
      else {
        local_58 = param_4 + 0x10;
        local_50 = 0x20;
      }
      local_4c = 0;
      local_60 = icu_64::CollationKeyByteSink::vftable;
      local_40 = param_4;
      FUN_1425614d0(param_1,param_2,param_3,&local_60,param_5);
      if (*param_5 < 1) {
        if (*(int *)(param_4 + 0xc) == 2) {
          *param_5 = 7;
        }
        else {
          FUN_142612c10(param_4,local_4c & 0xffffffff);
        }
      }
      else {
        FUN_142612bf0(param_4);
      }
      thunk_FUN_14257c350(&local_60);
      return param_4;
    }
    *param_5 = 1;
  }
  lVar1 = FUN_142612bf0(param_4);
  return lVar1;
}



// FUNCTION 1425614a0 Unwind@1425614a0 body=44 status=ok
// SIG undefined Unwind@1425614a0(void)

void Unwind_1425614a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0x28);
  return;
}



// FUNCTION 1425614d0 FUN_1425614d0 body=616 status=ok
// SIG undefined FUN_1425614d0(void)

void FUN_1425614d0(longlong param_1,longlong param_2,uint param_3,longlong *param_4,int *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined **local_250;
  undefined8 local_248;
  undefined8 *local_240;
  undefined4 local_238;
  undefined1 *local_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined1 local_220 [320];
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined2 local_80;
  undefined1 local_48;
  undefined **local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    lVar2 = 0;
    if (-1 < (int)param_3) {
      lVar2 = param_2 + (ulonglong)param_3 * 2;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    local_cc = *(byte *)(lVar1 + 0x18) >> 1 & 1;
    local_40 = icu_64::CollationKeys::LevelCallback::vftable;
    local_c8 = param_2;
    local_c0 = param_2;
    local_b8 = lVar2;
    if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
      local_240 = *(undefined8 **)(param_1 + 8);
      local_248 = *local_240;
      local_238 = 0;
      local_230 = local_220;
      local_228 = 0x28;
      local_224 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0xffffffff;
      local_250 = icu_64::UTF16CollationIterator::vftable;
      FUN_142610640(&local_250,local_240[9],lVar1,param_4,1,&local_40,1,param_5);
      thunk_FUN_1426191b0(&local_250);
    }
    else {
      local_240 = *(undefined8 **)(param_1 + 8);
      local_248 = *local_240;
      local_238 = 0;
      local_230 = local_220;
      local_228 = 0x28;
      local_224 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0xffffffff;
      local_250 = icu_64::FCDUTF16CollationIterator::vftable;
      local_a0 = 0;
      local_90 = local_240[6];
      local_88 = &PTR_FUN_149e18960;
      local_80 = 2;
      local_48 = 1;
      local_b0 = param_2;
      local_a8 = param_2;
      local_98 = lVar2;
      FUN_142610640(&local_250,local_240[9],lVar1,param_4,1,&local_40,1,param_5);
      FUN_142618370(&local_250);
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0xfffff000) == 0xf000) {
      FUN_142561900(param_1,param_2,lVar2,param_4,param_5);
    }
    (**(code **)(*param_4 + 8))(param_4,&DAT_1499e1b10,1);
    FUN_142610620(&local_40);
  }
  return;
}



// FUNCTION 142561740 Unwind@142561740 body=47 status=ok
// SIG undefined Unwind@142561740(void)

void Unwind_142561740(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1426191b0(param_2 + 0x48);
  return;
}



// FUNCTION 142561770 Unwind@142561770 body=50 status=ok
// SIG undefined Unwind@142561770(void)

void Unwind_142561770(undefined8 param_1,longlong param_2)

{
  FUN_142610620(param_2 + 600);
  return;
}



// FUNCTION 1425617b0 Unwind@1425617b0 body=47 status=ok
// SIG undefined Unwind@1425617b0(void)

void Unwind_1425617b0(undefined8 param_1,longlong param_2)

{
  FUN_142618370(param_2 + 0x48);
  return;
}



// FUNCTION 1425617e0 FUN_1425617e0 body=85 status=ok
// SIG undefined FUN_1425617e0(void)

void FUN_1425617e0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x18);
    }
    else {
      lVar3 = param_2 + 10;
    }
  }
  else {
    lVar3 = 0;
  }
  iVar2 = (int)(short)uVar1 >> 5;
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  (**(code **)(*param_1 + 0x100))(param_1,lVar3,iVar2,param_3,param_4);
  return;
}



// FUNCTION 142561840 FUN_142561840 body=153 status=ok
// SIG undefined FUN_142561840(void)

ulonglong FUN_142561840(undefined8 param_1,longlong param_2,int param_3,undefined1 *param_4,
                       int param_5)

{
  ulonglong uVar1;
  undefined **local_40;
  undefined1 *local_38;
  int local_30;
  ulonglong local_2c;
  int local_20;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = 0;
  if (((param_2 != 0 || param_3 == 0) && (-1 < param_5)) &&
     ((param_4 != (undefined1 *)0x0 || (param_5 == 0)))) {
    uVar1 = 0;
    local_19 = 0;
    if (param_4 == (undefined1 *)0x0) {
      param_5 = 0;
      param_4 = &local_19;
    }
    local_2c = 0;
    local_40 = icu_64::_anon_FC038A82::FixedSortKeyByteSink::vftable;
    local_20 = 0;
    local_38 = param_4;
    local_30 = param_5;
    FUN_1425614d0();
    if (local_20 < 1) {
      uVar1 = local_2c & 0xffffffff;
    }
    thunk_FUN_14257c350(&local_40);
  }
  return uVar1;
}



// FUNCTION 1425618e0 Unwind@1425618e0 body=32 status=ok
// SIG undefined Unwind@1425618e0(void)

void Unwind_1425618e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0x28);
  return;
}



// FUNCTION 142561900 FUN_142561900 body=353 status=ok
// SIG undefined FUN_142561900(void)

void FUN_142561900(longlong param_1,longlong param_2,short *param_3,longlong *param_4,int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined **local_80;
  ushort local_78;
  undefined1 local_76 [2];
  int local_74;
  undefined1 *local_68;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  piVar6 = param_5;
  psVar4 = (short *)FUN_1425d1000(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),param_2,param_3
                                  ,0,param_5);
  uVar7 = (undefined4)((ulonglong)piVar6 >> 0x20);
  if (0 < *param_5) {
    return;
  }
  if (0 < (int)param_4[3]) {
    *(int *)(param_4 + 3) = (int)param_4[3] + -1;
    goto LAB_142561990;
  }
  iVar5 = *(int *)((longlong)param_4 + 0x14);
  if (iVar5 < (int)param_4[2]) {
LAB_142561982:
    *(undefined1 *)(param_4[1] + (longlong)iVar5) = 1;
  }
  else {
    cVar1 = (**(code **)(*param_4 + 0x28))(param_4,1);
    if (cVar1 != '\0') {
      iVar5 = *(int *)((longlong)param_4 + 0x14);
      goto LAB_142561982;
    }
  }
  *(int *)((longlong)param_4 + 0x14) = *(int *)((longlong)param_4 + 0x14) + 1;
LAB_142561990:
  if ((longlong)psVar4 - param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14261f740(0,param_2,(ulonglong)((longlong)psVar4 - param_2) >> 1,param_4);
  }
  if (param_3 == (short *)0x0) {
    uVar3 = 0xffffffff;
    if (*psVar4 == 0) {
      return;
    }
  }
  else {
    if (psVar4 == param_3) {
      return;
    }
    uVar3 = (undefined4)((ulonglong)((longlong)param_3 - (longlong)psVar4) >> 1);
  }
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  FUN_1425d0ef0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),psVar4,param_3,&local_80,
                CONCAT44(uVar7,uVar3),param_5);
  if (-1 < (short)local_78) {
    local_74 = (int)(short)local_78 >> 5;
  }
  if ((local_78 & 0x11) == 0) {
    if ((local_78 & 2) != 0) {
      local_68 = local_76;
    }
  }
  else {
    local_68 = (undefined1 *)0x0;
  }
  FUN_14261f740(uVar2,local_68,local_74,param_4);
  FUN_140859a90(&local_80);
  return;
}



// FUNCTION 142561a70 Unwind@142561a70 body=51 status=ok
// SIG undefined Unwind@142561a70(void)

void Unwind_142561a70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 142561ab0 FUN_142561ab0 body=1074 status=ok
// SIG undefined FUN_142561ab0(void)

uint FUN_142561ab0(longlong param_1,longlong param_2,int *param_3,longlong param_4,uint param_5,
                  int *param_6)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 in_stack_fffffffffffffd68;
  undefined4 uVar4;
  undefined **local_270;
  undefined8 local_268;
  ulonglong *local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined1 *local_250;
  undefined4 local_248;
  undefined1 local_244;
  undefined1 local_240 [320];
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  byte local_ec;
  longlong local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  undefined **local_c8;
  undefined2 local_c0;
  int local_84;
  undefined **local_80;
  undefined ***local_78;
  undefined4 local_70;
  int iStack_6c;
  undefined **local_68;
  longlong local_60;
  uint local_58;
  uint local_54;
  int local_50;
  undefined8 local_48;
  
  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_6) {
    return 0;
  }
  if ((((param_2 == 0) || (param_3 == (int *)0x0)) || ((int)param_5 < 0)) ||
     ((param_4 == 0 && (param_5 != 0)))) {
    *param_6 = 1;
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  local_58 = param_5;
  local_54 = 0;
  local_68 = icu_64::_anon_FC038A82::FixedSortKeyByteSink::vftable;
  local_50 = param_3[1];
  local_60 = param_4;
  (**(code **)(param_2 + 0x28))(param_2,0,0);
  iVar1 = *param_3;
  if (iVar1 < 6) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_ec = *(byte *)(lVar2 + 0x18) >> 1 & 1;
    local_80 = icu_64::_anon_FC038A82::PartLevelCallback::vftable;
    local_78 = &local_68;
    local_70 = 1;
    iStack_6c = (local_58 + local_50) - local_54;
    local_e8 = param_2;
    if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
      local_260 = *(ulonglong **)(param_1 + 8);
      local_268 = *local_260;
      local_258 = 0;
      local_250 = local_240;
      local_248 = 0x28;
      local_244 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0xffffffff;
      local_270 = icu_64::UIterCollationIterator::vftable;
      FUN_142610640(&local_270,local_260[9],lVar2,&local_68,CONCAT44(uVar4,iVar1),&local_80,0,
                    param_6);
      thunk_FUN_1426191b0(&local_270);
    }
    else {
      local_260 = *(ulonglong **)(param_1 + 8);
      local_268 = *local_260;
      local_258 = 0;
      local_250 = local_240;
      local_248 = 0x28;
      local_244 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0xffffffff;
      local_270 = icu_64::FCDUIterCollationIterator::vftable;
      local_e0 = 0;
      local_d0 = local_260[6];
      local_c8 = &PTR_FUN_149e18960;
      local_c0 = 2;
      FUN_142610640(&local_270,local_260[9],lVar2,&local_68,CONCAT44(uVar4,iVar1),&local_80,0,
                    param_6);
      FUN_14261e820(&local_270);
    }
    uVar3 = 0;
    if (*param_6 < 1) {
      if ((int)local_54 <= (int)param_5) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0xfffff000) == 0xf000) {
          iVar1 = 6;
          (**(code **)(param_2 + 0x28))(param_2,0,0);
        }
        FUN_142610620(&local_80);
        goto LAB_142561da3;
      }
      *(ulonglong *)param_3 = CONCAT44(iStack_6c,local_70);
      uVar3 = param_5;
    }
    FUN_142610620(&local_80);
    goto LAB_142561ed1;
  }
LAB_142561da3:
  if (iVar1 == 6) {
    local_84 = (local_58 + local_50) - local_54;
    local_270 = &PTR_FUN_149e18960;
    local_268 = CONCAT62(local_268._2_6_,2);
    while (iVar1 = (**(code **)(param_2 + 0x48))(param_2), -1 < iVar1) {
      local_80 = (undefined **)CONCAT62(local_80._2_6_,(short)iVar1);
      FUN_1424a6cf0(&local_270,&local_80,0,1);
    }
    if ((local_268 & 0x11) == 0) {
      if ((local_268 & 2) == 0) {
        lVar2 = CONCAT44(uStack_254,local_258);
      }
      else {
        lVar2 = (longlong)&local_268 + 2;
      }
    }
    else {
      lVar2 = 0;
    }
    if ((short)local_268 < 0) {
      iVar1 = local_268._4_4_;
    }
    else {
      iVar1 = (int)(short)local_268 >> 5;
    }
    FUN_142561900(param_1,lVar2,lVar2 + (longlong)iVar1 * 2,&local_68,param_6);
    uVar3 = 0;
    if (*param_6 < 1) {
      if ((int)local_54 <= (int)param_5) {
        FUN_140859a90(&local_270);
        goto LAB_142561e9c;
      }
      *param_3 = 6;
      param_3[1] = local_84;
      uVar3 = param_5;
    }
    FUN_140859a90(&local_270);
  }
  else {
LAB_142561e9c:
    uVar3 = local_54;
    param_3[0] = 7;
    param_3[1] = 0;
    if ((int)local_54 < (int)param_5) {
      memset((void *)(param_4 + (int)local_54),0,(ulonglong)(~local_54 + param_5) + 1);
    }
  }
LAB_142561ed1:
  thunk_FUN_14257c350(&local_68);
  return uVar3;
}



// FUNCTION 142561ef0 Unwind@142561ef0 body=55 status=ok
// SIG undefined Unwind@142561ef0(void)

void Unwind_142561ef0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1426191b0(param_2 + 0x48);
  return;
}



// FUNCTION 142561f30 Unwind@142561f30 body=55 status=ok
// SIG undefined Unwind@142561f30(void)

void Unwind_142561f30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x48);
  return;
}



// FUNCTION 142561f70 Unwind@142561f70 body=55 status=ok
// SIG undefined Unwind@142561f70(void)

void Unwind_142561f70(undefined8 param_1,longlong param_2)

{
  FUN_14261e820(param_2 + 0x48);
  return;
}



// FUNCTION 142561fb0 Unwind@142561fb0 body=58 status=ok
// SIG undefined Unwind@142561fb0(void)

void Unwind_142561fb0(undefined8 param_1,longlong param_2)

{
  FUN_142610620(param_2 + 0x238);
  return;
}



// FUNCTION 142561ff0 Unwind@142561ff0 body=58 status=ok
// SIG undefined Unwind@142561ff0(void)

void Unwind_142561ff0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14257c350(param_2 + 0x250);
  return;
}



// FUNCTION 142562030 FUN_142562030 body=1894 status=ok
// SIG undefined FUN_142562030(void)

undefined4 FUN_142562030(longlong *param_1,char *param_2,void *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_198 [160];
  undefined1 local_f8 [112];
  void *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  int local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return 0;
  }
  if (param_3 == (void *)0x0) {
    if (param_4 != 0) goto LAB_142562096;
  }
  else if (param_4 < 0) {
LAB_142562096:
    *param_5 = 1;
    return 0;
  }
  if (param_2 == (char *)0x0) {
    if ((char)param_1[0x20] == '\0') {
      param_2 = "root";
      if (*(char *)param_1[10] != '\0') {
        param_2 = (char *)param_1[10];
      }
    }
    else {
      param_2 = (char *)0x0;
    }
  }
  iVar2 = FUN_1424e3dd0(local_198,0x9d,"collation",param_2,0,param_5);
  uVar4 = 0;
  if (*param_5 < 1) {
    local_198[iVar2] = 0;
    local_88 = (void *)((longlong)&local_7c + 1);
    local_80 = 0x28;
    local_7c = 0;
    local_50 = 0;
    if (((*(byte *)(param_1 + 0x21) & 2) != 0) &&
       (iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,1,param_5), *param_5 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x41,param_5);
      FUN_1425034d0(&local_88,"1234...........IXO..SN..LU......"[iVar2],param_5);
    }
    if (((*(byte *)(param_1 + 0x21) & 4) != 0) &&
       (iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,2,param_5), *param_5 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x43,param_5);
      FUN_1425034d0(&local_88,"1234...........IXO..SN..LU......"[iVar2],param_5);
    }
    if (((*(byte *)(param_1 + 0x21) & 0x80) != 0) &&
       (iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,7,param_5), *param_5 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x44,param_5);
      FUN_1425034d0(&local_88,"1234...........IXO..SN..LU......"[iVar2],param_5);
    }
    if (((*(byte *)(param_1 + 0x21) & 8) != 0) &&
       (iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,3,param_5), *param_5 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x45,param_5);
      FUN_1425034d0(&local_88,"1234...........IXO..SN..LU......"[iVar2],param_5);
    }
    if (((*(byte *)(param_1 + 0x21) & 1) != 0) &&
       (iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,0,param_5), *param_5 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x46,param_5);
      FUN_1425034d0(&local_88,"1234...........IXO..SN..LU......"[iVar2],param_5);
    }
    uVar3 = FUN_1424e74e0(local_198,"collation",local_f8,100,param_5);
    if ((uVar3 != 0) && (*param_5 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x4b,param_5);
      if (0 < (int)uVar3) {
        uVar6 = 0;
        do {
          uVar4 = FUN_1425038f0(local_f8[uVar6]);
          FUN_1425034d0(&local_88,uVar4,param_5);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar3);
      }
    }
    uVar3 = FUN_1424e8be0(local_198,local_f8,100,param_5);
    if (uVar3 == 0) {
      if (*param_5 < 1) {
        if (local_50 != 0) {
          FUN_1425034d0(&local_88,0x5f,param_5);
        }
        FUN_1425034d0(&local_88,0x4c,param_5);
        lVar5 = 0;
        do {
          uVar4 = FUN_1425038f0((&DAT_14a418301)[lVar5]);
          FUN_1425034d0(&local_88,uVar4,param_5);
          lVar5 = lVar5 + 1;
        } while (lVar5 != 4);
      }
    }
    else if (*param_5 < 1) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x4c,param_5);
      if (0 < (int)uVar3) {
        uVar6 = 0;
        do {
          uVar4 = FUN_1425038f0(local_f8[uVar6]);
          FUN_1425034d0(&local_88,uVar4,param_5);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar3);
      }
    }
    if (((*(byte *)(param_1 + 0x21) & 0x10) != 0) &&
       (iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,4,param_5), *param_5 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x4e,param_5);
      FUN_1425034d0(&local_88,"1234...........IXO..SN..LU......"[iVar2],param_5);
    }
    uVar3 = FUN_1424e8d90(local_198,local_f8,100,param_5);
    if ((uVar3 != 0) && (*param_5 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x52,param_5);
      if (0 < (int)uVar3) {
        uVar6 = 0;
        do {
          uVar4 = FUN_1425038f0(local_f8[uVar6]);
          FUN_1425034d0(&local_88,uVar4,param_5);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar3);
      }
    }
    if (((*(byte *)(param_1 + 0x21) & 0x20) != 0) &&
       (iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,5,param_5), *param_5 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x53,param_5);
      FUN_1425034d0(&local_88,"1234...........IXO..SN..LU......"[iVar2],param_5);
    }
    uVar3 = FUN_1424e8ec0(local_198,local_f8,100,param_5);
    if ((uVar3 != 0) && (*param_5 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x56,param_5);
      if (0 < (int)uVar3) {
        uVar6 = 0;
        do {
          uVar4 = FUN_1425038f0(local_f8[uVar6]);
          FUN_1425034d0(&local_88,uVar4,param_5);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar3);
      }
    }
    uVar3 = FUN_1424e8c40(local_198,local_f8,100,param_5);
    iVar2 = *param_5;
    if ((uVar3 != 0) && (iVar2 < 1)) {
      if (local_50 != 0) {
        FUN_1425034d0(&local_88,0x5f,param_5);
      }
      FUN_1425034d0(&local_88,0x5a,param_5);
      if (0 < (int)uVar3) {
        uVar6 = 0;
        do {
          uVar4 = FUN_1425038f0(local_f8[uVar6]);
          FUN_1425034d0(&local_88,uVar4,param_5);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar3);
      }
      iVar2 = *param_5;
    }
    iVar1 = local_50;
    uVar4 = 0;
    if (iVar2 < 1) {
      if (local_50 <= param_4) {
        memcpy(param_3,local_88,(longlong)local_50);
      }
      uVar4 = FUN_142504d00(param_3,param_4,iVar1,param_5);
    }
    if ((char)local_7c != '\0') {
      FUN_1424da110(local_88);
    }
  }
  return uVar4;
}



// FUNCTION 1425627a0 Unwind@1425627a0 body=67 status=ok
// SIG undefined Unwind@1425627a0(void)

void Unwind_1425627a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x14c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x140));
  }
  return;
}



// FUNCTION 1425627f0 FUN_1425627f0 body=217 status=ok
// SIG undefined FUN_1425627f0(void)

longlong FUN_1425627f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  local_34[0] = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar3 + 0x188) != 2) {
    cVar1 = FUN_142501800(lVar3 + 0x188);
    if (cVar1 != '\0') {
      uVar2 = FUN_1426200e0(*(undefined8 *)(lVar3 + 0x18),local_34);
      *(undefined8 *)(lVar3 + 0x180) = uVar2;
      *(int *)(lVar3 + 0x18c) = local_34[0];
      FUN_1425019c0(lVar3 + 0x188);
      if (0 < local_34[0]) {
        return 0;
      }
      goto LAB_142562877;
    }
  }
  if (0 < *(int *)(lVar3 + 0x18c)) {
    return 0;
  }
  if (0 < local_34[0]) {
    return 0;
  }
LAB_142562877:
  lVar3 = thunk_FUN_1424da030(0x68);
  if (lVar3 != 0) {
    FUN_14261ff80(lVar3,param_2,param_1,local_34);
    if (local_34[0] < 1) {
      return lVar3;
    }
    FUN_14261fbd0(lVar3);
    FUN_1401773f0(lVar3);
  }
  return 0;
}



// FUNCTION 1425628d0 Unwind@1425628d0 body=40 status=ok
// SIG undefined Unwind@1425628d0(void)

void Unwind_1425628d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142562900 FUN_142562900 body=217 status=ok
// SIG undefined FUN_142562900(void)

longlong FUN_142562900(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  local_34[0] = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar3 + 0x188) != 2) {
    cVar1 = FUN_142501800(lVar3 + 0x188);
    if (cVar1 != '\0') {
      uVar2 = FUN_1426200e0(*(undefined8 *)(lVar3 + 0x18),local_34);
      *(undefined8 *)(lVar3 + 0x180) = uVar2;
      *(int *)(lVar3 + 0x18c) = local_34[0];
      FUN_1425019c0(lVar3 + 0x188);
      if (0 < local_34[0]) {
        return 0;
      }
      goto LAB_142562987;
    }
  }
  if (0 < *(int *)(lVar3 + 0x18c)) {
    return 0;
  }
  if (0 < local_34[0]) {
    return 0;
  }
LAB_142562987:
  lVar3 = thunk_FUN_1424da030(0x68);
  if (lVar3 != 0) {
    FUN_142620020(lVar3,param_2,param_1,local_34);
    if (local_34[0] < 1) {
      return lVar3;
    }
    FUN_14261fbd0(lVar3);
    FUN_1401773f0(lVar3);
  }
  return 0;
}



// FUNCTION 1425629e0 Unwind@1425629e0 body=40 status=ok
// SIG undefined Unwind@1425629e0(void)

void Unwind_1425629e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142562a10 FUN_142562a10 body=119 status=ok
// SIG undefined FUN_142562a10(void)

undefined8 * FUN_142562a10(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::RuleBasedCollator::vftable;
  if (param_1[2] != 0) {
    FUN_142537ca0();
    param_1[2] = 0;
  }
  if (param_1[4] != 0) {
    FUN_142537ca0();
    param_1[4] = 0;
  }
  FUN_1414b3f60(param_1 + 5);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562a90 Unwind@142562a90 body=21 status=ok
// SIG undefined Unwind@142562a90(void)

void Unwind_142562a90(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142562ab0 FUN_142562ab0 body=38 status=ok
// SIG undefined FUN_142562ab0(void)

undefined8 FUN_142562ab0(undefined8 param_1,int param_2)

{
  thunk_FUN_1426191b0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562ae0 FUN_142562ae0 body=2 status=ok
// SIG undefined FUN_142562ae0(void)

void FUN_142562ae0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 142562af0 FUN_142562af0 body=38 status=ok
// SIG undefined FUN_142562af0(void)

undefined8 FUN_142562af0(undefined8 param_1,int param_2)

{
  FUN_142618370();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562b20 FUN_142562b20 body=38 status=ok
// SIG undefined FUN_142562b20(void)

undefined8 FUN_142562b20(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562b50 FUN_142562b50 body=121 status=ok
// SIG undefined FUN_142562b50(void)

uint FUN_142562b50(longlong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  
  puVar4 = *(ushort **)(param_1 + 0x20);
  puVar5 = *(ushort **)(param_1 + 0x28);
  uVar6 = 0xffffffff;
  if (puVar4 != puVar5) {
    puVar1 = puVar4 + 1;
    *(ushort **)(param_1 + 0x20) = puVar1;
    uVar2 = *puVar4;
    if ((puVar5 == (ushort *)0x0) && (uVar2 == 0)) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      return uVar6;
    }
    uVar6 = (uint)uVar2;
    if (((uVar2 & 0xfc00) == 0xd800) &&
       ((puVar1 != puVar5 && (uVar3 = *puVar1, (uVar3 & 0xfc00) == 0xdc00)))) {
      *(ushort **)(param_1 + 0x20) = puVar4 + 2;
      uVar6 = (uint)uVar2 * 0x400 + (uint)uVar3 + 0xfca02400;
    }
  }
  return uVar6;
}



// FUNCTION 142562bd0 FUN_142562bd0 body=60 status=ok
// SIG undefined FUN_142562bd0(void)

undefined8 * FUN_142562bd0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::_anon_FC038A82::FCDUTF16NFDIterator::vftable;
  FUN_140859a90(param_1 + 6);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562c10 FUN_142562c10 body=38 status=ok
// SIG undefined FUN_142562c10(void)

undefined8 FUN_142562c10(undefined8 param_1,int param_2)

{
  thunk_FUN_1426191b0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562c40 FUN_142562c40 body=38 status=ok
// SIG undefined FUN_142562c40(void)

undefined8 FUN_142562c40(undefined8 param_1,int param_2)

{
  FUN_14261cf00();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562c70 FUN_142562c70 body=38 status=ok
// SIG undefined FUN_142562c70(void)

undefined8 FUN_142562c70(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562ca0 FUN_142562ca0 body=312 status=ok
// SIG undefined FUN_142562ca0(void)

uint FUN_142562ca0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = (longlong)(int)*(uint *)(param_1 + 0x28);
  uVar5 = *(uint *)(param_1 + 0x2c);
  uVar6 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x28) != uVar5) &&
     ((lVar3 = *(longlong *)(param_1 + 0x20), -1 < (int)uVar5 || (*(char *)(lVar3 + lVar9) != '\0'))
     )) {
    uVar10 = lVar9 + 1;
    *(uint *)(param_1 + 0x28) = (uint)uVar10;
    bVar1 = *(byte *)(lVar3 + lVar9);
    uVar6 = (uint)bVar1;
    if (((char)bVar1 < '\0') && (uVar6 = 0xfffd, (uint)uVar10 != uVar5)) {
      if (bVar1 < 0xe0) {
        if (bVar1 < 0xc2) {
          return 0xfffd;
        }
        uVar5 = bVar1 & 0x1f;
      }
      else {
        if (bVar1 < 0xf0) {
          uVar7 = bVar1 & 0xf;
          if (((byte)(&DAT_14bd49f86)[uVar7] >> (*(byte *)(lVar3 + uVar10) >> 5) & 1) == 0) {
            return 0xfffd;
          }
          bVar4 = *(byte *)(lVar3 + uVar10) & 0x3f;
        }
        else {
          if (0xf4 < bVar1) {
            return 0xfffd;
          }
          bVar2 = *(byte *)(lVar3 + uVar10);
          if (((uint)(int)(char)(&DAT_14bd49f97)[bVar2 >> 4] >> (bVar1 - 0xf0 & 0x1f) & 1) == 0) {
            return 0xfffd;
          }
          uVar10 = lVar9 + 2;
          *(uint *)(param_1 + 0x28) = (uint)uVar10;
          if ((uint)uVar10 == uVar5) {
            return 0xfffd;
          }
          bVar4 = *(char *)(lVar3 + uVar10) + 0x80;
          if (0x3f < bVar4) {
            return 0xfffd;
          }
          uVar7 = bVar2 & 0x3f | (bVar1 - 0xf0) * 0x40;
          uVar10 = uVar10 & 0xffffffff;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
        *(uint *)(param_1 + 0x28) = uVar8;
        if (uVar8 == uVar5) {
          return 0xfffd;
        }
        uVar5 = (uint)bVar4 | uVar7 << 6;
      }
      uVar7 = *(byte *)(lVar3 + (int)uVar10) ^ 0x80;
      if ((byte)uVar7 < 0x40) {
        uVar6 = uVar5 << 6 | uVar7;
        *(int *)(param_1 + 0x28) = (int)uVar10 + 1;
      }
    }
  }
  return uVar6;
}



// FUNCTION 142562de0 FUN_142562de0 body=60 status=ok
// SIG undefined FUN_142562de0(void)

undefined8 * FUN_142562de0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::_anon_FC038A82::FCDUTF8NFDIterator::vftable;
  FUN_14261cf00(param_1 + 4);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562e20 FUN_142562e20 body=57 status=ok
// SIG undefined FUN_142562e20(void)

void FUN_142562e20(longlong param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_14261db10(param_1 + 0x20,&local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 142562e70 FUN_142562e70 body=38 status=ok
// SIG undefined FUN_142562e70(void)

undefined8 FUN_142562e70(undefined8 param_1,int param_2)

{
  thunk_FUN_1426191b0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562ea0 FUN_142562ea0 body=38 status=ok
// SIG undefined FUN_142562ea0(void)

undefined8 FUN_142562ea0(undefined8 param_1,int param_2)

{
  FUN_14261e820();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562ed0 FUN_142562ed0 body=38 status=ok
// SIG undefined FUN_142562ed0(void)

undefined8 FUN_142562ed0(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562f00 FUN_142562f00 body=9 status=ok
// SIG undefined FUN_142562f00(void)

void FUN_142562f00(longlong param_1)

{
  FUN_1424e5dd0(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 142562f10 FUN_142562f10 body=60 status=ok
// SIG undefined FUN_142562f10(void)

undefined8 * FUN_142562f10(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::_anon_FC038A82::FCDUIterNFDIterator::vftable;
  FUN_14261e820(param_1 + 4);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562f50 FUN_142562f50 body=57 status=ok
// SIG undefined FUN_142562f50(void)

void FUN_142562f50(longlong param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_14261eeb0(param_1 + 0x20,&local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 142562fa0 FUN_142562fa0 body=38 status=ok
// SIG undefined FUN_142562fa0(void)

undefined8 FUN_142562fa0(undefined8 param_1,int param_2)

{
  thunk_FUN_14257c350();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142562fd0 FUN_142562fd0 body=38 status=ok
// SIG undefined FUN_142562fd0(void)

undefined8 FUN_142562fd0(undefined8 param_1,int param_2)

{
  thunk_FUN_14257c350();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142563000 FUN_142563000 body=28 status=ok
// SIG undefined FUN_142563000(void)

void FUN_142563000(longlong param_1,void *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x10) - param_4;
  if (uVar1 != 0 && param_4 <= *(int *)(param_1 + 0x10)) {
    memcpy((void *)((longlong)param_4 + *(longlong *)(param_1 + 8)),param_2,(ulonglong)uVar1);
    return;
  }
  return;
}



// FUNCTION 142563020 FUN_142563020 body=3 status=ok
// SIG undefined FUN_142563020(void)

undefined8 FUN_142563020(void)

{
  return 0;
}



// FUNCTION 142563030 FUN_142563030 body=38 status=ok
// SIG undefined FUN_142563030(void)

undefined8 FUN_142563030(undefined8 param_1,int param_2)

{
  FUN_142610620();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142563060 FUN_142563060 body=38 status=ok
// SIG undefined FUN_142563060(void)

undefined8 FUN_142563060(undefined8 param_1,int param_2)

{
  FUN_142610620();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142563090 FUN_142563090 body=35 status=ok
// SIG undefined FUN_142563090(void)

undefined8 FUN_142563090(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x10) < *(int *)(lVar1 + 0x14)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x14) =
       (*(int *)(lVar1 + 0x10) + *(int *)(lVar1 + 0x18)) - *(int *)(lVar1 + 0x14);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 1425630c0 FUN_1425630c0 body=218 status=ok
// SIG undefined FUN_1425630c0(void)

int FUN_1425630c0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  while( true ) {
    uVar4 = 0x100;
    pbVar3 = param_1;
    while( true ) {
      bVar1 = *pbVar3;
      if (((0x3f < bVar1 - 0x20) ||
          ((0x8000000000002001U >> ((ulonglong)(bVar1 - 0x20) & 0x3f) & 1) == 0)) &&
         (4 < (byte)(bVar1 - 9))) break;
      pbVar3 = pbVar3 + 1;
      uVar4 = uVar4 + 0x100;
    }
    if (bVar1 != 0) {
      bVar1 = FUN_142503910();
      uVar4 = uVar4 + bVar1;
    }
    uVar5 = 0x100;
    pbVar3 = param_2;
    while( true ) {
      bVar1 = *pbVar3;
      if (((0x3f < bVar1 - 0x20) ||
          ((0x8000000000002001U >> ((ulonglong)(bVar1 - 0x20) & 0x3f) & 1) == 0)) &&
         (4 < (byte)(bVar1 - 9))) break;
      pbVar3 = pbVar3 + 1;
      uVar5 = uVar5 + 0x100;
    }
    if (bVar1 != 0) {
      bVar1 = FUN_142503910();
      uVar5 = uVar5 + bVar1;
    }
    if ((char)uVar5 == '\0' && (char)uVar4 == '\0') break;
    if ((uVar4 != uVar5) && (iVar2 = (uVar4 & 0xff) - (uVar5 & 0xff), iVar2 != 0)) {
      return iVar2;
    }
    param_1 = param_1 + ((int)uVar4 >> 8);
    param_2 = param_2 + ((int)uVar5 >> 8);
  }
  return 0;
}



// FUNCTION 1425631c0 FUN_1425631c0 body=441 status=ok
// SIG undefined FUN_1425631c0(void)

char * FUN_1425631c0(uint param_1,int param_2,int param_3)

{
  longlong lVar1;
  size_t sVar2;
  uint uVar3;
  char *_Str;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  
  iVar5 = 0;
  if ((int)param_1 < 0) {
    return (char *)0x0;
  }
  iVar6 = 4;
  if (0x40 < param_1) {
    if (param_1 < 0x1000) {
      return (char *)0x0;
    }
    if (param_1 < 0x1019) {
      iVar6 = 0x88;
      iVar5 = -0x1000;
    }
    else {
      if (param_1 < 0x2000) {
        return (char *)0x0;
      }
      if (param_1 == 0x2000) {
        iVar6 = 0xbc;
        iVar5 = -0x2000;
      }
      else {
        if (param_1 < 0x3000) {
          return (char *)0x0;
        }
        if (param_1 == 0x3000) {
          iVar6 = 0xc0;
          iVar5 = -0x3000;
        }
        else {
          if (param_1 < 0x4000) {
            return (char *)0x0;
          }
          if (param_1 < 0x400e) {
            iVar6 = 0xc4;
            iVar5 = -0x4000;
          }
          else {
            if (param_1 != 0x7000) {
              return (char *)0x0;
            }
            iVar6 = 0xe2;
            iVar5 = -0x7000;
          }
        }
      }
    }
  }
  iVar5 = *(int *)(&DAT_1499e2a20 + (longlong)(int)(iVar6 + (iVar5 + param_1) * 2) * 4);
  if ((longlong)iVar5 != 0) {
    iVar4 = iVar5 + 2;
    iVar6 = *(int *)(&DAT_1499e2a24 + (longlong)iVar5 * 4);
    if (iVar6 < 0x10) {
      if (iVar6 < 1) {
        return (char *)0x0;
      }
      iVar6 = iVar6 + 1;
      while( true ) {
        iVar5 = *(int *)(&DAT_1499e2a20 + (longlong)iVar4 * 4);
        if (param_2 < iVar5) {
          return (char *)0x0;
        }
        if (param_2 < *(int *)(&DAT_1499e2a24 + (longlong)iVar4 * 4)) break;
        iVar4 = ((iVar4 + 2) - iVar5) + *(int *)(&DAT_1499e2a24 + (longlong)iVar4 * 4);
        iVar6 = iVar6 + -1;
        if (iVar6 < 2) {
          return (char *)0x0;
        }
      }
      iVar5 = (iVar4 + 2 + param_2) - iVar5;
    }
    else {
      lVar7 = (longlong)iVar4;
      iVar5 = iVar5 + iVar6 + -0xe;
      lVar1 = (longlong)iVar5;
      piVar8 = (int *)(&DAT_1499e2a20 + lVar7 * 4);
      while( true ) {
        iVar6 = *piVar8;
        if (iVar6 != param_2 && param_2 <= iVar6) {
          return (char *)0x0;
        }
        if (iVar6 == param_2) break;
        lVar7 = lVar7 + 1;
        iVar5 = iVar5 + 1;
        piVar8 = piVar8 + 1;
        if (lVar1 <= lVar7) {
          return (char *)0x0;
        }
      }
    }
    lVar1 = (longlong)*(int *)(&DAT_1499e2a20 + (longlong)iVar5 * 4);
    if (((lVar1 != 0) && (-1 < param_3)) && (param_3 < (char)(&DAT_1499e7940)[lVar1])) {
      _Str = "Alpha" + lVar1;
      if (param_3 != 0) {
        uVar3 = param_3 + 1;
        do {
          sVar2 = strlen(_Str);
          _Str = _Str + sVar2 + 1;
          uVar3 = uVar3 - 1;
        } while (1 < uVar3);
      }
      if (*_Str != '\0') {
        return _Str;
      }
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



// FUNCTION 142563380 FUN_142563380 body=223 status=ok
// SIG undefined FUN_142563380(void)

undefined4 FUN_142563380(int param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 local_58;
  byte *local_50;
  byte *local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_50 = &DAT_1499e3f80 + param_1;
  local_58 = 0;
  local_40 = 0xffffffff;
  uVar3 = 0xffffffff;
  local_48 = local_50;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar2 = 1;
    do {
      while( true ) {
        param_2 = param_2 + 1;
        bVar1 = FUN_142503910();
        if (((0x3f < bVar1 - 0x20) ||
            ((0x8000000000002001U >> ((ulonglong)(bVar1 - 0x20) & 0x3f) & 1) == 0)) &&
           (4 < (byte)(bVar1 - 9))) break;
        if (*param_2 == '\0') goto LAB_142563430;
      }
      if ((uVar2 & 1) == 0) goto LAB_142563449;
      uVar2 = FUN_1426208d0(&local_58);
    } while (*param_2 != '\0');
LAB_142563430:
    if (1 < (int)uVar2) {
      uVar3 = FUN_1426204f0(local_48 + 1,*local_48 >> 1);
    }
  }
LAB_142563449:
  FUN_1426204e0(&local_58);
  return uVar3;
}



// FUNCTION 142563470 Unwind@142563470 body=44 status=ok
// SIG undefined Unwind@142563470(void)

void Unwind_142563470(undefined8 param_1,longlong param_2)

{
  FUN_1426204e0(param_2 + 0x20);
  return;
}



// FUNCTION 1425634a0 FUN_1425634a0 body=10 status=ok
// SIG undefined FUN_1425634a0(void)

void FUN_1425634a0(undefined8 param_1)

{
  FUN_142563380(0,param_1);
  return;
}



// FUNCTION 1425634b0 FUN_1425634b0 body=190 status=ok
// SIG undefined FUN_1425634b0(void)

undefined8 FUN_1425634b0(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (-1 < (int)param_1) {
    if (param_1 < 0x41) {
      iVar1 = 4;
      iVar3 = 0;
    }
    else {
      if (param_1 < 0x1000) {
        return 0xffffffff;
      }
      if (param_1 < 0x1019) {
        iVar1 = 0x88;
        iVar3 = -0x1000;
      }
      else {
        if (param_1 < 0x2000) {
          return 0xffffffff;
        }
        if (param_1 == 0x2000) {
          iVar1 = 0xbc;
          iVar3 = -0x2000;
        }
        else {
          if (param_1 < 0x3000) {
            return 0xffffffff;
          }
          if (param_1 == 0x3000) {
            iVar1 = 0xc0;
            iVar3 = -0x3000;
          }
          else {
            if (param_1 < 0x4000) {
              return 0xffffffff;
            }
            if (param_1 < 0x400e) {
              iVar1 = 0xc4;
              iVar3 = -0x4000;
            }
            else {
              if (param_1 != 0x7000) {
                return 0xffffffff;
              }
              iVar1 = 0xe2;
              iVar3 = -0x7000;
            }
          }
        }
      }
    }
    if ((longlong)*(int *)(&DAT_1499e2a20 + (longlong)(int)(iVar1 + (iVar3 + param_1) * 2) * 4) != 0
       ) {
      uVar2 = FUN_142563380(*(undefined4 *)
                             (&DAT_1499e2a20 +
                             (longlong)
                             *(int *)(&DAT_1499e2a20 +
                                     (longlong)(int)(iVar1 + (iVar3 + param_1) * 2) * 4) * 4));
      return uVar2;
    }
  }
  return 0xffffffff;
}



// FUNCTION 142563570 FUN_142563570 body=18 status=ok
// SIG undefined FUN_142563570(void)

void FUN_142563570(undefined4 param_1)

{
  FUN_1425631c0(0x100a,param_1,1);
  return;
}



// FUNCTION 142563590 FUN_142563590 body=15 status=ok
// SIG undefined FUN_142563590(void)

void FUN_142563590(undefined4 param_1)

{
  FUN_1425631c0(0x100a,param_1,0);
  return;
}



// FUNCTION 1425635a0 FUN_1425635a0 body=338 status=ok
// SIG undefined FUN_1425635a0(void)

void FUN_1425635a0(int *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*param_1 < 1) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(400);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_142589f60(puVar2,0);
      if (puVar2[4] == 0) {
        *param_1 = 7;
      }
      else {
        uVar3 = FUN_1424e51c0("icudt64l-coll",&DAT_14bd49f82,"ucadata",FUN_14258ade0,puVar2 + 0x29,
                              param_1);
        puVar2[0x2c] = uVar3;
        if (*param_1 < 1) {
          uVar3 = FUN_142532380(uVar3);
          uVar1 = FUN_1425323b0(puVar2[0x2c]);
          FUN_14258a410(0,uVar3,uVar1,puVar2,param_1);
          if (*param_1 < 1) {
            FUN_14251f960(0x1d,FUN_142563790);
            lVar4 = thunk_FUN_1424da030(0x100);
            if (lVar4 != 0) {
              uVar3 = FUN_1424a42e0();
              FUN_1424e3c80(lVar4,uVar3,puVar2);
              FUN_142537c90(lVar4);
              DAT_14c7933a8 = lVar4;
              return;
            }
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001425636ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
    *param_1 = 7;
  }
  return;
}



// FUNCTION 142563700 Unwind@142563700 body=43 status=ok
// SIG undefined Unwind@142563700(void)

void Unwind_142563700(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x40));
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x48);
  return;
}



// FUNCTION 142563730 Unwind@142563730 body=46 status=ok
// SIG undefined Unwind@142563730(void)

void Unwind_142563730(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 142563760 Unwind@142563760 body=36 status=ok
// SIG undefined Unwind@142563760(void)

void Unwind_142563760(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 142563790 FUN_142563790 body=47 status=ok
// SIG undefined FUN_142563790(void)

undefined8 FUN_142563790(void)

{
  undefined4 uVar1;
  
  if (DAT_14c7933a8 != 0) {
    FUN_142537ca0();
    DAT_14c7933a8 = 0;
  }
  uVar1 = DAT_14c7933b0;
  LOCK();
  DAT_14c7933b0 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 1425637c0 FUN_1425637c0 body=104 status=ok
// SIG undefined FUN_1425637c0(void)

undefined8 FUN_1425637c0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*param_1 < 1) {
    if ((DAT_14c7933b0 == 2) || (cVar1 = FUN_142501800(&DAT_14c7933b0), cVar1 == '\0')) {
      if (0 < DAT_14c7933b4) {
        *param_1 = DAT_14c7933b4;
      }
    }
    else {
      FUN_1425635a0(param_1);
      DAT_14c7933b4 = *param_1;
      FUN_1425019c0(&DAT_14c7933b0);
    }
  }
  uVar2 = DAT_14c7933a8;
  if (0 < *param_1) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 142563830 FUN_142563830 body=113 status=ok
// SIG undefined FUN_142563830(void)

undefined8 FUN_142563830(int *param_1)

{
  char cVar1;
  
  if (*param_1 < 1) {
    if ((DAT_14c7933b0 == 2) || (cVar1 = FUN_142501800(&DAT_14c7933b0), cVar1 == '\0')) {
      if (0 < DAT_14c7933b4) {
        *param_1 = DAT_14c7933b4;
        return 0;
      }
    }
    else {
      FUN_1425635a0(param_1);
      DAT_14c7933b4 = *param_1;
      FUN_1425019c0(&DAT_14c7933b0);
    }
    if (*param_1 < 1) {
      return *(undefined8 *)(DAT_14c7933a8 + 0xf8);
    }
  }
  return 0;
}



// FUNCTION 1425638b0 FUN_1425638b0 body=44 status=ok
// SIG undefined FUN_1425638b0(void)

ulonglong FUN_1425638b0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = param_2 & 0xffffffff;
  uVar2 = (uint)param_2 & 0xf;
  if (uVar2 == 0xd) {
    return 0xffffffff;
  }
  if (uVar2 == 0xb) {
    uVar1 = (ulonglong)**(uint **)(param_1 + 8);
  }
  else if (uVar2 == 10) {
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + (param_2 >> 0xd & 0x7ffff) * 4);
  }
  return uVar1;
}



// FUNCTION 1425638e0 FUN_1425638e0 body=53 status=ok
// SIG undefined FUN_1425638e0(void)

uint FUN_1425638e0(longlong param_1,uint param_2)

{
  uint uVar1;
  
  if ((~param_2 & 0xc0) == 0) {
    uVar1 = param_2 & 0xf;
    if (uVar1 == 0xd) {
      return 0xffffffff;
    }
    if (uVar1 == 0xb) {
      param_2 = **(uint **)(param_1 + 8);
    }
    else if (uVar1 == 10) {
      return *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 >> 0xd) * 4);
    }
  }
  return param_2;
}



// FUNCTION 142563920 FUN_142563920 body=655 status=ok
// SIG undefined FUN_142563920(void)

ulonglong FUN_142563920(longlong *param_1,ulonglong param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if (0 < *param_3) {
    return 0;
  }
  plVar9 = (longlong *)*param_1;
  lVar3 = plVar9[2];
  uVar5 = (uint)param_2;
  if (uVar5 < 0xd800) {
    uVar10 = param_2 >> 5 & 0x7ffffff;
    uVar2 = *(uint *)(lVar3 + ((ulonglong)(uVar5 & 0x1f) +
                              (ulonglong)*(ushort *)(*plVar9 + uVar10 * 2) * 4) * 4);
    if (uVar2 != 0xc0) goto joined_r0x000142563a7c;
    param_1 = (longlong *)param_1[4];
    lVar3 = ((longlong *)*param_1)[2];
    uVar1 = *(ushort *)(*(longlong *)*param_1 + uVar10 * 2);
LAB_142563a67:
    iVar6 = (uVar5 & 0x1f) + (uint)uVar1 * 4;
  }
  else {
    if (uVar5 < 0x10000) {
      uVar8 = param_2 >> 5 & 0x7ffffff;
      uVar10 = (ulonglong)((int)uVar8 + 0x140);
      if (0xdbff < uVar5) {
        uVar10 = uVar8;
      }
      uVar2 = *(uint *)(lVar3 + ((ulonglong)(uVar5 & 0x1f) +
                                (ulonglong)*(ushort *)(*plVar9 + uVar10 * 2) * 4) * 4);
      if (uVar2 != 0xc0) goto joined_r0x000142563a7c;
      param_1 = (longlong *)param_1[4];
      plVar9 = (longlong *)*param_1;
      lVar3 = plVar9[2];
LAB_142563a40:
      lVar7 = *plVar9;
      uVar8 = param_2 >> 5 & 0x7ffffff;
      uVar10 = (ulonglong)((int)uVar8 + 0x140);
      if (0xdbff < uVar5) {
        uVar10 = uVar8;
      }
LAB_142563a5b:
      uVar1 = *(ushort *)(lVar7 + uVar10 * 2);
      goto LAB_142563a67;
    }
    iVar6 = 0x80;
    if (uVar5 < 0x110000) {
      if ((int)uVar5 < *(int *)((longlong)plVar9 + 0x2c)) {
        iVar6 = (uVar5 & 0x1f) +
                (uint)*(ushort *)
                       (*plVar9 +
                       ((ulonglong)((uint)(param_2 >> 5) & 0x3f) +
                       (ulonglong)*(ushort *)(*plVar9 + 0x1040 + (param_2 >> 0xb & 0x1fffff) * 2)) *
                       2) * 4;
      }
      else {
        iVar6 = (int)plVar9[6];
      }
    }
    uVar2 = *(uint *)(lVar3 + (longlong)iVar6 * 4);
    if (uVar2 != 0xc0) goto joined_r0x000142563a7c;
    param_1 = (longlong *)param_1[4];
    plVar9 = (longlong *)*param_1;
    lVar3 = plVar9[2];
    if (uVar5 < 0x10000) goto LAB_142563a40;
    iVar6 = 0x80;
    if (uVar5 < 0x110000) {
      if ((int)uVar5 < *(int *)((longlong)plVar9 + 0x2c)) {
        lVar7 = *plVar9;
        uVar10 = (ulonglong)((uint)(param_2 >> 5) & 0x3f) +
                 (ulonglong)*(ushort *)(lVar7 + 0x1040 + (param_2 >> 0xb & 0x1fffff) * 2);
        goto LAB_142563a5b;
      }
      iVar6 = (int)plVar9[6];
    }
  }
  uVar2 = *(uint *)(lVar3 + (longlong)iVar6 * 4);
joined_r0x000142563a7c:
  if ((~uVar2 & 0xc0) != 0) {
    return (ulonglong)((uVar2 & 0xff) << 8) | CONCAT44(uVar2,uVar2 << 0x10) & 0xffff0000ff000000;
  }
  switch(uVar2 & 0xf) {
  case 0:
  case 3:
    *param_3 = 5;
    return 0;
  case 1:
    uVar10 = (ulonglong)(uVar2 & 0xffffff00);
    break;
  case 2:
    return (ulonglong)(uVar2 & 0xffffff00);
  default:
    goto switchD_142563ace_caseD_4;
  case 5:
    if ((uVar2 & 0x1f00) != 0x100) goto switchD_142563ace_caseD_4;
  case 10:
    puVar4 = (uint *)((ulonglong)(uVar2 >> 0xd) * 4 + param_1[1]);
LAB_142563ab2:
    uVar2 = *puVar4;
    goto joined_r0x000142563a7c;
  case 6:
    if ((uVar2 & 0x1f00) == 0x100) {
      return *(ulonglong *)(param_1[2] + (ulonglong)(uVar2 >> 0xd) * 8);
    }
    goto switchD_142563ace_caseD_4;
  case 0xb:
    puVar4 = (uint *)param_1[1];
    goto LAB_142563ab2;
  case 0xe:
    uVar10 = FUN_142620c40(param_2 & 0xffffffff,
                           *(undefined8 *)(param_1[2] + (ulonglong)(uVar2 >> 0xd) * 8));
    break;
  case 0xf:
    uVar10 = FUN_142620d50(param_2 & 0xffffffff);
  }
  return uVar10 << 0x20 | 0x5000500;
switchD_142563ace_caseD_4:
  *param_3 = 0x10;
  return 0;
}



// FUNCTION 142563bc0 FUN_142563bc0 body=74 status=ok
// SIG undefined FUN_142563bc0(void)

longlong FUN_142563bc0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = 0;
  if (-1 < (int)param_2) {
    if ((int)param_2 < *(int *)(param_1 + 100)) {
      uVar2 = (ulonglong)param_2;
    }
    else {
      if ((param_2 & 0xfffffff8) != 0x1000) {
        return 0;
      }
      uVar2 = (ulonglong)(int)(param_2 + *(int *)(param_1 + 100) + -0x1000);
    }
    uVar2 = (ulonglong)*(ushort *)(uVar2 * 2 + *(longlong *)(param_1 + 0x68));
    if (uVar2 != 0) {
      lVar1 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x70) + uVar2 * 2) << 0x10;
    }
  }
  return lVar1;
}



// FUNCTION 142563c10 FUN_142563c10 body=77 status=ok
// SIG undefined FUN_142563c10(void)

int FUN_142563c10(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (-1 < (int)param_2) {
    if ((int)param_2 < *(int *)(param_1 + 100)) {
      uVar2 = (ulonglong)param_2;
    }
    else {
      if ((param_2 & 0xfffffff8) != 0x1000) {
        return 0;
      }
      uVar2 = (ulonglong)(int)(param_2 + *(int *)(param_1 + 100) + -0x1000);
    }
    uVar2 = (ulonglong)*(ushort *)(uVar2 * 2 + *(longlong *)(param_1 + 0x68));
    if (uVar2 != 0) {
      iVar1 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x70) + 2 + uVar2 * 2) * 0x10000 + -1;
    }
  }
  return iVar1;
}



// FUNCTION 142563c60 FUN_142563c60 body=237 status=ok
// SIG undefined FUN_142563c60(void)

ulonglong FUN_142563c60(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x70);
  uVar4 = 0xffffffff;
  if (((uint)*(ushort *)(lVar3 + 2) <= param_2 >> 0x10) &&
     (param_2 >> 0x10 < (uint)*(ushort *)(lVar3 + -2 + (longlong)*(int *)(param_1 + 0x78) * 2))) {
    lVar5 = 0;
    do {
      lVar7 = lVar5 + 1;
      lVar1 = lVar5 * 2;
      lVar5 = lVar7;
    } while (*(ushort *)(lVar3 + 4 + lVar1) <= (ushort)(param_2 >> 0x10));
    uVar2 = *(uint *)(param_1 + 100);
    lVar3 = *(longlong *)(param_1 + 0x68);
    uVar6 = (uint)lVar7;
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (*(ushort *)(lVar3 + uVar4 * 2) == uVar6) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
    lVar5 = (longlong)(int)uVar2;
    uVar4 = 0x1000;
    if ((((*(ushort *)(lVar3 + lVar5 * 2) != uVar6) &&
         (uVar4 = 0x1001, *(ushort *)(lVar3 + 2 + lVar5 * 2) != uVar6)) &&
        (uVar4 = 0x1002, *(ushort *)(lVar3 + 4 + lVar5 * 2) != uVar6)) &&
       (((uVar4 = 0x1003, *(ushort *)(lVar3 + 6 + lVar5 * 2) != uVar6 &&
         (uVar4 = 0x1004, *(ushort *)(lVar3 + 8 + lVar5 * 2) != uVar6)) &&
        ((uVar4 = 0x1005, *(ushort *)(lVar3 + 10 + lVar5 * 2) != uVar6 &&
         (uVar4 = 0x1006, *(ushort *)(lVar3 + 0xc + lVar5 * 2) != uVar6)))))) {
      uVar4 = (ulonglong)(-(uint)(*(ushort *)(lVar3 + 0xe + lVar5 * 2) != uVar6) | 0x1007);
    }
  }
  return uVar4;
}



// FUNCTION 142563d50 FUN_142563d50 body=33 status=ok
// SIG undefined FUN_142563d50(void)

void FUN_142563d50(void)

{
  FUN_142563d80();
  return;
}



// FUNCTION 142563d80 FUN_142563d80 body=1713 status=ok
// SIG undefined FUN_142563d80(void)

void FUN_142563d80(longlong param_1,int *param_2,ulonglong param_3,char param_4,longlong param_5,
                  int *param_6)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  int *local_1d0;
  uint local_1c8;
  uint local_1c4;
  ulonglong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  uint local_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (0 < *param_6) goto LAB_142563ddb;
  FUN_1425182b0(param_5);
  uVar10 = (uint)param_3;
  if ((uVar10 == 0) || ((uVar10 == 1 && (*param_2 == 0x67)))) goto LAB_142563ddb;
  auVar21 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_168 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_1a8 = *(longlong *)(param_1 + 0x68);
  iVar5 = *(int *)(param_1 + 100);
  local_1c0 = (ulonglong)iVar5;
  uVar14 = (ulonglong)*(ushort *)(local_1a8 + 0x1c + local_1c0 * 2);
  if (uVar14 != 0) {
    local_198[uVar14] = 0xff;
  }
  uVar14 = (ulonglong)*(ushort *)(local_1a8 + 0x1e + local_1c0 * 2);
  if (uVar14 != 0) {
    local_198[uVar14] = 0xff;
  }
  lVar6 = *(longlong *)(param_1 + 0x70);
  iVar8 = *(int *)(param_1 + 0x78);
  local_19c = iVar8 - 1;
  uVar14 = (ulonglong)(int)local_19c;
  uVar12 = param_3 & 0xffffffff;
  if ((int)uVar10 < 1) {
    uVar11 = 0;
  }
  else {
    if (uVar10 < 8) {
      uVar17 = 0;
      uVar11 = 0;
    }
    else {
      uVar17 = (ulonglong)(uVar10 & 0xfffffff8);
      lVar18 = 0;
      auVar22 = (undefined1  [16])0x0;
      do {
        puVar1 = (uint *)((longlong)param_2 + lVar18);
        puVar2 = (uint *)((longlong)param_2 + lVar18 + 0x10);
        auVar25._0_4_ = -(uint)((*puVar1 & 0xfffffff8) == 0x1000);
        auVar25._4_4_ = -(uint)((puVar1[1] & 0xfffffff8) == 0x1000);
        auVar25._8_4_ = -(uint)((puVar1[2] & 0xfffffff8) == 0x1000);
        auVar25._12_4_ = -(uint)((puVar1[3] & 0xfffffff8) == 0x1000);
        auVar26._0_4_ = -(uint)((*puVar2 & 0xfffffff8) == 0x1000);
        auVar26._4_4_ = -(uint)((puVar2[1] & 0xfffffff8) == 0x1000);
        auVar26._8_4_ = -(uint)((puVar2[2] & 0xfffffff8) == 0x1000);
        auVar26._12_4_ = -(uint)((puVar2[3] & 0xfffffff8) == 0x1000);
        auVar23._0_4_ = (int)(float)(*puVar1 * 0x800000 + 0x3f800000);
        auVar23._4_4_ = (int)(float)(puVar1[1] * 0x800000 + 0x3f800000);
        auVar23._8_4_ = (int)(float)(puVar1[2] * 0x800000 + 0x3f800000);
        auVar23._12_4_ = (int)(float)(puVar1[3] * 0x800000 + 0x3f800000);
        auVar21 = auVar21 | auVar23 & auVar25;
        auVar24._0_4_ = (int)(float)(*puVar2 * 0x800000 + 0x3f800000);
        auVar24._4_4_ = (int)(float)(puVar2[1] * 0x800000 + 0x3f800000);
        auVar24._8_4_ = (int)(float)(puVar2[2] * 0x800000 + 0x3f800000);
        auVar24._12_4_ = (int)(float)(puVar2[3] * 0x800000 + 0x3f800000);
        auVar22 = auVar22 | auVar24 & auVar26;
        lVar18 = lVar18 + 0x20;
      } while ((param_3 >> 3 & 0x1fffffff) << 5 != lVar18);
      auVar22 = auVar22 | auVar21;
      auVar21._0_8_ = auVar22._8_8_;
      auVar21._8_4_ = auVar22._8_4_;
      auVar21._12_4_ = auVar22._12_4_;
      uVar11 = SUB164(auVar21 | auVar22,4) | SUB164(auVar21 | auVar22,0);
      if (uVar17 == uVar12) goto LAB_142564037;
    }
    do {
      uVar13 = 1 << ((byte)param_2[uVar17] & 0x1f);
      if ((param_2[uVar17] & 0xfffffff8U) != 0x1000) {
        uVar13 = 0;
      }
      uVar11 = uVar11 | uVar13;
      uVar17 = uVar17 + 1;
    } while (uVar12 != uVar17);
  }
LAB_142564037:
  uVar13 = (uint)*(ushort *)(lVar6 + 2);
  local_1b0 = (ulonglong)*(ushort *)(lVar6 + uVar14 * 2);
  lVar18 = 0;
  do {
    uVar17 = (ulonglong)*(ushort *)(local_1a8 + local_1c0 * 2 + lVar18 * 2);
    if ((uVar17 != 0) && ((uVar11 >> ((uint)lVar18 & 0x1f) & 1) == 0)) {
      uVar3 = *(ushort *)(lVar6 + uVar17 * 2);
      uVar16 = uVar13 + 0x100;
      if ((uVar13 & 0xff) <= (uint)(byte)uVar3) {
        uVar16 = uVar13;
      }
      local_198[uVar17] = (char)(uVar16 >> 8);
      uVar4 = *(ushort *)(lVar6 + 2 + uVar17 * 2);
      uVar13 = uVar3 & 0xff00;
      uVar14 = (ulonglong)uVar13;
      uVar13 = ((uint)(byte)uVar4 | (uVar4 & 0xff00) - uVar13) + (uVar16 & 0xff00);
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 8);
  uVar16 = 0;
  uVar15 = uVar13;
  if (((uVar11 == 0) && (uVar16 = 0, param_4 == '\0')) && (*param_2 == 0x19)) {
    uVar15 = (uint)*(ushort *)(lVar6 + (ulonglong)*(ushort *)(local_1a8 + 0x32) * 2);
    uVar16 = uVar15 - uVar13 & 0xff00;
  }
  local_1c8 = uVar10;
  if ((int)uVar10 < 1) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
    uVar17 = 1;
    do {
      uVar11 = param_2[uVar17 - 1];
      uVar9 = (ulonglong)uVar11;
      local_1c4 = uVar16;
      local_1b8 = param_1;
      if (uVar9 == 0xffffffff) goto LAB_1425641db;
      if (uVar11 == 0x67) {
        if ((int)uVar17 < (int)uVar10) goto LAB_1425642aa;
        break;
      }
      if (-1 < (int)uVar11) {
        if (iVar5 <= (int)uVar11) {
          uVar14 = (ulonglong)(uVar11 & 0xfffffff8);
          if ((uVar11 & 0xfffffff8) != 0x1000) goto LAB_142564175;
          uVar9 = (ulonglong)(int)(uVar11 + iVar5 + -0x1000);
          uVar14 = local_1c0;
        }
        uVar9 = (ulonglong)*(ushort *)(local_1a8 + uVar9 * 2);
        if (uVar9 != 0) {
          if (local_198[uVar9] != '\0') goto LAB_1425641db;
          uVar3 = *(ushort *)(lVar6 + uVar9 * 2);
          uVar11 = uVar15 + 0x100;
          if ((uVar15 & 0xff) <= (uint)(byte)uVar3) {
            uVar11 = uVar15;
          }
          local_198[uVar9] = (char)(uVar11 >> 8);
          uVar4 = *(ushort *)(lVar6 + 2 + uVar9 * 2);
          uVar13 = uVar3 & 0xff00;
          uVar14 = (ulonglong)uVar13;
          uVar15 = ((uint)(byte)uVar4 | (uVar4 & 0xff00) - uVar13) + (uVar11 & 0xff00);
        }
      }
LAB_142564175:
      bVar19 = uVar12 <= uVar17;
      bVar20 = uVar17 != uVar12;
      uVar17 = uVar17 + 1;
    } while (bVar20);
  }
  goto LAB_142564215;
LAB_1425641db:
  *param_6 = 1;
  goto LAB_142563ddb;
LAB_1425642aa:
  do {
    uVar11 = param_2[uVar12 - 1];
    uVar9 = (ulonglong)uVar11;
    if ((uVar9 == 0x67) || (uVar11 == 0xffffffff)) goto LAB_1425641db;
    if (-1 < (int)uVar11) {
      if (iVar5 <= (int)uVar11) {
        if ((uVar11 & 0xfffffff8) != 0x1000) goto LAB_14256429e;
        uVar9 = (ulonglong)(int)(iVar5 + uVar11 + -0x1000);
      }
      uVar9 = (ulonglong)*(ushort *)(local_1a8 + uVar9 * 2);
      if (uVar9 != 0) {
        if (local_198[uVar9] != '\0') goto LAB_1425641db;
        uVar3 = *(ushort *)(lVar6 + 2 + uVar9 * 2);
        uVar11 = (uint)local_1b0;
        uVar13 = uVar11 + 0xff00;
        if ((uint)(byte)uVar3 <= (uVar11 & 0xff)) {
          uVar13 = uVar11;
        }
        uVar4 = *(ushort *)(lVar6 + uVar9 * 2);
        uVar11 = uVar3 & 0xff00;
        uVar14 = (ulonglong)uVar11;
        uVar11 = ((uVar4 & 0xff00) - uVar11) + (uVar13 & 0xff00);
        local_1b0 = (ulonglong)((byte)uVar4 | uVar11);
        local_198[uVar9] = (char)(uVar11 >> 8);
      }
    }
LAB_14256429e:
    uVar12 = uVar12 - 1;
  } while ((longlong)uVar17 < (longlong)uVar12);
LAB_142564215:
  if (2 < iVar8) {
    uVar12 = 1;
    do {
      if (local_198[uVar12] == '\0') {
        uVar3 = *(ushort *)(lVar6 + uVar12 * 2);
        uVar11 = uVar15;
        if ((int)uVar15 < (int)(uint)uVar3) {
          uVar11 = (uint)uVar3;
        }
        if (!bVar19) {
          uVar11 = uVar15;
        }
        uVar13 = uVar11 + 0x100;
        if ((uVar11 & 0xff) <= (uint)(byte)uVar3) {
          uVar13 = uVar11;
        }
        local_198[uVar12] = (char)(uVar13 >> 8);
        uVar4 = *(ushort *)(lVar6 + 2 + uVar12 * 2);
        uVar11 = (uVar4 & 0xff00) - (uVar3 & 0xff00);
        uVar14 = (ulonglong)uVar11;
        uVar15 = ((byte)uVar4 | uVar11) + (uVar13 & 0xff00);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != local_19c);
  }
  if ((int)local_1b0 < (int)uVar15) {
    if ((int)local_1b0 < (int)(uVar15 - uVar16)) {
      *param_6 = 0xf;
    }
    else {
      local_1d0 = param_6;
      local_1d8 = param_5;
      FUN_142563d80(param_1,param_2,uVar10,CONCAT71((int7)(uVar14 >> 8),1));
    }
  }
  else {
    uVar14 = 1;
    uVar10 = 0;
    do {
      uVar13 = iVar8 - 1;
      uVar11 = uVar10;
      if ((int)uVar14 < (int)uVar13) {
        uVar14 = (ulonglong)(int)uVar14;
        do {
          if (((byte)local_198[uVar14] != 0xff) &&
             (uVar11 = (uint)(byte)local_198[uVar14] -
                       (uint)*(byte *)(*(longlong *)(param_1 + 0x70) + 1 + uVar14 * 2),
             uVar11 != uVar10)) goto joined_r0x000142564422;
          uVar14 = uVar14 + 1;
        } while ((longlong)uVar14 < (longlong)(int)uVar13);
        uVar14 = (ulonglong)uVar13;
        uVar11 = uVar10;
      }
joined_r0x000142564422:
      iVar5 = (int)uVar14;
      if ((uVar10 != 0) || (iVar5 < (int)uVar13)) {
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar5 * 2);
        iVar8 = *(int *)(param_5 + 8);
        if ((iVar8 < -1) || (*(int *)(param_5 + 0xc) <= iVar8)) {
          cVar7 = FUN_1425182c0(param_5,iVar8 + 1,param_6);
          if (cVar7 == '\0') goto LAB_1425643ba;
          iVar8 = *(int *)(param_5 + 8);
        }
        *(uint *)(*(longlong *)(param_5 + 0x18) + (longlong)iVar8 * 4) =
             uVar10 & 0xffff | (uint)uVar3 << 0x10;
        *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
      }
LAB_1425643ba:
      iVar8 = *(int *)(param_1 + 0x78);
      uVar14 = (ulonglong)(iVar5 + 1);
      uVar10 = uVar11;
    } while (iVar5 != iVar8 + -1);
  }
LAB_142563ddb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 1425644b0 FUN_1425644b0 body=58 status=ok
// SIG undefined FUN_1425644b0(void)

void FUN_1425644b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::number::FormattedNumber::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = 0;
  FUN_142620ea0(param_1);
  return;
}



// FUNCTION 1425644f0 FUN_1425644f0 body=130 status=ok
// SIG undefined FUN_1425644f0(void)

undefined8 * FUN_1425644f0(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  
  if (*param_3 < 1) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 == (longlong *)0x0) {
      *param_3 = *(int *)(param_1 + 0x10);
      *param_2 = &PTR_FUN_149e18960;
      *(undefined2 *)(param_2 + 1) = 2;
      FUN_1424a7130(param_2);
    }
    else {
      (**(code **)(*plVar1 + 8))(plVar1,param_2);
    }
  }
  else {
    *param_2 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_2 + 1) = 2;
    FUN_1424a7130(param_2);
  }
  return param_2;
}



// FUNCTION 142564580 Unwind@142564580 body=32 status=ok
// SIG undefined Unwind@142564580(void)

void Unwind_142564580(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425645a0 Unwind@1425645a0 body=32 status=ok
// SIG undefined Unwind@1425645a0(void)

void Unwind_1425645a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425645c0 FUN_1425645c0 body=130 status=ok
// SIG undefined FUN_1425645c0(void)

undefined8 * FUN_1425645c0(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  
  if (*param_3 < 1) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 == (longlong *)0x0) {
      *param_3 = *(int *)(param_1 + 0x10);
      *param_2 = &PTR_FUN_149e18960;
      *(undefined2 *)(param_2 + 1) = 2;
      FUN_1424a7130(param_2);
    }
    else {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    }
  }
  else {
    *param_2 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_2 + 1) = 2;
    FUN_1424a7130(param_2);
  }
  return param_2;
}



// FUNCTION 142564650 Unwind@142564650 body=32 status=ok
// SIG undefined Unwind@142564650(void)

void Unwind_142564650(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142564670 Unwind@142564670 body=32 status=ok
// SIG undefined Unwind@142564670(void)

void Unwind_142564670(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142564690 FUN_142564690 body=42 status=ok
// SIG undefined FUN_142564690(void)

undefined8 FUN_142564690(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (0 < *param_3) {
    return param_2;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425646ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,*(code **)(*plVar1 + 0x18));
    return uVar2;
  }
  *param_3 = *(int *)(param_1 + 0x10);
  return param_2;
}



// FUNCTION 1425646c0 FUN_1425646c0 body=40 status=ok
// SIG undefined FUN_1425646c0(void)

undefined8 FUN_1425646c0(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (0 < *param_3) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425646dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3,*(code **)(*plVar1 + 0x20));
    return uVar2;
  }
  *param_3 = *(int *)(param_1 + 0x10);
  return 0;
}



// FUNCTION 1425646f0 FUN_1425646f0 body=49 status=ok
// SIG undefined FUN_1425646f0(void)

undefined8 FUN_1425646f0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 < 1) {
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar1 = FUN_14260a3d0(*(longlong *)(param_1 + 8) + 8);
      return uVar1;
    }
    *param_3 = *(int *)(param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 142564730 FUN_142564730 body=35 status=ok
// SIG undefined FUN_142564730(void)

void FUN_142564730(longlong param_1,undefined8 param_2,int *param_3)

{
  if (0 < *param_3) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14260a930(*(longlong *)(param_1 + 8) + 8);
    return;
  }
  *param_3 = *(int *)(param_1 + 0x10);
  return;
}



// FUNCTION 142564760 FUN_142564760 body=43 status=ok
// SIG undefined FUN_142564760(void)

void FUN_142564760(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::UFormattedNumberData::vftable;
  FUN_142537d50(param_1 + 0x13);
  FUN_142573ca0(param_1);
  return;
}



// FUNCTION 142564790 FUN_142564790 body=78 status=ok
// SIG undefined FUN_142564790(void)

undefined8 * FUN_142564790(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::number::FormattedNumber::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = 0;
  FUN_142620ea0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425647e0 FUN_1425647e0 body=379 status=ok
// SIG undefined FUN_1425647e0(void)

ulonglong FUN_1425647e0(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  undefined2 uVar1;
  ulonglong uVar2;
  short sVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  short sVar13;
  
  uVar7 = (ulonglong)param_5;
  puVar8 = (undefined8 *)(param_1 + 0x10);
  uVar11 = 0;
  uVar6 = uVar7;
  uVar5 = (ulonglong)param_3;
  do {
    uVar2 = uVar5 % (ulonglong)param_4;
    sVar3 = (short)uVar2;
    sVar13 = sVar3 + 0x30;
    if (9 < (int)uVar2) {
      sVar13 = sVar3 + 0x37;
    }
    uVar11 = uVar11 + 1;
    *(short *)(puVar8 + -2) = sVar13;
    puVar8 = (undefined8 *)((longlong)puVar8 + 2);
    uVar6 = uVar6 - 1;
  } while ((param_4 <= (uint)uVar5) &&
          (uVar5 = uVar5 / param_4, (longlong)uVar11 < (longlong)param_2));
  uVar10 = (uint)uVar11;
  if ((int)param_5 <= (int)uVar10) goto joined_r0x0001425648a5;
  uVar5 = uVar7 - uVar11;
  if (uVar5 < 0x10) {
LAB_142564890:
    do {
      *(undefined2 *)(param_1 + uVar11 * 2) = 0x30;
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
  }
  else {
    uVar11 = uVar11 + (uVar6 & 0xfffffffffffffff0);
    uVar6 = uVar5 & 0xfffffffffffffff0;
    do {
      puVar8[-2] = 0x30003000300030;
      puVar8[-1] = 0x30003000300030;
      *puVar8 = 0x30003000300030;
      puVar8[1] = 0x30003000300030;
      puVar8 = puVar8 + 4;
      uVar6 = uVar6 - 0x10;
    } while (uVar6 != 0);
    if (uVar5 != (uVar5 & 0xfffffffffffffff0)) goto LAB_142564890;
  }
  uVar11 = (ulonglong)param_5;
  uVar10 = param_5;
joined_r0x0001425648a5:
  if ((int)uVar10 < param_2) {
    *(undefined2 *)(param_1 + (uVar11 & 0xffffffff) * 2) = 0;
  }
  if (1 < (uint)uVar11) {
    uVar10 = (uint)(uVar11 >> 1);
    lVar4 = (longlong)(int)(uint)uVar11;
    if ((uVar10 & 0x7fffffff) == 1) {
      uVar6 = 0;
    }
    else {
      lVar12 = lVar4 + -1;
      uVar6 = 0;
      do {
        uVar1 = *(undefined2 *)(param_1 + lVar12 * 2);
        *(undefined2 *)(param_1 + lVar12 * 2) = *(undefined2 *)(param_1 + uVar6 * 2);
        *(undefined2 *)(param_1 + uVar6 * 2) = uVar1;
        lVar9 = (uVar6 ^ 0x7ffffffffffffffe) + lVar4;
        uVar1 = *(undefined2 *)(param_1 + lVar9 * 2);
        *(undefined2 *)(param_1 + lVar9 * 2) = *(undefined2 *)(param_1 + 2 + uVar6 * 2);
        *(undefined2 *)(param_1 + 2 + uVar6 * 2) = uVar1;
        uVar6 = uVar6 + 2;
        lVar12 = lVar12 + -2;
      } while ((uVar10 & 0x7ffffffe) != uVar6);
    }
    if ((uVar11 >> 1 & 1) != 0) {
      uVar1 = *(undefined2 *)(param_1 + (lVar4 + ~uVar6) * 2);
      *(undefined2 *)(param_1 + (lVar4 + ~uVar6) * 2) = *(undefined2 *)(param_1 + uVar6 * 2);
      *(undefined2 *)(param_1 + uVar6 * 2) = uVar1;
    }
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 142564960 FUN_142564960 body=70 status=ok
// SIG undefined FUN_142564960(void)

void FUN_142564960(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[2];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (*param_1 != 0) {
      FUN_1424da110();
      UNRECOVERED_JUMPTABLE = (code *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014256498f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 1425649b0 FUN_1425649b0 body=40 status=ok
// SIG undefined FUN_1425649b0(void)

undefined8 FUN_1425649b0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*param_2 < 1)) {
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425649c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x18))();
      return uVar1;
    }
    *param_2 = 0x10;
    return 0xffffffff;
  }
  return 0xffffffff;
}



// FUNCTION 1425649e0 FUN_1425649e0 body=229 status=ok
// SIG undefined FUN_1425649e0(void)

void FUN_1425649e0(longlong *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0;
  if ((code *)param_1[5] == (code *)0x0) {
    *param_3 = 0x10;
    goto joined_r0x000142564ab0;
  }
  lVar3 = (*(code *)param_1[5])(param_1,&local_3c,param_3);
  iVar2 = local_3c;
  if (lVar3 == 0) goto joined_r0x000142564ab0;
  iVar1 = local_3c * 2 + 2;
  piVar4 = (int *)*param_1;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_1424da030((longlong)iVar1 + 0xc);
LAB_142564a6d:
    *param_1 = (longlong)piVar4;
    if (piVar4 == (int *)0x0) {
      *param_3 = 7;
      goto joined_r0x000142564ab0;
    }
    *piVar4 = iVar2 * 2 + 10;
    piVar4 = (int *)*param_1;
  }
  else if (*piVar4 < iVar1) {
    piVar4 = (int *)FUN_1424da060(piVar4,(longlong)iVar1 + 0xc);
    goto LAB_142564a6d;
  }
  FUN_14250ad70(lVar3,piVar4 + 1,local_3c + 1);
joined_r0x000142564ab0:
  if (param_2 != (int *)0x0) {
    *param_2 = local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 142564ae0 FUN_142564ae0 body=165 status=ok
// SIG undefined FUN_142564ae0(void)

int * FUN_142564ae0(longlong *param_1,int *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  if ((code *)param_1[4] == (code *)0x0) {
    *param_3 = 0x10;
  }
  else {
    lVar1 = (*(code *)param_1[4])(param_1,param_2,param_3);
    if (lVar1 == 0) {
      return (int *)0x0;
    }
    iVar3 = *param_2;
    piVar2 = (int *)*param_1;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_1424da030((longlong)iVar3 + 0xd);
    }
    else {
      if (iVar3 < *piVar2) goto LAB_142564b54;
      piVar2 = (int *)FUN_1424da060(piVar2,(longlong)iVar3 + 0xd);
    }
    *param_1 = (longlong)piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar3 + 9;
      piVar2 = (int *)*param_1;
      iVar3 = *param_2;
LAB_142564b54:
      FUN_14250ae10(lVar1,piVar2 + 1,iVar3 + 1);
      return piVar2 + 1;
    }
    *param_3 = 7;
  }
  return (int *)0x0;
}



// FUNCTION 142564b90 FUN_142564b90 body=36 status=ok
// SIG undefined FUN_142564b90(void)

undefined8 FUN_142564b90(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*param_3 < 1)) {
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142564ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x20))();
      return uVar1;
    }
    *param_3 = 0x10;
    return 0;
  }
  return 0;
}



// FUNCTION 142564bc0 FUN_142564bc0 body=123 status=ok
// SIG undefined FUN_142564bc0(void)

void FUN_142564bc0(longlong param_1,longlong param_2,int *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 != 0) && (*param_3 < 1)) {
    if (*(code **)(param_1 + 0x28) == (code *)0x0) {
      *param_3 = 0x10;
    }
    else {
      if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
      local_2c = 0;
      (**(code **)(param_1 + 0x28))(param_1,&local_2c,param_3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 142564c60 FUN_142564c60 body=846 status=ok
// SIG undefined FUN_142564c60(void)

undefined8
FUN_142564c60(undefined8 param_1,char *param_2,char *param_3,longlong param_4,longlong param_5,
             undefined8 param_6,int *param_7)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_2b8 [200];
  undefined1 local_1f0 [200];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined5 uStack_a0;
  undefined3 local_9b;
  undefined5 uStack_98;
  undefined8 uStack_93;
  char *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_5c;
  longlong local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uStack_98 = 0;
  uStack_93 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_9b = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_4c = 0;
  local_58 = FUN_1424ebfe0(0,param_2,&local_4c);
  if (local_4c < 1) {
    if ((local_4c == -0x7f) || ((local_4c == -0x80 && (*param_7 != -0x7f)))) {
      *param_7 = local_4c;
    }
    local_68 = 0;
    local_80 = param_2;
    local_78 = param_1;
    local_70 = param_4;
    do {
      FUN_1424ea920(local_2b8);
      FUN_1424ea920(local_1f0);
      FUN_1424ec1c0(local_58,param_3,local_2b8,&local_4c);
      if (param_4 != 0) {
        FUN_1424ec1c0(local_2b8,param_4,local_2b8,&local_4c);
      }
      if (0 < local_4c) goto LAB_142564dfe;
      local_68 = FUN_1424ec010(local_2b8,param_5,param_6,&local_4c);
      bVar1 = true;
      if (0 < local_4c) {
        *param_7 = local_4c;
        local_4c = 0;
        iVar2 = strcmp(param_3,"Countries");
        if (iVar2 == 0) {
          lVar4 = FUN_1424e7ec0(param_5);
        }
        else {
          iVar2 = strcmp(param_3,"Languages");
          if (iVar2 != 0) goto LAB_142564d9a;
          lVar4 = FUN_1424e80f0(param_5);
        }
        if ((lVar4 == 0) || (lVar4 == param_5)) {
          if (0 < local_4c) {
LAB_142564dfe:
            local_5c = 0;
            *param_7 = local_4c;
            local_4c = 0;
            uVar3 = FUN_1424ec010(local_2b8,"Fallback",&local_5c,&local_4c);
            iVar2 = local_4c;
            if (local_4c < 1) {
              FUN_14250ae10(uVar3,&local_128,local_5c);
              iVar2 = strcmp((char *)&local_128,local_80);
              if (iVar2 == 0) {
                iVar2 = 5;
              }
              else {
                lVar4 = FUN_1424ebfe0(local_78,&local_128,&local_4c);
                if (local_58 != 0) {
                  FUN_1424ea9f0();
                }
                param_4 = local_70;
                iVar2 = local_4c;
                local_58 = lVar4;
                if (local_4c < 1) {
                  bVar1 = false;
                  goto LAB_142564d9a;
                }
              }
            }
            *param_7 = iVar2;
            bVar1 = true;
          }
        }
        else {
          local_68 = FUN_1424ec010(local_2b8,lVar4,param_6,&local_4c);
          if (0 < local_4c) goto LAB_142564dfe;
          *param_7 = local_4c;
        }
      }
LAB_142564d9a:
      FUN_1424ea970(local_1f0);
      FUN_1424ea970(local_2b8);
    } while (!bVar1);
  }
  else {
    *param_7 = local_4c;
    local_68 = 0;
  }
  if (local_58 != 0) {
    FUN_1424ea9f0();
  }
  return local_68;
}



// FUNCTION 142564fc0 Unwind@142564fc0 body=55 status=ok
// SIG undefined Unwind@142564fc0(void)

void Unwind_142564fc0(undefined8 param_1,longlong param_2)

{
  FUN_1424ea970(param_2 + 0x20);
  return;
}



// FUNCTION 142565000 Unwind@142565000 body=68 status=ok
// SIG undefined Unwind@142565000(void)

void Unwind_142565000(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x280) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x280));
  }
  return;
}



// FUNCTION 142565050 FUN_142565050 body=14 status=ok
// SIG undefined FUN_142565050(void)

void FUN_142565050(undefined8 param_1,undefined8 param_2)

{
  FUN_142565060(param_2,param_1);
  return;
}



// FUNCTION 142565060 FUN_142565060 body=333 status=ok
// SIG undefined FUN_142565060(void)

void FUN_142565060(longlong param_1,undefined8 param_2,int *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_3 < 1) {
    FUN_1424a7c80(param_1 + 8);
    *(longlong *)(param_1 + 0x1a8) = param_1 + 0x48;
    FUN_142565540(param_1,param_3);
    if (*param_3 < 1) {
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
      if (sVar1 < 0) {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
      }
      else {
        iVar5 = (int)sVar1 >> 5;
      }
      if ((*(int *)(param_1 + 0x1a0) != iVar5) && (iVar5 = FUN_1424a8030(), iVar5 == 0x3b)) {
        iVar5 = *(int *)(param_1 + 0x1a0);
        lVar6 = *(longlong *)(param_1 + 0x198);
        if (*(short *)(lVar6 + 8) < 0) {
          iVar4 = *(int *)(lVar6 + 0xc);
        }
        else {
          iVar4 = (int)*(short *)(lVar6 + 8) >> 5;
        }
        iVar3 = 2;
        if (iVar5 != iVar4) {
          uVar2 = FUN_1424a8030();
          iVar3 = 2 - (uint)(uVar2 < 0x10000);
          iVar5 = *(int *)(param_1 + 0x1a0);
          lVar6 = *(longlong *)(param_1 + 0x198);
        }
        *(int *)(param_1 + 0x1a0) = iVar5 + iVar3;
        if (*(short *)(lVar6 + 8) < 0) {
          iVar4 = *(int *)(lVar6 + 0xc);
        }
        else {
          iVar4 = (int)*(short *)(lVar6 + 8) >> 5;
        }
        if ((iVar5 + iVar3 != iVar4) && (iVar5 = FUN_1424a8030(), iVar5 != -1)) {
          *(undefined1 *)(param_1 + 0x1b0) = 1;
          *(longlong *)(param_1 + 0x1a8) = param_1 + 0xf0;
          FUN_142565540(param_1,param_3);
          if (0 < *param_3) {
            return;
          }
        }
      }
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
      if (sVar1 < 0) {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
      }
      else {
        iVar5 = (int)sVar1 >> 5;
      }
      if ((*(int *)(param_1 + 0x1a0) != iVar5) && (iVar5 = FUN_1424a8030(), iVar5 != -1)) {
        *param_3 = 0x10013;
      }
    }
  }
  return;
}



// FUNCTION 1425651b0 FUN_1425651b0 body=209 status=ok
// SIG undefined FUN_1425651b0(void)

void FUN_1425651b0(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  undefined **local_1f0;
  undefined1 local_1e8 [120];
  undefined1 local_170 [168];
  undefined1 local_c8 [144];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(short *)(param_1 + 8) < 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_14256526a:
      FUN_14256ae50(param_2);
      return;
    }
  }
  else if (*(short *)(param_1 + 8) >> 5 == 0) goto LAB_14256526a;
  FUN_142566100(&local_1f0);
  FUN_142565060(&local_1f0,param_1,param_4);
  if (*param_4 < 1) {
    FUN_1425662d0(param_2,&local_1f0,param_3,param_4);
  }
  local_1f0 = icu_64::number::impl::ParsedPatternInfo::vftable;
  FUN_142537d50(local_c8);
  FUN_142537d50(local_170);
  FUN_140859a90(local_1e8);
  FUN_142573db0(&local_1f0);
  return;
}



// FUNCTION 142565290 Unwind@142565290 body=47 status=ok
// SIG undefined Unwind@142565290(void)

void Unwind_142565290(undefined8 param_1,longlong param_2)

{
  FUN_1425667d0(param_2 + 0x28);
  return;
}



// FUNCTION 1425652c0 thunk_FUN_1425651b0 body=5 status=ok
// SIG undefined thunk_FUN_1425651b0(void)

void thunk_FUN_1425651b0(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  undefined **ppuStack_1f0;
  undefined1 auStack_1e8 [120];
  undefined1 auStack_170 [168];
  undefined1 auStack_c8 [144];
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*(short *)(param_1 + 8) < 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_14256526a:
      FUN_14256ae50(param_2);
      return;
    }
  }
  else if (*(short *)(param_1 + 8) >> 5 == 0) goto LAB_14256526a;
  FUN_142566100(&ppuStack_1f0);
  FUN_142565060(&ppuStack_1f0,param_1,param_4);
  if (*param_4 < 1) {
    FUN_1425662d0(param_2,&ppuStack_1f0,param_3,param_4);
  }
  ppuStack_1f0 = icu_64::number::impl::ParsedPatternInfo::vftable;
  FUN_142537d50(auStack_c8);
  FUN_142537d50(auStack_170);
  FUN_140859a90(auStack_1e8);
  FUN_142573db0(&ppuStack_1f0);
  return;
}



// FUNCTION 1425652d0 FUN_1425652d0 body=219 status=ok
// SIG undefined FUN_1425652d0(void)

ulonglong FUN_1425652d0(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((~param_2 & 0x600) == 0) {
    piVar1 = (int *)(param_1 + 400);
  }
  else if ((param_2 & 0x400) == 0) {
    if ((~param_2 & 0x300) == 0) {
      piVar1 = (int *)(param_1 + 0x180);
    }
    else if ((param_2 & 0x100) == 0) {
      if ((param_2 & 0x200) == 0) {
        piVar1 = (int *)(param_1 + 0xe0);
      }
      else {
        piVar1 = (int *)(param_1 + 0x188);
      }
    }
    else {
      piVar1 = (int *)(param_1 + 0xd8);
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0xe8);
  }
  if (-1 < param_3) {
    iVar3 = piVar1[1] - *piVar1;
    if (param_3 < iVar3) {
      uVar5 = *piVar1 + param_3;
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 < 0) {
        uVar6 = *(uint *)(param_1 + 0x14);
      }
      else {
        uVar6 = (int)sVar2 >> 5;
      }
      uVar4 = CONCAT62((uint6)(ushort)((uint)iVar3 >> 0x10),0xffff);
      if (uVar5 < uVar6) {
        if (((int)sVar2 & 2U) == 0) {
          param_1 = *(longlong *)(param_1 + 0x20);
        }
        else {
          param_1 = param_1 + 0x12;
        }
        uVar4 = (ulonglong)*(ushort *)(param_1 + (longlong)(int)uVar5 * 2);
      }
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 1425653b0 FUN_1425653b0 body=100 status=ok
// SIG undefined FUN_1425653b0(void)

int FUN_1425653b0(longlong param_1,uint param_2)

{
  int *piVar1;
  
  if ((~param_2 & 0x600) == 0) {
    piVar1 = (int *)(param_1 + 400);
  }
  else if ((param_2 & 0x400) == 0) {
    if ((~param_2 & 0x300) == 0) {
      piVar1 = (int *)(param_1 + 0x180);
    }
    else if ((param_2 & 0x100) == 0) {
      if ((param_2 & 0x200) == 0) {
        piVar1 = (int *)(param_1 + 0xe0);
      }
      else {
        piVar1 = (int *)(param_1 + 0x188);
      }
    }
    else {
      piVar1 = (int *)(param_1 + 0xd8);
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0xe8);
  }
  return piVar1[1] - *piVar1;
}



// FUNCTION 142565420 FUN_142565420 body=160 status=ok
// SIG undefined FUN_142565420(void)

undefined8 * FUN_142565420(longlong param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  
  if ((~param_3 & 0x600) == 0) {
    piVar1 = (int *)(param_1 + 400);
  }
  else if ((param_3 & 0x400) == 0) {
    if ((~param_3 & 0x300) == 0) {
      piVar1 = (int *)(param_1 + 0x180);
    }
    else if ((param_3 & 0x100) == 0) {
      if ((param_3 & 0x200) == 0) {
        piVar1 = (int *)(param_1 + 0xe0);
      }
      else {
        piVar1 = (int *)(param_1 + 0x188);
      }
    }
    else {
      piVar1 = (int *)(param_1 + 0xd8);
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0xe8);
  }
  if (piVar1[1] == *piVar1) {
    *param_2 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_2 + 1) = 2;
  }
  else {
    FUN_1424a7950(param_2,param_1 + 8);
  }
  return param_2;
}



// FUNCTION 1425654c0 FUN_1425654c0 body=8 status=ok
// SIG undefined FUN_1425654c0(void)

undefined1 FUN_1425654c0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xd4);
}



// FUNCTION 1425654d0 FUN_1425654d0 body=8 status=ok
// SIG undefined FUN_1425654d0(void)

undefined1 FUN_1425654d0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1b0);
}



// FUNCTION 1425654e0 FUN_1425654e0 body=8 status=ok
// SIG undefined FUN_1425654e0(void)

undefined1 FUN_1425654e0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x17b);
}



// FUNCTION 1425654f0 FUN_1425654f0 body=35 status=ok
// SIG undefined FUN_1425654f0(void)

bool FUN_1425654f0(longlong param_1)

{
  if (*(char *)(param_1 + 0xd2) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    return *(char *)(param_1 + 0x17a) != '\0';
  }
  return false;
}



// FUNCTION 142565520 FUN_142565520 body=9 status=ok
// SIG undefined FUN_142565520(void)

void FUN_142565520(longlong param_1)

{
  FUN_142573610(param_1 + 8);
  return;
}



// FUNCTION 142565530 FUN_142565530 body=8 status=ok
// SIG undefined FUN_142565530(void)

bool FUN_142565530(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x60);
}



// FUNCTION 142565540 FUN_142565540 body=190 status=ok
// SIG undefined FUN_142565540(void)

void FUN_142565540(longlong param_1,int *param_2)

{
  FUN_142565600(param_1,0,param_2);
  if (*param_2 < 1) {
    FUN_1425656f0(param_1,*(longlong *)(param_1 + 0x1a8) + 0x90,param_2);
    if (*param_2 < 1) {
      FUN_142565600(param_1,1,param_2);
      if (*param_2 < 1) {
        FUN_142565800(param_1,param_2);
        if (*param_2 < 1) {
          FUN_1425658c0(param_1,param_2);
          if (*param_2 < 1) {
            FUN_142565600(param_1,2,param_2);
            if (*param_2 < 1) {
              FUN_1425656f0(param_1,*(longlong *)(param_1 + 0x1a8) + 0x98,param_2);
              if (*param_2 < 1) {
                FUN_142565600(param_1,3,param_2);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142565600 FUN_142565600 body=239 status=ok
// SIG undefined FUN_142565600(void)

void FUN_142565600(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
  if (sVar1 < 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
  }
  else {
    iVar2 = (int)sVar1 >> 5;
  }
  if ((*(int *)(param_1 + 0x1a0) != iVar2) && (iVar2 = FUN_1424a8030(), iVar2 == 0x2a)) {
    if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x30) == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1a8) + 0x34) = param_2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1a8) + 0x30) = 1;
      iVar2 = *(int *)(param_1 + 0x1a0);
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
      if (sVar1 < 0) {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
      }
      else {
        iVar5 = (int)sVar1 >> 5;
      }
      iVar4 = 2;
      if (iVar2 != iVar5) {
        uVar3 = FUN_1424a8030();
        iVar4 = 2 - (uint)(uVar3 < 0x10000);
        iVar2 = *(int *)(param_1 + 0x1a0);
      }
      *(int *)(param_1 + 0x1a0) = iVar2 + iVar4;
      *(int *)(*(longlong *)(param_1 + 0x1a8) + 0xa0) = iVar2 + iVar4;
      FUN_142565ab0(param_1,param_3);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1a8) + 0xa4) = *(undefined4 *)(param_1 + 0x1a0);
    }
    else {
      *param_3 = 0x10106;
    }
  }
  return;
}



// FUNCTION 1425656f0 FUN_1425656f0 body=242 status=ok
// SIG undefined FUN_1425656f0(void)

void FUN_1425656f0(longlong param_1,undefined4 *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  
  *param_2 = *(undefined4 *)(param_1 + 0x1a0);
  while( true ) {
    sVar1 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
    if (sVar1 < 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
    }
    else {
      iVar2 = (int)sVar1 >> 5;
    }
    if (*(int *)(param_1 + 0x1a0) == iVar2) break;
    iVar2 = FUN_1424a8030();
    switch(iVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2f:
    case 0x3a:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa2:
    case 0xa3:
      break;
    case 0x25:
      *(undefined1 *)(*(longlong *)(param_1 + 0x1a8) + 0x88) = 1;
      break;
    case 0x2b:
      *(undefined1 *)(*(longlong *)(param_1 + 0x1a8) + 0x8c) = 1;
      break;
    case 0x2d:
      *(undefined1 *)(*(longlong *)(param_1 + 0x1a8) + 0x8b) = 1;
      break;
    case 0xa4:
      *(undefined1 *)(*(longlong *)(param_1 + 0x1a8) + 0x8a) = 1;
      break;
    case -1:
    case 0x23:
    case 0x2a:
    case 0x2c:
    case 0x2e:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3b:
    case 0x40:
      goto switchD_142565784_caseD_ffffffff;
    default:
      if (iVar2 == 0x2030) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x1a8) + 0x89) = 1;
      }
    }
    FUN_142565ab0(param_1,param_3);
    if (0 < *param_3) {
      return;
    }
  }
switchD_142565784_caseD_ffffffff:
  param_2[1] = *(undefined4 *)(param_1 + 0x1a0);
  return;
}



// FUNCTION 142565800 FUN_142565800 body=191 status=ok
// SIG undefined FUN_142565800(void)

void FUN_142565800(longlong param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  FUN_142565cb0();
  if (*param_2 < 1) {
    sVar2 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
    if (sVar2 < 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
    }
    else {
      iVar3 = (int)sVar2 >> 5;
    }
    if ((*(int *)(param_1 + 0x1a0) != iVar3) && (iVar3 = FUN_1424a8030(), iVar3 == 0x2e)) {
      iVar3 = *(int *)(param_1 + 0x1a0);
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
      if (sVar2 < 0) {
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
      }
      else {
        iVar6 = (int)sVar2 >> 5;
      }
      iVar5 = 2;
      if (iVar3 != iVar6) {
        uVar4 = FUN_1424a8030();
        iVar5 = 2 - (uint)(uVar4 < 0x10000);
        iVar3 = *(int *)(param_1 + 0x1a0);
      }
      *(int *)(param_1 + 0x1a0) = iVar3 + iVar5;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1a8) + 0x28) = 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x1a8) + 0x2c);
      *piVar1 = *piVar1 + 1;
      FUN_142565f30(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1425658c0 FUN_1425658c0 body=484 status=ok
// SIG undefined FUN_1425658c0(void)

void FUN_1425658c0(longlong param_1,undefined4 *param_2)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
  if (sVar1 < 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
  }
  else {
    iVar3 = (int)sVar1 >> 5;
  }
  if (*(int *)(param_1 + 0x1a0) != iVar3) {
    puVar2 = *(uint **)(param_1 + 0x1a8);
    iVar3 = FUN_1424a8030();
    if (iVar3 == 0x45) {
      if ((~*puVar2 & 0xffff0000) == 0) {
        iVar3 = *(int *)(param_1 + 0x1a0);
        sVar1 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
        if (sVar1 < 0) {
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
        }
        else {
          iVar6 = (int)sVar1 >> 5;
        }
        iVar5 = 2;
        if (iVar3 != iVar6) {
          uVar4 = FUN_1424a8030();
          iVar5 = 2 - (uint)(uVar4 < 0x10000);
          iVar3 = *(int *)(param_1 + 0x1a0);
        }
        *(int *)(param_1 + 0x1a0) = iVar3 + iVar5;
        puVar2[0xb] = puVar2[0xb] + 1;
        iVar3 = *(int *)(param_1 + 0x1a0);
        lVar7 = *(longlong *)(param_1 + 0x198);
        if (*(short *)(lVar7 + 8) < 0) {
          iVar6 = *(int *)(lVar7 + 0xc);
        }
        else {
          iVar6 = (int)*(short *)(lVar7 + 8) >> 5;
        }
        if (iVar3 != iVar6) {
          iVar6 = FUN_1424a8030();
          iVar3 = *(int *)(param_1 + 0x1a0);
          lVar7 = *(longlong *)(param_1 + 0x198);
          if (iVar6 == 0x2b) {
            if (*(short *)(lVar7 + 8) < 0) {
              iVar6 = *(int *)(lVar7 + 0xc);
            }
            else {
              iVar6 = (int)*(short *)(lVar7 + 8) >> 5;
            }
            iVar5 = 2;
            if (iVar3 != iVar6) {
              uVar4 = FUN_1424a8030();
              iVar5 = 2 - (uint)(uVar4 < 0x10000);
              iVar3 = *(int *)(param_1 + 0x1a0);
            }
            *(int *)(param_1 + 0x1a0) = iVar3 + iVar5;
            *(undefined1 *)(puVar2 + 0x20) = 1;
            puVar2[0xb] = puVar2[0xb] + 1;
            iVar3 = *(int *)(param_1 + 0x1a0);
            lVar7 = *(longlong *)(param_1 + 0x198);
          }
        }
        if (-1 < *(short *)(lVar7 + 8)) {
          iVar6 = (int)*(short *)(lVar7 + 8) >> 5;
          goto LAB_142565a0f;
        }
        do {
          iVar6 = *(int *)(lVar7 + 0xc);
LAB_142565a0f:
          while( true ) {
            if (iVar3 == iVar6) {
              return;
            }
            iVar3 = FUN_1424a8030();
            if (iVar3 != 0x30) {
              return;
            }
            sVar1 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
            if (sVar1 < 0) {
              iVar3 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
            }
            else {
              iVar3 = (int)sVar1 >> 5;
            }
            iVar6 = *(int *)(param_1 + 0x1a0);
            iVar5 = 2;
            if (iVar6 != iVar3) {
              uVar4 = FUN_1424a8030();
              iVar5 = 2 - (uint)(uVar4 < 0x10000);
              iVar6 = *(int *)(param_1 + 0x1a0);
            }
            *(int *)(param_1 + 0x1a0) = iVar6 + iVar5;
            puVar2[0x21] = puVar2[0x21] + 1;
            puVar2[0xb] = puVar2[0xb] + 1;
            iVar3 = *(int *)(param_1 + 0x1a0);
            lVar7 = *(longlong *)(param_1 + 0x198);
            if (*(short *)(lVar7 + 8) < 0) break;
            iVar6 = (int)*(short *)(lVar7 + 8) >> 5;
          }
        } while( true );
      }
      *param_2 = 0x10103;
    }
  }
  return;
}



// FUNCTION 142565ab0 FUN_142565ab0 body=496 status=ok
// SIG undefined FUN_142565ab0(void)

void FUN_142565ab0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  
  sVar7 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
  if (sVar7 < 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
  }
  else {
    iVar2 = (int)sVar7 >> 5;
  }
  if ((*(int *)(param_1 + 0x1a0) == iVar2) || (iVar2 = FUN_1424a8030(), iVar2 == -1)) {
LAB_142565c5c:
    *param_2 = 0x10107;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x1a0);
    sVar7 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
    iVar3 = (int)sVar7 >> 5;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
    iVar5 = iVar3;
    if (sVar7 < 0) {
      iVar5 = iVar2;
    }
    if (iVar6 != iVar5) {
      iVar2 = FUN_1424a8030();
      iVar6 = *(int *)(param_1 + 0x1a0);
      lVar1 = *(longlong *)(param_1 + 0x198);
      sVar7 = *(short *)(lVar1 + 8);
      if (iVar2 == 0x27) {
        if (sVar7 < 0) {
          iVar2 = *(int *)(lVar1 + 0xc);
        }
        else {
          iVar2 = (int)sVar7 >> 5;
        }
        while( true ) {
          iVar5 = 2;
          if (iVar6 != iVar2) {
            uVar4 = FUN_1424a8030();
            iVar5 = 2 - (uint)(uVar4 < 0x10000);
            iVar6 = *(int *)(param_1 + 0x1a0);
          }
          iVar6 = iVar6 + iVar5;
          *(int *)(param_1 + 0x1a0) = iVar6;
          sVar7 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
          iVar3 = (int)sVar7 >> 5;
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
          iVar5 = iVar3;
          if (sVar7 < 0) {
            iVar5 = iVar2;
          }
          if (iVar6 != iVar5) {
            iVar2 = FUN_1424a8030();
            iVar6 = *(int *)(param_1 + 0x1a0);
            lVar1 = *(longlong *)(param_1 + 0x198);
            sVar7 = *(short *)(lVar1 + 8);
            if (iVar2 == 0x27) {
              if (sVar7 < 0) {
                iVar2 = *(int *)(lVar1 + 0xc);
              }
              else {
                iVar2 = (int)sVar7 >> 5;
              }
              iVar5 = 2;
              if (iVar6 != iVar2) {
                uVar4 = FUN_1424a8030();
                iVar5 = 2 - (uint)(uVar4 < 0x10000);
                iVar6 = *(int *)(param_1 + 0x1a0);
              }
              iVar6 = iVar6 + iVar5;
              goto LAB_142565b85;
            }
            iVar2 = *(int *)(lVar1 + 0xc);
            iVar3 = (int)sVar7 >> 5;
          }
          if (sVar7 < 0) {
            iVar3 = iVar2;
          }
          if ((iVar6 == iVar3) || (iVar2 = FUN_1424a8030(), iVar2 == -1)) break;
          sVar7 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
          if (sVar7 < 0) {
            iVar2 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
            iVar6 = *(int *)(param_1 + 0x1a0);
          }
          else {
            iVar2 = (int)sVar7 >> 5;
            iVar6 = *(int *)(param_1 + 0x1a0);
          }
        }
        goto LAB_142565c5c;
      }
      iVar2 = *(int *)(lVar1 + 0xc);
      iVar3 = (int)sVar7 >> 5;
    }
    if (sVar7 < 0) {
      iVar3 = iVar2;
    }
    iVar2 = 2;
    if (iVar6 != iVar3) {
      uVar4 = FUN_1424a8030();
      iVar2 = 2 - (uint)(uVar4 < 0x10000);
      iVar6 = *(int *)(param_1 + 0x1a0);
    }
    iVar6 = iVar6 + iVar2;
LAB_142565b85:
    *(int *)(param_1 + 0x1a0) = iVar6;
  }
  return;
}



// FUNCTION 142565cb0 FUN_142565cb0 body=592 status=ok
// SIG undefined FUN_142565cb0(void)

void FUN_142565cb0(longlong param_1,undefined4 *param_2)

{
  short sVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
  if (sVar1 < 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
  }
  else {
    iVar6 = (int)sVar1 >> 5;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x1a0) != iVar6) {
LAB_142565d47:
    do {
      iVar6 = FUN_1424a8030();
      if (iVar6 - 0x30U < 10) {
        if (0 < *(int *)((longlong)puVar2 + 0x14)) {
LAB_142565f10:
          uVar5 = 0x10100;
          goto LAB_142565f15;
        }
        *(int *)((longlong)puVar2 + 0x2c) = *(int *)((longlong)puVar2 + 0x2c) + 1;
        *puVar2 = *puVar2 + 1;
        *(int *)(puVar2 + 2) = (int)puVar2[2] + 1;
        *(int *)(puVar2 + 3) = (int)puVar2[3] + 1;
        cVar4 = FUN_142538620(puVar2 + 7);
        iVar6 = *(int *)(param_1 + 0x1a0);
        lVar10 = *(longlong *)(param_1 + 0x198);
        if (cVar4 != '\0') {
          if (*(short *)(lVar10 + 8) < 0) {
            iVar11 = *(int *)(lVar10 + 0xc);
          }
          else {
            iVar11 = (int)*(short *)(lVar10 + 8) >> 5;
          }
          if (iVar6 != iVar11) {
            iVar6 = FUN_1424a8030();
            if (iVar6 == 0x30) goto LAB_142565e35;
            iVar6 = *(int *)(param_1 + 0x1a0);
            lVar10 = *(longlong *)(param_1 + 0x198);
          }
        }
        if (*(short *)(lVar10 + 8) < 0) {
          iVar11 = *(int *)(lVar10 + 0xc);
        }
        else {
          iVar11 = (int)*(short *)(lVar10 + 8) >> 5;
        }
        uVar9 = 0xffffffff;
        if (iVar6 != iVar11) {
          uVar9 = FUN_1424a8030();
        }
        FUN_14253af20(puVar2 + 7,
                      CONCAT71((int7)((ulonglong)uVar9 >> 8),(char)uVar9 + -0x30) & 0xffffffff,0,1);
      }
      else if (iVar6 == 0x23) {
        if (0 < (int)puVar2[2]) goto LAB_142565f10;
        *(int *)((longlong)puVar2 + 0x2c) = *(int *)((longlong)puVar2 + 0x2c) + 1;
        *puVar2 = *puVar2 + 1;
        if (*(int *)((longlong)puVar2 + 0x14) < 1) {
          *(int *)(puVar2 + 1) = (int)puVar2[1] + 1;
          *(int *)(puVar2 + 3) = (int)puVar2[3] + 1;
        }
        else {
          *(int *)((longlong)puVar2 + 0xc) = *(int *)((longlong)puVar2 + 0xc) + 1;
          *(int *)(puVar2 + 3) = (int)puVar2[3] + 1;
        }
      }
      else if (iVar6 == 0x40) {
        uVar5 = 0x10100;
        if ((0 < (int)puVar2[2]) || (0 < *(int *)((longlong)puVar2 + 0xc))) goto LAB_142565f15;
        *(int *)((longlong)puVar2 + 0x2c) = *(int *)((longlong)puVar2 + 0x2c) + 1;
        *puVar2 = *puVar2 + 1;
        *(ulonglong *)((longlong)puVar2 + 0x14) =
             CONCAT44((int)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0x14) >> 0x20) + 1,
                      (int)*(undefined8 *)((longlong)puVar2 + 0x14) + 1);
      }
      else {
        if (iVar6 != 0x2c) break;
        *(int *)((longlong)puVar2 + 0x2c) = *(int *)((longlong)puVar2 + 0x2c) + 1;
        *puVar2 = *puVar2 << 0x10;
      }
LAB_142565e35:
      iVar6 = *(int *)(param_1 + 0x1a0);
      lVar10 = *(longlong *)(param_1 + 0x198);
      if (*(short *)(lVar10 + 8) < 0) {
        iVar11 = *(int *)(lVar10 + 0xc);
      }
      else {
        iVar11 = (int)*(short *)(lVar10 + 8) >> 5;
      }
      iVar8 = 2;
      if (iVar6 != iVar11) {
        uVar7 = FUN_1424a8030();
        iVar8 = 2 - (uint)(uVar7 < 0x10000);
        iVar6 = *(int *)(param_1 + 0x1a0);
        lVar10 = *(longlong *)(param_1 + 0x198);
      }
      iVar6 = iVar6 + iVar8;
      *(int *)(param_1 + 0x1a0) = iVar6;
      if (-1 < *(short *)(lVar10 + 8)) {
        if (iVar6 == (int)*(short *)(lVar10 + 8) >> 5) break;
        goto LAB_142565d47;
      }
    } while (iVar6 != *(int *)(lVar10 + 0xc));
  }
  uVar3 = *puVar2;
  if ((((short)uVar3 == 0) && (uVar5 = 0x10100, (uint)uVar3 < 0xffff0000)) ||
     (((uint)uVar3 < 0x10000 && (uVar5 = 0x10107, (uVar3 & 0xffff00000000) != 0xffff00000000)))) {
LAB_142565f15:
    *param_2 = uVar5;
  }
  return;
}



// FUNCTION 142565f30 FUN_142565f30 body=427 status=ok
// SIG undefined FUN_142565f30(void)

void FUN_142565f30(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  sVar2 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
  if (sVar2 < 0) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
  }
  else {
    iVar8 = (int)sVar2 >> 5;
  }
  if (*(int *)(param_1 + 0x1a0) == iVar8) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  iVar8 = 0;
  do {
    iVar3 = FUN_1424a8030();
    if (iVar3 - 0x30U < 10) {
      if (0 < *(int *)(lVar1 + 0x20)) {
        *param_2 = 0x10100;
        return;
      }
      *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
      iVar3 = *(int *)(param_1 + 0x1a0);
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
      iVar9 = (int)sVar2 >> 5;
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
      iVar5 = iVar9;
      if (sVar2 < 0) {
        iVar5 = iVar10;
      }
      if (iVar3 != iVar5) {
        iVar3 = FUN_1424a8030();
        if (iVar3 == 0x30) {
          iVar8 = iVar8 + 1;
          goto LAB_142566046;
        }
        iVar3 = *(int *)(param_1 + 0x1a0);
        sVar2 = *(short *)(*(longlong *)(param_1 + 0x198) + 8);
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x198) + 0xc);
        iVar9 = (int)sVar2 >> 5;
      }
      if (sVar2 < 0) {
        iVar9 = iVar10;
      }
      uVar6 = 0xffffffff;
      if (iVar3 != iVar9) {
        uVar6 = FUN_1424a8030();
      }
      FUN_14253af20(lVar1 + 0x38,
                    CONCAT71((int7)((ulonglong)uVar6 >> 8),(char)uVar6 + -0x30) & 0xffffffff,iVar8,0
                   );
      iVar8 = 0;
    }
    else {
      if (iVar3 != 0x23) {
        return;
      }
      *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
      *(ulonglong *)(lVar1 + 0x20) =
           CONCAT44((int)((ulonglong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) + 1,
                    (int)*(undefined8 *)(lVar1 + 0x20) + 1);
      iVar8 = iVar8 + 1;
    }
LAB_142566046:
    iVar3 = *(int *)(param_1 + 0x1a0);
    lVar7 = *(longlong *)(param_1 + 0x198);
    if (*(short *)(lVar7 + 8) < 0) {
      iVar10 = *(int *)(lVar7 + 0xc);
    }
    else {
      iVar10 = (int)*(short *)(lVar7 + 8) >> 5;
    }
    iVar5 = 2;
    if (iVar3 != iVar10) {
      uVar4 = FUN_1424a8030();
      iVar5 = 2 - (uint)(uVar4 < 0x10000);
      iVar3 = *(int *)(param_1 + 0x1a0);
      lVar7 = *(longlong *)(param_1 + 0x198);
    }
    iVar3 = iVar3 + iVar5;
    *(int *)(param_1 + 0x1a0) = iVar3;
    if (*(short *)(lVar7 + 8) < 0) {
      if (iVar3 == *(int *)(lVar7 + 0xc)) {
        return;
      }
    }
    else if (iVar3 == (int)*(short *)(lVar7 + 8) >> 5) {
      return;
    }
  } while( true );
}



// FUNCTION 142566100 FUN_142566100 body=342 status=ok
// SIG undefined FUN_142566100(void)

void FUN_142566100(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::ParsedPatternInfo::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[9] = 0xffffffff0000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_142537d10(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xffffffff0000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  FUN_142537d10(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = param_1 + 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return;
}



// FUNCTION 142566260 Unwind@142566260 body=41 status=ok
// SIG undefined Unwind@142566260(void)

void Unwind_142566260(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142566290 Unwind@142566290 body=50 status=ok
// SIG undefined Unwind@142566290(void)

void Unwind_142566290(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_142573db0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425662d0 FUN_1425662d0 body=1087 status=ok
// SIG undefined FUN_1425662d0(void)

void FUN_1425662d0(longlong param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [8];
  short local_80;
  short local_7e;
  int local_7c;
  short *local_70;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_3 == 0) {
    bVar9 = false;
  }
  else if (param_3 == 1) {
    bVar9 = *(char *)((longlong)param_2 + 0xd2) != '\0';
  }
  else {
    bVar9 = true;
  }
  uVar2 = param_2[9];
  uVar7 = (int)uVar2 >> 0x10;
  iVar8 = (int)(short)uVar2;
  if (uVar7 == 0xffffffff) {
    iVar8 = -1;
  }
  *(int *)(param_1 + 0x48) = iVar8;
  *(bool *)(param_1 + 0x4c) = uVar7 != 0xffffffff;
  *(uint *)(param_1 + 0x2f0) = -(uint)((~uVar2 & 0xffff00000000) == 0) | uVar7;
  if (((int)param_2[0xc] == 0) && (0 < *(int *)((longlong)param_2 + 0x6c))) {
    iVar4 = FUN_142501300(1,*(undefined4 *)((longlong)param_2 + 100));
    iVar8 = 0;
    if (*(int *)((longlong)param_2 + 0x5c) < 1) goto LAB_142566380;
LAB_1425663c7:
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x5c);
    iVar4 = *(int *)((longlong)param_2 + 0x54) + *(int *)((longlong)param_2 + 0x5c);
  }
  else {
    iVar4 = 0;
    iVar8 = 1;
    if ((int)param_2[0xb] != 0 || *(int *)((longlong)param_2 + 100) != 0) {
      iVar4 = *(int *)((longlong)param_2 + 100);
      iVar8 = (int)param_2[0xb];
    }
    if (0 < *(int *)((longlong)param_2 + 0x5c)) goto LAB_1425663c7;
LAB_142566380:
    cVar3 = FUN_142538620(param_2 + 0x10);
    if (cVar3 == '\0') {
      if (bVar9) {
        *(undefined4 *)(param_1 + 100) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
        uVar10 = 0;
      }
      else {
        *(int *)(param_1 + 100) = iVar4;
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x6c);
        uVar10 = FUN_142538d80(param_2 + 0x10);
      }
      *(undefined8 *)(param_1 + 0x2e0) = uVar10;
    }
    else {
      if (bVar9) {
        *(undefined4 *)(param_1 + 100) = 0xffffffff;
        uVar5 = 0xffffffff;
      }
      else {
        *(int *)(param_1 + 100) = iVar4;
        uVar5 = *(undefined4 *)((longlong)param_2 + 0x6c);
      }
      *(undefined4 *)(param_1 + 0x54) = uVar5;
      *(undefined8 *)(param_1 + 0x2e0) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    iVar4 = -1;
  }
  *(int *)(param_1 + 0x5c) = iVar4;
  *(bool *)(param_1 + 0x41) = *(int *)((longlong)param_2 + 0x6c) == 0 && (char)param_2[0xe] != '\0';
  if (*(int *)((longlong)param_2 + 0xcc) < 1) {
    *(undefined1 *)(param_1 + 0x42) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
    *(int *)(param_1 + 0x6c) = iVar8;
LAB_142566493:
    uVar5 = 0xffffffff;
  }
  else {
    *(char *)(param_1 + 0x42) = (char)param_2[0x19];
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0xcc);
    if (*(int *)((longlong)param_2 + 0x5c) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
      goto LAB_142566493;
    }
    *(int *)(param_1 + 0x6c) = (int)param_2[0xb];
    uVar5 = (undefined4)param_2[0xc];
  }
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  (**(code **)(*param_2 + 0x18))(param_2,local_108,0x100);
  (**(code **)(*param_2 + 0x18))(param_2,local_c8,0);
  if ((char)param_2[0xf] == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    FUN_1424a7130(param_1 + 0x188);
    *(undefined1 *)(param_1 + 0x180) = 1;
    goto LAB_142566622;
  }
  iVar8 = *(int *)((longlong)param_2 + 0x74);
  iVar4 = FUN_142572bd0(local_108,param_4);
  iVar6 = FUN_142572bd0(local_c8,param_4);
  *(int *)(param_1 + 0x44) = iVar4 + iVar8 + iVar6;
  (**(code **)(*param_2 + 0x18))(param_2,local_88,0x400);
  if (local_80 < 0) {
    if (local_7c != 2) goto LAB_14256651e;
LAB_142566565:
    if (((int)local_80 & 2U) != 0) {
      local_70 = &local_7e;
    }
    lVar1 = param_1 + 0x188;
    if (*local_70 == 0x27) {
      FUN_1424a8e40(lVar1);
      if (*(short *)(param_1 + 400) < 0) {
        iVar8 = *(int *)(param_1 + 0x194);
      }
      else {
        iVar8 = (int)*(short *)(param_1 + 400) >> 5;
      }
      FUN_1424a9130(lVar1,0,iVar8,&DAT_1499e0136,0,0xffffffff);
    }
    else {
      FUN_1424a7c80(lVar1,local_88);
    }
  }
  else {
    local_7c = (int)local_80 >> 5;
    if (local_7c == 2) goto LAB_142566565;
LAB_14256651e:
    if (local_7c == 1) {
      FUN_1424a7c80(param_1 + 0x188,local_88);
    }
    else {
      FUN_1424a7950(local_148,local_88,1,local_7c + -2);
      FUN_1424a7ca0(param_1 + 0x188,local_148);
      FUN_140859a90(local_148);
    }
  }
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0x180) = 0;
  FUN_140859a90(local_88);
LAB_142566622:
  FUN_1424a7c80(param_1 + 0x220,local_108);
  FUN_1424a7c80(param_1 + 0x2a0,local_c8);
  if ((char)param_2[0x36] == '\0') {
    FUN_1424a7130(param_1 + 0xc0);
    FUN_1424a7130(param_1 + 0x140);
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2,local_88,0x300);
    FUN_1424a7ca0(param_1 + 0xc0,local_88);
    FUN_140859a90(local_88);
    (**(code **)(*param_2 + 0x18))(param_2,local_88,0x200);
    FUN_1424a7ca0(param_1 + 0x140,local_88);
    FUN_140859a90(local_88);
  }
  if ((char)param_2[0x1a] == '\0') {
    if (*(char *)((longlong)param_2 + 0xd1) == '\0') {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 2;
  }
  FUN_140859a90(local_c8);
  FUN_140859a90(local_108);
  return;
}



// FUNCTION 142566710 Unwind@142566710 body=55 status=ok
// SIG undefined Unwind@142566710(void)

void Unwind_142566710(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf0);
  return;
}



// FUNCTION 142566750 Unwind@142566750 body=55 status=ok
// SIG undefined Unwind@142566750(void)

void Unwind_142566750(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 142566790 Unwind@142566790 body=55 status=ok
// SIG undefined Unwind@142566790(void)

void Unwind_142566790(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1425667d0 FUN_1425667d0 body=64 status=ok
// SIG undefined FUN_1425667d0(void)

void FUN_1425667d0(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::ParsedPatternInfo::vftable;
  FUN_142537d50(param_1 + 0x25);
  FUN_142537d50(param_1 + 0x10);
  FUN_140859a90(param_1 + 1);
  FUN_142573db0(param_1);
  return;
}



// FUNCTION 142566810 FUN_142566810 body=73 status=ok
// SIG undefined FUN_142566810(void)

ulonglong FUN_142566810(double param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (-1 < param_2) {
    param_1 = param_1 + param_1;
    if (param_1 <= 1.0) {
      uVar2 = 0;
      do {
        iVar1 = (int)uVar2;
        uVar2 = (ulonglong)(iVar1 + 1);
        param_1 = param_1 * 10.0;
        if (param_2 <= iVar1) break;
      } while (param_1 <= 1.0);
    }
    uVar2 = CONCAT71((int7)(uVar2 >> 8),param_2 < (int)uVar2);
  }
  return uVar2;
}



// FUNCTION 142566860 FUN_142566860 body=3028 status=ok
// SIG undefined FUN_142566860(void)

undefined8 * FUN_142566860(undefined8 *param_1,longlong param_2,int *param_3)

{
  double dVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  double dVar16;
  undefined1 local_3c0 [64];
  undefined1 local_380 [64];
  undefined1 local_340 [64];
  undefined1 local_300 [64];
  undefined **local_2c0;
  undefined1 local_2b8 [64];
  undefined1 local_278 [64];
  undefined1 local_238 [64];
  undefined1 local_1f8 [72];
  undefined1 local_1b0 [64];
  undefined1 local_170 [8];
  short local_168;
  short local_166;
  int local_164;
  short *local_158;
  ulonglong local_130;
  undefined **local_128;
  ushort local_120;
  undefined1 local_11e [2];
  int local_11c;
  undefined1 *local_110;
  ulonglong local_e8;
  int *local_e0;
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined2 local_c0 [4];
  short local_b8;
  int local_b4;
  ulonglong local_78;
  int local_70;
  char local_6b;
  char local_6a;
  char local_69;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 1) = 2;
  local_68 = param_1;
  uVar6 = FUN_142501310(*(undefined4 *)(param_2 + 0x48),100);
  iVar7 = FUN_142501300(0,uVar6);
  uVar6 = FUN_142501310(*(undefined4 *)(param_2 + 0x2f0),100);
  local_d8 = FUN_142501300(0,uVar6);
  local_6a = *(char *)(param_2 + 0x4c);
  local_cc = FUN_142501310(*(undefined4 *)(param_2 + 0x44),100);
  local_e8 = *(ulonglong *)(param_2 + 0x180);
  FUN_1424a6be0(local_1b0,param_2 + 0x188);
  uVar6 = FUN_142501310(*(undefined4 *)(param_2 + 0x6c),100);
  iVar8 = FUN_142501300(0,uVar6);
  local_c8 = FUN_142501310(*(undefined4 *)(param_2 + 0x58),100);
  uVar6 = FUN_142501310(*(undefined4 *)(param_2 + 100),100);
  iVar9 = FUN_142501300(0,uVar6);
  local_70 = FUN_142501310(*(undefined4 *)(param_2 + 0x54),100);
  iVar10 = FUN_142501310(*(undefined4 *)(param_2 + 0x70),100);
  iVar11 = FUN_142501310(*(undefined4 *)(param_2 + 0x5c),100);
  local_69 = *(char *)(param_2 + 0x41);
  local_d0 = FUN_142501310(*(undefined4 *)(param_2 + 0x60),100);
  local_6b = *(char *)(param_2 + 0x42);
  local_e0 = param_3;
  FUN_1425677c0(&local_2c0,param_2,param_3);
  FUN_14256c9f0(&local_2c0,local_c0,0x100);
  puVar3 = local_68;
  iVar15 = local_b4;
  if (-1 < local_b8) {
    iVar15 = (int)local_b8 >> 5;
  }
  FUN_1424a9690(local_68,local_c0,0,iVar15);
  FUN_140859a90(local_c0);
  sVar5 = *(short *)(puVar3 + 1);
  if (sVar5 < 0) {
    uVar13 = *(uint *)((longlong)puVar3 + 0xc);
  }
  else {
    uVar13 = (int)sVar5 >> 5;
  }
  local_78 = (ulonglong)uVar13;
  iVar15 = 0;
  if (iVar7 == (int)local_d8) {
    iVar7 = 0;
  }
  local_c4 = 1;
  if (local_6a != '\0') {
    local_c4 = (int)local_d8 + 1 + iVar7;
  }
  dVar1 = *(double *)(param_2 + 0x2e0);
  local_128 = &PTR_FUN_149e18960;
  local_120 = 2;
  iVar12 = FUN_142501310(100,0xffffffff);
  if (iVar11 == iVar12) {
    if ((dVar1 != 0.0) || (NAN(dVar1))) {
      if (-1 < local_70) {
        dVar16 = dVar1 + dVar1;
        iVar10 = 0;
        if (dVar16 <= 1.0) {
          iVar11 = 0;
          do {
            iVar10 = iVar11 + 1;
            dVar16 = dVar16 * 10.0;
            if (local_70 <= iVar11) break;
            iVar11 = iVar10;
          } while (dVar16 <= 1.0);
        }
        if (local_70 < iVar10) goto LAB_142566cca;
      }
      sVar5 = FUN_142620ec0(dVar1,0);
      FUN_142537d10(local_c0);
      FUN_142539590(local_c0,dVar1);
      piVar2 = local_e0;
      FUN_142538840(local_c0,(int)sVar5);
      FUN_142538510(local_c0,0,4,piVar2);
      FUN_14253b200(local_c0,local_170);
      if (local_168 < 0) {
        iVar15 = local_164;
        if (local_164 == 0) goto LAB_142566c6e;
LAB_142566c5d:
        if (((int)local_168 & 2U) == 0) {
          local_166 = *local_158;
        }
        if (local_166 != 0x2d) goto LAB_142566c6e;
        FUN_1424a9690(&local_128,local_170,1,iVar15 + -1);
      }
      else {
        iVar15 = (int)local_168 >> 5;
        if (iVar15 != 0) goto LAB_142566c5d;
LAB_142566c6e:
        FUN_1424a9690(&local_128,local_170,0);
      }
      iVar15 = -(int)sVar5;
      FUN_140859a90(local_170);
      FUN_142537d50(local_c0);
    }
  }
  else {
    while( true ) {
      uVar13 = (uint)(short)local_120;
      iVar15 = (int)uVar13 >> 5;
      if ((short)local_120 < 0) {
        iVar15 = local_11c;
      }
      if (iVar10 <= iVar15) break;
      local_c0[0] = 0x40;
      FUN_1424a6cf0(&local_128,local_c0,0,1);
    }
    iVar15 = 0;
    while( true ) {
      iVar10 = (int)(short)uVar13 >> 5;
      if ((short)uVar13 < 0) {
        iVar10 = local_11c;
      }
      if (iVar11 <= iVar10) break;
      local_c0[0] = 0x23;
      FUN_1424a6cf0(&local_128,local_c0,0,1);
      uVar13 = (uint)local_120;
    }
  }
LAB_142566cca:
  local_130 = local_e8 >> 0x20;
  while( true ) {
    iVar10 = local_11c;
    if (-1 < (short)local_120) {
      iVar10 = (int)(short)local_120 >> 5;
    }
    if (iVar8 <= iVar10 + iVar15) break;
    local_c0[0] = 0x30;
    FUN_1424a9130(&local_128,0,0,local_c0,0,1);
  }
  for (; cVar4 = local_69, iVar10 = local_70, iVar8 = local_c8, -iVar15 < iVar9;
      iVar15 = iVar15 + -1) {
    local_c0[0] = 0x30;
    FUN_1424a6cf0(&local_128,local_c0,0,1);
  }
  iVar9 = local_11c;
  if (-1 < (short)local_120) {
    iVar9 = (int)(short)local_120 >> 5;
  }
  iVar9 = FUN_142501300(local_c4,iVar9 + iVar15);
  if (iVar8 != 100) {
    iVar9 = FUN_142501300(iVar8,iVar9);
  }
  iVar8 = iVar15;
  if (iVar10 != 100) {
    iVar8 = FUN_142501310(-iVar10,iVar15);
  }
  while (iVar10 = iVar9, iVar8 < iVar10) {
    iVar9 = local_11c;
    if (-1 < (short)local_120) {
      iVar9 = (int)(short)local_120 >> 5;
    }
    uVar13 = (iVar15 - iVar10) + iVar9;
    if (((int)uVar13 < 0) || (iVar9 <= (int)uVar13)) {
      local_c0[0] = 0x23;
      FUN_1424a6cf0(local_68,local_c0,0,1);
    }
    else {
      puVar14 = local_11e;
      if (((int)(short)local_120 & 2U) == 0) {
        puVar14 = local_110;
      }
      local_c0[0] = *(undefined2 *)(puVar14 + (ulonglong)uVar13 * 2);
      FUN_1424a6cf0(local_68,local_c0,0,1);
    }
    iVar9 = iVar10 + -1;
    if (iVar9 == 0 && (iVar8 < 0 || cVar4 != '\0')) {
      local_c0[0] = 0x2e;
      FUN_1424a6cf0(local_68,local_c0,0,1);
    }
    if (local_6a != '\0') {
      if ((1 < iVar10) && (iVar9 == iVar7)) {
        local_c0[0] = 0x2c;
        FUN_1424a6cf0(local_68,local_c0,0,1);
      }
      if (((iVar9 - iVar7 != 0 && iVar7 <= iVar9) && (0 < (int)local_d8)) &&
         ((iVar9 - iVar7) % (int)local_d8 == 0)) {
        local_c0[0] = 0x2c;
        FUN_1424a6cf0(local_68,local_c0,0,1);
      }
    }
  }
  iVar15 = FUN_142501310(100,0xffffffff);
  if (local_d0 != iVar15) {
    local_c0[0] = 0x45;
    FUN_1424a6cf0(local_68,local_c0,0,1);
    if (local_6b != '\0') {
      local_c0[0] = 0x2b;
      FUN_1424a6cf0(local_68,local_c0,0,1);
    }
    for (iVar15 = 0; iVar15 < local_d0; iVar15 = iVar15 + 1) {
      local_c0[0] = 0x30;
      FUN_1424a6cf0(local_68,local_c0,0,1);
    }
  }
  if (*(short *)(local_68 + 1) < 0) {
    iVar15 = *(int *)((longlong)local_68 + 0xc);
  }
  else {
    iVar15 = (int)*(short *)(local_68 + 1) >> 5;
  }
  FUN_14256c9f0(&local_2c0,local_c0,0);
  iVar7 = local_b4;
  if (-1 < local_b8) {
    iVar7 = (int)local_b8 >> 5;
  }
  FUN_1424a9690(local_68,local_c0,0,iVar7);
  FUN_140859a90(local_c0);
  if ((local_cc < 1) || ((char)local_e8 != '\0')) goto LAB_1425672a1;
  while( true ) {
    if (*(short *)(local_68 + 1) < 0) {
      iVar7 = *(int *)((longlong)local_68 + 0xc);
    }
    else {
      iVar7 = (int)*(short *)(local_68 + 1) >> 5;
    }
    if (local_cc <= iVar7) break;
    local_c0[0] = 0x23;
    FUN_1424a9130(local_68,local_78,0,local_c0,0,1);
    iVar15 = iVar15 + 1;
  }
  switch(local_130 & 0xffffffff) {
  case 0:
    FUN_1424a6be0(local_3c0,local_1b0);
    iVar7 = FUN_1425678b0(local_3c0,local_68,0);
    local_c0[0] = 0x2a;
    FUN_1424a9130(local_68,0,0,local_c0,0,1);
    goto LAB_1425671c3;
  case 1:
    FUN_1424a6be0(local_380,local_1b0);
    iVar7 = FUN_1425678b0(local_380,local_68,local_78);
    local_c0[0] = 0x2a;
    FUN_1424a9130(local_68,local_78,0,local_c0,0,1);
LAB_1425671c3:
    local_78 = (ulonglong)((int)local_78 + iVar7 + 1);
    iVar15 = iVar15 + iVar7 + 1;
    break;
  case 2:
    FUN_1424a6be0(local_340,local_1b0);
    FUN_1425678b0(local_340,local_68,iVar15);
    local_c0[0] = 0x2a;
    FUN_1424a9130(local_68,iVar15,0,local_c0,0,1);
    break;
  case 3:
    local_c0[0] = 0x2a;
    FUN_1424a6cf0(local_68,local_c0,0,1);
    sVar5 = *(short *)(local_68 + 1);
    iVar7 = *(int *)((longlong)local_68 + 0xc);
    FUN_1424a6be0(local_300,local_1b0);
    iVar8 = (int)sVar5 >> 5;
    if (sVar5 < 0) {
      iVar8 = iVar7;
    }
    FUN_1425678b0(local_300,local_68,iVar8);
  }
  if (*local_e0 < 1) {
LAB_1425672a1:
    cVar4 = FUN_14256caf0(&local_2c0);
    if (cVar4 != '\0') {
      local_c0[0] = 0x3b;
      FUN_1424a6cf0(local_68,local_c0,0,1);
      FUN_14256c9f0(&local_2c0,local_c0,0x300);
      puVar3 = local_68;
      if (-1 < local_b8) {
        local_b4 = (int)local_b8 >> 5;
      }
      FUN_1424a9690(local_68,local_c0,0,local_b4);
      FUN_140859a90(local_c0);
      FUN_1424a6be0(local_c0,puVar3);
      FUN_1424a9690(local_68,local_c0,local_78,iVar15 - (int)local_78);
      FUN_14256c9f0(&local_2c0,local_170,0x200);
      if (-1 < local_168) {
        local_164 = (int)local_168 >> 5;
      }
      FUN_1424a9690(local_68,local_170,0,local_164);
      FUN_140859a90(local_170);
      FUN_140859a90(local_c0);
    }
  }
  FUN_140859a90(&local_128);
  local_2c0 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(local_1f8);
  FUN_140859a90(local_238);
  FUN_140859a90(local_278);
  FUN_140859a90(local_2b8);
  FUN_142573db0(&local_2c0);
  FUN_140859a90(local_1b0);
  return local_68;
}



// FUNCTION 142567450 Unwind@142567450 body=69 status=ok
// SIG undefined Unwind@142567450(void)

void Unwind_142567450(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x288);
  return;
}



// FUNCTION 1425674a0 Unwind@1425674a0 body=69 status=ok
// SIG undefined Unwind@1425674a0(void)

void Unwind_1425674a0(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0x338);
  return;
}



// FUNCTION 1425674f0 Unwind@1425674f0 body=68 status=ok
// SIG undefined Unwind@1425674f0(void)

void Unwind_1425674f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x338);
  return;
}



// FUNCTION 142567540 Unwind@142567540 body=68 status=ok
// SIG undefined Unwind@142567540(void)

void Unwind_142567540(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x338);
  return;
}



// FUNCTION 142567590 Unwind@142567590 body=69 status=ok
// SIG undefined Unwind@142567590(void)

void Unwind_142567590(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x288);
  return;
}



// FUNCTION 1425675e0 Unwind@1425675e0 body=68 status=ok
// SIG undefined Unwind@1425675e0(void)

void Unwind_1425675e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x338);
  return;
}



// FUNCTION 142567630 Unwind@142567630 body=68 status=ok
// SIG undefined Unwind@142567630(void)

void Unwind_142567630(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x2d0);
  return;
}



// FUNCTION 142567680 Unwind@142567680 body=67 status=ok
// SIG undefined Unwind@142567680(void)

void Unwind_142567680(undefined8 param_1,longlong param_2)

{
  FUN_1424caee0(param_2 + 0x138);
  return;
}



// FUNCTION 1425676d0 Unwind@1425676d0 body=67 status=ok
// SIG undefined Unwind@1425676d0(void)

void Unwind_1425676d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x248);
  return;
}



// FUNCTION 142567720 Unwind@142567720 body=67 status=ok
// SIG undefined Unwind@142567720(void)

void Unwind_142567720(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x390));
  return;
}



// FUNCTION 142567770 Unwind@142567770 body=67 status=ok
// SIG undefined Unwind@142567770(void)

void Unwind_142567770(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x338);
  return;
}



// FUNCTION 1425677c0 FUN_1425677c0 body=151 status=ok
// SIG undefined FUN_1425677c0(void)

undefined8 * FUN_1425677c0(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 10) = 2;
  param_1[0x11] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x12) = 2;
  param_1[0x19] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1a) = 2;
  *(undefined1 *)((longlong)param_1 + 0x109) = 1;
  FUN_14256c280();
  return param_1;
}



// FUNCTION 142567860 Unwind@142567860 body=66 status=ok
// SIG undefined Unwind@142567860(void)

void Unwind_142567860(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  FUN_142573db0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1425678b0 FUN_1425678b0 body=697 status=ok
// SIG undefined FUN_1425678b0(void)

int FUN_1425678b0(longlong param_1,longlong param_2,int param_3)

{
  short sVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  short local_4a [5];
  
  local_4a[1] = -2;
  local_4a[2] = -1;
  local_4a[3] = -1;
  local_4a[4] = -1;
  sVar3 = *(short *)(param_1 + 8);
  iVar9 = (int)sVar3 >> 5;
  iVar4 = *(int *)(param_1 + 0xc);
  iVar8 = iVar9;
  if (sVar3 < 0) {
    iVar8 = iVar4;
  }
  if (iVar8 == 0) {
    FUN_1424a8e40();
    if (*(short *)(param_1 + 8) < 0) {
      iVar4 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 8) >> 5;
    }
    FUN_1424a9130(param_1,0,iVar4,&DAT_1499ecf42,0,0xffffffff);
    sVar3 = *(short *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    iVar9 = (int)sVar3 >> 5;
  }
  sVar1 = *(short *)(param_2 + 8);
  iVar8 = *(int *)(param_2 + 0xc);
  if (sVar3 < 0) {
    iVar9 = iVar4;
  }
  if (iVar9 == 1) {
    cVar2 = FUN_1424a7e30(param_1,0,1,&DAT_1499e0136,0,0xffffffff);
    if (cVar2 == '\0') {
      FUN_1424a9130(param_2,param_3,0,&DAT_1499e0130,0,0xffffffff);
    }
    else {
      if (*(short *)(param_1 + 8) < 0) {
        iVar4 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar4 = (int)*(short *)(param_1 + 8) >> 5;
      }
      FUN_1424a9610(param_2,param_3,0,param_1,0,iVar4);
    }
  }
  else {
    local_4a[0] = 0x27;
    uVar10 = 0;
    FUN_1424a9130(param_2,param_3,0,local_4a,0,1);
    iVar4 = 1;
    while( true ) {
      sVar3 = *(short *)(param_1 + 8);
      if (sVar3 < 0) {
        uVar6 = *(uint *)(param_1 + 0xc);
      }
      else {
        uVar6 = (int)sVar3 >> 5;
      }
      if ((int)uVar6 <= (int)uVar10) break;
      sVar5 = -1;
      if (uVar10 < uVar6) {
        lVar7 = param_1 + 10;
        if (((int)sVar3 & 2U) == 0) {
          lVar7 = *(longlong *)(param_1 + 0x18);
        }
        sVar5 = *(short *)(lVar7 + (ulonglong)uVar10 * 2);
        if (sVar5 != 0x27) goto LAB_142567a90;
        FUN_1424a9130(param_2,iVar4 + param_3,0,&DAT_1499e0130,0,0xffffffff);
        iVar9 = 2;
      }
      else {
LAB_142567a90:
        local_4a[0] = sVar5;
        FUN_1424a9130(param_2,iVar4 + param_3,0,local_4a,0,1);
        iVar9 = 1;
      }
      iVar4 = iVar4 + iVar9;
      uVar10 = uVar10 + 1;
    }
    local_4a[0] = 0x27;
    FUN_1424a9130(param_2,iVar4 + param_3,0,local_4a,0,1);
  }
  iVar4 = (int)sVar1 >> 5;
  if (sVar1 < 0) {
    iVar4 = iVar8;
  }
  if (*(short *)(param_2 + 8) < 0) {
    iVar9 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar9 = (int)*(short *)(param_2 + 8) >> 5;
  }
  FUN_140859a90(param_1);
  return iVar9 - iVar4;
}



// FUNCTION 142567b80 Unwind@142567b80 body=55 status=ok
// SIG undefined Unwind@142567b80(void)

void Unwind_142567b80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 142567bc0 Unwind@142567bc0 body=56 status=ok
// SIG undefined Unwind@142567bc0(void)

void Unwind_142567bc0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x48) = &DAT_1499e0136;
  return;
}



// FUNCTION 142567c00 Unwind@142567c00 body=56 status=ok
// SIG undefined Unwind@142567c00(void)

void Unwind_142567c00(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x58) = &DAT_1499e0130;
  return;
}



// FUNCTION 142567c40 Unwind@142567c40 body=56 status=ok
// SIG undefined Unwind@142567c40(void)

void Unwind_142567c40(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x38) = &DAT_1499e0130;
  return;
}



// FUNCTION 142567c80 FUN_142567c80 body=3233 status=ok
// SIG undefined FUN_142567c80(void)

undefined8 *
FUN_142567c80(undefined8 *param_1,longlong param_2,longlong param_3,byte param_4,undefined4 *param_5
             )

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  short sVar10;
  int iVar11;
  undefined8 uStack_bf0;
  undefined2 auStack_be8 [20];
  undefined8 uStack_bc0;
  undefined8 uStack_bb0;
  undefined2 auStack_ba8 [8];
  undefined4 local_b98;
  int local_b90;
  short *local_b88;
  undefined4 local_b80;
  int local_b78;
  undefined8 uStack_b70;
  undefined2 local_b68 [4];
  ushort auStack_b60 [2];
  int aiStack_b5c [13];
  undefined1 local_b28 [8];
  ushort auStack_b20 [2];
  int aiStack_b1c [13];
  undefined1 local_ae8 [64];
  undefined1 local_aa8 [64];
  undefined1 local_a68 [64];
  undefined1 local_a28 [64];
  undefined1 local_9e8 [64];
  undefined1 local_9a8 [64];
  undefined1 local_968 [64];
  undefined1 local_928 [64];
  undefined1 local_8e8 [64];
  undefined1 local_8a8 [64];
  undefined1 local_868 [64];
  undefined1 local_828 [64];
  undefined1 local_7e8 [64];
  undefined1 local_7a8 [64];
  undefined1 local_768 [64];
  undefined1 local_728 [64];
  undefined1 local_6e8 [64];
  undefined1 local_6a8 [64];
  undefined1 local_668 [64];
  undefined1 local_628 [64];
  undefined1 local_5e8 [64];
  undefined1 local_5a8 [64];
  undefined1 local_568 [64];
  undefined1 local_528 [64];
  undefined1 local_4e8 [64];
  undefined1 local_4a8 [64];
  undefined1 local_468 [64];
  undefined1 local_428 [64];
  undefined1 local_3e8 [64];
  undefined1 local_3a8 [64];
  undefined1 local_368 [64];
  undefined1 local_328 [64];
  undefined1 local_2e8 [64];
  undefined1 local_2a8 [64];
  undefined1 local_268 [64];
  undefined1 local_228 [64];
  undefined1 local_1e8 [64];
  undefined1 local_1a8 [64];
  undefined1 local_168 [64];
  undefined1 local_128 [72];
  short local_e0 [4];
  short local_d8;
  int local_d4;
  short local_a0 [4];
  ushort local_98;
  int local_94;
  longlong local_60;
  undefined8 *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = 0x88;
  local_58 = param_1;
  local_50 = param_3;
  do {
    *(undefined ***)((longlong)&uStack_bf0 + lVar5) = &PTR_FUN_149e18960;
    *(undefined2 *)((longlong)auStack_be8 + lVar5) = 2;
    *(undefined ***)((longlong)&uStack_bb0 + lVar5) = &PTR_FUN_149e18960;
    *(undefined2 *)((longlong)auStack_ba8 + lVar5) = 2;
    *(undefined ***)((longlong)&uStack_b70 + lVar5) = &PTR_FUN_149e18960;
    *(undefined2 *)((longlong)local_b68 + lVar5) = 2;
    lVar5 = lVar5 + 0xc0;
  } while (lVar5 != 0xb08);
  uStack_bc0 = 0x142567d1b;
  FUN_1424a6c90(local_a0,&DAT_1499ecf46);
  local_60 = (ulonglong)(param_4 ^ 1) * 0x40;
  uStack_bc0 = 0x142567d44;
  FUN_1424a7ca0(local_b68 + (ulonglong)(param_4 ^ 1) * 0x20,local_a0);
  uStack_bc0 = 0x142567d4c;
  FUN_140859a90(local_a0);
  uVar9 = (ulonglong)param_4;
  lVar5 = uVar9 * 0x40;
  uStack_bc0 = 0x142567d6f;
  FUN_1424a7c80(local_b68 + uVar9 * 0x20,local_50 + 200);
  uStack_bc0 = 0x142567d82;
  FUN_1424a6c90(local_a0,&DAT_1499ecf4a);
  uStack_bc0 = 0x142567da0;
  FUN_1424a7ca0(local_ae8 + local_60,local_a0);
  uStack_bc0 = 0x142567da8;
  FUN_140859a90(local_a0);
  uStack_bc0 = 0x142567dc3;
  FUN_1424a7c80(local_ae8 + lVar5,local_50 + 0x308);
  uStack_bc0 = 0x142567dd6;
  FUN_1424a6c90(local_a0,&DAT_1499ecf4e);
  uStack_bc0 = 0x142567df0;
  FUN_1424a7ca0(local_a68 + local_60,local_a0);
  uStack_bc0 = 0x142567df8;
  FUN_140859a90(local_a0);
  uStack_bc0 = 0x142567e13;
  FUN_1424a7c80(local_a68 + lVar5,local_50 + 8);
  uStack_bc0 = 0x142567e26;
  FUN_1424a6c90(local_a0,&DAT_1499ecf52);
  uStack_bc0 = 0x142567e40;
  FUN_1424a7ca0(local_9e8 + local_60,local_a0);
  uStack_bc0 = 0x142567e48;
  FUN_140859a90(local_a0);
  uStack_bc0 = 0x142567e63;
  FUN_1424a7c80(local_9e8 + lVar5,local_50 + 0x48);
  uStack_bc0 = 0x142567e76;
  FUN_1424a6c90(local_a0,&DAT_1499ecf56);
  uStack_bc0 = 0x142567e90;
  FUN_1424a7ca0(local_968 + local_60,local_a0);
  uStack_bc0 = 0x142567e98;
  FUN_140859a90(local_a0);
  uStack_bc0 = 0x142567eb6;
  FUN_1424a7c80(local_968 + lVar5,local_50 + 0x188);
  uStack_bc0 = 0x142567ec9;
  FUN_1424a6c90(local_a0,&DAT_1499ecf5a);
  uStack_bc0 = 0x142567ee3;
  FUN_1424a7ca0(local_8e8 + local_60,local_a0);
  uStack_bc0 = 0x142567eeb;
  FUN_140859a90(local_a0);
  uStack_bc0 = 0x142567f09;
  FUN_1424a7c80(local_8e8 + lVar5,local_50 + 0x1c8);
  uStack_bc0 = 0x142567f1c;
  FUN_1424a6c90(local_a0,&DAT_1499ecf5e);
  uStack_bc0 = 0x142567f36;
  FUN_1424a7ca0(local_868 + local_60,local_a0);
  uStack_bc0 = 0x142567f3e;
  FUN_140859a90(local_a0);
  uStack_bc0 = 0x142567f5c;
  FUN_1424a7c80(local_868 + lVar5,local_50 + 0x88);
  uStack_bc0 = 0x142567f6f;
  FUN_1424a6c90(local_a0,&DAT_1499ecf62);
  uStack_bc0 = 0x142567f89;
  FUN_1424a7ca0(local_7e8 + local_60,local_a0);
  uStack_bc0 = 0x142567f91;
  FUN_140859a90(local_a0);
  uStack_bc0 = 0x142567faf;
  FUN_1424a7c80(local_7e8 + lVar5,local_50 + 0x408);
  uStack_bc0 = 0x142567fc2;
  FUN_1424a6c90(local_a0,&DAT_1499ecf66);
  uStack_bc0 = 0x142567fdc;
  FUN_1424a7ca0(local_768 + local_60,local_a0);
  uStack_bc0 = 0x142567fe4;
  FUN_140859a90(local_a0);
  uStack_bc0 = 0x142568002;
  FUN_1424a7c80(local_768 + lVar5,local_50 + 0x2c8);
  uStack_bc0 = 0x142568015;
  FUN_1424a6c90(local_a0,&DAT_1499ecf6a);
  uStack_bc0 = 0x14256802f;
  FUN_1424a7ca0(local_6e8 + local_60,local_a0);
  uStack_bc0 = 0x142568037;
  FUN_140859a90(local_a0);
  uStack_bc0 = 0x142568055;
  FUN_1424a7c80(local_6e8 + lVar5,local_50 + 0x348);
  uStack_bc0 = 0x142568068;
  FUN_1424a6c90(local_a0,&DAT_1499ecf6e);
  uStack_bc0 = 0x142568082;
  FUN_1424a7ca0(local_668 + local_60,local_a0);
  uStack_bc0 = 0x14256808a;
  FUN_140859a90(local_a0);
  uStack_bc0 = 0x1425680a8;
  FUN_1424a7c80(local_668 + lVar5,local_50 + 0x148);
  uVar7 = 0;
  do {
    lVar5 = (ulonglong)uVar7 + 0xb;
    sVar1 = *(short *)((longlong)auStack_b60 + local_60 + lVar5 * 0x80);
    if (sVar1 < 0) {
      iVar11 = *(int *)((longlong)aiStack_b5c + local_60 + lVar5 * 0x80);
    }
    else {
      iVar11 = (int)sVar1 >> 5;
    }
    uStack_bc0 = 0x142568103;
    FUN_1424a90a0((longlong)local_b68 + local_60 + lVar5 * 0x80,0,iVar11,uVar7 + 0x30);
    uStack_bc0 = 0x142568127;
    FUN_1424a7c80(local_b68 + lVar5 * 0x40 + uVar9 * 0x20);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 10);
  uVar7 = 0;
  do {
    uStack_bc0 = 0x14256815c;
    FUN_1424a6c10(local_a0,0x2019);
    uStack_bc0 = 0x142568168;
    FUN_1424a6c10(local_e0,0x27);
    local_b78 = local_94;
    if (-1 < (short)local_98) {
      local_b78 = (int)(short)local_98 >> 5;
    }
    local_b90 = local_d4;
    if (-1 < local_d8) {
      local_b90 = (int)local_d8 >> 5;
    }
    if ((short)auStack_b60[(ulonglong)uVar7 * 0x40 + uVar9 * 0x20] < 0) {
      iVar11 = aiStack_b5c[(ulonglong)uVar7 * 0x20 + uVar9 * 0x10];
    }
    else {
      iVar11 = (int)(short)auStack_b60[(ulonglong)uVar7 * 0x40 + uVar9 * 0x20] >> 5;
    }
    local_b80 = 0;
    local_b98 = 0;
    uStack_bc0 = 0x1425681fe;
    local_b88 = local_a0;
    FUN_1424a8b50(local_b68 + (ulonglong)uVar7 * 0x40 + uVar9 * 0x20,0,iVar11,local_e0);
    uStack_bc0 = 0x142568206;
    FUN_140859a90(local_e0);
    uStack_bc0 = 0x14256820e;
    FUN_140859a90(local_a0);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x15);
  *local_58 = &PTR_FUN_149e18960;
  *(undefined2 *)(local_58 + 1) = 2;
  local_60 = param_2 + 10;
  uVar7 = 0;
  local_50 = 0;
LAB_142568289:
  sVar1 = *(short *)(param_2 + 8);
  uVar3 = (uint)local_50;
  if (sVar1 < 0) {
    uVar6 = *(uint *)(param_2 + 0xc);
  }
  else {
    uVar6 = (int)sVar1 >> 5;
  }
  if ((int)uVar6 <= (int)uVar7) {
    if (uVar3 - 3 < 2) {
      local_a0[0] = 0x27;
      uStack_bc0 = 0x14256878e;
      FUN_1424a6cf0(local_58,local_a0,0,1);
    }
    else if (uVar3 != 0) {
      *param_5 = 0x10107;
    }
    uStack_bc0 = 0x1425687ad;
    FUN_140859a90(local_128);
    uStack_bc0 = 0x1425687b9;
    FUN_140859a90(local_168);
    uStack_bc0 = 0x1425687c5;
    FUN_140859a90(local_1a8);
    uStack_bc0 = 0x1425687d1;
    FUN_140859a90(local_1e8);
    uStack_bc0 = 0x1425687dd;
    FUN_140859a90(local_228);
    uStack_bc0 = 0x1425687e9;
    FUN_140859a90(local_268);
    uStack_bc0 = 0x1425687f5;
    FUN_140859a90(local_2a8);
    uStack_bc0 = 0x142568801;
    FUN_140859a90(local_2e8);
    uStack_bc0 = 0x14256880d;
    FUN_140859a90(local_328);
    uStack_bc0 = 0x142568819;
    FUN_140859a90(local_368);
    uStack_bc0 = 0x142568825;
    FUN_140859a90(local_3a8);
    uStack_bc0 = 0x142568831;
    FUN_140859a90(local_3e8);
    uStack_bc0 = 0x14256883d;
    FUN_140859a90(local_428);
    uStack_bc0 = 0x142568849;
    FUN_140859a90(local_468);
    uStack_bc0 = 0x142568855;
    FUN_140859a90(local_4a8);
    uStack_bc0 = 0x142568861;
    FUN_140859a90(local_4e8);
    uStack_bc0 = 0x14256886d;
    FUN_140859a90(local_528);
    uStack_bc0 = 0x142568879;
    FUN_140859a90(local_568);
    uStack_bc0 = 0x142568885;
    FUN_140859a90(local_5a8);
    uStack_bc0 = 0x142568891;
    FUN_140859a90(local_5e8);
    uStack_bc0 = 0x14256889d;
    FUN_140859a90(local_628);
    uStack_bc0 = 0x1425688a9;
    FUN_140859a90(local_668);
    uStack_bc0 = 0x1425688b5;
    FUN_140859a90(local_6a8);
    uStack_bc0 = 0x1425688c1;
    FUN_140859a90(local_6e8);
    uStack_bc0 = 0x1425688cd;
    FUN_140859a90(local_728);
    uStack_bc0 = 0x1425688d9;
    FUN_140859a90(local_768);
    uStack_bc0 = 0x1425688e5;
    FUN_140859a90(local_7a8);
    uStack_bc0 = 0x1425688f1;
    FUN_140859a90(local_7e8);
    uStack_bc0 = 0x1425688fd;
    FUN_140859a90(local_828);
    uStack_bc0 = 0x142568909;
    FUN_140859a90(local_868);
    uStack_bc0 = 0x142568915;
    FUN_140859a90(local_8a8);
    uStack_bc0 = 0x142568921;
    FUN_140859a90(local_8e8);
    uStack_bc0 = 0x14256892d;
    FUN_140859a90(local_928);
    uStack_bc0 = 0x142568939;
    FUN_140859a90(local_968);
    uStack_bc0 = 0x142568945;
    FUN_140859a90(local_9a8);
    uStack_bc0 = 0x142568951;
    FUN_140859a90(local_9e8);
    uStack_bc0 = 0x14256895d;
    FUN_140859a90(local_a28);
    uStack_bc0 = 0x142568969;
    FUN_140859a90(local_a68);
    uStack_bc0 = 0x142568975;
    FUN_140859a90(local_aa8);
    uStack_bc0 = 0x14256897e;
    FUN_140859a90(local_ae8);
    uStack_bc0 = 0x142568987;
    FUN_140859a90(local_b28);
    uStack_bc0 = 0x142568990;
    FUN_140859a90(local_b68);
    return local_58;
  }
  sVar10 = -1;
  if (uVar7 < uVar6) {
    lVar5 = local_60;
    if (((int)sVar1 & 2U) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x18);
    }
    sVar10 = *(short *)(lVar5 + (longlong)(int)uVar7 * 2);
    if (sVar10 != 0x27) goto LAB_142568320;
    switch(local_50 & 0xffffffff) {
    case 0:
      local_a0[0] = 0x27;
      uStack_bc0 = 0x142568272;
      FUN_1424a6cf0(local_58,local_a0,0,1);
      goto LAB_142568272;
    case 1:
      local_a0[0] = 0x27;
      uStack_bc0 = 0x142568315;
      FUN_1424a6cf0(local_58,local_a0,0,1);
      local_50 = 0;
      break;
    case 2:
      local_50 = 3;
      break;
    case 3:
      local_a0[0] = 0x27;
      uStack_bc0 = 0x14256872a;
      FUN_1424a6cf0(local_58,local_a0,0,1);
      local_a0[0] = 0x27;
      uStack_bc0 = 0x14256874b;
      FUN_1424a6cf0(local_58,local_a0,0,1);
LAB_142568272:
      local_50 = 1;
      break;
    case 4:
      local_50 = 5;
      break;
    default:
      local_a0[0] = 0x27;
      uStack_bc0 = 0x1425686d4;
      FUN_1424a6cf0(local_58,local_a0,0,1);
      local_a0[0] = 0x27;
      uStack_bc0 = 0x1425686f5;
      FUN_1424a6cf0(local_58,local_a0,0,1);
      local_50 = 4;
    }
LAB_142568280:
    goto LAB_142568287;
  }
LAB_142568320:
  if ((4 < uVar3) || ((0x19U >> (uVar3 & 0x1f) & 1) == 0)) {
    uStack_bc0 = 0x1425685c6;
    local_a0[0] = sVar10;
    FUN_1424a6cf0(local_58,local_a0,0,1);
    local_50 = 2;
    goto LAB_142568280;
  }
  for (lVar5 = 0; lVar5 != 0x15; lVar5 = lVar5 + 1) {
    if ((short)auStack_b60[lVar5 * 0x40] < 0) {
      iVar11 = aiStack_b5c[lVar5 * 0x20];
    }
    else {
      iVar11 = (int)(short)auStack_b60[lVar5 * 0x40] >> 5;
    }
    uStack_bc0 = 0x1425683b2;
    FUN_1424a84d0(param_2,local_a0,uVar7,iVar11);
    if ((local_98 & 1) == 0) {
      iVar11 = local_94;
      if (-1 < (short)local_98) {
        iVar11 = (int)(short)local_98 >> 5;
      }
      uVar2 = auStack_b60[lVar5 * 0x40];
      if ((short)uVar2 < 0) {
        iVar8 = aiStack_b5c[lVar5 * 0x20];
      }
      else {
        iVar8 = (int)(short)uVar2 >> 5;
      }
      if (((uVar2 & 1) == 0) && (iVar11 == iVar8)) {
        uStack_bc0 = 0x142568409;
        bVar4 = FUN_1412ae090(local_a0,local_b68 + lVar5 * 0x40);
        goto joined_r0x000142568359;
      }
    }
    else {
      bVar4 = (byte)auStack_b60[lVar5 * 0x40] & 1;
joined_r0x000142568359:
      if (bVar4 != 0) {
        if ((short)auStack_b60[lVar5 * 0x40] < 0) {
          iVar11 = aiStack_b5c[lVar5 * 0x20];
        }
        else {
          iVar11 = (int)(short)auStack_b60[lVar5 * 0x40] >> 5;
        }
        if ((int)local_50 - 3U < 2) {
          local_e0[0] = 0x27;
          uStack_bc0 = 0x142568668;
          FUN_1424a6cf0(local_58,local_e0,0,1);
          local_50 = 0;
        }
        if ((short)auStack_b20[lVar5 * 0x40] < 0) {
          iVar8 = aiStack_b1c[lVar5 * 0x20];
        }
        else {
          iVar8 = (int)(short)auStack_b20[lVar5 * 0x40] >> 5;
        }
        uStack_bc0 = 0x14256869f;
        FUN_1424a9690(local_58,local_b28 + lVar5 * 0x80,0,iVar8);
        uVar7 = (uVar7 + iVar11) - 1;
        goto LAB_1425686a4;
      }
    }
    uStack_bc0 = 0x14256841e;
    FUN_140859a90(local_a0);
  }
  lVar5 = 0;
LAB_142568460:
  if (lVar5 == 0x15) goto LAB_142568548;
  if ((short)auStack_b20[lVar5 * 0x40] < 0) {
    iVar11 = aiStack_b1c[lVar5 * 0x20];
  }
  else {
    iVar11 = (int)(short)auStack_b20[lVar5 * 0x40] >> 5;
  }
  uStack_bc0 = 0x1425684a2;
  FUN_1424a84d0(param_2,local_a0,uVar7,iVar11);
  if ((local_98 & 1) == 0) {
    iVar11 = local_94;
    if (-1 < (short)local_98) {
      iVar11 = (int)(short)local_98 >> 5;
    }
    uVar2 = auStack_b20[lVar5 * 0x40];
    if ((short)uVar2 < 0) {
      iVar8 = aiStack_b1c[lVar5 * 0x20];
    }
    else {
      iVar8 = (int)(short)uVar2 >> 5;
    }
    if (((uVar2 & 1) == 0) && (iVar11 == iVar8)) {
      uStack_bc0 = 0x14256850e;
      bVar4 = FUN_1412ae090(local_a0,local_b28 + lVar5 * 0x80);
      goto joined_r0x000142568447;
    }
  }
  else {
    bVar4 = (byte)auStack_b20[lVar5 * 0x40] & 1;
joined_r0x000142568447:
    if (bVar4 != 0) {
      if ((int)local_50 == 0) {
        local_e0[0] = 0x27;
        uStack_bc0 = 0x1425685fe;
        FUN_1424a6cf0(local_58,local_e0,0,1);
        local_50 = 4;
      }
      uStack_bc0 = 0x14256862e;
      local_e0[0] = sVar10;
      FUN_1424a6cf0(local_58,local_e0,0,1);
LAB_1425686a4:
      uStack_bc0 = 0x1425686ac;
      FUN_140859a90(local_a0);
      uVar7 = uVar7 + 1;
      goto LAB_142568289;
    }
  }
  uStack_bc0 = 0x142568523;
  FUN_140859a90(local_a0);
  lVar5 = lVar5 + 1;
  goto LAB_142568460;
LAB_142568548:
  if ((int)local_50 - 3U < 2) {
    local_a0[0] = 0x27;
    uStack_bc0 = 0x142568578;
    FUN_1424a6cf0(local_58,local_a0,0,1);
    local_50 = 0;
  }
  uStack_bc0 = 0x1425685a1;
  local_a0[0] = sVar10;
  FUN_1424a6cf0(local_58,local_a0,0,1);
LAB_142568287:
  uVar7 = uVar7 + 1;
  goto LAB_142568289;
}



// FUNCTION 1425689b0 Unwind@1425689b0 body=58 status=ok
// SIG undefined Unwind@1425689b0(void)

void Unwind_1425689b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xad8);
  return;
}



// FUNCTION 1425689f0 Unwind@1425689f0 body=58 status=ok
// SIG undefined Unwind@1425689f0(void)

void Unwind_1425689f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb18);
  return;
}



// FUNCTION 142568a30 Unwind@142568a30 body=58 status=ok
// SIG undefined Unwind@142568a30(void)

void Unwind_142568a30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb18);
  return;
}



// FUNCTION 142568a70 Unwind@142568a70 body=58 status=ok
// SIG undefined Unwind@142568a70(void)

void Unwind_142568a70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb18);
  return;
}



// FUNCTION 142568ab0 Unwind@142568ab0 body=541 status=ok
// SIG undefined Unwind@142568ab0(void)

void Unwind_142568ab0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa90);
  FUN_140859a90(param_2 + 0xa50);
  FUN_140859a90(param_2 + 0xa10);
  FUN_140859a90(param_2 + 0x9d0);
  FUN_140859a90(param_2 + 0x990);
  FUN_140859a90(param_2 + 0x950);
  FUN_140859a90(param_2 + 0x910);
  FUN_140859a90(param_2 + 0x8d0);
  FUN_140859a90(param_2 + 0x890);
  FUN_140859a90(param_2 + 0x850);
  FUN_140859a90(param_2 + 0x810);
  FUN_140859a90(param_2 + 2000);
  FUN_140859a90(param_2 + 0x790);
  FUN_140859a90(param_2 + 0x750);
  FUN_140859a90(param_2 + 0x710);
  FUN_140859a90(param_2 + 0x6d0);
  FUN_140859a90(param_2 + 0x690);
  FUN_140859a90(param_2 + 0x650);
  FUN_140859a90(param_2 + 0x610);
  FUN_140859a90(param_2 + 0x5d0);
  FUN_140859a90(param_2 + 0x590);
  FUN_140859a90(param_2 + 0x550);
  FUN_140859a90(param_2 + 0x510);
  FUN_140859a90(param_2 + 0x4d0);
  FUN_140859a90(param_2 + 0x490);
  FUN_140859a90(param_2 + 0x450);
  FUN_140859a90(param_2 + 0x410);
  FUN_140859a90(param_2 + 0x3d0);
  FUN_140859a90(param_2 + 0x390);
  FUN_140859a90(param_2 + 0x350);
  FUN_140859a90(param_2 + 0x310);
  FUN_140859a90(param_2 + 0x2d0);
  FUN_140859a90(param_2 + 0x290);
  FUN_140859a90(param_2 + 0x250);
  FUN_140859a90(param_2 + 0x210);
  FUN_140859a90(param_2 + 0x1d0);
  FUN_140859a90(param_2 + 400);
  FUN_140859a90(param_2 + 0x150);
  FUN_140859a90(param_2 + 0x110);
  FUN_140859a90(param_2 + 0xd0);
  FUN_140859a90(param_2 + 0x90);
  FUN_140859a90(param_2 + 0x50);
  return;
}



// FUNCTION 142568cd0 Unwind@142568cd0 body=58 status=ok
// SIG undefined Unwind@142568cd0(void)

void Unwind_142568cd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0xb60));
  return;
}



// FUNCTION 142568d10 FUN_142568d10 body=451 status=ok
// SIG undefined FUN_142568d10(void)

void FUN_142568d10(longlong *param_1,char param_2,char param_3,int param_4,uint param_5,char param_6
                  ,longlong param_7)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong *local_58;
  short local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == -1) {
    cVar3 = (**(code **)(*param_1 + 0x30))();
    bVar1 = false;
    uVar9 = 0;
    uVar8 = 0;
    if (cVar3 == '\0') goto LAB_142568dc5;
  }
  else {
    if (((param_4 == 1) || (param_4 == 4)) || ((uVar9 = 0, param_3 == '\x01' && (param_4 - 5U < 2)))
       ) {
      bVar2 = (**(code **)(*param_1 + 0x28))(param_1);
      uVar9 = (uint)(bVar2 ^ 1);
    }
    cVar3 = (**(code **)(*param_1 + 0x30))();
    bVar1 = false;
    if (cVar3 == '\0') {
      uVar8 = 0;
      goto LAB_142568dc5;
    }
    bVar2 = (**(code **)(*param_1 + 0x38))();
    bVar1 = false;
    uVar8 = 0;
    if ((bVar2 & (byte)uVar9) != 1) goto LAB_142568dc5;
  }
  uVar8 = 0x200;
  bVar1 = true;
  uVar9 = (uint)(param_3 != -1);
LAB_142568dc5:
  local_5c = uVar8 | 0x100;
  if (param_2 == '\0') {
    local_5c = uVar8;
  }
  uVar8 = 0;
  if (param_5 == 6) {
    param_5 = uVar8;
  }
  local_5c = param_5 | local_5c;
  if (((!bVar1) && (param_2 != '\0')) && (uVar8 = (uint)(param_4 != 2), param_3 != -1)) {
    uVar8 = uVar9;
  }
  local_58 = param_1;
  iVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_5c);
  uVar4 = 2;
  if ((*(ushort *)(param_7 + 8) & 1) == 0) {
    uVar4 = *(ushort *)(param_7 + 8) & 0x1f;
  }
  *(ushort *)(param_7 + 8) = uVar4;
  iVar10 = iVar6 + uVar8;
  if (iVar10 != 0 && SCARRY4(iVar6,uVar8) == iVar10 < 0) {
    iVar6 = 0;
    do {
      sVar5 = 0x2d;
      if (((byte)uVar8 & iVar6 == 0) == 0) {
        sVar5 = (**(code **)(*local_58 + 8))(local_58,local_5c,iVar6 - uVar8);
      }
      sVar7 = 0x2b;
      if (sVar5 != 0x2d) {
        sVar7 = sVar5;
      }
      if ((char)uVar9 != '\0') {
        sVar5 = sVar7;
      }
      local_4a = sVar5;
      if (param_6 != '\0') {
        local_4a = 0x2030;
      }
      if (sVar5 != 0x25) {
        local_4a = sVar5;
      }
      FUN_1424a6cf0(param_7,&local_4a,0,1);
      iVar6 = iVar6 + 1;
    } while (iVar10 != iVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 142568ef0 FUN_142568ef0 body=84 status=ok
// SIG undefined FUN_142568ef0(void)

undefined8 * FUN_142568ef0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::number::impl::ParsedPatternInfo::vftable;
  FUN_142537d50(param_1 + 0x25);
  FUN_142537d50(param_1 + 0x10);
  FUN_140859a90(param_1 + 1);
  FUN_142573db0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142568f50 FUN_142568f50 body=22 status=ok
// SIG undefined FUN_142568f50(void)

undefined8 FUN_142568f50(undefined8 param_1)

{
  FUN_14256a780();
  return param_1;
}



// FUNCTION 142568f70 FUN_142568f70 body=28 status=ok
// SIG undefined FUN_142568f70(void)

undefined8 FUN_142568f70(undefined8 param_1,undefined8 param_2)

{
  FUN_142569560(param_2,param_1);
  return param_2;
}



// FUNCTION 142568f90 FUN_142568f90 body=28 status=ok
// SIG undefined FUN_142568f90(void)

undefined8 FUN_142568f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1426226e0(param_1,param_2,0,param_3);
  return param_1;
}



// FUNCTION 142568fb0 FUN_142568fb0 body=264 status=ok
// SIG undefined FUN_142568fb0(void)

undefined8 *
FUN_142568fb0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  undefined4 uVar15;
  undefined4 uVar16;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_14256d6a0(param_1 + 2,param_2 + 2,param_3,param_4,param_1 + 2,0xfffffffffffffffe);
  FUN_14256d6a0(param_1 + 5,param_2 + 5);
  param_1[0x10] = param_2[0x10];
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 9);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar6 = *(undefined4 *)(param_2 + 10);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar8 = *(undefined4 *)(param_2 + 0xb);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar10 = *(undefined4 *)(param_2 + 0xc);
  uVar11 = *(undefined4 *)((longlong)param_2 + 100);
  uVar12 = *(undefined4 *)(param_2 + 0xd);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar15 = *(undefined4 *)(param_2 + 0xf);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar14;
  *(undefined4 *)(param_1 + 0xf) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar16;
  *(undefined4 *)(param_1 + 0xc) = uVar10;
  *(undefined4 *)((longlong)param_1 + 100) = uVar11;
  *(undefined4 *)(param_1 + 0xd) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar13;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
  *(undefined4 *)(param_1 + 0xb) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar9;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 9) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  iVar1 = *(int *)(param_2 + 0x11);
  *(int *)(param_1 + 0x11) = iVar1;
  if (iVar1 - 1U < 2) {
    param_1[0x12] = param_2[0x12];
    param_2[0x12] = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x13] = param_2[0x13];
  FUN_14256d0f0(param_1 + 0x15,param_2 + 0x15);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc4);
  uVar3 = *(undefined4 *)(param_2 + 0x19);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar6 = *(undefined4 *)(param_2 + 0x1a);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar8 = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar5;
  *(undefined4 *)(param_1 + 0x1a) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar7;
  *(undefined4 *)(param_1 + 0x1b) = uVar8;
  FUN_1424a3e40(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 1425690c0 Unwind@1425690c0 body=21 status=ok
// SIG undefined Unwind@1425690c0(void)

void Unwind_1425690c0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1425690e0 Unwind@1425690e0 body=34 status=ok
// SIG undefined Unwind@1425690e0(void)

void Unwind_1425690e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142569110 FUN_142569110 body=32 status=ok
// SIG undefined FUN_142569110(void)

longlong FUN_142569110(longlong param_1)

{
  FUN_14256a900();
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  return param_1;
}



// FUNCTION 142569130 FUN_142569130 body=435 status=ok
// SIG undefined FUN_142569130(void)

undefined8 * FUN_142569130(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_14256d6e0(param_1 + 2,param_2 + 2);
  FUN_14256d6e0(param_1 + 5,param_2 + 5);
  param_1[0x10] = param_2[0x10];
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 9);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar7 = *(undefined4 *)(param_2 + 10);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar9 = *(undefined4 *)(param_2 + 0xb);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar11 = *(undefined4 *)(param_2 + 0xc);
  uVar12 = *(undefined4 *)((longlong)param_2 + 100);
  uVar13 = *(undefined4 *)(param_2 + 0xd);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar16 = *(undefined4 *)(param_2 + 0xf);
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar15;
  *(undefined4 *)(param_1 + 0xf) = uVar16;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar17;
  *(undefined4 *)(param_1 + 0xc) = uVar11;
  *(undefined4 *)((longlong)param_1 + 100) = uVar12;
  *(undefined4 *)(param_1 + 0xd) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar14;
  *(undefined4 *)(param_1 + 10) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0xb) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar10;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 9) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
  if (param_1 != param_2) {
    if (((*(int *)(param_1 + 0x11) == 2) || (*(int *)(param_1 + 0x11) == 1)) &&
       (puVar18 = (undefined8 *)param_1[0x12], puVar18 != (undefined8 *)0x0)) {
      (**(code **)*puVar18)(puVar18,1);
    }
    iVar1 = *(int *)(param_2 + 0x11);
    *(int *)(param_1 + 0x11) = iVar1;
    if (iVar1 - 1U < 2) {
      param_1[0x12] = param_2[0x12];
      param_2[0x12] = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x13] = param_2[0x13];
  FUN_14256d110(param_1 + 0x15,param_2 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc4);
  uVar4 = *(undefined4 *)(param_2 + 0x19);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar7 = *(undefined4 *)(param_2 + 0x1a);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar9 = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 0x19) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0x1a) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar8;
  *(undefined4 *)(param_1 + 0x1b) = uVar9;
  FUN_1424a3e60(param_1 + 0x1c,param_2 + 0x1c);
  puVar18 = param_1 + 0x39;
  if (param_2[0x39] == 0) {
    *(undefined4 *)(param_1 + 0x3a) = 0;
    lVar2 = param_1[0x39];
    if (lVar2 != 0) {
      FUN_142569310(lVar2);
      FUN_1401773f0(lVar2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3a) = 0x80000000;
    lVar2 = param_1[0x39];
    if (lVar2 != 0) {
      FUN_142569310(lVar2);
      FUN_1401773f0(lVar2);
    }
    *puVar18 = param_2[0x39];
    puVar18 = param_2 + 0x39;
    *(undefined4 *)(param_2 + 0x3a) = 0;
  }
  *puVar18 = 0;
  return param_1;
}



// FUNCTION 1425692f0 Unwind@1425692f0 body=24 status=ok
// SIG undefined Unwind@1425692f0(void)

void Unwind_1425692f0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142569310 FUN_142569310 body=363 status=ok
// SIG undefined FUN_142569310(void)

void FUN_142569310(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_140859a90(param_1 + 0x1d8);
  FUN_140859a90(param_1 + 0x198);
  if (*(char *)(param_1 + 0x164) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x158));
  }
  thunk_FUN_1424b70d0(param_1 + 0x138);
  puVar1 = *(undefined8 **)(param_1 + 0x130);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x128);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x120);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x110);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x108);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x100);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)(param_1 + 8) = icu_64::number::impl::MicroProps::vftable;
  *(undefined ***)(param_1 + 200) = icu_64::number::impl::MultiplierFormatHandler::vftable;
  FUN_14256d170(param_1 + 0xd0);
  FUN_1426276d0(param_1 + 200);
  FUN_142629780(param_1 + 0xb8);
  FUN_142629780(param_1 + 0xa8);
  FUN_142629780(param_1 + 0x90);
  FUN_1426276d0(param_1 + 8);
  return;
}



// FUNCTION 142569480 FUN_142569480 body=126 status=ok
// SIG undefined FUN_142569480(void)

void FUN_142569480(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    FUN_142569310(lVar1);
    FUN_1401773f0(lVar1);
  }
  FUN_1414b3f60(param_1 + 0xe0);
  FUN_14256d170(param_1 + 0xa8);
  if (((*(int *)(param_1 + 0x88) == 2) || (*(int *)(param_1 + 0x88) == 1)) &&
     (puVar2 = *(undefined8 **)(param_1 + 0x90), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  thunk_FUN_1424b70d0(param_1 + 0x28);
  thunk_FUN_1424b70d0(param_1 + 0x10);
  return;
}



// FUNCTION 142569500 FUN_142569500 body=96 status=ok
// SIG undefined FUN_142569500(void)

void FUN_142569500(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1414b3f60(param_1 + 0xe0);
  FUN_14256d170(param_1 + 0xa8);
  if (((*(int *)(param_1 + 0x88) == 2) || (*(int *)(param_1 + 0x88) == 1)) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x90), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_1424b70d0(param_1 + 0x28);
  thunk_FUN_1424b70d0(param_1 + 0x10);
  return;
}



// FUNCTION 142569560 FUN_142569560 body=350 status=ok
// SIG undefined FUN_142569560(void)

undefined8 * FUN_142569560(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  FUN_1424cafc0();
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  FUN_14256d6e0(param_1 + 2,param_2 + 2);
  FUN_14256d6e0(param_1 + 5,param_2 + 5);
  param_1[0x10] = param_2[0x10];
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 9);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar7 = *(undefined4 *)(param_2 + 10);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar9 = *(undefined4 *)(param_2 + 0xb);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar11 = *(undefined4 *)(param_2 + 0xc);
  uVar12 = *(undefined4 *)((longlong)param_2 + 100);
  uVar13 = *(undefined4 *)(param_2 + 0xd);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar16 = *(undefined4 *)(param_2 + 0xf);
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar15;
  *(undefined4 *)(param_1 + 0xf) = uVar16;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar17;
  *(undefined4 *)(param_1 + 0xc) = uVar11;
  *(undefined4 *)((longlong)param_1 + 100) = uVar12;
  *(undefined4 *)(param_1 + 0xd) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar14;
  *(undefined4 *)(param_1 + 10) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0xb) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar10;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 9) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
  if (param_1 != param_2) {
    if (((*(int *)(param_1 + 0x11) == 2) || (*(int *)(param_1 + 0x11) == 1)) &&
       (puVar2 = (undefined8 *)param_1[0x12], puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    iVar1 = *(int *)(param_2 + 0x11);
    *(int *)(param_1 + 0x11) = iVar1;
    if (iVar1 - 1U < 2) {
      param_1[0x12] = param_2[0x12];
      param_2[0x12] = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x13] = param_2[0x13];
  FUN_14256d110(param_1 + 0x15,param_2 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc4);
  uVar4 = *(undefined4 *)(param_2 + 0x19);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar7 = *(undefined4 *)(param_2 + 0x1a);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar9 = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 0x19) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0x1a) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar8;
  *(undefined4 *)(param_1 + 0x1b) = uVar9;
  FUN_1424a3e60(param_1 + 0x1c,param_2 + 0x1c);
  FUN_1424a3d10(param_1 + 0x1c,param_3);
  return param_1;
}



// FUNCTION 1425696c0 Unwind@1425696c0 body=36 status=ok
// SIG undefined Unwind@1425696c0(void)

void Unwind_1425696c0(undefined8 param_1,longlong param_2)

{
  FUN_142569500(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425696f0 FUN_1425696f0 body=138 status=ok
// SIG undefined FUN_1425696f0(void)

void FUN_1425696f0(int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 == 2) {
    if (*(longlong *)(param_2 + 2) != 0) {
      lVar2 = thunk_FUN_1424da030(0x58);
      if (lVar2 != 0) {
        FUN_142540910(lVar2,*(undefined8 *)(param_2 + 2));
      }
      goto LAB_14256976e;
    }
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    if (*(longlong *)(param_2 + 2) != 0) {
      lVar2 = thunk_FUN_1424da030(0xb00);
      if (lVar2 != 0) {
        FUN_142543680(lVar2,*(undefined8 *)(param_2 + 2));
      }
      goto LAB_14256976e;
    }
  }
  lVar2 = 0;
LAB_14256976e:
  *(longlong *)(param_1 + 2) = lVar2;
  return;
}



// FUNCTION 142569780 Unwind@142569780 body=34 status=ok
// SIG undefined Unwind@142569780(void)

void Unwind_142569780(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425697b0 Unwind@1425697b0 body=34 status=ok
// SIG undefined Unwind@1425697b0(void)

void Unwind_1425697b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425697e0 FUN_1425697e0 body=36 status=ok
// SIG undefined FUN_1425697e0(void)

void FUN_1425697e0(int *param_1)

{
  undefined8 *puVar1;
  
  if (((*param_1 == 2) || (*param_1 == 1)) &&
     (puVar1 = *(undefined8 **)(param_1 + 2), puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142569800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 142569810 FUN_142569810 body=110 status=ok
// SIG undefined FUN_142569810(void)

void FUN_142569810(int *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (((*param_1 == 2) || (*param_1 == 1)) &&
     (puVar1 = *(undefined8 **)(param_1 + 2), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = 1;
  lVar2 = thunk_FUN_1424da030(0xb00);
  if (lVar2 != 0) {
    FUN_142543680(lVar2,param_2);
  }
  *(longlong *)(param_1 + 2) = lVar2;
  return;
}



// FUNCTION 142569880 Unwind@142569880 body=34 status=ok
// SIG undefined Unwind@142569880(void)

void Unwind_142569880(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425698b0 FUN_1425698b0 body=60 status=ok
// SIG undefined FUN_1425698b0(void)

void FUN_1425698b0(int *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (((*param_1 == 2) || (*param_1 == 1)) &&
     (puVar1 = *(undefined8 **)(param_1 + 2), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 1425698f0 FUN_1425698f0 body=7 status=ok
// SIG undefined FUN_1425698f0(void)

bool FUN_1425698f0(int *param_1)

{
  return *param_1 == 1;
}



// FUNCTION 142569900 FUN_142569900 body=7 status=ok
// SIG undefined FUN_142569900(void)

bool FUN_142569900(int *param_1)

{
  return *param_1 == 2;
}



// FUNCTION 142569910 FUN_142569910 body=5 status=ok
// SIG undefined FUN_142569910(void)

undefined8 FUN_142569910(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 142569920 FUN_142569920 body=5 status=ok
// SIG undefined FUN_142569920(void)

undefined8 FUN_142569920(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 142569930 FUN_142569930 body=218 status=ok
// SIG undefined FUN_142569930(void)

undefined8 * FUN_142569930(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*param_4 < 1) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0xe0);
    if (puVar2 == (undefined8 *)0x0) {
      *param_4 = 7;
      iVar1 = 7;
    }
    else {
      FUN_142573c40(puVar2,0);
      *puVar2 = icu_64::number::impl::UFormattedNumberData::vftable;
      FUN_142537d10(puVar2 + 0x13);
      FUN_142539210(puVar2 + 0x13,param_3);
      FUN_142569a70(param_1,puVar2,param_4);
      if (*param_4 < 1) {
        iVar1 = 0;
        goto LAB_142569959;
      }
      (**(code **)*puVar2)(puVar2,1);
      iVar1 = *param_4;
    }
  }
  else {
    iVar1 = 1;
  }
  puVar2 = (undefined8 *)0x0;
LAB_142569959:
  *param_2 = icu_64::number::FormattedNumber::vftable;
  param_2[1] = puVar2;
  *(int *)(param_2 + 2) = iVar1;
  return param_2;
}



// FUNCTION 142569a10 Unwind@142569a10 body=44 status=ok
// SIG undefined Unwind@142569a10(void)

void Unwind_142569a10(undefined8 param_1,longlong param_2)

{
  FUN_142573ca0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142569a40 Unwind@142569a40 body=44 status=ok
// SIG undefined Unwind@142569a40(void)

void Unwind_142569a40(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142569a70 FUN_142569a70 body=239 status=ok
// SIG undefined FUN_142569a70(void)

void FUN_142569a70(longlong param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x1d0);
  if (((-1 < iVar2) && (iVar2 <= *(int *)(param_1 + 0xd8))) && (0 < *(int *)(param_1 + 0xd8))) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x1d0);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar2 = iVar2 + 1;
  }
  if ((iVar2 == *(int *)(param_1 + 0xd8)) && (0 < *(int *)(param_1 + 0xd8))) {
    lVar3 = thunk_FUN_1424da030(0x218);
    if (lVar3 == 0) {
      *param_3 = 7;
LAB_142569b3b:
      FUN_142627980(param_1,param_2 + 0x98,param_2 + 8,param_3);
      iVar2 = *param_3;
      goto joined_r0x000142569b54;
    }
    FUN_1426276e0(lVar3,param_1,param_3);
    *(longlong *)(param_1 + 0x1c8) = lVar3;
    *(undefined4 *)(param_1 + 0x1d0) = 0x80000000;
  }
  else if (-1 < iVar2) goto LAB_142569b3b;
  FUN_142627e40(*(undefined8 *)(param_1 + 0x1c8),param_2 + 0x98,param_2 + 8,param_3);
  iVar2 = *param_3;
joined_r0x000142569b54:
  if (iVar2 < 1) {
    FUN_142609ef0(param_2 + 8,param_3);
    return;
  }
  return;
}



// FUNCTION 142569b60 Unwind@142569b60 body=36 status=ok
// SIG undefined Unwind@142569b60(void)

void Unwind_142569b60(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142569b90 FUN_142569b90 body=222 status=ok
// SIG undefined FUN_142569b90(void)

undefined8 * FUN_142569b90(undefined8 param_1,undefined8 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*param_4 < 1) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0xe0);
    if (puVar2 == (undefined8 *)0x0) {
      *param_4 = 7;
      iVar1 = 7;
    }
    else {
      FUN_142573c40(puVar2,0);
      *puVar2 = icu_64::number::impl::UFormattedNumberData::vftable;
      FUN_142537d10(puVar2 + 0x13);
      FUN_142539590(puVar2 + 0x13,param_3);
      FUN_142569a70(param_1,puVar2,param_4);
      if (*param_4 < 1) {
        iVar1 = 0;
        goto LAB_142569bbb;
      }
      (**(code **)*puVar2)(puVar2,1);
      iVar1 = *param_4;
    }
  }
  else {
    iVar1 = 1;
  }
  puVar2 = (undefined8 *)0x0;
LAB_142569bbb:
  *param_2 = icu_64::number::FormattedNumber::vftable;
  param_2[1] = puVar2;
  *(int *)(param_2 + 2) = iVar1;
  return param_2;
}



// FUNCTION 142569c70 Unwind@142569c70 body=49 status=ok
// SIG undefined Unwind@142569c70(void)

void Unwind_142569c70(undefined8 param_1,longlong param_2)

{
  FUN_142573ca0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142569cb0 Unwind@142569cb0 body=49 status=ok
// SIG undefined Unwind@142569cb0(void)

void Unwind_142569cb0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142569cf0 FUN_142569cf0 body=230 status=ok
// SIG undefined FUN_142569cf0(void)

undefined8 * FUN_142569cf0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    local_40 = (undefined8 *)thunk_FUN_1424da030(0xe0);
    if (local_40 == (undefined8 *)0x0) {
      *param_4 = 7;
      iVar1 = 7;
    }
    else {
      FUN_142573c40(local_40,0);
      *local_40 = icu_64::number::impl::UFormattedNumberData::vftable;
      puVar2 = local_40 + 0x13;
      FUN_142537d10(puVar2);
      local_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      FUN_142539ce0(puVar2,&local_58,param_4);
      puVar2 = local_40;
      FUN_142569a70(param_1,local_40,param_4);
      if (*param_4 < 1) {
        iVar1 = 0;
        goto LAB_142569d19;
      }
      (**(code **)*puVar2)(puVar2,1);
      iVar1 = *param_4;
    }
  }
  else {
    iVar1 = 1;
  }
  puVar2 = (undefined8 *)0x0;
LAB_142569d19:
  *param_2 = icu_64::number::FormattedNumber::vftable;
  param_2[1] = puVar2;
  *(int *)(param_2 + 2) = iVar1;
  return param_2;
}



// FUNCTION 142569de0 Unwind@142569de0 body=44 status=ok
// SIG undefined Unwind@142569de0(void)

void Unwind_142569de0(undefined8 param_1,longlong param_2)

{
  FUN_142573ca0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 142569e10 Unwind@142569e10 body=44 status=ok
// SIG undefined Unwind@142569e10(void)

void Unwind_142569e10(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 142569e40 FUN_142569e40 body=218 status=ok
// SIG undefined FUN_142569e40(void)

undefined8 * FUN_142569e40(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*param_4 < 1) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0xe0);
    if (puVar2 == (undefined8 *)0x0) {
      *param_4 = 7;
      iVar1 = 7;
    }
    else {
      FUN_142573c40(puVar2,0);
      *puVar2 = icu_64::number::impl::UFormattedNumberData::vftable;
      FUN_142537d10(puVar2 + 0x13);
      FUN_142537dc0(puVar2 + 0x13,param_3);
      FUN_142569a70(param_1,puVar2,param_4);
      if (*param_4 < 1) {
        iVar1 = 0;
        goto LAB_142569e69;
      }
      (**(code **)*puVar2)(puVar2,1);
      iVar1 = *param_4;
    }
  }
  else {
    iVar1 = 1;
  }
  puVar2 = (undefined8 *)0x0;
LAB_142569e69:
  *param_2 = icu_64::number::FormattedNumber::vftable;
  param_2[1] = puVar2;
  *(int *)(param_2 + 2) = iVar1;
  return param_2;
}



// FUNCTION 142569f20 Unwind@142569f20 body=44 status=ok
// SIG undefined Unwind@142569f20(void)

void Unwind_142569f20(undefined8 param_1,longlong param_2)

{
  FUN_142573ca0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142569f50 Unwind@142569f50 body=44 status=ok
// SIG undefined Unwind@142569f50(void)

void Unwind_142569f50(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142569f80 FUN_142569f80 body=489 status=ok
// SIG undefined FUN_142569f80(void)

void FUN_142569f80(longlong param_1,char param_2,ulonglong param_3,longlong param_4,
                  undefined4 *param_5)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_148 [136];
  undefined1 local_c0 [64];
  undefined1 local_80 [8];
  short local_78;
  int local_74;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_142609430(local_148);
  iVar3 = *(int *)(param_1 + 0x1d0);
  if (((-1 < iVar3) && (iVar3 <= *(int *)(param_1 + 0xd8))) && (0 < *(int *)(param_1 + 0xd8))) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x1d0);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar3 = iVar3 + 1;
  }
  uVar6 = CONCAT71((int7)((param_3 & 0xffffffff) >> 8),-(char)(param_3 & 0xffffffff)) | 1;
  if ((iVar3 == *(int *)(param_1 + 0xd8)) && (0 < *(int *)(param_1 + 0xd8))) {
    lVar5 = thunk_FUN_1424da030(0x218);
    if (lVar5 == 0) {
      *param_5 = 7;
LAB_14256a066:
      iVar3 = FUN_142627d50(param_1,uVar6,5,local_148,param_5);
      goto LAB_14256a07f;
    }
    local_40 = lVar5;
    FUN_1426276e0(lVar5,param_1,param_5);
    *(longlong *)(param_1 + 0x1c8) = local_40;
    *(undefined4 *)(param_1 + 0x1d0) = 0x80000000;
  }
  else if (-1 < iVar3) goto LAB_14256a066;
  iVar3 = FUN_142628100(*(undefined8 *)(param_1 + 0x1c8),uVar6,5,local_148,param_5);
LAB_14256a07f:
  uVar2 = 2;
  if ((*(ushort *)(param_4 + 8) & 1) == 0) {
    uVar2 = *(ushort *)(param_4 + 8) & 0x1f;
  }
  *(ushort *)(param_4 + 8) = uVar2;
  if (param_2 == '\0') {
    FUN_14260a2b0(local_148,local_c0);
    iVar4 = FUN_142609640(local_148);
    FUN_1424a84d0(local_c0,local_80,iVar3,iVar4 - iVar3);
    if (-1 < local_78) {
      local_74 = (int)local_78 >> 5;
    }
    FUN_1424a9690(param_4,local_80,0,local_74);
  }
  else {
    FUN_14260a2b0(local_148,local_c0);
    FUN_1424a84d0(local_c0,local_80,0,iVar3);
    if (-1 < local_78) {
      local_74 = (int)local_78 >> 5;
    }
    FUN_1424a9690(param_4,local_80,0,local_74);
  }
  FUN_140859a90(local_80);
  FUN_140859a90(local_c0);
  FUN_142609450(local_148);
  return;
}



// FUNCTION 14256a170 Unwind@14256a170 body=47 status=ok
// SIG undefined Unwind@14256a170(void)

void Unwind_14256a170(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf8);
  return;
}



// FUNCTION 14256a1a0 Unwind@14256a1a0 body=47 status=ok
// SIG undefined Unwind@14256a1a0(void)

void Unwind_14256a1a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 14256a1d0 Unwind@14256a1d0 body=47 status=ok
// SIG undefined Unwind@14256a1d0(void)

void Unwind_14256a1d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf8);
  return;
}



// FUNCTION 14256a200 Unwind@14256a200 body=47 status=ok
// SIG undefined Unwind@14256a200(void)

void Unwind_14256a200(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 14256a230 Unwind@14256a230 body=47 status=ok
// SIG undefined Unwind@14256a230(void)

void Unwind_14256a230(undefined8 param_1,longlong param_2)

{
  FUN_142609450(param_2 + 0x30);
  return;
}



// FUNCTION 14256a260 Unwind@14256a260 body=50 status=ok
// SIG undefined Unwind@14256a260(void)

void Unwind_14256a260(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x138));
  return;
}



// FUNCTION 14256a2a0 FUN_14256a2a0 body=97 status=ok
// SIG undefined FUN_14256a2a0(void)

longlong FUN_14256a2a0(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    lVar1 = thunk_FUN_1424da030(0x400);
    if (lVar1 != 0) {
      FUN_14262acc0(lVar1,param_1,param_1 + 0xe0,param_4,lVar1,uVar2);
      return lVar1;
    }
    if (*param_2 < 1) {
      *param_2 = 7;
    }
  }
  return 0;
}



// FUNCTION 14256a310 Unwind@14256a310 body=34 status=ok
// SIG undefined Unwind@14256a310(void)

void Unwind_14256a310(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14256a340 FUN_14256a340 body=318 status=ok
// SIG undefined FUN_14256a340(void)

undefined8 * FUN_14256a340(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  FUN_142568fb0(param_2,param_1);
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  FUN_14256d6e0(param_2 + 2,param_3 + 2);
  FUN_14256d6e0(param_2 + 5,param_3 + 5);
  param_2[0x10] = param_3[0x10];
  uVar3 = *(undefined4 *)(param_3 + 8);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar5 = *(undefined4 *)(param_3 + 9);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x4c);
  uVar7 = *(undefined4 *)(param_3 + 10);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar9 = *(undefined4 *)(param_3 + 0xb);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x5c);
  uVar11 = *(undefined4 *)(param_3 + 0xc);
  uVar12 = *(undefined4 *)((longlong)param_3 + 100);
  uVar13 = *(undefined4 *)(param_3 + 0xd);
  uVar14 = *(undefined4 *)((longlong)param_3 + 0x6c);
  uVar15 = *(undefined4 *)((longlong)param_3 + 0x74);
  uVar16 = *(undefined4 *)(param_3 + 0xf);
  uVar17 = *(undefined4 *)((longlong)param_3 + 0x7c);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_3 + 0xe);
  *(undefined4 *)((longlong)param_2 + 0x74) = uVar15;
  *(undefined4 *)(param_2 + 0xf) = uVar16;
  *(undefined4 *)((longlong)param_2 + 0x7c) = uVar17;
  *(undefined4 *)(param_2 + 0xc) = uVar11;
  *(undefined4 *)((longlong)param_2 + 100) = uVar12;
  *(undefined4 *)(param_2 + 0xd) = uVar13;
  *(undefined4 *)((longlong)param_2 + 0x6c) = uVar14;
  *(undefined4 *)(param_2 + 10) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x54) = uVar8;
  *(undefined4 *)(param_2 + 0xb) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uVar10;
  *(undefined4 *)(param_2 + 8) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar4;
  *(undefined4 *)(param_2 + 9) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar6;
  if (param_2 != param_3) {
    iVar1 = *(int *)(param_2 + 0x11);
    if (((iVar1 == 2) || (iVar1 == 1)) &&
       (puVar2 = (undefined8 *)param_2[0x12], puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    FUN_1425696f0(param_2 + 0x11,param_3 + 0x11);
  }
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
  param_2[0x13] = param_3[0x13];
  FUN_14256d040(param_2 + 0x15,param_3 + 0x15);
  uVar3 = *(undefined4 *)(param_3 + 0x18);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc4);
  uVar5 = *(undefined4 *)(param_3 + 0x19);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0xcc);
  uVar7 = *(undefined4 *)(param_3 + 0x1a);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0xd4);
  uVar9 = *(undefined4 *)(param_3 + 0x1b);
  *(undefined4 *)((longlong)param_2 + 0xcc) = *(undefined4 *)((longlong)param_3 + 0xcc);
  *(undefined4 *)(param_2 + 0x1a) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xd4) = uVar8;
  *(undefined4 *)(param_2 + 0x1b) = uVar9;
  *(undefined4 *)(param_2 + 0x18) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc4) = uVar4;
  *(undefined4 *)(param_2 + 0x19) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xcc) = uVar6;
  FUN_1424a3d10(param_2 + 0x1c,param_3 + 0x1c);
  return param_2;
}



// FUNCTION 14256a480 Unwind@14256a480 body=36 status=ok
// SIG undefined Unwind@14256a480(void)

void Unwind_14256a480(undefined8 param_1,longlong param_2)

{
  FUN_1424ca310(*(undefined8 *)(param_2 + 0x28));
  return;
}


